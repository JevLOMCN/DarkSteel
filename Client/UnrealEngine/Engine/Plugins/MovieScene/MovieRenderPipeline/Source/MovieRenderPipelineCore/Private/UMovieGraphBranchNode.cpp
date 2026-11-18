// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 8

// StaticClass @ 14dc9bc40

UClass * __cdecl UMovieGraphBranchNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphBranchNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphBranchNode",
               &Z_Registration_Info_UClass_UMovieGraphBranchNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphBranchNode,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphBranchNode>,
               InternalVTableHelperCtorCaller<UMovieGraphBranchNode>,local_res8,
               UMovieGraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphBranchNode.InnerSingleton;
}

// UMovieGraphBranchNode @ 14dcaeea0

UMovieGraphBranchNode * __thiscall
UMovieGraphBranchNode::UMovieGraphBranchNode(UMovieGraphBranchNode *this,FVTableHelper *param_1)

{
  UMovieGraphNode::UMovieGraphNode((UMovieGraphNode *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphBranchNode__6B_;
  return this;
}

// ~UMovieGraphBranchNode @ 14dcb26b0

void __thiscall UMovieGraphBranchNode::~UMovieGraphBranchNode(UMovieGraphBranchNode *this)

{
  *(undefined ***)this = &___7UMovieGraphBranchNode__6B_;
  UMovieGraphNode::~UMovieGraphNode((UMovieGraphNode *)this);
  return;
}

// EvaluatePinsToFollow @ 14dcc60b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphBranchNode::EvaluatePinsToFollow
          (UMovieGraphBranchNode *this,
          TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMovieGraphEvaluationContext *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  UMovieGraphPin *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *pTVar8;
  UMovieGraphPin *pUVar9;
  char *pcVar10;
  longlong lVar11;
  atomic<unsigned_char> *paVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FMovieGraphEvaluationContext *local_res18;
  undefined1 local_res20 [8];
  UMovieGraphPin *local_a8;
  longlong local_a0;
  longlong local_98;
  FName local_90 [2];
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> local_80;
  FString local_70;
  FString local_60 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res18 = param_1;
  if ((this->field_0x98 & 1) != 0) {
    local_a8 = UMovieGraphNode::GetFirstConnectedInputPin((UMovieGraphNode *)this);
    if (local_a8 == (UMovieGraphPin *)0x0) {
      return __return_storage_ptr__;
    }
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 <
         pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar8;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == __return_storage_ptr__->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    *(UMovieGraphPin **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
         local_a8;
    return __return_storage_ptr__;
  }
  puVar13 = *(undefined8 **)&this->field_0x58;
  iVar7 = *(int *)&this->field_0x60;
  puVar1 = puVar13 + iVar7;
  while( true ) {
    if (*(int *)&this->field_0x60 != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar13 == puVar1) {
      pcVar10 = "ConditionalPin";
      iVar7 = 0x29;
      paVar12 = &bGEnsureHasExecuted<8100296118253912105>;
      goto LAB_14dcc6537;
    }
    pUVar4 = (UMovieGraphPin *)*puVar13;
    if ((pUVar4->Properties).Label == UE::MovieGraph::BranchNode::Condition) break;
    puVar13 = puVar13 + 1;
  }
  if (((pUVar4->Edges).ArrayNum < 1) ||
     (pUVar9 = UMovieGraphEdge::GetOtherPin
                         (*(UMovieGraphEdge **)(pUVar4->Edges).AllocatorInstance.Data,pUVar4,true),
     pUVar9 == (UMovieGraphPin *)0x0)) {
    if ((byte)LogMovieRenderPipeline._0_1_ < 3) {
      return __return_storage_ptr__;
    }
    local_90[0].ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_90[0].Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(local_90,local_60);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    if (local_60[0].Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
  if ((pUVar9->Node).field0_0x0.DebugPtr == (UMovieGraphNode *)0x0) {
    pcVar10 = "ConnectedNode";
    iVar7 = 0x41;
    paVar12 = &bGEnsureHasExecuted<8100296118253912129>;
LAB_14dcc6537:
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar12,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\Nodes\\MovieGraphBranchNode.cpp"
                       ,iVar7,pcVar10);
    if (!bVar6) {
      return __return_storage_ptr__;
    }
    pcVar5 = (code *)swi(3);
    pTVar8 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar8;
  }
  local_80.ArrayNum = 1;
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Data.ArrayNum = 0;
  local_70.Data.ArrayMax = 0;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_80.AllocatorInstance,1,&local_80.ArrayMax);
  *(UMovieGraphPin **)local_80.AllocatorInstance.Data = pUVar9;
  UE::MovieGraph::ResolveConnectedPinValue(pUVar4,&local_80,local_res18,&local_70);
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&TrueValue,"true");
    atexit(`UMovieGraphBranchNode::EvaluatePinsToFollow'::__l2::
           _dynamic_atexit_destructor_for__TrueValue__);
    _Init_thread_footer(&::_TSS0);
  }
  if (local_70.Data.ArrayNum == TrueValue.Data.ArrayNum) {
    if (1 < local_70.Data.ArrayNum) {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_70.Data.AllocatorInstance.Data,
                         (wchar_t *)TrueValue.Data.AllocatorInstance.Data);
      bVar6 = iVar7 == 0;
      goto LAB_14dcc6305;
    }
    plVar14 = *(longlong **)&this->field_0x58;
    iVar7 = *(int *)&this->field_0x60;
  }
  else {
    bVar6 = local_70.Data.ArrayNum + TrueValue.Data.ArrayNum == 1;
LAB_14dcc6305:
    plVar14 = *(longlong **)&this->field_0x58;
    iVar7 = *(int *)&this->field_0x60;
    if (!bVar6) {
      plVar2 = plVar14 + iVar7;
      while( true ) {
        if (*(int *)&this->field_0x60 != iVar7) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        local_a0 = 0;
        if ((plVar14 == plVar2) ||
           (local_a0 = *plVar14,
           *(FName *)(*plVar14 + 0x30) == UE::MovieGraph::BranchNode::FalseBranch)) break;
        plVar14 = plVar14 + 1;
      }
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)&local_a0) &&
         (((FScriptContainerElement *)&local_a0 <
           pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8 &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)))) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      lVar11 = local_a0;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
        lVar11 = local_a0;
      }
      goto LAB_14dcc64b4;
    }
  }
  plVar2 = plVar14 + iVar7;
  while( true ) {
    if (*(int *)&this->field_0x60 != iVar7) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    local_98 = 0;
    if ((plVar14 == plVar2) ||
       (local_98 = *plVar14, *(FName *)(*plVar14 + 0x30) == UE::MovieGraph::BranchNode::TrueBranch))
    break;
    plVar14 = plVar14 + 1;
  }
  pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_98) &&
     (((FScriptContainerElement *)&local_98 <
       pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8 &&
      (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar6)))) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar8;
  }
  iVar7 = __return_storage_ptr__->ArrayNum;
  lVar11 = local_98;
  if (iVar7 == __return_storage_ptr__->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
    lVar11 = local_98;
  }
LAB_14dcc64b4:
  __return_storage_ptr__->ArrayNum = iVar7 + 1;
  *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = lVar11;
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetInputPinProperties @ 14dcce360

TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphBranchNode::GetInputPinProperties
          (UMovieGraphBranchNode *this,
          TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *pTVar4;
  FName *pFVar5;
  FName local_68;
  undefined1 local_60;
  FName local_58;
  undefined4 local_50;
  FName local_48;
  undefined1 local_40;
  FName local_38;
  undefined4 local_30;
  FName local_28;
  undefined1 local_20;
  FName local_18;
  undefined4 local_10;
  
  local_10 = 0x1000100;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_28 = UE::MovieGraph::BranchNode::TrueBranch;
  local_20 = 0;
  local_18.ComparisonIndex.Value = 0;
  local_18.Number = 0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x820,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  pFVar5 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x20);
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  *pFVar5 = local_28;
  *(undefined1 *)&pFVar5[1].ComparisonIndex.Value = local_20;
  pFVar5[2] = local_18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18);
  }
  *(undefined1 *)&pFVar5[3].ComparisonIndex.Value = (undefined1)local_10;
  *(undefined1 *)((longlong)&pFVar5[3].ComparisonIndex.Value + 1) = local_10._1_1_;
  *(undefined1 *)((longlong)&pFVar5[3].ComparisonIndex.Value + 2) = local_10._2_1_;
  *(undefined1 *)((longlong)&pFVar5[3].ComparisonIndex.Value + 3) = local_10._3_1_;
  pFVar5 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  local_68 = UE::MovieGraph::BranchNode::FalseBranch;
  local_60 = 0;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  local_50 = 0x1000100;
  if ((pFVar5 <= &local_68) && (&local_68 < pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 4)
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  iVar3 = __return_storage_ptr__->ArrayNum;
  if (iVar3 == __return_storage_ptr__->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar5 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x20);
  *pFVar5 = local_68;
  *(undefined1 *)&pFVar5[1].ComparisonIndex.Value = local_60;
  pFVar5[2] = local_58;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_58);
  }
  *(undefined1 *)&pFVar5[3].ComparisonIndex.Value = (undefined1)local_50;
  *(undefined1 *)((longlong)&pFVar5[3].ComparisonIndex.Value + 1) = local_50._1_1_;
  *(undefined1 *)((longlong)&pFVar5[3].ComparisonIndex.Value + 2) = local_50._2_1_;
  *(undefined1 *)((longlong)&pFVar5[3].ComparisonIndex.Value + 3) = local_50._3_1_;
  pFVar5 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  local_48 = UE::MovieGraph::BranchNode::Condition;
  local_40 = 1;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  local_30 = 0x1000000;
  if ((pFVar5 <= &local_48) && (&local_48 < pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 4)
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  iVar3 = __return_storage_ptr__->ArrayNum;
  if (iVar3 == __return_storage_ptr__->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar5 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x20);
  *pFVar5 = local_48;
  *(undefined1 *)&pFVar5[1].ComparisonIndex.Value = local_40;
  pFVar5[2] = local_38;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_38);
  }
  *(undefined1 *)&pFVar5[3].ComparisonIndex.Value = (undefined1)local_30;
  *(undefined1 *)((longlong)&pFVar5[3].ComparisonIndex.Value + 1) = local_30._1_1_;
  *(undefined1 *)((longlong)&pFVar5[3].ComparisonIndex.Value + 2) = local_30._2_1_;
  *(undefined1 *)((longlong)&pFVar5[3].ComparisonIndex.Value + 3) = local_30._3_1_;
  return __return_storage_ptr__;
}

// GetOutputPinProperties @ 14dcd0030

/* WARNING: Removing unreachable block (ram,0x00014dcd00ab) */

TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphBranchNode::GetOutputPinProperties
          (UMovieGraphBranchNode *this,
          TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x820,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar1 * 0x20;
  __return_storage_ptr__->ArrayNum = iVar1 + 1;
  *(undefined8 *)pFVar2 = 0;
  pFVar2[8] = (FScriptContainerElement)0x0;
  *(undefined8 *)(pFVar2 + 0x10) = 0;
  pFVar2[0x18] = (FScriptContainerElement)0x0;
  pFVar2[0x19] = (FScriptContainerElement)0x1;
  pFVar2[0x1a] = (FScriptContainerElement)0x0;
  pFVar2[0x1b] = (FScriptContainerElement)0x1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dcd1730

UClass * __cdecl UMovieGraphBranchNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphBranchNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphBranchNode",
               &Z_Registration_Info_UClass_UMovieGraphBranchNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphBranchNode,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphBranchNode>,
               InternalVTableHelperCtorCaller<UMovieGraphBranchNode>,local_res8,
               UMovieGraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphBranchNode.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphBranchNode @ 14dce6310

void __cdecl UMovieGraphBranchNode::StaticRegisterNativesUMovieGraphBranchNode(void)

{
  return;
}

