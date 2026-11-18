// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 14

// StaticClass @ 14dcf7390

UClass * __cdecl UMovieGraphInputNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphInputNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphInputNode",
               &Z_Registration_Info_UClass_UMovieGraphInputNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphInputNode,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphInputNode>,
               InternalVTableHelperCtorCaller<UMovieGraphInputNode>,local_res8,
               UMovieGraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphInputNode.InnerSingleton;
}

// UMovieGraphInputNode @ 14dd0a690

UMovieGraphInputNode * __thiscall
UMovieGraphInputNode::UMovieGraphInputNode(UMovieGraphInputNode *this,FVTableHelper *param_1)

{
  UMovieGraphNode::UMovieGraphNode((UMovieGraphNode *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphInputNode__6B_;
  return this;
}

// UMovieGraphInputNode @ 14dd0a6c0

UMovieGraphInputNode * __thiscall
UMovieGraphInputNode::UMovieGraphInputNode(UMovieGraphInputNode *this)

{
  FScriptContainerElement *pFVar1;
  UMovieGraphConfig *this_00;
  int iVar2;
  undefined8 uVar3;
  ForAnyElementType FVar4;
  undefined1 local_res8 [8];
  TArray<UMovieGraphInput_*,TSizedDefaultAllocator<32>_> local_18;
  
  UMovieGraphNode::UMovieGraphNode((UMovieGraphNode *)this);
  *(undefined ***)this = &___7UMovieGraphInputNode__6B_;
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    this_00 = UMovieGraphNode::GetGraph((UMovieGraphNode *)this);
    if (this_00 != (UMovieGraphConfig *)0x0) {
      UMovieGraphConfig::GetInputs(this_00,&local_18);
      iVar2 = local_18.ArrayNum;
      pFVar1 = local_18.AllocatorInstance.Data + (longlong)iVar2 * 8;
      uVar3 = local_18._8_8_;
      FVar4.Data = local_18.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar3 != iVar2) {
          `TCheckedPointerIterator<UMovieGraphInput_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
          uVar3 = local_18._8_8_;
        }
        if (FVar4.Data == pFVar1) break;
        FVar4.Data = FVar4.Data + 8;
      }
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
  }
  return this;
}

// ~UMovieGraphInputNode @ 14dd0da10

void __thiscall UMovieGraphInputNode::~UMovieGraphInputNode(UMovieGraphInputNode *this)

{
  *(undefined ***)this = &___7UMovieGraphInputNode__6B_;
  UMovieGraphNode::~UMovieGraphNode((UMovieGraphNode *)this);
  return;
}

// CanBeAddedByUser @ 14dd188a0

bool __thiscall UMovieGraphInputNode::CanBeAddedByUser(UMovieGraphInputNode *this)

{
  return false;
}

// CanBeDisabled @ 14dd188c0

bool __thiscall UMovieGraphInputNode::CanBeDisabled(UMovieGraphInputNode *this)

{
  return false;
}

// EvaluatePinsToFollow @ 14dd1b770

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphInputNode::EvaluatePinsToFollow
          (UMovieGraphInputNode *this,
          TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMovieGraphEvaluationContext *param_1)

{
  uint uVar1;
  int *piVar2;
  TArray<TObjectPtr<UMovieGraphSubgraphNode_const_>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  UMovieGraphNode *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *pTVar8;
  UMovieGraphPin *local_28 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((param_1->PinBeingFollowed).field0_0x0.DebugPtr == (UMovieGraphPin *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4423541750505668648>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\Nodes\\MovieGraphInputNode.cpp"
                       ,0x28,"InContext.PinBeingFollowed");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar8;
    }
  }
  else {
    iVar7 = (param_1->SubgraphStack).ArrayNum;
    if (iVar7 != 0) {
      pTVar3 = &param_1->SubgraphStack;
      if ((iVar7 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar8;
      }
      this_00 = *(UMovieGraphNode **)
                 ((pTVar3->AllocatorInstance).Data +
                 (longlong)(param_1->SubgraphStack).ArrayNum * 8 + -8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UMovieGraphNode *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      iVar7 = (param_1->SubgraphStack).ArrayNum;
      uVar1 = iVar7 - 1;
      pFVar4 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar1 * 8;
      iVar7 = ~uVar1 + iVar7;
      if (iVar7 != 0) {
        memmove(pFVar4,pFVar4 + 8,(longlong)iVar7 << 3);
      }
      piVar2 = &(param_1->SubgraphStack).ArrayNum;
      *piVar2 = *piVar2 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&pTVar3->AllocatorInstance,(param_1->SubgraphStack).ArrayNum,
                 &(param_1->SubgraphStack).ArrayMax);
      if (this_00 == (UMovieGraphNode *)0x0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4423541750505668674>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\Nodes\\MovieGraphInputNode.cpp"
                           ,0x42,"ParentSubgraphNode.Get()");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar8;
        }
      }
      else {
        local_28[0] = UMovieGraphNode::GetInputPin
                                (this_00,&(((param_1->PinBeingFollowed).field0_0x0.DebugPtr)->
                                          Properties).Label,BuiltInOrDynamic);
        if (local_28[0] != (UMovieGraphPin *)0x0) {
          pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
              ((FScriptContainerElement *)local_28 <
               pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
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
          *(UMovieGraphPin **)
           ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_28[0];
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// GetOutputPinProperties @ 14dd2abd0

TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphInputNode::GetOutputPinProperties
          (UMovieGraphInputNode *this,
          TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  UMovieGraphValueContainer *this_00;
  void *_Src;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  EMovieGraphValueType EVar4;
  bool bVar5;
  UMovieGraphConfig *this_01;
  FName FVar6;
  FName *pFVar7;
  TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  FName local_88;
  ForAnyElementType local_80;
  int local_78;
  int local_74;
  TArray<UMovieGraphInput_*,TSizedDefaultAllocator<32>_> local_70;
  FName local_60;
  EMovieGraphValueType local_58;
  FName local_50;
  undefined4 local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_01 = UMovieGraphNode::GetGraph((UMovieGraphNode *)this);
  if (this_01 != (UMovieGraphConfig *)0x0) {
    UMovieGraphConfig::GetInputs(this_01,&local_70);
    local_res18 = local_70.ArrayNum;
    uVar10 = (ulonglong)(int)local_res18;
    local_res20 = local_70.AllocatorInstance.Data + uVar10 * 8;
    FVar12.Data = local_70.AllocatorInstance.Data;
    while( true ) {
      pFVar3 = local_res20;
      if (local_70.ArrayNum != (int)uVar10) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UMovieGraphInput_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar12.Data == pFVar3) break;
      this_00 = *(UMovieGraphValueContainer **)FVar12.Data;
      FVar6 = (FName)UMovieGraphValueContainer::GetValueTypeObject(this_00);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar6);
      }
      EVar4 = UMovieGraphValueContainer::GetValueType(this_00);
      _Src = (void *)this_00[1]._padding_;
      local_80.Data = (FScriptContainerElement *)0x0;
      local_78 = (int)this_00[1]._padding_;
      lVar11 = (longlong)local_78;
      if (local_78 == 0) {
        local_74 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_78,0,&local_80,local_78,&local_74);
        memcpy(local_80.Data,_Src,lVar11 * 2);
      }
      iVar9 = local_78 + -1;
      if (local_78 == 0) {
        iVar9 = 0;
      }
      pFVar7 = ::FName::FName(&local_88,iVar9,(wchar_t *)local_80.Data,FNAME_Add);
      local_60 = *pFVar7;
      local_58 = EVar4;
      local_50 = FVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar6);
      }
      local_48 = 0x1000000;
      if (local_80.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data);
      }
      piVar1 = &__return_storage_ptr__->ArrayMax;
      pFVar7 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
      local_48._0_2_ =
           CONCAT11(*(undefined1 *)&this_00[1].Value.Value.StructMemory,(undefined1)local_48);
      if ((pFVar7 <= &local_60) && (&local_60 < pFVar7 + (longlong)*piVar1 * 4)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar8;
        }
      }
      iVar9 = __return_storage_ptr__->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
      pFVar7 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 0x20);
      *pFVar7 = local_60;
      *(EMovieGraphValueType *)&pFVar7[1].ComparisonIndex.Value = local_58;
      pFVar7[2] = local_50;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_50 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_50);
      }
      FVar12.Data = FVar12.Data + 8;
      uVar10 = (ulonglong)local_res18;
      *(undefined1 *)&pFVar7[3].ComparisonIndex.Value = (undefined1)local_48;
      *(undefined1 *)((longlong)&pFVar7[3].ComparisonIndex.Value + 1) = local_48._1_1_;
      *(undefined1 *)((longlong)&pFVar7[3].ComparisonIndex.Value + 2) = local_48._2_1_;
      *(undefined1 *)((longlong)&pFVar7[3].ComparisonIndex.Value + 3) = local_48._3_1_;
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dd2c810

UClass * __cdecl UMovieGraphInputNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphInputNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphInputNode",
               &Z_Registration_Info_UClass_UMovieGraphInputNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphInputNode,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphInputNode>,
               InternalVTableHelperCtorCaller<UMovieGraphInputNode>,local_res8,
               UMovieGraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphInputNode.InnerSingleton;
}

// GetResolvedValueForOutputPin @ 14dd2ee70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FString * __thiscall
UMovieGraphInputNode::GetResolvedValueForOutputPin
          (UMovieGraphInputNode *this,FString *__return_storage_ptr__,FName *param_1,
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
  undefined1 local_58 [4];
  FName local_54;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  TArray<UMovieGraphInput_*,TSizedDefaultAllocator<32>_> local_38;
  
  bVar8 = false;
  local_54.ComparisonIndex.Value = 0;
  this_01 = UMovieGraphNode::GetGraph((UMovieGraphNode *)this);
  if (this_01 != (UMovieGraphConfig *)0x0) {
    UMovieGraphConfig::GetInputs(this_01,&local_38);
    iVar3 = local_38.ArrayNum;
    pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
    FVar6.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if (local_38.ArrayNum != iVar3) {
        `TCheckedPointerIterator<UMovieGraphInput_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_58);
      }
      if (FVar6.Data == pFVar1) break;
      this_00 = *(UMovieGraphValueContainer **)FVar6.Data;
      if (this_00 == (UMovieGraphValueContainer *)0x0) {
LAB_14dd2ef83:
        bVar2 = false;
      }
      else {
        _Src = (void *)this_00[1]._padding_;
        local_48.Data = (FScriptContainerElement *)0x0;
        bVar8 = true;
        local_40 = (int)this_00[1]._padding_;
        lVar7 = (longlong)local_40;
        if (local_40 == 0) {
          local_3c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_40,0,&local_48,local_40,&local_3c);
          memcpy(local_48.Data,_Src,lVar7 * 2);
        }
        iVar5 = local_40 + -1;
        if (local_40 == 0) {
          iVar5 = 0;
        }
        pFVar4 = ::FName::FName(&local_54,iVar5,(wchar_t *)local_48.Data,FNAME_Add);
        if (*pFVar4 != *param_1) goto LAB_14dd2ef83;
        bVar2 = true;
      }
      if ((bVar8) && (bVar8 = false, local_48.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_48.Data);
      }
      if (bVar2) {
        UMovieGraphValueContainer::GetValueSerializedString(this_00,__return_storage_ptr__);
        if (local_38.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_38.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
      FVar6.Data = FVar6.Data + 8;
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// RegisterDelegates @ 14dd3b560

void __thiscall UMovieGraphInputNode::RegisterDelegates(UMovieGraphInputNode *this)

{
  FScriptContainerElement *pFVar1;
  UMovieGraphConfig *this_00;
  int iVar2;
  undefined8 uVar3;
  ForAnyElementType FVar4;
  undefined1 local_res10 [8];
  TArray<UMovieGraphInput_*,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = UMovieGraphNode::GetGraph((UMovieGraphNode *)this);
  if (this_00 != (UMovieGraphConfig *)0x0) {
    UMovieGraphConfig::GetInputs(this_00,&local_18);
    iVar2 = local_18.ArrayNum;
    pFVar1 = local_18.AllocatorInstance.Data + (longlong)iVar2 * 8;
    uVar3 = local_18._8_8_;
    FVar4.Data = local_18.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar3 != iVar2) {
        `TCheckedPointerIterator<UMovieGraphInput_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
        uVar3 = local_18._8_8_;
      }
      if (FVar4.Data == pFVar1) break;
      FVar4.Data = FVar4.Data + 8;
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// RegisterInputDelegates @ 14dd3b690

void __thiscall
UMovieGraphInputNode::RegisterInputDelegates(UMovieGraphInputNode *this,UMovieGraphInput *param_1)

{
  return;
}

// StaticRegisterNativesUMovieGraphInputNode @ 14dd451f0

void __cdecl UMovieGraphInputNode::StaticRegisterNativesUMovieGraphInputNode(void)

{
  return;
}

// UpdateExistingPins @ 14dd47f00

void __thiscall
UMovieGraphInputNode::UpdateExistingPins(UMovieGraphInputNode *this,UMovieGraphMember *param_1)

{
  undefined1 uVar1;
  void *_Src;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  EMovieGraphValueType EVar5;
  uint uVar6;
  uint uVar7;
  UMovieGraphConfig *this_00;
  FName *pFVar8;
  UObject *pUVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  FName local_res18;
  TArray<UMovieGraphInput_*,TSizedDefaultAllocator<32>_> local_48;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  this_00 = UMovieGraphNode::GetGraph((UMovieGraphNode *)this);
  if (this_00 != (UMovieGraphConfig *)0x0) {
    UMovieGraphConfig::GetInputs(this_00,&local_48);
    if (local_48.ArrayNum == *(int *)&this->field_0x70) {
      uVar13 = 0;
      uVar15 = 0;
      uVar14 = uVar13;
      uVar16 = uVar13;
      if (0 < local_48.ArrayNum) {
        do {
          uVar12 = (uint)uVar13;
          uVar11 = ~uVar12 >> 0x1f;
          uVar6 = uVar15;
          if ((int)uVar12 < local_48.ArrayNum) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_38.Data = (FScriptContainerElement *)0x0;
          local_30 = *(int *)(*(longlong *)(local_48.AllocatorInstance.Data + uVar14) + 0x58);
          lVar10 = (longlong)local_30;
          _Src = *(void **)(*(longlong *)(local_48.AllocatorInstance.Data + uVar14) + 0x50);
          if (local_30 == 0) {
            local_2c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_30,0,&local_38,local_30,&local_2c);
            memcpy(local_38.Data,_Src,lVar10 * 2);
          }
          uVar7 = 0;
          uVar6 = local_30 - 1;
          if (local_30 == 0) {
            uVar6 = uVar7;
          }
          pFVar8 = ::FName::FName(&local_res18,uVar6,(wchar_t *)local_38.Data,FNAME_Add);
          FVar2 = *pFVar8;
          uVar6 = uVar7;
          if ((int)uVar12 < *(int *)&this->field_0x70) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(FName *)(*(longlong *)(*(longlong *)&this->field_0x68 + uVar16 * 8) + 0x30) = FVar2;
          if (local_38.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data);
          }
          uVar6 = uVar15;
          if ((int)uVar12 < local_48.ArrayNum) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          EVar5 = UMovieGraphValueContainer::GetValueType
                            (*(UMovieGraphValueContainer **)
                              (local_48.AllocatorInstance.Data + uVar16 * 8));
          uVar6 = uVar15;
          if ((int)uVar12 < *(int *)&this->field_0x70) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(EMovieGraphValueType *)
           (*(longlong *)(*(longlong *)&this->field_0x68 + uVar16 * 8) + 0x38) = EVar5;
          uVar6 = uVar7;
          if ((int)uVar12 < local_48.ArrayNum) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar9 = UMovieGraphValueContainer::GetValueTypeObject
                             (*(UMovieGraphValueContainer **)
                               (local_48.AllocatorInstance.Data + uVar16 * 8));
          uVar6 = uVar7;
          if ((int)uVar12 < *(int *)&this->field_0x70) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar10 = *(longlong *)(*(longlong *)&this->field_0x68 + uVar16 * 8);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar9);
          }
          *(UObject **)(lVar10 + 0x40) = pUVar9;
          uVar6 = uVar7;
          if ((int)uVar12 < local_48.ArrayNum) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar1 = *(undefined1 *)
                   (*(longlong *)(local_48.AllocatorInstance.Data + uVar16 * 8) + 0x78);
          if ((int)uVar12 < *(int *)&this->field_0x70) {
            uVar7 = uVar11;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar13 = (ulonglong)(uVar12 + 1);
          *(undefined1 *)(*(longlong *)(*(longlong *)&this->field_0x68 + uVar16 * 8) + 0x49) = uVar1
          ;
          uVar14 = uVar14 + 8;
          uVar16 = uVar16 + 1;
        } while ((int)(uVar12 + 1) < local_48.ArrayNum);
      }
    }
    TMulticastDelegate<void___cdecl(UMovieGraphNode_const_*),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(UMovieGraphNode_const_*),FDefaultDelegateUserPolicy>
                *)&this->field_0x28,(UMovieGraphNode *)this);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

