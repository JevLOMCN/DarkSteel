// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 4

// FNetAnalyticsData @ 1441d1e50

FNetAnalyticsData * __thiscall FNetAnalyticsData::FNetAnalyticsData(FNetAnalyticsData *this)

{
  this->_padding_ = (longlong)&___7FNetAnalyticsData__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->Aggregator = (FNetAnalyticsAggregator *)0x0;
  return this;
}

// ~FNetAnalyticsData @ 1441d3e50

void __thiscall FNetAnalyticsData::~FNetAnalyticsData(FNetAnalyticsData *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FNetAnalyticsData__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7FVirtualDestructor__6B_;
  return;
}

// InternalSendAnalytics @ 1441e0fc0

void __thiscall FNetAnalyticsData::InternalSendAnalytics(FNetAnalyticsData *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001441e0fc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))();
  return;
}

// NotifyFinalRelease @ 1441e25b0

void __thiscall FNetAnalyticsData::NotifyFinalRelease(FNetAnalyticsData *this)

{
  return;
}

