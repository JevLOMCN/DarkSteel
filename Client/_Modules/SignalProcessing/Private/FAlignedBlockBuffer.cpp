// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 16

// FAlignedBlockBuffer @ 1444a1ab0

/* WARNING: Enum "Type": Some values do not have unique names */

FAlignedBlockBuffer * __thiscall
Audio::FAlignedBlockBuffer::FAlignedBlockBuffer
          (FAlignedBlockBuffer *this,int param_1,int param_2,uint param_3,uint param_4)

{
  float *pfVar1;
  uint uVar2;
  
  this->AllocByteAlignment = param_4;
  this->SampleCapacity = param_1;
  this->InternalBuffer = (float *)0x0;
  this->RolloverBuffer = (float *)0x0;
  this->ReadPointer = (float *)0x0;
  this->WritePointer = (float *)0x0;
  this->WriteCount = 0;
  this->WritePos = 0;
  this->ReadPos = 0;
  this->ByteAlignment = param_3;
  uVar2 = param_3 >> 2;
  this->MaxNumInspectSamples = param_2;
  this->FloatAlignment = uVar2;
  if ((uint)param_1 % uVar2 != 0) {
    do {
      param_1 = param_1 + 1;
    } while ((uint)param_1 % uVar2 != 0);
    this->SampleCapacity = param_1;
  }
  if (0x1fffffff < param_2) {
    if (2 < (byte)LogSignalProcessing._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
      param_1 = this->SampleCapacity;
    }
    this->MaxNumInspectSamples = 0x1fffffff;
    param_2 = 0x1fffffff;
  }
  if (0x1fffffff < param_1) {
    if (2 < (byte)LogSignalProcessing._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
      param_2 = this->MaxNumInspectSamples;
    }
    this->SampleCapacity = 0x1fffffff;
    param_1 = 0x1fffffff;
  }
  if (param_1 < param_2) {
    if (2 < (byte)LogSignalProcessing._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
    }
    param_2 = this->MaxNumInspectSamples;
    this->SampleCapacity = param_2;
  }
  pfVar1 = FMemory::Malloc((longlong)(param_2 * 4),this->AllocByteAlignment);
  this->RolloverBuffer = pfVar1;
  pfVar1 = FMemory::Malloc((longlong)(this->SampleCapacity << 2),this->AllocByteAlignment);
  this->InternalBuffer = pfVar1;
  if (0 < this->MaxNumInspectSamples) {
    memset(this->RolloverBuffer,0,(longlong)(this->MaxNumInspectSamples * 4));
    pfVar1 = this->InternalBuffer;
  }
  if (0 < this->SampleCapacity) {
    memset(pfVar1,0,(longlong)(this->SampleCapacity * 4));
  }
  this->WritePointer = this->InternalBuffer;
  this->ReadPointer = this->InternalBuffer;
  return this;
}

// ~FAlignedBlockBuffer @ 1444a5e00

void __thiscall Audio::FAlignedBlockBuffer::~FAlignedBlockBuffer(FAlignedBlockBuffer *this)

{
  FMemory::Free(this->InternalBuffer);
  this->InternalBuffer = (float *)0x0;
  FMemory::Free(this->RolloverBuffer);
  this->RolloverBuffer = (float *)0x0;
  return;
}

// AddSamples @ 1444a8c20

void __thiscall
Audio::FAlignedBlockBuffer::AddSamples(FAlignedBlockBuffer *this,float *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == (float *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != InSamples",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                       ,0x8a,L"Null pointer");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if (this->SampleCapacity < param_2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNum <= SampleCapacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                         ,0x57,L"Input buffer [%d] larger than capacity [%d]");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar5 = this->SampleCapacity;
    if (iVar5 <= param_2) {
      param_2 = iVar5;
    }
    this->WriteCount = this->WriteCount + param_2;
    if (iVar5 < this->WriteCount) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("WriteCount <= SampleCapacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                         ,0x5e,L"Buffer overflow");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar5 = this->SampleCapacity;
    iVar4 = this->WriteCount;
    if (iVar5 < iVar4) {
      this->WriteCount = iVar5;
      param_2 = param_2 + (iVar5 - iVar4);
    }
    iVar5 = iVar5 - this->WritePos;
    iVar4 = iVar5 - param_2;
    if (iVar4 < 1) {
      if (0 < iVar5) {
        memcpy(this->WritePointer,param_1,(longlong)(iVar5 * 4));
      }
      this->WritePointer = this->InternalBuffer;
      this->WritePos = -iVar4;
      if (0 < -iVar4) {
        memcpy(this->InternalBuffer,param_1 + iVar5,(longlong)(iVar4 * -4));
      }
      lVar3 = -(longlong)iVar4;
    }
    else {
      if (0 < param_2) {
        memcpy(this->WritePointer,param_1,(longlong)(param_2 * 4));
      }
      this->WritePos = this->WritePos + param_2;
      lVar3 = (longlong)param_2;
    }
    this->WritePointer = this->WritePointer + lVar3;
  }
  return;
}

// AddZeros @ 1444a9220

void __thiscall Audio::FAlignedBlockBuffer::AddZeros(FAlignedBlockBuffer *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar1 = CheckNumAndIncrementWriteCount(this,param_1);
  lVar4 = (longlong)iVar1;
  iVar2 = this->SampleCapacity - this->WritePos;
  iVar3 = iVar2 - iVar1;
  if (iVar3 < 1) {
    if (0 < iVar2) {
      memset(this->WritePointer,0,(longlong)(iVar2 * 4));
    }
    this->WritePointer = this->InternalBuffer;
    this->WritePos = -iVar3;
    if (0 < -iVar3) {
      memset(this->InternalBuffer,0,(longlong)(iVar3 * -4));
    }
    lVar4 = -(longlong)iVar3;
  }
  else {
    if (0 < iVar1) {
      memset(this->WritePointer,0,(longlong)(iVar1 * 4));
    }
    this->WritePos = this->WritePos + iVar1;
  }
  this->WritePointer = this->WritePointer + lVar4;
  return;
}

// AllocateAlignedFloatArray @ 1444a92e0

float * __thiscall
Audio::FAlignedBlockBuffer::AllocateAlignedFloatArray(FAlignedBlockBuffer *this,int param_1)

{
  float *pfVar1;
  
  pfVar1 = FMemory::Malloc((longlong)(param_1 * 4),this->AllocByteAlignment);
  return pfVar1;
}

// CheckNumAndIncrementWriteCount @ 1444b8260

int __thiscall
Audio::FAlignedBlockBuffer::CheckNumAndIncrementWriteCount(FAlignedBlockBuffer *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this->SampleCapacity < param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNum <= SampleCapacity",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                       ,0x57,L"Input buffer [%d] larger than capacity [%d]");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->SampleCapacity;
  if (iVar4 <= param_1) {
    param_1 = iVar4;
  }
  this->WriteCount = this->WriteCount + param_1;
  if (iVar4 < this->WriteCount) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("WriteCount <= SampleCapacity",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                       ,0x5e,L"Buffer overflow");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->SampleCapacity;
  iVar1 = this->WriteCount;
  if (iVar4 < iVar1) {
    this->WriteCount = iVar4;
    param_1 = param_1 + (iVar4 - iVar1);
  }
  return param_1;
}

// ClearSamples @ 1444b8480

void __thiscall Audio::FAlignedBlockBuffer::ClearSamples(FAlignedBlockBuffer *this)

{
  if (0 < this->SampleCapacity) {
    memset(this->InternalBuffer,0,(longlong)(this->SampleCapacity * 4));
  }
  if (0 < this->MaxNumInspectSamples) {
    memset(this->RolloverBuffer,0,(longlong)(this->MaxNumInspectSamples * 4));
  }
  this->ReadPointer = this->InternalBuffer;
  this->WritePointer = this->InternalBuffer;
  this->WritePos = 0;
  this->ReadPos = 0;
  this->WriteCount = 0;
  return;
}

// CopyFloatArray @ 1444b8d50

void __thiscall
Audio::FAlignedBlockBuffer::CopyFloatArray
          (FAlignedBlockBuffer *this,float *param_1,float *param_2,int param_3)

{
  if (0 < param_3) {
    memcpy(param_1,param_2,(longlong)(param_3 * 4));
    return;
  }
  return;
}

// FreeFloatArray @ 1444bee80

void __thiscall
Audio::FAlignedBlockBuffer::FreeFloatArray(FAlignedBlockBuffer *this,float **param_1)

{
  FMemory::Free(*param_1);
  *param_1 = (float *)0x0;
  return;
}

// GetMaxNumInspectSamples @ 1444bfdf0

int __thiscall Audio::FAlignedBlockBuffer::GetMaxNumInspectSamples(FAlignedBlockBuffer *this)

{
  return this->MaxNumInspectSamples;
}

// GetNumAvailable @ 1444c07c0

int __thiscall Audio::FAlignedBlockBuffer::GetNumAvailable(FAlignedBlockBuffer *this)

{
  return this->WriteCount;
}

// GetSampleCapacity @ 1444c12a0

int __thiscall Audio::FAlignedBlockBuffer::GetSampleCapacity(FAlignedBlockBuffer *this)

{
  return this->SampleCapacity;
}

// InspectSamples @ 1444c3f10

float * __thiscall
Audio::FAlignedBlockBuffer::InspectSamples(FAlignedBlockBuffer *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  
  if (((uint)param_2 % this->FloatAlignment != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 == (InOffset % FloatAlignment)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                         ,0xd6,L"InOffset must divisible by alignment"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pfVar4 = (float *)(*pcVar1)();
    return pfVar4;
  }
  if ((this->MaxNumInspectSamples < param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNum <= MaxNumInspectSamples",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                         ,0xd7,L"Requested samples [%d] are more than maximum [%d]"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pfVar4 = (float *)(*pcVar1)();
    return pfVar4;
  }
  if ((this->WriteCount < param_1 + param_2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InNum + InOffset) <= WriteCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                         ,0xd8,L"Buffer underflow"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pfVar4 = (float *)(*pcVar1)();
    return pfVar4;
  }
  if ((param_2 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOffset >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                         ,0xd9,L"InOffset must be greater than 0"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pfVar4 = (float *)(*pcVar1)();
    return pfVar4;
  }
  if (0 < param_1) {
    if (this->MaxNumInspectSamples < param_1) {
      FMemory::Free(this->RolloverBuffer);
      this->RolloverBuffer = (float *)0x0;
      pfVar4 = FMemory::Malloc((longlong)(param_1 * 4),this->AllocByteAlignment);
      this->RolloverBuffer = pfVar4;
      this->MaxNumInspectSamples = param_1;
    }
    if (param_1 + param_2 <= this->WriteCount) {
      iVar5 = 0;
      if (-1 < param_2) {
        iVar5 = param_2;
      }
      iVar6 = this->SampleCapacity;
      iVar5 = iVar5 + this->ReadPos;
      iVar3 = iVar5 + param_1;
      for (; iVar6 < iVar5; iVar5 = iVar5 - iVar6) {
        iVar3 = iVar3 - iVar6;
      }
      if (iVar3 < iVar6) {
        return this->InternalBuffer + iVar5;
      }
      iVar6 = iVar6 - iVar5;
      if (0 < iVar6) {
        memcpy(this->RolloverBuffer,this->InternalBuffer + iVar5,(longlong)(iVar6 * 4));
      }
      if (0 < param_1 - iVar6) {
        memcpy(this->RolloverBuffer + iVar6,this->InternalBuffer,(longlong)((param_1 - iVar6) * 4));
      }
      return this->RolloverBuffer;
    }
  }
  return (float *)0x0;
}

// RemoveSamples @ 1444e1380

void __thiscall Audio::FAlignedBlockBuffer::RemoveSamples(FAlignedBlockBuffer *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((uint)param_1 % this->FloatAlignment != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 == (InNum % FloatAlignment)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                       ,0xb6,L"InNum must be divisible by alignement.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  piVar1 = &this->WriteCount;
  *piVar1 = *piVar1 - param_1;
  if (*piVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("WriteCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                       ,0xbb,L"Buffer underflow");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->WriteCount < 0) {
    this->WriteCount = 0;
    this->ReadPointer = this->InternalBuffer;
    this->ReadPos = 0;
    return;
  }
  iVar4 = (this->SampleCapacity - this->ReadPos) - param_1;
  if (0 < iVar4) {
    this->ReadPointer = this->ReadPointer + param_1;
    this->ReadPos = this->ReadPos + param_1;
    return;
  }
  this->ReadPointer = this->InternalBuffer + -(longlong)iVar4;
  this->ReadPos = -iVar4;
  return;
}

// SetMaxNumInspectSamples @ 1444e42b0

void __thiscall
Audio::FAlignedBlockBuffer::SetMaxNumInspectSamples(FAlignedBlockBuffer *this,int param_1)

{
  float *pfVar1;
  
  if (this->MaxNumInspectSamples < param_1) {
    FMemory::Free(this->RolloverBuffer);
    this->RolloverBuffer = (float *)0x0;
    pfVar1 = FMemory::Malloc((longlong)(param_1 * 4),this->AllocByteAlignment);
    this->RolloverBuffer = pfVar1;
    this->MaxNumInspectSamples = param_1;
    return;
  }
  this->MaxNumInspectSamples = param_1;
  return;
}

// ZeroFloatArray @ 1444e85a0

void __thiscall
Audio::FAlignedBlockBuffer::ZeroFloatArray(FAlignedBlockBuffer *this,float *param_1,int param_2)

{
  if (0 < param_2) {
    memset(param_1,0,(longlong)(param_2 * 4));
    return;
  }
  return;
}

