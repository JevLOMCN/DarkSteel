// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 22

// GetArray<double> @ 14d3873f0

TArrayReader<double> * __thiscall
UE::Trace::IAnalyzer::FEventData::GetArray<double>(FEventData *this,char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  FAuxData *pFVar4;
  uint *puVar5;
  FAuxData *pFVar6;
  longlong lVar7;
  uint uVar8;
  
  puVar5 = *(uint **)(this + 8);
  uVar3 = 0x811c9dc5;
  bVar2 = *param_1;
  while (bVar2 != 0) {
    param_1 = param_1 + 1;
    uVar3 = (bVar2 ^ uVar3) * 0x1000193;
    bVar2 = *param_1;
  }
  pbVar1 = (byte *)((longlong)puVar5 + 6);
  uVar8 = 0;
  if ((ulonglong)*pbVar1 != 0) {
    lVar7 = 0;
    do {
      puVar5 = puVar5 + 4;
      if (*puVar5 == uVar3) {
        if ((int)uVar8 < 0) {
          return (TArrayReader<double> *)&EmptyAuxData;
        }
        pFVar4 = FEventDataInfo::GetAuxData((FEventDataInfo *)this,uVar8);
        pFVar6 = &EmptyAuxData;
        if (pFVar4 != (FAuxData *)0x0) {
          pFVar6 = pFVar4;
        }
        return (TArrayReader<double> *)pFVar6;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (longlong)(ulonglong)*pbVar1);
  }
  return (TArrayReader<double> *)&EmptyAuxData;
}

// GetArray<unsigned___int64> @ 14d387400

TArrayReader<unsigned___int64> * __thiscall
UE::Trace::IAnalyzer::FEventData::GetArray<unsigned___int64>(FEventData *this,char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  FAuxData *pFVar4;
  uint *puVar5;
  FAuxData *pFVar6;
  longlong lVar7;
  uint uVar8;
  
  puVar5 = *(uint **)(this + 8);
  uVar3 = 0x811c9dc5;
  bVar2 = *param_1;
  while (bVar2 != 0) {
    param_1 = param_1 + 1;
    uVar3 = (bVar2 ^ uVar3) * 0x1000193;
    bVar2 = *param_1;
  }
  pbVar1 = (byte *)((longlong)puVar5 + 6);
  uVar8 = 0;
  if ((ulonglong)*pbVar1 != 0) {
    lVar7 = 0;
    do {
      puVar5 = puVar5 + 4;
      if (*puVar5 == uVar3) {
        if ((int)uVar8 < 0) {
          return (TArrayReader<unsigned___int64> *)&EmptyAuxData;
        }
        pFVar4 = FEventDataInfo::GetAuxData((FEventDataInfo *)this,uVar8);
        pFVar6 = &EmptyAuxData;
        if (pFVar4 != (FAuxData *)0x0) {
          pFVar6 = pFVar4;
        }
        return (TArrayReader<unsigned___int64> *)pFVar6;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (longlong)(ulonglong)*pbVar1);
  }
  return (TArrayReader<unsigned___int64> *)&EmptyAuxData;
}

// GetValue<unsigned_char> @ 14d3876e0

uchar __thiscall
UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>
          (FEventData *this,char *param_1,uchar param_2)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  double *pdVar6;
  int iVar7;
  ulonglong uVar8;
  
  puVar2 = *(uint **)(this + 8);
  uVar4 = 0x811c9dc5;
  bVar1 = *param_1;
  while (bVar1 != 0) {
    param_1 = param_1 + 1;
    uVar4 = (bVar1 ^ uVar4) * 0x1000193;
    bVar1 = *param_1;
  }
  uVar5 = 0;
  uVar8 = uVar5;
  puVar3 = puVar2;
  if ((ulonglong)*(byte *)((longlong)puVar2 + 6) != 0) {
    do {
      iVar7 = (int)uVar8;
      if (puVar3[4] == uVar4) {
        if (iVar7 < 0) {
          return param_2;
        }
        pdVar6 = (double *)((ulonglong)(ushort)puVar2[(longlong)iVar7 * 4 + 5] + *(longlong *)this);
        if (pdVar6 == (double *)0x0) {
          return param_2;
        }
        switch(*(undefined1 *)((longlong)puVar2 + (longlong)iVar7 * 0x10 + 0x1a)) {
        case 1:
        case 2:
        case 4:
        case 8:
          return *(uchar *)pdVar6;
        case 0xf8:
          return (uchar)(int)*pdVar6;
        default:
          return '\0';
        case 0xfc:
          return (uchar)(int)*(float *)pdVar6;
        }
      }
      uVar5 = uVar5 + 1;
      uVar8 = (ulonglong)(iVar7 + 1);
      puVar3 = puVar3 + 4;
    } while ((longlong)uVar5 < (longlong)(ulonglong)*(byte *)((longlong)puVar2 + 6));
  }
  return param_2;
}

// GetValue<int> @ 14d387800

int __thiscall
UE::Trace::IAnalyzer::FEventData::GetValue<int>(FEventData *this,char *param_1,int param_2)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  float fVar5;
  longlong lVar6;
  double *pdVar7;
  int iVar8;
  
  puVar2 = *(uint **)(this + 8);
  uVar3 = 0x811c9dc5;
  bVar1 = *param_1;
  while (bVar1 != 0) {
    param_1 = param_1 + 1;
    uVar3 = (bVar1 ^ uVar3) * 0x1000193;
    bVar1 = *param_1;
  }
  fVar5 = 0.0;
  iVar8 = 0;
  if ((ulonglong)*(byte *)((longlong)puVar2 + 6) != 0) {
    lVar6 = 0;
    puVar4 = puVar2;
    do {
      puVar4 = puVar4 + 4;
      if (*puVar4 == uVar3) {
        if (iVar8 < 0) {
          return param_2;
        }
        pdVar7 = (double *)((ulonglong)(ushort)puVar2[(longlong)iVar8 * 4 + 5] + *(longlong *)this);
        if (pdVar7 == (double *)0x0) {
          return param_2;
        }
        switch(*(undefined1 *)((longlong)puVar2 + (longlong)iVar8 * 0x10 + 0x1a)) {
        case 1:
          return (int)*(char *)pdVar7;
        case 2:
          return (int)*(short *)pdVar7;
        case 4:
        case 8:
          fVar5 = *(float *)pdVar7;
          break;
        case 0xf8:
          return (int)*pdVar7;
        case 0xfc:
          return (int)*(float *)pdVar7;
        }
        return (int)fVar5;
      }
      iVar8 = iVar8 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (longlong)(ulonglong)*(byte *)((longlong)puVar2 + 6));
  }
  return param_2;
}

// GetValue<unsigned_int> @ 14d387be0

uint __thiscall
UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
          (FEventData *this,char *param_1,uint param_2)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  double *pdVar6;
  int iVar7;
  
  puVar2 = *(uint **)(this + 8);
  uVar3 = 0x811c9dc5;
  bVar1 = *param_1;
  while (bVar1 != 0) {
    param_1 = param_1 + 1;
    uVar3 = (bVar1 ^ uVar3) * 0x1000193;
    bVar1 = *param_1;
  }
  iVar7 = 0;
  if ((ulonglong)*(byte *)((longlong)puVar2 + 6) != 0) {
    lVar5 = 0;
    puVar4 = puVar2;
    do {
      puVar4 = puVar4 + 4;
      if (*puVar4 == uVar3) {
        if (iVar7 < 0) {
          return param_2;
        }
        pdVar6 = (double *)((ulonglong)(ushort)puVar2[(longlong)iVar7 * 4 + 5] + *(longlong *)this);
        if (pdVar6 == (double *)0x0) {
          return param_2;
        }
        switch(*(undefined1 *)((longlong)puVar2 + (longlong)iVar7 * 0x10 + 0x1a)) {
        case 1:
          return (uint)*(byte *)pdVar6;
        case 2:
          return (uint)*(ushort *)pdVar6;
        case 4:
        case 8:
          return (uint)*(float *)pdVar6;
        case 0xf8:
          return (uint)(longlong)*pdVar6;
        default:
          return 0;
        case 0xfc:
          return (uint)(longlong)*(float *)pdVar6;
        }
      }
      iVar7 = iVar7 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (longlong)(ulonglong)*(byte *)((longlong)puVar2 + 6));
  }
  return param_2;
}

// GetValue<double> @ 14d387f70

double __thiscall
UE::Trace::IAnalyzer::FEventData::GetValue<double>(FEventData *this,char *param_1,double param_2)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  void *pvVar5;
  longlong lVar6;
  int iVar7;
  double dVar8;
  
  puVar2 = *(uint **)(this + 8);
  uVar3 = 0x811c9dc5;
  bVar1 = *param_1;
  while (bVar1 != 0) {
    param_1 = param_1 + 1;
    uVar3 = (bVar1 ^ uVar3) * 0x1000193;
    bVar1 = *param_1;
  }
  iVar7 = 0;
  if ((ulonglong)*(byte *)((longlong)puVar2 + 6) != 0) {
    lVar6 = 0;
    puVar4 = puVar2;
    do {
      puVar4 = puVar4 + 4;
      if (*puVar4 == uVar3) {
        if (iVar7 < 0) {
          return param_2;
        }
        pvVar5 = (void *)((ulonglong)(ushort)puVar2[(longlong)iVar7 * 4 + 5] + *(longlong *)this);
        if (pvVar5 == (void *)0x0) {
          return param_2;
        }
        dVar8 = CoerceValue<double>(pvVar5,*(schar *)((longlong)puVar2 +
                                                     (longlong)iVar7 * 0x10 + 0x1a));
        return dVar8;
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (longlong)(ulonglong)*(byte *)((longlong)puVar2 + 6));
  }
  return param_2;
}

// GetValue<__int64> @ 14d388780

long64 __thiscall
UE::Trace::IAnalyzer::FEventData::GetValue<__int64>(FEventData *this,char *param_1,long64 param_2)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  int iVar8;
  double dVar9;
  
  puVar2 = *(uint **)(this + 8);
  uVar4 = 0x811c9dc5;
  bVar1 = *param_1;
  while (bVar1 != 0) {
    param_1 = param_1 + 1;
    uVar4 = (bVar1 ^ uVar4) * 0x1000193;
    bVar1 = *param_1;
  }
  dVar5 = 0.0;
  dVar6 = dVar5;
  dVar9 = dVar5;
  puVar3 = puVar2;
  if ((ulonglong)*(byte *)((longlong)puVar2 + 6) != 0) {
    do {
      iVar8 = SUB84(dVar9,0);
      if (puVar3[4] == uVar4) {
        if (iVar8 < 0) {
          return param_2;
        }
        pdVar7 = (double *)((ulonglong)(ushort)puVar2[(longlong)iVar8 * 4 + 5] + *(longlong *)this);
        if (pdVar7 == (double *)0x0) {
          return param_2;
        }
        switch(*(undefined1 *)((longlong)puVar2 + (longlong)iVar8 * 0x10 + 0x1a)) {
        case 1:
          return (longlong)*(char *)pdVar7;
        case 2:
          return (longlong)*(short *)pdVar7;
        case 4:
          return (longlong)(int)*(float *)pdVar7;
        case 8:
          dVar5 = *pdVar7;
          break;
        case 0xf8:
          return (longlong)*pdVar7;
        case 0xfc:
          return (longlong)*(float *)pdVar7;
        }
        return (long64)dVar5;
      }
      dVar6 = (double)((longlong)dVar6 + 1);
      dVar9 = (double)(ulonglong)(iVar8 + 1);
      puVar3 = puVar3 + 4;
    } while ((longlong)dVar6 < (longlong)(ulonglong)*(byte *)((longlong)puVar2 + 6));
  }
  return param_2;
}

// GetValue<unsigned___int64> @ 14d388b30

ulong64 __thiscall
UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
          (FEventData *this,char *param_1,ulong64 param_2)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  ulong64 uVar5;
  void *pvVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  puVar2 = *(uint **)(this + 8);
  uVar4 = 0x811c9dc5;
  bVar1 = *param_1;
  while (bVar1 != 0) {
    param_1 = param_1 + 1;
    uVar4 = (bVar1 ^ uVar4) * 0x1000193;
    bVar1 = *param_1;
  }
  uVar7 = 0;
  uVar9 = uVar7;
  puVar3 = puVar2;
  if ((ulonglong)*(byte *)((longlong)puVar2 + 6) != 0) {
    do {
      iVar8 = (int)uVar9;
      if (puVar3[4] == uVar4) {
        if (iVar8 < 0) {
          return param_2;
        }
        pvVar6 = (void *)((ulonglong)(ushort)puVar2[(longlong)iVar8 * 4 + 5] + *(longlong *)this);
        if (pvVar6 == (void *)0x0) {
          return param_2;
        }
        uVar5 = CoerceValue<unsigned___int64>
                          (pvVar6,*(schar *)((longlong)puVar2 + (longlong)iVar8 * 0x10 + 0x1a));
        return uVar5;
      }
      uVar7 = uVar7 + 1;
      uVar9 = (ulonglong)(iVar8 + 1);
      puVar3 = puVar3 + 4;
    } while ((longlong)uVar7 < (longlong)(ulonglong)*(byte *)((longlong)puVar2 + 6));
  }
  return param_2;
}

// GetArrayImpl @ 14d39c5e0

FArrayReader * __thiscall
UE::Trace::IAnalyzer::FEventData::GetArrayImpl(FEventData *this,char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  FAuxData *pFVar4;
  uint *puVar5;
  FAuxData *pFVar6;
  longlong lVar7;
  uint uVar8;
  
  puVar5 = *(uint **)(this + 8);
  uVar3 = 0x811c9dc5;
  bVar2 = *param_1;
  while (bVar2 != 0) {
    param_1 = param_1 + 1;
    uVar3 = (bVar2 ^ uVar3) * 0x1000193;
    bVar2 = *param_1;
  }
  pbVar1 = (byte *)((longlong)puVar5 + 6);
  uVar8 = 0;
  if ((ulonglong)*pbVar1 != 0) {
    lVar7 = 0;
    do {
      puVar5 = puVar5 + 4;
      if (*puVar5 == uVar3) {
        if ((int)uVar8 < 0) {
          return (FArrayReader *)&EmptyAuxData;
        }
        pFVar4 = FEventDataInfo::GetAuxData((FEventDataInfo *)this,uVar8);
        pFVar6 = &EmptyAuxData;
        if (pFVar4 != (FAuxData *)0x0) {
          pFVar6 = pFVar4;
        }
        return (FArrayReader *)pFVar6;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (longlong)(ulonglong)*pbVar1);
  }
  return (FArrayReader *)&EmptyAuxData;
}

// GetAttachment @ 14d39c680

uchar * __thiscall UE::Trace::IAnalyzer::FEventData::GetAttachment(FEventData *this)

{
  return (uchar *)((ulonglong)*(ushort *)(*(longlong *)(this + 8) + 8) + *(longlong *)this);
}

// GetAttachmentSize @ 14d39c6a0

uint __thiscall UE::Trace::IAnalyzer::FEventData::GetAttachmentSize(FEventData *this)

{
  return (uint)*(ushort *)(this + 0x18) - (uint)*(ushort *)(*(longlong *)(this + 8) + 8);
}

// GetReferenceValueImpl @ 14d39d190

void * __thiscall
UE::Trace::IAnalyzer::FEventData::GetReferenceValueImpl(FEventData *this,uint param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(this + 8);
  uVar1 = *(uint *)(lVar2 + 0x1c + (ulonglong)param_1 * 0x10);
  if (uVar1 != 0) {
    *param_2 = uVar1;
    return (void *)((ulonglong)*(ushort *)(lVar2 + 0x14 + (ulonglong)param_1 * 0x10) +
                   *(longlong *)this);
  }
  return (void *)0x0;
}

// GetReferenceValueImpl @ 14d39d1c0

void * __thiscall
UE::Trace::IAnalyzer::FEventData::GetReferenceValueImpl
          (FEventData *this,char *param_1,ushort *param_2,uint *param_3)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  
  puVar2 = *(uint **)(this + 8);
  uVar4 = 0x811c9dc5;
  bVar1 = *param_1;
  while (bVar1 != 0) {
    param_1 = param_1 + 1;
    uVar4 = (bVar1 ^ uVar4) * 0x1000193;
    bVar1 = *param_1;
  }
  uVar5 = 0;
  uVar7 = uVar5;
  puVar3 = puVar2;
  if ((ulonglong)*(byte *)((longlong)puVar2 + 6) != 0) {
    do {
      iVar6 = (int)uVar7;
      if (puVar3[4] == uVar4) {
        if (iVar6 < 0) {
          return (void *)0x0;
        }
        if (puVar2[(longlong)iVar6 * 4 + 7] == 0) {
          return (void *)0x0;
        }
        *param_2 = (short)*(char *)((longlong)puVar2 + (longlong)iVar6 * 0x10 + 0x1a);
        *param_3 = puVar2[(longlong)iVar6 * 4 + 7];
        return (void *)((ulonglong)(ushort)puVar2[(longlong)iVar6 * 4 + 5] + *(longlong *)this);
      }
      uVar5 = uVar5 + 1;
      uVar7 = (ulonglong)(iVar6 + 1);
      puVar3 = puVar3 + 4;
    } while ((longlong)uVar5 < (longlong)(ulonglong)*(byte *)((longlong)puVar2 + 6));
  }
  return (void *)0x0;
}

// GetSize @ 14d39e3d0

uint __thiscall UE::Trace::IAnalyzer::FEventData::GetSize(FEventData *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)(this + 0x10);
  uVar5 = (uint)*(ushort *)(this + 0x18);
  if (lVar3 != 0) {
    piVar1 = (int *)(lVar3 + 0x88);
    iVar2 = *piVar1;
    if (*(longlong *)(lVar3 + 0x80) != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x80);
    }
    lVar4 = (longlong)iVar2 * 0x10 + lVar3;
    while( true ) {
      if (*piVar1 != iVar2) {
        `TCheckedPointerIterator<UE::Trace::FAuxData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (lVar3 == lVar4) break;
      uVar5 = uVar5 + *(int *)(lVar3 + 8);
      lVar3 = lVar3 + 0x10;
    }
  }
  return uVar5;
}

// GetString @ 14d39ee50

bool __thiscall
UE::Trace::IAnalyzer::FEventData::GetString
          (FEventData *this,char *param_1,TStringView<char> *param_2)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  FAuxData *pFVar4;
  uint *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uStack_10;
  
  puVar2 = *(uint **)(this + 8);
  uVar3 = 0x811c9dc5;
  bVar1 = *param_1;
  while (bVar1 != 0) {
    param_1 = param_1 + 1;
    uVar3 = (bVar1 ^ uVar3) * 0x1000193;
    bVar1 = *param_1;
  }
  uVar6 = 0;
  if ((ulonglong)*(byte *)((longlong)puVar2 + 6) != 0) {
    lVar7 = 0;
    puVar5 = puVar2;
    do {
      puVar5 = puVar5 + 4;
      if (*puVar5 == uVar3) {
        if ((int)uVar6 < 0) {
          return false;
        }
        if ((*(byte *)((longlong)puVar2 + (longlong)(int)uVar6 * 0x10 + 0x1b) & 0x7f) != 8) {
          return false;
        }
        if (*(char *)((longlong)puVar2 + (longlong)(int)uVar6 * 0x10 + 0x1a) != '\x01') {
          return false;
        }
        pFVar4 = FEventDataInfo::GetAuxData((FEventDataInfo *)this,uVar6);
        if (pFVar4 != (FAuxData *)0x0) {
          uStack_10 = CONCAT44(uStack_10._4_4_,pFVar4->DataSize);
          param_2->DataPtr = (char *)pFVar4->Data;
          *(undefined8 *)&param_2->Size = uStack_10;
          return true;
        }
        param_2->DataPtr = (char *)0x0;
        *(undefined8 *)&param_2->Size = 0;
        return true;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (longlong)(ulonglong)*(byte *)((longlong)puVar2 + 6));
  }
  return false;
}

// GetString @ 14d39ef30

bool __thiscall
UE::Trace::IAnalyzer::FEventData::GetString
          (FEventData *this,char *param_1,TStringView<wchar_t> *param_2)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  FAuxData *pFVar4;
  uint *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uStack_10;
  
  puVar2 = *(uint **)(this + 8);
  uVar3 = 0x811c9dc5;
  bVar1 = *param_1;
  while (bVar1 != 0) {
    param_1 = param_1 + 1;
    uVar3 = (bVar1 ^ uVar3) * 0x1000193;
    bVar1 = *param_1;
  }
  uVar6 = 0;
  if ((ulonglong)*(byte *)((longlong)puVar2 + 6) != 0) {
    lVar7 = 0;
    puVar5 = puVar2;
    do {
      puVar5 = puVar5 + 4;
      if (*puVar5 == uVar3) {
        if ((int)uVar6 < 0) {
          return false;
        }
        if ((*(byte *)((longlong)puVar2 + (longlong)(int)uVar6 * 0x10 + 0x1b) & 0x7f) != 8) {
          return false;
        }
        if (*(char *)((longlong)puVar2 + (longlong)(int)uVar6 * 0x10 + 0x1a) != '\x02') {
          return false;
        }
        pFVar4 = FEventDataInfo::GetAuxData((FEventDataInfo *)this,uVar6);
        if (pFVar4 != (FAuxData *)0x0) {
          uStack_10 = CONCAT44(uStack_10._4_4_,pFVar4->DataSize >> 1);
          param_2->DataPtr = (wchar_t *)pFVar4->Data;
          *(undefined8 *)&param_2->Size = uStack_10;
          return true;
        }
        param_2->DataPtr = (wchar_t *)0x0;
        *(undefined8 *)&param_2->Size = 0;
        return true;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (longlong)(ulonglong)*(byte *)((longlong)puVar2 + 6));
  }
  return false;
}

// GetString @ 14d39f010

bool __thiscall
UE::Trace::IAnalyzer::FEventData::GetString(FEventData *this,char *param_1,FString *param_2)

{
  byte bVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  FAuxData *pFVar5;
  FString *pFVar6;
  uint *puVar7;
  longlong lVar8;
  uint uVar9;
  FString local_18;
  
  puVar3 = *(uint **)(this + 8);
  uVar4 = 0x811c9dc5;
  bVar1 = *param_1;
  while (bVar1 != 0) {
    param_1 = param_1 + 1;
    uVar4 = (bVar1 ^ uVar4) * 0x1000193;
    bVar1 = *param_1;
  }
  uVar9 = 0;
  if ((ulonglong)*(byte *)((longlong)puVar3 + 6) != 0) {
    lVar8 = 0;
    puVar7 = puVar3;
    do {
      puVar7 = puVar7 + 4;
      if (*puVar7 == uVar4) {
        if ((int)uVar9 < 0) {
          return false;
        }
        if ((*(byte *)((longlong)puVar3 + (longlong)(int)uVar9 * 0x10 + 0x1b) & 0x7f) == 8) {
          pFVar5 = FEventDataInfo::GetAuxData((FEventDataInfo *)this,uVar9);
          if (pFVar5 == (FAuxData *)0x0) {
            pFVar6 = &local_18;
            local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_18.Data.ArrayNum = 0;
            local_18.Data.ArrayMax = 0;
          }
          else {
            cVar2 = *(char *)((longlong)puVar3 + (longlong)(int)uVar9 * 0x10 + 0x1a);
            if (cVar2 != '\x01') {
              if (cVar2 != '\x02') {
                return false;
              }
              ::FString::AssignRange(param_2,(wchar_t *)pFVar5->Data,pFVar5->DataSize >> 1);
              return true;
            }
            pFVar6 = ::FString::ConstructFromPtrSize
                               (&local_18,(char *)pFVar5->Data,pFVar5->DataSize);
          }
          ::FString::operator=(param_2,pFVar6);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
          return true;
        }
        return false;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (longlong)(ulonglong)*(byte *)((longlong)puVar3 + 6));
  }
  return false;
}

// GetTypeInfo @ 14d3a0050

FEventTypeInfo * __thiscall UE::Trace::IAnalyzer::FEventData::GetTypeInfo(FEventData *this)

{
  return *(FEventTypeInfo **)(this + 8);
}

// GetValueImpl @ 14d3a00e0

void * __thiscall
UE::Trace::IAnalyzer::FEventData::GetValueImpl(FEventData *this,char *param_1,schar *param_2)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  
  puVar2 = *(uint **)(this + 8);
  uVar4 = 0x811c9dc5;
  bVar1 = *param_1;
  while (bVar1 != 0) {
    param_1 = param_1 + 1;
    uVar4 = (bVar1 ^ uVar4) * 0x1000193;
    bVar1 = *param_1;
  }
  uVar5 = 0;
  uVar7 = uVar5;
  puVar3 = puVar2;
  if ((ulonglong)*(byte *)((longlong)puVar2 + 6) != 0) {
    do {
      iVar6 = (int)uVar7;
      if (puVar3[4] == uVar4) {
        if (iVar6 < 0) {
          return (void *)0x0;
        }
        *param_2 = *(schar *)((longlong)puVar2 + (longlong)iVar6 * 0x10 + 0x1a);
        return (void *)((ulonglong)(ushort)puVar2[(longlong)iVar6 * 4 + 5] + *(longlong *)this);
      }
      uVar5 = uVar5 + 1;
      uVar7 = (ulonglong)(iVar6 + 1);
      puVar3 = puVar3 + 4;
    } while ((longlong)uVar5 < (longlong)(ulonglong)*(byte *)((longlong)puVar2 + 6));
  }
  return (void *)0x0;
}

// GetValueRaw @ 14d3a0180

void * __thiscall
UE::Trace::IAnalyzer::FEventData::GetValueRaw(FEventData *this,FEventFieldHandle param_1)

{
  if (param_1.Detail < 0) {
    return (void *)0x0;
  }
  return (void *)((longlong)param_1.Detail + *(longlong *)this);
}

// IsDefinitionImpl @ 14d3a05e0

bool __thiscall UE::Trace::IAnalyzer::FEventData::IsDefinitionImpl(FEventData *this,uint *param_1)

{
  *param_1 = (uint)*(ushort *)(*(longlong *)(this + 8) + 4);
  return (bool)(*(byte *)(*(longlong *)(this + 8) + 7) >> 3 & 1);
}

// SerializeToCbor @ 14d3a72e0

void __thiscall
UE::Trace::IAnalyzer::FEventData::SerializeToCbor
          (FEventData *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)(this + 0x10);
  uVar5 = (uint)*(ushort *)(this + 0x18);
  if (lVar3 != 0) {
    piVar1 = (int *)(lVar3 + 0x88);
    iVar2 = *piVar1;
    if (*(longlong *)(lVar3 + 0x80) != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x80);
    }
    lVar4 = (longlong)iVar2 * 0x10 + lVar3;
    while( true ) {
      if (*piVar1 != iVar2) {
        `TCheckedPointerIterator<UE::Trace::FAuxData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (lVar3 == lVar4) break;
      uVar5 = uVar5 + *(int *)(lVar3 + 8);
      lVar3 = lVar3 + 0x10;
    }
  }
  SerializeToCborImpl(param_1,this,uVar5);
  return;
}

