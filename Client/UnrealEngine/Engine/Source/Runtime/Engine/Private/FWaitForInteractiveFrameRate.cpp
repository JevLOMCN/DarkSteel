// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FWaitForInteractiveFrameRate @ 1488094f0

FWaitForInteractiveFrameRate * __thiscall
FWaitForInteractiveFrameRate::FWaitForInteractiveFrameRate
          (FWaitForInteractiveFrameRate *this,float param_1,float param_2,float param_3)

{
  UObject *pUVar1;
  UClass *this_00;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->DesiredFrameRate = param_1;
  this->Duration = param_2;
  this->MaxWaitTime = param_3;
  this->_padding_ = (longlong)&___7FWaitForInteractiveFrameRate__6B_;
  this->kTickRate = 60.0;
  this->_padding_ = 0;
  this->StartTimeOfWait = 0.0;
  this->StartTimeOfAcceptableFrameRate = 0.0;
  this->LastTickTime = 0.0;
  (this->RollingTickRateBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RollingTickRateBuffer).ArrayNum = 0;
  (this->RollingTickRateBuffer).ArrayMax = 0;
  this->BufferIndex = 0;
  this->kSampleCount = 300;
  this_00 = UAutomationTestSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (this->DesiredFrameRate == 0.0) {
    this->DesiredFrameRate = *(float *)&pUVar1[0x15].field_0x4;
  }
  if (this->Duration == 0.0) {
    this->Duration = *(float *)&pUVar1[0x15].field_0xc;
  }
  if (this->MaxWaitTime == 0.0) {
    this->MaxWaitTime = *(float *)&pUVar1[0x15].field_0x8;
  }
  return this;
}

// AddTickRateSample @ 14881a040

void __thiscall
FWaitForInteractiveFrameRate::AddTickRateSample(FWaitForInteractiveFrameRate *this,double param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  double local_res10;
  
  iVar7 = (this->RollingTickRateBuffer).ArrayNum;
  local_res10 = param_1;
  if (iVar7 != this->kSampleCount) {
    pFVar3 = (this->RollingTickRateBuffer).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
       ((FScriptContainerElement *)&local_res10 <
        pFVar3 + (longlong)(this->RollingTickRateBuffer).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = (this->RollingTickRateBuffer).ArrayNum;
    piVar1 = &(this->RollingTickRateBuffer).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->RollingTickRateBuffer).AllocatorInstance,piVar1);
    }
    (this->RollingTickRateBuffer).ArrayNum = iVar7 + 1;
    *(double *)((this->RollingTickRateBuffer).AllocatorInstance.Data + (longlong)iVar7 * 8) =
         local_res10;
    return;
  }
  uVar2 = this->BufferIndex;
  uVar6 = 0;
  if ((int)uVar2 < iVar7) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(double *)((this->RollingTickRateBuffer).AllocatorInstance.Data + (longlong)(int)uVar2 * 8) =
       param_1;
  this->BufferIndex = (this->BufferIndex + 1) % (this->RollingTickRateBuffer).ArrayNum;
  return;
}

// CurrentAverageTickRate @ 14882dc20

double __thiscall
FWaitForInteractiveFrameRate::CurrentAverageTickRate(FWaitForInteractiveFrameRate *this)

{
  int iVar1;
  double dVar2;
  TPlus<void> local_res8;
  
  iVar1 = (this->RollingTickRateBuffer).ArrayNum;
  if (0 < iVar1) {
    dVar2 = Algo::Accumulate<double,TArray<double,TSizedDefaultAllocator<32>_>,TPlus<void>_>
                      (&this->RollingTickRateBuffer,0.0,local_res8);
    return dVar2 / (double)iVar1;
  }
  return 0.0;
}

// Update @ 14885fe20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWaitForInteractiveFrameRate::Update(FWaitForInteractiveFrameRate *this)

{
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  double dVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FAutomationTestBase *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  FAutomationTestFramework *pFVar16;
  wchar_t *pwVar17;
  double dVar18;
  LARGE_INTEGER local_res10;
  double local_88;
  FString local_80 [6];
  
  QueryPerformanceCounter(&local_res10);
  dVar10 = (double)CONCAT71(local_res10.QuadPart._1_7_,local_res10.s.LowPart._0_1_) *
           FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar17 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar17,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    if (this->StartTimeOfWait == 0.0) {
      if (4 < (byte)LogEngineAutomationLatentCommand._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogEngineAutomationLatentCommand);
      }
      this->StartTimeOfWait = dVar10;
      auVar9._8_4_ = SUB84(dVar10,0);
      auVar9._0_8_ = dVar10;
      auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      this->LastReportTime = dVar10;
      this->LastTickTime = (double)auVar9._8_8_;
    }
    dVar11 = __real_3ff0000000000000;
    dVar18 = dVar10 - this->LastTickTime;
    if (__real_3ff0000000000000 / this->kTickRate <= dVar18) {
      iVar15 = (this->RollingTickRateBuffer).ArrayNum;
      pTVar1 = &this->RollingTickRateBuffer;
      piVar2 = &(this->RollingTickRateBuffer).ArrayNum;
      this->LastTickTime = dVar10;
      local_88 = dVar18;
      if (iVar15 == this->kSampleCount) {
        uVar5 = this->BufferIndex;
        uVar14 = 0;
        if ((int)uVar5 < iVar15) {
          uVar14 = ~uVar5 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        *(double *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar5 * 8) = dVar18;
        this->BufferIndex = (this->BufferIndex + 1) % *piVar2;
      }
      else {
        pFVar6 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 <
             pFVar6 + (longlong)(this->RollingTickRateBuffer).ArrayMax * 8)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        iVar15 = (this->RollingTickRateBuffer).ArrayNum;
        piVar3 = &(this->RollingTickRateBuffer).ArrayMax;
        if (iVar15 == *piVar3) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,piVar3);
        }
        (this->RollingTickRateBuffer).ArrayNum = iVar15 + 1;
        *(double *)((pTVar1->AllocatorInstance).Data + (longlong)iVar15 * 8) = local_88;
      }
      iVar15 = *piVar2;
      if (iVar15 < 1) {
LAB_1488600d1:
        dVar11 = 0.0;
      }
      else {
        dVar18 = Algo::Accumulate<double,TArray<double,TSizedDefaultAllocator<32>_>,TPlus<void>_>
                           (pTVar1,0.0,(TPlus<void>)local_res10.s.LowPart._0_1_);
        dVar18 = dVar18 / (double)iVar15;
        if (dVar18 <= 0.0) goto LAB_1488600d1;
        dVar11 = dVar11 / dVar18;
      }
      dVar18 = this->StartTimeOfAcceptableFrameRate;
      dVar4 = this->StartTimeOfWait;
      bVar12 = dVar11 < (double)this->DesiredFrameRate;
      if (bVar12) {
        if ((0.0 < dVar18) && (3 < (byte)LogEngineAutomationLatentCommand._0_1_)) {
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogEngineAutomationLatentCommand);
        }
        this->StartTimeOfAcceptableFrameRate = 0.0;
      }
      else if (dVar18 == 0.0) {
        this->StartTimeOfAcceptableFrameRate = dVar10;
      }
      else if ((double)this->Duration <= dVar10 - dVar18) {
        if (4 < (byte)LogEngineAutomationLatentCommand._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogEngineAutomationLatentCommand);
          return true;
        }
        goto LAB_148860252;
      }
      if ((double)this->MaxWaitTime <= dVar10 - dVar4) {
        ::FString::PrintfImpl
                  (local_80,
                   L"FWaitForInteractiveFrameRate: Game did not reach %.02f FPS within %.02f seconds. Current FPS=%.f. Giving up."
                  );
        if (3 < (byte)LogEngineAutomationLatentCommand._0_1_) {
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogEngineAutomationLatentCommand);
        }
        pFVar16 = FAutomationTestFramework::Get();
        pFVar7 = pFVar16->CurrentTest;
        if (pFVar7 != (FAutomationTestBase *)0x0) {
          (**(code **)(pFVar7->_padding_ + 0x28))(pFVar7,local_80,0);
        }
        if (local_80[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80[0].Data.AllocatorInstance.Data);
        }
        goto LAB_148860252;
      }
      if (__real_403e000000000000 <= dVar10 - this->LastReportTime) {
        if (bVar12) {
          if (3 < (byte)LogEngineAutomationLatentCommand._0_1_) {
            UE::Logging::Private::BasicLog<4>
                      (&::LOG_Static,(FLogCategoryBase *)&LogEngineAutomationLatentCommand);
          }
        }
        else if (3 < (byte)LogEngineAutomationLatentCommand._0_1_) {
          UE::Logging::Private::BasicLog<4>
                    ((FStaticBasicLogRecord *)&PTR_u_FWaitForInterac_151b9b358,
                     (FLogCategoryBase *)&LogEngineAutomationLatentCommand);
        }
        this->LastReportTime = dVar10;
      }
    }
    bVar12 = false;
  }
  else {
    if (4 < (byte)LogEngineAutomationLatentCommand._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&LogEngineAutomationLatentCommand);
      return true;
    }
LAB_148860252:
    bVar12 = true;
  }
  return bVar12;
}

