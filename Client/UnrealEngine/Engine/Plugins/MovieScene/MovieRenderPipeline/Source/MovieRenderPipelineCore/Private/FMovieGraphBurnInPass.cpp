// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 9

// GetBurnInClass @ 14dccab90

UClass * __thiscall
UMovieGraphBurnInNode::FMovieGraphBurnInPass::GetBurnInClass(FMovieGraphBurnInPass *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->CachedBurnInWidgetClass).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UMovieGraphBurnInWidget_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return (this->CachedBurnInWidgetClass).Class.field0_0x0.DebugPtr;
      }
    }
  }
  return (UClass *)0x0;
}

// GetBurnInWidget @ 14dccac00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TObjectPtr<UMovieGraphBurnInWidget> __thiscall
UMovieGraphBurnInNode::FMovieGraphBurnInPass::GetBurnInWidget
          (FMovieGraphBurnInPass *this,UMovieGraphWidgetRendererBaseNode *param_1)

{
  int iVar1;
  UMovieGraphBurnInNode *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UWorld *pUVar7;
  TObjectPtr<UMovieGraphBurnInWidget> TVar8;
  longlong in_R8;
  FName local_res8;
  UObject *local_res20;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pUVar6 = UMovieGraphPipeline::StaticClass();
  pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar5,pUVar6);
  pUVar7 = (UWorld *)GetBurnInClass(this);
  if (pUVar7 == (UWorld *)0x0) {
    if ((byte)LogMovieRenderPipeline._0_1_ < 2) goto LAB_14dccacf3;
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_res8 = *(FName *)(*(longlong *)&pUVar5->field_0x10 + 0x18);
    ::FName::ToString(&local_res8,&local_58);
    ::FName::ToString((FName *)&this->_padding_,&local_48);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
      local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    }
  }
  else {
    pUVar6 = *(UClass **)(in_R8 + 0x10);
    if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar6);
    }
    this_00 = (UMovieGraphBurnInNode *)(pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
    pUVar6 = UMovieGraphBurnInNode::StaticClass();
    lVar2 = this_00->_padding_;
    iVar1 = (int)pUVar6->_padding_;
    if (((*(int *)(lVar2 + 0x38) < iVar1) ||
        ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
         &pUVar6->_padding_)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ret->IsA(T::StaticClass())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x1181,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar8.field0_0x0 = (TObjectPtr<UMovieGraphBurnInWidget>_u_0)(*pcVar3)();
      return (TObjectPtr<UMovieGraphBurnInWidget>)TVar8.field0_0x0;
    }
    (**(code **)(*(longlong *)pUVar5 + 0x180))(pUVar5);
    GetOrCreateBurnInWidget(this_00,(UClass *)&local_res20,pUVar7);
    if (local_res20 != (UObject *)0x0) {
      param_1->_padding_ = (longlong)local_res20;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        return (TObjectPtr<UMovieGraphBurnInWidget>)(TObjectPtr<UMovieGraphBurnInWidget>_u_0)param_1
        ;
      }
      UE::GC::MarkAsReachable(local_res20);
      return (TObjectPtr<UMovieGraphBurnInWidget>)(TObjectPtr<UMovieGraphBurnInWidget>_u_0)param_1;
    }
    pUVar6 = GetBurnInClass(this);
    if (pUVar6 == (UClass *)0x0) {
      if (1 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
        param_1->_padding_ = 0;
        return (TObjectPtr<UMovieGraphBurnInWidget>)(TObjectPtr<UMovieGraphBurnInWidget>_u_0)param_1
        ;
      }
      goto LAB_14dccacf3;
    }
    if ((byte)LogMovieRenderPipeline._0_1_ < 2) goto LAB_14dccacf3;
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar6,&local_38,(UObject *)0x0);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14dccacf3:
  param_1->_padding_ = 0;
  return (TObjectPtr<UMovieGraphBurnInWidget>)(TObjectPtr<UMovieGraphBurnInWidget>_u_0)param_1;
}

// GetCompositingSortOrder @ 14dccbdd0

int __thiscall
UMovieGraphBurnInNode::FMovieGraphBurnInPass::GetCompositingSortOrder(FMovieGraphBurnInPass *this)

{
  return 100;
}

// GetParentNode @ 14dcd0c40

UMovieGraphWidgetRendererBaseNode * __thiscall
UMovieGraphBurnInNode::FMovieGraphBurnInPass::GetParentNode
          (FMovieGraphBurnInPass *this,UMovieGraphEvaluatedConfig *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UMovieGraphWidgetRendererBaseNode *pUVar4;
  undefined8 *puVar5;
  int iVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  TArray<UMovieGraphOutputBurnInNode_*,TSizedDefaultAllocator<32>_> local_38;
  void *local_28 [2];
  
  if ((this->RendererNodeInstanceName).Data.ArrayNum < 2) {
    pUVar4 = UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::GetParentNode
                       ((FMovieGraphWidgetPass *)this,param_1);
    return pUVar4;
  }
  UMovieGraphEvaluatedConfig::GetSettingsForBranch<UMovieGraphOutputBurnInNode>
            (param_1,&local_38,(FName)this->_padding_,false,false);
  iVar6 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)iVar6 * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar6) {
      `TCheckedPointerIterator<UMovieGraphOutputBurnInNode_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar7.Data == pFVar1) break;
    pUVar4 = *(UMovieGraphWidgetRendererBaseNode **)FVar7.Data;
    puVar5 = (undefined8 *)(**(code **)(pUVar4->_padding_ + 0x348))(pUVar4,local_28);
    iVar3 = (this->RendererNodeInstanceName).Data.ArrayNum;
    iVar2 = *(int *)(puVar5 + 1);
    if (iVar2 == iVar3) {
      if (iVar2 < 2) {
        bVar8 = true;
      }
      else {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)*puVar5,
                           (wchar_t *)(this->RendererNodeInstanceName).Data.AllocatorInstance.Data);
        bVar8 = iVar3 == 0;
      }
    }
    else {
      bVar8 = iVar3 + iVar2 == 1;
    }
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
    if (bVar8) goto LAB_14dcd0d37;
    FVar7.Data = FVar7.Data + 8;
  }
  `UMovieGraphBurnInNode::FMovieGraphBurnInPass::GetParentNode'::__l2::<lambda_1>::operator()
            (local_res8);
  pUVar4 = (UMovieGraphWidgetRendererBaseNode *)0x0;
LAB_14dcd0d37:
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return pUVar4;
}

// GetWidget @ 14dcd5360

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
UMovieGraphBurnInNode::FMovieGraphBurnInPass::GetWidget
          (FMovieGraphBurnInPass *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          UMovieGraphWidgetRendererBaseNode *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<SWidget,1> *pTVar2;
  UWidget *local_res20;
  TSharedRef<SWidget,1> local_18;
  
  GetBurnInWidget(this,(UMovieGraphWidgetRendererBaseNode *)&local_res20);
  if (local_res20 != (UWidget *)0x0) {
    pTVar2 = UWidget::TakeWidget(local_res20,&local_18);
    __return_storage_ptr__->Object = pTVar2->Object;
    pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// Render @ 14dcdf730

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphBurnInNode::FMovieGraphBurnInPass::Render
          (FMovieGraphBurnInPass *this,FMovieGraphTraversalContext *param_1,
          FMovieGraphTimeStepData *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMovieGraphEvaluatedConfig *this_00;
  UMovieGraphTimeStepBase *pUVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  UObject *this_01;
  UClass *pUVar7;
  UMovieGraphPipeline *pUVar8;
  longlong lVar9;
  int iVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  UMovieGraphBurnInWidget *local_res8;
  TArray<UMovieGraphOutputBurnInNode_*,TSizedDefaultAllocator<32>_> local_c8;
  void *local_b8 [2];
  undefined1 local_a8 [128];
  
  this_00 = (param_2->EvaluatedConfig).field0_0x0.DebugPtr;
  if ((this->RendererNodeInstanceName).Data.ArrayNum < 2) {
    UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::GetParentNode
              ((FMovieGraphWidgetPass *)this,this_00);
  }
  else {
    UMovieGraphEvaluatedConfig::GetSettingsForBranch<UMovieGraphOutputBurnInNode>
              (this_00,&local_c8,(FName)this->_padding_,false,false);
    iVar10 = local_c8.ArrayNum;
    pFVar1 = local_c8.AllocatorInstance.Data + (longlong)iVar10 * 8;
    FVar11.Data = local_c8.AllocatorInstance.Data;
    while( true ) {
      if (local_c8.ArrayNum != iVar10) {
        `TCheckedPointerIterator<UMovieGraphOutputBurnInNode_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_res8);
      }
      if (FVar11.Data == pFVar1) {
        `UMovieGraphBurnInNode::FMovieGraphBurnInPass::GetParentNode'::__l2::<lambda_1>::operator()
                  (&local_res8);
        if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.AllocatorInstance.Data);
        }
        goto LAB_14dcdf862;
      }
      puVar6 = (undefined8 *)
               (**(code **)(**(longlong **)FVar11.Data + 0x348))(*(longlong **)FVar11.Data,local_b8)
      ;
      iVar5 = (this->RendererNodeInstanceName).Data.ArrayNum;
      iVar2 = *(int *)(puVar6 + 1);
      if (iVar2 == iVar5) {
        if (iVar2 < 2) {
          bVar12 = true;
        }
        else {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)*puVar6,
                             (wchar_t *)(this->RendererNodeInstanceName).Data.AllocatorInstance.Data
                            );
          bVar12 = iVar5 == 0;
        }
      }
      else {
        bVar12 = iVar5 + iVar2 == 1;
      }
      if (local_b8[0] != (void *)0x0) {
        FMemory::Free(local_b8[0]);
      }
      if (bVar12) break;
      FVar11.Data = FVar11.Data + 8;
    }
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
  }
LAB_14dcdf862:
  GetBurnInWidget(this,(UMovieGraphWidgetRendererBaseNode *)&local_res8);
  if (local_res8 != (UMovieGraphBurnInWidget *)0x0) {
    this_01 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar7 = UMovieGraphPipeline::StaticClass();
    pUVar8 = (UMovieGraphPipeline *)
             UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_01,pUVar7);
    lVar4 = this->_padding_;
    pUVar3 = (pUVar8->GraphTimeStepInstance).field0_0x0.DebugPtr;
    lVar9 = (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3,local_a8);
    UMovieGraphBurnInWidget::UpdateForGraph
              (local_res8,pUVar8,*(UMovieGraphEvaluatedConfig **)(lVar9 + 0x40),(int)lVar4,
               (FString *)&this->_padding_);
  }
  UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render
            ((FMovieGraphWidgetPass *)this,param_1,param_2);
  return;
}

// Setup @ 14dce3420

void __thiscall
UMovieGraphBurnInNode::FMovieGraphBurnInPass::Setup
          (FMovieGraphBurnInPass *this,
          TWeakObjectPtr<UMovieGraphDefaultRenderer,FWeakObjectPtr> param_1,
          FMovieGraphRenderPassLayerData *param_2)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  FString *pFVar6;
  size_t sVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 local_res8 [8];
  void *local_48;
  undefined8 local_40;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Setup
            ((FMovieGraphWidgetPass *)this,param_1,param_2);
  pUVar4 = FWeakObjectPtr::Get(&(param_2->RenderPassNode).WeakPtr);
  (**(code **)(*(longlong *)pUVar4 + 0x390))(pUVar4,&local_48);
  plVar1 = &this->_padding_;
  if ((void **)plVar1 != &local_48) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_48;
    *(undefined4 *)&this->_padding_ = (undefined4)local_40;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_40._4_4_;
    local_40 = 0;
    local_48 = (void *)0x0;
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  pUVar4 = FWeakObjectPtr::Get(&(param_2->RenderPassNode).WeakPtr);
  if (pUVar4 == (UObject *)0x0) {
LAB_14dce34e2:
    bVar3 = `UMovieGraphBurnInNode::FMovieGraphBurnInPass::Setup'::__l3::<lambda_1>::operator()
                      (local_res8);
    pUVar4 = (UObject *)0x0;
    if (!bVar3) {
      return;
    }
  }
  else {
    pUVar5 = UMovieGraphBurnInNode::StaticClass();
    iVar9 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar9) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
        &pUVar5->_padding_)) goto LAB_14dce34e2;
  }
  if (*(longlong *)&pUVar4[8].field_0x18 == 0) {
    pUVar5 = (UClass *)0x0;
    goto LAB_14dce359e;
  }
  local_38.DataPtr = (wchar_t *)0x0;
  iVar9 = 0;
  local_38._8_8_ = (ulonglong)(uint)local_18.Data.ArrayMax << 0x20;
  pFVar6 = FSoftObjectPath::ToString((FSoftObjectPath *)&pUVar4[8].field_0x18,&local_18);
  if ((pFVar6->Data).ArrayNum == 0) {
    local_28.DataPtr = L"";
LAB_14dce3547:
    sVar7 = wcslen(local_28.DataPtr);
    iVar9 = (int)sVar7;
  }
  else {
    local_28.DataPtr = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0)
    goto LAB_14dce3547;
  }
  local_28.Size = iVar9;
  pUVar5 = Z_Construct_UClass_UMovieGraphBurnInWidget_NoRegister();
  pUVar5 = StaticLoadClass(pUVar5,(UObject *)0x0,&local_28,&local_38,0,(UPackageMap *)0x0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_14dce359e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->CachedBurnInWidgetClass).Class.field0_0x0.DebugPtr = pUVar5;
  pUVar5 = UMovieGraphOutputBurnInNode::StaticClass();
  iVar9 = (int)pUVar5->_padding_;
  if ((iVar9 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar9 * 8)
      == &pUVar5->_padding_)) {
    puVar8 = (undefined8 *)(**(code **)(*(longlong *)pUVar4 + 0x348))(pUVar4,&local_18);
    pFVar6 = &this->RendererNodeInstanceName;
    if (pFVar6 != (FString *)puVar8) {
      pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar8;
      *puVar8 = 0;
      (this->RendererNodeInstanceName).Data.ArrayNum = *(int *)(puVar8 + 1);
      (this->RendererNodeInstanceName).Data.ArrayMax = *(int *)((longlong)puVar8 + 0xc);
      puVar8[1] = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 15058c880

bool __thiscall
`UMovieGraphBurnInNode::FMovieGraphBurnInPass::GetParentNode'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1114569409453620990>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1114569409453620990>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058c940

bool __thiscall
`UMovieGraphBurnInNode::FMovieGraphBurnInPass::Setup'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1114569409453621085>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1114569409453621085>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

