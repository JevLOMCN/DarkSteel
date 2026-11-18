// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// operator= @ 14726da10

FDistributionLookupTable * __thiscall
FDistributionLookupTable::operator=
          (FDistributionLookupTable *this,FDistributionLookupTable *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  this->TimeScale = param_1->TimeScale;
  this->TimeBias = param_1->TimeBias;
  pTVar1 = &this->Values;
  if (pTVar1 != &param_1->Values) {
    iVar3 = (this->Values).ArrayMax;
    piVar2 = &(this->Values).ArrayMax;
    _Src = (param_1->Values).AllocatorInstance.Data;
    iVar4 = (param_1->Values).ArrayNum;
    (this->Values).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 2);
      }
    }
  }
  this->Op = param_1->Op;
  this->EntryCount = param_1->EntryCount;
  this->EntryStride = param_1->EntryStride;
  this->SubEntryStride = param_1->SubEntryStride;
  this->LockFlag = param_1->LockFlag;
  return this;
}

// FDistributionLookupTable @ 147b38ee0

FDistributionLookupTable * __thiscall
FDistributionLookupTable::FDistributionLookupTable
          (FDistributionLookupTable *this,FDistributionLookupTable *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->Values;
  this->TimeScale = param_1->TimeScale;
  this->TimeBias = param_1->TimeBias;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Values).ArrayMax;
  iVar3 = (param_1->Values).ArrayNum;
  _Src = (param_1->Values).AllocatorInstance.Data;
  (this->Values).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  this->Op = param_1->Op;
  this->EntryCount = param_1->EntryCount;
  this->EntryStride = param_1->EntryStride;
  this->SubEntryStride = param_1->SubEntryStride;
  this->LockFlag = param_1->LockFlag;
  return this;
}

// GetEntry @ 147b65710

void __thiscall
FDistributionLookupTable::GetEntry
          (FDistributionLookupTable *this,float param_1,float **param_2,float **param_3,
          float *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = (param_1 - this->TimeBias) * this->TimeScale;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar6 = (float)truncf(fVar7);
  uVar3 = (uint)fVar7;
  *param_4 = fVar7 - fVar6;
  uVar4 = this->EntryCount - 1;
  uVar5 = uVar4;
  if (uVar3 < uVar4) {
    uVar5 = uVar3;
  }
  uVar5 = uVar5 * this->EntryStride;
  if (uVar3 + 1 < uVar4) {
    uVar4 = uVar3 + 1;
  }
  uVar4 = uVar4 * this->EntryStride;
  uVar3 = 0;
  if ((int)uVar5 < (this->Values).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
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
  *param_2 = (float *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
  uVar5 = 0;
  if ((int)uVar4 < (this->Values).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
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
  *param_3 = (float *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar4 * 4);
  return;
}

// GetRange @ 147b6cbf0

void __thiscall
FDistributionLookupTable::GetRange(FDistributionLookupTable *this,float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  uchar *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  float fVar14;
  
  if (this->EntryCount != '\0') {
    pFVar12 = (this->Values).AllocatorInstance.Data;
    iVar13 = 0;
    lVar11 = (longlong)pFVar12 - (longlong)param_1;
    lVar10 = 0;
    lVar8 = (longlong)(int)(float)(int)((uint)this->EntryStride - (uint)this->SubEntryStride);
    if (3 < lVar8) {
      lVar6 = (longlong)param_2 - (longlong)param_1;
      lVar9 = (lVar8 - 4U >> 2) + 1;
      lVar10 = lVar9 * 4;
      pfVar5 = param_1 + 1;
      do {
        pfVar5[-1] = *(float *)((longlong)pfVar5 + lVar11 + -4);
        *(undefined4 *)((longlong)pfVar5 + lVar6 + -4) =
             *(undefined4 *)(pFVar12 + (longlong)(int)((uint)this->SubEntryStride + iVar13) * 4);
        *pfVar5 = *(float *)((longlong)pfVar5 + lVar11);
        *(undefined4 *)((longlong)pfVar5 + lVar6) =
             *(undefined4 *)(pFVar12 + (longlong)(int)((uint)this->SubEntryStride + iVar13) * 4 + 4)
        ;
        pfVar5[1] = *(float *)((longlong)pfVar5 + lVar11 + 4);
        *(undefined4 *)((longlong)pfVar5 + lVar6 + 4) =
             *(undefined4 *)(pFVar12 + (longlong)(int)((uint)this->SubEntryStride + iVar13) * 4 + 8)
        ;
        pfVar5[2] = *(float *)((longlong)pfVar5 + lVar11 + 8);
        iVar3 = (uint)this->SubEntryStride + iVar13;
        iVar13 = iVar13 + 4;
        *(undefined4 *)((longlong)pfVar5 + lVar6 + 8) =
             *(undefined4 *)(pFVar12 + (longlong)iVar3 * 4 + 0xc);
        lVar9 = lVar9 + -1;
        pfVar5 = pfVar5 + 4;
      } while (lVar9 != 0);
    }
    if (lVar10 < lVar8) {
      lVar6 = lVar8 - lVar10;
      pfVar5 = param_1 + lVar10;
      do {
        *pfVar5 = *(float *)((longlong)pfVar5 + lVar11);
        iVar3 = (uint)this->SubEntryStride + iVar13;
        iVar13 = iVar13 + 1;
        *(undefined4 *)((longlong)pfVar5 + ((longlong)param_2 - (longlong)param_1)) =
             *(undefined4 *)(pFVar12 + (longlong)iVar3 * 4);
        lVar6 = lVar6 + -1;
        pfVar5 = pfVar5 + 1;
      } while (lVar6 != 0);
    }
    puVar7 = &this->SubEntryStride;
    iVar13 = 1;
    if (1 < this->EntryCount) {
      do {
        iVar3 = 0;
        lVar10 = 0;
        pFVar12 = pFVar12 + (ulonglong)this->EntryStride * 4;
        if (3 < lVar8) {
          lVar11 = (longlong)param_2 - (longlong)param_1;
          lVar9 = (longlong)pFVar12 - (longlong)param_1;
          lVar6 = (lVar8 - 4U >> 2) + 1;
          lVar10 = lVar6 * 4;
          pfVar5 = param_1 + 1;
          do {
            fVar14 = *(float *)((longlong)pfVar5 + lVar9 + -4);
            if (pfVar5[-1] <= fVar14) {
              fVar14 = pfVar5[-1];
            }
            pfVar5[-1] = fVar14;
            fVar14 = *(float *)((longlong)pfVar5 + lVar11 + -4);
            fVar2 = *(float *)(pFVar12 + (longlong)(int)((uint)*puVar7 + iVar3) * 4);
            if (*(float *)(pFVar12 + (longlong)(int)((uint)*puVar7 + iVar3) * 4) <= fVar14) {
              fVar2 = fVar14;
            }
            *(float *)((longlong)pfVar5 + lVar11 + -4) = fVar2;
            fVar14 = *pfVar5;
            if (*(float *)((longlong)pfVar5 + lVar9) <= *pfVar5) {
              fVar14 = *(float *)((longlong)pfVar5 + lVar9);
            }
            *pfVar5 = fVar14;
            fVar14 = *(float *)(pFVar12 + (longlong)(int)((uint)*puVar7 + iVar3) * 4 + 4);
            if (*(float *)(pFVar12 + (longlong)(int)((uint)*puVar7 + iVar3) * 4 + 4) <=
                *(float *)((longlong)pfVar5 + lVar11)) {
              fVar14 = *(float *)((longlong)pfVar5 + lVar11);
            }
            *(float *)((longlong)pfVar5 + lVar11) = fVar14;
            fVar14 = *(float *)((longlong)pfVar5 + lVar9 + 4);
            if (pfVar5[1] <= fVar14) {
              fVar14 = pfVar5[1];
            }
            pfVar5[1] = fVar14;
            fVar14 = *(float *)((longlong)pfVar5 + lVar11 + 4);
            fVar2 = *(float *)(pFVar12 + (longlong)(int)((uint)*puVar7 + iVar3) * 4 + 8);
            if (*(float *)(pFVar12 + (longlong)(int)((uint)*puVar7 + iVar3) * 4 + 8) <= fVar14) {
              fVar2 = fVar14;
            }
            *(float *)((longlong)pfVar5 + lVar11 + 4) = fVar2;
            fVar14 = *(float *)((longlong)pfVar5 + lVar9 + 8);
            if (pfVar5[2] <= fVar14) {
              fVar14 = pfVar5[2];
            }
            pfVar5[2] = fVar14;
            iVar4 = (uint)*puVar7 + iVar3;
            iVar3 = iVar3 + 4;
            fVar14 = *(float *)((longlong)pfVar5 + lVar11 + 8);
            fVar2 = *(float *)(pFVar12 + (longlong)iVar4 * 4 + 0xc);
            if (*(float *)(pFVar12 + (longlong)iVar4 * 4 + 0xc) <= fVar14) {
              fVar2 = fVar14;
            }
            *(float *)((longlong)pfVar5 + lVar11 + 8) = fVar2;
            lVar6 = lVar6 + -1;
            pfVar5 = pfVar5 + 4;
          } while (lVar6 != 0);
        }
        if (lVar10 < lVar8) {
          lVar11 = lVar8 - lVar10;
          pfVar5 = param_1 + lVar10;
          do {
            fVar14 = *(float *)(((longlong)pFVar12 - (longlong)param_1) + (longlong)pfVar5);
            if (*pfVar5 <= fVar14) {
              fVar14 = *pfVar5;
            }
            pfVar1 = pfVar5 + 1;
            *pfVar5 = fVar14;
            iVar4 = (uint)*puVar7 + iVar3;
            iVar3 = iVar3 + 1;
            fVar14 = *(float *)((longlong)param_2 + (-4 - (longlong)param_1) + (longlong)pfVar1);
            fVar2 = *(float *)(pFVar12 + (longlong)iVar4 * 4);
            if (*(float *)(pFVar12 + (longlong)iVar4 * 4) <= fVar14) {
              fVar2 = fVar14;
            }
            *(float *)((longlong)param_2 + (-4 - (longlong)param_1) + (longlong)pfVar1) = fVar2;
            lVar11 = lVar11 + -1;
            pfVar5 = pfVar1;
          } while (lVar11 != 0);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)(uint)this->EntryCount);
    }
  }
  return;
}

