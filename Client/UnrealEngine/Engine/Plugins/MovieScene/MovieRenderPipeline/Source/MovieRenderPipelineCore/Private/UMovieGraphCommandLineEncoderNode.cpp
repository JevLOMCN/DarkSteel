// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 22

// StaticClass @ 14dcf5dd0

UClass * __cdecl UMovieGraphCommandLineEncoderNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphCommandLineEncoderNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphCommandLineEncoderNode",
               &Z_Registration_Info_UClass_UMovieGraphCommandLineEncoderNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphCommandLineEncoderNode,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphCommandLineEncoderNode>,
               InternalVTableHelperCtorCaller<UMovieGraphCommandLineEncoderNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphCommandLineEncoderNode.InnerSingleton;
}

// GetSettingOnBranch<UMovieGraphGlobalOutputSettingNode> @ 14dcff670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMovieGraphGlobalOutputSettingNode * __thiscall
UMovieGraphCommandLineEncoderNode::GetSettingOnBranch<UMovieGraphGlobalOutputSettingNode>
          (UMovieGraphCommandLineEncoderNode *this,bool param_1,bool param_2)

{
  UMovieGraphPipeline *this_00;
  UMovieGraphTimeStepBase *pUVar1;
  longlong lVar2;
  UMovieGraphGlobalOutputSettingNode *pUVar3;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 this_01;
  undefined1 local_88 [128];
  
  if (PrimaryJobEvaluatedGraph.field0_0x0 == (UMovieGraphEvaluatedConfig *)0x0) {
    this_00 = (UMovieGraphPipeline *)FWeakObjectPtr::Get(&CachedPipeline.WeakPtr);
    pUVar1 = UMovieGraphPipeline::GetTimeStepInstance(this_00);
    lVar2 = (**(code **)(*(longlong *)pUVar1 + 0x2c8))(pUVar1,local_88);
    this_01 = (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0)
              ((TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 *)(lVar2 + 0x40))->DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14dcff6f9;
    if (this_01.DebugPtr != (UMovieGraphEvaluatedConfig *)0x0) goto LAB_14dcff6db;
  }
  else {
    this_01 = PrimaryJobEvaluatedGraph.field0_0x0;
    if (!UE::GC::GIsIncrementalReachabilityPending) goto LAB_14dcff6f9;
LAB_14dcff6db:
    UE::GC::MarkAsReachable((UObject *)this_01.DebugPtr);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_01.DebugPtr != (UMovieGraphEvaluatedConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01.DebugPtr);
  }
LAB_14dcff6f9:
  pUVar3 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                     (this_01.DebugPtr,UMovieGraphNode::GlobalsPinName,param_1,param_2);
  return pUVar3;
}

// UMovieGraphCommandLineEncoderNode @ 14dd0a020

UMovieGraphCommandLineEncoderNode * __thiscall
UMovieGraphCommandLineEncoderNode::UMovieGraphCommandLineEncoderNode
          (UMovieGraphCommandLineEncoderNode *this,FVTableHelper *param_1)

{
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieGraphSettingNode__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphPostRenderNode__;
  (this->FileNameFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileNameFormat).Data.ArrayNum = 0;
  (this->FileNameFormat).Data.ArrayMax = 0;
  (this->VideoCodec).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VideoCodec).Data.ArrayNum = 0;
  (this->VideoCodec).Data.ArrayMax = 0;
  (this->AudioCodec).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioCodec).Data.ArrayNum = 0;
  (this->AudioCodec).Data.ArrayMax = 0;
  (this->OutputFileExtension).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputFileExtension).Data.ArrayNum = 0;
  (this->OutputFileExtension).Data.ArrayMax = 0;
  (this->CommandLineFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandLineFormat).Data.ArrayNum = 0;
  (this->CommandLineFormat).Data.ArrayMax = 0;
  (this->VideoInputStringFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VideoInputStringFormat).Data.ArrayNum = 0;
  (this->VideoInputStringFormat).Data.ArrayMax = 0;
  (this->AudioInputStringFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioInputStringFormat).Data.ArrayNum = 0;
  (this->AudioInputStringFormat).Data.ArrayMax = 0;
  (this->EncodeSettings).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EncodeSettings).Data.ArrayNum = 0;
  (this->EncodeSettings).Data.ArrayMax = 0;
  return this;
}

// UMovieGraphCommandLineEncoderNode @ 14dd0a0d0

UMovieGraphCommandLineEncoderNode * __thiscall
UMovieGraphCommandLineEncoderNode::UMovieGraphCommandLineEncoderNode
          (UMovieGraphCommandLineEncoderNode *this)

{
  UObject *pUVar1;
  UClass *this_00;
  
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  this->bDeleteSourceFiles = false;
  this->bSkipEncodeOnRenderCanceled = true;
  this->_padding_ = (longlong)&_vftable__for__UMovieGraphSettingNode__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphPostRenderNode__;
  (this->FileNameFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileNameFormat).Data.ArrayNum = 0;
  (this->FileNameFormat).Data.ArrayMax = 0;
  (this->VideoCodec).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VideoCodec).Data.ArrayNum = 0;
  (this->VideoCodec).Data.ArrayMax = 0;
  (this->AudioCodec).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioCodec).Data.ArrayNum = 0;
  (this->AudioCodec).Data.ArrayMax = 0;
  (this->OutputFileExtension).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputFileExtension).Data.ArrayNum = 0;
  (this->OutputFileExtension).Data.ArrayMax = 0;
  (this->CommandLineFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandLineFormat).Data.ArrayNum = 0;
  (this->CommandLineFormat).Data.ArrayMax = 0;
  (this->VideoInputStringFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VideoInputStringFormat).Data.ArrayNum = 0;
  (this->VideoInputStringFormat).Data.ArrayMax = 0;
  (this->AudioInputStringFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioInputStringFormat).Data.ArrayNum = 0;
  (this->AudioInputStringFormat).Data.ArrayMax = 0;
  (this->EncodeSettings).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EncodeSettings).Data.ArrayNum = 0;
  (this->EncodeSettings).Data.ArrayMax = 0;
  this->bRetainInputTextFiles = false;
  ::FString::operator=(&this->FileNameFormat,L"{sequence_name}");
  ::FString::operator=
            (&this->CommandLineFormat,
             L"-hide_banner -y -loglevel error {VideoInputs} {AudioInputs} -acodec {AudioCodec} -vcodec {VideoCodec} {Quality} \"{OutputPath}\""
            );
  ::FString::operator=
            (&this->VideoInputStringFormat,L"-f concat -safe 0 -i \"{InputFile}\" -r {FrameRate}");
  ::FString::operator=(&this->AudioInputStringFormat,L"-f concat -safe 0 -i \"{InputFile}\"");
  ::FString::operator=(&this->EncodeSettings,L"-crf 20");
  this_00 = UMoviePipelineCommandLineEncoderSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar1 != (UObject *)0x0) {
    ::FString::operator=(&this->AudioCodec,(FString *)&pUVar1[2].field_0x18);
    ::FString::operator=(&this->VideoCodec,(FString *)&pUVar1[2].field_0x8);
    ::FString::operator=(&this->OutputFileExtension,(FString *)(pUVar1 + 3));
  }
  return this;
}

// ~UMovieGraphCommandLineEncoderNode @ 14dd0d7d0

void __thiscall
UMovieGraphCommandLineEncoderNode::~UMovieGraphCommandLineEncoderNode
          (UMovieGraphCommandLineEncoderNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieGraphSettingNode__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphPostRenderNode__;
  pFVar1 = (this->EncodeSettings).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AudioInputStringFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VideoInputStringFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CommandLineFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputFileExtension).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AudioCodec).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VideoCodec).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FileNameFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieGraphPostRenderNode__6B_;
  UMovieGraphSettingNode::~UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  return;
}

// AreSettingsValid @ 14dd15400

bool __thiscall
UMovieGraphCommandLineEncoderNode::AreSettingsValid
          (UMovieGraphCommandLineEncoderNode *this,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  UObject *pUVar2;
  void *_Src;
  FText *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  UClass *this_00;
  FText *pFVar9;
  size_t sVar10;
  longlong lVar11;
  wchar_t *_Str;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  bVar7 = false;
  DestructItems<FText,int>((FText *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  this_00 = UMoviePipelineCommandLineEncoderSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = *(int *)&pUVar2[1].field_0x18;
  lVar11 = (longlong)local_70;
  _Src = *(void **)&pUVar2[1].field_0x10;
  if (local_70 == 0) {
    local_6c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_70,0,&local_78,local_70,&local_6c);
    memcpy(local_78.Data,_Src,lVar11 * 2);
  }
  if (local_70 < 2) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"MovieGraph",L"CommandLineEncode_MissingExecutable",
                        L"No encoder executable has been specified in the Project Settings. Please set an encoder executable in Project Settings > Movie Pipeline CLI Encoder."
                       );
    pFVar3 = (FText *)(param_1->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar9) && (pFVar9 < pFVar3 + *piVar1)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    FText::FText((FText *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10),pFVar9);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if ((this->VideoCodec).Data.ArrayNum < 2) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"MovieGraph",L"CommandLineEncode_MissingVideoCodec",
                        L"No video codec has been specified on the Command Line Encoder node.");
    pFVar3 = (FText *)(param_1->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar9) && (pFVar9 < pFVar3 + *piVar1)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    FText::FText((FText *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10),pFVar9);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  if ((this->AudioCodec).Data.ArrayNum < 2) {
    ::FString::FString(&local_68,"{AudioCodec}");
    if (local_68.Data.ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)local_68.Data.AllocatorInstance.Data;
      if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        bVar7 = true;
        goto LAB_14dd15709;
      }
    }
    sVar10 = wcslen(_Str);
    iVar8 = ::FString::Find(&this->CommandLineFormat,_Str,(int)sVar10,IgnoreCase,FromStart,-1);
    bVar7 = true;
    if (iVar8 != -1) {
      bVar5 = true;
      goto LAB_14dd1570c;
    }
  }
LAB_14dd15709:
  bVar5 = false;
LAB_14dd1570c:
  if ((bVar7) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"MovieGraph",L"CommandLineEncode_MissingAudioCodec",
                        L"The {AudioCodec} token is in the Command Line Format property on the Command Line Encoder node, but no audio codec has been specified."
                       );
    pFVar3 = (FText *)(param_1->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar9) && (pFVar9 < pFVar3 + *piVar1)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    FText::FText((FText *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10),pFVar9);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  if ((this->OutputFileExtension).Data.ArrayNum < 2) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"MovieGraph",L"CommandLineEncode_MissingFileExtension",
                        L"No file extension has been specified on the Command Line Encoder node.");
    pFVar3 = (FText *)(param_1->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar9) && (pFVar9 < pFVar3 + *piVar1)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    FText::FText((FText *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10),pFVar9);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  return param_1->ArrayNum == 0;
}

// BeginExport @ 14dd15930

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
UMovieGraphCommandLineEncoderNode::BeginExport
          (UMovieGraphCommandLineEncoderNode *this,UMovieGraphPipeline *param_1,
          TObjectPtr<UMovieGraphEvaluatedConfig> *param_2)

{
  bool bVar1;
  UMovieGraphPipeline *this_00;
  TArray<FMovieGraphRenderOutputData,TSizedDefaultAllocator<32>_> *pTVar2;
  UMovieGraphPipeline *local_res8;
  
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieGraphPipeline *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&CachedPipeline.WeakPtr,(FObjectPtr)&local_res8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((param_2->field0_0x0).DebugPtr != (UMovieGraphEvaluatedConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)(param_2->field0_0x0).DebugPtr);
  }
  PrimaryJobEvaluatedGraph.field0_0x0 =
       (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0)
       *(TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 *)&(param_2->field0_0x0).ObjectPtr.field0_0x0;
  bVar1 = NeedsPerShotFlushing((UMovieGraphCommandLineEncoderNode *)&this[-1]._padding_);
  if (!bVar1) {
    this_00 = (UMovieGraphPipeline *)FWeakObjectPtr::Get(&CachedPipeline.WeakPtr);
    pTVar2 = UMovieGraphPipeline::GetGeneratedOutputData(this_00);
    StartEncodingProcess((UMovieGraphCommandLineEncoderNode *)&this[-1]._padding_,pTVar2,false);
    PrimaryJobEvaluatedGraph.field0_0x0 =
         (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0)(FObjectPtr)0x0;
  }
  return;
}

// BeginShotExport @ 14dd15c90

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
UMovieGraphCommandLineEncoderNode::BeginShotExport
          (UMovieGraphCommandLineEncoderNode *this,UMovieGraphPipeline *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UMovieGraphPipeline *this_00;
  TArray<FMovieGraphRenderOutputData,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FMovieGraphRenderOutputData *pFVar7;
  UMovieGraphPipeline *local_res8;
  TArray<FMovieGraphRenderOutputData,TSizedDefaultAllocator<32>_> local_18;
  
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieGraphPipeline *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&CachedPipeline.WeakPtr,(FObjectPtr)&local_res8);
  PrimaryJobEvaluatedGraph.field0_0x0 = (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0)(FObjectPtr)0x0;
  bVar3 = NeedsPerShotFlushing((UMovieGraphCommandLineEncoderNode *)&this[-1]._padding_);
  if (bVar3) {
    this_00 = (UMovieGraphPipeline *)FWeakObjectPtr::Get(&CachedPipeline.WeakPtr);
    pTVar5 = UMovieGraphPipeline::GetGeneratedOutputData(this_00);
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    iVar1 = pTVar5->ArrayNum;
    if (iVar1 != 0) {
      uVar4 = 0;
      if ((int)(iVar1 - 1U) < iVar1) {
        uVar4 = ~(iVar1 - 1U) >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = (FMovieGraphRenderOutputData *)
               ((pTVar5->AllocatorInstance).Data + (longlong)pTVar5->ArrayNum * 0x58 + -0x58);
      if (((local_18.AllocatorInstance.Data <= pFVar7) &&
          (pFVar7 < (FMovieGraphRenderOutputData *)
                    (local_18.AllocatorInstance.Data + (longlong)local_18.ArrayMax * 0x58))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_18.ArrayNum == local_18.ArrayMax) {
        local_18.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x858,&local_18.AllocatorInstance,&local_18.ArrayMax);
      }
      pFVar6 = local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 0x58;
      *(FWeakObjectPtr *)&pFVar6->field_0x0 = (pFVar7->Shot).WeakPtr;
      *(undefined8 *)
       &((TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
          *)(pFVar6 + 8))->Elements = 0;
      *(undefined8 *)(pFVar6 + 0x10) = 0;
      *(undefined8 *)(pFVar6 + 0x28) = 0;
      *(undefined4 *)(pFVar6 + 0x30) = 0;
      *(undefined4 *)(pFVar6 + 0x34) = 0x80;
      *(undefined4 *)(pFVar6 + 0x38) = 0xffffffff;
      *(undefined4 *)(pFVar6 + 0x3c) = 0;
      *(undefined8 *)(pFVar6 + 0x48) = 0;
      *(undefined4 *)(pFVar6 + 0x50) = 0;
      local_18.ArrayNum = local_18.ArrayNum + 1;
      TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
                   *)(pFVar6 + 8),
                  (TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
                   *)&pFVar7->RenderLayerData);
    }
    StartEncodingProcess((UMovieGraphCommandLineEncoderNode *)&this[-1]._padding_,&local_18,true);
    DestructItems<FMovieGraphRenderOutputData,int>
              ((FMovieGraphRenderOutputData *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if ((FMovieGraphRenderOutputData *)local_18.AllocatorInstance.Data !=
        (FMovieGraphRenderOutputData *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// BuildEncoderCommand @ 14dd162b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UMovieGraphCommandLineEncoderNode::BuildEncoderCommand
          (UMovieGraphCommandLineEncoderNode *this,FString *__return_storage_ptr__,
          FEncoderParams *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  code *pcVar2;
  FStringFormatArg *pFVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStackY_388 [32];
  undefined1 local_348;
  undefined1 local_347 [7];
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  undefined1 local_2f0 [8];
  undefined1 local_2e8 [8];
  TPairInitializer<FString_&&,FStringFormatArg_&&> local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString *local_280;
  FStringFormatArg *local_278;
  FString local_270;
  FString *local_260;
  longlong local_258;
  FString local_250;
  FString local_240;
  FString *local_230;
  FStringFormatArg *local_228;
  FString local_220;
  FString local_210;
  FString *local_200;
  FStringFormatArg *local_1f8;
  FString local_1f0;
  FString *local_1e0;
  FStringFormatArg *local_1d8;
  FString local_1d0;
  FStringFormatArg local_1c0;
  FStringFormatArg local_1a0;
  FStringFormatArg local_180;
  FStringFormatArg local_160;
  undefined1 local_138 [32];
  void *local_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  undefined1 local_e8 [64];
  ForElementType<FSetElementId> local_a8;
  int local_a0 [2];
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  local_98;
  FWeakObjectPtr local_48;
  
  local_48 = (FWeakObjectPtr)(__security_cookie.value ^ (ulonglong)auStackY_388);
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_e8._32_8_ = 0;
  local_e8._40_4_ = 0;
  local_e8._44_4_ = 0x80;
  local_e8._48_4_ = 0xffffffff;
  local_e8._52_4_ = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0[0] = 0;
  local_2e0.Value = (FStringFormatArg *)__return_storage_ptr__;
  if ((FEncoderParams *)local_e8 != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)(local_e8 + 0x38),local_a0,
               (ForElementType<FSetElementId> *)&(param_1->NamedArguments).field_0x38,
               *(int *)&(param_1->NamedArguments).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_e8,
                (TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)param_1);
  }
  ::FString::Replace(&this->VideoInputStringFormat,&local_290,L"\r\n",L" ",IgnoreCase);
  ::FString::Replace(&this->AudioInputStringFormat,&local_2a0,L"\r\n",L" ",IgnoreCase);
  ::FString::Replace(&this->CommandLineFormat,&local_2b0,L"\r\n",L" ",IgnoreCase);
  iVar1 = param_2->ArrayNum;
  pFVar11 = (param_2->AllocatorInstance).Data;
  local_310.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar12 = pFVar11 + (longlong)iVar1 * 0x10;
  local_310.Data.ArrayNum = 0;
  local_310.Data.ArrayMax = 0;
  local_320.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_320.Data.ArrayNum = 0;
  local_320.Data.ArrayMax = 0;
  while( true ) {
    lVar10 = 0;
    if (param_2->ArrayNum != iVar1) {
      local_348 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_348)
      ;
    }
    if (pFVar11 == pFVar12) {
      iVar1 = param_3->ArrayNum;
      pFVar11 = (param_3->AllocatorInstance).Data;
      pFVar12 = pFVar11 + (longlong)iVar1 * 0x10;
      while( true ) {
        if (param_3->ArrayNum != iVar1) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_347);
        }
        FVar9.Data = local_310.Data.AllocatorInstance.Data;
        if (pFVar11 == pFVar12) break;
        local_98.Elements._0_8_ = 0;
        local_98.Elements._8_8_ = 0;
        local_98.Elements._32_8_ = 0;
        local_98.Elements._40_4_ = 0;
        local_98.Elements._44_4_ = 0x80;
        local_98.Elements._48_4_ = 0xffffffff;
        local_98.Elements._52_4_ = 0;
        local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_98.HashSize = 0;
        if (*(int *)(pFVar11 + 8) == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = *(wchar_t **)pFVar11;
        }
        FStringFormatArg::FStringFormatArg(&local_1a0,pwVar8);
        ::FString::FString(&local_220,L"InputFile");
        local_230 = &local_220;
        local_228 = &local_1a0;
        TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
                  (&local_98,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_2e8,
                   (bool *)&local_230);
        if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_220.Data.AllocatorInstance.Data);
        }
        if (local_1a0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.StringValue.Data.AllocatorInstance.Data);
        }
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_2a0.Data.ArrayNum != 0) {
          FVar9.Data = local_2a0.Data.AllocatorInstance.Data;
        }
        ::FString::FormatImpl
                  (&local_210,(wchar_t *)FVar9.Data,
                   (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                    *)&local_98);
        ::FString::ConcatCF(&local_2c0,L" ",&local_210);
        iVar6 = local_2c0.Data.ArrayNum + -1;
        if (local_2c0.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars(&local_320,(wchar_t *)local_2c0.Data.AllocatorInstance.Data,iVar6);
        if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
        }
        if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.Data.AllocatorInstance.Data);
        }
        local_98.HashSize = 0;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_98.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_98.Elements);
        pFVar11 = pFVar11 + 0x10;
      }
      lVar10 = (longlong)local_310.Data.ArrayNum;
      local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_340.Data.ArrayNum = local_310.Data.ArrayNum;
      if (local_310.Data.ArrayNum == 0) {
        local_340.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_310.Data.ArrayNum,0,(ForAnyElementType *)&local_340,
                   local_310.Data.ArrayNum,&local_340.Data.ArrayMax);
        memcpy(local_340.Data.AllocatorInstance.Data,FVar9.Data,lVar10 * 2);
      }
      FStringFormatArg::FStringFormatArg(&local_180,&local_340);
      ::FString::FString(&local_1f0,L"VideoInputs");
      local_200 = &local_1f0;
      local_1f8 = &local_180;
      TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
                ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                  *)local_e8,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)(local_2e8 + 4),
                 (bool *)&local_200);
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      if (local_180.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.StringValue.Data.AllocatorInstance.Data);
      }
      FVar9.Data = local_320.Data.AllocatorInstance.Data;
      lVar10 = (longlong)local_320.Data.ArrayNum;
      local_330.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_330.Data.ArrayNum = local_320.Data.ArrayNum;
      if (local_320.Data.ArrayNum == 0) {
        local_330.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_320.Data.ArrayNum,0,(ForAnyElementType *)&local_330,
                   local_320.Data.ArrayNum,&local_330.Data.ArrayMax);
        memcpy(local_330.Data.AllocatorInstance.Data,FVar9.Data,lVar10 * 2);
      }
      FStringFormatArg::FStringFormatArg(&local_160,&local_330);
      ::FString::FString(&local_1d0,L"AudioInputs");
      local_1e0 = &local_1d0;
      local_1d8 = &local_160;
      TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
                ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                  *)local_e8,&local_2e0,(bool *)&local_1e0);
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      if (local_160.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.StringValue.Data.AllocatorInstance.Data);
      }
      pFVar3 = local_2e0.Value;
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_2b0.Data.ArrayNum != 0) {
        FVar9.Data = local_2b0.Data.AllocatorInstance.Data;
      }
      ::FString::FormatImpl
                ((FString *)local_2e0.Value,(wchar_t *)FVar9.Data,
                 (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                  *)local_e8);
      if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_320.Data.AllocatorInstance.Data);
      }
      if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_310.Data.AllocatorInstance.Data);
      }
      if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
      }
      if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
      }
      if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data.AllocatorInstance.Data);
      }
      local_a0[0] = 0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
      return (FString *)pFVar3;
    }
    local_138._0_8_ = (FScriptContainerElement *)0x0;
    local_138._8_8_ = 0;
    local_118 = (void *)0x0;
    local_110 = 0;
    local_10c = 0x80;
    local_108 = 0xffffffff;
    local_104 = 0;
    local_f8 = (ForElementType<FSetElementId>)0x0;
    local_f0 = 0;
    if (*(int *)(pFVar11 + 8) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)pFVar11;
    }
    FStringFormatArg::FStringFormatArg(&local_1c0,pwVar8);
    ::FString::FString(&local_270,L"InputFile");
    local_280 = &local_270;
    local_278 = &local_1c0;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
              ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)local_138,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_2f0,
               (bool *)&local_280);
    if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Data.AllocatorInstance.Data);
    }
    if (local_1c0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.StringValue.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_300,L"FrameRate");
    iVar6 = local_300.Data.ArrayNum + -1;
    FVar9.Data = local_300.Data.AllocatorInstance.Data;
    if (local_300.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar9.Data = (FScriptContainerElement *)L"";
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar9.Data);
    iVar6 = TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                        *)param_1,uVar5,&local_300);
    if (((iVar6 == -1) ||
        (lVar10 = (longlong)iVar6 * 0x38 + *(longlong *)&param_1->NamedArguments, lVar10 == 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L""), bVar4)) break;
    ::FString::FString(&local_250,L"FrameRate");
    local_260 = &local_250;
    local_258 = lVar10 + 0x10;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_const_&>_>
              ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)local_138,(TPairInitializer<FString_&&,FStringFormatArg_const_&> *)(local_2f0 + 4)
               ,(bool *)&local_260);
    if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Data.AllocatorInstance.Data);
    }
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_290.Data.ArrayNum != 0) {
      FVar9.Data = local_290.Data.AllocatorInstance.Data;
    }
    ::FString::FormatImpl
              (&local_240,(wchar_t *)FVar9.Data,
               (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                *)local_138);
    ::FString::ConcatCF(&local_2d0,L" ",&local_240);
    iVar6 = local_2d0.Data.ArrayNum + -1;
    if (local_2d0.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars(&local_310,(wchar_t *)local_2d0.Data.AllocatorInstance.Data,iVar6);
    if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
    }
    if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data.AllocatorInstance.Data);
    }
    local_f0 = 0;
    if (local_f8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_138,0,local_138._8_4_);
    iVar6 = SUB84(local_138._8_8_,4);
    local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
    }
    local_108 = 0xffffffff;
    local_104 = 0;
    local_110 = 0;
    if (0x80 < local_10c) {
      local_10c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
    }
    if (local_118 != (void *)0x0) {
      FMemory::Free(local_118);
    }
    if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_138._0_8_);
    }
    pFVar11 = pFVar11 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pFVar7 = (FString *)(*pcVar2)();
  return pFVar7;
}

// GenerateRenderLayerEncoderParams @ 14dd206d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>_>
* __thiscall
UMovieGraphCommandLineEncoderNode::GenerateRenderLayerEncoderParams
          (UMovieGraphCommandLineEncoderNode *this,
          TMap<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>_>
          *__return_storage_ptr__,
          TArray<FMovieGraphRenderOutputData,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  ForElementType<FSetElementId> FVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  TSet<TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>,FDefaultSetAllocator>
  *this_01;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  *pTVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  UClass *this_02;
  UMovieGraphGlobalOutputSettingNode *pUVar10;
  UObject *pUVar11;
  FString *pFVar12;
  TMap<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>_>
  *pTVar13;
  longlong lVar14;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_03;
  byte bVar15;
  ulonglong uVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  uint *puVar18;
  ForElementType<FSetElementId> FVar19;
  wchar_t *pwVar20;
  longlong lVar21;
  FMovieGraphRenderDataIdentifier *pFVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  FMovieGraphRenderDataIdentifier *pFVar26;
  uint uVar27;
  FName FVar28;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  *pTVar29;
  FString *pFVar30;
  longlong lVar31;
  FName FVar32;
  undefined1 auStackY_648 [32];
  undefined1 local_5f7;
  undefined1 local_5f6;
  undefined1 local_5f5;
  undefined1 local_5f4;
  undefined1 local_5f3;
  undefined1 local_5f2;
  undefined1 local_5f1;
  undefined1 local_5f0 [8];
  ForAnyElementType local_5e8;
  undefined8 local_5e0;
  FMovieGraphRenderDataIdentifier *local_5d8;
  FScriptContainerElement *local_5d0;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  *local_5c8;
  undefined8 uStack_5c0;
  FMovieGraphRenderDataIdentifier *pFStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  int local_5a0;
  undefined4 uStack_59c;
  TArray<FMovieGraphRenderDataIdentifier,TSizedDefaultAllocator<32>_> local_598;
  int local_588;
  uint local_584;
  int local_580;
  int local_57c;
  uint local_578;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  *local_570;
  TSet<TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>,FDefaultSetAllocator>
  *local_568;
  undefined1 local_560 [16];
  longlong local_550;
  FString local_548;
  FMovieGraphRenderDataIdentifier local_538;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4e8;
  FMovieGraphRenderDataIdentifier local_4c8;
  undefined1 local_478 [32];
  undefined1 local_458 [8];
  undefined1 local_450 [8];
  undefined1 local_448 [16];
  int local_438;
  undefined1 local_430 [8];
  FMovieGraphRenderDataIdentifier *local_428;
  undefined8 *local_420;
  FScriptContainerElement *local_418;
  FString local_410;
  TArray<FMovieGraphRenderOutputData,TSizedDefaultAllocator<32>_> *local_400;
  FString *local_3f8;
  UMovieGraphCommandLineEncoderNode *local_3f0;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  *local_3e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3e0;
  undefined8 uStack_3c0;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  *local_3b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3b0;
  undefined8 uStack_390;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  *local_388;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_380;
  undefined8 uStack_360;
  FString *local_358;
  FStringFormatArg *local_350;
  FString local_348;
  FString *local_338;
  FStringFormatArg *local_330;
  FString *local_328;
  FStringFormatArg *local_320;
  FString local_318;
  FString local_308;
  FString *local_2f8;
  FStringFormatArg *local_2f0;
  FString local_2e8;
  FString local_2d8;
  FString *local_2c8;
  FStringFormatArg *local_2c0;
  FString local_2b8;
  FStringFormatArg local_2a8;
  FStringFormatArg local_288;
  FStringFormatArg local_268;
  FStringFormatArg local_248;
  FStringFormatArg local_228;
  FMovieGraphRenderDataIdentifier local_208;
  FMovieGraphRenderDataIdentifier local_1c0;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148 [2];
  undefined4 local_11c;
  undefined4 local_fc;
  undefined1 local_f8 [32];
  uint *local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_648;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_568 = (TSet<TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>,FDefaultSetAllocator>
               *)__return_storage_ptr__;
  local_400 = param_1;
  local_3f0 = this;
  this_02 = UMoviePipelineCommandLineEncoderSettings::StaticClass();
  if ((this_02->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_02);
  }
  ::FString::Replace((FString *)&(this_02->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10,
                     &local_410,L"\"",L"",IgnoreCase);
  FPaths::NormalizeFilename(&local_410);
  pUVar10 = GetSettingOnBranch<UMovieGraphGlobalOutputSettingNode>(this,true,true);
  pUVar11 = FWeakObjectPtr::Get(&CachedPipeline.WeakPtr);
  (**(code **)(**(longlong **)&pUVar11[4].field_0x20 + 0x2b8))
            (*(longlong **)&pUVar11[4].field_0x20,local_430);
  UMovieGraphBlueprintLibrary::GetEffectiveFrameRate
            ((UMovieGraphGlobalOutputSettingNode *)local_560,(FFrameRate *)pUVar10);
  ::FString::Replace(&this->EncodeSettings,&local_318,L"\r\n",L" ",IgnoreCase);
  local_a8.Elements._0_8_ = 0;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._44_4_ = 0x80;
  local_a8.Elements._48_4_ = 0xffffffff;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  pFVar12 = ::FString::FString(&local_158,&local_410);
  FStringFormatArg::FStringFormatArg(&local_248,pFVar12);
  ::FString::FString(&local_308,L"Executable");
  local_328 = &local_308;
  local_320 = &local_248;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            (&local_a8,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_458,
             (bool *)&local_328);
  if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data.AllocatorInstance.Data);
  }
  if (local_248.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.StringValue.Data.AllocatorInstance.Data);
  }
  pFVar12 = ::FString::FString(local_148,&this->AudioCodec);
  FStringFormatArg::FStringFormatArg(&local_228,pFVar12);
  ::FString::FString(&local_2e8,L"AudioCodec");
  local_2f8 = &local_2e8;
  local_2f0 = &local_228;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            (&local_a8,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)(local_458 + 4),
             (bool *)&local_2f8);
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  if (local_228.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.StringValue.Data.AllocatorInstance.Data);
  }
  pFVar12 = ::FString::FString(&local_178,&this->VideoCodec);
  FStringFormatArg::FStringFormatArg(&local_2a8,pFVar12);
  ::FString::FString(&local_2d8,L"VideoCodec");
  local_338 = &local_2d8;
  local_330 = &local_2a8;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            (&local_a8,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_450,
             (bool *)&local_338);
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  if (local_2a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.StringValue.Data.AllocatorInstance.Data);
  }
  FStringFormatArg::FStringFormatArg
            (&local_288,(double)(int)local_560._0_4_ / (double)(int)local_560._4_4_);
  ::FString::FString(&local_2b8,L"FrameRate");
  local_2c8 = &local_2b8;
  local_2c0 = &local_288;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            (&local_a8,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)(local_450 + 4),
             (bool *)&local_2c8);
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  if (local_288.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.StringValue.Data.AllocatorInstance.Data);
  }
  pFVar12 = ::FString::FString(&local_168,&local_318);
  FStringFormatArg::FStringFormatArg(&local_268,pFVar12);
  ::FString::FString(&local_348,L"Quality");
  local_358 = &local_348;
  local_350 = &local_268;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            (&local_a8,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_448,
             (bool *)&local_358);
  if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data.AllocatorInstance.Data);
  }
  if (local_268.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.StringValue.Data.AllocatorInstance.Data);
  }
  local_538.RootBranchName.ComparisonIndex.Value = 0;
  local_538.RootBranchName.Number = 0;
  local_538.LayerName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_538.LayerName.Data.ArrayNum = 0;
  local_538.LayerName.Data.ArrayMax = 0;
  local_538.RendererName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_538.RendererName.Data.ArrayNum = 0;
  local_538.RendererName.Data.ArrayMax = 0;
  local_538.SubResourceName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_538.SubResourceName.Data.ArrayNum = 0;
  local_538.SubResourceName.Data.ArrayMax = 0;
  local_538.CameraName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_538.CameraName.Data.ArrayNum = 0;
  local_538.CameraName.Data.ArrayMax = 0;
  if (!param_2) {
    local_598.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_598.ArrayNum = 0;
    local_598.ArrayMax = 0;
    if ((param_1->ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TMap<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>_>
                 *)(*pcVar3)();
      return pTVar13;
    }
    TMapBase<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>_>
    ::GetKeys<TSizedDefaultAllocator<32>_>
              ((TMapBase<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>_>
                *)((param_1->AllocatorInstance).Data + 8),&local_598);
    if ((local_598.ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TMap<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>_>
                 *)(*pcVar3)();
      return pTVar13;
    }
    FVar4.Data = local_598.AllocatorInstance.Data;
    local_538.RootBranchName = *(FName *)local_598.AllocatorInstance.Data;
    ::FString::operator=(&local_538.LayerName,(FString *)(local_598.AllocatorInstance.Data + 8));
    ::FString::operator=(&local_538.RendererName,(FString *)(FVar4.Data + 0x18));
    ::FString::operator=(&local_538.SubResourceName,(FString *)(FVar4.Data + 0x28));
    ::FString::operator=(&local_538.CameraName,(FString *)(FVar4.Data + 0x38));
    DestructItems<FMovieGraphRenderDataIdentifier,int>
              ((FMovieGraphRenderDataIdentifier *)local_598.AllocatorInstance.Data,
               local_598.ArrayNum);
    if ((FMovieGraphRenderDataIdentifier *)local_598.AllocatorInstance.Data !=
        (FMovieGraphRenderDataIdentifier *)0x0) {
      FMemory::Free(local_598.AllocatorInstance.Data);
    }
  }
  local_578 = param_1->ArrayNum;
  uVar16 = (ulonglong)(int)local_578;
  pFVar23 = (param_1->AllocatorInstance).Data;
  local_418 = pFVar23 + uVar16 * 0x58;
LAB_14dd20c4a:
  pFVar24 = local_418;
  local_5d0 = pFVar23;
  if (param_1->ArrayNum != (int)uVar16) {
    local_5f7 = 0;
    `TCheckedPointerIterator<FMovieGraphRenderOutputData,int,0>::operator!='::__l2::<lambda_1>::
    operator()(&local_5f7);
  }
  if (pFVar23 == pFVar24) {
    if (local_538.CameraName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.CameraName.Data.AllocatorInstance.Data);
    }
    if (local_538.SubResourceName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.SubResourceName.Data.AllocatorInstance.Data);
    }
    if (local_538.RendererName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.RendererName.Data.AllocatorInstance.Data);
    }
    if (local_538.LayerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.LayerName.Data.AllocatorInstance.Data);
    }
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
    if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_410.Data.AllocatorInstance.Data);
    }
    return (TMap<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>_>
            *)local_568;
  }
  local_f8._0_8_ = 0;
  pTVar29 = (TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
             *)(pFVar23 + 8);
  local_f8._8_8_ = 0;
  local_d8 = (uint *)0x0;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = (ForElementType<FSetElementId>)0x0;
  local_b0 = 0;
  local_478._8_8_ = (FMovieGraphRenderDataIdentifier *)(pFVar23 + 0x18);
  local_478._0_4_ = 0;
  local_478._4_4_ = 1;
  local_478._16_4_ = 0xffffffff;
  local_478._20_4_ = 0;
  local_478._24_4_ = 0;
  local_570 = pTVar29;
  if (*(int *)(pFVar23 + 0x30) != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_478);
  }
  uVar8 = *(uint *)(pFVar23 + 0x30);
  uStack_5c0 = CONCAT44(local_478._4_4_,local_478._0_4_);
  local_5a0 = *(int *)(pFVar23 + 0x10) - *(int *)(pFVar23 + 0x3c);
  bVar15 = (byte)uVar8 & 0x1f;
  uStack_5b0._4_4_ = local_478._20_4_;
  uStack_5b0._0_4_ = local_478._16_4_;
  uStack_5a8._4_4_ = local_478._28_4_;
  uStack_5a8._0_4_ = local_478._24_4_;
  local_4e8._padding_._0_4_ = (int)uVar8 >> 5;
  local_4e8._padding_._4_4_ = 1 << bVar15;
  pFStack_5b8 = (FMovieGraphRenderDataIdentifier *)local_478._8_8_;
  local_4e8.UnvisitedBitMask = -1 << bVar15;
  local_4e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar23 + 0x18);
  local_4e8.CurrentBitIndex = uVar8;
  local_4e8.BaseBitIndex = uVar8 & 0xffffffe0;
  local_3b8 = pTVar29;
  TStack_3b0._padding_ = uStack_5c0;
  TStack_3b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_478._8_8_;
  TStack_3b0.UnvisitedBitMask = local_478._16_4_;
  TStack_3b0.CurrentBitIndex = local_478._20_4_;
  TStack_3b0.BaseBitIndex = local_478._24_4_;
  TStack_3b0._28_4_ = local_478._28_4_;
  uStack_390 = CONCAT44(uStack_59c,local_5a0);
  local_5c8 = pTVar29;
  if (((int)uVar8 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TMap<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>_>
               *)(*pcVar3)();
    return pTVar13;
  }
  if (uVar8 != *(uint *)(pFVar23 + 0x30)) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4e8);
  }
  uStack_5c0 = CONCAT44(local_4e8._padding_._4_4_,(int)local_4e8._padding_);
  uStack_5b0 = CONCAT44(local_4e8.CurrentBitIndex,local_4e8.UnvisitedBitMask);
  uStack_5a8 = CONCAT44(local_4e8._28_4_,local_4e8.BaseBitIndex);
  pFStack_5b8 = (FMovieGraphRenderDataIdentifier *)local_4e8.Array;
  local_5d8 = (FMovieGraphRenderDataIdentifier *)local_4e8.Array;
  local_584 = local_4e8.CurrentBitIndex;
  uVar8 = local_4e8.CurrentBitIndex;
  while( true ) {
    pTVar5 = local_3b8;
    if (*(int *)&(local_3b8->Elements).field_0x8 - *(int *)&(local_3b8->Elements).field_0x34 !=
        (int)uStack_390) {
      local_5f6 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5f6);
    }
    pFVar23 = local_5d0;
    if (((TStack_3b0.CurrentBitIndex == uVar8) &&
        ((FMovieGraphRenderDataIdentifier *)TStack_3b0.Array == local_5d8)) && (pTVar5 == pTVar29))
    break;
    lVar14 = *(longlong *)&pTVar5->Elements;
    lVar31 = (longlong)TStack_3b0.CurrentBitIndex * 200;
    iVar7 = *(int *)(lVar31 + 0x20 + lVar14);
    if (iVar7 == UMovieGraphAudioOutputNode::RendererName.Data.ArrayNum) {
      if (1 < iVar7) {
        iVar7 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(lVar31 + 0x18 + lVar14),
                           (wchar_t *)
                           UMovieGraphAudioOutputNode::RendererName.Data.AllocatorInstance.Data);
        bVar6 = iVar7 == 0;
        goto LAB_14dd20e5e;
      }
LAB_14dd20e69:
      iVar7 = *(int *)(lVar31 + 0x50 + lVar14);
      pFVar12 = *(FString **)(lVar31 + 0x48 + lVar14);
      pFVar30 = pFVar12 + iVar7;
      while( true ) {
        if (*(int *)(lVar31 + 0x50 + lVar14) != iVar7) {
          local_5f5 = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_5f5);
        }
        uVar8 = local_584;
        if (pFVar12 == pFVar30) break;
        FPaths::GetExtension(&local_548,pFVar12,false);
        iVar9 = local_548.Data.ArrayNum + -1;
        FVar4.Data = local_548.Data.AllocatorInstance.Data;
        if (local_548.Data.ArrayNum == 0) {
          iVar9 = 0;
          FVar4.Data = (FScriptContainerElement *)L"";
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar4.Data);
        iVar9 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                            *)local_f8,uVar8,&local_548);
        if ((iVar9 == -1) || (lVar21 = local_f8._0_8_ + (longlong)iVar9 * 0x28, lVar21 == 0)) {
          local_3f8 = &local_548;
          TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                    ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)local_f8,(uint)&local_588,
                     (TKeyInitializer<FString_const_&> *)(ulonglong)uVar8,(bool *)&local_3f8);
          lVar21 = local_f8._0_8_ + (longlong)local_588 * 0x28;
        }
        if (((*(FString **)(lVar21 + 0x10) <= pFVar12) &&
            (pFVar12 < *(FString **)(lVar21 + 0x10) + *(int *)(lVar21 + 0x1c))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          pTVar13 = (TMap<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>_>
                     *)(*pcVar3)();
          return pTVar13;
        }
        iVar9 = *(int *)(lVar21 + 0x18);
        if (iVar9 == *(int *)(lVar21 + 0x1c)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)(lVar21 + 0x10),(int *)(lVar21 + 0x1c));
        }
        *(int *)(lVar21 + 0x18) = iVar9 + 1;
        ::FString::FString((FString *)((longlong)iVar9 * 0x10 + *(longlong *)(lVar21 + 0x10)),
                           pFVar12);
        if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_548.Data.AllocatorInstance.Data);
        }
        pFVar12 = pFVar12 + 1;
      }
    }
    else {
      bVar6 = iVar7 + UMovieGraphAudioOutputNode::RendererName.Data.ArrayNum == 1;
LAB_14dd20e5e:
      if (bVar6) goto LAB_14dd20e69;
    }
    TStack_3b0.UnvisitedBitMask = TStack_3b0.UnvisitedBitMask & ~TStack_3b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3b0);
    pTVar29 = local_570;
  }
  iVar9 = 0;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(local_5d0 + 0x18);
  local_5e8.Data = (FScriptContainerElement *)0x0;
  local_5e0 = 0;
  uVar8 = 1;
  iVar7 = *(int *)(local_5d0 + 0x30);
  uStack_5b0._4_4_ = iVar9;
  uStack_5a8._0_4_ = iVar9;
  if (iVar7 != 0) {
    pTVar17 = pTVar1;
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(local_5d0 + 0x28) !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = *(TBitArray<FDefaultBitArrayAllocator> **)(local_5d0 + 0x28);
    }
    uVar27 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
    uStack_5a8._0_4_ = 0;
    iVar9 = 0;
    while (uVar27 == 0) {
      lVar14 = (longlong)iVar9;
      uStack_5a8._0_4_ = (int)uStack_5a8 + 0x20;
      iVar9 = iVar9 + 1;
      uStack_5b0._4_4_ = iVar7;
      if ((int)((iVar7 + -1 >> 0x1f & 0x1fU) + iVar7 + -1) >> 5 < iVar9) goto LAB_14dd210b0;
      uVar27 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar14 * 4 + 4);
    }
    uVar8 = -uVar27 & uVar27;
    uVar16 = (ulonglong)uVar8 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_448._4_4_ = (int)lVar14;
    uStack_5b0._4_4_ = (int)lVar14 + -1 + (int)uStack_5a8;
    if (iVar7 < (int)uStack_5b0._4_4_) {
      uStack_5b0._4_4_ = iVar7;
    }
  }
LAB_14dd210b0:
  uVar27 = *(uint *)(local_5d0 + 0x30);
  uVar25 = uVar27 & 0xffffffe0;
  local_5a0 = *(int *)(local_5d0 + 0x10) - *(int *)(local_5d0 + 0x3c);
  uStack_5c0 = CONCAT44(uVar8,iVar9);
  uStack_5b0._0_4_ = 0xffffffff;
  uStack_5a8._4_4_ = local_11c;
  local_388 = pTVar29;
  TStack_380._padding_ = uStack_5c0;
  iVar9 = (int)uVar27 >> 5;
  TStack_380.Array = pTVar1;
  TStack_380.UnvisitedBitMask = 0xffffffff;
  TStack_380.CurrentBitIndex = uStack_5b0._4_4_;
  TStack_380.BaseBitIndex = (int)uStack_5a8;
  TStack_380._28_4_ = local_11c;
  uStack_360 = CONCAT44(uStack_59c,local_5a0);
  local_5c8 = pTVar29;
  pFStack_5b8 = (FMovieGraphRenderDataIdentifier *)pTVar1;
  if ((((int)uVar27 < 0) || (iVar7 < (int)uVar27)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TMap<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>_>
               *)(*pcVar3)();
    return pTVar13;
  }
  uVar8 = *(uint *)(pFVar23 + 0x30);
  if (uVar27 != uVar8) {
    pTVar17 = pTVar1;
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar23 + 0x28) !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar23 + 0x28);
    }
    uVar27 = -1 << ((byte)uVar27 & 0x1f) &
             *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar9 * 4);
    while (uVar27 == 0) {
      lVar14 = (longlong)iVar9;
      uVar25 = uVar25 + 0x20;
      iVar9 = iVar9 + 1;
      uVar27 = uVar8;
      if ((int)(((int)(uVar8 - 1) >> 0x1f & 0x1fU) + (uVar8 - 1)) >> 5 < iVar9) goto LAB_14dd211c0;
      uVar27 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar14 * 4 + 4);
    }
    uVar16 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar27 = (uVar25 - 1) + (int)lVar14;
    local_448._8_4_ = (int)lVar14;
    if ((int)uVar8 < (int)uVar27) {
      uVar27 = uVar8;
    }
  }
LAB_14dd211c0:
  do {
    pTVar5 = local_388;
    if (*(int *)&(local_388->Elements).field_0x8 - *(int *)&(local_388->Elements).field_0x34 !=
        (int)uStack_360) {
      local_5f4 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5f4);
    }
    if (((TStack_380.CurrentBitIndex == uVar27) && (TStack_380.Array == pTVar1)) &&
       (pTVar5 == pTVar29)) goto LAB_14dd219e7;
    pFVar26 = (FMovieGraphRenderDataIdentifier *)
              ((longlong)TStack_380.CurrentBitIndex * 200 + *(longlong *)&pTVar5->Elements);
    iVar7 = (pFVar26->RendererName).Data.ArrayNum;
    local_5d8 = pFVar26;
    if (iVar7 == UMovieGraphAudioOutputNode::RendererName.Data.ArrayNum) {
      if (1 < iVar7) {
        iVar7 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar26->RendererName).Data.AllocatorInstance.Data,
                           (wchar_t *)
                           UMovieGraphAudioOutputNode::RendererName.Data.AllocatorInstance.Data);
        bVar6 = iVar7 == 0;
        goto LAB_14dd2123c;
      }
    }
    else {
      bVar6 = iVar7 + UMovieGraphAudioOutputNode::RendererName.Data.ArrayNum == 1;
LAB_14dd2123c:
      if (!bVar6) break;
    }
    TStack_380.UnvisitedBitMask = TStack_380.UnvisitedBitMask & ~TStack_380._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_380);
  } while( true );
  pFVar22 = &local_538;
  if (param_2) {
    pFVar22 = pFVar26;
  }
  local_4c8.RootBranchName = pFVar22->RootBranchName;
  ::FString::FString(&local_4c8.LayerName,&pFVar22->LayerName);
  ::FString::FString(&local_4c8.RendererName,&pFVar22->RendererName);
  ::FString::FString(&local_4c8.SubResourceName,&pFVar22->SubResourceName);
  ::FString::FString(&local_4c8.CameraName,&pFVar22->CameraName);
  local_208.RootBranchName = local_4c8.RootBranchName;
  ::FString::FString(&local_208.LayerName,&local_4c8.LayerName);
  ::FString::FString(&local_208.RendererName,&local_4c8.RendererName);
  ::FString::FString(&local_208.SubResourceName,&local_4c8.SubResourceName);
  ::FString::FString(&local_208.CameraName,&local_4c8.CameraName);
  uVar8 = ::GetTypeHash(&local_208);
  this_01 = local_568;
  if (*(int *)&(local_568->Elements).field_0x8 != *(int *)&(local_568->Elements).field_0x34) {
    FVar2 = (local_568->Hash).SecondaryData;
    FVar19 = (ForElementType<FSetElementId>)&local_568->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar19 = FVar2;
    }
    iVar7 = *(int *)((longlong)FVar19 + (ulonglong)(local_568->HashSize - 1U & uVar8) * 4);
    while (iVar7 != -1) {
      lVar14 = (longlong)iVar7 * 0x140;
      bVar6 = FMovieGraphRenderDataIdentifier::operator==
                        ((FMovieGraphRenderDataIdentifier *)
                         (*(longlong *)&this_01->Elements + lVar14),&local_4c8);
      if (bVar6) {
        lVar14 = *(longlong *)&this_01->Elements + lVar14;
        if (lVar14 != 0) goto LAB_14dd213c5;
        break;
      }
      iVar7 = *(int *)(lVar14 + 0x138 + *(longlong *)&this_01->Elements);
    }
  }
  local_428 = &local_4c8;
  TSet<TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&>_>
            (this_01,(uint)&local_580,
             (TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&> *)(ulonglong)uVar8,
             (bool *)&local_428);
  lVar14 = (longlong)local_580 * 0x140 + *(longlong *)&this_01->Elements;
LAB_14dd213c5:
  pTVar29 = (TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
             *)(lVar14 + 0x48);
  *(undefined8 *)(lVar14 + 0xe8) = *(undefined8 *)local_5d0;
  *(FName *)(lVar14 + 0xf0) = local_4c8.RootBranchName;
  local_570 = pTVar29;
  ::FString::operator=((FString *)(lVar14 + 0xf8),&local_4c8.LayerName);
  ::FString::operator=((FString *)(lVar14 + 0x108),&local_4c8.RendererName);
  ::FString::operator=((FString *)(lVar14 + 0x118),&local_4c8.SubResourceName);
  ::FString::operator=((FString *)(lVar14 + 0x128),&local_4c8.CameraName);
  if (pTVar29 != &local_a8) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)(lVar14 + 0x80),(int *)(lVar14 + 0x90),
               &local_a8.Hash,local_a8.HashSize);
    TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pTVar29,&local_a8.Elements);
  }
  iVar7 = *(int *)&pFVar26[1].LayerName.Data.AllocatorInstance.Data;
  this_00 = (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)(lVar14 + 0x98);
  FVar28 = pFVar26[1].RootBranchName;
  FVar32 = (FName)((longlong)FVar28 + (longlong)iVar7 * 0x10);
  while( true ) {
    if (*(int *)&pFVar26[1].LayerName.Data.AllocatorInstance.Data != iVar7) {
      local_5f3 = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_5f3);
    }
    uVar8 = local_d0;
    pTVar29 = local_570;
    if (FVar28 == FVar32) break;
    FPaths::GetExtension((FString *)(local_560 + 8),(FString *)FVar28,false);
    iVar9 = (int)local_550 + -1;
    pwVar20 = (wchar_t *)local_560._8_8_;
    if ((int)local_550 == 0) {
      iVar9 = 0;
      pwVar20 = L"";
    }
    uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar20);
    iVar9 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>(this_00,uVar8,(FString *)(local_560 + 8));
    if ((iVar9 == -1) ||
       (lVar14 = *(longlong *)&this_00->Elements + (longlong)iVar9 * 0x28, lVar14 == 0)) {
      local_420 = (undefined8 *)(local_560 + 8);
      TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                (this_00,(uint)&local_57c,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar8,
                 (bool *)&local_420);
      lVar14 = *(longlong *)&this_00->Elements + (longlong)local_57c * 0x28;
    }
    if ((((ulonglong)*(FName *)(lVar14 + 0x10) <= (ulonglong)FVar28) &&
        ((ulonglong)FVar28 <
         (ulonglong)((longlong)*(FName *)(lVar14 + 0x10) + (longlong)*(int *)(lVar14 + 0x1c) * 0x10)
        )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TMap<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>_>
                 *)(*pcVar3)();
      return pTVar13;
    }
    iVar9 = *(int *)(lVar14 + 0x18);
    if (iVar9 == *(int *)(lVar14 + 0x1c)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)(lVar14 + 0x10),(int *)(lVar14 + 0x1c));
    }
    *(int *)(lVar14 + 0x18) = iVar9 + 1;
    ::FString::FString((FString *)((longlong)iVar9 * 0x10 + *(longlong *)(lVar14 + 0x10)),
                       (FString *)FVar28);
    if ((wchar_t *)local_560._8_8_ != (wchar_t *)0x0) {
      FMemory::Free((void *)local_560._8_8_);
    }
    FVar28 = (FName)((longlong)FVar28 + 0x10);
    pFVar26 = local_5d8;
  }
  if (param_2) {
    TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
    ::Append<FDefaultSetAllocator>
              ((TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                *)this_00,
               (TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                *)local_f8);
  }
  else {
    iVar7 = 0;
    uVar27 = 1;
    uStack_5a8._0_4_ = 0;
    uStack_5b0._4_4_ = 0;
    if (local_d0 != 0) {
      puVar18 = (uint *)(local_f8 + 0x10);
      if (local_d8 != (uint *)0x0) {
        puVar18 = local_d8;
      }
      uVar25 = *puVar18;
      uStack_5a8._0_4_ = 0;
      while (uVar25 == 0) {
        lVar14 = (longlong)iVar7;
        uStack_5a8._0_4_ = (int)uStack_5a8 + 0x20;
        iVar7 = iVar7 + 1;
        uStack_5b0._4_4_ = local_d0;
        if ((int)(((int)(local_d0 - 1) >> 0x1f & 0x1fU) + (local_d0 - 1)) >> 5 < iVar7)
        goto LAB_14dd21676;
        uVar25 = (puVar18 + 1)[lVar14];
      }
      uVar27 = -uVar25 & uVar25;
      uVar16 = (ulonglong)uVar27 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_448._12_4_ = (float)lVar14;
      uStack_5b0._4_4_ = (int)(float)lVar14 + -1 + (int)uStack_5a8;
      if ((int)local_d0 < (int)uStack_5b0._4_4_) {
        uStack_5b0._4_4_ = local_d0;
      }
    }
LAB_14dd21676:
    local_5c8 = (TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                 *)local_f8;
    pFStack_5b8 = (FMovieGraphRenderDataIdentifier *)(local_f8 + 0x10);
    local_5a0 = local_f8._8_4_ - local_c4;
    uVar25 = local_d0 & 0xffffffe0;
    uStack_5c0 = CONCAT44(uVar27,iVar7);
    uStack_5b0._0_4_ = 0xffffffff;
    uStack_5a8._4_4_ = local_fc;
    local_3e8 = local_5c8;
    TStack_3e0._padding_ = uStack_5c0;
    iVar7 = (int)local_d0 >> 5;
    bVar15 = (byte)local_d0;
    TStack_3e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)pFStack_5b8;
    TStack_3e0.UnvisitedBitMask = 0xffffffff;
    TStack_3e0.CurrentBitIndex = uStack_5b0._4_4_;
    TStack_3e0.BaseBitIndex = (int)uStack_5a8;
    TStack_3e0._28_4_ = local_fc;
    uStack_3c0 = CONCAT44(uStack_59c,local_5a0);
    if (((int)local_d0 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TMap<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>_>
                 *)(*pcVar3)();
      return pTVar13;
    }
    if (uVar8 != local_d0) {
      puVar18 = (uint *)(local_f8 + 0x10);
      if (local_d8 != (uint *)0x0) {
        puVar18 = local_d8;
      }
      uVar8 = -1 << (bVar15 & 0x1f) & puVar18[iVar7];
      while (uVar8 == 0) {
        lVar14 = (longlong)iVar7;
        uVar25 = uVar25 + 0x20;
        iVar7 = iVar7 + 1;
        uVar8 = local_d0;
        if ((int)(((int)(local_d0 - 1) >> 0x1f & 0x1fU) + (local_d0 - 1)) >> 5 < iVar7)
        goto LAB_14dd217a2;
        uVar8 = (puVar18 + 1)[lVar14];
      }
      uVar16 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_438 = (int)lVar14;
      uVar8 = (uVar25 - 1) + local_438;
      if ((int)local_d0 < (int)uVar8) {
        uVar8 = local_d0;
      }
    }
LAB_14dd217a2:
    while( true ) {
      pTVar5 = local_3e8;
      if (*(int *)&(local_3e8->Elements).field_0x8 - *(int *)&(local_3e8->Elements).field_0x34 !=
          (int)uStack_3c0) {
        local_5f2 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5f2);
      }
      if (((TStack_3e0.CurrentBitIndex == uVar8) &&
          (TStack_3e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10))) &&
         (pFVar26 = local_5d8,
         pTVar5 == (TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                    *)local_f8)) break;
      lVar14 = *(longlong *)&pTVar5->Elements;
      pFVar12 = (FString *)(lVar14 + (longlong)TStack_3e0.CurrentBitIndex * 0x28);
      iVar9 = *(int *)(lVar14 + 8 + (longlong)TStack_3e0.CurrentBitIndex * 0x28);
      iVar7 = iVar9 + -1;
      if (iVar9 == 0) {
        pwVar20 = L"";
        iVar7 = 0;
      }
      else {
        pwVar20 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
      uVar27 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar20);
      this_03 = TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<FString_const_&>
                          ((TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                            *)((longlong)(&pTVar29->Hash + 1) + 8),uVar27,pFVar12);
      iVar7 = pFVar12[1].Data.ArrayNum;
      pFVar23 = pFVar12[1].Data.AllocatorInstance.Data;
      pFVar24 = pFVar23 + (longlong)iVar7 * 0x10;
      while( true ) {
        if (pFVar12[1].Data.ArrayNum != iVar7) {
          local_5f1 = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_5f1);
        }
        if (pFVar23 == pFVar24) break;
        TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                  (this_03,(FString *)pFVar23);
        pFVar23 = pFVar23 + 0x10;
      }
      TStack_3e0.UnvisitedBitMask = TStack_3e0.UnvisitedBitMask & ~TStack_3e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3e0);
    }
  }
  if (((local_5e8.Data <= pFVar26) &&
      (pFVar26 < (FMovieGraphRenderDataIdentifier *)
                 (local_5e8.Data + (longlong)local_5e0._4_4_ * 0x48))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TMap<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>_>
               *)(*pcVar3)();
    return pTVar13;
  }
  iVar7 = (int)local_5e0;
  if ((int)local_5e0 == local_5e0._4_4_) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,&local_5e8,(int *)((longlong)&local_5e0 + 4));
  }
  FVar4.Data = local_5e8.Data;
  local_5e0 = CONCAT44(local_5e0._4_4_,iVar7 + 1);
  lVar14 = (longlong)iVar7 * 9;
  *(FName *)&local_5e8.Data[(longlong)iVar7 * 0x48].field_0x0 = pFVar26->RootBranchName;
  ::FString::FString((FString *)(local_5e8.Data + (lVar14 + 1) * 8),&pFVar26->LayerName);
  ::FString::FString((FString *)(FVar4.Data + (lVar14 + 3) * 8),&pFVar26->RendererName);
  ::FString::FString((FString *)(FVar4.Data + (lVar14 + 5) * 8),&pFVar26->SubResourceName);
  ::FString::FString((FString *)(FVar4.Data + (lVar14 + 7) * 8),&pFVar26->CameraName);
  if ((TIntPoint<int>_u_0)local_4c8.CameraName.Data.AllocatorInstance.Data !=
      (TIntPoint<int>_u_0)0x0) {
    FMemory::Free(local_4c8.CameraName.Data.AllocatorInstance.Data);
  }
  if (local_4c8.SubResourceName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.SubResourceName.Data.AllocatorInstance.Data);
  }
  if (local_4c8.RendererName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.RendererName.Data.AllocatorInstance.Data);
  }
  pFVar23 = local_5d0;
  if (local_4c8.LayerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.LayerName.Data.AllocatorInstance.Data);
    pFVar23 = local_5d0;
  }
LAB_14dd219e7:
  if (local_3f0->bDeleteSourceFiles != false) {
    iVar7 = (int)local_5e0;
    pFVar24 = local_5e8.Data + 0x18;
    pFVar26 = (FMovieGraphRenderDataIdentifier *)(local_5e8.Data + (longlong)(int)local_5e0 * 0x48);
    while( true ) {
      if ((int)local_5e0 != iVar7) {
        local_5f0[0] = 0;
        `TCheckedPointerIterator<FMovieGraphRenderDataIdentifier,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_5f0);
      }
      pFVar22 = (FMovieGraphRenderDataIdentifier *)(pFVar24 + -0x18);
      if (pFVar22 == pFVar26) break;
      if (*(int *)(pFVar23 + 0x10) != *(int *)(pFVar23 + 0x3c)) {
        local_1c0.RootBranchName = pFVar22->RootBranchName;
        ::FString::FString(&local_1c0.LayerName,(FString *)(pFVar24 + -0x10));
        ::FString::FString(&local_1c0.RendererName,(FString *)pFVar24);
        ::FString::FString(&local_1c0.SubResourceName,(FString *)(pFVar24 + 0x10));
        ::FString::FString(&local_1c0.CameraName,(FString *)(pFVar24 + 0x20));
        uVar8 = ::GetTypeHash(&local_1c0);
        TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
        ::RemoveImpl<FMovieGraphRenderDataIdentifier>
                  ((TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
                    *)(pFVar23 + 8),uVar8,pFVar22);
      }
      pFVar24 = pFVar24 + 0x48;
    }
  }
  DestructItems<FMovieGraphRenderDataIdentifier,int>
            ((FMovieGraphRenderDataIdentifier *)local_5e8.Data,(int)local_5e0);
  if ((FMovieGraphRenderDataIdentifier *)local_5e8.Data != (FMovieGraphRenderDataIdentifier *)0x0) {
    FMemory::Free(local_5e8.Data);
  }
  local_b0 = 0;
  if (local_b8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f8);
  uVar16 = (ulonglong)local_578;
  pFVar23 = pFVar23 + 0x58;
  param_1 = local_400;
  goto LAB_14dd20c4a;
}

// GenerateTemporaryEncoderInputFiles @ 14dd21bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UMovieGraphCommandLineEncoderNode::GenerateTemporaryEncoderInputFiles
          (UMovieGraphCommandLineEncoderNode *this,FEncoderParams *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 *puVar1;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 TVar6;
  code *pcVar7;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 TVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FString *pFVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  UObject *pUVar15;
  TObjectPtr<UMoviePipelineExecutorShot>_u_0 TVar16;
  UMovieGraphPipeline *this_00;
  UMovieGraphTimeStepBase *pUVar17;
  IFileManager *pIVar18;
  size_t sVar19;
  byte bVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  ForAnyElementType FVar24;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  undefined1 *puVar30;
  uint *puVar31;
  int iVar32;
  undefined1 auStackY_5d8 [32];
  undefined1 local_588;
  undefined1 local_587 [7];
  FString local_580;
  FString local_570;
  int local_560;
  uint uStack_55c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_558;
  uint local_550;
  uint uStack_54c;
  uint uStack_548;
  undefined4 uStack_544;
  FString local_540;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_530;
  int iStack_528;
  uint uStack_524;
  undefined1 *local_520;
  undefined4 uStack_518;
  int iStack_514;
  int local_510;
  int iStack_50c;
  int iStack_508;
  undefined4 uStack_504;
  int local_500;
  int local_4fc;
  TPairInitializer<FString_&&,FString_&&> local_4f8;
  UMovieGraphGlobalOutputSettingNode *local_4e8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_4e0;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_4d8;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_4d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4c8;
  undefined8 uStack_4a8;
  FString local_4a0;
  FString *local_490;
  FString *local_488;
  FString local_480;
  FString local_470;
  wchar_t *local_458;
  int iStack_450;
  undefined4 uStack_44c;
  FString local_448;
  FGuid local_438;
  TStringView<wchar_t> local_428;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_418;
  undefined8 uStack_410;
  TBitArray<FDefaultBitArrayAllocator> *local_408;
  undefined8 uStack_400;
  int iStack_3fc;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined1 local_3e8 [128];
  undefined1 local_368 [32];
  undefined8 uStack_348;
  int local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  ForElementType<FSetElementId> local_328;
  int local_320;
  undefined1 local_318 [88];
  undefined1 local_2c0 [64];
  void *local_280;
  undefined4 local_278;
  int local_270;
  bool local_26c;
  ForAnyElementType local_268;
  undefined8 local_260;
  bool local_258;
  FDateTime local_250;
  FTimespan local_248;
  int local_240;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_238;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_1e8;
  TObjectPtr<UMoviePipelineExecutorShot>_u_0 TStack_1e0;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 local_1d8;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  undefined1 local_1b8 [64];
  void *local_178;
  undefined4 local_170;
  undefined1 local_168 [64];
  void *local_128;
  undefined4 local_120;
  TStringBuilderBase<wchar_t> local_118;
  wchar_t local_f8 [64];
  ulonglong local_78 [7];
  
  local_78[0] = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  local_4f8.Value = (FString *)param_1;
  local_4e0 = param_2;
  local_4d8 = param_3;
  local_4e8 = GetSettingOnBranch<UMovieGraphGlobalOutputSettingNode>(this,true,true);
  local_118.Base = local_f8;
  local_118.bIsDynamic = false;
  local_118.bIsExternal = false;
  local_118.CurPos = local_f8;
  local_118.End = (wchar_t *)local_78;
  ::FString::FString(&local_4a0,L"FrameRate");
  TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
  ::FindChecked((TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                 *)param_1,&local_4a0);
  if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
  }
  iVar14 = *(int *)&(param_1->FilesByExtensionType).field_0x28;
  puVar1 = &(param_1->FilesByExtensionType).field_0x10;
  pTVar2 = &param_1->FilesByExtensionType;
  iStack_528 = 0;
  local_510 = 0;
  uStack_524 = 1;
  iStack_514 = 0;
  if (iVar14 != 0) {
    puVar31 = *(uint **)&(param_1->FilesByExtensionType).field_0x20;
    if (puVar31 == (uint *)0x0) {
      puVar31 = (uint *)puVar1;
    }
    uVar21 = *puVar31;
    while (uVar21 == 0) {
      lVar22 = (longlong)iStack_528;
      local_510 = local_510 + 0x20;
      iStack_528 = iStack_528 + 1;
      iStack_514 = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_528) goto LAB_14dd21cfd;
      uVar21 = puVar31[lVar22 + 1];
    }
    uStack_524 = -uVar21 & uVar21;
    uVar3 = (ulonglong)uStack_524 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_500 = (int)lVar22;
    iStack_514 = local_500 + -1 + local_510;
    if (iVar14 < iStack_514) {
      iStack_514 = iVar14;
    }
  }
LAB_14dd21cfd:
  iStack_508 = *(int *)&(param_1->FilesByExtensionType).field_0x8 -
               *(int *)&(param_1->FilesByExtensionType).field_0x34;
  uVar21 = *(uint *)&(param_1->FilesByExtensionType).field_0x28;
  bVar20 = (byte)uVar21 & 0x1f;
  iVar32 = (int)uVar21 >> 5;
  uStack_55c = 1 << bVar20;
  uVar27 = -1 << bVar20;
  uVar28 = uVar21 & 0xffffffe0;
  uStack_518 = 0xffffffff;
  TStack_4c8._padding_ = CONCAT44(uStack_524,iStack_528);
  TStack_4c8.CurrentBitIndex = iStack_514;
  TStack_4c8.UnvisitedBitMask = 0xffffffff;
  TStack_4c8._28_4_ = iStack_514;
  TStack_4c8.BaseBitIndex = local_510;
  uStack_4a8 = CONCAT44(uStack_504,iStack_508);
  local_560 = iVar32;
  pTStack_558 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_550 = uVar27;
  uStack_54c = uVar21;
  uStack_548 = uVar28;
  local_530 = pTVar2;
  local_520 = puVar1;
  iStack_50c = iStack_514;
  local_4d0 = pTVar2;
  TStack_4c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar14 < (int)uVar21)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar11 = local_4f8.Value;
  uVar10 = _UNK_150631d98;
  uVar9 = ___xmm_00000000ffffffff0000008000000000;
  uVar4 = *(uint *)&(param_1->FilesByExtensionType).field_0x28;
  if (uVar21 != uVar4) {
    puVar30 = *(undefined1 **)&(param_1->FilesByExtensionType).field_0x20;
    if (puVar30 == (undefined1 *)0x0) {
      puVar30 = puVar1;
    }
    uVar27 = uVar27 & *(uint *)(puVar30 + (longlong)iVar32 * 4);
    while (uVar27 == 0) {
      uStack_548 = uVar28 + 0x20;
      local_560 = iVar32 + 1;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < local_560)
      goto LAB_14dd21e3a;
      uVar27 = *(uint *)(puVar30 + (longlong)iVar32 * 4 + 4);
      local_550 = 0xffffffff;
      iVar32 = local_560;
      uVar28 = uStack_548;
    }
    uStack_55c = -uVar27 & uVar27;
    uVar3 = (ulonglong)uStack_55c * 2 + 1;
    lVar22 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_4fc = (int)lVar22;
    uStack_54c = local_4fc + -1 + uVar28;
    if ((int)uVar4 < (int)uStack_54c) {
LAB_14dd21e3a:
      uStack_54c = uVar4;
    }
  }
  uStack_410._4_4_ = uStack_55c;
  uStack_410._0_4_ = local_560;
  iStack_3fc = uStack_54c;
  uStack_400._0_4_ = local_550;
  local_3f8._4_4_ = uStack_544;
  local_3f8._0_4_ = uStack_548;
  local_340 = *(int *)&((TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                         *)((longlong)local_4f8.Value + 0x50))->field_0x8 -
              *(int *)&((TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                         *)((longlong)local_4f8.Value + 0x50))->field_0x34;
  local_368._16_8_ = pTStack_558;
  uStack_3f0 = CONCAT44(local_33c,local_340);
  local_408 = pTStack_558;
  local_418 = pTVar2;
  local_368._0_8_ = pTVar2;
  local_368._8_8_ = uStack_410;
  local_368._24_8_ = uStack_400;
  uStack_348 = local_3f8;
  do {
    pTVar2 = local_4d0;
    if (*(int *)&local_4d0->field_0x8 - *(int *)&local_4d0->field_0x34 != (int)uStack_4a8) {
      local_588 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_588);
    }
    lVar22 = (longlong)TStack_4c8.CurrentBitIndex;
    if (((TStack_4c8.CurrentBitIndex == iStack_3fc) && (TStack_4c8.Array == local_408)) &&
       (pTVar2 == local_418)) {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_118);
      return;
    }
    lVar5 = *(longlong *)pTVar2;
    FGuid::NewGuid(&local_438);
    local_540.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_540.Data.ArrayNum = 0;
    local_540.Data.ArrayMax = 0;
    FGuid::AppendString(&local_438,&local_540,Digits);
    iVar14 = (local_4e8->OutputDirectory).Path.Data.ArrayNum;
    iVar32 = local_540.Data.ArrayNum + -1;
    if (local_540.Data.ArrayNum == 0) {
      iVar32 = 0;
    }
    local_570.Data.ArrayNum = iVar14;
    if ((iVar14 == 0) && (iVar32 != -1)) {
      pFVar26 = (local_4e8->OutputDirectory).Path.Data.AllocatorInstance.Data;
      iVar13 = iVar32 + 2;
LAB_14dd21f70:
      local_570.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar13 != 0) goto LAB_14dd21f7b;
      local_570.Data.ArrayMax = 0;
    }
    else {
      pFVar26 = (local_4e8->OutputDirectory).Path.Data.AllocatorInstance.Data;
      iVar13 = iVar32 + 1;
      if (iVar14 == 0) goto LAB_14dd21f70;
LAB_14dd21f7b:
      local_570.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar21 = iVar13 + iVar14;
      if ((int)uVar21 < iVar14) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar21,0,(ForAnyElementType *)&local_570,iVar14,&local_570.Data.ArrayMax);
      if (iVar14 != 0) {
        memcpy(local_570.Data.AllocatorInstance.Data,pFVar26,(longlong)iVar14 * 2);
      }
    }
    ::FString::PathAppend(&local_570,(wchar_t *)local_540.Data.AllocatorInstance.Data,iVar32);
    ::FString::ConcatFC(&local_448,&local_570,L"_input");
    if (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_570.Data.AllocatorInstance.Data);
    }
    if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_540.Data.AllocatorInstance.Data);
    }
    local_368._0_8_ =
         (TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
          *)0x0;
    local_368._8_8_ = 0;
    uStack_348 = 0;
    local_340 = 0;
    local_33c = 0x80;
    local_338 = 0xffffffff;
    local_334 = 0;
    local_328 = (ForElementType<FSetElementId>)0x0;
    local_320 = 0;
    ::FString::FString(&local_470,L"txt");
    ::FString::FString(&local_480,L"ext");
    local_490 = &local_480;
    local_488 = &local_470;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)local_368,&local_4f8,(bool *)&local_490);
    if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_480.Data.AllocatorInstance.Data);
    }
    if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_470.Data.AllocatorInstance.Data);
    }
    local_318._0_4_ = 0;
    local_318._4_4_ = 0;
    local_318._64_4_ = 0;
    local_318._68_4_ = 0;
    local_318._72_4_ = 0;
    local_318._76_4_ = 0;
    local_1e8.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
    TStack_1e0.DebugPtr = (UMoviePipelineExecutorShot *)0x0;
    local_318._8_8_ = (FScriptContainerElement *)0x0;
    local_318._16_4_ = 0;
    local_318._20_4_ = 0;
    local_318._24_8_ = (FScriptContainerElement *)0x0;
    local_318._32_4_ = 0;
    local_318._36_4_ = 0;
    local_318._40_8_ = (FScriptContainerElement *)0x0;
    local_318._48_4_ = 0;
    local_318._52_4_ = 0;
    local_318._56_8_ = (FScriptContainerElement *)0x0;
    local_318._80_4_ = 0;
    local_318._84_4_ = 0;
    local_2c0._0_8_ = 0;
    local_2c0._8_8_ = 0;
    local_2c0._32_8_ = 0;
    local_2c0._40_8_ = uVar9;
    local_2c0._48_8_ = uVar10;
    local_280 = (void *)0x0;
    local_278 = 0;
    local_270 = 0;
    local_26c = false;
    local_268.Data = (FScriptContainerElement *)0x0;
    local_260._0_4_ = 0;
    local_260._4_4_ = 0;
    local_258 = true;
    local_250.Ticks = 0;
    local_248.Ticks = 0;
    local_240 = 0;
    local_238.Elements._0_8_ = 0;
    local_238.Elements._8_8_ = 0;
    local_238.Elements._32_8_ = 0;
    local_238.Elements._40_4_ = 0;
    local_238.Elements._44_4_ = 0x80;
    local_238.Elements._48_4_ = 0xffffffff;
    local_238.Elements._52_4_ = 0;
    local_238.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_238.HashSize = 0;
    local_1d8.DebugPtr = (UMovieGraphEvaluatedConfig *)0x0;
    local_1d0 = 0;
    local_1cc = 0x18;
    local_1c8 = 1;
    pUVar15 = FWeakObjectPtr::Get(&CachedPipeline.WeakPtr);
    local_250.Ticks = *(long64 *)&pUVar15[0xb].field_0x20;
    pUVar15 = FWeakObjectPtr::Get(&CachedPipeline.WeakPtr);
    local_248.Ticks = *(long64 *)&pUVar15[0xb].field_0x8;
    pUVar15 = FWeakObjectPtr::Get(&CachedPipeline.WeakPtr);
    TVar6 = (TObjectPtr<UMoviePipelineExecutorJob>_u_0)
            *(TObjectPtr<UMoviePipelineExecutorJob>_u_0 *)&pUVar15[5].field_0x18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar6.DebugPtr != (UMoviePipelineExecutorJob *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
    }
    local_1e8 = TVar6;
    TVar16.DebugPtr =
         (UMoviePipelineExecutorShot *)
         FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)pFVar11 + 0xa0));
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar16.DebugPtr != (UMoviePipelineExecutorShot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar16.DebugPtr);
    }
    TStack_1e0.DebugPtr = TVar16.DebugPtr;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=(&local_238,
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)local_368);
    TVar8 = PrimaryJobEvaluatedGraph.field0_0x0;
    if (PrimaryJobEvaluatedGraph.field0_0x0 == (UMovieGraphEvaluatedConfig *)0x0) {
      this_00 = (UMovieGraphPipeline *)FWeakObjectPtr::Get(&CachedPipeline.WeakPtr);
      pUVar17 = UMovieGraphPipeline::GetTimeStepInstance(this_00);
      lVar23 = (**(code **)(*(longlong *)pUVar17 + 0x2c8))(pUVar17,local_3e8);
      TVar8.DebugPtr = ((TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 *)(lVar23 + 0x40))->DebugPtr;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar8.DebugPtr != (UMovieGraphEvaluatedConfig *)0x0) {
        UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (TVar8.DebugPtr != (UMovieGraphEvaluatedConfig *)0x0) {
          UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar8.DebugPtr != (UMovieGraphEvaluatedConfig *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
        }
      }
    }
    local_318._0_8_ =
         ((FMovieGraphRenderDataIdentifier *)((longlong)pFVar11 + 0xa8))->RootBranchName;
    local_1d8 = TVar8;
    ::FString::operator=
              ((FString *)(local_318 + 8),
               &((FMovieGraphRenderDataIdentifier *)((longlong)pFVar11 + 0xa8))->LayerName);
    ::FString::operator=
              ((FString *)(local_318 + 0x18),
               &((FMovieGraphRenderDataIdentifier *)((longlong)pFVar11 + 0xa8))->RendererName);
    ::FString::operator=
              ((FString *)(local_318 + 0x28),
               &((FMovieGraphRenderDataIdentifier *)((longlong)pFVar11 + 0xa8))->SubResourceName);
    ::FString::operator=
              ((FString *)(local_318 + 0x38),
               &((FMovieGraphRenderDataIdentifier *)((longlong)pFVar11 + 0xa8))->CameraName);
    local_1b8._0_8_ = 0;
    local_1b8._8_8_ = 0;
    local_1b8._32_8_ = 0;
    local_1b8._40_4_ = 0;
    local_1b8._44_4_ = 0x80;
    local_1b8._48_4_ = 0xffffffff;
    local_1b8._52_4_ = 0;
    local_178 = (void *)0x0;
    local_170 = 0;
    local_168._0_8_ = 0;
    local_168._8_8_ = 0;
    local_168._32_8_ = 0;
    local_168._40_4_ = 0;
    local_168._44_4_ = 0x80;
    local_168._48_4_ = 0xffffffff;
    local_168._52_4_ = 0;
    local_128 = (void *)0x0;
    local_120 = 0;
    UMovieGraphBlueprintLibrary::ResolveFilenameFormatArguments
              (&local_580,&local_448,(FMovieGraphFilenameResolveParams *)local_318,
               (FMovieGraphResolveArgs *)local_1b8);
    if (4 < (byte)LogMovieRenderPipelineIO._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
      ;
    }
    local_118.CurPos = local_118.Base;
    iVar14 = *(int *)(lVar5 + 0x18 + lVar22 * 0x28);
    lVar23 = *(longlong *)(lVar5 + 0x10 + lVar22 * 0x28);
    lVar29 = (longlong)iVar14 * 0x10 + lVar23;
    while( true ) {
      if (*(int *)(lVar5 + 0x18 + lVar22 * 0x28) != iVar14) {
        local_587[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_587);
      }
      if (lVar23 == lVar29) break;
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_118,L"file \'file:%s\'%s");
      iVar32 = *(int *)(lVar5 + 8 + lVar22 * 0x28);
      if (iVar32 == UMovieGraphAudioOutputNode::OutputExtension.Data.ArrayNum) {
        if (1 < iVar32) {
          iVar32 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)(lVar5 + lVar22 * 0x28),
                              (wchar_t *)
                              UMovieGraphAudioOutputNode::OutputExtension.Data.AllocatorInstance.
                              Data);
          bVar12 = iVar32 == 0;
          goto LAB_14dd224d9;
        }
      }
      else {
        bVar12 = iVar32 + UMovieGraphAudioOutputNode::OutputExtension.Data.ArrayNum == 1;
LAB_14dd224d9:
        if (!bVar12) {
          TStringBuilderBase<wchar_t>::AppendfImpl(&local_118,L"duration %f%s");
        }
      }
      lVar23 = lVar23 + 0x10;
    }
    pIVar18 = IFileManager::Get();
    FVar24.Data = (FScriptContainerElement *)L"";
    if (local_580.Data.ArrayNum != 0) {
      FVar24.Data = local_580.Data.AllocatorInstance.Data;
    }
    if (local_118.End < local_118.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_118,1);
    }
    *local_118.CurPos = L'\0';
    local_458 = local_118.Base;
    iVar14 = 0;
    if (local_118.Base != (wchar_t *)0x0) {
      sVar19 = wcslen(local_118.Base);
      iVar14 = (int)sVar19;
    }
    local_428._12_4_ = uStack_44c;
    local_428.Size = iVar14;
    local_428.DataPtr = local_458;
    iStack_450 = iVar14;
    FFileHelper::SaveStringToFile(&local_428,(wchar_t *)FVar24.Data,AutoDetect,pIVar18,0);
    iVar14 = *(int *)(lVar5 + 8 + lVar22 * 0x28);
    if (iVar14 == UMovieGraphAudioOutputNode::OutputExtension.Data.ArrayNum) {
      if (1 < iVar14) {
        iVar14 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)(lVar5 + lVar22 * 0x28),
                            (wchar_t *)
                            UMovieGraphAudioOutputNode::OutputExtension.Data.AllocatorInstance.Data)
        ;
        bVar12 = iVar14 == 0;
        goto LAB_14dd225cc;
      }
LAB_14dd225d7:
      pTVar25 = local_4d8;
    }
    else {
      bVar12 = iVar14 + UMovieGraphAudioOutputNode::OutputExtension.Data.ArrayNum == 1;
LAB_14dd225cc:
      pTVar25 = local_4e0;
      if (bVar12) goto LAB_14dd225d7;
    }
    pFVar26 = (pTVar25->AllocatorInstance).Data;
    if (((pFVar26 <= (FScriptContainerElement *)&local_580) &&
        ((FScriptContainerElement *)&local_580 < pFVar26 + (longlong)pTVar25->ArrayMax * 0x10)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar14 = pTVar25->ArrayNum;
    if (iVar14 == pTVar25->ArrayMax) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar25->AllocatorInstance,&pTVar25->ArrayMax);
    }
    iVar32 = local_580.Data.ArrayNum;
    FVar24.Data = local_580.Data.AllocatorInstance.Data;
    pTVar25->ArrayNum = iVar14 + 1;
    pFVar26 = (pTVar25->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
    *(undefined8 *)pFVar26 = 0;
    *(int *)(pFVar26 + 8) = local_580.Data.ArrayNum;
    if (local_580.Data.ArrayNum == 0) {
      *(int *)(pFVar26 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_580.Data.ArrayNum,0,(ForAnyElementType *)pFVar26,local_580.Data.ArrayNum,
                 (int *)(pFVar26 + 0xc));
      memcpy(*(void **)pFVar26,FVar24.Data,(longlong)iVar32 * 2);
    }
    if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_580.Data.AllocatorInstance.Data);
    }
    local_120 = 0;
    if (local_128 != (void *)0x0) {
      FMemory::Free(local_128);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_168);
    local_170 = 0;
    if (local_178 != (void *)0x0) {
      FMemory::Free(local_178);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_1b8);
    local_238.HashSize = 0;
    if (local_238.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_238.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_238.Elements);
    if (local_268.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data);
    }
    local_278 = 0;
    if (local_280 != (void *)0x0) {
      FMemory::Free(local_280);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_2c0);
    if ((FScriptContainerElement *)local_318._56_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_318._56_8_);
    }
    if ((FScriptContainerElement *)local_318._40_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_318._40_8_);
    }
    if ((FScriptContainerElement *)local_318._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_318._24_8_);
    }
    if ((FScriptContainerElement *)local_318._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_318._8_8_);
    }
    local_320 = 0;
    if (local_328 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_328);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_368);
    if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_448.Data.AllocatorInstance.Data);
    }
    TStack_4c8.UnvisitedBitMask = TStack_4c8.UnvisitedBitMask & ~TStack_4c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4c8);
  } while( true );
}

// GetBranchRestriction @ 14dd23e70

EMovieGraphBranchRestriction __thiscall
UMovieGraphCommandLineEncoderNode::GetBranchRestriction(UMovieGraphCommandLineEncoderNode *this)

{
  return Globals;
}

// GetEvaluatedConfig @ 14dd255e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TObjectPtr<UMovieGraphEvaluatedConfig> __thiscall
UMovieGraphCommandLineEncoderNode::GetEvaluatedConfig(UMovieGraphCommandLineEncoderNode *this)

{
  UMovieGraphPipeline *this_00;
  UMovieGraphTimeStepBase *pUVar1;
  longlong lVar2;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 in_RDX;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 TVar3;
  bool bVar4;
  undefined1 local_88 [128];
  
  if (PrimaryJobEvaluatedGraph.field0_0x0 == (UMovieGraphEvaluatedConfig *)0x0) {
    this_00 = (UMovieGraphPipeline *)FWeakObjectPtr::Get(&CachedPipeline.WeakPtr);
    pUVar1 = UMovieGraphPipeline::GetTimeStepInstance(this_00);
    lVar2 = (**(code **)(*(longlong *)pUVar1 + 0x2c8))(pUVar1,local_88);
    TVar3 = (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0)
            ((TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 *)(lVar2 + 0x40))->DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14dd25648;
    bVar4 = TVar3.DebugPtr == (UMovieGraphEvaluatedConfig *)0x0;
  }
  else {
    bVar4 = !UE::GC::GIsIncrementalReachabilityPending;
    TVar3 = PrimaryJobEvaluatedGraph.field0_0x0;
  }
  if (!bVar4) {
    UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
  }
LAB_14dd25648:
  (in_RDX.DebugPtr)->_padding_ = (longlong)TVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar3.DebugPtr != (UMovieGraphEvaluatedConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
  }
  return (TObjectPtr<UMovieGraphEvaluatedConfig>)in_RDX;
}

// GetPrivateStaticClass @ 14dd2c390

UClass * __cdecl UMovieGraphCommandLineEncoderNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphCommandLineEncoderNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphCommandLineEncoderNode",
               &Z_Registration_Info_UClass_UMovieGraphCommandLineEncoderNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphCommandLineEncoderNode,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphCommandLineEncoderNode>,
               InternalVTableHelperCtorCaller<UMovieGraphCommandLineEncoderNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphCommandLineEncoderNode.InnerSingleton;
}

// GetResolvedOutputFilename @ 14dd2e400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UMovieGraphCommandLineEncoderNode::GetResolvedOutputFilename
          (UMovieGraphCommandLineEncoderNode *this,FString *__return_storage_ptr__,
          FMovieGraphRenderDataIdentifier *param_1,
          TWeakObjectPtr<UMoviePipelineExecutorShot,FWeakObjectPtr> *param_2,FString *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *pvVar4;
  ForElementType<unsigned_int> *pFVar5;
  FWeakObjectPtr *this_00;
  UMovieGraphCommandLineEncoderNode *this_01;
  FMovieGraphRenderDataIdentifier *pFVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  UObject *pUVar14;
  TObjectPtr<UMovieGraphEvaluatedConfig> TVar15;
  FMovieGraphFilenameResolveParams *pFVar16;
  FString *pFVar17;
  FPlatformFileManager *this_02;
  IPlatformFile *pIVar18;
  ForAnyElementType FVar19;
  ulonglong uVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  ulonglong uVar23;
  wchar_t *pwVar24;
  TBitArray<FDefaultBitArrayAllocator> *pTVar25;
  uint uVar26;
  ulonglong uVar27;
  ForElementType<unsigned_int> FVar28;
  bool bVar29;
  undefined1 auStackY_4c8 [32];
  FSparseArrayAllocationInfo local_490;
  undefined4 local_480;
  uint uStack_47c;
  uint uStack_478;
  undefined4 uStack_474;
  FString local_470;
  FWeakObjectPtr *local_460;
  FString local_458;
  UMovieGraphCommandLineEncoderNode *local_448;
  FMovieGraphRenderDataIdentifier *local_440;
  FString *local_438;
  longlong *local_430;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_428;
  FMovieGraphFilenameResolveParams local_408;
  undefined1 local_2a8 [32];
  ForElementType<unsigned_int> local_288;
  uint local_280;
  int local_27c;
  int local_278;
  int local_274;
  FScriptContainerElement local_270 [8];
  ForAnyElementType local_268;
  uint local_260;
  undefined1 local_258 [64];
  void *local_218;
  undefined4 local_210;
  undefined1 local_208 [64];
  void *local_1c8;
  undefined4 local_1c0;
  FMovieGraphFilenameResolveParams local_1b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  pTVar25 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
  local_2a8._0_8_ = (FScriptContainerElement *)0x0;
  local_2a8._8_8_ = 0;
  local_288 = (ForElementType<unsigned_int>)0x0;
  iVar11 = 0;
  local_280 = 0;
  local_274 = 0;
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260 = 0;
  local_438 = param_3;
  local_27c = 0x80;
  local_278 = -1;
  local_460 = &param_2->WeakPtr;
  local_448 = this;
  local_440 = param_1;
  ::FString::FString(&local_470,L"render_pass");
  if (local_274 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)local_2a8,(int *)(local_2a8 + 8),
                       (int *)(local_2a8 + 0xc));
    iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_2a8 + 0x10),1);
    FVar28 = (ForElementType<unsigned_int>)((longlong)local_2a8 + 0x10);
    if (local_288 != (ForElementType<unsigned_int>)0x0) {
      FVar28 = local_288;
    }
    uVar12 = iVar9 >> 0x1f & 0x1f;
    iVar9 = iVar9 + uVar12;
    puVar1 = (uint *)((longlong)FVar28 + (longlong)(iVar9 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << (((byte)iVar9 & 0x1f) - (char)uVar12 & 0x1f));
    iVar9 = local_278;
  }
  else {
    local_274 = local_274 + -1;
    iVar9 = *(int *)(local_2a8._0_8_ + (longlong)local_278 * 0x28 + 4);
    iVar8 = local_278;
    if (local_274 != 0) {
      *(undefined4 *)(local_2a8._0_8_ + (longlong)iVar9 * 0x28) = 0xffffffff;
    }
  }
  local_278 = iVar9;
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_2a8,&local_490,iVar8);
  pvVar4 = local_490.Pointer;
  if (local_490.Pointer != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
    pFVar5 = local_490.Pointer;
    pFVar5->InlineData[0] = '\0';
    pFVar5->InlineData[1] = '\0';
    pFVar5->InlineData[2] = '\0';
    pFVar5->InlineData[3] = '\0';
    pFVar5->InlineData[4] = '\0';
    pFVar5->InlineData[5] = '\0';
    pFVar5->InlineData[6] = '\0';
    pFVar5->InlineData[7] = '\0';
    *(FScriptContainerElement **)(local_490.Pointer)->InlineData =
         local_470.Data.AllocatorInstance.Data;
    local_470.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((local_490.Pointer)->InlineData + 8) = local_470.Data.ArrayNum;
    *(int *)((local_490.Pointer)->InlineData + 0xc) = local_470.Data.ArrayMax;
    local_470.Data.ArrayNum = 0;
    local_470.Data.ArrayMax = 0;
    ::FString::FString((FString *)&(local_490.Pointer)->SecondaryData,&param_1->RendererName);
    pTVar25 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar4 + 0x20);
    (pTVar25->AllocatorInstance).InlineData[0] = 0xff;
    (pTVar25->AllocatorInstance).InlineData[1] = 0xff;
    (pTVar25->AllocatorInstance).InlineData[2] = 0xff;
    (pTVar25->AllocatorInstance).InlineData[3] = 0xff;
    pTVar25 = pvVar4;
  }
  uVar12 = local_490.Index;
  iVar8 = *(int *)((pTVar25->AllocatorInstance).InlineData + 8);
  if (iVar8 == 0) {
    pwVar24 = L"";
  }
  else {
    pwVar24 = *(wchar_t **)(pTVar25->AllocatorInstance).InlineData;
    iVar11 = iVar8 + -1;
  }
  uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar24);
  if ((local_2a8._8_4_ - local_274 != 1) && (local_2a8._8_4_ != local_274)) {
    FVar19.Data = local_270;
    if (local_268.Data != (FScriptContainerElement *)0x0) {
      FVar19.Data = local_268.Data;
    }
    uVar21 = *(uint *)(FVar19.Data + (ulonglong)(local_260 - 1 & uVar10) * 4);
    pFVar22 = (FScriptContainerElement *)local_2a8._0_8_;
    while (uVar21 != 0xffffffff) {
      lVar3 = (longlong)(int)uVar21 * 0x28;
      iVar11 = *(int *)((pTVar25->AllocatorInstance).InlineData + 8);
      iVar8 = *(int *)(pFVar22 + lVar3 + 8);
      if (iVar8 == iVar11) {
        if (1 < iVar8) {
          iVar11 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)(pFVar22 + lVar3),
                              *(wchar_t **)(pTVar25->AllocatorInstance).InlineData);
          bVar29 = iVar11 == 0;
          pFVar22 = (FScriptContainerElement *)local_2a8._0_8_;
          goto LAB_14dd2e69e;
        }
LAB_14dd2e6b0:
        if (uVar21 != 0xffffffff) {
          if (*(void **)(pFVar22 + (longlong)(int)uVar21 * 0x28 + 0x10) != (void *)0x0) {
            FMemory::Free(*(void **)(pFVar22 + (longlong)(int)uVar21 * 0x28 + 0x10));
          }
          pvVar4 = *(void **)(pFVar22 + (longlong)(int)uVar21 * 0x28);
          if (pvVar4 != (void *)0x0) {
            FMemory::Free(pvVar4);
          }
          memmove(pFVar22 + (longlong)(int)uVar21 * 0x28,pTVar25,0x20);
          TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_2a8,uVar12,1);
          uVar12 = uVar21;
        }
        if (uVar21 != 0xffffffff) goto LAB_14dd2e9d0;
        break;
      }
      bVar29 = iVar8 + iVar11 == 1;
LAB_14dd2e69e:
      if (bVar29) goto LAB_14dd2e6b0;
      uVar21 = *(uint *)(pFVar22 + lVar3 + 0x20);
    }
  }
  uVar20 = 0;
  uVar26 = 1;
  uVar21 = local_2a8._8_4_ - local_274;
  if (3 < uVar21) {
    uVar23 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar26 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar21 < 1) || ((int)uVar26 <= (int)local_260)) {
    uVar10 = local_260 - 1 & uVar10;
    *(uint *)(pTVar25[1].AllocatorInstance.InlineData + 4) = uVar10;
    FVar19.Data = local_270;
    if (local_268.Data != (FScriptContainerElement *)0x0) {
      FVar19.Data = local_268.Data;
    }
    uVar20 = (longlong)(int)local_260 - 1U & (longlong)(int)uVar10;
    *(undefined4 *)pTVar25[1].AllocatorInstance.InlineData =
         *(undefined4 *)(FVar19.Data + uVar20 * 4);
    *(uint *)(FVar19.Data + uVar20 * 4) = uVar12;
    goto LAB_14dd2e9d0;
  }
  local_260 = uVar26;
  if (local_268.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_268,0,0,4);
  }
  if (uVar26 != 0) {
    uVar12 = uVar26;
    if (uVar26 < 2) {
      if (local_268.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_14dd2e7aa;
      }
    }
    else {
LAB_14dd2e7aa:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_268,0,uVar12,4);
    }
    if (0 < (int)uVar26) {
      uVar27 = (ulonglong)uVar26;
      uVar23 = uVar20;
      do {
        FVar19.Data = local_270;
        if (local_268.Data != (FScriptContainerElement *)0x0) {
          FVar19.Data = local_268.Data;
        }
        uVar13 = uVar23 & (longlong)(int)uVar26 - 1U;
        uVar23 = uVar23 + 1;
        *(undefined4 *)(FVar19.Data + uVar13 * 4) = 0xffffffff;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
  }
  if (local_260 != 0) {
    local_490.Pointer = local_2a8 + 0x10;
    local_490.Index = 0;
    local_490._4_4_ = 1;
    uStack_47c = 0;
    uStack_478 = 0;
    if (local_280 != 0) {
      FVar28 = (ForElementType<unsigned_int>)((longlong)local_2a8 + 0x10);
      if (local_288 != (ForElementType<unsigned_int>)0x0) {
        FVar28 = local_288;
      }
      uVar12 = *(uint *)FVar28;
      uVar23 = uVar20;
      while (uVar12 == 0) {
        uStack_478 = (int)uVar23 + 0x20;
        uVar23 = (ulonglong)uStack_478;
        iVar11 = (int)uVar20;
        local_490.Index = iVar11 + 1;
        uVar20 = (ulonglong)(uint)local_490.Index;
        if ((int)(((int)(local_280 - 1) >> 0x1f & 0x1fU) + (local_280 - 1)) >> 5 < local_490.Index)
        goto LAB_14dd2e8ce;
        uVar12 = ((uint *)((longlong)FVar28 + 4))[iVar11];
      }
      local_490._4_4_ = -uVar12 & uVar12;
      uVar20 = (ulonglong)(uint)local_490._4_4_ * 2 + 1;
      lVar3 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_47c = (uStack_478 - 1) + (int)lVar3;
      uVar20 = (ulonglong)uStack_47c;
      if ((int)local_280 < (int)uStack_47c) {
LAB_14dd2e8ce:
        uVar20 = (ulonglong)local_280;
        uStack_47c = local_280;
      }
    }
    local_480 = 0xffffffff;
    local_430 = (longlong *)local_2a8;
    local_428._padding_ = CONCAT44(local_490._4_4_,local_490.Index);
    local_428.CurrentBitIndex = uStack_47c;
    local_428.UnvisitedBitMask = 0xffffffff;
    local_428._28_4_ = uStack_474;
    local_428.BaseBitIndex = uStack_478;
    local_428.Array = local_490.Pointer;
    if ((int)uVar20 < (int)local_280) {
      do {
        iVar8 = (int)uVar20;
        puVar2 = (undefined8 *)(*local_430 + (longlong)iVar8 * 0x28);
        iVar11 = *(int *)(*local_430 + 8 + (longlong)iVar8 * 0x28);
        if (iVar11 == 0) {
          pwVar24 = L"";
          iVar11 = 0;
        }
        else {
          pwVar24 = (wchar_t *)*puVar2;
          iVar11 = iVar11 + -1;
        }
        uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar24);
        uVar12 = local_260 - 1 & uVar12;
        *(uint *)((longlong)puVar2 + 0x24) = uVar12;
        FVar19.Data = local_270;
        if (local_268.Data != (FScriptContainerElement *)0x0) {
          FVar19.Data = local_268.Data;
        }
        uVar20 = (longlong)(int)local_260 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(FVar19.Data + uVar20 * 4);
        *(int *)(FVar19.Data + uVar20 * 4) = iVar8;
        local_428.UnvisitedBitMask = local_428.UnvisitedBitMask & ~local_428._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_428);
        uVar20 = (ulonglong)(uint)local_428.CurrentBitIndex;
      } while (local_428.CurrentBitIndex < (local_428.Array)->NumBits);
    }
  }
LAB_14dd2e9d0:
  if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_470.Data.AllocatorInstance.Data);
  }
  ::FString::FString((FString *)&local_490,L"ext");
  this_01 = local_448;
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)local_2a8,(FString *)&local_490,&local_448->OutputFileExtension);
  if ((void *)CONCAT44(local_490._4_4_,local_490.Index) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_490._4_4_,local_490.Index));
  }
  this_00 = local_460;
  bVar29 = FWeakObjectPtr::IsValid(local_460);
  if (bVar29) {
    pUVar14 = FWeakObjectPtr::Get(this_00);
    ::FString::FString((FString *)&local_490,L"shot_name");
    TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
    Emplace<FString,FString_const_&>
              ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)local_2a8,(FString *)&local_490,(FString *)&pUVar14[1].field_0x8);
    if ((void *)CONCAT44(local_490._4_4_,local_490.Index) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_490._4_4_,local_490.Index));
    }
    pUVar14 = FWeakObjectPtr::Get(this_00);
    ::FString::FString((FString *)&local_490,L"camera_name");
    TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
    Emplace<FString,FString_const_&>
              ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)local_2a8,(FString *)&local_490,(FString *)&pUVar14[1].field_0x18);
    if ((void *)CONCAT44(local_490._4_4_,local_490.Index) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_490._4_4_,local_490.Index));
    }
  }
  FMovieGraphFilenameResolveParams::FMovieGraphFilenameResolveParams(&local_1b8);
  pUVar14 = FWeakObjectPtr::Get(&CachedPipeline.WeakPtr);
  local_1b8.InitializationTime.Ticks = *(long64 *)&pUVar14[0xb].field_0x20;
  pUVar14 = FWeakObjectPtr::Get(&CachedPipeline.WeakPtr);
  local_1b8.InitializationTimeOffset.Ticks = *(long64 *)&pUVar14[0xb].field_0x8;
  pUVar14 = FWeakObjectPtr::Get(&CachedPipeline.WeakPtr);
  local_1b8.Job.field0_0x0 =
       (TObjectPtr<UMoviePipelineExecutorJob>_u_0)
       *(TObjectPtr<UMoviePipelineExecutorJob>_u_0 *)&pUVar14[5].field_0x18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_1b8.Job.field0_0x0.DebugPtr != (TObjectPtr<UMoviePipelineExecutorJob>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1b8.Job.field0_0x0);
  }
  local_1b8.Shot.field0_0x0 =
       (TObjectPtr<UMoviePipelineExecutorShot>_u_0)FWeakObjectPtr::Get(this_00);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_1b8.Shot.field0_0x0.DebugPtr != (TObjectPtr<UMoviePipelineExecutorShot>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1b8.Shot.field0_0x0);
  }
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&local_1b8.FileNameFormatOverrides,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)local_2a8);
  ::FString::operator=(&local_1b8.FileNameOverride,&this_01->FileNameFormat);
  TVar15 = GetEvaluatedConfig(this_01);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)TVar15.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)TVar15.field0_0x0);
  }
  pFVar6 = local_440;
  local_1b8.EvaluatedConfig.field0_0x0.DebugPtr =
       *(TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 *)TVar15.field0_0x0;
  local_1b8.RenderDataIdentifier.RootBranchName = local_440->RootBranchName;
  ::FString::operator=(&local_1b8.RenderDataIdentifier.LayerName,&local_440->LayerName);
  ::FString::operator=(&local_1b8.RenderDataIdentifier.RendererName,&pFVar6->RendererName);
  ::FString::operator=(&local_1b8.RenderDataIdentifier.SubResourceName,&pFVar6->SubResourceName);
  ::FString::operator=(&local_1b8.RenderDataIdentifier.CameraName,&pFVar6->CameraName);
  bVar29 = FWeakObjectPtr::IsValid(this_00);
  if (bVar29) {
    pUVar14 = FWeakObjectPtr::Get(this_00);
    local_1b8.Version = *(int *)&pUVar14[8].field_0x24;
  }
  else {
    pFVar16 = FMovieGraphFilenameResolveParams::FMovieGraphFilenameResolveParams
                        (&local_408,&local_1b8);
    local_1b8.Version = UMovieGraphBlueprintLibrary::ResolveVersionNumber(pFVar16,true);
  }
  local_258._44_4_ = 0x80;
  local_258._0_8_ = 0;
  local_258._8_8_ = 0;
  local_258._32_8_ = 0;
  local_258._40_4_ = 0;
  local_258._52_4_ = 0;
  local_218 = (void *)0x0;
  local_210 = 0;
  local_208._0_8_ = 0;
  local_208._8_8_ = 0;
  local_208._32_8_ = 0;
  local_208._40_4_ = 0;
  local_208._52_4_ = 0;
  local_1c8 = (void *)0x0;
  local_1c0 = 0;
  local_258._48_4_ = 0xffffffff;
  local_208._44_4_ = 0x80;
  local_208._48_4_ = 0xffffffff;
  UMovieGraphBlueprintLibrary::ResolveFilenameFormatArguments
            (__return_storage_ptr__,local_438,&local_1b8,(FMovieGraphResolveArgs *)local_258);
  bVar29 = FPaths::IsRelative(__return_storage_ptr__);
  if (bVar29) {
    pFVar17 = FPaths::ConvertRelativePathToFull((FString *)&local_490,__return_storage_ptr__);
    ::FString::operator=(__return_storage_ptr__,pFVar17);
    if ((void *)CONCAT44(local_490._4_4_,local_490.Index) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_490._4_4_,local_490.Index));
    }
  }
  FPaths::NormalizeFilename(__return_storage_ptr__);
  FPaths::CollapseRelativeDirectories(__return_storage_ptr__,false);
  FPaths::GetPath(&local_458,__return_storage_ptr__);
  this_02 = FPlatformFileManager::Get();
  pIVar18 = FPlatformFileManager::GetPlatformFile(this_02);
  cVar7 = (**(code **)((longlong)*pIVar18 + 0x200))(pIVar18);
  if ((cVar7 == '\0') && (1 < (byte)LogMovieRenderPipelineIO._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO);
  }
  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  local_1c0 = 0;
  if (local_1c8 != (void *)0x0) {
    FMemory::Free(local_1c8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_208);
  local_210 = 0;
  if (local_218 != (void *)0x0) {
    FMemory::Free(local_218);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_258);
  FMovieGraphFilenameResolveParams::~FMovieGraphFilenameResolveParams(&local_1b8);
  local_260 = 0;
  if (local_268.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)local_2a8,0);
  if (local_288 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_288);
  }
  if ((FScriptContainerElement *)local_2a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2a8._0_8_);
  }
  return __return_storage_ptr__;
}

// HasFinishedExporting @ 14dd31e20

bool __thiscall
UMovieGraphCommandLineEncoderNode::HasFinishedExporting(UMovieGraphCommandLineEncoderNode *this)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  OnTick((UMovieGraphCommandLineEncoderNode *)&this[-1]._padding_);
  bVar1 = ActiveEncodeJobs.ArrayNum == 0;
  if (ActiveEncodeJobs.ArrayNum == 0) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    PrimaryJobEvaluatedGraph.field0_0x0 =
         (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0)(FObjectPtr)0x0;
    CachedPipeline.WeakPtr = local_res8;
  }
  return bVar1;
}

// LaunchEncoder @ 14dd33e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieGraphCommandLineEncoderNode::LaunchEncoder
          (UMovieGraphCommandLineEncoderNode *this,FEncoderParams *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined1 *puVar7;
  code *pcVar8;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar9;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  UObject *pUVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined1 uVar20;
  int iVar21;
  undefined1 *puVar22;
  uint *puVar23;
  undefined1 *puVar24;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined8 in_stack_fffffffffffffeb0;
  uint in_stack_fffffffffffffec4;
  TArray<FString,TSizedDefaultAllocator<32>_> local_118;
  TArray<FString,TSizedDefaultAllocator<32>_> local_108;
  void *local_f8;
  longlong local_f0;
  void *local_e8;
  FString local_e0;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_d0;
  FString local_c8;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  if (ActiveEncodeJobs.ArrayMax < 0) {
    DestructItems<UMovieGraphCommandLineEncoderNode::FActiveJob,int>
              ((FActiveJob *)ActiveEncodeJobs.AllocatorInstance.Data,ActiveEncodeJobs.ArrayNum);
    ActiveEncodeJobs.ArrayNum = 0;
    if (ActiveEncodeJobs.ArrayMax != 0) {
      in_stack_fffffffffffffeb0 = 0x154d9b18c;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&ActiveEncodeJobs.AllocatorInstance,0,&ActiveEncodeJobs.ArrayMax);
    }
  }
  else {
    DestructItems<UMovieGraphCommandLineEncoderNode::FActiveJob,int>
              ((FActiveJob *)ActiveEncodeJobs.AllocatorInstance.Data,ActiveEncodeJobs.ArrayNum);
    ActiveEncodeJobs.ArrayNum = 0;
  }
  iVar17 = 0;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  GenerateTemporaryEncoderInputFiles(this,param_1,&local_108,&local_118);
  BuildEncoderCommand(this,&local_e0,param_1,&local_108,&local_118);
  if (4 < (byte)LogMovieRenderPipelineIO._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO);
  }
  local_e8 = (void *)0x0;
  local_f8 = (void *)0x0;
  bVar11 = FWindowsPlatformProcess::CreatePipe(&local_e8,&local_f8,false);
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("FPlatformProcess::CreatePipe(PipeRead, PipeWrite)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\Nodes\\MovieGraphCommandLineEncoderNode.cpp"
                          ,0x24f,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  ::FString::FormatImpl(&local_c8,L"{Executable}",&param_1->NamedArguments);
  uVar20 = 0x6c;
  if (local_e0.Data.ArrayNum != 0) {
    uVar20 = (char)local_e0.Data.AllocatorInstance.Data;
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar16.Data = local_c8.Data.AllocatorInstance.Data;
  }
  iVar21 = 0;
  FWindowsPlatformProcess::CreateProc
            ((wchar_t *)&local_f0,(wchar_t *)FVar16.Data,(bool)uVar20,false,true,
             (uint *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffeb0 >> 8),1),0,
             (wchar_t *)((ulonglong)in_stack_fffffffffffffec4 << 0x20),(void *)0x0,local_f8);
  if (local_f0 == 0) {
    if (1 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    pUVar14 = FWeakObjectPtr::Get(&CachedPipeline.WeakPtr);
    (**(code **)(*(longlong *)pUVar14 + 0x2b0))(pUVar14,1);
  }
  else {
    if (ActiveEncodeJobs.ArrayNum == ActiveEncodeJobs.ArrayMax) {
      ActiveEncodeJobs.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x828,&ActiveEncodeJobs.AllocatorInstance,&ActiveEncodeJobs.ArrayMax);
    }
    uVar13 = 1;
    pFVar1 = ActiveEncodeJobs.AllocatorInstance.Data + (longlong)ActiveEncodeJobs.ArrayNum * 0x28;
    ActiveEncodeJobs.ArrayNum = ActiveEncodeJobs.ArrayNum + 1;
    DefaultConstructItems<UMovieGraphCommandLineEncoderNode::FActiveJob,int>(pFVar1,1);
    *(longlong *)pFVar1 = local_f0;
    *(void **)(pFVar1 + 8) = local_e8;
    *(void **)(pFVar1 + 0x10) = local_f8;
    if (this->bRetainInputTextFiles == false) {
      pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(pFVar1 + 0x18);
      if ((pTVar4 == &local_108) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar6 = local_108.ArrayNum;
      if (local_108.ArrayNum != 0) {
        iVar12 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,local_108.ArrayNum,(ForAnyElementType *)pTVar4,
                            (int *)(pFVar1 + 0x20),(int *)(pFVar1 + 0x24));
        ConstructItems<FString,FString,int>
                  ((pTVar4->AllocatorInstance).Data + (longlong)iVar12 * 0x10,
                   (FString *)local_108.AllocatorInstance.Data,iVar6);
      }
      if ((pTVar4 == &local_118) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar6 = local_118.ArrayNum;
      if (local_118.ArrayNum != 0) {
        iVar12 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,local_118.ArrayNum,(ForAnyElementType *)pTVar4,
                            (int *)(pFVar1 + 0x20),(int *)(pFVar1 + 0x24));
        ConstructItems<FString,FString,int>
                  ((pTVar4->AllocatorInstance).Data + (longlong)iVar12 * 0x10,
                   (FString *)local_118.AllocatorInstance.Data,iVar6);
      }
    }
    if (this->bDeleteSourceFiles != false) {
      iVar6 = *(int *)&(param_1->FilesByExtensionType).field_0x28;
      local_a8 = &(param_1->FilesByExtensionType).field_0x10;
      local_d0 = &param_1->FilesByExtensionType;
      iStack_9c = iVar21;
      iStack_b0 = iVar17;
      if (iVar6 != 0) {
        puVar23 = *(uint **)&(param_1->FilesByExtensionType).field_0x20;
        if (puVar23 == (uint *)0x0) {
          puVar23 = (uint *)local_a8;
        }
        uVar19 = *puVar23;
        iVar21 = iVar17;
        while (uVar19 == 0) {
          lVar15 = (longlong)iStack_b0;
          iVar21 = iVar21 + 0x20;
          iStack_b0 = iStack_b0 + 1;
          if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_14dd34215;
          uVar19 = puVar23[lVar15 + 1];
        }
        uVar13 = -uVar19 & uVar19;
        uVar3 = (ulonglong)uVar13 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_res18 = (int)lVar15;
        iStack_9c = iVar21 + -1 + local_res18;
        if (iVar6 < iStack_9c) {
LAB_14dd34215:
          iStack_9c = iVar6;
        }
      }
      puVar24 = &(param_1->FilesByExtensionType).field_0x10;
      uVar19 = *(uint *)&(param_1->FilesByExtensionType).field_0x28;
      uStack_94 = local_3c;
      iStack_90 = *(int *)&(param_1->FilesByExtensionType).field_0x8 -
                  *(int *)&(param_1->FilesByExtensionType).field_0x34;
      uVar18 = uVar19 & 0xffffffe0;
      uStack_a0 = 0xffffffff;
      TStack_80._padding_ = CONCAT44(uVar13,iStack_b0);
      TStack_80.CurrentBitIndex = iStack_9c;
      TStack_80.UnvisitedBitMask = 0xffffffff;
      iVar17 = (int)uVar19 >> 5;
      TStack_80._28_4_ = local_3c;
      TStack_80.BaseBitIndex = iVar21;
      uStack_60 = CONCAT44(uStack_8c,iStack_90);
      local_b8 = local_d0;
      uStack_ac = uVar13;
      local_98 = iVar21;
      local_88 = local_d0;
      TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a8;
      if (((int)uVar19 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar9 = local_d0;
      uVar13 = *(uint *)&(param_1->FilesByExtensionType).field_0x28;
      if (uVar19 != uVar13) {
        puVar7 = *(undefined1 **)&(param_1->FilesByExtensionType).field_0x20;
        puVar22 = puVar24;
        if (puVar7 != (undefined1 *)0x0) {
          puVar22 = puVar7;
        }
        uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar17 * 4);
        while (uVar19 == 0) {
          lVar15 = (longlong)iVar17;
          uVar18 = uVar18 + 0x20;
          iVar17 = iVar17 + 1;
          uVar19 = uVar13;
          if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_14dd34320;
          uVar19 = *(uint *)(puVar22 + lVar15 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_res20 = (int)lVar15;
        uVar19 = local_res20 + -1 + uVar18;
        if ((int)uVar13 < (int)uVar19) {
          uVar19 = uVar13;
        }
      }
LAB_14dd34320:
      while( true ) {
        pTVar10 = local_88;
        if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
          local_res10[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_80.CurrentBitIndex == uVar19) &&
            (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar24)) &&
           (pTVar10 == pTVar9)) break;
        pFVar5 = pFVar1 + 0x18;
        pFVar2 = (FScriptContainerElement *)
                 (*(longlong *)pTVar10 + 0x10 + (longlong)TStack_80.CurrentBitIndex * 0x28);
        if ((pFVar5 == pFVar2) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar17 = *(int *)(pFVar2 + 8);
        if (iVar17 != 0) {
          iVar21 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,iVar17,(ForAnyElementType *)pFVar5,(int *)(pFVar1 + 0x20),
                              (int *)(pFVar1 + 0x24));
                    /* WARNING: Load size is inaccurate */
          ConstructItems<FString,FString,int>
                    (*pFVar5 + (longlong)iVar21 * 0x10,
                     (FString *)*(FScriptContainerElement **)pFVar2,iVar17);
        }
        TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
      }
    }
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  return;
}

// NeedsPerShotFlushing @ 14dd37100

bool __thiscall
UMovieGraphCommandLineEncoderNode::NeedsPerShotFlushing(UMovieGraphCommandLineEncoderNode *this)

{
  int iVar1;
  UMovieGraphGlobalOutputSettingNode *pUVar2;
  bool bVar3;
  FString local_18;
  
  pUVar2 = GetSettingOnBranch<UMovieGraphGlobalOutputSettingNode>(this,true,true);
  ::operator/(&local_18,&(pUVar2->OutputDirectory).Path,&this->FileNameFormat);
  bVar3 = false;
  iVar1 = ::FString::Find(&local_18,L"{shot_name}",0xb,IgnoreCase,FromStart,-1);
  if (iVar1 == -1) {
    iVar1 = ::FString::Find(&local_18,L"{camera_name}",0xd,IgnoreCase,FromStart,-1);
    if (iVar1 == -1) goto LAB_14dd37189;
  }
  bVar3 = true;
LAB_14dd37189:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// OnTick @ 14dd39dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieGraphCommandLineEncoderNode::OnTick(UMovieGraphCommandLineEncoderNode *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UObject *pUVar7;
  IFileManager *pIVar8;
  wchar_t *pwVar9;
  FProcHandle FVar10;
  FScriptContainerElement *_Dst;
  uint uVar11;
  longlong lVar12;
  FProcHandle *pFVar13;
  ulonglong uVar14;
  FProcHandle FVar15;
  undefined1 local_res10 [8];
  longlong local_res18;
  ulonglong in_stack_ffffffffffffffa8;
  FString local_48;
  
  uVar11 = ActiveEncodeJobs.ArrayNum - 1;
  if (-1 < (int)uVar11) {
    uVar14 = (ulonglong)(int)uVar11;
    lVar12 = uVar14 * 0x28;
    do {
      uVar5 = 0;
      if ((int)uVar11 < ActiveEncodeJobs.ArrayNum) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      local_res18 = lVar12;
      if ((uVar5 == 0) &&
         (in_stack_ffffffffffffffa8 = uVar14,
         bVar2 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar13 = (FProcHandle *)(ActiveEncodeJobs.AllocatorInstance.Data + lVar12);
      FWindowsPlatformProcess::ReadPipe(&local_48,(void *)pFVar13[1]);
      uVar5 = local_48.Data.ArrayNum - 1;
      if (local_48.Data.ArrayNum == 0) {
        uVar5 = 0;
      }
      if ((0 < (int)uVar5) && (1 < (byte)LogMovieRenderPipeline._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      bVar2 = false;
      if (this->bSkipEncodeOnRenderCanceled != false) {
        pUVar7 = FWeakObjectPtr::Get(&CachedPipeline.WeakPtr);
        cVar3 = (**(code **)(*(longlong *)pUVar7 + 0x2c0))(pUVar7);
        if (cVar3 != '\0') {
          bVar2 = true;
          FWindowsPlatformProcess::TerminateProc(pFVar13,true);
          FWindowsPlatformProcess::WaitForProc(pFVar13);
        }
      }
      bVar4 = FWindowsPlatformProcess::IsProcRunning(pFVar13);
      if ((!bVar4) || (lVar12 = local_res18, bVar2)) {
        FWindowsPlatformProcess::ClosePipe((void *)pFVar13[1],(void *)pFVar13[2]);
        FWindowsPlatformProcess::CloseProc(pFVar13);
        pIVar8 = IFileManager::Get();
        iVar6 = *(int *)(pFVar13 + 4);
        FVar10 = pFVar13[3];
        FVar15 = (FProcHandle)((longlong)iVar6 * 0x10 + (longlong)FVar10);
        while( true ) {
          if (*(int *)(pFVar13 + 4) != iVar6) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res10);
          }
          if (FVar10 == FVar15) break;
          if (*(int *)((longlong)FVar10 + 8) == 0) {
            pwVar9 = L"";
          }
          else {
            pwVar9 = *(wchar_t **)FVar10;
          }
          in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffffffffffff00;
          (**(code **)((longlong)*pIVar8 + 0x38))(pIVar8,pwVar9,0,0,in_stack_ffffffffffffffa8);
          FVar10 = (FProcHandle)((longlong)FVar10 + 0x10);
        }
        uVar5 = 0;
        if ((int)uVar11 < ActiveEncodeJobs.ArrayNum) {
          uVar5 = ~uVar11 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar12 = local_res18;
        _Dst = ActiveEncodeJobs.AllocatorInstance.Data + local_res18;
        DestructItems<FString,int>(*(FString **)(_Dst + 0x18),*(int *)(_Dst + 0x20));
        if (*(void **)(_Dst + 0x18) != (void *)0x0) {
          FMemory::Free(*(void **)(_Dst + 0x18));
        }
        iVar6 = (ActiveEncodeJobs.ArrayNum - uVar11) + -1;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + 0x28,(longlong)iVar6 * 0x28);
        }
        ActiveEncodeJobs.ArrayNum = ActiveEncodeJobs.ArrayNum + -1;
        in_stack_ffffffffffffffa8 = 0x154d9b18c;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,&ActiveEncodeJobs.AllocatorInstance,ActiveEncodeJobs.ArrayNum,
                   &ActiveEncodeJobs.ArrayMax);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      lVar12 = lVar12 + -0x28;
      uVar14 = uVar14 - 1;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  return;
}

// StartEncodingProcess @ 14dd42100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieGraphCommandLineEncoderNode::StartEncodingProcess
          (UMovieGraphCommandLineEncoderNode *this,
          TArray<FMovieGraphRenderOutputData,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int *piVar1;
  ulonglong uVar2;
  code *pcVar3;
  FEncoderParams *pFVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  UMovieGraphGlobalOutputSettingNode *pUVar9;
  FString *pFVar10;
  byte bVar11;
  longlong lVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  uint uVar19;
  FText *pFVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  uint *puVar23;
  FMovieGraphRenderDataIdentifier *pFVar24;
  TArray<FMovieGraphRenderOutputData,TSizedDefaultAllocator<32>_> *pTVar25;
  undefined1 auStackY_398 [32];
  undefined1 local_348;
  char local_347;
  undefined1 local_346;
  undefined1 local_345 [5];
  FString local_340;
  TArray<FMovieGraphRenderOutputData,TSizedDefaultAllocator<32>_> *local_330;
  TArray<FText,TSizedDefaultAllocator<32>_> local_328;
  FMovieGraphRenderDataIdentifier local_318;
  int local_2c8;
  uint uStack_2c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2c0;
  uint local_2b8;
  uint uStack_2b4;
  uint uStack_2b0;
  undefined4 uStack_2ac;
  int local_2a8;
  int local_2a4;
  FString local_2a0;
  FMovieGraphRenderDataIdentifier local_290;
  FString local_248;
  longlong *local_238;
  uint uStack_230;
  uint uStack_22c;
  TBitArray<FDefaultBitArrayAllocator> *local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  uint local_218;
  uint uStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  int local_208;
  int local_204;
  TPairInitializer<FString_&&,FStringFormatArg_&&> local_200;
  FMovieGraphRenderDataIdentifier *local_1f0;
  UMovieGraphCommandLineEncoderNode *local_1e8;
  FEncoderParams *local_1e0;
  longlong *local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  undefined8 uStack_1b0;
  FString *local_1a8;
  FStringFormatArg *local_1a0;
  FString local_198;
  longlong *local_188;
  undefined8 uStack_180;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  int local_160;
  undefined4 uStack_15c;
  FString local_158;
  FString local_148;
  longlong *local_138;
  undefined8 uStack_130;
  TBitArray<FDefaultBitArrayAllocator> *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  FStringFormatArg local_108;
  FMovieGraphRenderDataIdentifier local_e8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_347 = param_2;
  local_330 = param_1;
  local_1e8 = this;
  if ((param_2) && (bVar6 = NeedsPerShotFlushing(this), !bVar6)) {
    return;
  }
  local_328.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.ArrayNum = 0;
  local_328.ArrayMax = 0;
  bVar6 = AreSettingsValid(this,&local_328);
  uVar22 = 0;
  if (bVar6) {
    if (param_1->ArrayNum != 0) {
      pUVar9 = GetSettingOnBranch<UMovieGraphGlobalOutputSettingNode>(this,true,true);
      ::operator/(&local_248,&(pUVar9->OutputDirectory).Path,&this->FileNameFormat);
      UE::MoviePipeline::ValidateOutputFormatString(&local_248,false,false,false);
      UE::MoviePipeline::RemoveFrameNumberFormatStrings(&local_248,true);
      GenerateRenderLayerEncoderParams
                (this,(TMap<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams,0>_>
                       *)local_98,param_1,param_2);
      uVar13 = local_70;
      local_218 = 0;
      uStack_22c = 1;
      uStack_21c = local_218;
      if (local_70 != 0) {
        puVar23 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar23 = local_78;
        }
        uStack_22c = *puVar23;
        local_218 = 0;
        uVar22 = 0;
        while (uStack_22c == 0) {
          lVar12 = (longlong)(int)uVar22;
          local_218 = local_218 + 0x20;
          uVar22 = uVar22 + 1;
          uStack_22c = 1;
          uStack_21c = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar22)
          goto LAB_14dd42323;
          uStack_22c = puVar23[lVar12 + 1];
        }
        uStack_22c = -uStack_22c & uStack_22c;
        uVar2 = (ulonglong)uStack_22c * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_208 = (int)lVar12;
        uStack_21c = local_208 + -1 + local_218;
        if ((int)local_70 < (int)uStack_21c) {
          uStack_21c = local_70;
        }
      }
LAB_14dd42323:
      local_238 = (longlong *)local_98;
      local_228 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      iStack_210 = local_98._8_4_ - local_64;
      bVar11 = (byte)local_70 & 0x1f;
      uStack_2c4 = 1 << bVar11;
      uVar19 = local_70 & 0xffffffe0;
      iVar15 = (int)local_70 >> 5;
      pTStack_2c0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      uVar18 = -1 << bVar11;
      uStack_220 = 0xffffffff;
      uStack_2b4 = local_70;
      TStack_1d0._padding_ = CONCAT44(uStack_22c,uVar22);
      TStack_1d0.CurrentBitIndex = uStack_21c;
      TStack_1d0.UnvisitedBitMask = 0xffffffff;
      TStack_1d0._28_4_ = uStack_21c;
      TStack_1d0.BaseBitIndex = local_218;
      uStack_1b0 = CONCAT44(uStack_20c,iStack_210);
      local_2c8 = iVar15;
      local_2b8 = uVar18;
      uStack_2b0 = uVar19;
      uStack_230 = uVar22;
      uStack_214 = uStack_21c;
      local_1d8 = local_238;
      TStack_1d0.Array = local_228;
      if (((int)local_70 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar13 != local_70) {
        puVar23 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar23 = local_78;
        }
        uVar18 = uVar18 & puVar23[iVar15];
        while (uVar18 == 0) {
          uStack_2b0 = uVar19 + 0x20;
          local_2c8 = iVar15 + 1;
          uStack_2b4 = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < local_2c8)
          goto LAB_14dd42491;
          uVar18 = puVar23[(longlong)iVar15 + 1];
          local_2b8 = 0xffffffff;
          uVar19 = uStack_2b0;
          iVar15 = local_2c8;
        }
        uStack_2c4 = -uVar18 & uVar18;
        uVar2 = (ulonglong)uStack_2c4 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_204 = (int)lVar12;
        uStack_2b4 = local_204 + -1 + uVar19;
        if ((int)local_70 < (int)uStack_2b4) {
          uStack_2b4 = local_70;
        }
      }
LAB_14dd42491:
      uStack_180 = CONCAT44(uStack_2c4,local_2c8);
      local_188 = (longlong *)local_98;
      uStack_170 = CONCAT44(uStack_2b4,local_2b8);
      uStack_168 = CONCAT44(uStack_2ac,uStack_2b0);
      local_160 = local_98._8_4_ - local_64;
      pTStack_178 = pTStack_2c0;
      uStack_110 = CONCAT44(uStack_15c,local_160);
      local_128 = pTStack_2c0;
      local_138 = local_188;
      uStack_130 = uStack_180;
      uStack_120 = uStack_170;
      local_118 = uStack_168;
      while( true ) {
        plVar5 = local_1d8;
        if ((int)local_1d8[1] - *(int *)((longlong)local_1d8 + 0x34) != (int)uStack_1b0) {
          local_348 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_348);
        }
        if (((TStack_1d0.CurrentBitIndex == uStack_120._4_4_) && (TStack_1d0.Array == local_128)) &&
           (plVar5 == local_138)) break;
        pFVar24 = (FMovieGraphRenderDataIdentifier *)
                  ((longlong)TStack_1d0.CurrentBitIndex * 0x140 + *plVar5);
        local_1e0 = (FEncoderParams *)(pFVar24 + 1);
        piVar1 = &pFVar24[3].LayerName.Data.ArrayNum;
        GetResolvedOutputFilename
                  (this,&local_340,pFVar24,
                   (TWeakObjectPtr<UMoviePipelineExecutorShot,FWeakObjectPtr> *)piVar1,&local_248);
        local_318.RootBranchName = UMovieGraphNode::GlobalsPinName;
        local_318.LayerName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_318.LayerName.Data.ArrayNum = 0;
        local_318.LayerName.Data.ArrayMax = 0;
        local_318.RendererName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_318.RendererName.Data.ArrayNum = 0;
        local_318.RendererName.Data.ArrayMax = 0;
        local_318.SubResourceName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_318.SubResourceName.Data.ArrayNum = 0;
        local_318.SubResourceName.Data.ArrayMax = 0;
        local_318.CameraName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_318.CameraName.Data.ArrayNum = 0;
        local_318.CameraName.Data.ArrayMax = 0;
        pFVar10 = ::FName::ToString(&UMovieGraphNode::GlobalsPinName,&local_158);
        if (&local_318.LayerName != pFVar10) {
          if (local_318.LayerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_318.LayerName.Data.AllocatorInstance.Data);
          }
          local_318.LayerName.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
          (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_318.LayerName.Data.ArrayNum = (pFVar10->Data).ArrayNum;
          local_318.LayerName.Data.ArrayMax = (pFVar10->Data).ArrayMax;
          (pFVar10->Data).ArrayNum = 0;
          (pFVar10->Data).ArrayMax = 0;
        }
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        pFVar10 = ::FString::FString(&local_148,L"CommandLineEncoder");
        if (&local_318.RendererName != pFVar10) {
          if (local_318.RendererName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_318.RendererName.Data.AllocatorInstance.Data);
          }
          local_318.RendererName.Data.AllocatorInstance.Data =
               (pFVar10->Data).AllocatorInstance.Data;
          (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_318.RendererName.Data.ArrayNum = (pFVar10->Data).ArrayNum;
          local_318.RendererName.Data.ArrayMax = (pFVar10->Data).ArrayMax;
          (pFVar10->Data).ArrayNum = 0;
          (pFVar10->Data).ArrayMax = 0;
        }
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        pTVar25 = local_330;
        if (local_347 == '\0') {
          uVar13 = local_330->ArrayNum - 1;
          uVar22 = 0;
          if ((int)uVar13 < local_330->ArrayNum) {
            uVar22 = ~uVar13 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar16.Data = local_318.LayerName.Data.AllocatorInstance.Data;
          iVar15 = pTVar25->ArrayNum;
          lVar12 = (longlong)local_318.LayerName.Data.ArrayNum;
          pFVar17 = (pTVar25->AllocatorInstance).Data;
          local_290.RootBranchName = local_318.RootBranchName;
          local_290.LayerName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_290.LayerName.Data.ArrayNum = local_318.LayerName.Data.ArrayNum;
          if (local_318.LayerName.Data.ArrayNum == 0) {
            local_290.LayerName.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_318.LayerName.Data.ArrayNum,0,
                       (ForAnyElementType *)&local_290.LayerName,local_318.LayerName.Data.ArrayNum,
                       &local_290.LayerName.Data.ArrayMax);
            memcpy(local_290.LayerName.Data.AllocatorInstance.Data,FVar16.Data,lVar12 * 2);
          }
          FVar16.Data = local_318.RendererName.Data.AllocatorInstance.Data;
          lVar12 = (longlong)local_318.RendererName.Data.ArrayNum;
          local_290.RendererName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_290.RendererName.Data.ArrayNum = local_318.RendererName.Data.ArrayNum;
          if (local_318.RendererName.Data.ArrayNum == 0) {
            local_290.RendererName.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_318.RendererName.Data.ArrayNum,0,
                       (ForAnyElementType *)&local_290.RendererName,
                       local_318.RendererName.Data.ArrayNum,&local_290.RendererName.Data.ArrayMax);
            memcpy(local_290.RendererName.Data.AllocatorInstance.Data,FVar16.Data,lVar12 * 2);
          }
          FVar16.Data = local_318.SubResourceName.Data.AllocatorInstance.Data;
          lVar12 = (longlong)local_318.SubResourceName.Data.ArrayNum;
          local_290.SubResourceName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_290.SubResourceName.Data.ArrayNum = local_318.SubResourceName.Data.ArrayNum;
          if (local_318.SubResourceName.Data.ArrayNum == 0) {
            local_290.SubResourceName.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_318.SubResourceName.Data.ArrayNum,0,
                       (ForAnyElementType *)&local_290.SubResourceName,
                       local_318.SubResourceName.Data.ArrayNum,
                       &local_290.SubResourceName.Data.ArrayMax);
            memcpy(local_290.SubResourceName.Data.AllocatorInstance.Data,FVar16.Data,lVar12 * 2);
          }
          FVar16.Data = local_318.CameraName.Data.AllocatorInstance.Data;
          lVar12 = (longlong)local_318.CameraName.Data.ArrayNum;
          local_290.CameraName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_290.CameraName.Data.ArrayNum = local_318.CameraName.Data.ArrayNum;
          if (local_318.CameraName.Data.ArrayNum == 0) {
            local_290.CameraName.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_318.CameraName.Data.ArrayNum,0,
                       (ForAnyElementType *)&local_290.CameraName,local_318.CameraName.Data.ArrayNum
                       ,&local_290.CameraName.Data.ArrayMax);
            memcpy(local_290.CameraName.Data.AllocatorInstance.Data,FVar16.Data,lVar12 * 2);
          }
          uVar22 = ::GetTypeHash(&local_290);
          if (*(int *)(pFVar17 + (longlong)iVar15 * 0x58 + -0x48) !=
              *(int *)(pFVar17 + (longlong)iVar15 * 0x58 + -0x1c)) {
            pFVar14 = pFVar17 + (longlong)iVar15 * 0x58 + -0x18;
            if (*(FScriptContainerElement **)(pFVar17 + (longlong)iVar15 * 0x58 + -0x10) !=
                (FScriptContainerElement *)0x0) {
              pFVar14 = *(FScriptContainerElement **)(pFVar17 + (longlong)iVar15 * 0x58 + -0x10);
            }
            iVar7 = *(int *)(pFVar14 +
                            (ulonglong)
                            (*(int *)(pFVar17 + (longlong)iVar15 * 0x58 + -8) - 1U & uVar22) * 4);
            while (iVar7 != -1) {
              lVar12 = (longlong)iVar7 * 200;
              bVar6 = FMovieGraphRenderDataIdentifier::operator==
                                ((FMovieGraphRenderDataIdentifier *)
                                 (*(longlong *)(pFVar17 + (longlong)iVar15 * 0x58 + -0x50) + lVar12)
                                 ,&local_318);
              if (bVar6) {
                lVar12 = *(longlong *)(pFVar17 + (longlong)iVar15 * 0x58 + -0x50) + lVar12;
                if (lVar12 != 0) goto LAB_14dd428ee;
                break;
              }
              iVar7 = *(int *)(*(longlong *)(pFVar17 + (longlong)iVar15 * 0x58 + -0x50) + 0xc0 +
                              lVar12);
            }
          }
          local_200.Value = (FStringFormatArg *)&local_318;
          TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&>_>
                    ((TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
                      *)(pFVar17 + (longlong)iVar15 * 0x58 + -0x50),(uint)&local_2a8,
                     (TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&> *)(ulonglong)uVar22,
                     (bool *)&local_200.Value);
          lVar12 = (longlong)local_2a8 * 200 +
                   *(longlong *)(pFVar17 + (longlong)iVar15 * 0x58 + -0x50);
LAB_14dd428ee:
          if (((*(FString **)(lVar12 + 0x48) <= &local_340) &&
              (&local_340 < *(FString **)(lVar12 + 0x48) + *(int *)(lVar12 + 0x54))) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar15 = *(int *)(lVar12 + 0x50);
          if (iVar15 == *(int *)(lVar12 + 0x54)) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)(lVar12 + 0x48),(int *)(lVar12 + 0x54));
          }
          FVar16.Data = local_340.Data.AllocatorInstance.Data;
          *(int *)(lVar12 + 0x50) = iVar15 + 1;
          pFVar17 = ((ForAnyElementType *)(lVar12 + 0x48))->Data + (longlong)iVar15 * 0x10;
          *(undefined8 *)pFVar17 = 0;
          iVar15 = local_340.Data.ArrayNum;
          *(int *)(pFVar17 + 8) = iVar15;
          if (iVar15 == 0) {
            *(undefined4 *)(pFVar17 + 0xc) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar15,0,(ForAnyElementType *)pFVar17,iVar15,(int *)(pFVar17 + 0xc));
            memcpy(*(void **)pFVar17,FVar16.Data,(longlong)iVar15 * 2);
          }
        }
        else {
          iVar15 = local_330->ArrayNum;
          pFVar17 = (local_330->AllocatorInstance).Data;
          pFVar14 = pFVar17 + (longlong)iVar15 * 0x58;
          while( true ) {
            if (pTVar25->ArrayNum != iVar15) {
              local_346 = 0;
              `TCheckedPointerIterator<FMovieGraphRenderOutputData,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_346);
            }
            this = local_1e8;
            if (pFVar17 == pFVar14) break;
            bVar6 = TWeakObjectPtr<UMoviePipelineExecutorShot,FWeakObjectPtr>::
                    UEOpEquals<UMoviePipelineExecutorShot,bool>
                              ((TWeakObjectPtr<UMoviePipelineExecutorShot,FWeakObjectPtr> *)pFVar17,
                               (TWeakObjectPtr<UMoviePipelineExecutorShot,FWeakObjectPtr> *)piVar1);
            if (bVar6) {
              local_e8.RootBranchName = local_318.RootBranchName;
              ::FString::FString(&local_e8.LayerName,&local_318.LayerName);
              ::FString::FString(&local_e8.RendererName,&local_318.RendererName);
              ::FString::FString(&local_e8.SubResourceName,&local_318.SubResourceName);
              ::FString::FString(&local_e8.CameraName,&local_318.CameraName);
              uVar22 = ::GetTypeHash(&local_e8);
              if (*(int *)&pFVar17[0x10].field_0x0 != *(int *)(pFVar17 + 0x3c)) {
                pFVar21 = *(FScriptContainerElement **)(pFVar17 + 0x48);
                if (*(FScriptContainerElement **)(pFVar17 + 0x48) == (FScriptContainerElement *)0x0)
                {
                  pFVar21 = pFVar17 + 0x40;
                }
                iVar7 = *(int *)(pFVar21 +
                                (ulonglong)(*(int *)&pFVar17[0x50].field_0x0 - 1U & uVar22) * 4);
                while (iVar7 != -1) {
                  lVar12 = (longlong)iVar7 * 200;
                  bVar6 = FMovieGraphRenderDataIdentifier::operator==
                                    ((FMovieGraphRenderDataIdentifier *)
                                     (*(longlong *)(pFVar17 + 8) + lVar12),&local_318);
                  if (bVar6) {
                    lVar12 = *(longlong *)(pFVar17 + 8) + lVar12;
                    if (lVar12 != 0) goto LAB_14dd42b16;
                    break;
                  }
                  iVar7 = *(int *)(lVar12 + 0xc0 + *(longlong *)(pFVar17 + 8));
                }
              }
              local_1f0 = &local_318;
              TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
              ::EmplaceByHash<TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&>_>
                        ((TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
                          *)(pFVar17 + 8),(uint)&local_2a4,
                         (TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&> *)
                         (ulonglong)uVar22,(bool *)&local_1f0);
              lVar12 = (longlong)local_2a4 * 200 + *(longlong *)(pFVar17 + 8);
LAB_14dd42b16:
              if (((*(FString **)(lVar12 + 0x48) <= &local_340) &&
                  (&local_340 < *(FString **)(lVar12 + 0x48) + *(int *)(lVar12 + 0x54))) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar7 = *(int *)(lVar12 + 0x50);
              if (iVar7 == *(int *)(lVar12 + 0x54)) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,(ForAnyElementType *)(lVar12 + 0x48),(int *)(lVar12 + 0x54)
                                  );
              }
              FVar16.Data = local_340.Data.AllocatorInstance.Data;
              *(int *)(lVar12 + 0x50) = iVar7 + 1;
              pFVar21 = ((ForAnyElementType *)(lVar12 + 0x48))->Data + (longlong)iVar7 * 0x10;
              *(undefined8 *)pFVar21 = 0;
              iVar7 = local_340.Data.ArrayNum;
              *(int *)(pFVar21 + 8) = iVar7;
              if (iVar7 != 0) {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar7,0,(ForAnyElementType *)pFVar21,iVar7,(int *)(pFVar21 + 0xc));
                memcpy(*(void **)pFVar21,FVar16.Data,(longlong)iVar7 * 2);
                pTVar25 = local_330;
                goto LAB_14dd42c18;
              }
              pFVar17 = pFVar17 + 0x58;
              *(undefined4 *)(pFVar21 + 0xc) = 0;
              pTVar25 = local_330;
            }
            else {
LAB_14dd42c18:
              pFVar17 = pFVar17 + 0x58;
            }
          }
        }
        FVar16.Data = local_340.Data.AllocatorInstance.Data;
        local_2a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar15 = local_340.Data.ArrayNum;
        local_2a0.Data.ArrayNum = iVar15;
        if (iVar15 == 0) {
          local_2a0.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar15,0,(ForAnyElementType *)&local_2a0,iVar15,&local_2a0.Data.ArrayMax);
          memcpy(local_2a0.Data.AllocatorInstance.Data,FVar16.Data,(longlong)iVar15 * 2);
        }
        FStringFormatArg::FStringFormatArg(&local_108,&local_2a0);
        ::FString::FString(&local_198,L"OutputPath");
        pFVar4 = local_1e0;
        local_1a8 = &local_198;
        local_1a0 = &local_108;
        TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
                  ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                    *)local_1e0,&local_200,(bool *)&local_1a8);
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        if (local_108.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.StringValue.Data.AllocatorInstance.Data);
        }
        LaunchEncoder(this,pFVar4);
        if (local_318.CameraName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.CameraName.Data.AllocatorInstance.Data);
        }
        if (local_318.SubResourceName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_318.SubResourceName.Data.AllocatorInstance.Data);
        }
        if (local_318.RendererName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.RendererName.Data.AllocatorInstance.Data);
        }
        if (local_318.LayerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.LayerName.Data.AllocatorInstance.Data);
        }
        if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_340.Data.AllocatorInstance.Data);
        }
        TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
      }
      local_50 = 0;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      goto LAB_14dd42db4;
    }
    if (1 < (byte)LogMovieRenderPipelineIO._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
      ;
    }
  }
  else {
    iVar15 = local_328.ArrayNum;
    pFVar20 = (FText *)(local_328.AllocatorInstance.Data + (longlong)local_328.ArrayNum * 0x10);
    FVar16.Data = local_328.AllocatorInstance.Data;
    while( true ) {
      if (local_328.ArrayNum != iVar15) {
        `TCheckedPointerIterator<FText,int,0>::operator!='::__l2::<lambda_1>::operator()(local_345);
      }
      if ((FText *)FVar16.Data == pFVar20) break;
      if (1 < (byte)LogMovieRenderPipelineIO._0_1_) {
        FText::ToString((FText *)FVar16.Data);
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO);
      }
      FVar16.Data = FVar16.Data + 0x10;
    }
  }
  pUVar8 = FWeakObjectPtr::Get(&CachedPipeline.WeakPtr);
  (**(code **)(*(longlong *)pUVar8 + 0x2b0))(pUVar8,1);
LAB_14dd42db4:
  DestructItems<FText,int>((FText *)local_328.AllocatorInstance.Data,local_328.ArrayNum);
  if ((FText *)local_328.AllocatorInstance.Data != (FText *)0x0) {
    FMemory::Free(local_328.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUMovieGraphCommandLineEncoderNode @ 14dd45190

void __cdecl
UMovieGraphCommandLineEncoderNode::StaticRegisterNativesUMovieGraphCommandLineEncoderNode(void)

{
  return;
}

// _getUObject @ 14dd4de80

UObject * __thiscall
UMovieGraphCommandLineEncoderNode::_getUObject(UMovieGraphCommandLineEncoderNode *this)

{
  return (UObject *)&this[-1]._padding_;
}

