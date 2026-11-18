// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsMoviePlayer
// Functions: 14

// ~FSampleGrabberCallback @ 14f128500

void __thiscall FSampleGrabberCallback::~FSampleGrabberCallback(FSampleGrabberCallback *this)

{
  this->_padding_ = (longlong)&___7FSampleGrabberCallback__6B_;
  return;
}

// AddRef @ 14f128810

ulong __thiscall FSampleGrabberCallback::AddRef(FSampleGrabberCallback *this)

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

// GetIsSampleReadyToUpdate @ 14f12a9a0

bool __thiscall FSampleGrabberCallback::GetIsSampleReadyToUpdate(FSampleGrabberCallback *this)

{
  return (this->VideoSampleReady).Counter != 0;
}

// OnClockPause @ 14f12b090

undefined4 __thiscall
FSampleGrabberCallback::OnClockPause(FSampleGrabberCallback *this,long64 param_1)

{
  return 0;
}

// OnClockRestart @ 14f12b0a0

undefined4 __thiscall
FSampleGrabberCallback::OnClockRestart(FSampleGrabberCallback *this,long64 param_1)

{
  return 0;
}

// OnClockSetRate @ 14f12b0b0

undefined4 __thiscall
FSampleGrabberCallback::OnClockSetRate(FSampleGrabberCallback *this,long64 param_1,float param_2)

{
  return 0;
}

// OnClockStart @ 14f12b0c0

undefined4 __thiscall
FSampleGrabberCallback::OnClockStart(FSampleGrabberCallback *this,long64 param_1,long64 param_2)

{
  return 0;
}

// OnClockStop @ 14f12b0d0

undefined4 __thiscall
FSampleGrabberCallback::OnClockStop(FSampleGrabberCallback *this,long64 param_1)

{
  return 0;
}

// OnProcessSample @ 14f12b0f0

undefined4 __thiscall
FSampleGrabberCallback::OnProcessSample
          (FSampleGrabberCallback *this,_GUID *param_1,ulong param_2,long64 param_3,long64 param_4,
          uchar *param_5,ulong param_6)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  uint uVar8;
  
  if ((this->VideoSampleReady).Counter == 0) {
    pTVar2 = this->TextureData;
    iVar7 = pTVar2->ArrayNum;
    piVar1 = &pTVar2->ArrayNum;
    if (iVar7 < (int)param_6) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,param_6 - iVar7,&pTVar2->AllocatorInstance,piVar1,&pTVar2->ArrayMax);
      memset((pTVar2->AllocatorInstance).Data + iVar5,0,(longlong)(int)(param_6 - iVar7));
    }
    else {
      if ((int)param_6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)param_6);
      }
      if ((int)param_6 < iVar7) {
        uVar8 = iVar7 - param_6;
        if ((int)(uVar8 | param_6) < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return uVar6;
          }
        }
        if (uVar8 != 0) {
          _Dst = (pTVar2->AllocatorInstance).Data + (int)param_6;
          iVar7 = (*piVar1 - uVar8) - param_6;
          if (iVar7 != 0) {
            memmove(_Dst,_Dst + (int)uVar8,(longlong)iVar7);
          }
          *piVar1 = *piVar1 - uVar8;
        }
      }
    }
    if (param_6 != 0) {
      memcpy((this->TextureData->AllocatorInstance).Data,param_5,(ulonglong)param_6);
    }
    LOCK();
    (this->VideoSampleReady).Counter = 1;
    UNLOCK();
  }
  return 0;
}

// OnSetPresentationClock @ 14f12b230

undefined4 __thiscall
FSampleGrabberCallback::OnSetPresentationClock
          (FSampleGrabberCallback *this,IMFPresentationClock *param_1)

{
  return 0;
}

// OnShutdown @ 14f12b240

undefined4 __thiscall FSampleGrabberCallback::OnShutdown(FSampleGrabberCallback *this)

{
  return 0;
}

// QueryInterface @ 14f12baf0

HRESULT __thiscall
FSampleGrabberCallback::QueryInterface(FSampleGrabberCallback *this,_GUID *param_1,void **param_2)

{
  HRESULT HVar1;
  
  HVar1 = QISearch(this,(LPCQITAB)QITab,(IID *)param_1,param_2);
  return HVar1;
}

// Release @ 14f12bb30

ulong __thiscall FSampleGrabberCallback::Release(FSampleGrabberCallback *this)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = &this->RefCount;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 - 1U == 0) && (this != (FSampleGrabberCallback *)0x0)) {
    (**(code **)(this->_padding_ + 0x58))(this,1);
  }
  return iVar2 - 1U;
}

// SetNeedNewSample @ 14f12bbb0

void __thiscall FSampleGrabberCallback::SetNeedNewSample(FSampleGrabberCallback *this)

{
  LOCK();
  (this->VideoSampleReady).Counter = 0;
  UNLOCK();
  return;
}

