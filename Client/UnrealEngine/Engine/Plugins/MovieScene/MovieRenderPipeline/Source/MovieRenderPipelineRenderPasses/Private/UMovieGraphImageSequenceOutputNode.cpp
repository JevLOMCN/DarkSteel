// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 12

// StaticClass @ 14ddbb3f0

UClass * __cdecl UMovieGraphImageSequenceOutputNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MovieGraphImageSequenceOutputNode",
               &Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphImageSequenceOutputNode,0x1e8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphImageSequenceOutputNode>,
               InternalVTableHelperCtorCaller<UMovieGraphImageSequenceOutputNode>,local_res8,
               UMovieGraphFileOutputNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode.InnerSingleton;
}

// UMovieGraphImageSequenceOutputNode @ 14ddc68e0

UMovieGraphImageSequenceOutputNode * __thiscall
UMovieGraphImageSequenceOutputNode::UMovieGraphImageSequenceOutputNode
          (UMovieGraphImageSequenceOutputNode *this,FVTableHelper *param_1)

{
  UMovieGraphFileOutputNode::UMovieGraphFileOutputNode((UMovieGraphFileOutputNode *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphImageSequenceOutputNode__6B_;
  (this->OCIOConfiguration).bIsEnabled = false;
  FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
            (&(this->OCIOConfiguration).ColorConfiguration);
  *(undefined8 *)&this->OCIOContext = 0;
  *(undefined8 *)&(this->OCIOContext).field_0x8 = 0;
  *(undefined8 *)&(this->OCIOContext).field_0x20 = 0;
  *(undefined4 *)&(this->OCIOContext).field_0x28 = 0;
  *(undefined4 *)&(this->OCIOContext).field_0x2c = 0x80;
  *(undefined4 *)&(this->OCIOContext).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OCIOContext).field_0x34 = 0;
  *(undefined8 *)&(this->OCIOContext).field_0x40 = 0;
  *(undefined4 *)&(this->OCIOContext).field_0x48 = 0;
  *(undefined8 *)&this->FinalizeFence = 0;
  *(undefined8 *)&(this->FinalizeFence).field_0x8 = 0;
  return this;
}

// UMovieGraphImageSequenceOutputNode @ 14ddc6980

UMovieGraphImageSequenceOutputNode * __thiscall
UMovieGraphImageSequenceOutputNode::UMovieGraphImageSequenceOutputNode
          (UMovieGraphImageSequenceOutputNode *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  IModuleInterface *pIVar3;
  IImageWriteQueue *pIVar4;
  FName local_res10;
  
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  this->_padding_ = (longlong)&___7UMovieGraphFileOutputNode__6B_;
  ::FString::FString((FString *)&this->_padding_,"{sequence_name}.{layer_name}.{frame_number}");
  this->_padding_ = (longlong)&___7UMovieGraphImageSequenceOutputNode__6B_;
  (this->OCIOConfiguration).bIsEnabled = false;
  FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
            (&(this->OCIOConfiguration).ColorConfiguration);
  *(undefined8 *)&this->OCIOContext = 0;
  *(undefined8 *)&(this->OCIOContext).field_0x8 = 0;
  *(undefined8 *)&(this->OCIOContext).field_0x20 = 0;
  *(undefined4 *)&(this->OCIOContext).field_0x28 = 0;
  *(undefined4 *)&(this->OCIOContext).field_0x2c = 0x80;
  *(undefined4 *)&(this->OCIOContext).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OCIOContext).field_0x34 = 0;
  *(undefined8 *)&(this->OCIOContext).field_0x40 = 0;
  *(undefined4 *)&(this->OCIOContext).field_0x48 = 0;
  *(undefined8 *)&this->FinalizeFence = 0;
  *(undefined8 *)&(this->FinalizeFence).field_0x8 = 0;
  FModuleManager::Get();
  pFVar2 = ::FName::FName(&local_res10,"ImageWriteQueue");
  FVar1 = *pFVar2;
  this_00 = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  pIVar4 = (IImageWriteQueue *)(**(code **)((longlong)*pIVar3 + 0x40))(pIVar3);
  this->ImageWriteQueue = pIVar4;
  return this;
}

// ~UMovieGraphImageSequenceOutputNode @ 14ddcb7c0

void __thiscall
UMovieGraphImageSequenceOutputNode::~UMovieGraphImageSequenceOutputNode
          (UMovieGraphImageSequenceOutputNode *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphImageSequenceOutputNode__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->FinalizeFence).field_0x8);
  *(undefined4 *)&(this->OCIOContext).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OCIOContext).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OCIOContext);
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&(this->OCIOConfiguration).ColorConfiguration);
  UMovieGraphFileOutputNode::~UMovieGraphFileOutputNode((UMovieGraphFileOutputNode *)this);
  return;
}

// CreateFileName @ 14ddd9910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FString * __thiscall
UMovieGraphImageSequenceOutputNode::CreateFileName
          (UMovieGraphImageSequenceOutputNode *this,FString *__return_storage_ptr__,
          FMovieGraphOutputMergerFrame *param_1,UMovieGraphImageSequenceOutputNode *param_2,
          UMovieGraphPipeline *param_3,
          TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
          *param_4,EImageFormat param_5,FMovieGraphResolveArgs *param_6,FString *param_7)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  FMovieGraphResolveArgs *pFVar5;
  ForAnyElementType _Src;
  bool bVar6;
  FString *pFVar7;
  UMovieGraphGlobalOutputSettingNode *pUVar8;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 *pTVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  undefined1 auStackY_318 [32];
  FString local_2d0;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 local_2c0;
  UMovieGraphImageSequenceOutputNode *local_2b8;
  FString local_2b0;
  TPairInitializer<FString_&&,FString_&&> local_2a0;
  longlong local_290;
  UMovieGraphPipeline *local_288;
  FMovieGraphResolveArgs *local_280;
  UMovieGraphImageSequenceOutputNode *local_278;
  FString *local_270;
  FString local_268;
  FString *local_258;
  FString *local_250;
  FString local_248;
  FString local_238;
  FString *local_228;
  FString local_220;
  undefined1 local_208 [32];
  void *local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  ForElementType<FSetElementId> local_1c8;
  int local_1c0;
  FMovieGraphFilenameResolveParams local_1b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_288 = param_3;
  local_2a0.Value = (FString *)param_4;
  local_280 = param_6;
  pwVar10 = L"";
  if (param_5 == PNG) {
    pwVar10 = L"png";
  }
  else if (param_5 == JPEG) {
    pwVar10 = L"jpeg";
  }
  else if (param_5 == BMP) {
    pwVar10 = L"bmp";
  }
  else if (param_5 == EXR) {
    pwVar10 = L"exr";
  }
  local_2b8 = param_2;
  local_278 = this;
  local_228 = __return_storage_ptr__;
  if ((param_1->EvaluatedConfig).Object == (UObject *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar3)();
      return pFVar7;
    }
  }
  pUVar8 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                     ((UMovieGraphEvaluatedConfig *)(param_1->EvaluatedConfig).Object,
                      UMovieGraphNode::GlobalsPinName,true,false);
  if (pUVar8 == (UMovieGraphGlobalOutputSettingNode *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    local_290 = *(longlong *)(*(longlong *)&param_4->field_0x48 + 0x18);
    pTVar9 = (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 *)(local_290 + 0x138);
    if (*(int *)(local_290 + 0x140) < 2) {
      pTVar9 = (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 *)&local_2b8->_padding_;
    }
    local_270 = &local_2d0;
    local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d0.Data.ArrayNum = *(int *)(pTVar9 + 1);
    lVar11 = (longlong)local_2d0.Data.ArrayNum;
    local_2c0 = (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0)pTVar9->DebugPtr;
    if (local_2d0.Data.ArrayNum == 0) {
      local_2d0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_2d0.Data.ArrayNum,0,(ForAnyElementType *)&local_2d0,
                 local_2d0.Data.ArrayNum,&local_2d0.Data.ArrayMax);
      memcpy(local_2d0.Data.AllocatorInstance.Data,local_2c0.DebugPtr,lVar11 * 2);
    }
    ::operator/(&local_2b0,&(pUVar8->OutputDirectory).Path,&local_2d0);
    pFVar7 = local_2a0.Value;
    UMovieGraphFileOutputNode::DisambiguateFilename
              (&local_2b0,param_1,(UMovieGraphFileOutputNode *)local_2b8,
               (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
                *)local_2a0.Value);
    UE::MoviePipeline::ValidateOutputFormatString(&local_2b0,false,true,false);
    local_208._0_8_ = (FScriptContainerElement *)0x0;
    local_208._8_8_ = 0;
    local_1e8 = (void *)0x0;
    local_1e0 = 0;
    local_1dc = 0x80;
    local_1d8 = 0xffffffff;
    local_1d4 = 0;
    local_1c8 = (ForElementType<FSetElementId>)0x0;
    local_1c0 = 0;
    ::FString::FString(&local_238,pwVar10);
    ::FString::FString(&local_248,L"ext");
    local_258 = &local_248;
    local_250 = &local_238;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)local_208,&local_2a0,(bool *)&local_258);
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    local_2c0.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->EvaluatedConfig).Object;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_2c0.DebugPtr != (UMovieGraphEvaluatedConfig *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_2c0.DebugPtr);
    }
    FMovieGraphFilenameResolveParams::MakeResolveParams
              (&local_1b8,(FMovieGraphRenderDataIdentifier *)pFVar7,local_288,
               (TObjectPtr<UMovieGraphEvaluatedConfig> *)&local_2c0.ObjectPtr,
               (FMovieGraphTraversalContext *)(local_290 + 0x18),
               (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)local_208);
    pFVar5 = local_280;
    UMovieGraphBlueprintLibrary::ResolveFilenameFormatArguments
              (&local_268,&local_2b0,&local_1b8,local_280);
    pFVar7 = GetFrameTemplatedFileName(local_278,&local_220,&local_1b8,&local_2b0,pFVar5);
    if (param_7 != pFVar7) {
      pFVar2 = (param_7->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_7->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_7->Data).ArrayNum = (pFVar7->Data).ArrayNum;
      (param_7->Data).ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
    _Src.Data = local_268.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = local_268.Data.ArrayNum;
    piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
    local_270 = __return_storage_ptr__;
    if (local_268.Data.ArrayNum == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_268.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
                 local_268.Data.ArrayNum,piVar1);
      memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,
             (longlong)local_268.Data.ArrayNum * 2);
    }
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    FMovieGraphFilenameResolveParams::~FMovieGraphFilenameResolveParams(&local_1b8);
    local_1c0 = 0;
    if (local_1c8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1c8);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_208,0,local_208._8_4_);
    iVar4 = SUB84(local_208._8_8_,4);
    local_208._8_8_ = local_208._8_8_ & 0xffffffff00000000;
    if (iVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_208,0,(int *)(local_208 + 0xc));
    }
    local_1d8 = 0xffffffff;
    local_1d4 = 0;
    local_1e0 = 0;
    if (0x80 < local_1dc) {
      local_1dc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_208 + 0x10),0);
    }
    if (local_1e8 != (void *)0x0) {
      FMemory::Free(local_1e8);
    }
    if ((FScriptContainerElement *)local_208._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_208._0_8_);
    }
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
    if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetFrameTemplatedFileName @ 14dde1a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FString * __thiscall
UMovieGraphImageSequenceOutputNode::GetFrameTemplatedFileName
          (UMovieGraphImageSequenceOutputNode *this,FString *__return_storage_ptr__,
          FMovieGraphFilenameResolveParams *param_1,FString *param_2,FMovieGraphResolveArgs *param_3
          )

{
  FScriptContainerElement *_Src;
  int iVar1;
  FString *pFVar2;
  longlong lVar3;
  ForAnyElementType FVar4;
  undefined1 auStackY_228 [32];
  FString local_1e8;
  FString local_1d8;
  FString local_1c8 [2];
  FMovieGraphFilenameResolveParams local_1a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)__return_storage_ptr__;
  ::FString::FString(local_1c8,L"{frame_placeholder}");
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)&local_1e8;
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar3 = (longlong)local_1e8.Data.ArrayNum;
  _Src = (param_2->Data).AllocatorInstance.Data;
  if (local_1e8.Data.ArrayNum == 0) {
    local_1e8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1e8.Data.ArrayNum,0,(ForAnyElementType *)&local_1e8,local_1e8.Data.ArrayNum
               ,&local_1e8.Data.ArrayMax);
    memcpy(local_1e8.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  iVar1 = ::FString::Find(&local_1e8,L"{frame_number}",0xe,IgnoreCase,FromStart,-1);
  if (iVar1 == -1) {
    iVar1 = ::FString::Find(&local_1e8,L"{frame_number_rel}",0x12,IgnoreCase,FromStart,-1);
    if (iVar1 == -1) {
      iVar1 = ::FString::Find(&local_1e8,L"{frame_number_shot}",0x13,IgnoreCase,FromStart,-1);
      if (iVar1 == -1) {
        iVar1 = ::FString::Find(&local_1e8,L"{frame_number_shot_rel}",0x17,IgnoreCase,FromStart,-1);
        if (iVar1 == -1) goto LAB_14dde1d84;
        FVar4.Data = (FScriptContainerElement *)L"";
        if (local_1c8[0].Data.ArrayNum != 0) {
          FVar4.Data = local_1c8[0].Data.AllocatorInstance.Data;
        }
        pFVar2 = ::FString::Replace(param_2,&local_1d8,L"{frame_number_shot_rel}",
                                    (wchar_t *)FVar4.Data,IgnoreCase);
        if (&local_1e8 != pFVar2) {
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
          local_1e8.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
          (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1e8.Data.ArrayNum = (pFVar2->Data).ArrayNum;
          local_1e8.Data.ArrayMax = (pFVar2->Data).ArrayMax;
          (pFVar2->Data).ArrayNum = 0;
          (pFVar2->Data).ArrayMax = 0;
        }
      }
      else {
        FVar4.Data = (FScriptContainerElement *)L"";
        if (local_1c8[0].Data.ArrayNum != 0) {
          FVar4.Data = local_1c8[0].Data.AllocatorInstance.Data;
        }
        pFVar2 = ::FString::Replace(param_2,&local_1d8,L"{frame_number_shot}",(wchar_t *)FVar4.Data,
                                    IgnoreCase);
        if (&local_1e8 != pFVar2) {
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
          local_1e8.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
          (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1e8.Data.ArrayNum = (pFVar2->Data).ArrayNum;
          local_1e8.Data.ArrayMax = (pFVar2->Data).ArrayMax;
          (pFVar2->Data).ArrayNum = 0;
          (pFVar2->Data).ArrayMax = 0;
        }
      }
    }
    else {
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_1c8[0].Data.ArrayNum != 0) {
        FVar4.Data = local_1c8[0].Data.AllocatorInstance.Data;
      }
      pFVar2 = ::FString::Replace(param_2,&local_1d8,L"{frame_number_rel}",(wchar_t *)FVar4.Data,
                                  IgnoreCase);
      if (&local_1e8 != pFVar2) {
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
        local_1e8.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
        (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8.Data.ArrayNum = (pFVar2->Data).ArrayNum;
        local_1e8.Data.ArrayMax = (pFVar2->Data).ArrayMax;
        (pFVar2->Data).ArrayNum = 0;
        (pFVar2->Data).ArrayMax = 0;
      }
    }
  }
  else {
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_1c8[0].Data.ArrayNum != 0) {
      FVar4.Data = local_1c8[0].Data.AllocatorInstance.Data;
    }
    pFVar2 = ::FString::Replace(param_2,&local_1d8,L"{frame_number}",(wchar_t *)FVar4.Data,
                                IgnoreCase);
    if (&local_1e8 != pFVar2) {
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      local_1e8.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.Data.ArrayNum = (pFVar2->Data).ArrayNum;
      local_1e8.Data.ArrayMax = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
LAB_14dde1d84:
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)&local_1a8;
  local_1a8.RenderDataIdentifier.RootBranchName = (param_1->RenderDataIdentifier).RootBranchName;
  ::FString::FString(&local_1a8.RenderDataIdentifier.LayerName,
                     &(param_1->RenderDataIdentifier).LayerName);
  ::FString::FString(&local_1a8.RenderDataIdentifier.RendererName,
                     &(param_1->RenderDataIdentifier).RendererName);
  ::FString::FString(&local_1a8.RenderDataIdentifier.SubResourceName,
                     &(param_1->RenderDataIdentifier).SubResourceName);
  ::FString::FString(&local_1a8.RenderDataIdentifier.CameraName,
                     &(param_1->RenderDataIdentifier).CameraName);
  local_1a8.RootFrameNumber = param_1->RootFrameNumber;
  local_1a8.ShotFrameNumber = param_1->ShotFrameNumber;
  local_1a8.RootFrameNumberRel = param_1->RootFrameNumberRel;
  local_1a8.ShotFrameNumberRel = param_1->ShotFrameNumberRel;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            (&local_1a8.FileMetadata,&param_1->FileMetadata);
  local_1a8.Version = param_1->Version;
  local_1a8.bForceRelativeFrameNumbers = param_1->bForceRelativeFrameNumbers;
  ::FString::FString(&local_1a8.FileNameOverride,&param_1->FileNameOverride);
  local_1a8.bEnsureAbsolutePath = param_1->bEnsureAbsolutePath;
  local_1a8.InitializationTime.Ticks = (param_1->InitializationTime).Ticks;
  local_1a8.InitializationTimeOffset.Ticks = (param_1->InitializationTimeOffset).Ticks;
  local_1a8.ZeroPadFrameNumberCount = param_1->ZeroPadFrameNumberCount;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            (&local_1a8.FileNameFormatOverrides,&param_1->FileNameFormatOverrides);
  local_1a8.Job.field0_0x0 =
       (TObjectPtr<UMoviePipelineExecutorJob>_u_0)(param_1->Job).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_1a8.Job.field0_0x0.DebugPtr != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1a8.Job.field0_0x0);
  }
  local_1a8.Shot.field0_0x0 =
       (TObjectPtr<UMoviePipelineExecutorShot>_u_0)(param_1->Shot).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_1a8.Shot.field0_0x0.DebugPtr != (UMoviePipelineExecutorShot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1a8.Shot.field0_0x0);
  }
  local_1a8.EvaluatedConfig.field0_0x0 =
       (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0)(param_1->EvaluatedConfig).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_1a8.EvaluatedConfig.field0_0x0.DebugPtr != (UMovieGraphEvaluatedConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1a8.EvaluatedConfig.field0_0x0);
  }
  local_1a8.FrameNumberOffset = param_1->FrameNumberOffset;
  local_1a8.DefaultFrameRate = param_1->DefaultFrameRate;
  local_1a8.bForceRelativeFrameNumbers = false;
  UMovieGraphBlueprintLibrary::ResolveFilenameFormatArguments
            (__return_storage_ptr__,&local_1e8,&local_1a8,param_3);
  FMovieGraphFilenameResolveParams::~FMovieGraphFilenameResolveParams(&local_1a8);
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_1c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dde3660

UClass * __cdecl UMovieGraphImageSequenceOutputNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MovieGraphImageSequenceOutputNode",
               &Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphImageSequenceOutputNode,0x1e8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphImageSequenceOutputNode>,
               InternalVTableHelperCtorCaller<UMovieGraphImageSequenceOutputNode>,local_res8,
               UMovieGraphFileOutputNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode.InnerSingleton;
}

// IsFinishedWritingToDiskImpl @ 14dde7df0

bool __thiscall
UMovieGraphImageSequenceOutputNode::IsFinishedWritingToDiskImpl
          (UMovieGraphImageSequenceOutputNode *this)

{
  longlong *plVar1;
  char cVar2;
  
  if (*(longlong *)&this->FinalizeFence != 0) {
    plVar1 = *(longlong **)(*(longlong *)&this->FinalizeFence + 0x60);
    cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0,0);
    if (cVar2 == '\0') {
      return false;
    }
  }
  return true;
}

// OnAllFramesSubmittedImpl @ 14dde8cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UMovieGraphImageSequenceOutputNode::OnAllFramesSubmittedImpl
          (UMovieGraphImageSequenceOutputNode *this,UMovieGraphPipeline *param_1,
          TObjectPtr<UMovieGraphEvaluatedConfig> *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  longlong local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_48[0] = 0;
  local_20 = (longlong *)0x0;
  puVar1 = (undefined8 *)
           (**(code **)((longlong)*this->ImageWriteQueue + 0x10))
                     (this->ImageWriteQueue,local_58,local_48);
  if (&this->FinalizeFence != (TFuture<void> *)puVar1) {
    *(undefined8 *)&this->FinalizeFence = *puVar1;
    *puVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->FinalizeFence).field_0x8,
               (FSharedReferencer<1> *)(puVar1 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  if (local_48[0] != 0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// OnReceiveImageDataImpl @ 14dde95a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ddead14) */
/* WARNING: Removing unreachable block (ram,0x00014ddeaeae) */
/* WARNING: Removing unreachable block (ram,0x00014ddeab7a) */
/* WARNING: Removing unreachable block (ram,0x00014ddead04) */
/* WARNING: Removing unreachable block (ram,0x00014ddea4cd) */
/* WARNING: Removing unreachable block (ram,0x00014ddea797) */
/* WARNING: Removing unreachable block (ram,0x00014ddea632) */
/* WARNING: Removing unreachable block (ram,0x00014ddeae9e) */
/* WARNING: Removing unreachable block (ram,0x00014ddeab6a) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffda8 : 0x00014ddeab6e */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
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
UMovieGraphImageSequenceOutputNode::OnReceiveImageDataImpl
          (UMovieGraphImageSequenceOutputNode *this,UMovieGraphPipeline *param_1,
          FMovieGraphOutputMergerFrame *param_2,
          TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
          *param_3)

{
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *pTVar1;
  TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  uint uVar4;
  FName FVar5;
  UMovieGraphImageSequenceOutputNode *pUVar6;
  longlong *plVar7;
  FImagePixelData *pFVar8;
  undefined8 uVar9;
  TUniqueFunction<void___cdecl(FImagePixelData_*)> *pTVar10;
  FName FVar11;
  code *pcVar12;
  bool bVar13;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *pTVar14;
  UMovieGraphImageSequenceOutputNode *this_00;
  FMovieGraphOutputMergerFrame *pFVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *pTVar17;
  bool bVar18;
  bool bVar19;
  char cVar20;
  uint uVar21;
  int iVar22;
  UMovieGraphEvaluatedConfig *this_01;
  UClass *pUVar23;
  TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_> *pTVar24;
  FImageWriteTask *pFVar25;
  byte bVar26;
  undefined8 *puVar27;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> TVar28;
  ulonglong uVar29;
  undefined8 *puVar30;
  ForElementType<FSetElementId> FVar31;
  FScriptContainerElement *pFVar32;
  FSoftObjectPath *pFVar33;
  ForAnyElementType FVar34;
  UMovieGraphFileOutputNode *pUVar35;
  longlong lVar36;
  FImageWriteTask *pFVar37;
  EImagePixelType EVar38;
  FMovieGraphRenderDataIdentifier *pFVar39;
  uint uVar40;
  FSoftObjectPath *pFVar41;
  TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
  *pTVar42;
  TIntPoint<int>_u_0 TVar43;
  int iVar44;
  FMovieGraphSampleState *pFVar45;
  uint uVar46;
  FMovieGraphRenderDataIdentifier *pFVar47;
  uint uVar48;
  UMovieGraphPipeline *pUVar49;
  undefined1 auStackY_698 [32];
  undefined1 local_644;
  undefined1 local_643;
  undefined1 local_642;
  undefined1 local_641;
  FImageWriteTask *local_640;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_638;
  UMovieGraphImageSequenceOutputNode *local_630;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> local_628;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> local_620;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_618;
  undefined8 uStack_610;
  FMovieGraphSampleState *pFStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  int local_5f0;
  undefined4 uStack_5ec;
  UMovieGraphPipeline *local_5e8;
  longlong local_5e0;
  FMovieGraphOutputMergerFrame *local_5d8;
  TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
  *local_5d0;
  FMovieGraphSampleState *local_5c8;
  TArray<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TSizedDefaultAllocator<32>_>
  local_5c0;
  FString local_5b0;
  undefined8 *local_5a0;
  undefined8 *local_598;
  undefined8 *local_590;
  FString local_588;
  FImageWriteTask *local_578;
  FSoftObjectPath local_570;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_550;
  FSoftObjectPath local_530;
  FMovieGraphOutputFutureData local_508;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_488;
  UMovieGraphFileOutputNode *local_468;
  int local_460;
  int local_45c;
  UObject *local_458;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_450;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_440;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_430;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_428;
  undefined8 uStack_408;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_400;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3f8;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  TIntPoint<int>_u_0 local_3c8;
  undefined8 local_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined8 local_3b0;
  TIntPoint<int>_u_0 local_3a8;
  TAsyncCropImage<FLinearColor> local_3a0;
  TAsyncCropImage<FFloat16Color> local_380;
  TAsyncCropImage<FColor> local_360;
  undefined1 local_340 [16];
  undefined8 local_330;
  TIntPoint<int>_u_0 local_328;
  TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_320;
  undefined8 uStack_318;
  FMovieGraphSampleState *local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined1 local_2f0 [24];
  FString local_2d8;
  FString local_2c8;
  FString local_2b8 [4];
  undefined4 local_26c;
  code *local_268 [2];
  undefined8 local_258;
  undefined8 uStack_250;
  TIntPoint<int>_u_0 local_248;
  longlong local_240;
  code *local_238 [2];
  undefined8 local_228;
  undefined8 uStack_220;
  TIntPoint<int>_u_0 local_218;
  longlong local_210;
  code *local_208 [2];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  TIntPoint<int>_u_0 local_1e8;
  longlong local_1e0;
  TMapBase<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>_>
  local_1d8;
  TUniqueFunction<void___cdecl(FImagePixelData_*)> local_188;
  TUniqueFunction<void___cdecl(FImagePixelData_*)> local_158;
  TUniqueFunction<void___cdecl(FImagePixelData_*)> local_128;
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  void *local_b8;
  undefined4 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_698;
  bVar19 = false;
  local_630 = this;
  local_5e8 = param_1;
  local_5d8 = param_2;
  if ((param_2 == (FMovieGraphOutputMergerFrame *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("InRawFrameData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MovieGraphImageSequenceOutputNode.cpp"
                          ,0xda,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  UMovieGraphFileOutputNode::GetCompositedPasses(&local_5c0,param_2);
  local_1d8.Pairs.Elements._0_8_ = 0;
  local_1d8.Pairs.Elements._8_8_ = 0;
  local_1d8.Pairs.Elements._32_8_ = 0;
  local_1d8.Pairs.Elements._40_4_ = 0;
  local_1d8.Pairs.Elements._44_4_ = 0x80;
  local_1d8.Pairs.Elements._48_4_ = 0xffffffff;
  local_1d8.Pairs.Elements._52_4_ = 0;
  local_1d8.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1d8.Pairs.HashSize = 0;
  local_618 = &param_2->ImageOutputData;
  local_488._padding_._0_4_ = 0;
  local_488._padding_._4_4_ = 1;
  local_550.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->ImageOutputData).field_0x10;
  local_488.UnvisitedBitMask = 0xffffffff;
  local_488.CurrentBitIndex = 0;
  local_488.BaseBitIndex = 0;
  local_638 = local_618;
  local_5c8 = (FMovieGraphSampleState *)local_550.Array;
  local_488.Array = local_550.Array;
  if (*(int *)&(param_2->ImageOutputData).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_488);
  }
  uStack_610 = CONCAT44(local_488._padding_._4_4_,(undefined4)local_488._padding_);
  pFStack_608 = (FMovieGraphSampleState *)local_488.Array;
  uStack_600._4_4_ = local_488.CurrentBitIndex;
  uStack_600._0_4_ = local_488.UnvisitedBitMask;
  uStack_5f8._4_4_ = local_488._28_4_;
  uStack_5f8._0_4_ = local_488.BaseBitIndex;
  local_5f0 = *(int *)&(param_2->ImageOutputData).field_0x8 -
              *(int *)&(param_2->ImageOutputData).field_0x34;
  TStack_428.Array = local_488.Array;
  uStack_408 = CONCAT44(uStack_5ec,local_5f0);
  uVar21 = *(uint *)&(param_2->ImageOutputData).field_0x28;
  local_550._padding_._0_4_ = (int)uVar21 >> 5;
  bVar26 = (byte)uVar21 & 0x1f;
  local_550._padding_._4_4_ = 1 << bVar26;
  local_550.UnvisitedBitMask = -1 << bVar26;
  local_550.BaseBitIndex = uVar21 & 0xffffffe0;
  local_550.CurrentBitIndex = uVar21;
  local_430 = local_618;
  TStack_428._padding_ = uStack_610;
  TStack_428._16_8_ = uStack_600;
  TStack_428._24_8_ = uStack_5f8;
  if ((((int)uVar21 < 0) || (*(int *)&(param_2->ImageOutputData).field_0x28 < (int)uVar21)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (uVar21 != *(uint *)&(param_2->ImageOutputData).field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_550);
  }
  iVar44 = local_550.CurrentBitIndex;
  pTVar16 = local_550.Array;
  pTVar14 = local_638;
  uStack_610 = CONCAT44(local_550._padding_._4_4_,(int)local_550._padding_);
  pFStack_608 = (FMovieGraphSampleState *)local_550.Array;
  uStack_600 = CONCAT44(local_550.CurrentBitIndex,local_550.UnvisitedBitMask);
  uStack_5f8 = CONCAT44(local_550._28_4_,local_550.BaseBitIndex);
  while( true ) {
    pTVar17 = local_430;
    bVar18 = false;
    if (*(int *)&local_430->field_0x8 - *(int *)&local_430->field_0x34 != (int)uStack_408) {
      local_644 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_644);
    }
    if (((TStack_428.CurrentBitIndex == iVar44) && (TStack_428.Array == pTVar16)) &&
       (pTVar17 == pTVar14)) break;
    pFVar39 = (FMovieGraphRenderDataIdentifier *)
              ((longlong)TStack_428.CurrentBitIndex * 0x58 + *(longlong *)pTVar17);
    if ((pFVar39[1].RootBranchName == (FName)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("RenderData.Value.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MovieGraphImageSequenceOutputNode.cpp"
                            ,0xef,
                            L"Unexpected empty image data: incorrectly moved or its production failed?"
                           ), bVar18)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    lVar36 = *(longlong *)((longlong)pFVar39[1].RootBranchName + 0x18);
    local_5e0 = lVar36;
    if (*(int *)(lVar36 + 0x200) == 0) {
LAB_14dde987f:
      bVar18 = false;
    }
    else {
      local_530.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_530.AssetPath.PackageName.Number = 0;
      local_530.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_530.AssetPath.AssetName.Number = 0;
      local_530.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_530.SubPathString.Data.ArrayNum = 0;
      local_530.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_530,(UObject *)local_630->_padding_);
      bVar19 = true;
      pFVar33 = *(FSoftObjectPath **)(lVar36 + 0x1f8);
      pFVar41 = pFVar33 + *(int *)(lVar36 + 0x200);
      for (; pFVar33 != pFVar41; pFVar33 = pFVar33 + 1) {
        bVar18 = FSoftObjectPath::operator==(pFVar33,&local_530);
        if (bVar18) goto LAB_14dde987f;
      }
      bVar18 = true;
    }
    if ((bVar19) &&
       (bVar19 = false,
       local_530.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_530.SubPathString.Data.AllocatorInstance.Data);
    }
    if (!bVar18) {
      pTVar42 = (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
                 *)(local_5c0.AllocatorInstance.Data + (longlong)local_5c0.ArrayNum * 0x50);
      for (FVar34.Data = local_5c0.AllocatorInstance.Data;
          (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
           *)FVar34.Data != pTVar42; FVar34.Data = FVar34.Data + 0x50) {
        bVar18 = FMovieGraphRenderDataIdentifier::operator==
                           ((FMovieGraphRenderDataIdentifier *)FVar34.Data,pFVar39);
        if (bVar18) {
          if ((TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
               *)FVar34.Data !=
              (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
               *)0x0) goto LAB_14dde9b4a;
          break;
        }
      }
      local_5d0 = (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
                   *)local_2f0;
      local_2f0._0_8_ = pFVar39->RootBranchName;
      ::FString::FString((FString *)(local_2f0 + 8),&pFVar39->LayerName);
      ::FString::FString(&local_2d8,&pFVar39->RendererName);
      ::FString::FString(&local_2c8,&pFVar39->SubResourceName);
      ::FString::FString(local_2b8,&pFVar39->CameraName);
      uVar21 = ::GetTypeHash((FMovieGraphRenderDataIdentifier *)local_2f0);
      iVar22 = TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FMovieGraphRenderDataIdentifier>(param_3,uVar21,pFVar39);
      if (iVar22 != -1) {
        this_01 = TStrongObjectPtr<UMovieGraphEvaluatedConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                  ::operator->(&local_5d8->EvaluatedConfig);
        UMovieGraphEvaluatedConfig::GetSettingsForBranch
                  (this_01,&local_450,(UClass *)local_630->_padding_,pFVar39->RootBranchName,false,
                   true);
        if (local_450.ArrayNum < 1) {
          if (local_450.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_450.AllocatorInstance.Data);
          }
LAB_14dde99e4:
          pUVar35 = (UMovieGraphFileOutputNode *)0x0;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParentNode",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MovieGraphImageSequenceOutputNode.cpp"
                              ,0x10b,
                              L"Image sequence output should not exist without a parent node in the graph."
                             );
          if (bVar18) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        else {
          pUVar35 = *(UMovieGraphFileOutputNode **)local_450.AllocatorInstance.Data;
          FMemory::Free(local_450.AllocatorInstance.Data);
          if (pUVar35 == (UMovieGraphFileOutputNode *)0x0) goto LAB_14dde99e4;
          pUVar23 = StaticClass();
          iVar22 = (int)pUVar23->_padding_;
          if ((*(int *)(pUVar35->_padding_ + 0x38) < iVar22) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar35->_padding_ + 0x30) + (longlong)iVar22 * 8) !=
              &pUVar23->_padding_)) goto LAB_14dde99e4;
        }
        uVar21 = ((uint)((ulonglong)pUVar35 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar35 >> 4)) *
                 -0x7a143595;
        uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
        uVar21 = uVar21 >> 0x10 ^ uVar21;
        local_468 = pUVar35;
        if (local_1d8.Pairs.Elements._8_4_ != local_1d8.Pairs.Elements._52_4_) {
          FVar31 = (ForElementType<FSetElementId>)&local_1d8.Pairs.Hash;
          if (local_1d8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar31 = local_1d8.Pairs.Hash.SecondaryData;
          }
          for (iVar22 = *(int *)((longlong)FVar31 +
                                (ulonglong)(local_1d8.Pairs.HashSize - 1U & uVar21) * 4);
              iVar22 != -1;
              iVar22 = *(int *)((longlong)iVar22 * 0x20 + 0x18 + local_1d8.Pairs.Elements._0_8_)) {
            if (*(UMovieGraphFileOutputNode **)
                 ((longlong)iVar22 * 0x20 + local_1d8.Pairs.Elements._0_8_) == pUVar35) {
              if ((iVar22 != -1) &&
                 (lVar36 = (longlong)iVar22 * 0x20 + local_1d8.Pairs.Elements._0_8_, lVar36 != 0)) {
                pTVar24 = (TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>
                           *)(lVar36 + 8);
                goto LAB_14dde9ab5;
              }
              break;
            }
          }
        }
        pTVar24 = TMapBase<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<UMovieGraphFileOutputNode_const_*>(&local_1d8,uVar21,&local_468);
LAB_14dde9ab5:
        pFVar32 = (pTVar24->AllocatorInstance).Data;
        if (((pFVar32 <= (FScriptContainerElement *)&local_5e0) &&
            ((FScriptContainerElement *)&local_5e0 < pFVar32 + (longlong)pTVar24->ArrayMax * 8)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar22 = pTVar24->ArrayNum;
        if (iVar22 == pTVar24->ArrayMax) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar24->AllocatorInstance,&pTVar24->ArrayMax);
        }
        pTVar24->ArrayNum = iVar22 + 1;
        *(longlong *)((pTVar24->AllocatorInstance).Data + (longlong)iVar22 * 8) = local_5e0;
      }
    }
LAB_14dde9b4a:
    TStack_428.UnvisitedBitMask = TStack_428.UnvisitedBitMask & ~TStack_428._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_428);
  }
  TMap<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>_>
  ::Append<FDefaultSetAllocator>
            (&local_5d8->NodeInstanceToPayloads,
             (TMap<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>_>
              *)&local_1d8);
  local_310 = local_5c8;
  uStack_610._0_4_ = 0;
  uStack_610._4_4_ = 1;
  uStack_5f8._0_4_ = 0;
  iVar44 = (local_5c8->TraversalContext).ShotIndex;
  uStack_600._4_4_ = 0;
  if (iVar44 != 0) {
    pFVar45 = local_5c8;
    if ((FMovieGraphSampleState *)local_5c8->_padding_ != (FMovieGraphSampleState *)0x0) {
      pFVar45 = (FMovieGraphSampleState *)local_5c8->_padding_;
    }
    uVar21 = (uint)pFVar45->_padding_;
    uStack_5f8._0_4_ = 0;
    while (uVar21 == 0) {
      uStack_610._0_4_ = (int)uStack_610 + 1;
      uStack_5f8._0_4_ = (int)uStack_5f8 + 0x20;
      uStack_600._4_4_ = iVar44;
      if ((int)(iVar44 + -1 + (iVar44 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uStack_610)
      goto LAB_14dde9c32;
      uVar21 = *(uint *)((longlong)&pFVar45->_padding_ + (longlong)(int)uStack_610 * 4);
    }
    uStack_610._4_4_ = ~(uVar21 - 1) & uVar21;
    uVar29 = (ulonglong)uStack_610._4_4_ * 2 + 1;
    lVar36 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar36 == 0; lVar36 = lVar36 + -1) {
      }
    }
    local_460 = (int)lVar36;
    uStack_600._4_4_ = local_460 + -1 + (int)uStack_5f8;
    if (iVar44 < uStack_600._4_4_) {
      uStack_600._4_4_ = iVar44;
    }
  }
LAB_14dde9c32:
  local_618 = local_638;
  pFStack_608 = local_5c8;
  uStack_600._0_4_ = 0xffffffff;
  local_5f0 = *(int *)&local_638->field_0x8 - *(int *)&local_638->field_0x34;
  local_400 = local_638;
  TStack_3f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_5c8;
  TStack_3f8.UnvisitedBitMask = 0xffffffff;
  uStack_3d8 = CONCAT44(uStack_5ec,local_5f0);
  uVar21 = *(uint *)&local_638->field_0x28;
  iVar22 = (int)uVar21 >> 5;
  bVar26 = (byte)uVar21 & 0x1f;
  uVar46 = 1 << bVar26;
  uVar48 = -1 << bVar26;
  uVar40 = uVar21 & 0xffffffe0;
  TStack_3f8._padding_._0_4_ = (int)uStack_610;
  TStack_3f8._padding_._4_4_ = uStack_610._4_4_;
  TStack_3f8.CurrentBitIndex = uStack_600._4_4_;
  TStack_3f8.BaseBitIndex = (int)uStack_5f8;
  if ((((int)uVar21 < 0) || (iVar44 < (int)uVar21)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar4 = (local_310->TraversalContext).ShotIndex;
  if (uVar21 != uVar4) {
    pFVar45 = local_310;
    if ((FMovieGraphSampleState *)local_310->_padding_ != (FMovieGraphSampleState *)0x0) {
      pFVar45 = (FMovieGraphSampleState *)local_310->_padding_;
    }
    uVar21 = uVar48 & *(uint *)((longlong)&pFVar45->_padding_ + (longlong)iVar22 * 4);
    while (uVar21 == 0) {
      iVar22 = iVar22 + 1;
      uVar40 = uVar40 + 0x20;
      uVar21 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar22) goto LAB_14dde9d59;
      uVar48 = 0xffffffff;
      uVar21 = *(uint *)((longlong)&pFVar45->_padding_ + (longlong)iVar22 * 4);
    }
    uVar46 = ~(uVar21 - 1) & uVar21;
    uVar29 = (ulonglong)uVar46 * 2 + 1;
    lVar36 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar36 == 0; lVar36 = lVar36 + -1) {
      }
    }
    local_45c = (int)lVar36;
    uVar21 = local_45c + -1 + uVar40;
    if ((int)uVar4 < (int)uVar21) {
      uVar21 = uVar4;
    }
  }
LAB_14dde9d59:
  local_618 = local_638;
  uStack_610 = CONCAT44(uVar46,iVar22);
  pFStack_608 = local_310;
  uStack_600 = CONCAT44(uVar21,uVar48);
  uStack_5f8 = CONCAT44(local_26c,uVar40);
  local_5f0 = *(int *)&local_638->field_0x8 - *(int *)&local_638->field_0x34;
  local_320 = local_638;
  uStack_318 = uStack_610;
  uStack_308 = uStack_600;
  uStack_2f8 = CONCAT44(uStack_5ec,local_5f0);
  local_300 = uStack_5f8;
  pUVar49 = local_5e8;
LAB_14dde9db0:
  pTVar14 = local_400;
  if (*(int *)&local_400->field_0x8 - *(int *)&local_400->field_0x34 != (int)uStack_3d8) {
    local_643 = 0;
    `TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_643);
  }
  pFVar15 = local_5d8;
  if (((TStack_3f8.CurrentBitIndex == uStack_308._4_4_) &&
      ((FMovieGraphSampleState *)TStack_3f8.Array == local_310)) && (pTVar14 == local_320)) {
    local_1d8.Pairs.HashSize = 0;
    if (local_1d8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1d8.Pairs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_1d8);
    DestructItems<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,int>
              ((TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
                *)local_5c0.AllocatorInstance.Data,local_5c0.ArrayNum);
    if ((TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
         *)local_5c0.AllocatorInstance.Data !=
        (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
         *)0x0) {
      FMemory::Free(local_5c0.AllocatorInstance.Data);
    }
    return;
  }
  pTVar42 = (TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>
             *)((longlong)TStack_3f8.CurrentBitIndex * 0x58 + *(longlong *)pTVar14);
  local_5d0 = pTVar42;
  if (((local_5d8->EvaluatedConfig).Object == (UObject *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                          ,0x67,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  this_00 = local_630;
  FVar5.ComparisonIndex.Value = *(uint *)&pTVar42->field_0x0;
  FVar5.Number = *(uint *)&pTVar42->field_0x4;
  UMovieGraphEvaluatedConfig::GetSettingsForBranch
            ((UMovieGraphEvaluatedConfig *)(pFVar15->EvaluatedConfig).Object,&local_440,
             (UClass *)local_630->_padding_,FVar5,false,true);
  if (local_440.ArrayNum < 1) {
    if (local_440.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_440.AllocatorInstance.Data);
    }
  }
  else {
    pUVar6 = *(UMovieGraphImageSequenceOutputNode **)local_440.AllocatorInstance.Data;
    FMemory::Free(local_440.AllocatorInstance.Data);
    if (pUVar6 != (UMovieGraphImageSequenceOutputNode *)0x0) {
      pUVar23 = StaticClass();
      iVar44 = (int)pUVar23->_padding_;
      if (((iVar44 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar44 * 8) ==
           &pUVar23->_padding_)) && (((uint)pUVar6->_padding_ >> 0x1e & 1) == 0)) {
        uVar21 = ((uint)((ulonglong)pUVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar6 >> 4)) *
                 -0x7a143595;
        uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
        if (local_1d8.Pairs.Elements._8_4_ != local_1d8.Pairs.Elements._52_4_) {
          FVar31 = (ForElementType<FSetElementId>)&local_1d8.Pairs.Hash;
          if (local_1d8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar31 = local_1d8.Pairs.Hash.SecondaryData;
          }
          for (iVar44 = *(int *)((longlong)FVar31 +
                                (ulonglong)
                                (local_1d8.Pairs.HashSize - 1U & (uVar21 >> 0x10 ^ uVar21)) * 4);
              iVar44 != -1;
              iVar44 = *(int *)((longlong)iVar44 * 0x20 + 0x18 + local_1d8.Pairs.Elements._0_8_)) {
            if (*(UMovieGraphImageSequenceOutputNode **)
                 ((longlong)iVar44 * 0x20 + local_1d8.Pairs.Elements._0_8_) == pUVar6) {
              if (((iVar44 != -1) &&
                  (lVar36 = (longlong)iVar44 * 0x20 + local_1d8.Pairs.Elements._0_8_, lVar36 != 0))
                 && ((undefined8 *)(lVar36 + 8) != (undefined8 *)0x0)) {
                pFVar45 = *(FMovieGraphSampleState **)(*(longlong *)&pTVar42->field_0x48 + 0x18);
                puVar27 = *(undefined8 **)(lVar36 + 8);
                puVar30 = puVar27 + *(int *)(lVar36 + 0x10);
                goto joined_r0x00014dde9f9e;
              }
              break;
            }
          }
        }
      }
    }
  }
  goto LAB_14ddeb1ac;
joined_r0x00014dde9f9e:
  local_5c8 = pFVar45;
  if (puVar27 == puVar30) goto LAB_14ddeb1ac;
  if ((FMovieGraphSampleState *)*puVar27 == pFVar45) {
    local_f8._0_8_ = (void *)0x0;
    local_f8._8_8_ = 0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    local_cc = 0x80;
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_88 = (void *)0x0;
    local_80 = 0;
    local_7c = 0x80;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_588.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_588.Data.ArrayNum = 0;
    local_588.Data.ArrayMax = 0;
    CreateFileName(this_00,&local_5b0,pFVar15,pUVar6,pUVar49,pTVar42,this_00->OutputFormat,
                   (FMovieGraphResolveArgs *)local_f8,&local_588);
    if (local_5b0.Data.ArrayNum < 2) {
      local_642 = 0;
      bVar19 = `UMovieGraphImageSequenceOutputNode::OnReceiveImageDataImpl'::__l54::<lambda_2>::
               operator()(&local_642);
      if (!bVar19) {
        if (local_5b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5b0.Data.AllocatorInstance.Data);
        }
        if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_588.Data.AllocatorInstance.Data);
        }
        local_60 = 0;
        if (local_68 != (void *)0x0) {
          FMemory::Free(local_68);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&local_a8,0);
        if (local_88 != (void *)0x0) {
          FMemory::Free(local_88);
        }
        if (local_a8 != (void *)0x0) {
          FMemory::Free(local_a8);
        }
        local_b0 = 0;
        if (local_b8 != (void *)0x0) {
          FMemory::Free(local_b8);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_f8,0);
        if (local_d8 != (void *)0x0) {
          FMemory::Free(local_d8);
        }
        if ((void *)local_f8._0_8_ != (void *)0x0) {
          FMemory::Free((void *)local_f8._0_8_);
        }
        goto LAB_14ddeb1ac;
      }
    }
    pFVar25 = ::operator_new(0x80);
    iVar44 = 0;
    pFVar37 = (FImageWriteTask *)0x0;
    if (pFVar25 != (FImageWriteTask *)0x0) {
      *(undefined ***)pFVar25 = &___7FImageWriteTask__6B_;
      *(TIntPoint<int>_u_0 *)&(pFVar25->Filename).Data = (TIntPoint<int>_u_0)0x0;
      ((TIntPoint<int>_u_0 *)&(pFVar25->Filename).Data)[1] = (TIntPoint<int>_u_0)0x0;
      *(undefined1 *)&((TSharedPtr<IImagePixelDataPayload,1> *)&pFVar25->Format)->Object = 3;
      pFVar25->CompressionQuality = 0;
      *(undefined1 *)&((FSharedReferencer<1> *)&pFVar25->bOverwriteFile)->ReferenceController = 1;
      *(undefined8 *)&pFVar25->OnCompleted = 0;
      *(undefined8 *)&(pFVar25->OnCompleted).field_0x28 = 0;
      (pFVar25->PixelData).Ptr = (FImagePixelData *)0x0;
      (pFVar25->PixelPreProcessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar25->PixelPreProcessors).ArrayNum = 0;
      (pFVar25->PixelPreProcessors).ArrayMax = 0;
      pFVar37 = pFVar25;
    }
    *(EImageFormat *)&((TSharedPtr<IImagePixelDataPayload,1> *)&pFVar37->Format)->Object =
         this_00->OutputFormat;
    pFVar37->CompressionQuality = 100;
    if (local_5b0.Data.ArrayNum != 0) {
      iVar44 = local_5b0.Data.ArrayNum + -1;
    }
    local_640 = pFVar37;
    ::FString::AssignRange
              (&pFVar37->Filename,(wchar_t *)local_5b0.Data.AllocatorInstance.Data,iVar44);
    if (((pFVar15->EvaluatedConfig).Object == (UObject *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                            ,0x61,L""), bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar44 = UMovieGraphFileOutputNode::GetNumFileOutputNodes
                       ((UMovieGraphEvaluatedConfig *)(pFVar15->EvaluatedConfig).Object,
                        (FName *)pTVar42);
    plVar7 = *(longlong **)&pTVar42->field_0x48;
    if (iVar44 < 2) {
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_620);
      pTVar1 = &pFVar37->PixelData;
      TVar28.Ptr = local_620.Ptr;
      if (pTVar1 != &local_620) {
        pFVar8 = pTVar1->Ptr;
        pTVar1->Ptr = local_620.Ptr;
        local_620.Ptr = (FImagePixelData *)0x0;
        TVar28.Ptr = (FImagePixelData *)(FImageWriteTask *)0x0;
        if (pFVar8 != (FImagePixelData *)0x0) {
          (**(code **)pFVar8->_padding_)(pFVar8,1);
          TVar28.Ptr = local_620.Ptr;
        }
      }
    }
    else {
      (**(code **)(*plVar7 + 0x10))(plVar7,&local_628);
      pTVar1 = &pFVar37->PixelData;
      TVar28.Ptr = local_628.Ptr;
      if (pTVar1 != &local_628) {
        pFVar8 = pTVar1->Ptr;
        pTVar1->Ptr = local_628.Ptr;
        local_628.Ptr = (FImagePixelData *)0x0;
        TVar28.Ptr = (FImagePixelData *)(FImageWriteTask *)0x0;
        if (pFVar8 != (FImagePixelData *)0x0) {
          (**(code **)pFVar8->_padding_)(pFVar8,1);
          TVar28.Ptr = local_628.Ptr;
        }
      }
    }
    if ((FImageWriteTask *)TVar28.Ptr != (FImageWriteTask *)0x0) {
      (*(code *)**(undefined8 **)TVar28.Ptr)(TVar28.Ptr,1);
    }
    TVar43 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    if ((*(int *)((longlong)&(pFVar45->CropRectangle).field0_0x0 + 8) ==
         *(int *)&(pFVar45->CropRectangle).field0_0x0) &&
       (*(int *)((longlong)&(pFVar45->CropRectangle).field0_0x0 + 0xc) ==
        *(int *)((longlong)&(pFVar45->CropRectangle).field0_0x0 + 4))) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    uVar9 = *(undefined8 *)(*(longlong *)&pTVar42->field_0x48 + 8);
    if (((int)uVar9 == (pFVar45->OverscannedResolution).field0_0x0._s_0.X) &&
       ((int)((ulonglong)uVar9 >> 0x20) == (pFVar45->OverscannedResolution).field0_0x0._s_0.Y)) {
      bVar13 = true;
    }
    else {
      bVar13 = false;
    }
    cVar20 = (**(code **)(this_00->_padding_ + 0x3b0))(this_00);
    pTVar42 = local_5d0;
    if (((cVar20 == '\0') || (!bVar19)) || (!bVar13)) {
      TVar43 = (pFVar45->CropRectangle).field0_0x0._s_0.Min.field0_0x0;
    }
    else {
      iVar44 = *(int *)(*(longlong *)&local_5d0->field_0x48 + 0x10);
      if (iVar44 == 0) {
        pTVar2 = &pFVar37->PixelPreProcessors;
        local_360.OutCroppedImage.Ptr = (FImagePixelData *)0x0;
        local_360.CropRect.field0_0x0._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(pFVar45->CropRectangle).field0_0x0._s_0.Min.field0_0x0;
        local_360.CropRect.field0_0x0._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(pFVar45->CropRectangle).field0_0x0._s_0.Max.field0_0x0;
        local_360.ParentWriteTask = pFVar37;
        TUniqueFunction<void___cdecl(FImagePixelData_*)>::
        TUniqueFunction<void___cdecl(FImagePixelData_*)><TAsyncCropImage<FColor>_>
                  (&local_128,&local_360);
        pTVar10 = (TUniqueFunction<void___cdecl(FImagePixelData_*)> *)
                  (pTVar2->AllocatorInstance).Data;
        if (((pTVar10 <= &local_128) &&
            (&local_128 < pTVar10 + (pFVar37->PixelPreProcessors).ArrayMax)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        piVar3 = &(pFVar37->PixelPreProcessors).ArrayMax;
        iVar44 = (pFVar37->PixelPreProcessors).ArrayNum;
        if (iVar44 == *piVar3) {
          iVar44 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1030,&pTVar2->AllocatorInstance,piVar3);
        }
        (pFVar37->PixelPreProcessors).ArrayNum = iVar44 + 1;
        pFVar32 = (pTVar2->AllocatorInstance).Data + (longlong)iVar44 * 0x30;
        *(undefined8 *)pFVar32 = local_128._0_8_;
        *(undefined8 *)(pFVar32 + 0x28) = local_128._40_8_;
        local_128._40_8_ = 0;
        *(undefined4 *)(pFVar32 + 0x10) = local_128._16_4_;
        *(undefined4 *)(pFVar32 + 0x14) = local_128._20_4_;
        *(undefined4 *)(pFVar32 + 0x18) = local_128._24_4_;
        *(undefined4 *)(pFVar32 + 0x1c) = local_128._28_4_;
        *(undefined8 *)(pFVar32 + 0x20) = local_128._32_8_;
        if (*(longlong *)pFVar32 != 0) {
          local_128._0_8_ = 0;
        }
        TVar28.Ptr = local_360.OutCroppedImage.Ptr;
        if (local_128._0_8_ != 0) {
          (**(code **)(CONCAT44(local_128._20_4_,local_128._16_4_) + 0x10))();
          TVar28.Ptr = local_360.OutCroppedImage.Ptr;
        }
      }
      else if (iVar44 == 1) {
        pTVar2 = &pFVar37->PixelPreProcessors;
        local_380.OutCroppedImage.Ptr = (FImagePixelData *)0x0;
        local_380.CropRect.field0_0x0._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(pFVar45->CropRectangle).field0_0x0._s_0.Min.field0_0x0;
        local_380.CropRect.field0_0x0._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(pFVar45->CropRectangle).field0_0x0._s_0.Max.field0_0x0;
        local_380.ParentWriteTask = pFVar37;
        TUniqueFunction<void___cdecl(FImagePixelData_*)>::
        TUniqueFunction<void___cdecl(FImagePixelData_*)><TAsyncCropImage<FFloat16Color>_>
                  (&local_158,&local_380);
        pTVar10 = (TUniqueFunction<void___cdecl(FImagePixelData_*)> *)
                  (pTVar2->AllocatorInstance).Data;
        if (((pTVar10 <= &local_158) &&
            (&local_158 < pTVar10 + (pFVar37->PixelPreProcessors).ArrayMax)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        piVar3 = &(pFVar37->PixelPreProcessors).ArrayMax;
        iVar44 = (pFVar37->PixelPreProcessors).ArrayNum;
        if (iVar44 == *piVar3) {
          iVar44 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1030,&pTVar2->AllocatorInstance,piVar3);
        }
        (pFVar37->PixelPreProcessors).ArrayNum = iVar44 + 1;
        pFVar32 = (pTVar2->AllocatorInstance).Data + (longlong)iVar44 * 0x30;
        *(undefined8 *)pFVar32 = local_158._0_8_;
        *(undefined8 *)(pFVar32 + 0x28) = local_158._40_8_;
        local_158._40_8_ = 0;
        *(undefined4 *)(pFVar32 + 0x10) = local_158._16_4_;
        *(undefined4 *)(pFVar32 + 0x14) = local_158._20_4_;
        *(undefined4 *)(pFVar32 + 0x18) = local_158._24_4_;
        *(undefined4 *)(pFVar32 + 0x1c) = local_158._28_4_;
        *(undefined8 *)(pFVar32 + 0x20) = local_158._32_8_;
        if (*(longlong *)pFVar32 != 0) {
          local_158._0_8_ = 0;
        }
        TVar28.Ptr = local_380.OutCroppedImage.Ptr;
        if (local_158._0_8_ != 0) {
          (**(code **)(CONCAT44(local_158._20_4_,local_158._16_4_) + 0x10))();
          TVar28.Ptr = local_380.OutCroppedImage.Ptr;
        }
      }
      else {
        if (iVar44 != 2) goto LAB_14ddea7c5;
        pTVar2 = &pFVar37->PixelPreProcessors;
        local_3a0.OutCroppedImage.Ptr = (FImagePixelData *)0x0;
        local_3a0.CropRect.field0_0x0._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(pFVar45->CropRectangle).field0_0x0._s_0.Min.field0_0x0;
        local_3a0.CropRect.field0_0x0._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(pFVar45->CropRectangle).field0_0x0._s_0.Max.field0_0x0;
        local_3a0.ParentWriteTask = pFVar37;
        TUniqueFunction<void___cdecl(FImagePixelData_*)>::
        TUniqueFunction<void___cdecl(FImagePixelData_*)><TAsyncCropImage<FLinearColor>_>
                  (&local_188,&local_3a0);
        pTVar10 = (TUniqueFunction<void___cdecl(FImagePixelData_*)> *)
                  (pTVar2->AllocatorInstance).Data;
        if (((pTVar10 <= &local_188) &&
            (&local_188 < pTVar10 + (pFVar37->PixelPreProcessors).ArrayMax)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        piVar3 = &(pFVar37->PixelPreProcessors).ArrayMax;
        iVar44 = (pFVar37->PixelPreProcessors).ArrayNum;
        if (iVar44 == *piVar3) {
          iVar44 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1030,&pTVar2->AllocatorInstance,piVar3);
        }
        (pFVar37->PixelPreProcessors).ArrayNum = iVar44 + 1;
        pFVar32 = (pTVar2->AllocatorInstance).Data + (longlong)iVar44 * 0x30;
        *(undefined8 *)pFVar32 = local_188._0_8_;
        *(undefined8 *)(pFVar32 + 0x28) = local_188._40_8_;
        local_188._40_8_ = 0;
        *(undefined4 *)(pFVar32 + 0x10) = local_188._16_4_;
        *(undefined4 *)(pFVar32 + 0x14) = local_188._20_4_;
        *(undefined4 *)(pFVar32 + 0x18) = local_188._24_4_;
        *(undefined4 *)(pFVar32 + 0x1c) = local_188._28_4_;
        *(undefined8 *)(pFVar32 + 0x20) = local_188._32_8_;
        if (*(longlong *)pFVar32 != 0) {
          local_188._0_8_ = 0;
        }
        TVar28.Ptr = local_3a0.OutCroppedImage.Ptr;
        if (local_188._0_8_ != 0) {
          (**(code **)(CONCAT44(local_188._20_4_,local_188._16_4_) + 0x10))();
          TVar28.Ptr = local_3a0.OutCroppedImage.Ptr;
        }
      }
      if (TVar28.Ptr != (FImagePixelData *)0x0) {
        (**(code **)(TVar28.Ptr)->_padding_)(TVar28.Ptr,1);
      }
    }
LAB_14ddea7c5:
    pTVar2 = &pFVar37->PixelPreProcessors;
    local_458 = (local_5d8->EvaluatedConfig).Object;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_458 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_458);
    }
    bVar19 = FMovieGraphOCIOHelper::GenerateOcioPixelPreProcessor
                       (pFVar45,local_5e8,(TObjectPtr<UMovieGraphEvaluatedConfig>)&local_458,
                        &pUVar6->OCIOConfiguration,&pUVar6->OCIOContext,pTVar2);
    pFVar8 = (pFVar37->PixelData).Ptr;
    EVar38 = pFVar8->Type;
    if ((local_630->bQuantizeTo8Bit != false) && (8 < pFVar8->BitDepth)) {
      uStack_3b8 = CONCAT31(uStack_3b8._1_3_,!bVar19);
      piVar3 = &(pFVar37->PixelPreProcessors).ArrayMax;
      iVar44 = (pFVar37->PixelPreProcessors).ArrayNum;
      local_3c0 = pFVar37;
      if (iVar44 == *piVar3) {
        iVar44 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1030,&pTVar2->AllocatorInstance,piVar3);
      }
      (pFVar37->PixelPreProcessors).ArrayNum = iVar44 + 1;
      pFVar32 = (pTVar2->AllocatorInstance).Data + (longlong)iVar44 * 0x30;
      *(undefined8 *)pFVar32 = 0;
      *(undefined8 *)(pFVar32 + 0x28) = 0;
      *(undefined ***)(pFVar32 + 0x10) =
           &
           ___7__TFunction_OwnedObject_UFAsyncImageQuantization_MoviePipeline_UE___00_0A__Function_Private_Core_UE__6B_
      ;
      *(undefined4 *)(pFVar32 + 0x18) = (undefined4)local_3c0;
      *(undefined4 *)(pFVar32 + 0x1c) = local_3c0._4_4_;
      *(undefined4 *)(pFVar32 + 0x20) = uStack_3b8;
      *(undefined4 *)(pFVar32 + 0x24) = uStack_3b4;
      if (pFVar32 + 0x18 != (FScriptContainerElement *)0x0) {
        *(code **)pFVar32 =
             UE::Core::Private::Function::
             TFunctionRefCaller<UE::MoviePipeline::FAsyncImageQuantization,void,FImagePixelData_*>::
             Call;
      }
      EVar38 = Color;
    }
    uVar29 = (ulonglong)local_5c0.ArrayNum;
    local_638 = (TMap<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
                 *)CONCAT44(local_638._4_4_,local_5c0.ArrayNum);
    pFVar47 = (FMovieGraphRenderDataIdentifier *)(local_5c0.AllocatorInstance.Data + uVar29 * 0x50);
    pFVar39 = (FMovieGraphRenderDataIdentifier *)(local_5c0.AllocatorInstance.Data + 0x48);
    goto LAB_14ddea8c0;
  }
  puVar27 = puVar27 + 1;
  goto joined_r0x00014dde9f9e;
LAB_14ddea8c0:
  if (local_5c0.ArrayNum != (int)uVar29) {
    local_641 = 0;
    `TCheckedPointerIterator<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,int,0>
    ::operator!='::__l2::<lambda_1>::operator()(&local_641);
  }
  pFVar45 = local_5c8;
  pUVar49 = local_5e8;
  if (pFVar39 + -1 == pFVar47) goto LAB_14ddeaee0;
  if (local_5c8->bAllowsCompositing != false) {
    iVar44 = pFVar39[-1].CameraName.Data.ArrayNum;
    if (iVar44 == *(int *)&pTVar42->field_0x40) {
      if (1 < iVar44) {
        iVar44 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)pFVar39[-1].CameraName.Data.AllocatorInstance.Data,
                            *(wchar_t **)&pTVar42->field_0x38);
        bVar19 = iVar44 == 0;
        goto LAB_14ddea919;
      }
    }
    else {
      bVar19 = iVar44 + *(int *)&pTVar42->field_0x40 == 1;
LAB_14ddea919:
      if (!bVar19) goto LAB_14ddeaecf;
    }
    FVar11.ComparisonIndex.Value = *(uint *)&pTVar42->field_0x0;
    FVar11.Number = *(uint *)&pTVar42->field_0x4;
    if (pFVar39[-1].RootBranchName == FVar11) {
      lVar36 = *(longlong *)((longlong)pFVar39->RootBranchName + 0x18);
      if (*(int *)(lVar36 + 0x200) == 0) {
LAB_14ddea9ae:
        bVar19 = false;
      }
      else {
        local_570.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_570.AssetPath.PackageName.Number = 0;
        local_570.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_570.AssetPath.AssetName.Number = 0;
        local_570.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_570.SubPathString.Data.ArrayNum = 0;
        local_570.SubPathString.Data.ArrayMax = 0;
        FSoftObjectPath::SetPath(&local_570,(UObject *)local_630->_padding_);
        bVar18 = true;
        pFVar33 = *(FSoftObjectPath **)(lVar36 + 0x1f8);
        pFVar41 = pFVar33 + *(int *)(lVar36 + 0x200);
        for (; pFVar33 != pFVar41; pFVar33 = pFVar33 + 1) {
          bVar19 = FSoftObjectPath::operator==(pFVar33,&local_570);
          if (bVar19) goto LAB_14ddea9ae;
        }
        bVar19 = true;
      }
      if ((bVar18) &&
         (bVar18 = false,
         local_570.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_570.SubPathString.Data.AllocatorInstance.Data);
      }
      if (!bVar19) {
        if (EVar38 == Color) {
          pTVar2 = &pFVar37->PixelPreProcessors;
          (**(code **)(*(longlong *)pFVar39->RootBranchName + 0x10))
                    (pFVar39->RootBranchName,&local_590);
          uStack_1f0 = local_590;
          local_590 = (undefined8 *)0x0;
          local_1e0 = 0;
          local_1f8 = &
                      ___7__TFunction_OwnedObject_U__TAsyncCompositeImage_UFColor_____00_0A__Function_Private_Core_UE__6B_
          ;
          local_3b0 = 0;
          local_1e8._s_0 = TVar43._s_0;
          local_208[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<TAsyncCompositeImage<FColor>,void,FImagePixelData_*>::
                         Call;
          pFVar32 = (pTVar2->AllocatorInstance).Data;
          local_3a8 = TVar43;
          if (((pFVar32 <= (FScriptContainerElement *)local_208) &&
              ((FScriptContainerElement *)local_208 <
               pFVar32 + (longlong)(pFVar37->PixelPreProcessors).ArrayMax * 0x30)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          piVar3 = &(pFVar37->PixelPreProcessors).ArrayMax;
          iVar44 = (pFVar37->PixelPreProcessors).ArrayNum;
          if (iVar44 == *piVar3) {
            iVar44 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1030,&pTVar2->AllocatorInstance,piVar3);
          }
          (pFVar37->PixelPreProcessors).ArrayNum = iVar44 + 1;
          pFVar32 = (pTVar2->AllocatorInstance).Data + (longlong)iVar44 * 0x30;
          *(code **)pFVar32 = local_208[0];
          *(longlong *)(pFVar32 + 0x28) = local_1e0;
          local_1e0 = 0;
          *(undefined4 *)(pFVar32 + 0x10) = (undefined4)local_1f8;
          *(undefined4 *)(pFVar32 + 0x14) = local_1f8._4_4_;
          *(undefined4 *)(pFVar32 + 0x18) = (undefined4)uStack_1f0;
          *(undefined4 *)(pFVar32 + 0x1c) = uStack_1f0._4_4_;
          ((TIntPoint<int>_u_0 *)(pFVar32 + 0x20))->_s_0 = (TIntPoint<int>_u_0_s_0)local_1e8;
          if (*(longlong *)pFVar32 != 0) {
            local_208[0] = (code *)0x0;
          }
          puVar30 = local_590;
          if (local_208[0] != (code *)0x0) {
            (*(code *)local_1f8[2])();
            puVar30 = local_590;
          }
        }
        else if (EVar38 == Float16) {
          pTVar2 = &pFVar37->PixelPreProcessors;
          (**(code **)(*(longlong *)pFVar39->RootBranchName + 0x10))
                    (pFVar39->RootBranchName,&local_598);
          uStack_220 = local_598;
          local_598 = (undefined8 *)0x0;
          local_210 = 0;
          local_228 = &
                      ___7__TFunction_OwnedObject_U__TAsyncCompositeImage_VFFloat16Color_____00_0A__Function_Private_Core_UE__6B_
          ;
          local_3d0 = 0;
          local_218._s_0 = TVar43._s_0;
          local_238[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<TAsyncCompositeImage<FFloat16Color>,void,FImagePixelData_*>
                         ::Call;
          pFVar32 = (pTVar2->AllocatorInstance).Data;
          local_3c8 = TVar43;
          if (((pFVar32 <= (FScriptContainerElement *)local_238) &&
              ((FScriptContainerElement *)local_238 <
               pFVar32 + (longlong)(pFVar37->PixelPreProcessors).ArrayMax * 0x30)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          piVar3 = &(pFVar37->PixelPreProcessors).ArrayMax;
          iVar44 = (pFVar37->PixelPreProcessors).ArrayNum;
          if (iVar44 == *piVar3) {
            iVar44 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1030,&pTVar2->AllocatorInstance,piVar3);
          }
          (pFVar37->PixelPreProcessors).ArrayNum = iVar44 + 1;
          pFVar32 = (pTVar2->AllocatorInstance).Data + (longlong)iVar44 * 0x30;
          *(code **)pFVar32 = local_238[0];
          *(longlong *)(pFVar32 + 0x28) = local_210;
          local_210 = 0;
          *(undefined4 *)(pFVar32 + 0x10) = (undefined4)local_228;
          *(undefined4 *)(pFVar32 + 0x14) = local_228._4_4_;
          *(undefined4 *)(pFVar32 + 0x18) = (undefined4)uStack_220;
          *(undefined4 *)(pFVar32 + 0x1c) = uStack_220._4_4_;
          ((TIntPoint<int>_u_0 *)(pFVar32 + 0x20))->_s_0 = (TIntPoint<int>_u_0_s_0)local_218;
          if (*(longlong *)pFVar32 != 0) {
            local_238[0] = (code *)0x0;
          }
          puVar30 = local_598;
          if (local_238[0] != (code *)0x0) {
            (*(code *)local_228[2])();
            puVar30 = local_598;
          }
        }
        else {
          if (EVar38 != Float32) goto LAB_14ddeaecf;
          pTVar2 = &pFVar37->PixelPreProcessors;
          (**(code **)(*(longlong *)pFVar39->RootBranchName + 0x10))
                    (pFVar39->RootBranchName,&local_5a0);
          uStack_250 = local_5a0;
          local_5a0 = (undefined8 *)0x0;
          local_240 = 0;
          local_258 = &
                      ___7__TFunction_OwnedObject_U__TAsyncCompositeImage_UFLinearColor_____00_0A__Function_Private_Core_UE__6B_
          ;
          local_330 = 0;
          local_248._s_0 = TVar43._s_0;
          local_268[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<TAsyncCompositeImage<FLinearColor>,void,FImagePixelData_*>
                         ::Call;
          pFVar32 = (pTVar2->AllocatorInstance).Data;
          local_328 = TVar43;
          if (((pFVar32 <= (FScriptContainerElement *)local_268) &&
              ((FScriptContainerElement *)local_268 <
               pFVar32 + (longlong)(pFVar37->PixelPreProcessors).ArrayMax * 0x30)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          piVar3 = &(pFVar37->PixelPreProcessors).ArrayMax;
          iVar44 = (pFVar37->PixelPreProcessors).ArrayNum;
          if (iVar44 == *piVar3) {
            iVar44 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1030,&pTVar2->AllocatorInstance,piVar3);
          }
          (pFVar37->PixelPreProcessors).ArrayNum = iVar44 + 1;
          pFVar32 = (pTVar2->AllocatorInstance).Data + (longlong)iVar44 * 0x30;
          *(code **)pFVar32 = local_268[0];
          *(longlong *)(pFVar32 + 0x28) = local_240;
          local_240 = 0;
          *(undefined4 *)(pFVar32 + 0x10) = (undefined4)local_258;
          *(undefined4 *)(pFVar32 + 0x14) = local_258._4_4_;
          *(undefined4 *)(pFVar32 + 0x18) = (undefined4)uStack_250;
          *(undefined4 *)(pFVar32 + 0x1c) = uStack_250._4_4_;
          ((TIntPoint<int>_u_0 *)(pFVar32 + 0x20))->_s_0 = (TIntPoint<int>_u_0_s_0)local_248;
          if (*(longlong *)pFVar32 != 0) {
            local_268[0] = (code *)0x0;
          }
          puVar30 = local_5a0;
          if (local_268[0] != (code *)0x0) {
            (*(code *)local_258[2])();
            puVar30 = local_5a0;
          }
        }
        if (puVar30 != (undefined8 *)0x0) {
          (**(code **)*puVar30)(puVar30,1);
        }
      }
    }
  }
LAB_14ddeaecf:
  pFVar39 = (FMovieGraphRenderDataIdentifier *)&pFVar39[1].LayerName;
  uVar29 = (ulonglong)local_638 & 0xffffffff;
  pTVar42 = local_5d0;
  goto LAB_14ddea8c0;
LAB_14ddeaee0:
  local_508.Shot = (UMoviePipelineExecutorShot *)0x0;
  local_508.FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar40 = 0;
  local_508.FilePath.Data.ArrayNum = 0;
  local_508.FilePath.Data.ArrayMax = 0;
  local_508.FrameTemplatedFilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_508.FrameTemplatedFilePath.Data.ArrayNum = 0;
  local_508.FrameTemplatedFilePath.Data.ArrayMax = 0;
  local_508.DataIdentifier.RootBranchName.ComparisonIndex.Value = 0;
  local_508.DataIdentifier.RootBranchName.Number = 0;
  local_508.DataIdentifier.LayerName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_508.DataIdentifier.LayerName.Data.ArrayNum = 0;
  local_508.DataIdentifier.LayerName.Data.ArrayMax = 0;
  local_508.DataIdentifier.RendererName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  local_508.DataIdentifier.RendererName.Data.ArrayNum = 0;
  local_508.DataIdentifier.RendererName.Data.ArrayMax = 0;
  local_508.DataIdentifier.SubResourceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_508.DataIdentifier.SubResourceName.Data.ArrayNum = 0;
  local_508.DataIdentifier.SubResourceName.Data.ArrayMax = 0;
  local_508.DataIdentifier.CameraName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_508.DataIdentifier.CameraName.Data.ArrayNum = 0;
  local_508.DataIdentifier.CameraName.Data.ArrayMax = 0;
  local_508.OriginNodeClass = (UClass *)0x0;
  local_508.RenderLayerIndex = 0;
  uVar21 = (local_5c8->TraversalContext).ShotIndex;
  uVar48 = uVar40;
  if ((int)uVar21 < (local_5e8->ActiveShotList).ArrayNum) {
    uVar48 = ~uVar21 >> 0x1f;
  }
  if ((uVar48 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_508.Shot =
       *(UMoviePipelineExecutorShot **)
        ((pUVar49->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar21 * 8);
  if (local_5b0.Data.ArrayNum != 0) {
    uVar40 = local_5b0.Data.ArrayNum - 1;
  }
  ::FString::AssignRange
            (&local_508.FilePath,(wchar_t *)local_5b0.Data.AllocatorInstance.Data,uVar40);
  FVar34.Data = local_588.Data.AllocatorInstance.Data;
  iVar44 = local_588.Data.ArrayNum + -1;
  if (local_588.Data.ArrayNum == 0) {
    iVar44 = 0;
  }
  ::FString::AssignRange
            (&local_508.FrameTemplatedFilePath,(wchar_t *)local_588.Data.AllocatorInstance.Data,
             iVar44);
  local_508.DataIdentifier.RootBranchName.ComparisonIndex.Value = *(uint *)&pTVar42->field_0x0;
  local_508.DataIdentifier.RootBranchName.Number = *(uint *)&pTVar42->field_0x4;
  ::FString::operator=(&local_508.DataIdentifier.LayerName,(FString *)&pTVar42->field_0x8);
  ::FString::operator=(&local_508.DataIdentifier.RendererName,(FString *)&pTVar42->field_0x18);
  ::FString::operator=(&local_508.DataIdentifier.SubResourceName,(FString *)&pTVar42->field_0x28);
  ::FString::operator=(&local_508.DataIdentifier.CameraName,(FString *)&pTVar42->field_0x38);
  local_508.OriginNodeClass = (UClass *)local_630->_padding_;
  local_508.RenderLayerIndex = pFVar45->RenderLayerIndex;
  local_640 = (FImageWriteTask *)0x0;
  local_578 = pFVar37;
  (**(code **)((longlong)*local_630->ImageWriteQueue + 8))
            (local_630->ImageWriteQueue,local_340,&local_578,1);
  if (local_578 != (FImageWriteTask *)0x0) {
    (*(code *)**(undefined8 **)local_578)(local_578,1);
  }
  UMovieGraphPipeline::AddOutputFuture(pUVar49,(TFuture<bool> *)local_340,&local_508);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_340._8_8_);
  if (local_508.DataIdentifier.CameraName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.DataIdentifier.CameraName.Data.AllocatorInstance.Data);
  }
  if (local_508.DataIdentifier.SubResourceName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.DataIdentifier.SubResourceName.Data.AllocatorInstance.Data);
  }
  if (local_508.DataIdentifier.RendererName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.DataIdentifier.RendererName.Data.AllocatorInstance.Data);
  }
  if (local_508.DataIdentifier.LayerName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.DataIdentifier.LayerName.Data.AllocatorInstance.Data);
  }
  if (local_508.FrameTemplatedFilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_508.FrameTemplatedFilePath.Data.AllocatorInstance.Data);
  }
  if (local_508.FilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.FilePath.Data.AllocatorInstance.Data);
  }
  if (local_5b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b0.Data.AllocatorInstance.Data);
  }
  if (FVar34.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar34.Data);
  }
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_a8);
  local_b0 = 0;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f8);
  pUVar49 = local_5e8;
LAB_14ddeb1ac:
  TStack_3f8.UnvisitedBitMask = TStack_3f8.UnvisitedBitMask & ~TStack_3f8._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3f8);
  goto LAB_14dde9db0;
}

// StaticRegisterNativesUMovieGraphImageSequenceOutputNode @ 14ddff1b0

void __cdecl
UMovieGraphImageSequenceOutputNode::StaticRegisterNativesUMovieGraphImageSequenceOutputNode(void)

{
  return;
}

// operator() @ 15058fae0

bool __thiscall
`UMovieGraphImageSequenceOutputNode::OnReceiveImageDataImpl'::__l54::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6260183900736192209>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6260183900736192209>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

