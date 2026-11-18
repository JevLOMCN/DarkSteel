// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 7

// SetCapacity @ 1444e3100

void __thiscall
Audio::TCircularAudioBuffer<float,16>::SetCapacity
          (TCircularAudioBuffer<float,16> *this,uint param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if (0x7ffffffe < param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCapacity < (uint32)TNumericLimits<int32>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x373,
                       L"Max capacity for this buffer is 2,147,483,647 samples. Otherwise our index arithmetic will not work."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->Capacity = param_1 + 1;
  piVar1 = &(this->InternalBuffer).ArrayMax;
  piVar2 = &(this->InternalBuffer).ArrayNum;
  LOCK();
  (this->ReadCounter).Counter = 0;
  UNLOCK();
  LOCK();
  (this->WriteCounter).Counter = 0;
  UNLOCK();
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  uVar3 = this->Capacity;
  iVar6 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,uVar3,(ForAnyElementType *)this,piVar2,piVar1);
  memset((this->InternalBuffer).AllocatorInstance.Data + (longlong)iVar6 * 4,0,
         (longlong)(int)uVar3 << 2);
  return;
}

// Peek @ 14450b300

int __thiscall
Audio::TCircularAudioBuffer<float,16>::Peek
          (TCircularAudioBuffer<float,16> *this,float *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  _Src = (this->InternalBuffer).AllocatorInstance.Data;
  uVar1 = (this->ReadCounter).Counter;
  iVar5 = (this->ReadCounter).Counter;
  iVar2 = (this->WriteCounter).Counter;
  uVar6 = iVar2 - iVar5;
  if (iVar2 < iVar5) {
    uVar6 = uVar6 + this->Capacity;
  }
  if ((int)param_2 < (int)uVar6) {
    uVar6 = param_2;
  }
  uVar7 = this->Capacity - uVar1;
  if ((int)uVar6 < (int)uVar7) {
    uVar7 = uVar6;
  }
  memcpy(param_1,_Src + (ulonglong)uVar1 * 4,(longlong)(int)uVar7 * 4);
  memcpy(param_1 + (int)uVar7,_Src,(longlong)(int)(uVar6 - uVar7) << 2);
  if (0x7ffffffe < param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x3f7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  return uVar6;
}

// Pop @ 14450c630

int __thiscall
Audio::TCircularAudioBuffer<float,16>::Pop(TCircularAudioBuffer<float,16> *this,uint param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  if (0x7ffffffe < param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x43e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = (this->ReadCounter).Counter;
  iVar1 = (this->WriteCounter).Counter;
  uVar5 = iVar1 - iVar4;
  if (iVar1 < iVar4) {
    uVar5 = uVar5 + this->Capacity;
  }
  if ((int)param_1 < (int)uVar5) {
    uVar5 = param_1;
  }
  LOCK();
  (this->ReadCounter).Counter = ((this->ReadCounter).Counter + uVar5) % this->Capacity;
  UNLOCK();
  return uVar5;
}

// Pop @ 14450c6b0

int __thiscall
Audio::TCircularAudioBuffer<float,16>::Pop
          (TCircularAudioBuffer<float,16> *this,float *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = Peek(this,param_1,param_2);
  if (0x7ffffffe < param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x426,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  LOCK();
  (this->ReadCounter).Counter = (uint)((this->ReadCounter).Counter + iVar3) % this->Capacity;
  UNLOCK();
  return iVar3;
}

// Push @ 144513f10

int __thiscall
Audio::TCircularAudioBuffer<unsigned_char,16>::Push
          (TCircularAudioBuffer<unsigned_char,16> *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Dst;
  uint uVar4;
  uint uVar5;
  
  _Dst = (this->InternalBuffer).AllocatorInstance.Data;
  uVar1 = (this->WriteCounter).Counter;
  iVar2 = (this->ReadCounter).Counter;
  iVar3 = (this->WriteCounter).Counter;
  uVar4 = iVar3 - iVar2;
  if (iVar3 < iVar2) {
    uVar4 = uVar4 + this->Capacity;
  }
  uVar4 = ~uVar4 + this->Capacity;
  if ((int)param_2 < (int)uVar4) {
    uVar4 = param_2;
  }
  uVar5 = this->Capacity - uVar1;
  if ((int)uVar4 < (int)uVar5) {
    uVar5 = uVar4;
  }
  memcpy(_Dst + uVar1,param_1,(longlong)(int)uVar5);
  memcpy(_Dst,param_1 + (int)uVar5,(longlong)(int)(uVar4 - uVar5));
  LOCK();
  (this->WriteCounter).Counter = (uVar4 + uVar1) % this->Capacity;
  UNLOCK();
  return uVar4;
}

// Push @ 144513fd0

int __thiscall
Audio::TCircularAudioBuffer<float,16>::Push
          (TCircularAudioBuffer<float,16> *this,float *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Dst;
  uint uVar4;
  uint uVar5;
  
  _Dst = (this->InternalBuffer).AllocatorInstance.Data;
  uVar1 = (this->WriteCounter).Counter;
  iVar2 = (this->ReadCounter).Counter;
  iVar3 = (this->WriteCounter).Counter;
  uVar4 = iVar3 - iVar2;
  if (iVar3 < iVar2) {
    uVar4 = uVar4 + this->Capacity;
  }
  uVar4 = ~uVar4 + this->Capacity;
  if ((int)param_2 < (int)uVar4) {
    uVar4 = param_2;
  }
  uVar5 = this->Capacity - uVar1;
  if ((int)uVar4 < (int)uVar5) {
    uVar5 = uVar4;
  }
  memcpy(_Dst + (ulonglong)uVar1 * 4,param_1,(longlong)(int)uVar5 * 4);
  memcpy(_Dst,param_1 + (int)uVar5,(longlong)(int)(uVar4 - uVar5) << 2);
  LOCK();
  (this->WriteCounter).Counter = (uVar4 + uVar1) % this->Capacity;
  UNLOCK();
  return uVar4;
}

// SetCapacity @ 144518ef0

void __thiscall
Audio::TCircularAudioBuffer<unsigned_char,16>::SetCapacity
          (TCircularAudioBuffer<unsigned_char,16> *this,uint param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if (0x7ffffffe < param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCapacity < (uint32)TNumericLimits<int32>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x373,
                       L"Max capacity for this buffer is 2,147,483,647 samples. Otherwise our index arithmetic will not work."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->Capacity = param_1 + 1;
  piVar1 = &(this->InternalBuffer).ArrayMax;
  piVar2 = &(this->InternalBuffer).ArrayNum;
  LOCK();
  (this->ReadCounter).Counter = 0;
  UNLOCK();
  LOCK();
  (this->WriteCounter).Counter = 0;
  UNLOCK();
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)this,0,piVar1);
  }
  uVar3 = this->Capacity;
  iVar6 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (1,1,uVar3,(ForAnyElementType *)this,piVar2,piVar1);
  memset((this->InternalBuffer).AllocatorInstance.Data + iVar6,0,(longlong)(int)uVar3);
  return;
}

