// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVIWriter
// Functions: 4

// FCaptureSource @ 14464e880

FCaptureSource * __thiscall FCaptureSource::FCaptureSource(FCaptureSource *this,FAVIWriter *param_1)

{
  double dVar1;
  CSourceStream *this_00;
  FEvent *pFVar2;
  long local_res8 [2];
  _GUID local_18;
  
  local_18 = CLSID_ViewportCaptureSource;
  CSource::CSource((CSource *)this,(wchar_t *)0x0,(IUnknown *)0x0,(_GUID *)&local_18);
  this->_padding_ = (longlong)&_vftable__for__CUnknown__;
  this->_padding_ = (longlong)&_vftable__for__IBaseFilter__;
  this->_padding_ = (longlong)&_vftable__for__IAMovieSetup__;
  this->bShutdownRequested = (FThreadSafeBool)0x0;
  this_00 = ::operator_new(0x1b0);
  if (this_00 != (CSourceStream *)0x0) {
    CSourceStream::CSourceStream(this_00,(wchar_t *)0x0,local_res8,(CSource *)this,L"Capture");
    dVar1 = __real_416312d000000000;
    this_00->_padding_ = (longlong)&___7FCapturePin__6B_;
    this_00->_padding_ = (longlong)&FCapturePin::_vftable__for__CUnknown__;
    this_00->_padding_ = (longlong)&FCapturePin::_vftable__for__IPin__;
    this_00->_padding_ = (longlong)&FCapturePin::_vftable__for__IQualityControl__;
    this_00[1]._padding_ =
         (longlong)
         (dVar1 / ((double)(param_1->Options).CaptureFramerateNumerator /
                  (double)(param_1->Options).CaptureFramerateDenominator));
    InitializeCriticalSection((LPCRITICAL_SECTION)&this_00[1]._padding_);
    this_00[1]._padding_ = (longlong)param_1;
    *(uint *)((longlong)&this_00[1]._padding_ + 4) = (param_1->Options).Width;
    *(uint *)&this_00[1]._padding_ = (param_1->Options).Height;
  }
  pFVar2 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->ShutdownEvent = pFVar2;
  LOCK();
  this->bShutdownRequested = (FThreadSafeBool)0x0;
  UNLOCK();
  return this;
}

// ~FCaptureSource @ 14464ecb0

void __thiscall FCaptureSource::~FCaptureSource(FCaptureSource *this)

{
  this->_padding_ = (longlong)&_vftable__for__CUnknown__;
  this->_padding_ = (longlong)&_vftable__for__IBaseFilter__;
  this->_padding_ = (longlong)&_vftable__for__IAMovieSetup__;
  FGenericPlatformProcess::ReturnSynchEventToPool(this->ShutdownEvent);
  CSource::~CSource((CSource *)this);
  return;
}

// OnFinishedCapturing @ 144651260

void __thiscall FCaptureSource::OnFinishedCapturing(FCaptureSource *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014465126a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->ShutdownEvent->_padding_ + 0x10))();
  return;
}

// StopCapturing @ 144651800

void __thiscall FCaptureSource::StopCapturing(FCaptureSource *this)

{
  LOCK();
  this->bShutdownRequested = (FThreadSafeBool)0x1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00014465181d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->ShutdownEvent->_padding_ + 0x20))(this->ShutdownEvent,0xffffffff,0);
  return;
}

