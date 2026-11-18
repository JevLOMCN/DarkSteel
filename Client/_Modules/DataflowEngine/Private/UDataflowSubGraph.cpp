// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 11

// StaticClass @ 1462c3890

UClass * __cdecl UDataflowSubGraph::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowSubGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEngine",L"DataflowSubGraph",
               &Z_Registration_Info_UClass_UDataflowSubGraph.InnerSingleton,
               StaticRegisterNativesUDataflowSubGraph,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDataflowSubGraph>,
               InternalVTableHelperCtorCaller<UDataflowSubGraph>,local_res8,UEdGraph::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowSubGraph.InnerSingleton;
}

// UDataflowSubGraph @ 1462cf540

UDataflowSubGraph * __thiscall
UDataflowSubGraph::UDataflowSubGraph(UDataflowSubGraph *this,FVTableHelper *param_1)

{
  UEdGraph::UEdGraph((UEdGraph *)this,param_1);
  this->_padding_ = (longlong)&___7UDataflowSubGraph__6B_;
  this->bIsLoaded = false;
  (this->SubGraphGuid).A = 0;
  (this->SubGraphGuid).B = 0;
  (this->SubGraphGuid).C = 0;
  (this->SubGraphGuid).D = 0;
  this->bIsForEach = false;
  return this;
}

// UDataflowSubGraph @ 1462cf580

UDataflowSubGraph * __thiscall
UDataflowSubGraph::UDataflowSubGraph(UDataflowSubGraph *this,FObjectInitializer *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  FGuid *pFVar6;
  FGuid local_28;
  FGuid local_18;
  
  UEdGraph::UEdGraph((UEdGraph *)this,param_1);
  this->_padding_ = (longlong)&___7UDataflowSubGraph__6B_;
  bVar5 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar5) {
    local_28.A = 0;
    local_28.B = 0;
    local_28.C = 0;
    local_28.D = 0;
    pFVar6 = &local_28;
  }
  else {
    pFVar6 = FGuid::NewGuid(&local_18);
  }
  uVar1 = pFVar6->A;
  uVar2 = pFVar6->B;
  uVar3 = pFVar6->C;
  uVar4 = pFVar6->D;
  this->bIsLoaded = false;
  this->bIsForEach = false;
  (this->SubGraphGuid).A = uVar1;
  (this->SubGraphGuid).B = uVar2;
  (this->SubGraphGuid).C = uVar3;
  (this->SubGraphGuid).D = uVar4;
  return this;
}

// ~UDataflowSubGraph @ 1462d03f0

void __thiscall UDataflowSubGraph::~UDataflowSubGraph(UDataflowSubGraph *this)

{
  this->_padding_ = (longlong)&___7UDataflowSubGraph__6B_;
  UEdGraph::~UEdGraph((UEdGraph *)this);
  return;
}

// GetInputNode @ 1462dd230

FDataflowSubGraphInputNode * __thiscall UDataflowSubGraph::GetInputNode(UDataflowSubGraph *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  FGraph *this_00;
  FDataflowNode *pFVar6;
  char cVar7;
  UClass *pUVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  FName local_res10;
  TSharedPtr<FDataflowNode,1> local_48;
  FGuid local_38;
  
  plVar9 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  plVar1 = plVar9 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UEdGraphNode>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (plVar9 == plVar1) break;
    lVar4 = *plVar9;
    if (lVar4 != 0) {
      pUVar8 = UDataflowEdNode::StaticClass();
      iVar3 = (int)pUVar8->_padding_;
      if ((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8)
          == &pUVar8->_padding_)) {
        pTVar5 = *(TReferenceControllerBase<1> **)(lVar4 + 0xb0);
        this_00 = *(FGraph **)(lVar4 + 0xa8);
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (this_00 == (FGraph *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          local_48.Object = (FDataflowNode *)0x0;
          local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          local_38._0_8_ = *(undefined8 *)(lVar4 + 0x98);
          local_38._8_8_ = *(undefined8 *)(lVar4 + 0xa0);
          UE::Dataflow::FGraph::FindBaseNode(this_00,&local_48,&local_38);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          pFVar6 = local_48.Object;
          if ((FDataflowSubGraphInputNode *)local_48.Object != (FDataflowSubGraphInputNode *)0x0) {
            ::FName::FName(&local_res10,"FDataflowSubGraphInputNode");
            cVar7 = (**(code **)(pFVar6->_padding_ + 0x128))(pFVar6,local_res10);
            if ((cVar7 != '\0') &&
               ((FDataflowSubGraphInputNode *)pFVar6 != (FDataflowSubGraphInputNode *)0x0)) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_48.SharedReferenceCount.ReferenceController);
              return (FDataflowSubGraphInputNode *)pFVar6;
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
      }
    }
    plVar9 = plVar9 + 1;
  }
  return (FDataflowSubGraphInputNode *)0x0;
}

// GetOutputNode @ 1462dd810

FDataflowSubGraphOutputNode * __thiscall UDataflowSubGraph::GetOutputNode(UDataflowSubGraph *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  FGraph *this_00;
  FDataflowNode *pFVar6;
  char cVar7;
  UClass *pUVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  FName local_res10;
  TSharedPtr<FDataflowNode,1> local_48;
  FGuid local_38;
  
  plVar9 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  plVar1 = plVar9 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UEdGraphNode>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (plVar9 == plVar1) break;
    lVar4 = *plVar9;
    if (lVar4 != 0) {
      pUVar8 = UDataflowEdNode::StaticClass();
      iVar3 = (int)pUVar8->_padding_;
      if ((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8)
          == &pUVar8->_padding_)) {
        pTVar5 = *(TReferenceControllerBase<1> **)(lVar4 + 0xb0);
        this_00 = *(FGraph **)(lVar4 + 0xa8);
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (this_00 == (FGraph *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          local_48.Object = (FDataflowNode *)0x0;
          local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          local_38._0_8_ = *(undefined8 *)(lVar4 + 0x98);
          local_38._8_8_ = *(undefined8 *)(lVar4 + 0xa0);
          UE::Dataflow::FGraph::FindBaseNode(this_00,&local_48,&local_38);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          pFVar6 = local_48.Object;
          if ((FDataflowSubGraphOutputNode *)local_48.Object != (FDataflowSubGraphOutputNode *)0x0)
          {
            ::FName::FName(&local_res10,"FDataflowSubGraphOutputNode");
            cVar7 = (**(code **)(pFVar6->_padding_ + 0x128))(pFVar6,local_res10);
            if ((cVar7 != '\0') &&
               ((FDataflowSubGraphOutputNode *)pFVar6 != (FDataflowSubGraphOutputNode *)0x0)) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_48.SharedReferenceCount.ReferenceController);
              return (FDataflowSubGraphOutputNode *)pFVar6;
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
      }
    }
    plVar9 = plVar9 + 1;
  }
  return (FDataflowSubGraphOutputNode *)0x0;
}

// GetPrivateStaticClass @ 1462de190

UClass * __cdecl UDataflowSubGraph::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowSubGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEngine",L"DataflowSubGraph",
               &Z_Registration_Info_UClass_UDataflowSubGraph.InnerSingleton,
               StaticRegisterNativesUDataflowSubGraph,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDataflowSubGraph>,
               InternalVTableHelperCtorCaller<UDataflowSubGraph>,local_res8,UEdGraph::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowSubGraph.InnerSingleton;
}

// IsForEachSubGraph @ 1462dfd30

bool __thiscall UDataflowSubGraph::IsForEachSubGraph(UDataflowSubGraph *this)

{
  return this->bIsForEach;
}

// PostLoad @ 1462e2190

void __thiscall UDataflowSubGraph::PostLoad(UDataflowSubGraph *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FDestructionSentinel local_28;
  
  UObject::PostLoad((UObject *)this);
  this->bIsLoaded = true;
  bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FDataflowSubGraphDelegates::OnSubGraphLoaded);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FDataflowSubGraphDelegates::OnSubGraphLoaded,(FWriteAccessScope *)&local_28);
    bVar2 = false;
    FDataflowSubGraphDelegates::OnSubGraphLoaded._28_4_ =
         FDataflowSubGraphDelegates::OnSubGraphLoaded._28_4_ + 1;
    uVar6 = FDataflowSubGraphDelegates::OnSubGraphLoaded._16_4_ - 1;
    if (-1 < (int)uVar6) {
      lVar7 = (longlong)(int)uVar6 << 4;
      bVar2 = false;
      do {
        uVar5 = 0;
        if ((int)uVar6 < (int)FDataflowSubGraphDelegates::OnSubGraphLoaded._16_4_) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (((*(int *)(lVar7 + 8 + FDataflowSubGraphDelegates::OnSubGraphLoaded._8_8_) == 0) ||
            (*(longlong **)(lVar7 + FDataflowSubGraphDelegates::OnSubGraphLoaded._8_8_) ==
             (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)
                                   (lVar7 + FDataflowSubGraphDelegates::OnSubGraphLoaded._8_8_) +
                                0x68))(), cVar4 == '\0')) {
          bVar2 = true;
        }
        lVar7 = lVar7 + -0x10;
        uVar6 = uVar6 - 1;
      } while (-1 < (int)uVar6);
    }
    FDataflowSubGraphDelegates::OnSubGraphLoaded._28_4_ =
         FDataflowSubGraphDelegates::OnSubGraphLoaded._28_4_ + -1;
    if (bVar2) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FDataflowSubGraphDelegates::OnSubGraphLoaded,false);
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
  }
  return;
}

// SetForEachSubGraph @ 1462e5330

void __thiscall UDataflowSubGraph::SetForEachSubGraph(UDataflowSubGraph *this,bool param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  UClass *pUVar6;
  UDataflow *pUVar7;
  int iVar8;
  UEdGraph *pUVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  if (param_1 == this->bIsForEach) {
    return;
  }
  this->bIsForEach = param_1;
  pUVar6 = UDataflow::StaticClass();
  iVar8 = (int)pUVar6->_padding_;
  if (((iVar8 <= *(int *)(this->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
       &pUVar6->_padding_)) && (pUVar7 = (UDataflow *)this, this != (UDataflowSubGraph *)0x0))
  goto LAB_1462e53b3;
  pUVar9 = (UEdGraph *)this->_padding_;
  if (pUVar9 == (UEdGraph *)0x0) {
LAB_1462e53a6:
    pUVar9 = (UEdGraph *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UEdGraph_NoRegister();
    iVar8 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar8 * 8)
        != &pUVar6->_padding_)) goto LAB_1462e53a6;
  }
  pUVar7 = UDataflow::GetDataflowAssetFromEdGraph(pUVar9);
LAB_1462e53b3:
  if (pUVar7 != (UDataflow *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FDataflowAssetDelegates::OnSubGraphsChanged,(FWriteAccessScope *)&local_38);
    bVar3 = false;
    FDataflowAssetDelegates::OnSubGraphsChanged._28_4_ =
         FDataflowAssetDelegates::OnSubGraphsChanged._28_4_ + 1;
    iVar8 = FDataflowAssetDelegates::OnSubGraphsChanged._16_4_ + -1;
    if (-1 < iVar8) {
      lVar10 = (longlong)iVar8 << 4;
      bVar3 = false;
      do {
        if (((int)FDataflowAssetDelegates::OnSubGraphsChanged._16_4_ <= iVar8) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((*(int *)(lVar10 + 8 + FDataflowAssetDelegates::OnSubGraphsChanged._8_8_) == 0) ||
            (plVar1 = *(longlong **)(lVar10 + FDataflowAssetDelegates::OnSubGraphsChanged._8_8_),
            plVar1 == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,pUVar7,&this->SubGraphGuid,4),
           cVar5 == '\0')) {
          bVar3 = true;
        }
        lVar10 = lVar10 + -0x10;
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
    }
    FDataflowAssetDelegates::OnSubGraphsChanged._28_4_ =
         FDataflowAssetDelegates::OnSubGraphsChanged._28_4_ + -1;
    if (bVar3) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FDataflowAssetDelegates::OnSubGraphsChanged,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// StaticRegisterNativesUDataflowSubGraph @ 1462e62b0

void __cdecl UDataflowSubGraph::StaticRegisterNativesUDataflowSubGraph(void)

{
  return;
}

