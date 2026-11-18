// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 10

// StaticClass @ 14dc99070

UClass * __cdecl UMovieGraphConditionGroupQuery_ActorLayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorLayer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_ActorLayer",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorLayer.InnerSingleton,
               StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorLayer,0x40,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_ActorLayer>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ActorLayer>,local_res8,
               UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorLayer.InnerSingleton;
}

// UMovieGraphConditionGroupQuery_ActorLayer @ 14dcaf4a0

UMovieGraphConditionGroupQuery_ActorLayer * __thiscall
UMovieGraphConditionGroupQuery_ActorLayer::UMovieGraphConditionGroupQuery_ActorLayer
          (UMovieGraphConditionGroupQuery_ActorLayer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ActorLayer__6B_;
  (this->LayerNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerNames).ArrayNum = 0;
  (this->LayerNames).ArrayMax = 0;
  return this;
}

// UMovieGraphConditionGroupQuery_ActorLayer @ 14dcaf4e0

UMovieGraphConditionGroupQuery_ActorLayer * __thiscall
UMovieGraphConditionGroupQuery_ActorLayer::UMovieGraphConditionGroupQuery_ActorLayer
          (UMovieGraphConditionGroupQuery_ActorLayer *this)

{
  UObject::UObject((UObject *)this);
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ActorLayer__6B_;
  (this->LayerNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerNames).ArrayNum = 0;
  (this->LayerNames).ArrayMax = 0;
  return this;
}

// ~UMovieGraphConditionGroupQuery_ActorLayer @ 14dcb2940

void __thiscall
UMovieGraphConditionGroupQuery_ActorLayer::~UMovieGraphConditionGroupQuery_ActorLayer
          (UMovieGraphConditionGroupQuery_ActorLayer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ActorLayer__6B_;
  pFVar1 = (this->LayerNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Evaluate @ 14dcc3730

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
UMovieGraphConditionGroupQuery_ActorLayer::Evaluate
          (UMovieGraphConditionGroupQuery_ActorLayer *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_3)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [16];
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *local_res20;
  AActor *local_58;
  longlong local_50;
  FScriptContainerElement *local_48;
  
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  local_48 = pFVar8 + (longlong)iVar3 * 8;
  local_res20 = param_3;
  do {
    pFVar1 = local_48;
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    pFVar7 = (this->LayerNames).AllocatorInstance.Data;
    iVar4 = (this->LayerNames).ArrayNum;
    lVar5 = *(longlong *)pFVar8;
    pFVar1 = pFVar7 + (longlong)iVar4 * 8;
    local_50 = lVar5;
    while( true ) {
      if ((this->LayerNames).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar7 == pFVar1) break;
      plVar6 = *(longlong **)(lVar5 + 0x1d0);
      plVar2 = plVar6 + *(int *)(lVar5 + 0x1d8);
      if (plVar6 != plVar2) {
        do {
          if (*plVar6 == *(longlong *)pFVar7) {
            TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::
            Emplace<AActor_*_const_&>(local_res20,&local_58,(bool *)&local_50);
            goto LAB_14dcc37f0;
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar2);
      }
      pFVar7 = pFVar7 + 8;
    }
LAB_14dcc37f0:
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// GetDisplayName @ 14dccc6e0

FText * __thiscall
UMovieGraphConditionGroupQuery_ActorLayer::GetDisplayName
          (UMovieGraphConditionGroupQuery_ActorLayer *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayName,L"MovieGraph",L"ConditionGroupQueryDisplayName_ActorLayer",
                 L"Actor Layer");
      atexit(`UMovieGraphConditionGroupQuery_ActorLayer::GetDisplayName'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayName;
    }
  }
  return &::DisplayName;
}

// GetIcon @ 14dccdb30

FSlateIcon * __thiscall
UMovieGraphConditionGroupQuery_ActorLayer::GetIcon(UMovieGraphConditionGroupQuery_ActorLayer *this)

{
  FName FVar1;
  FName *pFVar2;
  FName FVar3;
  FName local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = ::FName::FName(&local_res20,"LevelEditor.Tabs.DataLayers");
      FVar1 = *pFVar2;
      FVar3 = FAppStyle::GetAppStyleSetName();
      FSlateIcon::FSlateIcon(&ActorLayerIcon,*(FName *)FVar3,FVar1,(FName)0x0,(FName)0x0);
      _Init_thread_footer(&::_TSS0);
      return &ActorLayerIcon;
    }
  }
  return &ActorLayerIcon;
}

// GetPrivateStaticClass @ 14dcd1c40

UClass * __cdecl UMovieGraphConditionGroupQuery_ActorLayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorLayer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_ActorLayer",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorLayer.InnerSingleton,
               StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorLayer,0x40,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_ActorLayer>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ActorLayer>,local_res8,
               UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorLayer.InnerSingleton;
}

// IsEditorOnly @ 14dcd7160

bool __thiscall
UMovieGraphConditionGroupQuery_ActorLayer::IsEditorOnly
          (UMovieGraphConditionGroupQuery_ActorLayer *this)

{
  return true;
}

// StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorLayer @ 14dce6440

void __cdecl
UMovieGraphConditionGroupQuery_ActorLayer::
StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorLayer(void)

{
  return;
}

