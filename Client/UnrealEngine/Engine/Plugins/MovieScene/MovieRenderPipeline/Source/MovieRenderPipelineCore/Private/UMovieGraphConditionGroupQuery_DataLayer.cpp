// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 9

// StaticClass @ 14dc99240

UClass * __cdecl UMovieGraphConditionGroupQuery_DataLayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_DataLayer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_DataLayer",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_DataLayer.InnerSingleton,
               StaticRegisterNativesUMovieGraphConditionGroupQuery_DataLayer,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_DataLayer>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_DataLayer>,local_res8,
               UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_DataLayer.InnerSingleton;
}

// UMovieGraphConditionGroupQuery_DataLayer @ 14dcaf7b0

UMovieGraphConditionGroupQuery_DataLayer * __thiscall
UMovieGraphConditionGroupQuery_DataLayer::UMovieGraphConditionGroupQuery_DataLayer
          (UMovieGraphConditionGroupQuery_DataLayer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_DataLayer__6B_;
  (this->DataLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataLayers).ArrayNum = 0;
  (this->DataLayers).ArrayMax = 0;
  return this;
}

// UMovieGraphConditionGroupQuery_DataLayer @ 14dcaf7f0

UMovieGraphConditionGroupQuery_DataLayer * __thiscall
UMovieGraphConditionGroupQuery_DataLayer::UMovieGraphConditionGroupQuery_DataLayer
          (UMovieGraphConditionGroupQuery_DataLayer *this)

{
  UObject::UObject((UObject *)this);
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_DataLayer__6B_;
  (this->DataLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataLayers).ArrayNum = 0;
  (this->DataLayers).ArrayMax = 0;
  return this;
}

// ~UMovieGraphConditionGroupQuery_DataLayer @ 14dcb2ae0

void __thiscall
UMovieGraphConditionGroupQuery_DataLayer::~UMovieGraphConditionGroupQuery_DataLayer
          (UMovieGraphConditionGroupQuery_DataLayer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_DataLayer__6B_;
  DestructItems<TSoftObjectPtr<UDataLayerAsset>,int>
            ((TSoftObjectPtr<UDataLayerAsset> *)(this->DataLayers).AllocatorInstance.Data,
             (this->DataLayers).ArrayNum);
  pFVar1 = (this->DataLayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Evaluate @ 14dcc3fd0

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
UMovieGraphConditionGroupQuery_DataLayer::Evaluate
          (UMovieGraphConditionGroupQuery_DataLayer *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_3)

{
  TPersistentObjectPtr<FSoftObjectPath> *pTVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  AActor *this_00;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  UDataLayerAsset *pUVar7;
  UClass *pUVar8;
  ulonglong uVar9;
  TPersistentObjectPtr<FSoftObjectPath> *this_01;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [16];
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *local_res20;
  undefined1 local_54 [12];
  FScriptContainerElement *local_48;
  
  pFVar10 = (param_1->AllocatorInstance).Data;
  uVar2 = param_1->ArrayNum;
  uVar9 = (ulonglong)(int)uVar2;
  local_48 = pFVar10 + uVar9 * 8;
  local_res20 = param_3;
LAB_14dcc4003:
  pFVar5 = local_48;
  if (param_1->ArrayNum != (int)uVar9) {
    `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res10);
  }
  if (pFVar10 == pFVar5) {
    return;
  }
  iVar3 = (this->DataLayers).ArrayNum;
  this_01 = (TPersistentObjectPtr<FSoftObjectPath> *)(this->DataLayers).AllocatorInstance.Data;
  this_00 = *(AActor **)pFVar10;
  pTVar1 = this_01 + iVar3;
  local_54._4_8_ = this_00;
  do {
    if ((this->DataLayers).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TSoftObjectPtr<UDataLayerAsset>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (this_01 == pTVar1) goto LAB_14dcc40b2;
    pUVar7 = (UDataLayerAsset *)TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
    if (pUVar7 == (UDataLayerAsset *)0x0) {
LAB_14dcc4081:
      pUVar7 = (UDataLayerAsset *)0x0;
    }
    else {
      pUVar8 = Z_Construct_UClass_UDataLayerAsset_NoRegister();
      iVar4 = (int)pUVar8->_padding_;
      if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar8->_padding_)) goto LAB_14dcc4081;
    }
    bVar6 = AActor::ContainsDataLayer(this_00,pUVar7);
    if (bVar6) break;
    this_01 = this_01 + 1;
  } while( true );
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Emplace<AActor_*_const_&>
            (local_res20,(AActor **)local_54,(bool *)(local_54 + 4));
LAB_14dcc40b2:
  uVar9 = (ulonglong)uVar2;
  pFVar10 = pFVar10 + 8;
  goto LAB_14dcc4003;
}

// GetDisplayName @ 14dcccaa0

FText * __thiscall
UMovieGraphConditionGroupQuery_DataLayer::GetDisplayName
          (UMovieGraphConditionGroupQuery_DataLayer *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayName,L"MovieGraph",L"ConditionGroupQueryDisplayName_DataLayer",
                 L"Data Layer");
      atexit(`UMovieGraphConditionGroupQuery_DataLayer::GetDisplayName'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayName;
    }
  }
  return &::DisplayName;
}

// GetIcon @ 14dccdfb0

FSlateIcon * __thiscall
UMovieGraphConditionGroupQuery_DataLayer::GetIcon(UMovieGraphConditionGroupQuery_DataLayer *this)

{
  FName FVar1;
  FName *pFVar2;
  FName FVar3;
  FName local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = ::FName::FName(&local_res20,"DataLayer.Editor");
      FVar1 = *pFVar2;
      FVar3 = FAppStyle::GetAppStyleSetName();
      FSlateIcon::FSlateIcon(&DataLayerIcon,*(FName *)FVar3,FVar1,(FName)0x0,(FName)0x0);
      _Init_thread_footer(&::_TSS0);
      return &DataLayerIcon;
    }
  }
  return &DataLayerIcon;
}

// GetPrivateStaticClass @ 14dcd20c0

UClass * __cdecl UMovieGraphConditionGroupQuery_DataLayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_DataLayer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_DataLayer",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_DataLayer.InnerSingleton,
               StaticRegisterNativesUMovieGraphConditionGroupQuery_DataLayer,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_DataLayer>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_DataLayer>,local_res8,
               UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_DataLayer.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphConditionGroupQuery_DataLayer @ 14dce64a0

void __cdecl
UMovieGraphConditionGroupQuery_DataLayer::
StaticRegisterNativesUMovieGraphConditionGroupQuery_DataLayer(void)

{
  return;
}

