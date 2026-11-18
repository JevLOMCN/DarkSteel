// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PixWinPlugin
// Functions: 6

// Exec @ 14e2c5c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
Impl::FPixDummyInputDevice::Exec
          (FPixDummyInputDevice *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  return false;
}

// SendControllerEvents @ 14e2c66f0

void __thiscall Impl::FPixDummyInputDevice::SendControllerEvents(FPixDummyInputDevice *this)

{
  return;
}

// SetChannelValue @ 14e2c6700

void __thiscall
Impl::FPixDummyInputDevice::SetChannelValue
          (FPixDummyInputDevice *this,int param_1,FForceFeedbackChannelType param_2,float param_3)

{
  return;
}

// SetChannelValues @ 14e2c6710

void __thiscall
Impl::FPixDummyInputDevice::SetChannelValues
          (FPixDummyInputDevice *this,int param_1,FForceFeedbackValues *param_2)

{
  return;
}

// SetMessageHandler @ 14e2c6740

void __thiscall
Impl::FPixDummyInputDevice::SetMessageHandler
          (FPixDummyInputDevice *this,TSharedRef<FGenericApplicationMessageHandler,1> *param_1)

{
  return;
}

// Tick @ 14e2c6760

void __thiscall Impl::FPixDummyInputDevice::Tick(FPixDummyInputDevice *this,float param_1)

{
  FPixWinPluginModule *this_00;
  code *pcVar1;
  bool bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  INT_PTR IVar4;
  ForAnyElementType FVar5;
  FString local_28;
  FString local_18;
  
  this_00 = this->Module;
  if (this_00 == (FPixWinPluginModule *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7973880490404872055>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\PixWinPlugin\\Source\\PixWinPlugin\\Private\\PixWinPluginModule.cpp"
                       ,0x89,"Module != nullptr");
    if (!bVar2) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this_00->PixGraphicsAnalysisInterface != (FPixGraphicsAnalysisInterface *)0x0) &&
     (this_00->PixGraphicsAnalysisInterface->WinPixGpuCapturerHandle != (void *)0x0)) {
    hModule = GetModuleHandleW(L"WinPixGpuCapturer.dll");
    if ((hModule == (HMODULE)0x0) ||
       (pFVar3 = GetProcAddress(hModule,"GetIsAttachedToPix"), pFVar3 == (FARPROC)0x0)) {
      OutputDebugStringW(
                        L"WinPixEventRuntime error: Mismatched header/dll. Please ensure that pix3.h and WinPixGpuCapturer.dll match"
                        );
    }
    else {
      IVar4 = (*pFVar3)();
      if ((char)IVar4 != '\0') {
        bVar2 = true;
        goto LAB_14e2c67fc;
      }
    }
  }
  bVar2 = false;
LAB_14e2c67fc:
  if (bVar2 != this_00->bCurrentlyAttached) {
    if (bVar2 != false) {
      FDynamicRHI::EnableIdealGPUCaptureOptions(true);
    }
    this_00->bCurrentlyAttached = bVar2;
  }
  if (this_00->bBeginCaptureNextTick == false) {
    if (this_00->bEndCaptureNextTick == false) {
      return;
    }
    this_00->bEndCaptureNextTick = false;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FPixWinPluginModule::EndFrameCapture(this_00,0,&local_18);
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
  }
  else {
    this_00->bBeginCaptureNextTick = false;
    this_00->bEndCaptureNextTick = true;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    FPixWinPluginModule::BeginFrameCapture(this_00,(void *)0x0,&local_28);
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
  }
  if (FVar5.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(FVar5.Data);
  return;
}

