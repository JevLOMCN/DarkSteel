// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 14

// StaticClass @ 14e72e1f0

UClass * __cdecl UInterchangeGenericAudioPipeline::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericAudioPipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericAudioPipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericAudioPipeline.InnerSingleton,
               StaticRegisterNativesUInterchangeGenericAudioPipeline,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericAudioPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericAudioPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericAudioPipeline.InnerSingleton;
}

// UInterchangeGenericAudioPipeline @ 14e767100

UInterchangeGenericAudioPipeline * __thiscall
UInterchangeGenericAudioPipeline::UInterchangeGenericAudioPipeline
          (UInterchangeGenericAudioPipeline *this,FVTableHelper *param_1)

{
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  this->bImportSounds = true;
  this->_padding_ = (longlong)&___7UInterchangeGenericAudioPipeline__6B_;
  (this->PipelineDisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PipelineDisplayName).Data.ArrayNum = 0;
  (this->PipelineDisplayName).Data.ArrayMax = 0;
  (this->BaseNodeContainer).field0_0x0.DebugPtr = (UInterchangeBaseNodeContainer *)0x0;
  (this->SourceDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceDatas).ArrayNum = 0;
  (this->SourceDatas).ArrayMax = 0;
  (this->SoundWaveNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundWaveNodes).ArrayNum = 0;
  (this->SoundWaveNodes).ArrayMax = 0;
  (this->SoundWaveFactoryNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundWaveFactoryNodes).ArrayNum = 0;
  (this->SoundWaveFactoryNodes).ArrayMax = 0;
  return this;
}

// UInterchangeGenericAudioPipeline @ 14e767170

UInterchangeGenericAudioPipeline * __thiscall
UInterchangeGenericAudioPipeline::UInterchangeGenericAudioPipeline
          (UInterchangeGenericAudioPipeline *this,FObjectInitializer *param_1)

{
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  this->bImportSounds = true;
  this->_padding_ = (longlong)&___7UInterchangeGenericAudioPipeline__6B_;
  (this->PipelineDisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PipelineDisplayName).Data.ArrayNum = 0;
  (this->PipelineDisplayName).Data.ArrayMax = 0;
  (this->BaseNodeContainer).field0_0x0.DebugPtr = (UInterchangeBaseNodeContainer *)0x0;
  (this->SourceDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceDatas).ArrayNum = 0;
  (this->SourceDatas).ArrayMax = 0;
  (this->SoundWaveNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundWaveNodes).ArrayNum = 0;
  (this->SoundWaveNodes).ArrayMax = 0;
  (this->SoundWaveFactoryNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundWaveFactoryNodes).ArrayNum = 0;
  (this->SoundWaveFactoryNodes).ArrayMax = 0;
  return this;
}

// ~UInterchangeGenericAudioPipeline @ 14e76bfd0

void __thiscall
UInterchangeGenericAudioPipeline::~UInterchangeGenericAudioPipeline
          (UInterchangeGenericAudioPipeline *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeGenericAudioPipeline__6B_;
  pFVar1 = (this->SoundWaveFactoryNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SoundWaveNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PipelineDisplayName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  return;
}

// operator() @ 14e76e720

void __thiscall
`UInterchangeGenericAudioPipeline::ExecutePipeline'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,UInterchangeBaseNode *param_2)

{
  longlong lVar1;
  code *pcVar2;
  EInterchangeNodeContainerType EVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  ForAnyElementType *pFVar7;
  UInterchangeBaseNode *local_18 [2];
  
  EVar3 = UInterchangeBaseNode::GetNodeContainerType(param_2);
  if ((EVar3 == TranslatedAsset) && (param_2 != (UInterchangeBaseNode *)0x0)) {
    pUVar6 = Z_Construct_UClass_UInterchangeAudioSoundWaveNode_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar6->_padding_)) {
      lVar1 = *(longlong *)this;
      pFVar7 = (ForAnyElementType *)(lVar1 + 0x158);
      local_18[0] = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      if ((pFVar7->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 < pFVar7->Data + (longlong)*(int *)(lVar1 + 0x164) * 8
         )) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = *(int *)(lVar1 + 0x160);
      if (iVar5 == *(int *)(lVar1 + 0x164)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar7,(int *)(lVar1 + 0x164));
      }
      *(int *)(lVar1 + 0x160) = iVar5 + 1;
      *(UInterchangeBaseNode **)(pFVar7->Data + (longlong)iVar5 * 8) = local_18[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_18[0] != (UInterchangeBaseNode *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_18[0]);
      }
    }
  }
  return;
}

// AdjustSettingsForContext @ 14e780bf0

void __thiscall
UInterchangeGenericAudioPipeline::AdjustSettingsForContext
          (UInterchangeGenericAudioPipeline *this,FInterchangePipelineContextParams *param_1)

{
  EInterchangePipelineContext EVar1;
  
  FInterchangePipelineContextParams::operator=
            ((FInterchangePipelineContextParams *)&this->_padding_,param_1);
  TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
  ::operator=((TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
               *)&this->_padding_,
              (TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
               *)&this->_padding_);
  EVar1 = param_1->ContextType;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  *(bool *)&this->_padding_ = EVar1 == None;
  EVar1 = param_1->ContextType;
  if ((EVar1 == AssetReimport) ||
     (((EVar1 - SceneReimport & 0xf9) == 0 && (EVar1 != AssetCustomMorphTargetReImport)))) {
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  }
  return;
}

// CanExecuteOnAnyThread @ 14e782700

bool __thiscall
UInterchangeGenericAudioPipeline::CanExecuteOnAnyThread
          (UInterchangeGenericAudioPipeline *this,EInterchangePipelineTask param_1)

{
  return false;
}

// CreateSoundWaveFactoryNode @ 14e79bf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeAudioSoundWaveFactoryNode * __thiscall
UInterchangeGenericAudioPipeline::CreateSoundWaveFactoryNode
          (UInterchangeGenericAudioPipeline *this,UInterchangeAudioSoundWaveNode *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UInterchangeAudioSoundWaveFactoryNode>,TSizedDefaultAllocator<32>_> *pTVar2;
  UInterchangeBaseNodeContainer *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  UClass *pUVar9;
  UInterchangeFactoryBaseNode *this_00;
  UInterchangeAudioSoundWaveFactoryNode *pUVar10;
  UInterchangeSourceNode *pUVar11;
  longlong *plVar12;
  undefined1 auStackY_168 [32];
  UInterchangeFactoryBaseNode *local_118;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (param_1 == (UInterchangeAudioSoundWaveNode *)0x0) {
    this_00 = (UInterchangeFactoryBaseNode *)0x0;
  }
  else {
    UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_f0);
    pFVar8 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_1,&local_e0);
    UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_100,pFVar8);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    pUVar3 = (this->BaseNodeContainer).field0_0x0.DebugPtr;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar9 = Z_Construct_UClass_UInterchangeAudioSoundWaveFactoryNode_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar9);
    local_a8._8_8_ = pUVar3;
    this_00 = (UInterchangeFactoryBaseNode *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar12 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (this_00 == (UInterchangeFactoryBaseNode *)0x0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8891340540541403199>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAudioPipeline.cpp"
                         ,0x3f,"SoundWaveFactoryNode");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pUVar10 = (UInterchangeAudioSoundWaveFactoryNode *)(*pcVar5)();
        return pUVar10;
      }
      this_00 = (UInterchangeFactoryBaseNode *)0x0;
    }
    else {
      pUVar3 = (this->BaseNodeContainer).field0_0x0.DebugPtr;
      ::FString::FString(&local_110,L"");
      UInterchangeBaseNodeContainer::SetupNode
                (pUVar3,(UInterchangeBaseNode *)this_00,&local_100,&local_f0,FactoryData,&local_110)
      ;
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      pUVar11 = UInterchangeSourceNode::FindOrCreateUniqueInstance
                          ((this->BaseNodeContainer).field0_0x0.DebugPtr);
      UE::Interchange::PipelineHelper::FillSubPathFromSourceNode(this_00,pUVar11);
      pTVar2 = &this->SoundWaveFactoryNodes;
      local_118 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_118) &&
          ((FScriptContainerElement *)&local_118 <
           pFVar4 + (longlong)(this->SoundWaveFactoryNodes).ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pUVar10 = (UInterchangeAudioSoundWaveFactoryNode *)(*pcVar5)();
        return pUVar10;
      }
      iVar7 = (this->SoundWaveFactoryNodes).ArrayNum;
      piVar1 = &(this->SoundWaveFactoryNodes).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->SoundWaveFactoryNodes).ArrayNum = iVar7 + 1;
      *(UInterchangeFactoryBaseNode **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           local_118;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_118 != (UInterchangeFactoryBaseNode *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_118);
      }
      pFVar8 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_1,&local_d0);
      UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)this_00,pFVar8);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      pFVar8 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_00,&local_c0);
      UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)param_1,pFVar8);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
  }
  return (UInterchangeAudioSoundWaveFactoryNode *)this_00;
}

// ExecutePipeline @ 14e7a5030

void __thiscall
UInterchangeGenericAudioPipeline::ExecutePipeline
          (UInterchangeGenericAudioPipeline *this,UInterchangeBaseNodeContainer *param_1,
          TArray<UInterchangeSourceData_*,TSizedDefaultAllocator<32>_> *param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UInterchangeResultError_Generic *pUVar5;
  FText *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  UInterchangeGenericAudioPipeline *local_38;
  code *local_30;
  UInterchangeGenericAudioPipeline **local_28;
  FText local_20;
  
  if (param_1 == (UInterchangeBaseNodeContainer *)0x0) {
    pUVar5 = UInterchangePipelineBase::AddMessage<UInterchangeResultError_Generic>
                       ((UInterchangePipelineBase *)this);
    if ((pUVar5 == (UInterchangeResultError_Generic *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ErrorMessage",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAudioPipeline.cpp"
                           ,0x19,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_20,L"InterchangeGenericAudioPipeline",
                        L"InterchangeAudio_ExecutePipeline_NullContainer",
                        L"Cannot execute pre-import pipeline because InBaseNodeContainer is null.");
    FText::operator=(&pUVar5->Text,pFVar6);
    if (local_20.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
      return;
    }
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_28 = &local_38;
    (this->BaseNodeContainer).field0_0x0.DebugPtr = param_1;
    local_30 = UE::Core::Private::Function::
               TFunctionRefCaller<`UInterchangeGenericAudioPipeline::ExecutePipeline'::__l2::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
               ::Call;
    local_38 = this;
    UInterchangeBaseNodeContainer::IterateNodes
              (param_1,(TFunctionRef<void___cdecl(FString_const_&,UInterchangeBaseNode_*)> *)
                       &local_30);
    if (this->bImportSounds != false) {
      pFVar7 = (this->SoundWaveNodes).AllocatorInstance.Data;
      iVar2 = (this->SoundWaveNodes).ArrayNum;
      pFVar1 = pFVar7 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->SoundWaveNodes).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UInterchangeAudioSoundWaveNode>,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar7 == pFVar1) break;
        CreateSoundWaveFactoryNode(this,*(UInterchangeAudioSoundWaveNode **)pFVar7);
        pFVar7 = pFVar7 + 8;
      }
    }
  }
  return;
}

// GetPipelineCategory @ 14e7b9170

FString * __cdecl
UInterchangeGenericAudioPipeline::GetPipelineCategory
          (FString *__return_storage_ptr__,UClass *param_1)

{
  ::FString::FString(__return_storage_ptr__,L"Audio");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e7b9680

UClass * __cdecl UInterchangeGenericAudioPipeline::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericAudioPipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericAudioPipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericAudioPipeline.InnerSingleton,
               StaticRegisterNativesUInterchangeGenericAudioPipeline,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericAudioPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericAudioPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericAudioPipeline.InnerSingleton;
}

// IsScripted @ 14e7c74f0

bool __thiscall UInterchangeGenericAudioPipeline::IsScripted(UInterchangeGenericAudioPipeline *this)

{
  return false;
}

// StaticRegisterNativesUInterchangeGenericAudioPipeline @ 14e7e45d0

void __cdecl
UInterchangeGenericAudioPipeline::StaticRegisterNativesUInterchangeGenericAudioPipeline(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeGenericAudioPipeline_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCreateSoundWaveFactoryNode @ 14e7ea160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UInterchangeGenericAudioPipeline::execCreateSoundWaveFactoryNode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UInterchangeBaseNodeContainer *this;
  code *pcVar3;
  UInterchangeBaseNode *this_00;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  UClass *pUVar7;
  UInterchangeFactoryBaseNode *this_01;
  UInterchangeSourceNode *pUVar8;
  longlong *plVar9;
  undefined1 auStackY_178 [32];
  UInterchangeFactoryBaseNode *local_128;
  UInterchangeBaseNode *local_120;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_120 = (UInterchangeBaseNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  this_00 = local_120;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_120 == (UInterchangeBaseNode *)0x0) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    UInterchangeBaseNode::GetDisplayLabel(local_120,&local_108);
    pFVar6 = UInterchangeBaseNode::GetUniqueID(this_00,&local_e8);
    UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_118,pFVar6);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    pUVar2 = *(UObject **)(param_1 + 8);
    FObjectInitializer::AssertIfInConstructor
              (pUVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UInterchangeAudioSoundWaveFactoryNode_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar7);
    local_b8._8_8_ = pUVar2;
    this_01 = (UInterchangeFactoryBaseNode *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar9 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (this_01 == (UInterchangeFactoryBaseNode *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8891340540541403199>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAudioPipeline.cpp"
                         ,0x3f,"SoundWaveFactoryNode");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      *(undefined8 *)param_3 = 0;
    }
    else {
      this = *(UInterchangeBaseNodeContainer **)(param_1 + 8);
      ::FString::FString(&local_f8,L"");
      UInterchangeBaseNodeContainer::SetupNode
                (this,(UInterchangeBaseNode *)this_01,&local_118,&local_108,FactoryData,&local_f8);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      pUVar8 = UInterchangeSourceNode::FindOrCreateUniqueInstance
                         (*(UInterchangeBaseNodeContainer **)(param_1 + 8));
      UE::Interchange::PipelineHelper::FillSubPathFromSourceNode(this_01,pUVar8);
      pUVar2 = param_1 + 9;
      local_128 = this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      if (((*(FScriptContainerElement **)pUVar2 <= (FScriptContainerElement *)&local_128) &&
          ((FScriptContainerElement *)&local_128 <
           *(FScriptContainerElement **)pUVar2 + (longlong)*(int *)&param_1[9].field_0xc * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int *)&param_1[9].field_0x8;
      if (iVar5 == *(int *)&param_1[9].field_0xc) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)pUVar2,(int *)&param_1[9].field_0xc);
      }
      *(int *)&param_1[9].field_0x8 = iVar5 + 1;
      *(UInterchangeFactoryBaseNode **)(*(FScriptContainerElement **)pUVar2 + (longlong)iVar5 * 8) =
           local_128;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_128 != (UInterchangeFactoryBaseNode *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_128);
      }
      pFVar6 = UInterchangeBaseNode::GetUniqueID(this_00,&local_d8);
      UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)this_01,pFVar6);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      pFVar6 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_01,&local_c8);
      UInterchangeBaseNode::AddTargetNodeUid(this_00,pFVar6);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      *(UInterchangeFactoryBaseNode **)param_3 = this_01;
    }
  }
  return;
}

