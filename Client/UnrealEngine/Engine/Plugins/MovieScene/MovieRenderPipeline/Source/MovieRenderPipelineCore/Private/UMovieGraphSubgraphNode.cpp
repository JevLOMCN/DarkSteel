// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 15

// StaticClass @ 14dcf7500

UClass * __cdecl UMovieGraphSubgraphNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphSubgraphNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphSubgraphNode",
               &Z_Registration_Info_UClass_UMovieGraphSubgraphNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphSubgraphNode,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphSubgraphNode>,
               InternalVTableHelperCtorCaller<UMovieGraphSubgraphNode>,local_res8,
               UMovieGraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphSubgraphNode.InnerSingleton;
}

// UMovieGraphSubgraphNode @ 14dd0b980

UMovieGraphSubgraphNode * __thiscall
UMovieGraphSubgraphNode::UMovieGraphSubgraphNode
          (UMovieGraphSubgraphNode *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UMovieGraphNode::UMovieGraphNode((UMovieGraphNode *)this,param_1);
  this_00 = &(this->SubgraphAsset).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UMovieGraphSubgraphNode__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SubgraphAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SubgraphAsset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SubgraphAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SubgraphAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// UMovieGraphSubgraphNode @ 14dd0b9e0

UMovieGraphSubgraphNode * __thiscall
UMovieGraphSubgraphNode::UMovieGraphSubgraphNode(UMovieGraphSubgraphNode *this)

{
  undefined1 *this_00;
  
  UMovieGraphNode::UMovieGraphNode((UMovieGraphNode *)this);
  this_00 = &(this->SubgraphAsset).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UMovieGraphSubgraphNode__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SubgraphAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SubgraphAsset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SubgraphAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SubgraphAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  if ((this->_padding_ & 0x10) == 0) {
    TMulticastDelegateRegistration<void___cdecl(FString_const_&,UPackage_*,FObjectPostSaveContext),FDefaultDelegateUserPolicy>
    ::
    AddWeakLambda<UMovieGraphSubgraphNode,_UMovieGraphSubgraphNode::RefreshOnSubgraphAssetSaved_::__l2::<lambda_1>_>
              ((TMulticastDelegateRegistration<void___cdecl(FString_const_&,UPackage_*,FObjectPostSaveContext),FDefaultDelegateUserPolicy>
                *)&UPackage::PackageSavedWithContextEvent,
               (UMovieGraphSubgraphNode *)&stack0x00000010,(<lambda_1> *)this);
  }
  return this;
}

// ~UMovieGraphSubgraphNode @ 14dd0dfc0

void __thiscall UMovieGraphSubgraphNode::~UMovieGraphSubgraphNode(UMovieGraphSubgraphNode *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphSubgraphNode__6B_;
  pvVar1 = *(void **)&(this->SubgraphAsset).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UMovieGraphNode::~UMovieGraphNode((UMovieGraphNode *)this);
  return;
}

// EvaluatePinsToFollow @ 14dd1cdc0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphSubgraphNode::EvaluatePinsToFollow
          (UMovieGraphSubgraphNode *this,
          TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMovieGraphEvaluationContext *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UMovieGraphNode *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *pTVar6;
  UMovieGraphConfig *pUVar7;
  UMovieGraphSubgraphNode *pUVar8;
  FScriptContainerElement *pFVar9;
  TArray<TObjectPtr<UMovieGraphSubgraphNode_const_>,TSizedDefaultAllocator<32>_> *pTVar10;
  UMovieGraphSubgraphNode *local_48;
  UMovieGraphSubgraphNode *local_40;
  UMovieGraphPin *local_38;
  UMovieGraphPin *local_30;
  UMovieGraphPin *local_28 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((param_1->PinBeingFollowed).field0_0x0.DebugPtr == (UMovieGraphPin *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4548438308551655344>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\Nodes\\MovieGraphSubgraphNode.cpp"
                       ,0x50,"InContext.PinBeingFollowed");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  else {
    bVar4 = UMovieGraphNode::IsDisabled((UMovieGraphNode *)this);
    if ((bVar4) &&
       ((((param_1->PinBeingFollowed).field0_0x0.DebugPtr)->Properties).bIsBranch != false)) {
      local_38 = UMovieGraphNode::GetFirstConnectedInputPin((UMovieGraphNode *)this);
      if (local_38 != (UMovieGraphPin *)0x0) {
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_38) &&
            ((FScriptContainerElement *)&local_38 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar6;
        }
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(UMovieGraphPin **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8)
             = local_38;
      }
    }
    else {
      pUVar7 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous(&this->SubgraphAsset);
      if (pUVar7 != (UMovieGraphConfig *)0x0) {
        pTVar10 = &param_1->SubgraphStack;
        pFVar9 = (pTVar10->AllocatorInstance).Data;
        pFVar2 = pFVar9 + (longlong)(param_1->SubgraphStack).ArrayNum * 8;
        for (; pFVar9 != pFVar2; pFVar9 = pFVar9 + 8) {
          if (*(UMovieGraphSubgraphNode **)pFVar9 == (UMovieGraphSubgraphNode *)0x0) {
            bVar4 = this == (UMovieGraphSubgraphNode *)0x0;
          }
          else {
            bVar4 = *(UMovieGraphSubgraphNode **)pFVar9 == this;
          }
          if (bVar4) {
            param_1->bCircularGraphReferenceFound = true;
            local_48 = this;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this != (UMovieGraphSubgraphNode *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            pFVar2 = (pTVar10->AllocatorInstance).Data;
            if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
                ((FScriptContainerElement *)&local_48 <
                 pFVar2 + (longlong)(param_1->SubgraphStack).ArrayMax * 8)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              pTVar6 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar6;
            }
            iVar5 = (param_1->SubgraphStack).ArrayNum;
            piVar1 = &(param_1->SubgraphStack).ArrayMax;
            if (iVar5 == *piVar1) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&pTVar10->AllocatorInstance,piVar1);
            }
            (param_1->SubgraphStack).ArrayNum = iVar5 + 1;
            *(UMovieGraphSubgraphNode **)((pTVar10->AllocatorInstance).Data + (longlong)iVar5 * 8) =
                 local_48;
            pUVar8 = local_48;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              return __return_storage_ptr__;
            }
            goto LAB_14dd1d2ab;
          }
        }
        bVar4 = UMovieGraphPin::IsInputPin((param_1->PinBeingFollowed).field0_0x0.DebugPtr);
        if (bVar4) {
          local_30 = UMovieGraphPin::GetFirstConnectedPin
                               ((param_1->PinBeingFollowed).field0_0x0.DebugPtr,true);
          if (local_30 != (UMovieGraphPin *)0x0) {
            pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
            if (((pFVar2 <= (FScriptContainerElement *)&local_30) &&
                ((FScriptContainerElement *)&local_30 <
                 pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              pTVar6 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar6;
            }
            iVar5 = __return_storage_ptr__->ArrayNum;
            if (iVar5 == __return_storage_ptr__->ArrayMax) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar5 + 1;
            *(UMovieGraphPin **)
             ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_30;
          }
        }
        else {
          this_00 = (pUVar7->OutputNode).field0_0x0.DebugPtr;
          if (this_00 == (UMovieGraphNode *)0x0) {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4548438308551655284>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\Nodes\\MovieGraphSubgraphNode.cpp"
                               ,0x8c,"OutputNode");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pTVar6 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar6;
            }
          }
          else {
            local_28[0] = UMovieGraphNode::GetInputPin
                                    (this_00,&(((param_1->PinBeingFollowed).field0_0x0.DebugPtr)->
                                              Properties).Label,BuiltInOrDynamic);
            if (local_28[0] != (UMovieGraphPin *)0x0) {
              pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
              if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
                  ((FScriptContainerElement *)local_28 <
                   pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                pTVar6 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                return pTVar6;
              }
              iVar5 = __return_storage_ptr__->ArrayNum;
              if (iVar5 == __return_storage_ptr__->ArrayMax) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&__return_storage_ptr__->AllocatorInstance,
                                   &__return_storage_ptr__->ArrayMax);
              }
              __return_storage_ptr__->ArrayNum = iVar5 + 1;
              *(UMovieGraphPin **)
               ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
                   local_28[0];
            }
            pTVar10 = &param_1->SubgraphStack;
            local_40 = this;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this != (UMovieGraphSubgraphNode *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            pFVar2 = (pTVar10->AllocatorInstance).Data;
            if (((pFVar2 <= (FScriptContainerElement *)&local_40) &&
                ((FScriptContainerElement *)&local_40 <
                 pFVar2 + (longlong)(param_1->SubgraphStack).ArrayMax * 8)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              pTVar6 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar6;
            }
            iVar5 = (param_1->SubgraphStack).ArrayNum;
            piVar1 = &(param_1->SubgraphStack).ArrayMax;
            if (iVar5 == *piVar1) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&pTVar10->AllocatorInstance,piVar1);
              (param_1->SubgraphStack).ArrayNum = iVar5;
            }
            (param_1->SubgraphStack).ArrayNum = iVar5 + 1;
            *(UMovieGraphSubgraphNode **)((pTVar10->AllocatorInstance).Data + (longlong)iVar5 * 8) =
                 local_40;
            pUVar8 = local_40;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
LAB_14dd1d2ab:
              if (pUVar8 != (UMovieGraphSubgraphNode *)0x0) {
                UE::GC::MarkAsReachable((UObject *)pUVar8);
              }
            }
          }
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// GetInputPinProperties @ 14dd27e20

TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphSubgraphNode::GetInputPinProperties
          (UMovieGraphSubgraphNode *this,
          TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UMovieGraphConfig *this_00;
  TArray<UMovieGraphInput_*,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined8 local_48;
  TArray<UMovieGraphInterfaceBase_*,TSizedDefaultAllocator<32>_> local_40;
  TArray<UMovieGraphInput_*,TSizedDefaultAllocator<32>_> local_30;
  
  this_00 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous(&this->SubgraphAsset);
  if (this_00 == (UMovieGraphConfig *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ArrayNum = 0;
    local_40.ArrayMax = 0;
    pTVar6 = UMovieGraphConfig::GetInputs(this_00,&local_30);
    pFVar8 = (pTVar6->AllocatorInstance).Data;
    iVar2 = pTVar6->ArrayNum;
    pFVar1 = pFVar8 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar6->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UMovieGraphInput_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar8 == pFVar1) break;
      local_48 = *(undefined8 *)pFVar8;
      if (((local_40.AllocatorInstance.Data <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 <
           local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      iVar5 = local_40.ArrayNum;
      if (local_40.ArrayNum == local_40.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_40.AllocatorInstance,&local_40.ArrayMax);
      }
      pFVar8 = pFVar8 + 8;
      local_40.ArrayNum = iVar5 + 1;
      *(undefined8 *)(local_40.AllocatorInstance.Data + (longlong)iVar5 * 8) = local_48;
    }
    if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.AllocatorInstance.Data);
    }
    UE::MovieGraph::Private::MembersToPinProperties(__return_storage_ptr__,&local_40);
    if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetOutputPinProperties @ 14dd2b0f0

TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphSubgraphNode::GetOutputPinProperties
          (UMovieGraphSubgraphNode *this,
          TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UMovieGraphConfig *this_00;
  TArray<UMovieGraphOutput_*,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined8 local_48;
  TArray<UMovieGraphInterfaceBase_*,TSizedDefaultAllocator<32>_> local_40;
  TArray<UMovieGraphOutput_*,TSizedDefaultAllocator<32>_> local_30;
  
  this_00 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous(&this->SubgraphAsset);
  if (this_00 == (UMovieGraphConfig *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ArrayNum = 0;
    local_40.ArrayMax = 0;
    pTVar6 = UMovieGraphConfig::GetOutputs(this_00,&local_30);
    pFVar8 = (pTVar6->AllocatorInstance).Data;
    iVar2 = pTVar6->ArrayNum;
    pFVar1 = pFVar8 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar6->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UMovieGraphOutput_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar8 == pFVar1) break;
      local_48 = *(undefined8 *)pFVar8;
      if (((local_40.AllocatorInstance.Data <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 <
           local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      iVar5 = local_40.ArrayNum;
      if (local_40.ArrayNum == local_40.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_40.AllocatorInstance,&local_40.ArrayMax);
      }
      pFVar8 = pFVar8 + 8;
      local_40.ArrayNum = iVar5 + 1;
      *(undefined8 *)(local_40.AllocatorInstance.Data + (longlong)iVar5 * 8) = local_48;
    }
    if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.AllocatorInstance.Data);
    }
    UE::MovieGraph::Private::MembersToPinProperties(__return_storage_ptr__,&local_40);
    if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dd2d600

UClass * __cdecl UMovieGraphSubgraphNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphSubgraphNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphSubgraphNode",
               &Z_Registration_Info_UClass_UMovieGraphSubgraphNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphSubgraphNode,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphSubgraphNode>,
               InternalVTableHelperCtorCaller<UMovieGraphSubgraphNode>,local_res8,
               UMovieGraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphSubgraphNode.InnerSingleton;
}

// GetResolvedValueForOutputPin @ 14dd2f010

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FString * __thiscall
UMovieGraphSubgraphNode::GetResolvedValueForOutputPin
          (UMovieGraphSubgraphNode *this,FString *__return_storage_ptr__,FName *param_1,
          FMovieGraphTraversalContext *param_2)

{
  FScriptContainerElement *pFVar1;
  UMovieGraphValueContainer *this_00;
  void *_Src;
  bool bVar2;
  int iVar3;
  UMovieGraphConfig *this_01;
  FName *pFVar4;
  int iVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  bool bVar8;
  undefined4 local_res8 [2];
  FName local_68;
  ForAnyElementType local_60;
  int local_58;
  int local_54;
  TArray<UMovieGraphOutput_*,TSizedDefaultAllocator<32>_> local_50;
  
  bVar8 = false;
  local_res8[0] = 0;
  this_01 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous(&this->SubgraphAsset);
  if (this_01 != (UMovieGraphConfig *)0x0) {
    UMovieGraphConfig::GetOutputs(this_01,&local_50);
    iVar3 = local_50.ArrayNum;
    pFVar1 = local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 8;
    FVar6.Data = local_50.AllocatorInstance.Data;
    while( true ) {
      if (local_50.ArrayNum != iVar3) {
        `TCheckedPointerIterator<UMovieGraphOutput_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar6.Data == pFVar1) break;
      this_00 = *(UMovieGraphValueContainer **)FVar6.Data;
      if (this_00 == (UMovieGraphValueContainer *)0x0) {
LAB_14dd2f128:
        bVar2 = false;
      }
      else {
        _Src = (void *)this_00[1]._padding_;
        local_60.Data = (FScriptContainerElement *)0x0;
        bVar8 = true;
        local_58 = (int)this_00[1]._padding_;
        lVar7 = (longlong)local_58;
        if (local_58 == 0) {
          local_54 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_58,0,&local_60,local_58,&local_54);
          memcpy(local_60.Data,_Src,lVar7 * 2);
        }
        iVar5 = local_58 + -1;
        if (local_58 == 0) {
          iVar5 = 0;
        }
        pFVar4 = ::FName::FName(&local_68,iVar5,(wchar_t *)local_60.Data,FNAME_Add);
        if (*pFVar4 != *param_1) goto LAB_14dd2f128;
        bVar2 = true;
      }
      if ((bVar8) && (bVar8 = false, local_60.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_60.Data);
      }
      if (bVar2) {
        UMovieGraphValueContainer::GetValueSerializedString(this_00,__return_storage_ptr__);
        if (local_50.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_50.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
      FVar6.Data = FVar6.Data + 8;
    }
    if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetSubgraphAsset @ 14dd301f0

UMovieGraphConfig * __thiscall
UMovieGraphSubgraphNode::GetSubgraphAsset(UMovieGraphSubgraphNode *this)

{
  UMovieGraphConfig *pUVar1;
  
  pUVar1 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous(&this->SubgraphAsset);
  return pUVar1;
}

// RefreshOnSubgraphAssetSaved @ 14dd3b520

void __thiscall UMovieGraphSubgraphNode::RefreshOnSubgraphAssetSaved(UMovieGraphSubgraphNode *this)

{
  TMulticastDelegateRegistration<void___cdecl(FString_const_&,UPackage_*,FObjectPostSaveContext),FDefaultDelegateUserPolicy>
  ::
  AddWeakLambda<UMovieGraphSubgraphNode,_UMovieGraphSubgraphNode::RefreshOnSubgraphAssetSaved_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(FString_const_&,UPackage_*,FObjectPostSaveContext),FDefaultDelegateUserPolicy>
              *)&UPackage::PackageSavedWithContextEvent,(UMovieGraphSubgraphNode *)&stack0x00000010,
             (<lambda_1> *)this);
  return;
}

// SetSubGraphAsset @ 14dd40960

void __thiscall
UMovieGraphSubgraphNode::SetSubGraphAsset
          (UMovieGraphSubgraphNode *this,TSoftObjectPtr<UMovieGraphConfig> *param_1)

{
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&this->SubgraphAsset,
             (TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  UMovieGraphNode::UpdatePins((UMovieGraphNode *)this);
  return;
}

// StaticRegisterNativesUMovieGraphSubgraphNode @ 14dd45410

void __cdecl UMovieGraphSubgraphNode::StaticRegisterNativesUMovieGraphSubgraphNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphSubgraphNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSubgraphAsset @ 14dd51fd0

void __cdecl
UMovieGraphSubgraphNode::execGetSubgraphAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  UMovieGraphConfig *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                     ((TSoftObjectPtr<UMovieGraphConfig> *)&param_1[4].field_0x10);
  *(UMovieGraphConfig **)param_3 = pUVar1;
  return;
}

// execSetSubGraphAsset @ 14dd57850

void __cdecl
UMovieGraphSubgraphNode::execSetSubGraphAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar2;
  TPersistentObjectPtr<FSoftObjectPath> local_38;
  
  local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ObjectID.SubPathString.Data.ArrayNum = 0;
  local_38.ObjectID.SubPathString.Data.ArrayMax = 0;
  local_38.WeakPtr.ObjectIndex = 0;
  local_38.WeakPtr.ObjectSerialNumber = 0;
  local_38.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.ObjectID.AssetPath.AssetName.Number = 0;
  local_38.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.ObjectID.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_38.ObjectID.SubPathString,0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar2 = &local_38;
  if ((TPersistentObjectPtr<FSoftObjectPath> *)param_2->MostRecentPropertyAddress !=
      (TPersistentObjectPtr<FSoftObjectPath> *)0x0) {
    pTVar2 = (TPersistentObjectPtr<FSoftObjectPath> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1[4].field_0x10,pTVar2);
  UMovieGraphNode::UpdatePins((UMovieGraphNode *)param_1);
  if (local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

