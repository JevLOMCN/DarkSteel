// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// Add @ 144d51e90

FNoopStruct * __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<int,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<int,FNoopStruct>_>::Add
          (TSherwoodHashTable<int,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<int,FNoopStruct>_>
           *this,schar param_1,FData *param_2,uint param_3,int param_4,uint param_5,
          FNoopStruct param_6)

{
  char cVar1;
  int iVar2;
  schar *psVar3;
  FNoopStruct *pFVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  
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
    uVar8 = (ulonglong)(param_3 + 1);
    iVar6 = param_2->Keys[param_3];
    param_2->Keys[param_3] = param_4;
    psVar3 = param_2->Distances;
    cVar1 = psVar3[uVar8];
    do {
      if (cVar1 < '\0') {
        param_2->Keys[uVar8] = iVar6;
        param_2->Distances[uVar8] = cVar5;
        this->NumElements = this->NumElements + 1;
        return (FNoopStruct *)0x0;
      }
      cVar1 = psVar3[uVar8];
      if (cVar1 < cVar5) {
        psVar3[uVar8] = cVar5;
        cVar5 = cVar1 + '\x01';
        iVar2 = param_2->Keys[uVar8];
        param_2->Keys[uVar8] = iVar6;
        iVar6 = iVar2;
      }
      else {
        cVar5 = cVar5 + '\x01';
        if (cVar5 == this->MaxLookups) {
          param_4 = param_2->Keys[param_3];
          param_2->Keys[param_3] = iVar6;
          uVar7 = this->NumSlotsMinusOne * 2 + 2;
          if (this->NumSlotsMinusOne == 0) {
            uVar7 = 0;
          }
          if (uVar7 < 4) {
            uVar7 = 4;
          }
          Rehash(this,uVar7);
          cVar5 = '\0';
          psVar3 = (this->CurrentData).Distances;
          uVar7 = this->NumSlotsMinusOne & param_4;
          uVar8 = (ulonglong)uVar7;
          param_5 = param_4;
          if ((psVar3 != (schar *)0x0) && (-1 < psVar3[uVar8])) {
            do {
              if (param_4 == (this->CurrentData).Keys[uVar8]) {
                return (FNoopStruct *)0x0;
              }
              uVar7 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar7;
              cVar5 = cVar5 + '\x01';
            } while (cVar5 <= psVar3[uVar8]);
          }
          goto LAB_144d5209a;
        }
      }
      psVar3 = param_2->Distances;
      uVar8 = (ulonglong)((int)uVar8 + 1);
      cVar1 = psVar3[uVar8];
    } while( true );
  }
  uVar7 = this->NumSlotsMinusOne * 2 + 2;
  if (this->NumSlotsMinusOne == 0) {
    uVar7 = 0;
  }
  if (uVar7 < 4) {
    uVar7 = 4;
  }
  Rehash(this,uVar7);
  cVar5 = '\0';
  psVar3 = (this->CurrentData).Distances;
  uVar7 = param_5 & this->NumSlotsMinusOne;
  uVar8 = (ulonglong)uVar7;
  if ((psVar3 != (schar *)0x0) && (-1 < psVar3[uVar8])) {
    do {
      if (param_4 == (this->CurrentData).Keys[uVar8]) {
        return (FNoopStruct *)0x0;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      cVar5 = cVar5 + '\x01';
    } while (cVar5 <= psVar3[uVar8]);
  }
LAB_144d5209a:
  pFVar4 = Add(this,cVar5,&this->CurrentData,uVar7,param_4,param_5,param_6);
  return pFVar4;
}

// Empty @ 144d6dbc0

void __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<int,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<int,FNoopStruct>_>::Empty
          (TSherwoodHashTable<int,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<int,FNoopStruct>_>
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
  (this->CurrentData).Keys = (int *)0x0;
  (this->CurrentData).Values = (FNoopStruct *)0x0;
  this->NumElements = 0;
  return;
}

// Rehash @ 144d92d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<int,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<int,FNoopStruct>_>::Rehash
          (TSherwoodHashTable<int,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<int,FNoopStruct>_>
           *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  schar *psVar4;
  int *piVar5;
  FNoopStruct *pFVar6;
  byte bVar7;
  uint uVar8;
  schar *psVar9;
  int *piVar10;
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
    piVar5 = (this->CurrentData).Keys;
    pFVar6 = (this->CurrentData).Values;
    uVar8 = bVar7 + uVar13;
    psVar9 = FMemory::Malloc((ulonglong)uVar8,0);
    piVar10 = FMemory::Malloc((ulonglong)uVar8 * 4,0);
    memset(psVar9,0xff,(ulonglong)uVar8);
    this->MaxLookups = bVar7;
    uVar2 = uVar2 + (int)cVar1;
    this->NumSlotsMinusOne = uVar13 - 1;
    this->NumElements = 0;
    *(ulonglong *)&this->CurrentData = CONCAT44(uStack_64,uVar8);
    (this->CurrentData).Distances = psVar9;
    (this->CurrentData).Keys = piVar10;
    (this->CurrentData).Values = (FNoopStruct *)0x0;
    if (uVar2 != 0) {
      do {
        if (-1 < psVar4[uVar14]) {
          uVar8 = piVar5[uVar14];
          sVar11 = '\0';
          psVar9 = (this->CurrentData).Distances;
          uVar13 = uVar8 & this->NumSlotsMinusOne;
          uVar12 = (ulonglong)uVar13;
          if ((psVar9 != (schar *)0x0) && (-1 < psVar9[uVar12])) {
            do {
              if (uVar8 == (this->CurrentData).Keys[uVar12]) goto LAB_144d92f2b;
              uVar13 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar13;
              sVar11 = sVar11 + '\x01';
            } while (sVar11 <= psVar9[uVar12]);
          }
          Add(this,sVar11,&this->CurrentData,uVar13,uVar8,uVar8,local_res10);
        }
LAB_144d92f2b:
        uVar8 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar8;
      } while (uVar8 != uVar2);
    }
    if (psVar4 != (schar *)0x0) {
      FMemory::Free(psVar4);
      FMemory::Free(piVar5);
      FMemory::Free(pFVar6);
    }
  }
  return;
}

// Add @ 145307fe0

uint * __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
::Add(TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
      *this,schar param_1,FData *param_2,uint param_3,FRHIRayTracingGeometry *param_4,uint param_5,
     uint param_6)

{
  char cVar1;
  uint uVar2;
  schar *psVar3;
  FRHIRayTracingGeometry **ppFVar4;
  FRHIRayTracingGeometry *pFVar5;
  uint uVar6;
  uint *puVar7;
  char cVar8;
  FRHIRayTracingGeometry *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar11 = (ulonglong)param_3;
  while ((param_1 == this->MaxLookups ||
         ((int)((float)(this->NumSlotsMinusOne + 1) * __real_3f666666) < this->NumElements + 1))) {
    uVar6 = this->NumSlotsMinusOne * 2 + 2;
    if (this->NumSlotsMinusOne == 0) {
      uVar6 = 0;
    }
    if (uVar6 < 4) {
      uVar6 = 4;
    }
    Rehash(this,uVar6);
    param_1 = '\0';
    uVar11 = (ulonglong)(this->NumSlotsMinusOne & param_5);
    psVar3 = (this->CurrentData).Distances;
    param_2 = &this->CurrentData;
    if ((psVar3 != (schar *)0x0) && (-1 < psVar3[uVar11])) {
      do {
        if (param_4 == (this->CurrentData).Keys[uVar11]) {
          return (this->CurrentData).Values + uVar11;
        }
        uVar11 = (ulonglong)((int)uVar11 + 1);
        param_1 = param_1 + '\x01';
      } while (param_1 <= psVar3[uVar11]);
    }
  }
  psVar3 = (((TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
              *)param_2)->CurrentData).Distances;
  cVar8 = psVar3[uVar11];
  if (-1 < cVar8) {
    psVar3[uVar11] = param_1;
    cVar8 = cVar8 + '\x01';
    ppFVar4 = (((TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
                 *)param_2)->CurrentData).Keys;
    pFVar9 = ppFVar4[uVar11];
    ppFVar4[uVar11] = param_4;
    puVar7 = (((TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
                *)param_2)->CurrentData).Values;
    uVar12 = (ulonglong)((int)uVar11 + 1);
    uVar6 = puVar7[uVar11];
    puVar7[uVar11] = param_6;
    psVar3 = (((TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
                *)param_2)->CurrentData).Distances;
    cVar1 = psVar3[uVar12];
    do {
      if (cVar1 < '\0') {
        (((TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
           *)param_2)->CurrentData).Keys[uVar12] = pFVar9;
        (((TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
           *)param_2)->CurrentData).Values[uVar12] = uVar6;
        (((TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
           *)param_2)->CurrentData).Distances[uVar12] = cVar8;
        this->NumElements = this->NumElements + 1;
        return (((TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
                  *)param_2)->CurrentData).Values + uVar11;
      }
      cVar1 = psVar3[uVar12];
      if (cVar1 < cVar8) {
        psVar3[uVar12] = cVar8;
        ppFVar4 = (((TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
                     *)param_2)->CurrentData).Keys;
        cVar8 = cVar1 + '\x01';
        pFVar5 = ppFVar4[uVar12];
        ppFVar4[uVar12] = pFVar9;
        puVar7 = (((TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
                    *)param_2)->CurrentData).Values;
        uVar2 = puVar7[uVar12];
        puVar7[uVar12] = uVar6;
        pFVar9 = pFVar5;
        uVar6 = uVar2;
      }
      else {
        cVar8 = cVar8 + '\x01';
        if (cVar8 == this->MaxLookups) {
          ppFVar4 = (((TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
                       *)param_2)->CurrentData).Keys;
          pFVar5 = ppFVar4[uVar11];
          ppFVar4[uVar11] = pFVar9;
          puVar7 = (((TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
                      *)param_2)->CurrentData).Values;
          uVar2 = puVar7[uVar11];
          puVar7[uVar11] = uVar6;
          uVar6 = this->NumSlotsMinusOne * 2 + 2;
          if (this->NumSlotsMinusOne == 0) {
            uVar6 = 0;
          }
          if (uVar6 < 4) {
            uVar6 = 4;
          }
          Rehash(this,uVar6);
          uVar6 = UE::Private::MurmurFinalize32((uint)((ulonglong)pFVar5 >> 4));
          cVar8 = '\0';
          psVar3 = (this->CurrentData).Distances;
          uVar10 = this->NumSlotsMinusOne & uVar6;
          uVar11 = (ulonglong)uVar10;
          if ((psVar3 != (schar *)0x0) && (-1 < psVar3[uVar11])) {
            do {
              if (pFVar5 == (this->CurrentData).Keys[uVar11]) {
                return (this->CurrentData).Values + uVar11;
              }
              uVar10 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar10;
              cVar8 = cVar8 + '\x01';
            } while (cVar8 <= psVar3[uVar11]);
          }
          puVar7 = Add(this,cVar8,&this->CurrentData,uVar10,pFVar5,uVar6,uVar2);
          return puVar7;
        }
      }
      psVar3 = (((TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
                  *)param_2)->CurrentData).Distances;
      uVar12 = (ulonglong)((int)uVar12 + 1);
      cVar1 = psVar3[uVar12];
    } while( true );
  }
  (((TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
     *)param_2)->CurrentData).Keys[uVar11] = param_4;
  (((TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
     *)param_2)->CurrentData).Values[uVar11] = param_6;
  (((TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
     *)param_2)->CurrentData).Distances[uVar11] = param_1;
  this->NumElements = this->NumElements + 1;
  return (((TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
            *)param_2)->CurrentData).Values + uVar11;
}

// Add @ 145308280

FAutoInstanceBatch * __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<unsigned___int64,RayTracing::FAutoInstanceBatch,Experimental::TSherwoodHashKeyFuncs<unsigned___int64,RayTracing::FAutoInstanceBatch>_>
::Add(TSherwoodHashTable<unsigned___int64,RayTracing::FAutoInstanceBatch,Experimental::TSherwoodHashKeyFuncs<unsigned___int64,RayTracing::FAutoInstanceBatch>_>
      *this,schar param_1,FData *param_2,uint param_3,ulong64 param_4,uint param_5,
     FAutoInstanceBatch *param_6)

{
  TArrayView<unsigned_int,int> *pTVar1;
  char cVar2;
  schar *psVar3;
  ulong64 uVar4;
  FInstanceHandle FVar5;
  uint *puVar6;
  FInstanceHandle FVar7;
  FInstanceHandle FVar8;
  uint *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  FAutoInstanceBatch *pFVar17;
  char cVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulong64 uVar22;
  FAutoInstanceBatch local_48;
  
  if ((param_1 != this->MaxLookups) &&
     (this->NumElements + 1 <= (int)((float)(this->NumSlotsMinusOne + 1) * __real_3f666666))) {
    cVar18 = param_2->Distances[param_3];
    if (cVar18 < '\0') {
      param_2->Keys[param_3] = param_4;
      pFVar17 = param_2->Values;
      FVar5 = param_6->DecalInstanceHandle;
      puVar6 = (param_6->InstanceSceneDataOffsets).DataPtr;
      iVar10 = (param_6->InstanceSceneDataOffsets).ArrayNum;
      uVar11 = *(undefined4 *)&(param_6->InstanceSceneDataOffsets).field_0xc;
      pFVar17[param_3].InstanceHandle = param_6->InstanceHandle;
      pFVar17[param_3].DecalInstanceHandle = FVar5;
      uVar19 = param_6->Cursor;
      uVar12 = *(undefined4 *)&param_6->field_0x24;
      pTVar1 = &pFVar17[param_3].InstanceSceneDataOffsets;
      pTVar1->DataPtr = puVar6;
      pTVar1->ArrayNum = iVar10;
      *(undefined4 *)&pTVar1->field_0xc = uVar11;
      pFVar17[param_3].Cursor = uVar19;
      *(undefined4 *)&pFVar17[param_3].field_0x24 = uVar12;
      param_2->Distances[param_3] = param_1;
      this->NumElements = this->NumElements + 1;
      return param_2->Values + param_3;
    }
    param_2->Distances[param_3] = param_1;
    uVar20 = (ulonglong)(param_3 + 1);
    cVar18 = cVar18 + '\x01';
    uVar22 = param_2->Keys[param_3];
    param_2->Keys[param_3] = param_4;
    pFVar17 = param_2->Values;
    FVar5 = param_6->InstanceHandle;
    FVar7 = param_6->DecalInstanceHandle;
    puVar6 = (param_6->InstanceSceneDataOffsets).DataPtr;
    iVar10 = (param_6->InstanceSceneDataOffsets).ArrayNum;
    uVar11 = *(undefined4 *)&(param_6->InstanceSceneDataOffsets).field_0xc;
    FVar8 = pFVar17[param_3].DecalInstanceHandle;
    pTVar1 = &pFVar17[param_3].InstanceSceneDataOffsets;
    puVar9 = pTVar1->DataPtr;
    iVar13 = pTVar1->ArrayNum;
    uVar14 = *(undefined4 *)&pTVar1->field_0xc;
    uVar19 = param_6->Cursor;
    uVar12 = *(undefined4 *)&param_6->field_0x24;
    param_6->InstanceHandle = pFVar17[param_3].InstanceHandle;
    param_6->DecalInstanceHandle = FVar8;
    uVar21 = pFVar17[param_3].Cursor;
    uVar15 = *(undefined4 *)&pFVar17[param_3].field_0x24;
    pFVar17[param_3].InstanceHandle = FVar5;
    pFVar17[param_3].DecalInstanceHandle = FVar7;
    pTVar1 = &pFVar17[param_3].InstanceSceneDataOffsets;
    pTVar1->DataPtr = puVar6;
    pTVar1->ArrayNum = iVar10;
    *(undefined4 *)&pTVar1->field_0xc = uVar11;
    pFVar17[param_3].Cursor = uVar19;
    *(undefined4 *)&pFVar17[param_3].field_0x24 = uVar12;
    psVar3 = param_2->Distances;
    (param_6->InstanceSceneDataOffsets).DataPtr = puVar9;
    (param_6->InstanceSceneDataOffsets).ArrayNum = iVar13;
    *(undefined4 *)&(param_6->InstanceSceneDataOffsets).field_0xc = uVar14;
    param_6->Cursor = uVar21;
    *(undefined4 *)&param_6->field_0x24 = uVar15;
    cVar2 = psVar3[uVar20];
    do {
      if (cVar2 < '\0') {
        FVar5 = param_6->InstanceHandle;
        FVar7 = param_6->DecalInstanceHandle;
        puVar6 = (param_6->InstanceSceneDataOffsets).DataPtr;
        iVar10 = (param_6->InstanceSceneDataOffsets).ArrayNum;
        uVar11 = *(undefined4 *)&(param_6->InstanceSceneDataOffsets).field_0xc;
        param_2->Keys[uVar20] = uVar22;
        pFVar17 = param_2->Values;
        pFVar17[uVar20].InstanceHandle = FVar5;
        pFVar17[uVar20].DecalInstanceHandle = FVar7;
        uVar19 = param_6->Cursor;
        uVar12 = *(undefined4 *)&param_6->field_0x24;
        pTVar1 = &pFVar17[uVar20].InstanceSceneDataOffsets;
        pTVar1->DataPtr = puVar6;
        pTVar1->ArrayNum = iVar10;
        *(undefined4 *)&pTVar1->field_0xc = uVar11;
        pFVar17[uVar20].Cursor = uVar19;
        *(undefined4 *)&pFVar17[uVar20].field_0x24 = uVar12;
        param_2->Distances[uVar20] = cVar18;
        this->NumElements = this->NumElements + 1;
        return param_2->Values + param_3;
      }
      cVar2 = psVar3[uVar20];
      if (cVar2 < cVar18) {
        FVar5 = param_6->InstanceHandle;
        FVar7 = param_6->DecalInstanceHandle;
        psVar3[uVar20] = cVar18;
        cVar18 = cVar2 + '\x01';
        puVar6 = (param_6->InstanceSceneDataOffsets).DataPtr;
        iVar10 = (param_6->InstanceSceneDataOffsets).ArrayNum;
        uVar11 = *(undefined4 *)&(param_6->InstanceSceneDataOffsets).field_0xc;
        uVar19 = param_6->Cursor;
        uVar14 = *(undefined4 *)&param_6->field_0x24;
        uVar4 = param_2->Keys[uVar20];
        param_2->Keys[uVar20] = uVar22;
        pFVar17 = param_2->Values;
        FVar8 = pFVar17[uVar20].DecalInstanceHandle;
        pTVar1 = &pFVar17[uVar20].InstanceSceneDataOffsets;
        puVar9 = pTVar1->DataPtr;
        iVar13 = pTVar1->ArrayNum;
        uVar12 = *(undefined4 *)&pTVar1->field_0xc;
        param_6->InstanceHandle = pFVar17[uVar20].InstanceHandle;
        param_6->DecalInstanceHandle = FVar8;
        uVar21 = pFVar17[uVar20].Cursor;
        uVar15 = *(undefined4 *)&pFVar17[uVar20].field_0x24;
        pFVar17[uVar20].InstanceHandle = FVar5;
        pFVar17[uVar20].DecalInstanceHandle = FVar7;
        pTVar1 = &pFVar17[uVar20].InstanceSceneDataOffsets;
        pTVar1->DataPtr = puVar6;
        pTVar1->ArrayNum = iVar10;
        *(undefined4 *)&pTVar1->field_0xc = uVar11;
        (param_6->InstanceSceneDataOffsets).DataPtr = puVar9;
        (param_6->InstanceSceneDataOffsets).ArrayNum = iVar13;
        *(undefined4 *)&(param_6->InstanceSceneDataOffsets).field_0xc = uVar12;
        pFVar17[uVar20].Cursor = uVar19;
        *(undefined4 *)&pFVar17[uVar20].field_0x24 = uVar14;
        param_6->Cursor = uVar21;
        *(undefined4 *)&param_6->field_0x24 = uVar15;
        uVar22 = uVar4;
      }
      else {
        cVar18 = cVar18 + '\x01';
        if (cVar18 == this->MaxLookups) {
          FVar5 = param_6->InstanceHandle;
          FVar7 = param_6->DecalInstanceHandle;
          puVar6 = (param_6->InstanceSceneDataOffsets).DataPtr;
          iVar10 = (param_6->InstanceSceneDataOffsets).ArrayNum;
          uVar11 = *(undefined4 *)&(param_6->InstanceSceneDataOffsets).field_0xc;
          uVar4 = param_2->Keys[param_3];
          uVar19 = param_6->Cursor;
          uVar12 = *(undefined4 *)&param_6->field_0x24;
          param_2->Keys[param_3] = uVar22;
          pFVar17 = param_2->Values;
          FVar8 = pFVar17[param_3].DecalInstanceHandle;
          pTVar1 = &pFVar17[param_3].InstanceSceneDataOffsets;
          puVar9 = pTVar1->DataPtr;
          iVar13 = pTVar1->ArrayNum;
          uVar14 = *(undefined4 *)&pTVar1->field_0xc;
          param_6->InstanceHandle = pFVar17[param_3].InstanceHandle;
          param_6->DecalInstanceHandle = FVar8;
          uVar16 = pFVar17[param_3].Cursor;
          uVar15 = *(undefined4 *)&pFVar17[param_3].field_0x24;
          pFVar17[param_3].InstanceHandle = FVar5;
          pFVar17[param_3].DecalInstanceHandle = FVar7;
          pTVar1 = &pFVar17[param_3].InstanceSceneDataOffsets;
          pTVar1->DataPtr = puVar6;
          pTVar1->ArrayNum = iVar10;
          *(undefined4 *)&pTVar1->field_0xc = uVar11;
          pFVar17[param_3].Cursor = uVar19;
          *(undefined4 *)&pFVar17[param_3].field_0x24 = uVar12;
          uVar21 = this->NumSlotsMinusOne;
          (param_6->InstanceSceneDataOffsets).DataPtr = puVar9;
          (param_6->InstanceSceneDataOffsets).ArrayNum = iVar13;
          *(undefined4 *)&(param_6->InstanceSceneDataOffsets).field_0xc = uVar14;
          param_6->Cursor = uVar16;
          *(undefined4 *)&param_6->field_0x24 = uVar15;
          uVar19 = uVar21 * 2 + 2;
          if (uVar21 == 0) {
            uVar19 = 0;
          }
          if (uVar19 < 4) {
            uVar19 = 4;
          }
          Rehash(this,uVar19);
          psVar3 = (this->CurrentData).Distances;
          cVar18 = '\0';
          uVar21 = (int)(uVar4 >> 0x20) * 0x17 + (int)uVar4;
          uVar19 = uVar21 & this->NumSlotsMinusOne;
          uVar20 = (ulonglong)uVar19;
          if ((psVar3 != (schar *)0x0) && (-1 < psVar3[uVar20])) {
            do {
              if (uVar4 == (this->CurrentData).Keys[uVar20]) {
                return (this->CurrentData).Values + uVar20;
              }
              uVar19 = (int)uVar20 + 1;
              uVar20 = (ulonglong)uVar19;
              cVar18 = cVar18 + '\x01';
            } while (cVar18 <= psVar3[uVar20]);
          }
          local_48.InstanceHandle = param_6->InstanceHandle;
          local_48.DecalInstanceHandle = param_6->DecalInstanceHandle;
          local_48.InstanceSceneDataOffsets.DataPtr = (param_6->InstanceSceneDataOffsets).DataPtr;
          local_48.InstanceSceneDataOffsets.ArrayNum = (param_6->InstanceSceneDataOffsets).ArrayNum;
          local_48.InstanceSceneDataOffsets._12_4_ =
               *(undefined4 *)&(param_6->InstanceSceneDataOffsets).field_0xc;
          local_48.Cursor = param_6->Cursor;
          local_48._36_4_ = *(undefined4 *)&param_6->field_0x24;
          pFVar17 = Add(this,cVar18,&this->CurrentData,uVar19,uVar4,uVar21,&local_48);
          return pFVar17;
        }
      }
      psVar3 = param_2->Distances;
      uVar20 = (ulonglong)((int)uVar20 + 1);
      cVar2 = psVar3[uVar20];
    } while( true );
  }
  uVar19 = this->NumSlotsMinusOne * 2 + 2;
  if (this->NumSlotsMinusOne == 0) {
    uVar19 = 0;
  }
  if (uVar19 < 4) {
    uVar19 = 4;
  }
  Rehash(this,uVar19);
  cVar18 = '\0';
  uVar19 = this->NumSlotsMinusOne & param_5;
  uVar20 = (ulonglong)uVar19;
  psVar3 = (this->CurrentData).Distances;
  if ((psVar3 != (schar *)0x0) && (-1 < psVar3[uVar20])) {
    do {
      if (param_4 == (this->CurrentData).Keys[uVar20]) {
        return (this->CurrentData).Values + uVar20;
      }
      uVar19 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
      cVar18 = cVar18 + '\x01';
    } while (cVar18 <= psVar3[uVar20]);
  }
  local_48.InstanceHandle = param_6->InstanceHandle;
  local_48.DecalInstanceHandle = param_6->DecalInstanceHandle;
  local_48.InstanceSceneDataOffsets.DataPtr = (param_6->InstanceSceneDataOffsets).DataPtr;
  local_48.InstanceSceneDataOffsets.ArrayNum = (param_6->InstanceSceneDataOffsets).ArrayNum;
  local_48.InstanceSceneDataOffsets._12_4_ =
       *(undefined4 *)&(param_6->InstanceSceneDataOffsets).field_0xc;
  local_48.Cursor = param_6->Cursor;
  local_48._36_4_ = *(undefined4 *)&param_6->field_0x24;
  pFVar17 = Add(this,cVar18,&this->CurrentData,uVar19,param_4,param_5,&local_48);
  return pFVar17;
}

// Empty @ 14531ae90

void __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
::Empty(TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
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
  (this->CurrentData).Keys = (FRHIRayTracingGeometry **)0x0;
  (this->CurrentData).Values = (uint *)0x0;
  this->NumElements = 0;
  return;
}

// Empty @ 14531af00

void __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<unsigned___int64,RayTracing::FAutoInstanceBatch,Experimental::TSherwoodHashKeyFuncs<unsigned___int64,RayTracing::FAutoInstanceBatch>_>
::Empty(TSherwoodHashTable<unsigned___int64,RayTracing::FAutoInstanceBatch,Experimental::TSherwoodHashKeyFuncs<unsigned___int64,RayTracing::FAutoInstanceBatch>_>
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
  (this->CurrentData).Keys = (ulong64 *)0x0;
  (this->CurrentData).Values = (FAutoInstanceBatch *)0x0;
  this->NumElements = 0;
  return;
}

// Rehash @ 1453371a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
::Rehash(TSherwoodHashTable<FRHIRayTracingGeometry_*,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FRHIRayTracingGeometry_*,unsigned_int>_>
         *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  FRHIRayTracingGeometry *pFVar3;
  longlong lVar4;
  FRHIRayTracingGeometry **ppFVar5;
  uint *puVar6;
  schar *psVar7;
  byte bVar8;
  uint uVar9;
  schar *psVar10;
  FRHIRayTracingGeometry **ppFVar11;
  uint *puVar12;
  schar sVar13;
  uint uVar14;
  uint uVar16;
  ulonglong uVar17;
  undefined4 uStack_64;
  ulonglong uVar15;
  
  uVar9 = -((int)ROUND(__real_bf000000 - (float)this->NumElements * ___real_400e38e4) >> 1);
  if (uVar9 < param_1) {
    uVar9 = param_1;
  }
  if (uVar9 == 0) {
    Empty(this);
    return;
  }
  uVar2 = this->NumSlotsMinusOne;
  uVar17 = 0;
  uVar15 = (ulonglong)(uVar9 - 1) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar15 != 0) {
    for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  uVar16 = 1 << ((byte)lVar4 & 0x1f);
  uVar9 = uVar2 + 1;
  if (uVar2 == 0) {
    uVar9 = 0;
  }
  if (uVar16 != uVar9) {
    uVar15 = (ulonglong)uVar16 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    cVar1 = this->MaxLookups;
    bVar8 = (byte)lVar4;
    if ((uint)lVar4 < 4) {
      bVar8 = 4;
    }
    ppFVar5 = (this->CurrentData).Keys;
    puVar6 = (this->CurrentData).Values;
    psVar7 = (this->CurrentData).Distances;
    uVar9 = bVar8 + uVar16;
    psVar10 = FMemory::Malloc((ulonglong)uVar9,0);
    ppFVar11 = FMemory::Malloc((ulonglong)uVar9 * 8,0);
    puVar12 = FMemory::Malloc((ulonglong)uVar9 * 4,0);
    memset(psVar10,0xff,(ulonglong)uVar9);
    this->MaxLookups = bVar8;
    uVar2 = uVar2 + (int)cVar1;
    this->NumSlotsMinusOne = uVar16 - 1;
    this->NumElements = 0;
    *(ulonglong *)&this->CurrentData = CONCAT44(uStack_64,uVar9);
    (this->CurrentData).Distances = psVar10;
    (this->CurrentData).Keys = ppFVar11;
    (this->CurrentData).Values = puVar12;
    if (uVar2 != 0) {
      do {
        if (-1 < psVar7[uVar17]) {
          pFVar3 = ppFVar5[uVar17];
          uVar9 = puVar6[uVar17];
          uVar16 = UE::Private::MurmurFinalize32((uint)((ulonglong)pFVar3 >> 4));
          sVar13 = '\0';
          psVar10 = (this->CurrentData).Distances;
          uVar14 = this->NumSlotsMinusOne & uVar16;
          uVar15 = (ulonglong)uVar14;
          if ((psVar10 != (schar *)0x0) && (-1 < psVar10[uVar15])) {
            do {
              if (pFVar3 == (this->CurrentData).Keys[uVar15]) goto LAB_14533738f;
              uVar14 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar14;
              sVar13 = sVar13 + '\x01';
            } while (sVar13 <= psVar10[uVar15]);
          }
          Add(this,sVar13,&this->CurrentData,uVar14,pFVar3,uVar16,uVar9);
        }
LAB_14533738f:
        uVar9 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar9;
      } while (uVar9 != uVar2);
    }
    if (psVar7 != (schar *)0x0) {
      FMemory::Free(psVar7);
      FMemory::Free(ppFVar5);
      FMemory::Free(puVar6);
    }
  }
  return;
}

// Rehash @ 145337400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Experimental::TSherwoodHashTable_Private::
TSherwoodHashTable<unsigned___int64,RayTracing::FAutoInstanceBatch,Experimental::TSherwoodHashKeyFuncs<unsigned___int64,RayTracing::FAutoInstanceBatch>_>
::Rehash(TSherwoodHashTable<unsigned___int64,RayTracing::FAutoInstanceBatch,Experimental::TSherwoodHashKeyFuncs<unsigned___int64,RayTracing::FAutoInstanceBatch>_>
         *this,uint param_1)

{
  char cVar1;
  ulong64 uVar2;
  schar *psVar3;
  longlong lVar4;
  ulong64 *puVar5;
  FAutoInstanceBatch *pFVar6;
  schar *psVar7;
  byte bVar8;
  uint uVar9;
  FInstanceHandle _Dst;
  schar sVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 local_78 [80];
  
  uVar9 = -((int)ROUND(__real_bf000000 - (float)this->NumElements * ___real_400e38e4) >> 1);
  if (uVar9 < param_1) {
    uVar9 = param_1;
  }
  if (uVar9 == 0) {
    Empty(this);
    return;
  }
  uVar12 = this->NumSlotsMinusOne;
  uVar14 = 0;
  uVar11 = (ulonglong)(uVar9 - 1) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  uVar13 = 1 << ((byte)lVar4 & 0x1f);
  uVar9 = uVar12 + 1;
  if (uVar12 == 0) {
    uVar9 = 0;
  }
  if (uVar13 != uVar9) {
    uVar11 = (ulonglong)uVar13 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    cVar1 = this->MaxLookups;
    bVar8 = (byte)lVar4;
    if ((uint)lVar4 < 4) {
      bVar8 = 4;
    }
    puVar5 = (this->CurrentData).Keys;
    pFVar6 = (this->CurrentData).Values;
    psVar7 = (this->CurrentData).Distances;
    uVar9 = bVar8 + uVar13;
    local_78._0_4_ = uVar9;
    _Dst = (FInstanceHandle)FMemory::Malloc((ulonglong)uVar9,0);
    local_78._8_8_ = _Dst;
    local_78._16_8_ = FMemory::Malloc((ulonglong)uVar9 * 8,0);
    local_78._24_8_ = FMemory::Malloc((ulonglong)uVar9 * 0x28,0);
    memset((void *)_Dst,0xff,(ulonglong)uVar9);
    this->MaxLookups = bVar8;
    uVar12 = uVar12 + (int)cVar1;
    this->NumSlotsMinusOne = uVar13 - 1;
    *(undefined8 *)&this->CurrentData = local_78._0_8_;
    (this->CurrentData).Distances = (schar *)local_78._8_8_;
    this->NumElements = 0;
    (this->CurrentData).Keys = (ulong64 *)local_78._16_8_;
    (this->CurrentData).Values = (FAutoInstanceBatch *)local_78._24_8_;
    if (uVar12 != 0) {
      do {
        if (-1 < psVar7[uVar14]) {
          uVar2 = puVar5[uVar14];
          psVar3 = (this->CurrentData).Distances;
          sVar10 = '\0';
          uVar9 = (int)(uVar2 >> 0x20) * 0x17 + (int)uVar2;
          uVar13 = uVar9 & this->NumSlotsMinusOne;
          uVar11 = (ulonglong)uVar13;
          if ((psVar3 != (schar *)0x0) && (-1 < psVar3[uVar11])) {
            do {
              if (uVar2 == (this->CurrentData).Keys[uVar11]) goto LAB_145337624;
              uVar13 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar13;
              sVar10 = sVar10 + '\x01';
            } while (sVar10 <= psVar3[uVar11]);
          }
          local_78._0_8_ = pFVar6[uVar14].InstanceHandle;
          local_78._8_8_ = pFVar6[uVar14].DecalInstanceHandle;
          local_78._16_8_ = pFVar6[uVar14].InstanceSceneDataOffsets.DataPtr;
          local_78._24_8_ = *(undefined8 *)&pFVar6[uVar14].InstanceSceneDataOffsets.ArrayNum;
          local_78._32_4_ = pFVar6[uVar14].Cursor;
          local_78._36_4_ = *(undefined4 *)&pFVar6[uVar14].field_0x24;
          Add(this,sVar10,&this->CurrentData,uVar13,uVar2,uVar9,(FAutoInstanceBatch *)local_78);
        }
LAB_145337624:
        uVar9 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar9;
      } while (uVar9 != uVar12);
    }
    if (psVar7 != (schar *)0x0) {
      FMemory::Free(psVar7);
      FMemory::Free(puVar5);
      FMemory::Free(pFVar6);
    }
  }
  return;
}

