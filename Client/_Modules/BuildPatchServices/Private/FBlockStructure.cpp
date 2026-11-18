// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 20

// FBlockStructure @ 14321ffa0

FBlockStructure * __thiscall
BuildPatchServices::FBlockStructure::FBlockStructure(FBlockStructure *this,FBlockStructure *param_1)

{
  this->Head = param_1->Head;
  this->Tail = param_1->Tail;
  param_1->Head = (FBlockEntry *)0x0;
  param_1->Tail = (FBlockEntry *)0x0;
  return this;
}

// FBlockStructure @ 14321ffd0

FBlockStructure * __thiscall
BuildPatchServices::FBlockStructure::FBlockStructure(FBlockStructure *this,FBlockStructure *param_1)

{
  ulonglong uVar1;
  FBlockEntry *pFVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  FBlockEntry *pFVar5;
  FBlockEntry *pFVar6;
  FBlockEntry *pFVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  FBlockEntry *pFVar10;
  
  pFVar10 = (FBlockEntry *)0x0;
  this->Head = (FBlockEntry *)0x0;
  this->Tail = (FBlockEntry *)0x0;
  pFVar2 = param_1->Head;
  do {
    if (pFVar2 == (FBlockEntry *)0x0) {
      return this;
    }
    uVar3 = pFVar2->Size;
    uVar9 = pFVar2->Offset;
    if (uVar3 != 0) {
      pFVar7 = this->Head;
      if (pFVar7 == (FBlockEntry *)0x0) {
        pFVar6 = ::operator_new(0x20);
        pFVar7 = pFVar10;
        if (pFVar6 != (FBlockEntry *)0x0) {
          pFVar6->Offset = uVar9;
          pFVar6->Size = uVar3;
          pFVar6->Prev = (FBlockEntry *)0x0;
          pFVar6->Next = (FBlockEntry *)0x0;
          pFVar7 = pFVar6;
        }
        this->Head = pFVar7;
        this->Tail = pFVar7;
      }
      else {
        pFVar6 = this->Tail;
        if (pFVar6 != (FBlockEntry *)0x0) {
          do {
            uVar4 = pFVar6->Offset;
            uVar8 = pFVar6->Size + uVar4;
            if (uVar8 < uVar9) {
              pFVar5 = ::operator_new(0x20);
              pFVar7 = pFVar10;
              if (pFVar5 != (FBlockEntry *)0x0) {
                pFVar5->Offset = uVar9;
                pFVar5->Size = uVar3;
                pFVar5->Next = (FBlockEntry *)0x0;
                pFVar7 = pFVar5;
              }
              pFVar7->Prev = pFVar6;
              pFVar7->Next = pFVar6->Next;
              if (pFVar6->Next == (FBlockEntry *)0x0) {
                this->Tail = pFVar7;
                pFVar6->Next = pFVar7;
              }
              else {
                pFVar6->Next->Prev = pFVar7;
                pFVar6->Next = pFVar7;
              }
              goto LAB_143220159;
            }
            uVar1 = uVar3 + uVar9;
            if (uVar4 <= uVar1) {
              if (uVar4 < uVar9) {
                uVar9 = uVar4;
              }
              pFVar6->Offset = uVar9;
              if (uVar8 < uVar1) {
                uVar8 = uVar1;
              }
              pFVar6->Size = uVar8 - uVar9;
              CollectOverlaps(this,pFVar6,FromEnd);
              goto LAB_143220159;
            }
            pFVar6 = pFVar6->Prev;
          } while (pFVar6 != (FBlockEntry *)0x0);
          pFVar5 = ::operator_new(0x20);
          pFVar6 = pFVar10;
          if (pFVar5 != (FBlockEntry *)0x0) {
            pFVar5->Offset = uVar9;
            pFVar5->Size = uVar3;
            pFVar5->Prev = (FBlockEntry *)0x0;
            pFVar5->Next = (FBlockEntry *)0x0;
            pFVar6 = pFVar5;
          }
          pFVar6->Prev = pFVar7->Prev;
          pFVar6->Next = pFVar7;
          if (pFVar7->Prev == (FBlockEntry *)0x0) {
            this->Head = pFVar6;
            pFVar7->Prev = pFVar6;
          }
          else {
            pFVar7->Prev->Next = pFVar6;
            pFVar7->Prev = pFVar6;
          }
        }
      }
    }
LAB_143220159:
    pFVar2 = pFVar2->Next;
  } while( true );
}

// FBlockStructure @ 143220190

FBlockStructure * __thiscall
BuildPatchServices::FBlockStructure::FBlockStructure(FBlockStructure *this)

{
  this->Head = (FBlockEntry *)0x0;
  this->Tail = (FBlockEntry *)0x0;
  return this;
}

// FBlockStructure @ 1432201b0

FBlockStructure * __thiscall
BuildPatchServices::FBlockStructure::FBlockStructure
          (FBlockStructure *this,ulong64 param_1,ulong64 param_2)

{
  FBlockEntry *pFVar1;
  FBlockEntry *pFVar2;
  
  pFVar2 = (FBlockEntry *)0x0;
  this->Head = (FBlockEntry *)0x0;
  this->Tail = (FBlockEntry *)0x0;
  if (param_2 != 0) {
    pFVar1 = ::operator_new(0x20);
    if (pFVar1 != (FBlockEntry *)0x0) {
      pFVar1->Offset = param_1;
      pFVar1->Size = param_2;
      pFVar1->Prev = (FBlockEntry *)0x0;
      pFVar1->Next = (FBlockEntry *)0x0;
      pFVar2 = pFVar1;
    }
    this->Head = pFVar2;
    this->Tail = pFVar2;
  }
  return this;
}

// ~FBlockStructure @ 143227a30

void __thiscall BuildPatchServices::FBlockStructure::~FBlockStructure(FBlockStructure *this)

{
  FBlockEntry *pFVar1;
  
  pFVar1 = this->Head;
  while (pFVar1 != (FBlockEntry *)0x0) {
    this->Tail = pFVar1->Next;
    pFVar1->Prev = (FBlockEntry *)0x0;
    pFVar1->Next = (FBlockEntry *)0x0;
    ::operator_delete(pFVar1,0x20);
    pFVar1 = this->Tail;
    this->Head = pFVar1;
  }
  return;
}

// operator= @ 143229a10

FBlockStructure * __thiscall
BuildPatchServices::FBlockStructure::operator=(FBlockStructure *this,FBlockStructure *param_1)

{
  FBlockEntry *pFVar1;
  
  pFVar1 = this->Head;
  while (pFVar1 != (FBlockEntry *)0x0) {
    this->Tail = pFVar1->Next;
    pFVar1->Prev = (FBlockEntry *)0x0;
    pFVar1->Next = (FBlockEntry *)0x0;
    ::operator_delete(pFVar1,0x20);
    pFVar1 = this->Tail;
    this->Head = pFVar1;
  }
  this->Head = param_1->Head;
  this->Tail = param_1->Tail;
  param_1->Head = (FBlockEntry *)0x0;
  param_1->Tail = (FBlockEntry *)0x0;
  return this;
}

// operator= @ 143229aa0

FBlockStructure * __thiscall
BuildPatchServices::FBlockStructure::operator=(FBlockStructure *this,FBlockStructure *param_1)

{
  FBlockEntry *pFVar1;
  
  pFVar1 = this->Head;
  while (pFVar1 != (FBlockEntry *)0x0) {
    this->Tail = pFVar1->Next;
    pFVar1->Prev = (FBlockEntry *)0x0;
    pFVar1->Next = (FBlockEntry *)0x0;
    ::operator_delete(pFVar1,0x20);
    pFVar1 = this->Tail;
    this->Head = pFVar1;
  }
  Add(this,param_1,FromEnd);
  return this;
}

// Add @ 143232260

void __thiscall
BuildPatchServices::FBlockStructure::Add(FBlockStructure *this,FBlockRange *param_1,Type param_2)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = param_1->Size;
  if (uVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Size > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                       ,0x11,L"Using GetFirst for a 0 size range is invalid.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Add(this,param_1->First,uVar1,param_2);
  return;
}

// Add @ 1432322e0

void __thiscall
BuildPatchServices::FBlockStructure::Add
          (FBlockStructure *this,FBlockStructure *param_1,Type param_2)

{
  ulonglong uVar1;
  ulong64 uVar2;
  FBlockEntry *pFVar3;
  FBlockEntry *pFVar4;
  FBlockEntry *pFVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  FBlockEntry *pFVar8;
  ulonglong uVar9;
  FBlockEntry *pFVar10;
  
  pFVar8 = param_1->Head;
  if (pFVar8 != (FBlockEntry *)0x0) {
    pFVar10 = (FBlockEntry *)0x0;
    do {
      uVar2 = pFVar8->Size;
      uVar9 = pFVar8->Offset;
      if (uVar2 != 0) {
        pFVar5 = this->Head;
        if (pFVar5 == (FBlockEntry *)0x0) {
          pFVar4 = ::operator_new(0x20);
          pFVar5 = pFVar10;
          if (pFVar4 != (FBlockEntry *)0x0) {
            pFVar4->Offset = uVar9;
            pFVar4->Size = uVar2;
            pFVar4->Prev = (FBlockEntry *)0x0;
            pFVar4->Next = (FBlockEntry *)0x0;
            pFVar5 = pFVar4;
          }
          this->Head = pFVar5;
          this->Tail = pFVar5;
        }
        else if (param_2 == FromStart) {
          uVar1 = uVar2 + uVar9;
          do {
            uVar7 = pFVar5->Offset;
            if (uVar1 < uVar7) goto LAB_143232451;
            uVar6 = pFVar5->Size + uVar7;
            if (uVar9 <= uVar6) {
              if (uVar7 < uVar9) {
                uVar9 = uVar7;
              }
              pFVar5->Offset = uVar9;
              if (uVar6 < uVar1) {
                uVar6 = uVar1;
              }
              pFVar5->Size = uVar6 - uVar9;
              CollectOverlaps(this,pFVar5,FromStart);
              goto LAB_143232511;
            }
            pFVar5 = pFVar5->Next;
          } while (pFVar5 != (FBlockEntry *)0x0);
          pFVar5 = this->Tail;
          pFVar3 = ::operator_new(0x20);
          pFVar4 = pFVar10;
          if (pFVar3 != (FBlockEntry *)0x0) {
            pFVar3->Offset = uVar9;
            pFVar3->Size = uVar2;
            pFVar3->Next = (FBlockEntry *)0x0;
            pFVar4 = pFVar3;
          }
          pFVar4->Prev = pFVar5;
          pFVar4->Next = pFVar5->Next;
          if (pFVar5->Next == (FBlockEntry *)0x0) {
            this->Tail = pFVar4;
            pFVar5->Next = pFVar4;
          }
          else {
            pFVar5->Next->Prev = pFVar4;
            pFVar5->Next = pFVar4;
          }
        }
        else {
          pFVar4 = this->Tail;
          if (pFVar4 != (FBlockEntry *)0x0) {
            do {
              uVar1 = pFVar4->Offset;
              uVar7 = pFVar4->Size + uVar1;
              if (uVar7 < uVar9) {
                pFVar3 = ::operator_new(0x20);
                pFVar5 = pFVar10;
                if (pFVar3 != (FBlockEntry *)0x0) {
                  pFVar3->Offset = uVar9;
                  pFVar3->Size = uVar2;
                  pFVar3->Next = (FBlockEntry *)0x0;
                  pFVar5 = pFVar3;
                }
                pFVar5->Prev = pFVar4;
                pFVar5->Next = pFVar4->Next;
                if (pFVar4->Next == (FBlockEntry *)0x0) {
                  this->Tail = pFVar5;
                  pFVar4->Next = pFVar5;
                }
                else {
                  pFVar4->Next->Prev = pFVar5;
                  pFVar4->Next = pFVar5;
                }
                goto LAB_143232511;
              }
              uVar6 = uVar2 + uVar9;
              if (uVar1 <= uVar6) {
                if (uVar1 < uVar9) {
                  uVar9 = uVar1;
                }
                pFVar4->Offset = uVar9;
                if (uVar7 < uVar6) {
                  uVar7 = uVar6;
                }
                pFVar4->Size = uVar7 - uVar9;
                CollectOverlaps(this,pFVar4,param_2);
                goto LAB_143232511;
              }
              pFVar4 = pFVar4->Prev;
            } while (pFVar4 != (FBlockEntry *)0x0);
LAB_143232451:
            pFVar3 = ::operator_new(0x20);
            pFVar4 = pFVar10;
            if (pFVar3 != (FBlockEntry *)0x0) {
              pFVar3->Offset = uVar9;
              pFVar3->Size = uVar2;
              pFVar3->Prev = (FBlockEntry *)0x0;
              pFVar3->Next = (FBlockEntry *)0x0;
              pFVar4 = pFVar3;
            }
            pFVar4->Prev = pFVar5->Prev;
            pFVar4->Next = pFVar5;
            if (pFVar5->Prev == (FBlockEntry *)0x0) {
              this->Head = pFVar4;
              pFVar5->Prev = pFVar4;
            }
            else {
              pFVar5->Prev->Next = pFVar4;
              pFVar5->Prev = pFVar4;
            }
          }
        }
      }
LAB_143232511:
      pFVar8 = pFVar8->Next;
    } while (pFVar8 != (FBlockEntry *)0x0);
  }
  return;
}

// Add @ 143232550

void __thiscall
BuildPatchServices::FBlockStructure::Add
          (FBlockStructure *this,ulong64 param_1,ulong64 param_2,Type param_3)

{
  FBlockEntry *pFVar1;
  FBlockEntry *pFVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_2 != 0) {
    pFVar2 = this->Head;
    if (pFVar2 == (FBlockEntry *)0x0) {
      pFVar2 = ::operator_new(0x20);
      if (pFVar2 == (FBlockEntry *)0x0) {
        this->Head = (FBlockEntry *)0x0;
        this->Tail = (FBlockEntry *)0x0;
      }
      else {
        pFVar2->Offset = param_1;
        pFVar2->Size = param_2;
        pFVar2->Prev = (FBlockEntry *)0x0;
        pFVar2->Next = (FBlockEntry *)0x0;
        this->Head = pFVar2;
        this->Tail = pFVar2;
      }
    }
    else if (param_3 == FromStart) {
      uVar5 = param_2 + param_1;
      do {
        uVar4 = pFVar2->Offset;
        if (uVar5 < uVar4) {
          pFVar1 = ::operator_new(0x20);
          if (pFVar1 == (FBlockEntry *)0x0) {
            pFVar1 = (FBlockEntry *)0x0;
          }
          else {
            pFVar1->Offset = param_1;
            pFVar1->Size = param_2;
            pFVar1->Prev = (FBlockEntry *)0x0;
            pFVar1->Next = (FBlockEntry *)0x0;
          }
          pFVar1->Prev = pFVar2->Prev;
          pFVar1->Next = pFVar2;
          if (pFVar2->Prev != (FBlockEntry *)0x0) {
            pFVar2->Prev->Next = pFVar1;
            pFVar2->Prev = pFVar1;
            return;
          }
          this->Head = pFVar1;
          pFVar2->Prev = pFVar1;
          return;
        }
        uVar3 = pFVar2->Size + uVar4;
        if (param_1 <= uVar3) {
          if (uVar4 < param_1) {
            param_1 = uVar4;
          }
          pFVar2->Offset = param_1;
          if (uVar3 < uVar5) {
            uVar3 = uVar5;
          }
          pFVar2->Size = uVar3 - param_1;
          CollectOverlaps(this,pFVar2,FromStart);
          return;
        }
        pFVar2 = pFVar2->Next;
      } while (pFVar2 != (FBlockEntry *)0x0);
      pFVar2 = this->Tail;
      pFVar1 = ::operator_new(0x20);
      if (pFVar1 == (FBlockEntry *)0x0) {
        pFVar1 = (FBlockEntry *)0x0;
      }
      else {
        pFVar1->Offset = param_1;
        pFVar1->Size = param_2;
        pFVar1->Next = (FBlockEntry *)0x0;
      }
      pFVar1->Prev = pFVar2;
      pFVar1->Next = pFVar2->Next;
      if (pFVar2->Next == (FBlockEntry *)0x0) {
        this->Tail = pFVar1;
        pFVar2->Next = pFVar1;
      }
      else {
        pFVar2->Next->Prev = pFVar1;
        pFVar2->Next = pFVar1;
      }
    }
    else {
      pFVar1 = this->Tail;
      if (pFVar1 != (FBlockEntry *)0x0) {
        do {
          uVar5 = pFVar1->Offset;
          uVar4 = pFVar1->Size + uVar5;
          if (uVar4 < param_1) {
            pFVar2 = ::operator_new(0x20);
            if (pFVar2 == (FBlockEntry *)0x0) {
              pFVar2 = (FBlockEntry *)0x0;
            }
            else {
              pFVar2->Offset = param_1;
              pFVar2->Size = param_2;
              pFVar2->Next = (FBlockEntry *)0x0;
            }
            pFVar2->Prev = pFVar1;
            pFVar2->Next = pFVar1->Next;
            if (pFVar1->Next != (FBlockEntry *)0x0) {
              pFVar1->Next->Prev = pFVar2;
              pFVar1->Next = pFVar2;
              return;
            }
            this->Tail = pFVar2;
            pFVar1->Next = pFVar2;
            return;
          }
          uVar3 = param_1 + param_2;
          if (uVar5 <= uVar3) {
            if (uVar5 < param_1) {
              param_1 = uVar5;
            }
            pFVar1->Offset = param_1;
            if (uVar4 < uVar3) {
              uVar4 = uVar3;
            }
            pFVar1->Size = uVar4 - param_1;
            CollectOverlaps(this,pFVar1,param_3);
            return;
          }
          pFVar1 = pFVar1->Prev;
        } while (pFVar1 != (FBlockEntry *)0x0);
        pFVar1 = ::operator_new(0x20);
        if (pFVar1 == (FBlockEntry *)0x0) {
          pFVar1 = (FBlockEntry *)0x0;
        }
        else {
          pFVar1->Offset = param_1;
          pFVar1->Size = param_2;
          pFVar1->Prev = (FBlockEntry *)0x0;
          pFVar1->Next = (FBlockEntry *)0x0;
        }
        pFVar1->Prev = pFVar2->Prev;
        pFVar1->Next = pFVar2;
        if (pFVar2->Prev == (FBlockEntry *)0x0) {
          this->Head = pFVar1;
        }
        else {
          pFVar2->Prev->Next = pFVar1;
        }
        pFVar2->Prev = pFVar1;
      }
    }
  }
  return;
}

// CollectOverlaps @ 143246d40

void __thiscall
BuildPatchServices::FBlockStructure::CollectOverlaps
          (FBlockStructure *this,FBlockEntry *param_1,Type param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  FBlockEntry *pFVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_2 == FromStart) {
    pFVar3 = param_1->Next;
    if (pFVar3 != (FBlockEntry *)0x0) {
      while( true ) {
        uVar4 = param_1->Offset;
        uVar1 = pFVar3->Offset;
        uVar5 = param_1->Size + uVar4;
        if (uVar5 < uVar1) break;
        uVar2 = uVar1;
        if (uVar4 < uVar1) {
          uVar2 = uVar4;
        }
        uVar1 = uVar1 + pFVar3->Size;
        param_1->Offset = uVar2;
        if (uVar5 < uVar1) {
          uVar5 = uVar1;
        }
        param_1->Size = uVar5 - uVar2;
        if (pFVar3->Prev == (FBlockEntry *)0x0) {
          this->Head = pFVar3->Next;
        }
        else {
          pFVar3->Prev->Next = pFVar3->Next;
        }
        if (pFVar3->Next == (FBlockEntry *)0x0) {
          this->Tail = pFVar3->Prev;
        }
        else {
          pFVar3->Next->Prev = pFVar3->Prev;
        }
        pFVar3->Prev = (FBlockEntry *)0x0;
        pFVar3->Next = (FBlockEntry *)0x0;
        ::operator_delete(pFVar3,0x20);
        pFVar3 = param_1->Next;
        if (pFVar3 == (FBlockEntry *)0x0) {
          return;
        }
      }
    }
  }
  else {
    pFVar3 = param_1->Prev;
    while (pFVar3 != (FBlockEntry *)0x0) {
      uVar4 = pFVar3->Offset;
      uVar1 = param_1->Offset;
      uVar5 = pFVar3->Size + uVar4;
      if (uVar5 < uVar1) {
        return;
      }
      if (uVar1 < uVar4) {
        uVar4 = uVar1;
      }
      uVar1 = uVar1 + param_1->Size;
      param_1->Offset = uVar4;
      if (uVar1 < uVar5) {
        uVar1 = uVar5;
      }
      param_1->Size = uVar1 - uVar4;
      if (pFVar3->Prev == (FBlockEntry *)0x0) {
        this->Head = pFVar3->Next;
      }
      else {
        pFVar3->Prev->Next = pFVar3->Next;
      }
      if (pFVar3->Next == (FBlockEntry *)0x0) {
        this->Tail = pFVar3->Prev;
      }
      else {
        pFVar3->Next->Prev = pFVar3->Prev;
      }
      pFVar3->Prev = (FBlockEntry *)0x0;
      pFVar3->Next = (FBlockEntry *)0x0;
      ::operator_delete(pFVar3,0x20);
      pFVar3 = param_1->Prev;
    }
  }
  return;
}

// Empty @ 14324af20

void __thiscall BuildPatchServices::FBlockStructure::Empty(FBlockStructure *this)

{
  FBlockEntry *pFVar1;
  
  pFVar1 = this->Head;
  while (pFVar1 != (FBlockEntry *)0x0) {
    this->Tail = pFVar1->Next;
    pFVar1->Prev = (FBlockEntry *)0x0;
    pFVar1->Next = (FBlockEntry *)0x0;
    ::operator_delete(pFVar1,0x20);
    pFVar1 = this->Tail;
    this->Head = pFVar1;
  }
  return;
}

// GetHead @ 143256f30

FBlockEntry * __thiscall BuildPatchServices::FBlockStructure::GetHead(FBlockStructure *this)

{
  return this->Head;
}

// GetTail @ 143257630

FBlockEntry * __thiscall BuildPatchServices::FBlockStructure::GetTail(FBlockStructure *this)

{
  return this->Tail;
}

// Intersect @ 143258650

FBlockStructure * __thiscall
BuildPatchServices::FBlockStructure::Intersect
          (FBlockStructure *this,FBlockStructure *__return_storage_ptr__,FBlockStructure *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  FBlockEntry *pFVar3;
  FBlockEntry *pFVar4;
  FBlockEntry *pFVar5;
  FBlockEntry *pFVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  FBlockEntry *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  __return_storage_ptr__->Head = (FBlockEntry *)0x0;
  __return_storage_ptr__->Tail = (FBlockEntry *)0x0;
  if (this->Head == (FBlockEntry *)0x0) {
    return __return_storage_ptr__;
  }
  pFVar9 = param_1->Head;
  if (pFVar9 == (FBlockEntry *)0x0) {
    return __return_storage_ptr__;
  }
  do {
    uVar7 = pFVar9->Size;
    uVar10 = pFVar9->Offset;
    if (uVar7 != 0) {
      pFVar4 = __return_storage_ptr__->Head;
      if (pFVar4 == (FBlockEntry *)0x0) {
        pFVar4 = ::operator_new(0x20);
        if (pFVar4 != (FBlockEntry *)0x0) {
          pFVar4->Offset = uVar10;
          pFVar4->Size = uVar7;
          pFVar4->Prev = (FBlockEntry *)0x0;
          pFVar4->Next = (FBlockEntry *)0x0;
        }
        __return_storage_ptr__->Head = pFVar4;
        __return_storage_ptr__->Tail = pFVar4;
      }
      else {
        uVar11 = uVar7 + uVar10;
        do {
          uVar1 = pFVar4->Offset;
          if (uVar11 < uVar1) {
            pFVar3 = ::operator_new(0x20);
            if (pFVar3 == (FBlockEntry *)0x0) {
              pFVar3 = (FBlockEntry *)0x0;
            }
            else {
              pFVar3->Offset = uVar10;
              pFVar3->Size = uVar7;
              pFVar3->Prev = (FBlockEntry *)0x0;
              pFVar3->Next = (FBlockEntry *)0x0;
            }
            pFVar3->Prev = pFVar4->Prev;
            pFVar3->Next = pFVar4;
            if (pFVar4->Prev == (FBlockEntry *)0x0) {
              __return_storage_ptr__->Head = pFVar3;
              pFVar4->Prev = pFVar3;
            }
            else {
              pFVar4->Prev->Next = pFVar3;
              pFVar4->Prev = pFVar3;
            }
            goto LAB_1432587f6;
          }
          uVar8 = pFVar4->Size + uVar1;
          if (uVar10 <= uVar8) {
            if (uVar1 < uVar10) {
              uVar10 = uVar1;
            }
            pFVar4->Offset = uVar10;
            if (uVar8 < uVar11) {
              uVar8 = uVar11;
            }
            pFVar4->Size = uVar8 - uVar10;
            CollectOverlaps(__return_storage_ptr__,pFVar4,FromStart);
            goto LAB_1432587f6;
          }
          pFVar4 = pFVar4->Next;
        } while (pFVar4 != (FBlockEntry *)0x0);
        pFVar4 = __return_storage_ptr__->Tail;
        pFVar3 = ::operator_new(0x20);
        if (pFVar3 == (FBlockEntry *)0x0) {
          pFVar3 = (FBlockEntry *)0x0;
        }
        else {
          pFVar3->Offset = uVar10;
          pFVar3->Size = uVar7;
          pFVar3->Next = (FBlockEntry *)0x0;
        }
        pFVar3->Prev = pFVar4;
        pFVar3->Next = pFVar4->Next;
        if (pFVar4->Next == (FBlockEntry *)0x0) {
          __return_storage_ptr__->Tail = pFVar3;
          pFVar4->Next = pFVar3;
        }
        else {
          pFVar4->Next->Prev = pFVar3;
          pFVar4->Next = pFVar3;
        }
      }
    }
LAB_1432587f6:
    pFVar9 = pFVar9->Next;
  } while (pFVar9 != (FBlockEntry *)0x0);
  for (pFVar9 = this->Head; pFVar9 != (FBlockEntry *)0x0; pFVar9 = pFVar9->Next) {
    pFVar4 = pFVar9->Prev;
    if (pFVar4 == (FBlockEntry *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = pFVar4->Size + pFVar4->Offset;
    }
    uVar11 = pFVar9->Offset;
    if ((uVar11 != uVar10) && (__return_storage_ptr__->Head != (FBlockEntry *)0x0)) {
      pFVar3 = (FBlockEntry *)0x0;
      pFVar4 = __return_storage_ptr__->Head;
      do {
        uVar1 = pFVar4->Offset;
        if (uVar1 < uVar11) {
          uVar8 = pFVar4->Size + uVar1;
          if (uVar8 <= uVar10) {
            pFVar6 = pFVar4->Next;
            goto joined_r0x000143258878;
          }
          pFVar6 = pFVar4->Next;
          if (uVar1 < uVar10) {
            if (uVar11 < uVar8) {
              pFVar5 = ::operator_new(0x20);
              if (pFVar5 == (FBlockEntry *)0x0) {
                pFVar5 = (FBlockEntry *)0x0;
              }
              else {
                pFVar5->Offset = uVar11;
                pFVar5->Size = uVar8 - uVar11;
                pFVar5->Next = (FBlockEntry *)0x0;
              }
              pFVar5->Prev = pFVar4;
              pFVar5->Next = pFVar4->Next;
              if (pFVar4->Next == (FBlockEntry *)0x0) {
                __return_storage_ptr__->Tail = pFVar5;
                uVar7 = uVar10 - pFVar4->Offset;
                pFVar4->Next = pFVar5;
              }
              else {
                pFVar4->Next->Prev = pFVar5;
                uVar7 = uVar10 - pFVar4->Offset;
                pFVar4->Next = pFVar5;
              }
            }
            else {
              uVar7 = uVar10 - uVar1;
            }
            pFVar4->Size = uVar7;
          }
          else if (uVar11 < uVar8) {
            pFVar4->Offset = uVar11;
            pFVar4->Size = uVar8 - uVar11;
          }
          else {
            if (pFVar4->Prev == (FBlockEntry *)0x0) {
              __return_storage_ptr__->Head = pFVar6;
            }
            else {
              pFVar4->Prev->Next = pFVar6;
            }
            if (pFVar4->Next == (FBlockEntry *)0x0) {
              __return_storage_ptr__->Tail = pFVar4->Prev;
            }
            else {
              pFVar4->Next->Prev = pFVar4->Prev;
            }
            pFVar4->Prev = (FBlockEntry *)0x0;
            pFVar4->Next = (FBlockEntry *)0x0;
            ::operator_delete(pFVar4,0x20);
          }
        }
        else {
          pFVar6 = pFVar4->Prev;
joined_r0x000143258878:
          bVar2 = pFVar3 == pFVar6;
          pFVar3 = pFVar4;
          if (bVar2) break;
        }
        pFVar4 = pFVar6;
      } while (pFVar6 != (FBlockEntry *)0x0);
    }
  }
  uVar10 = this->Tail->Size + this->Tail->Offset;
  uVar11 = param_1->Tail->Size + param_1->Tail->Offset;
  if ((uVar10 < uVar11) && (__return_storage_ptr__->Head != (FBlockEntry *)0x0)) {
    pFVar4 = (FBlockEntry *)0x0;
    pFVar9 = __return_storage_ptr__->Head;
    do {
      uVar1 = pFVar9->Offset;
      if (uVar1 < uVar11) {
        uVar8 = pFVar9->Size + uVar1;
        if (uVar8 <= uVar10) {
          pFVar3 = pFVar9->Next;
          goto joined_r0x0001432589e3;
        }
        pFVar3 = pFVar9->Next;
        if (uVar1 < uVar10) {
          if (uVar11 < uVar8) {
            pFVar6 = ::operator_new(0x20);
            if (pFVar6 == (FBlockEntry *)0x0) {
              pFVar6 = (FBlockEntry *)0x0;
            }
            else {
              pFVar6->Offset = uVar11;
              pFVar6->Size = uVar8 - uVar11;
              pFVar6->Next = (FBlockEntry *)0x0;
            }
            pFVar6->Prev = pFVar9;
            pFVar6->Next = pFVar9->Next;
            if (pFVar9->Next == (FBlockEntry *)0x0) {
              __return_storage_ptr__->Tail = pFVar6;
              uVar7 = uVar10 - pFVar9->Offset;
              pFVar9->Next = pFVar6;
            }
            else {
              pFVar9->Next->Prev = pFVar6;
              uVar7 = uVar10 - pFVar9->Offset;
              pFVar9->Next = pFVar6;
            }
          }
          else {
            uVar7 = uVar10 - uVar1;
          }
          pFVar9->Size = uVar7;
        }
        else if (uVar11 < uVar8) {
          pFVar9->Offset = uVar11;
          pFVar9->Size = uVar8 - uVar11;
        }
        else {
          if (pFVar9->Prev == (FBlockEntry *)0x0) {
            __return_storage_ptr__->Head = pFVar3;
          }
          else {
            pFVar9->Prev->Next = pFVar3;
          }
          if (pFVar9->Next == (FBlockEntry *)0x0) {
            __return_storage_ptr__->Tail = pFVar9->Prev;
          }
          else {
            pFVar9->Next->Prev = pFVar9->Prev;
          }
          pFVar9->Prev = (FBlockEntry *)0x0;
          pFVar9->Next = (FBlockEntry *)0x0;
          ::operator_delete(pFVar9,0x20);
        }
      }
      else {
        pFVar3 = pFVar9->Prev;
joined_r0x0001432589e3:
        bVar2 = pFVar4 == pFVar3;
        pFVar4 = pFVar9;
        if (bVar2) {
          return __return_storage_ptr__;
        }
      }
      pFVar9 = pFVar3;
    } while (pFVar3 != (FBlockEntry *)0x0);
  }
  return __return_storage_ptr__;
}

// Remove @ 143262040

void __thiscall
BuildPatchServices::FBlockStructure::Remove(FBlockStructure *this,FBlockRange *param_1,Type param_2)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = param_1->Size;
  if (uVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Size > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                       ,0x11,L"Using GetFirst for a 0 size range is invalid.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Remove(this,param_1->First,uVar1,param_2);
  return;
}

// Remove @ 1432620c0

void __thiscall
BuildPatchServices::FBlockStructure::Remove
          (FBlockStructure *this,FBlockStructure *param_1,Type param_2)

{
  FBlockEntry **ppFVar1;
  ulonglong uVar2;
  FBlockEntry *pFVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  FBlockEntry *pFVar8;
  FBlockEntry *pFVar9;
  FBlockEntry *pFVar10;
  ulonglong uVar11;
  FBlockEntry *pFVar12;
  
  pFVar3 = param_1->Head;
  do {
    if (pFVar3 == (FBlockEntry *)0x0) {
      return;
    }
    uVar4 = pFVar3->Offset;
    if ((pFVar3->Size != 0) && (pFVar9 = this->Head, pFVar9 != (FBlockEntry *)0x0)) {
      pFVar12 = (FBlockEntry *)0x0;
      ppFVar1 = &this->Tail;
      if ((param_2 == FromStart) || (pFVar9 = *ppFVar1, pFVar9 != (FBlockEntry *)0x0)) {
        uVar2 = pFVar3->Size + uVar4;
        do {
          uVar5 = pFVar9->Offset;
          if (uVar5 < uVar2) {
            uVar11 = pFVar9->Size + uVar5;
            if (uVar11 <= uVar4) {
              pFVar10 = pFVar9->Next;
              goto joined_r0x000143262173;
            }
            lVar7 = 0x18;
            if (param_2 != FromStart) {
              lVar7 = 0x10;
            }
            pFVar10 = *(FBlockEntry **)((longlong)&pFVar9->Offset + lVar7);
            if (uVar5 < uVar4) {
              if (uVar2 < uVar11) {
                pFVar8 = ::operator_new(0x20);
                if (pFVar8 == (FBlockEntry *)0x0) {
                  pFVar8 = (FBlockEntry *)0x0;
                }
                else {
                  pFVar8->Offset = uVar2;
                  pFVar8->Size = uVar11 - uVar2;
                  pFVar8->Next = (FBlockEntry *)0x0;
                }
                pFVar8->Prev = pFVar9;
                pFVar8->Next = pFVar9->Next;
                if (pFVar9->Next == (FBlockEntry *)0x0) {
                  *ppFVar1 = pFVar8;
                }
                else {
                  pFVar9->Next->Prev = pFVar8;
                }
                uVar5 = pFVar9->Offset;
                pFVar9->Next = pFVar8;
              }
              pFVar9->Size = uVar4 - uVar5;
            }
            else if (uVar2 < uVar11) {
              pFVar9->Offset = uVar2;
              pFVar9->Size = uVar11 - uVar2;
            }
            else {
              if (pFVar9->Prev == (FBlockEntry *)0x0) {
                this->Head = pFVar9->Next;
              }
              else {
                pFVar9->Prev->Next = pFVar9->Next;
              }
              if (pFVar9->Next == (FBlockEntry *)0x0) {
                *ppFVar1 = pFVar9->Prev;
              }
              else {
                pFVar9->Next->Prev = pFVar9->Prev;
              }
              pFVar9->Prev = (FBlockEntry *)0x0;
              pFVar9->Next = (FBlockEntry *)0x0;
              ::operator_delete(pFVar9,0x20);
            }
          }
          else {
            pFVar10 = pFVar9->Prev;
joined_r0x000143262173:
            bVar6 = pFVar12 == pFVar10;
            pFVar12 = pFVar9;
            if (bVar6) break;
          }
          pFVar9 = pFVar10;
        } while (pFVar10 != (FBlockEntry *)0x0);
      }
    }
    pFVar3 = pFVar3->Next;
  } while( true );
}

// Remove @ 1432622d0

void __thiscall
BuildPatchServices::FBlockStructure::Remove
          (FBlockStructure *this,ulong64 param_1,ulong64 param_2,Type param_3)

{
  FBlockEntry **ppFVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  longlong lVar5;
  FBlockEntry *pFVar6;
  FBlockEntry *pFVar7;
  FBlockEntry *pFVar8;
  ulonglong uVar9;
  FBlockEntry *pFVar10;
  
  if ((param_2 != 0) && (pFVar7 = this->Head, pFVar7 != (FBlockEntry *)0x0)) {
    pFVar10 = (FBlockEntry *)0x0;
    ppFVar1 = &this->Tail;
    if ((param_3 == FromStart) || (pFVar7 = *ppFVar1, pFVar7 != (FBlockEntry *)0x0)) {
      uVar2 = param_1 + param_2;
      do {
        uVar3 = pFVar7->Offset;
        if (uVar3 < uVar2) {
          uVar9 = pFVar7->Size + uVar3;
          if (uVar9 <= param_1) {
            pFVar8 = pFVar7->Next;
            goto joined_r0x00014326236a;
          }
          lVar5 = 0x18;
          if (param_3 != FromStart) {
            lVar5 = 0x10;
          }
          pFVar8 = *(FBlockEntry **)((longlong)&pFVar7->Offset + lVar5);
          if (uVar3 < param_1) {
            if (uVar2 < uVar9) {
              pFVar6 = ::operator_new(0x20);
              if (pFVar6 == (FBlockEntry *)0x0) {
                pFVar6 = (FBlockEntry *)0x0;
              }
              else {
                pFVar6->Offset = uVar2;
                pFVar6->Size = uVar9 - uVar2;
                pFVar6->Next = (FBlockEntry *)0x0;
              }
              pFVar6->Prev = pFVar7;
              pFVar6->Next = pFVar7->Next;
              if (pFVar7->Next == (FBlockEntry *)0x0) {
                *ppFVar1 = pFVar6;
              }
              else {
                pFVar7->Next->Prev = pFVar6;
              }
              uVar3 = pFVar7->Offset;
              pFVar7->Next = pFVar6;
            }
            pFVar7->Size = param_1 - uVar3;
          }
          else if (uVar2 < uVar9) {
            pFVar7->Offset = uVar2;
            pFVar7->Size = uVar9 - uVar2;
          }
          else {
            if (pFVar7->Prev == (FBlockEntry *)0x0) {
              this->Head = pFVar7->Next;
            }
            else {
              pFVar7->Prev->Next = pFVar7->Next;
            }
            if (pFVar7->Next == (FBlockEntry *)0x0) {
              *ppFVar1 = pFVar7->Prev;
            }
            else {
              pFVar7->Next->Prev = pFVar7->Prev;
            }
            pFVar7->Prev = (FBlockEntry *)0x0;
            pFVar7->Next = (FBlockEntry *)0x0;
            ::operator_delete(pFVar7,0x20);
          }
        }
        else {
          pFVar8 = pFVar7->Prev;
joined_r0x00014326236a:
          bVar4 = pFVar10 == pFVar8;
          pFVar10 = pFVar7;
          if (bVar4) {
            return;
          }
        }
        pFVar7 = pFVar8;
      } while (pFVar8 != (FBlockEntry *)0x0);
    }
  }
  return;
}

// SelectSerialBytes @ 143267e20

ulong64 __thiscall
BuildPatchServices::FBlockStructure::SelectSerialBytes
          (FBlockStructure *this,ulong64 param_1,ulong64 param_2,FBlockStructure *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  FBlockEntry *pFVar3;
  FBlockEntry *pFVar4;
  ulonglong uVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  FBlockEntry *pFVar12;
  
  pFVar12 = this->Head;
  uVar7 = 0;
  uVar10 = uVar7;
  uVar11 = uVar7;
  if (pFVar12 == (FBlockEntry *)0x0) {
    return 0;
  }
  do {
    pFVar4 = (FBlockEntry *)0x0;
    if (param_2 <= uVar7) {
      return uVar7;
    }
    uVar6 = pFVar12->Size;
    uVar10 = uVar10 + uVar6;
    if (param_1 < uVar10) {
      pFVar3 = pFVar4;
      if (uVar11 < param_1) {
        pFVar3 = (FBlockEntry *)(param_1 - uVar11);
      }
      uVar9 = (longlong)&pFVar3->Offset + pFVar12->Offset;
      uVar8 = param_2 - uVar7;
      if (uVar6 - (longlong)pFVar3 < param_2 - uVar7) {
        uVar8 = uVar6 - (longlong)pFVar3;
      }
      if (uVar8 != 0) {
        if (param_3->Head == (FBlockEntry *)0x0) {
          pFVar3 = ::operator_new(0x20);
          if (pFVar3 != (FBlockEntry *)0x0) {
            pFVar3->Offset = uVar9;
            pFVar3->Size = uVar8;
            pFVar3->Prev = (FBlockEntry *)0x0;
            pFVar3->Next = (FBlockEntry *)0x0;
            pFVar4 = pFVar3;
          }
          param_3->Head = pFVar4;
          param_3->Tail = pFVar4;
          uVar6 = pFVar12->Size;
        }
        else {
          pFVar4 = param_3->Tail;
          if (pFVar4 != (FBlockEntry *)0x0) {
            do {
              uVar2 = pFVar4->Offset;
              uVar5 = pFVar4->Size + uVar2;
              if (uVar5 < uVar9) {
                pFVar3 = ::operator_new(0x20);
                if (pFVar3 == (FBlockEntry *)0x0) {
                  pFVar3 = (FBlockEntry *)0x0;
                }
                else {
                  pFVar3->Offset = uVar9;
                  pFVar3->Size = uVar8;
                  pFVar3->Next = (FBlockEntry *)0x0;
                }
                pFVar3->Prev = pFVar4;
                pFVar3->Next = pFVar4->Next;
                if (pFVar4->Next == (FBlockEntry *)0x0) {
                  param_3->Tail = pFVar3;
                  pFVar4->Next = pFVar3;
                  uVar6 = pFVar12->Size;
                }
                else {
                  pFVar4->Next->Prev = pFVar3;
                  pFVar4->Next = pFVar3;
                  uVar6 = pFVar12->Size;
                }
                goto LAB_143268012;
              }
              uVar1 = uVar8 + uVar9;
              if (uVar2 <= uVar1) {
                if (uVar2 < uVar9) {
                  uVar9 = uVar2;
                }
                pFVar4->Offset = uVar9;
                if (uVar5 < uVar1) {
                  uVar5 = uVar1;
                }
                pFVar4->Size = uVar5 - uVar9;
                CollectOverlaps(param_3,pFVar4,FromEnd);
                uVar6 = pFVar12->Size;
                goto LAB_143268012;
              }
              pFVar4 = pFVar4->Prev;
            } while (pFVar4 != (FBlockEntry *)0x0);
            pFVar4 = param_3->Head;
            pFVar3 = ::operator_new(0x20);
            if (pFVar3 == (FBlockEntry *)0x0) {
              pFVar3 = (FBlockEntry *)0x0;
            }
            else {
              pFVar3->Offset = uVar9;
              pFVar3->Size = uVar8;
              pFVar3->Prev = (FBlockEntry *)0x0;
              pFVar3->Next = (FBlockEntry *)0x0;
            }
            pFVar3->Prev = pFVar4->Prev;
            pFVar3->Next = pFVar4;
            if (pFVar4->Prev == (FBlockEntry *)0x0) {
              param_3->Head = pFVar3;
              pFVar4->Prev = pFVar3;
              uVar6 = pFVar12->Size;
            }
            else {
              pFVar4->Prev->Next = pFVar3;
              pFVar4->Prev = pFVar3;
              uVar6 = pFVar12->Size;
            }
          }
        }
      }
LAB_143268012:
      uVar7 = uVar7 + uVar8;
    }
    pFVar12 = pFVar12->Next;
    uVar11 = uVar11 + uVar6;
    if (pFVar12 == (FBlockEntry *)0x0) {
      return uVar7;
    }
  } while( true );
}

// ToString @ 14326b0b0

FString * __thiscall
BuildPatchServices::FBlockStructure::ToString
          (FBlockStructure *this,FString *__return_storage_ptr__,ulong64 param_1)

{
  bool bVar1;
  FBlockEntry *pFVar2;
  longlong lVar3;
  int iVar4;
  FString local_28;
  
  lVar3 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar2 = this->Head;
  if (pFVar2 != (FBlockEntry *)0x0) {
    bVar1 = true;
    do {
      if (param_1 == 0) {
        lVar3 = lVar3 + 1;
      }
      else {
        param_1 = param_1 - 1;
        if (bVar1) {
          bVar1 = false;
        }
        else {
          ::FString::AppendChars(__return_storage_ptr__,L"-",1);
        }
        ::FString::PrintfImpl(&local_28,L"[%llu,%llu]");
        iVar4 = local_28.Data.ArrayNum + -1;
        if (local_28.Data.ArrayNum == 0) {
          iVar4 = 0;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar4);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      pFVar2 = pFVar2->Next;
    } while (pFVar2 != (FBlockEntry *)0x0);
    if (lVar3 != 0) {
      ::FString::PrintfImpl(&local_28,L".. %llu more");
      iVar4 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar4);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    ::FString::AppendChars(__return_storage_ptr__,L".",1);
  }
  return __return_storage_ptr__;
}

