// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 27

// StaticStruct @ 1462c4c50

UScriptStruct * __cdecl FDataflowCallSubGraphNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowCallSubGraphNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowCallSubGraphNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCallSubGraphNode,(UObject *)pUVar1,
                         L"DataflowCallSubGraphNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowCallSubGraphNode.OuterSingleton;
}

// GetType @ 1462c4cc0

FName __thiscall FDataflowCallSubGraphNode::GetType(FDataflowCallSubGraphNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowCallSubGraphNode");
  return in_RDX;
}

// IsA @ 1462c4cf0

bool __thiscall FDataflowCallSubGraphNode::IsA(FDataflowCallSubGraphNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowCallSubGraphNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1462c4d58;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1462c4d58:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1462c4d76;
      }
    }
  }
  bVar5 = true;
LAB_1462c4d76:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1462c4db0

FStructOnScope * __thiscall
FDataflowCallSubGraphNode::NewStructOnScope(FDataflowCallSubGraphNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowCallSubGraphNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowEngine();
      Z_Registration_Info_UScriptStruct_FDataflowCallSubGraphNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCallSubGraphNode,(UObject *)pUVar2,
                           L"DataflowCallSubGraphNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowCallSubGraphNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1462c4e50

void __thiscall
FDataflowCallSubGraphNode::SerializeInternal(FDataflowCallSubGraphNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowCallSubGraphNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowCallSubGraphNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCallSubGraphNode,(UObject *)pUVar1,
                         L"DataflowCallSubGraphNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowCallSubGraphNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowCallSubGraphNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001462c4ecd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1462c4ee0

FName __thiscall FDataflowCallSubGraphNode::GetDisplayName(FDataflowCallSubGraphNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SubGraphCall");
  return in_RDX;
}

// GetCategory @ 1462c4f10

FName __thiscall FDataflowCallSubGraphNode::GetCategory(FDataflowCallSubGraphNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SubGraph");
  return in_RDX;
}

// GetTags @ 1462c4f40

FString * __thiscall
FDataflowCallSubGraphNode::GetTags(FDataflowCallSubGraphNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1462c4f70

UScriptStruct * __thiscall
FDataflowCallSubGraphNode::TypedScriptStruct(FDataflowCallSubGraphNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowCallSubGraphNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowCallSubGraphNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCallSubGraphNode,(UObject *)pUVar1,
                         L"DataflowCallSubGraphNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowCallSubGraphNode.OuterSingleton;
}

// Evaluate @ 1462c4fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDataflowCallSubGraphNode::Evaluate
          (FDataflowCallSubGraphNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TObjectPtr<UObject>_u_0 *pTVar1;
  FDataflowOutput *this_00;
  FName FVar2;
  FProperty *pFVar3;
  code *pcVar4;
  FDelegateHandle FVar5;
  ForAnyElementType FVar6;
  FContext *pFVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar12;
  UDataflowSubGraph *this_01;
  FDataflowSubGraphOutputNode *this_02;
  TEngineContext<UE::Dataflow::FContextSingle> *pTVar13;
  FString *this_03;
  size_t sVar14;
  ulong64 uVar15;
  longlong *plVar16;
  FDataflowInput *pFVar17;
  FGuid *pFVar18;
  ulong64 uVar19;
  ulonglong uVar20;
  UDataflow *this_04;
  ForAnyElementType FVar21;
  undefined1 auStackY_4e8 [32];
  char local_4a8;
  char local_4a7 [3];
  undefined1 local_4a4 [4];
  int local_4a0;
  FDataflowSubGraphOutputNode *local_498;
  TObjectPtr<UObject>_u_0 *local_490;
  TObjectPtr<UObject>_u_0 *local_488;
  TArray<FDataflowOutput_*,TSizedDefaultAllocator<32>_> local_480;
  <lambda_1> local_470;
  FName local_468;
  TArray<FDataflowInput_*,TSizedDefaultAllocator<32>_> local_460;
  ulonglong local_450;
  FDataflowCallSubGraphNode *local_448;
  undefined1 local_440 [16];
  UDataflow *local_430;
  TObjectPtr<UObject>_u_0 *local_428;
  char *local_420;
  TObjectPtr<UObject>_u_0 *local_418;
  char *local_410;
  FString local_408;
  FString local_3f8;
  FString local_3e0;
  FGuid local_3d0;
  TObjectPtr<UObject>_u_0 local_3c0;
  undefined **local_3b8;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_220;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_200;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_1e0 [12];
  FDataflowInput *local_60;
  undefined4 local_58;
  FContext *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  if (param_2 == (FDataflowOutput *)0x0) {
    return;
  }
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  local_448 = this;
  TVar12 = FWeakObjectPtr::Pin(&(this->DataflowAssetWeakPtr).WeakPtr);
  local_450 = 0;
  this_04 = *(UDataflow **)TVar12.Object;
  *(undefined8 *)TVar12.Object = 0;
  local_430 = this_04;
  if (local_490 != (TObjectPtr<UObject>_u_0 *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)&local_490->ObjectPtr);
    local_490 = (TObjectPtr<UObject>_u_0 *)0x0;
  }
  if (this_04 == (UDataflow *)0x0) {
    return;
  }
  this_01 = UDataflow::FindSubGraphByGuid(this_04,&this->SubGraphGuid);
  if ((this_01 == (UDataflowSubGraph *)0x0) ||
     (this_02 = UDataflowSubGraph::GetOutputNode(this_01), local_498 = this_02,
     this_02 == (FDataflowSubGraphOutputNode *)0x0)) goto LAB_1462c55d3;
  pTVar13 = UE::Dataflow::FContext::
            AsType<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>_>(param_1);
  pFVar17 = (FDataflowInput *)0x0;
  if (pTVar13 != (TEngineContext<UE::Dataflow::FContextSingle> *)0x0) {
    pFVar17 = (FDataflowInput *)(pTVar13->Owner).field0_0x0.DebugPtr;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pFVar17 != (FDataflowInput *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pFVar17);
  }
  memset(&local_3c0,0,0x360);
  UE::Dataflow::FContext::FContext((FContext *)&local_3c0.ObjectPtr);
  local_3c0.DebugPtr =
       (UObject *)
       &UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::
        _vftable__for__UE__Dataflow__IContextCacheStore__;
  local_3b8 = &UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::
               _vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
  local_60 = pFVar17;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pFVar17 != (FDataflowInput *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pFVar17);
  }
  local_58 = 0;
  local_3c0.DebugPtr =
       (UObject *)
       &UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::
        _vftable__for__UE__Dataflow__IContextCacheStore__;
  local_3b8 = &UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::
               _vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
  local_48 = &this->_padding_;
  local_50 = param_1;
  UE::Dataflow::FContext::SetThreaded
            ((FContext *)&local_3c0.ObjectPtr,
             (param_1->DataLock).Ptr != (FWindowsRecursiveMutex *)0x0);
  local_4a0 = 1;
  if (this_01->bIsForEach == false) {
LAB_1462c52fc:
    iVar10 = 1;
LAB_1462c5301:
    uVar20 = 0;
    FDataflowNode::GetOutputs((FDataflowNode *)this,&local_480);
    if (iVar10 < 1) goto LAB_1462c5238;
    do {
      iVar10 = local_480.ArrayNum;
      local_58 = (undefined4)uVar20;
      local_460.AllocatorInstance.Data =
           local_480.AllocatorInstance.Data + (longlong)local_480.ArrayNum * 8;
      FVar21.Data = local_480.AllocatorInstance.Data;
      while( true ) {
        FVar6.Data = local_460.AllocatorInstance.Data;
        local_490 = (TObjectPtr<UObject>_u_0 *)FVar21.Data;
        if (local_480.ArrayNum != iVar10) {
          `TCheckedPointerIterator<FDataflowOutput_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_4a7 + 2);
        }
        if (FVar21.Data == FVar6.Data) break;
        this_00 = *(FDataflowOutput **)FVar21.Data;
        if (this_00 != (FDataflowOutput *)0x0) {
          local_488 = &local_3c0;
          local_428 = &local_3c0;
          local_4a7[0] = '\0';
          local_420 = local_4a7;
          local_418 = &local_3c0;
          local_410 = &local_4a8;
          local_4a8 = '\0';
          pFVar17 = FDataflowNode::FindInput((FDataflowNode *)this_02,(FName)this_00->_padding_);
          if (((pFVar17 != (FDataflowInput *)0x0) &&
              (FVar2 = (FName)pFVar17->Connection, local_468 = FVar2, FVar2 != (FName)0x0)) &&
             (bVar8 = UE::Dataflow::AreTypesCompatible
                                (*(FName *)((longlong)FVar2 + 0x40),(FName)this_00->_padding_),
             bVar8)) {
            TMulticastDelegateRegistration<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy>
            ::
            AddLambda<_UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph_::__l2::<lambda_1>_&>
                      ((TMulticastDelegateRegistration<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy>
                        *)&local_220,&local_470);
            TMulticastDelegateRegistration<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy>
            ::
            AddLambda<_UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph_::__l2::<lambda_2>_&>
                      ((TMulticastDelegateRegistration<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy>
                        *)&local_200,(<lambda_2> *)local_440);
            TMulticastDelegateRegistration<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy>
            ::
            AddLambda<_UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::EvaluateSubGraph_::__l2::<lambda_3>_&>
                      ((TMulticastDelegateRegistration<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy>
                        *)local_1e0,(<lambda_3> *)(local_440 + 8));
            cVar9 = (**(code **)(local_3c0.DebugPtr + 2))(&local_3c0,FVar2);
            if (cVar9 != '\0') {
              local_488 = (TObjectPtr<UObject>_u_0 *)
                          FDataflowConnection::GetOwningNodeTimestamp
                                    ((FDataflowConnection *)this_00);
              uVar11 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
              pFVar18 = FDataflowConnection::GetOwningNodeGuid
                                  ((FDataflowConnection *)this_00,&local_3d0);
              pFVar3 = (FProperty *)this_00->_padding_;
              uVar15 = CityHash64((char *)&this_00->_padding_,0x10);
              pFVar7 = local_50;
              uVar19 = CityHash64((char *)((longlong)local_468 + 0x18),0x10);
              UE::Dataflow::FContext::CopyDataToAnotherContext
                        ((FContext *)&local_3c0.ObjectPtr,(uint)uVar19,pFVar7,(uint)uVar15,pFVar3,
                         pFVar18,uVar11,(FTimestamp *)&local_488->ObjectPtr);
              this_02 = local_498;
              this = local_448;
              FVar21.Data = (FScriptContainerElement *)local_490;
            }
            if (local_4a8 != '\0') {
              ::FString::FString(&local_408,
                                 L"Subgraph call evaluation returned errors : see the details above"
                                );
              UE::Dataflow::FContext::Error(local_50,&local_408,(FDataflowNode *)this,this_00);
              if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_408.Data.AllocatorInstance.Data);
              }
            }
            if (local_4a7[0] != '\0') {
              ::FString::FString(&local_3f8,
                                 L"Subgraph call evaluation returned warning errors : see the details above"
                                );
              UE::Dataflow::FContext::Warning(local_50,&local_3f8,(FDataflowNode *)this,this_00);
              if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
              }
            }
            FVar5.ID._4_4_ = local_470.__this._4_4_;
            FVar5.ID._0_4_ = (uint)local_470.__this;
            if (FVar5.ID != 0) {
              TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                        (&local_220,FVar5);
            }
            if (local_440._0_8_ != 0) {
              TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                        (&local_200,(FDelegateHandle)local_440._0_8_);
            }
            if (local_440._8_8_ != 0) {
              TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                        (local_1e0,(FDelegateHandle)local_440._8_8_);
            }
          }
        }
        FVar21.Data = FVar21.Data + 8;
      }
      UE::Dataflow::FContext::ClearAllData((FContext *)&local_3c0.ObjectPtr);
      uVar11 = (int)local_450 + 1;
      uVar20 = (ulonglong)uVar11;
      this_04 = local_430;
      local_450 = uVar20;
    } while ((int)uVar11 < local_4a0);
  }
  else {
    FDataflowNode::GetInputs((FDataflowNode *)this,&local_460);
    local_470.__this._0_4_ = local_460.ArrayNum;
    uVar20 = (ulonglong)(int)(uint)local_470.__this;
    local_488 = (TObjectPtr<UObject>_u_0 *)(local_460.AllocatorInstance.Data + uVar20 * 8);
    FVar21.Data = local_460.AllocatorInstance.Data;
    while( true ) {
      pTVar1 = local_488;
      if (local_460.ArrayNum != (int)uVar20) {
        local_4a7[1] = 0;
        `TCheckedPointerIterator<FDataflowInput_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_4a7 + 1);
      }
      pFVar17 = (FDataflowInput *)0x0;
      if ((TObjectPtr<UObject>_u_0 *)FVar21.Data == pTVar1) break;
      pFVar17 = *(FDataflowInput **)FVar21.Data;
      local_468 = (FName)pFVar17->_padding_;
      this_03 = ::FName::ToString(&local_468,&local_3e0);
      sVar14 = wcslen(L"TArray<");
      bVar8 = ::FString::StartsWith(this_03,L"TArray<",(int)sVar14,IgnoreCase);
      if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
      }
      if (bVar8) break;
      FVar21.Data = FVar21.Data + 8;
      uVar20 = (ulonglong)(uint)local_470.__this;
    }
    if ((TObjectPtr<UObject>_u_0 *)local_460.AllocatorInstance.Data !=
        (TObjectPtr<UObject>_u_0 *)0x0) {
      FMemory::Free(local_460.AllocatorInstance.Data);
    }
    this_02 = local_498;
    if (pFVar17 == (FDataflowInput *)0x0) goto LAB_1462c52fc;
    cVar9 = (**(code **)(pFVar17->_padding_ + 0x28))(pFVar17);
    if (cVar9 != '\0') {
      FDataflowInput::PullValue(pFVar17,param_1);
      if ((pFVar17->Connection == (FDataflowOutput *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("FirstArrayInput->GetConnection()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Engine\\Private\\Dataflow\\DataflowSubGraphNodes.cpp"
                             ,0x26f,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = *(code **)(param_1->_padding_ + 0x30);
      uVar15 = CityHash64((char *)&pFVar17->Connection->_padding_,0x10);
      plVar16 = (longlong *)(*pcVar4)(param_1,uVar15);
      this_02 = local_498;
      if ((plVar16 == (longlong *)0x0) ||
         (plVar16 = (longlong *)*plVar16, plVar16 == (longlong *)0x0)) goto LAB_1462c52fc;
      iVar10 = (**(code **)(*plVar16 + 0x20))(plVar16,param_1);
      this_02 = local_498;
      local_4a0 = iVar10;
      goto LAB_1462c5301;
    }
    FDataflowNode::GetOutputs((FDataflowNode *)this,&local_480);
LAB_1462c5238:
    iVar10 = local_480.ArrayNum;
    pTVar1 = (TObjectPtr<UObject>_u_0 *)
             (local_480.AllocatorInstance.Data + (longlong)local_480.ArrayNum * 8);
    FVar21.Data = local_480.AllocatorInstance.Data;
    while( true ) {
      if (local_480.ArrayNum != iVar10) {
        `TCheckedPointerIterator<FDataflowOutput_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_4a4);
      }
      if ((TObjectPtr<UObject>_u_0 *)FVar21.Data == pTVar1) break;
      if (*(FDataflowOutput **)FVar21.Data != (FDataflowOutput *)0x0) {
        FDataflowOutput::SetNullValue(*(FDataflowOutput **)FVar21.Data,param_1);
      }
      FVar21.Data = FVar21.Data + 8;
    }
  }
  if ((TObjectPtr<UObject>_u_0 *)local_480.AllocatorInstance.Data != (TObjectPtr<UObject>_u_0 *)0x0)
  {
    FMemory::Free(local_480.AllocatorInstance.Data);
  }
  local_3c0.DebugPtr =
       (UObject *)
       &UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::
        _vftable__for__UE__Dataflow__IContextCacheStore__;
  local_3b8 = &UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::
               _vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
  UE::Dataflow::FContext::~FContext((FContext *)&local_3c0.ObjectPtr);
LAB_1462c55d3:
  UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_04);
  return;
}

// PostSerialize @ 1462c5620

void __thiscall
FDataflowCallSubGraphNode::PostSerialize(FDataflowCallSubGraphNode *this,FArchive *param_1)

{
  if ((param_1->field_0x28 & 1) != 0) {
    SetSubGraphGuid(this,&this->SubGraphGuid);
    return;
  }
  return;
}

// EvaluateParentContext @ 1462c5640

void __thiscall
FDataflowCallSubGraphNode::EvaluateParentContext
          (FDataflowCallSubGraphNode *this,FContext *param_1,FContext *param_2,
          FDataflowOutput *param_3)

{
  code *pcVar1;
  FProperty *pFVar2;
  char cVar3;
  uint uVar4;
  FDataflowOutput *pFVar5;
  FDataflowInput *this_00;
  FTimestamp FVar6;
  FGuid *pFVar7;
  ulong64 uVar8;
  ulong64 uVar9;
  FContext *pFVar10;
  bool bVar11;
  FName local_res8;
  FContext *local_res10;
  FGuid local_48;
  
  bVar11 = true;
  pcVar1 = *(code **)(param_2->_padding_ + 0x18);
  local_res10 = param_1;
  ::FName::FName(&local_res8,"FContextSubGraph");
  cVar3 = (*pcVar1)(param_2,local_res8);
  pFVar10 = param_2;
  if (cVar3 == '\0') {
    pFVar10 = (FContext *)0x0;
  }
  if (pFVar10 != (FContext *)0x0) {
    bVar11 = (int)pFVar10[1]._padding_ == 0;
  }
  pFVar5 = FDataflowNode::FindOutput((FDataflowNode *)&this[-1]._padding_,(FName)param_3->_padding_)
  ;
  if ((bVar11) || (pFVar5 == (FDataflowOutput *)0x0)) {
    this_00 = FDataflowNode::FindInput
                        ((FDataflowNode *)&this[-1]._padding_,(FName)param_3->_padding_);
    if (this_00 == (FDataflowInput *)0x0) goto LAB_1462c5777;
    FDataflowInput::PullValue(this_00,param_1);
    pFVar5 = this_00->Connection;
    if (pFVar5 == (FDataflowOutput *)0x0) goto LAB_1462c5777;
  }
  FVar6 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)param_3);
  uVar4 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)param_3);
  pFVar7 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)param_3,&local_48);
  pFVar2 = (FProperty *)param_3->_padding_;
  uVar8 = CityHash64((char *)&param_3->_padding_,0x10);
  uVar9 = CityHash64((char *)&pFVar5->_padding_,0x10);
  bVar11 = UE::Dataflow::FContext::CopyDataToAnotherContext
                     (local_res10,(uint)uVar9,param_2,(uint)uVar8,pFVar2,pFVar7,uVar4,
                      (FTimestamp *)FVar6.Value);
  if (bVar11) {
    return;
  }
LAB_1462c5777:
  FDataflowOutput::SetNullValue(param_3,param_2);
  return;
}

// GetOwner @ 1462c57a0

FDataflowNode * __thiscall
FDataflowCallSubGraphNode::GetOwner
          (FDataflowCallSubGraphNode *this,FDataflowDynamicConnections *param_1)

{
  return (FDataflowNode *)&this[-1]._padding_;
}

// GetPropertyBag @ 1462c57b0

FInstancedPropertyBag * __thiscall
FDataflowCallSubGraphNode::GetPropertyBag
          (FDataflowCallSubGraphNode *this,FDataflowDynamicConnections *param_1)

{
  UObject *pUVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *local_res8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FInstancedStruct::FInstancedStruct(&DefaultPropertyBag.Value);
      atexit(`FDataflowCallSubGraphNode::GetPropertyBag'::__l2::
             _dynamic_atexit_destructor_for__DefaultPropertyBag__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
  pUVar1 = *TVar2.Object;
  *(undefined8 *)TVar2.Object = 0;
  if (local_res8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
  }
  if (pUVar1 != (UObject *)0x0) {
    if (param_1 == (FDataflowDynamicConnections *)&this->_padding_) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
      return (FInstancedPropertyBag *)&this->_padding_;
    }
    if (param_1 == (FDataflowDynamicConnections *)&this->_padding_) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
      return (FInstancedPropertyBag *)&this->_padding_;
    }
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
  }
  return &DefaultPropertyBag;
}

// FDataflowCallSubGraphNode @ 1462cd3a0

FDataflowCallSubGraphNode * __thiscall
FDataflowCallSubGraphNode::FDataflowCallSubGraphNode
          (FDataflowCallSubGraphNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  int iVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  UObject *local_res8;
  FGuid local_28;
  
  local_28.A = param_2->A;
  local_28.B = param_2->B;
  local_28.C = param_2->C;
  local_28.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_28);
  pUVar4 = (UObject *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FDataflowNode__;
  (this->SubGraphGuid).A = 0;
  (this->SubGraphGuid).B = 0;
  this->_padding_ = (longlong)&_vftable__for__FDataflowDynamicConnections__IOwnerInterface__;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__ISubGraphContextCallback__;
  (this->SubGraphGuid).C = 0;
  (this->SubGraphGuid).D = 0;
  (this->SubGraphName).ComparisonIndex = 0;
  (this->SubGraphName).Number = 0;
  pUVar3 = param_1->OwningObject;
  if (pUVar3 == (UObject *)0x0) {
LAB_1462cd438:
    pUVar3 = pUVar4;
  }
  else {
    pUVar2 = UDataflow::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_)) goto LAB_1462cd438;
  }
  (this->DynamicInputs).DynamicProperties.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicInputs).DynamicProperties.ArrayNum = 0;
  (this->DynamicInputs).DynamicProperties.ArrayMax = 0;
  *(undefined8 *)&(this->DynamicInputs).ConnectionNameToPropertyId = 0;
  *(undefined8 *)&(this->DynamicInputs).ConnectionNameToPropertyId.field_0x8 = 0;
  *(undefined8 *)&(this->DynamicInputs).ConnectionNameToPropertyId.field_0x20 = 0;
  *(undefined4 *)&(this->DynamicInputs).ConnectionNameToPropertyId.field_0x28 = 0;
  *(undefined4 *)&(this->DynamicInputs).ConnectionNameToPropertyId.field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicInputs).ConnectionNameToPropertyId.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicInputs).ConnectionNameToPropertyId.field_0x34 = 0;
  *(undefined8 *)&(this->DynamicInputs).ConnectionNameToPropertyId.field_0x40 = 0;
  *(undefined4 *)&(this->DynamicInputs).ConnectionNameToPropertyId.field_0x48 = 0;
  (this->DynamicInputs).PinDirection = INPUT;
  (this->DynamicInputs).OwnerInterface = (IOwnerInterface *)&this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  (this->DynamicInputs).DataflowAssetWeakPtr.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=
            (&(this->DynamicInputs).DataflowAssetWeakPtr.WeakPtr,(FObjectPtr)&local_res8);
  FInstancedStruct::FInstancedStruct(&(this->InputsPropertyBag).Value);
  pUVar3 = param_1->OwningObject;
  if (pUVar3 == (UObject *)0x0) {
LAB_1462cd51d:
    pUVar3 = pUVar4;
  }
  else {
    pUVar2 = UDataflow::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_)) goto LAB_1462cd51d;
  }
  (this->DynamicOutputs).DynamicProperties.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicOutputs).DynamicProperties.ArrayNum = 0;
  (this->DynamicOutputs).DynamicProperties.ArrayMax = 0;
  *(undefined8 *)&(this->DynamicOutputs).ConnectionNameToPropertyId = 0;
  *(undefined8 *)&(this->DynamicOutputs).ConnectionNameToPropertyId.field_0x8 = 0;
  *(undefined8 *)&(this->DynamicOutputs).ConnectionNameToPropertyId.field_0x20 = 0;
  *(undefined4 *)&(this->DynamicOutputs).ConnectionNameToPropertyId.field_0x28 = 0;
  *(undefined4 *)&(this->DynamicOutputs).ConnectionNameToPropertyId.field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicOutputs).ConnectionNameToPropertyId.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicOutputs).ConnectionNameToPropertyId.field_0x34 = 0;
  *(undefined8 *)&(this->DynamicOutputs).ConnectionNameToPropertyId.field_0x40 = 0;
  *(undefined4 *)&(this->DynamicOutputs).ConnectionNameToPropertyId.field_0x48 = 0;
  (this->DynamicOutputs).PinDirection = OUTPUT;
  (this->DynamicOutputs).OwnerInterface = (IOwnerInterface *)&this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  (this->DynamicOutputs).DataflowAssetWeakPtr.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=
            (&(this->DynamicOutputs).DataflowAssetWeakPtr.WeakPtr,(FObjectPtr)&local_res8);
  FInstancedStruct::FInstancedStruct(&(this->OutputsPropertyBag).Value);
  (this->DataflowAssetWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OnGraphChangedHandle).ID = 0;
  pUVar3 = param_1->OwningObject;
  if (pUVar3 != (UObject *)0x0) {
    pUVar2 = UDataflow::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       (local_res8 = pUVar3,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar2->_padding_)) goto LAB_1462cd61a;
  }
  local_res8 = pUVar4;
LAB_1462cd61a:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(this->DataflowAssetWeakPtr).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// FDataflowCallSubGraphNode @ 1462cd670

FDataflowCallSubGraphNode * __thiscall
FDataflowCallSubGraphNode::FDataflowCallSubGraphNode(FDataflowCallSubGraphNode *this)

{
  TWeakObjectPtr<UDataflow,FWeakObjectPtr> *pTVar1;
  undefined8 local_res8;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&_vftable__for__FDataflowNode__;
  pTVar1 = &(this->DynamicInputs).DataflowAssetWeakPtr;
  (this->SubGraphGuid).A = 0;
  (this->SubGraphGuid).B = 0;
  this->_padding_ = (longlong)&_vftable__for__FDataflowDynamicConnections__IOwnerInterface__;
  (this->SubGraphGuid).C = 0;
  (this->SubGraphGuid).D = 0;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__ISubGraphContextCallback__;
  (this->SubGraphName).ComparisonIndex = 0;
  (this->SubGraphName).Number = 0;
  (this->DynamicInputs).DynamicProperties.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicInputs).DynamicProperties.ArrayNum = 0;
  (this->DynamicInputs).DynamicProperties.ArrayMax = 0;
  *(undefined8 *)&(this->DynamicInputs).ConnectionNameToPropertyId = 0;
  *(undefined8 *)&(this->DynamicInputs).ConnectionNameToPropertyId.field_0x8 = 0;
  *(undefined8 *)&(this->DynamicInputs).ConnectionNameToPropertyId.field_0x20 = 0;
  *(undefined4 *)&(this->DynamicInputs).ConnectionNameToPropertyId.field_0x28 = 0;
  *(undefined4 *)&(this->DynamicInputs).ConnectionNameToPropertyId.field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicInputs).ConnectionNameToPropertyId.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicInputs).ConnectionNameToPropertyId.field_0x34 = 0;
  *(undefined8 *)&(this->DynamicInputs).ConnectionNameToPropertyId.field_0x40 = 0;
  *(undefined4 *)&(this->DynamicInputs).ConnectionNameToPropertyId.field_0x48 = 0;
  (this->DynamicInputs).PinDirection = NONE;
  (this->DynamicInputs).OwnerInterface = (IOwnerInterface *)0x0;
  pTVar1->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&pTVar1->WeakPtr,(FObjectPtr)&local_res8);
  FInstancedStruct::FInstancedStruct(&(this->InputsPropertyBag).Value);
  (this->DynamicOutputs).DynamicProperties.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &(this->DynamicOutputs).DataflowAssetWeakPtr;
  (this->DynamicOutputs).DynamicProperties.ArrayNum = 0;
  (this->DynamicOutputs).DynamicProperties.ArrayMax = 0;
  *(undefined8 *)&(this->DynamicOutputs).ConnectionNameToPropertyId = 0;
  *(undefined8 *)&(this->DynamicOutputs).ConnectionNameToPropertyId.field_0x8 = 0;
  *(undefined8 *)&(this->DynamicOutputs).ConnectionNameToPropertyId.field_0x20 = 0;
  *(undefined4 *)&(this->DynamicOutputs).ConnectionNameToPropertyId.field_0x28 = 0;
  *(undefined4 *)&(this->DynamicOutputs).ConnectionNameToPropertyId.field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicOutputs).ConnectionNameToPropertyId.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicOutputs).ConnectionNameToPropertyId.field_0x34 = 0;
  *(undefined8 *)&(this->DynamicOutputs).ConnectionNameToPropertyId.field_0x40 = 0;
  *(undefined4 *)&(this->DynamicOutputs).ConnectionNameToPropertyId.field_0x48 = 0;
  (this->DynamicOutputs).PinDirection = NONE;
  (this->DynamicOutputs).OwnerInterface = (IOwnerInterface *)0x0;
  pTVar1->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&pTVar1->WeakPtr,(FObjectPtr)&local_res8);
  FInstancedStruct::FInstancedStruct(&(this->OutputsPropertyBag).Value);
  (this->DataflowAssetWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OnGraphChangedHandle).ID = 0;
  return this;
}

// ~FDataflowCallSubGraphNode @ 1462cfc30

void __thiscall
FDataflowCallSubGraphNode::~FDataflowCallSubGraphNode(FDataflowCallSubGraphNode *this)

{
  UDataflow *this_00;
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  UDataflowSubGraph *this_01;
  UObject *local_res8;
  
  this->_padding_ = (longlong)&_vftable__for__FDataflowNode__;
  this_01 = (UDataflowSubGraph *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FDataflowDynamicConnections__IOwnerInterface__;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__ISubGraphContextCallback__;
  TVar3 = FWeakObjectPtr::Pin(&(this->DataflowAssetWeakPtr).WeakPtr);
  this_00 = *(UDataflow **)TVar3.Object;
  *(undefined8 *)TVar3.Object = 0;
  if (local_res8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
  }
  if (this_00 != (UDataflow *)0x0) {
    this_01 = UDataflow::FindSubGraphByGuid(this_00,&this->SubGraphGuid);
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDataflowAssetDelegates::OnSubGraphsChanged,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDataflowSubGraphDelegates::OnSubGraphLoaded,this);
  if (this_01 != (UDataflowSubGraph *)0x0) {
    UEdGraph::RemoveOnGraphChangedHandler
              ((UEdGraph *)this_01,(FDelegateHandle)(this->OnGraphChangedHandle).ID);
  }
  FInstancedStruct::Reset(&(this->OutputsPropertyBag).Value);
  *(undefined4 *)&(this->DynamicOutputs).ConnectionNameToPropertyId.field_0x48 = 0;
  pvVar1 = *(void **)&(this->DynamicOutputs).ConnectionNameToPropertyId.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->DynamicOutputs).ConnectionNameToPropertyId);
  pFVar2 = (this->DynamicOutputs).DynamicProperties.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FInstancedStruct::Reset(&(this->InputsPropertyBag).Value);
  *(undefined4 *)&(this->DynamicInputs).ConnectionNameToPropertyId.field_0x48 = 0;
  pvVar1 = *(void **)&(this->DynamicInputs).ConnectionNameToPropertyId.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->DynamicInputs).ConnectionNameToPropertyId);
  pFVar2 = (this->DynamicInputs).DynamicProperties.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

// IsValid @ 1462dfe70

bool __thiscall FDataflowCallSubGraphNode::IsValid(FDataflowCallSubGraphNode *this)

{
  return (((this->SubGraphGuid).D != 0 || (this->SubGraphGuid).C != 0) ||
         (this->SubGraphGuid).B != 0) || (this->SubGraphGuid).A != 0;
}

// OnSomeSubGraphsChanged @ 1462e0360

void __thiscall
FDataflowCallSubGraphNode::OnSomeSubGraphsChanged
          (FDataflowCallSubGraphNode *this,UDataflow *param_1,FGuid *param_2,
          ESubGraphChangedReason param_3)

{
  FGuid local_18;
  
  if (((((this->SubGraphGuid).D == param_2->D && (this->SubGraphGuid).C == param_2->C) &&
       (this->SubGraphGuid).B == param_2->B) && param_2->A == (this->SubGraphGuid).A) &&
     (param_3 == Deleting)) {
    local_18.A = 0;
    local_18.B = 0;
    local_18.C = 0;
    local_18.D = 0;
    SetSubGraphGuid(this,&local_18);
  }
  return;
}

// OnSubGraphChanged @ 1462e03c0

void __thiscall
FDataflowCallSubGraphNode::OnSubGraphChanged
          (FDataflowCallSubGraphNode *this,FEdGraphEditAction *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 *puVar4;
  UDataflowEdNode *this_00;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  TSet<UEdGraphNode_const_*,DefaultKeyFuncs<UEdGraphNode_const_*,0>,FDefaultSetAllocator> *pTVar10;
  TSet<UEdGraphNode_const_*,DefaultKeyFuncs<UEdGraphNode_const_*,0>,FDefaultSetAllocator> *pTVar11;
  FDataflowNode *pFVar12;
  bool bVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  UClass *pUVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  int iVar22;
  uint *puVar23;
  undefined1 local_res10 [8];
  int local_res18;
  TSet<UEdGraphNode_const_*,DefaultKeyFuncs<UEdGraphNode_const_*,0>,FDefaultSetAllocator>
  *local_res20;
  undefined4 uStack_9c;
  FName local_98;
  FName local_90;
  TSet<UEdGraphNode_const_*,DefaultKeyFuncs<UEdGraphNode_const_*,0>,FDefaultSetAllocator> *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  TSharedPtr<FDataflowNode_const_,1> local_58;
  
  iVar20 = 0;
  local_res20 = &param_1->Nodes;
  iVar3 = *(int *)&(param_1->Nodes).Elements.field_0x28;
  puVar1 = &(param_1->Nodes).Elements.field_0x10;
  bVar7 = false;
  bVar9 = false;
  bVar8 = false;
  uVar15 = 1;
  iVar22 = 0;
  iVar16 = 0;
  if (iVar3 != 0) {
    puVar23 = *(uint **)&(param_1->Nodes).Elements.field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar19 = *puVar23;
    while (uVar19 == 0) {
      iVar20 = iVar20 + 1;
      iVar22 = iVar22 + 0x20;
      iVar16 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_1462e046c;
      uVar19 = puVar23[iVar20];
    }
    uVar15 = ~(uVar19 - 1) & uVar19;
    uVar2 = (ulonglong)uVar15 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_res18 = (int)lVar5;
    iVar16 = local_res18 + -1 + iVar22;
    if (iVar3 < iVar16) {
      iVar16 = iVar3;
    }
  }
LAB_1462e046c:
  uVar19 = *(uint *)&(param_1->Nodes).Elements.field_0x28;
  uVar18 = uVar19 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uVar15,iVar20);
  TStack_80.CurrentBitIndex = iVar16;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar19 >> 5;
  TStack_80._28_4_ = iVar16;
  TStack_80.BaseBitIndex = iVar22;
  uStack_60 = CONCAT44(uStack_9c,
                       *(int *)&(param_1->Nodes).Elements.field_0x8 -
                       *(int *)&(param_1->Nodes).Elements.field_0x34);
  local_88 = local_res20;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar19 < 0) || (iVar3 < (int)uVar19)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar10 = local_res20;
  uVar15 = *(uint *)&(param_1->Nodes).Elements.field_0x28;
  if (uVar19 != uVar15) {
    puVar4 = *(undefined1 **)&(param_1->Nodes).Elements.field_0x20;
    puVar21 = puVar1;
    if (puVar4 != (undefined1 *)0x0) {
      puVar21 = puVar4;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar20 * 4);
    while (uVar19 == 0) {
      iVar20 = iVar20 + 1;
      uVar18 = uVar18 + 0x20;
      uVar19 = uVar15;
      if ((int)(((int)(uVar15 - 1) >> 0x1f & 0x1fU) + (uVar15 - 1)) >> 5 < iVar20)
      goto LAB_1462e055d;
      uVar19 = *(uint *)(puVar21 + (longlong)iVar20 * 4);
    }
    uVar2 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar19 = (int)lVar5 + -1 + uVar18;
    if ((int)uVar15 < (int)uVar19) {
      uVar19 = uVar15;
    }
  }
LAB_1462e055d:
  while( true ) {
    pTVar11 = local_88;
    if (*(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34 !=
        (int)uStack_60) {
      `TSparseArray<TSparseSetElement<UEdGraphNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_80.CurrentBitIndex == uVar19) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar10)
       ) break;
    this_00 = *(UDataflowEdNode **)
               (*(longlong *)&pTVar11->Elements + (longlong)TStack_80.CurrentBitIndex * 0x10);
    if (this_00 != (UDataflowEdNode *)0x0) {
      pUVar17 = UDataflowEdNode::StaticClass();
      iVar3 = (int)pUVar17->_padding_;
      if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar17->_padding_)) {
        UDataflowEdNode::GetDataflowNode(this_00,&local_58);
        pFVar12 = local_58.Object;
        if (local_58.Object != (FDataflowNode *)0x0) {
          ::FName::FName(&local_98,"FDataflowSubGraphInputNode");
          cVar14 = (**(code **)(pFVar12->_padding_ + 0x128))(pFVar12,local_98);
          if (cVar14 == '\0') {
            ::FName::FName(&local_90,"FDataflowSubGraphOutputNode");
            cVar14 = (**(code **)(pFVar12->_padding_ + 0x128))(pFVar12,local_90);
            bVar8 = bVar9;
            if (cVar14 != '\0') {
              bVar9 = true;
              bVar8 = true;
            }
          }
          else {
            bVar7 = true;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
      }
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  if (bVar7) {
    SyncInputsPropertyBagWithSubGraph(this);
  }
  if (bVar8) {
    SyncOutputsPropertyBagWithSubGraph(this);
  }
  return;
}

// OnSubGraphLoaded @ 1462e06a0

void __thiscall
FDataflowCallSubGraphNode::OnSubGraphLoaded
          (FDataflowCallSubGraphNode *this,UDataflowSubGraph *param_1)

{
  if ((((param_1->SubGraphGuid).D == (this->SubGraphGuid).D &&
       (param_1->SubGraphGuid).C == (this->SubGraphGuid).C) &&
      (param_1->SubGraphGuid).B == (this->SubGraphGuid).B) &&
      (param_1->SubGraphGuid).A == (this->SubGraphGuid).A) {
    SetSubGraphGuid(this,&this->SubGraphGuid);
    return;
  }
  return;
}

// RefreshSubGraphName @ 1462e2cb0

/* WARNING: Removing unreachable block (ram,0x0001462e2cf7) */

void __thiscall FDataflowCallSubGraphNode::RefreshSubGraphName(FDataflowCallSubGraphNode *this)

{
  UDataflow *this_00;
  undefined4 uVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UDataflowSubGraph *pUVar3;
  
  (this->SubGraphName).ComparisonIndex = 0;
  (this->SubGraphName).Number = 0;
  TVar2 = FWeakObjectPtr::Pin(&(this->DataflowAssetWeakPtr).WeakPtr);
  this_00 = *(UDataflow **)TVar2.Object;
  *(undefined8 *)TVar2.Object = 0;
  if (this_00 != (UDataflow *)0x0) {
    pUVar3 = UDataflow::FindSubGraphByGuid(this_00,&this->SubGraphGuid);
    if (pUVar3 != (UDataflowSubGraph *)0x0) {
      uVar1 = *(undefined4 *)((longlong)&pUVar3->_padding_ + 4);
      (this->SubGraphName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar3->_padding_;
      (this->SubGraphName).Number = uVar1;
    }
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
  }
  return;
}

// RegisterHandlers @ 1462e2db0

void __thiscall
FDataflowCallSubGraphNode::RegisterHandlers
          (FDataflowCallSubGraphNode *this,UDataflowSubGraph *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDelegateHandle FVar5;
  TDelegate<void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy> local_res8;
  ulonglong uStack_90;
  ulonglong uStack_80;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  if ((((this->SubGraphGuid).D != 0 || (this->SubGraphGuid).C != 0) || (this->SubGraphGuid).B != 0)
      || (this->SubGraphGuid).A != 0) {
    if (param_1 != (UDataflowSubGraph *)0x0) {
      uStack_90 = uStack_80 & 0xffffffff00000000;
      local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_70.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_48);
      local_30 = &local_70;
      puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_70);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBUFEdGraphEditAction___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_UFDataflowCallSubGraphNode____A6AXAEBUFEdGraphEditAction___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar3[3] = this;
        puVar3[4] = OnSubGraphChanged;
        puVar3[5] = uStack_90;
        if ((this == (FDataflowCallSubGraphNode *)0x0) || (puVar3[4] == 0)) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && MethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                             ,0x1d8,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
      FVar5 = UEdGraph::AddOnGraphChangedHandler((UEdGraph *)param_1,&local_res8);
                    /* WARNING: Load size is inaccurate */
      (this->OnGraphChangedHandle).ID = *FVar5.ID;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_60);
      if ((local_70.DelegateSize != 0) &&
         (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_70,0,0,0x10);
        local_70.DelegateSize = 0;
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_70.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
    }
    TMulticastDelegateRegistration<void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
    ::AddRaw<FDataflowCallSubGraphNode>
              ((TMulticastDelegateRegistration<void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
                *)&FDataflowSubGraphDelegates::OnSubGraphLoaded,
               (FDataflowCallSubGraphNode *)&local_res8.field_0x10,(pmf_5aac991b *)this);
    TMulticastDelegateRegistration<void___cdecl(UDataflow_const_*,FGuid_const_&,enum_UE::Dataflow::ESubGraphChangedReason),FDefaultDelegateUserPolicy>
    ::AddRaw<FDataflowCallSubGraphNode>
              (&FDataflowAssetDelegates::OnSubGraphsChanged,
               (FDataflowCallSubGraphNode *)&stack0x00000020,(pmf_3d7f77d8 *)this);
  }
  return;
}

// SetSubGraphGuid @ 1462e5a60

void __thiscall
FDataflowCallSubGraphNode::SetSubGraphGuid(FDataflowCallSubGraphNode *this,FGuid *param_1)

{
  FGuid *pFVar1;
  UDataflow *this_00;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar7;
  UDataflowSubGraph *pUVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  FDelegateHandle FVar11;
  FName FVar12;
  UObject *local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  FDelegateAllocation local_c0;
  code *local_a8;
  ulonglong uStack_a0;
  undefined1 local_98 [40];
  FMRSWRecursiveAccessDetector *local_70;
  char local_68;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  TVar7 = FWeakObjectPtr::Pin(&(this->DataflowAssetWeakPtr).WeakPtr);
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
  this_00 = *(UDataflow **)TVar7.Object;
  *(undefined8 *)TVar7.Object = 0;
  if (local_res8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
  }
  if (this_00 != (UDataflow *)0x0) {
    pFVar1 = &this->SubGraphGuid;
    pUVar8 = UDataflow::FindSubGraphByGuid(this_00,pFVar1);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FDataflowAssetDelegates::OnSubGraphsChanged,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FDataflowSubGraphDelegates::OnSubGraphLoaded,this);
    if (pUVar8 != (UDataflowSubGraph *)0x0) {
      UEdGraph::RemoveOnGraphChangedHandler
                ((UEdGraph *)pUVar8,(FDelegateHandle)(this->OnGraphChangedHandle).ID);
    }
    uVar3 = param_1->B;
    uVar4 = param_1->C;
    uVar5 = param_1->D;
    pFVar1->A = param_1->A;
    pFVar1->B = uVar3;
    (this->SubGraphGuid).C = uVar4;
    (this->SubGraphGuid).D = uVar5;
    pUVar8 = UDataflow::FindSubGraphByGuid(this_00,pFVar1);
    if ((((this->SubGraphGuid).D != 0 || (this->SubGraphGuid).C != 0) || (this->SubGraphGuid).B != 0
        ) || pFVar1->A != 0) {
      if (pUVar8 != (UDataflowSubGraph *)0x0) {
        local_98._8_4_ = 0;
        local_98._0_8_ = OnSubGraphChanged;
        local_98._12_4_ = local_98._28_4_;
        local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_c0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_c8,(FWriteAccessScope *)&local_60);
        local_48 = &local_c0;
        puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_c0);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBUFEdGraphEditAction___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar10 = FDelegateHandle::GenerateNewID();
          puVar9[2] = uVar10;
          puVar9[4] = local_98._0_8_;
          puVar9[5] = CONCAT44(local_98._12_4_,local_98._8_4_);
          *puVar9 = &
                    ___7__TBaseRawMethodDelegateInstance__0A_UFDataflowCallSubGraphNode____A6AXAEBUFEdGraphEditAction___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar9[3] = this;
          if (puVar9[4] == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InUserObject != nullptr && MethodPtr != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                               ,0x1d8,L"");
            if (bVar6) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
        if (local_60.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
        }
        FVar11 = UEdGraph::AddOnGraphChangedHandler
                           ((UEdGraph *)pUVar8,
                            (TDelegate<void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
                             *)&stack0x00000018);
                    /* WARNING: Load size is inaccurate */
        (this->OnGraphChangedHandle).ID = *FVar11.ID;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_c8,(FWriteAccessScope *)(local_98 + 0x20));
        if ((local_c0.DelegateSize != 0) &&
           (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_c0,0,0,0x10);
          local_c0.DelegateSize = 0;
        }
        if (local_68 == '\0') {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    (local_70,(FDestructionSentinel *)(local_98 + 0x20));
        }
        if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_c0.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
      }
      uStack_a0 = uStack_a0 & 0xffffffff00000000;
      local_a8 = OnSubGraphLoaded;
      TMulticastDelegateRegistration<void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
      ::AddRaw<FDataflowCallSubGraphNode>
                ((TMulticastDelegateRegistration<void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
                  *)&FDataflowSubGraphDelegates::OnSubGraphLoaded,
                 (FDataflowCallSubGraphNode *)&stack0x00000020,(pmf_5aac991b *)this);
      uStack_a0 = uStack_a0 & 0xffffffff00000000;
      local_a8 = OnSomeSubGraphsChanged;
      local_98._16_8_ = OnSomeSubGraphsChanged;
      local_98._24_8_ = uStack_a0;
      TMulticastDelegateRegistration<void___cdecl(UDataflow_const_*,FGuid_const_&,enum_UE::Dataflow::ESubGraphChangedReason),FDefaultDelegateUserPolicy>
      ::AddRaw<FDataflowCallSubGraphNode>
                (&FDataflowAssetDelegates::OnSubGraphsChanged,(FDataflowCallSubGraphNode *)local_98,
                 (pmf_3d7f77d8 *)this);
    }
    if (pUVar8 != (UDataflowSubGraph *)0x0) {
      FVar12 = (FName)pUVar8->_padding_;
    }
    this->SubGraphName = FVar12;
    SyncInputsPropertyBagWithSubGraph(this);
    SyncOutputsPropertyBagWithSubGraph(this);
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
  }
  return;
}

// SyncInputsPropertyBagWithSubGraph @ 1462e6320

void __thiscall
FDataflowCallSubGraphNode::SyncInputsPropertyBagWithSubGraph(FDataflowCallSubGraphNode *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  UDataflow *this_00;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  FGraph *this_01;
  FDataflowNode *pFVar6;
  char cVar7;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar8;
  UDataflowSubGraph *pUVar9;
  UClass *pUVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  UObject *local_res8;
  FName local_res10;
  TSharedPtr<FDataflowNode,1> local_58;
  FGuid local_48;
  
  TVar8 = FWeakObjectPtr::Pin(&(this->DataflowAssetWeakPtr).WeakPtr);
  this_00 = *(UDataflow **)TVar8.Object;
  *(undefined8 *)TVar8.Object = 0;
  if (local_res8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
  }
  if (this_00 != (UDataflow *)0x0) {
    pUVar9 = UDataflow::FindSubGraphByGuid(this_00,&this->SubGraphGuid);
    if (pUVar9 != (UDataflowSubGraph *)0x0) {
      FInstancedStruct::Reset(&(this->InputsPropertyBag).Value);
      plVar12 = (longlong *)pUVar9->_padding_;
      iVar2 = (int)pUVar9->_padding_;
      plVar1 = plVar12 + iVar2;
      do {
        if ((int)pUVar9->_padding_ != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UEdGraphNode>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res8);
        }
        if (plVar12 == plVar1) break;
        lVar4 = *plVar12;
        if (lVar4 != 0) {
          pUVar10 = UDataflowEdNode::StaticClass();
          iVar3 = (int)pUVar10->_padding_;
          if ((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
              &pUVar10->_padding_)) {
            pTVar5 = *(TReferenceControllerBase<1> **)(lVar4 + 0xb0);
            this_01 = *(FGraph **)(lVar4 + 0xa8);
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (this_01 == (FGraph *)0x0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar5);
              local_58.Object = (FDataflowNode *)0x0;
              local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
            }
            else {
              local_48._0_8_ = *(undefined8 *)(lVar4 + 0x98);
              local_48._8_8_ = *(undefined8 *)(lVar4 + 0xa0);
              UE::Dataflow::FGraph::FindBaseNode(this_01,&local_58,&local_48);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar5);
              pFVar6 = local_58.Object;
              if (local_58.Object != (FDataflowNode *)0x0) {
                ::FName::FName(&local_res10,"FDataflowSubGraphInputNode");
                cVar7 = (**(code **)(pFVar6->_padding_ + 0x128))(pFVar6,local_res10);
                if ((cVar7 != '\0') && (pFVar6 != (FDataflowNode *)0x0)) {
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_58.SharedReferenceCount.ReferenceController);
                  puVar11 = (undefined8 *)
                            (**(code **)(pFVar6[1]._padding_ + 8))(pFVar6 + 1,&this->DynamicInputs);
                  if (&this->InputsPropertyBag != (FInstancedPropertyBag *)puVar11) {
                    FInstancedStruct::InitializeAs
                              (&(this->InputsPropertyBag).Value,(UScriptStruct *)*puVar11,
                               (uchar *)puVar11[1]);
                  }
                  break;
                }
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_58.SharedReferenceCount.ReferenceController);
          }
        }
        plVar12 = plVar12 + 1;
      } while( true );
    }
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
  }
  FDataflowDynamicConnections::Refresh(&this->DynamicInputs);
  return;
}

// SyncOutputsPropertyBagWithSubGraph @ 1462e6540

void __thiscall
FDataflowCallSubGraphNode::SyncOutputsPropertyBagWithSubGraph(FDataflowCallSubGraphNode *this)

{
  FInstancedPropertyBag *this_00;
  UDataflow *this_01;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar1;
  UDataflowSubGraph *this_02;
  FDataflowSubGraphOutputNode *pFVar2;
  undefined8 *puVar3;
  UObject *local_res8;
  
  TVar1 = FWeakObjectPtr::Pin(&(this->DataflowAssetWeakPtr).WeakPtr);
  this_01 = *(UDataflow **)TVar1.Object;
  *(undefined8 *)TVar1.Object = 0;
  if (local_res8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
  }
  if (this_01 != (UDataflow *)0x0) {
    this_02 = UDataflow::FindSubGraphByGuid(this_01,&this->SubGraphGuid);
    if (this_02 != (UDataflowSubGraph *)0x0) {
      this_00 = &this->OutputsPropertyBag;
      FInstancedStruct::Reset(&this_00->Value);
      pFVar2 = UDataflowSubGraph::GetOutputNode(this_02);
      if ((pFVar2 != (FDataflowSubGraphOutputNode *)0x0) &&
         (puVar3 = (undefined8 *)
                   (**(code **)(pFVar2->_padding_ + 8))(&pFVar2->_padding_,&this->DynamicOutputs),
         this_00 != (FInstancedPropertyBag *)puVar3)) {
        FInstancedStruct::InitializeAs(&this_00->Value,(UScriptStruct *)*puVar3,(uchar *)puVar3[1]);
      }
    }
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_01);
  }
  FDataflowDynamicConnections::Refresh(&this->DynamicOutputs);
  return;
}

// UnregisterHandlers @ 1462e7270

void __thiscall
FDataflowCallSubGraphNode::UnregisterHandlers
          (FDataflowCallSubGraphNode *this,UDataflowSubGraph *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDataflowAssetDelegates::OnSubGraphsChanged,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDataflowSubGraphDelegates::OnSubGraphLoaded,this);
  if (param_1 != (UDataflowSubGraph *)0x0) {
    UEdGraph::RemoveOnGraphChangedHandler
              ((UEdGraph *)param_1,(FDelegateHandle)(this->OnGraphChangedHandle).ID);
  }
  return;
}

