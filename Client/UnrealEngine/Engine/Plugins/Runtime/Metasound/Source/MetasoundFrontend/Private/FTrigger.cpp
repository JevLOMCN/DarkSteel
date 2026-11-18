// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 20

// FTrigger @ 14af3d680

FTrigger * __thiscall Metasound::FTrigger::FTrigger(FTrigger *this,FTrigger *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->TriggeredFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->TriggeredFrames).ArrayMax;
  iVar2 = (param_1->TriggeredFrames).ArrayNum;
  _Src = (param_1->TriggeredFrames).AllocatorInstance.Data;
  (this->TriggeredFrames).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->TriggeredFrames).AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
  }
  this->bHasAdvanced = param_1->bHasAdvanced;
  this->bTriggeredFromInit = param_1->bTriggeredFromInit;
  this->bHasTrigger = param_1->bHasTrigger;
  this->NumFramesPerBlock = param_1->NumFramesPerBlock;
  this->SampleRate = param_1->SampleRate;
  this->LastTriggerIndexInBlock = param_1->LastTriggerIndexInBlock;
  return this;
}

// FTrigger @ 14af3d730

FTrigger * __thiscall Metasound::FTrigger::FTrigger(FTrigger *this,FOperatorSettings *param_1)

{
  int iVar1;
  
  (this->TriggeredFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggeredFrames).ArrayNum = 0;
  (this->TriggeredFrames).ArrayMax = 0;
  this->bHasAdvanced = false;
  this->bTriggeredFromInit = false;
  this->bHasTrigger = false;
  this->NumFramesPerBlock = param_1->NumFramesPerBlock;
  iVar1 = param_1->SampleRate;
  this->LastTriggerIndexInBlock = 0;
  this->SampleRate = (int)(float)iVar1;
  return this;
}

// FTrigger @ 14af3d770

FTrigger * __thiscall
Metasound::FTrigger::FTrigger(FTrigger *this,FOperatorSettings *param_1,int param_2)

{
  int iVar1;
  
  (this->TriggeredFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggeredFrames).ArrayNum = 0;
  (this->TriggeredFrames).ArrayMax = 0;
  this->bHasAdvanced = false;
  this->bTriggeredFromInit = false;
  this->bHasTrigger = false;
  this->NumFramesPerBlock = param_1->NumFramesPerBlock;
  iVar1 = param_1->SampleRate;
  this->LastTriggerIndexInBlock = 0;
  this->SampleRate = (int)(float)iVar1;
  TriggerFrame(this,param_2);
  return this;
}

// FTrigger @ 14af3d7c0

FTrigger * __thiscall
Metasound::FTrigger::FTrigger(FTrigger *this,FOperatorSettings *param_1,bool param_2)

{
  int iVar1;
  
  (this->TriggeredFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggeredFrames).ArrayNum = 0;
  (this->TriggeredFrames).ArrayMax = 0;
  this->bHasAdvanced = false;
  this->bTriggeredFromInit = false;
  this->bHasTrigger = false;
  this->NumFramesPerBlock = param_1->NumFramesPerBlock;
  iVar1 = param_1->SampleRate;
  this->LastTriggerIndexInBlock = 0;
  this->SampleRate = (int)(float)iVar1;
  if (param_2) {
    TriggerFrame(this,0);
  }
  return this;
}

// operator= @ 14af43490

FTrigger * __thiscall Metasound::FTrigger::operator=(FTrigger *this,FTrigger *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->TriggeredFrames).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->TriggeredFrames).AllocatorInstance.Data =
         (param_1->TriggeredFrames).AllocatorInstance.Data;
    (param_1->TriggeredFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TriggeredFrames).ArrayNum = (param_1->TriggeredFrames).ArrayNum;
    (this->TriggeredFrames).ArrayMax = (param_1->TriggeredFrames).ArrayMax;
    (param_1->TriggeredFrames).ArrayNum = 0;
    (param_1->TriggeredFrames).ArrayMax = 0;
  }
  this->bHasAdvanced = param_1->bHasAdvanced;
  this->bTriggeredFromInit = param_1->bTriggeredFromInit;
  this->bHasTrigger = param_1->bHasTrigger;
  this->NumFramesPerBlock = param_1->NumFramesPerBlock;
  this->SampleRate = param_1->SampleRate;
  this->LastTriggerIndexInBlock = param_1->LastTriggerIndexInBlock;
  return this;
}

// operator[] @ 14af43540

int __thiscall Metasound::FTrigger::operator[](FTrigger *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->TriggeredFrames).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->TriggeredFrames).AllocatorInstance.Data + (longlong)param_1 * 4);
}

// operator_bool @ 14af435c0

bool __thiscall Metasound::FTrigger::operator_bool(FTrigger *this)

{
  return 0 < this->LastTriggerIndexInBlock;
}

// Advance @ 14af4f900

void __thiscall Metasound::FTrigger::Advance(FTrigger *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  
  if (this->bHasTrigger != false) {
    uVar7 = (this->TriggeredFrames).ArrayNum;
    uVar9 = 0;
    uVar8 = 0;
    uVar13 = uVar7;
    uVar11 = uVar8;
    if (0 < (int)uVar7) {
      do {
        iVar6 = (uVar13 >> 1) + uVar11;
        if (*(int *)((this->TriggeredFrames).AllocatorInstance.Data + (longlong)iVar6 * 4) < param_1
           ) {
          uVar11 = iVar6 + (uVar13 & 1);
        }
        uVar4 = uVar13 >> 1;
        uVar13 = uVar13 >> 1;
      } while (uVar4 != 0);
      if (uVar11 != 0) {
        uVar13 = uVar8;
        if ((int)uVar11 <= (int)uVar7) {
          uVar13 = ~uVar11 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->TriggeredFrames).AllocatorInstance.Data;
        iVar6 = (this->TriggeredFrames).ArrayNum - uVar11;
        if (iVar6 != 0) {
          memmove(pFVar2,pFVar2 + (longlong)(int)uVar11 * 4,(longlong)iVar6 << 2);
        }
        piVar1 = &(this->TriggeredFrames).ArrayNum;
        *piVar1 = *piVar1 - uVar11;
      }
    }
    iVar6 = (this->TriggeredFrames).ArrayNum;
    uVar10 = uVar9;
    uVar12 = uVar9;
    if (iVar6 < 1) {
      this->bHasTrigger = false;
    }
    else {
      do {
        uVar13 = (uint)uVar12;
        uVar7 = uVar8;
        if ((int)uVar13 < (this->TriggeredFrames).ArrayNum) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->TriggeredFrames).AllocatorInstance.Data + uVar10 * 4;
        *(int *)pFVar2 = *(int *)pFVar2 - param_1;
        uVar10 = uVar10 + 1;
        uVar12 = (ulonglong)(uVar13 + 1);
      } while ((longlong)uVar10 < (longlong)iVar6);
      uVar7 = (this->TriggeredFrames).ArrayNum;
      if (0 < (int)uVar7) {
        do {
          uVar13 = uVar7 >> 1;
          iVar6 = uVar13 + (int)uVar9;
          if (*(int *)((this->TriggeredFrames).AllocatorInstance.Data + (longlong)iVar6 * 4) <
              this->NumFramesPerBlock) {
            uVar9 = (ulonglong)(iVar6 + (uVar7 & 1));
          }
          uVar8 = (uint)uVar9;
          uVar7 = uVar13;
        } while (uVar13 != 0);
      }
    }
    this->LastTriggerIndexInBlock = uVar8;
  }
  return;
}

// AdvanceBlock @ 14af4fac0

void __thiscall Metasound::FTrigger::AdvanceBlock(FTrigger *this)

{
  Advance(this,this->NumFramesPerBlock);
  return;
}

// AssignRawParameter @ 14af4fad0

void __thiscall Metasound::FTrigger::AssignRawParameter(FTrigger *this,void *param_1)

{
  TriggerFrame(this,0);
  return;
}

// First @ 14af92090

int __thiscall Metasound::FTrigger::First(FTrigger *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = (this->TriggeredFrames).ArrayNum;
  if (iVar3 == 0) {
    return -1;
  }
  if (iVar3 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return *(int *)(this->TriggeredFrames).AllocatorInstance.Data;
}

// IsTriggered @ 14afb0200

bool __thiscall Metasound::FTrigger::IsTriggered(FTrigger *this)

{
  return this->bHasTrigger;
}

// IsTriggeredInBlock @ 14afb0210

bool __thiscall Metasound::FTrigger::IsTriggeredInBlock(FTrigger *this)

{
  return 0 < this->LastTriggerIndexInBlock;
}

// Last @ 14afb0410

int __thiscall Metasound::FTrigger::Last(FTrigger *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (this->TriggeredFrames).ArrayNum;
  if (iVar4 == 0) {
    return -1;
  }
  uVar3 = 0;
  if ((int)(iVar4 - 1U) < iVar4) {
    uVar3 = ~(iVar4 - 1U) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->TriggeredFrames).AllocatorInstance.Data +
                 (longlong)(this->TriggeredFrames).ArrayNum * 4 + -4);
}

// Num @ 14afb0540

int __thiscall Metasound::FTrigger::Num(FTrigger *this)

{
  return (this->TriggeredFrames).ArrayNum;
}

// NumTriggeredInBlock @ 14afb0550

int __thiscall Metasound::FTrigger::NumTriggeredInBlock(FTrigger *this)

{
  return this->LastTriggerIndexInBlock;
}

// RemoveAfter @ 14afb4fc0

void __thiscall Metasound::FTrigger::RemoveAfter(FTrigger *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_1 < 1) {
    (this->TriggeredFrames).ArrayNum = 0;
    if ((this->TriggeredFrames).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)this,0,&(this->TriggeredFrames).ArrayMax);
    }
    this->LastTriggerIndexInBlock = 0;
    this->bHasTrigger = false;
    return;
  }
  uVar6 = (this->TriggeredFrames).ArrayNum;
  if (0 < (int)uVar6) {
    iVar7 = 0;
    uVar8 = 0;
    uVar9 = uVar6;
    do {
      iVar5 = (uVar9 >> 1) + uVar8;
      if (*(int *)((this->TriggeredFrames).AllocatorInstance.Data + (longlong)iVar5 * 4) <= param_1)
      {
        uVar8 = iVar5 + (uVar9 & 1);
      }
      uVar3 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar3 != 0);
    uVar6 = uVar6 - uVar8;
    if (0 < (int)uVar6) {
      if (((int)(uVar6 | uVar8) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      _Dst = (this->TriggeredFrames).AllocatorInstance.Data + (longlong)(int)uVar8 * 4;
      iVar5 = ((this->TriggeredFrames).ArrayNum - uVar6) - uVar8;
      if (iVar5 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar6 * 4,(longlong)iVar5 << 2);
      }
      piVar1 = &(this->TriggeredFrames).ArrayNum;
      *piVar1 = *piVar1 - uVar6;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(ForAnyElementType *)this,(this->TriggeredFrames).ArrayNum,
                 &(this->TriggeredFrames).ArrayMax);
      uVar6 = (this->TriggeredFrames).ArrayNum;
      if (0 < (int)uVar6) {
        uVar9 = uVar6;
        do {
          iVar5 = (uVar9 >> 1) + iVar7;
          if (*(int *)((this->TriggeredFrames).AllocatorInstance.Data + (longlong)iVar5 * 4) <
              this->NumFramesPerBlock) {
            iVar7 = iVar5 + (uVar9 & 1);
          }
          uVar8 = uVar9 >> 1;
          uVar9 = uVar9 >> 1;
        } while (uVar8 != 0);
      }
      this->LastTriggerIndexInBlock = iVar7;
      this->bHasTrigger = 0 < (int)uVar6;
    }
  }
  return;
}

// Reset @ 14afb9520

void __thiscall Metasound::FTrigger::Reset(FTrigger *this)

{
  (this->TriggeredFrames).ArrayNum = 0;
  if ((this->TriggeredFrames).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,&(this->TriggeredFrames).ArrayMax);
  }
  this->bHasTrigger = false;
  this->LastTriggerIndexInBlock = 0;
  return;
}

// TriggerFrame @ 14afc00a0

void __thiscall Metasound::FTrigger::TriggerFrame(FTrigger *this,int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_res10 [2];
  
  uVar10 = (this->TriggeredFrames).ArrayNum;
  iVar9 = 0;
  pFVar7 = (this->TriggeredFrames).AllocatorInstance.Data;
  iVar8 = 0;
  iVar6 = 0;
  if (0 < (int)uVar10) {
    do {
      iVar2 = (uVar10 >> 1) + iVar6;
      iVar8 = iVar6;
      if (*(int *)(pFVar7 + (longlong)iVar2 * 4) < param_1) {
        iVar8 = iVar2 + (uVar10 & 1);
      }
      uVar4 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
      iVar6 = iVar8;
    } while (uVar4 != 0);
  }
  local_res10[0] = param_1;
  if (((pFVar7 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 <
       pFVar7 + (longlong)(this->TriggeredFrames).ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (this->TriggeredFrames).ArrayNum;
  piVar1 = &(this->TriggeredFrames).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)this,piVar1);
  }
  pFVar7 = (this->TriggeredFrames).AllocatorInstance.Data;
  (this->TriggeredFrames).ArrayNum = iVar6 + 1;
  pFVar7 = pFVar7 + (longlong)iVar8 * 4;
  memmove(pFVar7 + 4,pFVar7,(longlong)(iVar6 - iVar8) << 2);
  *(int *)((this->TriggeredFrames).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_res10[0];
  if (local_res10[0] < this->NumFramesPerBlock) {
    uVar10 = (this->TriggeredFrames).ArrayNum;
    if (0 < (int)uVar10) {
      do {
        iVar6 = (uVar10 >> 1) + iVar9;
        if (*(int *)((this->TriggeredFrames).AllocatorInstance.Data + (longlong)iVar6 * 4) <
            this->NumFramesPerBlock) {
          iVar9 = iVar6 + (uVar10 & 1);
        }
        uVar4 = uVar10 >> 1;
        uVar10 = uVar10 >> 1;
      } while (uVar4 != 0);
    }
    this->LastTriggerIndexInBlock = iVar9;
  }
  this->bHasTrigger = true;
  return;
}

// UpdateLastTriggerIndexInBlock @ 14afc09a0

void __thiscall Metasound::FTrigger::UpdateLastTriggerIndexInBlock(FTrigger *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (this->TriggeredFrames).ArrayNum;
  iVar4 = 0;
  if (0 < (int)uVar3) {
    do {
      iVar1 = (uVar3 >> 1) + iVar4;
      if (*(int *)((this->TriggeredFrames).AllocatorInstance.Data + (longlong)iVar1 * 4) <
          this->NumFramesPerBlock) {
        iVar4 = iVar1 + (uVar3 & 1);
      }
      uVar2 = uVar3 >> 1;
      uVar3 = uVar3 >> 1;
    } while (uVar2 != 0);
    this->LastTriggerIndexInBlock = iVar4;
    return;
  }
  this->LastTriggerIndexInBlock = 0;
  return;
}

