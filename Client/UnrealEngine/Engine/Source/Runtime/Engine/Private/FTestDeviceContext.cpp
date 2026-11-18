// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FTestDeviceContext<FVisualLoggerTestDevice> @ 1489b2770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTestDeviceContext<FVisualLoggerTestDevice> * __thiscall
FTestDeviceContext<FVisualLoggerTestDevice>::FTestDeviceContext<FVisualLoggerTestDevice>
          (FTestDeviceContext<FVisualLoggerTestDevice> *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  FVisualLogger *pFVar5;
  wchar_t *pwVar6;
  UWorld *pUVar7;
  undefined1 auStack_78 [32];
  FTestDeviceContext<FVisualLoggerTestDevice> *local_58;
  TBox<double> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  (this->Device)._padding_ = (longlong)&___7FVisualLoggerTestDevice__6B_;
  (this->Device)._padding_ = 0;
  (this->Device)._padding_ = 0;
  (this->Device).LastEntry.TimeStamp = -1.0;
  (this->Device).LastEntry.WorldTimeStamp = -1.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Device).LastEntry.Location.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Device).LastEntry.Location.field0_0x0._s_0.Y = (double)uVar3;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Device).LastEntry.bPassedClassAllowList = '\0';
  (this->Device).LastEntry.bIsInitialized = '\0';
  (this->Device).LastEntry.bIsLocationValid = '\0';
  (this->Device).LastEntry.bIsAllowedToLog = '\0';
  (this->Device).LastEntry.bPassedObjectAllowList = '\0';
  (this->Device).LastEntry.Location.field0_0x0._s_0.Z = (double)uVar3;
  (this->Device).LastEntry.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Device).LastEntry.Events.ArrayNum = 0;
  (this->Device).LastEntry.Events.ArrayMax = 0;
  (this->Device).LastEntry.LogLines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Device).LastEntry.LogLines.ArrayNum = 0;
  (this->Device).LastEntry.LogLines.ArrayMax = 0;
  (this->Device).LastEntry.Status.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Device).LastEntry.Status.ArrayNum = 0;
  (this->Device).LastEntry.Status.ArrayMax = 0;
  (this->Device).LastEntry.ElementsToDraw.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Device).LastEntry.ElementsToDraw.ArrayNum = 0;
  (this->Device).LastEntry.ElementsToDraw.ArrayMax = 0;
  (this->Device).LastEntry.HistogramSamples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Device).LastEntry.HistogramSamples.ArrayNum = 0;
  (this->Device).LastEntry.HistogramSamples.ArrayMax = 0;
  (this->Device).LastEntry.DataBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Device).LastEntry.DataBlocks.ArrayNum = 0;
  (this->Device).LastEntry.DataBlocks.ArrayMax = 0;
  (this->Device).LastObject = (UObject *)0x0;
  FVisualLogEntry::Reset(&(this->Device).LastEntry);
  pcVar2 = *(code **)((this->Device)._padding_ + 0x18);
  if (pcVar2 == FVisualLoggerTestDevice::Cleanup) {
    (this->Device).LastObject = (UObject *)0x0;
    FVisualLogEntry::Reset(&(this->Device).LastEntry);
  }
  else {
    (*pcVar2)(this);
  }
  pFVar5 = FVisualLogger::Get();
  if (FVisualLogger::bIsRecording != 0) {
    pwVar6 = FCommandLine::Get();
    bVar4 = FParse::Param(pwVar6,L"LogNavOctree");
    if (bVar4) {
      local_50.IsValid = '\0';
      pUVar7 = ::`anonymous_namespace'::GetWorldForVisualLogger((UObject *)0x0);
      FVisualLogger::NavigationDataDump
                ((UObject *)pUVar7,(FName *)&LogNavigation.field_0x4,Log,&local_50);
    }
  }
  if (pFVar5->bIsRecordingToFile) {
    FVisualLogger::SetIsRecordingToFile(pFVar5,false);
  }
  FVisualLogger::bIsRecording = 0;
  pFVar5 = FVisualLogger::Get();
  FVisualLogger::Cleanup(pFVar5,(UWorld *)0x0,false);
  local_58 = this;
  pFVar5 = FVisualLogger::Get();
  TArray<FVisualLogDevice_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FVisualLogDevice_*_const_&>
            (&pFVar5->OutputDevices,(FVisualLogDevice **)&local_58);
  *(uint *)&this->field_0xb0 =
       (GEngine->bDisableAILogging ^ ZPULL(*(undefined4 *)&this->field_0xb0,0,1)) & 1 ^
       *(undefined4 *)&this->field_0xb0;
  GEngine->bDisableAILogging = 0;
  return this;
}

// ~FTestDeviceContext<FVisualLoggerTestDevice> @ 1489b8510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall
FTestDeviceContext<FVisualLoggerTestDevice>::~FTestDeviceContext<FVisualLoggerTestDevice>
          (FTestDeviceContext<FVisualLoggerTestDevice> *this)

{
  bool bVar1;
  FVisualLogger *pFVar2;
  wchar_t *pwVar3;
  UWorld *pUVar4;
  undefined1 auStack_78 [32];
  FTestDeviceContext<FVisualLoggerTestDevice> *local_58;
  TBox<double> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar2 = FVisualLogger::Get();
  if (FVisualLogger::bIsRecording != 0) {
    pwVar3 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar3,L"LogNavOctree");
    if (bVar1) {
      local_50.IsValid = '\0';
      pUVar4 = ::`anonymous_namespace'::GetWorldForVisualLogger((UObject *)0x0);
      FVisualLogger::NavigationDataDump
                ((UObject *)pUVar4,(FName *)&LogNavigation.field_0x4,Log,&local_50);
    }
  }
  if (pFVar2->bIsRecordingToFile) {
    FVisualLogger::SetIsRecordingToFile(pFVar2,false);
  }
  FVisualLogger::bIsRecording = 0;
  local_58 = this;
  pFVar2 = FVisualLogger::Get();
  TArray<FVisualLogDevice_*,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&pFVar2->OutputDevices,(FVisualLogDevice **)&local_58,Default);
  pFVar2 = FVisualLogger::Get();
  FVisualLogger::Cleanup(pFVar2,(UWorld *)0x0,false);
  (**(code **)((this->Device)._padding_ + 0x18))(this,0);
  *(uint *)&GEngine->field_0xe80 =
       (*(int *)&this->field_0xb0 << 3 ^ *(uint *)&GEngine->field_0xe80) & 8 ^
       *(uint *)&GEngine->field_0xe80;
  FVisualLogEntry::~FVisualLogEntry(&(this->Device).LastEntry);
  (this->Device)._padding_ = (longlong)&___7FVisualLogDevice__6B_;
  return;
}

