// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderDocPlugin
// Functions: 7

// ~FRenderDocDummyInputDevice @ 14e2c89b0

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */

void __thiscall
FRenderDocDummyInputDevice::~FRenderDocDummyInputDevice(FRenderDocDummyInputDevice *this)

{
  this->_padding_ = (longlong)&___7IInputDevice__6B_;
  return;
}

// Exec @ 14e2c9a90

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */
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
FRenderDocDummyInputDevice::Exec
          (FRenderDocDummyInputDevice *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  return false;
}

// SendControllerEvents @ 14e2cbb20

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */

void __thiscall FRenderDocDummyInputDevice::SendControllerEvents(FRenderDocDummyInputDevice *this)

{
  return;
}

// SetChannelValue @ 14e2cbb30

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */

void __thiscall
FRenderDocDummyInputDevice::SetChannelValue
          (FRenderDocDummyInputDevice *this,int param_1,FForceFeedbackChannelType param_2,
          float param_3)

{
  return;
}

// SetChannelValues @ 14e2cbb40

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */

void __thiscall
FRenderDocDummyInputDevice::SetChannelValues
          (FRenderDocDummyInputDevice *this,int param_1,FForceFeedbackValues *param_2)

{
  return;
}

// SetMessageHandler @ 14e2cbb50

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */

void __thiscall
FRenderDocDummyInputDevice::SetMessageHandler
          (FRenderDocDummyInputDevice *this,TSharedRef<FGenericApplicationMessageHandler,1> *param_1
          )

{
  return;
}

// Tick @ 14e2cbef0

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */

void __thiscall FRenderDocDummyInputDevice::Tick(FRenderDocDummyInputDevice *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->ThePlugin == (FRenderDocPluginModule *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ThePlugin",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\RenderDocPlugin\\Source\\RenderDocPlugin\\Private\\RenderDocPluginModule.cpp"
                       ,0xdb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderDocPluginModule::Tick(this->ThePlugin,param_1);
  return;
}

