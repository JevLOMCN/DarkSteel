// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 9

// StaticClass @ 14dc981a0

UClass * __cdecl UMovieGraphConditionGroupQuery_ActorTagName::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorTagName.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_ActorTagName",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorTagName.
                InnerSingleton,StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorTagName,0x40
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_ActorTagName>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ActorTagName>,
               local_res8,UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorTagName.InnerSingleton;
}

// UMovieGraphConditionGroupQuery_ActorTagName @ 14dcaf5a0

UMovieGraphConditionGroupQuery_ActorTagName * __thiscall
UMovieGraphConditionGroupQuery_ActorTagName::UMovieGraphConditionGroupQuery_ActorTagName
          (UMovieGraphConditionGroupQuery_ActorTagName *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ActorTagName__6B_;
  (this->TagsToMatch).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TagsToMatch).Data.ArrayNum = 0;
  (this->TagsToMatch).Data.ArrayMax = 0;
  return this;
}

// UMovieGraphConditionGroupQuery_ActorTagName @ 14dcaf5e0

UMovieGraphConditionGroupQuery_ActorTagName * __thiscall
UMovieGraphConditionGroupQuery_ActorTagName::UMovieGraphConditionGroupQuery_ActorTagName
          (UMovieGraphConditionGroupQuery_ActorTagName *this)

{
  UObject::UObject((UObject *)this);
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ActorTagName__6B_;
  (this->TagsToMatch).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TagsToMatch).Data.ArrayNum = 0;
  (this->TagsToMatch).Data.ArrayMax = 0;
  return this;
}

// ~UMovieGraphConditionGroupQuery_ActorTagName @ 14dcb29c0

void __thiscall
UMovieGraphConditionGroupQuery_ActorTagName::~UMovieGraphConditionGroupQuery_ActorTagName
          (UMovieGraphConditionGroupQuery_ActorTagName *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ActorTagName__6B_;
  pFVar1 = (this->TagsToMatch).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Evaluate @ 14dcc3970

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
UMovieGraphConditionGroupQuery_ActorTagName::Evaluate
          (UMovieGraphConditionGroupQuery_ActorTagName *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_3)

{
  FName *pFVar1;
  int iVar2;
  AActor *pAVar3;
  AActor **ppAVar4;
  bool bVar5;
  int iVar6;
  TArrayView<AActor_*_const,int> *pTVar7;
  ulonglong uVar8;
  FString *this_00;
  wchar_t *pwVar9;
  FName *this_01;
  int iVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  undefined1 local_98 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_90;
  uint local_80;
  FScriptContainerElement *local_78;
  AActor *local_70;
  AActor *local_68 [2];
  TArrayView<AActor_*_const,int> local_58;
  TArrayView<AActor_*_const,int> local_48;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1434,"UMovieGraphConditionGroupQuery_ActorTag::Evaluate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphRenderLayerSubsystem.cpp"
               ,0x59a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1434);
  }
  if ((this->TagsToMatch).Data.ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(this->TagsToMatch).Data.AllocatorInstance.Data;
  }
  iVar6 = FGenericPlatformStricmp::Stricmp(pwVar9,L"*");
  if (iVar6 == 0) {
    pTVar7 = TArrayView<AActor_*_const,int>::
             TArrayView<AActor_*_const,int><TArray<AActor_*,TSizedDefaultAllocator<32>_>_const_&,TArray<AActor_*,TSizedDefaultAllocator<32>_>_>
                       (&local_48,param_1);
    local_58.DataPtr = pTVar7->DataPtr;
    local_58.ArrayNum = pTVar7->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&pTVar7->field_0xc;
    TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Append(param_3,&local_58);
  }
  else {
    local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.ArrayNum = 0;
    local_90.ArrayMax = 0;
    ::FString::ParseIntoArrayLines(&this->TagsToMatch,&local_90,true);
    pFVar11 = (param_1->AllocatorInstance).Data;
    iVar6 = param_1->ArrayNum;
    local_58.DataPtr = (AActor **)(pFVar11 + (longlong)iVar6 * 8);
    while( true ) {
      ppAVar4 = local_58.DataPtr;
      local_78 = pFVar11;
      if (param_1->ArrayNum != iVar6) {
        `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_98);
      }
      if (pFVar11 == (FScriptContainerElement *)ppAVar4) break;
      uVar8 = (ulonglong)local_90.ArrayNum;
      pAVar3 = *(AActor **)pFVar11;
      pFVar11 = local_90.AllocatorInstance.Data + uVar8 * 0x10;
      local_80 = local_90.ArrayNum;
      FVar12.Data = local_90.AllocatorInstance.Data;
      local_68[0] = pAVar3;
      while( true ) {
        if (local_90.ArrayNum != (int)uVar8) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_98);
        }
        if (FVar12.Data == pFVar11) break;
        this_01 = (FName *)(pAVar3->Tags).AllocatorInstance.Data;
        iVar2 = (pAVar3->Tags).ArrayNum;
        pFVar1 = this_01 + iVar2;
        while( true ) {
          if ((pAVar3->Tags).ArrayNum != iVar2) {
            `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_98);
          }
          if (this_01 == pFVar1) break;
          this_00 = ::FName::ToString(this_01,(FString *)&local_48);
          iVar10 = *(int *)(FVar12.Data + 8) + -1;
          if (*(int *)(FVar12.Data + 8) == 0) {
            iVar10 = 0;
            pwVar9 = L"";
          }
          else {
            pwVar9 = *(wchar_t **)FVar12.Data;
          }
          bVar5 = ::FString::MatchesWildcard(this_00,pwVar9,iVar10,IgnoreCase);
          if (local_48.DataPtr != (AActor **)0x0) {
            FMemory::Free(local_48.DataPtr);
          }
          if (bVar5) {
            TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::
            Emplace<AActor_*_const_&>(param_3,&local_70,(bool *)local_68);
            goto LAB_14dcc3b88;
          }
          this_01 = this_01 + 1;
        }
        uVar8 = (ulonglong)local_80;
        FVar12.Data = FVar12.Data + 0x10;
      }
LAB_14dcc3b88:
      pFVar11 = local_78 + 8;
    }
    DestructItems<FString,int>((FString *)local_90.AllocatorInstance.Data,local_90.ArrayNum);
    if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.AllocatorInstance.Data);
    }
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetDisplayName @ 14dccc820

FText * __thiscall
UMovieGraphConditionGroupQuery_ActorTagName::GetDisplayName
          (UMovieGraphConditionGroupQuery_ActorTagName *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayName,L"MovieGraph",L"ConditionGroupQueryDisplayName_ActorTagName",
                 L"Actor Tag Name");
      atexit(`UMovieGraphConditionGroupQuery_ActorTagName::GetDisplayName'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayName;
    }
  }
  return &::DisplayName;
}

// GetIcon @ 14dccdcb0

FSlateIcon * __thiscall
UMovieGraphConditionGroupQuery_ActorTagName::GetIcon
          (UMovieGraphConditionGroupQuery_ActorTagName *this)

{
  FName FVar1;
  FName *pFVar2;
  FName FVar3;
  FName local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = ::FName::FName(&local_res20,"MainFrame.OpenIssueTracker");
      FVar1 = *pFVar2;
      FVar3 = FAppStyle::GetAppStyleSetName();
      FSlateIcon::FSlateIcon(&ActorTagIcon,*(FName *)FVar3,FVar1,(FName)0x0,(FName)0x0);
      _Init_thread_footer(&::_TSS0);
      return &ActorTagIcon;
    }
  }
  return &ActorTagIcon;
}

// GetPrivateStaticClass @ 14dcd1dc0

UClass * __cdecl UMovieGraphConditionGroupQuery_ActorTagName::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorTagName.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_ActorTagName",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorTagName.
                InnerSingleton,StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorTagName,0x40
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_ActorTagName>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ActorTagName>,
               local_res8,UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorTagName.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorTagName @ 14dce6460

void __cdecl
UMovieGraphConditionGroupQuery_ActorTagName::
StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorTagName(void)

{
  return;
}

