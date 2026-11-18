// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// Add @ 14198a130

FNoopStruct * __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<unsigned_int,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<unsigned_int,FNoopStruct>_>
::Add(TSherwoodHashTable<unsigned_int,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<unsigned_int,FNoopStruct>_>
      *this,schar param_1,FData *param_2,uint param_3,uint param_4,uint param_5,FNoopStruct param_6)

{
  char cVar1;
  uint uVar2;
  schar *psVar3;
  FNoopStruct *pFVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if ((param_1 != this->MaxLookups) &&
     (this->NumElements + 1 <= (int)((float)(this->NumSlotsMinusOne + 1) * __real_3f666666))) {
    cVar5 = param_2->Distances[param_3];
    if (cVar5 < '\0') {
      param_2->Keys[param_3] = param_4;
      param_2->Distances[param_3] = param_1;
      this->NumElements = this->NumElements + 1;
      return (FNoopStruct *)0x0;
    }
    param_2->Distances[param_3] = param_1;
    cVar5 = cVar5 + '\x01';
    uVar7 = (ulonglong)(param_3 + 1);
    uVar6 = param_2->Keys[param_3];
    param_2->Keys[param_3] = param_4;
    psVar3 = param_2->Distances;
    cVar1 = psVar3[uVar7];
    do {
      if (cVar1 < '\0') {
        param_2->Keys[uVar7] = uVar6;
        param_2->Distances[uVar7] = cVar5;
        this->NumElements = this->NumElements + 1;
        return (FNoopStruct *)0x0;
      }
      cVar1 = psVar3[uVar7];
      if (cVar1 < cVar5) {
        psVar3[uVar7] = cVar5;
        cVar5 = cVar1 + '\x01';
        uVar2 = param_2->Keys[uVar7];
        param_2->Keys[uVar7] = uVar6;
        uVar6 = uVar2;
      }
      else {
        cVar5 = cVar5 + '\x01';
        if (cVar5 == this->MaxLookups) {
          param_4 = param_2->Keys[param_3];
          param_2->Keys[param_3] = uVar6;
          uVar6 = this->NumSlotsMinusOne * 2 + 2;
          if (this->NumSlotsMinusOne == 0) {
            uVar6 = 0;
          }
          if (uVar6 < 4) {
            uVar6 = 4;
          }
          Rehash(this,uVar6);
          cVar5 = '\0';
          psVar3 = (this->CurrentData).Distances;
          uVar6 = this->NumSlotsMinusOne & param_4;
          uVar7 = (ulonglong)uVar6;
          param_5 = param_4;
          if ((psVar3 != (schar *)0x0) && (-1 < psVar3[uVar7])) {
            do {
              if (param_4 == (this->CurrentData).Keys[uVar7]) {
                return (FNoopStruct *)0x0;
              }
              uVar6 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar6;
              cVar5 = cVar5 + '\x01';
            } while (cVar5 <= psVar3[uVar7]);
          }
          goto LAB_14198a33a;
        }
      }
      psVar3 = param_2->Distances;
      uVar7 = (ulonglong)((int)uVar7 + 1);
      cVar1 = psVar3[uVar7];
    } while( true );
  }
  uVar6 = this->NumSlotsMinusOne * 2 + 2;
  if (this->NumSlotsMinusOne == 0) {
    uVar6 = 0;
  }
  if (uVar6 < 4) {
    uVar6 = 4;
  }
  Rehash(this,uVar6);
  cVar5 = '\0';
  psVar3 = (this->CurrentData).Distances;
  uVar6 = param_5 & this->NumSlotsMinusOne;
  uVar7 = (ulonglong)uVar6;
  if ((psVar3 != (schar *)0x0) && (-1 < psVar3[uVar7])) {
    do {
      if (param_4 == (this->CurrentData).Keys[uVar7]) {
        return (FNoopStruct *)0x0;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      cVar5 = cVar5 + '\x01';
    } while (cVar5 <= psVar3[uVar7]);
  }
LAB_14198a33a:
  pFVar4 = Add(this,cVar5,&this->CurrentData,uVar6,param_4,param_5,param_6);
  return pFVar4;
}

// Empty @ 141992c30

void __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<unsigned_int,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<unsigned_int,FNoopStruct>_>
::Empty(TSherwoodHashTable<unsigned_int,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<unsigned_int,FNoopStruct>_>
        *this)

{
  schar *psVar1;
  
  psVar1 = (this->CurrentData).Distances;
  if (psVar1 != (schar *)0x0) {
    FMemory::Free(psVar1);
    FMemory::Free((this->CurrentData).Keys);
    FMemory::Free((this->CurrentData).Values);
  }
  this->NumSlotsMinusOne = 0;
  *(undefined8 *)&this->CurrentData = 0;
  (this->CurrentData).Distances = (schar *)0x0;
  this->MaxLookups = '\0';
  (this->CurrentData).Keys = (uint *)0x0;
  (this->CurrentData).Values = (FNoopStruct *)0x0;
  this->NumElements = 0;
  return;
}

// Rehash @ 1419a7cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<unsigned_int,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<unsigned_int,FNoopStruct>_>
::Rehash(TSherwoodHashTable<unsigned_int,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<unsigned_int,FNoopStruct>_>
         *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  schar *psVar4;
  uint *puVar5;
  FNoopStruct *pFVar6;
  byte bVar7;
  uint uVar8;
  schar *psVar9;
  uint *puVar10;
  schar sVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  FNoopStruct local_res10;
  undefined4 uStack_64;
  
  uVar8 = -((int)ROUND(__real_bf000000 - (float)this->NumElements * ___real_400e38e4) >> 1);
  if (uVar8 < param_1) {
    uVar8 = param_1;
  }
  if (uVar8 == 0) {
    Empty(this);
    return;
  }
  uVar2 = this->NumSlotsMinusOne;
  uVar14 = 0;
  uVar12 = (ulonglong)(uVar8 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar12 != 0) {
    for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar13 = 1 << ((byte)lVar3 & 0x1f);
  uVar8 = uVar2 + 1;
  if (uVar2 == 0) {
    uVar8 = 0;
  }
  if (uVar13 != uVar8) {
    uVar12 = (ulonglong)uVar13 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    cVar1 = this->MaxLookups;
    bVar7 = (byte)lVar3;
    if ((uint)lVar3 < 4) {
      bVar7 = 4;
    }
    psVar4 = (this->CurrentData).Distances;
    puVar5 = (this->CurrentData).Keys;
    pFVar6 = (this->CurrentData).Values;
    uVar8 = bVar7 + uVar13;
    psVar9 = FMemory::Malloc((ulonglong)uVar8,0);
    puVar10 = FMemory::Malloc((ulonglong)uVar8 * 4,0);
    memset(psVar9,0xff,(ulonglong)uVar8);
    this->MaxLookups = bVar7;
    uVar2 = uVar2 + (int)cVar1;
    this->NumSlotsMinusOne = uVar13 - 1;
    this->NumElements = 0;
    *(ulonglong *)&this->CurrentData = CONCAT44(uStack_64,uVar8);
    (this->CurrentData).Distances = psVar9;
    (this->CurrentData).Keys = puVar10;
    (this->CurrentData).Values = (FNoopStruct *)0x0;
    if (uVar2 != 0) {
      do {
        if (-1 < psVar4[uVar14]) {
          uVar8 = puVar5[uVar14];
          sVar11 = '\0';
          psVar9 = (this->CurrentData).Distances;
          uVar13 = uVar8 & this->NumSlotsMinusOne;
          uVar12 = (ulonglong)uVar13;
          if ((psVar9 != (schar *)0x0) && (-1 < psVar9[uVar12])) {
            do {
              if (uVar8 == (this->CurrentData).Keys[uVar12]) goto LAB_1419a7ebb;
              uVar13 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar13;
              sVar11 = sVar11 + '\x01';
            } while (sVar11 <= psVar9[uVar12]);
          }
          Add(this,sVar11,&this->CurrentData,uVar13,uVar8,uVar8,local_res10);
        }
LAB_1419a7ebb:
        uVar8 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar8;
      } while (uVar8 != uVar2);
    }
    if (psVar4 != (schar *)0x0) {
      FMemory::Free(psVar4);
      FMemory::Free(puVar5);
      FMemory::Free(pFVar6);
    }
  }
  return;
}

