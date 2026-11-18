// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 15

// operator= @ 1444a6a30

void __thiscall
Audio::FCheckedAudioBuffer::operator=
          (FCheckedAudioBuffer *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1)

{
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  TArrayView<float_const_,int> local_28;
  TArrayView<float_const_,int> local_18;
  
  pFVar4 = (this->Buffer).AllocatorInstance.Data;
  pTVar1 = &this->Buffer;
  iVar3 = (this->Buffer).ArrayNum;
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iVar3;
  local_28.DataPtr = (float *)pFVar4;
  DoCheck(this,&local_28);
  local_18.DataPtr = (float *)(param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iVar3;
  DoCheck(this,&local_18);
  if (pTVar1 != param_1) {
    iVar3 = param_1->ArrayNum;
    piVar2 = &(this->Buffer).ArrayMax;
    pFVar4 = (param_1->AllocatorInstance).Data;
    (this->Buffer).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      if (iVar3 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
      }
    }
  }
  return;
}

// AddZeroed @ 1444a9150

void __thiscall Audio::FCheckedAudioBuffer::AddZeroed(FCheckedAudioBuffer *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 uStack_1c;
  TArrayView<float_const_,int> local_18;
  
  iVar4 = (this->Buffer).ArrayNum;
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar4;
  local_18.DataPtr = (float *)pFVar1;
  DoCheck(this,&local_18);
  iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,param_1,&(this->Buffer).AllocatorInstance,&(this->Buffer).ArrayNum,
                     &(this->Buffer).ArrayMax);
  memset((this->Buffer).AllocatorInstance.Data + (longlong)iVar4 * 4,0,(longlong)param_1 << 2);
  return;
}

// Append @ 1444a9300

void __thiscall
Audio::FCheckedAudioBuffer::Append(FCheckedAudioBuffer *this,FCheckedAudioBuffer *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar4;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  TArrayView<float_const_,int> local_28;
  TArrayView<float_const_,int> local_18;
  
  pTVar4 = GetBuffer(param_1);
  local_28.DataPtr = (float *)(pTVar4->AllocatorInstance).Data;
  iVar1 = pTVar4->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iVar1;
  DoCheck(this,&local_28);
  local_18.DataPtr = (float *)(this->Buffer).AllocatorInstance.Data;
  iVar1 = (this->Buffer).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iVar1;
  DoCheck(this,&local_18);
  pTVar4 = GetBuffer(param_1);
  TArray<float,TAlignedHeapAllocator<16>_>::Append<float,TAlignedHeapAllocator<16>_>
            (&this->Buffer,pTVar4);
  return;
}

// Append @ 1444a9400

void __thiscall
Audio::FCheckedAudioBuffer::Append
          (FCheckedAudioBuffer *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  TArrayView<float_const_,int> local_28;
  TArrayView<float_const_,int> local_18;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iVar1;
  local_28.DataPtr = (float *)pFVar2;
  DoCheck(this,&local_28);
  local_18.DataPtr = (float *)(this->Buffer).AllocatorInstance.Data;
  iVar1 = (this->Buffer).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iVar1;
  DoCheck(this,&local_18);
  TArray<float,TAlignedHeapAllocator<16>_>::Append<float,TAlignedHeapAllocator<16>_>
            (&this->Buffer,param_1);
  return;
}

// Append @ 1444a94f0

void __thiscall
Audio::FCheckedAudioBuffer::Append(FCheckedAudioBuffer *this,TArrayView<float_const_,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 uStack_2c;
  TArrayView<float_const_,int> local_28;
  TArrayView<float_const_,int> local_18;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28.ArrayNum = param_1->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  DoCheck(this,&local_28);
  local_18.DataPtr = (float *)(this->Buffer).AllocatorInstance.Data;
  iVar1 = (this->Buffer).ArrayNum;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iVar1;
  DoCheck(this,&local_18);
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar1 == 0) {
    return;
  }
  iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar1,&(this->Buffer).AllocatorInstance,&(this->Buffer).ArrayNum,
                     &(this->Buffer).ArrayMax);
  memcpy((this->Buffer).AllocatorInstance.Data + (longlong)iVar4 * 4,param_1->DataPtr,
         (longlong)iVar1 << 2);
  return;
}

// DoCheck @ 1444bc040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FCheckedAudioBuffer::DoCheck(FCheckedAudioBuffer *this,TArrayView<float_const_,int> *param_1)

{
  EBufferCheckBehavior EVar1;
  code *pcVar2;
  bool bVar3;
  FCheckedAudioBuffer *local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  TArrayView<float_const_,int> local_18;
  
  if ((this->bFailedChecks == false) && (this->CheckFlags != None)) {
    local_18.DataPtr = param_1->DataPtr;
    local_18.ArrayNum = param_1->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    bVar3 = CheckBuffer(&local_18,this->CheckFlags,&this->FailedFlags);
    this->bFailedChecks = bVar3;
    if (bVar3) {
      EVar1 = this->Behavior;
      if (EVar1 == Ensure) {
        local_res8 = this;
        `Audio::FCheckedAudioBuffer::DoCheck'::__l11::<lambda_1>::operator()(&local_res8);
        return;
      }
      if (EVar1 == Log) {
        if (2 < (byte)LogInit._0_1_) {
          BufferDiagnosticsPrivate::ToDelimString(&local_28,this->FailedFlags);
          BufferDiagnosticsPrivate::ToDelimString(&local_38,this->CheckFlags);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
        }
      }
      else if (EVar1 == Break) {
        if (2 < (byte)LogInit._0_1_) {
          BufferDiagnosticsPrivate::ToDelimString(&local_48,this->FailedFlags);
          BufferDiagnosticsPrivate::ToDelimString(&local_58,this->CheckFlags);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
        if (!bVar3) {
          FWindowsPlatformMisc::PromptForRemoteDebugging(false);
        }
        bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
  return;
}

// GetBuffer @ 1444bf970

TArray<float,TAlignedHeapAllocator<16>_> * __thiscall
Audio::FCheckedAudioBuffer::GetBuffer(FCheckedAudioBuffer *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar5;
  undefined4 uStack_1c;
  TArrayView<float_const_,int> local_18;
  
  pFVar2 = (this->Buffer).AllocatorInstance.Data;
  iVar1 = (this->Buffer).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<float,TAlignedHeapAllocator<16>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = (float *)pFVar2;
  DoCheck(this,&local_18);
  return &this->Buffer;
}

// GetBuffer @ 1444bf9f0

TArray<float,TAlignedHeapAllocator<16>_> * __thiscall
Audio::FCheckedAudioBuffer::GetBuffer(FCheckedAudioBuffer *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar5;
  undefined4 uStack_1c;
  TArrayView<float_const_,int> local_18;
  
  pFVar2 = (this->Buffer).AllocatorInstance.Data;
  iVar1 = (this->Buffer).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<float,TAlignedHeapAllocator<16>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = (float *)pFVar2;
  DoCheck(this,&local_18);
  return &this->Buffer;
}

// GetData @ 1444bfc00

float * __thiscall Audio::FCheckedAudioBuffer::GetData(FCheckedAudioBuffer *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  undefined4 uStack_1c;
  TArrayView<float_const_,int> local_18;
  
  pFVar2 = (this->Buffer).AllocatorInstance.Data;
  iVar1 = (this->Buffer).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pfVar5 = (float *)(*pcVar3)();
      return pfVar5;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = (float *)pFVar2;
  DoCheck(this,&local_18);
  return (float *)(this->Buffer).AllocatorInstance.Data;
}

// Num @ 1444c8300

int __thiscall Audio::FCheckedAudioBuffer::Num(FCheckedAudioBuffer *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 uStack_1c;
  TArrayView<float_const_,int> local_18;
  
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  iVar4 = (this->Buffer).ArrayNum;
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar4;
  local_18.DataPtr = (float *)pFVar1;
  DoCheck(this,&local_18);
  return (this->Buffer).ArrayNum;
}

// Reserve @ 1444e1470

void __thiscall Audio::FCheckedAudioBuffer::Reserve(FCheckedAudioBuffer *this,int param_1)

{
  if (-1 < param_1) {
    if ((this->Buffer).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,param_1,&(this->Buffer).AllocatorInstance,(this->Buffer).ArrayNum,
                 &(this->Buffer).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reset @ 1444e1620

void __thiscall Audio::FCheckedAudioBuffer::Reset(FCheckedAudioBuffer *this,int param_1)

{
  if (-1 < param_1) {
    (this->Buffer).ArrayNum = 0;
    if ((this->Buffer).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,param_1,&(this->Buffer).AllocatorInstance,0,&(this->Buffer).ArrayMax);
    }
    this->bFailedChecks = false;
    this->FailedFlags = None;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// SetNumUninitialized @ 1444e4bf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Audio::FCheckedAudioBuffer::SetNumUninitialized(FCheckedAudioBuffer *this,int param_1)

{
  TArray<float,TAlignedHeapAllocator<16>_>::SetNumUninitialized(&this->Buffer,param_1,Default);
  return;
}

// SetNumZeroed @ 1444e4c10

void __thiscall Audio::FCheckedAudioBuffer::SetNumZeroed(FCheckedAudioBuffer *this,int param_1)

{
  TArray<float,TAlignedHeapAllocator<16>_> *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uStack_1c;
  TArrayView<float_const_,int> local_18;
  
  pFVar2 = (this->Buffer).AllocatorInstance.Data;
  this_00 = &this->Buffer;
  iVar5 = (this->Buffer).ArrayNum;
  if (iVar5 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar5;
  local_18.DataPtr = (float *)pFVar2;
  DoCheck(this,&local_18);
  iVar5 = (this->Buffer).ArrayNum;
  if (iVar5 < param_1) {
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(this_00,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if ((int)(uVar6 | param_1) < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (uVar6 != 0) {
        pFVar2 = (this_00->AllocatorInstance).Data + (longlong)param_1 * 4;
        iVar5 = ((this->Buffer).ArrayNum - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(pFVar2,pFVar2 + (longlong)(int)uVar6 * 4,(longlong)iVar5 << 2);
        }
        piVar1 = &(this->Buffer).ArrayNum;
        *piVar1 = *piVar1 - uVar6;
        UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,&this_00->AllocatorInstance,(this->Buffer).ArrayNum,&(this->Buffer).ArrayMax)
        ;
      }
    }
  }
  return;
}

// operator() @ 1504bf330

bool __thiscall `Audio::FCheckedAudioBuffer::DoCheck'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8548903347787136916>);
  if (bVar4) {
    BufferDiagnosticsPrivate::ToDelimString
              (&local_28,*(ECheckBufferFlags *)(*(longlong *)this + 0x28));
    BufferDiagnosticsPrivate::ToDelimString
              (&local_38,*(ECheckBufferFlags *)(*(longlong *)this + 0x24));
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8548903347787136916>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504bf3f4;
    }
  }
  bVar4 = false;
LAB_1504bf3f4:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

