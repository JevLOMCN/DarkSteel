// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 12

// ~FWmfMediaSampler @ 14ea97870

void __thiscall FWmfMediaSampler::~FWmfMediaSampler(FWmfMediaSampler *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)&___7FWmfMediaSampler__6B_;
  if (this->RefCount != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RefCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Wmf\\WmfMediaSampler.h"
                       ,0x9e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->SampleEvent).field_0x8
             ,*(int *)&(this->SampleEvent).field_0x10);
  pvVar1 = *(void **)&(this->SampleEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SampleEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->ClockEvent).field_0x8,
             *(int *)&(this->ClockEvent).field_0x10);
  pvVar1 = *(void **)&(this->ClockEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ClockEvent);
  return;
}

// AddRef @ 14ea9b3d0

ulong __thiscall FWmfMediaSampler::AddRef(FWmfMediaSampler *this)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = &this->RefCount;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}

// OnClockPause @ 14eab7b20

undefined4 __thiscall FWmfMediaSampler::OnClockPause(FWmfMediaSampler *this,long64 param_1)

{
  TMulticastDelegate<void___cdecl(enum_EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy>::
  Broadcast(&this->ClockEvent,Paused);
  return 0;
}

// OnClockRestart @ 14eab7c10

undefined4 __thiscall FWmfMediaSampler::OnClockRestart(FWmfMediaSampler *this,long64 param_1)

{
  TMulticastDelegate<void___cdecl(enum_EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy>::
  Broadcast(&this->ClockEvent,Restarted);
  return 0;
}

// OnClockSetRate @ 14eab7ce0

undefined4 __thiscall
FWmfMediaSampler::OnClockSetRate(FWmfMediaSampler *this,long64 param_1,float param_2)

{
  return 0;
}

// OnClockStart @ 14eab7d60

undefined4 __thiscall
FWmfMediaSampler::OnClockStart(FWmfMediaSampler *this,long64 param_1,long64 param_2)

{
  TMulticastDelegate<void___cdecl(enum_EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy>::
  Broadcast(&this->ClockEvent,Started);
  return 0;
}

// OnClockStop @ 14eab7e90

undefined4 __thiscall FWmfMediaSampler::OnClockStop(FWmfMediaSampler *this,long64 param_1)

{
  TMulticastDelegate<void___cdecl(enum_EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy>::
  Broadcast(&this->ClockEvent,Stopped);
  return 0;
}

// OnProcessSample @ 14eab80e0

undefined4 __thiscall
FWmfMediaSampler::OnProcessSample
          (FWmfMediaSampler *this,_GUID *param_1,ulong param_2,long64 param_3,long64 param_4,
          uchar *param_5,ulong param_6)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_48;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->SampleEvent,
             (FWriteAccessScope *)&local_48);
  bVar5 = false;
  puVar1 = &(this->SampleEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  uVar10 = *(int *)&(this->SampleEvent).field_0x10 - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar10 < *(int *)&(this->SampleEvent).field_0x10) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return uVar9;
        }
      }
      lVar2 = *(longlong *)&(this->SampleEvent).field_0x8;
      if ((*(int *)(lVar11 + 8 + lVar2) == 0) ||
         (plVar3 = *(longlong **)(lVar11 + lVar2), plVar3 == (longlong *)0x0)) {
LAB_14eab81ca:
        bVar5 = true;
      }
      else {
        cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_5,param_6,param_4,param_3);
        if (cVar7 == '\0') goto LAB_14eab81ca;
      }
      lVar11 = lVar11 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  puVar1 = &(this->SampleEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->SampleEvent,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return 0;
}

// OnSetPresentationClock @ 14eab84d0

undefined4 __thiscall
FWmfMediaSampler::OnSetPresentationClock(FWmfMediaSampler *this,IMFPresentationClock *param_1)

{
  return 0;
}

// OnShutdown @ 14eab84e0

undefined4 __thiscall FWmfMediaSampler::OnShutdown(FWmfMediaSampler *this)

{
  return 0;
}

// QueryInterface @ 14eab9290

HRESULT __thiscall
FWmfMediaSampler::QueryInterface(FWmfMediaSampler *this,_GUID *param_1,void **param_2)

{
  HRESULT HVar1;
  
  HVar1 = QISearch(this,(LPCQITAB)
                        `public:_virtual_long___cdecl_FWmfMediaSampler::QueryInterface(_GUID_const&___ptr64,void*___ptr64*___ptr64)___ptr64'
                        ::__l2::QITab,(IID *)param_1,param_2);
  return HVar1;
}

// Release @ 14eab9ab0

ulong __thiscall FWmfMediaSampler::Release(FWmfMediaSampler *this)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = &this->RefCount;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 - 1U == 0) && (this != (FWmfMediaSampler *)0x0)) {
    (**(code **)(this->_padding_ + 0x58))(this,1);
  }
  return iVar2 - 1U;
}

