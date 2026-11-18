// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// MarkIndex<1> @ 147cbafd0

void __thiscall
FInstanceAttributeTracker::MarkIndex<1>(FInstanceAttributeTracker *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar4 = (this->Data).ArrayNum;
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  iVar3 = (int)(param_2 + 7 + (param_2 + 7 >> 0x1f & 7U)) >> 3;
  if (iVar4 < iVar3) {
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddZeroed(&this->Data,iVar3 - iVar4);
  }
  this->MaxIndex = param_2;
  if (param_2 <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < MaxIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstancedStaticMesh\\InstanceAttributeTracker.h"
                       ,0xfc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = param_1;
  if (this->FirstChangedIndex < param_1) {
    iVar4 = this->FirstChangedIndex;
  }
  this->FirstChangedIndex = iVar4;
  iVar4 = param_1;
  if (param_1 < this->LastChangedIndex) {
    iVar4 = this->LastChangedIndex;
  }
  this->LastChangedIndex = iVar4;
  uVar6 = param_1 >> 0x1f & 7;
  iVar4 = param_1 + uVar6;
  uVar8 = iVar4 >> 3;
  bVar5 = (((byte)iVar4 & 7) - (char)uVar6) * '\x04';
  uVar6 = 0;
  if ((int)uVar8 < (this->Data).ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar6 = *(uint *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
  if ((uVar6 & 3 << (bVar5 & 0x1f)) == 0) {
    if (this->NumChanged[1] < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumChanged[uint32(Flag)] >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstancedStaticMesh\\InstanceAttributeTracker.h"
                         ,0x10b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->NumChanged[1] = this->NumChanged[1] + 1;
  }
  uVar7 = 0;
  if ((int)uVar8 < (this->Data).ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(uint *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar8 * 4) =
       uVar6 | 2 << (bVar5 & 0x1f);
  return;
}

// MarkIndex<2> @ 147cbb190

void __thiscall
FInstanceAttributeTracker::MarkIndex<2>(FInstanceAttributeTracker *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar4 = (this->Data).ArrayNum;
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  iVar3 = (int)(param_2 + 7 + (param_2 + 7 >> 0x1f & 7U)) >> 3;
  if (iVar4 < iVar3) {
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddZeroed(&this->Data,iVar3 - iVar4);
  }
  this->MaxIndex = param_2;
  if (param_2 <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < MaxIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstancedStaticMesh\\InstanceAttributeTracker.h"
                       ,0xfc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = param_1;
  if (this->FirstChangedIndex < param_1) {
    iVar4 = this->FirstChangedIndex;
  }
  this->FirstChangedIndex = iVar4;
  iVar4 = param_1;
  if (param_1 < this->LastChangedIndex) {
    iVar4 = this->LastChangedIndex;
  }
  this->LastChangedIndex = iVar4;
  uVar6 = param_1 >> 0x1f & 7;
  iVar4 = param_1 + uVar6;
  uVar8 = iVar4 >> 3;
  bVar5 = (((byte)iVar4 & 7) - (char)uVar6) * '\x04';
  uVar6 = 0;
  if ((int)uVar8 < (this->Data).ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar6 = *(uint *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
  if ((uVar6 & 5 << (bVar5 & 0x1f)) == 0) {
    if (this->NumChanged[2] < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumChanged[uint32(Flag)] >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstancedStaticMesh\\InstanceAttributeTracker.h"
                         ,0x10b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->NumChanged[2] = this->NumChanged[2] + 1;
  }
  uVar7 = 0;
  if ((int)uVar8 < (this->Data).ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(uint *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar8 * 4) =
       uVar6 | 4 << (bVar5 & 0x1f);
  return;
}

// MarkIndex<3> @ 147cbb350

void __thiscall
FInstanceAttributeTracker::MarkIndex<3>(FInstanceAttributeTracker *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar4 = (this->Data).ArrayNum;
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  iVar3 = (int)(param_2 + 7 + (param_2 + 7 >> 0x1f & 7U)) >> 3;
  if (iVar4 < iVar3) {
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddZeroed(&this->Data,iVar3 - iVar4);
  }
  this->MaxIndex = param_2;
  if (param_2 <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < MaxIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstancedStaticMesh\\InstanceAttributeTracker.h"
                       ,0xfc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = param_1;
  if (this->FirstChangedIndex < param_1) {
    iVar4 = this->FirstChangedIndex;
  }
  this->FirstChangedIndex = iVar4;
  iVar4 = param_1;
  if (param_1 < this->LastChangedIndex) {
    iVar4 = this->LastChangedIndex;
  }
  this->LastChangedIndex = iVar4;
  uVar6 = param_1 >> 0x1f & 7;
  iVar4 = param_1 + uVar6;
  uVar8 = iVar4 >> 3;
  bVar5 = (((byte)iVar4 & 7) - (char)uVar6) * '\x04';
  uVar6 = 0;
  if ((int)uVar8 < (this->Data).ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar6 = *(uint *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
  if ((uVar6 & 9 << (bVar5 & 0x1f)) == 0) {
    if (this->NumChanged[3] < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumChanged[uint32(Flag)] >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstancedStaticMesh\\InstanceAttributeTracker.h"
                         ,0x10b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->NumChanged[3] = this->NumChanged[3] + 1;
  }
  uVar7 = 0;
  if ((int)uVar8 < (this->Data).ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(uint *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar8 * 4) =
       uVar6 | 8 << (bVar5 & 0x1f);
  return;
}

// MarkIndex<0> @ 147cbb510

void __thiscall
FInstanceAttributeTracker::MarkIndex<0>(FInstanceAttributeTracker *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar4 = (this->Data).ArrayNum;
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  iVar3 = (int)(param_2 + 7 + (param_2 + 7 >> 0x1f & 7U)) >> 3;
  if (iVar4 < iVar3) {
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddZeroed(&this->Data,iVar3 - iVar4);
  }
  this->MaxIndex = param_2;
  if (param_2 <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < MaxIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstancedStaticMesh\\InstanceAttributeTracker.h"
                       ,0xfc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = param_1;
  if (this->FirstChangedIndex < param_1) {
    iVar4 = this->FirstChangedIndex;
  }
  this->FirstChangedIndex = iVar4;
  iVar4 = param_1;
  if (param_1 < this->LastChangedIndex) {
    iVar4 = this->LastChangedIndex;
  }
  this->LastChangedIndex = iVar4;
  uVar5 = param_1 >> 0x1f & 7;
  iVar4 = param_1 + uVar5;
  uVar7 = iVar4 >> 3;
  uVar8 = 1 << ((((byte)iVar4 & 7) - (char)uVar5) * '\x04' & 0x1f);
  uVar5 = 0;
  if ((int)uVar7 < (this->Data).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar5 = *(uint *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
  if ((uVar8 & uVar5) == 0) {
    if (this->NumChanged[0] < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumChanged[uint32(Flag)] >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstancedStaticMesh\\InstanceAttributeTracker.h"
                         ,0x10b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->NumChanged[0] = this->NumChanged[0] + 1;
  }
  uVar6 = 0;
  if ((int)uVar7 < (this->Data).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(uint *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar7 * 4) = uVar8 | uVar5;
  return;
}

// ClearLastElement @ 147ce4f00

void __thiscall FInstanceAttributeTracker::ClearLastElement(FInstanceAttributeTracker *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar4 = this->MaxIndex + -1;
  iVar1 = (this->Data).ArrayNum;
  uVar7 = iVar4 >> 0x1f & 7;
  uVar5 = iVar4 + uVar7;
  iVar4 = (uVar5 & 7) - uVar7;
  uVar5 = (int)uVar5 >> 3;
  uVar7 = ~uVar5 >> 0x1f;
  if (iVar4 < 1) {
    uVar6 = 0;
    if ((int)uVar5 < iVar1) {
      uVar6 = uVar7;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) = 0;
  }
  else {
    uVar6 = 0;
    if ((int)uVar5 < iVar1) {
      uVar6 = uVar7;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar6 = *(uint *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
    uVar8 = 0;
    if ((int)uVar5 < (this->Data).ArrayNum) {
      uVar8 = uVar7;
    }
    if (uVar8 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(uint *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) =
         0xffffffffU >> (('\b' - (char)iVar4) * '\x04' & 0x1fU) & uVar6;
  }
  return;
}

// CountMaskChanges @ 147ce7050

void __thiscall
FInstanceAttributeTracker::CountMaskChanges
          (FInstanceAttributeTracker *this,uint param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 < 8) {
    uVar3 = ((ulonglong)(param_1 * 8 | param_1) & 0x88888888) >> ((char)param_2 * '\x04' & 0x3fU);
    uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
    iVar4 = (param_3 -
            (byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) -
            param_2;
    if (iVar4 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Delta >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstancedStaticMesh\\InstanceAttributeTracker.h"
                         ,0x274,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->NumChanged[3] = this->NumChanged[3] + iVar4;
  }
  return;
}

// DecChangedCounts @ 147cebee0

void __thiscall
FInstanceAttributeTracker::DecChangedCounts(FInstanceAttributeTracker *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = GetFlags(this,param_1);
  if ((uVar4 & 1) == 0) {
    if ((uVar4 & 4) != 0) {
      piVar1 = this->NumChanged + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumChanged[uint32(Flag)] >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstancedStaticMesh\\InstanceAttributeTracker.h"
                           ,0x250,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    if ((uVar4 & 2) != 0) {
      piVar1 = this->NumChanged + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumChanged[uint32(Flag)] >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstancedStaticMesh\\InstanceAttributeTracker.h"
                           ,0x250,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    if ((uVar4 & 8) != 0) {
      piVar1 = this->NumChanged + 3;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumChanged[uint32(Flag)] >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstancedStaticMesh\\InstanceAttributeTracker.h"
                           ,0x250,L"");
        if (!bVar3) {
          return;
        }
code_r0x000147cebfc6:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  else {
    piVar1 = this->NumChanged;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumChanged[uint32(EFlag::Added)] >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstancedStaticMesh\\InstanceAttributeTracker.h"
                         ,0x262,L"");
      if (bVar3) goto code_r0x000147cebfc6;
    }
  }
  return;
}

// GetFlags @ 147d049b0

uint __thiscall FInstanceAttributeTracker::GetFlags(FInstanceAttributeTracker *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (this->MaxIndex <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < MaxIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstancedStaticMesh\\InstanceAttributeTracker.h"
                       ,0x119,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar5 = param_1 >> 0x1f & 7;
  iVar4 = param_1 + uVar5;
  uVar6 = iVar4 >> 3;
  uVar3 = 0;
  if ((int)uVar6 < (this->Data).ArrayNum) {
    uVar3 = ~uVar6 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) >>
         ((((byte)iVar4 & 7) - (char)uVar5) * '\x04' & 0x1f) & 0xf;
}

// LoadCountAndMask @ 147d1a950

uint __thiscall
FInstanceAttributeTracker::LoadCountAndMask
          (FInstanceAttributeTracker *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  if (!param_2) {
    return 0;
  }
  uVar4 = this->MaxIndex + param_1 * -8;
  if (8 < (int)uVar4) {
    uVar4 = 8;
  }
  uVar3 = 0;
  if (param_1 < (this->Data).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  uVar3 = *(uint *)((this->Data).AllocatorInstance.Data + (longlong)param_1 * 4);
  CountMaskChanges(this,uVar3,0,uVar4);
  return uVar3 | 0x88888888;
}

// MarkRemoved @ 147d1abb0

void __thiscall
FInstanceAttributeTracker::MarkRemoved(FInstanceAttributeTracker *this,FPrimitiveInstanceId param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  FPrimitiveInstanceId FVar4;
  ForElementType<unsigned_int> FVar5;
  
  FVar4.Id = param_1.Id;
  if (this->FirstRemovedIdIndex < param_1.Id) {
    FVar4.Id = this->FirstRemovedIdIndex;
  }
  this->FirstRemovedIdIndex = FVar4.Id;
  if ((this->Removed).NumBits <= param_1.Id) {
    TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
              (&this->Removed,(param_1.Id + 0x20 >> 0x1f & 0x1fU) + param_1.Id + 0x20 & 0xffffffe0,
               false);
  }
  if ((param_1.Id < 0) || ((this->Removed).NumBits <= param_1.Id)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar5 = (this->Removed).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<unsigned_int>)0x0) {
    FVar5 = (ForElementType<unsigned_int>)&this->Removed;
  }
  puVar1 = (uint *)((longlong)FVar5 +
                   (longlong)((int)(param_1.Id + (param_1.Id >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_1.Id & 0x1f);
  return;
}

// RemoveAt @ 147d21b80

void __thiscall
FInstanceAttributeTracker::RemoveAt
          (FInstanceAttributeTracker *this,FPrimitiveInstanceId param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  iVar13 = (this->Data).ArrayNum;
  if (param_3 < param_2) {
    param_3 = param_2;
  }
  iVar3 = (int)(param_3 + 7 + (param_3 + 7 >> 0x1f & 7U)) >> 3;
  if (iVar13 < iVar3) {
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddZeroed(&this->Data,iVar3 - iVar13);
  }
  this->MaxIndex = param_3;
  MarkRemoved(this,param_1);
  DecChangedCounts(this,param_2);
  iVar13 = this->MaxIndex + -1;
  if (param_2 != iVar13) {
    uVar7 = param_2 >> 0x1f & 7;
    uVar4 = param_2 + uVar7;
    iVar3 = (uVar4 & 7) - uVar7;
    uVar4 = (int)uVar4 >> 3;
    uVar11 = (int)((iVar13 >> 0x1f & 7U) + iVar13) >> 3;
    uVar7 = 0;
    if ((int)uVar4 < (this->Data).ArrayNum) {
      uVar7 = ~uVar4 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar7 = uVar4 + 1;
    uVar10 = *(uint *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar4 * 4);
    uVar5 = LoadCountAndMask(this,uVar7,uVar4 != uVar11);
    uVar12 = this->MaxIndex + uVar4 * -8;
    if (8 < (int)uVar12) {
      uVar12 = 8;
    }
    CountMaskChanges(this,uVar10,iVar3 + 1,uVar12);
    uVar12 = uVar10 >> 4 | 0x88888888;
    if (iVar3 != 0) {
      uVar8 = -1 << ((char)iVar3 * '\x04' & 0x1fU);
      uVar12 = ~uVar8 & uVar10 | uVar8 & uVar12;
    }
    uVar10 = 0;
    if ((int)uVar4 < (this->Data).ArrayNum) {
      uVar10 = ~uVar4 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(uint *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) =
         uVar12 | uVar5 << 0x1c;
    lVar6 = (longlong)(int)uVar11;
    lVar9 = (longlong)(int)uVar7;
    if (lVar9 < lVar6) {
      iVar3 = uVar7 * 8;
      uVar10 = uVar7;
      do {
        iVar3 = iVar3 + 8;
        uVar10 = uVar10 + 1;
        uVar12 = this->MaxIndex - iVar3;
        uVar8 = uVar5 >> 4;
        if (8 < (int)uVar12) {
          uVar12 = 8;
        }
        uVar5 = 0;
        if ((int)uVar10 < (this->Data).ArrayNum) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = *(uint *)((this->Data).AllocatorInstance.Data + lVar9 * 4 + 4);
        CountMaskChanges(this,uVar5,0,uVar12);
        uVar5 = uVar5 | 0x88888888;
        uVar12 = 0;
        if ((int)uVar7 < (this->Data).ArrayNum) {
          uVar12 = ~uVar7 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar7 = uVar7 + 1;
        *(uint *)((this->Data).AllocatorInstance.Data + lVar9 * 4) = uVar5 << 0x1c | uVar8;
        lVar9 = lVar9 + 1;
      } while (lVar9 < lVar6);
    }
    if (uVar11 != uVar4) {
      uVar7 = 0;
      if ((int)uVar11 < (this->Data).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(uint *)((this->Data).AllocatorInstance.Data + lVar6 * 4) = uVar5 >> 4;
    }
    if (this->FirstChangedIndex < param_2) {
      param_2 = this->FirstChangedIndex;
    }
    this->FirstChangedIndex = param_2;
    if (iVar13 < this->LastChangedIndex) {
      iVar13 = this->LastChangedIndex;
    }
    this->LastChangedIndex = iVar13;
  }
  ClearLastElement(this);
  this->MaxIndex = this->MaxIndex + -1;
  return;
}

// RemoveAtSwap @ 147d22440

void __thiscall
FInstanceAttributeTracker::RemoveAtSwap
          (FInstanceAttributeTracker *this,FPrimitiveInstanceId param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar6 = (this->Data).ArrayNum;
  if (param_3 < param_2) {
    param_3 = param_2;
  }
  iVar3 = (int)(param_3 + 7 + (param_3 + 7 >> 0x1f & 7U)) >> 3;
  if (iVar6 < iVar3) {
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddZeroed(&this->Data,iVar3 - iVar6);
  }
  this->MaxIndex = param_3;
  MarkRemoved(this,param_1);
  DecChangedCounts(this,param_2);
  iVar6 = this->MaxIndex + -1;
  if (param_2 != iVar6) {
    uVar4 = GetFlags(this,iVar6);
    if ((uVar4 & 9) == 0) {
      if (this->NumChanged[3] < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumChanged[uint32(EFlag::IndexChanged)] >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstancedStaticMesh\\InstanceAttributeTracker.h"
                           ,0xa4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      this->NumChanged[3] = this->NumChanged[3] + 1;
    }
    if (this->MaxIndex <= param_2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < MaxIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstancedStaticMesh\\InstanceAttributeTracker.h"
                         ,0x228,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (0xf < (uVar4 | 8)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mask <= AnyFlagMask",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstancedStaticMesh\\InstanceAttributeTracker.h"
                         ,0x229,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar7 = param_2 >> 0x1f & 7;
    iVar6 = param_2 + uVar7;
    uVar8 = iVar6 >> 3;
    bVar5 = (((byte)iVar6 & 7) - (char)uVar7) * '\x04';
    uVar7 = 0;
    if ((int)uVar8 < (this->Data).ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar7 = *(uint *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
    uVar9 = 0;
    if ((int)uVar8 < (this->Data).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(uint *)((this->Data).AllocatorInstance.Data + (longlong)(int)uVar8 * 4) =
         (uVar4 | 8) << (bVar5 & 0x1f) | uVar7 & ~(0xf << (bVar5 & 0x1f));
    iVar6 = param_2;
    if (this->FirstChangedIndex < param_2) {
      iVar6 = this->FirstChangedIndex;
    }
    this->FirstChangedIndex = iVar6;
    if (param_2 < this->LastChangedIndex) {
      param_2 = this->LastChangedIndex;
    }
    this->LastChangedIndex = param_2;
  }
  ClearLastElement(this);
  this->MaxIndex = this->MaxIndex + -1;
  return;
}

// FInstanceAttributeTracker @ 147d78730

FInstanceAttributeTracker * __thiscall
FInstanceAttributeTracker::FInstanceAttributeTracker
          (FInstanceAttributeTracker *this,FInstanceAttributeTracker *param_1)

{
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  (this->Removed).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->Removed).NumBits = 0;
  *(undefined8 *)&(this->Removed).MaxBits = 0x80;
  this->FirstRemovedIdIndex = 0x7fffffff;
  this->FirstChangedIndex = 0x7fffffff;
  this->LastChangedIndex = 0;
  Move(this,param_1);
  return this;
}

// FInstanceAttributeTracker @ 147d78780

FInstanceAttributeTracker * __thiscall
FInstanceAttributeTracker::FInstanceAttributeTracker(FInstanceAttributeTracker *this)

{
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  (this->Removed).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  *(undefined8 *)&(this->Removed).MaxBits = 0x80;
  this->FirstRemovedIdIndex = 0x7fffffff;
  this->FirstChangedIndex = 0x7fffffff;
  this->LastChangedIndex = 0;
  (this->Removed).NumBits = 0;
  this->MaxIndex = 0;
  this->FirstChangedIndex = 0x7fffffff;
  this->LastChangedIndex = 0;
  this->FirstRemovedIdIndex = 0x7fffffff;
  this->NumChanged[0] = 0;
  this->NumChanged[1] = 0;
  this->NumChanged[2] = 0;
  this->NumChanged[3] = 0;
  return this;
}

// operator= @ 147d7caa0

void __thiscall
FInstanceAttributeTracker::operator=
          (FInstanceAttributeTracker *this,FInstanceAttributeTracker *param_1)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  int *piVar4;
  
  if (&this->Removed != &param_1->Removed) {
    if ((param_1->Removed).AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
      memmove(&this->Removed,&param_1->Removed,0x10);
    }
    FVar1 = (this->Removed).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    piVar4 = &(param_1->Removed).NumBits;
    (this->Removed).AllocatorInstance.SecondaryData =
         (param_1->Removed).AllocatorInstance.SecondaryData;
    (param_1->Removed).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    (this->Removed).NumBits = *piVar4;
    (this->Removed).MaxBits = (param_1->Removed).MaxBits;
    *piVar4 = 0;
    (param_1->Removed).MaxBits = 0;
  }
  if (this != param_1) {
    pFVar2 = (this->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    piVar4 = &(param_1->Data).ArrayMax;
    (this->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Data).ArrayNum = (param_1->Data).ArrayNum;
    (this->Data).ArrayMax = *piVar4;
    (param_1->Data).ArrayNum = 0;
    *piVar4 = 0;
  }
  piVar4 = &(param_1->Data).ArrayMax;
  this->FirstRemovedIdIndex = param_1->FirstRemovedIdIndex;
  this->MaxIndex = param_1->MaxIndex;
  this->FirstChangedIndex = param_1->FirstChangedIndex;
  this->LastChangedIndex = param_1->LastChangedIndex;
  uVar3 = *(undefined8 *)(param_1->NumChanged + 2);
  *(undefined8 *)this->NumChanged = *(undefined8 *)param_1->NumChanged;
  *(undefined8 *)(this->NumChanged + 2) = uVar3;
  (param_1->Removed).NumBits = 0;
  (param_1->Data).ArrayNum = 0;
  if (*piVar4 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)param_1,0,piVar4);
  }
  param_1->MaxIndex = 0;
  param_1->FirstChangedIndex = 0x7fffffff;
  param_1->LastChangedIndex = 0;
  param_1->FirstRemovedIdIndex = 0x7fffffff;
  param_1->NumChanged[0] = 0;
  param_1->NumChanged[1] = 0;
  param_1->NumChanged[2] = 0;
  param_1->NumChanged[3] = 0;
  return;
}

// GetRemovedIterator @ 147da89a0

TConstSetBitIterator<FDefaultBitArrayAllocator> * __thiscall
FInstanceAttributeTracker::GetRemovedIterator
          (FInstanceAttributeTracker *this,
          TConstSetBitIterator<FDefaultBitArrayAllocator> *__return_storage_ptr__)

{
  int iVar1;
  
  iVar1 = this->FirstRemovedIdIndex;
  if ((this->Removed).NumBits < this->FirstRemovedIdIndex) {
    iVar1 = (this->Removed).NumBits;
  }
  TConstSetBitIterator<FDefaultBitArrayAllocator>::TConstSetBitIterator<FDefaultBitArrayAllocator>
            (__return_storage_ptr__,&this->Removed,iVar1);
  return __return_storage_ptr__;
}

// Move @ 147db7af0

void __cdecl
FInstanceAttributeTracker::Move
          (FInstanceAttributeTracker *param_1,FInstanceAttributeTracker *param_2)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  int *piVar4;
  
  if (&param_1->Removed != &param_2->Removed) {
    if ((param_2->Removed).AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
      memmove(&param_1->Removed,&param_2->Removed,0x10);
    }
    FVar1 = (param_1->Removed).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    piVar4 = &(param_2->Removed).NumBits;
    (param_1->Removed).AllocatorInstance.SecondaryData =
         (param_2->Removed).AllocatorInstance.SecondaryData;
    (param_2->Removed).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    (param_1->Removed).NumBits = *piVar4;
    (param_1->Removed).MaxBits = (param_2->Removed).MaxBits;
    *piVar4 = 0;
    (param_2->Removed).MaxBits = 0;
  }
  if (param_1 != param_2) {
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    piVar4 = &(param_2->Data).ArrayMax;
    (param_1->Data).AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->Data).ArrayNum = (param_2->Data).ArrayNum;
    (param_1->Data).ArrayMax = *piVar4;
    (param_2->Data).ArrayNum = 0;
    *piVar4 = 0;
  }
  piVar4 = &(param_2->Data).ArrayMax;
  param_1->FirstRemovedIdIndex = param_2->FirstRemovedIdIndex;
  param_1->MaxIndex = param_2->MaxIndex;
  param_1->FirstChangedIndex = param_2->FirstChangedIndex;
  param_1->LastChangedIndex = param_2->LastChangedIndex;
  uVar3 = *(undefined8 *)(param_2->NumChanged + 2);
  *(undefined8 *)param_1->NumChanged = *(undefined8 *)param_2->NumChanged;
  *(undefined8 *)(param_1->NumChanged + 2) = uVar3;
  (param_2->Removed).NumBits = 0;
  (param_2->Data).ArrayNum = 0;
  if (*piVar4 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)param_2,0,piVar4);
  }
  param_2->MaxIndex = 0;
  param_2->FirstChangedIndex = 0x7fffffff;
  param_2->LastChangedIndex = 0;
  param_2->FirstRemovedIdIndex = 0x7fffffff;
  param_2->NumChanged[0] = 0;
  param_2->NumChanged[1] = 0;
  param_2->NumChanged[2] = 0;
  param_2->NumChanged[3] = 0;
  return;
}

// Reset @ 147dbe220

void __thiscall FInstanceAttributeTracker::Reset(FInstanceAttributeTracker *this)

{
  int *piVar1;
  
  (this->Removed).NumBits = 0;
  piVar1 = &(this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  this->MaxIndex = 0;
  this->FirstChangedIndex = 0x7fffffff;
  this->LastChangedIndex = 0;
  this->FirstRemovedIdIndex = 0x7fffffff;
  this->NumChanged[0] = 0;
  this->NumChanged[1] = 0;
  this->NumChanged[2] = 0;
  this->NumChanged[3] = 0;
  return;
}

