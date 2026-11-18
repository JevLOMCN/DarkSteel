// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 115

// StaticClass @ 14e1180b0

UClass * __cdecl UOptimusDeformer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDeformer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDeformer",
               &Z_Registration_Info_UClass_UOptimusDeformer.InnerSingleton,
               StaticRegisterNativesUOptimusDeformer,0x200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusDeformer>,
               InternalVTableHelperCtorCaller<UOptimusDeformer>,local_res8,
               UMeshDeformer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDeformer.InnerSingleton;
}

// <lambda_1> @ 14e14bb00

<lambda_1> * __thiscall
`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l2::<lambda_1>::<lambda_1>
          (void *this,
          TFunction<void___cdecl(EOptimusDiagnosticLevel,FText,UObject_const_*)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)param_1;
  *(longlong *)this = lVar1;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,(longlong)this + 0x10);
  }
  return this;
}

// <lambda_2> @ 14e14be70

<lambda_2> * __thiscall
`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l195::<lambda_2>::<lambda_2>
          (void *this,
          TMap<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>_>
          *param_1,TMap<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_>
                   *param_2,
          TMap<FOptimusInstancedPin,FOptimusInstancedPin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>_>
          *param_3,FOptimusInstancedPin *param_4,FOptimusPinTraversalContext *param_5)

{
  *(TMap<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>_>
    **)this = param_1;
  *(TMap<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_>
    **)((longlong)this + 8) = param_2;
  *(TMap<FOptimusInstancedPin,FOptimusInstancedPin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>_>
    **)((longlong)this + 0x10) = param_3;
  *(UOptimusNode **)((longlong)this + 0x18) = (param_4->InstancedNode).RoutedNode.Node;
  FOptimusPinTraversalContext::FOptimusPinTraversalContext
            ((FOptimusPinTraversalContext *)((longlong)this + 0x20),
             &(param_4->InstancedNode).RoutedNode.TraversalContext);
  *(int *)((longlong)this + 0x50) = (param_4->InstancedNode).LoopIndex;
  *(UOptimusNodePin **)((longlong)this + 0x58) = param_4->Pin;
  *(FOptimusPinTraversalContext **)((longlong)this + 0x60) = param_5;
  return this;
}

// UOptimusDeformer @ 14e159090

UOptimusDeformer * __thiscall
UOptimusDeformer::UOptimusDeformer(UOptimusDeformer *this,FVTableHelper *param_1)

{
  UMeshDeformer::UMeshDeformer((UMeshDeformer *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMeshDeformer__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusPathResolver__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeGraphCollectionOwner__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeFunctionLibraryOwner__;
  this->_padding_ = (longlong)&_vftable__for__ISkeletalMeshHalfEdgeBufferAccessor__;
  (this->Mesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  (this->ComputeGraphs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComputeGraphs).ArrayNum = 0;
  (this->ComputeGraphs).ArrayMax = 0;
  *(undefined8 *)&this->DataInterfacePropertyOverrideMap = 0;
  *(undefined8 *)&(this->DataInterfacePropertyOverrideMap).field_0x8 = 0;
  *(undefined8 *)&(this->DataInterfacePropertyOverrideMap).field_0x20 = 0;
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x28 = 0;
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x34 = 0;
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DataInterfacePropertyOverrideMap).field_0x40 = 0;
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x48 = 0;
  *(undefined8 *)&this->ValueMap = 0;
  *(undefined8 *)&(this->ValueMap).field_0x8 = 0;
  *(undefined8 *)&(this->ValueMap).field_0x20 = 0;
  *(undefined4 *)&(this->ValueMap).field_0x28 = 0;
  *(undefined4 *)&(this->ValueMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ValueMap).field_0x34 = 0;
  *(undefined4 *)&(this->ValueMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ValueMap).field_0x40 = 0;
  *(undefined4 *)&(this->ValueMap).field_0x48 = 0;
  (this->ActionStack).field0_0x0.DebugPtr = (UOptimusActionStack *)0x0;
  (this->Graphs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Graphs).ArrayNum = 0;
  (this->Graphs).ArrayMax = 0;
  (this->Bindings).field0_0x0.DebugPtr = (UOptimusComponentSourceBindingContainer *)0x0;
  (this->Variables).field0_0x0.DebugPtr = (UOptimusVariableContainer *)0x0;
  (this->Resources).field0_0x0.DebugPtr = (UOptimusResourceContainer *)0x0;
  *(undefined8 *)&this->GlobalNotifyDelegate = 0;
  *(undefined8 *)&(this->GlobalNotifyDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->GlobalNotifyDelegate).field_0x10 = 0;
  *(undefined8 *)&this->CompileBeginDelegate = 0;
  *(undefined8 *)&(this->CompileBeginDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->CompileBeginDelegate).field_0x10 = 0;
  *(undefined8 *)&this->CompileEndDelegate = 0;
  *(undefined8 *)&(this->CompileEndDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->CompileEndDelegate).field_0x10 = 0;
  *(undefined8 *)&this->CompileMessageDelegate = 0;
  *(undefined8 *)&(this->CompileMessageDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->CompileMessageDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ConstantValueUpdateDelegate = 0;
  *(undefined8 *)&(this->ConstantValueUpdateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ConstantValueUpdateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->SetAllInstancesCanbeActiveDelegate = 0;
  *(undefined8 *)&(this->SetAllInstancesCanbeActiveDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SetAllInstancesCanbeActiveDelegate).field_0x10 = 0;
  this->Status = Modified;
  *(undefined8 *)&(this->GlobalNotifyDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->CompileBeginDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->CompileEndDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->CompileMessageDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->ConstantValueUpdateDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->SetAllInstancesCanbeActiveDelegate).field_0x18 = 2;
  return this;
}

// UOptimusDeformer @ 14e159270

UOptimusDeformer * __thiscall UOptimusDeformer::UOptimusDeformer(UOptimusDeformer *this)

{
  TArray<TObjectPtr<UOptimusNodeGraph>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FObjectInitializer *pFVar7;
  UClass *pUVar8;
  UOptimusDeformer *pUVar9;
  FName *pFVar10;
  UOptimusComponentSourceBindingContainer *pUVar11;
  UOptimusVariableContainer *pUVar12;
  UOptimusResourceContainer *pUVar13;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  UObject *local_28 [2];
  
  pFVar7 = FObjectInitializer::Get();
  UMeshDeformer::UMeshDeformer((UMeshDeformer *)this,pFVar7);
  this->_padding_ = (longlong)&_vftable__for__UMeshDeformer__;
  pTVar1 = &this->Graphs;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusPathResolver__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeGraphCollectionOwner__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeFunctionLibraryOwner__;
  this->_padding_ = (longlong)&_vftable__for__ISkeletalMeshHalfEdgeBufferAccessor__;
  (this->Mesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  (this->ComputeGraphs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComputeGraphs).ArrayNum = 0;
  (this->ComputeGraphs).ArrayMax = 0;
  *(undefined8 *)&this->DataInterfacePropertyOverrideMap = 0;
  *(undefined8 *)&(this->DataInterfacePropertyOverrideMap).field_0x8 = 0;
  *(undefined8 *)&(this->DataInterfacePropertyOverrideMap).field_0x20 = 0;
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x28 = 0;
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x34 = 0;
  *(undefined8 *)&(this->DataInterfacePropertyOverrideMap).field_0x40 = 0;
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x48 = 0;
  *(undefined8 *)&this->ValueMap = 0;
  *(undefined8 *)&(this->ValueMap).field_0x8 = 0;
  *(undefined8 *)&(this->ValueMap).field_0x20 = 0;
  *(undefined4 *)&(this->ValueMap).field_0x28 = 0;
  *(undefined4 *)&(this->ValueMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ValueMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ValueMap).field_0x34 = 0;
  *(undefined8 *)&(this->ValueMap).field_0x40 = 0;
  *(undefined4 *)&(this->ValueMap).field_0x48 = 0;
  (this->ActionStack).field0_0x0.DebugPtr = (UOptimusActionStack *)0x0;
  this->Status = Modified;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Graphs).ArrayNum = 0;
  (this->Graphs).ArrayMax = 0;
  (this->Bindings).field0_0x0.DebugPtr = (UOptimusComponentSourceBindingContainer *)0x0;
  (this->Variables).field0_0x0.DebugPtr = (UOptimusVariableContainer *)0x0;
  (this->Resources).field0_0x0.DebugPtr = (UOptimusResourceContainer *)0x0;
  *(undefined8 *)&this->GlobalNotifyDelegate = 0;
  *(undefined8 *)&(this->GlobalNotifyDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->GlobalNotifyDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->GlobalNotifyDelegate).field_0x18 = 2;
  *(undefined8 *)&this->CompileBeginDelegate = 0;
  *(undefined8 *)&(this->CompileBeginDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->CompileBeginDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->CompileBeginDelegate).field_0x18 = 2;
  *(undefined8 *)&this->CompileEndDelegate = 0;
  *(undefined8 *)&(this->CompileEndDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->CompileEndDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->CompileEndDelegate).field_0x18 = 2;
  *(undefined8 *)&this->CompileMessageDelegate = 0;
  *(undefined8 *)&(this->CompileMessageDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->CompileMessageDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->CompileMessageDelegate).field_0x18 = 2;
  *(undefined8 *)&this->ConstantValueUpdateDelegate = 0;
  *(undefined8 *)&(this->ConstantValueUpdateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ConstantValueUpdateDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ConstantValueUpdateDelegate).field_0x18 = 2;
  *(undefined8 *)&this->SetAllInstancesCanbeActiveDelegate = 0;
  *(undefined8 *)&(this->SetAllInstancesCanbeActiveDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SetAllInstancesCanbeActiveDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->SetAllInstancesCanbeActiveDelegate).field_0x18 = 2;
  FVar3 = UOptimusNodeGraph::UpdateGraphName;
  pUVar8 = UOptimusNodeGraph::StaticClass();
  local_28[0] = UObject::CreateDefaultSubobject((UObject *)this,FVar3,pUVar8,pUVar8,true,false);
  *(undefined4 *)&local_28[0][1].field_0x8 = 1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(local_28[0]);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Graphs).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UOptimusDeformer *)(*pcVar4)();
      return pUVar9;
    }
  }
  iVar6 = (this->Graphs).ArrayNum;
  if (iVar6 == (this->Graphs).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->Graphs).ArrayMax);
  }
  (this->Graphs).ArrayNum = iVar6 + 1;
  *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_28[0]);
  }
  pFVar10 = ::FName::FName(&local_res8,L"@Bindings");
  FVar3 = *pFVar10;
  pUVar8 = UOptimusComponentSourceBindingContainer::StaticClass();
  pUVar11 = (UOptimusComponentSourceBindingContainer *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar3,pUVar8,pUVar8,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (UOptimusComponentSourceBindingContainer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->Bindings).field0_0x0.DebugPtr = pUVar11;
  pFVar10 = ::FName::FName(&local_res10,L"@Variables");
  FVar3 = *pFVar10;
  pUVar8 = UOptimusVariableContainer::StaticClass();
  pUVar12 = (UOptimusVariableContainer *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar3,pUVar8,pUVar8,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar12 != (UOptimusVariableContainer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  (this->Variables).field0_0x0.DebugPtr = pUVar12;
  pFVar10 = ::FName::FName(&local_res18,L"@Resources");
  FVar3 = *pFVar10;
  pUVar8 = UOptimusResourceContainer::StaticClass();
  pUVar13 = (UOptimusResourceContainer *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar3,pUVar8,pUVar8,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (UOptimusResourceContainer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->Resources).field0_0x0.DebugPtr = pUVar13;
  return this;
}

// ~<lambda_1> @ 14e15dbe0

void __thiscall
`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x00014e15dbf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_2> @ 14e15dc60

void __thiscall
`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l195::<lambda_2>::~<lambda_2>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)((longlong)this + 0x40);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~UOptimusDeformer @ 14e1626a0

void __thiscall UOptimusDeformer::~UOptimusDeformer(UOptimusDeformer *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UMeshDeformer__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusPathResolver__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeGraphCollectionOwner__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeFunctionLibraryOwner__;
  this->_padding_ = (longlong)&_vftable__for__ISkeletalMeshHalfEdgeBufferAccessor__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->SetAllInstancesCanbeActiveDelegate).field_0x8,
             *(int *)&(this->SetAllInstancesCanbeActiveDelegate).field_0x10);
  pvVar1 = *(void **)&(this->SetAllInstancesCanbeActiveDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SetAllInstancesCanbeActiveDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ConstantValueUpdateDelegate).field_0x8,
             *(int *)&(this->ConstantValueUpdateDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ConstantValueUpdateDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ConstantValueUpdateDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->CompileMessageDelegate).field_0x8,
             *(int *)&(this->CompileMessageDelegate).field_0x10);
  pvVar1 = *(void **)&(this->CompileMessageDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CompileMessageDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->CompileEndDelegate).field_0x8,*(int *)&(this->CompileEndDelegate).field_0x10);
  pvVar1 = *(void **)&(this->CompileEndDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CompileEndDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->CompileBeginDelegate).field_0x8,
             *(int *)&(this->CompileBeginDelegate).field_0x10);
  pvVar1 = *(void **)&(this->CompileBeginDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CompileBeginDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->GlobalNotifyDelegate).field_0x8,
             *(int *)&(this->GlobalNotifyDelegate).field_0x10);
  pvVar1 = *(void **)&(this->GlobalNotifyDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->GlobalNotifyDelegate);
  pFVar2 = (this->Graphs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ValueMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ValueMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ValueMap);
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DataInterfacePropertyOverrideMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DataInterfacePropertyOverrideMap);
  pFVar2 = (this->ComputeGraphs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7ISkeletalMeshHalfEdgeBufferAccessor__6B_;
  this->_padding_ = (longlong)&___7IOptimusNodeFunctionLibraryOwner__6B_;
  this->_padding_ = (longlong)&___7IOptimusNodeGraphCollectionOwner__6B_;
  this->_padding_ = (longlong)&___7IOptimusPathResolver__6B_;
  this->_padding_ = (longlong)&___7IInterface_PreviewMeshProvider__6B_;
  UMeshDeformer::~UMeshDeformer((UMeshDeformer *)this);
  return;
}

// operator() @ 14e166f70

void __thiscall `UOptimusDeformer::Compile'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)this;
  iVar2 = *(int *)(lVar3 + 0x60);
  lVar4 = *(longlong *)(lVar3 + 0x58);
  lVar1 = lVar4 + (longlong)iVar2 * 0x18;
  while( true ) {
    if (*(int *)(lVar3 + 0x60) != iVar2) {
      `TCheckedPointerIterator<FOptimusComputeGraphInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar4 == lVar1) break;
    Optimus::RemoveObject(*(UObject **)(lVar4 + 0x10));
    lVar4 = lVar4 + 0x18;
  }
  lVar1 = *(longlong *)this;
  *(undefined4 *)(lVar1 + 0x60) = 0;
  if (*(int *)(lVar1 + 100) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)(lVar1 + 0x58),0,(int *)(lVar1 + 100));
  }
  TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
           *)(*(longlong *)this + 0x68));
  TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
           *)(*(longlong *)this + 0xb8));
  return;
}

// operator() @ 14e167030

void __thiscall
`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l2::<lambda_1>::operator()
          (void *this,EOptimusDiagnosticLevel param_1,FText *param_2,UOptimusNode *param_3)

{
  code *pcVar1;
  ITextData *pIVar2;
  undefined8 uVar3;
  longlong *plVar4;
  UOptimusNode *local_res8;
  EOptimusDiagnosticLevel local_res10 [8];
  ITextData *local_28;
  uint local_20;
  
  if ((param_3 != (UOptimusNode *)0x0) && (param_3->DiagnosticLevel < param_1)) {
    param_3->DiagnosticLevel = param_1;
    UOptimusNode::Notify(param_3,NodeDiagnosticLevelChanged);
  }
  local_28 = (param_2->TextData).Reference;
  if (local_28 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28 + 8))(local_28,local_res10);
  }
  local_20 = param_2->Flags;
  local_res8 = param_3;
  local_res10[0] = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  pcVar1 = *(code **)this;
  plVar4 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x28);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,local_res10,&local_28,&local_res8);
  if (local_28 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28 + 0x10))();
  }
  pIVar2 = (param_2->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return;
}

// operator() @ 14e169250

void __thiscall
`UOptimusDeformer::Compile'::__l2::<lambda_2>::operator()
          (void *this,EOptimusDiagnosticLevel param_1,FText *param_2,UObject *param_3)

{
  ITextData *pIVar1;
  longlong lVar2;
  TRefCountPtr<ITextData> TVar3;
  UObject *local_res8;
  undefined1 local_res10 [8];
  FOptimusCompilerDiagnostic local_58;
  
  local_58.Level = None;
  FText::FText(&local_58.Message);
  TVar3.Reference = local_58.Message.TextData.Reference;
  pIVar1 = (param_2->TextData).Reference;
  local_58.Line = -1;
  local_58.ColumnStart = -1;
  local_58.ColumnEnd = -1;
  local_58.AbsoluteFilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.AbsoluteFilePath.Data.ArrayNum = 0;
  local_58.AbsoluteFilePath.Data.ArrayMax = 0;
  local_58.Object.WeakPtr.ObjectIndex = 0;
  local_58.Object.WeakPtr.ObjectSerialNumber = 0;
  local_58.Level = param_1;
  if (local_58.Message.TextData.Reference != pIVar1) {
    local_58.Message.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
    }
  }
  local_58.Message.Flags = param_2->Flags;
  local_res8 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  FWeakObjectPtr::operator=(&local_58.Object.WeakPtr,(FObjectPtr)&local_res8);
  TMulticastDelegate<void___cdecl(FOptimusCompilerDiagnostic_const_&),FDefaultDelegateUserPolicy>::
  Broadcast((TMulticastDelegate<void___cdecl(FOptimusCompilerDiagnostic_const_&),FDefaultDelegateUserPolicy>
             *)(*(longlong *)this + 0x1a0),&local_58);
  lVar2 = *(longlong *)this;
  if (param_1 == Error) {
    *(undefined4 *)(lVar2 + 0x110) = 3;
  }
  else if ((param_1 == Warning) && (*(int *)(lVar2 + 0x110) == 0)) {
    *(undefined4 *)(lVar2 + 0x110) = 1;
  }
  if (local_58.AbsoluteFilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AbsoluteFilePath.Data.AllocatorInstance.Data);
  }
  if (local_58.Message.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.Message.TextData.Reference + 0x10))();
  }
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// operator() @ 14e16b080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l195::<lambda_2>::operator()
          (void *this,UOptimusNodePin *param_1,EAddType param_2)

{
  void *pvVar1;
  TSet<TTuple<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>,FDefaultSetAllocator>
  *this_00;
  TSet<TTuple<FOptimusInstancedPin,FOptimusInstancedPin>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>,FDefaultSetAllocator>
  *pTVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<IOptimusNodePinRouter_const_*> _Dst;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  void *_Src;
  undefined8 *puVar11;
  undefined1 auStackY_138 [32];
  TKeyInitializer<FOptimusInstancedPin_const_&> local_f8;
  longlong local_f0;
  UOptimusNode *local_e8;
  FOptimusPinTraversalContext local_e0;
  int local_b0;
  undefined8 local_a8;
  FOptimusRoutedConstNodePin local_a0;
  FOptimusRoutedConstNode local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pvVar1 = *(void **)((longlong)this + 0x60);
  puVar10 = (undefined8 *)0x0;
  this_00 = *(TSet<TTuple<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>,FDefaultSetAllocator>
              **)this;
  local_a0.TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData =
       (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
  local_a0.TraversalContext.ReferenceNesting.ArrayNum = *(int *)((longlong)pvVar1 + 0x28);
  lVar9 = (longlong)local_a0.TraversalContext.ReferenceNesting.ArrayNum;
  _Src = *(void **)((longlong)pvVar1 + 0x20);
  if (*(void **)((longlong)pvVar1 + 0x20) == (void *)0x0) {
    _Src = pvVar1;
  }
  local_a0.NodePin = param_1;
  if (local_a0.TraversalContext.ReferenceNesting.ArrayNum == 0) {
    local_a0.TraversalContext.ReferenceNesting.ArrayMax = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<IOptimusNodePinRouter_const_*>_>
              (8,8,local_a0.TraversalContext.ReferenceNesting.ArrayNum,0,
               (ForElementType<IOptimusNodePinRouter_const_*> *)&local_a0.TraversalContext,
               local_a0.TraversalContext.ReferenceNesting.ArrayNum,
               &local_a0.TraversalContext.ReferenceNesting.ArrayMax);
    _Dst = (ForElementType<IOptimusNodePinRouter_const_*>)&local_a0.TraversalContext;
    if (local_a0.TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData !=
        (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      _Dst = local_a0.TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)_Dst,_Src,lVar9 << 3);
  }
  uVar6 = ((uint)((ulonglong)local_a0.NodePin >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_a0.NodePin >> 4)) * -0x7a143595;
  uVar7 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  uVar6 = ::GetTypeHash(&local_a0.TraversalContext);
  iVar3 = TSet<TTuple<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOptimusRoutedConstNodePin>
                    (this_00,uVar7 * 0x40 + (uVar7 >> 2) + uVar6 + 0x9e3779b9 ^ uVar7,&local_a0);
  puVar8 = puVar10;
  if (iVar3 != -1) {
    puVar8 = (undefined8 *)((longlong)iVar3 * 0x78 + *(longlong *)&this_00->Elements);
  }
  puVar11 = puVar8 + 7;
  if (puVar8 == (undefined8 *)0x0) {
    puVar11 = puVar10;
  }
  if (local_a0.TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData !=
      (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    FMemory::Free((void *)local_a0.TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData
                 );
  }
  if (puVar11 != (undefined8 *)0x0) {
    local_68.Node = UOptimusNodePin::GetOwningNode((UOptimusNodePin *)*puVar11);
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              (&local_68.TraversalContext,(FOptimusPinTraversalContext *)(puVar11 + 1));
    piVar5 = TMapBase<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_>
             ::FindChecked(*(TMapBase<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_>
                             **)((longlong)this + 8),&local_68);
    if (param_2 == AllButLastInstance) {
      if (0 < *piVar5) {
        do {
          local_e8 = local_68.Node;
          FOptimusPinTraversalContext::FOptimusPinTraversalContext
                    (&local_e0,&local_68.TraversalContext);
          pTVar2 = *(TSet<TTuple<FOptimusInstancedPin,FOptimusInstancedPin>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>,FDefaultSetAllocator>
                     **)((longlong)this + 0x10);
          local_a8 = *puVar11;
          local_f0 = (longlong)this + 0x18;
          local_b0 = (int)puVar10;
          TSet<TTuple<FOptimusInstancedPin,FOptimusInstancedPin>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<FOptimusInstancedPin_const_&>_>
                    (pTVar2,&local_f8,(bool *)&local_f0);
          lVar9 = *(longlong *)&pTVar2->Elements + (longlong)(int)local_f8.Key * 0x98;
          *(UOptimusNode **)(lVar9 + 0x48) = local_e8;
          FOptimusPinTraversalContext::operator=
                    ((FOptimusPinTraversalContext *)(lVar9 + 0x50),&local_e0);
          *(int *)(lVar9 + 0x80) = local_b0;
          *(undefined8 *)(lVar9 + 0x88) = local_a8;
          if (local_e0.ReferenceNesting.AllocatorInstance.SecondaryData !=
              (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
            FMemory::Free((void *)local_e0.ReferenceNesting.AllocatorInstance.SecondaryData);
          }
          uVar6 = (int)puVar10 + 1;
          puVar10 = (undefined8 *)(ulonglong)uVar6;
          piVar5 = TMapBase<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_>
                   ::FindChecked(*(TMapBase<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_>
                                   **)((longlong)this + 8),&local_68);
        } while ((int)uVar6 < *piVar5);
      }
    }
    else {
      if (param_2 == LastInstance) {
        piVar5 = TMapBase<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_>
                 ::FindChecked(*(TMapBase<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_>
                                 **)((longlong)this + 8),&local_68);
        local_b0 = *piVar5;
      }
      else {
        local_b0 = *piVar5;
        if (param_2 == PreviousInstance) {
          piVar5 = TMapBase<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_>
                   ::FindChecked(*(TMapBase<FOptimusRoutedConstNode,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>_>
                                   **)((longlong)this + 8),&local_68);
          iVar4 = *(int *)((longlong)this + 0x50) + -1;
          iVar3 = *piVar5;
          if (iVar4 < *piVar5) {
            iVar3 = iVar4;
          }
          local_b0 = 0;
          if (0 < iVar3) {
            local_b0 = iVar3;
          }
        }
      }
      local_e8 = local_68.Node;
      FOptimusPinTraversalContext::FOptimusPinTraversalContext(&local_e0,&local_68.TraversalContext)
      ;
      local_a8 = *puVar11;
      pTVar2 = *(TSet<TTuple<FOptimusInstancedPin,FOptimusInstancedPin>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>,FDefaultSetAllocator>
                 **)((longlong)this + 0x10);
      local_f0 = (longlong)this + 0x18;
      TSet<TTuple<FOptimusInstancedPin,FOptimusInstancedPin>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FOptimusInstancedPin_const_&>_>(pTVar2,&local_f8,(bool *)&local_f0);
      lVar9 = *(longlong *)&pTVar2->Elements + (longlong)(int)local_f8.Key * 0x98;
      *(UOptimusNode **)(lVar9 + 0x48) = local_e8;
      FOptimusPinTraversalContext::operator=
                ((FOptimusPinTraversalContext *)(lVar9 + 0x50),&local_e0);
      *(int *)(lVar9 + 0x80) = local_b0;
      *(undefined8 *)(lVar9 + 0x88) = local_a8;
      if (local_e0.ReferenceNesting.AllocatorInstance.SecondaryData !=
          (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
        FMemory::Free((void *)local_e0.ReferenceNesting.AllocatorInstance.SecondaryData);
      }
    }
    if (local_68.TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData !=
        (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      FMemory::Free((void *)local_68.TraversalContext.ReferenceNesting.AllocatorInstance.
                            SecondaryData);
    }
  }
  return;
}

// operator() @ 14e16b3b0

FOptimusRoutedConstNodePin * __thiscall
`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l2::<lambda_3>::operator()
          (void *this,FOptimusRoutedConstNodePin *__return_storage_ptr__,
          FOptimusRoutedConstNode *param_1)

{
  TSet<TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  FOptimusRoutedConstNodePin *pFVar5;
  uint uVar6;
  uint uVar7;
  FOptimusRoutedConstNode *pFVar8;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_28;
  
  do {
    pFVar8 = param_1;
    this_00 = *(TSet<TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
                **)this;
    uVar6 = ((uint)((ulonglong)pFVar8->Node >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar8->Node >> 4)
            ) * -0x7a143595;
    uVar7 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    uVar7 = uVar7 >> 0x10 ^ uVar7;
    uVar6 = ::GetTypeHash(&pFVar8->TraversalContext);
    iVar3 = TSet<TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FOptimusRoutedConstNode>
                      (this_00,uVar7 * 0x40 + (uVar7 >> 2) + 0x9e3779b9 + uVar6 ^ uVar7,pFVar8);
    if (iVar3 == -1) break;
    lVar4 = (longlong)iVar3 * 0x78 + *(longlong *)&this_00->Elements;
    param_1 = (FOptimusRoutedConstNode *)(lVar4 + 0x38);
    if (lVar4 == 0) {
      param_1 = (FOptimusRoutedConstNode *)0x0;
    }
  } while (param_1 != (FOptimusRoutedConstNode *)0x0);
  UOptimusNode::GetPinsByDirection(pFVar8->Node,&local_28,Output,false);
  if ((local_28.ArrayNum != 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewSourcePins.Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                         ,0x95b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FOptimusRoutedConstNodePin *)(*pcVar1)();
    return pFVar5;
  }
  if ((local_28.ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FOptimusRoutedConstNodePin *)(*pcVar1)();
    return pFVar5;
  }
  __return_storage_ptr__->NodePin = *(UOptimusNodePin **)local_28.AllocatorInstance.Data;
  FOptimusPinTraversalContext::FOptimusPinTraversalContext
            (&__return_storage_ptr__->TraversalContext,&pFVar8->TraversalContext);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AddComponentBinding @ 14e174280

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOptimusComponentSourceBinding * __thiscall
UOptimusDeformer::AddComponentBinding
          (UOptimusDeformer *this,UOptimusComponentSource *param_1,FName param_2)

{
  bool bVar1;
  UClass *pUVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName FVar6;
  FOptimusComponentBindingAction_AddBinding *pFVar7;
  FOptimusComponentBindingAction_AddBinding *pFVar8;
  UOptimusActionStack *this_00;
  UOptimusComponentSourceBinding *pUVar9;
  FOptimusComponentBindingAction_AddBinding *pFVar10;
  undefined1 local_res8 [8];
  TSharedPtr<FOptimusAction,1> local_28;
  
  if (param_1 == (UOptimusComponentSource *)0x0) {
    pUVar2 = UOptimusSkeletalMeshComponentSource::StaticClass();
    param_1 = UClass::GetDefaultObject<UOptimusComponentSource>(pUVar2);
  }
  if (param_2 == (FName)0x0) {
    pFVar3 = (FName *)(**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_res8);
    param_2 = *pFVar3;
  }
  pUVar2 = (UClass *)(this->Bindings).field0_0x0.DebugPtr;
  pUVar4 = Z_Construct_UClass_UObject_NoRegister();
  pFVar10 = (FOptimusComponentBindingAction_AddBinding *)0x0;
  pUVar5 = StaticFindObjectFast(pUVar4,(UObject *)pUVar2,param_2,None,RF_NoFlags,Borrowed);
  if (pUVar5 != (UObject *)0x0) {
    FVar6 = (FName)Z_Construct_UClass_UObject_NoRegister();
    FVar6 = MakeUniqueObjectName
                      ((UObject *)local_res8,pUVar2,FVar6,param_2.ComparisonIndex.Value.Value);
    param_2 = *(FName *)FVar6;
  }
  pFVar7 = ::operator_new(0x30);
  pFVar8 = pFVar10;
  if (pFVar7 != (FOptimusComponentBindingAction_AddBinding *)0x0) {
    pFVar8 = FOptimusComponentBindingAction_AddBinding::FOptimusComponentBindingAction_AddBinding
                       (pFVar7,param_1,param_2);
  }
  this_00 = GetActionStack(this);
  local_28.Object = (FOptimusAction *)pFVar8;
  pFVar7 = ::operator_new(0x18);
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
  if (pFVar7 != (FOptimusComponentBindingAction_AddBinding *)0x0) {
    *(undefined4 *)&pFVar7->_padding_ = 1;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar7->_padding_ + 4) = 1;
    pFVar7->_padding_ = (longlong)pFVar8;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
  }
  bVar1 = UOptimusActionStack::RunAction(this_00,&local_28);
  if (bVar1) {
    pFVar7 = (FOptimusComponentBindingAction_AddBinding *)&this->_padding_;
    if (this == (UOptimusDeformer *)0x0) {
      pFVar7 = pFVar10;
    }
    pUVar9 = (UOptimusComponentSourceBinding *)
             (**(code **)(pFVar7->_padding_ + 0x40))(pFVar7,pFVar8->ComponentBindingName);
  }
  else {
    pUVar9 = (UOptimusComponentSourceBinding *)0x0;
  }
  return pUVar9;
}

// AddComponentBindingDirect @ 14e1743d0

bool __thiscall
UOptimusDeformer::AddComponentBindingDirect
          (UOptimusDeformer *this,UOptimusComponentSourceBinding *param_1,int param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UOptimusComponentSourceBinding>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  UOptimusComponentSourceBinding *pUVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  char *pcVar8;
  atomic<unsigned_char> *paVar9;
  FScriptContainerElement *pFVar10;
  UOptimusComponentSourceBindingContainer *pUVar11;
  UOptimusComponentSourceBinding *local_18;
  UOptimusComponentSourceBinding *local_10;
  
  if (param_1 == (UOptimusComponentSourceBinding *)0x0) {
    pcVar8 = "InComponentBinding";
    iVar7 = 0x44f;
    paVar9 = &bGEnsureHasExecuted<_5723111267007200177>;
  }
  else {
    pUVar11 = (this->Bindings).field0_0x0.DebugPtr;
    if (pUVar11 == (UOptimusComponentSourceBindingContainer *)0x0) {
      bVar5 = (UOptimusComponentSourceBindingContainer *)param_1->_padding_ ==
              (UOptimusComponentSourceBindingContainer *)0x0;
    }
    else {
      bVar5 = pUVar11 == (UOptimusComponentSourceBindingContainer *)param_1->_padding_;
    }
    if (bVar5) {
      if ((pUVar11->Bindings).ArrayNum == 0) {
        param_1->bIsPrimaryBinding = true;
        pUVar11 = (this->Bindings).field0_0x0.DebugPtr;
      }
      if ((param_2 < 0) || ((pUVar11->Bindings).ArrayNum <= param_2)) {
        pTVar2 = &pUVar11->Bindings;
        local_10 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        pFVar10 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar10 <= (FScriptContainerElement *)&local_10) &&
            ((FScriptContainerElement *)&local_10 <
             pFVar10 + (longlong)(pUVar11->Bindings).ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar7 = (pUVar11->Bindings).ArrayNum;
        piVar1 = &(pUVar11->Bindings).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (pUVar11->Bindings).ArrayNum = iVar7 + 1;
        *(UOptimusComponentSourceBinding **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8)
             = local_10;
        pUVar4 = local_10;
      }
      else {
        local_18 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        pFVar10 = (pUVar11->Bindings).AllocatorInstance.Data;
        if (((pFVar10 <= (FScriptContainerElement *)&local_18) &&
            ((FScriptContainerElement *)&local_18 <
             pFVar10 + (longlong)(pUVar11->Bindings).ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar7 = (pUVar11->Bindings).ArrayNum;
        piVar1 = &(pUVar11->Bindings).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(pUVar11->Bindings).AllocatorInstance,piVar1);
        }
        pFVar10 = (pUVar11->Bindings).AllocatorInstance.Data;
        (pUVar11->Bindings).ArrayNum = iVar7 + 1;
        pFVar10 = pFVar10 + (longlong)param_2 * 8;
        memmove(pFVar10 + 8,pFVar10,(longlong)(iVar7 - param_2) << 3);
        *(UOptimusComponentSourceBinding **)
         ((pUVar11->Bindings).AllocatorInstance.Data + (longlong)param_2 * 8) = local_18;
        pUVar4 = local_18;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UOptimusComponentSourceBinding *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      Notify(this,ComponentBindingAdded,(UObject *)param_1);
      UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
      return true;
    }
    pcVar8 = "InComponentBinding->GetOuter() == Bindings";
    iVar7 = 0x453;
    paVar9 = &bGEnsureHasExecuted<_5723111267007200173>;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar9,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                     ,iVar7,pcVar8);
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  return false;
}

// AddGraphDirect @ 14e1749f0

bool __thiscall
UOptimusDeformer::AddGraphDirect(UOptimusDeformer *this,UOptimusNodeGraph *param_1,int param_2)

{
  undefined1 *this_00;
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  TObjectPtr<UOptimusNodeGraph>_u_0 local_res10;
  
  if (param_1 == (UOptimusNodeGraph *)0x0) {
    return false;
  }
  this_00 = &this[-1].ConstantValueUpdateDelegate.field_0x8;
  if ((undefined1 *)param_1->_padding_ != this_00) {
    return false;
  }
  if (1 < *(int *)&(this->ValueMap).field_0x30) {
    if ((*(int *)&(this->ValueMap).field_0x30 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (*(int *)(**(longlong **)&(this->ValueMap).field_0x28 + 0x30) == 0) {
      iVar6 = 1;
      goto LAB_14e174a82;
    }
  }
  iVar6 = 0;
LAB_14e174a82:
  puVar1 = &(this->ValueMap).field_0x30;
  if (param_2 == -1) {
    param_2 = *(int *)puVar1;
  }
  switch(param_1->GraphType) {
  case Setup:
    if ((char)iVar6 != '\0') {
      return false;
    }
    param_2 = 0;
    break;
  case Update:
  case SubGraph:
    return false;
  case ExternalTrigger:
    iVar5 = GetUpdateGraphIndex((UOptimusDeformer *)this_00);
    if (param_2 < iVar5) {
      iVar5 = param_2;
    }
    param_2 = iVar6;
    if (iVar6 < iVar5) {
      param_2 = iVar5;
    }
    break;
  case Function:
    param_2 = *(int *)puVar1;
    break;
  case Transient:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                       ,0x10c1,L"");
    if (!bVar3) {
      return false;
    }
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_res10.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UOptimusNodeGraph>,TSizedDefaultAllocator<32>_>::Insert
            ((TArray<TObjectPtr<UOptimusNodeGraph>,TSizedDefaultAllocator<32>_> *)
             &(this->ValueMap).field_0x28,(TObjectPtr<UOptimusNodeGraph> *)&local_res10.ObjectPtr,
             param_2);
  Notify((UOptimusDeformer *)this_00,GraphAdded,(UObject *)param_1);
  return true;
}

// AddResource @ 14e178a70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UOptimusResourceDescription * __thiscall
UOptimusDeformer::AddResource(UOptimusDeformer *this,FOptimusDataTypeRef *param_1,FName param_2)

{
  FOptimusDataType *pFVar1;
  UClass *pUVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar6;
  FOptimusDataTypeRegistry *this_00;
  FFieldClass *pFVar7;
  UOptimusResourceDescription *pUVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  FName FVar11;
  FOptimusResourceAction_AddResource *pFVar12;
  FOptimusDataDomain *pFVar13;
  FOptimusResourceAction_AddResource *pFVar14;
  UOptimusActionStack *this_01;
  TSharedPtr<FOptimusDataType_const_,1> local_b8;
  TSharedPtr<FOptimusDataType_const_,1> local_a8;
  undefined1 local_98 [48];
  FOptimusDataDomain local_68;
  TSharedPtr<FOptimusDataType_const_,1> local_28;
  
  if (param_2 == (FName)0x0) {
    param_2 = DefaultResourceName;
  }
  pTVar6 = FOptimusDataTypeRef::Resolve(param_1,&local_a8);
  pFVar1 = pTVar6->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  if (pFVar1 == (FOptimusDataType *)0x0) {
    this_00 = FOptimusDataTypeRegistry::Get();
    pFVar7 = FFloatProperty::StaticClass();
    pTVar6 = FOptimusDataTypeRegistry::FindType(this_00,&local_28,pFVar7);
    FOptimusDataTypeRef::Set(param_1,pTVar6);
  }
  FOptimusDataTypeRef::Resolve(param_1,&local_b8);
  if (local_b8.Object != (FOptimusDataType *)0x0) {
    if ((local_b8.Object == (FOptimusDataType *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (UOptimusResourceDescription *)(*pcVar4)();
      return pUVar8;
    }
    if (((local_b8.Object)->UsageFlags & Resource) != None) {
      pUVar2 = (UClass *)(this->Resources).field0_0x0.DebugPtr;
      pUVar9 = Z_Construct_UClass_UObject_NoRegister();
      pUVar10 = StaticFindObjectFast(pUVar9,(UObject *)pUVar2,param_2,None,RF_NoFlags,Borrowed);
      if (pUVar10 != (UObject *)0x0) {
        FVar11 = (FName)Z_Construct_UClass_UObject_NoRegister();
        FVar11 = MakeUniqueObjectName
                           ((UObject *)&stack0x00000018,pUVar2,FVar11,
                            param_2.ComparisonIndex.Value.Value);
        param_2 = *(FName *)FVar11;
      }
      pFVar12 = ::operator_new(0x90);
      pFVar14 = (FOptimusResourceAction_AddResource *)0x0;
      if (pFVar12 != (FOptimusResourceAction_AddResource *)0x0) {
        local_68.Type = Dimensional;
        local_68._4_4_ = 0;
        local_68.DimensionNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.DimensionNames.ArrayNum = 0;
        local_68.DimensionNames.ArrayMax = 0;
        local_68.Multiplier = 0;
        local_68._28_4_ = 0;
        local_68.Expression.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.Expression.Data.ArrayNum = 0;
        local_68.Expression.Data.ArrayMax = 0;
        local_68.LevelNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.LevelNames_DEPRECATED.ArrayNum = 0;
        local_68.LevelNames_DEPRECATED.ArrayMax = 0;
        pFVar13 = FOptimusDataDomain::FOptimusDataDomain(&local_68);
        local_98._0_8_ = param_1->TypeName;
        local_98._8_8_ = *(undefined8 *)&(param_1->TypeObject).SoftObjectPtr;
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)(local_98 + 0x10),
                   (FSoftObjectPath *)&(param_1->TypeObject).SoftObjectPtr.field_0x8);
        pFVar14 = FOptimusResourceAction_AddResource::FOptimusResourceAction_AddResource
                            (pFVar12,(FOptimusDataTypeRef *)local_98,param_2,pFVar13);
      }
      this_01 = GetActionStack(this);
      bVar5 = UOptimusActionStack::RunAction(this_01,(FOptimusAction *)pFVar14);
      if (bVar5) {
        pFVar12 = (FOptimusResourceAction_AddResource *)&this->_padding_;
        if (this == (UOptimusDeformer *)0x0) {
          pFVar12 = (FOptimusResourceAction_AddResource *)0x0;
        }
        pUVar8 = (UOptimusResourceDescription *)
                 (**(code **)(pFVar12->_padding_ + 0x30))(pFVar12,pFVar14->ResourceName);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.SharedReferenceCount.ReferenceController);
        pvVar3 = *(void **)&(param_1->TypeObject).SoftObjectPtr.field_0x18;
        if (pvVar3 == (void *)0x0) {
          return pUVar8;
        }
        FMemory::Free(pvVar3);
        return pUVar8;
      }
      goto LAB_14e178c89;
    }
  }
  if (1 < (byte)LogOptimusCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
  }
LAB_14e178c89:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  pvVar3 = *(void **)&(param_1->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  return (UOptimusResourceDescription *)0x0;
}

// AddResourceDirect @ 14e178cd0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UOptimusDeformer::AddResourceDirect
          (UOptimusDeformer *this,UOptimusResourceDescription *param_1,int param_2)

{
  TArray<TObjectPtr<UOptimusResourceDescription>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  UOptimusResourceContainer *pUVar3;
  code *pcVar4;
  UOptimusResourceDescription *pUVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  char *pcVar9;
  atomic<unsigned_char> *paVar10;
  FScriptContainerElement *pFVar11;
  UOptimusResourceDescription *local_18;
  UOptimusResourceDescription *local_10;
  
  if (param_1 == (UOptimusResourceDescription *)0x0) {
    pcVar9 = "InResourceDesc";
    iVar8 = 0x39d;
    paVar10 = &bGEnsureHasExecuted<_5723111267007200355>;
  }
  else {
    pUVar3 = (this->Resources).field0_0x0.DebugPtr;
    if (pUVar3 == (UOptimusResourceContainer *)0x0) {
      bVar6 = (UOptimusResourceContainer *)param_1->_padding_ == (UOptimusResourceContainer *)0x0;
    }
    else {
      bVar6 = pUVar3 == (UOptimusResourceContainer *)param_1->_padding_;
    }
    if (bVar6) {
      if ((param_2 < 0) || ((pUVar3->Descriptions).ArrayNum <= param_2)) {
        local_10 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        pFVar11 = (pUVar3->Descriptions).AllocatorInstance.Data;
        if (((pFVar11 <= (FScriptContainerElement *)&local_10) &&
            ((FScriptContainerElement *)&local_10 <
             pFVar11 + (longlong)(pUVar3->Descriptions).ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar8 = (pUVar3->Descriptions).ArrayNum;
        piVar2 = &(pUVar3->Descriptions).ArrayMax;
        if (iVar8 == *piVar2) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(pUVar3->Descriptions).AllocatorInstance,piVar2);
        }
        (pUVar3->Descriptions).ArrayNum = iVar8 + 1;
        *(UOptimusResourceDescription **)
         ((pUVar3->Descriptions).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_10;
        pUVar5 = local_10;
      }
      else {
        pTVar1 = &pUVar3->Descriptions;
        local_18 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        pFVar11 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar11 <= (FScriptContainerElement *)&local_18) &&
            ((FScriptContainerElement *)&local_18 <
             pFVar11 + (longlong)(pUVar3->Descriptions).ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar8 = (pUVar3->Descriptions).ArrayNum;
        piVar2 = &(pUVar3->Descriptions).ArrayMax;
        if (iVar8 == *piVar2) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar1->AllocatorInstance,piVar2);
        }
        pFVar11 = (pTVar1->AllocatorInstance).Data;
        (pUVar3->Descriptions).ArrayNum = iVar8 + 1;
        pFVar11 = pFVar11 + (longlong)param_2 * 8;
        memmove(pFVar11 + 8,pFVar11,(longlong)(iVar8 - param_2) << 3);
        *(UOptimusResourceDescription **)((pTVar1->AllocatorInstance).Data + (longlong)param_2 * 8)
             = local_18;
        pUVar5 = local_18;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UOptimusResourceDescription *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      Notify(this,ResourceAdded,(UObject *)param_1);
      UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
      return true;
    }
    pcVar9 = "InResourceDesc->GetOuter() == Resources";
    iVar8 = 0x3a2;
    paVar10 = &bGEnsureHasExecuted<_5723111267007200350>;
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar10,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                     ,iVar8,pcVar9);
  if (!bVar6) {
    return false;
  }
  pcVar4 = (code *)swi(3);
  uVar7 = (*pcVar4)();
  return (bool)uVar7;
}

// AddSetupGraph @ 14e1790e0

UOptimusNodeGraph * __thiscall UOptimusDeformer::AddSetupGraph(UOptimusDeformer *this)

{
  FName FVar1;
  bool bVar2;
  FOptimusNodeGraphAction_AddGraph *pFVar3;
  FString *pFVar4;
  FOptimusNodeGraphAction_AddGraph *pFVar5;
  UOptimusActionStack *this_00;
  UOptimusNodeGraph *pUVar6;
  FOptimusNodeGraphAction_AddGraph *pFVar7;
  TSharedPtr<FOptimusAction,1> local_68;
  void *local_58 [2];
  TFunction<bool___cdecl(UOptimusNodeGraph_*)> local_48;
  
  pFVar7 = (FOptimusNodeGraphAction_AddGraph *)0x0;
  pFVar3 = ::operator_new(0x80);
  FVar1 = UOptimusNodeGraph::SetupGraphName;
  pFVar5 = pFVar7;
  if (pFVar3 != (FOptimusNodeGraphAction_AddGraph *)0x0) {
    local_48._0_8_ = 0;
    local_48._40_8_ = 0;
    pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x20))(&this->_padding_,local_58);
    pFVar5 = FOptimusNodeGraphAction_AddGraph::FOptimusNodeGraphAction_AddGraph
                       (pFVar3,pFVar4,Setup,FVar1,0,&local_48);
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
  }
  this_00 = GetActionStack(this);
  local_68.Object = (FOptimusAction *)pFVar5;
  pFVar3 = ::operator_new(0x18);
  local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
  if (pFVar3 != (FOptimusNodeGraphAction_AddGraph *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar5;
    local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar3;
  }
  bVar2 = UOptimusActionStack::RunAction(this_00,&local_68);
  if (bVar2) {
    pFVar3 = (FOptimusNodeGraphAction_AddGraph *)&this->_padding_;
    if (this == (UOptimusDeformer *)0x0) {
      pFVar3 = pFVar7;
    }
    pUVar6 = (UOptimusNodeGraph *)(**(code **)(pFVar3->_padding_ + 0x18))(pFVar3,&pFVar5->GraphPath)
    ;
  }
  else {
    pUVar6 = (UOptimusNodeGraph *)0x0;
  }
  return pUVar6;
}

// AddTriggerGraph @ 14e179610

UOptimusNodeGraph * __thiscall
UOptimusDeformer::AddTriggerGraph(UOptimusDeformer *this,FString *param_1)

{
  FName FVar1;
  bool bVar2;
  FOptimusNodeGraphAction_AddGraph *this_00;
  FName *pFVar3;
  FString *pFVar4;
  FOptimusNodeGraphAction_AddGraph *pFVar5;
  UOptimusActionStack *this_01;
  FOptimusNodeGraphAction_AddGraph *pFVar6;
  UOptimusNodeGraph *pUVar7;
  wchar_t *pwVar8;
  FOptimusNodeGraphAction_AddGraph *pFVar9;
  FName local_res18 [2];
  TSharedPtr<FOptimusAction,1> local_68;
  void *local_58 [2];
  TFunction<bool___cdecl(UOptimusNodeGraph_*)> local_48;
  
  pFVar9 = (FOptimusNodeGraphAction_AddGraph *)0x0;
  local_res18[0].ComparisonIndex.Value = 0;
  bVar2 = UOptimusNodeGraph::IsValidUserGraphName(param_1,(FText *)0x0);
  if (bVar2) {
    this_00 = ::operator_new(0x80);
    pFVar5 = pFVar9;
    pFVar6 = pFVar9;
    if (this_00 != (FOptimusNodeGraphAction_AddGraph *)0x0) {
      local_48._0_8_ = 0;
      local_48._40_8_ = 0;
      if ((param_1->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      pFVar3 = ::FName::FName(local_res18,pwVar8);
      FVar1 = *pFVar3;
      pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x20))(&this->_padding_,local_58);
      pFVar5 = FOptimusNodeGraphAction_AddGraph::FOptimusNodeGraphAction_AddGraph
                         (this_00,pFVar4,ExternalTrigger,FVar1,-1,&local_48);
      pFVar6 = (FOptimusNodeGraphAction_AddGraph *)&DAT_00000001;
    }
    if ((pFVar6 != (FOptimusNodeGraphAction_AddGraph *)0x0) && (local_58[0] != (void *)0x0)) {
      FMemory::Free(local_58[0]);
    }
    this_01 = GetActionStack(this);
    local_68.Object = (FOptimusAction *)pFVar5;
    pFVar6 = ::operator_new(0x18);
    local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
    if (pFVar6 != (FOptimusNodeGraphAction_AddGraph *)0x0) {
      *(undefined4 *)&pFVar6->_padding_ = 1;
      pFVar6->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      *(undefined4 *)((longlong)&pFVar6->_padding_ + 4) = 1;
      pFVar6->_padding_ = (longlong)pFVar5;
      local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
    }
    bVar2 = UOptimusActionStack::RunAction(this_01,&local_68);
    if (bVar2) {
      pFVar6 = (FOptimusNodeGraphAction_AddGraph *)&this->_padding_;
      if (this == (UOptimusDeformer *)0x0) {
        pFVar6 = pFVar9;
      }
      pUVar7 = (UOptimusNodeGraph *)
               (**(code **)(pFVar6->_padding_ + 0x18))(pFVar6,&pFVar5->GraphPath);
      return pUVar7;
    }
  }
  return (UOptimusNodeGraph *)0x0;
}

// AddVariable @ 14e179840

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UOptimusVariableDescription * __thiscall
UOptimusDeformer::AddVariable(UOptimusDeformer *this,FOptimusDataTypeRef *param_1,FName param_2)

{
  FOptimusDataType *pFVar1;
  UClass *pUVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar6;
  FOptimusDataTypeRegistry *this_00;
  FFieldClass *pFVar7;
  UOptimusVariableDescription *pUVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  FName FVar11;
  FOptimusVariableAction_AddVariable *pFVar12;
  FOptimusVariableAction_AddVariable *pFVar13;
  UOptimusActionStack *this_01;
  TSharedPtr<FOptimusDataType_const_,1> local_78;
  TSharedPtr<FOptimusDataType_const_,1> local_68;
  TSharedPtr<FOptimusDataType_const_,1> local_58;
  undefined1 local_48 [48];
  
  if (param_2 == (FName)0x0) {
    param_2 = DefaultVariableName;
  }
  pTVar6 = FOptimusDataTypeRef::Resolve(param_1,&local_68);
  pFVar1 = pTVar6->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  if (pFVar1 == (FOptimusDataType *)0x0) {
    this_00 = FOptimusDataTypeRegistry::Get();
    pFVar7 = FDoubleProperty::StaticClass();
    pTVar6 = FOptimusDataTypeRegistry::FindType(this_00,&local_58,pFVar7);
    FOptimusDataTypeRef::Set(param_1,pTVar6);
  }
  FOptimusDataTypeRef::Resolve(param_1,&local_78);
  if (local_78.Object != (FOptimusDataType *)0x0) {
    if ((local_78.Object == (FOptimusDataType *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (UOptimusVariableDescription *)(*pcVar4)();
      return pUVar8;
    }
    if (((local_78.Object)->UsageFlags & (Property|Variable)) != None) {
      pUVar2 = (UClass *)(this->Variables).field0_0x0.DebugPtr;
      pUVar9 = Z_Construct_UClass_UObject_NoRegister();
      pUVar10 = StaticFindObjectFast(pUVar9,(UObject *)pUVar2,param_2,None,RF_NoFlags,Borrowed);
      if (pUVar10 != (UObject *)0x0) {
        FVar11 = (FName)Z_Construct_UClass_UObject_NoRegister();
        FVar11 = MakeUniqueObjectName
                           ((UObject *)&stack0x00000018,pUVar2,FVar11,
                            param_2.ComparisonIndex.Value.Value);
        param_2 = *(FName *)FVar11;
      }
      pFVar12 = ::operator_new(0x50);
      pFVar13 = (FOptimusVariableAction_AddVariable *)0x0;
      if (pFVar12 != (FOptimusVariableAction_AddVariable *)0x0) {
        local_48._0_8_ = param_1->TypeName;
        local_48._8_8_ = *(undefined8 *)&(param_1->TypeObject).SoftObjectPtr;
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)(local_48 + 0x10),
                   (FSoftObjectPath *)&(param_1->TypeObject).SoftObjectPtr.field_0x8);
        pFVar13 = FOptimusVariableAction_AddVariable::FOptimusVariableAction_AddVariable
                            (pFVar12,(FOptimusDataTypeRef *)local_48,param_2);
      }
      this_01 = GetActionStack(this);
      bVar5 = UOptimusActionStack::RunAction(this_01,(FOptimusAction *)pFVar13);
      if (bVar5) {
        pFVar12 = (FOptimusVariableAction_AddVariable *)&this->_padding_;
        if (this == (UOptimusDeformer *)0x0) {
          pFVar12 = (FOptimusVariableAction_AddVariable *)0x0;
        }
        pUVar8 = (UOptimusVariableDescription *)
                 (**(code **)(pFVar12->_padding_ + 0x38))(pFVar12,pFVar13->VariableName);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        pvVar3 = *(void **)&(param_1->TypeObject).SoftObjectPtr.field_0x18;
        if (pvVar3 == (void *)0x0) {
          return pUVar8;
        }
        FMemory::Free(pvVar3);
        return pUVar8;
      }
      goto LAB_14e179a0f;
    }
  }
  if (1 < (byte)LogOptimusCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
  }
LAB_14e179a0f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  pvVar3 = *(void **)&(param_1->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  return (UOptimusVariableDescription *)0x0;
}

// AddVariableDirect @ 14e179a50

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UOptimusDeformer::AddVariableDirect
          (UOptimusDeformer *this,UOptimusVariableDescription *param_1,int param_2)

{
  TArray<TObjectPtr<UOptimusVariableDescription>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  UOptimusVariableContainer *pUVar3;
  code *pcVar4;
  UOptimusVariableDescription *pUVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  char *pcVar9;
  atomic<unsigned_char> *paVar10;
  FScriptContainerElement *pFVar11;
  UOptimusVariableDescription *local_18;
  UOptimusVariableDescription *local_10;
  
  if (param_1 == (UOptimusVariableDescription *)0x0) {
    pcVar9 = "InVariableDesc";
    iVar8 = 0x1fa;
    paVar10 = &bGEnsureHasExecuted<_5723111267007200774>;
  }
  else {
    pUVar3 = (this->Variables).field0_0x0.DebugPtr;
    if (pUVar3 == (UOptimusVariableContainer *)0x0) {
      bVar6 = (UOptimusVariableContainer *)param_1->_padding_ == (UOptimusVariableContainer *)0x0;
    }
    else {
      bVar6 = pUVar3 == (UOptimusVariableContainer *)param_1->_padding_;
    }
    if (bVar6) {
      if ((param_2 < 0) || ((pUVar3->Descriptions).ArrayNum <= param_2)) {
        local_10 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        pFVar11 = (pUVar3->Descriptions).AllocatorInstance.Data;
        if (((pFVar11 <= (FScriptContainerElement *)&local_10) &&
            ((FScriptContainerElement *)&local_10 <
             pFVar11 + (longlong)(pUVar3->Descriptions).ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar8 = (pUVar3->Descriptions).ArrayNum;
        piVar2 = &(pUVar3->Descriptions).ArrayMax;
        if (iVar8 == *piVar2) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(pUVar3->Descriptions).AllocatorInstance,piVar2);
        }
        (pUVar3->Descriptions).ArrayNum = iVar8 + 1;
        *(UOptimusVariableDescription **)
         ((pUVar3->Descriptions).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_10;
        pUVar5 = local_10;
      }
      else {
        pTVar1 = &pUVar3->Descriptions;
        local_18 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        pFVar11 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar11 <= (FScriptContainerElement *)&local_18) &&
            ((FScriptContainerElement *)&local_18 <
             pFVar11 + (longlong)(pUVar3->Descriptions).ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar8 = (pUVar3->Descriptions).ArrayNum;
        piVar2 = &(pUVar3->Descriptions).ArrayMax;
        if (iVar8 == *piVar2) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar1->AllocatorInstance,piVar2);
        }
        pFVar11 = (pTVar1->AllocatorInstance).Data;
        (pUVar3->Descriptions).ArrayNum = iVar8 + 1;
        pFVar11 = pFVar11 + (longlong)param_2 * 8;
        memmove(pFVar11 + 8,pFVar11,(longlong)(iVar8 - param_2) << 3);
        *(UOptimusVariableDescription **)((pTVar1->AllocatorInstance).Data + (longlong)param_2 * 8)
             = local_18;
        pUVar5 = local_18;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UOptimusVariableDescription *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      Notify(this,VariableAdded,(UObject *)param_1);
      return true;
    }
    pcVar9 = "InVariableDesc->GetOuter() == Variables";
    iVar8 = 0x1ff;
    paVar10 = &bGEnsureHasExecuted<_5723111267007200769>;
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar10,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                     ,iVar8,pcVar9);
  if (!bVar6) {
    return false;
  }
  pcVar4 = (code *)swi(3);
  uVar7 = (*pcVar4)();
  return (bool)uVar7;
}

// BeginDestroy @ 14e17eb20

void __thiscall UOptimusDeformer::BeginDestroy(UOptimusDeformer *this)

{
  FOptimusDataTypeRegistry *pFVar1;
  
  UObject::BeginDestroy((UObject *)this);
  pFVar1 = FOptimusDataTypeRegistry::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar1->OnDataTypeChanged,this);
  return;
}

// Compile @ 14e186210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UOptimusDeformer::Compile(UOptimusDeformer *this)

{
  TArray<FOptimusComputeGraphInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UOptimusNodeGraph *pUVar8;
  FText *pFVar9;
  TTuple<FOptimusValueIdentifier,FOptimusValueDescription> *pTVar10;
  byte bVar11;
  ulonglong uVar12;
  longlong lVar13;
  FOptimusValueIdentifier *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 auStackY_248 [32];
  undefined1 local_218;
  undefined1 local_217;
  undefined1 local_216 [2];
  uint local_214;
  FScriptContainerElement *local_210;
  FScriptContainerElement *local_208;
  UOptimusDeformer *local_200;
  int local_1f8;
  int local_1f4;
  longlong *local_1f0;
  uint uStack_1e8;
  uint uStack_1e4;
  TBitArray<FDefaultBitArrayAllocator> *local_1e0;
  undefined4 uStack_1d8;
  uint uStack_1d4;
  uint local_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  longlong *local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b8;
  undefined8 uStack_198;
  FOptimusCompilerDiagnostic local_188;
  FText local_148;
  code *local_138 [2];
  undefined **local_128;
  UOptimusDeformer *local_120;
  undefined8 local_110;
  undefined4 local_ec;
  undefined1 local_e8 [16];
  undefined1 local_d8 [72];
  undefined4 local_90;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pUVar8 = GetUpdateGraph(this);
  if (pUVar8 == (UOptimusNodeGraph *)0x0) {
    local_188.Level = None;
    FText::FText(&local_188.Message);
    local_188.Line = -1;
    local_188.ColumnStart = -1;
    local_188.AbsoluteFilePath.Data.ArrayNum = 0;
    local_188.AbsoluteFilePath.Data.ArrayMax = 0;
    local_188.Object.WeakPtr.ObjectIndex = 0;
    local_188.Object.WeakPtr.ObjectSerialNumber = 0;
    local_188.ColumnEnd = -1;
    local_188.AbsoluteFilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.Level = Error;
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_148,L"OptimusDeformer",L"NoGraphFound",
                        L"No update graph found. Compilation aborted.");
    FText::operator=(&local_188.Message,pFVar9);
    if (local_148.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
    }
    TMulticastDelegate<void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>::Broadcast
              (&this->CompileBeginDelegate,this);
    TMulticastDelegate<void___cdecl(FOptimusCompilerDiagnostic_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->CompileMessageDelegate,&local_188);
    TMulticastDelegate<void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>::Broadcast
              (&this->CompileEndDelegate,this);
    this->Status = HasErrors;
    if (local_188.AbsoluteFilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.AbsoluteFilePath.Data.AllocatorInstance.Data);
    }
    if (local_188.Message.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188.Message.TextData.Reference + 0x10))();
    }
    bVar5 = false;
  }
  else {
    local_200 = this;
    `UOptimusDeformer::Compile'::__l2::<lambda_1>::operator()(&local_200);
    TMulticastDelegate<void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>::Broadcast
              (&this->CompileBeginDelegate,this);
    FlushRenderingCommands();
    puVar22 = (undefined1 *)0x0;
    this->Status = Compiled;
    local_214 = (this->Graphs).ArrayNum;
    uVar12 = (ulonglong)(int)local_214;
    local_210 = (this->Graphs).AllocatorInstance.Data;
    pFVar15 = local_210 + uVar12 * 8;
    local_208 = pFVar15;
    while( true ) {
      if ((this->Graphs).ArrayNum != (int)uVar12) {
        local_218 = 0;
        `TCheckedPointerIterator<TObjectPtr<UOptimusNodeGraph>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_218);
      }
      if (local_210 == pFVar15) break;
      if ((*(UOptimusNodeGraph **)local_210)->GraphType != Function) {
        local_138[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`UOptimusDeformer::Compile'::__l2::<lambda_2>,void,enum_EOptimusDiagnosticLevel,FText,UObject_const_*>
                       ::Call;
        local_110 = 0;
        local_128 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`UOptimusDeformer::Compile'::`2'::<lambda_2>,0,0>::
                     _vftable_;
        local_120 = this;
        CompileNodeGraphToComputeGraphs
                  (this,(FOptimusNodeGraphCompilationResult *)local_e8,
                   *(UOptimusNodeGraph **)local_210,
                   (TFunction<void___cdecl(EOptimusDiagnosticLevel,FText,UObject_const_*)> *)
                   local_138);
        pTVar1 = &this->ComputeGraphs;
        if ((pTVar1 == (TArray<FOptimusComputeGraphInfo,TSizedDefaultAllocator<32>_> *)local_e8) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        uVar4 = local_e8._8_4_;
        if (local_e8._8_4_ != 0) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,local_e8._8_4_,&pTVar1->AllocatorInstance,
                             &(this->ComputeGraphs).ArrayNum,&(this->ComputeGraphs).ArrayMax);
          ConstructItems<FOptimusComputeGraphInfo,FOptimusComputeGraphInfo,int>
                    ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x18,
                     (FOptimusComputeGraphInfo *)local_e8._0_8_,uVar4);
        }
        TMap<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
        ::Append<FDefaultSetAllocator>
                  (&this->DataInterfacePropertyOverrideMap,
                   (TMap<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
                    *)local_d8);
        uVar18 = local_60;
        uStack_1e4 = 1;
        local_1d0 = 0;
        uStack_1d4 = local_1d0;
        uStack_1e8 = 0;
        if (local_60 != 0) {
          puVar20 = (uint *)(local_88 + 0x10);
          if (local_68 != (uint *)0x0) {
            puVar20 = local_68;
          }
          uVar17 = *puVar20;
          puVar19 = puVar22;
          puVar21 = puVar22;
          local_1d0 = 0;
          uStack_1e8 = 0;
          while (uVar17 == 0) {
            iVar7 = (int)puVar19;
            local_1d0 = (int)puVar21 + 0x20;
            puVar21 = (undefined1 *)(ulonglong)local_1d0;
            uStack_1e8 = iVar7 + 1;
            puVar19 = (undefined1 *)(ulonglong)uStack_1e8;
            uStack_1d4 = local_60;
            if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1e8
               ) goto LAB_14e186501;
            uVar17 = puVar20[(longlong)iVar7 + 1];
          }
          uStack_1e4 = -uVar17 & uVar17;
          uVar12 = (ulonglong)uStack_1e4 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_1f8 = (int)lVar13;
          uStack_1d4 = (local_1d0 - 1) + local_1f8;
          if ((int)local_60 < (int)uStack_1d4) {
            uStack_1d4 = local_60;
          }
        }
LAB_14e186501:
        local_1f0 = (longlong *)local_88;
        uStack_1cc = local_ec;
        local_1e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
        uVar17 = local_60 & 0xffffffe0;
        iStack_1c8 = local_88._8_4_ - local_54;
        TStack_1b8._padding_ = CONCAT44(uStack_1e4,uStack_1e8);
        uStack_1d8 = 0xffffffff;
        TStack_1b8.CurrentBitIndex = uStack_1d4;
        TStack_1b8.UnvisitedBitMask = 0xffffffff;
        iVar7 = (int)local_60 >> 5;
        TStack_1b8._28_4_ = local_ec;
        TStack_1b8.BaseBitIndex = local_1d0;
        uStack_198 = CONCAT44(uStack_1c4,iStack_1c8);
        bVar11 = (byte)local_60;
        local_1c0 = local_1f0;
        TStack_1b8.Array = local_1e0;
        if (((int)local_60 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        if (uVar18 != local_60) {
          puVar20 = (uint *)(local_88 + 0x10);
          if (local_68 != (uint *)0x0) {
            puVar20 = local_68;
          }
          uVar18 = -1 << (bVar11 & 0x1f) & puVar20[iVar7];
          while (uVar18 == 0) {
            lVar13 = (longlong)iVar7;
            uVar17 = uVar17 + 0x20;
            iVar7 = iVar7 + 1;
            uVar18 = local_60;
            if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
            goto LAB_14e186621;
            uVar18 = puVar20[lVar13 + 1];
          }
          uVar12 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_1f4 = (int)lVar13;
          uVar18 = local_1f4 + -1 + uVar17;
          if ((int)local_60 < (int)uVar18) {
            uVar18 = local_60;
          }
        }
LAB_14e186621:
        while( true ) {
          plVar3 = local_1c0;
          if ((int)local_1c0[1] - *(int *)((longlong)local_1c0 + 0x34) != (int)uStack_198) {
            local_217 = 0;
            `TSparseArray<TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_217);
          }
          if (((TStack_1b8.CurrentBitIndex == uVar18) &&
              (TStack_1b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
             (plVar3 == (longlong *)local_88)) break;
          pFVar14 = (FOptimusValueIdentifier *)
                    (*plVar3 + (longlong)TStack_1b8.CurrentBitIndex * 0x80);
          pTVar10 = TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
                            *)&this->ValueMap,pFVar14);
          puVar19 = &pTVar10->field_0x10;
          if (pTVar10 == (TTuple<FOptimusValueIdentifier,FOptimusValueDescription> *)0x0) {
            puVar19 = puVar22;
          }
          if (puVar19 == (undefined1 *)0x0) {
            TMapBase<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
            ::Emplace<FOptimusValueIdentifier_const_&,FOptimusValueDescription_const_&>
                      ((TMapBase<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
                        *)&this->ValueMap,pFVar14,(FOptimusValueDescription *)&pFVar14[1].Name);
          }
          else {
            uVar17 = pFVar14[5].Name.ComparisonIndex.Value;
            if (((uVar17 & 1) == 0) || ((puVar19[0x30] & 1) != 0)) {
              if (((uVar17 & 2) != 0) && ((puVar19[0x30] & 2) == 0)) {
                puVar19[0x30] = puVar19[0x30] | 2;
                FShaderValueContainer::operator=
                          ((FShaderValueContainer *)(puVar19 + 0x48),
                           (FShaderValueContainer *)&pFVar14[7].Name);
              }
            }
            else {
              puVar19[0x30] = puVar19[0x30] | 1;
              if ((FInstancedStruct *)(puVar19 + 0x38) != (FInstancedStruct *)(pFVar14 + 6)) {
                FInstancedStruct::InitializeAs
                          ((FInstancedStruct *)(puVar19 + 0x38),
                           (((FInstancedStruct *)(pFVar14 + 6))->ScriptStruct).field0_0x0.DebugPtr,
                           *(uchar **)&pFVar14[6].Name.Number);
              }
            }
          }
          TStack_1b8.UnvisitedBitMask = TStack_1b8.UnvisitedBitMask & ~TStack_1b8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b8);
        }
        local_40 = 0;
        if (local_48 != (void *)0x0) {
          FMemory::Free(local_48);
        }
        TSparseArray<TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_88);
        local_90 = 0;
        if ((void *)local_d8._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_d8._64_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_d8);
        pFVar15 = local_208;
        if ((FOptimusComputeGraphInfo *)local_e8._0_8_ != (FOptimusComputeGraphInfo *)0x0) {
          FMemory::Free((void *)local_e8._0_8_);
          pFVar15 = local_208;
        }
      }
      uVar12 = (ulonglong)local_214;
      local_210 = local_210 + 8;
    }
    TMulticastDelegate<void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>::Broadcast
              (&this->CompileEndDelegate,this);
    if (this->Status == HasErrors) {
      `UOptimusDeformer::Compile'::__l2::<lambda_1>::operator()(&local_200);
      bVar5 = false;
    }
    else {
      iVar7 = (this->ComputeGraphs).ArrayNum;
      pFVar16 = (this->ComputeGraphs).AllocatorInstance.Data;
      pFVar15 = pFVar16 + (longlong)iVar7 * 0x18;
      while( true ) {
        if ((this->ComputeGraphs).ArrayNum != iVar7) {
          `TCheckedPointerIterator<FOptimusComputeGraphInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_216);
        }
        if (pFVar16 == pFVar15) break;
        UComputeGraph::UpdateResources(*(UComputeGraph **)(pFVar16 + 0x10),false);
        pFVar16 = pFVar16 + 0x18;
      }
      bVar5 = true;
    }
  }
  return bVar5;
}

// CreateComponentBindingDirect @ 14e199b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOptimusComponentSourceBinding * __thiscall
UOptimusDeformer::CreateComponentBindingDirect
          (UOptimusDeformer *this,UOptimusComponentSource *param_1,FName param_2)

{
  TObjectPtr<UOptimusComponentSourceBindingContainer>_u_0 TVar1;
  code *pcVar2;
  bool bVar3;
  UOptimusComponentSourceBinding *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if (param_1 == (UOptimusComponentSource *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5723111267007200200>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                       ,0x438,"InComponentSource");
    if (bVar3) {
code_r0x00014e199bbc:
      pcVar2 = (code *)swi(3);
      pUVar4 = (UOptimusComponentSourceBinding *)(*pcVar2)();
      return pUVar4;
    }
    pUVar4 = (UOptimusComponentSourceBinding *)0x0;
  }
  else if (param_2 == (FName)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5723111267007200200>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                       ,0x438,"!InName.IsNone()");
    if (bVar3) goto code_r0x00014e199bbc;
    pUVar4 = (UOptimusComponentSourceBinding *)0x0;
  }
  else {
    pUVar5 = UOptimusComponentSourceBinding::StaticClass();
    TVar1 = (this->Bindings).field0_0x0;
    pUVar6 = UOptimusComponentSourceBinding::StaticClass();
    CheckIsClassChildOf_Internal(pUVar6,pUVar5);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar5);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._24_4_ = RF_Transactional;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = TVar1;
    local_a8._16_8_ = param_2;
    pUVar4 = (UOptimusComponentSourceBinding *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar7 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar7 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    pUVar5 = *(UClass **)&param_1->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (pUVar4->ComponentType).Class.field0_0x0.DebugPtr = pUVar5;
    pUVar4->BindingName = param_2;
  }
  return pUVar4;
}

// CreateGraphDirect @ 14e19dcd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOptimusNodeGraph * __thiscall
UOptimusDeformer::CreateGraphDirect
          (UOptimusDeformer *this,EOptimusNodeGraphType param_1,FName param_2,TOptional<int> param_3
          )

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  char cVar6;
  UClass *pUVar7;
  UOptimusNodeGraph *pUVar8;
  FString *pFVar9;
  UClass *pUVar10;
  longlong *plVar11;
  FName local_res18 [2];
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong local_100;
  undefined1 local_f8 [16];
  FString local_e8;
  FString local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  if ((param_1 - Update & 0xfffffffb) != 0) {
    local_res18[0] = param_2;
    pUVar7 = UOptimusNodeGraph::StaticClass();
    if (param_1 == Setup) {
      if (1 < *(int *)&(this->ValueMap).field_0x30) {
        iVar2 = *(int *)&(this->ValueMap).field_0x30;
        if (iVar2 < 1) {
          local_108 = 0;
          local_100 = (longlong)iVar2;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pUVar8 = (UOptimusNodeGraph *)(*pcVar3)();
            return pUVar8;
          }
        }
        if (*(int *)(**(longlong **)&(this->ValueMap).field_0x28 + 0x30) == 0) {
          return (UOptimusNodeGraph *)0x0;
        }
      }
      local_res18[0] = UOptimusNodeGraph::SetupGraphName;
    }
    else if (param_1 == ExternalTrigger) {
      pFVar9 = ::FName::ToString(local_res18,&local_e8);
      bVar5 = UOptimusNodeGraph::IsValidUserGraphName(pFVar9,(FText *)0x0);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        return (UOptimusNodeGraph *)0x0;
      }
      local_res18[0] =
           Optimus::GetUniqueNameForScope
                     ((UObject *)local_f8,(FName)&this[-1].ConstantValueUpdateDelegate.field_0x8);
      local_res18[0] = *(FName *)local_res18[0];
    }
    else if (param_1 == Function) {
      pFVar9 = ::FName::ToString(local_res18,&local_d8);
      bVar5 = UOptimusNodeGraph::IsValidUserGraphName(pFVar9,(FText *)0x0);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        return (UOptimusNodeGraph *)0x0;
      }
      pUVar7 = UOptimusFunctionNodeGraph::StaticClass();
      local_res18[0] =
           Optimus::GetUniqueNameForScope
                     ((UObject *)(local_f8 + 8),
                      (FName)&this[-1].ConstantValueUpdateDelegate.field_0x8);
      local_res18[0] = *(FName *)local_res18[0];
    }
    FVar4 = local_res18[0];
    puVar1 = &this[-1].ConstantValueUpdateDelegate.field_0x8;
    if (local_res18[0] == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)puVar1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar10 = UOptimusNodeGraph::StaticClass();
    CheckIsClassChildOf_Internal(pUVar10,pUVar7);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar7);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._24_4_ = RF_Transactional;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = puVar1;
    local_c8._16_8_ = FVar4;
    pUVar8 = (UOptimusNodeGraph *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar11 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    pUVar8->GraphType = param_1;
    if (*(char *)((longlong)param_3 + 4) == '\0') {
      return pUVar8;
    }
    cVar6 = (**(code **)(this->_padding_ + 0x40))(this,pUVar8,*(undefined4 *)param_3);
    if (cVar6 != '\0') {
      return pUVar8;
    }
    Optimus::RemoveObject((UObject *)pUVar8);
  }
  return (UOptimusNodeGraph *)0x0;
}

// CreateInstance @ 14e19e080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMeshDeformerInstance * __thiscall
UOptimusDeformer::CreateInstance
          (UOptimusDeformer *this,UMeshComponent *param_1,UMeshDeformerInstanceSettings *param_2)

{
  bool bVar1;
  EShaderPlatform EVar2;
  FSceneInterface *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UOptimusDeformerInstance *pUVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (param_1 != (UMeshComponent *)0x0) {
    pFVar3 = UActorComponent::GetScene((UActorComponent *)param_1);
    EVar2 = GMaxRHIShaderPlatform;
    if (pFVar3 != (FSceneInterface *)0x0) {
      pFVar3 = UActorComponent::GetScene((UActorComponent *)param_1);
      EVar2 = FSceneInterface::GetShaderPlatform(pFVar3);
    }
    bVar1 = Optimus::IsEnabled();
    if ((bVar1) && (bVar1 = Optimus::IsSupported(EVar2), bVar1)) {
      if (param_1->_padding_ == 0) {
        UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
      }
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)param_1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar4 = UOptimusDeformerDynamicInstanceManager::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_a8,pUVar4);
      local_a8._8_8_ = param_1;
      pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
      if (local_a8._64_8_ != 0) {
        plVar7 = (longlong *)(local_a8 + 0x50);
        if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_a8._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      pUVar6 = CreateOptimusInstance(this,param_1,param_2);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UOptimusDeformerInstance *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      *(UOptimusDeformerInstance **)(pUVar5 + 1) = pUVar6;
      return (UMeshDeformerInstance *)pUVar5;
    }
  }
  return (UMeshDeformerInstance *)0x0;
}

// CreateOptimusInstance @ 14e19ea50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UOptimusDeformerInstance * __thiscall
UOptimusDeformer::CreateOptimusInstance
          (UOptimusDeformer *this,UMeshComponent *param_1,UMeshDeformerInstanceSettings *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FName FVar7;
  FName FVar8;
  pmf_84c5e077 this_00;
  UOptimusDeformerInstance *pUVar9;
  UActorComponent *this_01;
  FSceneInterface *pFVar10;
  longlong *plVar11;
  ForAnyElementType FVar12;
  undefined1 auStackY_168 [32];
  FName local_130;
  UMeshComponent *local_128;
  UObject *local_120;
  FString local_118;
  FString local_108;
  FName local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [24];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_130 = (FName)this->_padding_;
  ::FName::ToString(&local_130,&local_108);
  ::FString::ConcatFC(&local_118,&local_108,L"_Instance");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar12.Data = local_118.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FName::FName(&local_f8,(wchar_t *)FVar12.Data);
  FVar8 = *pFVar4;
  pUVar5 = Z_Construct_UClass_UObject_NoRegister();
  pUVar6 = StaticFindObjectFast(pUVar5,(UObject *)param_1,FVar8,None,RF_NoFlags,Borrowed);
  if (pUVar6 != (UObject *)0x0) {
    FVar7 = (FName)Z_Construct_UClass_UObject_NoRegister();
    FVar8 = MakeUniqueObjectName
                      ((UObject *)local_f0,(UClass *)param_1,FVar7,FVar8.ComparisonIndex.Value.Value
                      );
    FVar8 = *(FName *)FVar8;
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (FVar8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar5 = UOptimusDeformerInstance::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar5);
  local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_c8._56_8_ = (UPackage *)0x0;
  local_c8._24_4_ = RF_NoFlags;
  local_c8._40_8_ = (UObject *)0x0;
  local_c8[0x20] = false;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = FVar8;
  this_00 = (pmf_84c5e077)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar11 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (param_1 == (UMeshComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMeshComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformerInstance.cpp"
                       ,0x14c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar9 = (UOptimusDeformerInstance *)(*pcVar2)();
      return pUVar9;
    }
  }
  local_128 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)this_00 + 0x30),(FObjectPtr)&local_128);
  this_01 = (UActorComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this_00 + 0x30));
  pFVar10 = UActorComponent::GetScene(this_01);
  *(FSceneInterface **)((longlong)this_00 + 0x198) = pFVar10;
  if (param_2 != (UMeshDeformerInstanceSettings *)0x0) {
    pUVar5 = UOptimusDeformerInstanceSettings::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
       (local_120 = (UObject *)param_2,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar5->_padding_)) goto LAB_14e19ec35;
  }
  local_120 = (UObject *)0x0;
LAB_14e19ec35:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_120 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_120);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)this_00 + 0x38),(FObjectPtr)&local_120);
  UOptimusDeformerInstance::SetupFromDeformer((UOptimusDeformerInstance *)this_00,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->CompileEndDelegate,
             (void *)this_00);
  TMulticastDelegateRegistration<void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>::
  AddUObject<UOptimusDeformerInstance>
            ((TMulticastDelegateRegistration<void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
              *)&this->CompileEndDelegate,(UOptimusDeformerInstance *)(local_f0 + 8),this_00);
  TMulticastDelegateRegistration<void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UOptimusDeformerInstance>
            ((TMulticastDelegateRegistration<void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
              *)&this->ConstantValueUpdateDelegate,(UOptimusDeformerInstance *)local_e0,
             (pmf_32a85410)this_00);
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
  AddUObject<UOptimusDeformerInstance>
            ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &this->SetAllInstancesCanbeActiveDelegate,(UOptimusDeformerInstance *)(local_e0 + 8),
             (pmf_ab986fdf)this_00);
  return (UOptimusDeformerInstance *)this_00;
}

// CreateResourceDirect @ 14e1a03b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOptimusResourceDescription * __thiscall
UOptimusDeformer::CreateResourceDirect(UOptimusDeformer *this,FName param_1)

{
  TObjectPtr<UOptimusResourceContainer>_u_0 TVar1;
  code *pcVar2;
  bool bVar3;
  UOptimusResourceDescription *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (param_1 == (FName)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5723111267007200377>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                       ,0x387,"!InName.IsNone()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UOptimusResourceDescription *)(*pcVar2)();
      return pUVar4;
    }
    pUVar4 = (UOptimusResourceDescription *)0x0;
  }
  else {
    pUVar5 = UOptimusResourceDescription::StaticClass();
    TVar1 = (this->Resources).field0_0x0;
    pUVar6 = UOptimusResourceDescription::StaticClass();
    CheckIsClassChildOf_Internal(pUVar6,pUVar5);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar5);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._24_4_ = RF_Transactional;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = TVar1;
    local_98._16_8_ = param_1;
    pUVar4 = (UOptimusResourceDescription *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar7 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar7 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  return pUVar4;
}

// CreateSettingsInstance @ 14e1a04d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMeshDeformerInstanceSettings * __thiscall
UOptimusDeformer::CreateSettingsInstance(UOptimusDeformer *this,UMeshComponent *param_1)

{
  longlong lVar1;
  FName *pFVar2;
  FName FVar3;
  FName FVar4;
  UClass *pUVar5;
  UOptimusDeformerInstanceSettings *this_00;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined1 local_d8 [8];
  FString local_d0;
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_d8 = (undefined1  [8])this->_padding_;
  ::FName::ToString((FName *)local_d8,&local_c0);
  ::FString::ConcatFC(&local_d0,&local_c0,L"_Settings");
  iVar7 = local_d0.Data.ArrayNum + -1;
  if (local_d0.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  pFVar2 = ::FName::FName((FName *)local_d8,iVar7,(wchar_t *)local_d0.Data.AllocatorInstance.Data,
                          FNAME_Add);
  FVar4 = *pFVar2;
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  lVar1 = param_1->_padding_;
  FVar3 = (FName)UOptimusDeformerInstanceSettings::StaticClass();
  local_e8 = 0;
  FVar4 = MakeUniqueObjectName
                    ((UObject *)local_d8,(UClass *)param_1,FVar3,FVar4.ComparisonIndex.Value.Value);
  FVar4 = *(FName *)FVar4;
  if (FVar4 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar5 = UOptimusDeformerInstanceSettings::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar5);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = param_1;
  local_a8._16_8_ = FVar4;
  local_a8._24_4_ = (uint)lVar1 >> 5 & RF_Public;
  this_00 = (UOptimusDeformerInstanceSettings *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar6 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  UOptimusDeformerInstanceSettings::InitializeSettings(this_00,this,param_1);
  return (UMeshDeformerInstanceSettings *)this_00;
}

// CreateVariableDirect @ 14e1a0940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOptimusVariableDescription * __thiscall
UOptimusDeformer::CreateVariableDirect(UOptimusDeformer *this,FName param_1)

{
  TObjectPtr<UOptimusVariableContainer>_u_0 TVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  UOptimusVariableDescription *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  FGuid *pFVar10;
  longlong *plVar11;
  undefined1 auStackY_d8 [32];
  FGuid local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if (param_1 == (FName)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5723111267007200800>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                       ,0x1e0,"!InName.IsNone()");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pUVar7 = (UOptimusVariableDescription *)(*pcVar2)();
      return pUVar7;
    }
    pUVar7 = (UOptimusVariableDescription *)0x0;
  }
  else {
    pUVar8 = UOptimusVariableDescription::StaticClass();
    TVar1 = (this->Variables).field0_0x0;
    pUVar9 = UOptimusVariableDescription::StaticClass();
    CheckIsClassChildOf_Internal(pUVar9,pUVar8);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar8);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._24_4_ = RF_Transactional;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = TVar1;
    local_98._16_8_ = param_1;
    pUVar7 = (UOptimusVariableDescription *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar11 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    pFVar10 = FGuid::NewGuid(&local_a8);
    uVar3 = pFVar10->B;
    uVar4 = pFVar10->C;
    uVar5 = pFVar10->D;
    (pUVar7->Guid).A = pFVar10->A;
    (pUVar7->Guid).B = uVar3;
    (pUVar7->Guid).C = uVar4;
    (pUVar7->Guid).D = uVar5;
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  }
  return pUVar7;
}

// FindCompatibleBindingWithInterface @ 14e1b0f20

UOptimusComponentSourceBinding * __thiscall
UOptimusDeformer::FindCompatibleBindingWithInterface
          (UOptimusDeformer *this,UOptimusComputeDataInterface *param_1)

{
  int iVar1;
  int iVar2;
  UOptimusComponentSourceBindingContainer *pUVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  UOptimusComponentSourceBinding *pUVar7;
  UOptimusComponentSource *pUVar8;
  longlong *plVar9;
  UClass *pUVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res10 [8];
  FScriptContainerElement *local_res18;
  undefined1 local_res20 [8];
  
  if (param_1 == (UOptimusComputeDataInterface *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5723111267007197369>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                       ,0xf47,"InDataInterface");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar7 = (UOptimusComponentSourceBinding *)(*pcVar5)();
      return pUVar7;
    }
  }
  else {
    pUVar3 = (this->Bindings).field0_0x0.DebugPtr;
    pFVar13 = (pUVar3->Bindings).AllocatorInstance.Data;
    iVar1 = (pUVar3->Bindings).ArrayNum;
    pFVar12 = pFVar13 + (longlong)iVar1 * 8;
    local_res18 = pFVar12;
    while( true ) {
      if ((pUVar3->Bindings).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UOptimusComponentSourceBinding_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar13 == pFVar12) break;
      pUVar7 = *(UOptimusComponentSourceBinding **)pFVar13;
      pUVar8 = UOptimusComponentSourceBinding::GetComponentSource(pUVar7);
      if (pUVar8 == (UOptimusComponentSource *)0x0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5723111267007197362>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                           ,0xf4e,"Binding->GetComponentSource()");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pUVar7 = (UOptimusComponentSourceBinding *)(*pcVar5)();
          return pUVar7;
        }
      }
      else {
        pUVar8 = UOptimusComponentSourceBinding::GetComponentSource(pUVar7);
        plVar9 = (longlong *)(**(code **)(*(longlong *)pUVar8 + 0x2c0))(pUVar8,local_res20);
        lVar11 = *plVar9;
        if ((lVar11 == 0) ||
           (pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister(), pUVar10 == (UClass *)0x0)) {
LAB_14e1b105e:
          lVar11 = 0;
        }
        else {
          iVar2 = (int)pUVar10->_padding_;
          if ((*(int *)(lVar11 + 0x38) < iVar2) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar10->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (!bVar6) goto LAB_14e1b105e;
          lVar11 = *plVar9;
        }
        plVar9 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x388))(param_1);
        lVar4 = *plVar9;
        pFVar12 = local_res18;
        if ((lVar4 != 0) &&
           (pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister(), pFVar12 = local_res18,
           pUVar10 != (UClass *)0x0)) {
          iVar2 = (int)pUVar10->_padding_;
          if ((*(int *)(lVar4 + 0x38) < iVar2) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar10->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((bVar6) && (lVar4 = *plVar9, lVar4 != 0)) {
            if ((*(int *)(lVar11 + 0x38) < *(int *)(lVar4 + 0x38)) ||
               (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
                != lVar4 + 0x30)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              return pUVar7;
            }
          }
        }
      }
      pFVar13 = pFVar13 + 8;
    }
  }
  return (UOptimusComponentSourceBinding *)0x0;
}

// FindFunctionByGuid @ 14e1b1100

/* WARNING: Removing unreachable block (ram,0x00014e1b1248) */
/* WARNING: Removing unreachable block (ram,0x00014e1b1251) */

UOptimusFunctionNodeGraph * __thiscall
UOptimusDeformer::FindFunctionByGuid(UOptimusDeformer *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  UClass *pUVar11;
  UOptimusFunctionNodeGraph *pUVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  longlong local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  
  pFVar14 = (this->Graphs).AllocatorInstance.Data;
  iVar2 = (this->Graphs).ArrayNum;
  local_res20 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  pFVar1 = pFVar14 + (longlong)iVar2 * 8;
  do {
    while( true ) {
      if ((this->Graphs).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UOptimusNodeGraph>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar14 == pFVar1) {
        iVar2 = (int)local_48;
        pFVar1 = local_50.Data + (longlong)(int)local_48 * 8;
        FVar13.Data = local_50.Data;
        while( true ) {
          if ((int)local_48 != iVar2) {
            `TCheckedPointerIterator<UOptimusFunctionNodeGraph_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res18);
          }
          if (FVar13.Data == pFVar1) break;
          pUVar12 = *(UOptimusFunctionNodeGraph **)FVar13.Data;
          uVar3 = (pUVar12->Guid).C;
          uVar6 = (pUVar12->Guid).D;
          uVar4 = (pUVar12->Guid).A;
          uVar7 = (pUVar12->Guid).B;
          if (((uVar6 == param_1->D && uVar7 == param_1->B) && uVar4 == param_1->A) &&
              uVar3 == param_1->C) {
            if (local_50.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data);
            }
            return pUVar12;
          }
          FVar13.Data = FVar13.Data + 8;
        }
        if (local_50.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data);
        }
        return (UOptimusFunctionNodeGraph *)0x0;
      }
      lVar5 = *(longlong *)pFVar14;
      if (lVar5 != 0) break;
LAB_14e1b1256:
      local_58 = 0;
      pFVar14 = pFVar14 + 8;
    }
    pUVar11 = UOptimusFunctionNodeGraph::StaticClass();
    iVar10 = (int)pUVar11->_padding_;
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar10) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar10 * 8)
        != &pUVar11->_padding_)) goto LAB_14e1b1256;
    local_58 = lVar5;
    if ((local_50.Data <= (FScriptContainerElement *)&local_58) &&
       (((FScriptContainerElement *)&local_58 < local_50.Data + (longlong)local_48._4_4_ * 8 &&
        (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar9)))) {
      pcVar8 = (code *)swi(3);
      pUVar12 = (UOptimusFunctionNodeGraph *)(*pcVar8)();
      return pUVar12;
    }
    iVar10 = (int)local_48;
    if ((int)local_48 == local_48._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_50,(int *)((longlong)&local_48 + 4));
    }
    pFVar14 = pFVar14 + 8;
    local_48 = CONCAT44(local_48._4_4_,iVar10 + 1);
    *(longlong *)(local_50.Data + (longlong)iVar10 * 8) = local_58;
  } while( true );
}

// FindGraphByName @ 14e1b13e0

UOptimusNodeGraph * __thiscall
UOptimusDeformer::FindGraphByName(UOptimusDeformer *this,FName param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x28))();
  plVar4 = (longlong *)*plVar3;
  lVar2 = plVar3[1];
  plVar1 = plVar4 + (int)lVar2;
  while( true ) {
    if ((int)plVar3[1] != (int)lVar2) {
      `TCheckedPointerIterator<UOptimusNodeGraph_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar4 == plVar1) break;
    if ((FName)((UOptimusNodeGraph *)*plVar4)->_padding_ == param_1) {
      return (UOptimusNodeGraph *)*plVar4;
    }
    plVar4 = plVar4 + 1;
  }
  return (UOptimusNodeGraph *)0x0;
}

// GetActionStack @ 14e1b77b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOptimusActionStack * __thiscall UOptimusDeformer::GetActionStack(UOptimusDeformer *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UOptimusActionStack *pUVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  FName local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar4 = (this->ActionStack).field0_0x0.DebugPtr;
  if (pUVar4 == (UOptimusActionStack *)0x0) {
    pFVar2 = ::FName::FName(local_a8,L"@ActionStack");
    FVar1 = *pFVar2;
    if (FVar1 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar3 = UOptimusActionStack::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._24_4_ = RF_NoFlags;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._8_8_ = this;
    local_98._16_8_ = FVar1;
    pUVar4 = (UOptimusActionStack *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UOptimusActionStack *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->ActionStack).field0_0x0.DebugPtr = pUVar4;
  }
  return pUVar4;
}

// GetAllNodesOfClass @ 14e1b9000

TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusDeformer::GetAllNodesOfClass
          (UOptimusDeformer *this,
          TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UClass *param_1
          )

{
  longlong *plVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  UClass *pUVar6;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *pTVar7;
  ForAnyElementType *pFVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 local_res20 [8];
  longlong local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  pUVar6 = UOptimusNode::StaticClass();
  if (pUVar6 != (UClass *)0x0) {
    iVar5 = (int)pUVar6->_padding_;
    if (((int)param_1->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar5 * 8) != &pUVar6->_padding_
       )) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      local_48 = (this->Graphs).ArrayNum;
      lVar11 = (longlong)local_48;
      _Src = (this->Graphs).AllocatorInstance.Data;
      local_50.Data = (FScriptContainerElement *)0x0;
      if (local_48 == 0) {
        local_44[0] = 0;
        iVar5 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_48,0,&local_50,local_48,local_44);
        memcpy(local_50.Data,_Src,lVar11 << 3);
        iVar5 = local_48;
      }
      local_60.Data = (FScriptContainerElement *)0x0;
      local_58._0_4_ = 0;
      local_58._4_4_ = 0;
      while( true ) {
        if (iVar5 == 0) {
          (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
          __return_storage_ptr__->ArrayNum = (int)local_58;
          __return_storage_ptr__->ArrayMax = local_58._4_4_;
          local_58 = 0;
          local_60.Data = (FScriptContainerElement *)0x0;
          if (local_50.Data == (FScriptContainerElement *)0x0) {
            return __return_storage_ptr__;
          }
          FMemory::Free(local_50.Data);
          return __return_storage_ptr__;
        }
        if ((iVar5 < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar5 = local_48, bVar3)) break;
        iVar10 = iVar5 + -1;
        lVar11 = *(longlong *)(local_50.Data + (longlong)iVar10 * 8);
        iVar4 = (iVar5 - iVar10) + -1;
        if (iVar4 != 0) {
          memmove(local_50.Data + (longlong)iVar10 * 8,local_50.Data + (longlong)iVar10 * 8 + 8,
                  (longlong)iVar4 << 3);
          iVar5 = local_48;
        }
        local_48 = iVar5 + -1;
        plVar12 = *(longlong **)(lVar11 + 0x38);
        iVar5 = *(int *)(lVar11 + 0x40);
        plVar1 = plVar12 + iVar5;
        while( true ) {
          if (*(int *)(lVar11 + 0x40) != iVar5) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<UOptimusNode_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (plVar12 == plVar1) break;
          local_68 = *plVar12;
          if (param_1 != (UClass *)0x0) {
            iVar4 = (int)param_1->_padding_;
            if ((*(int *)(*(longlong *)(local_68 + 0x10) + 0x38) < iVar4) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)(local_68 + 0x10) + 0x30) + (longlong)iVar4 * 8) !=
                &param_1->_padding_)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              if (((local_60.Data <= (FScriptContainerElement *)&local_68) &&
                  ((FScriptContainerElement *)&local_68 <
                   local_60.Data + (longlong)local_58._4_4_ * 8)) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar3)) {
                pcVar2 = (code *)swi(3);
                pTVar7 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
                return pTVar7;
              }
              if ((int)local_58 == local_58._4_4_) {
                local_58._0_4_ =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_60,(int *)((longlong)&local_58 + 4));
              }
              lVar9 = (longlong)(int)local_58;
              local_58._0_4_ = (int)local_58 + 1;
              *(longlong *)(local_60.Data + lVar9 * 8) = local_68;
            }
          }
          plVar12 = plVar12 + 1;
        }
        pFVar8 = (ForAnyElementType *)
                 (**(code **)(*(longlong *)(lVar11 + 0x28) + 0x28))(lVar11 + 0x28);
        if ((&local_50 == pFVar8) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar7;
        }
        iVar4 = *(int *)&pFVar8[1].Data;
        iVar5 = local_48;
        if (iVar4 != 0) {
          iVar5 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,iVar4,&local_50,&local_48,local_44);
          memcpy(local_50.Data + (longlong)iVar5 * 8,pFVar8->Data,(longlong)iVar4 << 3);
          iVar5 = local_48;
        }
      }
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5723111267007199669>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                     ,0x64b,"InNodeClass->IsChildOf<UOptimusNode>()");
  if (!bVar3) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pcVar2 = (code *)swi(3);
  pTVar7 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar7;
}

// GetAssetRegistryTags @ 14e1ba200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UOptimusDeformer::GetAssetRegistryTags
          (UOptimusDeformer *this,
          TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 auStack_188 [8];
  UOptimusDeformer *pUStack_180;
  int iStack_178;
  int iStack_174;
  ForElementType<UObject_const_*> FStack_170;
  longlong *plStack_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext FStack_108;
  FString aFStack_100 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [32];
  uint *puStack_a8;
  uint uStack_a0;
  int iStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  FAssetBundleData *pFStack_68;
  bool bStack_53;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(UOptimusDeformer **)pFVar11->InlineData == this) {
      return;
    }
  }
  FStack_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)auStack_c8,(UObject *)this,Uncategorized);
  bStack_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  pUStack_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&pUStack_180) &&
      (&pUStack_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(UOptimusDeformer **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
  pcVar5 = *(code **)(this->_padding_ + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&FStack_108,(FAssetRegistryTagsContextData *)auStack_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(UOptimusDeformer **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
    goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (auStack_c8._8_4_ - iStack_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = uStack_a0;
  iStack_160 = 0;
  iStack_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (uStack_a0 != 0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      iStack_148 = iStack_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_178 = (int)lVar13;
    uStack_14c = iStack_178 + -1 + iStack_148;
    if ((int)uStack_a0 < (int)uStack_14c) {
      uStack_14c = uStack_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = auStack_c8._8_4_ - iStack_94;
  plStack_168 = (longlong *)auStack_c8;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = uStack_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = uStack_d4;
  iVar8 = (int)uStack_a0 >> 5;
  TStack_130._28_4_ = uStack_d4;
  TStack_130.BaseBitIndex = iStack_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)uStack_a0;
  plStack_138 = plStack_168;
  TStack_130.Array = pTStack_158;
  if (((int)uStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != uStack_a0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_174 = (int)lVar13;
    uVar16 = iStack_174 + -1 + uVar18;
    if ((int)uStack_a0 < (int)uVar16) {
      uVar16 = uStack_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStack_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10))) &&
       (plVar4 == (longlong *)auStack_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)FStack_170,aFStack_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (aFStack_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         pFStack_68;
  }
  uStack_80 = 0;
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_c8);
  return;
}

// GetAssetRegistryTags @ 14e1ba210

void __thiscall
UOptimusDeformer::GetAssetRegistryTags(UOptimusDeformer *this,FAssetRegistryTagsContext param_1)

{
  FScriptContainerElement *pFVar1;
  UOptimusComponentSourceBindingContainer *pUVar2;
  UOptimusComponentSourceBinding *this_00;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  FAssetRegistryTagsContext FVar8;
  UOptimusComponentSource *pUVar9;
  longlong *plVar10;
  UClass *pUVar11;
  FString *pFVar12;
  FName *pFVar13;
  UPackage *pUVar14;
  int iVar15;
  UObject *pUVar16;
  wchar_t *pwVar17;
  FScriptContainerElement *pFVar18;
  ForAnyElementType FVar19;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  ForAnyElementType local_168;
  undefined8 local_160;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  TArray<UOptimusFunctionNodeGraph_*,TSizedDefaultAllocator<32>_> local_118;
  FSoftObjectPath local_108;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  FAssetRegistryTag local_c8;
  FAssetRegistryTag local_a8;
  FAssetRegistryTag local_88;
  FAssetRegistryTagsContext local_68;
  undefined1 local_60 [8];
  FName local_58;
  FName local_50;
  FString local_48;
  
  FVar8.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext(&local_68,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar8);
  pUVar2 = (this->Bindings).field0_0x0.DebugPtr;
  if (pUVar2 == (UOptimusComponentSourceBindingContainer *)0x0) goto LAB_14e1ba3f4;
  pFVar18 = (pUVar2->Bindings).AllocatorInstance.Data;
  iVar15 = (pUVar2->Bindings).ArrayNum;
  pFVar1 = pFVar18 + (longlong)iVar15 * 8;
  while( true ) {
    if ((pUVar2->Bindings).ArrayNum != iVar15) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UOptimusComponentSourceBinding>,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar18 == pFVar1) goto LAB_14e1ba3f4;
    this_00 = *(UOptimusComponentSourceBinding **)pFVar18;
    if (((this_00 != (UOptimusComponentSourceBinding *)0x0) && (this_00->bIsPrimaryBinding != false)
        ) && (pUVar9 = UOptimusComponentSourceBinding::GetComponentSource(this_00),
             pUVar9 != (UOptimusComponentSource *)0x0)) break;
    pFVar18 = pFVar18 + 8;
  }
  pUVar9 = UOptimusComponentSourceBinding::GetComponentSource(this_00);
  plVar10 = (longlong *)(**(code **)(*(longlong *)pUVar9 + 0x2c0))(pUVar9,local_60);
  lVar3 = *plVar10;
  if ((lVar3 == 0) ||
     (pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister(), pUVar11 == (UClass *)0x0)) {
LAB_14e1ba30d:
    pUVar16 = (UObject *)0x0;
  }
  else {
    iVar15 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar15) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar11->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14e1ba30d;
    pUVar16 = (UObject *)*plVar10;
  }
  if (pUVar16 != (UObject *)0x0) {
    local_108.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_108.AssetPath.PackageName.Number = 0;
    local_108.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_108.AssetPath.AssetName.Number = 0;
    local_108.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.SubPathString.Data.ArrayNum = 0;
    local_108.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_108,pUVar16);
    pFVar12 = FSoftObjectPath::ToString(&local_108,&local_48);
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_158,pwVar17);
    pFVar13 = ::FName::FName(&local_58,L"PrimaryBindingClass");
    local_c8.Name = *pFVar13;
    local_c8.Value.Data.AllocatorInstance.Data = local_158.Data.AllocatorInstance.Data;
    local_c8.Value.Data.ArrayNum = local_158.Data.ArrayNum;
    local_c8.Value.Data.ArrayMax = local_158.Data.ArrayMax;
    local_158.Data.ArrayNum = 0;
    local_158.Data.ArrayMax = 0;
    local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Type = TT_Hidden;
    local_c8.DisplayFlags = 0;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_c8);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_108.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.SubPathString.Data.AllocatorInstance.Data);
    }
  }
LAB_14e1ba3f4:
  local_168.Data = (FScriptContainerElement *)0x0;
  local_160 = 0;
  GetFunctionGraphs(this,&local_118,UOptimusFunctionNodeGraph::AccessSpecifierPublicName);
  iVar15 = local_118.ArrayNum;
  pFVar1 = local_118.AllocatorInstance.Data + (longlong)iVar15 * 8;
  FVar19.Data = local_118.AllocatorInstance.Data;
  while( true ) {
    if (local_118.ArrayNum != iVar15) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UOptimusFunctionNodeGraph_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (FVar19.Data == pFVar1) break;
    lVar3 = *(longlong *)FVar19.Data;
    local_d8 = *(undefined8 *)(lVar3 + 0x18);
    local_e8 = *(undefined8 *)(lVar3 + 400);
    uStack_e0 = *(undefined8 *)(lVar3 + 0x198);
    uStack_d0 = *(undefined8 *)(lVar3 + 0x180);
    if (((local_168.Data <= (FScriptContainerElement *)&local_e8) &&
        ((FScriptContainerElement *)&local_e8 < local_168.Data + (longlong)local_160._4_4_ * 0x20))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (int)local_160;
    if ((int)local_160 == local_160._4_4_) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x420,&local_168,(int *)((longlong)&local_160 + 4));
    }
    local_160 = CONCAT44(local_160._4_4_,iVar7 + 1);
    FVar19.Data = FVar19.Data + 8;
    *(undefined8 *)(local_168.Data + (longlong)iVar7 * 0x20) = local_e8;
    *(undefined8 *)(local_168.Data + (longlong)iVar7 * 0x20 + 8) = uStack_e0;
    *(undefined8 *)(local_168.Data + (longlong)iVar7 * 0x20 + 0x10) = local_d8;
    *(undefined8 *)(local_168.Data + (longlong)iVar7 * 0x20 + 0x10 + 8) = uStack_d0;
  }
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FOptimusFunctionNodeGraphHeaderWithGuidArray.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar14 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusFunctionNodeGraphHeaderWithGuidArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeaderWithGuidArray,
                         (UObject *)pUVar14,L"OptimusFunctionNodeGraphHeaderWithGuidArray");
  }
  UScriptStruct::ExportText
            (Z_Registration_Info_UScriptStruct_FOptimusFunctionNodeGraphHeaderWithGuidArray.
             OuterSingleton,&local_128,&local_168,(void *)0x0,(UObject *)0x0,0,(UObject *)0x0,true);
  FVar19.Data = (FScriptContainerElement *)L"";
  if (local_128.Data.ArrayNum != 0) {
    FVar19.Data = local_128.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_148,(wchar_t *)FVar19.Data);
  pFVar13 = ::FName::FName(&local_50,PublicFunctionsWithGuidAssetTagName);
  local_a8.Name = *pFVar13;
  local_a8.Value.Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
  local_a8.Value.Data.ArrayNum = local_148.Data.ArrayNum;
  local_a8.Value.Data.ArrayMax = local_148.Data.ArrayMax;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Type = TT_Hidden;
  local_a8.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_a8);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_168.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data);
  }
  SkeletalMeshHalfEdgeBufferAccessor::GetHalfEdgeRequirementAssetTagName();
  cVar6 = (**(code **)(this->_padding_ + 0x10))(&this->_padding_);
  pwVar17 = L"False";
  if (cVar6 != '\0') {
    pwVar17 = L"True";
  }
  ::FString::FString(&local_138,pwVar17);
  local_88.Name = local_res20;
  local_88.Value.Data.AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
  local_88.Value.Data.ArrayNum = local_138.Data.ArrayNum;
  local_88.Value.Data.ArrayMax = local_138.Data.ArrayMax;
  local_138.Data.ArrayNum = 0;
  local_138.Data.ArrayMax = 0;
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Type = TT_Hidden;
  local_88.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_88);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  return;
}

// GetCollectionOwner @ 14e1bce30

IOptimusNodeGraphCollectionOwner * __thiscall
UOptimusDeformer::GetCollectionOwner(UOptimusDeformer *this)

{
  return (IOptimusNodeGraphCollectionOwner *)0x0;
}

// GetCollectionPath @ 14e1bce80

FString * __thiscall
UOptimusDeformer::GetCollectionPath(UOptimusDeformer *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetCollectionRoot @ 14e1bcfa0

IOptimusNodeGraphCollectionOwner * __thiscall
UOptimusDeformer::GetCollectionRoot(UOptimusDeformer *this)

{
  if (this == (UOptimusDeformer *)&DAT_00000038) {
    this = (UOptimusDeformer *)0x0;
  }
  return (IOptimusNodeGraphCollectionOwner *)this;
}

// GetFunctionGraphs @ 14e1c5440

TArray<UOptimusFunctionNodeGraph_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusDeformer::GetFunctionGraphs
          (UOptimusDeformer *this,
          TArray<UOptimusFunctionNodeGraph_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FName param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  TArray<UOptimusFunctionNodeGraph_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  longlong local_38 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar10 = (this->Graphs).AllocatorInstance.Data;
  iVar2 = (this->Graphs).ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  do {
    while( true ) {
      if ((this->Graphs).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UOptimusNodeGraph>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar1) {
        return __return_storage_ptr__;
      }
      lVar3 = *(longlong *)pFVar10;
      if (lVar3 != 0) break;
LAB_14e1c559f:
      local_38[0] = 0;
LAB_14e1c55a8:
      pFVar10 = pFVar10 + 8;
    }
    pUVar8 = UOptimusFunctionNodeGraph::StaticClass();
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar7) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar8->_padding_)) goto LAB_14e1c559f;
    local_38[0] = lVar3;
    if ((param_1 != (FName)0x0) && (*(FName *)(lVar3 + 0x188) != param_1)) goto LAB_14e1c55a8;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_38) &&
       (((FScriptContainerElement *)local_38 <
         pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8 &&
        (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)))) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<UOptimusFunctionNodeGraph_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == __return_storage_ptr__->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    pFVar10 = pFVar10 + 8;
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
         local_38[0];
  } while( true );
}

// GetGraphs @ 14e1c5890

TArray<UOptimusNodeGraph_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusDeformer::GetGraphs(UOptimusDeformer *this)

{
  return (TArray<UOptimusNodeGraph_*,TSizedDefaultAllocator<32>_> *)&(this->ValueMap).field_0x28;
}

// GetNodesUsingComponentBinding @ 14e1cb390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e1cb3f6) */

TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusDeformer::GetNodesUsingComponentBinding
          (UOptimusDeformer *this,
          TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UOptimusComponentSourceBinding *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UOptimusComponentSourceBinding *pUVar7;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_90;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_88;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar6 = UOptimusNode_ComponentSource::StaticClass();
  GetAllNodesOfClass(this,&local_88,pUVar6);
  pFVar1 = local_88.AllocatorInstance.Data + (longlong)local_88.ArrayNum * 8;
  FVar10.Data = local_88.AllocatorInstance.Data;
  do {
    if (FVar10.Data == pFVar1) {
      if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    lVar9 = *(longlong *)FVar10.Data;
    local_90 = lVar9;
    if (lVar9 == 0) {
LAB_14e1cb43e:
      lVar9 = 0;
    }
    else {
      pUVar6 = UOptimusNode_ComponentSource::StaticClass();
      iVar5 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < iVar5) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar5 * 8)
          != &pUVar6->_padding_)) goto LAB_14e1cb43e;
    }
    local_58 = (void *)0x0;
    local_50 = 0;
    local_4c = 4;
    pUVar7 = (UOptimusComponentSourceBinding *)
             (**(code **)(*(longlong *)(lVar9 + 0x108) + 0x10))
                       ((longlong *)(lVar9 + 0x108),local_78);
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if (pUVar7 == param_1) {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)&local_90) &&
         ((FScriptContainerElement *)&local_90 <
          pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
        local_b0 = (longlong)__return_storage_ptr__->ArrayNum;
        local_a8 = 8;
        local_c8 = &local_90;
        local_c0 = pFVar2;
        local_b8 = (longlong)__return_storage_ptr__->ArrayMax;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(longlong *)(pFVar2 + (longlong)iVar5 * 8) = local_90;
    }
    FVar10.Data = FVar10.Data + 8;
  } while( true );
}

// GetNodesUsingResource @ 14e1cb580

/* WARNING: Removing unreachable block (ram,0x00014e1cb5d9) */

TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusDeformer::GetNodesUsingResource
          (UOptimusDeformer *this,
          TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UOptimusResourceDescription *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UOptimusResourceDescription *pUVar7;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  longlong local_48;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar6 = UOptimusNode_ResourceAccessorBase::StaticClass();
  GetAllNodesOfClass(this,&local_40,pUVar6);
  pFVar1 = local_40.AllocatorInstance.Data + (longlong)local_40.ArrayNum * 8;
  FVar10.Data = local_40.AllocatorInstance.Data;
  do {
    if (FVar10.Data == pFVar1) {
      if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    lVar9 = *(longlong *)FVar10.Data;
    local_48 = lVar9;
    if (lVar9 == 0) {
LAB_14e1cb627:
      lVar9 = 0;
    }
    else {
      pUVar6 = UOptimusNode_ResourceAccessorBase::StaticClass();
      iVar5 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < iVar5) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar5 * 8)
          != &pUVar6->_padding_)) goto LAB_14e1cb627;
    }
    pUVar7 = (UOptimusResourceDescription *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar9 + 0x128));
    if (pUVar7 == param_1) {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 <
          pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
           local_48;
    }
    FVar10.Data = FVar10.Data + 8;
  } while( true );
}

// GetNodesUsingVariable @ 14e1cb720

/* WARNING: Removing unreachable block (ram,0x00014e1cb779) */

TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusDeformer::GetNodesUsingVariable
          (UOptimusDeformer *this,
          TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UOptimusVariableDescription *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UOptimusVariableDescription *pUVar7;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  longlong local_48;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar6 = UOptimusNode_GetVariable::StaticClass();
  GetAllNodesOfClass(this,&local_40,pUVar6);
  pFVar1 = local_40.AllocatorInstance.Data + (longlong)local_40.ArrayNum * 8;
  FVar10.Data = local_40.AllocatorInstance.Data;
  do {
    if (FVar10.Data == pFVar1) {
      if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    lVar9 = *(longlong *)FVar10.Data;
    local_48 = lVar9;
    if (lVar9 == 0) {
LAB_14e1cb7c7:
      lVar9 = 0;
    }
    else {
      pUVar6 = UOptimusNode_GetVariable::StaticClass();
      iVar5 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < iVar5) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar5 * 8)
          != &pUVar6->_padding_)) goto LAB_14e1cb7c7;
    }
    pUVar7 = (UOptimusVariableDescription *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar9 + 0x120));
    if (pUVar7 == param_1) {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 <
          pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
           local_48;
    }
    FVar10.Data = FVar10.Data + 8;
  } while( true );
}

// GetPreviewMesh @ 14e1d4120

USkeletalMesh * __thiscall UOptimusDeformer::GetPreviewMesh(UOptimusDeformer *this)

{
  return (USkeletalMesh *)this->_padding_;
}

// GetPrimaryComponentBinding @ 14e1d4150

UOptimusComponentSourceBinding * __thiscall
UOptimusDeformer::GetPrimaryComponentBinding(UOptimusDeformer *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UOptimusComponentSourceBindingContainer *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pUVar3 = (this->Bindings).field0_0x0.DebugPtr;
  pFVar4 = (pUVar3->Bindings).AllocatorInstance.Data;
  iVar2 = (pUVar3->Bindings).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pUVar3->Bindings).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UOptimusComponentSourceBinding_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if ((*(UOptimusComponentSourceBinding **)pFVar4)->bIsPrimaryBinding != false) {
      return *(UOptimusComponentSourceBinding **)pFVar4;
    }
    pFVar4 = pFVar4 + 8;
  }
  return (UOptimusComponentSourceBinding *)0x0;
}

// GetPrivateStaticClass @ 14e1d56b0

UClass * __cdecl UOptimusDeformer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDeformer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDeformer",
               &Z_Registration_Info_UClass_UOptimusDeformer.InnerSingleton,
               StaticRegisterNativesUOptimusDeformer,0x200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusDeformer>,
               InternalVTableHelperCtorCaller<UOptimusDeformer>,local_res8,
               UMeshDeformer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDeformer.InnerSingleton;
}

// GetSubGraphReferenceNode @ 14e1e4000

UOptimusNode * __thiscall
UOptimusDeformer::GetSubGraphReferenceNode(UOptimusDeformer *this,UOptimusNodeSubGraph *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UClass *pUVar3;
  UOptimusNodeSubGraph *pUVar4;
  UOptimusNode *pUVar5;
  ForAnyElementType FVar6;
  UOptimusNode *pUVar7;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_18;
  
  pUVar3 = UOptimusNode_SubGraphReference::StaticClass();
  GetAllNodesOfClass(this,&local_18,pUVar3);
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8;
  for (FVar6.Data = local_18.AllocatorInstance.Data; pUVar7 = (UOptimusNode *)0x0,
      FVar6.Data != pFVar1; FVar6.Data = FVar6.Data + 8) {
    pUVar7 = *(UOptimusNode **)FVar6.Data;
    if (pUVar7 == (UOptimusNode *)0x0) {
LAB_14e1e4078:
      pUVar5 = (UOptimusNode *)0x0;
    }
    else {
      pUVar3 = UOptimusNode_SubGraphReference::StaticClass();
      iVar2 = (int)pUVar3->_padding_;
      if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar2) ||
         (pUVar5 = pUVar7,
         (longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar2 * 8)
         != &pUVar3->_padding_)) goto LAB_14e1e4078;
    }
    pUVar4 = (UOptimusNodeSubGraph *)(**(code **)(pUVar5[1]._padding_ + 0x10))();
    if (pUVar4 == param_1) break;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return pUVar7;
}

// GetUpdateGraph @ 14e1e8b00

/* WARNING: Enum "Type": Some values do not have unique names */

UOptimusNodeGraph * __thiscall UOptimusDeformer::GetUpdateGraph(UOptimusDeformer *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  FString local_18;
  
  pFVar3 = (this->Graphs).AllocatorInstance.Data;
  iVar2 = (this->Graphs).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Graphs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UOptimusNodeGraph>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if ((*(UOptimusNodeGraph **)pFVar3)->GraphType == Update) {
      return *(UOptimusNodeGraph **)pFVar3;
    }
    pFVar3 = pFVar3 + 8;
  }
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (UOptimusNodeGraph *)0x0;
}

// GetUpdateGraphIndex @ 14e1e8bc0

int __thiscall UOptimusDeformer::GetUpdateGraphIndex(UOptimusDeformer *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UOptimusNodeGraph *pUVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  pUVar4 = GetUpdateGraph(this);
  if (pUVar4 == (UOptimusNodeGraph *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5723111267007196867>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                       ,0x113d,"UpdateGraph != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  else {
    plVar5 = (longlong *)(**(code **)(pUVar4->_padding_ + 0x10))(&pUVar4->_padding_);
    plVar6 = (longlong *)(**(code **)(*plVar5 + 0x28))(plVar5);
    plVar5 = (longlong *)*plVar6;
    plVar7 = plVar5;
    if (plVar5 != plVar5 + (int)plVar6[1]) {
      do {
        if ((UOptimusNodeGraph *)*plVar7 == pUVar4) {
          return (int)((longlong)plVar7 - (longlong)plVar5 >> 3);
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar5 + (int)plVar6[1]);
      return -1;
    }
  }
  return -1;
}

// IsSkeletalMeshHalfEdgeBufferRequired @ 14e1f0070

bool __thiscall UOptimusDeformer::IsSkeletalMeshHalfEdgeBufferRequired(UOptimusDeformer *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  UClass *pUVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  iVar2 = (int)this->_padding_;
  lVar9 = this->_padding_;
  local_res10 = lVar9 + (longlong)iVar2 * 0x18;
  while( true ) {
    lVar5 = local_res10;
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<FOptimusComputeGraphInfo_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (lVar9 == lVar5) break;
    lVar5 = *(longlong *)(lVar9 + 0x10);
    plVar8 = *(longlong **)(lVar5 + 0x38);
    iVar3 = *(int *)(lVar5 + 0x40);
    plVar1 = plVar8 + iVar3;
    while( true ) {
      if (*(int *)(lVar5 + 0x40) != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<UComputeDataInterface>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (plVar8 == plVar1) break;
      lVar6 = *plVar8;
      pUVar7 = UOptimusHalfEdgeDataInterface::StaticClass();
      iVar4 = (int)pUVar7->_padding_;
      if ((iVar4 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar4 * 8)
          == &pUVar7->_padding_)) {
        return true;
      }
      plVar8 = plVar8 + 1;
    }
    lVar9 = lVar9 + 0x18;
  }
  return false;
}

// MarkModified @ 14e1f1f00

void __thiscall UOptimusDeformer::MarkModified(UOptimusDeformer *this)

{
  if (this->Status != HasErrors) {
    this->Status = Modified;
  }
  return;
}

// MoveGraphDirect @ 14e1f1f20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UOptimusDeformer::MoveGraphDirect(UOptimusDeformer *this,UOptimusNodeGraph *param_1,int param_2)

{
  undefined1 *this_00;
  undefined1 *this_01;
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  TObjectPtr<UOptimusNodeGraph>_u_0 local_res8;
  
  this_01 = &(this->ValueMap).field_0x28;
  plVar1 = *(longlong **)this_01;
  iVar5 = *(int *)&(this->ValueMap).field_0x30;
  plVar7 = plVar1;
  while( true ) {
    if (plVar7 == plVar1 + iVar5) {
      return false;
    }
    if ((UOptimusNodeGraph *)*plVar7 == (UOptimusNodeGraph *)0x0) {
      bVar8 = param_1 == (UOptimusNodeGraph *)0x0;
    }
    else {
      bVar8 = (UOptimusNodeGraph *)*plVar7 == param_1;
    }
    if (bVar8) break;
    plVar7 = plVar7 + 1;
  }
  iVar6 = (int)((longlong)plVar7 - (longlong)plVar1 >> 3);
  if (iVar6 == -1) {
    return false;
  }
  if (param_1->GraphType != ExternalTrigger) {
    return false;
  }
  this_00 = &this[-1].ConstantValueUpdateDelegate.field_0x8;
  if (param_2 == -1) {
    iVar4 = GetUpdateGraphIndex((UOptimusDeformer *)this_00);
  }
  else {
    iVar4 = 0;
    if (1 < *(int *)&(this->ValueMap).field_0x30) {
      if ((iVar5 < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        uVar3 = (*pcVar2)();
        return (bool)uVar3;
      }
      if (*(int *)(**(longlong **)this_01 + 0x30) == 0) {
        iVar4 = 1;
      }
    }
    iVar5 = GetUpdateGraphIndex((UOptimusDeformer *)this_00);
    if (param_2 < iVar5) {
      iVar5 = param_2;
    }
    if (iVar4 < iVar5) {
      iVar4 = iVar5;
    }
  }
  if (iVar6 != iVar4) {
    TArray<TObjectPtr<UOptimusNodeGraph>,TSizedDefaultAllocator<32>_>::RemoveAt
              ((TArray<TObjectPtr<UOptimusNodeGraph>,TSizedDefaultAllocator<32>_> *)this_01,iVar6,
               Default);
    local_res8.DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<UOptimusNodeGraph>,TSizedDefaultAllocator<32>_>::Insert
              ((TArray<TObjectPtr<UOptimusNodeGraph>,TSizedDefaultAllocator<32>_> *)this_01,
               (TObjectPtr<UOptimusNodeGraph> *)&local_res8.ObjectPtr,iVar4);
    Notify((UOptimusDeformer *)this_00,GraphIndexChanged,(UObject *)param_1);
  }
  return true;
}

// Notify @ 14e1f3500

void __thiscall
UOptimusDeformer::Notify(UOptimusDeformer *this,EOptimusGlobalNotifyType param_1,UObject *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType _Src;
  bool bVar5;
  char cVar6;
  UClass *pUVar7;
  FString *pFVar8;
  UObject *pUVar9;
  size_t sVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  int iVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  undefined1 local_150 [24];
  FUtf8String local_138;
  undefined1 local_128 [24];
  ForAnyElementType local_110;
  int local_108;
  int local_104;
  UObject *local_100;
  FScriptContainerElement *local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [24];
  ForAnyElementType local_d0;
  int local_c8;
  int local_c4;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FInstancedStruct local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  if ((param_1 == GraphRemoved) || (param_1 == GraphRenamed)) {
    if (param_2 == (UObject *)0x0) {
      pFVar8 = GetTypeName<UOptimusNodeGraph>(&local_80);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar12);
    }
    pUVar7 = UOptimusNodeGraph::StaticClass();
    iVar13 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar7->_padding_)) {
      pFVar8 = GetTypeName<UOptimusNodeGraph>(&local_70);
      pwVar12 = L"";
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar8 = GetFullNameForCastLogError<UObject>(local_60,param_2);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar12,pwVar14);
    }
    OnGraphRenamedOrRemoved(this,(UOptimusNodeGraph *)param_2);
    goto LAB_14e1f383a;
  }
  if (param_1 != ConstantValueChanged) goto LAB_14e1f383a;
  if (param_2 == (UObject *)0x0) {
LAB_14e1f357e:
    pUVar9 = (UObject *)0x0;
  }
  else {
    pUVar7 = UOptimusNode_ConstantValue::StaticClass();
    iVar13 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar13) ||
       (pUVar9 = param_2,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar13 * 8) !=
       &pUVar7->_padding_)) goto LAB_14e1f357e;
  }
  if (pUVar9 != (UObject *)0x0) {
    local_f0 = (**(code **)(*(longlong *)&pUVar9[6].field_0x18 + 0x20))();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150._16_8_ = 0;
    local_150._8_8_ = 0;
    local_138.Data.ArrayNum = 0;
    local_138.Data.ArrayMax = 0;
    local_150._0_8_ = 0;
    FUtf8String::Reset(&local_138,0);
    local_100 = pUVar9;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)local_150,(FObjectPtr)&local_100);
    _Src.Data = local_138.Data.AllocatorInstance.Data;
    sVar10 = (size_t)local_138.Data.ArrayNum;
    local_128._0_8_ = local_150._0_8_;
    local_110.Data = (FScriptContainerElement *)0x0;
    local_108 = local_138.Data.ArrayNum;
    local_128._8_8_ = local_150._8_8_;
    local_128._16_8_ = local_150._16_8_;
    if (local_138.Data.ArrayNum == 0) {
      local_104 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_138.Data.ArrayNum,0,&local_110,local_138.Data.ArrayNum,&local_104);
      memcpy(local_110.Data,_Src.Data,sVar10);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->ConstantValueUpdateDelegate,(FWriteAccessScope *)&local_c0);
    puVar1 = &(this->ConstantValueUpdateDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar4 = false;
    iVar13 = *(int *)&(this->ConstantValueUpdateDelegate).field_0x10 + -1;
    if (-1 < iVar13) {
      lVar15 = (longlong)iVar13 << 4;
      bVar4 = false;
      do {
        if ((*(int *)&(this->ConstantValueUpdateDelegate).field_0x10 <= iVar13) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)&(this->ConstantValueUpdateDelegate).field_0x8;
        if (*(int *)(lVar15 + 8 + lVar2) == 0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = *(longlong **)(lVar15 + lVar2);
        }
        if (plVar11 == (longlong *)0x0) {
LAB_14e1f3778:
          bVar4 = true;
        }
        else {
          sVar10 = (size_t)local_108;
          local_d0.Data = (FScriptContainerElement *)0x0;
          local_c8 = local_108;
          pcVar3 = *(code **)(*plVar11 + 0x68);
          local_e8._0_8_ = local_128._0_8_;
          local_f8 = local_110.Data;
          local_e8._8_4_ = local_128._8_4_;
          local_e8._12_4_ = local_128._12_4_;
          local_e8._16_4_ = local_128._16_4_;
          local_e8._20_4_ = local_128._20_4_;
          if (local_108 == 0) {
            local_c4 = local_108;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,local_108,0,&local_d0,local_108,&local_c4);
            memcpy(local_d0.Data,local_f8,sVar10);
          }
          cVar6 = (*pcVar3)(plVar11,local_e8,local_f0);
          if (cVar6 == '\0') goto LAB_14e1f3778;
        }
        lVar15 = lVar15 + -0x10;
        iVar13 = iVar13 + -1;
      } while (-1 < iVar13);
    }
    puVar1 = &(this->ConstantValueUpdateDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar4) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->ConstantValueUpdateDelegate,false);
    }
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
    if (local_110.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data);
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    FInstancedStruct::Reset(&local_90);
  }
LAB_14e1f383a:
  if (this->Status != HasErrors) {
    this->Status = Modified;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->GlobalNotifyDelegate,
             (FWriteAccessScope *)&local_a8);
  puVar1 = &(this->GlobalNotifyDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar4 = false;
  iVar13 = *(int *)&(this->GlobalNotifyDelegate).field_0x10 + -1;
  if (-1 < iVar13) {
    lVar15 = (longlong)iVar13 << 4;
    bVar4 = false;
    do {
      if ((*(int *)&(this->GlobalNotifyDelegate).field_0x10 <= iVar13) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)&(this->GlobalNotifyDelegate).field_0x8;
      if (((*(int *)(lVar15 + 8 + lVar2) == 0) ||
          (plVar11 = *(longlong **)(lVar15 + lVar2), plVar11 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar11 + 0x68))(plVar11,param_1,param_2), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar15 = lVar15 + -0x10;
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
  }
  puVar1 = &(this->GlobalNotifyDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->GlobalNotifyDelegate,
               false);
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  return;
}

// OnDataTypeChanged @ 14e1f4b00

void __thiscall UOptimusDeformer::OnDataTypeChanged(UOptimusDeformer *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar7 = (this->Graphs).AllocatorInstance.Data;
  iVar3 = (this->Graphs).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Graphs).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UOptimusNodeGraph>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    lVar5 = *(longlong *)pFVar7;
    puVar6 = *(undefined8 **)(lVar5 + 0x38);
    iVar4 = *(int *)(lVar5 + 0x40);
    puVar2 = puVar6 + iVar4;
    while( true ) {
      if (*(int *)(lVar5 + 0x40) != iVar4) {
        `TCheckedPointerIterator<TObjectPtr<UOptimusNode>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar6 == puVar2) break;
      (**(code **)(*(longlong *)*puVar6 + 0x330))((longlong *)*puVar6,param_1);
      puVar6 = puVar6 + 1;
    }
    pFVar7 = pFVar7 + 8;
  }
  Notify(this,DataTypeChanged,(UObject *)0x0);
  return;
}

// OnGraphRenamedOrRemoved @ 14e1f4de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UOptimusDeformer::OnGraphRenamedOrRemoved(UOptimusDeformer *this,UOptimusNodeGraph *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  UOptimusNode *this_00;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  FAssetData *pFVar8;
  bool bVar9;
  int iVar10;
  UClass *pUVar11;
  FName *pFVar12;
  FModuleManager *this_01;
  IModuleInterface *pIVar13;
  longlong *plVar14;
  UPackage *pUVar15;
  ulonglong uVar16;
  UClass *pUVar17;
  UOptimusDeformer *pUVar18;
  UObject *pUVar19;
  FText *pFVar20;
  FString *pFVar21;
  ulonglong uVar22;
  UOptimusDeformer *this_02;
  FAssetData *this_03;
  wchar_t *pwVar23;
  ForAnyElementType FVar24;
  ForAnyElementType FVar25;
  wchar_t *pwVar26;
  UOptimusNodeGraph *this_04;
  undefined1 auStackY_228 [32];
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  FAssetData *local_1a0;
  undefined8 local_198;
  uint local_190;
  uint local_18c;
  UOptimusNodeGraph *local_188;
  FAssetData *local_180;
  longlong local_178;
  longlong lStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  FScriptContainerElement *local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  FUObjectCppClassStaticFunctions local_130;
  FAssetData *local_128;
  FScriptContainerElement *local_120;
  longlong *local_118;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_110;
  undefined8 local_d8;
  void *local_d0;
  ulonglong local_c8;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_c0;
  FName local_b0;
  undefined1 local_a8 [16];
  FString local_98;
  FString local_88;
  FString local_78;
  undefined2 local_68;
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if (param_1 != (UOptimusNodeGraph *)0x0) {
    pUVar11 = UOptimusFunctionNodeGraph::StaticClass();
    iVar10 = (int)pUVar11->_padding_;
    if ((iVar10 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (this_04 = param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar10 * 8)
       == &pUVar11->_padding_)) goto LAB_14e1f4e3b;
  }
  this_04 = (UOptimusNodeGraph *)0x0;
LAB_14e1f4e3b:
  if (this_04 != (UOptimusNodeGraph *)0x0) {
    local_188 = this_04;
    pFVar12 = ::FName::FName(&local_b0,"AssetRegistry");
    FVar3 = *pFVar12;
    this_01 = FModuleManager::Get();
    pIVar13 = FModuleManager::LoadModuleChecked(this_01,FVar3);
    plVar14 = (longlong *)(**(code **)((longlong)*pIVar13 + 0x40))(pIVar13);
    local_1b0.Data = (FScriptContainerElement *)0x0;
    local_1a8 = 0;
    local_158 = 0;
    local_118 = plVar14;
    pUVar15 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
    local_58 = (void *)0x0;
    local_50 = 0;
    local_4c = 1;
    local_178 = pUVar15->_padding_;
    local_168 = 0;
    lStack_170 = 0;
    uStack_160 = 0;
    local_68 = 0;
    (**(code **)(*plVar14 + 0x100))(plVar14,&local_178,&local_1b0);
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if (((local_1b0.Data <= (FScriptContainerElement *)&local_178) &&
        ((FScriptContainerElement *)&local_178 < local_1b0.Data + (longlong)local_1a8._4_4_ * 0x20))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar10 = (int)local_1a8;
    if ((int)local_1a8 == local_1a8._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x420,&local_1b0,(int *)((longlong)&local_1a8 + 4));
    }
    uVar6 = _UNK_150631d98;
    uVar5 = ___xmm_00000000ffffffff0000008000000000;
    local_18c = iVar10 + 1;
    local_1a8 = CONCAT44(local_1a8._4_4_,local_18c);
    *(longlong *)(local_1b0.Data + (longlong)iVar10 * 0x20) = local_178;
    *(longlong *)(local_1b0.Data + (longlong)iVar10 * 0x20 + 8) = lStack_170;
    *(undefined8 *)(local_1b0.Data + (longlong)iVar10 * 0x20 + 0x10) = local_168;
    *(undefined8 *)(local_1b0.Data + (longlong)iVar10 * 0x20 + 0x10 + 8) = uStack_160;
    uVar16 = (ulonglong)(int)local_18c;
    local_120 = local_1b0.Data + uVar16 * 0x20;
    uVar22 = uVar16;
    FVar25.Data = local_1b0.Data;
    while( true ) {
      pFVar1 = local_120;
      local_150 = FVar25.Data;
      if ((int)uVar16 != (int)uVar22) {
        local_1b8 = 0;
        `TCheckedPointerIterator<FAssetIdentifier,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1b8);
      }
      if (FVar25.Data == pFVar1) break;
      local_1a0 = (FAssetData *)0x0;
      local_198 = 0;
      (**(code **)(*plVar14 + 0x18))(plVar14,*(longlong *)FVar25.Data,&local_1a0);
      uVar22 = (ulonglong)(int)(uint)local_198;
      local_190 = (uint)local_198;
      local_128 = local_1a0 + uVar22;
      this_03 = local_1a0;
      while( true ) {
        pFVar8 = local_128;
        this_02 = (UOptimusDeformer *)0x0;
        local_180 = this_03;
        if ((uint)local_198 != (int)uVar22) {
          local_1b7[0] = 0;
          `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1b7);
        }
        if (this_03 == pFVar8) break;
        if (Z_Registration_Info_UClass_UOptimusDeformer.InnerSingleton == (UClass *)0x0) {
          local_130.AddReferencedObjects = UObject::AddReferencedObjects;
          GetPrivateStaticClassBody
                    (L"/Script/OptimusCore",L"OptimusDeformer",
                     &Z_Registration_Info_UClass_UOptimusDeformer.InnerSingleton,
                     StaticRegisterNativesUOptimusDeformer,0x200,8,CLASS_Intrinsic,CASTCLASS_None,
                     L"Engine",InternalConstructor<UOptimusDeformer>,
                     InternalVTableHelperCtorCaller<UOptimusDeformer>,&local_130,
                     UMeshDeformer::StaticClass,UObject::StaticClass);
        }
        pUVar11 = Z_Registration_Info_UClass_UOptimusDeformer.InnerSingleton;
        pUVar17 = FAssetData::GetClass(this_03,No);
        if ((pUVar17 != (UClass *)0x0) && (pUVar11 != (UClass *)0x0)) {
          iVar10 = (int)pUVar11->_padding_;
          if (((int)pUVar17->_padding_ < iVar10) ||
             ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar10 * 8) !=
              &pUVar11->_padding_)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (bVar9) {
            FVar3 = this_03->PackageName;
            local_d8 = 0;
            local_c8 = 0;
            local_110._0_8_ = 0;
            local_110._8_8_ = 0;
            local_110._32_8_ = 0;
            local_d0 = (void *)0x0;
            local_110._16_8_ = 0;
            local_110._24_8_ = 0;
            local_110._40_8_ = uVar5;
            local_110._48_8_ = uVar6;
            if ((FVar3 == (FName)0x0) || (this_03->AssetName == (FName)0x0)) {
LAB_14e1f5258:
              TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_110);
            }
            else {
              pUVar11 = Z_Construct_UClass_UPackage_NoRegister();
              pUVar15 = (UPackage *)
                        StaticFindObjectFast(pUVar11,(UObject *)0x0,FVar3,None,RF_NoFlags,Borrowed);
              if ((pUVar15 == (UPackage *)0x0) || (bVar9 = UPackage::IsFullyLoaded(pUVar15), !bVar9)
                 ) {
                local_c8 = local_c8 & 0xffffffff00000000;
                if (local_d0 != (void *)0x0) {
                  FMemory::Free(local_d0);
                }
                goto LAB_14e1f5258;
              }
              FVar3 = this_03->AssetName;
              pUVar11 = Z_Construct_UClass_UObject_NoRegister();
              pUVar18 = (UOptimusDeformer *)
                        StaticFindObjectFast
                                  (pUVar11,(UObject *)pUVar15,FVar3,None,RF_NoFlags,Borrowed);
              local_c8 = local_c8 & 0xffffffff00000000;
              if (local_d0 != (void *)0x0) {
                FMemory::Free(local_d0);
              }
              TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_110);
              if (pUVar18 != (UOptimusDeformer *)0x0) {
                pUVar11 = StaticClass();
                iVar10 = (int)pUVar11->_padding_;
                if ((iVar10 <= *(int *)(pUVar18->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
                    &pUVar11->_padding_)) {
                  this_02 = pUVar18;
                }
              }
            }
            if (this_02 != (UOptimusDeformer *)0x0) {
              local_140 = 0;
              uStack_138 = (FScriptContainerElement *)0x0;
              pUVar11 = StaticClass();
              pUVar19 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_04,pUVar11);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar19 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar19);
              }
              if ((((*(int *)((longlong)&this_04[2].SubGraphs.AllocatorInstance.Data + 4) == 0 &&
                    *(int *)&this_04[2].SubGraphs.AllocatorInstance.Data == 0) &&
                   this_04[2].NodePairs.ArrayMax == 0) && this_04[2].NodePairs.ArrayNum == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Guid.IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusFunctionNodeGraph.cpp"
                                     ,0x2f,L""), bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_140._0_4_ = this_04[2].NodePairs.ArrayNum;
              local_140._4_4_ = this_04[2].NodePairs.ArrayMax;
              uStack_138 = this_04[2].SubGraphs.AllocatorInstance.Data;
              pUVar11 = UOptimusNode_FunctionReference::StaticClass();
              GetAllNodesOfClass(this_02,&local_c0,pUVar11);
              FVar25.Data = local_c0.AllocatorInstance.Data;
              iVar7 = uStack_138._4_4_;
              iVar10 = (int)uStack_138;
              pFVar1 = local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayNum * 8;
              for (FVar24.Data = local_c0.AllocatorInstance.Data; FVar24.Data != pFVar1;
                  FVar24.Data = FVar24.Data + 8) {
                this_00 = *(UOptimusNode **)FVar24.Data;
                if (this_00 == (UOptimusNode *)0x0) {
                  pFVar21 = GetTypeName<UOptimusNode_FunctionReference>(&local_78);
                  if ((pFVar21->Data).ArrayNum == 0) {
                    pwVar23 = L"";
                  }
                  else {
                    pwVar23 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
                  }
                    /* WARNING: Subroutine does not return */
                  CastLogError(L"nullptr",pwVar23);
                }
                pUVar11 = UOptimusNode_FunctionReference::StaticClass();
                iVar2 = (int)pUVar11->_padding_;
                if ((*(int *)(this_00->_padding_ + 0x38) < iVar2) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
                    != &pUVar11->_padding_)) {
                  pFVar21 = GetTypeName<UOptimusNode_FunctionReference>(&local_98);
                  pwVar23 = L"";
                  if ((pFVar21->Data).ArrayNum == 0) {
                    pwVar26 = L"";
                  }
                  else {
                    pwVar26 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
                  }
                  pFVar21 = GetFullNameForCastLogError<UOptimusNode>(&local_88,this_00);
                  if ((pFVar21->Data).ArrayNum != 0) {
                    pwVar23 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
                  }
                    /* WARNING: Subroutine does not return */
                  CastLogError(pwVar23,pwVar26);
                }
                if ((UObject *)this_00[1]._padding_ == pUVar19) {
                  if (((iVar7 == *(int *)&this_00[1].field_0x2c &&
                       iVar10 == *(int *)&this_00[1].bSendNotifications) &&
                      local_140._4_4_ == *(int *)((longlong)&this_00[1]._padding_ + 4)) &&
                      (int)local_140 == (int)this_00[1]._padding_) {
                    pFVar20 = (FText *)(**(code **)(this_00->_padding_ + 0x2d8))(this_00,local_a8);
                    UOptimusNode::SetDisplayName(this_00,pFVar20);
                  }
                }
              }
              this_03 = local_180;
              this_04 = local_188;
              if (FVar25.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar25.Data);
                this_03 = local_180;
                this_04 = local_188;
              }
            }
          }
        }
        this_03 = this_03 + 1;
        uVar22 = (ulonglong)local_190;
      }
      DestructItems<FAssetData,int>(local_1a0,(uint)local_198);
      if (local_1a0 != (FAssetData *)0x0) {
        FMemory::Free(local_1a0);
      }
      uVar16 = local_1a8 & 0xffffffff;
      FVar25.Data = local_150 + 0x20;
      uVar22 = (ulonglong)local_18c;
      plVar14 = local_118;
    }
    if (local_1b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data);
    }
  }
  return;
}

// PostLoad @ 14e1faf40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UOptimusDeformer::PostLoad(UOptimusDeformer *this)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  UOptimusVariableContainer *pUVar7;
  UOptimusResourceContainer *pUVar8;
  UOptimusResourceContainer *pUVar9;
  UOptimusResourceContainer *pUVar10;
  UOptimusVariableContainer *pUVar11;
  UOptimusVariableContainer *pUVar12;
  UOptimusComponentSourceBindingContainer *pUVar13;
  code *pcVar14;
  int iVar15;
  longlong *plVar16;
  UClass *pUVar17;
  UOptimusComponentSource *pUVar18;
  FName *pFVar19;
  FString *pFVar20;
  longlong lVar21;
  FText *pFVar22;
  UPackage *pUVar23;
  UClass *pUVar24;
  wchar_t *pwVar25;
  undefined8 *puVar26;
  FScriptContainerElement *pFVar27;
  ForAnyElementType FVar28;
  UOptimusNode *this_00;
  bool bVar29;
  undefined1 auStackY_1b8 [32];
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166;
  undefined1 local_165;
  undefined1 local_164;
  undefined1 local_163;
  <lambda_1> local_162;
  <lambda_2> local_161;
  undefined1 local_160;
  undefined1 local_15f [7];
  UOptimusComponentSourceBinding *local_158;
  int local_150;
  FName local_148;
  FWeakObjectPtr local_140;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_138;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_128;
  UOptimusDeformer *local_118;
  undefined8 *local_110;
  FName local_108;
  FString local_100;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_f0;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_e0;
  undefined1 local_d0 [8];
  FGuid local_c8;
  FString local_b8;
  code *local_a8 [2];
  undefined **local_98;
  FWeakObjectPtr local_90;
  undefined8 local_80;
  FText local_78;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  UObject::PostLoad((UObject *)this);
  pUVar7 = (this->Variables).field0_0x0.DebugPtr;
  pFVar27 = (pUVar7->Descriptions).AllocatorInstance.Data;
  iVar15 = (pUVar7->Descriptions).ArrayNum;
  pFVar3 = pFVar27 + (longlong)iVar15 * 8;
  while( true ) {
    if ((pUVar7->Descriptions).ArrayNum != iVar15) {
      local_168 = 0;
      `TCheckedPointerIterator<TObjectPtr<UOptimusVariableDescription>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_168);
    }
    if (pFVar27 == pFVar3) break;
    UObject::ConditionalPostLoad(*(UObject **)pFVar27);
    pFVar27 = pFVar27 + 8;
  }
  plVar16 = (longlong *)(**(code **)(this->_padding_ + 0x28))(&this->_padding_);
  puVar26 = (undefined8 *)*plVar16;
  lVar21 = plVar16[1];
  puVar2 = puVar26 + (int)lVar21;
  while( true ) {
    if ((int)plVar16[1] != (int)lVar21) {
      local_167 = 0;
      `TCheckedPointerIterator<UOptimusNodeGraph_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_167);
    }
    if (puVar26 == puVar2) break;
    UObject::ConditionalPostLoad((UObject *)*puVar26);
    puVar26 = puVar26 + 1;
  }
  iVar15 = (this->ComputeGraphs).ArrayNum;
  pFVar27 = (this->ComputeGraphs).AllocatorInstance.Data;
  pFVar3 = pFVar27 + (longlong)iVar15 * 0x18;
  while( true ) {
    if ((this->ComputeGraphs).ArrayNum != iVar15) {
      local_166 = 0;
      `TCheckedPointerIterator<FOptimusComputeGraphInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_166);
    }
    if (pFVar27 == pFVar3) break;
    UObject::ConditionalPostLoad(*(UObject **)(pFVar27 + 0x10));
    pFVar27 = pFVar27 + 0x18;
  }
  TArray<TObjectPtr<UOptimusResourceDescription>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_UOptimusDeformer::PostLoad_::__l2::<lambda_1>_>
            (&((this->Resources).field0_0x0.DebugPtr)->Descriptions,&local_162,Default);
  TArray<TObjectPtr<UOptimusVariableDescription>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_UOptimusDeformer::PostLoad_::__l2::<lambda_2>_>
            (&((this->Variables).field0_0x0.DebugPtr)->Descriptions,&local_161,Default);
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  GetObjectsWithOuter((UObjectBase *)this,&local_128,false,RF_NoFlags,Borrowed);
  iVar15 = local_128.ArrayNum;
  pFVar3 = local_128.AllocatorInstance.Data + (longlong)local_128.ArrayNum * 8;
  FVar28.Data = local_128.AllocatorInstance.Data;
  while( true ) {
    if (local_128.ArrayNum != iVar15) {
      local_165 = 0;
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_165);
    }
    if (FVar28.Data == pFVar3) break;
    plVar16 = *(longlong **)FVar28.Data;
    if (plVar16 != (longlong *)0x0) {
      pUVar17 = Z_Construct_UClass_UClass_NoRegister();
      iVar5 = (int)pUVar17->_padding_;
      if ((iVar5 <= *(int *)(plVar16[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar16[2] + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar17->_padding_)) {
        UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
        (**(code **)(*plVar16 + 0x170))(plVar16,0);
      }
    }
    FVar28.Data = FVar28.Data + 8;
  }
  local_c8 = FOptimusObjectVersion::GUID;
  iVar15 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_c8);
  local_150 = iVar15;
  if (iVar15 < 2) {
    pUVar8 = (this->Resources).field0_0x0.DebugPtr;
    pFVar27 = (pUVar8->Descriptions).AllocatorInstance.Data;
    iVar15 = (pUVar8->Descriptions).ArrayNum;
    pFVar3 = pFVar27 + (longlong)iVar15 * 8;
    while( true ) {
      if ((pUVar8->Descriptions).ArrayNum != iVar15) {
        local_164 = 0;
        `TCheckedPointerIterator<TObjectPtr<UOptimusResourceDescription>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_164);
      }
      if (pFVar27 == pFVar3) break;
      pUVar9 = (this->Resources).field0_0x0.DebugPtr;
      pUVar10 = (UOptimusResourceContainer *)(*(longlong **)pFVar27)[4];
      if (pUVar9 == (UOptimusResourceContainer *)0x0) {
        bVar29 = pUVar10 == (UOptimusResourceContainer *)0x0;
      }
      else {
        bVar29 = pUVar9 == pUVar10;
      }
      if (!bVar29) {
        (**(code **)(**(longlong **)pFVar27 + 0x170))();
      }
      pFVar27 = pFVar27 + 8;
    }
    pUVar7 = (this->Variables).field0_0x0.DebugPtr;
    pFVar27 = (pUVar7->Descriptions).AllocatorInstance.Data;
    iVar15 = (pUVar7->Descriptions).ArrayNum;
    pFVar3 = pFVar27 + (longlong)iVar15 * 8;
    while( true ) {
      if ((pUVar7->Descriptions).ArrayNum != iVar15) {
        local_163 = 0;
        `TCheckedPointerIterator<TObjectPtr<UOptimusVariableDescription>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_163);
      }
      if (pFVar27 == pFVar3) break;
      pUVar11 = (this->Variables).field0_0x0.DebugPtr;
      pUVar12 = (UOptimusVariableContainer *)(*(longlong **)pFVar27)[4];
      if (pUVar11 == (UOptimusVariableContainer *)0x0) {
        bVar29 = pUVar12 == (UOptimusVariableContainer *)0x0;
      }
      else {
        bVar29 = pUVar11 == pUVar12;
      }
      if (!bVar29) {
        (**(code **)(**(longlong **)pFVar27 + 0x170))();
      }
      pFVar27 = pFVar27 + 8;
    }
LAB_14e1fb20c:
    if ((((this->Bindings).field0_0x0.DebugPtr)->Bindings).ArrayNum == 0) {
      pUVar17 = UOptimusSkeletalMeshComponentSource::StaticClass();
      pUVar18 = UClass::GetDefaultObject<UOptimusComponentSource>(pUVar17);
      pFVar19 = (FName *)(**(code **)(*(longlong *)pUVar18 + 0x2b8))(pUVar18,local_d0);
      local_158 = CreateComponentBindingDirect(this,pUVar18,*pFVar19);
      local_158->bIsPrimaryBinding = true;
      pUVar13 = (this->Bindings).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_158);
      }
      pFVar3 = (pUVar13->Bindings).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_158) &&
          ((FScriptContainerElement *)&local_158 <
           pFVar3 + (longlong)(pUVar13->Bindings).ArrayMax * 8)) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar29)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      iVar15 = (pUVar13->Bindings).ArrayNum;
      piVar1 = &(pUVar13->Bindings).ArrayMax;
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(pUVar13->Bindings).AllocatorInstance,piVar1);
      }
      (pUVar13->Bindings).ArrayNum = iVar15 + 1;
      *(UOptimusComponentSourceBinding **)
       ((pUVar13->Bindings).AllocatorInstance.Data + (longlong)iVar15 * 8) = local_158;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_158 != (UOptimusComponentSourceBinding *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_158);
      }
      UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
    }
    else {
      bVar29 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_5723111267007197749>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                          ,0xdcb,"Bindings->Bindings.IsEmpty()");
      if (bVar29) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    PostLoadFixupMissingComponentBindingsCompat(this);
LAB_14e1fb379:
    pUVar13 = (this->Bindings).field0_0x0.DebugPtr;
    local_148 = UOptimusComponentSourceBinding::PrimaryBindingName;
    pFVar27 = (pUVar13->Bindings).AllocatorInstance.Data;
    iVar15 = (pUVar13->Bindings).ArrayNum;
    pFVar3 = pFVar27 + (longlong)iVar15 * 8;
    while( true ) {
      if ((pUVar13->Bindings).ArrayNum != iVar15) {
        `TCheckedPointerIterator<TObjectPtr<UOptimusComponentSourceBinding>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_160);
      }
      if (pFVar27 == pFVar3) break;
      plVar16 = *(longlong **)pFVar27;
      if ((char)plVar16[9] != '\0') {
        pFVar20 = ::FName::ToString(&local_148,&local_b8);
        if ((pFVar20->Data).ArrayNum == 0) {
          pwVar25 = L"";
        }
        else {
          pwVar25 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
        }
        (**(code **)(*plVar16 + 0x170))(plVar16,pwVar25,0);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        *(FName *)(plVar16 + 5) = local_148;
      }
      pFVar27 = pFVar27 + 8;
    }
    pUVar17 = UOptimusNode_ComponentSource::StaticClass();
    GetAllNodesOfClass(this,&local_f0,pUVar17);
    iVar15 = local_150;
    for (FVar28.Data = local_f0.AllocatorInstance.Data;
        FVar28.Data != local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayNum * 8;
        FVar28.Data = FVar28.Data + 8) {
      this_00 = *(UOptimusNode **)FVar28.Data;
      if (this_00 == (UOptimusNode *)0x0) {
LAB_14e1fb468:
        this_00 = (UOptimusNode *)0x0;
      }
      else {
        pUVar17 = UOptimusNode_ComponentSource::StaticClass();
        iVar5 = (int)pUVar17->_padding_;
        if ((*(int *)(this_00->_padding_ + 0x38) < iVar5) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
            &pUVar17->_padding_)) goto LAB_14e1fb468;
      }
      if (this_00 != (UOptimusNode *)0x0) {
        local_48 = (void *)0x0;
        local_40 = 0;
        local_3c = 4;
        lVar21 = (**(code **)(this_00[1]._padding_ + 0x10))(this_00 + 1,local_68);
        cVar4 = *(char *)(lVar21 + 0x48);
        if (local_48 != (void *)0x0) {
          FMemory::Free(local_48);
        }
        if (cVar4 != '\0') {
          pFVar22 = FText::FromName(&local_78,&local_148);
          UOptimusNode::SetDisplayName(this_00,pFVar22);
        }
      }
    }
    if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
LAB_14e1fb4e0:
    PostLoadRemoveDeprecatedExecutionNodes(this);
LAB_14e1fb4f8:
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 0;
    local_138.ArrayMax = 0;
    pUVar23 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
    GetObjectsWithOuter((UObjectBase *)pUVar23,&local_138,false,RF_NoFlags,Borrowed);
    iVar5 = local_138.ArrayNum;
    pFVar3 = local_138.AllocatorInstance.Data + (longlong)local_138.ArrayNum * 8;
    FVar28.Data = local_138.AllocatorInstance.Data;
    while( true ) {
      if (local_138.ArrayNum != iVar5) {
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_15f);
      }
      if (FVar28.Data == pFVar3) break;
      pUVar17 = *(UClass **)FVar28.Data;
      if (pUVar17 != (UClass *)0x0) {
        pUVar24 = UOptimusValueContainerGeneratorClass::StaticClass();
        iVar6 = (int)pUVar24->_padding_;
        if ((iVar6 <= *(int *)(pUVar17->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
            &pUVar24->_padding_)) {
          Optimus::RemoveObject((UObject *)pUVar17);
          if ((pUVar17->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar17);
          }
          Optimus::RemoveObject((pUVar17->ClassDefaultObject).field0_0x0.DebugPtr);
        }
      }
      FVar28.Data = FVar28.Data + 8;
    }
    if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
  }
  else {
    if (iVar15 < 5) goto LAB_14e1fb20c;
    if (iVar15 < 6) goto LAB_14e1fb379;
    if (iVar15 < 8) goto LAB_14e1fb4e0;
    if (iVar15 < 10) goto LAB_14e1fb4f8;
    if (0xb < iVar15) goto LAB_14e1fb5b9;
  }
  PostLoadMoveValueFromGraphDataInterfaceToDeformerValueMap(this);
LAB_14e1fb5b9:
  if ((this->Status != HasErrors) && (iVar15 < 0xe)) {
    bVar29 = false;
    pUVar17 = UOptimusNode_FunctionReference::StaticClass();
    GetAllNodesOfClass(this,&local_e0,pUVar17);
    if (0 < local_e0.ArrayNum) {
      bVar29 = true;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_140.ObjectIndex = 0;
      local_140.ObjectSerialNumber = 0;
      local_118 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_140,(FObjectPtr)&local_118);
      local_80 = 0;
      local_98 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UOptimusDeformer::PostLoad'::`85'::<lambda_3>,1,0>::
                  _vftable_;
      local_90 = local_140;
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UOptimusDeformer::PostLoad'::__l85::<lambda_3>,void>::Call;
      FFunctionGraphTask::CreateAndDispatchWhenReady
                ((TUniqueFunction<void___cdecl(void)> *)&local_110,(TStatIdData *)local_a8,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)&TStatId::TStatId_NAME_None,MainQueue);
      if (local_110 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_110 + 6);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)*local_110)(local_110,1);
        }
      }
      if (2 < (byte)LogOptimusCore._0_1_) {
        pUVar23 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
        local_108 = (FName)pUVar23->_padding_;
        ::FName::ToString(&local_108,&local_100);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.AllocatorInstance.Data);
    }
    if (!bVar29) {
      Compile(this);
    }
  }
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  return;
}

// PostLoadFixupMismatchedResourceDataDomains @ 14e1fd250

void __thiscall UOptimusDeformer::PostLoadFixupMismatchedResourceDataDomains(UOptimusDeformer *this)

{
  return;
}

// PostLoadFixupMissingComponentBindingsCompat @ 14e1fd260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UOptimusDeformer::PostLoadFixupMissingComponentBindingsCompat(UOptimusDeformer *this)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  int iVar3;
  UOptimusNodeGraph *this_00;
  UOptimusComputeDataInterface *pUVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  ulonglong uVar8;
  double dVar9;
  UOptimusComponentSourceBinding **ppUVar10;
  longlong *plVar11;
  bool bVar12;
  UClass *pUVar13;
  UOptimusComponentSource *pUVar14;
  FName *pFVar15;
  UClass *pUVar16;
  UObject *pUVar17;
  FName FVar18;
  FName FVar19;
  FOptimusComponentBindingAction_AddBinding *pFVar20;
  UOptimusActionStack *this_01;
  longlong lVar21;
  UOptimusNode_ComponentSource *this_02;
  UOptimusNodePin *pUVar22;
  byte bVar23;
  ulonglong uVar24;
  ForElementType<FSetElementId> FVar25;
  int iVar26;
  undefined8 *puVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  undefined8 *puVar31;
  uint uVar32;
  uint uVar33;
  uint *puVar35;
  FScriptContainerElement *pFVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auStackY_338 [32];
  undefined1 local_308;
  undefined1 local_307;
  undefined1 local_306;
  undefined1 local_305;
  uint local_304;
  UOptimusComponentSourceBinding *local_300;
  UObject *local_2f8;
  UOptimusComponentSourceBinding **local_2f0;
  uint uStack_2e8;
  uint uStack_2e4;
  TBitArray<FDefaultBitArrayAllocator> *local_2e0;
  undefined4 uStack_2d8;
  uint uStack_2d4;
  uint local_2d0;
  undefined4 uStack_2cc;
  int iStack_2c8;
  undefined4 uStack_2c4;
  undefined8 *local_2c0;
  undefined8 local_2b8;
  UOptimusDeformer *local_2b0;
  int local_2a8;
  int local_2a4;
  TPairInitializer<UOptimusComponentSourceBinding_*_const_&,UOptimusNode_ComponentSource_*_&&>
  local_2a0;
  undefined8 local_290;
  UClass *local_288;
  undefined8 *local_280;
  longlong *local_278;
  TPairInitializer<UOptimusNode_DataInterface_*_const_&,UOptimusComponentSourceBinding_*_const_&>
  local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_258;
  undefined8 uStack_238;
  longlong *local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_228;
  undefined8 uStack_208;
  TSharedPtr<FOptimusAction,1> local_200;
  UObject **local_1f0;
  UOptimusComponentSourceBinding **local_1e8;
  longlong *local_1e0;
  undefined8 *local_1d8;
  TVector2<double>_u_0 local_1d0;
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [40];
  undefined8 local_180;
  undefined4 local_15c;
  undefined4 local_13c;
  undefined1 local_138 [32];
  uint *local_118;
  uint local_110;
  undefined4 local_10c;
  undefined4 local_108;
  int local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  TSet<TTuple<UOptimusComponentSourceBinding_*,UOptimusNode_ComponentSource_*>,TDefaultMapHashableKeyFuncs<UOptimusComponentSourceBinding_*,UOptimusNode_ComponentSource_*,0>,FDefaultSetAllocator>
  local_e8;
  ulonglong local_98;
  ulonglong uVar34;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_2b0 = this;
  local_278 = (longlong *)(**(code **)(this->_padding_ + 0x28))(&this->_padding_);
  dVar9 = __real_3fe0000000000000;
  uVar41 = (undefined4)__real_7fefffffffffffff;
  uVar8 = (ulonglong)__real_7fefffffffffffff >> 0x20;
  local_304 = *(uint *)(local_278 + 1);
  uVar24 = (ulonglong)(int)local_304;
  puVar31 = (undefined8 *)*local_278;
  puVar27 = puVar31 + uVar24;
  local_280 = puVar27;
LAB_14e1fd2f8:
  local_2c0 = puVar31;
  if ((int)local_278[1] != (int)uVar24) {
    local_308 = 0;
    `TCheckedPointerIterator<UOptimusNodeGraph_*_const,int,0>::operator!='::__l2::<lambda_1>::
    operator()(&local_308);
  }
  if (puVar31 == puVar27) {
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
    return;
  }
  this_00 = (UOptimusNodeGraph *)*puVar31;
  if ((this_00->GraphType == Setup) || (this_00->GraphType - Update < 2)) {
    pFVar36 = (this_00->Nodes).AllocatorInstance.Data;
    iVar26 = (this_00->Nodes).ArrayNum;
    dVar7 = 0.0;
    local_138._0_8_ = (UOptimusComponentSourceBinding *)0x0;
    local_118 = (uint *)0x0;
    local_110 = 0;
    local_104 = 0;
    local_f8 = (ForElementType<FSetElementId>)0x0;
    local_f0 = 0;
    pFVar1 = pFVar36 + (longlong)iVar26 * 8;
    local_138._8_8_ = 0;
    local_10c = 0x80;
    local_108 = 0xffffffff;
    uVar39 = uVar41;
    uVar40 = (int)uVar8;
    while( true ) {
      if ((this_00->Nodes).ArrayNum != iVar26) {
        local_307 = 0;
        `TCheckedPointerIterator<UOptimusNode_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_307);
      }
      uVar29 = local_110;
      if (pFVar36 == pFVar1) break;
      pUVar17 = *(UObject **)pFVar36;
      dVar2 = *(double *)&pUVar17[1].field_0x18;
      dVar7 = dVar7 + *(double *)&pUVar17[1].field_0x20;
      uVar37 = SUB84(dVar2,0);
      uVar38 = (int)((ulonglong)dVar2 >> 0x20);
      if ((double)CONCAT44(uVar40,uVar39) <= dVar2) {
        uVar37 = uVar39;
        uVar38 = uVar40;
      }
      pUVar13 = UOptimusNode_DataInterface::StaticClass();
      iVar3 = (int)pUVar13->_padding_;
      uVar39 = uVar37;
      uVar40 = uVar38;
      if ((*(int *)(*(longlong *)&pUVar17->field_0x10 + 0x38) < iVar3) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar17->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar13->_padding_)) {
        local_2f8 = (UObject *)0x0;
LAB_14e1fd62b:
        pFVar36 = pFVar36 + 8;
      }
      else {
        local_2f8 = pUVar17;
        if (pUVar17 == (UObject *)0x0) goto LAB_14e1fd62b;
        pUVar13 = *(UClass **)&pUVar17[7].field_0x10;
        if (pUVar13 == (UClass *)0x0) {
          bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_5723111267007197632>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                              ,0xe40,"DataInterfaceNode->DataInterfaceClass");
          if (bVar12) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          goto LAB_14e1fd62b;
        }
        if ((pUVar13->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar13);
        }
        pUVar4 = (UOptimusComputeDataInterface *)(pUVar13->ClassDefaultObject).field0_0x0.DebugPtr;
        pUVar13 = UOptimusComputeDataInterface::StaticClass();
        iVar3 = (int)pUVar13->_padding_;
        if (((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar3) ||
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
             &pUVar13->_padding_)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ret->IsA(T::StaticClass())",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                ,0x1181,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_300 = FindCompatibleBindingWithInterface(this,pUVar4);
        if (local_300 == (UOptimusComponentSourceBinding *)0x0) {
          pUVar14 = UOptimusComponentSource::GetSourceFromDataInterface(pUVar4);
          if (pUVar14 != (UOptimusComponentSource *)0x0) {
            local_2b8 = 0;
            pFVar15 = (FName *)(**(code **)(*(longlong *)pUVar14 + 0x2b8))(pUVar14,local_1c0);
            FVar19 = *pFVar15;
            pUVar13 = (UClass *)(this->Bindings).field0_0x0.DebugPtr;
            pUVar16 = Z_Construct_UClass_UObject_NoRegister();
            pUVar17 = StaticFindObjectFast
                                (pUVar16,(UObject *)pUVar13,FVar19,None,RF_NoFlags,Borrowed);
            if (pUVar17 != (UObject *)0x0) {
              FVar18 = (FName)Z_Construct_UClass_UObject_NoRegister();
              FVar19 = MakeUniqueObjectName
                                 ((UObject *)local_1b8,pUVar13,FVar18,
                                  FVar19.ComparisonIndex.Value.Value);
              FVar19 = *(FName *)FVar19;
            }
            pFVar20 = ::operator_new(0x30);
            if (pFVar20 == (FOptimusComponentBindingAction_AddBinding *)0x0) {
              pFVar20 = (FOptimusComponentBindingAction_AddBinding *)0x0;
            }
            else {
              pFVar20 = FOptimusComponentBindingAction_AddBinding::
                        FOptimusComponentBindingAction_AddBinding(pFVar20,pUVar14,FVar19);
            }
            this = local_2b0;
            this_01 = GetActionStack(local_2b0);
            local_200.Object = (FOptimusAction *)pFVar20;
            local_200.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
            if (local_200.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              (local_200.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)0x1;
              (local_200.SharedReferenceCount.ReferenceController)->_padding_ =
                   (longlong)
                   &
                   ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
              ;
              (local_200.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                   (atomic<int>)0x1;
              local_200.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar20;
            }
            bVar12 = UOptimusActionStack::RunAction(this_01,&local_200);
            if (bVar12) {
              local_300 = (UOptimusComponentSourceBinding *)
                          (**(code **)(this->_padding_ + 0x40))
                                    (&this->_padding_,pFVar20->ComponentBindingName);
            }
            else {
              local_300 = (UOptimusComponentSourceBinding *)0x0;
            }
          }
          if (local_300 == (UOptimusComponentSourceBinding *)0x0) goto LAB_14e1fd62b;
        }
        local_1f0 = &local_2f8;
        local_1e8 = &local_300;
        TSet<TTuple<UOptimusNode_DataInterface_*,UOptimusComponentSourceBinding_*>,TDefaultMapHashableKeyFuncs<UOptimusNode_DataInterface_*,UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<UOptimusNode_DataInterface_*_const_&,UOptimusComponentSourceBinding_*_const_&>_>
                  ((TSet<TTuple<UOptimusNode_DataInterface_*,UOptimusComponentSourceBinding_*>,TDefaultMapHashableKeyFuncs<UOptimusNode_DataInterface_*,UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                    *)local_138,&local_268,(bool *)&local_1f0);
        UObject::ConditionalPostLoad(local_2f8);
        pFVar36 = pFVar36 + 8;
      }
    }
    uVar24 = 0;
    uVar33 = 0;
    uVar32 = 0;
    if (local_138._8_4_ != local_104) {
      uStack_2e4 = 1;
      local_e8.Elements._0_8_ = 0;
      local_e8.Elements._8_8_ = 0;
      local_e8.Elements._32_8_ = 0;
      local_e8.Elements._40_4_ = 0;
      local_e8.Elements._44_4_ = 0x80;
      local_e8.Elements._48_4_ = 0xffffffff;
      local_e8.Elements._52_4_ = 0;
      local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_e8.HashSize = 0;
      uStack_2d4 = uVar32;
      local_2d0 = uVar32;
      if (local_110 != 0) {
        puVar35 = (uint *)(local_138 + 0x10);
        if (local_118 != (uint *)0x0) {
          puVar35 = local_118;
        }
        uVar28 = *puVar35;
        uVar30 = uVar24;
        uVar34 = uVar24;
        uVar32 = uVar33;
        local_2d0 = uVar33;
        while (uVar28 == 0) {
          uVar32 = (int)uVar30 + 1;
          uVar30 = (ulonglong)uVar32;
          local_2d0 = (int)uVar34 + 0x20;
          uVar34 = (ulonglong)local_2d0;
          uStack_2d4 = local_110;
          if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar32)
          goto LAB_14e1fd720;
          uVar28 = puVar35[(int)uVar32];
        }
        uStack_2e4 = ~(uVar28 - 1) & uVar28;
        uVar30 = (ulonglong)uStack_2e4 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar30 != 0) {
          for (; uVar30 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_2a8 = (int)lVar21;
        uStack_2d4 = (local_2d0 - 1) + local_2a8;
        if ((int)local_110 < (int)uStack_2d4) {
          uStack_2d4 = local_110;
        }
      }
LAB_14e1fd720:
      iStack_2c8 = local_138._8_4_ - local_104;
      local_2f0 = (UOptimusComponentSourceBinding **)local_138;
      local_2e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
      TStack_258._padding_ = CONCAT44(uStack_2e4,uVar32);
      uStack_2d8 = 0xffffffff;
      uVar28 = local_110 & 0xffffffe0;
      TStack_258.CurrentBitIndex = uStack_2d4;
      TStack_258.UnvisitedBitMask = 0xffffffff;
      uStack_2cc = local_15c;
      TStack_258._28_4_ = local_15c;
      TStack_258.BaseBitIndex = local_2d0;
      uStack_238 = CONCAT44(uStack_2c4,iStack_2c8);
      iVar26 = (int)local_110 >> 5;
      bVar23 = (byte)local_110;
      uStack_2e8 = uVar32;
      local_268.Value = local_2f0;
      TStack_258.Array = local_2e0;
      if (((int)local_110 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar29 != local_110) {
        puVar35 = (uint *)(local_138 + 0x10);
        if (local_118 != (uint *)0x0) {
          puVar35 = local_118;
        }
        uVar29 = -1 << (bVar23 & 0x1f) & puVar35[iVar26];
        while (uVar29 == 0) {
          iVar26 = iVar26 + 1;
          uVar28 = uVar28 + 0x20;
          uVar29 = local_110;
          if ((int)(((int)(local_110 - 1) >> 0x1f & 0x1fU) + (local_110 - 1)) >> 5 < iVar26)
          goto LAB_14e1fd840;
          uVar29 = puVar35[iVar26];
        }
        uVar30 = (ulonglong)(~(uVar29 - 1) & uVar29) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar30 != 0) {
          for (; uVar30 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_2a4 = (int)lVar21;
        uVar29 = (uVar28 - 1) + local_2a4;
        if ((int)local_110 < (int)uVar29) {
          uVar29 = local_110;
        }
      }
LAB_14e1fd840:
      while( true ) {
        ppUVar10 = local_268.Value;
        if (*(int *)(local_268.Value + 1) - *(int *)((longlong)local_268.Value + 0x34) !=
            (int)uStack_238) {
          local_306 = 0;
          `TSparseArray<TSparseSetElement<TTuple<UOptimusNode_DataInterface_*,UOptimusComponentSourceBinding_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_306);
        }
        uVar32 = local_110;
        if (((TStack_258.CurrentBitIndex == uVar29) &&
            (TStack_258.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10))) &&
           (ppUVar10 == (UOptimusComponentSourceBinding **)local_138)) break;
        local_290 = 0;
        local_1e0 = &(*ppUVar10)->_padding_ + (longlong)TStack_258.CurrentBitIndex * 3;
        local_1d8 = &local_290;
        TSet<TTuple<UOptimusComponentSourceBinding_*,UOptimusNode_ComponentSource_*>,TDefaultMapHashableKeyFuncs<UOptimusComponentSourceBinding_*,UOptimusNode_ComponentSource_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<UOptimusComponentSourceBinding_*_const_&,UOptimusNode_ComponentSource_*_&&>_>
                  (&local_e8,&local_2a0,(bool *)&local_1e0);
        TStack_258.UnvisitedBitMask = TStack_258.UnvisitedBitMask & ~TStack_258._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_258);
      }
      uStack_2e4 = 1;
      dVar2 = NodeMargins.field0_0x0._s_0.X + NodeSize.field0_0x0._s_0.X;
      dVar7 = dVar7 / (double)(this_00->Nodes).ArrayNum -
              ((double)((local_e8.Elements._8_4_ - local_e8.Elements._52_4_) + -1) *
               (NodeMargins.field0_0x0._s_0.Y + NodeSize.field0_0x0._s_0.Y) +
              NodeSize.field0_0x0._s_0.Y * dVar9);
      uVar30 = uVar24;
      uStack_2d4 = uVar33;
      if (local_110 != 0) {
        puVar35 = (uint *)(local_138 + 0x10);
        if (local_118 != (uint *)0x0) {
          puVar35 = local_118;
        }
        uVar29 = *puVar35;
        uVar34 = uVar24;
        while (uVar29 == 0) {
          uVar33 = (int)uVar34 + 1;
          uVar34 = (ulonglong)uVar33;
          uVar30 = (ulonglong)((int)uVar30 + 0x20);
          uStack_2d4 = local_110;
          if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar33)
          goto LAB_14e1fd9c0;
          uVar29 = puVar35[(int)uVar33];
        }
        uStack_2e4 = ~(uVar29 - 1) & uVar29;
        uVar34 = (ulonglong)uStack_2e4 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_2a0.Key._4_4_ = (int)lVar21;
        uStack_2d4 = (int)uVar30 + -1 + local_2a0.Key._4_4_;
        if ((int)local_110 < (int)uStack_2d4) {
          uStack_2d4 = local_110;
        }
      }
LAB_14e1fd9c0:
      local_2f0 = (UOptimusComponentSourceBinding **)local_138;
      uStack_2cc = local_13c;
      local_2e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
      uVar29 = local_110 & 0xffffffe0;
      iStack_2c8 = local_138._8_4_ - local_104;
      TStack_228._padding_ = CONCAT44(uStack_2e4,uVar33);
      uStack_2d8 = 0xffffffff;
      TStack_228.CurrentBitIndex = uStack_2d4;
      TStack_228.UnvisitedBitMask = 0xffffffff;
      local_2d0 = (uint)uVar30;
      iVar26 = (int)local_110 >> 5;
      TStack_228._28_4_ = local_13c;
      TStack_228.BaseBitIndex = local_2d0;
      uStack_208 = CONCAT44(uStack_2c4,iStack_2c8);
      bVar23 = (byte)local_110;
      uStack_2e8 = uVar33;
      local_230 = (longlong *)local_2f0;
      TStack_228.Array = local_2e0;
      if (((int)local_110 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar32 != local_110) {
        puVar35 = (uint *)(local_138 + 0x10);
        if (local_118 != (uint *)0x0) {
          puVar35 = local_118;
        }
        uVar33 = -1 << (bVar23 & 0x1f) & puVar35[iVar26];
        while (uVar33 == 0) {
          iVar26 = iVar26 + 1;
          uVar29 = uVar29 + 0x20;
          uVar32 = local_110;
          if ((int)(((int)(local_110 - 1) >> 0x1f & 0x1fU) + (local_110 - 1)) >> 5 < iVar26)
          goto LAB_14e1fdaf0;
          uVar33 = puVar35[iVar26];
        }
        uVar30 = (ulonglong)(~(uVar33 - 1) & uVar33) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar30 != 0) {
          for (; uVar30 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_2a0.Value._0_4_ = (int)lVar21;
        uVar32 = (uVar29 - 1) + (int)local_2a0.Value;
        if ((int)local_110 < (int)uVar32) {
          uVar32 = local_110;
        }
      }
LAB_14e1fdaf0:
      do {
        plVar11 = local_230;
        if ((int)local_230[1] - *(int *)((longlong)local_230 + 0x34) != (int)uStack_208) {
          local_305 = 0;
          `TSparseArray<TSparseSetElement<TTuple<UOptimusNode_DataInterface_*,UOptimusComponentSourceBinding_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_305);
        }
        lVar21 = (longlong)TStack_228.CurrentBitIndex;
        if (((TStack_228.CurrentBitIndex == uVar32) &&
            (TStack_228.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10))) &&
           (plVar11 == (longlong *)local_138)) goto LAB_14e1fdddc;
        lVar5 = *plVar11;
        uVar34 = *(ulonglong *)(lVar5 + 8 + lVar21 * 0x18);
        uVar29 = ((uint)(uVar34 >> 0x14) & 0xffff ^ (uint)(uVar34 >> 4)) * -0x7a143595;
        uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
        uVar30 = uVar24;
        if (local_e8.Elements._8_4_ != local_e8.Elements._52_4_) {
          FVar25 = (ForElementType<FSetElementId>)&local_e8.Hash;
          if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar25 = local_e8.Hash.SecondaryData;
          }
          for (iVar26 = *(int *)((longlong)FVar25 +
                                (ulonglong)(local_e8.HashSize - 1U & (uVar29 >> 0x10 ^ uVar29)) * 4)
              ; iVar26 != -1;
              iVar26 = *(int *)(local_e8.Elements._0_8_ + 0x10 + (longlong)iVar26 * 0x18)) {
            if (*(ulonglong *)(local_e8.Elements._0_8_ + (longlong)iVar26 * 0x18) == uVar34) {
              if ((iVar26 != -1) &&
                 (uVar30 = local_e8.Elements._0_8_ + (longlong)iVar26 * 0x18, uVar30 != 0))
              goto LAB_14e1fdbf5;
              break;
            }
          }
        }
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L"");
        if (bVar12) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_14e1fdbf5:
        this_02 = *(UOptimusNode_ComponentSource **)(uVar30 + 8);
        if (this_02 == (UOptimusNode_ComponentSource *)0x0) {
          local_1a8._16_8_ =
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`UOptimusNodeGraph::AddComponentBindingGetNode'::`2'::<lambda_1>,0,0>
                ::_vftable_;
          local_1a8._24_8_ = *(undefined8 *)(lVar5 + 8 + lVar21 * 0x18);
          local_1a8._0_8_ =
               UE::Core::Private::Function::
               TFunctionRefCaller<`UOptimusNodeGraph::AddComponentBindingGetNode'::__l2::<lambda_1>,void,UOptimusNode_*>
               ::Call;
          local_180 = 0;
          local_1d0._s_0.X = (double)CONCAT44(uVar40,uVar39) - dVar2;
          local_1d0._s_0.Y = dVar7;
          local_288 = UOptimusNode_ComponentSource::StaticClass();
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_288 != (UClass *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)local_288);
          }
          this_02 = (UOptimusNode_ComponentSource *)
                    UOptimusNodeGraph::AddNodeInternal
                              (this_00,(TSubclassOf<UOptimusNode>)&local_288,
                               (TVector2<double> *)&local_1d0._s_0,
                               (TFunction<void___cdecl(UOptimusNode_*)> *)local_1a8);
          if (this_02 != (UOptimusNode_ComponentSource *)0x0) {
            pUVar13 = UOptimusNode_ComponentSource::StaticClass();
            iVar26 = (int)pUVar13->_padding_;
            if ((iVar26 <= *(int *)(this_02->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar26 * 8) ==
                &pUVar13->_padding_)) {
              *(UOptimusNode_ComponentSource **)(uVar30 + 8) = this_02;
              dVar7 = NodeMargins.field0_0x0._s_0.Y + NodeSize.field0_0x0._s_0.Y + dVar7;
              goto LAB_14e1fdcc1;
            }
          }
          *(undefined8 *)(uVar30 + 8) = 0;
          dVar7 = NodeMargins.field0_0x0._s_0.Y + NodeSize.field0_0x0._s_0.Y + dVar7;
          bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_5723111267007197583>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                              ,0xe71,"ComponentSourceNodePtr");
          if (bVar12) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else {
LAB_14e1fdcc1:
          pUVar22 = UOptimusNode_ComponentSource::GetComponentPin(this_02);
          lVar21 = *(longlong *)(lVar5 + lVar21 * 0x18);
          iVar26 = *(int *)(lVar21 + 0x58);
          puVar27 = *(undefined8 **)(lVar21 + 0x50);
          if (iVar26 < 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L"");
            if (bVar12) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
LAB_14e1fdd88:
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar12) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else if (iVar26 < 1) goto LAB_14e1fdd88;
          UOptimusNodeGraph::AddLink(this_00,pUVar22,(UOptimusNodePin *)*puVar27);
        }
        TStack_228.UnvisitedBitMask = TStack_228.UnvisitedBitMask & ~TStack_228._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_228);
      } while( true );
    }
    goto LAB_14e1fde00;
  }
  goto LAB_14e1fde31;
LAB_14e1fdddc:
  local_e8.HashSize = 0;
  if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UOptimusComponentSourceBinding_*,UOptimusNode_ComponentSource_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UOptimusComponentSourceBinding_*,UOptimusNode_ComponentSource_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8.Elements);
LAB_14e1fde00:
  local_f0 = 0;
  if (local_f8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f8);
  }
  TSparseArray<TSparseSetElement<TTuple<UOptimusNode_DataInterface_*,UOptimusComponentSourceBinding_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UOptimusNode_DataInterface_*,UOptimusComponentSourceBinding_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UOptimusNode_DataInterface_*,UOptimusComponentSourceBinding_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_138);
  puVar27 = local_280;
  this = local_2b0;
  puVar31 = local_2c0;
LAB_14e1fde31:
  puVar31 = puVar31 + 1;
  uVar24 = (ulonglong)local_304;
  goto LAB_14e1fd2f8;
}

// PostLoadMoveValueFromGraphDataInterfaceToDeformerValueMap @ 14e1fdea0

void __thiscall
UOptimusDeformer::PostLoadMoveValueFromGraphDataInterfaceToDeformerValueMap(UOptimusDeformer *this)

{
  longlong *plVar1;
  longlong lVar2;
  short *psVar3;
  undefined1 *puVar4;
  UOptimusVariableContainer *pUVar5;
  code *pcVar6;
  int *piVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  short *psVar12;
  FOptimusDataTypeRegistry *pFVar13;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar14;
  FShaderValueContainer *pFVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  wchar_t *pwVar19;
  undefined1 *puVar20;
  ForAnyElementType FVar21;
  longlong *plVar22;
  FName FVar23;
  TArray<FArrayShaderValue,TSizedDefaultAllocator<32>_> *pTVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  int iVar27;
  int iVar28;
  longlong lVar29;
  int *piVar30;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_308 [4];
  int local_304;
  FName local_300;
  FOptimusValueIdentifier local_2f8;
  uint local_2e8;
  uint local_2e4;
  longlong local_2e0;
  undefined1 local_2d8 [32];
  FUtf8String local_2b8;
  EOptimusValueUsage local_2a8;
  FInstancedStruct local_2a0;
  FShaderValueContainer local_290;
  undefined1 local_268 [32];
  FUtf8String local_248;
  EOptimusValueUsage local_238;
  FInstancedStruct local_230;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_220;
  ForAnyElementType local_210;
  undefined8 local_208;
  FOptimusValueIdentifier local_1f8;
  undefined1 local_1e8 [32];
  FUtf8String local_1c8;
  undefined1 local_1b8 [32];
  FUtf8String local_198;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  FScriptContainerElement *local_148;
  FString local_140;
  FString local_130;
  FScriptContainerElement *local_120;
  FName local_118;
  FString local_110;
  FName local_100;
  int *local_f8;
  TSharedPtr<FOptimusDataType_const_,1> local_f0;
  TSharedPtr<FOptimusDataType_const_,1> local_e0;
  FString local_d0;
  FShaderValueContainer local_c0;
  undefined1 local_a0 [48];
  TSharedPtr<FOptimusDataType_const_,1> local_70;
  TSharedPtr<FOptimusDataType_const_,1> local_60 [2];
  
  pFVar25 = (this->ComputeGraphs).AllocatorInstance.Data;
  local_304 = 0;
  local_2e4 = (this->ComputeGraphs).ArrayNum;
  uVar17 = (ulonglong)(int)local_2e4;
  iVar28 = 0;
  local_120 = pFVar25 + uVar17 * 0x18;
LAB_14e1fdee7:
  pFVar26 = local_120;
  local_148 = pFVar25;
  if ((this->ComputeGraphs).ArrayNum != (int)uVar17) {
    local_res10[0] = 0;
    `TCheckedPointerIterator<FOptimusComputeGraphInfo,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res10);
  }
  if (pFVar25 == pFVar26) {
    return;
  }
  lVar2 = *(longlong *)(pFVar25 + 0x10);
  plVar22 = *(longlong **)(lVar2 + 0x38);
  iVar10 = *(int *)(lVar2 + 0x40);
  plVar1 = plVar22 + iVar10;
  do {
    if (*(int *)(lVar2 + 0x40) != iVar10) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UComputeDataInterface>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (plVar22 == plVar1) goto LAB_14e1fe844;
    lVar29 = *plVar22;
    local_2e0 = lVar29;
    if (lVar29 != 0) {
      pUVar11 = UOptimusGraphDataInterface::StaticClass();
      iVar27 = (int)pUVar11->_padding_;
      if ((iVar27 <= *(int *)(*(longlong *)(lVar29 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)(lVar29 + 0x10) + 0x30) + (longlong)iVar27 * 8) ==
          &pUVar11->_padding_)) break;
    }
    plVar22 = plVar22 + 1;
  } while( true );
  local_2e8 = *(uint *)(lVar29 + 0x30);
  uVar17 = (ulonglong)(int)local_2e8;
  piVar30 = *(int **)(lVar29 + 0x28);
  local_f8 = piVar30 + uVar17 * 0x22;
  while( true ) {
    piVar7 = local_f8;
    if (*(int *)(lVar29 + 0x30) != (int)uVar17) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FOptimusGraphVariableDescription,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (piVar30 == piVar7) break;
    if ((piVar30[0x12] < 1) && (piVar30[0x16] < 1)) {
      local_300.ComparisonIndex.Value = 0;
      local_300.Number = 0;
      if (*(longlong *)(piVar30 + 0x1a) == 0) {
        if (piVar30[2] == 0) {
          pwVar19 = L"";
        }
        else {
          pwVar19 = *(wchar_t **)piVar30;
        }
        ::FName::FName(&local_100,pwVar19);
        local_300 = local_100;
        FVar23 = local_100;
      }
      else {
        psVar3 = *(short **)piVar30;
        psVar12 = psVar3 + piVar30[2];
        do {
          if (psVar12 == psVar3) goto LAB_14e1fe033;
          psVar12 = psVar12 + -1;
        } while (*psVar12 != 0x5f);
        iVar10 = (int)((longlong)psVar12 - (longlong)psVar3 >> 1);
        if (iVar10 == -1) {
LAB_14e1fe033:
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8731243684667851310>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusHelpers.cpp"
                             ,0x22e,"LastUnderscoreIndex != INDEX_NONE");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          ::FString::FString(&local_130,(FString *)piVar30);
        }
        else {
          iVar27 = 0;
          if (piVar30[2] == 0) {
            iVar16 = iVar27;
            if (iVar10 < 0) {
              iVar16 = iVar10;
            }
            if (0 < iVar16) {
              iVar27 = iVar16;
            }
            ::FString::ConstructFromPtrSize(&local_130,L"",iVar27);
          }
          else {
            iVar16 = piVar30[2] + -1;
            if (iVar10 < iVar16) {
              iVar16 = iVar10;
            }
            if (0 < iVar16) {
              iVar27 = iVar16;
            }
            ::FString::ConstructFromPtrSize(&local_130,*(wchar_t **)piVar30,iVar27);
          }
        }
        FVar21.Data = (FScriptContainerElement *)L"";
        if (local_130.Data.ArrayNum != 0) {
          FVar21.Data = local_130.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_118,(wchar_t *)FVar21.Data);
        FVar23 = local_118;
        local_300 = local_118;
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
      }
      local_2f8.Type = 2;
      local_2f8.Name.ComparisonIndex = FVar23.ComparisonIndex.Value;
      local_2f8.Name.Number = FVar23.Number;
      uVar9 = ::GetTypeHash(local_300.ComparisonIndex);
      if (*(int *)&(this->ValueMap).field_0x8 != *(int *)&(this->ValueMap).field_0x34) {
        puVar4 = *(undefined1 **)&(this->ValueMap).field_0x40;
        puVar20 = &(this->ValueMap).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar20 = puVar4;
        }
        iVar10 = *(int *)(puVar20 +
                         (ulonglong)
                         (*(int *)&(this->ValueMap).field_0x48 - 1U &
                         ((local_2f8._0_4_ & 0xff) * 0x40 + local_300.Number + uVar9 +
                          (local_2f8.Type >> 2) + 0x9e3779b9 ^ local_2f8._0_4_ & 0xff)) * 4);
        if (iVar10 != -1) {
          lVar2 = *(longlong *)&this->ValueMap;
          do {
            lVar18 = (longlong)iVar10 * 0x80;
            if ((*(EOptimusValueType *)(lVar18 + lVar2) == local_2f8.Type) &&
               (*(longlong *)(lVar18 + 4 + lVar2) ==
                CONCAT44(local_2f8.Name.Number,local_2f8.Name.ComparisonIndex.Value))) {
              if (iVar10 != -1) goto LAB_14e1fe4ca;
              break;
            }
            iVar10 = *(int *)(lVar18 + 0x78 + lVar2);
          } while (iVar10 != -1);
        }
      }
      pUVar5 = (this->Variables).field0_0x0.DebugPtr;
      pFVar26 = (pUVar5->Descriptions).AllocatorInstance.Data;
      iVar10 = (pUVar5->Descriptions).ArrayNum;
      pFVar25 = pFVar26 + (longlong)iVar10 * 8;
      while( true ) {
        if ((pUVar5->Descriptions).ArrayNum != iVar10) {
          local_308[0] = 0;
          `TCheckedPointerIterator<UOptimusVariableDescription_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_308);
        }
        lVar29 = local_2e0;
        iVar28 = local_304;
        if (pFVar26 == pFVar25) goto LAB_14e1fe4ca;
        lVar2 = *(longlong *)pFVar26;
        if (*(FName *)(lVar2 + 0x38) == FVar23) break;
        pFVar26 = pFVar26 + 8;
      }
      local_2d8._0_4_ = 0;
      local_2d8._4_4_ = 0;
      local_2d8._24_8_ = 0;
      local_2d8._16_8_ = 0;
      local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b8.Data.ArrayNum = 0;
      local_2b8.Data.ArrayMax = 0;
      local_2d8._8_8_ = 0;
      local_188 = 0;
      FUtf8String::Reset(&local_2b8,0);
      local_180 = 0;
      local_2d8._0_4_ = 0;
      local_2d8._4_4_ = 0;
      local_2d8._24_8_ = 0;
      local_2d8._16_8_ = 0;
      local_2d8._8_8_ = 0;
      local_178 = 0;
      FUtf8String::Reset(&local_2b8,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_2a8 = None;
      FInstancedStruct::FInstancedStruct(&local_2a0);
      local_290.ShaderValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_290.ShaderValue.ArrayNum = 0;
      local_290.ShaderValue.ArrayMax = 0;
      local_290.ArrayList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_290.ArrayList.ArrayNum = 0;
      local_290.ArrayList.ArrayMax = 0;
      local_2a8 = GPU;
      pFVar13 = FOptimusDataTypeRegistry::Get();
      pTVar14 = FOptimusDataTypeRegistry::FindType
                          (pFVar13,&local_70,
                           (FShaderValueType *)
                           (((FString *)(piVar30 + 4))->Data).AllocatorInstance.Data);
      local_1e8._0_4_ = 0;
      local_1e8._4_4_ = 0;
      local_1e8._24_8_ = 0;
      local_1e8._16_8_ = 0;
      local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.Data.ArrayNum = 0;
      local_1c8.Data.ArrayMax = 0;
      local_1e8._8_8_ = 0;
      local_170 = 0;
      FUtf8String::Reset(&local_1c8,0);
      local_f0.Object = pTVar14->Object;
      local_f0.SharedReferenceCount.ReferenceController =
           (pTVar14->SharedReferenceCount).ReferenceController;
      if (local_f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_1e8,&local_f0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar14->SharedReferenceCount).ReferenceController);
      local_2d8._0_8_ = local_1e8._0_8_;
      local_2d8._8_8_ = local_1e8._8_8_;
      local_2d8._16_8_ = local_1e8._16_8_;
      local_2d8._24_8_ = local_1e8._24_8_;
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
      local_2b8.Data.AllocatorInstance.Data = local_1c8.Data.AllocatorInstance.Data;
      local_2b8.Data.ArrayNum = local_1c8.Data.ArrayNum;
      local_2b8.Data.ArrayMax = local_1c8.Data.ArrayMax;
      local_a0._0_8_ = *(FName *)(lVar2 + 0x40);
      local_a0._8_8_ = *(undefined8 *)(lVar2 + 0x48);
      local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.Data.ArrayNum = 0;
      local_1c8.Data.ArrayMax = 0;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(local_a0 + 0x10),(FSoftObjectPath *)(lVar2 + 0x50));
      pFVar15 = FOptimusValueContainerStruct::GetShaderValue
                          ((FOptimusValueContainerStruct *)(lVar2 + 0x70),&local_c0,
                           (FOptimusDataTypeRef *)local_a0);
      if (&local_290 != pFVar15) {
        if (local_290.ShaderValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_290.ShaderValue.AllocatorInstance.Data);
        }
        local_290.ShaderValue.AllocatorInstance.Data = (pFVar15->ShaderValue).AllocatorInstance.Data
        ;
        (pFVar15->ShaderValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_290.ShaderValue.ArrayNum = (pFVar15->ShaderValue).ArrayNum;
        local_290.ShaderValue.ArrayMax = (pFVar15->ShaderValue).ArrayMax;
        (pFVar15->ShaderValue).ArrayNum = 0;
        (pFVar15->ShaderValue).ArrayMax = 0;
      }
      pTVar24 = &pFVar15->ArrayList;
      if (&local_290.ArrayList != pTVar24) {
        DestructItems<FArrayShaderValue,int>
                  ((FArrayShaderValue *)local_290.ArrayList.AllocatorInstance.Data,
                   local_290.ArrayList.ArrayNum);
        if (local_290.ArrayList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_290.ArrayList.AllocatorInstance.Data);
        }
        local_290.ArrayList.AllocatorInstance.Data = (pTVar24->AllocatorInstance).Data;
        (pTVar24->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_290.ArrayList.ArrayNum = (pFVar15->ArrayList).ArrayNum;
        local_290.ArrayList.ArrayMax = (pFVar15->ArrayList).ArrayMax;
        (pFVar15->ArrayList).ArrayNum = 0;
        (pFVar15->ArrayList).ArrayMax = 0;
      }
      DestructItems<FArrayShaderValue,int>
                ((FArrayShaderValue *)local_c0.ArrayList.AllocatorInstance.Data,
                 local_c0.ArrayList.ArrayNum);
      if (local_c0.ArrayList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.ArrayList.AllocatorInstance.Data);
      }
      if (local_c0.ShaderValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.ShaderValue.AllocatorInstance.Data);
      }
      TMapBase<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
      ::Emplace<FOptimusValueIdentifier_const_&,FOptimusValueDescription>
                ((TMapBase<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
                  *)&this->ValueMap,&local_2f8,(FOptimusValueDescription *)local_2d8);
      DestructItems<FArrayShaderValue,int>
                ((FArrayShaderValue *)local_290.ArrayList.AllocatorInstance.Data,
                 local_290.ArrayList.ArrayNum);
      if (local_290.ArrayList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.ArrayList.AllocatorInstance.Data);
      }
      if (local_290.ShaderValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.ShaderValue.AllocatorInstance.Data);
      }
      FInstancedStruct::Reset(&local_2a0);
      lVar29 = local_2e0;
      iVar28 = local_304;
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        lVar29 = local_2e0;
        iVar28 = local_304;
      }
LAB_14e1fe4ca:
      uVar17 = (ulonglong)local_2e8;
      *(ulonglong *)(piVar30 + 6) = CONCAT44(local_2f8.Name.ComparisonIndex.Value,local_2f8._0_4_);
      *(uint *)&(((FString *)(piVar30 + 8))->Data).AllocatorInstance.Data = local_2f8.Name.Number;
      piVar30 = piVar30 + 0x22;
    }
    else {
      local_168 = 0;
      local_268._24_8_ = 0;
      local_268._16_8_ = 0;
      local_268._0_4_ = 0;
      local_268._4_4_ = 0;
      local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_248.Data.ArrayNum = 0;
      local_248.Data.ArrayMax = 0;
      local_268._8_8_ = 0;
      FUtf8String::Reset(&local_248,0);
      local_160 = 0;
      local_268._0_4_ = 0;
      local_268._4_4_ = 0;
      local_158 = 0;
      local_268._24_8_ = 0;
      local_268._16_8_ = 0;
      local_268._8_8_ = 0;
      FUtf8String::Reset(&local_248,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_238 = None;
      FInstancedStruct::FInstancedStruct(&local_230);
      local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_220.ArrayNum = 0;
      local_220.ArrayMax = 0;
      local_210.Data = (FScriptContainerElement *)0x0;
      local_208._0_4_ = 0;
      local_208._4_4_ = 0;
      local_238 = GPU;
      pFVar13 = FOptimusDataTypeRegistry::Get();
      pTVar14 = FOptimusDataTypeRegistry::FindType
                          (pFVar13,local_60,*(FShaderValueType **)(piVar30 + 4));
      local_1b8._0_4_ = 0;
      local_1b8._4_4_ = 0;
      local_1b8._24_8_ = 0;
      local_1b8._16_8_ = 0;
      local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.Data.ArrayNum = 0;
      local_198.Data.ArrayMax = 0;
      local_1b8._8_8_ = 0;
      local_150 = 0;
      FUtf8String::Reset(&local_198,0);
      local_e0.Object = pTVar14->Object;
      local_e0.SharedReferenceCount.ReferenceController =
           (pTVar14->SharedReferenceCount).ReferenceController;
      if (local_e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_1b8,&local_e0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar14->SharedReferenceCount).ReferenceController);
      local_268._0_8_ = local_1b8._0_8_;
      local_268._8_8_ = local_1b8._8_8_;
      local_268._16_8_ = local_1b8._16_8_;
      local_268._24_8_ = local_1b8._24_8_;
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      local_248.Data.AllocatorInstance.Data = local_198.Data.AllocatorInstance.Data;
      local_248.Data.ArrayNum = local_198.Data.ArrayNum;
      local_248.Data.ArrayMax = local_198.Data.ArrayMax;
      local_198.Data.ArrayNum = 0;
      local_198.Data.ArrayMax = 0;
      local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                (&local_220,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(piVar30 + 0x10));
      if (&local_210 != (ForAnyElementType *)(piVar30 + 0x14)) {
        DestructItems<FArrayShaderValue,int>((FArrayShaderValue *)local_210.Data,(int)local_208);
        iVar10 = piVar30[0x16];
        pFVar25 = ((ForAnyElementType *)(piVar30 + 0x14))->Data;
        local_208._0_4_ = iVar10;
        if ((iVar10 == 0) && (local_208._4_4_ == 0)) {
          local_208._0_4_ = 0;
          local_208._4_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar10,local_208._4_4_,&local_210,iVar10,
                     (int *)((longlong)&local_208 + 4));
          ConstructItems<FArrayShaderValue,FArrayShaderValue,int>
                    (local_210.Data,(FArrayShaderValue *)pFVar25,iVar10);
        }
      }
      local_1f8.Type = Constant;
      local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.Data.ArrayNum = 0;
      local_140.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_140,iVar28);
      ::FString::ConcatFC(&local_d0,(FString *)piVar30,L"_PostLoadFixUp_");
      ::FString::ConcatFF(&local_110,&local_d0,&local_140);
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_110.Data.ArrayNum != 0) {
        FVar21.Data = local_110.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_1f8.Name,(wchar_t *)FVar21.Data);
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      iVar28 = iVar28 + 1;
      local_304 = iVar28;
      TMapBase<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
      ::Emplace<FOptimusValueIdentifier_const_&,FOptimusValueDescription>
                ((TMapBase<FOptimusValueIdentifier,FOptimusValueDescription,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>_>
                  *)&this->ValueMap,&local_1f8,(FOptimusValueDescription *)local_268);
      *(ulonglong *)(piVar30 + 6) = CONCAT71(local_1f8._1_7_,local_1f8.Type);
      piVar30[8] = local_1f8.Name.Number;
      DestructItems<FArrayShaderValue,int>((FArrayShaderValue *)local_210.Data,(int)local_208);
      if (local_210.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data);
      }
      if (local_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.AllocatorInstance.Data);
      }
      FInstancedStruct::Reset(&local_230);
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      piVar30 = piVar30 + 0x22;
      uVar17 = (ulonglong)local_2e8;
    }
  }
LAB_14e1fe844:
  uVar17 = (ulonglong)local_2e4;
  pFVar25 = local_148 + 0x18;
  goto LAB_14e1fdee7;
}

// PostLoadRemoveDeprecatedExecutionNodes @ 14e1ff230

void __thiscall UOptimusDeformer::PostLoadRemoveDeprecatedExecutionNodes(UOptimusDeformer *this)

{
  UOptimusNode_CustomComputeKernel *pUVar1;
  UOptimusNodePin *pUVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  int iVar10;
  UClass *pUVar11;
  longlong lVar12;
  FOptimusDataTypeRegistry *pFVar13;
  UScriptStruct *pUVar14;
  undefined8 *puVar15;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar16;
  UOptimusNode *pUVar17;
  UPackage *pUVar18;
  UObjectBaseUtility *pUVar19;
  void *pvVar20;
  UOptimusNode_ComponentSource *this_00;
  UOptimusNodePin *pUVar21;
  ulonglong uVar22;
  wchar_t *pwVar23;
  UOptimusNodeGraph *pUVar24;
  FScriptContainerElement *pFVar25;
  longlong *plVar26;
  FOptimusDataType *pFVar27;
  longlong *plVar28;
  longlong lVar29;
  TReferenceControllerBase<1> *pTVar30;
  undefined1 local_188;
  undefined1 local_187 [7];
  TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> local_180;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_170;
  FScriptContainerElement *local_160;
  uint local_158;
  UOptimusNode_CustomComputeKernel *local_150;
  TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> local_148;
  TReferenceControllerBase<1> *local_138;
  uint local_130;
  UOptimusNodeGraph *local_128;
  longlong *local_120;
  undefined1 local_118 [8];
  FOptimusDataType *local_110;
  longlong local_108;
  longlong *local_100;
  undefined8 *local_f8;
  FScriptContainerElement *local_f0;
  longlong *local_e8;
  UOptimusDeformer *local_e0;
  undefined8 local_d8;
  TReferenceControllerBase<1> *local_d0;
  undefined8 local_c8;
  TReferenceControllerBase<1> *local_c0;
  TSharedPtr<FOptimusDataType_const_,1> local_b8;
  void *local_a8 [2];
  FOptimusPinTraversalContext local_98;
  FOptimusPinTraversalContext local_68;
  undefined1 local_38 [16];
  
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  local_158 = 0;
  local_e0 = this;
  local_e8 = (longlong *)(**(code **)(this->_padding_ + 0x28))(&this->_padding_);
  local_158 = *(uint *)(local_e8 + 1);
  uVar22 = (ulonglong)(int)local_158;
  plVar28 = (longlong *)*local_e8;
  plVar26 = plVar28 + uVar22;
  local_100 = plVar26;
  do {
    local_120 = plVar28;
    if ((int)local_e8[1] != (int)uVar22) {
      local_188 = 0;
      `TCheckedPointerIterator<UOptimusNodeGraph_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_188);
    }
    if (plVar28 == plVar26) {
      UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)local_e0);
      return;
    }
    local_128 = (UOptimusNodeGraph *)*plVar28;
    if ((local_128->GraphType == Setup) || (local_128->GraphType - Update < 2)) {
      local_130 = (local_128->Nodes).ArrayNum;
      uVar22 = (ulonglong)(int)local_130;
      pFVar25 = (local_128->Nodes).AllocatorInstance.Data;
      local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_170.ArrayNum = 0;
      local_170.ArrayMax = 0;
      local_f0 = pFVar25 + uVar22 * 8;
      while( true ) {
        pFVar8 = local_f0;
        this_00 = (UOptimusNode_ComponentSource *)0x0;
        local_160 = pFVar25;
        if ((local_128->Nodes).ArrayNum != (int)uVar22) {
          local_187[0] = 0;
          `TCheckedPointerIterator<UOptimusNode_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_187);
        }
        if (pFVar25 == pFVar8) break;
        pUVar1 = *(UOptimusNode_CustomComputeKernel **)pFVar25;
        local_150 = pUVar1;
        if (pUVar1 == (UOptimusNode_CustomComputeKernel *)0x0) {
LAB_14e1ff905:
          pUVar1 = local_150;
          if (local_150 != (UOptimusNode_CustomComputeKernel *)0x0) {
            pUVar11 = UOptimusNode_DataInterface::StaticClass();
            iVar10 = (int)pUVar11->_padding_;
            if ((iVar10 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
                &pUVar11->_padding_)) {
              pcVar4 = *(code **)(pUVar1->_padding_ + 0x10);
              pUVar18 = GetTransientPackage();
              pUVar19 = (UObjectBaseUtility *)(*pcVar4)(&pUVar1->_padding_,pUVar18);
              pFVar25 = local_160;
              if (pUVar19 != (UObjectBaseUtility *)0x0) {
                pUVar11 = Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_NoRegister();
                pvVar20 = UObjectBaseUtility::GetInterfaceAddress(pUVar19,pUVar11);
                pFVar25 = local_160;
                if (pvVar20 != (void *)0x0) {
                  if (((local_170.AllocatorInstance.Data <= (FScriptContainerElement *)&local_150)
                      && ((FScriptContainerElement *)&local_150 <
                          local_170.AllocatorInstance.Data + (longlong)local_170.ArrayMax * 8)) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar9)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar10 = local_170.ArrayNum;
                  if (local_170.ArrayNum == local_170.ArrayMax) {
                    iVar10 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&local_170.AllocatorInstance,&local_170.ArrayMax);
                  }
                  local_170.ArrayNum = iVar10 + 1;
                  *(UOptimusNode_CustomComputeKernel **)
                   (local_170.AllocatorInstance.Data + (longlong)iVar10 * 8) = local_150;
                  pFVar25 = local_160;
                }
              }
            }
          }
        }
        else {
          pUVar11 = UOptimusNode_CustomComputeKernel::StaticClass();
          iVar10 = (int)pUVar11->_padding_;
          if ((*(int *)(pUVar1->_padding_ + 0x38) < iVar10) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
              &pUVar11->_padding_)) goto LAB_14e1ff905;
          lVar12 = (**(code **)(pUVar1->_padding_ + 0x20))();
          local_108 = lVar12;
          pFVar13 = FOptimusDataTypeRegistry::Get();
          pUVar14 = TBaseStructure<UE::Math::TIntVector3<int>_>::Get();
          if (pUVar14 == (UScriptStruct *)0x0) {
LAB_14e1ff3eb:
            puVar15 = (undefined8 *)(**(code **)(pUVar14->_padding_ + 0x388))(pUVar14,local_a8,0);
            if (*(int *)(puVar15 + 1) == 0) {
              pwVar23 = L"";
            }
            else {
              pwVar23 = (wchar_t *)*puVar15;
            }
            ::FName::FName((FName *)local_118,pwVar23);
            if (local_a8[0] != (void *)0x0) {
              FMemory::Free(local_a8[0]);
            }
          }
          else {
            pUVar11 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
            iVar10 = (int)pUVar11->_padding_;
            if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar10) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
                &pUVar11->_padding_)) goto LAB_14e1ff3eb;
            (**(code **)(pUVar14->_padding_ + 0x380))(pUVar14,local_38);
            Optimus::Private::GetTypeNameForGuid((FGuid *)local_118);
          }
          pTVar16 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                            *)&pFVar13->RegisteredTypes,(FName)local_118);
          if ((pTVar16 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) ||
             (&pTVar16->field_0x10 == (undefined1 *)0x0)) {
            bVar5 = true;
            local_d0 = (TReferenceControllerBase<1> *)0x0;
            local_110 = (FOptimusDataType *)0x0;
            puVar15 = &local_d8;
          }
          else {
            local_110 = *(FOptimusDataType **)&pTVar16->field_0x10;
            bVar6 = true;
            local_c0 = *(TReferenceControllerBase<1> **)&pTVar16->field_0x18;
            if (local_c0 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_c0->SharedReferenceCount =
                   (atomic<int>)((int)local_c0->SharedReferenceCount + 1);
              UNLOCK();
            }
            puVar15 = &local_c8;
          }
          pFVar27 = local_110;
          pTVar30 = (TReferenceControllerBase<1> *)puVar15[1];
          puVar15[1] = 0;
          *puVar15 = 0;
          local_138 = pTVar30;
          if (bVar5) {
            bVar5 = false;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_d0);
          }
          if (bVar6) {
            bVar6 = false;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_c0);
          }
          puVar15 = *(undefined8 **)(lVar12 + 0xa0);
          iVar10 = *(int *)(local_108 + 0xa8);
          if ((iVar10 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_f8 = puVar15 + iVar10;
          if (puVar15 != local_f8) {
            do {
              pUVar2 = (UOptimusNodePin *)*puVar15;
              if (pUVar2->Direction == Input) {
                bVar7 = true;
                FOptimusDataTypeRef::Resolve(&pUVar2->DataType,&local_b8);
                if (local_b8.Object != pFVar27) goto LAB_14e1ff519;
                bVar9 = true;
              }
              else {
LAB_14e1ff519:
                bVar9 = false;
              }
              if (bVar7) {
                bVar7 = false;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_b8.SharedReferenceCount.ReferenceController);
              }
              if (bVar9) {
                local_98.ReferenceNesting.ArrayMax = 4;
                local_98.ReferenceNesting.AllocatorInstance.SecondaryData =
                     (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
                local_98.ReferenceNesting.ArrayNum = 0;
                pUVar17 = UOptimusNodePin::GetOwningNode(pUVar2);
                pUVar24 = (UOptimusNodeGraph *)pUVar17->_padding_;
                if (pUVar24 == (UOptimusNodeGraph *)0x0) {
LAB_14e1ff57a:
                  pUVar24 = (UOptimusNodeGraph *)0x0;
                }
                else {
                  pUVar11 = UOptimusNodeGraph::StaticClass();
                  iVar10 = (int)pUVar11->_padding_;
                  if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar10) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
                      &pUVar11->_padding_)) goto LAB_14e1ff57a;
                }
                UOptimusNodeGraph::GetConnectedPinsWithRouting(pUVar24,&local_180,pUVar2,&local_98);
                if (local_98.ReferenceNesting.AllocatorInstance.SecondaryData !=
                    (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
                  FMemory::Free((void *)local_98.ReferenceNesting.AllocatorInstance.SecondaryData);
                }
                if (local_180.ArrayNum == 1) {
                  lVar12 = *(longlong *)local_180.AllocatorInstance.Data;
                  while (lVar29 = lVar12, lVar12 = *(longlong *)(lVar29 + 0x20), lVar12 != 0) {
                    pUVar11 = UOptimusNodePin::StaticClass();
                    iVar10 = (int)pUVar11->_padding_;
                    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < iVar10) ||
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)iVar10 * 8)
                        != &pUVar11->_padding_)) break;
                  }
                  lVar12 = *(longlong *)(lVar29 + 0x20);
                  if (lVar12 == 0) {
LAB_14e1ff634:
                    lVar12 = 0;
                  }
                  else {
                    pUVar11 = UOptimusNode::StaticClass();
                    iVar10 = (int)pUVar11->_padding_;
                    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < iVar10) ||
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)iVar10 * 8)
                        != &pUVar11->_padding_)) goto LAB_14e1ff634;
                    pUVar11 = UOptimusNode_DataInterface::StaticClass();
                    iVar10 = (int)pUVar11->_padding_;
                    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < iVar10) ||
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)iVar10 * 8)
                        != &pUVar11->_padding_)) goto LAB_14e1ff634;
                  }
                  pcVar4 = *(code **)(*(longlong *)(lVar12 + 0x108) + 0x10);
                  pUVar18 = GetTransientPackage();
                  pUVar19 = (UObjectBaseUtility *)(*pcVar4)(lVar12 + 0x108,pUVar18);
                  if (pUVar19 != (UObjectBaseUtility *)0x0) {
                    pUVar11 = Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_NoRegister
                                        ();
                    pvVar20 = UObjectBaseUtility::GetInterfaceAddress(pUVar19,pUVar11);
                    if (pvVar20 != (void *)0x0) {
                      puVar3 = *(undefined8 **)(lVar12 + 0x50);
                      if (*(int *)(lVar12 + 0x58) < 0) {
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("InCount >= 0",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                           ,0xeb,L"");
                        if (bVar9) {
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
LAB_14e1ff6ad:
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                           ,0x14f,
                                           L"Array index out of bounds: %lld from an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                      }
                      else if (*(int *)(lVar12 + 0x58) < 1) goto LAB_14e1ff6ad;
                      pUVar2 = (UOptimusNodePin *)*puVar3;
                      local_68.ReferenceNesting.AllocatorInstance.SecondaryData =
                           (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
                      local_68.ReferenceNesting.ArrayNum = 0;
                      local_68.ReferenceNesting.ArrayMax = 4;
                      pUVar17 = UOptimusNodePin::GetOwningNode(pUVar2);
                      pUVar24 = (UOptimusNodeGraph *)pUVar17->_padding_;
                      if (pUVar24 == (UOptimusNodeGraph *)0x0) {
LAB_14e1ff731:
                        pUVar24 = (UOptimusNodeGraph *)0x0;
                      }
                      else {
                        pUVar11 = UOptimusNodeGraph::StaticClass();
                        iVar10 = (int)pUVar11->_padding_;
                        if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar10) ||
                           ((longlong *)
                            *(undefined1 **)
                             (*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
                            &pUVar11->_padding_)) goto LAB_14e1ff731;
                      }
                      UOptimusNodeGraph::GetConnectedPinsWithRouting
                                (pUVar24,&local_148,pUVar2,&local_68);
                      if (local_68.ReferenceNesting.AllocatorInstance.SecondaryData !=
                          (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
                        FMemory::Free((void *)local_68.ReferenceNesting.AllocatorInstance.
                                              SecondaryData);
                      }
                      if ((local_148.ArrayNum == 1) &&
                         (this_00 = (UOptimusNode_ComponentSource *)
                                    UOptimusNodePin::GetOwningNode
                                              (*(UOptimusNodePin **)local_148.AllocatorInstance.Data
                                              ), this_00 != (UOptimusNode_ComponentSource *)0x0)) {
                        pUVar11 = UOptimusNode_ComponentSource::StaticClass();
                        iVar10 = (int)pUVar11->_padding_;
                        if ((iVar10 <= *(int *)(this_00->_padding_ + 0x38)) &&
                           ((longlong *)
                            *(undefined1 **)
                             (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
                            &pUVar11->_padding_)) {
                          DestructItems<FOptimusRoutedNodePin,int>
                                    ((FOptimusRoutedNodePin *)local_148.AllocatorInstance.Data,
                                     local_148.ArrayNum);
                          if ((FOptimusRoutedNodePin *)local_148.AllocatorInstance.Data !=
                              (FOptimusRoutedNodePin *)0x0) {
                            FMemory::Free(local_148.AllocatorInstance.Data);
                          }
                          DestructItems<FOptimusRoutedNodePin,int>
                                    ((FOptimusRoutedNodePin *)local_180.AllocatorInstance.Data,
                                     local_180.ArrayNum);
                          pTVar30 = local_138;
                          if ((FOptimusRoutedNodePin *)local_180.AllocatorInstance.Data !=
                              (FOptimusRoutedNodePin *)0x0) {
                            FMemory::Free(local_180.AllocatorInstance.Data);
                            pTVar30 = local_138;
                          }
                          break;
                        }
                      }
                      DestructItems<FOptimusRoutedNodePin,int>
                                ((FOptimusRoutedNodePin *)local_148.AllocatorInstance.Data,
                                 local_148.ArrayNum);
                      if ((FOptimusRoutedNodePin *)local_148.AllocatorInstance.Data !=
                          (FOptimusRoutedNodePin *)0x0) {
                        FMemory::Free(local_148.AllocatorInstance.Data);
                      }
                    }
                  }
                }
                DestructItems<FOptimusRoutedNodePin,int>
                          ((FOptimusRoutedNodePin *)local_180.AllocatorInstance.Data,
                           local_180.ArrayNum);
                if ((FOptimusRoutedNodePin *)local_180.AllocatorInstance.Data !=
                    (FOptimusRoutedNodePin *)0x0) {
                  FMemory::Free(local_180.AllocatorInstance.Data);
                }
              }
              this_00 = (UOptimusNode_ComponentSource *)0x0;
              puVar15 = puVar15 + 1;
              pFVar27 = local_110;
              pTVar30 = local_138;
            } while (puVar15 != local_f8);
          }
          UOptimusNode_CustomComputeKernel::PostLoadRemoveDeprecatedNumThreadsPin(pUVar1);
          if (*(int *)(local_108 + 0xa8) < 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L"");
            if (bVar9) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
LAB_14e1ff85b:
            if (this_00 != (UOptimusNode_ComponentSource *)0x0) {
              iVar10 = (int)pUVar1->_padding_;
              puVar15 = (undefined8 *)pUVar1->_padding_;
              if (iVar10 < 0) {
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L"");
                if (bVar9) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
LAB_14e1ff8a9:
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar9) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              else if (iVar10 < 1) goto LAB_14e1ff8a9;
              pUVar2 = (UOptimusNodePin *)*puVar15;
              pUVar21 = UOptimusNode_ComponentSource::GetComponentPin(this_00);
              UOptimusNodeGraph::AddLink(local_128,pUVar21,pUVar2);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_138);
            pFVar25 = local_160;
            goto LAB_14e1ff905;
          }
          if (*(int *)(local_108 + 0xa8) < 1) goto LAB_14e1ff85b;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar30);
          pFVar25 = local_160;
        }
        pFVar25 = pFVar25 + 8;
        uVar22 = (ulonglong)local_130;
      }
      UOptimusNodeGraph::RemoveNodesAndCount(local_128,&local_170);
      plVar26 = local_100;
      plVar28 = local_120;
      if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.AllocatorInstance.Data);
        plVar26 = local_100;
        plVar28 = local_120;
      }
    }
    else {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5723111267007197547>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                         ,0xe95,"Optimus::IsExecutionGraphType(Graph->GetGraphType())");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    plVar28 = plVar28 + 1;
    uVar22 = (ulonglong)local_158;
  } while( true );
}

// PostLoadRemoveDeprecatedValueContainerGeneratorClass @ 14e1ffd20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UOptimusDeformer::PostLoadRemoveDeprecatedValueContainerGeneratorClass(UOptimusDeformer *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UClass *this_00;
  int iVar3;
  UPackage *pUVar4;
  UClass *pUVar5;
  ForAnyElementType FVar6;
  undefined1 local_res10 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  pUVar4 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
  GetObjectsWithOuter((UObjectBase *)pUVar4,&local_18,false,RF_NoFlags,Borrowed);
  iVar3 = local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8;
  FVar6.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if (local_18.ArrayNum != iVar3) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar6.Data == pFVar1) break;
    this_00 = *(UClass **)FVar6.Data;
    if (this_00 != (UClass *)0x0) {
      pUVar5 = UOptimusValueContainerGeneratorClass::StaticClass();
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar5->_padding_)) {
        Optimus::RemoveObject((UObject *)this_00);
        if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(this_00);
        }
        Optimus::RemoveObject((this_00->ClassDefaultObject).field0_0x0.DebugPtr);
      }
    }
    FVar6.Data = FVar6.Data + 8;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// PostRename @ 14e2004b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UOptimusDeformer::PostRename(UOptimusDeformer *this,UObject *param_1,FName param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  UPackage *pUVar8;
  UClass *pUVar9;
  ForAnyElementType FVar10;
  undefined1 local_res20 [8];
  undefined1 local_58 [8];
  longlong local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_38;
  
  UObject::PostRename((UObject *)this,param_1,param_2);
  pUVar8 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  GetObjectsWithOuter((UObjectBase *)pUVar8,&local_38,false,RF_NoFlags,Borrowed);
  iVar5 = local_38.ArrayNum;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar10.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar5) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (FVar10.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        iVar5 = (int)local_40;
        pFVar1 = local_48.Data + (longlong)(int)local_40 * 8;
        FVar10.Data = local_48.Data;
        while( true ) {
          if ((int)local_40 != iVar5) {
            `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_58);
          }
          if (FVar10.Data == pFVar1) break;
          plVar3 = *(longlong **)FVar10.Data;
          pUVar8 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
          (**(code **)(*plVar3 + 0x170))(plVar3,0,pUVar8,0x34);
          FVar10.Data = FVar10.Data + 8;
        }
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data);
        }
        return;
      }
      lVar2 = *(longlong *)FVar10.Data;
      if (lVar2 != 0) break;
LAB_14e200610:
      local_50 = 0;
      FVar10.Data = FVar10.Data + 8;
    }
    pUVar9 = Z_Construct_UClass_UClass_NoRegister();
    iVar7 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar7) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar9->_padding_)) goto LAB_14e200610;
    local_50 = lVar2;
    if ((local_48.Data <= (FScriptContainerElement *)&local_50) &&
       (((FScriptContainerElement *)&local_50 < local_48.Data + (longlong)local_40._4_4_ * 8 &&
        (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)))) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (int)local_40;
    if ((int)local_40 == local_40._4_4_) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_48,(int *)((longlong)&local_40 + 4));
    }
    FVar10.Data = FVar10.Data + 8;
    local_40 = CONCAT44(local_40._4_4_,iVar7 + 1);
    *(longlong *)(local_48.Data + (longlong)iVar7 * 8) = local_50;
  } while( true );
}

// RemoveComponentBinding @ 14e212970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UOptimusDeformer::RemoveComponentBinding
          (UOptimusDeformer *this,UOptimusComponentSourceBinding *param_1)

{
  FScriptContainerElement *pFVar1;
  UOptimusComponentSourceBindingContainer *pUVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UClass *pUVar8;
  longlong lVar9;
  UOptimusActionStack *this_00;
  TIntrusiveReferenceController<FOptimusComponentBindingAction_RemoveBinding,1> *pTVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  ForElementType<FSetElementId> FVar14;
  int iVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  uint *puVar19;
  uint uVar20;
  undefined1 auStackY_1d8 [32];
  undefined1 local_188;
  undefined1 local_187 [7];
  longlong local_180;
  int local_178 [2];
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_170;
  int local_160;
  int local_15c;
  ulonglong local_158;
  ulonglong *local_150;
  UOptimusComponentSourceBinding *local_148;
  FOptimusActionScope local_140;
  TSharedPtr<FOptimusAction,1> local_138;
  longlong *local_128;
  uint uStack_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  uint local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  FString local_c8 [2];
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  ulonglong uVar18;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_148 = param_1;
  if (param_1 == (UOptimusComponentSourceBinding *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5723111267007200142>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                       ,0x472,"InBinding");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  else {
    pUVar2 = (this->Bindings).field0_0x0.DebugPtr;
    if (pUVar2 == (UOptimusComponentSourceBindingContainer *)0x0) {
      bVar5 = (UOptimusComponentSourceBindingContainer *)param_1->_padding_ ==
              (UOptimusComponentSourceBindingContainer *)0x0;
    }
    else {
      bVar5 = pUVar2 == (UOptimusComponentSourceBindingContainer *)param_1->_padding_;
    }
    if (bVar5) {
      if (param_1->bIsPrimaryBinding == false) {
        uVar18 = 0;
        local_98._0_8_ = 0;
        local_98._8_8_ = 0;
        local_78 = (uint *)0x0;
        uVar17 = 0;
        local_70 = 0;
        local_64 = 0;
        local_58 = (ForElementType<FSetElementId>)0x0;
        local_50 = 0;
        local_6c = 0x80;
        local_68 = 0xffffffff;
        GetNodesUsingComponentBinding(this,&local_170,param_1);
        iVar15 = local_170.ArrayNum;
        uVar13 = (ulonglong)local_170.ArrayNum;
        pFVar1 = local_170.AllocatorInstance.Data + uVar13 * 8;
        FVar16.Data = local_170.AllocatorInstance.Data;
        while( true ) {
          if ((uint)uVar13 != iVar15) {
            local_188 = 0;
            `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_188);
          }
          if (FVar16.Data == pFVar1) break;
          local_180 = *(longlong *)FVar16.Data;
          uVar13 = *(ulonglong *)(local_180 + 0x20);
          if (uVar13 == 0) {
LAB_14e212b11:
            local_158 = uVar18;
          }
          else {
            pUVar8 = UOptimusNodeGraph::StaticClass();
            iVar7 = (int)pUVar8->_padding_;
            if ((*(int *)(*(longlong *)(uVar13 + 0x10) + 0x38) < iVar7) ||
               (local_158 = uVar13,
               (longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)(uVar13 + 0x10) + 0x30) + (longlong)iVar7 * 8) !=
               &pUVar8->_padding_)) goto LAB_14e212b11;
          }
          uVar12 = ((uint)(local_158 >> 0x14) & 0xffff ^ (uint)(local_158 >> 4)) * -0x7a143595;
          uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
          uVar12 = uVar12 >> 0x10 ^ uVar12;
          if (local_98._8_4_ != local_64) {
            FVar14 = (ForElementType<FSetElementId>)local_60;
            if (local_58 != (ForElementType<FSetElementId>)0x0) {
              FVar14 = local_58;
            }
            for (iVar7 = *(int *)((longlong)FVar14 + (ulonglong)(local_50 - 1U & uVar12) * 4);
                iVar7 != -1; iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + local_98._0_8_)) {
              if (*(ulonglong *)((longlong)iVar7 * 0x20 + local_98._0_8_) == local_158) {
                if ((iVar7 != -1) && (lVar9 = (longlong)iVar7 * 0x20 + local_98._0_8_, lVar9 != 0))
                goto LAB_14e212bdb;
                break;
              }
            }
          }
          local_150 = &local_158;
          TSet<TTuple<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<UOptimusNodeGraph_*_&&>_>
                    ((TSet<TTuple<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)local_98,(uint)local_178,
                     (TKeyInitializer<UOptimusNodeGraph_*_&&> *)(ulonglong)uVar12,(bool *)&local_150
                    );
          lVar9 = (longlong)local_178[0] * 0x20 + local_98._0_8_;
LAB_14e212bdb:
          if (((*(longlong **)(lVar9 + 8) <= &local_180) &&
              (&local_180 < *(longlong **)(lVar9 + 8) + *(int *)(lVar9 + 0x14))) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          iVar7 = *(int *)(lVar9 + 0x10);
          if (iVar7 == *(int *)(lVar9 + 0x14)) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)(lVar9 + 8),(int *)(lVar9 + 0x14));
          }
          *(int *)(lVar9 + 0x10) = iVar7 + 1;
          FVar16.Data = FVar16.Data + 8;
          *(longlong *)(((ForAnyElementType *)(lVar9 + 8))->Data + (longlong)iVar7 * 8) = local_180;
          uVar13 = (ulonglong)(uint)local_170.ArrayNum;
        }
        if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.AllocatorInstance.Data);
        }
        ::FString::FString(local_c8,L"Remove Binding");
        local_140.ActionStack = GetActionStack(this);
        UOptimusActionStack::OpenActionScope(local_140.ActionStack,local_c8);
        if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
        }
        uVar12 = local_70;
        uStack_11c = 1;
        local_108 = 0;
        uStack_10c = local_108;
        if (local_70 != 0) {
          puVar19 = (uint *)(local_98 + 0x10);
          if (local_78 != (uint *)0x0) {
            puVar19 = local_78;
          }
          uVar20 = *puVar19;
          uVar13 = uVar18;
          uVar17 = 0;
          local_108 = 0;
          while (uVar20 == 0) {
            uVar17 = (int)uVar18 + 1;
            uVar18 = (ulonglong)uVar17;
            local_108 = (int)uVar13 + 0x20;
            uVar13 = (ulonglong)local_108;
            uStack_10c = local_70;
            if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
            goto LAB_14e212d50;
            uVar20 = puVar19[(int)uVar17];
          }
          uStack_11c = -uVar20 & uVar20;
          uVar18 = (ulonglong)uStack_11c * 2 + 1;
          lVar9 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          local_160 = (int)lVar9;
          uStack_10c = local_160 + -1 + local_108;
          if ((int)local_70 < (int)uStack_10c) {
            uStack_10c = local_70;
          }
        }
LAB_14e212d50:
        local_128 = (longlong *)local_98;
        uStack_104 = local_9c;
        local_118 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
        uVar20 = local_70 & 0xffffffe0;
        iStack_100 = local_98._8_4_ - local_64;
        uStack_110 = 0xffffffff;
        TStack_f0.CurrentBitIndex = uStack_10c;
        TStack_f0.UnvisitedBitMask = 0xffffffff;
        TStack_f0._padding_ = CONCAT44(uStack_11c,uVar17);
        iVar15 = (int)local_70 >> 5;
        TStack_f0._28_4_ = local_9c;
        TStack_f0.BaseBitIndex = local_108;
        uStack_d0 = CONCAT44(uStack_fc,iStack_100);
        bVar11 = (byte)local_70;
        uStack_120 = uVar17;
        local_f8 = local_128;
        TStack_f0.Array = local_118;
        if (((int)local_70 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        if (uVar12 != local_70) {
          puVar19 = (uint *)(local_98 + 0x10);
          if (local_78 != (uint *)0x0) {
            puVar19 = local_78;
          }
          uVar17 = -1 << (bVar11 & 0x1f) & puVar19[iVar15];
          while (uVar17 == 0) {
            iVar15 = iVar15 + 1;
            uVar20 = uVar20 + 0x20;
            uVar12 = local_70;
            if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < iVar15)
            goto LAB_14e212e60;
            uVar17 = puVar19[iVar15];
          }
          uVar18 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
          lVar9 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          local_15c = (int)lVar9;
          uVar12 = local_15c + -1 + uVar20;
          if ((int)local_70 < (int)uVar12) {
            uVar12 = local_70;
          }
        }
LAB_14e212e60:
        while( true ) {
          plVar4 = local_f8;
          if ((int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
            local_187[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_187);
          }
          if (((TStack_f0.CurrentBitIndex == uVar12) &&
              (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
             (plVar4 == (longlong *)local_98)) break;
          lVar9 = *plVar4;
          UOptimusNodeGraph::RemoveNodesAndCount
                    (*(UOptimusNodeGraph **)((longlong)TStack_f0.CurrentBitIndex * 0x20 + lVar9),
                     (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)
                     (lVar9 + 8 + (longlong)TStack_f0.CurrentBitIndex * 0x20));
          TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
        }
        this_00 = GetActionStack(this);
        pTVar10 = ::operator_new(0x58);
        if (pTVar10 ==
            (TIntrusiveReferenceController<FOptimusComponentBindingAction_RemoveBinding,1> *)0x0) {
          pTVar10 = (TIntrusiveReferenceController<FOptimusComponentBindingAction_RemoveBinding,1> *
                    )0x0;
          local_138.Object = ___xmm_00000000000000000000000000000010;
          local_138.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)_UNK_150651568;
        }
        else {
          pTVar10 = SharedPointerInternals::
                    TIntrusiveReferenceController<FOptimusComponentBindingAction_RemoveBinding,1>::
                    TIntrusiveReferenceController<FOptimusComponentBindingAction_RemoveBinding,1><UOptimusComponentSourceBinding_*_&>
                              (pTVar10,&local_148);
          local_138.Object = (FOptimusAction *)&pTVar10->ObjectStorage;
          if ((local_138.Object == (FOptimusAction *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          local_138.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pTVar10;
          if (pTVar10 !=
              (TIntrusiveReferenceController<FOptimusComponentBindingAction_RemoveBinding,1> *)0x0)
          {
            LOCK();
            *(int *)&pTVar10->_padding_ = (int)pTVar10->_padding_ + 1;
            UNLOCK();
          }
        }
        UOptimusActionStack::RunAction(this_00,&local_138);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pTVar10);
        FOptimusActionScope::~FOptimusActionScope(&local_140);
        local_50 = 0;
        if (local_58 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_58);
        }
        TSparseArray<TSparseSetElement<TTuple<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_98);
        return true;
      }
      if (1 < (byte)LogOptimusCore._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
      }
    }
    else if (1 < (byte)LogOptimusCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
      return false;
    }
  }
  return false;
}

// RemoveComponentBindingDirect @ 14e212fe0

bool __thiscall
UOptimusDeformer::RemoveComponentBindingDirect
          (UOptimusDeformer *this,UOptimusComponentSourceBinding *param_1)

{
  int *piVar1;
  UOptimusComponentSourceBindingContainer *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  
  pUVar2 = (this->Bindings).field0_0x0.DebugPtr;
  pFVar3 = (pUVar2->Bindings).AllocatorInstance.Data;
  iVar7 = (pUVar2->Bindings).ArrayNum;
  pFVar9 = pFVar3;
  while( true ) {
    if (pFVar9 == pFVar3 + (longlong)iVar7 * 8) {
      return false;
    }
    if (*(UOptimusComponentSourceBinding **)pFVar9 == (UOptimusComponentSourceBinding *)0x0) {
      bVar10 = param_1 == (UOptimusComponentSourceBinding *)0x0;
    }
    else {
      bVar10 = *(UOptimusComponentSourceBinding **)pFVar9 == param_1;
    }
    if (bVar10) break;
    pFVar9 = pFVar9 + 8;
  }
  uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
  if (uVar8 == 0xffffffff) {
    return false;
  }
  uVar6 = 0;
  if ((int)uVar8 < iVar7) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar4 = (code *)swi(3);
    uVar5 = (*pcVar4)();
    return (bool)uVar5;
  }
  iVar7 = (pUVar2->Bindings).ArrayNum + ~uVar8;
  pFVar3 = (pUVar2->Bindings).AllocatorInstance.Data + (longlong)(int)uVar8 * 8;
  if (iVar7 != 0) {
    memmove(pFVar3,pFVar3 + 8,(longlong)iVar7 << 3);
  }
  piVar1 = &(pUVar2->Bindings).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&(pUVar2->Bindings).AllocatorInstance,(pUVar2->Bindings).ArrayNum,
             &(pUVar2->Bindings).ArrayMax);
  Notify(this,ComponentBindingRemoved,(UObject *)param_1);
  Optimus::RemoveObject((UObject *)param_1);
  UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  return true;
}

// RemoveGraph @ 14e213120

bool __thiscall UOptimusDeformer::RemoveGraph(UOptimusDeformer *this,UOptimusNodeGraph *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UOptimusNodeSubGraph *pUVar3;
  UClass *pUVar4;
  UOptimusNodeSubGraph *pUVar5;
  UOptimusActionStack *this_00;
  UOptimusNode *pUVar6;
  ForAnyElementType FVar7;
  UOptimusNodeGraph *this_01;
  UOptimusNode *pUVar8;
  FOptimusActionScope local_res10;
  FOptimusActionScope local_res18 [2];
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_38;
  
  local_res10.ActionStack = (UOptimusActionStack *)param_1;
  if (param_1->GraphType != SubGraph) {
    ::FString::FString((FString *)&local_38,L"Remove Graph");
    local_res18[0].ActionStack = GetActionStack(this);
    UOptimusActionStack::OpenActionScope(local_res18[0].ActionStack,(FString *)&local_38);
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    UOptimusNodeGraph::RemoveNodesAndCount
              (param_1,(TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)&param_1->Nodes);
    this_00 = GetActionStack(this);
    UOptimusActionStack::RunAction<FOptimusNodeGraphAction_RemoveGraph,UOptimusNodeGraph_*_&>
              (this_00,(UOptimusNodeGraph **)&local_res10);
    FOptimusActionScope::~FOptimusActionScope(local_res18);
    return true;
  }
  pUVar3 = CastChecked<UOptimusNodeSubGraph,UOptimusNodeGraph>(param_1);
  pUVar4 = UOptimusNode_SubGraphReference::StaticClass();
  GetAllNodesOfClass(this,&local_38,pUVar4);
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  for (FVar7.Data = local_38.AllocatorInstance.Data; pUVar8 = (UOptimusNode *)0x0,
      FVar7.Data != pFVar1; FVar7.Data = FVar7.Data + 8) {
    pUVar8 = *(UOptimusNode **)FVar7.Data;
    if (pUVar8 == (UOptimusNode *)0x0) {
LAB_14e2131b5:
      pUVar6 = (UOptimusNode *)0x0;
    }
    else {
      pUVar4 = UOptimusNode_SubGraphReference::StaticClass();
      iVar2 = (int)pUVar4->_padding_;
      if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar2) ||
         (pUVar6 = pUVar8,
         (longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar2 * 8)
         != &pUVar4->_padding_)) goto LAB_14e2131b5;
    }
    pUVar5 = (UOptimusNodeSubGraph *)(**(code **)(pUVar6[1]._padding_ + 0x10))();
    if (pUVar5 == pUVar3) break;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (pUVar8 == (UOptimusNode *)0x0) {
    return false;
  }
  ::FString::FString((FString *)&local_38,L"Remove SubGraph");
  local_res10.ActionStack = GetActionStack(this);
  UOptimusActionStack::OpenActionScope(local_res10.ActionStack,(FString *)&local_38);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  this_01 = (UOptimusNodeGraph *)pUVar8->_padding_;
  if (this_01 != (UOptimusNodeGraph *)0x0) {
    pUVar4 = UOptimusNodeGraph::StaticClass();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar4->_padding_)) goto LAB_14e213264;
  }
  this_01 = (UOptimusNodeGraph *)0x0;
LAB_14e213264:
  UOptimusNodeGraph::RemoveNode(this_01,pUVar8);
  FOptimusActionScope::~FOptimusActionScope(&local_res10);
  return true;
}

// RemoveGraphDirect @ 14e2133b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UOptimusDeformer::RemoveGraphDirect(UOptimusDeformer *this,UOptimusNodeGraph *param_1,bool param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  UClass *pUVar7;
  FString *pFVar8;
  undefined1 *this_00;
  longlong *plVar9;
  wchar_t *pwVar10;
  int iVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  bool bVar14;
  FString local_58;
  FString local_48;
  FDestructionSentinel local_38;
  
  this_00 = &(this->ValueMap).field_0x28;
  plVar2 = *(longlong **)this_00;
  plVar9 = plVar2;
  while( true ) {
    if (plVar9 == plVar2 + *(int *)&(this->ValueMap).field_0x30) {
      return false;
    }
    if ((UOptimusNodeGraph *)*plVar9 == (UOptimusNodeGraph *)0x0) {
      bVar14 = param_1 == (UOptimusNodeGraph *)0x0;
    }
    else {
      bVar14 = (UOptimusNodeGraph *)*plVar9 == param_1;
    }
    if (bVar14) break;
    plVar9 = plVar9 + 1;
  }
  iVar11 = (int)((longlong)plVar9 - (longlong)plVar2 >> 3);
  if (iVar11 == -1) {
    return false;
  }
  if (param_1->GraphType == Update) {
    return false;
  }
  TArray<TObjectPtr<UOptimusNodeGraph>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<TObjectPtr<UOptimusNodeGraph>,TSizedDefaultAllocator<32>_> *)this_00,iVar11,
             Default);
  pUVar7 = UOptimusNodeGraph::StaticClass();
  iVar11 = (int)pUVar7->_padding_;
  if (((iVar11 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar11 * 8)
       == &pUVar7->_padding_)) && (param_1 != (UOptimusNodeGraph *)0x0)) {
    OnGraphRenamedOrRemoved
              ((UOptimusDeformer *)&this[-1].ConstantValueUpdateDelegate.field_0x8,param_1);
    if (*(int *)&(this->ValueMap).field_0x20 != 3) {
      *(undefined4 *)&(this->ValueMap).field_0x20 = 2;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ActionStack,
               (FWriteAccessScope *)&local_38);
    piVar1 = &(this->Graphs).ArrayMax;
    *piVar1 = *piVar1 + 1;
    bVar14 = false;
    iVar11 = *(int *)&(this->Graphs).AllocatorInstance.Data + -1;
    if (-1 < iVar11) {
      lVar13 = (longlong)iVar11 << 4;
      bVar14 = false;
      do {
        if ((*(int *)&(this->Graphs).AllocatorInstance.Data <= iVar11) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (((*(int *)(lVar13 + 8 + *(longlong *)&this->Status) == 0) ||
            (plVar2 = *(longlong **)(lVar13 + *(longlong *)&this->Status), plVar2 == (longlong *)0x0
            )) || (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,1,param_1), cVar6 == '\0')) {
          bVar14 = true;
        }
        lVar13 = lVar13 + -0x10;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
    }
    piVar1 = &(this->Graphs).ArrayMax;
    *piVar1 = *piVar1 + -1;
    if (bVar14) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ActionStack,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    if (param_2) {
      Optimus::RemoveObject((UObject *)param_1);
    }
    return true;
  }
  pFVar8 = GetTypeName<UOptimusNodeGraph>(&local_58);
  pwVar12 = L"";
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  pFVar8 = GetFullNameForCastLogError<UObject>(&local_48,(UObject *)param_1);
  if ((pFVar8->Data).ArrayNum != 0) {
    pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar12,pwVar10);
}

// RemoveResource @ 14e2163e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UOptimusDeformer::RemoveResource(UOptimusDeformer *this,UOptimusResourceDescription *param_1)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  UOptimusResourceContainer *pUVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UClass *pUVar9;
  longlong lVar10;
  UOptimusActionStack *this_00;
  TReferenceControllerBase<1> *pTVar11;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  ForElementType<FSetElementId> FVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  ForAnyElementType FVar19;
  uint *puVar20;
  undefined1 auStackY_1d8 [32];
  undefined1 local_188;
  undefined1 local_187 [7];
  ulonglong local_180;
  int local_178 [2];
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_170;
  int local_160;
  int local_15c;
  ulonglong local_158;
  ulonglong *local_150;
  FOptimusActionScope local_148;
  TSharedPtr<FOptimusAction,1> local_140;
  longlong *local_130;
  uint uStack_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  undefined4 uStack_118;
  uint uStack_114;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  FString local_d0 [2];
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (param_1 == (UOptimusResourceDescription *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5723111267007200636>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                       ,0x284,"InResourceDesc");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  else {
    pUVar3 = (this->Resources).field0_0x0.DebugPtr;
    if (pUVar3 == (UOptimusResourceContainer *)0x0) {
      bVar6 = (UOptimusResourceContainer *)param_1->_padding_ == (UOptimusResourceContainer *)0x0;
    }
    else {
      bVar6 = pUVar3 == (UOptimusResourceContainer *)param_1->_padding_;
    }
    if (bVar6) {
      local_98._0_8_ = 0;
      local_98._8_8_ = 0;
      local_78 = (uint *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      GetNodesUsingResource(this,&local_170,param_1);
      iVar16 = local_170.ArrayNum;
      uVar14 = (ulonglong)local_170.ArrayNum;
      pFVar2 = local_170.AllocatorInstance.Data + uVar14 * 8;
      FVar19.Data = local_170.AllocatorInstance.Data;
      while( true ) {
        uVar17 = 0;
        if ((uint)uVar14 != iVar16) {
          local_188 = 0;
          `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_188);
        }
        if (FVar19.Data == pFVar2) break;
        uVar14 = *(ulonglong *)FVar19.Data;
        if (uVar14 == 0) {
LAB_14e216548:
          uVar14 = uVar17;
        }
        else {
          pUVar9 = UOptimusNode_ResourceAccessorBase::StaticClass();
          iVar8 = (int)pUVar9->_padding_;
          if ((*(int *)(*(longlong *)(uVar14 + 0x10) + 0x38) < iVar8) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(uVar14 + 0x10) + 0x30) + (longlong)iVar8 * 8) !=
              &pUVar9->_padding_)) goto LAB_14e216548;
        }
        uVar17 = *(ulonglong *)(uVar14 + 0x20);
        if (uVar17 == 0) {
LAB_14e216577:
          uVar17 = 0;
        }
        else {
          pUVar9 = UOptimusNodeGraph::StaticClass();
          iVar8 = (int)pUVar9->_padding_;
          if ((*(int *)(*(longlong *)(uVar17 + 0x10) + 0x38) < iVar8) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(uVar17 + 0x10) + 0x30) + (longlong)iVar8 * 8) !=
              &pUVar9->_padding_)) goto LAB_14e216577;
        }
        uVar13 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        uVar13 = uVar13 >> 0x10 ^ uVar13;
        local_158 = uVar17;
        if (local_98._8_4_ != local_64) {
          FVar15 = (ForElementType<FSetElementId>)local_60;
          if (local_58 != (ForElementType<FSetElementId>)0x0) {
            FVar15 = local_58;
          }
          for (iVar8 = *(int *)((longlong)FVar15 + (ulonglong)(local_50 - 1U & uVar13) * 4);
              iVar8 != -1; iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + local_98._0_8_)) {
            if (*(ulonglong *)((longlong)iVar8 * 0x20 + local_98._0_8_) == uVar17) {
              if ((iVar8 != -1) && (lVar10 = (longlong)iVar8 * 0x20 + local_98._0_8_, lVar10 != 0))
              goto LAB_14e21663f;
              break;
            }
          }
        }
        local_150 = &local_158;
        TSet<TTuple<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<UOptimusNodeGraph_*_&&>_>
                  ((TSet<TTuple<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)local_98,(uint)local_178,
                   (TKeyInitializer<UOptimusNodeGraph_*_&&> *)(ulonglong)uVar13,(bool *)&local_150);
        lVar10 = (longlong)local_178[0] * 0x20 + local_98._0_8_;
LAB_14e21663f:
        pFVar1 = (ForAnyElementType *)(lVar10 + 8);
        local_180 = uVar14;
        if (((pFVar1->Data <= (FScriptContainerElement *)&local_180) &&
            ((FScriptContainerElement *)&local_180 <
             pFVar1->Data + (longlong)*(int *)(lVar10 + 0x14) * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar8 = *(int *)(lVar10 + 0x10);
        if (iVar8 == *(int *)(lVar10 + 0x14)) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar1,(int *)(lVar10 + 0x14));
        }
        *(int *)(lVar10 + 0x10) = iVar8 + 1;
        FVar19.Data = FVar19.Data + 8;
        *(ulonglong *)(pFVar1->Data + (longlong)iVar8 * 8) = local_180;
        uVar14 = (ulonglong)(uint)local_170.ArrayNum;
      }
      if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.AllocatorInstance.Data);
      }
      ::FString::FString(local_d0,L"Remove Resource");
      local_148.ActionStack = GetActionStack(this);
      UOptimusActionStack::OpenActionScope(local_148.ActionStack,local_d0);
      if (local_d0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0[0].Data.AllocatorInstance.Data);
      }
      uVar13 = local_70;
      local_110 = 0;
      uStack_128 = 0;
      uStack_124 = 1;
      uStack_114 = 0;
      if (local_70 != 0) {
        puVar20 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar20 = local_78;
        }
        uVar18 = *puVar20;
        while (uStack_128 = (uint)uVar17, uVar18 == 0) {
          uStack_128 = uStack_128 + 1;
          uVar17 = (ulonglong)uStack_128;
          local_110 = local_110 + 0x20;
          uStack_114 = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_128)
          goto LAB_14e2167b0;
          uVar18 = puVar20[(int)uStack_128];
        }
        uStack_124 = -uVar18 & uVar18;
        uVar14 = (ulonglong)uStack_124 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_160 = (int)lVar10;
        uStack_114 = local_160 + -1 + local_110;
        if ((int)local_70 < (int)uStack_114) {
          uStack_114 = local_70;
        }
      }
LAB_14e2167b0:
      local_130 = (longlong *)local_98;
      uStack_10c = local_a4;
      local_120 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      uVar18 = local_70 & 0xffffffe0;
      iStack_108 = local_98._8_4_ - local_64;
      uStack_118 = 0xffffffff;
      TStack_f8.CurrentBitIndex = uStack_114;
      TStack_f8.UnvisitedBitMask = 0xffffffff;
      TStack_f8._padding_ = CONCAT44(uStack_124,uStack_128);
      iVar16 = (int)local_70 >> 5;
      TStack_f8._28_4_ = local_a4;
      TStack_f8.BaseBitIndex = local_110;
      uStack_d8 = CONCAT44(uStack_104,iStack_108);
      bVar12 = (byte)local_70;
      local_100 = local_130;
      TStack_f8.Array = local_120;
      if (((int)local_70 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if (uVar13 != local_70) {
        puVar20 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar20 = local_78;
        }
        uVar13 = -1 << (bVar12 & 0x1f) & puVar20[iVar16];
        while (uVar13 == 0) {
          iVar16 = iVar16 + 1;
          uVar18 = uVar18 + 0x20;
          uVar13 = local_70;
          if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < iVar16)
          goto LAB_14e2168c0;
          uVar13 = puVar20[iVar16];
        }
        uVar14 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_15c = (int)lVar10;
        uVar13 = local_15c + -1 + uVar18;
        if ((int)local_70 < (int)uVar13) {
          uVar13 = local_70;
        }
      }
LAB_14e2168c0:
      while( true ) {
        plVar5 = local_100;
        if ((int)local_100[1] - *(int *)((longlong)local_100 + 0x34) != (int)uStack_d8) {
          local_187[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_187);
        }
        if (((TStack_f8.CurrentBitIndex == uVar13) &&
            (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
           (plVar5 == (longlong *)local_98)) break;
        lVar10 = *plVar5;
        UOptimusNodeGraph::RemoveNodesAndCount
                  (*(UOptimusNodeGraph **)((longlong)TStack_f8.CurrentBitIndex * 0x20 + lVar10),
                   (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)
                   (lVar10 + 8 + (longlong)TStack_f8.CurrentBitIndex * 0x20));
        TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
      }
      this_00 = GetActionStack(this);
      pTVar11 = ::operator_new(0x78);
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        local_140.Object = ___xmm_00000000000000000000000000000010;
        local_140.SharedReferenceCount.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar11->SharedReferenceCount = (atomic<int>)0x1;
        pTVar11->WeakReferenceCount = (atomic<int>)0x1;
        pTVar11->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFOptimusResourceAction_RemoveResource___00_SharedPointerInternals__6B_
        ;
        FOptimusResourceAction_RemoveResource::FOptimusResourceAction_RemoveResource
                  ((FOptimusResourceAction_RemoveResource *)(pTVar11 + 1),param_1);
        local_140.Object = (FOptimusAction *)(pTVar11 + 1);
        if ((local_140.Object == (FOptimusAction *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
        local_140.SharedReferenceCount.ReferenceController = pTVar11;
      }
      UOptimusActionStack::RunAction(this_00,&local_140);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      FOptimusActionScope::~FOptimusActionScope(&local_148);
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      return true;
    }
    if (1 < (byte)LogOptimusCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
    }
  }
  return false;
}

// RemoveResourceDirect @ 14e216a50

bool __thiscall
UOptimusDeformer::RemoveResourceDirect(UOptimusDeformer *this,UOptimusResourceDescription *param_1)

{
  int *piVar1;
  UOptimusResourceContainer *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  
  pUVar2 = (this->Resources).field0_0x0.DebugPtr;
  pFVar3 = (pUVar2->Descriptions).AllocatorInstance.Data;
  iVar7 = (pUVar2->Descriptions).ArrayNum;
  pFVar9 = pFVar3;
  while( true ) {
    if (pFVar9 == pFVar3 + (longlong)iVar7 * 8) {
      return false;
    }
    if (*(UOptimusResourceDescription **)pFVar9 == (UOptimusResourceDescription *)0x0) {
      bVar10 = param_1 == (UOptimusResourceDescription *)0x0;
    }
    else {
      bVar10 = *(UOptimusResourceDescription **)pFVar9 == param_1;
    }
    if (bVar10) break;
    pFVar9 = pFVar9 + 8;
  }
  uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
  if (uVar8 == 0xffffffff) {
    return false;
  }
  uVar6 = 0;
  if ((int)uVar8 < iVar7) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar4 = (code *)swi(3);
    uVar5 = (*pcVar4)();
    return (bool)uVar5;
  }
  iVar7 = (pUVar2->Descriptions).ArrayNum + ~uVar8;
  pFVar3 = (pUVar2->Descriptions).AllocatorInstance.Data + (longlong)(int)uVar8 * 8;
  if (iVar7 != 0) {
    memmove(pFVar3,pFVar3 + 8,(longlong)iVar7 << 3);
  }
  piVar1 = &(pUVar2->Descriptions).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&(pUVar2->Descriptions).AllocatorInstance,(pUVar2->Descriptions).ArrayNum,
             &(pUVar2->Descriptions).ArrayMax);
  Notify(this,ResourceRemoved,(UObject *)param_1);
  Optimus::RemoveObject((UObject *)param_1);
  UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  return true;
}

// RemoveVariable @ 14e216e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UOptimusDeformer::RemoveVariable(UOptimusDeformer *this,UOptimusVariableDescription *param_1)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  UOptimusVariableContainer *pUVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UClass *pUVar9;
  longlong lVar10;
  UOptimusActionStack *this_00;
  TReferenceControllerBase<1> *pTVar11;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  ForElementType<FSetElementId> FVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  ForAnyElementType FVar19;
  uint *puVar20;
  undefined1 auStackY_1d8 [32];
  undefined1 local_188;
  undefined1 local_187 [7];
  ulonglong local_180;
  int local_178 [2];
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_170;
  int local_160;
  int local_15c;
  ulonglong local_158;
  ulonglong *local_150;
  FOptimusActionScope local_148;
  TSharedPtr<FOptimusAction,1> local_140;
  longlong *local_130;
  uint uStack_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  undefined4 uStack_118;
  uint uStack_114;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  FString local_d0 [2];
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (param_1 == (UOptimusVariableDescription *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5723111267007201005>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                       ,0x113,"InVariableDesc");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  else {
    pUVar3 = (this->Variables).field0_0x0.DebugPtr;
    if (pUVar3 == (UOptimusVariableContainer *)0x0) {
      bVar6 = (UOptimusVariableContainer *)param_1->_padding_ == (UOptimusVariableContainer *)0x0;
    }
    else {
      bVar6 = pUVar3 == (UOptimusVariableContainer *)param_1->_padding_;
    }
    if (bVar6) {
      local_98._0_8_ = 0;
      local_98._8_8_ = 0;
      local_78 = (uint *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      GetNodesUsingVariable(this,&local_170,param_1);
      iVar16 = local_170.ArrayNum;
      uVar14 = (ulonglong)local_170.ArrayNum;
      pFVar2 = local_170.AllocatorInstance.Data + uVar14 * 8;
      FVar19.Data = local_170.AllocatorInstance.Data;
      while( true ) {
        uVar17 = 0;
        if ((uint)uVar14 != iVar16) {
          local_188 = 0;
          `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_188);
        }
        if (FVar19.Data == pFVar2) break;
        uVar14 = *(ulonglong *)FVar19.Data;
        if (uVar14 == 0) {
LAB_14e216f98:
          uVar14 = uVar17;
        }
        else {
          pUVar9 = UOptimusNode_GetVariable::StaticClass();
          iVar8 = (int)pUVar9->_padding_;
          if ((*(int *)(*(longlong *)(uVar14 + 0x10) + 0x38) < iVar8) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(uVar14 + 0x10) + 0x30) + (longlong)iVar8 * 8) !=
              &pUVar9->_padding_)) goto LAB_14e216f98;
        }
        uVar17 = *(ulonglong *)(uVar14 + 0x20);
        if (uVar17 == 0) {
LAB_14e216fc7:
          uVar17 = 0;
        }
        else {
          pUVar9 = UOptimusNodeGraph::StaticClass();
          iVar8 = (int)pUVar9->_padding_;
          if ((*(int *)(*(longlong *)(uVar17 + 0x10) + 0x38) < iVar8) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(uVar17 + 0x10) + 0x30) + (longlong)iVar8 * 8) !=
              &pUVar9->_padding_)) goto LAB_14e216fc7;
        }
        uVar13 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        uVar13 = uVar13 >> 0x10 ^ uVar13;
        local_158 = uVar17;
        if (local_98._8_4_ != local_64) {
          FVar15 = (ForElementType<FSetElementId>)local_60;
          if (local_58 != (ForElementType<FSetElementId>)0x0) {
            FVar15 = local_58;
          }
          for (iVar8 = *(int *)((longlong)FVar15 + (ulonglong)(local_50 - 1U & uVar13) * 4);
              iVar8 != -1; iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + local_98._0_8_)) {
            if (*(ulonglong *)((longlong)iVar8 * 0x20 + local_98._0_8_) == uVar17) {
              if ((iVar8 != -1) && (lVar10 = (longlong)iVar8 * 0x20 + local_98._0_8_, lVar10 != 0))
              goto LAB_14e21708f;
              break;
            }
          }
        }
        local_150 = &local_158;
        TSet<TTuple<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<UOptimusNodeGraph_*_&&>_>
                  ((TSet<TTuple<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)local_98,(uint)local_178,
                   (TKeyInitializer<UOptimusNodeGraph_*_&&> *)(ulonglong)uVar13,(bool *)&local_150);
        lVar10 = (longlong)local_178[0] * 0x20 + local_98._0_8_;
LAB_14e21708f:
        pFVar1 = (ForAnyElementType *)(lVar10 + 8);
        local_180 = uVar14;
        if (((pFVar1->Data <= (FScriptContainerElement *)&local_180) &&
            ((FScriptContainerElement *)&local_180 <
             pFVar1->Data + (longlong)*(int *)(lVar10 + 0x14) * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar8 = *(int *)(lVar10 + 0x10);
        if (iVar8 == *(int *)(lVar10 + 0x14)) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar1,(int *)(lVar10 + 0x14));
        }
        *(int *)(lVar10 + 0x10) = iVar8 + 1;
        FVar19.Data = FVar19.Data + 8;
        *(ulonglong *)(pFVar1->Data + (longlong)iVar8 * 8) = local_180;
        uVar14 = (ulonglong)(uint)local_170.ArrayNum;
      }
      if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.AllocatorInstance.Data);
      }
      ::FString::FString(local_d0,L"Remove Variable");
      local_148.ActionStack = GetActionStack(this);
      UOptimusActionStack::OpenActionScope(local_148.ActionStack,local_d0);
      if (local_d0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0[0].Data.AllocatorInstance.Data);
      }
      uVar13 = local_70;
      local_110 = 0;
      uStack_128 = 0;
      uStack_124 = 1;
      uStack_114 = 0;
      if (local_70 != 0) {
        puVar20 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar20 = local_78;
        }
        uVar18 = *puVar20;
        while (uStack_128 = (uint)uVar17, uVar18 == 0) {
          uStack_128 = uStack_128 + 1;
          uVar17 = (ulonglong)uStack_128;
          local_110 = local_110 + 0x20;
          uStack_114 = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_128)
          goto LAB_14e217200;
          uVar18 = puVar20[(int)uStack_128];
        }
        uStack_124 = -uVar18 & uVar18;
        uVar14 = (ulonglong)uStack_124 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_160 = (int)lVar10;
        uStack_114 = local_160 + -1 + local_110;
        if ((int)local_70 < (int)uStack_114) {
          uStack_114 = local_70;
        }
      }
LAB_14e217200:
      local_130 = (longlong *)local_98;
      uStack_10c = local_a4;
      local_120 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      uVar18 = local_70 & 0xffffffe0;
      iStack_108 = local_98._8_4_ - local_64;
      uStack_118 = 0xffffffff;
      TStack_f8.CurrentBitIndex = uStack_114;
      TStack_f8.UnvisitedBitMask = 0xffffffff;
      TStack_f8._padding_ = CONCAT44(uStack_124,uStack_128);
      iVar16 = (int)local_70 >> 5;
      TStack_f8._28_4_ = local_a4;
      TStack_f8.BaseBitIndex = local_110;
      uStack_d8 = CONCAT44(uStack_104,iStack_108);
      bVar12 = (byte)local_70;
      local_100 = local_130;
      TStack_f8.Array = local_120;
      if (((int)local_70 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if (uVar13 != local_70) {
        puVar20 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar20 = local_78;
        }
        uVar13 = -1 << (bVar12 & 0x1f) & puVar20[iVar16];
        while (uVar13 == 0) {
          iVar16 = iVar16 + 1;
          uVar18 = uVar18 + 0x20;
          uVar13 = local_70;
          if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < iVar16)
          goto LAB_14e217310;
          uVar13 = puVar20[iVar16];
        }
        uVar14 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_15c = (int)lVar10;
        uVar13 = local_15c + -1 + uVar18;
        if ((int)local_70 < (int)uVar13) {
          uVar13 = local_70;
        }
      }
LAB_14e217310:
      while( true ) {
        plVar5 = local_100;
        if ((int)local_100[1] - *(int *)((longlong)local_100 + 0x34) != (int)uStack_d8) {
          local_187[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_187);
        }
        if (((TStack_f8.CurrentBitIndex == uVar13) &&
            (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
           (plVar5 == (longlong *)local_98)) break;
        lVar10 = *plVar5;
        UOptimusNodeGraph::RemoveNodesAndCount
                  (*(UOptimusNodeGraph **)((longlong)TStack_f8.CurrentBitIndex * 0x20 + lVar10),
                   (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *)
                   (lVar10 + 8 + (longlong)TStack_f8.CurrentBitIndex * 0x20));
        TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
      }
      this_00 = GetActionStack(this);
      pTVar11 = ::operator_new(0x88);
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        local_140.Object = ___xmm_00000000000000000000000000000010;
        local_140.SharedReferenceCount.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar11->SharedReferenceCount = (atomic<int>)0x1;
        pTVar11->WeakReferenceCount = (atomic<int>)0x1;
        pTVar11->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFOptimusVariableAction_RemoveVariable___00_SharedPointerInternals__6B_
        ;
        FOptimusVariableAction_RemoveVariable::FOptimusVariableAction_RemoveVariable
                  ((FOptimusVariableAction_RemoveVariable *)(pTVar11 + 1),param_1);
        local_140.Object = (FOptimusAction *)(pTVar11 + 1);
        if ((local_140.Object == (FOptimusAction *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
        local_140.SharedReferenceCount.ReferenceController = pTVar11;
      }
      UOptimusActionStack::RunAction(this_00,&local_140);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      FOptimusActionScope::~FOptimusActionScope(&local_148);
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      return true;
    }
    if (1 < (byte)LogOptimusCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
    }
  }
  return false;
}

// RemoveVariableDirect @ 14e2174a0

bool __thiscall
UOptimusDeformer::RemoveVariableDirect(UOptimusDeformer *this,UOptimusVariableDescription *param_1)

{
  int *piVar1;
  UOptimusVariableContainer *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  
  pUVar2 = (this->Variables).field0_0x0.DebugPtr;
  pFVar3 = (pUVar2->Descriptions).AllocatorInstance.Data;
  iVar7 = (pUVar2->Descriptions).ArrayNum;
  pFVar9 = pFVar3;
  while( true ) {
    if (pFVar9 == pFVar3 + (longlong)iVar7 * 8) {
      return false;
    }
    if (*(UOptimusVariableDescription **)pFVar9 == (UOptimusVariableDescription *)0x0) {
      bVar10 = param_1 == (UOptimusVariableDescription *)0x0;
    }
    else {
      bVar10 = *(UOptimusVariableDescription **)pFVar9 == param_1;
    }
    if (bVar10) break;
    pFVar9 = pFVar9 + 8;
  }
  uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
  if (uVar8 == 0xffffffff) {
    return false;
  }
  uVar6 = 0;
  if ((int)uVar8 < iVar7) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar4 = (code *)swi(3);
    uVar5 = (*pcVar4)();
    return (bool)uVar5;
  }
  iVar7 = (pUVar2->Descriptions).ArrayNum + ~uVar8;
  pFVar3 = (pUVar2->Descriptions).AllocatorInstance.Data + (longlong)(int)uVar8 * 8;
  if (iVar7 != 0) {
    memmove(pFVar3,pFVar3 + 8,(longlong)iVar7 << 3);
  }
  piVar1 = &(pUVar2->Descriptions).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&(pUVar2->Descriptions).AllocatorInstance,(pUVar2->Descriptions).ArrayNum,
             &(pUVar2->Descriptions).ArrayMax);
  Notify(this,VariableRemoved,(UObject *)param_1);
  Optimus::RemoveObject((UObject *)param_1);
  UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  return true;
}

// RenameComponentBinding @ 14e2175e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UOptimusDeformer::RenameComponentBinding
          (UOptimusDeformer *this,UOptimusComponentSourceBinding *param_1,FName param_2,bool param_3
          )

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  atomic<int> *paVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  atomic<int> aVar7;
  UOptimusComponentSourceBindingContainer *pUVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  FOptimusCompoundAction *pFVar12;
  FText *pFVar13;
  UOptimusActionStack *this_00;
  int iVar14;
  FOptimusCompoundAction *pFVar15;
  ForAnyElementType FVar16;
  FOptimusCompoundAction *this_01;
  UOptimusComponentSourceBinding *local_res10;
  FName local_res18 [2];
  undefined1 local_b8 [8];
  UOptimusNode *local_b0;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  TSharedPtr<FOptimusAction,1> local_88;
  undefined1 local_78 [16];
  longlong *local_68;
  FText local_60;
  TWeakPtr<FOptimusComponentBindingAction_RenameBinding,1> local_50;
  
  pFVar15 = (FOptimusCompoundAction *)0x0;
  local_b0 = (UOptimusNode *)((ulonglong)local_b0 & 0xffffffff00000000);
  local_res10 = param_1;
  local_res18[0] = param_2;
  if (param_1 == (UOptimusComponentSourceBinding *)0x0) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_5723111267007200079>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                        ,0x4b1,"InBinding");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
  }
  else {
    pUVar8 = (this->Bindings).field0_0x0.DebugPtr;
    if (pUVar8 == (UOptimusComponentSourceBindingContainer *)0x0) {
      bVar10 = (UOptimusComponentSourceBindingContainer *)param_1->_padding_ ==
               (UOptimusComponentSourceBindingContainer *)0x0;
    }
    else {
      bVar10 = pUVar8 == (UOptimusComponentSourceBindingContainer *)param_1->_padding_;
    }
    if (bVar10) {
      if (param_2 != (FName)0x0) {
        if ((!param_3) && (param_2 == param_1->BindingName)) {
          return true;
        }
        if (param_2 != param_1->BindingName) {
          local_res18[0] =
               Optimus::GetUniqueNameForScope
                         ((UObject *)local_78,
                          (FName)(this->Resources).field0_0x0.ObjectPtr.field0_0x0);
          local_res18[0] = *(FName *)local_res18[0];
        }
        pFVar12 = ::operator_new(0x28);
        this_01 = pFVar15;
        if (pFVar12 != (FOptimusCompoundAction *)0x0) {
          ::FString::FString(&local_98,L"Rename Component Binding");
          FVar16.Data = local_98.Data.AllocatorInstance.Data;
          plVar1 = &pFVar12->_padding_;
          pFVar12->_padding_ = (longlong)&___7FOptimusAction__6B_;
          piVar2 = (int *)((longlong)&pFVar12->_padding_ + 4);
          *plVar1 = 0;
          *(int *)&pFVar12->_padding_ = local_98.Data.ArrayNum;
          if (local_98.Data.ArrayNum == 0) {
            *piVar2 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_98.Data.ArrayNum,0,(ForAnyElementType *)plVar1,
                       local_98.Data.ArrayNum,piVar2);
            memcpy((void *)*plVar1,FVar16.Data,(longlong)local_98.Data.ArrayNum * 2);
          }
          pFVar15 = (FOptimusCompoundAction *)&DAT_00000001;
          pFVar12->_padding_ = (longlong)&___7FOptimusCompoundAction__6B_;
          (pFVar12->SubActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar12->SubActions).ArrayNum = 0;
          (pFVar12->SubActions).ArrayMax = 0;
          this_01 = pFVar12;
        }
        if ((pFVar15 != (FOptimusCompoundAction *)0x0) &&
           (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        GetNodesUsingComponentBinding(this,&local_a8,param_1);
        iVar14 = local_a8.ArrayNum;
        pFVar5 = local_a8.AllocatorInstance.Data + (longlong)iVar14 * 8;
        FVar16.Data = local_a8.AllocatorInstance.Data;
        while( true ) {
          if (local_a8.ArrayNum != iVar14) {
            `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_b8);
          }
          if (FVar16.Data == pFVar5) break;
          local_b0 = *(UOptimusNode **)FVar16.Data;
          pFVar13 = FText::FromName(&local_60,local_res18);
          FOptimusCompoundAction::AddSubAction<FOptimusNodeAction_RenameNode,UOptimusNode_*_&,FText>
                    (this_01,(TWeakPtr<FOptimusNodeAction_RenameNode,1> *)(local_78 + 8),&local_b0,
                     pFVar13);
          if (local_68 != (longlong *)0x0) {
            LOCK();
            lVar3 = (longlong)local_68 + 0xc;
            iVar6 = *(int *)lVar3;
            *(int *)lVar3 = *(int *)lVar3 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_68 + 8))(local_68,1);
            }
          }
          if (local_60.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
          }
          FVar16.Data = FVar16.Data + 8;
        }
        if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.AllocatorInstance.Data);
        }
        if (local_res18[0] == param_1->BindingName) {
          Notify(this,ComponentBindingRenamed,(UObject *)param_1);
        }
        else {
          FOptimusCompoundAction::
          AddSubAction<FOptimusComponentBindingAction_RenameBinding,UOptimusComponentSourceBinding_*_&,FName_&>
                    (this_01,&local_50,&local_res10,local_res18);
          if (local_50.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
          {
            LOCK();
            paVar4 = &(local_50.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
            aVar7 = *paVar4;
            *paVar4 = (atomic<int>)((int)*paVar4 + -1);
            UNLOCK();
            if (aVar7 == (atomic<int>)0x1) {
              (**(code **)((local_50.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                        (local_50.WeakReferenceCount.ReferenceController,1);
            }
          }
        }
        this_00 = GetActionStack(this);
        local_88.Object = (FOptimusAction *)this_01;
        local_88.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
        if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)0x1;
          (local_88.SharedReferenceCount.ReferenceController)->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
          ;
          (local_88.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1
          ;
          local_88.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)this_01;
        }
        bVar10 = UOptimusActionStack::RunAction(this_00,&local_88);
        return bVar10;
      }
      if (1 < (byte)LogOptimusCore._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
      }
    }
    else if (1 < (byte)LogOptimusCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
      return false;
    }
  }
  return false;
}

// RenameComponentBindingDirect @ 14e217940

bool __thiscall
UOptimusDeformer::RenameComponentBindingDirect
          (UOptimusDeformer *this,UOptimusComponentSourceBinding *param_1,FName param_2)

{
  TObjectPtr<UOptimusComponentSourceBindingContainer>_u_0 TVar1;
  longlong *plVar2;
  char cVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  longlong *plVar6;
  bool bVar7;
  FName local_res18 [2];
  FString local_18;
  
  TVar1 = (this->Bindings).field0_0x0;
  plVar2 = *(longlong **)((longlong)TVar1 + 0x28);
  plVar6 = plVar2;
  while( true ) {
    if (plVar6 == plVar2 + ((TVar1.DebugPtr)->Bindings).ArrayNum) {
      return false;
    }
    if ((UOptimusComponentSourceBinding *)*plVar6 == (UOptimusComponentSourceBinding *)0x0) {
      bVar7 = param_1 == (UOptimusComponentSourceBinding *)0x0;
    }
    else {
      bVar7 = (UOptimusComponentSourceBinding *)*plVar6 == param_1;
    }
    if (bVar7) break;
    plVar6 = plVar6 + 1;
  }
  if ((int)((longlong)plVar6 - (longlong)plVar2 >> 3) == -1) {
    return false;
  }
  local_res18[0] = param_2;
  pFVar4 = ::FName::ToString(local_res18,&local_18);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  cVar3 = (**(code **)(param_1->_padding_ + 0x170))(param_1,pwVar5,0,0x34);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (cVar3 == '\0') {
    return false;
  }
  param_1->BindingName = local_res18[0];
  Notify(this,ComponentBindingRenamed,(UObject *)param_1);
  UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  return true;
}

// RenameGraph @ 14e217a40

bool __thiscall
UOptimusDeformer::RenameGraph(UOptimusDeformer *this,UOptimusNodeGraph *param_1,FString *param_2)

{
  longlong *plVar1;
  UOptimusActionStack *this_00;
  FName *pFVar2;
  wchar_t *pwVar3;
  longlong *plVar4;
  bool bVar5;
  FName local_res8;
  UOptimusNodeGraph *local_res10;
  
  plVar1 = *(longlong **)&(this->ValueMap).field_0x28;
  plVar4 = plVar1;
  while( true ) {
    if (plVar4 == plVar1 + *(int *)&(this->ValueMap).field_0x30) {
      return false;
    }
    if ((UOptimusNodeGraph *)*plVar4 == (UOptimusNodeGraph *)0x0) {
      bVar5 = param_1 == (UOptimusNodeGraph *)0x0;
    }
    else {
      bVar5 = (UOptimusNodeGraph *)*plVar4 == param_1;
    }
    if (bVar5) break;
    plVar4 = plVar4 + 1;
  }
  if ((int)((longlong)plVar4 - (longlong)plVar1 >> 3) == -1) {
    return false;
  }
  if (param_1->GraphType == Setup) {
    return false;
  }
  if (param_1->GraphType == Update) {
    return false;
  }
  local_res10 = param_1;
  bVar5 = UOptimusNodeGraph::IsValidUserGraphName(param_2,(FText *)0x0);
  if (!bVar5) {
    return false;
  }
  this_00 = GetActionStack((UOptimusDeformer *)&this[-1].ConstantValueUpdateDelegate.field_0x8);
  if ((param_2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_res8,pwVar3);
  bVar5 = UOptimusActionStack::
          RunAction<FOptimusNodeGraphAction_RenameGraph,UOptimusNodeGraph_*_&,FName>
                    (this_00,&local_res10,pFVar2);
  return bVar5;
}

// RenameGraphDirect @ 14e217bd0

bool __thiscall
UOptimusDeformer::RenameGraphDirect
          (UOptimusDeformer *this,UOptimusNodeGraph *param_1,FString *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  UClass *pUVar8;
  FString *pFVar9;
  int iVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  FString local_58;
  FString local_48;
  FDestructionSentinel local_38;
  
  pwVar11 = L"";
  if ((param_2->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  cVar5 = (**(code **)(param_1->_padding_ + 0x170))(param_1,pwVar13,0,0x34);
  if (cVar5 != '\0') {
    pUVar8 = UOptimusNodeGraph::StaticClass();
    iVar10 = (int)pUVar8->_padding_;
    if (((iVar10 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
         &pUVar8->_padding_)) && (param_1 != (UOptimusNodeGraph *)0x0)) {
      OnGraphRenamedOrRemoved
                ((UOptimusDeformer *)&this[-1].ConstantValueUpdateDelegate.field_0x8,param_1);
      if (*(int *)&(this->ValueMap).field_0x20 != 3) {
        *(undefined4 *)&(this->ValueMap).field_0x20 = 2;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ActionStack,
                 (FWriteAccessScope *)&local_38);
      piVar1 = &(this->Graphs).ArrayMax;
      *piVar1 = *piVar1 + 1;
      bVar4 = false;
      iVar10 = *(int *)&(this->Graphs).AllocatorInstance.Data + -1;
      if (-1 < iVar10) {
        lVar12 = (longlong)iVar10 << 4;
        bVar4 = false;
        do {
          if ((*(int *)&(this->Graphs).AllocatorInstance.Data <= iVar10) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          if (((*(int *)(*(longlong *)&this->Status + 8 + lVar12) == 0) ||
              (plVar2 = *(longlong **)(*(longlong *)&this->Status + lVar12),
              plVar2 == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*plVar2 + 0x68))(plVar2,3,param_1), cVar5 == '\0')) {
            bVar4 = true;
          }
          lVar12 = lVar12 + -0x10;
          iVar10 = iVar10 + -1;
        } while (-1 < iVar10);
      }
      piVar1 = &(this->Graphs).ArrayMax;
      *piVar1 = *piVar1 + -1;
      if (bVar4) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ActionStack,false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
      return true;
    }
    pFVar9 = GetTypeName<UOptimusNodeGraph>(&local_58);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    pFVar9 = GetFullNameForCastLogError<UObject>(&local_48,(UObject *)param_1);
    if ((pFVar9->Data).ArrayNum != 0) {
      pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar11,pwVar13);
  }
  return false;
}

// RenameResource @ 14e2181a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UOptimusDeformer::RenameResource
          (UOptimusDeformer *this,UOptimusResourceDescription *param_1,FName param_2,bool param_3)

{
  longlong *plVar1;
  int *piVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  FName FVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  FOptimusCompoundAction *pFVar12;
  UOptimusNode_ResourceAccessorBase *pUVar13;
  FName *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  UOptimusActionStack *this_00;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  FOptimusCompoundAction *pFVar18;
  ForAnyElementType FVar19;
  ulonglong uVar20;
  FOptimusCompoundAction *this_01;
  uint uVar21;
  UOptimusResourceDescription *local_res10;
  FName local_res18;
  undefined1 local_b8 [4];
  uint local_b4;
  TReferenceControllerBase<1> *local_b0;
  TReferenceControllerBase<1> *local_a8;
  FScriptContainerElement *local_a0;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_98;
  FScriptContainerElement *local_88;
  FString local_80;
  TSharedPtr<FOptimusAction,1> local_70;
  undefined1 local_60 [24];
  longlong *local_48;
  
  pFVar18 = (FOptimusCompoundAction *)0x0;
  local_b4 = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  if (param_1 == (UOptimusResourceDescription *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5723111267007200599>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                       ,0x2a9,"InResourceDesc");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
  }
  else {
    FVar5 = (FName)(this->Resources).field0_0x0.ObjectPtr.field0_0x0.Handle;
    if (FVar5 == (FName)0x0) {
      bVar8 = (FName)param_1->_padding_ == (FName)0x0;
    }
    else {
      bVar8 = FVar5 == (FName)param_1->_padding_;
    }
    if (bVar8) {
      if (param_2 != (FName)0x0) {
        if ((!param_3) && (param_2 == param_1->ResourceName)) {
          return true;
        }
        if (param_2 != param_1->ResourceName) {
          local_res18 = Optimus::GetUniqueNameForScope((UObject *)local_60,FVar5);
          local_res18 = *(FName *)local_res18;
        }
        pFVar12 = ::operator_new(0x28);
        this_01 = pFVar18;
        if (pFVar12 != (FOptimusCompoundAction *)0x0) {
          ::FString::FString(&local_80,L"Rename Resource");
          FVar19.Data = local_80.Data.AllocatorInstance.Data;
          plVar1 = &pFVar12->_padding_;
          pFVar12->_padding_ = (longlong)&___7FOptimusAction__6B_;
          piVar2 = (int *)((longlong)&pFVar12->_padding_ + 4);
          *plVar1 = 0;
          *(int *)&pFVar12->_padding_ = local_80.Data.ArrayNum;
          if (local_80.Data.ArrayNum == 0) {
            *piVar2 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_80.Data.ArrayNum,0,(ForAnyElementType *)plVar1,
                       local_80.Data.ArrayNum,piVar2);
            memcpy((void *)*plVar1,FVar19.Data,(longlong)local_80.Data.ArrayNum * 2);
          }
          pFVar12->_padding_ = (longlong)&___7FOptimusCompoundAction__6B_;
          pFVar18 = (FOptimusCompoundAction *)&DAT_00000001;
          (pFVar12->SubActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar12->SubActions).ArrayNum = 0;
          (pFVar12->SubActions).ArrayMax = 0;
          this_01 = pFVar12;
        }
        if ((pFVar18 != (FOptimusCompoundAction *)0x0) &&
           (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        GetNodesUsingResource(this,&local_98,param_1);
        local_b4 = local_98.ArrayNum;
        uVar16 = (ulonglong)(int)local_b4;
        local_88 = local_98.AllocatorInstance.Data + uVar16 * 8;
        FVar19.Data = local_98.AllocatorInstance.Data;
        do {
          pFVar17 = local_88;
          uVar20 = 0;
          local_a0 = FVar19.Data;
          if (local_98.ArrayNum != (int)uVar16) {
            local_b8[0] = 0;
            `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_b8);
          }
          if (FVar19.Data == pFVar17) {
            if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.AllocatorInstance.Data);
            }
            if (local_res18 == local_res10->ResourceName) {
              Notify(this,ResourceRenamed,(UObject *)local_res10);
            }
            else {
              FOptimusCompoundAction::
              AddSubAction<FOptimusResourceAction_RenameResource,UOptimusResourceDescription_*_&,FName_&>
                        (this_01,(TWeakPtr<FOptimusResourceAction_RenameResource,1> *)
                                 (local_60 + 0x10),&local_res10,&local_res18);
              if (local_48 != (longlong *)0x0) {
                LOCK();
                lVar6 = (longlong)local_48 + 0xc;
                iVar11 = *(int *)lVar6;
                *(int *)lVar6 = *(int *)lVar6 + -1;
                UNLOCK();
                if (iVar11 == 1) {
                  (**(code **)(*local_48 + 8))(local_48,1);
                }
              }
            }
            this_00 = GetActionStack(this);
            local_70.Object = (FOptimusAction *)this_01;
            local_70.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
            if (local_70.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              (local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)0x1;
              (local_70.SharedReferenceCount.ReferenceController)->_padding_ =
                   (longlong)
                   &
                   ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
              ;
              (local_70.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                   (atomic<int>)0x1;
              local_70.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)this_01;
            }
            bVar8 = UOptimusActionStack::RunAction(this_00,&local_70);
            return bVar8;
          }
          pUVar13 = CastChecked<UOptimusNode_ResourceAccessorBase,UOptimusNode>
                              (*(UOptimusNode **)FVar19.Data);
          uVar16 = uVar20;
          while( true ) {
            iVar11 = (int)pUVar13->_padding_;
            if ((iVar11 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              uVar9 = (*pcVar7)();
              return (bool)uVar9;
            }
            uVar21 = (uint)uVar16;
            if (iVar11 <= (int)uVar21) break;
            pFVar14 = (FName *)(**(code **)(pUVar13->_padding_ + 0x338))
                                         (pUVar13,local_60 + 8,uVar16,local_res18);
            iVar11 = (int)pUVar13->_padding_;
            lVar6 = pUVar13->_padding_;
            if ((iVar11 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              uVar9 = (*pcVar7)();
              return (bool)uVar9;
            }
            uVar10 = 0;
            if ((int)uVar21 < iVar11) {
              uVar10 = ~uVar21 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              uVar9 = (*pcVar7)();
              return (bool)uVar9;
            }
            pTVar15 = ::operator_new(0x48);
            if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              local_b0 = (TReferenceControllerBase<1> *)&DAT_00000010;
              local_a8 = (TReferenceControllerBase<1> *)0x0;
            }
            else {
              pTVar15->SharedReferenceCount = (atomic<int>)0x1;
              pTVar15->WeakReferenceCount = (atomic<int>)0x1;
              pTVar15->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_UFOptimusNodeAction_SetPinName___00_SharedPointerInternals__6B_
              ;
              FOptimusNodeAction_SetPinName::FOptimusNodeAction_SetPinName
                        ((FOptimusNodeAction_SetPinName *)(pTVar15 + 1),
                         *(UOptimusNodePin **)(uVar20 + lVar6),*pFVar14);
              if ((pTVar15 + 1 == (TReferenceControllerBase<1> *)0x0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InObject != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x246,L""), bVar8)) {
                pcVar7 = (code *)swi(3);
                uVar9 = (*pcVar7)();
                return (bool)uVar9;
              }
              LOCK();
              pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
              UNLOCK();
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar15);
              LOCK();
              pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
              UNLOCK();
              local_b0 = pTVar15 + 1;
              local_a8 = pTVar15;
            }
            pTVar15 = local_a8;
            pFVar17 = (this_01->SubActions).AllocatorInstance.Data;
            if (((pFVar17 <= (FScriptContainerElement *)&local_b0) &&
                ((FScriptContainerElement *)&local_b0 <
                 pFVar17 + (longlong)(this_01->SubActions).ArrayMax * 0x10)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar7 = (code *)swi(3);
              uVar9 = (*pcVar7)();
              return (bool)uVar9;
            }
            iVar11 = (this_01->SubActions).ArrayNum;
            piVar2 = &(this_01->SubActions).ArrayMax;
            if (iVar11 == *piVar2) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&(this_01->SubActions).AllocatorInstance,piVar2);
              (this_01->SubActions).ArrayNum = iVar11;
            }
            (this_01->SubActions).ArrayNum = iVar11 + 1;
            pFVar17 = (this_01->SubActions).AllocatorInstance.Data + (longlong)iVar11 * 0x10;
            *(TReferenceControllerBase<1> **)pFVar17 = local_b0;
            *(TReferenceControllerBase<1> **)(pFVar17 + 8) = local_a8;
            local_a8 = (TReferenceControllerBase<1> *)0x0;
            local_b0 = (TReferenceControllerBase<1> *)0x0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
LAB_14e218655:
              uVar16 = (ulonglong)(uVar21 + 1);
              uVar20 = uVar20 + 8;
            }
            else {
              LOCK();
              pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
              UNLOCK();
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar15);
              LOCK();
              paVar3 = &pTVar15->WeakReferenceCount;
              aVar4 = *paVar3;
              *paVar3 = (atomic<int>)((int)*paVar3 + -1);
              UNLOCK();
              if (aVar4 != (atomic<int>)0x1) goto LAB_14e218655;
              (**(code **)(pTVar15->_padding_ + 8))(pTVar15,1);
              uVar16 = (ulonglong)(uVar21 + 1);
              uVar20 = uVar20 + 8;
            }
          }
          FVar19.Data = local_a0 + 8;
          uVar16 = (ulonglong)local_b4;
        } while( true );
      }
      if (1 < (byte)LogOptimusCore._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
      }
    }
    else if (1 < (byte)LogOptimusCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
      return false;
    }
  }
  return false;
}

// RenameResourceDirect @ 14e218760

bool __thiscall
UOptimusDeformer::RenameResourceDirect
          (UOptimusDeformer *this,UOptimusResourceDescription *param_1,FName param_2)

{
  TObjectPtr<UOptimusResourceContainer>_u_0 TVar1;
  longlong *plVar2;
  char cVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  longlong *plVar6;
  bool bVar7;
  FName local_res18 [2];
  FString local_18;
  
  TVar1 = (this->Resources).field0_0x0;
  plVar2 = *(longlong **)((longlong)TVar1 + 0x28);
  plVar6 = plVar2;
  while( true ) {
    if (plVar6 == plVar2 + ((TVar1.DebugPtr)->Descriptions).ArrayNum) {
      return false;
    }
    if ((UOptimusResourceDescription *)*plVar6 == (UOptimusResourceDescription *)0x0) {
      bVar7 = param_1 == (UOptimusResourceDescription *)0x0;
    }
    else {
      bVar7 = (UOptimusResourceDescription *)*plVar6 == param_1;
    }
    if (bVar7) break;
    plVar6 = plVar6 + 1;
  }
  if ((int)((longlong)plVar6 - (longlong)plVar2 >> 3) == -1) {
    return false;
  }
  local_res18[0] = param_2;
  pFVar4 = ::FName::ToString(local_res18,&local_18);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  cVar3 = (**(code **)(param_1->_padding_ + 0x170))(param_1,pwVar5,0,0x34);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (cVar3 == '\0') {
    return false;
  }
  param_1->ResourceName = local_res18[0];
  Notify(this,ResourceRenamed,(UObject *)param_1);
  UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  return true;
}

// RenameVariable @ 14e218860

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UOptimusDeformer::RenameVariable
          (UOptimusDeformer *this,UOptimusVariableDescription *param_1,FName param_2,bool param_3)

{
  int *piVar1;
  atomic<int> *paVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  atomic<int> aVar5;
  int iVar6;
  FName FVar7;
  UOptimusNodePin **ppUVar8;
  code *pcVar9;
  int iVar10;
  bool bVar11;
  undefined1 uVar12;
  FOptimusCompoundAction *this_00;
  UClass *pUVar13;
  UOptimusActionStack *this_01;
  ulonglong uVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  bool bVar17;
  UOptimusVariableDescription *local_res10;
  FName local_res18;
  undefined1 local_98 [4];
  undefined1 local_94 [12];
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  TSharedPtr<FOptimusAction,1> local_68;
  TWeakPtr<FOptimusNodeAction_SetPinName,1> local_58;
  TWeakPtr<FOptimusVariableAction_RenameVariable,1> local_48;
  
  bVar11 = false;
  local_94._0_4_ = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  if (param_1 == (UOptimusVariableDescription *)0x0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_5723111267007200968>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                        ,0x138,"InVariableDesc");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
  }
  else {
    FVar7 = (FName)(this->Variables).field0_0x0.ObjectPtr.field0_0x0.Handle;
    if (FVar7 == (FName)0x0) {
      bVar17 = (FName)param_1->_padding_ == (FName)0x0;
    }
    else {
      bVar17 = FVar7 == (FName)param_1->_padding_;
    }
    if (bVar17) {
      if (param_2 != (FName)0x0) {
        if ((!param_3) && (param_2 == param_1->VariableName)) {
          return true;
        }
        if (param_2 != param_1->VariableName) {
          local_res18 = Optimus::GetUniqueNameForScope((UObject *)local_94,FVar7);
          local_res18 = *(FName *)local_res18;
        }
        this_00 = ::operator_new(0x28);
        if (this_00 == (FOptimusCompoundAction *)0x0) {
          this_00 = (FOptimusCompoundAction *)0x0;
        }
        else {
          ::FString::FString(&local_78,L"Rename Variable");
          FVar16.Data = local_78.Data.AllocatorInstance.Data;
          plVar4 = &this_00->_padding_;
          bVar11 = true;
          this_00->_padding_ = (longlong)&___7FOptimusAction__6B_;
          piVar1 = (int *)((longlong)&this_00->_padding_ + 4);
          *plVar4 = 0;
          *(int *)&this_00->_padding_ = local_78.Data.ArrayNum;
          if (local_78.Data.ArrayNum == 0) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)plVar4,
                       local_78.Data.ArrayNum,piVar1);
            memcpy((void *)*plVar4,FVar16.Data,(longlong)local_78.Data.ArrayNum * 2);
          }
          this_00->_padding_ = (longlong)&___7FOptimusCompoundAction__6B_;
          (this_00->SubActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this_00->SubActions).ArrayNum = 0;
          (this_00->SubActions).ArrayMax = 0;
        }
        if ((bVar11) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        GetNodesUsingVariable(this,&local_88,param_1);
        iVar10 = local_88.ArrayNum;
        uVar14 = (ulonglong)local_88.ArrayNum;
        pFVar3 = local_88.AllocatorInstance.Data + uVar14 * 8;
        FVar16.Data = local_88.AllocatorInstance.Data;
        do {
          if ((uint)uVar14 != iVar10) {
            local_98[0] = 0;
            `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_98);
          }
          if (FVar16.Data == pFVar3) {
            if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.AllocatorInstance.Data);
            }
            if (local_res18 == local_res10->VariableName) {
              Notify(this,VariableRenamed,(UObject *)local_res10);
            }
            else {
              FOptimusCompoundAction::
              AddSubAction<FOptimusVariableAction_RenameVariable,UOptimusVariableDescription_*_&,FName_&>
                        (this_00,&local_48,&local_res10,&local_res18);
              if (local_48.WeakReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                paVar2 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
                aVar5 = *paVar2;
                *paVar2 = (atomic<int>)((int)*paVar2 + -1);
                UNLOCK();
                if (aVar5 == (atomic<int>)0x1) {
                  (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                            (local_48.WeakReferenceCount.ReferenceController,1);
                }
              }
            }
            this_01 = GetActionStack(this);
            local_68.Object = (FOptimusAction *)this_00;
            local_68.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
            if (local_68.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)0x1;
              (local_68.SharedReferenceCount.ReferenceController)->_padding_ =
                   (longlong)
                   &
                   ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
              ;
              (local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                   (atomic<int>)0x1;
              local_68.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)this_00;
            }
            bVar11 = UOptimusActionStack::RunAction(this_01,&local_68);
            return bVar11;
          }
          lVar15 = *(longlong *)FVar16.Data;
          if (lVar15 == 0) {
LAB_14e218acd:
            lVar15 = 0;
          }
          else {
            pUVar13 = UOptimusNode_GetVariable::StaticClass();
            iVar6 = (int)pUVar13->_padding_;
            if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < iVar6) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)iVar6 * 8) !=
                &pUVar13->_padding_)) goto LAB_14e218acd;
          }
          if (*(int *)(lVar15 + 0x58) < 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L"");
            if (bVar11) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
LAB_14e218b03:
            bVar11 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_5723111267007200937>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                                ,0x157,"VariableNode->GetPins().Num() == 1");
            if (bVar11) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
          }
          else {
            if (*(int *)(lVar15 + 0x58) != 1) goto LAB_14e218b03;
            ppUVar8 = *(UOptimusNodePin ***)(lVar15 + 0x50);
            if (*(int *)(lVar15 + 0x58) < 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L"");
              if (bVar11) {
                pcVar9 = (code *)swi(3);
                uVar12 = (*pcVar9)();
                return (bool)uVar12;
              }
LAB_14e218b6f:
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar11) {
                pcVar9 = (code *)swi(3);
                uVar12 = (*pcVar9)();
                return (bool)uVar12;
              }
            }
            else if (*(int *)(lVar15 + 0x58) < 1) goto LAB_14e218b6f;
            FOptimusCompoundAction::
            AddSubAction<FOptimusNodeAction_SetPinName,UOptimusNodePin_*_const_&,FName_&>
                      (this_00,&local_58,ppUVar8,&local_res18);
            if (local_58.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar2 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
              aVar5 = *paVar2;
              *paVar2 = (atomic<int>)((int)*paVar2 + -1);
              UNLOCK();
              if (aVar5 == (atomic<int>)0x1) {
                (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))();
              }
            }
          }
          uVar14 = (ulonglong)(uint)local_88.ArrayNum;
          FVar16.Data = FVar16.Data + 8;
        } while( true );
      }
      if (1 < (byte)LogOptimusCore._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
      }
    }
    else if (1 < (byte)LogOptimusCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
      return false;
    }
  }
  return false;
}

// RenameVariableDirect @ 14e218cd0

bool __thiscall
UOptimusDeformer::RenameVariableDirect
          (UOptimusDeformer *this,UOptimusVariableDescription *param_1,FName param_2)

{
  TObjectPtr<UOptimusVariableContainer>_u_0 TVar1;
  longlong *plVar2;
  char cVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  longlong *plVar6;
  bool bVar7;
  FName local_res18 [2];
  FString local_18;
  
  TVar1 = (this->Variables).field0_0x0;
  plVar2 = *(longlong **)((longlong)TVar1 + 0x28);
  plVar6 = plVar2;
  while( true ) {
    if (plVar6 == plVar2 + ((TVar1.DebugPtr)->Descriptions).ArrayNum) {
      return false;
    }
    if ((UOptimusVariableDescription *)*plVar6 == (UOptimusVariableDescription *)0x0) {
      bVar7 = param_1 == (UOptimusVariableDescription *)0x0;
    }
    else {
      bVar7 = (UOptimusVariableDescription *)*plVar6 == param_1;
    }
    if (bVar7) break;
    plVar6 = plVar6 + 1;
  }
  if ((int)((longlong)plVar6 - (longlong)plVar2 >> 3) == -1) {
    return false;
  }
  local_res18[0] = param_2;
  pFVar4 = ::FName::ToString(local_res18,&local_18);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  cVar3 = (**(code **)(param_1->_padding_ + 0x170))(param_1,pwVar5,0,0x34);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (cVar3 == '\0') {
    return false;
  }
  param_1->VariableName = local_res18[0];
  Notify(this,VariableRenamed,(UObject *)param_1);
  UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  return true;
}

// ResolveCollectionPath @ 14e219b80

IOptimusNodeGraphCollectionOwner * __thiscall
UOptimusDeformer::ResolveCollectionPath(UOptimusDeformer *this,FString *param_1)

{
  UObjectBaseUtility *this_00;
  UClass *pUVar1;
  IOptimusNodeGraphCollectionOwner *pIVar2;
  
  if ((param_1->Data).ArrayNum < 2) {
    pIVar2 = (IOptimusNodeGraphCollectionOwner *)&this->_padding_;
    if (this == (UOptimusDeformer *)&DAT_00000030) {
      pIVar2 = (IOptimusNodeGraphCollectionOwner *)0x0;
    }
    return pIVar2;
  }
  this_00 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x18))();
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar1 = Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_NoRegister();
    pIVar2 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar1);
    return pIVar2;
  }
  return (IOptimusNodeGraphCollectionOwner *)0x0;
}

// ResolveComponentBinding @ 14e219be0

UOptimusComponentSourceBinding * __thiscall
UOptimusDeformer::ResolveComponentBinding(UOptimusDeformer *this,FName param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)&(this->ValueMap).field_0x40;
  plVar4 = *(longlong **)(lVar3 + 0x28);
  iVar2 = *(int *)(lVar3 + 0x30);
  plVar1 = plVar4 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x30) != iVar2) {
      `TCheckedPointerIterator<UOptimusComponentSourceBinding_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar4 == plVar1) break;
    if ((FName)((UOptimusComponentSourceBinding *)*plVar4)->_padding_ == param_1) {
      return (UOptimusComponentSourceBinding *)*plVar4;
    }
    plVar4 = plVar4 + 1;
  }
  return (UOptimusComponentSourceBinding *)0x0;
}

// ResolveGraphPath @ 14e219c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UOptimusNodeGraph * __thiscall
UOptimusDeformer::ResolveGraphPath
          (UOptimusDeformer *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UOptimusNodeGraph *pUVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ForElementType<TStringView<wchar_t>_> FVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<TStringView<wchar_t>_> FVar19;
  uint uVar20;
  ForElementType<TStringView<wchar_t>_> FVar21;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  undefined1 local_128;
  undefined1 local_127 [7];
  UOptimusNodeGraph *local_120;
  uint local_118;
  longlong local_110;
  longlong local_108;
  TStringView<wchar_t> *local_100;
  FString local_f8;
  FString local_e8;
  FName local_d8;
  FName local_d0;
  longlong *local_c8;
  wchar_t *local_c0;
  int iStack_b8;
  undefined4 uStack_b4;
  TStringView<wchar_t> local_a8;
  TArray<TStringView<wchar_t>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_a8.DataPtr = param_1->DataPtr;
  local_a8.Size = param_1->Size;
  local_a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_98.AllocatorInstance.SecondaryData = (ForElementType<TStringView<wchar_t>_>)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 4;
  local_100 = param_2;
  StringViewSplit<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            (&local_98,&local_a8,L"/",0x7fffffff);
  if (local_98.ArrayNum != 0) {
    pFVar12 = (this->Graphs).AllocatorInstance.Data;
    iVar16 = (this->Graphs).ArrayNum;
    pFVar1 = pFVar12 + (longlong)iVar16 * 8;
    while( true ) {
      if ((this->Graphs).ArrayNum != iVar16) {
        local_128 = 0;
        `TCheckedPointerIterator<TObjectPtr<UOptimusNodeGraph>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_128);
      }
      if (pFVar12 == pFVar1) goto LAB_14e21a12c;
      pUVar7 = *(UOptimusNodeGraph **)pFVar12;
      local_120 = pUVar7;
      if (local_98.ArrayNum < 1) {
        local_130 = (longlong)local_98.ArrayNum;
        local_138 = 0;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pUVar7 = (UOptimusNodeGraph *)(*pcVar2)();
          return pUVar7;
        }
      }
      FVar10 = (ForElementType<TStringView<wchar_t>_>)&local_98;
      if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TStringView<wchar_t>_>)0x0) {
        FVar10 = local_98.AllocatorInstance.SecondaryData;
      }
      local_d8 = (FName)pUVar7->_padding_;
      ::FName::ToString(&local_d8,&local_f8);
      iVar15 = local_f8.Data.ArrayNum + -1;
      if (local_f8.Data.ArrayNum == 0) {
        iVar15 = 0;
      }
      iVar6 = *(int *)((longlong)FVar10 + 8);
      if ((iVar6 == iVar15) &&
         ((((iVar6 == 0 || (iVar15 == 0)) ||
           (iVar5 = FGenericPlatformStricmp::Strnicmp
                              (*(wchar_t **)FVar10,(wchar_t *)local_f8.Data.AllocatorInstance.Data,
                               (longlong)iVar15), iVar5 == 0)) && (iVar6 == iVar15)))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (bVar4) break;
      pFVar12 = pFVar12 + 8;
    }
    uVar20 = 1;
    if (local_120 != (UOptimusNodeGraph *)0x0) {
      if (1 < local_98.ArrayNum) {
        local_110 = 1;
        local_108 = 0x10;
        pUVar7 = local_120;
        do {
          lVar14 = local_108;
          lVar11 = local_110;
          local_120 = pUVar7;
          plVar8 = (longlong *)(**(code **)(pUVar7->_padding_ + 0x28))(&pUVar7->_padding_);
          plVar13 = (longlong *)*plVar8;
          local_118 = *(uint *)(plVar8 + 1);
          uVar9 = (ulonglong)(int)local_118;
          local_c8 = plVar13 + uVar9;
          while( true ) {
            plVar3 = local_c8;
            if ((int)plVar8[1] != (int)uVar9) {
              local_127[0] = 0;
              `TCheckedPointerIterator<UOptimusNodeGraph_*_const,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_127);
            }
            if (plVar13 == plVar3) goto LAB_14e219f51;
            pUVar7 = (UOptimusNodeGraph *)*plVar13;
            uVar18 = 0;
            if ((int)uVar20 < local_98.ArrayNum) {
              uVar18 = ~uVar20 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (local_138 = lVar11, local_130 = (longlong)local_98.ArrayNum,
               bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              pUVar7 = (UOptimusNodeGraph *)(*pcVar2)();
              return pUVar7;
            }
            FVar10 = (ForElementType<TStringView<wchar_t>_>)&local_98;
            if (local_98.AllocatorInstance.SecondaryData !=
                (ForElementType<TStringView<wchar_t>_>)0x0) {
              FVar10 = local_98.AllocatorInstance.SecondaryData;
            }
            local_d0 = (FName)pUVar7->_padding_;
            ::FName::ToString(&local_d0,&local_e8);
            iVar16 = local_e8.Data.ArrayNum + -1;
            if (local_e8.Data.ArrayNum == 0) {
              iVar16 = 0;
            }
            iVar15 = *(int *)((undefined8 *)(lVar14 + (longlong)FVar10) + 1);
            if (((iVar15 == iVar16) &&
                (((iVar15 == 0 || (iVar16 == 0)) ||
                 (iVar6 = FGenericPlatformStricmp::Strnicmp
                                    (*(wchar_t **)(lVar14 + (longlong)FVar10),
                                     (wchar_t *)local_e8.Data.AllocatorInstance.Data,
                                     (longlong)iVar16), iVar6 == 0)))) && (iVar15 == iVar16)) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
            if (bVar4) break;
            uVar9 = (ulonglong)local_118;
            plVar13 = plVar13 + 1;
            lVar11 = local_110;
            lVar14 = local_108;
          }
          local_110 = local_110 + 1;
          local_108 = local_108 + 0x10;
          uVar20 = uVar20 + 1;
          local_120 = pUVar7;
        } while ((int)uVar20 < local_98.ArrayNum);
LAB_14e219f51:
        if ((int)uVar20 < local_98.ArrayNum) {
          uVar17 = local_98.ArrayNum - 1;
          uVar18 = 0;
          if ((int)uVar17 < local_98.ArrayNum) {
            uVar18 = ~uVar17 >> 0x1f;
          }
          if (uVar18 == 0) {
            local_138 = (longlong)(int)uVar17;
            local_130 = (longlong)local_98.ArrayNum;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              pUVar7 = (UOptimusNodeGraph *)(*pcVar2)();
              return pUVar7;
            }
          }
          lVar11 = (longlong)local_98.ArrayNum;
          FVar10 = (ForElementType<TStringView<wchar_t>_>)&local_98;
          if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TStringView<wchar_t>_>)0x0
             ) {
            FVar10 = local_98.AllocatorInstance.SecondaryData;
          }
          uVar18 = 0;
          if ((int)uVar20 < local_98.ArrayNum) {
            uVar18 = ~uVar20 >> 0x1f;
          }
          if (uVar18 == 0) {
            local_138 = (longlong)(int)uVar20;
            local_130 = lVar11;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              pUVar7 = (UOptimusNodeGraph *)(*pcVar2)();
              return pUVar7;
            }
          }
          uVar18 = local_98.ArrayNum - 1;
          FVar21 = (ForElementType<TStringView<wchar_t>_>)&local_98;
          if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TStringView<wchar_t>_>)0x0
             ) {
            FVar21 = local_98.AllocatorInstance.SecondaryData;
          }
          uVar17 = 0;
          if ((int)uVar18 < local_98.ArrayNum) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          if (uVar17 == 0) {
            local_138 = (longlong)(int)uVar18;
            local_130 = (longlong)local_98.ArrayNum;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              pUVar7 = (UOptimusNodeGraph *)(*pcVar2)();
              return pUVar7;
            }
          }
          FVar19 = (ForElementType<TStringView<wchar_t>_>)&local_98;
          if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TStringView<wchar_t>_>)0x0
             ) {
            FVar19 = local_98.AllocatorInstance.SecondaryData;
          }
          lVar14 = (longlong)(int)uVar20 * 0x10;
          iVar16 = (int)(*(longlong *)((longlong)FVar10 + (lVar11 + -1) * 0x10) -
                         *(longlong *)((longlong)FVar21 + lVar14) >> 1) +
                   *(int *)((longlong)(local_98.ArrayNum + -1) * 0x10 + 8 + (longlong)FVar19);
          uVar18 = 0;
          if ((int)uVar20 < local_98.ArrayNum) {
            uVar18 = ~uVar20 >> 0x1f;
          }
          if (uVar18 == 0) {
            local_130 = (longlong)local_98.ArrayNum;
            local_138 = (longlong)(int)uVar20;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              pUVar7 = (UOptimusNodeGraph *)(*pcVar2)();
              return pUVar7;
            }
          }
          FVar10 = (ForElementType<TStringView<wchar_t>_>)&local_98;
          if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TStringView<wchar_t>_>)0x0
             ) {
            FVar10 = local_98.AllocatorInstance.SecondaryData;
          }
          local_c0 = *(wchar_t **)((longlong)FVar10 + lVar14);
          local_100->DataPtr = local_c0;
          *(ulonglong *)&local_100->Size = CONCAT44(uStack_b4,iVar16);
          pUVar7 = local_120;
          iStack_b8 = iVar16;
          goto LAB_14e21a133;
        }
      }
      local_100->DataPtr = (wchar_t *)0x0;
      local_100->Size = 0;
      pUVar7 = local_120;
      goto LAB_14e21a133;
    }
  }
LAB_14e21a12c:
  pUVar7 = (UOptimusNodeGraph *)0x0;
LAB_14e21a133:
  if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TStringView<wchar_t>_>)0x0) {
    FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
  }
  return pUVar7;
}

// ResolveGraphPath @ 14e21a190

UOptimusNodeGraph * __thiscall
UOptimusDeformer::ResolveGraphPath(UOptimusDeformer *this,FString *param_1)

{
  int iVar1;
  UOptimusNodeGraph *pUVar2;
  int iVar3;
  UOptimusNodeGraph *pUVar4;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_28.DataPtr = (wchar_t *)0x0;
  local_28.Size = 0;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  local_18.Size = iVar3;
  pUVar2 = ResolveGraphPath((UOptimusDeformer *)&this[-1].ConstantValueUpdateDelegate.field_0x10,
                            &local_18,&local_28);
  pUVar4 = (UOptimusNodeGraph *)0x0;
  if (local_28.Size == 0) {
    pUVar4 = pUVar2;
  }
  return pUVar4;
}

// ResolveNodePath @ 14e21a1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UOptimusNode * __thiscall
UOptimusDeformer::ResolveNodePath
          (UOptimusDeformer *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  UOptimusNode *pUVar1;
  code *pcVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  bool bVar5;
  int iVar6;
  UOptimusNodeGraph *pUVar7;
  UOptimusNode *pUVar8;
  ForElementType<TStringView<wchar_t>_> FVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  UOptimusNode *pUVar14;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_110;
  undefined1 local_108 [4];
  uint local_104;
  TStringView<wchar_t> local_f8;
  FName local_e8;
  TStringView<wchar_t> *local_e0;
  FString local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  wchar_t *local_b8;
  undefined8 uStack_b0;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  wchar_t *local_88;
  undefined8 uStack_80;
  TArray<TStringView<wchar_t>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_a8.DataPtr = param_1->DataPtr;
  local_a8.Size = param_1->Size;
  local_a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pUVar8 = (UOptimusNode *)0x0;
  local_104 = 0;
  local_f8.DataPtr = (wchar_t *)0x0;
  local_f8.Size = 0;
  local_e0 = param_2;
  pUVar7 = ResolveGraphPath(this,&local_a8,&local_f8);
  if ((pUVar7 == (UOptimusNodeGraph *)0x0) || (local_f8.Size == 0)) {
    return (UOptimusNode *)0x0;
  }
  local_98._12_4_ = local_f8._12_4_;
  local_98.Size = local_f8.Size;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<TStringView<wchar_t>_>)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 2;
  local_98.DataPtr = local_f8.DataPtr;
  StringViewSplit<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
            (&local_78,&local_98,L".",1);
  if (local_78.ArrayNum != 0) {
    if (local_78.ArrayNum < 1) {
      local_118 = 0;
      local_110 = (longlong)local_78.ArrayNum;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pUVar8 = (UOptimusNode *)(*pcVar2)();
        return pUVar8;
      }
    }
    pFVar13 = (pUVar7->Nodes).AllocatorInstance.Data;
    FVar9 = (ForElementType<TStringView<wchar_t>_>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<TStringView<wchar_t>_>)0x0) {
      FVar9 = local_78.AllocatorInstance.SecondaryData;
    }
    local_b8 = *(wchar_t **)FVar9;
    uVar3 = *(undefined8 *)((longlong)FVar9 + 8);
    local_104 = (pUVar7->Nodes).ArrayNum;
    uVar10 = (ulonglong)(int)local_104;
    local_f8.DataPtr = (wchar_t *)(pFVar13 + uVar10 * 8);
    pUVar14 = pUVar8;
    uStack_b0 = uVar3;
    do {
      pwVar4 = local_f8.DataPtr;
      if ((pUVar7->Nodes).ArrayNum != (int)uVar10) {
        `TCheckedPointerIterator<UOptimusNode_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_108);
      }
      if (pFVar13 == (FScriptContainerElement *)pwVar4) break;
      pUVar1 = *(UOptimusNode **)pFVar13;
      if (pUVar1 == (UOptimusNode *)0x0) {
LAB_14e21a3a0:
        bVar5 = false;
      }
      else {
        local_e8 = (FName)pUVar1->_padding_;
        pUVar14 = (UOptimusNode *)&DAT_00000001;
        ::FName::ToString(&local_e8,&local_d8);
        iVar11 = local_d8.Data.ArrayNum + -1;
        if (local_d8.Data.ArrayNum == 0) {
          iVar11 = 0;
        }
        iVar12 = (int)uVar3;
        if (iVar12 != iVar11) goto LAB_14e21a3a0;
        if ((iVar12 != 0) && (iVar11 != 0)) {
          iVar6 = iVar11;
          if (iVar12 < iVar11) {
            iVar6 = iVar12;
          }
          iVar6 = FGenericPlatformStricmp::Strnicmp
                            (local_b8,(wchar_t *)local_d8.Data.AllocatorInstance.Data,
                             (longlong)iVar6);
          if (iVar6 != 0) goto LAB_14e21a3a0;
        }
        if (iVar12 != iVar11) goto LAB_14e21a3a0;
        bVar5 = true;
      }
      if ((pUVar14 != (UOptimusNode *)0x0) &&
         (pUVar14 = (UOptimusNode *)0x0,
         local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (bVar5) goto LAB_14e21a3d1;
      uVar10 = (ulonglong)local_104;
      pFVar13 = pFVar13 + 8;
    } while( true );
  }
LAB_14e21a425:
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<TStringView<wchar_t>_>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  return pUVar8;
LAB_14e21a3d1:
  pUVar8 = pUVar1;
  if (local_78.ArrayNum == 2) {
    FVar9 = (ForElementType<TStringView<wchar_t>_>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<TStringView<wchar_t>_>)0x0) {
      FVar9 = local_78.AllocatorInstance.SecondaryData;
    }
    local_88 = *(wchar_t **)((longlong)FVar9 + 0x10);
    uStack_80 = *(undefined8 *)((longlong)FVar9 + 0x18);
    local_e0->DataPtr = local_88;
    *(undefined8 *)&local_e0->Size = uStack_80;
  }
  else {
    uStack_c0 = 0;
    local_c8 = 0;
    local_e0->DataPtr = (wchar_t *)0x0;
    *(undefined8 *)&local_e0->Size = 0;
  }
  goto LAB_14e21a425;
}

// ResolveNodePath @ 14e21a480

UOptimusNode * __thiscall UOptimusDeformer::ResolveNodePath(UOptimusDeformer *this,FString *param_1)

{
  int iVar1;
  UOptimusNode *pUVar2;
  int iVar3;
  UOptimusNode *pUVar4;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_28.DataPtr = (wchar_t *)0x0;
  local_28.Size = 0;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  local_18.Size = iVar3;
  pUVar2 = ResolveNodePath((UOptimusDeformer *)&this[-1].ConstantValueUpdateDelegate.field_0x10,
                           &local_18,&local_28);
  pUVar4 = (UOptimusNode *)0x0;
  if (local_28.Size == 0) {
    pUVar4 = pUVar2;
  }
  return pUVar4;
}

// ResolvePinPath @ 14e21a4e0

UOptimusNodePin * __thiscall
UOptimusDeformer::ResolvePinPath(UOptimusDeformer *this,FString *param_1)

{
  int iVar1;
  UOptimusNode *this_00;
  UOptimusNodePin *pUVar2;
  int iVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  pUVar2 = (UOptimusNodePin *)0x0;
  iVar1 = (param_1->Data).ArrayNum;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  local_18.Size = iVar3;
  this_00 = ResolveNodePath((UOptimusDeformer *)&this[-1].ConstantValueUpdateDelegate.field_0x10,
                            &local_18,(TStringView<wchar_t> *)&local_28);
  if (this_00 != (UOptimusNode *)0x0) {
    local_18._12_4_ = local_28.ArrayMax;
    local_18.Size = local_28.ArrayNum;
    local_18.DataPtr = (wchar_t *)local_28.AllocatorInstance.Data;
    UOptimusNodePin::GetPinNamePathFromString(&local_28,&local_18);
    if (local_28.ArrayNum != 0) {
      pUVar2 = UOptimusNode::FindPinFromPath(this_00,&local_28);
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return pUVar2;
}

// ResolveResource @ 14e21a590

UOptimusResourceDescription * __thiscall
UOptimusDeformer::ResolveResource(UOptimusDeformer *this,FName param_1)

{
  longlong *plVar1;
  int iVar2;
  UOptimusActionStack *pUVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  pUVar3 = (this->ActionStack).field0_0x0.DebugPtr;
  plVar4 = *(longlong **)&pUVar3->TransactedActionIndex;
  iVar2 = *(int *)&pUVar3->bIsRunningAction;
  plVar1 = plVar4 + iVar2;
  while( true ) {
    if (*(int *)&pUVar3->bIsRunningAction != iVar2) {
      `TCheckedPointerIterator<UOptimusResourceDescription_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar4 == plVar1) break;
    if ((FName)((UOptimusResourceDescription *)*plVar4)->_padding_ == param_1) {
      return (UOptimusResourceDescription *)*plVar4;
    }
    plVar4 = plVar4 + 1;
  }
  return (UOptimusResourceDescription *)0x0;
}

// ResolveVariable @ 14e21a8b0

UOptimusVariableDescription * __thiscall
UOptimusDeformer::ResolveVariable(UOptimusDeformer *this,FName param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)&(this->ValueMap).field_0x48;
  plVar4 = *(longlong **)(lVar3 + 0x28);
  iVar2 = *(int *)(lVar3 + 0x30);
  plVar1 = plVar4 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x30) != iVar2) {
      `TCheckedPointerIterator<UOptimusVariableDescription_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar4 == plVar1) break;
    if ((FName)((UOptimusVariableDescription *)*plVar4)->_padding_ == param_1) {
      return (UOptimusVariableDescription *)*plVar4;
    }
    plVar4 = plVar4 + 1;
  }
  return (UOptimusVariableDescription *)0x0;
}

// Serialize @ 14e21b5e0

void __thiscall UOptimusDeformer::Serialize(UOptimusDeformer *this,FArchive *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint local_res10 [2];
  uint local_res18 [4];
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FOptimusObjectVersion::GUID);
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FOptimusObjectVersion::GUID);
  if (iVar4 < 1) {
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_res10[0] = 0;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    iVar4 = 0;
    if (0 < (int)local_res10[0]) {
      do {
        plVar1 = *(longlong **)&param_1->field_0x8;
        local_res18[0] = 0;
        if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,local_res18);
          }
        }
        else {
          local_res18[0] = *(uint *)*plVar1;
          *plVar1 = *plVar1 + 4;
        }
        if ((local_res18[0] != 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumResources == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                               ,0xd88,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_res10[0]);
    }
  }
  return;
}

// Serialize @ 14e21b730

void __thiscall UOptimusDeformer::Serialize(UOptimusDeformer *this,FStructuredArchiveRecord param_1)

{
  FFastPathLoadBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FArchiveState *this_00;
  uint local_res10 [2];
  uint local_res18 [2];
  FSlotBase local_res20;
  
  local_res20.StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res20);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FOptimusObjectVersion::GUID);
  iVar4 = FArchiveState::CustomVer(this_00,&FOptimusObjectVersion::GUID);
  if (iVar4 < 1) {
    pFVar1 = this_00->ActiveFPLB;
    local_res10[0] = 0;
    if (pFVar1->EndFastPathLoadBuffer < (uint *)((longlong)pFVar1->StartFastPathLoadBuffer + 4)) {
      if (this_00->ArForceByteSwapping == 0) {
        (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this_00,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)pFVar1->StartFastPathLoadBuffer;
      pFVar1->StartFastPathLoadBuffer = pFVar1->StartFastPathLoadBuffer + 4;
    }
    iVar4 = 0;
    if (0 < (int)local_res10[0]) {
      do {
        pFVar1 = this_00->ActiveFPLB;
        local_res18[0] = 0;
        if (pFVar1->EndFastPathLoadBuffer < (uint *)((longlong)pFVar1->StartFastPathLoadBuffer + 4))
        {
          if (this_00->ArForceByteSwapping == 0) {
            (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res18,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)this_00,local_res18);
          }
        }
        else {
          local_res18[0] = *(uint *)pFVar1->StartFastPathLoadBuffer;
          pFVar1->StartFastPathLoadBuffer = pFVar1->StartFastPathLoadBuffer + 4;
        }
        if ((local_res18[0] != 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumResources == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                               ,0xd88,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_res10[0]);
    }
  }
  return;
}

// SetAllInstancesCanbeActive @ 14e21bc20

void __thiscall UOptimusDeformer::SetAllInstancesCanbeActive(UOptimusDeformer *this,bool param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->SetAllInstancesCanbeActiveDelegate,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->SetAllInstancesCanbeActiveDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->SetAllInstancesCanbeActiveDelegate).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->SetAllInstancesCanbeActiveDelegate).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->SetAllInstancesCanbeActiveDelegate).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->SetAllInstancesCanbeActiveDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->SetAllInstancesCanbeActiveDelegate,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// SetComponentBindingSource @ 14e21c0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UOptimusDeformer::SetComponentBindingSource
          (UOptimusDeformer *this,UOptimusComponentSourceBinding *param_1,
          UOptimusComponentSource *param_2,bool param_3)

{
  int *piVar1;
  atomic<int> *paVar2;
  longlong *plVar3;
  atomic<int> aVar4;
  int iVar5;
  UOptimusComponentSourceBindingContainer *pUVar6;
  UOptimusNode_ComponentSource *this_00;
  code *pcVar7;
  UOptimusComponentSourceBinding *pUVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  UClass *pUVar12;
  FOptimusCompoundAction *this_01;
  UOptimusNodePin *pUVar13;
  UClass *pUVar14;
  UOptimusNode_DataInterface *this_02;
  UClass *pUVar15;
  FName *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  UClass *pUVar18;
  UOptimusActionStack *this_03;
  FString *pFVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  wchar_t *pwVar23;
  ForAnyElementType FVar24;
  TArray<TSharedPtr<FOptimusAction,1>,TSizedDefaultAllocator<32>_> *pTVar25;
  wchar_t *pwVar26;
  UOptimusDeformer *this_04;
  bool bVar27;
  undefined1 auStackY_1d8 [32];
  undefined1 local_188;
  undefined1 local_187 [3];
  uint local_184;
  UOptimusDeformer *local_180;
  TReferenceControllerBase<1> *local_178;
  TReferenceControllerBase<1> *local_170;
  UOptimusComponentSource *local_168;
  UOptimusNodePin *local_160;
  FScriptContainerElement *local_158;
  UOptimusComponentSourceBinding *local_150;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_148;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_138;
  UOptimusNodePin *local_128;
  FScriptContainerElement *local_120;
  FString local_118;
  TSharedPtr<FOptimusAction,1> local_108;
  undefined1 local_f8 [8];
  TWeakPtr<FOptimusNodeGraphAction_RemoveLink,1> local_f0;
  TWeakPtr<FOptimusComponentBindingAction_SetComponentSource,1> local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  bVar9 = false;
  local_184 = 0;
  local_180 = this;
  local_168 = param_2;
  local_150 = param_1;
  if (param_1 == (UOptimusComponentSourceBinding *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5723111267007200002>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                       ,0x4fe,"InBinding");
    if (!bVar9) {
      return false;
    }
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  pUVar6 = (this->Bindings).field0_0x0.DebugPtr;
  if (pUVar6 == (UOptimusComponentSourceBindingContainer *)0x0) {
    bVar27 = (UOptimusComponentSourceBindingContainer *)param_1->_padding_ ==
             (UOptimusComponentSourceBindingContainer *)0x0;
  }
  else {
    bVar27 = pUVar6 == (UOptimusComponentSourceBindingContainer *)param_1->_padding_;
  }
  if (!bVar27) {
    if ((byte)LogOptimusCore._0_1_ < 2) {
      return false;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
    return false;
  }
  if (param_2 == (UOptimusComponentSource *)0x0) {
    if ((byte)LogOptimusCore._0_1_ < 2) {
      return false;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
    return false;
  }
  if (param_3) goto LAB_14e21c1e2;
  pUVar15 = (param_1->ComponentType).Class.field0_0x0.DebugPtr;
  if ((pUVar15 == (UClass *)0x0) ||
     (pUVar12 = UOptimusComponentSource::StaticClass(), pUVar12 == (UClass *)0x0)) {
LAB_14e21c1d3:
    pUVar15 = (UClass *)0x0;
  }
  else {
    iVar11 = (int)pUVar12->_padding_;
    if (((int)pUVar15->_padding_ < iVar11) ||
       ((longlong *)*(undefined1 **)(pUVar15->_padding_ + (longlong)iVar11 * 8) !=
        &pUVar12->_padding_)) {
      bVar27 = false;
    }
    else {
      bVar27 = true;
    }
    if (!bVar27) goto LAB_14e21c1d3;
    pUVar15 = (param_1->ComponentType).Class.field0_0x0.DebugPtr;
  }
  if (pUVar15 == *(UClass **)&param_2->field_0x10) {
    return true;
  }
LAB_14e21c1e2:
  this_01 = ::operator_new(0x28);
  if (this_01 == (FOptimusCompoundAction *)0x0) {
    this_01 = (FOptimusCompoundAction *)0x0;
  }
  else {
    ::FString::FString(&local_118,L"Set Component Binding Source");
    FVar24.Data = local_118.Data.AllocatorInstance.Data;
    plVar3 = &this_01->_padding_;
    bVar9 = true;
    this_01->_padding_ = (longlong)&___7FOptimusAction__6B_;
    piVar1 = (int *)((longlong)&this_01->_padding_ + 4);
    *plVar3 = 0;
    *(int *)&this_01->_padding_ = local_118.Data.ArrayNum;
    if (local_118.Data.ArrayNum == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_118.Data.ArrayNum,0,(ForAnyElementType *)plVar3,local_118.Data.ArrayNum,
                 piVar1);
      memcpy((void *)*plVar3,FVar24.Data,(longlong)local_118.Data.ArrayNum * 2);
    }
    this_01->_padding_ = (longlong)&___7FOptimusCompoundAction__6B_;
    (this_01->SubActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->SubActions).ArrayNum = 0;
    (this_01->SubActions).ArrayMax = 0;
    this = local_180;
  }
  if ((bVar9) && (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  local_98._44_4_ = 0x80;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_98._32_8_ = 0;
  local_98._40_4_ = 0;
  local_98._52_4_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_98._48_4_ = 0xffffffff;
  GetNodesUsingComponentBinding(this,&local_138,param_1);
  uVar20 = (ulonglong)local_138.ArrayNum;
  local_184 = local_138.ArrayNum;
  local_120 = local_138.AllocatorInstance.Data + uVar20 * 8;
  uVar21 = uVar20;
  FVar24.Data = local_138.AllocatorInstance.Data;
  do {
    pFVar22 = local_120;
    pUVar15 = (UClass *)0x0;
    local_158 = FVar24.Data;
    if ((int)uVar20 != (int)uVar21) {
      local_188 = 0;
      `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_188);
    }
    if (FVar24.Data == pFVar22) {
      if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
      pUVar8 = local_150;
      pUVar12 = (local_150->ComponentType).Class.field0_0x0.DebugPtr;
      pUVar14 = pUVar15;
      if ((pUVar12 != (UClass *)0x0) &&
         (pUVar18 = UOptimusComponentSource::StaticClass(), pUVar18 != (UClass *)0x0)) {
        iVar11 = (int)pUVar18->_padding_;
        if (((int)pUVar12->_padding_ < iVar11) ||
           ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar11 * 8) !=
            &pUVar18->_padding_)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          pUVar14 = (pUVar8->ComponentType).Class.field0_0x0.DebugPtr;
        }
      }
      this_04 = local_180;
      if (pUVar14 == *(UClass **)&param_2->field_0x10) {
        Notify(local_180,ComponentBindingSourceChanged,(UObject *)pUVar8);
      }
      else {
        FOptimusCompoundAction::
        AddSubAction<FOptimusComponentBindingAction_SetComponentSource,UOptimusComponentSourceBinding_*_&,UOptimusComponentSource_const_*_&>
                  (this_01,&local_e0,&local_150,&local_168);
        this_04 = local_180;
        if (local_e0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &(local_e0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar4 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar4 == (atomic<int>)0x1) {
            (**(code **)((local_e0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_e0.WeakReferenceCount.ReferenceController,1);
            this_04 = local_180;
          }
        }
      }
      this_03 = GetActionStack(this_04);
      local_108.Object = (FOptimusAction *)this_01;
      pUVar12 = ::operator_new(0x18);
      if (pUVar12 != (UClass *)0x0) {
        *(undefined4 *)&pUVar12->_padding_ = 1;
        pUVar12->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        *(undefined4 *)((longlong)&pUVar12->_padding_ + 4) = 1;
        pUVar12->_padding_ = (longlong)this_01;
        pUVar15 = pUVar12;
      }
      local_108.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar15;
      bVar9 = UOptimusActionStack::RunAction(this_03,&local_108);
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98);
      return bVar9;
    }
    this_00 = *(UOptimusNode_ComponentSource **)FVar24.Data;
    if (this_00 == (UOptimusNode_ComponentSource *)0x0) {
      pFVar19 = GetTypeName<UOptimusNode_ComponentSource>(&local_b0);
      if ((pFVar19->Data).ArrayNum == 0) {
        pwVar23 = L"";
      }
      else {
        pwVar23 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar23);
    }
    pUVar12 = UOptimusNode_ComponentSource::StaticClass();
    iVar11 = (int)pUVar12->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar12->_padding_)) {
      pFVar19 = GetTypeName<UOptimusNode_ComponentSource>(&local_d0);
      pwVar23 = L"";
      if ((pFVar19->Data).ArrayNum == 0) {
        pwVar26 = L"";
      }
      else {
        pwVar26 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
      }
      pFVar19 = GetFullNameForCastLogError<UOptimusNode>(&local_c0,(UOptimusNode *)this_00);
      if ((pFVar19->Data).ArrayNum != 0) {
        pwVar23 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar23,pwVar26);
    }
    pUVar13 = UOptimusNode_ComponentSource::GetComponentPin(this_00);
    pUVar12 = (UClass *)this_00->_padding_;
    local_160 = pUVar13;
    if (pUVar12 == (UClass *)0x0) {
LAB_14e21c3a1:
      pUVar12 = pUVar15;
    }
    else {
      pUVar14 = UOptimusNodeGraph::StaticClass();
      iVar11 = (int)pUVar14->_padding_;
      if ((*(int *)(pUVar12->_padding_ + 0x38) < iVar11) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
          &pUVar14->_padding_)) goto LAB_14e21c3a1;
    }
    UOptimusNodeGraph::GetConnectedPins((UOptimusNodeGraph *)pUVar12,&local_148,pUVar13);
    iVar11 = local_148.ArrayNum;
    uVar21 = (ulonglong)local_148.ArrayNum;
    pFVar22 = local_148.AllocatorInstance.Data + uVar21 * 8;
    FVar24.Data = local_148.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar21 != iVar11) {
        local_187[0] = 0;
        `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_187);
      }
      pUVar13 = local_160;
      if (FVar24.Data == pFVar22) break;
      local_128 = *(UOptimusNodePin **)FVar24.Data;
      this_02 = (UOptimusNode_DataInterface *)UOptimusNodePin::GetOwningNode(local_128);
      if (this_02 != (UOptimusNode_DataInterface *)0x0) {
        pUVar15 = UOptimusNode_DataInterface::StaticClass();
        iVar5 = (int)pUVar15->_padding_;
        if (((iVar5 <= *(int *)(this_02->_padding_ + 0x38)) &&
            ((longlong *)
             *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
             &pUVar15->_padding_)) &&
           ((bVar9 = UOptimusNode_DataInterface::IsComponentSourceCompatible(this_02,param_2),
            !bVar9 && (FOptimusCompoundAction::
                       AddSubAction<FOptimusNodeGraphAction_RemoveLink,UOptimusNodePin_*_&,UOptimusNodePin_*_&>
                                 (this_01,&local_f0,&local_160,&local_128),
                      local_f0.WeakReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0)))) {
          LOCK();
          paVar2 = &(local_f0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar4 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar4 == (atomic<int>)0x1) {
            (**(code **)((local_f0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_f0.WeakReferenceCount.ReferenceController,1);
          }
        }
      }
      uVar21 = (ulonglong)(uint)local_148.ArrayNum;
      FVar24.Data = FVar24.Data + 8;
    }
    if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.AllocatorInstance.Data);
    }
    pFVar16 = (FName *)(**(code **)(*(longlong *)param_2 + 0x2b8))(param_2,local_f8);
    pTVar17 = ::operator_new(0x48);
    if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_178 = (TReferenceControllerBase<1> *)&DAT_00000010;
      local_170 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar17->SharedReferenceCount = (atomic<int>)0x1;
      pTVar17->WeakReferenceCount = (atomic<int>)0x1;
      pTVar17->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFOptimusNodeAction_SetPinName___00_SharedPointerInternals__6B_
      ;
      FOptimusNodeAction_SetPinName::FOptimusNodeAction_SetPinName
                ((FOptimusNodeAction_SetPinName *)(pTVar17 + 1),pUVar13,*pFVar16);
      if ((pTVar17 + 1 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
      local_178 = pTVar17 + 1;
      local_170 = pTVar17;
    }
    pTVar17 = local_170;
    pTVar25 = &this_01->SubActions;
    pFVar22 = (pTVar25->AllocatorInstance).Data;
    if (((pFVar22 <= (FScriptContainerElement *)&local_178) &&
        ((FScriptContainerElement *)&local_178 <
         pFVar22 + (longlong)(this_01->SubActions).ArrayMax * 0x10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    iVar11 = (this_01->SubActions).ArrayNum;
    piVar1 = &(this_01->SubActions).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar25->AllocatorInstance,piVar1);
    }
    (this_01->SubActions).ArrayNum = iVar11 + 1;
    pFVar22 = (pTVar25->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
    *(TReferenceControllerBase<1> **)pFVar22 = local_178;
    *(TReferenceControllerBase<1> **)(pFVar22 + 8) = local_170;
    local_170 = (TReferenceControllerBase<1> *)0x0;
    local_178 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      LOCK();
      pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
      LOCK();
      paVar2 = &pTVar17->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar17->_padding_ + 8))(pTVar17,1);
      }
    }
    uVar20 = (ulonglong)(uint)local_138.ArrayNum;
    FVar24.Data = local_158 + 8;
    uVar21 = (ulonglong)local_184;
  } while( true );
}

// SetComponentBindingSourceDirect @ 14e21c830

bool __thiscall
UOptimusDeformer::SetComponentBindingSourceDirect
          (UOptimusDeformer *this,UOptimusComponentSourceBinding *param_1,
          UOptimusComponentSource *param_2)

{
  int iVar1;
  TObjectPtr<UOptimusComponentSourceBindingContainer>_u_0 TVar2;
  longlong *plVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  longlong *plVar6;
  bool bVar7;
  
  TVar2 = (this->Bindings).field0_0x0;
  plVar3 = *(longlong **)((longlong)TVar2 + 0x28);
  plVar6 = plVar3;
  while( true ) {
    if (plVar6 == plVar3 + ((TVar2.DebugPtr)->Bindings).ArrayNum) {
      return false;
    }
    if ((UOptimusComponentSourceBinding *)*plVar6 == (UOptimusComponentSourceBinding *)0x0) {
      bVar7 = param_1 == (UOptimusComponentSourceBinding *)0x0;
    }
    else {
      bVar7 = (UOptimusComponentSourceBinding *)*plVar6 == param_1;
    }
    if (bVar7) break;
    plVar6 = plVar6 + 1;
  }
  if ((int)((longlong)plVar6 - (longlong)plVar3 >> 3) == -1) {
    return false;
  }
  pUVar5 = (param_1->ComponentType).Class.field0_0x0.DebugPtr;
  if ((pUVar5 != (UClass *)0x0) &&
     (pUVar4 = UOptimusComponentSource::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      pUVar5 = (param_1->ComponentType).Class.field0_0x0.DebugPtr;
      goto LAB_14e21c8e6;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14e21c8e6:
  pUVar4 = *(UClass **)&param_2->field_0x10;
  if (pUVar5 != pUVar4) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (param_1->ComponentType).Class.field0_0x0.DebugPtr = pUVar4;
    Notify(this,ComponentBindingSourceChanged,(UObject *)param_1);
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  }
  return true;
}

// SetPreviewMesh @ 14e220af0

void __thiscall
UOptimusDeformer::SetPreviewMesh(UOptimusDeformer *this,USkeletalMesh *param_1,bool param_2)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USkeletalMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
    return;
  }
  this->_padding_ = (longlong)param_1;
  return;
}

// SetResourceDataDomain @ 14e220e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UOptimusDeformer::SetResourceDataDomain
          (UOptimusDeformer *this,UOptimusResourceDescription *param_1,FOptimusDataDomain *param_2,
          bool param_3)

{
  longlong *plVar1;
  int *piVar2;
  atomic<int> *paVar3;
  undefined8 *puVar4;
  atomic<int> aVar5;
  UOptimusResourceContainer *pUVar6;
  UOptimusNodePin *this_00;
  FOptimusResourceAction_SetDataDomain *pFVar7;
  longlong lVar8;
  code *pcVar9;
  FOptimusDataDomain *pFVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  FOptimusCompoundAction *pFVar14;
  UClass *pUVar15;
  TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1> *pTVar16;
  UOptimusNode *pUVar17;
  TSharedRef<FOptimusResourceAction_SetDataDomain,1> *pTVar18;
  UOptimusActionStack *this_01;
  TReferenceControllerBase<1> *pTVar19;
  TReferenceControllerBase<1> *pTVar20;
  FString *pFVar21;
  byte bVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  UOptimusNodeGraph *this_02;
  ForAnyElementType FVar26;
  uint uVar27;
  TTypeCompatibleBytes<FOptimusNodeAction_SetPinDataDomain> *pTVar28;
  uint uVar29;
  wchar_t *pwVar30;
  uint *puVar31;
  wchar_t *pwVar32;
  FOptimusCompoundAction *this_03;
  FScriptContainerElement *pFVar33;
  undefined1 auStackY_2a8 [32];
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256 [2];
  uint local_254;
  TTypeCompatibleBytes<FOptimusNodeAction_SetPinDataDomain> *local_250;
  TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1> *local_248;
  FOptimusResourceAction_SetDataDomain *local_240;
  TReferenceControllerBase<1> *local_238;
  FOptimusDataDomain *local_230;
  UOptimusNodePin *local_228;
  FScriptContainerElement *local_220;
  FOptimusCompoundAction *local_218;
  UOptimusResourceDescription *local_210;
  UOptimusDeformer *local_208;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_200;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_1f0;
  undefined1 local_1e0 [8];
  int local_1d8;
  int local_1d4;
  FScriptContainerElement *local_1d0;
  FScriptContainerElement *local_1c8;
  FString local_1c0;
  longlong *local_1b0;
  int iStack_1a8;
  uint uStack_1a4;
  TBitArray<FDefaultBitArrayAllocator> *local_1a0;
  undefined4 uStack_198;
  uint uStack_194;
  int local_190;
  undefined4 uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  longlong *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  UOptimusNodePin *local_150;
  undefined8 local_148;
  undefined8 local_140;
  UOptimusNodePin *local_138;
  UOptimusNodePin *local_130;
  UOptimusNodePin *pUStack_128;
  TSharedRef<FOptimusResourceAction_SetDataDomain,1> local_120;
  TSharedPtr<FOptimusAction,1> local_110;
  TWeakPtr<FOptimusNodeGraphAction_RemoveLink,1> local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0 [2];
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  this_03 = (FOptimusCompoundAction *)0x0;
  local_254 = 0;
  local_230 = param_2;
  local_210 = param_1;
  local_208 = this;
  if (param_1 == (UOptimusResourceDescription *)0x0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_5723111267007200473>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                        ,0x327,"InResourceDesc");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
  }
  else {
    pUVar6 = (this->Resources).field0_0x0.DebugPtr;
    if (pUVar6 == (UOptimusResourceContainer *)0x0) {
      bVar11 = (UOptimusResourceContainer *)param_1->_padding_ == (UOptimusResourceContainer *)0x0;
    }
    else {
      bVar11 = pUVar6 == (UOptimusResourceContainer *)param_1->_padding_;
    }
    if (bVar11) {
      if ((!param_3) &&
         (bVar11 = FOptimusDataDomain::operator==(param_2,&param_1->DataDomain), bVar11)) {
        return true;
      }
      pFVar14 = ::operator_new(0x28);
      if (pFVar14 == (FOptimusCompoundAction *)0x0) {
        local_218 = (FOptimusCompoundAction *)0x0;
        pFVar14 = this_03;
      }
      else {
        local_218 = pFVar14;
        ::FString::FString(&local_1c0,L"Set Resource Data Domain");
        FVar26.Data = local_1c0.Data.AllocatorInstance.Data;
        plVar1 = &pFVar14->_padding_;
        pFVar14->_padding_ = (longlong)&___7FOptimusAction__6B_;
        piVar2 = (int *)((longlong)&pFVar14->_padding_ + 4);
        *plVar1 = 0;
        *(int *)&pFVar14->_padding_ = local_1c0.Data.ArrayNum;
        if (local_1c0.Data.ArrayNum == 0) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1c0.Data.ArrayNum,0,(ForAnyElementType *)plVar1,
                     local_1c0.Data.ArrayNum,piVar2);
          memcpy((void *)*plVar1,FVar26.Data,(longlong)local_1c0.Data.ArrayNum * 2);
        }
        pFVar14->_padding_ = (longlong)&___7FOptimusCompoundAction__6B_;
        (pFVar14->SubActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar14->SubActions).ArrayNum = 0;
        (pFVar14->SubActions).ArrayMax = 0;
        param_2 = local_230;
        this = local_208;
        this_03 = pFVar14;
        pFVar14 = (FOptimusCompoundAction *)&DAT_00000001;
      }
      if ((pFVar14 != (FOptimusCompoundAction *)0x0) &&
         (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
      }
      local_98._0_8_ = 0;
      local_98._8_8_ = 0;
      local_78 = (uint *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      GetNodesUsingResource(this,&local_1f0,param_1);
      uVar23 = (ulonglong)local_1f0.ArrayNum;
      local_254 = local_1f0.ArrayNum;
      pFVar25 = local_1f0.AllocatorInstance.Data + uVar23 * 8;
      uVar24 = uVar23;
      FVar26.Data = local_1f0.AllocatorInstance.Data;
      local_1c8 = pFVar25;
      while( true ) {
        pwVar32 = L"";
        local_220 = FVar26.Data;
        if ((int)uVar23 != (int)uVar24) {
          local_258 = 0;
          `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_258);
        }
        if (FVar26.Data == pFVar25) break;
        pUVar17 = *(UOptimusNode **)FVar26.Data;
        if (pUVar17 == (UOptimusNode *)0x0) {
          pFVar21 = GetTypeName<UOptimusNode_ResourceAccessorBase>(local_d0);
          if ((pFVar21->Data).ArrayNum != 0) {
            pwVar32 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar32);
        }
        pUVar15 = UOptimusNode_ResourceAccessorBase::StaticClass();
        iVar13 = (int)pUVar15->_padding_;
        if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar13) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
            &pUVar15->_padding_)) {
          pFVar21 = GetTypeName<UOptimusNode_ResourceAccessorBase>(&local_f0);
          if ((pFVar21->Data).ArrayNum == 0) {
            pwVar30 = L"";
          }
          else {
            pwVar30 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
          }
          pFVar21 = GetFullNameForCastLogError<UOptimusNode>(&local_e0,pUVar17);
          if ((pFVar21->Data).ArrayNum != 0) {
            pwVar32 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar32,pwVar30);
        }
        pFVar33 = (pUVar17->Pins).AllocatorInstance.Data;
        iVar13 = (pUVar17->Pins).ArrayNum;
        if ((iVar13 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        local_1d0 = pFVar33 + (longlong)iVar13 * 8;
        if (pFVar33 != local_1d0) {
          do {
            this_00 = *(UOptimusNodePin **)pFVar33;
            local_228 = this_00;
            pTVar16 = ::operator_new(0xb8);
            if (pTVar16 ==
                (TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1> *)0x0) {
              pTVar16 = (TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1> *)0x0;
              pTVar28 = (TTypeCompatibleBytes<FOptimusNodeAction_SetPinDataDomain> *)&DAT_00000010;
LAB_14e221155:
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)pTVar16);
              local_250 = pTVar28;
              local_248 = pTVar16;
              if (pTVar16 !=
                  (TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1> *)0x0)
              goto LAB_14e22116f;
            }
            else {
              pTVar16 = SharedPointerInternals::
                        TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1>::
                        TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1><UOptimusNodePin_*_&,FOptimusDataDomain_const_&>
                                  (pTVar16,&local_228,param_2);
              pTVar28 = &pTVar16->ObjectStorage;
              if ((pTVar28 == (TTypeCompatibleBytes<FOptimusNodeAction_SetPinDataDomain> *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InObject != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x246,L""), bVar11)) {
                pcVar9 = (code *)swi(3);
                uVar12 = (*pcVar9)();
                return (bool)uVar12;
              }
              if (pTVar16 ==
                  (TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1> *)0x0)
              goto LAB_14e221155;
              LOCK();
              *(int *)&pTVar16->_padding_ = (int)pTVar16->_padding_ + 1;
              UNLOCK();
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)pTVar16);
              local_250 = pTVar28;
LAB_14e22116f:
              LOCK();
              *(int *)&pTVar16->_padding_ = (int)pTVar16->_padding_ + 1;
              UNLOCK();
              local_248 = pTVar16;
            }
            pTVar16 = local_248;
            pFVar25 = (this_03->SubActions).AllocatorInstance.Data;
            if (((pFVar25 <= (FScriptContainerElement *)&local_250) &&
                ((FScriptContainerElement *)&local_250 <
                 pFVar25 + (longlong)(this_03->SubActions).ArrayMax * 0x10)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
            iVar13 = (this_03->SubActions).ArrayNum;
            if (iVar13 == (this_03->SubActions).ArrayMax) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&(this_03->SubActions).AllocatorInstance,
                                  &(this_03->SubActions).ArrayMax);
            }
            (this_03->SubActions).ArrayNum = iVar13 + 1;
            pFVar25 = (this_03->SubActions).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
            *(TTypeCompatibleBytes<FOptimusNodeAction_SetPinDataDomain> **)pFVar25 = local_250;
            *(TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1> **)(pFVar25 + 8)
                 = local_248;
            local_248 = (TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1> *)0x0;
            local_250 = (TTypeCompatibleBytes<FOptimusNodeAction_SetPinDataDomain> *)0x0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            if (pTVar16 ==
                (TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1> *)0x0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
            }
            else {
              LOCK();
              piVar2 = (int *)((longlong)&pTVar16->_padding_ + 4);
              *piVar2 = *piVar2 + 1;
              UNLOCK();
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)pTVar16);
              LOCK();
              piVar2 = (int *)((longlong)&pTVar16->_padding_ + 4);
              iVar13 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(pTVar16->_padding_ + 8))(pTVar16,1);
              }
            }
            pUVar17 = UOptimusNodePin::GetOwningNode(this_00);
            this_02 = (UOptimusNodeGraph *)pUVar17->_padding_;
            if (this_02 == (UOptimusNodeGraph *)0x0) {
LAB_14e2212a7:
              this_02 = (UOptimusNodeGraph *)0x0;
            }
            else {
              pUVar15 = UOptimusNodeGraph::StaticClass();
              iVar13 = (int)pUVar15->_padding_;
              if ((*(int *)(this_02->_padding_ + 0x38) < iVar13) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar13 * 8)
                  != &pUVar15->_padding_)) goto LAB_14e2212a7;
            }
            UOptimusNodeGraph::GetConnectedPins(this_02,&local_200,this_00);
            iVar13 = local_200.ArrayNum;
            uVar24 = (ulonglong)local_200.ArrayNum;
            pFVar25 = local_200.AllocatorInstance.Data + uVar24 * 8;
            FVar26.Data = local_200.AllocatorInstance.Data;
            while( true ) {
              if ((uint)uVar24 != iVar13) {
                local_257 = 0;
                `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_257);
              }
              if (FVar26.Data == pFVar25) break;
              if (this_00->Direction == Output) {
                local_150 = this_00;
                local_148 = *(undefined8 *)FVar26.Data;
                TSet<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,DefaultKeyFuncs<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,0>,FDefaultSetAllocator>
                ::Emplace<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>
                          ((TSet<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,DefaultKeyFuncs<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,0>,FDefaultSetAllocator>
                            *)local_98,(TTuple<UOptimusNodePin_*,UOptimusNodePin_*> *)local_1e0,
                           (bool *)&local_150);
                uVar24 = (ulonglong)(uint)local_200.ArrayNum;
                FVar26.Data = FVar26.Data + 8;
              }
              else {
                local_140 = *(undefined8 *)FVar26.Data;
                local_138 = this_00;
                TSet<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,DefaultKeyFuncs<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,0>,FDefaultSetAllocator>
                ::Emplace<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>
                          ((TSet<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,DefaultKeyFuncs<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,0>,FDefaultSetAllocator>
                            *)local_98,
                           (TTuple<UOptimusNodePin_*,UOptimusNodePin_*> *)(local_1e0 + 4),
                           (bool *)&local_140);
                uVar24 = (ulonglong)(uint)local_200.ArrayNum;
                FVar26.Data = FVar26.Data + 8;
              }
            }
            if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_200.AllocatorInstance.Data);
            }
            pFVar33 = pFVar33 + 8;
            param_2 = local_230;
            pFVar25 = local_1c8;
          } while (pFVar33 != local_1d0);
        }
        uVar23 = (ulonglong)(uint)local_1f0.ArrayNum;
        FVar26.Data = local_220 + 8;
        uVar24 = (ulonglong)local_254;
        param_2 = local_230;
        this_03 = local_218;
      }
      if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.AllocatorInstance.Data);
      }
      uVar29 = local_70;
      iStack_1a8 = 0;
      local_190 = 0;
      uStack_1a4 = 1;
      uStack_194 = 0;
      if (local_70 != 0) {
        puVar31 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar31 = local_78;
        }
        uVar27 = *puVar31;
        while (uVar27 == 0) {
          iStack_1a8 = iStack_1a8 + 1;
          local_190 = local_190 + 0x20;
          uStack_194 = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1a8)
          goto LAB_14e22140f;
          uVar27 = puVar31[iStack_1a8];
        }
        uStack_1a4 = -uVar27 & uVar27;
        uVar24 = (ulonglong)uStack_1a4 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        local_1d8 = (int)lVar8;
        uStack_194 = local_190 + -1 + local_1d8;
        if ((int)local_70 < (int)uStack_194) {
          uStack_194 = local_70;
        }
      }
LAB_14e22140f:
      local_1b0 = (longlong *)local_98;
      uStack_18c = local_a4;
      local_1a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      uVar27 = local_70 & 0xffffffe0;
      iStack_188 = local_98._8_4_ - local_64;
      uStack_198 = 0xffffffff;
      TStack_178.CurrentBitIndex = uStack_194;
      TStack_178.UnvisitedBitMask = 0xffffffff;
      TStack_178._padding_ = CONCAT44(uStack_1a4,iStack_1a8);
      iVar13 = (int)local_70 >> 5;
      TStack_178._28_4_ = local_a4;
      TStack_178.BaseBitIndex = local_190;
      uStack_158 = CONCAT44(uStack_184,iStack_188);
      bVar22 = (byte)local_70;
      local_180 = local_1b0;
      TStack_178.Array = local_1a0;
      if (((int)local_70 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return (bool)uVar12;
      }
      if (uVar29 != local_70) {
        puVar31 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar31 = local_78;
        }
        uVar29 = -1 << (bVar22 & 0x1f) & puVar31[iVar13];
        while (uVar29 == 0) {
          iVar13 = iVar13 + 1;
          uVar27 = uVar27 + 0x20;
          uVar29 = local_70;
          if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < iVar13)
          goto LAB_14e221520;
          uVar29 = puVar31[iVar13];
        }
        uVar24 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        local_1d4 = (int)lVar8;
        uVar29 = local_1d4 + -1 + uVar27;
        if ((int)local_70 < (int)uVar29) {
          uVar29 = local_70;
        }
      }
LAB_14e221520:
      while( true ) {
        plVar1 = local_180;
        if ((int)local_180[1] - *(int *)((longlong)local_180 + 0x34) != (int)uStack_158) {
          local_256[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_256);
        }
        pFVar10 = local_230;
        if (((TStack_178.CurrentBitIndex == uVar29) &&
            (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
           (plVar1 == (longlong *)local_98)) break;
        puVar4 = (undefined8 *)(*plVar1 + (longlong)TStack_178.CurrentBitIndex * 0x18);
        local_130 = (UOptimusNodePin *)*puVar4;
        pUStack_128 = (UOptimusNodePin *)puVar4[1];
        FOptimusCompoundAction::
        AddSubAction<FOptimusNodeGraphAction_RemoveLink,UOptimusNodePin_*_&,UOptimusNodePin_*_&>
                  (this_03,&local_100,&local_130,&pUStack_128);
        if (local_100.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          paVar3 = &(local_100.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar5 = *paVar3;
          *paVar3 = (atomic<int>)((int)*paVar3 + -1);
          UNLOCK();
          if (aVar5 == (atomic<int>)0x1) {
            (**(code **)((local_100.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_100.WeakReferenceCount.ReferenceController,1);
          }
        }
        TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
      }
      bVar11 = FOptimusDataDomain::operator==(&local_210->DataDomain,local_230);
      if (!bVar11) {
        pTVar18 = MakeShared<FOptimusResourceAction_SetDataDomain,1,UOptimusResourceDescription_*_&,FOptimusDataDomain_const_&>
                            (&local_120,&local_210,pFVar10);
        pTVar20 = (pTVar18->SharedReferenceCount).ReferenceController;
        pFVar7 = pTVar18->Object;
        if (pTVar20 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_120.SharedReferenceCount.ReferenceController);
        }
        else {
          LOCK();
          pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_120.SharedReferenceCount.ReferenceController);
          LOCK();
          pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar25 = (this_03->SubActions).AllocatorInstance.Data;
        local_240 = pFVar7;
        local_238 = pTVar20;
        if (((pFVar25 <= (FScriptContainerElement *)&local_240) &&
            ((FScriptContainerElement *)&local_240 <
             pFVar25 + (longlong)(this_03->SubActions).ArrayMax * 0x10)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        iVar13 = (this_03->SubActions).ArrayNum;
        piVar2 = &(this_03->SubActions).ArrayMax;
        if (iVar13 == *piVar2) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(this_03->SubActions).AllocatorInstance,piVar2);
        }
        (this_03->SubActions).ArrayNum = iVar13 + 1;
        pFVar25 = (this_03->SubActions).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
        *(FOptimusResourceAction_SetDataDomain **)pFVar25 = local_240;
        *(TReferenceControllerBase<1> **)(pFVar25 + 8) = local_238;
        local_238 = (TReferenceControllerBase<1> *)0x0;
        local_240 = (FOptimusResourceAction_SetDataDomain *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if (pTVar20 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
        else {
          LOCK();
          pTVar20->WeakReferenceCount = (atomic<int>)((int)pTVar20->WeakReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar20);
          LOCK();
          paVar3 = &pTVar20->WeakReferenceCount;
          aVar5 = *paVar3;
          *paVar3 = (atomic<int>)((int)*paVar3 + -1);
          UNLOCK();
          if (aVar5 == (atomic<int>)0x1) {
            (**(code **)(pTVar20->_padding_ + 8))(pTVar20,1);
          }
        }
      }
      pTVar20 = (TReferenceControllerBase<1> *)0x0;
      this_01 = GetActionStack(local_208);
      local_110.Object = (FOptimusAction *)this_03;
      pTVar19 = ::operator_new(0x18);
      if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
        pTVar19->SharedReferenceCount = (atomic<int>)0x1;
        pTVar19->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        pTVar19->WeakReferenceCount = (atomic<int>)0x1;
        pTVar19[1]._padding_ = (longlong)this_03;
        pTVar20 = pTVar19;
      }
      local_110.SharedReferenceCount.ReferenceController = pTVar20;
      bVar11 = UOptimusActionStack::RunAction(this_01,&local_110);
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      return bVar11;
    }
    if (1 < (byte)LogOptimusCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
    }
  }
  return false;
}

// SetResourceDataDomainDirect @ 14e221860

bool __thiscall
UOptimusDeformer::SetResourceDataDomainDirect
          (UOptimusDeformer *this,UOptimusResourceDescription *param_1,FOptimusDataDomain *param_2)

{
  TObjectPtr<UOptimusResourceContainer>_u_0 TVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  
  TVar1 = (this->Resources).field0_0x0;
  plVar2 = *(longlong **)((longlong)TVar1 + 0x28);
  plVar3 = plVar2;
  while( true ) {
    if (plVar3 == plVar2 + ((TVar1.DebugPtr)->Descriptions).ArrayNum) {
      return false;
    }
    if ((UOptimusResourceDescription *)*plVar3 == (UOptimusResourceDescription *)0x0) {
      bVar4 = param_1 == (UOptimusResourceDescription *)0x0;
    }
    else {
      bVar4 = (UOptimusResourceDescription *)*plVar3 == param_1;
    }
    if (bVar4) break;
    plVar3 = plVar3 + 1;
  }
  if ((int)((longlong)plVar3 - (longlong)plVar2 >> 3) == -1) {
    return false;
  }
  bVar4 = FOptimusDataDomain::operator==(&param_1->DataDomain,param_2);
  if (!bVar4) {
    (param_1->DataDomain).Type = param_2->Type;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&(param_1->DataDomain).DimensionNames,&param_2->DimensionNames);
    (param_1->DataDomain).Multiplier = param_2->Multiplier;
    ::FString::operator=(&(param_1->DataDomain).Expression,&param_2->Expression);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&(param_1->DataDomain).LevelNames_DEPRECATED,&param_2->LevelNames_DEPRECATED);
    Notify(this,ResourceTypeChanged,(UObject *)param_1);
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  }
  return true;
}

// SetResourceDataType @ 14e221960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UOptimusDeformer::SetResourceDataType
          (UOptimusDeformer *this,UOptimusResourceDescription *param_1,FOptimusDataTypeRef *param_2,
          bool param_3)

{
  longlong *plVar1;
  int *piVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  UOptimusResourceContainer *pUVar5;
  FOptimusDataType *pFVar6;
  void *pvVar7;
  UOptimusNodePin *this_00;
  longlong lVar8;
  code *pcVar9;
  FOptimusDataTypeRef *pFVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar14;
  FOptimusCompoundAction *this_01;
  UOptimusNode_ResourceAccessorBase *pUVar15;
  TReferenceControllerBase<1> *pTVar16;
  UOptimusNode *pUVar17;
  UClass *pUVar18;
  UOptimusActionStack *this_02;
  byte bVar19;
  FStaticBasicLogRecord *pFVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  UOptimusNodeGraph *this_03;
  ForAnyElementType FVar24;
  uint uVar25;
  uint *puVar26;
  undefined8 *puVar27;
  uint uVar28;
  bool bVar29;
  undefined1 auStackY_298 [32];
  undefined1 local_248;
  undefined1 local_247;
  undefined1 local_246 [2];
  uint local_244;
  TReferenceControllerBase<1> *local_240;
  TReferenceControllerBase<1> *local_238;
  FScriptContainerElement *local_230;
  FOptimusCompoundAction *local_228;
  FOptimusDataTypeRef *local_220;
  UOptimusResourceDescription *local_218;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_210;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_200;
  undefined1 local_1f0 [8];
  int local_1e8;
  undefined8 *local_1e0;
  FScriptContainerElement *local_1d8;
  UOptimusDeformer *local_1d0;
  FString local_1c8;
  longlong *local_1b8;
  int iStack_1b0;
  uint uStack_1ac;
  TBitArray<FDefaultBitArrayAllocator> *local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  int local_198;
  undefined4 uStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  longlong *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  UOptimusNodePin *local_158;
  undefined8 local_150;
  undefined8 local_148;
  UOptimusNodePin *local_140;
  UOptimusNodePin *local_138;
  UOptimusNodePin *pUStack_130;
  TSharedPtr<FOptimusAction,1> local_128;
  TSharedPtr<FOptimusDataType_const_,1> local_118;
  TWeakPtr<FOptimusNodeGraphAction_RemoveLink,1> local_108;
  TWeakPtr<FOptimusResourceAction_SetDataType,1> local_f8;
  undefined1 local_e8 [76];
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  bVar11 = false;
  local_244 = 0;
  local_220 = param_2;
  local_218 = param_1;
  local_1d0 = this;
  if (param_1 == (UOptimusResourceDescription *)0x0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_5723111267007200542>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                        ,0x2e2,"InResourceDesc");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
  }
  else {
    pUVar5 = (this->Resources).field0_0x0.DebugPtr;
    if (pUVar5 == (UOptimusResourceContainer *)0x0) {
      bVar29 = (UOptimusResourceContainer *)param_1->_padding_ == (UOptimusResourceContainer *)0x0;
    }
    else {
      bVar29 = pUVar5 == (UOptimusResourceContainer *)param_1->_padding_;
    }
    if (bVar29) {
      pTVar14 = FOptimusDataTypeRef::Resolve(param_2,&local_118);
      pFVar6 = pTVar14->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_118.SharedReferenceCount.ReferenceController);
      if (pFVar6 != (FOptimusDataType *)0x0) {
        if (((!param_3) && (param_2->TypeName == (param_1->DataType).TypeName)) &&
           (bVar29 = FSoftObjectPath::operator==
                               ((FSoftObjectPath *)&(param_2->TypeObject).SoftObjectPtr.field_0x8,
                                (FSoftObjectPath *)
                                &(param_1->DataType).TypeObject.SoftObjectPtr.field_0x8), bVar29)) {
          pvVar7 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
          if (pvVar7 != (void *)0x0) {
            FMemory::Free(pvVar7);
          }
          return true;
        }
        this_01 = ::operator_new(0x28);
        if (this_01 == (FOptimusCompoundAction *)0x0) {
          this_01 = (FOptimusCompoundAction *)0x0;
          local_228 = (FOptimusCompoundAction *)0x0;
        }
        else {
          local_228 = this_01;
          ::FString::FString(&local_1c8,L"Set Resource Data Type");
          FVar24.Data = local_1c8.Data.AllocatorInstance.Data;
          plVar1 = &this_01->_padding_;
          bVar11 = true;
          this_01->_padding_ = (longlong)&___7FOptimusAction__6B_;
          piVar2 = (int *)((longlong)&this_01->_padding_ + 4);
          *plVar1 = 0;
          *(int *)&this_01->_padding_ = local_1c8.Data.ArrayNum;
          if (local_1c8.Data.ArrayNum == 0) {
            *piVar2 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_1c8.Data.ArrayNum,0,(ForAnyElementType *)plVar1,
                       local_1c8.Data.ArrayNum,piVar2);
            memcpy((void *)*plVar1,FVar24.Data,(longlong)local_1c8.Data.ArrayNum * 2);
          }
          this_01->_padding_ = (longlong)&___7FOptimusCompoundAction__6B_;
          (this_01->SubActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this_01->SubActions).ArrayNum = 0;
          (this_01->SubActions).ArrayMax = 0;
        }
        if ((bVar11) && (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        local_98._0_8_ = 0;
        local_68 = 0xffffffff;
        local_98._8_8_ = 0;
        local_78 = (uint *)0x0;
        local_70 = 0;
        local_6c = 0x80;
        local_64 = 0;
        local_58 = (ForElementType<FSetElementId>)0x0;
        local_50 = 0;
        GetNodesUsingResource(this,&local_200,param_1);
        uVar21 = (ulonglong)local_200.ArrayNum;
        local_244 = local_200.ArrayNum;
        pFVar23 = local_200.AllocatorInstance.Data + uVar21 * 8;
        uVar22 = uVar21;
        FVar24.Data = local_200.AllocatorInstance.Data;
        local_1d8 = pFVar23;
        while( true ) {
          local_230 = FVar24.Data;
          if ((int)uVar21 != (int)uVar22) {
            local_248 = 0;
            `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_248);
          }
          if (FVar24.Data == pFVar23) break;
          pUVar15 = CastChecked<UOptimusNode_ResourceAccessorBase,UOptimusNode>
                              (*(UOptimusNode **)FVar24.Data);
          iVar13 = (int)pUVar15->_padding_;
          puVar27 = (undefined8 *)pUVar15->_padding_;
          if ((iVar13 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
          local_1e0 = puVar27 + iVar13;
          if (puVar27 != local_1e0) {
            do {
              this_00 = (UOptimusNodePin *)*puVar27;
              pTVar16 = ::operator_new(0x48);
              if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)0x0);
                local_240 = (TReferenceControllerBase<1> *)&DAT_00000010;
                local_238 = (TReferenceControllerBase<1> *)0x0;
              }
              else {
                pTVar16->SharedReferenceCount = (atomic<int>)0x1;
                pTVar16->WeakReferenceCount = (atomic<int>)0x1;
                pTVar16->_padding_ =
                     (longlong)
                     &
                     ___7__TIntrusiveReferenceController_UFOptimusNodeAction_SetPinType___00_SharedPointerInternals__6B_
                ;
                local_e8._0_8_ = local_220->TypeName;
                local_e8._8_8_ = *(undefined8 *)&(local_220->TypeObject).SoftObjectPtr;
                FSoftObjectPath::FSoftObjectPath
                          ((FSoftObjectPath *)(local_e8 + 0x10),
                           (FSoftObjectPath *)&(local_220->TypeObject).SoftObjectPtr.field_0x8);
                FOptimusNodeAction_SetPinType::FOptimusNodeAction_SetPinType
                          ((FOptimusNodeAction_SetPinType *)(pTVar16 + 1),this_00,
                           (FOptimusDataTypeRef *)local_e8);
                if ((pTVar16 + 1 == (TReferenceControllerBase<1> *)0x0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InObject != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x246,L""), bVar11)) {
                  pcVar9 = (code *)swi(3);
                  uVar12 = (*pcVar9)();
                  return (bool)uVar12;
                }
                LOCK();
                pTVar16->SharedReferenceCount =
                     (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
                UNLOCK();
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar16);
                LOCK();
                pTVar16->SharedReferenceCount =
                     (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
                UNLOCK();
                local_240 = pTVar16 + 1;
                local_238 = pTVar16;
              }
              pTVar16 = local_238;
              pFVar23 = (this_01->SubActions).AllocatorInstance.Data;
              if (((pFVar23 <= (FScriptContainerElement *)&local_240) &&
                  ((FScriptContainerElement *)&local_240 <
                   pFVar23 + (longlong)(this_01->SubActions).ArrayMax * 0x10)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar9 = (code *)swi(3);
                uVar12 = (*pcVar9)();
                return (bool)uVar12;
              }
              iVar13 = (this_01->SubActions).ArrayNum;
              if (iVar13 == (this_01->SubActions).ArrayMax) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&(this_01->SubActions).AllocatorInstance,
                                    &(this_01->SubActions).ArrayMax);
              }
              (this_01->SubActions).ArrayNum = iVar13 + 1;
              pFVar23 = (this_01->SubActions).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
              *(TReferenceControllerBase<1> **)pFVar23 = local_240;
              *(TReferenceControllerBase<1> **)(pFVar23 + 8) = local_238;
              local_238 = (TReferenceControllerBase<1> *)0x0;
              local_240 = (TReferenceControllerBase<1> *)0x0;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)0x0);
              }
              else {
                LOCK();
                pTVar16->WeakReferenceCount = (atomic<int>)((int)pTVar16->WeakReferenceCount + 1);
                UNLOCK();
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar16);
                LOCK();
                paVar3 = &pTVar16->WeakReferenceCount;
                aVar4 = *paVar3;
                *paVar3 = (atomic<int>)((int)*paVar3 + -1);
                UNLOCK();
                if (aVar4 == (atomic<int>)0x1) {
                  (**(code **)(pTVar16->_padding_ + 8))(pTVar16,1);
                }
              }
              pUVar17 = UOptimusNodePin::GetOwningNode(this_00);
              this_03 = (UOptimusNodeGraph *)pUVar17->_padding_;
              if (this_03 == (UOptimusNodeGraph *)0x0) {
LAB_14e221e60:
                this_03 = (UOptimusNodeGraph *)0x0;
              }
              else {
                pUVar18 = UOptimusNodeGraph::StaticClass();
                iVar13 = (int)pUVar18->_padding_;
                if ((*(int *)(this_03->_padding_ + 0x38) < iVar13) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
                    &pUVar18->_padding_)) goto LAB_14e221e60;
              }
              UOptimusNodeGraph::GetConnectedPins(this_03,&local_210,this_00);
              iVar13 = local_210.ArrayNum;
              uVar22 = (ulonglong)local_210.ArrayNum;
              pFVar23 = local_210.AllocatorInstance.Data + uVar22 * 8;
              FVar24.Data = local_210.AllocatorInstance.Data;
              while( true ) {
                if ((uint)uVar22 != iVar13) {
                  local_247 = 0;
                  `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_247);
                }
                if (FVar24.Data == pFVar23) break;
                if (this_00->Direction == Output) {
                  local_158 = this_00;
                  local_150 = *(undefined8 *)FVar24.Data;
                  TSet<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,DefaultKeyFuncs<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,0>,FDefaultSetAllocator>
                  ::Emplace<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>
                            ((TSet<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,DefaultKeyFuncs<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,0>,FDefaultSetAllocator>
                              *)local_98,(TTuple<UOptimusNodePin_*,UOptimusNodePin_*> *)local_1f0,
                             (bool *)&local_158);
                  uVar22 = (ulonglong)(uint)local_210.ArrayNum;
                  FVar24.Data = FVar24.Data + 8;
                }
                else {
                  local_148 = *(undefined8 *)FVar24.Data;
                  local_140 = this_00;
                  TSet<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,DefaultKeyFuncs<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,0>,FDefaultSetAllocator>
                  ::Emplace<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>
                            ((TSet<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,DefaultKeyFuncs<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,0>,FDefaultSetAllocator>
                              *)local_98,
                             (TTuple<UOptimusNodePin_*,UOptimusNodePin_*> *)(local_1f0 + 4),
                             (bool *)&local_148);
                  uVar22 = (ulonglong)(uint)local_210.ArrayNum;
                  FVar24.Data = FVar24.Data + 8;
                }
              }
              if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_210.AllocatorInstance.Data);
              }
              puVar27 = puVar27 + 1;
              pFVar23 = local_1d8;
            } while (puVar27 != local_1e0);
          }
          uVar21 = (ulonglong)(uint)local_200.ArrayNum;
          FVar24.Data = local_230 + 8;
          uVar22 = (ulonglong)local_244;
          this_01 = local_228;
        }
        if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.AllocatorInstance.Data);
        }
        uVar25 = local_70;
        iStack_1b0 = 0;
        local_198 = 0;
        uStack_1ac = 1;
        uStack_19c = 0;
        if (local_70 != 0) {
          puVar26 = (uint *)(local_98 + 0x10);
          if (local_78 != (uint *)0x0) {
            puVar26 = local_78;
          }
          uVar28 = *puVar26;
          while (uVar28 == 0) {
            iStack_1b0 = iStack_1b0 + 1;
            local_198 = local_198 + 0x20;
            uStack_19c = local_70;
            if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1b0)
            goto LAB_14e221fbf;
            uVar28 = puVar26[iStack_1b0];
          }
          uStack_1ac = -uVar28 & uVar28;
          uVar22 = (ulonglong)uStack_1ac * 2 + 1;
          lVar8 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          local_1e8 = (int)lVar8;
          uStack_19c = local_198 + -1 + local_1e8;
          if ((int)local_70 < (int)uStack_19c) {
            uStack_19c = local_70;
          }
        }
LAB_14e221fbf:
        local_1b8 = (longlong *)local_98;
        uStack_194 = local_9c;
        local_1a8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
        uVar28 = local_70 & 0xffffffe0;
        iStack_190 = local_98._8_4_ - local_64;
        uStack_1a0 = 0xffffffff;
        TStack_180.CurrentBitIndex = uStack_19c;
        TStack_180.UnvisitedBitMask = 0xffffffff;
        TStack_180._padding_ = CONCAT44(uStack_1ac,iStack_1b0);
        iVar13 = (int)local_70 >> 5;
        TStack_180._28_4_ = local_9c;
        TStack_180.BaseBitIndex = local_198;
        uStack_160 = CONCAT44(uStack_18c,iStack_190);
        bVar19 = (byte)local_70;
        local_188 = local_1b8;
        TStack_180.Array = local_1a8;
        if (((int)local_70 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        if (uVar25 != local_70) {
          puVar26 = (uint *)(local_98 + 0x10);
          if (local_78 != (uint *)0x0) {
            puVar26 = local_78;
          }
          uVar25 = -1 << (bVar19 & 0x1f) & puVar26[iVar13];
          while (uVar25 == 0) {
            iVar13 = iVar13 + 1;
            uVar28 = uVar28 + 0x20;
            uVar25 = local_70;
            if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < iVar13)
            goto LAB_14e2220e0;
            uVar25 = puVar26[iVar13];
          }
          uVar22 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
          lVar8 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          uVar25 = (uVar28 - 1) + (int)lVar8;
          if ((int)local_70 < (int)uVar25) {
            uVar25 = local_70;
          }
        }
LAB_14e2220e0:
        while( true ) {
          plVar1 = local_188;
          if ((int)local_188[1] - *(int *)((longlong)local_188 + 0x34) != (int)uStack_160) {
            `TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_246);
          }
          pFVar10 = local_220;
          if (((TStack_180.CurrentBitIndex == uVar25) &&
              (TStack_180.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
             (plVar1 == (longlong *)local_98)) break;
          puVar27 = (undefined8 *)(*plVar1 + (longlong)TStack_180.CurrentBitIndex * 0x18);
          local_138 = (UOptimusNodePin *)*puVar27;
          pUStack_130 = (UOptimusNodePin *)puVar27[1];
          FOptimusCompoundAction::
          AddSubAction<FOptimusNodeGraphAction_RemoveLink,UOptimusNodePin_*_&,UOptimusNodePin_*_&>
                    (this_01,&local_108,&local_138,&pUStack_130);
          if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
             ) {
            LOCK();
            paVar3 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
            aVar4 = *paVar3;
            *paVar3 = (atomic<int>)((int)*paVar3 + -1);
            UNLOCK();
            if (aVar4 == (atomic<int>)0x1) {
              (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                        (local_108.WeakReferenceCount.ReferenceController,1);
            }
          }
          TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
        }
        if ((((local_218->DataType).TypeName != local_220->TypeName) ||
            (bVar11 = FSoftObjectPath::operator==
                                ((FSoftObjectPath *)
                                 &(local_218->DataType).TypeObject.SoftObjectPtr.field_0x8,
                                 (FSoftObjectPath *)&(local_220->TypeObject).SoftObjectPtr.field_0x8
                                ), !bVar11)) &&
           (FOptimusCompoundAction::
            AddSubAction<FOptimusResourceAction_SetDataType,UOptimusResourceDescription_*_&,FOptimusDataTypeRef_&>
                      (this_01,&local_f8,&local_218,pFVar10),
           local_f8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
          LOCK();
          paVar3 = &(local_f8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar4 = *paVar3;
          *paVar3 = (atomic<int>)((int)*paVar3 + -1);
          UNLOCK();
          if (aVar4 == (atomic<int>)0x1) {
            (**(code **)((local_f8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_f8.WeakReferenceCount.ReferenceController,1);
          }
        }
        this_02 = GetActionStack(local_1d0);
        local_128.Object = (FOptimusAction *)this_01;
        local_128.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
        if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)0x1;
          (local_128.SharedReferenceCount.ReferenceController)->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
          ;
          (local_128.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)0x1;
          local_128.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)this_01;
        }
        bVar11 = UOptimusActionStack::RunAction(this_02,&local_128);
        local_50 = 0;
        if (local_58 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_58);
        }
        TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_98);
        pvVar7 = *(void **)&(pFVar10->TypeObject).SoftObjectPtr.field_0x18;
        if (pvVar7 == (void *)0x0) {
          return bVar11;
        }
        FMemory::Free(pvVar7);
        return bVar11;
      }
      if ((byte)LogOptimusCore._0_1_ < 2) goto LAB_14e221a4f;
      pFVar20 = &::LOG_Static;
    }
    else {
      if ((byte)LogOptimusCore._0_1_ < 2) goto LAB_14e221a4f;
      pFVar20 = &::LOG_Static;
    }
    UE::Logging::Private::BasicLog<2>(pFVar20,(FLogCategoryBase *)&LogOptimusCore);
  }
LAB_14e221a4f:
  pvVar7 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  return false;
}

// SetResourceDataTypeDirect @ 14e2222a0

bool __thiscall
UOptimusDeformer::SetResourceDataTypeDirect
          (UOptimusDeformer *this,UOptimusResourceDescription *param_1,FOptimusDataTypeRef *param_2)

{
  TObjectPtr<UOptimusResourceContainer>_u_0 TVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  bool bVar5;
  
  TVar1 = (this->Resources).field0_0x0;
  plVar2 = *(longlong **)((longlong)TVar1 + 0x28);
  plVar4 = plVar2;
  do {
    if (plVar4 == plVar2 + ((TVar1.DebugPtr)->Descriptions).ArrayNum) {
LAB_14e2222f3:
      pvVar3 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      return false;
    }
    if ((UOptimusResourceDescription *)*plVar4 == (UOptimusResourceDescription *)0x0) {
      bVar5 = param_1 == (UOptimusResourceDescription *)0x0;
    }
    else {
      bVar5 = (UOptimusResourceDescription *)*plVar4 == param_1;
    }
    if (bVar5) {
      if ((int)((longlong)plVar4 - (longlong)plVar2 >> 3) != -1) {
        if (((param_1->DataType).TypeName != param_2->TypeName) ||
           (bVar5 = FSoftObjectPath::operator==
                              ((FSoftObjectPath *)
                               &(param_1->DataType).TypeObject.SoftObjectPtr.field_0x8,
                               (FSoftObjectPath *)&(param_2->TypeObject).SoftObjectPtr.field_0x8),
           !bVar5)) {
          (param_1->DataType).TypeName = param_2->TypeName;
          TPersistentObjectPtr<FSoftObjectPath>::operator=
                    ((TPersistentObjectPtr<FSoftObjectPath> *)&(param_1->DataType).TypeObject,
                     (TPersistentObjectPtr<FSoftObjectPath> *)&param_2->TypeObject);
          Notify(this,ResourceTypeChanged,(UObject *)param_1);
          UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
        }
        pvVar3 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        return true;
      }
      goto LAB_14e2222f3;
    }
    plVar4 = plVar4 + 1;
  } while( true );
}

// SetStatusFromDiagnostic @ 14e2228c0

void __thiscall
UOptimusDeformer::SetStatusFromDiagnostic(UOptimusDeformer *this,EOptimusDiagnosticLevel param_1)

{
  if (param_1 == Error) {
    this->Status = HasErrors;
    return;
  }
  if ((param_1 == Warning) && (this->Status == Compiled)) {
    this->Status = CompiledWithWarnings;
  }
  return;
}

// SetVariableDataType @ 14e223170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UOptimusDeformer::SetVariableDataType
          (UOptimusDeformer *this,UOptimusVariableDescription *param_1,FOptimusDataTypeRef *param_2,
          bool param_3)

{
  int *piVar1;
  atomic<int> *paVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  atomic<int> aVar5;
  UOptimusVariableContainer *pUVar6;
  FOptimusDataType *pFVar7;
  FScriptContainerElement *pFVar8;
  UOptimusNodePin *this_00;
  longlong lVar9;
  code *pcVar10;
  FOptimusDataTypeRef *pFVar11;
  UOptimusVariableDescription *pUVar12;
  bool bVar13;
  undefined1 uVar14;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar15;
  FOptimusCompoundAction *this_01;
  UClass *pUVar16;
  UOptimusNode *pUVar17;
  UOptimusActionStack *this_02;
  FString *pFVar18;
  byte bVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  void *pvVar22;
  int iVar23;
  UOptimusNodeGraph *this_03;
  ForAnyElementType FVar24;
  UOptimusDeformer *this_04;
  uint uVar25;
  uint uVar26;
  wchar_t *pwVar27;
  uint *puVar28;
  wchar_t *pwVar29;
  ForAnyElementType FVar30;
  bool bVar31;
  undefined1 auStackY_278 [32];
  undefined1 local_238;
  undefined1 local_237;
  undefined1 local_236 [2];
  uint local_234;
  UOptimusDeformer *local_230;
  FOptimusDataTypeRef *local_228;
  UOptimusVariableDescription *local_220;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_218;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_208;
  undefined1 local_1f8 [8];
  int local_1f0;
  FScriptContainerElement *local_1e8;
  FString local_1e0;
  longlong *local_1d0;
  int iStack_1c8;
  uint uStack_1c4;
  TBitArray<FDefaultBitArrayAllocator> *local_1c0;
  undefined4 uStack_1b8;
  uint uStack_1b4;
  int local_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  longlong *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_198;
  undefined8 uStack_178;
  UOptimusNodePin *local_170;
  undefined8 local_168;
  undefined8 local_160;
  UOptimusNodePin *local_158;
  UOptimusNodePin *local_150;
  UOptimusNodePin *pUStack_148;
  TSharedPtr<FOptimusAction,1> local_140;
  TSharedPtr<FOptimusDataType_const_,1> local_130;
  TWeakPtr<FOptimusNodeAction_SetPinType,1> local_120;
  TWeakPtr<FOptimusNodeGraphAction_RemoveLink,1> local_110;
  TWeakPtr<FOptimusVariableAction_SetDataType,1> local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0 [2];
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  bVar13 = false;
  local_234 = 0;
  local_230 = this;
  local_228 = param_2;
  local_220 = param_1;
  if (param_1 == (UOptimusVariableDescription *)0x0) {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_5723111267007200912>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                        ,0x170,"InVariableDesc");
    if (bVar13) {
      pcVar10 = (code *)swi(3);
      uVar14 = (*pcVar10)();
      return (bool)uVar14;
    }
  }
  else {
    pUVar6 = (this->Variables).field0_0x0.DebugPtr;
    if (pUVar6 == (UOptimusVariableContainer *)0x0) {
      bVar31 = (UOptimusVariableContainer *)param_1->_padding_ == (UOptimusVariableContainer *)0x0;
    }
    else {
      bVar31 = pUVar6 == (UOptimusVariableContainer *)param_1->_padding_;
    }
    if (bVar31) {
      pTVar15 = FOptimusDataTypeRef::Resolve(param_2,&local_130);
      pFVar7 = pTVar15->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_130.SharedReferenceCount.ReferenceController);
      if (pFVar7 != (FOptimusDataType *)0x0) {
        if (((param_3) || (param_2->TypeName != (param_1->DataType).TypeName)) ||
           (bVar31 = FSoftObjectPath::operator==
                               ((FSoftObjectPath *)&(param_2->TypeObject).SoftObjectPtr.field_0x8,
                                (FSoftObjectPath *)
                                &(param_1->DataType).TypeObject.SoftObjectPtr.field_0x8), !bVar31))
        {
          this_01 = ::operator_new(0x28);
          if (this_01 == (FOptimusCompoundAction *)0x0) {
            this_01 = (FOptimusCompoundAction *)0x0;
          }
          else {
            ::FString::FString(&local_1e0,L"Set Variable Type");
            FVar30.Data = local_1e0.Data.AllocatorInstance.Data;
            plVar4 = &this_01->_padding_;
            bVar13 = true;
            this_01->_padding_ = (longlong)&___7FOptimusAction__6B_;
            piVar1 = (int *)((longlong)&this_01->_padding_ + 4);
            *plVar4 = 0;
            *(int *)&this_01->_padding_ = local_1e0.Data.ArrayNum;
            if (local_1e0.Data.ArrayNum == 0) {
              *piVar1 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_1e0.Data.ArrayNum,0,(ForAnyElementType *)plVar4,
                         local_1e0.Data.ArrayNum,piVar1);
              memcpy((void *)*plVar4,FVar30.Data,(longlong)local_1e0.Data.ArrayNum * 2);
            }
            this_01->_padding_ = (longlong)&___7FOptimusCompoundAction__6B_;
            (this_01->SubActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (this_01->SubActions).ArrayNum = 0;
            (this_01->SubActions).ArrayMax = 0;
          }
          if ((bVar13) && (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
          local_98._0_8_ = 0;
          local_68 = 0xffffffff;
          local_98._8_8_ = 0;
          local_78 = (uint *)0x0;
          local_70 = 0;
          local_6c = 0x80;
          local_64 = 0;
          local_58 = (ForElementType<FSetElementId>)0x0;
          local_50 = 0;
          GetNodesUsingVariable(this,&local_208,param_1);
          uVar20 = (ulonglong)local_208.ArrayNum;
          pwVar29 = L"";
          local_234 = local_208.ArrayNum;
          local_1e8 = local_208.AllocatorInstance.Data + uVar20 * 8;
          uVar21 = uVar20;
          FVar30.Data = local_208.AllocatorInstance.Data;
          while( true ) {
            pFVar8 = local_1e8;
            if ((int)uVar20 != (int)uVar21) {
              local_238 = 0;
              `TCheckedPointerIterator<UOptimusNode_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_238);
            }
            if (FVar30.Data == pFVar8) break;
            pUVar17 = *(UOptimusNode **)FVar30.Data;
            if (pUVar17 == (UOptimusNode *)0x0) {
              pFVar18 = GetTypeName<UOptimusNode_GetVariable>(local_d0);
              if ((pFVar18->Data).ArrayNum != 0) {
                pwVar29 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(L"nullptr",pwVar29);
            }
            pUVar16 = UOptimusNode_GetVariable::StaticClass();
            iVar23 = (int)pUVar16->_padding_;
            if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar23) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar23 * 8) !=
                &pUVar16->_padding_)) {
              pFVar18 = GetTypeName<UOptimusNode_GetVariable>(&local_f0);
              if ((pFVar18->Data).ArrayNum == 0) {
                pwVar27 = L"";
              }
              else {
                pwVar27 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
              }
              pFVar18 = GetFullNameForCastLogError<UOptimusNode>(&local_e0,pUVar17);
              if ((pFVar18->Data).ArrayNum != 0) {
                pwVar29 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(pwVar29,pwVar27);
            }
            iVar23 = (pUVar17->Pins).ArrayNum;
            if (iVar23 < 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L"");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                uVar14 = (*pcVar10)();
                return (bool)uVar14;
              }
LAB_14e223473:
              bVar13 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_5723111267007200884>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformer.cpp"
                                  ,0x18c,"VariableNode->GetPins().Num() == 1");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                uVar14 = (*pcVar10)();
                return (bool)uVar14;
              }
            }
            else {
              if (iVar23 != 1) goto LAB_14e223473;
              iVar23 = (pUVar17->Pins).ArrayNum;
              pFVar8 = (pUVar17->Pins).AllocatorInstance.Data;
              if (iVar23 < 0) {
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L"");
                if (bVar13) {
                  pcVar10 = (code *)swi(3);
                  uVar14 = (*pcVar10)();
                  return (bool)uVar14;
                }
LAB_14e2234e4:
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar13) {
                  pcVar10 = (code *)swi(3);
                  uVar14 = (*pcVar10)();
                  return (bool)uVar14;
                }
              }
              else if (iVar23 < 1) goto LAB_14e2234e4;
              this_00 = *(UOptimusNodePin **)pFVar8;
              pFVar8 = (pUVar17->Pins).AllocatorInstance.Data;
              iVar23 = (pUVar17->Pins).ArrayNum;
              if (iVar23 < 0) {
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L"");
                if (bVar13) {
                  pcVar10 = (code *)swi(3);
                  uVar14 = (*pcVar10)();
                  return (bool)uVar14;
                }
LAB_14e22354d:
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar13) {
                  pcVar10 = (code *)swi(3);
                  uVar14 = (*pcVar10)();
                  return (bool)uVar14;
                }
              }
              else if (iVar23 < 1) goto LAB_14e22354d;
              FOptimusCompoundAction::
              AddSubAction<FOptimusNodeAction_SetPinType,UOptimusNodePin_*_const_&,FOptimusDataTypeRef_&>
                        (this_01,&local_120,(UOptimusNodePin **)pFVar8,local_228);
              if (local_120.WeakReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                paVar2 = &(local_120.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
                aVar5 = *paVar2;
                *paVar2 = (atomic<int>)((int)*paVar2 + -1);
                UNLOCK();
                if (aVar5 == (atomic<int>)0x1) {
                  (**(code **)((local_120.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                            (local_120.WeakReferenceCount.ReferenceController,1);
                }
              }
              pUVar17 = UOptimusNodePin::GetOwningNode(this_00);
              this_03 = (UOptimusNodeGraph *)pUVar17->_padding_;
              if (this_03 == (UOptimusNodeGraph *)0x0) {
LAB_14e2235ea:
                this_03 = (UOptimusNodeGraph *)0x0;
              }
              else {
                pUVar16 = UOptimusNodeGraph::StaticClass();
                iVar23 = (int)pUVar16->_padding_;
                if ((*(int *)(this_03->_padding_ + 0x38) < iVar23) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar23 * 8) !=
                    &pUVar16->_padding_)) goto LAB_14e2235ea;
              }
              UOptimusNodeGraph::GetConnectedPins(this_03,&local_218,this_00);
              iVar23 = local_218.ArrayNum;
              uVar21 = (ulonglong)local_218.ArrayNum;
              pFVar8 = local_218.AllocatorInstance.Data + uVar21 * 8;
              FVar24.Data = local_218.AllocatorInstance.Data;
              while( true ) {
                if ((uint)uVar21 != iVar23) {
                  local_237 = 0;
                  `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_237);
                }
                if (FVar24.Data == pFVar8) break;
                if (this_00->Direction == Output) {
                  local_170 = this_00;
                  local_168 = *(undefined8 *)FVar24.Data;
                  TSet<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,DefaultKeyFuncs<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,0>,FDefaultSetAllocator>
                  ::Emplace<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>
                            ((TSet<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,DefaultKeyFuncs<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,0>,FDefaultSetAllocator>
                              *)local_98,(TTuple<UOptimusNodePin_*,UOptimusNodePin_*> *)local_1f8,
                             (bool *)&local_170);
                  uVar21 = (ulonglong)(uint)local_218.ArrayNum;
                  FVar24.Data = FVar24.Data + 8;
                }
                else {
                  local_160 = *(undefined8 *)FVar24.Data;
                  local_158 = this_00;
                  TSet<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,DefaultKeyFuncs<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,0>,FDefaultSetAllocator>
                  ::Emplace<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>
                            ((TSet<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,DefaultKeyFuncs<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,0>,FDefaultSetAllocator>
                              *)local_98,
                             (TTuple<UOptimusNodePin_*,UOptimusNodePin_*> *)(local_1f8 + 4),
                             (bool *)&local_160);
                  uVar21 = (ulonglong)(uint)local_218.ArrayNum;
                  FVar24.Data = FVar24.Data + 8;
                }
              }
              if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_218.AllocatorInstance.Data);
              }
            }
            uVar20 = (ulonglong)(uint)local_208.ArrayNum;
            FVar30.Data = FVar30.Data + 8;
            uVar21 = (ulonglong)local_234;
          }
          if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.AllocatorInstance.Data);
          }
          uVar26 = local_70;
          iStack_1c8 = 0;
          local_1b0 = 0;
          uStack_1c4 = 1;
          uStack_1b4 = 0;
          if (local_70 != 0) {
            puVar28 = (uint *)(local_98 + 0x10);
            if (local_78 != (uint *)0x0) {
              puVar28 = local_78;
            }
            uVar25 = *puVar28;
            while (uVar25 == 0) {
              iStack_1c8 = iStack_1c8 + 1;
              local_1b0 = local_1b0 + 0x20;
              uStack_1b4 = local_70;
              if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1c8)
              goto LAB_14e22373f;
              uVar25 = puVar28[iStack_1c8];
            }
            uStack_1c4 = -uVar25 & uVar25;
            uVar21 = (ulonglong)uStack_1c4 * 2 + 1;
            lVar9 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            local_1f0 = (int)lVar9;
            uStack_1b4 = local_1b0 + -1 + local_1f0;
            if ((int)local_70 < (int)uStack_1b4) {
              uStack_1b4 = local_70;
            }
          }
LAB_14e22373f:
          local_1d0 = (longlong *)local_98;
          uStack_1ac = local_a4;
          local_1c0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
          uVar25 = local_70 & 0xffffffe0;
          iStack_1a8 = local_98._8_4_ - local_64;
          uStack_1b8 = 0xffffffff;
          TStack_198.CurrentBitIndex = uStack_1b4;
          TStack_198.UnvisitedBitMask = 0xffffffff;
          TStack_198._padding_ = CONCAT44(uStack_1c4,iStack_1c8);
          iVar23 = (int)local_70 >> 5;
          TStack_198._28_4_ = local_a4;
          TStack_198.BaseBitIndex = local_1b0;
          uStack_178 = CONCAT44(uStack_1a4,iStack_1a8);
          bVar19 = (byte)local_70;
          local_1a0 = local_1d0;
          TStack_198.Array = local_1c0;
          if (((int)local_70 < 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar13)) {
            pcVar10 = (code *)swi(3);
            uVar14 = (*pcVar10)();
            return (bool)uVar14;
          }
          if (uVar26 != local_70) {
            puVar28 = (uint *)(local_98 + 0x10);
            if (local_78 != (uint *)0x0) {
              puVar28 = local_78;
            }
            uVar26 = -1 << (bVar19 & 0x1f) & puVar28[iVar23];
            while (uVar26 == 0) {
              iVar23 = iVar23 + 1;
              uVar25 = uVar25 + 0x20;
              uVar26 = local_70;
              if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < iVar23)
              goto LAB_14e223850;
              uVar26 = puVar28[iVar23];
            }
            uVar21 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
            lVar9 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            uVar26 = (uVar25 - 1) + (int)lVar9;
            if ((int)local_70 < (int)uVar26) {
              uVar26 = local_70;
            }
          }
LAB_14e223850:
          while( true ) {
            plVar4 = local_1a0;
            if ((int)local_1a0[1] - *(int *)((longlong)local_1a0 + 0x34) != (int)uStack_178) {
              `TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_236);
            }
            pUVar12 = local_220;
            pFVar11 = local_228;
            if (((TStack_198.CurrentBitIndex == uVar26) &&
                (TStack_198.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
               (plVar4 == (longlong *)local_98)) break;
            puVar3 = (undefined8 *)(*plVar4 + (longlong)TStack_198.CurrentBitIndex * 0x18);
            local_150 = (UOptimusNodePin *)*puVar3;
            pUStack_148 = (UOptimusNodePin *)puVar3[1];
            FOptimusCompoundAction::
            AddSubAction<FOptimusNodeGraphAction_RemoveLink,UOptimusNodePin_*_&,UOptimusNodePin_*_&>
                      (this_01,&local_110,&local_150,&pUStack_148);
            if (local_110.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar2 = &(local_110.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
              aVar5 = *paVar2;
              *paVar2 = (atomic<int>)((int)*paVar2 + -1);
              UNLOCK();
              if (aVar5 == (atomic<int>)0x1) {
                (**(code **)((local_110.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                          (local_110.WeakReferenceCount.ReferenceController,1);
              }
            }
            TStack_198.UnvisitedBitMask = TStack_198.UnvisitedBitMask & ~TStack_198._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_198);
          }
          if (((local_220->DataType).TypeName == local_228->TypeName) &&
             (bVar13 = FSoftObjectPath::operator==
                                 ((FSoftObjectPath *)
                                  &(local_220->DataType).TypeObject.SoftObjectPtr.field_0x8,
                                  (FSoftObjectPath *)
                                  &(local_228->TypeObject).SoftObjectPtr.field_0x8),
             this_04 = local_230, bVar13)) {
            Notify(local_230,VariableTypeChanged,(UObject *)pUVar12);
          }
          else {
            FOptimusCompoundAction::
            AddSubAction<FOptimusVariableAction_SetDataType,UOptimusVariableDescription_*_&,FOptimusDataTypeRef_&>
                      (this_01,&local_100,&local_220,pFVar11);
            this_04 = local_230;
            if (local_100.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar2 = &(local_100.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
              aVar5 = *paVar2;
              *paVar2 = (atomic<int>)((int)*paVar2 + -1);
              UNLOCK();
              if (aVar5 == (atomic<int>)0x1) {
                (**(code **)((local_100.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                          (local_100.WeakReferenceCount.ReferenceController,1);
                this_04 = local_230;
              }
            }
          }
          this_02 = GetActionStack(this_04);
          local_140.Object = (FOptimusAction *)this_01;
          local_140.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
          if (local_140.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            (local_140.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)0x1;
            (local_140.SharedReferenceCount.ReferenceController)->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
            ;
            (local_140.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                 (atomic<int>)0x1;
            local_140.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)this_01;
          }
          bVar13 = UOptimusActionStack::RunAction(this_02,&local_140);
          local_50 = 0;
          if (!bVar13) {
            if (local_58 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_58);
            }
            TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_98);
            pvVar22 = *(void **)&(pFVar11->TypeObject).SoftObjectPtr.field_0x18;
            goto LAB_14e2239df;
          }
          if (local_58 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_58);
          }
          TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_98);
          pvVar22 = *(void **)&(pFVar11->TypeObject).SoftObjectPtr.field_0x18;
        }
        else {
          pvVar22 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
        }
        if (pvVar22 != (void *)0x0) {
          FMemory::Free(pvVar22);
        }
        return true;
      }
      if (1 < (byte)LogOptimusCore._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
        pvVar22 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
        goto LAB_14e2239df;
      }
    }
    else if (1 < (byte)LogOptimusCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
      pvVar22 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
      goto LAB_14e2239df;
    }
  }
  pvVar22 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
LAB_14e2239df:
  if (pvVar22 != (void *)0x0) {
    FMemory::Free(pvVar22);
  }
  return false;
}

// SetVariableDataTypeDirect @ 14e223ab0

bool __thiscall
UOptimusDeformer::SetVariableDataTypeDirect
          (UOptimusDeformer *this,UOptimusVariableDescription *param_1,FOptimusDataTypeRef *param_2)

{
  TObjectPtr<UOptimusVariableContainer>_u_0 TVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 local_38 [48];
  
  TVar1 = (this->Variables).field0_0x0;
  plVar2 = *(longlong **)((longlong)TVar1 + 0x28);
  plVar4 = plVar2;
  do {
    if (plVar4 == plVar2 + ((TVar1.DebugPtr)->Descriptions).ArrayNum) {
LAB_14e223b03:
      pvVar3 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      return false;
    }
    if ((UOptimusVariableDescription *)*plVar4 == (UOptimusVariableDescription *)0x0) {
      bVar5 = param_1 == (UOptimusVariableDescription *)0x0;
    }
    else {
      bVar5 = (UOptimusVariableDescription *)*plVar4 == param_1;
    }
    if (bVar5) {
      if ((int)((longlong)plVar4 - (longlong)plVar2 >> 3) != -1) {
        if (((param_1->DataType).TypeName != param_2->TypeName) ||
           (bVar5 = FSoftObjectPath::operator==
                              ((FSoftObjectPath *)
                               &(param_1->DataType).TypeObject.SoftObjectPtr.field_0x8,
                               (FSoftObjectPath *)&(param_2->TypeObject).SoftObjectPtr.field_0x8),
           !bVar5)) {
          local_38._0_8_ = param_2->TypeName;
          local_38._8_8_ = *(undefined8 *)&(param_2->TypeObject).SoftObjectPtr;
          FSoftObjectPath::FSoftObjectPath
                    ((FSoftObjectPath *)(local_38 + 0x10),
                     (FSoftObjectPath *)&(param_2->TypeObject).SoftObjectPtr.field_0x8);
          UOptimusVariableDescription::SetDataType(param_1,(FOptimusDataTypeRef *)local_38);
          Notify(this,VariableTypeChanged,(UObject *)param_1);
          UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
        }
        pvVar3 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        return true;
      }
      goto LAB_14e223b03;
    }
    plVar4 = plVar4 + 1;
  } while( true );
}

// StaticRegisterNativesUOptimusDeformer @ 14e2258e0

void __cdecl UOptimusDeformer::StaticRegisterNativesUOptimusDeformer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UOptimusDeformer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateFunctionReferenceNodeDisplayName @ 14e22c320

void __thiscall
UOptimusDeformer::UpdateFunctionReferenceNodeDisplayName
          (UOptimusDeformer *this,FOptimusFunctionGraphIdentifier *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UOptimusNode *this_00;
  UClass *pUVar3;
  FText *pFVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  pUVar3 = UOptimusNode_FunctionReference::StaticClass();
  GetAllNodesOfClass(this,&local_28,pUVar3);
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
  FVar7.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (FVar7.Data == pFVar1) {
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return;
    }
    this_00 = *(UOptimusNode **)FVar7.Data;
    if (this_00 == (UOptimusNode *)0x0) break;
    pUVar3 = UOptimusNode_FunctionReference::StaticClass();
    iVar2 = (int)pUVar3->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar3->_padding_)) {
      pFVar5 = GetTypeName<UOptimusNode_FunctionReference>(&local_18);
      pwVar8 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UOptimusNode>((FString *)&local_28,this_00);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar8,pwVar6);
    }
    if (((UOptimusDeformer *)this_00[1]._padding_ == (param_1->Asset).field0_0x0.DebugPtr) &&
       (((*(uint *)&this_00[1].field_0x2c == (param_1->Guid).D &&
         *(uint *)&this_00[1].bSendNotifications == (param_1->Guid).C) &&
        *(uint *)((longlong)&this_00[1]._padding_ + 4) == (param_1->Guid).B) &&
        (uint)this_00[1]._padding_ == (param_1->Guid).A)) {
      pFVar4 = (FText *)(**(code **)(this_00->_padding_ + 0x2d8))(this_00,&local_18);
      UOptimusNode::SetDisplayName(this_00,pFVar4);
    }
    FVar7.Data = FVar7.Data + 8;
  }
  pFVar5 = GetTypeName<UOptimusNode_FunctionReference>(&local_18);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar8);
}

// __VTableCtorCaller @ 14e2388c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UOptimusDeformer::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UMeshDeformer::UMeshDeformer((UMeshDeformer *)pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined ***)pUVar1 = &_vftable__for__UMeshDeformer__;
    *(undefined ***)(pUVar1 + 1) = &_vftable__for__IInterface_PreviewMeshProvider__;
    *(undefined ***)&pUVar1[1].field_0x8 = &_vftable__for__IOptimusPathResolver__;
    *(undefined ***)&pUVar1[1].field_0x10 = &_vftable__for__IOptimusNodeGraphCollectionOwner__;
    *(undefined ***)&pUVar1[1].field_0x18 = &_vftable__for__IOptimusNodeFunctionLibraryOwner__;
    *(undefined ***)&pUVar1[1].field_0x20 = &_vftable__for__ISkeletalMeshHalfEdgeBufferAccessor__;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined4 *)&pUVar1[3].field_0x18 = 0;
    *(undefined4 *)&pUVar1[3].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[3].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0x24 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined4 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined4 *)&pUVar1[5].field_0x18 = 0;
    *(undefined4 *)&pUVar1[5].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[5].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[5].field_0x24 = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined4 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined4 *)&pUVar1[6].field_0x20 = 2;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    *(undefined8 *)&pUVar1[8].field_0x8 = 0;
    *(undefined8 *)&pUVar1[8].field_0x10 = 0;
    *(undefined8 *)&pUVar1[8].field_0x18 = 2;
    *(undefined8 *)&pUVar1[8].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 9) = 0;
    *(undefined8 *)&pUVar1[9].field_0x8 = 0;
    *(undefined8 *)&pUVar1[9].field_0x10 = 2;
    *(undefined8 *)&pUVar1[9].field_0x18 = 0;
    *(undefined8 *)&pUVar1[9].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 10) = 0;
    *(undefined8 *)&pUVar1[10].field_0x8 = 2;
    *(undefined8 *)&pUVar1[10].field_0x10 = 0;
    *(undefined8 *)&pUVar1[10].field_0x18 = 0;
    *(undefined8 *)&pUVar1[10].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xb) = 2;
    *(undefined8 *)&pUVar1[0xb].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x20 = 2;
    *(undefined8 *)(pUVar1 + 0xc) = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x18 = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// _getUObject @ 14e238d50

UObject * __thiscall UOptimusDeformer::_getUObject(UOptimusDeformer *this)

{
  return (UObject *)&this[-1].ConstantValueUpdateDelegate.field_0x18;
}

// _getUObject`adjustor{8}' @ 14e238d5c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusDeformer::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall UOptimusDeformer::_getUObject_adjustor_8__(UOptimusDeformer *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusDeformer *)&this[-1].SetAllInstancesCanbeActiveDelegate.field_0x18);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{16}' @ 14e238d6c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusDeformer::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall UOptimusDeformer::_getUObject_adjustor_16__(UOptimusDeformer *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusDeformer *)&this[-1].SetAllInstancesCanbeActiveDelegate.field_0x10);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{24}' @ 14e238d7c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusDeformer::_getUObject`adjustor{24}' (void)const __ptr64 */

UObject * __thiscall UOptimusDeformer::_getUObject_adjustor_24__(UOptimusDeformer *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusDeformer *)&this[-1].SetAllInstancesCanbeActiveDelegate.field_0x8);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{32}' @ 14e238d8c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusDeformer::_getUObject`adjustor{32}' (void)const __ptr64 */

UObject * __thiscall UOptimusDeformer::_getUObject_adjustor_32__(UOptimusDeformer *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusDeformer *)&this[-1].SetAllInstancesCanbeActiveDelegate);
  return (UObject *)pUVar1;
}

// execGetComponentBindings @ 14e23b3a0

void __cdecl
UOptimusDeformer::execGetComponentBindings(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(*(longlong *)&param_1[7].field_0x10 + 0x28);
  if (param_3 != puVar2) {
    iVar1 = *(int *)(*(longlong *)&param_1[7].field_0x10 + 0x30);
    _Src = (void *)*puVar2;
    *(int *)((longlong)param_3 + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
      *(int *)((longlong)param_3 + 0xc) = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,*(int *)((longlong)param_3 + 0xc),param_3,iVar1,
               (int *)((longlong)param_3 + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)param_3,_Src,(longlong)iVar1 << 3);
    }
  }
  return;
}

// execGetPrimaryComponentBinding @ 14e23b6c0

void __cdecl
UOptimusDeformer::execGetPrimaryComponentBinding(UObject *param_1,FFrame *param_2,void *param_3)

{
  UOptimusComponentSourceBinding *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetPrimaryComponentBinding((UOptimusDeformer *)param_1);
  *(UOptimusComponentSourceBinding **)param_3 = pUVar1;
  return;
}

// execGetResources @ 14e23b700

void __cdecl UOptimusDeformer::execGetResources(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(*(longlong *)&param_1[7].field_0x20 + 0x28);
  if (param_3 != puVar2) {
    iVar1 = *(int *)(*(longlong *)&param_1[7].field_0x20 + 0x30);
    _Src = (void *)*puVar2;
    *(int *)((longlong)param_3 + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
      *(int *)((longlong)param_3 + 0xc) = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,*(int *)((longlong)param_3 + 0xc),param_3,iVar1,
               (int *)((longlong)param_3 + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)param_3,_Src,(longlong)iVar1 << 3);
    }
  }
  return;
}

// execGetVariables @ 14e23b7b0

void __cdecl UOptimusDeformer::execGetVariables(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(*(longlong *)&param_1[7].field_0x18 + 0x28);
  if (param_3 != puVar2) {
    iVar1 = *(int *)(*(longlong *)&param_1[7].field_0x18 + 0x30);
    _Src = (void *)*puVar2;
    *(int *)((longlong)param_3 + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
      *(int *)((longlong)param_3 + 0xc) = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,*(int *)((longlong)param_3 + 0xc),param_3,iVar1,
               (int *)((longlong)param_3 + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)param_3,_Src,(longlong)iVar1 << 3);
    }
  }
  return;
}

