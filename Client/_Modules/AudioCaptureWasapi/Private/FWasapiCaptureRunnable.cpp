// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureWasapi
// Functions: 4

// FWasapiCaptureRunnable @ 14d0bd4b0

FWasapiCaptureRunnable * __thiscall
Audio::FWasapiCaptureRunnable::FWasapiCaptureRunnable
          (FWasapiCaptureRunnable *this,TSharedPtr<Audio::FWasapiInputStream,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FWasapiCaptureRunnable_Audio__6B_;
  this->bIsRunning = (atomic<bool>)0x0;
  this->InputStreamTimeoutsDetected = 0;
  this->InputStreamDeviceErrorsDetected = 0;
  (this->InputStream).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->InputStream).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FWasapiCaptureRunnable @ 14d0be030

void __thiscall Audio::FWasapiCaptureRunnable::~FWasapiCaptureRunnable(FWasapiCaptureRunnable *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InputStream).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// Run @ 14d0c1850

uint __thiscall Audio::FWasapiCaptureRunnable::Run(FWasapiCaptureRunnable *this)

{
  atomic<bool> aVar1;
  FWasapiInputStream *pFVar2;
  IAudioClient3 *pIVar3;
  IAudioCaptureClient *pIVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  DWORD DVar10;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  
  LOCK();
  this->bIsRunning = (atomic<bool>)0x1;
  UNLOCK();
  bVar6 = FWindowsPlatformMisc::CoInitialize(Multithreaded);
  if (((this->InputStream).Object == (FWasapiInputStream *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return uVar8;
  }
  pFVar2 = (this->InputStream).Object;
  pIVar3 = (pFVar2->AudioClient).RawPointer;
  if (pIVar3 != (IAudioClient3 *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x50))();
    local_res8[0] = 0;
    if (((pFVar2->CaptureClient).RawPointer == (IAudioCaptureClient *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return uVar8;
    }
    pIVar4 = (pFVar2->CaptureClient).RawPointer;
    iVar9 = (**(code **)((longlong)*pIVar4 + 0x28))(pIVar4,local_res8);
    if ((-1 < iVar9) && (local_res8[0] != 0)) {
      while( true ) {
        local_res18[0] = 0;
        local_res20 = 0;
        local_res10[0] = 0;
        if (((pFVar2->CaptureClient).RawPointer == (IAudioCaptureClient *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("RawPointer != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                               ,0x9f,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return uVar8;
        }
        pIVar4 = (pFVar2->CaptureClient).RawPointer;
        iVar9 = (**(code **)((longlong)*pIVar4 + 0x18))
                          (pIVar4,&local_res20,local_res10,local_res18,0,0);
        if (iVar9 < 0) break;
        if (((pFVar2->CaptureClient).RawPointer == (IAudioCaptureClient *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("RawPointer != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                               ,0x9f,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return uVar8;
        }
        pIVar4 = (pFVar2->CaptureClient).RawPointer;
        (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,local_res10[0]);
        if (((pFVar2->CaptureClient).RawPointer == (IAudioCaptureClient *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("RawPointer != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                               ,0x9f,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return uVar8;
        }
        pIVar4 = (pFVar2->CaptureClient).RawPointer;
        iVar9 = (**(code **)((longlong)*pIVar4 + 0x28))(pIVar4,local_res8);
        if ((iVar9 < 0) || (local_res8[0] == 0)) break;
      }
    }
  }
  aVar1 = this->bIsRunning;
  while( true ) {
    if (aVar1 == (atomic<bool>)0x0) {
      if (((this->InputStream).Object == (FWasapiInputStream *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return uVar8;
      }
      pIVar3 = (((this->InputStream).Object)->AudioClient).RawPointer;
      if (pIVar3 != (IAudioClient3 *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x58))();
      }
      if (bVar6) {
        FWindowsPlatformMisc::CoUninitialize();
      }
      return 0;
    }
    if (((this->InputStream).Object == (FWasapiInputStream *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) break;
    DVar10 = WaitForSingleObject(((this->InputStream).Object)->EventHandle,1000);
    if (DVar10 != 0) {
      this->InputStreamTimeoutsDetected = this->InputStreamTimeoutsDetected + 1;
    }
    if (((this->InputStream).Object == (FWasapiInputStream *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return uVar8;
    }
    bVar7 = FWasapiInputStream::CaptureAudioFrames((this->InputStream).Object);
    if (!bVar7) {
      this->InputStreamDeviceErrorsDetected = this->InputStreamDeviceErrorsDetected + 1;
    }
    aVar1 = this->bIsRunning;
  }
  pcVar5 = (code *)swi(3);
  uVar8 = (*pcVar5)();
  return uVar8;
}

// Stop @ 14d0c1ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FWasapiCaptureRunnable::Stop(FWasapiCaptureRunnable *this)

{
  LOCK();
  this->bIsRunning = (atomic<bool>)0x0;
  UNLOCK();
  if ((this->InputStreamTimeoutsDetected != 0) && (1 < (byte)LogAudioCaptureCore._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if ((this->InputStreamDeviceErrorsDetected != 0) && (1 < (byte)LogAudioCaptureCore._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
    return;
  }
  return;
}

