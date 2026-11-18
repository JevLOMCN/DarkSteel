// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 7

// FBufferLinearEase @ 1444a3080

FBufferLinearEase * __thiscall
Audio::FBufferLinearEase::FBufferLinearEase
          (FBufferLinearEase *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,int param_3)

{
  this->BufferLength = 0;
  this->LerpLength = 0;
  this->CurrentLerpStep = 0;
  (this->DeltaBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeltaBuffer).ArrayNum = 0;
  (this->DeltaBuffer).ArrayMax = 0;
  Init(this,param_1,param_2,param_3);
  return this;
}

// FBufferLinearEase @ 1444a30b0

FBufferLinearEase * __thiscall Audio::FBufferLinearEase::FBufferLinearEase(FBufferLinearEase *this)

{
  this->BufferLength = 0;
  this->LerpLength = 0;
  this->CurrentLerpStep = 0;
  (this->DeltaBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeltaBuffer).ArrayNum = 0;
  (this->DeltaBuffer).ArrayMax = 0;
  return this;
}

// ~FBufferLinearEase @ 1444a6070

void __thiscall Audio::FBufferLinearEase::~FBufferLinearEase(FBufferLinearEase *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->DeltaBuffer).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// GetDeltaBuffer @ 1444bfc80

TArray<float,TAlignedHeapAllocator<16>_> * __thiscall
Audio::FBufferLinearEase::GetDeltaBuffer(FBufferLinearEase *this)

{
  return &this->DeltaBuffer;
}

// Init @ 1444c1c80

void __thiscall
Audio::FBufferLinearEase::Init
          (FBufferLinearEase *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  float fVar11;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58;
  TArrayView<float_const_,int> local_48;
  TArrayView<float,int> local_38 [2];
  
  if (param_1->ArrayNum == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSourceValues.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                       ,0x51f,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (param_2->ArrayNum == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTargetValues.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                       ,0x520,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (param_3 < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InLerpLength > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                       ,0x521,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar3 = param_1->ArrayNum;
  this->BufferLength = iVar3;
  if (param_2->ArrayNum != iVar3) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTargetValues.Num() == BufferLength",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                       ,0x525,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  this->LerpLength = param_3;
  this->CurrentLerpStep = 0;
  piVar1 = &(this->DeltaBuffer).ArrayMax;
  piVar2 = &(this->DeltaBuffer).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->DeltaBuffer).AllocatorInstance,0,piVar1);
  }
  iVar3 = this->BufferLength;
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (4,4,iVar3,&(this->DeltaBuffer).AllocatorInstance,piVar2,piVar1);
  memset((this->DeltaBuffer).AllocatorInstance.Data + (longlong)iVar10 * 4,0,(longlong)iVar3 << 2);
  pFVar5 = (this->DeltaBuffer).AllocatorInstance.Data;
  iVar3 = *piVar2;
  fVar11 = __real_3f800000 / (float)this->LerpLength;
  if (iVar3 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar10 = param_1->ArrayNum;
  if (iVar10 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = (param_2->AllocatorInstance).Data;
  iVar4 = param_2->ArrayNum;
  if (iVar4 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_68._12_4_ = uStack_9c;
  local_68.ArrayNum = iVar3;
  local_58._12_4_ = uStack_8c;
  local_58.ArrayNum = iVar10;
  local_48._12_4_ = uStack_7c;
  local_48.ArrayNum = iVar4;
  local_68.DataPtr = (float *)pFVar5;
  local_58.DataPtr = (float *)pFVar6;
  local_48.DataPtr = (float *)pFVar7;
  ArraySubtract(&local_48,&local_58,&local_68);
  local_38[0].DataPtr = (float *)(this->DeltaBuffer).AllocatorInstance.Data;
  iVar3 = *piVar2;
  if (iVar3 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_38[0]._12_4_ = uStack_6c;
  local_38[0].ArrayNum = iVar3;
  ArrayMultiplyByConstantInPlace(local_38,fVar11);
  return;
}

// Update @ 1444e7660

bool __thiscall
Audio::FBufferLinearEase::Update
          (FBufferLinearEase *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  TArrayView<float,int> local_28;
  TArrayView<float_const_,int> local_18;
  
  if (param_1->ArrayNum != this->BufferLength) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSourceValues.Num() == BufferLength",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                       ,0x535,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  if (this->CurrentLerpStep == this->LerpLength) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentLerpStep != LerpLength",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                       ,0x536,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  pFVar4 = (this->DeltaBuffer).AllocatorInstance.Data;
  iVar2 = (this->DeltaBuffer).ArrayNum;
  if (iVar2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iVar1;
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iVar2;
  local_28.DataPtr = (float *)pFVar3;
  local_18.DataPtr = (float *)pFVar4;
  ArrayMixIn(&local_18,&local_28);
  this->CurrentLerpStep = this->CurrentLerpStep + 1;
  return this->CurrentLerpStep == this->LerpLength;
}

// Update @ 1444e7780

bool __thiscall
Audio::FBufferLinearEase::Update
          (FBufferLinearEase *this,uint param_1,TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  TArrayView<float,int> local_28;
  TArrayView<float_const_,int> local_18;
  
  if (param_2->ArrayNum != this->BufferLength) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSourceValues.Num() == BufferLength",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                       ,0x544,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  if (this->CurrentLerpStep == this->LerpLength) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentLerpStep != LerpLength",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                       ,0x545,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  if (param_1 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("StepsToJumpForward",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BufferVectorOperations.cpp"
                       ,0x546,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  iVar1 = this->LerpLength;
  iVar9 = this->CurrentLerpStep + param_1;
  this->CurrentLerpStep = iVar9;
  if (iVar1 <= iVar9) {
    this->CurrentLerpStep = iVar1;
    param_1 = param_1 + (iVar1 - iVar9);
  }
  pFVar4 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  pFVar5 = (this->DeltaBuffer).AllocatorInstance.Data;
  iVar3 = (this->DeltaBuffer).ArrayNum;
  if (iVar3 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iVar2;
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iVar3;
  local_28.DataPtr = (float *)pFVar4;
  local_18.DataPtr = (float *)pFVar5;
  ArrayMixIn(&local_18,&local_28,(float)param_1);
  return iVar1 <= iVar9;
}

