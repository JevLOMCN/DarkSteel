// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 14

// FCachedFileHandle @ 1416d4120

FCachedFileHandle * __thiscall
FCachedFileHandle::FCachedFileHandle
          (FCachedFileHandle *this,IFileHandle *param_1,bool param_2,bool param_3)

{
  long64 lVar1;
  
  (this->FileHandle).Ptr = param_1;
  this->_padding_ = (longlong)&___7FCachedFileHandle__6B_;
  lVar1 = (**(code **)((longlong)*param_1 + 8))(param_1);
  this->FilePos = lVar1;
  this->TellPos = lVar1;
  lVar1 = (**(code **)((longlong)*param_1 + 0x50))(param_1);
  this->FileSize = lVar1;
  this->bWritable = param_3;
  this->bReadable = param_2;
  this->CurrentCache = 0;
  this->CacheEnd[0] = -1;
  this->CacheStart[0] = -1;
  this->CacheEnd[1] = -1;
  this->CacheStart[1] = -1;
  return this;
}

// ~FCachedFileHandle @ 1416d83b0

void __thiscall FCachedFileHandle::~FCachedFileHandle(FCachedFileHandle *this)

{
  IFileHandle *pIVar1;
  
  this->_padding_ = (longlong)&___7FCachedFileHandle__6B_;
  pIVar1 = (this->FileHandle).Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  this->_padding_ = (longlong)&___7IFileHandle__6B_;
  return;
}

// Flush @ 1416ef710

bool __thiscall FCachedFileHandle::Flush(FCachedFileHandle *this,bool param_1)

{
  undefined1 uVar1;
  
  if (this->bWritable != false) {
                    /* WARNING: Could not recover jumptable at 0x0001416ef71d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((longlong)*(this->FileHandle).Ptr + 0x38))();
    return (bool)uVar1;
  }
  return false;
}

// InnerRead @ 141700f40

bool __thiscall FCachedFileHandle::InnerRead(FCachedFileHandle *this,uchar *param_1,ulong64 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)((longlong)*(this->FileHandle).Ptr + 0x20))();
  if (cVar1 != '\0') {
    this->TellPos = this->TellPos + param_2;
    return true;
  }
  return false;
}

// InnerSeek @ 141700f90

bool __thiscall FCachedFileHandle::InnerSeek(FCachedFileHandle *this,ulong64 param_1)

{
  char cVar1;
  
  if (param_1 == this->TellPos) {
    return true;
  }
  cVar1 = (**(code **)((longlong)*(this->FileHandle).Ptr + 0x10))();
  if (cVar1 != '\0') {
    this->TellPos = param_1;
  }
  return (bool)cVar1;
}

// Read @ 141708700

bool __thiscall FCachedFileHandle::Read(FCachedFileHandle *this,uchar *param_1,long64 param_2)

{
  IFileHandle *pIVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  size_t _Size;
  ulonglong uVar10;
  
  if (((this->bReadable == false) || (param_2 < 0)) ||
     (uVar7 = this->FilePos, this->FileSize < (longlong)(uVar7 + param_2))) {
    return false;
  }
  if (param_2 == 0) {
    return true;
  }
  uVar8 = 0;
  bVar3 = false;
  if (param_2 < 0x10001) {
    bVar3 = true;
    do {
      if (bVar3 == false) {
        return false;
      }
      uVar10 = this->FilePos;
      uVar9 = uVar8;
      do {
        if ((this->CacheStart[uVar9] <= (longlong)uVar10) &&
           ((longlong)uVar10 < this->CacheEnd[uVar9])) {
          if ((uint)uVar9 < 3) goto LAB_1417088db;
          break;
        }
        uVar5 = (uint)uVar9 + 1;
        uVar9 = (ulonglong)uVar5;
      } while (uVar5 < 2);
      uVar10 = uVar10 & 0xffffffffffff0000;
      uVar9 = this->FileSize - uVar10;
      if (0x10000 < uVar9) {
        uVar9 = 0x10000;
      }
      if ((uVar10 != this->TellPos) &&
         (pIVar1 = (this->FileHandle).Ptr,
         cVar4 = (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,uVar10), cVar4 != '\0')) {
        this->TellPos = uVar10;
      }
      pIVar1 = (this->FileHandle).Ptr;
      cVar4 = (**(code **)((longlong)*pIVar1 + 0x20))
                        (pIVar1,this->BufferCache + this->CurrentCache,uVar9);
      if (cVar4 == '\0') {
        bVar3 = false;
      }
      else {
        this->TellPos = this->TellPos + uVar9;
        bVar3 = true;
        this->CacheStart[this->CurrentCache] = uVar10;
        this->CacheEnd[this->CurrentCache] = uVar9 + uVar10;
        uVar9 = (ulonglong)(uint)this->CurrentCache;
        this->CurrentCache = this->CurrentCache - 1U & 1;
LAB_1417088db:
        uVar10 = this->CacheEnd[uVar9] - this->FilePos;
        if ((ulonglong)param_2 < uVar10) {
          uVar10 = param_2;
        }
        memcpy(param_1,(void *)(this->FilePos + 0x2a + (uVar9 * 0x10000 - this->CacheStart[uVar9]) +
                               (longlong)this),uVar10);
        this->FilePos = this->FilePos + uVar10;
        param_1 = param_1 + uVar10;
        param_2 = param_2 - uVar10;
      }
    } while (param_2 != 0);
  }
  else {
    do {
      uVar5 = (uint)uVar8;
      if ((this->CacheStart[uVar8] <= (longlong)uVar7) && ((longlong)uVar7 < this->CacheEnd[uVar8]))
      {
        if (uVar5 < 2) {
          lVar6 = (longlong)(int)uVar5;
          _Size = this->CacheEnd[lVar6] - uVar7;
          memcpy(param_1,(void *)(uVar7 + 0x2a + (lVar6 * 0x10000 - this->CacheStart[lVar6]) +
                                 (longlong)this),_Size);
          this->FilePos = this->FilePos + _Size;
          param_2 = param_2 - _Size;
          uVar7 = this->FilePos;
          param_1 = param_1 + _Size;
        }
        break;
      }
      uVar8 = (ulonglong)(uVar5 + 1);
    } while (uVar5 + 1 < 2);
    bVar2 = InnerSeek(this,uVar7);
    if ((bVar2) && (bVar3 = InnerRead(this,param_1,param_2), bVar3)) {
      this->FilePos = this->FilePos + param_2;
    }
  }
  return bVar3;
}

// ReadAt @ 141708970

bool __thiscall
FCachedFileHandle::ReadAt(FCachedFileHandle *this,uchar *param_1,long64 param_2,long64 param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141708977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*(this->FileHandle).Ptr + 0x28))();
  return (bool)uVar1;
}

// Seek @ 14170fea0

bool __thiscall FCachedFileHandle::Seek(FCachedFileHandle *this,long64 param_1)

{
  if ((-1 < param_1) && (param_1 <= this->FileSize)) {
    this->FilePos = param_1;
    return true;
  }
  return false;
}

// SeekFromEnd @ 14170fec0

bool __thiscall FCachedFileHandle::SeekFromEnd(FCachedFileHandle *this,long64 param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014170fecd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x10))(this,this->FileSize - param_1);
  return (bool)uVar1;
}

// ShrinkBuffers @ 141712a60

void __thiscall FCachedFileHandle::ShrinkBuffers(FCachedFileHandle *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141712a67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->FileHandle).Ptr + 0x48))();
  return;
}

// Size @ 141712a80

long64 __thiscall FCachedFileHandle::Size(FCachedFileHandle *this)

{
  return this->FileSize;
}

// Tell @ 141714650

long64 __thiscall FCachedFileHandle::Tell(FCachedFileHandle *this)

{
  return this->FilePos;
}

// Truncate @ 141717920

bool __thiscall FCachedFileHandle::Truncate(FCachedFileHandle *this,long64 param_1)

{
  IFileHandle *pIVar1;
  char cVar2;
  long64 lVar3;
  
  if (this->bWritable != false) {
    cVar2 = (**(code **)((longlong)*(this->FileHandle).Ptr + 0x40))();
    if (cVar2 != '\0') {
      this->CacheEnd[0] = -1;
      this->CacheStart[0] = -1;
      this->CacheEnd[1] = -1;
      this->CacheStart[1] = -1;
      lVar3 = (**(code **)((longlong)*(this->FileHandle).Ptr + 8))();
      pIVar1 = (this->FileHandle).Ptr;
      this->TellPos = lVar3;
      this->FilePos = lVar3;
      lVar3 = (**(code **)((longlong)*pIVar1 + 0x50))();
      this->FileSize = lVar3;
      return true;
    }
  }
  return false;
}

// Write @ 14171ac50

bool __thiscall FCachedFileHandle::Write(FCachedFileHandle *this,uchar *param_1,long64 param_2)

{
  longlong lVar1;
  IFileHandle *pIVar2;
  char cVar3;
  longlong lVar4;
  
  if ((this->bWritable != false) && (-1 < param_2)) {
    if (param_2 == 0) {
      return true;
    }
    lVar1 = this->FilePos;
    if ((lVar1 != this->TellPos) &&
       (pIVar2 = (this->FileHandle).Ptr,
       cVar3 = (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,lVar1), cVar3 != '\0')) {
      this->TellPos = lVar1;
    }
    pIVar2 = (this->FileHandle).Ptr;
    cVar3 = (**(code **)((longlong)*pIVar2 + 0x30))(pIVar2,param_1,param_2);
    if (cVar3 != '\0') {
      this->FilePos = this->FilePos + param_2;
      lVar1 = this->FilePos;
      lVar4 = this->FileSize;
      if (this->FileSize < lVar1) {
        lVar4 = lVar1;
      }
      this->FileSize = lVar4;
      this->CacheEnd[0] = -1;
      this->CacheStart[0] = -1;
      this->CacheEnd[1] = -1;
      this->CacheStart[1] = -1;
      this->TellPos = lVar1;
      return (bool)cVar3;
    }
  }
  return false;
}

