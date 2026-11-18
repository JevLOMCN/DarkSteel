// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 10

// StaticClass @ 14dc98260

UClass * __cdecl UMovieGraphConditionGroupQuery_ActorName::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorName.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_ActorName",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorName.InnerSingleton,
               StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorName,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_ActorName>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ActorName>,local_res8,
               UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorName.InnerSingleton;
}

// UMovieGraphConditionGroupQuery_ActorName @ 14dcaf520

UMovieGraphConditionGroupQuery_ActorName * __thiscall
UMovieGraphConditionGroupQuery_ActorName::UMovieGraphConditionGroupQuery_ActorName
          (UMovieGraphConditionGroupQuery_ActorName *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ActorName__6B_;
  (this->WildcardSearch).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WildcardSearch).Data.ArrayNum = 0;
  (this->WildcardSearch).Data.ArrayMax = 0;
  return this;
}

// UMovieGraphConditionGroupQuery_ActorName @ 14dcaf560

UMovieGraphConditionGroupQuery_ActorName * __thiscall
UMovieGraphConditionGroupQuery_ActorName::UMovieGraphConditionGroupQuery_ActorName
          (UMovieGraphConditionGroupQuery_ActorName *this)

{
  UObject::UObject((UObject *)this);
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ActorName__6B_;
  (this->WildcardSearch).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WildcardSearch).Data.ArrayNum = 0;
  (this->WildcardSearch).Data.ArrayMax = 0;
  return this;
}

// ~UMovieGraphConditionGroupQuery_ActorName @ 14dcb2980

void __thiscall
UMovieGraphConditionGroupQuery_ActorName::~UMovieGraphConditionGroupQuery_ActorName
          (UMovieGraphConditionGroupQuery_ActorName *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ActorName__6B_;
  pFVar1 = (this->WildcardSearch).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Evaluate @ 14dcc3820

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
UMovieGraphConditionGroupQuery_ActorName::Evaluate
          (UMovieGraphConditionGroupQuery_ActorName *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArrayView<AActor_*_const,int> *pTVar3;
  wchar_t *pwVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  TArrayView<AActor_*_const,int> local_38;
  TArrayView<AActor_*_const,int> local_28;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1513,"UMovieGraphConditionGroupQuery_ActorName::Evaluate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphRenderLayerSubsystem.cpp"
               ,0x5e9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1513);
  }
  if ((this->WildcardSearch).Data.ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(this->WildcardSearch).Data.AllocatorInstance.Data;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar4,L"*");
  if (iVar2 == 0) {
    pTVar3 = TArrayView<AActor_*_const,int>::
             TArrayView<AActor_*_const,int><TArray<AActor_*,TSizedDefaultAllocator<32>_>_const_&,TArray<AActor_*,TSizedDefaultAllocator<32>_>_>
                       (&local_28,param_1);
    local_38.DataPtr = pTVar3->DataPtr;
    local_38.ArrayNum = pTVar3->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&pTVar3->field_0xc;
    TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Append(param_3,&local_38);
  }
  else {
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    ::FString::ParseIntoArrayLines(&this->WildcardSearch,&local_48,true);
    pFVar5 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar5 == pFVar1) break;
      pFVar5 = pFVar5 + 8;
    }
    DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetDisplayName @ 14dccc780

FText * __thiscall
UMovieGraphConditionGroupQuery_ActorName::GetDisplayName
          (UMovieGraphConditionGroupQuery_ActorName *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayName,L"MovieGraph",L"ConditionGroupQueryDisplayName_ActorName",
                 L"Actor Name");
      atexit(`UMovieGraphConditionGroupQuery_ActorName::GetDisplayName'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayName;
    }
  }
  return &::DisplayName;
}

// GetIcon @ 14dccdbf0

FSlateIcon * __thiscall
UMovieGraphConditionGroupQuery_ActorName::GetIcon(UMovieGraphConditionGroupQuery_ActorName *this)

{
  FName FVar1;
  FName *pFVar2;
  FName FVar3;
  FName local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = ::FName::FName(&local_res20,"ClassIcon.TextRenderActor");
      FVar1 = *pFVar2;
      FVar3 = FAppStyle::GetAppStyleSetName();
      FSlateIcon::FSlateIcon(&ActorTagIcon,*(FName *)FVar3,FVar1,(FName)0x0,(FName)0x0);
      _Init_thread_footer(&::_TSS0);
      return &ActorTagIcon;
    }
  }
  return &ActorTagIcon;
}

// GetPrivateStaticClass @ 14dcd1d00

UClass * __cdecl UMovieGraphConditionGroupQuery_ActorName::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorName.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_ActorName",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorName.InnerSingleton,
               StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorName,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_ActorName>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ActorName>,local_res8,
               UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorName.InnerSingleton;
}

// IsEditorOnly @ 14dcd7170

bool __thiscall
UMovieGraphConditionGroupQuery_ActorName::IsEditorOnly
          (UMovieGraphConditionGroupQuery_ActorName *this)

{
  return true;
}

// StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorName @ 14dce6450

void __cdecl
UMovieGraphConditionGroupQuery_ActorName::
StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorName(void)

{
  return;
}

