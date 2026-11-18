// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 10

// FDataStream @ 143221a60

FDataStream * __thiscall BuildPatchServices::FDataStream::FDataStream(FDataStream *this)

{
  uchar *_Dst;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  (this->BuildDataStream).BufferDataSize = 0x6400000;
  _Dst = operator_new__(0x6400000);
  (this->BuildDataStream).Data = _Dst;
  memset(_Dst,0,(ulonglong)(this->BuildDataStream).BufferDataSize);
  (this->BuildDataStream).NumDataAvailable = 0;
  (this->BuildDataStream).DataIndex = 0;
  (this->BuildDataStream).TotalNumDataPushed = 0;
  this->EndOfStream = (FThreadSafeBool)0x0;
  return this;
}

// ~FDataStream @ 143228180

void __thiscall BuildPatchServices::FDataStream::~FDataStream(FDataStream *this)

{
  operator_delete__((this->BuildDataStream).Data);
                    /* WARNING: Could not recover jumptable at 0x00014322819a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Clear @ 143245860

void __thiscall BuildPatchServices::FDataStream::Clear(FDataStream *this)

{
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  memset((this->BuildDataStream).Data,0,(ulonglong)(this->BuildDataStream).BufferDataSize);
  (this->BuildDataStream).NumDataAvailable = 0;
  (this->BuildDataStream).DataIndex = 0;
  (this->BuildDataStream).TotalNumDataPushed = 0;
                    /* WARNING: Could not recover jumptable at 0x000143245890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// DequeueData @ 1432492a0

uint __thiscall
BuildPatchServices::FDataStream::DequeueData
          (FDataStream *this,uchar *param_1,uint *param_2,bool param_3)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar6 = TRingBuffer<unsigned_char>::Dequeue(&this->BuildDataStream,param_1,param_2);
  fVar5 = __real_3c23d70a;
  if ((param_3) && (uVar6 < *param_2)) {
    do {
      if (this->EndOfStream != (FThreadSafeBool)0x0) break;
      LeaveCriticalSection((LPCRITICAL_SECTION)this);
      FWindowsPlatformProcess::Sleep(fVar5);
      EnterCriticalSection((LPCRITICAL_SECTION)this);
      uVar2 = (this->BuildDataStream).NumDataAvailable;
      uVar7 = (this->BuildDataStream).BufferDataSize;
      uVar4 = uVar2;
      if (*param_2 - uVar6 < uVar2) {
        uVar4 = *param_2 - uVar6;
      }
      uVar3 = (ulonglong)(((this->BuildDataStream).DataIndex - uVar2) + uVar7) % (ulonglong)uVar7;
      uVar7 = uVar7 - (int)uVar3;
      uVar2 = uVar4;
      if (uVar7 < uVar4) {
        uVar2 = uVar7;
      }
      memcpy(param_1 + uVar6,(this->BuildDataStream).Data + uVar3,(ulonglong)uVar2);
      if (uVar7 < uVar4) {
        memcpy(param_1 + uVar6 + uVar7,(this->BuildDataStream).Data,(ulonglong)(uVar4 - uVar7));
      }
      puVar1 = &(this->BuildDataStream).NumDataAvailable;
      *puVar1 = *puVar1 - uVar4;
      uVar6 = uVar6 + uVar4;
    } while (uVar6 < *param_2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return uVar6;
}

// EnqueueData @ 14324b060

void __thiscall
BuildPatchServices::FDataStream::EnqueueData(FDataStream *this,uchar *param_1,uint *param_2)

{
  ulong64 *puVar1;
  uint uVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  if ((this->EndOfStream != (FThreadSafeBool)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!EndOfStream",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\DirectoryBuildStreamer.cpp"
                         ,0xa0,L"More data was added after specifying the end of stream"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar2 = (this->BuildDataStream).BufferDataSize;
  uVar6 = (this->BuildDataStream).NumDataAvailable;
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  fVar4 = __real_3c23d70a;
  uVar7 = *param_2;
  if (uVar2 - uVar6 < uVar7) {
    do {
      LeaveCriticalSection((LPCRITICAL_SECTION)this);
      FWindowsPlatformProcess::Sleep(fVar4);
      EnterCriticalSection((LPCRITICAL_SECTION)this);
      EnterCriticalSection((LPCRITICAL_SECTION)this);
      uVar2 = (this->BuildDataStream).BufferDataSize;
      uVar6 = (this->BuildDataStream).NumDataAvailable;
      LeaveCriticalSection((LPCRITICAL_SECTION)this);
      uVar7 = *param_2;
    } while (uVar2 - uVar6 < uVar7);
  }
  if (((this->BuildDataStream).BufferDataSize < uVar7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BufLen <= BufferDataSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\RingBuffer.h"
                         ,0xcc,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = (this->BuildDataStream).DataIndex;
  uVar7 = (this->BuildDataStream).BufferDataSize - uVar2;
  uVar6 = *param_2;
  if (uVar7 < *param_2) {
    uVar6 = uVar7;
  }
  memcpy((this->BuildDataStream).Data + uVar2,param_1,(ulonglong)uVar6);
  if (uVar7 < *param_2) {
    memcpy((this->BuildDataStream).Data,param_1 + uVar7,(ulonglong)(*param_2 - uVar7));
  }
  uVar2 = (this->BuildDataStream).BufferDataSize;
  (this->BuildDataStream).DataIndex = ((this->BuildDataStream).DataIndex + *param_2) % uVar2;
  puVar1 = &(this->BuildDataStream).TotalNumDataPushed;
  *puVar1 = *puVar1 + (ulonglong)*param_2;
  uVar6 = (this->BuildDataStream).NumDataAvailable + *param_2;
  if (uVar6 < uVar2) {
    uVar2 = uVar6;
  }
  uVar6 = 0;
  if (uVar2 != 0) {
    uVar6 = uVar2;
  }
  (this->BuildDataStream).NumDataAvailable = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00014324b1c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// FreeSpace @ 1432532b0

uint __thiscall BuildPatchServices::FDataStream::FreeSpace(FDataStream *this)

{
  uint uVar1;
  uint uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar1 = (this->BuildDataStream).BufferDataSize;
  uVar2 = (this->BuildDataStream).NumDataAvailable;
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return uVar1 - uVar2;
}

// IsEndOfStream @ 143258ce0

bool __thiscall BuildPatchServices::FDataStream::IsEndOfStream(FDataStream *this)

{
  return this->EndOfStream != (FThreadSafeBool)0x0;
}

// SetEndOfStream @ 143268b80

void __thiscall BuildPatchServices::FDataStream::SetEndOfStream(FDataStream *this)

{
  LOCK();
  this->EndOfStream = (FThreadSafeBool)0x1;
  UNLOCK();
  return;
}

// TotalDataPushed @ 14326b1f0

ulong64 __thiscall BuildPatchServices::FDataStream::TotalDataPushed(FDataStream *this)

{
  ulong64 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar1 = (this->BuildDataStream).TotalNumDataPushed;
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return uVar1;
}

// UsedSpace @ 14326c760

uint __thiscall BuildPatchServices::FDataStream::UsedSpace(FDataStream *this)

{
  uint uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar1 = (this->BuildDataStream).NumDataAvailable;
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return uVar1;
}

