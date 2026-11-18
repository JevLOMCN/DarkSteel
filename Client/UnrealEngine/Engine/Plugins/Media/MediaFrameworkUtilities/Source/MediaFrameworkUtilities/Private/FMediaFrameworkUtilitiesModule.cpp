// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 4

// StartupModule @ 14d7cb3e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FMediaFrameworkUtilitiesModule::StartupModule(FMediaFrameworkUtilitiesModule *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  UClass *this_00;
  FDelegateHandle FVar4;
  wchar_t *pwVar5;
  <lambda_1> local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar5 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar5,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) ||
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
      false)) {
    this_00 = UMediaProfileSettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    if (*(char *)((this_00->ClassDefaultObject).field0_0x0.DebugPtr + 1) == '\0') {
      return;
    }
  }
  if (((GEngine != (UEngine *)0x0) &&
      (cVar2 = (**(code **)(GEngine->_padding_ + 0x2c0))(), cVar2 != '\0')) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!(GEngine && GEngine->IsInitialized())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaFrameworkUtilities\\Source\\MediaFrameworkUtilities\\Private\\MediaFrameworkUtilitiesModule.cpp"
                         ,0x8b,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FVar4 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddLambda<_FMediaFrameworkUtilitiesModule::ApplyStartupMediaProfile_::__l2::<lambda_1>_&>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&FCoreDelegates::OnFEngineLoopInitComplete,&local_res10);
                    /* WARNING: Load size is inaccurate */
  (this->InitHandle).ID = *FVar4.ID;
  return;
}

// ShutdownModule @ 14d7cb510

void __thiscall FMediaFrameworkUtilitiesModule::ShutdownModule(FMediaFrameworkUtilitiesModule *this)

{
  FDelegateHandle FVar1;
  
  FVar1.ID = (this->InitHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnFEngineLoopInitComplete,FVar1);
  }
  if (GIsRequestingExit == false) {
                    /* WARNING: Could not recover jumptable at 0x00014d7cb546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((this->MediaProfileManager)._padding_ + 0x10))(&this->MediaProfileManager,0);
    return;
  }
  return;
}

// GetProfileManager @ 14d7cb560

IMediaProfileManager * __thiscall
FMediaFrameworkUtilitiesModule::GetProfileManager(FMediaFrameworkUtilitiesModule *this)

{
  return (IMediaProfileManager *)&this->MediaProfileManager;
}

// operator() @ 14d7d2000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FMediaFrameworkUtilitiesModule::ApplyStartupMediaProfile'::__l2::<lambda_1>::operator()(void *this)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  TConsoleVariableData<FString> *pTVar2;
  bool bVar3;
  size_t sVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  int iVar10;
  UObject *pUVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  wchar_t *local_68;
  undefined8 uStack_60;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  FString local_28;
  FString local_18;
  
  pTVar2 = CVarMediaUtilsStartupProfile.Ref;
  pUVar11 = (UObject *)0x0;
  iVar10 = 0;
  bVar3 = IsInParallelGameThread();
  if (((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = pTVar2->ShadowedValue[0].Data.ArrayNum;
  lVar12 = (longlong)local_70;
  _Src = pTVar2->ShadowedValue[0].Data.AllocatorInstance.Data;
  if (local_70 == 0) {
    local_6c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_70,0,&local_78,local_70,&local_6c);
    memcpy(local_78.Data,_Src,lVar12 * 2);
  }
  pUVar7 = pUVar11;
  if ((local_70 != 0) && (pUVar7 = (UObject *)0x0, local_70 != 1)) {
    uStack_60._0_4_ = 0;
    uStack_60._4_4_ = 0;
    local_68 = (wchar_t *)0x0;
    local_58 = local_78.Data;
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      sVar4 = wcslen((wchar_t *)local_78.Data);
      iVar10 = (int)sVar4;
    }
    iStack_50 = iVar10;
    pUVar5 = UMediaProfile::StaticClass();
    local_38._12_4_ = uStack_4c;
    local_38.Size = iStack_50;
    local_48.DataPtr = local_68;
    local_48.Size = (int)uStack_60;
    local_48._12_4_ = uStack_60._4_4_;
    local_38.DataPtr = (wchar_t *)local_58;
    pUVar6 = StaticLoadObject(pUVar5,(UObject *)0x0,&local_38,&local_48,0,(UPackageMap *)0x0,true,
                              (FLinkerInstancingContext *)0x0);
    pUVar7 = pUVar11;
    if (pUVar6 != (UObject *)0x0) {
      pUVar5 = UMediaProfile::StaticClass();
      iVar10 = (int)pUVar5->_padding_;
      if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar10) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
          &pUVar5->_padding_)) {
        pFVar8 = GetTypeName<UMediaProfile>(&local_28);
        pwVar13 = L"";
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        pFVar8 = GetFullNameForCastLogError<UObject>(&local_18,pUVar6);
        if ((pFVar8->Data).ArrayNum != 0) {
          pwVar13 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar13,pwVar9);
      }
      pUVar7 = pUVar6;
      if (3 < (byte)LogMediaFrameworkUtilities._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  (&`public:___cdecl_`private:_void___cdecl_FMediaFrameworkUtilitiesModule::ApplyStartupMediaProfile(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l13::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
      }
    }
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (pUVar7 != (UObject *)0x0) goto LAB_14d7d2237;
  pUVar5 = UMediaProfileSettings::StaticClass();
  if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar5);
  }
  pUVar6 = (pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)(pUVar6 + 2));
  if (pUVar7 == (UObject *)0x0) {
    if (*(longlong *)&pUVar6[2].field_0x8 != 0) {
      FSoftObjectPath::TryLoad
                ((FSoftObjectPath *)&pUVar6[2].field_0x8,(FUObjectSerializeContext *)0x0);
      pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)(pUVar6 + 2));
      goto LAB_14d7d220c;
    }
  }
  else {
LAB_14d7d220c:
    if (pUVar7 != (UObject *)0x0) {
      pUVar5 = UMediaProfile::StaticClass();
      iVar10 = (int)pUVar5->_padding_;
      if ((iVar10 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar10 * 8) ==
          &pUVar5->_padding_)) goto LAB_14d7d2237;
    }
  }
  pUVar7 = pUVar11;
LAB_14d7d2237:
  (**(code **)(*(longlong *)(*(longlong *)this + 8) + 0x10))
            ((longlong *)(*(longlong *)this + 8),pUVar7);
  return;
}

