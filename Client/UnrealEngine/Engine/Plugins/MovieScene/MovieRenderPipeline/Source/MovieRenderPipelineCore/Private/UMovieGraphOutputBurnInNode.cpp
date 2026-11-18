// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 11

// StaticClass @ 14dc9a610

UClass * __cdecl UMovieGraphOutputBurnInNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphOutputBurnInNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphOutputBurnInNode",
               &Z_Registration_Info_UClass_UMovieGraphOutputBurnInNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphOutputBurnInNode,0x220,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphOutputBurnInNode>,
               InternalVTableHelperCtorCaller<UMovieGraphOutputBurnInNode>,local_res8,
               UMovieGraphBurnInNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphOutputBurnInNode.InnerSingleton;
}

// UMovieGraphOutputBurnInNode @ 14dcb01f0

UMovieGraphOutputBurnInNode * __thiscall
UMovieGraphOutputBurnInNode::UMovieGraphOutputBurnInNode
          (UMovieGraphOutputBurnInNode *this,FVTableHelper *param_1)

{
  UMovieGraphBurnInNode::UMovieGraphBurnInNode((UMovieGraphBurnInNode *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphOutputBurnInNode__6B_;
  (this->OutputName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputName).Data.ArrayNum = 0;
  (this->OutputName).Data.ArrayMax = 0;
  *(undefined8 *)&this->OutputRestriction = 0;
  *(undefined8 *)&(this->OutputRestriction).field_0x8 = 0;
  *(undefined8 *)&(this->OutputRestriction).field_0x10 = 0;
  *(undefined8 *)&(this->OutputRestriction).field_0x18 = 0;
  ::FString::FString(&this->FileNameFormat,"{sequence_name}.{layer_name}.{frame_number}");
  (this->LayerNameFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerNameFormat).Data.ArrayNum = 0;
  (this->LayerNameFormat).Data.ArrayMax = 0;
  return this;
}

// ~UMovieGraphOutputBurnInNode @ 14dcb2fa0

void __thiscall
UMovieGraphOutputBurnInNode::~UMovieGraphOutputBurnInNode(UMovieGraphOutputBurnInNode *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMovieGraphOutputBurnInNode__6B_;
  pFVar1 = (this->LayerNameFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FileNameFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->OutputRestriction).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->OutputName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieGraphBurnInNode::~UMovieGraphBurnInNode((UMovieGraphBurnInNode *)this);
  return;
}

// GetFileNameFormatOverride @ 14dccd6d0

FString * __thiscall
UMovieGraphOutputBurnInNode::GetFileNameFormatOverride
          (UMovieGraphOutputBurnInNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->FileNameFormat);
  return __return_storage_ptr__;
}

// GetLayerNameOverride @ 14dcce860

FString * __thiscall
UMovieGraphOutputBurnInNode::GetLayerNameOverride
          (UMovieGraphOutputBurnInNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->LayerNameFormat);
  return __return_storage_ptr__;
}

// GetNodeInstanceName @ 14dcced90

FString * __thiscall
UMovieGraphOutputBurnInNode::GetNodeInstanceName
          (UMovieGraphOutputBurnInNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->OutputName);
  return __return_storage_ptr__;
}

// GetNodeValidationErrors @ 14dccedd0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UMovieGraphOutputBurnInNode::GetNodeValidationErrors
          (UMovieGraphOutputBurnInNode *this,FName *param_1,UMovieGraphEvaluatedConfig *param_2,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_3)

{
  FName *pFVar1;
  FName FVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UClass *pUVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  FText *pFVar11;
  ForAnyElementType FVar12;
  ulonglong uVar13;
  undefined1 local_e8 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_e0;
  undefined1 local_d0 [8];
  FText local_c8;
  FUObjectCppClassStaticFunctions local_b8;
  FName local_b0;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
              *)&param_2->BranchConfigMapping,&local_e0);
  iVar7 = local_e0.ArrayNum;
  uVar13 = (ulonglong)local_e0.ArrayNum;
  pFVar1 = (FName *)(local_e0.AllocatorInstance.Data + uVar13 * 8);
  FVar12.Data = local_e0.AllocatorInstance.Data;
  do {
    if ((int)uVar13 != iVar7) {
      local_e8[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_e8);
    }
    if ((FName *)FVar12.Data == pFVar1) {
      if ((FName *)local_e0.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_e0.AllocatorInstance.Data);
      }
      return false;
    }
    FVar2 = *(FName *)FVar12.Data;
    if (Z_Registration_Info_UClass_UMovieGraphBurnInNode.InnerSingleton == (UClass *)0x0) {
      local_b8.AddReferencedObjects = UObject::AddReferencedObjects;
      GetPrivateStaticClassBody
                (L"/Script/MovieRenderPipelineCore",L"MovieGraphBurnInNode",
                 &Z_Registration_Info_UClass_UMovieGraphBurnInNode.InnerSingleton,
                 UMovieGraphBurnInNode::StaticRegisterNativesUMovieGraphBurnInNode,0x1c8,8,
                 CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphBurnInNode>
                 ,InternalVTableHelperCtorCaller<UMovieGraphBurnInNode>,&local_b8,
                 UMovieGraphWidgetRendererBaseNode::StaticClass,UObject::StaticClass);
    }
    UMovieGraphEvaluatedConfig::GetSettingsForBranch
              (param_2,&local_a8,Z_Registration_Info_UClass_UMovieGraphBurnInNode.InnerSingleton,
               FVar2,false,true);
    if (local_a8.ArrayNum < 1) {
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
    }
    else {
      lVar3 = *(longlong *)local_a8.AllocatorInstance.Data;
      FMemory::Free(local_a8.AllocatorInstance.Data);
      if ((lVar3 != 0) &&
         ((*(FName *)FVar12.Data == UMovieGraphNode::GlobalsPinName ||
          (*(FName *)FVar12.Data == *param_1)))) {
        pUVar8 = FSoftClassPath::ResolveClass(&this->OutputRestriction);
        if (pUVar8 == (UClass *)0x0) {
          pFVar9 = FText::AsLocalizable_Advanced_LocText
                             (&local_68,L"MovieGraphNodes",L"BurnInOutputNode_UnknownClass",
                              L"Unknown");
          FText::FText(&local_c8,pFVar9);
          if (local_68.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
          }
        }
        else {
          pUVar8 = FSoftClassPath::ResolveClass(&this->OutputRestriction);
          local_b0 = (FName)pUVar8->_padding_;
          ::FName::ToString(&local_b0,&local_98);
          pFVar9 = FText::FromString(&local_78,&local_98);
          FText::FText(&local_c8,pFVar9);
          if (local_78.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
          }
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
        local_88.TextData.Reference = local_c8.TextData.Reference;
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 8))
                    (local_c8.TextData.Reference,local_d0);
        }
        local_88.Flags = local_c8.Flags;
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_48,L"MovieGraphNodes",L"BurnInOutputNode_Incompatibility",
                            L"An output-specific ({0}) burn-in was added to a graph that also uses the deprecated Burn In node. These two nodes are incompatible; only the Burn In node or the output-specific burn-ins can be used."
                           );
        pFVar10 = FTextFormat::FTextFormat(&local_38,pFVar9,Default);
        pFVar11 = FText::Format<FText>(&local_58,pFVar10,&local_88);
        pFVar9 = (FText *)(param_3->AllocatorInstance).Data;
        if (((pFVar9 <= pFVar11) && (pFVar11 < pFVar9 + param_3->ArrayMax)) &&
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
        iVar7 = param_3->ArrayNum;
        if (iVar7 == param_3->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar7 + 1;
        FText::FText((FText *)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x10),pFVar11);
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        }
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
        }
        if ((FName *)local_e0.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_e0.AllocatorInstance.Data);
        }
        return true;
      }
    }
    uVar13 = local_e0._8_8_ & 0xffffffff;
    FVar12.Data = FVar12.Data + 8;
  } while( true );
}

// GetOutputTypeRestrictionsImpl @ 14dcd0290

TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphOutputBurnInNode::GetOutputTypeRestrictionsImpl
          (UMovieGraphOutputBurnInNode *this,
          TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  void *_Src;
  size_t _Size;
  undefined1 local_28 [16];
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_10 = *(int *)&(this->OutputRestriction).field_0x18;
  _Size = (size_t)local_10;
  _Src = *(void **)&(this->OutputRestriction).field_0x10;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_28._0_8_ = *(undefined8 *)&this->OutputRestriction;
  local_28._8_8_ = *(undefined8 *)&(this->OutputRestriction).field_0x8;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,_Size);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&__return_storage_ptr__->AllocatorInstance,1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FSoftClassPath,FSoftClassPath,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,(FSoftClassPath *)local_28,1);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dcd2b00

UClass * __cdecl UMovieGraphOutputBurnInNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphOutputBurnInNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphOutputBurnInNode",
               &Z_Registration_Info_UClass_UMovieGraphOutputBurnInNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphOutputBurnInNode,0x220,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphOutputBurnInNode>,
               InternalVTableHelperCtorCaller<UMovieGraphOutputBurnInNode>,local_res8,
               UMovieGraphBurnInNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphOutputBurnInNode.InnerSingleton;
}

// GetRendererNameImpl @ 14dcd3630

FString * __thiscall
UMovieGraphOutputBurnInNode::GetRendererNameImpl
          (UMovieGraphOutputBurnInNode *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FStringFormatArg local_28;
  
  pFVar1 = ::FString::FString(&local_38,&this->OutputName);
  FStringFormatArg::FStringFormatArg(&local_28,pFVar1);
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_48.AllocatorInstance.Data,&local_28,1)
  ;
  ::FString::FormatImpl(__return_storage_ptr__,L"BurnIn_{0}",&local_48);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FStringFormatArg *)local_48.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUMovieGraphOutputBurnInNode @ 14dce6640

void __cdecl UMovieGraphOutputBurnInNode::StaticRegisterNativesUMovieGraphOutputBurnInNode(void)

{
  return;
}

