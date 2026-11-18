// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 20

// ~FTextHistory @ 1417396c0

void __thiscall FTextHistory::~FTextHistory(FTextHistory *this)

{
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  return;
}

// AddRef @ 141743a00

FReturnedRefCountValue __thiscall FTextHistory::AddRef(FTextHistory *this)

{
  int *piVar1;
  int iVar2;
  int *in_RDX;
  
  LOCK();
  piVar1 = &this->_padding_;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  *in_RDX = iVar2 + 1;
  return (FReturnedRefCountValue)(uint)in_RDX;
}

// CanUpdateDisplayString @ 14174b6c0

bool __thiscall FTextHistory::CanUpdateDisplayString(FTextHistory *this)

{
  return true;
}

// GetGlobalHistoryRevision @ 14175d640

ushort __thiscall FTextHistory::GetGlobalHistoryRevision(FTextHistory *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  
  this_00 = &this->Mutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  LOCK();
  bVar3 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow(this_00);
  }
  uVar4 = this->GlobalRevision;
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return uVar4;
}

// GetHistoricFormatData @ 14175d770

void __thiscall
FTextHistory::GetHistoricFormatData
          (FTextHistory *this,FText *param_1,
          TArray<FHistoricTextFormatData,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// GetHistoricNumericData @ 14175e380

bool __thiscall
FTextHistory::GetHistoricNumericData
          (FTextHistory *this,FText *param_1,FHistoricTextNumericData *param_2)

{
  return false;
}

// GetLocalHistoryRevision @ 14175eb20

ushort __thiscall FTextHistory::GetLocalHistoryRevision(FTextHistory *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  
  this_00 = &this->Mutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  LOCK();
  bVar3 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow(this_00);
  }
  uVar4 = this->LocalRevision;
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return uVar4;
}

// GetLocalizedString @ 14175f6f0

TDisplayStringPtr<FString_const_> __thiscall FTextHistory::GetLocalizedString(FTextHistory *this)

{
  TDisplayStringPtr<FString_const_> in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetMutableTextHistory @ 14175f8a0

FTextHistory * __thiscall FTextHistory::GetMutableTextHistory(FTextHistory *this)

{
  return this;
}

// GetRefCount @ 141760800

uint __thiscall FTextHistory::GetRefCount(FTextHistory *this)

{
  return this->_padding_;
}

// GetSourceString @ 141760f70

FString * __thiscall FTextHistory::GetSourceString(FTextHistory *this)

{
  FString *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141760f73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FString *)(**(code **)(this->_padding_ + 0x28))();
  return pFVar1;
}

// GetTextHistory @ 141761680

FTextHistory * __thiscall FTextHistory::GetTextHistory(FTextHistory *this)

{
  return this;
}

// GetTextId @ 141761730

FTextId __thiscall FTextHistory::GetTextId(FTextHistory *this)

{
  FTextId in_RDX;
  
  *(undefined8 *)in_RDX = 0xffffffffffffffff;
  return in_RDX;
}

// MarkDisplayStringOutOfDate @ 14176d0f0

void __thiscall FTextHistory::MarkDisplayStringOutOfDate(FTextHistory *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  
  this_00 = &this->Mutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  LOCK();
  bVar3 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow(this_00);
  }
  this->GlobalRevision = 0;
  this->LocalRevision = 0;
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return;
}

// MarkDisplayStringUpToDate @ 14176d180

void __thiscall FTextHistory::MarkDisplayStringUpToDate(FTextHistory *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FTextLocalizationManager *this_01;
  FTextId *pFVar5;
  undefined1 local_res10 [8];
  
  cVar3 = (**(code **)(this->_padding_ + 0xa8))();
  this_00 = &this->Mutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  LOCK();
  bVar4 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    UE::FMutex::LockSlow(this_00);
  }
  if (cVar3 == '\0') {
    this->GlobalRevision = 0;
    this->LocalRevision = 0;
  }
  else {
    this_01 = FTextLocalizationManager::Get();
    pFVar5 = (FTextId *)(**(code **)(this->_padding_ + 0x60))(this,local_res10);
    FTextLocalizationManager::GetTextRevisions
              (this_01,pFVar5,&this->GlobalRevision,&this->LocalRevision);
  }
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return;
}

// ReadFromBuffer @ 14176f2a0

wchar_t * __thiscall
FTextHistory::ReadFromBuffer(FTextHistory *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  return (wchar_t *)0x0;
}

// Release @ 141776300

uint __thiscall FTextHistory::Release(FTextHistory *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &this->_padding_;
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (piVar1 == (int *)0x0) {
      this = (FTextHistory *)0x0;
    }
    if (this != (FTextHistory *)0x0) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return iVar2 - 1;
}

// ShouldReadFromBuffer @ 14177df70

bool __thiscall FTextHistory::ShouldReadFromBuffer(FTextHistory *this,wchar_t *param_1)

{
  return false;
}

// UpdateDisplayStringIfOutOfDate @ 141782330

void __thiscall FTextHistory::UpdateDisplayStringIfOutOfDate(FTextHistory *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  ushort uVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FTextLocalizationManager *pFVar6;
  FTextId *pFVar7;
  ushort *puVar8;
  ushort uVar9;
  undefined1 local_res8 [8];
  
  cVar4 = (**(code **)(this->_padding_ + 0xa8))();
  if (cVar4 != '\0') {
    pFVar6 = FTextLocalizationManager::Get();
    pFVar7 = (FTextId *)(**(code **)(this->_padding_ + 0x60))(this,local_res8);
    AcquireSRWLockShared((PSRWLOCK)&pFVar6->TextRevisionRW);
    uVar2 = pFVar6->TextRevisionCounter;
    if ((((pFVar7->Namespace).Index == -1) && ((pFVar7->Key).Index == -1)) ||
       (puVar8 = TMapBase<FTextId,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>_>
                 ::Find((TMapBase<FTextId,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>_>
                         *)&pFVar6->LocalTextRevisions,pFVar7), puVar8 == (ushort *)0x0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = *puVar8;
    }
    ReleaseSRWLockShared((PSRWLOCK)&pFVar6->TextRevisionRW);
    this_00 = &this->Mutex;
    if ((this_00 == (FMutex *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    LOCK();
    bVar5 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar5) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar5) {
      UE::FMutex::LockSlow(this_00);
    }
    if ((this->GlobalRevision != uVar2) || (this->LocalRevision != uVar9)) {
      this->GlobalRevision = uVar2;
      this->LocalRevision = uVar9;
      (**(code **)(this->_padding_ + 0xb0))(this);
    }
    if (this_00 != (FMutex *)0x0) {
      LOCK();
      aVar1 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar1 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(this_00);
      }
    }
  }
  return;
}

// WriteToBuffer @ 141784b80

bool __thiscall FTextHistory::WriteToBuffer(FTextHistory *this,FString *param_1,bool param_2)

{
  return false;
}

