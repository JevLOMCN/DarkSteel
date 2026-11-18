// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 4

// FStreamBuffer @ 14d38fcd0

FStreamBuffer * __thiscall UE::Trace::FStreamBuffer::FStreamBuffer(FStreamBuffer *this,uint param_1)

{
  void *pvVar1;
  
  this->BufferSize = param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  pvVar1 = FMemory::Malloc((ulonglong)param_1,0);
  this->_padding_ = (longlong)pvVar1;
  return this;
}

// Append @ 14d397c90

uchar * __thiscall UE::Trace::FStreamBuffer::Append(FStreamBuffer *this,uint param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uchar *puVar6;
  
  uVar5 = (uint)this->_padding_;
  if (uVar5 < param_1) {
    uVar5 = param_1;
  }
  *(uint *)&this->_padding_ = uVar5;
  Consolidate(this);
  uVar1 = (uint)this->_padding_;
  lVar2 = this->_padding_;
  uVar5 = uVar1 + param_1;
  *(uint *)&this->_padding_ = uVar5;
  if (this->BufferSize < uVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("End <= BufferSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\StreamReader.cpp"
                       ,0x62,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      puVar6 = (uchar *)(*pcVar3)();
      return puVar6;
    }
  }
  return (uchar *)((ulonglong)uVar1 + lVar2);
}

// Append @ 14d397d10

void __thiscall UE::Trace::FStreamBuffer::Append(FStreamBuffer *this,uchar *param_1,uint param_2)

{
  uchar *_Dst;
  
  _Dst = Append(this,param_2);
  memcpy(_Dst,param_1,(ulonglong)param_2);
  return;
}

// Consolidate @ 14d399ae0

void __thiscall UE::Trace::FStreamBuffer::Consolidate(FStreamBuffer *this)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  if (((uint)this->_padding_ < *(uint *)((longlong)&this->_padding_ + 4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("End >= Cursor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\StreamReader.cpp"
                         ,0x1e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar9 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
  if ((0x7fffffff < (ulonglong)(uint)this->_padding_ + (ulonglong)uVar9) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint64)DemandHint + (uint64)Remaining < (1ull << 31)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\StreamReader.cpp"
                         ,0x6a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = (int)this->_padding_ + uVar9;
  *(uint *)&this->_padding_ = uVar7;
  if (this->BufferSize <= uVar7) {
    if ((0x7fffffff < uVar7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("DemandHint < (1u << 31)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\StreamReader.cpp"
                           ,0x6f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (int)this->_padding_ + 1;
    iVar8 = 1;
    if (iVar5 != 0) {
      iVar8 = iVar5;
    }
    uVar1 = (ulonglong)(iVar8 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar7 = 1 << ((byte)lVar2 & 0x1f);
    if (uVar7 < 0x10000) {
      uVar7 = 0x10000;
    }
    this->BufferSize = uVar7;
    pvVar6 = FMemory::Realloc((void *)this->_padding_,(ulonglong)uVar7,0);
    this->_padding_ = (longlong)pvVar6;
  }
  if (uVar9 == 0) {
    *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
    *(undefined4 *)&this->_padding_ = 0;
    return;
  }
  uVar7 = *(uint *)((longlong)&this->_padding_ + 4);
  if (uVar7 != 0) {
    memmove((void *)this->_padding_,(void *)(this->_padding_ + (ulonglong)uVar7),(ulonglong)uVar9);
    *(uint *)&this->_padding_ = uVar9;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
    if ((this->BufferSize < uVar9) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("End <= BufferSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\StreamReader.cpp"
                           ,0x7e,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined4 *)&this->_padding_ = 0;
  return;
}

