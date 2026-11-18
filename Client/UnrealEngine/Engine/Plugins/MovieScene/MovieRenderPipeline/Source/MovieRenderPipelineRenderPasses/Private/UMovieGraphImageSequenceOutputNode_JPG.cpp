// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 8

// StaticClass @ 14ddb97b0

UClass * __cdecl UMovieGraphImageSequenceOutputNode_JPG::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_JPG.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MovieGraphImageSequenceOutputNode_JPG",
               &Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_JPG.InnerSingleton,
               StaticRegisterNativesUMovieGraphImageSequenceOutputNode_JPG,0x230,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphImageSequenceOutputNode_JPG>,
               InternalVTableHelperCtorCaller<UMovieGraphImageSequenceOutputNode_JPG>,local_res8,
               UMovieGraphImageSequenceOutputNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_JPG.InnerSingleton;
}

// UMovieGraphImageSequenceOutputNode_JPG @ 14ddc6d30

UMovieGraphImageSequenceOutputNode_JPG * __thiscall
UMovieGraphImageSequenceOutputNode_JPG::UMovieGraphImageSequenceOutputNode_JPG
          (UMovieGraphImageSequenceOutputNode_JPG *this,FVTableHelper *param_1)

{
  FString local_28;
  TStringView<wchar_t> local_18;
  
  UMovieGraphImageSequenceOutputNode::UMovieGraphImageSequenceOutputNode
            ((UMovieGraphImageSequenceOutputNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieGraphImageSequenceOutputNode__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphEvaluationNodeInjector__;
  this->bEnableBurnIn = false;
  ::FString::FString(&local_28,
                     L"/MovieRenderPipeline/Blueprints/Graph/DefaultGraphBurnIn.DefaultGraphBurnIn_C"
                    );
  *(undefined8 *)&(this->BurnInClass).field_0x0 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x8 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x10 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x18 = 0;
  local_18.Size = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath((FSoftObjectPath *)&this->BurnInClass,&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this->bCompositeOntoFinalImage = true;
  ::FString::FString(&this->BurnInFileNameFormat,
                     L"{sequence_name}.{layer_name}.BurnIn.{frame_number}");
  return this;
}

// ~UMovieGraphImageSequenceOutputNode_JPG @ 14ddcb910

void __thiscall
UMovieGraphImageSequenceOutputNode_JPG::~UMovieGraphImageSequenceOutputNode_JPG
          (UMovieGraphImageSequenceOutputNode_JPG *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieGraphImageSequenceOutputNode__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphEvaluationNodeInjector__;
  pFVar1 = (this->BurnInFileNameFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->BurnInClass).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7IInterface__6B_;
  UMovieGraphImageSequenceOutputNode::~UMovieGraphImageSequenceOutputNode
            ((UMovieGraphImageSequenceOutputNode *)this);
  return;
}

// GetPrivateStaticClass @ 14dde38a0

UClass * __cdecl UMovieGraphImageSequenceOutputNode_JPG::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_JPG.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MovieGraphImageSequenceOutputNode_JPG",
               &Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_JPG.InnerSingleton,
               StaticRegisterNativesUMovieGraphImageSequenceOutputNode_JPG,0x230,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphImageSequenceOutputNode_JPG>,
               InternalVTableHelperCtorCaller<UMovieGraphImageSequenceOutputNode_JPG>,local_res8,
               UMovieGraphImageSequenceOutputNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphImageSequenceOutputNode_JPG.InnerSingleton;
}

// InjectNodesPostEvaluation @ 14dde7390

void __thiscall
UMovieGraphImageSequenceOutputNode_JPG::InjectNodesPostEvaluation
          (UMovieGraphImageSequenceOutputNode_JPG *this,FName *param_1,
          UMovieGraphEvaluatedConfig *param_2,
          TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UMovieGraphOutputBurnInNode *pUVar7;
  UMovieGraphOutputBurnInNode *local_38;
  FSoftObjectPath local_30;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pUVar7 = NewObject<UMovieGraphOutputBurnInNode>((UObject *)param_2);
    pUVar7->bOverride_OutputName = '\x01';
    pUVar7->bOverride_OutputRestriction = '\x01';
    pUVar7->bOverride_FileNameFormat = '\x01';
    *(byte *)&pUVar7->_padding_ = (byte)pUVar7->_padding_ | 1;
    *(byte *)&pUVar7->_padding_ = (byte)pUVar7->_padding_ | 1;
    ::FString::operator=(&pUVar7->OutputName,L"JPG");
    iVar2 = (int)this->_padding_;
    iVar6 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange(&pUVar7->FileNameFormat,(wchar_t *)this->_padding_,iVar6);
    local_30.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_30.AssetPath.PackageName.Number = 0;
    local_30.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_30.AssetPath.AssetName.Number = 0;
    local_30.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.SubPathString.Data.ArrayNum = 0;
    local_30.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_30,(UObject *)this[-1]._padding_);
    FSoftClassPath::operator=(&pUVar7->OutputRestriction,(FSoftClassPath *)&local_30);
    if (local_30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.SubPathString.Data.AllocatorInstance.Data);
    }
    *(char *)((longlong)&pUVar7->_padding_ + 1) = (char)this->_padding_;
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)&pUVar7->_padding_,(FSoftObjectPath *)&this->_padding_);
    pFVar3 = (param_3->AllocatorInstance).Data;
    local_38 = pUVar7;
    if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)param_3->ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = param_3->ArrayNum;
    if (iVar6 == param_3->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar6 + 1;
    *(UMovieGraphOutputBurnInNode **)((param_3->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_38;
  }
  return;
}

// StaticRegisterNativesUMovieGraphImageSequenceOutputNode_JPG @ 14ddff1e0

void __cdecl
UMovieGraphImageSequenceOutputNode_JPG::StaticRegisterNativesUMovieGraphImageSequenceOutputNode_JPG
          (void)

{
  return;
}

// UpdateTelemetry @ 14de02ce0

void __thiscall
UMovieGraphImageSequenceOutputNode_JPG::UpdateTelemetry
          (UMovieGraphImageSequenceOutputNode_JPG *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  param_1->bUsesJPG = true;
  return;
}

// _getUObject @ 14de05560

UObject * __thiscall
UMovieGraphImageSequenceOutputNode_JPG::_getUObject(UMovieGraphImageSequenceOutputNode_JPG *this)

{
  return (UObject *)&this[-1]._padding_;
}

