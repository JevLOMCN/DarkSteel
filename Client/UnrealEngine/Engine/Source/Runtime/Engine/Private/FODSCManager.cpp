// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// FODSCManager @ 1480895a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FODSCManager * __thiscall FODSCManager::FODSCManager(FODSCManager *this)

{
  bool bVar1;
  bool bVar2;
  FTSBackgroundableTicker *pFVar3;
  wchar_t *pwVar4;
  FODSCThread *this_00;
  FODSCThread *this_01;
  FDelegateHandle FVar5;
  FODSCManager *local_res8;
  <lambda_1> local_res10;
  FString local_18;
  
  pFVar3 = FTSBackgroundableTicker::GetCoreTicker();
  FTSTickerObjectBase::FTSTickerObjectBase((FTSTickerObjectBase *)this,0.0,(FTSTicker *)pFVar3);
  this_01 = (FODSCThread *)0x0;
  this->_padding_ = (longlong)&___7FODSCManager__6B_;
  this->Thread = (FODSCThread *)0x0;
  (this->OnScreenMessagesHandle).ID = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->MaterialInstancesCachedUniformExpressionsCS,4000);
  *(undefined8 *)&this->MaterialInstancesCachedUniformExpressions = 0;
  *(undefined8 *)&(this->MaterialInstancesCachedUniformExpressions).field_0x8 = 0;
  *(undefined8 *)&(this->MaterialInstancesCachedUniformExpressions).field_0x20 = 0;
  *(undefined4 *)&(this->MaterialInstancesCachedUniformExpressions).field_0x28 = 0;
  *(undefined4 *)&(this->MaterialInstancesCachedUniformExpressions).field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialInstancesCachedUniformExpressions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MaterialInstancesCachedUniformExpressions).field_0x34 = 0;
  *(undefined8 *)&(this->MaterialInstancesCachedUniformExpressions).field_0x40 = 0;
  *(undefined4 *)&(this->MaterialInstancesCachedUniformExpressions).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ErrorMessageCS,4000);
  (this->ErrorMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorMessage).Data.ArrayNum = 0;
  (this->ErrorMessage).Data.ArrayMax = 0;
  (this->MaterialNameToRecompile).ComparisonIndex = 0;
  (this->MaterialNameToRecompile).Number = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  pwVar4 = FCommandLine::Get();
  bVar1 = FParse::Value(pwVar4,L"-odschost=",&local_18,true,(wchar_t **)0x0);
  bVar2 = IsRunningCookOnTheFly();
  if ((bVar2) || (bVar1)) {
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    pwVar4 = FCommandLine::Get();
    FParse::Value(pwVar4,L"-odschost=",&local_18,true,(wchar_t **)0x0);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddRaw<FODSCManager>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnEnginePreExit,(FODSCManager *)&local_res8,(pmf_270daa20)this);
    this_00 = ::operator_new(400);
    if (this_00 != (FODSCThread *)0x0) {
      this_01 = FODSCThread::FODSCThread(this_00,&local_18);
    }
    this->Thread = this_01;
    FODSCThread::StartThread(this_01);
    local_res8 = this;
    FVar5 = TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
            ::AddLambda<_FODSCManager::FODSCManager_::__l5::<lambda_1>_>
                      (&FCoreDelegates::OnGetOnScreenMessages,&local_res10);
                    /* WARNING: Load size is inaccurate */
    (this->OnScreenMessagesHandle).ID = *FVar5.ID;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FODSCManager @ 14808e970

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FODSCManager::~FODSCManager(FODSCManager *this)

{
  FDelegateHandle FVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  FVar1.ID = (this->OnScreenMessagesHandle).ID;
  this->_padding_ = (longlong)&___7FODSCManager__6B_;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnGetOnScreenMessages,FVar1);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEnginePreExit,
             this);
  StopThread(this);
  pFVar2 = (this->ErrorMessage).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ErrorMessageCS);
  *(undefined4 *)&(this->MaterialInstancesCachedUniformExpressions).field_0x48 = 0;
  pvVar3 = *(void **)&(this->MaterialInstancesCachedUniformExpressions).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MaterialInstancesCachedUniformExpressions);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->MaterialInstancesCachedUniformExpressionsCS);
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)this);
  return;
}

// operator() @ 148091010

void __thiscall
`FODSCManager::FODSCManager'::__l5::<lambda_1>::operator()
          (void *this,
          TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
          *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement local_res8 [8];
  FText local_68;
  FString local_58;
  undefined1 local_48 [16];
  FText local_38;
  
  lVar3 = *(longlong *)this;
  if (*(longlong *)(lVar3 + 0x18) == 0) {
    return;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 0xa0);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  iVar6 = 0;
  iVar5 = *(int *)(lVar3 + 0xd0) + -1;
  if (*(int *)(lVar3 + 0xd0) == 0) {
    iVar5 = iVar6;
  }
  ::FString::AssignRange(&local_58,*(wchar_t **)(lVar3 + 200),iVar5);
  LeaveCriticalSection(lpCriticalSection);
  if (1 < local_58.Data.ArrayNum) {
    local_48._8_8_ = FText::FromString(&local_68,&local_58);
    local_48._0_8_ = local_res8;
    local_res8[0] = (FScriptContainerElement)0x2;
    TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&>_>
              (param_1,(TPairInitializer<FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&> *)
                       &stack0x00000018,(bool *)local_48);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
  }
  lVar3 = *(longlong *)(*(longlong *)this + 0x18);
  cVar1 = *(char *)(lVar3 + 0x175);
  iVar5 = *(int *)(lVar3 + 0x178);
  iVar2 = *(int *)(lVar3 + 0x17c);
  if (((cVar1 == '\0') && (iVar5 == 0)) && (iVar2 == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (*(char *)(lVar3 + 0x174) == '\0') {
    ::FString::PrintfImpl((FString *)&local_68,L"Not connected to %s");
    local_48._8_8_ = FText::FromString(&local_38,(FString *)&local_68);
    local_res8[0] = (FScriptContainerElement)0x2;
  }
  else {
    if (!bVar4) goto LAB_14809126b;
    ::FString::FString((FString *)&local_68,L"Recompiling shaders (");
    if (cVar1 != '\0') {
      ::FString::AppendChars((FString *)&local_68,"global",6);
    }
    if (iVar5 != 0) {
      ::FString::PrintfImpl((FString *)local_48,L" %d materials");
      iVar5 = (int)local_48._8_8_ + -1;
      if ((int)local_48._8_8_ == 0) {
        iVar5 = iVar6;
      }
      ::FString::AppendChars((FString *)&local_68,(wchar_t *)local_48._0_8_,iVar5);
      if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_48._0_8_);
      }
    }
    if (iVar2 != 0) {
      ::FString::PrintfImpl((FString *)local_48,L"%d pipelines");
      iVar5 = (int)local_48._8_8_ + -1;
      if ((int)local_48._8_8_ == 0) {
        iVar5 = iVar6;
      }
      ::FString::AppendChars((FString *)&local_68,(wchar_t *)local_48._0_8_,iVar5);
      if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_48._0_8_);
      }
    }
    ::FString::AppendChars((FString *)&local_68,")",1);
    local_48._8_8_ = FText::FromString(&local_38,(FString *)&local_68);
    local_res8[0] = (FScriptContainerElement)0x0;
  }
  local_48._0_8_ = local_res8;
  TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&>_>
            (param_1,(TPairInitializer<FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&> *)
                     &stack0x00000018,(bool *)local_48);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_68.TextData.Reference);
  }
LAB_14809126b:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// AddThreadedRequest @ 1480947d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FODSCManager::AddThreadedRequest
          (FODSCManager *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FString *param_2,
          EShaderPlatform param_3,Type param_4,Type param_5,ODSCRecompileCommand param_6,
          FString *param_7,FShaderCompilerFlags *param_8)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  FName *pFVar4;
  wchar_t *pwVar5;
  FName local_res8;
  FString local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  
  if (this->Thread != (FODSCThread *)0x0) {
    lpCriticalSection = &this->ErrorMessageCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::FString::Empty(&this->ErrorMessage);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    FODSCThread::AddRequest
              (this->Thread,&local_38,&local_48,param_3,param_4,param_5,ResetMaterialCache,
               (FShaderCompilerFlags *)&local_res8);
    DestructItems<FString,int>((FString *)0x0,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pTVar1 = CVarODSCRecompileMode.Ref;
    if ((param_6 - Changed & 0xfffffffd) == 0) {
      bVar2 = IsInParallelGameThread();
      if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
        lVar3 = 0;
      }
      else {
        lVar3 = 4;
      }
      if (0 < *(int *)((longlong)pTVar1->ShadowedValue + lVar3)) {
        FODSCThread::ResetMaterialsODSCData(this->Thread,param_3);
        if ((param_7->Data).ArrayNum == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = (wchar_t *)(param_7->Data).AllocatorInstance.Data;
        }
        pFVar4 = ::FName::FName(&local_res8,pwVar5);
        this->MaterialNameToRecompile = *pFVar4;
        if (param_6 != Changed) {
          return;
        }
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.ArrayNum = 0;
        local_38.ArrayMax = 0;
        FODSCThread::AddRequest
                  (this->Thread,&local_38,&local_48,param_3,param_4,param_5,Changed,param_8);
        DestructItems<FString,int>((FString *)0x0,0);
        if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
        return;
      }
    }
    FODSCThread::AddRequest(this->Thread,param_1,param_2,param_3,param_4,param_5,param_6,param_8);
  }
  return;
}

// AddThreadedShaderPipelineRequest @ 148094a00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FODSCManager::AddThreadedShaderPipelineRequest
          (FODSCManager *this,EShaderPlatform param_1,Type param_2,Type param_3,FMaterial *param_4,
          FString *param_5,FString *param_6,TArray<FString,TSizedDefaultAllocator<32>_> *param_7,
          int param_8,TArray<FShaderId,TSizedDefaultAllocator<32>_> *param_9)

{
  longlong lVar1;
  
  if ((this->Thread != (FODSCThread *)0x0) &&
     (lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8),
     *(int *)(lVar1 + 0x8ff0) == 0)) {
    FODSCThread::AddShaderPipelineRequest
              (this->Thread,param_1,param_2,param_3,param_4,
               *(FPrimitiveSceneInfo **)(lVar1 + 0x9000),param_5,param_6,param_7,param_8,param_9);
  }
  return;
}

// CheckIfRequestAlreadySent @ 1480986f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FODSCManager::CheckIfRequestAlreadySent
          (FODSCManager *this,TArray<FShaderId,TSizedDefaultAllocator<32>_> *param_1,
          FMaterial *param_2)

{
  int iVar1;
  int iVar2;
  FODSCThread *pFVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  uint uVar6;
  FName *pFVar7;
  FODSCShaderMapData *pFVar8;
  FHashedName *pFVar9;
  longlong lVar10;
  ForElementType<FSetElementId> FVar11;
  uint uVar12;
  bool bVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackX_8 [8];
  FHashedName FStackX_20;
  FHashedName FStack_78;
  FHashedName FStack_70;
  FHashedName FStack_68;
  FODSCShaderId FStack_60;
  
  pFVar3 = this->Thread;
  if (pFVar3 == (FODSCThread *)0x0) {
    return false;
  }
  AcquireSRWLockShared((PSRWLOCK)&pFVar3->RequestHashesRWLock);
  pFVar7 = TMapBase<unsigned___int64,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>_>
           ::Find((TMapBase<unsigned___int64,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>_>
                   *)&pFVar3->ODSCPointerToNames,(ulong64)param_2);
  if (pFVar7 != (FName *)0x0) {
    pFVar8 = TMapBase<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
             ::Find((TMapBase<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
                     *)&pFVar3->RequestHashes,*pFVar7);
    if (pFVar8 != (FODSCShaderMapData *)0x0) {
      iVar1 = param_1->ArrayNum;
      pFVar14 = (param_1->AllocatorInstance).Data;
      pFVar16 = pFVar14 + (longlong)iVar1 * 0x38;
      while( true ) {
        if (param_1->ArrayNum != iVar1) {
          `TCheckedPointerIterator<FShaderId_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(auStackX_8);
        }
        if (pFVar14 == pFVar16) {
          bVar13 = true;
          goto LAB_1480988b1;
        }
        if (*(longlong *)pFVar14 == 0) {
          pFVar9 = FHashedName::FHashedName(&FStack_78,(wchar_t *)0x0);
        }
        else {
          pFVar9 = FHashedName::FHashedName
                             (&FStackX_20,(FHashedName *)(*(longlong *)pFVar14 + 0x28));
        }
        FHashedName::FHashedName(&FStack_60.ShaderTypeHashedName,pFVar9);
        if (*(longlong *)(pFVar14 + 8) == 0) {
          pFVar9 = FHashedName::FHashedName(&FStack_68,(wchar_t *)0x0);
        }
        else {
          pFVar9 = FHashedName::FHashedName
                             (&FStack_70,(FHashedName *)(*(longlong *)(pFVar14 + 8) + 0x30));
        }
        FHashedName::FHashedName(&FStack_60.VFTypeHashedName,pFVar9);
        FHashedName::FHashedName(&FStack_60.ShaderPipelineName,(FHashedName *)(pFVar14 + 0x10));
        iVar2 = *(int *)(pFVar14 + 0x2c);
        uVar12 = (uint)*(ushort *)(pFVar14 + 0x30) | FStack_60._28_4_ & 0xffff0000;
        FStack_60.PermutationId = iVar2;
        FStack_60._28_4_ = uVar12;
        uVar6 = ::GetTypeHash(&FStack_60);
        if (*(int *)&(pFVar8->CurrentRequests).Elements.field_0x8 ==
            *(int *)&(pFVar8->CurrentRequests).Elements.field_0x34) break;
        FVar4 = (pFVar8->CurrentRequests).Hash.SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&(pFVar8->CurrentRequests).Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar4;
        }
        iVar15 = *(int *)((longlong)FVar11 +
                         (ulonglong)((pFVar8->CurrentRequests).HashSize - 1U & uVar6) * 4);
        if (iVar15 == -1) break;
        lVar5 = *(longlong *)&(pFVar8->CurrentRequests).Elements;
        while ((((lVar10 = (longlong)iVar15,
                 *(ulong64 *)(lVar5 + lVar10 * 0x28) != FStack_60.ShaderTypeHashedName.Hash ||
                 (*(ulong64 *)(lVar5 + 0x10 + lVar10 * 0x28) != FStack_60.ShaderPipelineName.Hash))
                || (*(ulong64 *)(lVar5 + 8 + lVar10 * 0x28) != FStack_60.VFTypeHashedName.Hash)) ||
               ((*(int *)(lVar5 + 0x18 + lVar10 * 0x28) != iVar2 ||
                (((uVar12 ^ *(uint *)(lVar5 + 0x1c + lVar10 * 0x28)) & 0xffff) != 0))))) {
          iVar15 = *(int *)(lVar5 + 0x20 + lVar10 * 0x28);
          if (iVar15 == -1) goto LAB_1480988ae;
        }
        if (iVar15 == -1) break;
        pFVar14 = pFVar14 + 0x38;
      }
    }
  }
LAB_1480988ae:
  bVar13 = false;
LAB_1480988b1:
  ReleaseSRWLockShared((PSRWLOCK)&pFVar3->RequestHashesRWLock);
  return bVar13;
}

// ClearErrorMessage @ 148099ae0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FODSCManager::ClearErrorMessage(FODSCManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->ErrorMessageCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::FString::Empty(&this->ErrorMessage);
                    /* WARNING: Could not recover jumptable at 0x000148099b1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FindMaterialShaderMap @ 1480a1cc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialShaderMap * __cdecl
FODSCManager::FindMaterialShaderMap(FString *param_1,FMaterialShaderMapId *param_2)

{
  FPlatformRWLock *SRWLock;
  FScriptContainerElement *pFVar1;
  Type TVar2;
  int iVar3;
  FODSCThread *pFVar4;
  bool bVar5;
  FName *pFVar6;
  FODSCShaderMapData *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FMaterialShaderMap *pFVar10;
  FName local_res18;
  
  if ((GODSCManager == (FODSCManager *)0x0) ||
     (pFVar4 = GODSCManager->Thread, pFVar4 == (FODSCThread *)0x0)) {
    return (FMaterialShaderMap *)0x0;
  }
  SRWLock = &pFVar4->RequestHashesRWLock;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  iVar3 = (param_1->Data).ArrayNum;
  pFVar10 = (FMaterialShaderMap *)0x0;
  iVar8 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar8 = 0;
  }
  pFVar6 = ::FName::FName(&local_res18,iVar8,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                          FNAME_Add);
  pFVar7 = TMapBase<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
           ::Find((TMapBase<FName,FODSCThread::FODSCShaderMapData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FODSCThread::FODSCShaderMapData,0>_>
                   *)&pFVar4->RequestHashes,*pFVar6);
  if (pFVar7 == (FODSCShaderMapData *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  else {
    pFVar9 = (pFVar7->MaterialShaderMaps).AllocatorInstance.Data;
    iVar8 = (pFVar7->MaterialShaderMaps).ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar8 * 8;
    while( true ) {
      if ((pFVar7->MaterialShaderMaps).ArrayNum != iVar8) {
        `TCheckedPointerIterator<TRefCountPtr<FMaterialShaderMap>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res18);
      }
      if (pFVar9 == pFVar1) {
        ReleaseSRWLockShared((PSRWLOCK)SRWLock);
        return (FMaterialShaderMap *)0x0;
      }
      pFVar10 = *(FMaterialShaderMap **)pFVar9;
      if (((param_2->QualityLevel == Num) ||
          (TVar2 = (pFVar10->ShaderMapId).QualityLevel, TVar2 == Num)) ||
         (param_2->QualityLevel == TVar2)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (((pFVar10->ShaderMapId).FeatureLevel == param_2->FeatureLevel) && (bVar5)) break;
      pFVar9 = pFVar9 + 8;
    }
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return pFVar10;
}

// HasAsyncLoadingInstances @ 1480ac310

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FODSCManager::HasAsyncLoadingInstances(FODSCManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  int iVar2;
  UObject *pUVar3;
  FUObjectItem *pFVar4;
  bool bVar5;
  TMap<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,0>_>
  *pTVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  bool bVar6;
  
  lpCriticalSection = &this->MaterialInstancesCachedUniformExpressionsCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar7 = &this->MaterialInstancesCachedUniformExpressions;
    bVar6 = false;
    bVar5 = false;
    TSet<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)pTVar7);
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)pTVar7;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*local_48 + (longlong)(int)uVar8 * 0x18 + 8)
                                    );
        if ((pUVar3 == (UObject *)0x0) ||
           (pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar3->field_0xc),
           ((pFVar4->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) == 0)) {
          TSet<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,(int)uVar8);
          local_10 = '\x01';
          bVar5 = bVar6;
        }
        else {
          bVar5 = true;
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
        bVar6 = bVar5;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar9 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar9 < 4) {
          iVar2 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar2 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar9) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
          local_18->HashSize = iVar2;
          TSet<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsODSCEnabled @ 1480b3d20

bool __cdecl FODSCManager::IsODSCEnabled(void)

{
  bool bVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  pwVar3 = FCommandLine::Get();
  bVar1 = FParse::Value(pwVar3,L"-odschost=",&local_18,true,(wchar_t **)0x0);
  bVar2 = IsRunningCookOnTheFly();
  if ((bVar2) || (bVar2 = false, bVar1)) {
    bVar2 = true;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// OnEnginePreExit @ 1480ba030

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FODSCManager::OnEnginePreExit(FODSCManager *this)

{
  FODSCThread *pFVar1;
  FRunnableThread *pFVar2;
  
  pFVar1 = this->Thread;
  if (pFVar1 != (FODSCThread *)0x0) {
    pFVar2 = pFVar1->Thread;
    if (pFVar2 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x18))(pFVar2,1);
      pFVar2 = pFVar1->Thread;
      if (pFVar2 != (FRunnableThread *)0x0) {
        (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
      }
      pFVar1->Thread = (FRunnableThread *)0x0;
    }
    pFVar1 = this->Thread;
    if (pFVar1 != (FODSCThread *)0x0) {
      (**(code **)(*(longlong *)pFVar1 + 0x28))(pFVar1,1);
    }
    this->Thread = (FODSCThread *)0x0;
  }
  return;
}

// RegisterMaterialInstance @ 1480c1ea0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FODSCManager::RegisterMaterialInstance(UMaterialInstance *param_1)

{
  FODSCManager *pFVar1;
  int iVar2;
  FUObjectItem *pFVar3;
  uint uVar4;
  undefined1 *puVar5;
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar6;
  FWeakObjectPtr local_res10;
  UMaterialInstance *local_res18;
  UMaterialInstance *local_res20;
  
  if (((GODSCManager != (FODSCManager *)0x0) && (GODSCManager->Thread != (FODSCThread *)0x0)) &&
     (pFVar3 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4)),
     ((pFVar3->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
    lpCriticalSection = &GODSCManager->MaterialInstancesCachedUniformExpressionsCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = GODSCManager;
    uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    local_res20 = param_1;
    if (*(int *)&(GODSCManager->MaterialInstancesCachedUniformExpressions).field_0x8 !=
        *(int *)&(GODSCManager->MaterialInstancesCachedUniformExpressions).field_0x34) {
      puVar5 = *(undefined1 **)&(GODSCManager->MaterialInstancesCachedUniformExpressions).field_0x40
      ;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(GODSCManager->MaterialInstancesCachedUniformExpressions).field_0x38;
      }
      iVar2 = *(int *)(puVar5 + (ulonglong)
                                (*(int *)&(GODSCManager->MaterialInstancesCachedUniformExpressions).
                                          field_0x48 - 1U & uVar4) * 4);
      if (iVar2 != -1) {
        do {
          lVar6 = *(longlong *)&GODSCManager->MaterialInstancesCachedUniformExpressions +
                  (longlong)iVar2 * 0x18;
          if (*(UMaterialInstance **)
               (*(longlong *)&GODSCManager->MaterialInstancesCachedUniformExpressions +
               (longlong)iVar2 * 0x18) == param_1) {
            if (lVar6 != 0) goto LAB_1480c1fe6;
            break;
          }
          iVar2 = *(int *)(lVar6 + 0x10);
        } while (iVar2 != -1);
      }
    }
    local_res18 = (UMaterialInstance *)&local_res20;
    TSet<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<void_const_*_&&>_>
              ((TSet<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)&GODSCManager->MaterialInstancesCachedUniformExpressions,(uint)&local_res10,
               (TKeyInitializer<void_const_*_&&> *)(ulonglong)uVar4,(bool *)&local_res18);
    lVar6 = *(longlong *)&pFVar1->MaterialInstancesCachedUniformExpressions +
            (longlong)local_res10.ObjectIndex * 0x18;
LAB_1480c1fe6:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    *(FWeakObjectPtr *)(lVar6 + 8) = local_res10;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// RegisterMaterialShaderMaps @ 1480c2060

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FODSCManager::RegisterMaterialShaderMaps
          (FString *param_1,
          TArray<TRefCountPtr<FMaterialShaderMap>,TSizedDefaultAllocator<32>_> *param_2)

{
  if ((GODSCManager != (FODSCManager *)0x0) && (GODSCManager->Thread != (FODSCThread *)0x0)) {
    FODSCThread::RegisterMaterialShaderMaps(GODSCManager->Thread,param_1,param_2);
    return;
  }
  return;
}

// ReportODSCError @ 1480cb150

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FODSCManager::ReportODSCError(FString *param_1)

{
  int iVar1;
  FString *pFVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar3;
  FString local_18;
  
  if ((GODSCManager != (FODSCManager *)0x0) && (1 < (param_1->Data).ArrayNum)) {
    lpCriticalSection = &GODSCManager->ErrorMessageCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (param_1->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (&GODSCManager->ErrorMessage,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
    pFVar2 = ::FString::FString(&local_18,L"\n");
    iVar1 = (pFVar2->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (&GODSCManager->ErrorMessage,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// ResetCurrentPrimitiveSceneInfo @ 1480cc5f0

void __cdecl FODSCManager::ResetCurrentPrimitiveSceneInfo(void)

{
  *(undefined8 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9000) = 0;
  return;
}

// ResumeODSCForceRecompile @ 1480ccfa0

void __cdecl FODSCManager::ResumeODSCForceRecompile(void)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x8ff0);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ODSCManagerPrivate::ODSCSuspendForceRecompileCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ODSC\\ODSCManager.cpp"
                       ,0x152,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// RetrieveErrorMessage @ 1480cd000

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FODSCManager::RetrieveErrorMessage(FODSCManager *this,FString *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  
  lpCriticalSection = &this->ErrorMessageCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->ErrorMessage).Data.ArrayNum;
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    ::FString::AssignRange
              (param_1,(wchar_t *)(this->ErrorMessage).Data.AllocatorInstance.Data,iVar2);
                    /* WARNING: Could not recover jumptable at 0x0001480cd05d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetCurrentPrimitiveSceneInfo @ 1480d2d50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl FODSCManager::SetCurrentPrimitiveSceneInfo(FPrimitiveSceneInfo *param_1)

{
  *(FPrimitiveSceneInfo **)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9000) =
       param_1;
  return;
}

// ShouldForceRecompileInternal @ 1480d3e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FODSCManager::ShouldForceRecompileInternal
          (FODSCManager *this,FMaterialShaderMap *param_1,FMaterial *param_2)

{
  code *pcVar1;
  bool bVar2;
  TConsoleVariableData<int> *pTVar3;
  FODSCManager *pFVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  byte bVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  longlong *local_100;
  uint uStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  FODSCManager *local_c8;
  longlong *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  ulonglong uVar15;
  
  pTVar3 = CVarODSCRecompileMode.Ref;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_c8 = this;
  bVar5 = IsInParallelGameThread();
  uVar15 = 0;
  if (!bVar5) {
    bVar5 = IsInGameThread();
    uVar9 = 4;
    if (!bVar5) goto LAB_1480d3e57;
  }
  uVar9 = uVar15;
LAB_1480d3e57:
  uVar14 = 0;
  if ((((*(int *)((longlong)pTVar3->ShadowedValue + uVar9) != 0) &&
       (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x8ff0) < 1)) && (param_1->bIsFromODSC == 0)) &&
     ((cVar6 = (**(code **)(param_2->_padding_ + 0x418))(param_2), cVar6 == '\0' ||
      (cVar6 = (**(code **)(param_2->_padding_ + 0xd0))(param_2), cVar6 != '\0')))) {
    if (this->MaterialNameToRecompile != (FName)0x0) {
      uVar17 = (uint)(byte)param_2->ODSCMetaData;
      if (param_2->ODSCMetaData == (atomic<unsigned_char>)0x0) {
        plVar10 = (longlong *)(**(code **)(param_2->_padding_ + 0x4e0))(param_2);
        local_88._0_8_ = 0;
        local_88._8_8_ = 0;
        local_68 = (uint *)0x0;
        local_60 = 0;
        local_5c = 0x80;
        local_58 = 0xffffffff;
        local_54 = 0;
        local_48 = (void *)0x0;
        local_40 = 0;
        (**(code **)(*plVar10 + 0x308))(plVar10,local_88);
        uVar17 = local_60;
        bVar2 = false;
        bVar5 = false;
        uStack_f4 = 1;
        local_e0 = 0;
        uStack_e4 = local_e0;
        if (local_60 != 0) {
          puVar16 = (uint *)(local_88 + 0x10);
          if (local_68 != (uint *)0x0) {
            puVar16 = local_68;
          }
          uVar18 = *puVar16;
          uVar9 = uVar15;
          local_e0 = 0;
          uVar14 = 0;
          while (uVar18 == 0) {
            iVar13 = (int)uVar15;
            local_e0 = (int)uVar9 + 0x20;
            uVar9 = (ulonglong)local_e0;
            uVar14 = iVar13 + 1;
            uVar15 = (ulonglong)uVar14;
            uStack_e4 = local_60;
            if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
            goto LAB_1480d3fb0;
            uVar18 = puVar16[(longlong)iVar13 + 1];
          }
          uStack_f4 = -uVar18 & uVar18;
          uVar15 = (ulonglong)uStack_f4 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_d0 = (int)lVar12;
          uStack_e4 = (local_e0 - 1) + local_d0;
          if ((int)local_60 < (int)uStack_e4) {
            uStack_e4 = local_60;
          }
        }
LAB_1480d3fb0:
        local_100 = (longlong *)local_88;
        local_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
        uVar18 = local_60 & 0xffffffe0;
        iStack_d8 = local_88._8_4_ - local_54;
        uStack_e8 = 0xffffffff;
        TStack_b8.CurrentBitIndex = uStack_e4;
        TStack_b8.UnvisitedBitMask = 0xffffffff;
        TStack_b8._padding_ = CONCAT44(uStack_f4,uVar14);
        iVar13 = (int)local_60 >> 5;
        TStack_b8._28_4_ = uStack_e4;
        TStack_b8.BaseBitIndex = local_e0;
        uStack_98 = CONCAT44(uStack_d4,iStack_d8);
        bVar11 = (byte)local_60;
        uStack_f8 = uVar14;
        uStack_dc = uStack_e4;
        local_c0 = local_100;
        TStack_b8.Array = local_f0;
        if (((int)local_60 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar1 = (code *)swi(3);
          uVar8 = (*pcVar1)();
          return (bool)uVar8;
        }
        pFVar4 = local_c8;
        if (uVar17 != local_60) {
          puVar16 = (uint *)(local_88 + 0x10);
          if (local_68 != (uint *)0x0) {
            puVar16 = local_68;
          }
          uVar14 = -1 << (bVar11 & 0x1f) & puVar16[iVar13];
          while (uVar14 == 0) {
            lVar12 = (longlong)iVar13;
            uVar18 = uVar18 + 0x20;
            iVar13 = iVar13 + 1;
            uVar17 = local_60;
            if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
            goto LAB_1480d40bd;
            uVar14 = puVar16[lVar12 + 1];
          }
          uVar15 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
          lVar12 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          uVar17 = (int)lVar12 + -1 + uVar18;
          if ((int)local_60 < (int)uVar17) {
            uVar17 = local_60;
          }
        }
LAB_1480d40bd:
        while( true ) {
          plVar10 = local_c0;
          if ((int)local_c0[1] - *(int *)((longlong)local_c0 + 0x34) != (int)uStack_98) {
            `TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
          }
          if (((TStack_b8.CurrentBitIndex == uVar17) &&
              (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
             (plVar10 == (longlong *)local_88)) break;
          lVar12 = *(longlong *)(*plVar10 + (longlong)TStack_b8.CurrentBitIndex * 0x10);
          if ((lVar12 != 0) &&
             (bVar5 = bVar2, *(FName *)(lVar12 + 0x18) == pFVar4->MaterialNameToRecompile)) {
            bVar2 = true;
            bVar5 = true;
          }
          TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
        }
        local_40 = 0;
        uVar17 = 2 - bVar5;
        param_2->ODSCMetaData = (atomic<unsigned_char>)(!bVar5 + '\x01');
        if (local_48 != (void *)0x0) {
          FMemory::Free(local_48);
        }
        TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_88);
      }
      return uVar17 == 1;
    }
    bVar5 = IsRunningCookOnTheFly();
    if (!bVar5) {
      return true;
    }
  }
  return false;
}

// StopThread @ 1480d5830

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FODSCManager::StopThread(FODSCManager *this)

{
  FODSCThread *pFVar1;
  FRunnableThread *pFVar2;
  
  pFVar1 = this->Thread;
  if (pFVar1 != (FODSCThread *)0x0) {
    pFVar2 = pFVar1->Thread;
    if (pFVar2 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x18))(pFVar2,1);
      pFVar2 = pFVar1->Thread;
      if (pFVar2 != (FRunnableThread *)0x0) {
        (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
      }
      pFVar1->Thread = (FRunnableThread *)0x0;
    }
    pFVar1 = this->Thread;
    if (pFVar1 != (FODSCThread *)0x0) {
      (**(code **)(*(longlong *)pFVar1 + 0x28))(pFVar1,1);
    }
    this->Thread = (FODSCThread *)0x0;
  }
  return;
}

// SuspendODSCForceRecompile @ 1480d5a70

void __cdecl FODSCManager::SuspendODSCForceRecompile(void)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)_tls_index;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0x8ff0) < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ODSCManagerPrivate::ODSCSuspendForceRecompileCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ODSC\\ODSCManager.cpp"
                       ,0x149,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0x8ff0);
  *piVar1 = *piVar1 + 1;
  return;
}

// Tick @ 1480db690

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FODSCManager::Tick(FODSCManager *this,float param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  FODSCThread *pFVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FODSCManager::Tick(float)_::_2_::FStat_STAT_FODSCManager_Tick>
  FVar13;
  UObject *pUVar14;
  FUObjectItem *pFVar15;
  int iVar16;
  bool bVar17;
  FNameEntryId FVar18;
  TMap<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,0>_>
  *pTVar19;
  ulonglong uVar20;
  ForAnyElementType FVar21;
  FName FVar22;
  uint uVar23;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res18 [2];
  undefined4 local_res20;
  TArray<FODSCMessageHandler_*,TSizedDefaultAllocator<32>_> local_e8;
  FName local_d8;
  FName local_d0;
  longlong *local_b8;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  longlong local_98;
  TSet<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSet<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_88;
  undefined2 local_80;
  FName local_78;
  FName local_70;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  bVar9 = false;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FODSCManager_Tick ==
          (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FODSCManager::Tick(float)_::_2_::FStat_STAT_FODSCManager_Tick>
           )0x0) {
        pFVar12 = ::FName::FName(&local_78,"STAT_FODSCManager_Tick");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FODSCManager_Tick,*pFVar12,
                   L"STAT_FODSCManager_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true
                   ,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar13 = StatPtr_STAT_FODSCManager_Tick;
  if (StatPtr_STAT_FODSCManager_Tick ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FODSCManager::Tick(float)_::_2_::FStat_STAT_FODSCManager_Tick>
       )0x0) {
    pFVar12 = ::FName::FName(&local_70,"STAT_FODSCManager_Tick");
    FVar13 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FODSCManager::Tick(float)_::_2_::FStat_STAT_FODSCManager_Tick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FODSCManager_Tick,*pFVar12,
                          L"STAT_FODSCManager_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar13;
  bVar6 = false;
  bVar8 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FVar18 = FVar22.ComparisonIndex.Value;
  uVar23 = FVar22.Number;
  if ((FVar18.Value != 0) || (uVar23 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.ComparisonIndex.Value = FVar18.Value;
        local_d8.Number = uVar23;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ODSC\\ODSCManager.cpp"
                   ,0xb9);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar18.Value;
      uStackX_c = uVar23;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar7 = true;
      goto LAB_1480db7ef;
    }
  }
  bVar7 = false;
  FVar22 = local_d0;
LAB_1480db7ef:
  pFVar2 = this->Thread;
  bVar17 = false;
  if (pFVar2 != (FODSCThread *)0x0) {
    (**(code **)(pFVar2->AllRequestsDoneEvent->_padding_ + 0x18))();
    (**(code **)(pFVar2->WakeupEvent->_padding_ + 0x10))();
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    FODSCThread::GetCompletedRequests(this->Thread,&local_e8);
    lpCriticalSection = &this->MaterialInstancesCachedUniformExpressionsCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar19 = &this->MaterialInstancesCachedUniformExpressions;
    TSet<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_68,
               (TSet<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)pTVar19);
    local_80 = 0;
    stack0xffffffffffffff58 = local_68._16_16_;
    local_b8 = (longlong *)local_68._0_8_;
    auStack_b0._0_8_ = local_68._8_8_;
    local_98 = local_48;
    pTStack_90 = pTStack_40;
    uVar20 = local_68._24_8_ >> 0x20;
    local_88 = (TSet<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)pTVar19;
    if (local_68._28_4_ < *(int *)(local_68._16_8_ + 0x18)) {
      do {
        pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      (*local_b8 + (longlong)(int)uVar20 * 0x18 + 8));
        if (pUVar14 == (UObject *)0x0) {
LAB_1480db8e3:
          TSet<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_90,(int)uVar20);
          local_80 = CONCAT11(local_80._1_1_,1);
        }
        else {
          pFVar15 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar14->field_0xc);
          if (((pFVar15->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) == 0)
          goto LAB_1480db8e3;
          bVar9 = true;
        }
        uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
        uVar20 = (ulonglong)uStack_9c;
      } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
      if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
        uVar23 = *(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34;
        if (uVar23 < 4) {
          iVar11 = 1;
        }
        else {
          uVar20 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          local_res20 = (undefined4)lVar4;
          iVar11 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar23) && (local_88->HashSize < iVar11)) || (iVar11 < local_88->HashSize)) {
          local_88->HashSize = iVar11;
          TSet<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Rehash(local_88);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar11 = local_e8.ArrayNum;
    if ((local_e8.ArrayNum != 0) && (bVar9)) {
      FlushAsyncLoading(-1);
      iVar11 = local_e8.ArrayNum;
    }
    pFVar1 = local_e8.AllocatorInstance.Data + (longlong)iVar11 * 8;
    FVar21.Data = local_e8.AllocatorInstance.Data;
    iVar16 = iVar11;
    while( true ) {
      if (iVar16 != iVar11) {
        local_res8 = local_res8 & 0xffffff00;
        `TCheckedPointerIterator<FODSCMessageHandler_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (FVar21.Data == pFVar1) break;
      puVar3 = *(undefined8 **)FVar21.Data;
      if (puVar3 == (undefined8 *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("CompletedRequest",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ODSC\\ODSCManager.cpp"
                           ,0xcc,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      ProcessCookOnTheFlyShaders
                (false,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar3 + 0xb),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar3 + 2),
                 (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar3 + 0xd));
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      FVar21.Data = FVar21.Data + 8;
      iVar16 = local_e8.ArrayNum;
    }
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    bVar17 = true;
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return bVar17;
}

// TryLoadGlobalShaders @ 1480dd470

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FODSCManager::TryLoadGlobalShaders(FODSCManager *this,EShaderPlatform param_1)

{
  FScriptContainerElement *pFVar1;
  Type TVar2;
  FODSCThread *pFVar3;
  FEvent *pFVar4;
  undefined8 *puVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  FCachedSystemScalabilityCVars *pFVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  FShaderCompilerFlags local_res8;
  undefined1 local_res10 [8];
  TArray<FODSCMessageHandler_*,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  
  if ((GODSCManager == (FODSCManager *)0x0) || (GODSCManager->Thread == (FODSCThread *)0x0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsODSCActive()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ODSC\\ODSCManager.cpp"
                       ,0x1b4,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  TVar2 = FGenericDataDrivenShaderPlatformInfo::Infos[param_1].MaxFeatureLevel;
  pFVar9 = GetCachedScalabilityCVars();
  local_res8.Data = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  FODSCThread::AddRequest
            (this->Thread,&local_28,&local_38,param_1,TVar2,pFVar9->MaterialQualityLevel,Changed,
             &local_res8);
  DestructItems<FString,int>((FString *)0x0,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar3 = this->Thread;
  (**(code **)(pFVar3->AllRequestsDoneEvent->_padding_ + 0x18))();
  (**(code **)(pFVar3->WakeupEvent->_padding_ + 0x10))();
  pFVar4 = this->Thread->AllRequestsDoneEvent;
  (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4,0xffffffff,0);
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  FODSCThread::GetCompletedRequests(this->Thread,&local_48);
  iVar7 = local_48.ArrayNum;
  uVar10 = (ulonglong)local_48.ArrayNum;
  pFVar1 = local_48.AllocatorInstance.Data + uVar10 * 8;
  FVar11.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar10 != iVar7) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FODSCMessageHandler_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar11.Data == pFVar1) break;
    puVar5 = *(undefined8 **)FVar11.Data;
    if (puVar5 == (undefined8 *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompletedRequest",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ODSC\\ODSCManager.cpp"
                         ,0x1bf,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    ProcessCookOnTheFlyShaders
              (false,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar5 + 0xb),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar5 + 2),
               (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar5 + 0xd));
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    uVar10 = local_48._8_8_ & 0xffffffff;
    FVar11.Data = FVar11.Data + 8;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// UnregisterMaterialInstance @ 1480e0260

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FODSCManager::UnregisterMaterialInstance(UMaterialInstance *param_1)

{
  uint uVar1;
  int iVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar3;
  
  if (GODSCManager != (FODSCManager *)0x0) {
    lpCriticalSection = &GODSCManager->MaterialInstancesCachedUniformExpressionsCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(int *)&(GODSCManager->MaterialInstancesCachedUniformExpressions).field_0x8 !=
        *(int *)&(GODSCManager->MaterialInstancesCachedUniformExpressions).field_0x34) {
      puVar3 = *(undefined1 **)&(GODSCManager->MaterialInstancesCachedUniformExpressions).field_0x40
      ;
      uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &(GODSCManager->MaterialInstancesCachedUniformExpressions).field_0x38;
      }
      iVar2 = *(int *)(puVar3 + (((ulonglong)(uVar1 >> 0x10) ^ (longlong)(int)uVar1) &
                                (longlong)
                                *(int *)&(GODSCManager->MaterialInstancesCachedUniformExpressions).
                                         field_0x48 - 1U) * 4);
      if (iVar2 != -1) {
        do {
          if (*(UMaterialInstance **)
               (*(longlong *)&GODSCManager->MaterialInstancesCachedUniformExpressions +
               (longlong)iVar2 * 0x18) == param_1) {
            TSet<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                             *)&GODSCManager->MaterialInstancesCachedUniformExpressions,iVar2);
            break;
          }
          iVar2 = *(int *)(*(longlong *)&GODSCManager->MaterialInstancesCachedUniformExpressions +
                           0x10 + (longlong)iVar2 * 0x18);
        } while (iVar2 != -1);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// UnregisterMaterialName @ 1480e0360

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FODSCManager::UnregisterMaterialName(FMaterial *param_1)

{
  FODSCThread *pFVar1;
  FMaterial *local_res10;
  
  if ((GODSCManager != (FODSCManager *)0x0) &&
     (pFVar1 = GODSCManager->Thread, pFVar1 != (FODSCThread *)0x0)) {
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar1->RequestHashesRWLock);
    local_res10 = param_1;
    if (*(int *)&(pFVar1->ODSCPointerToNames).field_0x8 !=
        *(int *)&(pFVar1->ODSCPointerToNames).field_0x34) {
      TSet<TTuple<unsigned___int64,FName>,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned___int64>
                ((TSet<TTuple<unsigned___int64,FName>,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>,FDefaultSetAllocator>
                  *)&pFVar1->ODSCPointerToNames,
                 (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1,(ulong64 *)&local_res10);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&pFVar1->RequestHashesRWLock);
  }
  return;
}

// UseDefaultMaterialOnRecompile @ 1480e2eb0

bool __cdecl FODSCManager::UseDefaultMaterialOnRecompile(void)

{
  return 0 < GODSCUseDefaultMaterialOnRecompile;
}

