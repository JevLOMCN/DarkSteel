// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// FGenericPlatformNamedPipe @ 14161db10

FGenericPlatformNamedPipe * __thiscall
FGenericPlatformNamedPipe::FGenericPlatformNamedPipe(FGenericPlatformNamedPipe *this)

{
  FString *pFVar1;
  
  this->_padding_ = (longlong)&___7FGenericPlatformNamedPipe__6B_;
  pFVar1 = ::operator_new(0x10);
  if (pFVar1 != (FString *)0x0) {
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
    this->NamePtr = pFVar1;
    return this;
  }
  this->NamePtr = (FString *)0x0;
  return this;
}

// ~FGenericPlatformNamedPipe @ 141620cf0

void __thiscall
FGenericPlatformNamedPipe::~FGenericPlatformNamedPipe(FGenericPlatformNamedPipe *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->NamePtr;
  this->_padding_ = (longlong)&___7FGenericPlatformNamedPipe__6B_;
  if (pFVar1 != (FString *)0x0) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x10);
    this->NamePtr = (FString *)0x0;
    return;
  }
  this->NamePtr = (FString *)0x0;
  return;
}

// BlockForAsyncIO @ 14162ca50

bool __thiscall FGenericPlatformNamedPipe::BlockForAsyncIO(FGenericPlatformNamedPipe *this)

{
  return false;
}

// Create @ 141630b90

bool __thiscall
FGenericPlatformNamedPipe::Create
          (FGenericPlatformNamedPipe *this,FString *param_1,bool param_2,bool param_3)

{
  return false;
}

// Destroy @ 141633ec0

bool __thiscall FGenericPlatformNamedPipe::Destroy(FGenericPlatformNamedPipe *this)

{
  return false;
}

// GetName @ 141643c40

FString * __thiscall FGenericPlatformNamedPipe::GetName(FGenericPlatformNamedPipe *this)

{
  return this->NamePtr;
}

// HasFailed @ 141647480

bool __thiscall FGenericPlatformNamedPipe::HasFailed(FGenericPlatformNamedPipe *this)

{
  return true;
}

// IsCreated @ 141649cf0

bool __thiscall FGenericPlatformNamedPipe::IsCreated(FGenericPlatformNamedPipe *this)

{
  return false;
}

// IsReadyForRW @ 14164a210

bool __thiscall FGenericPlatformNamedPipe::IsReadyForRW(FGenericPlatformNamedPipe *this)

{
  return false;
}

// OpenConnection @ 14164f660

bool __thiscall FGenericPlatformNamedPipe::OpenConnection(FGenericPlatformNamedPipe *this)

{
  return false;
}

// ReadBytes @ 141652310

bool __thiscall
FGenericPlatformNamedPipe::ReadBytes(FGenericPlatformNamedPipe *this,int param_1,void *param_2)

{
  return false;
}

// UpdateAsyncStatus @ 141668dd0

bool __thiscall FGenericPlatformNamedPipe::UpdateAsyncStatus(FGenericPlatformNamedPipe *this)

{
  return false;
}

// WriteBytes @ 14166b6b0

bool __thiscall
FGenericPlatformNamedPipe::WriteBytes(FGenericPlatformNamedPipe *this,int param_1,void *param_2)

{
  return false;
}

