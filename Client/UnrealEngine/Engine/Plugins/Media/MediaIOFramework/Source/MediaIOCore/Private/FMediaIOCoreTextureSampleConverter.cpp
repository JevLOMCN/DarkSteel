// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 4

// ~FMediaIOCoreTextureSampleConverter @ 14d78ccd0

void __thiscall
FMediaIOCoreTextureSampleConverter::~FMediaIOCoreTextureSampleConverter
          (FMediaIOCoreTextureSampleConverter *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->JITRProxySample).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7IMediaTextureSampleConverter__6B_;
  return;
}

// Convert @ 14d79d560

bool __thiscall
FMediaIOCoreTextureSampleConverter::Convert
          (FMediaIOCoreTextureSampleConverter *this,FRHICommandListImmediate *param_1,
          TRefCountPtr<FRHITexture> *param_2,FConversionHints *param_3)

{
  FMediaIOCorePlayerBase *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  bool bVar8;
  FMediaIOCoreTextureSampleBase *local_18;
  TReferenceControllerBase<1> *local_10;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId17,"JITR",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaIOCoreTextureSampleConverter.cpp"
               ,0x11);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId17);
  }
  local_10 = (this->JITRProxySample).WeakReferenceCount.ReferenceController;
  local_18 = (FMediaIOCoreTextureSampleBase *)0x0;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = local_10->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        local_10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d79d60a;
      }
      LOCK();
      aVar5 = local_10->SharedReferenceCount;
      bVar8 = aVar3 == aVar5;
      if (bVar8) {
        local_10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar8);
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      local_18 = (this->JITRProxySample).Object;
    }
  }
LAB_14d79d60a:
  if (local_18 == (FMediaIOCoreTextureSampleBase *)0x0) {
    uVar4 = 0;
    goto LAB_14d79d681;
  }
  if ((local_18 == (FMediaIOCoreTextureSampleBase *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pTVar6 = (local_18->Player).WeakReferenceCount.ReferenceController;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
LAB_14d79d671:
    uVar4 = 0;
  }
  else {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d79d671;
      }
      LOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      bVar8 = aVar3 == aVar5;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar8);
    pFVar1 = (local_18->Player).Object;
    if (pFVar1 == (FMediaIOCorePlayerBase *)0x0) goto LAB_14d79d671;
    uVar4 = (**(code **)(pFVar1->_padding_ + 0xe8))(pFVar1,param_1,param_2,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_14d79d681:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (bool)uVar4;
}

// GetConverterInfoFlags @ 14d7a99b0

uint __thiscall
FMediaIOCoreTextureSampleConverter::GetConverterInfoFlags(FMediaIOCoreTextureSampleConverter *this)

{
  return 2;
}

// Setup @ 14d7bd3a0

void __thiscall
FMediaIOCoreTextureSampleConverter::Setup
          (FMediaIOCoreTextureSampleConverter *this,
          TSharedPtr<FMediaIOCoreTextureSampleBase,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  (this->JITRProxySample).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->JITRProxySample).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->JITRProxySample).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->JITRProxySample).WeakReferenceCount.ReferenceController = pTVar3;
  }
  return;
}

