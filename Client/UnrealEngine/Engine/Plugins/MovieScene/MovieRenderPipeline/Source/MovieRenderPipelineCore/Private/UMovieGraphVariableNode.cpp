// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 19

// StaticClass @ 14dcf8d60

UClass * __cdecl UMovieGraphVariableNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphVariableNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphVariableNode",
               &Z_Registration_Info_UClass_UMovieGraphVariableNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphVariableNode,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphVariableNode>,
               InternalVTableHelperCtorCaller<UMovieGraphVariableNode>,local_res8,
               UMovieGraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphVariableNode.InnerSingleton;
}

// UMovieGraphVariableNode @ 14dd0bae0

UMovieGraphVariableNode * __thiscall
UMovieGraphVariableNode::UMovieGraphVariableNode
          (UMovieGraphVariableNode *this,FVTableHelper *param_1)

{
  UMovieGraphNode::UMovieGraphNode((UMovieGraphNode *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphVariableNode__6B_;
  (this->GraphVariable).field0_0x0.DebugPtr = (UMovieGraphVariable *)0x0;
  (this->OutputPin).Label.ComparisonIndex = 0;
  (this->OutputPin).Label.Number = 0;
  (this->OutputPin).TypeObject.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->OutputPin).Type = Float;
  (this->OutputPin).bAllowMultipleConnections = true;
  (this->OutputPin).bIsBranch = false;
  (this->OutputPin).bIsWildcard = false;
  (this->OutputPin).bIsBuiltIn = true;
  return this;
}

// ~UMovieGraphVariableNode @ 14dd0e020

void __thiscall UMovieGraphVariableNode::~UMovieGraphVariableNode(UMovieGraphVariableNode *this)

{
  this->_padding_ = (longlong)&___7UMovieGraphVariableNode__6B_;
  UMovieGraphNode::~UMovieGraphNode((UMovieGraphNode *)this);
  return;
}

// ContextHasEnabledAssignmentForVariable @ 14dd18c90

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
UMovieGraphVariableNode::ContextHasEnabledAssignmentForVariable
          (TObjectPtr<UMovieGraphVariable> param_1,FMovieGraphTraversalContext *param_2,
          TObjectPtr<UMovieJobVariableAssignmentContainer> *param_3)

{
  UMoviePipelineExecutorJob *this;
  UMoviePipelineExecutorShot *this_00;
  bool bVar1;
  UMovieGraphConfig *pUVar2;
  UMovieJobVariableAssignmentContainer *pUVar3;
  UMovieJobVariableAssignmentContainer *this_01;
  UMovieJobVariableAssignmentContainer *this_02;
  UMovieJobVariableAssignmentContainer *this_03;
  bool local_res10 [8];
  UMovieJobVariableAssignmentContainer *pUVar4;
  
  if (param_2 == (FMovieGraphTraversalContext *)0x0) {
    return false;
  }
  pUVar4 = (UMovieJobVariableAssignmentContainer *)0x0;
  pUVar3 = (UMovieJobVariableAssignmentContainer *)0x0;
  this_02 = (UMovieJobVariableAssignmentContainer *)0x0;
  this = (param_2->Job).field0_0x0.DebugPtr;
  this_03 = (UMovieJobVariableAssignmentContainer *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (this != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  this_00 = (param_2->Shot).field0_0x0.DebugPtr;
  if (this_00 == (UMoviePipelineExecutorShot *)0x0) {
    this_01 = pUVar4;
    if (this == (UMoviePipelineExecutorJob *)0x0) goto LAB_14dd18d8c;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pUVar2 = UMovieGraphMember::GetOwningGraph(*(UMovieGraphMember **)param_1.field0_0x0);
    pUVar3 = UMoviePipelineExecutorShot::GetOrCreateJobVariableAssignmentsForGraph
                       (this_00,pUVar2,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UMovieJobVariableAssignmentContainer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    this_01 = pUVar3;
    this_02 = pUVar4;
    this_03 = pUVar4;
    if (this == (UMoviePipelineExecutorJob *)0x0) goto LAB_14dd18d8c;
    pUVar2 = UMovieGraphMember::GetOwningGraph(*(UMovieGraphMember **)param_1.field0_0x0);
    this_02 = UMoviePipelineExecutorShot::GetOrCreateJobVariableAssignmentsForGraph
                        (this_00,pUVar2,true);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_02 != (UMovieJobVariableAssignmentContainer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_02);
    }
  }
  pUVar2 = UMovieGraphMember::GetOwningGraph(*(UMovieGraphMember **)param_1.field0_0x0);
  this_03 = UMoviePipelineExecutorJob::GetOrCreateJobVariableAssignmentsForGraph(this,pUVar2);
  this_01 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_03 != (UMovieJobVariableAssignmentContainer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_03);
  }
LAB_14dd18d8c:
  local_res10[0] = false;
  if (((this_01 != (UMovieJobVariableAssignmentContainer *)0x0) &&
      (bVar1 = UMovieJobVariableAssignmentContainer::GetVariableAssignmentEnableState
                         (this_01,*(UMovieGraphVariable **)param_1.field0_0x0,local_res10), bVar1))
     && (local_res10[0] != false)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    (param_3->field0_0x0).DebugPtr = this_01;
    return true;
  }
  if (((this_02 != (UMovieJobVariableAssignmentContainer *)0x0) &&
      (bVar1 = UMovieJobVariableAssignmentContainer::GetVariableAssignmentEnableState
                         (this_02,*(UMovieGraphVariable **)param_1.field0_0x0,local_res10), bVar1))
     && (local_res10[0] != false)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_02);
    }
    (param_3->field0_0x0).DebugPtr = this_02;
    return true;
  }
  if (((this_03 != (UMovieJobVariableAssignmentContainer *)0x0) &&
      (bVar1 = UMovieJobVariableAssignmentContainer::GetVariableAssignmentEnableState
                         (this_03,*(UMovieGraphVariable **)param_1.field0_0x0,local_res10), bVar1))
     && (local_res10[0] != false)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_03);
    }
    (param_3->field0_0x0).DebugPtr = this_03;
    return true;
  }
  return false;
}

// GetOutputPinProperties @ 14dd2b2a0

TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphVariableNode::GetOutputPinProperties
          (UMovieGraphVariableNode *this,
          TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UMovieGraphVariable *pUVar1;
  void *_Src;
  code *pcVar2;
  EMovieGraphValueType EVar3;
  bool bVar4;
  int iVar5;
  FName FVar6;
  FName *pFVar7;
  TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  FName local_res8;
  FName local_res10;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FName local_78;
  EMovieGraphValueType local_70;
  FName local_68;
  undefined4 local_60;
  FName local_58;
  undefined1 local_50;
  FName local_48;
  undefined4 local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar1 = (this->GraphVariable).field0_0x0.DebugPtr;
  if (pUVar1 == (UMovieGraphVariable *)0x0) {
    ::FName::FName(&local_res8,L"Unknown");
    pFVar7 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
    local_58 = local_res8;
    local_50 = 0;
    local_48.ComparisonIndex.Value = 0;
    local_48.Number = 0;
    local_40 = 0x1000000;
    if ((pFVar7 <= &local_58) &&
       (&local_58 < pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pFVar7 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x20);
    *pFVar7 = local_58;
    *(undefined1 *)&pFVar7[1].ComparisonIndex.Value = local_50;
    pFVar7[2] = local_48;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48);
    }
    *(undefined1 *)&pFVar7[3].ComparisonIndex.Value = (undefined1)local_40;
    *(undefined1 *)((longlong)&pFVar7[3].ComparisonIndex.Value + 1) = local_40._1_1_;
    *(undefined1 *)((longlong)&pFVar7[3].ComparisonIndex.Value + 2) = local_40._2_1_;
    *(undefined1 *)((longlong)&pFVar7[3].ComparisonIndex.Value + 3) = local_40._3_1_;
  }
  else {
    FVar6 = (FName)UMovieGraphValueContainer::GetValueTypeObject
                             ((UMovieGraphValueContainer *)pUVar1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar6);
    }
    EVar3 = UMovieGraphValueContainer::GetValueType
                      ((UMovieGraphValueContainer *)(this->GraphVariable).field0_0x0.DebugPtr);
    pUVar1 = (this->GraphVariable).field0_0x0.DebugPtr;
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = (int)pUVar1->_padding_;
    lVar9 = (longlong)local_80;
    _Src = (void *)pUVar1->_padding_;
    if (local_80 == 0) {
      local_7c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_80,0,&local_88,local_80,&local_7c);
      memcpy(local_88.Data,_Src,lVar9 * 2);
    }
    iVar5 = local_80 + -1;
    if (local_80 == 0) {
      iVar5 = 0;
    }
    pFVar7 = ::FName::FName(&local_res10,iVar5,(wchar_t *)local_88.Data,FNAME_Add);
    local_78 = *pFVar7;
    local_70 = EVar3;
    local_68 = FVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar6);
    }
    pFVar7 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
    local_60 = 0x1000000;
    if ((pFVar7 <= &local_78) &&
       (&local_78 < pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pFVar7 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x20);
    *pFVar7 = local_78;
    *(EMovieGraphValueType *)&pFVar7[1].ComparisonIndex.Value = local_70;
    pFVar7[2] = local_68;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_68);
    }
    *(undefined1 *)&pFVar7[3].ComparisonIndex.Value = (undefined1)local_60;
    *(undefined1 *)((longlong)&pFVar7[3].ComparisonIndex.Value + 1) = local_60._1_1_;
    *(undefined1 *)((longlong)&pFVar7[3].ComparisonIndex.Value + 2) = local_60._2_1_;
    *(undefined1 *)((longlong)&pFVar7[3].ComparisonIndex.Value + 3) = local_60._3_1_;
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dd2d780

UClass * __cdecl UMovieGraphVariableNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphVariableNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphVariableNode",
               &Z_Registration_Info_UClass_UMovieGraphVariableNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphVariableNode,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphVariableNode>,
               InternalVTableHelperCtorCaller<UMovieGraphVariableNode>,local_res8,
               UMovieGraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphVariableNode.InnerSingleton;
}

// GetResolvedValueForOutputPin @ 14dd2f1b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FString * __thiscall
UMovieGraphVariableNode::GetResolvedValueForOutputPin
          (UMovieGraphVariableNode *this,FString *__return_storage_ptr__,FName *param_1,
          FMovieGraphTraversalContext *param_2)

{
  UMovieGraphVariable *pUVar1;
  void *_Src;
  ForAnyElementType _Src_00;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  TObjectPtr<UMovieJobVariableAssignmentContainer>_u_0 local_res8;
  TObjectPtr<UMovieGraphVariable>_u_0 local_58;
  int local_50;
  int local_4c;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  TObjectPtr<UMovieGraphVariable>_u_0 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  bVar3 = false;
  local_res8.DebugPtr = local_res8.DebugPtr & 0xffffffff00000000;
  pUVar1 = (this->GraphVariable).field0_0x0.DebugPtr;
  if (pUVar1 != (UMovieGraphVariable *)0x0) {
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = (int)pUVar1->_padding_;
    lVar5 = (longlong)local_40;
    _Src = (void *)pUVar1->_padding_;
    if (local_40 == 0) {
      local_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_40,0,&local_48,local_40,&local_3c);
      memcpy(local_48.Data,_Src,lVar5 * 2);
    }
    iVar4 = local_40;
    _Src_00.Data = local_48.Data;
    local_58.DebugPtr = (UMovieGraphVariable *)0x0;
    local_50 = local_40;
    if (local_40 == 0) {
      local_4c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_40,0,(ForAnyElementType *)&local_58.ObjectPtr,local_40,&local_4c);
      memcpy(local_58.DebugPtr,_Src_00.Data,(longlong)iVar4 * 2);
    }
    iVar4 = local_50 + -1;
    if (local_50 == 0) {
      iVar4 = 0;
    }
    _iStack_30 = CONCAT44(uStack_2c,iVar4);
    local_38 = local_58;
    bVar2 = ::FName::Equals(*param_1,(TStringView<wchar_t> *)&local_38.ObjectPtr);
    if (local_58.DebugPtr != (UMovieGraphVariable *)0x0) {
      FMemory::Free(local_58.DebugPtr);
    }
    bVar3 = true;
    if (bVar2) {
      bVar2 = true;
      goto LAB_14dd2f2fb;
    }
  }
  bVar2 = false;
LAB_14dd2f2fb:
  if ((bVar3) && (local_48.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data);
  }
  if (!bVar2) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_58 = (TObjectPtr<UMovieGraphVariable>_u_0)(this->GraphVariable).field0_0x0.DebugPtr;
  local_res8.DebugPtr = (UMovieJobVariableAssignmentContainer *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_58.DebugPtr != (UMovieGraphVariable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_58.DebugPtr);
  }
  bVar3 = ContextHasEnabledAssignmentForVariable
                    ((TObjectPtr<UMovieGraphVariable>)&local_58,param_2,
                     (TObjectPtr<UMovieJobVariableAssignmentContainer> *)&local_res8.ObjectPtr);
  pUVar1 = (this->GraphVariable).field0_0x0.DebugPtr;
  if (bVar3) {
    UMovieJobVariableAssignmentContainer::GetValueSerializedString
              (local_res8.DebugPtr,__return_storage_ptr__,pUVar1);
    return __return_storage_ptr__;
  }
  UMovieGraphValueContainer::GetValueSerializedString
            ((UMovieGraphValueContainer *)pUVar1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetResolvedValueForOutputPin @ 14dd2f3c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UMovieGraphVariableNode::GetResolvedValueForOutputPin
          (UMovieGraphVariableNode *this,FName *param_1,FMovieGraphTraversalContext *param_2,
          TObjectPtr<UMovieGraphValueContainer> *param_3)

{
  UMovieGraphVariable *pUVar1;
  void *_Src;
  ForAnyElementType _Src_00;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  TObjectPtr<UMovieJobVariableAssignmentContainer>_u_0 local_res8;
  TObjectPtr<UMovieGraphVariable>_u_0 local_58;
  int local_50;
  int local_4c;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  TObjectPtr<UMovieGraphVariable>_u_0 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  bVar3 = false;
  local_res8.DebugPtr = local_res8.DebugPtr & 0xffffffff00000000;
  pUVar1 = (this->GraphVariable).field0_0x0.DebugPtr;
  if (pUVar1 != (UMovieGraphVariable *)0x0) {
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = (int)pUVar1->_padding_;
    lVar5 = (longlong)local_40;
    _Src = (void *)pUVar1->_padding_;
    if (local_40 == 0) {
      local_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_40,0,&local_48,local_40,&local_3c);
      memcpy(local_48.Data,_Src,lVar5 * 2);
    }
    iVar4 = local_40;
    _Src_00.Data = local_48.Data;
    local_58.DebugPtr = (UMovieGraphVariable *)0x0;
    local_50 = local_40;
    if (local_40 == 0) {
      local_4c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_40,0,(ForAnyElementType *)&local_58.ObjectPtr,local_40,&local_4c);
      memcpy(local_58.DebugPtr,_Src_00.Data,(longlong)iVar4 * 2);
    }
    iVar4 = local_50 + -1;
    if (local_50 == 0) {
      iVar4 = 0;
    }
    _iStack_30 = CONCAT44(uStack_2c,iVar4);
    local_38 = local_58;
    bVar2 = ::FName::Equals(*param_1,(TStringView<wchar_t> *)&local_38.ObjectPtr);
    if (local_58.DebugPtr != (UMovieGraphVariable *)0x0) {
      FMemory::Free(local_58.DebugPtr);
    }
    bVar3 = true;
    if (bVar2) {
      bVar2 = true;
      goto LAB_14dd2f50a;
    }
  }
  bVar2 = false;
LAB_14dd2f50a:
  if ((bVar3) && (local_48.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data);
  }
  if (!bVar2) {
    return false;
  }
  local_58 = (TObjectPtr<UMovieGraphVariable>_u_0)(this->GraphVariable).field0_0x0.DebugPtr;
  local_res8.DebugPtr = (UMovieJobVariableAssignmentContainer *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_58.DebugPtr != (UMovieGraphVariable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_58.DebugPtr);
  }
  bVar3 = ContextHasEnabledAssignmentForVariable
                    ((TObjectPtr<UMovieGraphVariable>)&local_58,param_2,
                     (TObjectPtr<UMovieJobVariableAssignmentContainer> *)&local_res8.ObjectPtr);
  if (bVar3) {
    bVar3 = UMovieJobVariableAssignmentContainer::GetValueContainer
                      (local_res8.DebugPtr,(this->GraphVariable).field0_0x0.DebugPtr,param_3);
    return bVar3;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (this->GraphVariable).field0_0x0.DebugPtr, pUVar1 != (UMovieGraphVariable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  param_3->field0_0x0 = (TObjectPtr<UMovieGraphValueContainer>_u_0)(this->GraphVariable).field0_0x0;
  return true;
}

// GetResolvedVariableValue @ 14dd2f5e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
UMovieGraphVariableNode::GetResolvedVariableValue
          (TObjectPtr<UMovieGraphVariable> param_1,FMovieGraphTraversalContext *param_2,
          TObjectPtr<UMovieGraphValueContainer> *param_3)

{
  bool bVar1;
  TObjectPtr<UMovieJobVariableAssignmentContainer>_u_0 local_res8;
  UObject *local_res20;
  
  local_res20 = *(UObject **)param_1.field0_0x0;
  local_res8.DebugPtr = (UMovieJobVariableAssignmentContainer *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  bVar1 = ContextHasEnabledAssignmentForVariable
                    ((TObjectPtr<UMovieGraphVariable>)&local_res20,param_2,
                     (TObjectPtr<UMovieJobVariableAssignmentContainer> *)&local_res8.ObjectPtr);
  if (bVar1) {
    bVar1 = UMovieJobVariableAssignmentContainer::GetValueContainer
                      (local_res8.DebugPtr,*(UMovieGraphVariable **)param_1.field0_0x0,param_3);
    return bVar1;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)param_1.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.field0_0x0);
  }
  param_3->field0_0x0 = *(TObjectPtr<UMovieGraphValueContainer>_u_0 *)param_1.field0_0x0;
  return true;
}

// GetVariable @ 14dd31b70

UMovieGraphVariable * __thiscall UMovieGraphVariableNode::GetVariable(UMovieGraphVariableNode *this)

{
  return (this->GraphVariable).field0_0x0.DebugPtr;
}

// IsGlobalVariable @ 14dd33930

bool __thiscall UMovieGraphVariableNode::IsGlobalVariable(UMovieGraphVariableNode *this)

{
  UMovieGraphVariable *this_00;
  bool bVar1;
  
  this_00 = (this->GraphVariable).field0_0x0.DebugPtr;
  if (this_00 != (UMovieGraphVariable *)0x0) {
    bVar1 = UMovieGraphVariable::IsGlobal(this_00);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// PostEditImport @ 14dd3a450

void __thiscall UMovieGraphVariableNode::PostEditImport(UMovieGraphVariableNode *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dd3a453. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x340))();
  return;
}

// RegisterDelegates @ 14dd3b680

void __thiscall UMovieGraphVariableNode::RegisterDelegates(UMovieGraphVariableNode *this)

{
  return;
}

// SetVariable @ 14dd414d0

void __thiscall
UMovieGraphVariableNode::SetVariable(UMovieGraphVariableNode *this,UMovieGraphVariable *param_1)

{
  if (param_1 != (UMovieGraphVariable *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->GraphVariable).field0_0x0.DebugPtr = param_1;
    UpdateOutputPin(this,(UMovieGraphMember *)param_1);
    (**(code **)(this->_padding_ + 0x340))(this);
  }
  return;
}

// StaticRegisterNativesUMovieGraphVariableNode @ 14dd45460

void __cdecl UMovieGraphVariableNode::StaticRegisterNativesUMovieGraphVariableNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphVariableNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateOutputPin @ 14dd4b4c0

void __thiscall
UMovieGraphVariableNode::UpdateOutputPin(UMovieGraphVariableNode *this,UMovieGraphMember *param_1)

{
  FScriptContainerElement *_Src;
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  EMovieGraphValueType EVar4;
  FName *pFVar5;
  UObject *pUVar6;
  int iVar7;
  longlong lVar8;
  FName local_res8;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  if (((int)this->_padding_ != 0) && (param_1 != (UMovieGraphMember *)0x0)) {
    local_20 = (param_1->Name).Data.ArrayNum;
    lVar8 = (longlong)local_20;
    _Src = (param_1->Name).Data.AllocatorInstance.Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    if (local_20 == 0) {
      local_1c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_20,0,&local_28,local_20,&local_1c);
      memcpy(local_28.Data,_Src,lVar8 * 2);
    }
    iVar7 = local_20 + -1;
    if (local_20 == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_res8,iVar7,(wchar_t *)local_28.Data,FNAME_Add);
    FVar1 = *pFVar5;
    if ((int)this->_padding_ < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(FName *)(*(longlong *)this->_padding_ + 0x30) = FVar1;
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
    EVar4 = UMovieGraphValueContainer::GetValueType((UMovieGraphValueContainer *)param_1);
    if ((int)this->_padding_ < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(EMovieGraphValueType *)(*(longlong *)this->_padding_ + 0x38) = EVar4;
    pUVar6 = UMovieGraphValueContainer::GetValueTypeObject((UMovieGraphValueContainer *)param_1);
    if ((int)this->_padding_ < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar8 = *(longlong *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    *(UObject **)(lVar8 + 0x40) = pUVar6;
  }
  TMulticastDelegate<void___cdecl(UMovieGraphNode_const_*),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(UMovieGraphNode_const_*),FDefaultDelegateUserPolicy> *
             )&this->_padding_,(UMovieGraphNode *)this);
  return;
}

// execGetVariable @ 14dd55790

void __cdecl
UMovieGraphVariableNode::execGetVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[4].field_0x10;
  return;
}

// execIsGlobalVariable @ 14dd559e0

void __cdecl
UMovieGraphVariableNode::execIsGlobalVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UMovieGraphVariable **)&param_1[4].field_0x10 != (UMovieGraphVariable *)0x0) {
    bVar1 = UMovieGraphVariable::IsGlobal(*(UMovieGraphVariable **)&param_1[4].field_0x10);
    if (bVar1) {
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetVariable @ 14dd5a3a0

void __cdecl
UMovieGraphVariableNode::execSetVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  FName FVar2;
  code *pcVar3;
  UMovieGraphValueContainer *this;
  bool bVar4;
  EMovieGraphValueType EVar5;
  FName *pFVar6;
  UObject *pUVar7;
  int iVar8;
  longlong lVar9;
  UMovieGraphValueContainer *local_res10;
  FName local_res20;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  local_res10 = (UMovieGraphValueContainer *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UMovieGraphValueContainer *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    *(UMovieGraphValueContainer **)&param_1[4].field_0x10 = this;
    if (*(int *)&param_1[2].field_0x20 != 0) {
      local_20 = (int)this[1]._padding_;
      lVar9 = (longlong)local_20;
      _Src = (void *)this[1]._padding_;
      local_28.Data = (FScriptContainerElement *)0x0;
      if (local_20 == 0) {
        local_1c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_20,0,&local_28,local_20,&local_1c);
        memcpy(local_28.Data,_Src,lVar9 * 2);
      }
      iVar8 = local_20 + -1;
      if (local_20 == 0) {
        iVar8 = 0;
      }
      pFVar6 = ::FName::FName(&local_res20,iVar8,(wchar_t *)local_28.Data,FNAME_Add);
      FVar2 = *pFVar6;
      if (*(int *)&param_1[2].field_0x20 < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(FName *)(**(longlong **)&param_1[2].field_0x18 + 0x30) = FVar2;
      if (local_28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data);
      }
      EVar5 = UMovieGraphValueContainer::GetValueType(this);
      if (*(int *)&param_1[2].field_0x20 < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(EMovieGraphValueType *)(**(longlong **)&param_1[2].field_0x18 + 0x38) = EVar5;
      pUVar7 = UMovieGraphValueContainer::GetValueTypeObject(this);
      if (*(int *)&param_1[2].field_0x20 < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar9 = **(longlong **)&param_1[2].field_0x18;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      *(UObject **)(lVar9 + 0x40) = pUVar7;
    }
    TMulticastDelegate<void___cdecl(UMovieGraphNode_const_*),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(UMovieGraphNode_const_*),FDefaultDelegateUserPolicy>
                *)(param_1 + 1),(UMovieGraphNode *)param_1);
    (**(code **)(*(longlong *)param_1 + 0x340))(param_1);
  }
  return;
}

