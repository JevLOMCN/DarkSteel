// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 5

// Enter @ 1445729a0

void __thiscall LaneTraceDetail::FScopeBufferTs::Enter(FScopeBufferTs *this,uint param_1)

{
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  FScopeBuffer::Enter((FScopeBuffer *)&this->field_0x28,local_res8.QuadPart,param_1);
  if (this != (FScopeBufferTs *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  return;
}

// Flush @ 144573320

void __thiscall LaneTraceDetail::FScopeBufferTs::Flush(FScopeBufferTs *this,bool param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  FScopeBuffer::Flush((FScopeBuffer *)&this->field_0x28,param_1);
  if (this != (FScopeBufferTs *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  return;
}

// IsInScope @ 144578ab0

bool __thiscall LaneTraceDetail::FScopeBufferTs::IsInScope(FScopeBufferTs *this)

{
  short sVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  sVar1 = *(short *)&this->field_0x4c;
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return sVar1 != 0;
}

// Leave @ 144579470

void __thiscall LaneTraceDetail::FScopeBufferTs::Leave(FScopeBufferTs *this)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  FScopeBuffer::Leave((FScopeBuffer *)&this->field_0x28,local_res8[0].QuadPart);
  if (this != (FScopeBufferTs *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445794a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
  return;
}

// SetThreadId @ 144581c40

void __thiscall LaneTraceDetail::FScopeBufferTs::SetThreadId(FScopeBufferTs *this,uint param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  *(uint *)&this->field_0x48 = param_1;
                    /* WARNING: Could not recover jumptable at 0x000144581c65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

