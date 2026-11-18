// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 9

// StaticClass @ 14dc98330

UClass * __cdecl UMovieGraphConditionGroupQuery_ActorType::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorType.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_ActorType",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorType.InnerSingleton,
               StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorType,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_ActorType>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ActorType>,local_res8,
               UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorType.InnerSingleton;
}

// UMovieGraphConditionGroupQuery_ActorType @ 14dcaf620

UMovieGraphConditionGroupQuery_ActorType * __thiscall
UMovieGraphConditionGroupQuery_ActorType::UMovieGraphConditionGroupQuery_ActorType
          (UMovieGraphConditionGroupQuery_ActorType *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ActorType__6B_;
  (this->ActorTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorTypes).ArrayNum = 0;
  (this->ActorTypes).ArrayMax = 0;
  (this->ClassViewerWidget).Object = (SClassViewer *)0x0;
  (this->ClassViewerWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UMovieGraphConditionGroupQuery_ActorType @ 14dcaf660

UMovieGraphConditionGroupQuery_ActorType * __thiscall
UMovieGraphConditionGroupQuery_ActorType::UMovieGraphConditionGroupQuery_ActorType
          (UMovieGraphConditionGroupQuery_ActorType *this)

{
  UObject::UObject((UObject *)this);
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ActorType__6B_;
  (this->ActorTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorTypes).ArrayNum = 0;
  (this->ActorTypes).ArrayMax = 0;
  (this->ClassViewerWidget).Object = (SClassViewer *)0x0;
  (this->ClassViewerWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UMovieGraphConditionGroupQuery_ActorType @ 14dcb2a00

void __thiscall
UMovieGraphConditionGroupQuery_ActorType::~UMovieGraphConditionGroupQuery_ActorType
          (UMovieGraphConditionGroupQuery_ActorType *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ActorType__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClassViewerWidget).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->ActorTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Evaluate @ 14dcc3c20

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
UMovieGraphConditionGroupQuery_ActorType::Evaluate
          (UMovieGraphConditionGroupQuery_ActorType *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  bool bVar7;
  longlong local_res10;
  AActor *local_38 [2];
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1627,"UMovieGraphConditionGroupQuery_ActorType::Evaluate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphRenderLayerSubsystem.cpp"
               ,0x65b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1627);
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar3 * 8;
  do {
    while( true ) {
      if (param_1->ArrayNum != iVar3) {
        `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res10);
      }
      if (pFVar5 == pFVar1) {
        if (bVar6) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return;
      }
      local_res10 = *(longlong *)pFVar5;
      pFVar4 = (this->ActorTypes).AllocatorInstance.Data;
      pFVar2 = pFVar4 + (longlong)(this->ActorTypes).ArrayNum * 8;
      if (pFVar4 != pFVar2) break;
LAB_14dcc3cfc:
      pFVar5 = pFVar5 + 8;
    }
    do {
      if (*(longlong *)pFVar4 == 0) {
        bVar7 = *(longlong *)(local_res10 + 0x10) == 0;
      }
      else {
        bVar7 = *(longlong *)pFVar4 == *(longlong *)(local_res10 + 0x10);
      }
      if (bVar7) {
        TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Emplace<AActor_*_const_&>
                  (param_3,local_38,(bool *)&local_res10);
        goto LAB_14dcc3cfc;
      }
      pFVar4 = pFVar4 + 8;
    } while (pFVar4 != pFVar2);
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// GetDisplayName @ 14dccc8c0

FText * __thiscall
UMovieGraphConditionGroupQuery_ActorType::GetDisplayName
          (UMovieGraphConditionGroupQuery_ActorType *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayName,L"MovieGraph",L"ConditionGroupQueryDisplayName_ActorType",
                 L"Actor Type");
      atexit(`UMovieGraphConditionGroupQuery_ActorType::GetDisplayName'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayName;
    }
  }
  return &::DisplayName;
}

// GetIcon @ 14dccdd70

FSlateIcon * __thiscall
UMovieGraphConditionGroupQuery_ActorType::GetIcon(UMovieGraphConditionGroupQuery_ActorType *this)

{
  FName FVar1;
  FName *pFVar2;
  FName FVar3;
  FName local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = ::FName::FName(&local_res20,"ClassIcon.ActorComponent");
      FVar1 = *pFVar2;
      FVar3 = FAppStyle::GetAppStyleSetName();
      FSlateIcon::FSlateIcon(&ActorTagIcon,*(FName *)FVar3,FVar1,(FName)0x0,(FName)0x0);
      _Init_thread_footer(&::_TSS0);
      return &ActorTagIcon;
    }
  }
  return &ActorTagIcon;
}

// GetPrivateStaticClass @ 14dcd1e80

UClass * __cdecl UMovieGraphConditionGroupQuery_ActorType::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorType.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_ActorType",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorType.InnerSingleton,
               StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorType,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_ActorType>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ActorType>,local_res8,
               UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorType.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorType @ 14dce6470

void __cdecl
UMovieGraphConditionGroupQuery_ActorType::
StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorType(void)

{
  return;
}

