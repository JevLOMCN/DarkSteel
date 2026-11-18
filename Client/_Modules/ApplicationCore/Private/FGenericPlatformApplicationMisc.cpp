// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 22

// ClipboardCopy @ 1423d2c20

void __cdecl FGenericPlatformApplicationMisc::ClipboardCopy(wchar_t *param_1)

{
  return;
}

// ClipboardPaste @ 1423d2e70

void __cdecl FGenericPlatformApplicationMisc::ClipboardPaste(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString local_18;
  
  if (param_1 != &local_18) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
  }
  return;
}

// ComputePhysicalScreenData @ 1423d4f00

void __cdecl FGenericPlatformApplicationMisc::ComputePhysicalScreenData(void)

{
  CachedPhysicalScreenAccuracy = Unknown;
  CachedPhysicalScreenDimensions = UE::Math::TVector2<float>::ZeroVector;
  CachedPhysicalScreenSize = 0.0;
  CachedPhysicalScreenDimensionsAccuracy = Unknown;
  CachedPhysicalScreenDensity = 0x60;
  CachedPhysicalScreenData = true;
  return;
}

// ComputePhysicalScreenDensity @ 1423d4f40

EScreenPhysicalAccuracy __cdecl
FGenericPlatformApplicationMisc::ComputePhysicalScreenDensity(int *param_1)

{
  *param_1 = 0;
  return Unknown;
}

// ComputePhysicalScreenDimensions @ 1423d4f50

EScreenPhysicalAccuracy __cdecl
FGenericPlatformApplicationMisc::ComputePhysicalScreenDimensions
          (TVector2<float> *param_1,float *param_2)

{
  (param_1->field0_0x0)._s_0 = (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector;
  *param_2 = 0.0;
  return Unknown;
}

// CreateApplication @ 1423d52d0

GenericApplication * __cdecl FGenericPlatformApplicationMisc::CreateApplication(void)

{
  GenericApplication *this;
  GenericApplication *pGVar1;
  TSharedPtr<ICursor,1> local_18;
  
  pGVar1 = (GenericApplication *)0x0;
  this = ::operator_new(0xb8);
  if (this != (GenericApplication *)0x0) {
    local_18.Object = (ICursor *)0x0;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pGVar1 = GenericApplication::GenericApplication(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return pGVar1;
}

// CreateConsoleOutputDevice @ 1423d5d50

FOutputDeviceConsole * __cdecl FGenericPlatformApplicationMisc::CreateConsoleOutputDevice(void)

{
  return (FOutputDeviceConsole *)0x0;
}

// CreatePlatformInputDeviceManager @ 1423d7700

IPlatformInputDeviceMapper * __cdecl
FGenericPlatformApplicationMisc::CreatePlatformInputDeviceManager(void)

{
  FGenericPlatformInputDeviceMapper *pFVar1;
  
  pFVar1 = ::operator_new(0x78);
  if (pFVar1 != (FGenericPlatformInputDeviceMapper *)0x0) {
    pFVar1 = FGenericPlatformInputDeviceMapper::FGenericPlatformInputDeviceMapper(pFVar1,true,true);
    return (IPlatformInputDeviceMapper *)pFVar1;
  }
  return (IPlatformInputDeviceMapper *)0x0;
}

// GetErrorOutputDevice @ 1423de610

FOutputDeviceError * __cdecl FGenericPlatformApplicationMisc::GetErrorOutputDevice(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FOutputDevice::FOutputDevice((FOutputDevice *)&::Singleton);
      ::Singleton._16_8_ = 0;
      ::Singleton._0_8_ = &___7FWindowsErrorOutputDevice__6B_;
      atexit(`FWindowsPlatformOutputDevices::GetError'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return (FOutputDeviceError *)&::Singleton;
    }
  }
  return (FOutputDeviceError *)&::Singleton;
}

// GetFeedbackContext @ 1423de6b0

FFeedbackContext * __cdecl FGenericPlatformApplicationMisc::GetFeedbackContext(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FFeedbackContext::FFeedbackContext((FFeedbackContext *)&::Singleton);
      ::Singleton._padding_ = (longlong)&___7FFeedbackContextAnsi__6B_;
      ::Singleton.Context = (FContextSupplier *)0x0;
      ::Singleton.AuxOut = (FOutputDevice *)0x0;
      atexit(`FGenericPlatformOutputDevices::GetFeedbackContext'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return (FFeedbackContext *)&::Singleton;
    }
  }
  return (FFeedbackContext *)&::Singleton;
}

// GetPhysicalScreenDensity @ 1423e1120

EScreenPhysicalAccuracy __cdecl
FGenericPlatformApplicationMisc::GetPhysicalScreenDensity(int *param_1)

{
  if (!CachedPhysicalScreenData) {
    CachedPhysicalScreenAccuracy = Unknown;
    CachedPhysicalScreenDimensions = UE::Math::TVector2<float>::ZeroVector;
    CachedPhysicalScreenSize = 0.0;
    CachedPhysicalScreenDimensionsAccuracy = Unknown;
    CachedPhysicalScreenDensity = 0x60;
    CachedPhysicalScreenData = true;
    *param_1 = 0x60;
    return CachedPhysicalScreenAccuracy;
  }
  *param_1 = CachedPhysicalScreenDensity;
  return CachedPhysicalScreenAccuracy;
}

// GetPhysicalScreenDimensions @ 1423e1180

EScreenPhysicalAccuracy __cdecl
FGenericPlatformApplicationMisc::GetPhysicalScreenDimensions(TVector2<float> *param_1)

{
  if (!CachedPhysicalScreenData) {
    CachedPhysicalScreenDimensions = UE::Math::TVector2<float>::ZeroVector;
    CachedPhysicalScreenDimensionsAccuracy = Unknown;
    CachedPhysicalScreenAccuracy = Unknown;
    CachedPhysicalScreenSize = 0.0;
    CachedPhysicalScreenDensity = 0x60;
    CachedPhysicalScreenData = true;
    (param_1->field0_0x0)._s_0 = (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector;
    return CachedPhysicalScreenDimensionsAccuracy;
  }
  (param_1->field0_0x0)._s_0 = (TVector2<float>_u_0_s_0)CachedPhysicalScreenDimensions;
  return CachedPhysicalScreenDimensionsAccuracy;
}

// GetPhysicalScreenSize @ 1423e11e0

EScreenPhysicalAccuracy __cdecl
FGenericPlatformApplicationMisc::GetPhysicalScreenSize(float *param_1)

{
  if (!CachedPhysicalScreenData) {
    CachedPhysicalScreenDimensions = UE::Math::TVector2<float>::ZeroVector;
    CachedPhysicalScreenDimensionsAccuracy = Unknown;
    CachedPhysicalScreenSize = 0.0;
    CachedPhysicalScreenAccuracy = Unknown;
    CachedPhysicalScreenDensity = 0x60;
    CachedPhysicalScreenData = true;
    *param_1 = 0.0;
    return CachedPhysicalScreenDimensionsAccuracy;
  }
  *param_1 = CachedPhysicalScreenSize;
  return CachedPhysicalScreenDimensionsAccuracy;
}

// GetScreenPixelColor @ 1423e2620

FLinearColor * __cdecl
FGenericPlatformApplicationMisc::GetScreenPixelColor
          (FLinearColor *__return_storage_ptr__,TVector2<double> *param_1,float param_2)

{
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black;
  return __return_storage_ptr__;
}

// Init @ 1423e7be0

void __cdecl FGenericPlatformApplicationMisc::Init(void)

{
  ClipboardCopyShim = FWindowsPlatformApplicationMisc::ClipboardCopy;
  ClipboardPasteShim = FWindowsPlatformApplicationMisc::ClipboardPaste;
  return;
}

// IsHighDPIAwarenessEnabled @ 1423ea9f0

bool __cdecl FGenericPlatformApplicationMisc::IsHighDPIAwarenessEnabled(void)

{
  return bEnableHighDPIAwareness != 0;
}

// IsThisApplicationForeground @ 1423eb3a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FGenericPlatformApplicationMisc::IsThisApplicationForeground(void)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return false;
}

// PostInit @ 1423f2ae0

void __cdecl FGenericPlatformApplicationMisc::PostInit(void)

{
  return;
}

// PreInit @ 1423f2b60

void __cdecl FGenericPlatformApplicationMisc::PreInit(void)

{
  return;
}

// RequestMinimize @ 1424014d0

void __cdecl FGenericPlatformApplicationMisc::RequestMinimize(void)

{
  return;
}

// RequiresVirtualKeyboard @ 142401660

bool __cdecl FGenericPlatformApplicationMisc::RequiresVirtualKeyboard(void)

{
  return bAllowVirtualKeyboard;
}

// TearDown @ 1424089e0

void __cdecl FGenericPlatformApplicationMisc::TearDown(void)

{
  ClipboardCopyShim = (_func___cdecl_void_wchar_t_ptr *)0x0;
  ClipboardPasteShim = (_func___cdecl_void_FString_ptr *)0x0;
  return;
}

