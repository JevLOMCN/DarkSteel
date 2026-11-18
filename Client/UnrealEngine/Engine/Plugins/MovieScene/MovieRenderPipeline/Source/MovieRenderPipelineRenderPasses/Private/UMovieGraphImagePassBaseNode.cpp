// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 36

// StaticClass @ 14ddba390

UClass * __cdecl UMovieGraphImagePassBaseNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphImagePassBaseNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MovieGraphImagePassBaseNode",
               &Z_Registration_Info_UClass_UMovieGraphImagePassBaseNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphImagePassBaseNode,0xf8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphImagePassBaseNode>,
               InternalVTableHelperCtorCaller<UMovieGraphImagePassBaseNode>,local_res8,
               UMovieGraphRenderPassNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphImagePassBaseNode.InnerSingleton;
}

// UMovieGraphImagePassBaseNode @ 14ddc6780

UMovieGraphImagePassBaseNode * __thiscall
UMovieGraphImagePassBaseNode::UMovieGraphImagePassBaseNode
          (UMovieGraphImagePassBaseNode *this,FVTableHelper *param_1)

{
  UMovieGraphRenderPassNode::UMovieGraphRenderPassNode((UMovieGraphRenderPassNode *)this,param_1);
  this->bOverride_ShowFlags = '\x01';
  this->_padding_ = (longlong)&___7UMovieGraphImagePassBaseNode__6B_;
  (this->ShowFlags).field0_0x0.DebugPtr = (UMovieGraphShowFlags *)0x0;
  (this->CurrentInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentInstances).ArrayNum = 0;
  (this->CurrentInstances).ArrayMax = 0;
  return this;
}

// UMovieGraphImagePassBaseNode @ 14ddc67d0

UMovieGraphImagePassBaseNode * __thiscall
UMovieGraphImagePassBaseNode::UMovieGraphImagePassBaseNode(UMovieGraphImagePassBaseNode *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UMovieGraphShowFlags *pUVar4;
  FName local_res10;
  
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  this->_padding_ = (longlong)&___7UMovieGraphRenderPassNode__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::operator=((FString *)&this->_padding_,L"UnnamedRenderPass");
  ::FString::operator=((FString *)&this->_padding_,L"beauty");
  this->_padding_ = (longlong)&___7UMovieGraphImagePassBaseNode__6B_;
  this->bOverride_ShowFlags = '\x01';
  (this->ShowFlags).field0_0x0.DebugPtr = (UMovieGraphShowFlags *)0x0;
  (this->CurrentInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentInstances).ArrayNum = 0;
  (this->CurrentInstances).ArrayMax = 0;
  ::FString::operator=((FString *)&this->_padding_,L"UnnamedImageRenderPass");
  pFVar2 = ::FName::FName(&local_res10,L"ShowFlags");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UMovieGraphShowFlags_NoRegister();
  pUVar4 = (UMovieGraphShowFlags *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UMovieGraphShowFlags *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->ShowFlags).field0_0x0.DebugPtr = pUVar4;
  return this;
}

// ~UMovieGraphImagePassBaseNode @ 14ddcb770

void __thiscall
UMovieGraphImagePassBaseNode::~UMovieGraphImagePassBaseNode(UMovieGraphImagePassBaseNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphImagePassBaseNode__6B_;
  DestructItems<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>,int>
            ((TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>
              *)(this->CurrentInstances).AllocatorInstance.Data,(this->CurrentInstances).ArrayNum);
  pFVar1 = (this->CurrentInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieGraphRenderPassNode::~UMovieGraphRenderPassNode((UMovieGraphRenderPassNode *)this);
  return;
}

// AddReferencedObjects @ 14ddd4210

void __cdecl
UMovieGraphImagePassBaseNode::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  UClass *pUVar3;
  FString *pFVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar4 = GetTypeName<UMovieGraphImagePassBaseNode>(&local_38);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar3 = GetPrivateStaticClass();
  iVar2 = (int)pUVar3->_padding_;
  if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
      &pUVar3->_padding_)) {
    puVar5 = *(undefined8 **)&param_1[5].field_0x20;
    iVar2 = *(int *)(param_1 + 6);
    puVar1 = puVar5 + iVar2;
    while( true ) {
      if (*(int *)(param_1 + 6) != iVar2) {
        `TCheckedPointerIterator<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (puVar5 == puVar1) break;
      (**(code **)(*(longlong *)*puVar5 + 0x28))((longlong *)*puVar5,param_2);
      puVar5 = puVar5 + 1;
    }
    return;
  }
  pFVar4 = GetTypeName<UMovieGraphImagePassBaseNode>(&local_38);
  pwVar6 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_28,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar7);
}

// CreateInstance @ 14ddda050

TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>
 __thiscall UMovieGraphImagePassBaseNode::CreateInstance(UMovieGraphImagePassBaseNode *this)

{
  FMovieGraphImagePassBase *in_RDX;
  
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>
          )in_RDX;
}

// GatherOutputPassesImpl @ 14dddc860

void __thiscall
UMovieGraphImagePassBaseNode::GatherOutputPassesImpl
          (UMovieGraphImagePassBaseNode *this,UMovieGraphEvaluatedConfig *param_1,
          TArray<FMovieGraphRenderDataIdentifier,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->CurrentInstances).AllocatorInstance.Data;
  iVar2 = (this->CurrentInstances).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->CurrentInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x20))(*(longlong **)pFVar3,param_1,param_2);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// GetAdditionalPostProcessMaterials @ 14dddf000

TArray<FMoviePipelinePostProcessPass,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphImagePassBaseNode::GetAdditionalPostProcessMaterials
          (UMovieGraphImagePassBaseNode *this,
          TArray<FMoviePipelinePostProcessPass,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetAllowDenoiser @ 14dddf230

bool __thiscall UMovieGraphImagePassBaseNode::GetAllowDenoiser(UMovieGraphImagePassBaseNode *this)

{
  return true;
}

// GetAllowOCIO @ 14dddf270

bool __thiscall UMovieGraphImagePassBaseNode::GetAllowOCIO(UMovieGraphImagePassBaseNode *this)

{
  return true;
}

// GetAllowsCompositing @ 14dddf290

bool __thiscall
UMovieGraphImagePassBaseNode::GetAllowsCompositing(UMovieGraphImagePassBaseNode *this)

{
  return true;
}

// GetAllowsShowFlagsCustomization @ 14dddf2a0

bool __thiscall
UMovieGraphImagePassBaseNode::GetAllowsShowFlagsCustomization(UMovieGraphImagePassBaseNode *this)

{
  return true;
}

// GetAntiAliasingMethod @ 14dddf2d0

EAntiAliasingMethod __thiscall
UMovieGraphImagePassBaseNode::GetAntiAliasingMethod(UMovieGraphImagePassBaseNode *this)

{
  return AAM_None;
}

// GetDefaultShowFlags @ 14dddfd90

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphImagePassBaseNode::GetDefaultShowFlags
          (UMovieGraphImagePassBaseNode *this,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDisableToneCurve @ 14dddfdd0

bool __thiscall
UMovieGraphImagePassBaseNode::GetDisableToneCurve(UMovieGraphImagePassBaseNode *this)

{
  return false;
}

// GetEnableHighResolutionTiling @ 14dddfe30

bool __thiscall
UMovieGraphImagePassBaseNode::GetEnableHighResolutionTiling(UMovieGraphImagePassBaseNode *this)

{
  return false;
}

// GetEnableHistoryPerTile @ 14dddfe70

bool __thiscall
UMovieGraphImagePassBaseNode::GetEnableHistoryPerTile(UMovieGraphImagePassBaseNode *this)

{
  return false;
}

// GetEnablePageToSystemMemory @ 14dddfea0

bool __thiscall
UMovieGraphImagePassBaseNode::GetEnablePageToSystemMemory(UMovieGraphImagePassBaseNode *this)

{
  return false;
}

// GetForceLosslessCompression @ 14dde0660

bool __thiscall
UMovieGraphImagePassBaseNode::GetForceLosslessCompression(UMovieGraphImagePassBaseNode *this)

{
  return false;
}

// GetNumSceneViewsRenderedImpl @ 14dde2370

int __thiscall
UMovieGraphImagePassBaseNode::GetNumSceneViewsRenderedImpl(UMovieGraphImagePassBaseNode *this)

{
  return (this->CurrentInstances).ArrayNum;
}

// GetNumSpatialSamples @ 14dde23a0

int __thiscall
UMovieGraphImagePassBaseNode::GetNumSpatialSamples(UMovieGraphImagePassBaseNode *this)

{
  return 1;
}

// GetNumSpatialSamplesDuringWarmUp @ 14dde23c0

int __thiscall
UMovieGraphImagePassBaseNode::GetNumSpatialSamplesDuringWarmUp(UMovieGraphImagePassBaseNode *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014dde23c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(this->_padding_ + 0x3f8))();
  return iVar1;
}

// GetOverrideAntiAliasing @ 14dde2f20

bool __thiscall
UMovieGraphImagePassBaseNode::GetOverrideAntiAliasing(UMovieGraphImagePassBaseNode *this)

{
  return false;
}

// GetPPMFileNameFormatString @ 14dde3140

FString * __thiscall
UMovieGraphImagePassBaseNode::GetPPMFileNameFormatString
          (UMovieGraphImagePassBaseNode *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dde35a0

UClass * __cdecl UMovieGraphImagePassBaseNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphImagePassBaseNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MovieGraphImagePassBaseNode",
               &Z_Registration_Info_UClass_UMovieGraphImagePassBaseNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphImagePassBaseNode,0xf8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphImagePassBaseNode>,
               InternalVTableHelperCtorCaller<UMovieGraphImagePassBaseNode>,local_res8,
               UMovieGraphRenderPassNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphImagePassBaseNode.InnerSingleton;
}

// GetSeedOffset @ 14dde5d20

int __thiscall UMovieGraphImagePassBaseNode::GetSeedOffset(UMovieGraphImagePassBaseNode *this)

{
  return 0;
}

// GetShowFlags @ 14dde5de0

FEngineShowFlags * __thiscall
UMovieGraphImagePassBaseNode::GetShowFlags
          (UMovieGraphImagePassBaseNode *this,FEngineShowFlags *__return_storage_ptr__)

{
  UMovieGraphShowFlags::GetShowFlags((this->ShowFlags).field0_0x0.DebugPtr,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTileCount @ 14dde6150

TIntPoint<int> __thiscall
UMovieGraphImagePassBaseNode::GetTileCount(UMovieGraphImagePassBaseNode *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(undefined4 *)in_RDX = 1;
  *(undefined4 *)((longlong)in_RDX + 4) = 1;
  return (TIntPoint<int>)in_RDX;
}

// GetTileOverlapPercentage @ 14dde61b0

float __thiscall
UMovieGraphImagePassBaseNode::GetTileOverlapPercentage(UMovieGraphImagePassBaseNode *this)

{
  return 0.0;
}

// GetViewModeIndex @ 14dde63a0

EViewModeIndex __thiscall
UMovieGraphImagePassBaseNode::GetViewModeIndex(UMovieGraphImagePassBaseNode *this)

{
  return VMI_Lit;
}

// GetWriteAllSamples @ 14dde69f0

bool __thiscall UMovieGraphImagePassBaseNode::GetWriteAllSamples(UMovieGraphImagePassBaseNode *this)

{
  return false;
}

// GetWriteBeautyPassToDisk @ 14dde6a20

bool __thiscall
UMovieGraphImagePassBaseNode::GetWriteBeautyPassToDisk(UMovieGraphImagePassBaseNode *this)

{
  return true;
}

// RenderImpl @ 14ddf94c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphImagePassBaseNode::RenderImpl
          (UMovieGraphImagePassBaseNode *this,FMovieGraphTraversalContext *param_1,
          FMovieGraphTimeStepData *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  TConsoleVariableData<bool> *pTVar5;
  FWeakObjectPtr *this_00;
  UObject *pUVar6;
  longlong lVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UMovieGraphRenderLayerSubsystem *this_01;
  FName *pFVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  undefined1 local_res8 [8];
  undefined1 local_54 [8];
  undefined1 local_4c [20];
  
  pFVar11 = (this->CurrentInstances).AllocatorInstance.Data;
  iVar2 = (this->CurrentInstances).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar2 * 8;
  do {
    if ((this->CurrentInstances).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar1) {
      return;
    }
    this_00 = (FWeakObjectPtr *)
              (**(code **)(**(longlong **)pFVar11 + 0x38))(*(longlong **)pFVar11,local_54);
    pUVar6 = FWeakObjectPtr::Get(this_00);
    lVar7 = (**(code **)(*(longlong *)pUVar6 + 0x180))(pUVar6);
    pUVar8 = Z_Construct_UClass_UMovieGraphRenderLayerSubsystem_NoRegister();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar8 != (UClass *)0x0) goto LAB_14ddf9564;
LAB_14ddf9592:
      pUVar8 = (UClass *)0x0;
    }
    else {
      if (pUVar8 == (UClass *)0x0) goto LAB_14ddf9592;
      UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_14ddf9564:
      pUVar9 = Z_Construct_UClass_UMovieGraphRenderLayerSubsystem_NoRegister();
      if (pUVar9 == (UClass *)0x0) goto LAB_14ddf9592;
      iVar3 = (int)pUVar9->_padding_;
      if (((int)pUVar8->_padding_ < iVar3) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar3 * 8) !=
          &pUVar9->_padding_)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if (!bVar12) goto LAB_14ddf9592;
    }
    this_01 = (UMovieGraphRenderLayerSubsystem *)
              FSubsystemCollectionBase::GetSubsystemInternal
                        ((FSubsystemCollectionBase *)(lVar7 + 0xac0),pUVar8);
    if (this_01 != (UMovieGraphRenderLayerSubsystem *)0x0) {
      bVar12 = -1 < CpuChannel->Enabled;
      if (bVar12) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId67,"MRQ::DeferredRender::ActivateRenderLayer",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Nodes\\MovieGraphImagePassBaseNode.cpp"
                   ,0x43);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId67);
      }
      pFVar10 = (FName *)(**(code **)(**(longlong **)pFVar11 + 0x30))
                                   (*(longlong **)pFVar11,local_4c);
      UMovieGraphRenderLayerSubsystem::SetActiveRenderLayerByName(this_01,pFVar10);
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    pTVar5 = CVarMoviePipelineFlushRenderingPerLayerHack.Ref;
    bVar12 = IsInParallelGameThread();
    if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pTVar5->ShadowedValue[0] != false) {
      FlushRenderingCommands();
    }
    (**(code **)(**(longlong **)pFVar11 + 0x18))(*(longlong **)pFVar11,param_1,param_2);
    if (this_01 != (UMovieGraphRenderLayerSubsystem *)0x0) {
      bVar12 = -1 < CpuChannel->Enabled;
      if (bVar12) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId85,"MRQ::DeferredRender::RevertRenderLayer",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Nodes\\MovieGraphImagePassBaseNode.cpp"
                   ,0x55);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId85);
      }
      UMovieGraphRenderLayerSubsystem::ClearActiveRenderLayer(this_01);
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    pTVar5 = CVarMoviePipelineFlushRenderingPerLayerHack.Ref;
    bVar12 = IsInParallelGameThread();
    if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pTVar5->ShadowedValue[0] != false) {
      FlushRenderingCommands();
    }
    pFVar11 = pFVar11 + 8;
  } while( true );
}

// SetupImpl @ 14ddfd590

void __thiscall
UMovieGraphImagePassBaseNode::SetupImpl
          (UMovieGraphImagePassBaseNode *this,FMovieGraphRenderPassSetupData *param_1)

{
  int *piVar1;
  TArray<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int iVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18;
  UMovieGraphImagePassBaseNode *local_res20;
  longlong *local_48 [2];
  
  pFVar9 = (param_1->Layers).AllocatorInstance.Data;
  iVar3 = (param_1->Layers).ArrayNum;
  pFVar10 = pFVar9 + (longlong)iVar3 * 0x40;
  while( true ) {
    if ((param_1->Layers).ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FMovieGraphRenderPassLayerData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar9 == pFVar10) break;
    (**(code **)(this->_padding_ + 0x480))(this,local_48);
    plVar6 = local_48[0];
    if (local_48[0] != (longlong *)0x0) {
      pcVar4 = *(code **)(*local_48[0] + 8);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
      (*pcVar4)(plVar6,(param_1->Renderer).WeakPtr,local_res18,pFVar9);
      pTVar2 = &this->CurrentInstances;
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar5 <= (FScriptContainerElement *)local_48) &&
         ((FScriptContainerElement *)local_48 <
          pFVar5 + (longlong)(this->CurrentInstances).ArrayMax * 8)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      piVar1 = &(this->CurrentInstances).ArrayMax;
      iVar8 = (this->CurrentInstances).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->CurrentInstances).ArrayNum = iVar8 + 1;
      *(longlong **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_48[0];
      local_48[0] = (longlong *)0x0;
    }
    if (local_48[0] != (longlong *)0x0) {
      (**(code **)*local_48[0])(local_48[0],1);
    }
    pFVar9 = pFVar9 + 0x40;
  }
  return;
}

// StaticRegisterNativesUMovieGraphImagePassBaseNode @ 14ddff1a0

void __cdecl UMovieGraphImagePassBaseNode::StaticRegisterNativesUMovieGraphImagePassBaseNode(void)

{
  return;
}

// TeardownImpl @ 14ddffae0

void __thiscall UMovieGraphImagePassBaseNode::TeardownImpl(UMovieGraphImagePassBaseNode *this)

{
  int *piVar1;
  TArray<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pTVar2 = &this->CurrentInstances;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->CurrentInstances).ArrayNum;
  pFVar3 = pFVar5 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->CurrentInstances).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar5 + 0x10))();
    pFVar5 = pFVar5 + 8;
  }
  piVar1 = &(this->CurrentInstances).ArrayMax;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->CurrentInstances).ArrayNum;
  if ((this->CurrentInstances).ArrayMax < 0) {
    DestructItems<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>,int>
              ((TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>
                *)pFVar3,iVar4);
    (this->CurrentInstances).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>,int>
              ((TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>
                *)pFVar3,iVar4);
    (this->CurrentInstances).ArrayNum = 0;
  }
  return;
}

