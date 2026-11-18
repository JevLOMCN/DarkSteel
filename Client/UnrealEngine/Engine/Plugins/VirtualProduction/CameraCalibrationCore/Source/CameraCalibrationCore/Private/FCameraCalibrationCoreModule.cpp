// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 7

// StartupModule @ 14d679c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FCameraCalibrationCoreModule::StartupModule(FCameraCalibrationCoreModule *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  IPluginManager *pIVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  FDelegateHandle FVar7;
  wchar_t *pwVar8;
  int *piVar9;
  FCameraCalibrationCoreModule *local_res8;
  FCameraCalibrationCoreModule *local_res10;
  <lambda_1> local_res18;
  <lambda_1> local_res20;
  FString local_88;
  FString local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  void *local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TStringView<wchar_t> local_38;
  wchar_t *local_28;
  undefined4 local_20;
  
  pIVar4 = IPluginManager::Get();
  local_68 = 0x507b6708;
  uStack_64 = 1;
  uStack_60 = 0x15;
  plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x70))(pIVar4,local_48,&local_68);
  if (*plVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  puVar6 = (undefined8 *)(**(code **)(*(longlong *)*plVar5 + 0x20))();
  local_20 = 7;
  local_38.DataPtr = (wchar_t *)*puVar6;
  local_38.Size = *(int *)(puVar6 + 1) + -1;
  if (*(int *)(puVar6 + 1) == 0) {
    local_38.Size = 0;
  }
  local_28 = L"Shaders";
  FPaths::CombineInternal(&local_78,&local_38,2);
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  ::FString::FString(&local_88,L"/Plugin/CameraCalibrationCore");
  AddShaderSourceDirectoryMapping(&local_88,&local_78);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  local_res8 = this;
  if (*piVar9 < `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar8 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar8,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    if (GEngine != (UEngine *)0x0) {
      cVar3 = (**(code **)(GEngine->_padding_ + 0x2c0))();
      if (cVar3 != '\0') {
        `FCameraCalibrationCoreModule::ApplyStartupLensFile'::__l2::<lambda_1>::operator()
                  (&local_res8);
        goto LAB_14d679db9;
      }
    }
    FVar7 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddLambda<_FCameraCalibrationCoreModule::ApplyStartupLensFile_::__l2::<lambda_1>_&>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)&FCoreDelegates::OnPostEngineInit,&local_res18);
                    /* WARNING: Load size is inaccurate */
    (this->PostEngineInitHandle).ID = *FVar7.ID;
  }
LAB_14d679db9:
  local_res10 = this;
  if (*piVar9 < `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar8 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar8,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    if (GEngine != (UEngine *)0x0) {
      cVar3 = (**(code **)(GEngine->_padding_ + 0x2c0))();
      if (cVar3 != '\0') {
        `FCameraCalibrationCoreModule::RegisterDistortionModels'::__l2::<lambda_1>::operator()
                  (&local_res10);
        goto LAB_14d679e21;
      }
    }
    FVar7 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddLambda<_FCameraCalibrationCoreModule::RegisterDistortionModels_::__l2::<lambda_1>_&>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)&FCoreDelegates::OnPostEngineInit,&local_res20);
                    /* WARNING: Load size is inaccurate */
    (this->PostEngineInitHandle).ID = *FVar7.ID;
  }
LAB_14d679e21:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// ShutdownModule @ 14d679ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FCameraCalibrationCoreModule::ShutdownModule(FCameraCalibrationCoreModule *this)

{
  UCameraCalibrationSubsystem *this_00;
  UClass *local_res8;
  
  if ((GEngine != (UEngine *)0x0) &&
     (this_00 = UEngine::GetEngineSubsystem<UCameraCalibrationSubsystem>(GEngine),
     this_00 != (UCameraCalibrationSubsystem *)0x0)) {
    local_res8 = USphericalLensModel::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UCameraCalibrationSubsystem::UnregisterDistortionModel
              (this_00,(TSubclassOf<ULensModel>)&local_res8);
    local_res8 = UAnamorphicLensModel::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UCameraCalibrationSubsystem::UnregisterDistortionModel
              (this_00,(TSubclassOf<ULensModel>)&local_res8);
    local_res8 = UBrownConradyUDLensModel::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UCameraCalibrationSubsystem::UnregisterDistortionModel
              (this_00,(TSubclassOf<ULensModel>)&local_res8);
    local_res8 = UBrownConradyDULensModel::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UCameraCalibrationSubsystem::UnregisterDistortionModel
              (this_00,(TSubclassOf<ULensModel>)&local_res8);
  }
  if ((this->PostEngineInitHandle).ID == 0) {
    return;
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,(FDelegateHandle)(this->PostEngineInitHandle).ID);
  return;
}

// operator() @ 14d6ae400

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
`FCameraCalibrationCoreModule::ApplyStartupLensFile'::__l2::<lambda_1>::operator()(void *this)

{
  FScriptContainerElement *_Src;
  UObject *pUVar1;
  code *pcVar2;
  TConsoleVariableData<FString> *pTVar3;
  bool bVar4;
  size_t sVar5;
  UClass *pUVar6;
  ULensFile *pUVar7;
  ULensFile *pUVar8;
  UCameraCalibrationSubsystem *pUVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  int iVar14;
  FName local_res10;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  wchar_t *local_88;
  undefined8 uStack_80;
  FString local_78;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  FString local_38;
  FString local_28;
  
  pTVar3 = CVarStartupLensFile.Ref;
  iVar14 = 0;
  bVar4 = IsInParallelGameThread();
  if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = pTVar3->ShadowedValue[0].Data.ArrayNum;
  lVar13 = (longlong)local_90;
  _Src = pTVar3->ShadowedValue[0].Data.AllocatorInstance.Data;
  if (local_90 == 0) {
    local_8c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_90,0,&local_98,local_90,&local_8c);
    memcpy(local_98.Data,_Src,lVar13 * 2);
  }
  pUVar8 = (ULensFile *)0x0;
  if ((local_90 != 0) && (pUVar8 = (ULensFile *)0x0, local_90 != 1)) {
    uStack_80._0_4_ = 0;
    uStack_80._4_4_ = 0;
    local_88 = (wchar_t *)0x0;
    local_68 = local_98.Data;
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      sVar5 = wcslen((wchar_t *)local_98.Data);
      iVar14 = (int)sVar5;
    }
    iStack_60 = iVar14;
    pUVar6 = ULensFile::StaticClass();
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_58.DataPtr = local_88;
    local_58.Size = (int)uStack_80;
    local_58._12_4_ = uStack_80._4_4_;
    local_48.DataPtr = (wchar_t *)local_68;
    pUVar7 = (ULensFile *)
             StaticLoadObject(pUVar6,(UObject *)0x0,&local_48,&local_58,0,(UPackageMap *)0x0,true,
                              (FLinkerInstancingContext *)0x0);
    pUVar8 = (ULensFile *)0x0;
    if (pUVar7 != (ULensFile *)0x0) {
      pUVar6 = ULensFile::StaticClass();
      iVar14 = (int)pUVar6->_padding_;
      if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar14) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
          &pUVar6->_padding_)) {
        pFVar10 = GetTypeName<ULensFile>(&local_38);
        pwVar12 = L"";
        if ((pFVar10->Data).ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
        pFVar10 = GetFullNameForCastLogError<UObject>(&local_28,(UObject *)pUVar7);
        if ((pFVar10->Data).ArrayNum != 0) {
          pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar12,pwVar11);
      }
      pUVar8 = pUVar7;
      if (3 < (byte)LogCameraCalibrationCore._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  (&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore);
      }
    }
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  if (pUVar8 != (ULensFile *)0x0) goto LAB_14d6ae677;
  pUVar6 = UCameraCalibrationSettings::StaticClass();
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  pUVar1 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar8 = (ULensFile *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar1[1].field_0x10);
  if (pUVar8 == (ULensFile *)0x0) {
    if (*(longlong *)&pUVar1[1].field_0x18 != 0) {
      FSoftObjectPath::TryLoad
                ((FSoftObjectPath *)&pUVar1[1].field_0x18,(FUObjectSerializeContext *)0x0);
      pUVar8 = (ULensFile *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar1[1].field_0x10);
      goto LAB_14d6ae5fc;
    }
  }
  else {
LAB_14d6ae5fc:
    if (pUVar8 != (ULensFile *)0x0) {
      pUVar6 = ULensFile::StaticClass();
      iVar14 = (int)pUVar6->_padding_;
      if ((iVar14 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar14 * 8) ==
          &pUVar6->_padding_)) {
        if (3 < (byte)LogCameraCalibrationCore._0_1_) {
          local_res10 = (FName)pUVar8->_padding_;
          ::FName::ToString(&local_res10,&local_78);
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14d6ae677;
      }
    }
  }
  pUVar8 = (ULensFile *)0x0;
LAB_14d6ae677:
  pUVar9 = UEngine::GetEngineSubsystem<UCameraCalibrationSubsystem>(GEngine);
  if ((pUVar9 == (UCameraCalibrationSubsystem *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubSystem",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\CameraCalibrationCoreModule.cpp"
                         ,0x65,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (ULensFile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (pUVar9->DefaultLensFile).field0_0x0.DebugPtr = pUVar8;
  return;
}

// operator() @ 14d6b0d30

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
`FCameraCalibrationCoreModule::RegisterDistortionModels'::__l2::<lambda_1>::operator()(void *this)

{
  UCameraCalibrationSubsystem *this_00;
  UClass *local_res10 [3];
  
  this_00 = UEngine::GetEngineSubsystem<UCameraCalibrationSubsystem>(GEngine);
  local_res10[0] = USphericalLensModel::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  UCameraCalibrationSubsystem::RegisterDistortionModel(this_00,(TSubclassOf<ULensModel>)local_res10)
  ;
  local_res10[0] = UAnamorphicLensModel::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  UCameraCalibrationSubsystem::RegisterDistortionModel(this_00,(TSubclassOf<ULensModel>)local_res10)
  ;
  local_res10[0] = UBrownConradyUDLensModel::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  UCameraCalibrationSubsystem::RegisterDistortionModel(this_00,(TSubclassOf<ULensModel>)local_res10)
  ;
  local_res10[0] = UBrownConradyDULensModel::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  UCameraCalibrationSubsystem::RegisterDistortionModel(this_00,(TSubclassOf<ULensModel>)local_res10)
  ;
  return;
}

// ApplyStartupLensFile @ 14d6b6690

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
FCameraCalibrationCoreModule::ApplyStartupLensFile(FCameraCalibrationCoreModule *this)

{
  char cVar1;
  FDelegateHandle FVar2;
  wchar_t *pwVar3;
  FCameraCalibrationCoreModule *local_res8;
  <lambda_1> local_res10 [3];
  
  local_res8 = this;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar3 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar3,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    if (GEngine != (UEngine *)0x0) {
      cVar1 = (**(code **)(GEngine->_padding_ + 0x2c0))();
      if (cVar1 != '\0') {
        `FCameraCalibrationCoreModule::ApplyStartupLensFile'::__l2::<lambda_1>::operator()
                  (&local_res8);
        return;
      }
    }
    FVar2 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddLambda<_FCameraCalibrationCoreModule::ApplyStartupLensFile_::__l2::<lambda_1>_&>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)&FCoreDelegates::OnPostEngineInit,local_res10);
                    /* WARNING: Load size is inaccurate */
    (this->PostEngineInitHandle).ID = *FVar2.ID;
  }
  return;
}

// RegisterDistortionModels @ 14d6e6920

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
FCameraCalibrationCoreModule::RegisterDistortionModels(FCameraCalibrationCoreModule *this)

{
  char cVar1;
  FDelegateHandle FVar2;
  wchar_t *pwVar3;
  FCameraCalibrationCoreModule *local_res8;
  <lambda_1> local_res10 [3];
  
  local_res8 = this;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar3 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar3,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    if (GEngine != (UEngine *)0x0) {
      cVar1 = (**(code **)(GEngine->_padding_ + 0x2c0))();
      if (cVar1 != '\0') {
        `FCameraCalibrationCoreModule::RegisterDistortionModels'::__l2::<lambda_1>::operator()
                  (&local_res8);
        return;
      }
    }
    FVar2 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddLambda<_FCameraCalibrationCoreModule::RegisterDistortionModels_::__l2::<lambda_1>_&>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)&FCoreDelegates::OnPostEngineInit,local_res10);
                    /* WARNING: Load size is inaccurate */
    (this->PostEngineInitHandle).ID = *FVar2.ID;
  }
  return;
}

// UnregisterDistortionModels @ 14d6f40f0

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
FCameraCalibrationCoreModule::UnregisterDistortionModels(FCameraCalibrationCoreModule *this)

{
  UCameraCalibrationSubsystem *this_00;
  UClass *local_res10 [3];
  
  if ((GEngine != (UEngine *)0x0) &&
     (this_00 = UEngine::GetEngineSubsystem<UCameraCalibrationSubsystem>(GEngine),
     this_00 != (UCameraCalibrationSubsystem *)0x0)) {
    local_res10[0] = USphericalLensModel::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10[0]);
    }
    UCameraCalibrationSubsystem::UnregisterDistortionModel
              (this_00,(TSubclassOf<ULensModel>)local_res10);
    local_res10[0] = UAnamorphicLensModel::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10[0]);
    }
    UCameraCalibrationSubsystem::UnregisterDistortionModel
              (this_00,(TSubclassOf<ULensModel>)local_res10);
    local_res10[0] = UBrownConradyUDLensModel::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10[0]);
    }
    UCameraCalibrationSubsystem::UnregisterDistortionModel
              (this_00,(TSubclassOf<ULensModel>)local_res10);
    local_res10[0] = UBrownConradyDULensModel::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10[0]);
    }
    UCameraCalibrationSubsystem::UnregisterDistortionModel
              (this_00,(TSubclassOf<ULensModel>)local_res10);
  }
  return;
}

