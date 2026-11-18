// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// FLargeMemoryData @ 1419ce2f0

FLargeMemoryData * __thiscall
FLargeMemoryData::FLargeMemoryData(FLargeMemoryData *this,long64 param_1)

{
  ulong64 uVar1;
  uchar *puVar2;
  
  this->Data = (uchar *)0x0;
  this->MaxBytes = 0;
  if (param_1 < 0) {
    param_1 = 0;
  }
  this->NumBytes = param_1;
  uVar1 = FMemory::QuantizeSize
                    (param_1 + 0x10 +
                     ((longlong)(param_1 * 3 + (ulonglong)((uint)(param_1 * 3 >> 0x3f) & 7)) >> 3),0
                    );
  if ((longlong)uVar1 < 0x10000) {
    uVar1 = 0x10000;
  }
  this->MaxBytes = uVar1;
  if (this->Data != (uchar *)0x0) {
    puVar2 = FMemory::Realloc(this->Data,uVar1,0);
    this->Data = puVar2;
    return this;
  }
  puVar2 = FMemory::Malloc(uVar1,0);
  this->Data = puVar2;
  return this;
}

// ~FLargeMemoryData @ 1419d2aa0

void __thiscall FLargeMemoryData::~FLargeMemoryData(FLargeMemoryData *this)

{
  uchar *puVar1;
  FLowLevelMemTracker *this_00;
  
  puVar1 = this->Data;
  if (puVar1 == (uchar *)0x0) {
    return;
  }
  if (puVar1 != (uchar *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,puVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,puVar1);
  }
  return;
}

// GrowBuffer @ 141a04b60

void __thiscall FLargeMemoryData::GrowBuffer(FLargeMemoryData *this)

{
  longlong lVar1;
  ulong64 uVar2;
  uchar *puVar3;
  
  lVar1 = this->NumBytes * 3;
  uVar2 = FMemory::QuantizeSize
                    (this->NumBytes + 0x10 +
                     ((longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3),0);
  if ((longlong)uVar2 < 0x10000) {
    uVar2 = 0x10000;
  }
  this->MaxBytes = uVar2;
  if (this->Data != (uchar *)0x0) {
    puVar3 = FMemory::Realloc(this->Data,uVar2,0);
    this->Data = puVar3;
    return;
  }
  puVar3 = FMemory::Malloc(uVar2,0);
  this->Data = puVar3;
  return;
}

// Read @ 141a127e0

bool __thiscall
FLargeMemoryData::Read(FLargeMemoryData *this,void *param_1,long64 param_2,long64 param_3)

{
  uint uVar1;
  
  if (-1 < param_2) {
    if (param_1 == (void *)0x0) {
      uVar1 = (uint)(param_3 == 0);
    }
    else {
      uVar1 = (uint)((ulonglong)param_3 >> 0x3f) ^ 1;
    }
    if ((uVar1 != 0) && (param_2 + param_3 <= this->NumBytes)) {
      if (param_3 != 0) {
        memcpy(param_1,this->Data + param_2,param_3);
      }
      return true;
    }
  }
  return false;
}

// ReleaseOwnership @ 141a18ac0

uchar * __thiscall FLargeMemoryData::ReleaseOwnership(FLargeMemoryData *this)

{
  uchar *puVar1;
  
  puVar1 = this->Data;
  this->Data = (uchar *)0x0;
  this->NumBytes = 0;
  this->MaxBytes = 0;
  return puVar1;
}

// Reserve @ 141a19f50

void __thiscall FLargeMemoryData::Reserve(FLargeMemoryData *this,long64 param_1)

{
  uchar *puVar1;
  
  if (this->MaxBytes < param_1) {
    this->MaxBytes = param_1;
    puVar1 = FMemory::Realloc(this->Data,param_1,0);
    this->Data = puVar1;
  }
  return;
}

// Write @ 141a2fe80

bool __thiscall
FLargeMemoryData::Write(FLargeMemoryData *this,void *param_1,long64 param_2,long64 param_3)

{
  uint uVar1;
  ulong64 uVar2;
  uchar *puVar3;
  longlong lVar4;
  
  if (-1 < param_2) {
    if (param_1 == (void *)0x0) {
      uVar1 = (uint)(param_3 == 0);
    }
    else {
      uVar1 = (uint)((ulonglong)param_3 >> 0x3f) ^ 1;
    }
    if (uVar1 != 0) {
      lVar4 = param_2 + param_3;
      if (param_2 + param_3 < this->NumBytes) {
        lVar4 = this->NumBytes;
      }
      this->NumBytes = lVar4;
      if (this->MaxBytes < lVar4) {
        uVar2 = FMemory::QuantizeSize
                          (lVar4 + 0x10 +
                           ((longlong)(lVar4 * 3 + (ulonglong)((uint)(lVar4 * 3 >> 0x3f) & 7)) >> 3)
                           ,0);
        if ((longlong)uVar2 < 0x10000) {
          uVar2 = 0x10000;
        }
        this->MaxBytes = uVar2;
        if (this->Data == (uchar *)0x0) {
          puVar3 = FMemory::Malloc(uVar2,0);
        }
        else {
          puVar3 = FMemory::Realloc(this->Data,uVar2,0);
        }
        this->Data = puVar3;
      }
      if (param_3 != 0) {
        memcpy(this->Data + param_2,param_1,param_3);
      }
      return true;
    }
  }
  return false;
}

