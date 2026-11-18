// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationUtils
// Functions: 6

// FAutomationUtilsGameplayAutomationScreenshotInstance @ 14e7ec4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FAutomationUtilsGameplayAutomationScreenshotInstance * __thiscall
FAutomationUtilsGameplayAutomationScreenshotInstance::
FAutomationUtilsGameplayAutomationScreenshotInstance
          (FAutomationUtilsGameplayAutomationScreenshotInstance *this,FString *param_1,float param_2
          ,float param_3,FString *param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IStereoRendering *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  UWorldProxy UVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  ForAnyElementType FVar13;
  FJsonObject *pFVar14;
  FJsonObject *pFVar15;
  FAutomationUtilsGameplayAutomationScreenshotInstance *pFVar16;
  FString *pFVar17;
  FGuid *pFVar18;
  FEngineVersion *pFVar19;
  FUtf8String *pFVar20;
  wchar_t *pwVar21;
  TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *pTVar22;
  FArchiveState *this_00;
  TReferenceControllerBase<1> *pTVar23;
  TReferenceControllerBase<1> *pTVar24;
  FOutputDeviceRedirector *pFVar25;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar26;
  FSceneViewExtensionBase *this_01;
  TRawPtrProxy<FAutomationUtilsGameplayViewExtension> TVar27;
  FTSTicker *this_02;
  ForAnyElementType FVar28;
  undefined ***pppuVar29;
  int iVar30;
  TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *pTVar31;
  FSharedReferencer<1> FVar32;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *this_03;
  undefined1 auStackY_798 [32];
  TSharedPtr<FJsonObject,1> local_758;
  FString local_748;
  FAutoRegister local_738 [8];
  TReferenceControllerBase<1> *local_730;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_728;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  FString local_6a8;
  FString local_698;
  FString local_688;
  uchar *local_678;
  FString local_670;
  FString local_660;
  FString local_650;
  FString local_640;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_630;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_620;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_610;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_600;
  FString local_5f0;
  FName local_5e0;
  UWorld *local_5d8;
  TRawPtrProxy<FJsonObject> local_5d0;
  TRawPtrProxy<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_> local_5c8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *local_5c0;
  FAutomationUtilsGameplayAutomationScreenshotInstance *local_5b8;
  FString *local_5b0;
  FString *local_5a8;
  FString local_5a0;
  FString local_590;
  FString local_580;
  FString local_570;
  FString local_560;
  TSharedRef<FAutomationUtilsGameplayViewExtension,1> local_548;
  TSharedRef<ISceneViewExtension,1> local_538;
  TSharedPtr<FAutomationUtilsGameplayViewExtension,1> local_528;
  FString local_518;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  TVector2<double>_u_0 local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1> local_2a8;
  TSharedPtr<FJsonObject,1> local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FQualityLevels local_238;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [8];
  FString local_1c0;
  FString local_1b0;
  FUtf8String local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  TWeakPtr<FTSTicker::FElement,1> local_100;
  FString local_f0;
  FGuid local_e0;
  FGuid local_d0;
  code *local_b8 [2];
  undefined **local_a8;
  FAutomationUtilsGameplayAutomationScreenshotInstance *local_a0;
  undefined ***local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_798;
  local_5a8 = param_4;
  local_730 = (TReferenceControllerBase<1> *)((ulonglong)local_730 & 0xffffffff00000000);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar21 = L"";
  }
  else {
    pwVar21 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  local_5b8 = this;
  local_5b0 = param_1;
  ::FString::FString(&this->ScreenshotName,pwVar21);
  ::FString::FString(&this->MetadataJsonString,L"{}");
  this_03 = &(this->DeterminedPath).Data;
  local_5c0 = this_03;
  ::FString::FString((FString *)this_03,L"");
  iVar30 = (param_4->Data).ArrayNum;
  bVar9 = 1 < iVar30;
  if (bVar9) {
    pFVar4 = (param_4->Data).AllocatorInstance.Data;
    local_6f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6f8.Data.ArrayNum = iVar30;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar30,0,(ForAnyElementType *)&local_6f8,iVar30,&local_6f8.Data.ArrayMax);
    memcpy(local_6f8.Data.AllocatorInstance.Data,pFVar4,(longlong)iVar30 * 2);
    pFVar17 = &local_6f8;
    FVar13.Data = local_6f8.Data.AllocatorInstance.Data;
  }
  else {
    local_5e0 = (FName)(GWorld.World)->_padding_;
    ::FName::ToString(&local_5e0,&local_570);
    pFVar17 = &local_570;
    FVar13.Data = local_570.Data.AllocatorInstance.Data;
  }
  (this->MapName).Data.AllocatorInstance.Data = FVar13.Data;
  (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MapName).Data.ArrayNum = (pFVar17->Data).ArrayNum;
  (this->MapName).Data.ArrayMax = (pFVar17->Data).ArrayMax;
  (pFVar17->Data).ArrayNum = 0;
  (pFVar17->Data).ArrayMax = 0;
  if ((bVar9) && (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
  }
  if ((!bVar9) && (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_570.Data.AllocatorInstance.Data);
  }
  UVar7.World = GWorld.World;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (GWorld.World != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)GWorld.World);
  }
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  local_5d8 = UVar7.World;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (UVar7.World != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)UVar7.World);
  }
  FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_5d8);
  pFVar15 = (FJsonObject *)0x0;
  (this->AutomationViewExtension).Object = (FAutomationUtilsGameplayViewExtension *)0x0;
  (this->AutomationViewExtension).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if ((GEngine == (UEngine *)0x0) ||
     ((GEngine->GameViewport).field0_0x0.DebugPtr == (UGameViewportClient *)0x0)) {
    this_02 = FTSTicker::GetCoreTicker();
    local_a8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FAutomationUtilsGameplayAutomationScreenshotInstance::FAutomationUtilsGameplayAutomationScreenshotInstance'::`22'::<lambda_1>,1,0>
                ::_vftable_;
    local_90 = (undefined ***)0x0;
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FAutomationUtilsGameplayAutomationScreenshotInstance::FAutomationUtilsGameplayAutomationScreenshotInstance'::__l22::<lambda_1>,bool,float>
                  ::Call;
    local_a0 = this;
    FTSTicker::AddTicker
              (this_02,&local_100,L"FAutomationUtilsGameplayScreenshotInstanceAutoCleanup",
               __real_3dcccccd,(TUniqueFunction<bool___cdecl(float)> *)local_b8);
    if (local_100.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_100.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_100.WeakReferenceCount.ReferenceController)->_padding_ + 8))();
      }
    }
    if (local_b8[0] != (code *)0x0) {
      pppuVar29 = &local_a8;
      if (local_90 != (undefined ***)0x0) {
        pppuVar29 = local_90;
      }
      (*(code *)(*pppuVar29)[2])();
    }
  }
  else {
    FlushRenderingCommands();
    TMulticastDelegateRegistration<void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
    ::AddRaw<FAutomationUtilsGameplayAutomationScreenshotInstance>
              ((TMulticastDelegateRegistration<void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *)&UGameViewportClient::ScreenshotCapturedDelegate,
               (FAutomationUtilsGameplayAutomationScreenshotInstance *)local_1d8,(pmf_f14fcebf)this)
    ;
    TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>::
    AddRaw<FAutomationUtilsGameplayAutomationScreenshotInstance>
              ((TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
                *)&FWorldDelegates::LevelRemovedFromWorld,
               (FAutomationUtilsGameplayAutomationScreenshotInstance *)(local_1d8 + 8),
               (pmf_fe570ffa)this);
    pFVar14 = ::operator_new(0x50);
    if (pFVar14 != (FJsonObject *)0x0) {
      *(undefined8 *)&pFVar14->Values = 0;
      *(undefined8 *)&(pFVar14->Values).field_0x8 = 0;
      *(undefined8 *)&(pFVar14->Values).field_0x20 = 0;
      *(undefined4 *)&(pFVar14->Values).field_0x28 = 0;
      *(undefined4 *)&(pFVar14->Values).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar14->Values).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar14->Values).field_0x34 = 0;
      *(undefined8 *)&(pFVar14->Values).field_0x40 = 0;
      *(undefined4 *)&(pFVar14->Values).field_0x48 = 0;
      pFVar15 = pFVar14;
    }
    local_5d0.Object = pFVar15;
    TSharedPtr<FJsonObject,1>::TSharedPtr<FJsonObject,1><FJsonObject>(&local_758,&local_5d0);
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    pFVar17 = FPaths::MakeValidFileName(&local_1c0,&this->ScreenshotName,L'_');
    ::FString::FString(&local_508,L"screenShotName");
    FJsonObject::SetStringField(local_758.Object,&local_508,pFVar17);
    if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_508.Data.AllocatorInstance.Data);
    }
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_4f8,L"context");
    FJsonObject::SetStringField(local_758.Object,&local_4f8,&this->MapName);
    if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    pFVar18 = FGuid::NewGuid(&local_e0);
    local_670.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_670.Data.ArrayNum = 0;
    local_670.Data.ArrayMax = 0;
    FGuid::AppendString(pFVar18,&local_670,Digits);
    ::FString::FString(&local_4e8,L"id");
    FJsonObject::SetStringField(local_758.Object,&local_4e8,&local_670);
    if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
    }
    if (local_670.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_670.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    pFVar19 = FEngineVersion::Current();
    bVar9 = FEngineVersionBase::HasChangelist((FEngineVersionBase *)pFVar19);
    bVar9 = !bVar9;
    if (bVar9) {
      pFVar17 = ::FString::FString(&local_1b0,L"");
    }
    else {
      pFVar19 = FEngineVersion::Current();
      uVar11 = FEngineVersionBase::GetChangelist((FEngineVersionBase *)pFVar19);
      local_660.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_660.Data.ArrayNum = 0;
      local_660.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_660,uVar11);
      pFVar17 = &local_660;
    }
    ::FString::FString(&local_4d8,L"Commit");
    FJsonObject::SetStringField(local_758.Object,&local_4d8,pFVar17);
    if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
    }
    if ((bVar9) && (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
    if ((!bVar9) && (local_660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_660.Data.AllocatorInstance.Data);
    }
    UGameViewportClient::GetViewportSize
              ((GEngine->GameViewport).field0_0x0.DebugPtr,(TVector2<double> *)&local_4b8._s_0);
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_4c8,L"width");
    FJsonObject::SetNumberField(local_758.Object,&local_4c8,local_4b8._s_0.X);
    if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_4a8,L"height");
    FJsonObject::SetNumberField(local_758.Object,&local_4a8,local_4b8._s_0.Y);
    if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_498,L"platform");
    pFVar20 = FUtf8String::FUtf8String(&local_1a0,"Windows");
    FJsonObject::SetStringField(local_758.Object,&local_498,pFVar20);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    pFVar17 = FHardwareInfo::GetHardwareInfo(&local_190,NAME_RHI);
    ::FString::FString(&local_488,L"rhi");
    FJsonObject::SetStringField(local_758.Object,&local_488,pFVar17);
    if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Data.AllocatorInstance.Data);
    }
    if ((FAutomationUtilsGameplayViewExtension *)local_190.Data.AllocatorInstance.Data !=
        (FAutomationUtilsGameplayViewExtension *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    pTVar31 = (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)0x0;
    local_6d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6d8.Data.ArrayNum = 0;
    local_6d8.Data.ArrayMax = 0;
    GetFeatureLevelName(GMaxRHIFeatureLevel,&local_6d8);
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_478,L"featureLevel");
    FJsonObject::SetStringField(local_758.Object,&local_478,&local_6d8);
    if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    pIVar3 = (GEngine->StereoRenderingDevice).Object;
    if (pIVar3 == (IStereoRendering *)0x0) {
      uVar10 = false;
    }
    else {
      uVar10 = (**(code **)((longlong)*pIVar3 + 8))();
    }
    ::FString::FString(&local_468,L"bIsStereo");
    FJsonObject::SetBoolField(local_758.Object,&local_468,(bool)uVar10);
    if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_468.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    pwVar21 = RHIVendorIdToString();
    ::FString::FString(&local_458,L"vendor");
    pFVar17 = ::FString::FString(&local_f0,pwVar21);
    FJsonObject::SetStringField(local_758.Object,&local_458,pFVar17);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_458.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_448,L"adapterName");
    FJsonObject::SetStringField(local_758.Object,&local_448,&GRHIGlobals.GpuInfo.AdapterName);
    if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_448.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_438,L"adapterInternalDriverVersion");
    FJsonObject::SetStringField
              (local_758.Object,&local_438,&GRHIGlobals.GpuInfo.AdapterInternalDriverVersion);
    if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_428,L"adapterUserDriverVersion");
    FJsonObject::SetStringField
              (local_758.Object,&local_428,&GRHIGlobals.GpuInfo.AdapterUserDriverVersion);
    if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    pFVar17 = FGenericPlatformMisc::GetDeviceId(&local_180);
    ::FString::FString(&local_418,L"uniqueDeviceId");
    FJsonObject::SetStringField(local_758.Object,&local_418,pFVar17);
    if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.Data.AllocatorInstance.Data);
    }
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    Scalability::GetQualityLevels(&local_238);
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_408,L"resolutionQuality");
    FJsonObject::SetNumberField(local_758.Object,&local_408,(double)local_238.ResolutionQuality);
    if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_3f8,L"viewDistanceQuality");
    FJsonObject::SetNumberField(local_758.Object,&local_3f8,(double)local_238.ViewDistanceQuality);
    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_3e8,L"antiAliasingQuality");
    FJsonObject::SetNumberField(local_758.Object,&local_3e8,(double)local_238.AntiAliasingQuality);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_3d8,L"shadowQuality");
    FJsonObject::SetNumberField(local_758.Object,&local_3d8,(double)local_238.ShadowQuality);
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_3c8,L"globalIlluminationQuality");
    FJsonObject::SetNumberField
              (local_758.Object,&local_3c8,(double)local_238.GlobalIlluminationQuality);
    if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_3b8,L"reflectionQuality");
    FJsonObject::SetNumberField(local_758.Object,&local_3b8,(double)local_238.ReflectionQuality);
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_3a8,L"postProcessQuality");
    FJsonObject::SetNumberField(local_758.Object,&local_3a8,(double)local_238.PostProcessQuality);
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_398,L"textureQuality");
    FJsonObject::SetNumberField(local_758.Object,&local_398,(double)local_238.TextureQuality);
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_388,L"effectsQuality");
    FJsonObject::SetNumberField(local_758.Object,&local_388,(double)local_238.EffectsQuality);
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_378,L"foliageQuality");
    FJsonObject::SetNumberField(local_758.Object,&local_378,(double)local_238.FoliageQuality);
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_368,L"shadingQuality");
    FJsonObject::SetNumberField(local_758.Object,&local_368,(double)local_238.ShadingQuality);
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_358,L"bHasComparisonRules");
    FJsonObject::SetBoolField(local_758.Object,&local_358,true);
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_348,L"toleranceRed");
    dVar6 = __real_4020000000000000;
    FJsonObject::SetNumberField(local_758.Object,&local_348,__real_4020000000000000);
    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_338,L"toleranceGreen");
    FJsonObject::SetNumberField(local_758.Object,&local_338,dVar6);
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_328,L"toleranceBlue");
    FJsonObject::SetNumberField(local_758.Object,&local_328,dVar6);
    if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_318,L"toleranceAlpha");
    FJsonObject::SetNumberField(local_758.Object,&local_318,dVar6);
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_308,L"toleranceMinBrightness");
    FJsonObject::SetNumberField(local_758.Object,&local_308,0.0);
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_2f8,L"toleranceMaxBrightness");
    FJsonObject::SetNumberField(local_758.Object,&local_2f8,__real_406fe00000000000);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_2e8,L"maximumLocalError");
    FJsonObject::SetNumberField(local_758.Object,&local_2e8,(double)param_3);
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_2d8,L"maximumGlobalError");
    FJsonObject::SetNumberField(local_758.Object,&local_2d8,(double)param_2);
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_2c8,L"bIgnoreAntiAliasing");
    FJsonObject::SetBoolField(local_758.Object,&local_2c8,true);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    ::FString::FString(&local_2b8,L"bIgnoreColors");
    FJsonObject::SetBoolField(local_758.Object,&local_2b8,false);
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
    pTVar22 = ::operator_new(0x40);
    if (pTVar22 != (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)0x0) {
      this_00 = ::operator_new(0xa8);
      if (this_00 == (FArchiveState *)0x0) {
        this_00 = (FArchiveState *)0x0;
      }
      else {
        this_00->_padding_ = 0;
        this_00->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        local_678 = (uchar *)0x0;
        (this_00->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
        (this_00->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
        (this_00->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
        *(undefined8 *)&this_00->field_0x28 = 0;
        this_00->ArSerializingDefaults = 0;
        this_00->ArPortFlags = 0;
        this_00->ArMaxSerializeSize = 0;
        (this_00->ArUEVer).FileVersionUE4 = 0;
        (this_00->ArUEVer).FileVersionUE5 = 0;
        this_00->ArLicenseeUEVer = 0;
        (this_00->ArEngineVer).Major = 0;
        (this_00->ArEngineVer).Minor = 0;
        (this_00->ArEngineVer).Patch = 0;
        *(undefined2 *)&(this_00->ArEngineVer).field_0x6 = 0;
        (this_00->ArEngineVer).Changelist = 0;
        this_00->CustomVersionContainer = (FCustomVersionContainer *)0x0;
        this_00->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        this_00->SavePackageData = (FArchiveSavePackageData *)0x0;
        this_00->SerializedProperty = (FProperty *)0x0;
        this_00->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        *(undefined8 *)&this_00->bCustomVersionsAreReset = 0;
        this_00->NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(this_00);
        this_00[1]._padding_ = 0;
        this_00->_padding_ =
             (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
        this_00[1].InlineFPLB.StartFastPathLoadBuffer = local_678;
        this_00[1].ActiveFPLB = (FFastPathLoadBuffer *)&pTVar22->Bytes;
        FArchiveState::SetIsSaving(this_00,true);
        (**(code **)(this_00->_padding_ + 0x108))(this_00,0);
        this_00->_padding_ = (longlong)&___7FMemoryWriter__6B_;
      }
      pTVar22->_padding_ = (longlong)this_00;
      pTVar22->_padding_ = (longlong)&___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__W____6B_;
      pTVar22->_padding_ = 0;
      pTVar22->OutString = &this->MetadataJsonString;
      pTVar22->_padding_ = 0;
      pTVar22->_padding_ = 0;
      (pTVar22->Bytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar22->Bytes).ArrayNum = 0;
      (pTVar22->Bytes).ArrayMax = 0;
      pTVar31 = pTVar22;
    }
    local_5c8.Object = pTVar31;
    TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1>::
    TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1><TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_>
              (&local_2a8,&local_5c8);
    local_730 = local_2a8.SharedReferenceCount.ReferenceController;
    if (local_2a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2a8.SharedReferenceCount.ReferenceController);
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    FVar8.ReferenceController = local_758.SharedReferenceCount.ReferenceController;
    if (local_758.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_758.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_758.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_758.Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
      return pFVar16;
    }
    if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar23 = ::operator_new(0x38);
    if (pTVar23 == (TReferenceControllerBase<1> *)0x0) {
      local_630.Object = ___xmm_00000000000000000000000000000010;
      FVar32.ReferenceController = local_2a8.SharedReferenceCount.ReferenceController;
      local_630.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar23->SharedReferenceCount = (atomic<int>)0x1;
      pTVar23->WeakReferenceCount = (atomic<int>)0x1;
      pTVar23->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
      ;
      pTVar23[1]._padding_ = 0;
      pTVar23[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar23[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar24 = ::operator_new(0x30);
      if (pTVar24 == (TReferenceControllerBase<1> *)0x0) {
        pTVar24 = (TReferenceControllerBase<1> *)0x0;
        pTVar23[2]._padding_ = 0x10;
        pTVar23[2].SharedReferenceCount = (atomic<int>)0x0;
        pTVar23[2].WeakReferenceCount = (atomic<int>)0x0;
      }
      else {
        pTVar24->SharedReferenceCount = (atomic<int>)0x1;
        pTVar24->WeakReferenceCount = (atomic<int>)0x1;
        pTVar24->_padding_ =
             (longlong)
             &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_
        ;
        local_298.Object = local_758.Object;
        local_298.SharedReferenceCount.ReferenceController = FVar8.ReferenceController;
        if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar8.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar24 + 1),&local_298);
        if ((pTVar24 + 1 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
          return pFVar16;
        }
        pTVar23[2]._padding_ = (longlong)(pTVar24 + 1);
        *(TReferenceControllerBase<1> **)&pTVar23[2].SharedReferenceCount = pTVar24;
        LOCK();
        pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
        UNLOCK();
        this_03 = local_5c0;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
      local_630.Object = (FElement *)(pTVar23 + 1);
      *(undefined2 *)&pTVar23[3]._padding_ = 0;
      FVar32.ReferenceController = local_730;
      local_630.SharedReferenceCount.ReferenceController = pTVar23;
      if ((local_630.Object == (FElement *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), FVar32.ReferenceController = local_730, bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar16 = (FAutomationUtilsGameplayAutomationScreenshotInstance *)(*pcVar5)();
        return pFVar16;
      }
    }
    TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
    Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
              (&local_630,(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)local_2a8.Object,
               true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_630.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
    pFVar25 = GetGlobalLogSingleton();
    this = local_5b8;
    ::FString::PrintfImpl
              (&local_288,L"Gameplay Automation Screenshot Metadata Serialized to %d characters");
    FOutputDevice::Log((FOutputDevice *)pFVar25,&local_288);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_560,"Windows");
    pTVar26 = &FPaths::AutomationDir(&local_170)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_600,pTVar26,10 - (uint)(pTVar26->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_600,L"Incoming",8);
    iVar12 = (this->MapName).Data.ArrayNum;
    iVar30 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar30 = 0;
    }
    if ((local_600.ArrayNum != 0) || (iVar12 = 1, iVar30 + 1 == 0)) {
      iVar12 = 0;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_610,&local_600,iVar12 + iVar30 + 1);
    ::FString::PathAppend
              ((FString *)&local_610,(wchar_t *)(this->MapName).Data.AllocatorInstance.Data,iVar30);
    iVar12 = (this->ScreenshotName).Data.ArrayNum;
    iVar30 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar30 = 0;
    }
    if ((local_610.ArrayNum != 0) || (iVar12 = 1, iVar30 + 1 == 0)) {
      iVar12 = 0;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_620,&local_610,iVar12 + iVar30 + 1);
    ::FString::PathAppend
              ((FString *)&local_620,(wchar_t *)(this->ScreenshotName).Data.AllocatorInstance.Data,
               iVar30);
    iVar30 = local_560.Data.ArrayNum + -1;
    if (local_560.Data.ArrayNum == 0) {
      iVar30 = 0;
    }
    if ((local_620.ArrayNum != 0) || (iVar12 = 1, iVar30 + 1 == 0)) {
      iVar12 = 0;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_728,&local_620,iVar12 + iVar30 + 1);
    ::FString::PathAppend
              ((FString *)&local_728,(wchar_t *)local_560.Data.AllocatorInstance.Data,iVar30);
    if (this_03 != &local_728) {
      pFVar4 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this_03->AllocatorInstance)->
               AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this_03->AllocatorInstance)->
      AllocatorInstance).Data = local_728.AllocatorInstance.Data;
      this_03->ArrayNum = local_728.ArrayNum;
      this_03->ArrayMax = local_728.ArrayMax;
      local_728.ArrayNum = 0;
      local_728.ArrayMax = 0;
      local_728.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_728.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_728.AllocatorInstance.Data);
    }
    if (local_620.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_620.AllocatorInstance.Data);
    }
    if (local_610.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_610.AllocatorInstance.Data);
    }
    if (local_600.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_600.AllocatorInstance.Data);
    }
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_560.Data.AllocatorInstance.Data);
    }
    local_748.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_748.Data.ArrayNum = 0;
    local_748.Data.ArrayMax = 0;
    FHardwareInfo::GetHardwareDetailsString(&local_6e8);
    local_640.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_640.Data.ArrayNum = 0;
    local_640.Data.ArrayMax = 0;
    pFVar17 = ::FName::ToString(&NAME_RHI,&local_160);
    ::FString::ConcatFC(&local_580,pFVar17,L"=");
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_580.Data.ArrayNum != 0) {
      FVar13.Data = local_580.Data.AllocatorInstance.Data;
    }
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_6e8.Data.ArrayNum != 0) {
      FVar28.Data = local_6e8.Data.AllocatorInstance.Data;
    }
    bVar9 = FParse::Value((wchar_t *)FVar28.Data,(wchar_t *)FVar13.Data,&local_640,true,
                          (wchar_t **)0x0);
    if (bVar9) {
      ::FString::ConcatFC(&local_278,&local_748,L"_");
      ::FString::ConcatFF(&local_6c8,&local_278,&local_640);
      if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_748.Data.AllocatorInstance.Data);
      }
      local_748.Data.AllocatorInstance.Data = local_6c8.Data.AllocatorInstance.Data;
      local_748.Data.ArrayNum = local_6c8.Data.ArrayNum;
      local_748.Data.ArrayMax = local_6c8.Data.ArrayMax;
      local_6c8.Data.ArrayNum = 0;
      local_6c8.Data.ArrayMax = 0;
      local_6c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
    }
    local_688.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_688.Data.ArrayNum = 0;
    local_688.Data.ArrayMax = 0;
    pFVar17 = ::FName::ToString(&NAME_TextureFormat,&local_150);
    ::FString::ConcatFC(&local_590,pFVar17,L"=");
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_590.Data.ArrayNum != 0) {
      FVar13.Data = local_590.Data.AllocatorInstance.Data;
    }
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_6e8.Data.ArrayNum != 0) {
      FVar28.Data = local_6e8.Data.AllocatorInstance.Data;
    }
    bVar9 = FParse::Value((wchar_t *)FVar28.Data,(wchar_t *)FVar13.Data,&local_688,true,
                          (wchar_t **)0x0);
    if (bVar9) {
      ::FString::ConcatFC(&local_268,&local_748,L"_");
      ::FString::ConcatFF(&local_6b8,&local_268,&local_688);
      if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_748.Data.AllocatorInstance.Data);
      }
      local_748.Data.AllocatorInstance.Data = local_6b8.Data.AllocatorInstance.Data;
      local_748.Data.ArrayNum = local_6b8.Data.ArrayNum;
      local_748.Data.ArrayMax = local_6b8.Data.ArrayMax;
      local_6b8.Data.ArrayNum = 0;
      local_6b8.Data.ArrayMax = 0;
      local_6b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
    }
    local_5f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5f0.Data.ArrayNum = 0;
    local_5f0.Data.ArrayMax = 0;
    pFVar17 = ::FName::ToString(&NAME_DeviceType,&local_140);
    ::FString::ConcatFC(&local_5a0,pFVar17,L"=");
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_5a0.Data.ArrayNum != 0) {
      FVar13.Data = local_5a0.Data.AllocatorInstance.Data;
    }
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_6e8.Data.ArrayNum != 0) {
      FVar28.Data = local_6e8.Data.AllocatorInstance.Data;
    }
    bVar9 = FParse::Value((wchar_t *)FVar28.Data,(wchar_t *)FVar13.Data,&local_5f0,true,
                          (wchar_t **)0x0);
    if (bVar9) {
      ::FString::ConcatFC(&local_258,&local_748,L"_");
      ::FString::ConcatFF(&local_6a8,&local_258,&local_688);
      if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_748.Data.AllocatorInstance.Data);
      }
      local_748.Data.AllocatorInstance.Data = local_6a8.Data.AllocatorInstance.Data;
      local_748.Data.ArrayNum = local_6a8.Data.ArrayNum;
      local_748.Data.ArrayMax = local_6a8.Data.ArrayMax;
      local_6a8.Data.ArrayNum = 0;
      local_6a8.Data.ArrayMax = 0;
      local_6a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data.AllocatorInstance.Data);
      }
    }
    ::FString::ConcatFC(&local_248,&local_748,L"_");
    ::FString::ConcatFF(&local_698,&local_248,&local_6d8);
    if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_748.Data.AllocatorInstance.Data);
    }
    local_748.Data.ArrayNum = local_698.Data.ArrayNum;
    local_748.Data.AllocatorInstance.Data = local_698.Data.AllocatorInstance.Data;
    local_698.Data.ArrayNum = 0;
    local_698.Data.ArrayMax = 0;
    local_698.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
    iVar30 = local_748.Data.ArrayNum + -1;
    if (local_748.Data.ArrayNum == 0) {
      iVar30 = 0;
    }
    if (0 < iVar30) {
      ::FString::RemoveAt(&local_748,0,1,No);
    }
    FGenericPlatformMisc::GetDeviceId(&local_708);
    if (local_708.Data.ArrayNum < 2) {
      pFVar18 = FGuid::NewGuid(&local_d0);
      local_650.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_650.Data.ArrayNum = 0;
      local_650.Data.ArrayMax = 0;
      FGuid::AppendString(pFVar18,&local_650,Short);
      pFVar17 = ::FString::ToLower(&local_650,&local_130);
      if (&local_708 != pFVar17) {
        if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_708.Data.AllocatorInstance.Data);
        }
        local_708.Data.AllocatorInstance.Data = (pFVar17->Data).AllocatorInstance.Data;
        (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_708.Data.ArrayNum = (pFVar17->Data).ArrayNum;
        local_708.Data.ArrayMax = (pFVar17->Data).ArrayMax;
        (pFVar17->Data).ArrayNum = 0;
        (pFVar17->Data).ArrayMax = 0;
      }
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (local_650.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_650.Data.AllocatorInstance.Data);
      }
    }
    pFVar17 = ::operator/(&local_120,(FString *)this_03,&local_748);
    ::FString::operator=((FString *)this_03,pFVar17);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    pFVar17 = ::operator/(&local_110,(FString *)this_03,&local_708);
    ::FString::ConcatFC((FString *)&local_718,pFVar17,L".png");
    if (this_03 != &local_718) {
      pFVar4 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this_03->AllocatorInstance)->
               AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this_03->AllocatorInstance)->
      AllocatorInstance).Data = local_718.AllocatorInstance.Data;
      this_03->ArrayNum = local_718.ArrayNum;
      this_03->ArrayMax = local_718.ArrayMax;
      local_718.ArrayNum = 0;
      local_718.ArrayMax = 0;
      local_718.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_718.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_718.AllocatorInstance.Data);
    }
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    this_01 = ::operator_new(0x28);
    if (this_01 != (FSceneViewExtensionBase *)0x0) {
      FSceneViewExtensionBase::FSceneViewExtensionBase(this_01,local_738);
      this_01->_padding_ = (longlong)&___7FAutomationUtilsGameplayViewExtension__6B_;
    }
    TVar27 = MakeShareable<FAutomationUtilsGameplayViewExtension>
                       ((FAutomationUtilsGameplayViewExtension *)local_1c8);
    TSharedRef<FAutomationUtilsGameplayViewExtension,1>::
    TSharedRef<FAutomationUtilsGameplayViewExtension,1><FAutomationUtilsGameplayViewExtension>
              (&local_548,(TRawPtrProxy<FAutomationUtilsGameplayViewExtension> *)TVar27.Object);
    local_538.Object = (ISceneViewExtension *)local_548.Object;
    local_538.SharedReferenceCount.ReferenceController =
         local_548.SharedReferenceCount.ReferenceController;
    if (local_548.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_548.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_548.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSceneViewExtensions::RegisterExtension(&local_538);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_538.SharedReferenceCount.ReferenceController);
    local_528.Object = local_548.Object;
    local_528.SharedReferenceCount.ReferenceController =
         local_548.SharedReferenceCount.ReferenceController;
    if (local_548.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_548.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_548.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TSharedPtr<FAutomationUtilsGameplayViewExtension,1>::operator=
              (&this->AutomationViewExtension,&local_528);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_528.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_548.SharedReferenceCount.ReferenceController);
    pFVar25 = GetGlobalLogSingleton();
    ::FString::PrintfImpl(&local_518,L"Determined Path for screenshot \"%s\" to be %s");
    FOutputDevice::Log((FOutputDevice *)pFVar25,&local_518);
    if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_518.Data.AllocatorInstance.Data);
    }
    if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_708.Data.AllocatorInstance.Data);
    }
    if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
    }
    if (local_5f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5f0.Data.AllocatorInstance.Data);
    }
    if (local_590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_590.Data.AllocatorInstance.Data);
    }
    if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_688.Data.AllocatorInstance.Data);
    }
    if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_580.Data.AllocatorInstance.Data);
    }
    if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_640.Data.AllocatorInstance.Data);
    }
    if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
    }
    if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_748.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar32.ReferenceController);
    if (local_238.GPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.GPUBenchmarkSteps.AllocatorInstance.Data);
    }
    if (local_238.CPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.CPUBenchmarkSteps.AllocatorInstance.Data);
    }
    if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_758.SharedReferenceCount.ReferenceController);
  }
  pFVar4 = (local_5b0->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (local_5a8->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return this;
}

// ~FAutomationUtilsGameplayAutomationScreenshotInstance @ 14e7ee600

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
FAutomationUtilsGameplayAutomationScreenshotInstance::
~FAutomationUtilsGameplayAutomationScreenshotInstance
          (FAutomationUtilsGameplayAutomationScreenshotInstance *this)

{
  FScriptContainerElement *pFVar1;
  
  if ((GEngine != (UEngine *)0x0) &&
     ((GEngine->GameViewport).field0_0x0.DebugPtr != (UGameViewportClient *)0x0)) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &UGameViewportClient::ScreenshotCapturedDelegate,this);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FWorldDelegates::LevelRemovedFromWorld,this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AutomationViewExtension).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->MapName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeterminedPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MetadataJsonString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScreenshotName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 14e7ee750

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`FAutomationUtilsGameplayAutomationScreenshotInstance::
FAutomationUtilsGameplayAutomationScreenshotInstance'::__l22::<lambda_1>::operator()
          (void *this,float param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_public:___cdecl__public:___cdecl_FAutomationUtilsGameplayAutomationScreenshotInstance::FAutomationUtilsGameplayAutomationScreenshotInstance(FString,float,float,FString)_::_22_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_FAutomationUtilsGameplayScreenshotInstanceAutoCleanup>
  FVar5;
  FString *pFVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  bool bVar11;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_28;
  
  FVar10.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FAutomationUtilsGameplayScreenshotInstanceAutoCleanup ==
          (FThreadSafeStaticStat<_public:___cdecl__public:___cdecl_FAutomationUtilsGameplayAutomationScreenshotInstance::FAutomationUtilsGameplayAutomationScreenshotInstance(FString,float,float,FString)_::_22_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_FAutomationUtilsGameplayScreenshotInstanceAutoCleanup>
           )0x0) {
        pFVar4 = ::FName::FName((FName *)&local_res8.s,
                                "STAT_FAutomationUtilsGameplayScreenshotInstanceAutoCleanup");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FAutomationUtilsGameplayScreenshotInstanceAutoCleanup,*pFVar4,
                   L"STAT_FAutomationUtilsGameplayScreenshotInstanceAutoCleanup","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5 = StatPtr_STAT_FAutomationUtilsGameplayScreenshotInstanceAutoCleanup;
  if (StatPtr_STAT_FAutomationUtilsGameplayScreenshotInstanceAutoCleanup ==
      (FThreadSafeStaticStat<_public:___cdecl__public:___cdecl_FAutomationUtilsGameplayAutomationScreenshotInstance::FAutomationUtilsGameplayAutomationScreenshotInstance(FString,float,float,FString)_::_22_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_FAutomationUtilsGameplayScreenshotInstanceAutoCleanup>
       )0x0) {
    pFVar4 = ::FName::FName(&local_res18,
                            "STAT_FAutomationUtilsGameplayScreenshotInstanceAutoCleanup");
    FVar5 = (FThreadSafeStaticStat<_public:___cdecl__public:___cdecl_FAutomationUtilsGameplayAutomationScreenshotInstance::FAutomationUtilsGameplayAutomationScreenshotInstance(FString,float,float,FString)_::_22_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_FAutomationUtilsGameplayScreenshotInstanceAutoCleanup>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FAutomationUtilsGameplayScreenshotInstanceAutoCleanup,*pFVar4
                         ,L"STAT_FAutomationUtilsGameplayScreenshotInstanceAutoCleanup",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value == 0) && (uVar7 == 0)) {
    pFVar6 = ::FString::FString((FString *)&local_28,*(FString **)this);
    FAutomationUtilsGameplayAutomationScreenshotFactory::RequestDeleteScreenshotInstance(pFVar6);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\AutomationUtils\\Source\\AutomationUtils\\Private\\AutomationUtilsBlueprintLibrary.cpp"
                   ,0xe5);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar11 = FThreadStats::bPrimaryEnable == false;
    if (bVar11) {
      FVar9.ComparisonIndex.Value = 0;
      FVar9.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      FVar10.Value = FVar8.Value;
    }
    pFVar6 = ::FString::FString((FString *)&local_28,*(FString **)this);
    FAutomationUtilsGameplayAutomationScreenshotFactory::RequestDeleteScreenshotInstance(pFVar6);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar11) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar10.Value;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  return false;
}

// HandleScreenshotData @ 14e7ef640

void __thiscall
FAutomationUtilsGameplayAutomationScreenshotInstance::HandleScreenshotData
          (FAutomationUtilsGameplayAutomationScreenshotInstance *this,int param_1,int param_2,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FOutputDeviceRedirector *pFVar4;
  IFileManager *pIVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  FString local_f8;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_e8;
  FString local_d0;
  TArrayView<FColor_const_,__int64> local_c0;
  FString local_b0;
  FString local_a0;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FString local_78;
  TSharedPtr<FAutomationUtilsGameplayViewExtension,1> local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  FString local_38;
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\AutomationUtils\\Source\\AutomationUtils\\Private\\AutomationUtilsBlueprintLibrary.cpp"
                         ,0xf3,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar4 = GetGlobalLogSingleton();
  ::FString::PrintfImpl(&local_d0,L"Gameplay Automation Screenshot \"%s\" taken with size: %d x %d")
  ;
  FOutputDevice::Log((FOutputDevice *)pFVar4,&local_d0);
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  pIVar5 = IFileManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar5 + 0x60);
  pFVar6 = FPaths::GetPath(&local_58,&this->DeterminedPath);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(pIVar5,pwVar7,1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_e8.ArrayMax = 0;
  local_c0.DataPtr = (FColor *)(param_3->AllocatorInstance).Data;
  local_c0.ArrayNum = (long64)param_3->ArrayNum;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  if ((local_c0.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FImageUtils::PNGCompressImageArray(param_1,param_2,&local_c0,&local_e8);
  pIVar5 = IFileManager::Get();
  if ((this->DeterminedPath).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(this->DeterminedPath).Data.AllocatorInstance.Data;
  }
  FFileHelper::SaveArrayToFile(&local_e8,pwVar7,pIVar5,0);
  pFVar4 = GetGlobalLogSingleton();
  ::FString::PrintfImpl(&local_b0,L"Saved %lld bytes of screenshot image to %s");
  FOutputDevice::Log((FOutputDevice *)pFVar4,&local_b0);
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a0,L"json");
  FPaths::ChangeExtension(&local_f8,&this->DeterminedPath,&local_a0);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  pIVar5 = IFileManager::Get();
  local_88 = (this->MetadataJsonString).Data.AllocatorInstance.Data;
  iVar1 = (this->MetadataJsonString).Data.ArrayNum;
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_f8.Data.ArrayNum != 0) {
    FVar8.Data = local_f8.Data.AllocatorInstance.Data;
  }
  iStack_80 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_80 = 0;
  }
  local_48._12_4_ = uStack_7c;
  local_48.Size = iStack_80;
  local_48.DataPtr = (wchar_t *)local_88;
  FFileHelper::SaveStringToFile(&local_48,(wchar_t *)FVar8.Data,ForceUTF8WithoutBOM,pIVar5,0);
  pFVar4 = GetGlobalLogSingleton();
  ::FString::PrintfImpl(&local_78,L"Saved %d bytes of metadata json to %s");
  FOutputDevice::Log((FOutputDevice *)pFVar4,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  local_68.Object = (FAutomationUtilsGameplayViewExtension *)0x0;
  local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TSharedPtr<FAutomationUtilsGameplayViewExtension,1>::operator=
            (&this->AutomationViewExtension,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  pFVar6 = ::FString::FString(&local_38,&this->ScreenshotName);
  FAutomationUtilsGameplayAutomationScreenshotFactory::RequestDeleteScreenshotInstance(pFVar6);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return;
}

// Unbind @ 14e7effc0

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
FAutomationUtilsGameplayAutomationScreenshotInstance::Unbind
          (FAutomationUtilsGameplayAutomationScreenshotInstance *this)

{
  if ((GEngine != (UEngine *)0x0) &&
     ((GEngine->GameViewport).field0_0x0.DebugPtr != (UGameViewportClient *)0x0)) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &UGameViewportClient::ScreenshotCapturedDelegate,this);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FWorldDelegates::LevelRemovedFromWorld,this);
  return;
}

// WorldDestroyed @ 14e7f0010

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
FAutomationUtilsGameplayAutomationScreenshotInstance::WorldDestroyed
          (FAutomationUtilsGameplayAutomationScreenshotInstance *this,ULevel *param_1,
          UWorld *param_2)

{
  UWorld *pUVar1;
  FOutputDeviceRedirector *this_00;
  FString *pFVar2;
  FString local_18;
  
  if ((param_1 == (ULevel *)0x0) &&
     (pUVar1 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr), param_2 == pUVar1)) {
    this_00 = GetGlobalLogSingleton();
    ::FString::PrintfImpl
              (&local_18,
               L"Screenshot \"%s\" skipped - level was removed from world before we got our screenshot"
              );
    FOutputDevice::Log((FOutputDevice *)this_00,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pFVar2 = ::FString::FString(&local_18,&this->ScreenshotName);
    FAutomationUtilsGameplayAutomationScreenshotFactory::RequestDeleteScreenshotInstance(pFVar2);
  }
  return;
}

