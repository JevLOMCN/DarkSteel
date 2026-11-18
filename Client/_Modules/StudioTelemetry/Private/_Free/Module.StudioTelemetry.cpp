// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StudioTelemetry
// Functions: 18

// `dynamic_initializer_for_'HttpVersion'' @ 1414453c0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'LogStudioTelemetry'' @ 1414453e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStudioTelemetry__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogStudioTelemetry,L"LogStudioTelemetry",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogStudioTelemetry__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantStudioTelemetry'' @ 141445420

void __cdecl _dynamic_initializer_for__ModuleRegistrantStudioTelemetry__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "StudioTelemetry";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"StudioTelemetry",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FStudioTelemetry>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'ProviderSection'' @ 141445470

void __cdecl _dynamic_initializer_for__ProviderSection__(void)

{
  atexit(_dynamic_atexit_destructor_for__ProviderSection__);
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 141445490

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'UnixSocketPath'' @ 1414454b0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `scalar_deleting_destructor' @ 14ea1a1d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FStudioTelemetry,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FStudioTelemetry,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea1a200

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea1a230

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAnalyticsProviderBroadcast,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAnalyticsProviderBroadcast,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea1a270

void * __thiscall
FAnalyticsProviderBroadcast::_scalar_deleting_destructor_
          (FAnalyticsProviderBroadcast *this,uint param_1)

{
  ~FAnalyticsProviderBroadcast(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea1a2b0

void * __thiscall
FStudioTelemetry::_scalar_deleting_destructor_(FStudioTelemetry *this,uint param_1)

{
  ~FStudioTelemetry(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// CheckForDuplicateAttributes @ 14ea1a430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
CheckForDuplicateAttributes
          (FString *param_1,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  
  iVar6 = param_2->ArrayNum;
  uVar9 = 0;
  if (0 < iVar6) {
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar6) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar8 = uVar9 + 1;
      iVar6 = param_2->ArrayNum;
      pFVar10 = (param_2->AllocatorInstance).Data + lVar11;
      lVar4 = lVar11;
      if ((int)uVar8 < iVar6) {
        do {
          uVar7 = 0;
          if ((int)uVar8 < iVar6) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (param_2->AllocatorInstance).Data;
          iVar6 = *(int *)(pFVar10 + 8);
          iVar1 = *(int *)(pFVar2 + lVar4 + 0x38);
          if (iVar6 == iVar1) {
            if (1 < iVar6) {
              iVar6 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)pFVar10,*(wchar_t **)(pFVar2 + lVar4 + 0x30));
              bVar5 = iVar6 == 0;
              goto LAB_14ea1a540;
            }
LAB_14ea1a547:
            if (2 < (byte)LogAnalytics._0_1_) {
              UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogAnalytics);
            }
            bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("!IsDuplicateAttribute",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StudioTelemetry\\Private\\AnalyticsProviderBroadcast.cpp"
                               ,0x118,L"");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            bVar5 = iVar6 + iVar1 == 1;
LAB_14ea1a540:
            if (bVar5) goto LAB_14ea1a547;
          }
          iVar6 = param_2->ArrayNum;
          uVar8 = uVar8 + 1;
          lVar4 = lVar4 + 0x30;
        } while ((int)uVar8 < iVar6);
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0x30;
    } while ((int)uVar9 < iVar6);
  }
  return;
}

// GetAnalyticsProviderConfiguration @ 14ea1b520

FString * __cdecl
GetAnalyticsProviderConfiguration(FString *__return_storage_ptr__,FString *param_1,bool param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar1 = L"";
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  if (ProviderSection.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)ProviderSection.Data.AllocatorInstance;
  }
  FConfigCacheIni::GetString(GConfig,pwVar1,pwVar2,__return_storage_ptr__,&GEngineIni);
  return __return_storage_ptr__;
}

// GetEnvironmentValriable @ 14ea1b710

FString * __cdecl
GetEnvironmentValriable(FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_18;
  
  pwVar6 = L"";
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pwVar3 = FCommandLine::Get();
  bVar2 = FParse::Value(pwVar3,pwVar5,__return_storage_ptr__,true,(wchar_t **)0x0);
  if (!bVar2) {
    if ((param_2->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar4 = FWindowsPlatformMisc::GetEnvironmentVariable(&local_18,pwVar6);
    if (__return_storage_ptr__ != pFVar4) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// IMPLEMENT_MODULE_StudioTelemetry @ 14ea1ed60

void __cdecl IMPLEMENT_MODULE_StudioTelemetry(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogStudioTelemetry'' @ 15046d980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStudioTelemetry__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStudioTelemetry);
  return;
}

// `dynamic_atexit_destructor_for_'ProviderSection'' @ 15046d9a0

void __cdecl _dynamic_atexit_destructor_for__ProviderSection__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ProviderSection.Data.AllocatorInstance.Data;
  if (ProviderSection.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ProviderSection.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'StudioTelemetryInstance'' @ 15046d9c0

void __cdecl
`FStudioTelemetry::Get'::__l2::_dynamic_atexit_destructor_for__StudioTelemetryInstance__(void)

{
  FStudioTelemetry::~FStudioTelemetry(&StudioTelemetryInstance);
  return;
}

