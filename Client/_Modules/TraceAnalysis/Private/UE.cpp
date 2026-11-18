// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 7

// ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_> @ 14d38a180

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<unsigned_short> *param_5
          ,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Trace::FAuxData>_> @ 14d38a220

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Trace::FAuxData>_>
          (ushort param_1,ForElementType<UE::Trace::FAuxData> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Trace::FAuxData>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_> @ 14d38a2f0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_short> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x61) {
      iVar8 = 0x60;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x61) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_> @ 14d38a3d0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
          (uint param_1,uint param_2,ForElementType<unsigned_short> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 9) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_> @ 14d38a490

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
          (uint param_1,uint param_2,ForElementType<unsigned_short> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x61) {
    iVar2 = 0x60;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Trace::FAuxData>_> @ 14d38a550

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Trace::FAuxData>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Trace::FAuxData> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Trace::FAuxData>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// SerializeToCborImpl @ 14d3a7390

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

void __cdecl
UE::Trace::SerializeToCborImpl
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,FEventData *param_2,
          uint param_3)

{
  byte bVar1;
  FEventFieldInfo FVar2;
  char cVar3;
  FArrayReader FVar4;
  longlong lVar5;
  uint *puVar6;
  double dVar7;
  uint *puVar8;
  EType EVar9;
  uint uVar10;
  size_t sVar11;
  FAuxData *pFVar12;
  FString *pFVar13;
  FArrayReader *pFVar14;
  ulong64 uVar15;
  uint uVar16;
  void *pvVar17;
  FEventFieldInfo *pFVar18;
  FArrayReader FVar19;
  double *pdVar20;
  FEventFieldInfo *_Str;
  FEventFieldInfo *pFVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  FString local_128;
  FCborWriter local_118;
  TStringView<char> local_f8;
  FString local_e8;
  FArchiveState local_d8;
  longlong local_48;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_40;
  undefined8 local_38;
  
  lVar5 = *(longlong *)(param_2 + 8);
  bVar1 = *(byte *)(lVar5 + 6);
  if (bVar1 != 0) {
    uVar23 = (uint)bVar1 * 0x10 + param_1->ArrayNum + (param_3 * 0xb) / 10;
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
    }
    if (param_1->ArrayMax < (int)uVar23) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar23,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
    }
    uVar22 = 0;
    local_d8._padding_ = 0;
    local_d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_d8._40_8_ = 0;
    local_d8.ArSerializingDefaults = 0;
    local_d8.ArPortFlags = 0;
    local_d8.ArMaxSerializeSize = 0;
    local_d8.ArUEVer.FileVersionUE4 = 0;
    local_d8.ArUEVer.FileVersionUE5 = 0;
    local_d8.ArLicenseeUEVer = 0;
    local_d8.ArEngineVer.Major = 0;
    local_d8.ArEngineVer.Minor = 0;
    local_d8.ArEngineVer.Patch = 0;
    local_d8.ArEngineVer._6_2_ = 0;
    local_d8.ArEngineVer.Changelist = 0;
    local_d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_d8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_d8.SerializedProperty = (FProperty *)0x0;
    local_d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_d8.bCustomVersionsAreReset = false;
    local_d8._129_7_ = 0;
    local_d8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_d8);
    local_48 = 0;
    local_d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_38 = 0;
    local_40 = param_1;
    FArchiveState::SetIsSaving(&local_d8,true);
    (**(code **)(local_d8._padding_ + 0x108))(&local_d8,0);
    local_48 = (longlong)param_1->ArrayNum;
    local_d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
    FCborWriter::FCborWriter(&local_118,(FArchive *)&local_d8,BigEndian);
    FCborWriter::WriteContainerStart(&local_118,Map,(ulonglong)bVar1);
    if (bVar1 != 0) {
      do {
        pFVar18 = (FEventFieldInfo *)0x0;
        pFVar21 = pFVar18;
        if ((uint)uVar22 < (uint)*(byte *)(lVar5 + 6)) {
          pFVar21 = (FEventFieldInfo *)((uVar22 + 1) * 0x10 + lVar5);
        }
        _Str = pFVar21 + *(ushort *)(pFVar21 + 8);
        sVar11 = strlen((char *)_Str);
        FCborWriter::WriteValue(&local_118,(char *)_Str,(longlong)(int)sVar11);
        EVar9 = IAnalyzer::FEventFieldInfo::GetType(pFVar21);
        if (EVar9 == AnsiString) {
          local_f8.DataPtr = (char *)0x0;
          local_f8.Size = 0;
          IAnalyzer::FEventData::GetString(param_2,(char *)_Str,&local_f8);
          FCborWriter::WriteValue(&local_118,local_f8.DataPtr,(longlong)local_f8.Size);
        }
        else {
          EVar9 = IAnalyzer::FEventFieldInfo::GetType(pFVar21);
          if (EVar9 == WideString) {
            FVar2 = *_Str;
            uVar23 = 0x811c9dc5;
            puVar6 = *(uint **)(param_2 + 8);
            local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_128.Data.ArrayNum = 0;
            local_128.Data.ArrayMax = 0;
            while (FVar2 != (FEventFieldInfo)0x0) {
              _Str = _Str + 1;
              uVar23 = ((byte)FVar2 ^ uVar23) * 0x1000193;
              FVar2 = *_Str;
            }
            pFVar21 = pFVar18;
            puVar8 = puVar6;
            if ((ulonglong)*(byte *)((longlong)puVar6 + 6) != 0) {
              do {
                uVar10 = (uint)pFVar18;
                if (puVar8[4] == uVar23) {
                  if ((-1 < (int)uVar10) &&
                     ((*(byte *)((longlong)puVar6 + (longlong)pFVar21 * 0x10 + 0x1b) & 0x7f) == 8))
                  {
                    pFVar12 = FEventDataInfo::GetAuxData((FEventDataInfo *)param_2,uVar10);
                    if (pFVar12 == (FAuxData *)0x0) {
                      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_128.Data.AllocatorInstance.Data);
                      }
                      local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_128.Data.ArrayNum = 0;
                      local_128.Data.ArrayMax = 0;
                    }
                    else {
                      cVar3 = *(char *)((longlong)puVar6 + (longlong)pFVar21 * 0x10 + 0x1a);
                      if (cVar3 == '\x01') {
                        pFVar13 = ::FString::ConstructFromPtrSize
                                            (&local_e8,(char *)pFVar12->Data,pFVar12->DataSize);
                        if (&local_128 != pFVar13) {
                          if (local_128.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_128.Data.AllocatorInstance.Data);
                          }
                          local_128.Data.AllocatorInstance.Data =
                               (pFVar13->Data).AllocatorInstance.Data;
                          (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          local_128.Data.ArrayNum = (pFVar13->Data).ArrayNum;
                          local_128.Data.ArrayMax = (pFVar13->Data).ArrayMax;
                          (pFVar13->Data).ArrayNum = 0;
                          (pFVar13->Data).ArrayMax = 0;
                        }
                        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
                        }
                      }
                      else if (cVar3 == '\x02') {
                        ::FString::AssignRange
                                  (&local_128,(wchar_t *)pFVar12->Data,pFVar12->DataSize >> 1);
                      }
                    }
                  }
                  break;
                }
                pFVar18 = (FEventFieldInfo *)(ulonglong)(uVar10 + 1);
                pFVar21 = pFVar21 + 1;
                puVar8 = puVar8 + 4;
              } while ((longlong)pFVar21 < (longlong)(ulonglong)*(byte *)((longlong)puVar6 + 6));
            }
            FCborWriter::WriteValue(&local_118,&local_128);
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
          }
          else if ((char)pFVar21[0xb] < '\0') {
            EVar9 = IAnalyzer::FEventFieldInfo::GetType(pFVar21);
            if (EVar9 == Integer) {
              pFVar14 = IAnalyzer::FEventData::GetArrayImpl(param_2,(char *)_Str);
              uVar23 = -(int)(char)pFVar14[0xe];
              if ((int)uVar23 < 0) {
                uVar23 = (int)(char)pFVar14[0xe];
              }
              if ((uVar23 != 0) && (uVar10 = *(uint *)(pFVar14 + 8) / uVar23, uVar10 != 0)) {
                FCborWriter::WriteContainerStart
                          (&local_118,Array,(ulonglong)*(uint *)(pFVar14 + 8) / (ulonglong)uVar23);
                uVar23 = 0;
                if (uVar10 != 0) {
                  do {
                    FVar4 = pFVar14[0xe];
                    uVar16 = -(int)(char)FVar4;
                    if ((int)uVar16 < 0) {
                      uVar16 = (int)(char)FVar4;
                    }
                    if ((uVar16 == 0) || (*(uint *)(pFVar14 + 8) / uVar16 <= uVar23)) {
LAB_14d3a7841:
                      uVar15 = 0;
                    }
                    else {
                      FVar19 = (FArrayReader)-(char)FVar4;
                      if (-1 < (char)FVar4) {
                        FVar19 = FVar4;
                      }
                      pvVar17 = (void *)((ulonglong)((int)(char)FVar19 * uVar23) +
                                        *(longlong *)pFVar14);
                      if (pvVar17 == (void *)0x0) goto LAB_14d3a7841;
                      uVar15 = IAnalyzer::CoerceValue<unsigned___int64>(pvVar17,(schar)FVar19);
                    }
                    FCborWriter::WriteValue(&local_118,uVar15);
                    uVar23 = uVar23 + 1;
                  } while (uVar23 < uVar10);
                }
                goto LAB_14d3a79c3;
              }
            }
            else if (EVar9 == Float) {
              pFVar14 = IAnalyzer::FEventData::GetArrayImpl(param_2,(char *)_Str);
              uVar23 = -(int)(char)pFVar14[0xe];
              if ((int)uVar23 < 0) {
                uVar23 = (int)(char)pFVar14[0xe];
              }
              if ((uVar23 != 0) && (uVar10 = *(uint *)(pFVar14 + 8) / uVar23, uVar10 != 0)) {
                FCborWriter::WriteContainerStart
                          (&local_118,Array,(ulonglong)*(uint *)(pFVar14 + 8) / (ulonglong)uVar23);
                uVar23 = 0;
                if (uVar10 != 0) {
                  do {
                    FVar4 = pFVar14[0xe];
                    uVar16 = -(int)(char)FVar4;
                    if ((int)uVar16 < 0) {
                      uVar16 = (int)(char)FVar4;
                    }
                    if ((uVar16 == 0) || (*(uint *)(pFVar14 + 8) / uVar16 <= uVar23)) {
LAB_14d3a7781:
                      uVar24 = 0;
                      uVar25 = 0;
                    }
                    else {
                      FVar19 = (FArrayReader)-(char)FVar4;
                      if (-1 < (char)FVar4) {
                        FVar19 = FVar4;
                      }
                      pvVar17 = (void *)((ulonglong)((int)(char)FVar19 * uVar23) +
                                        *(longlong *)pFVar14);
                      if (pvVar17 == (void *)0x0) goto LAB_14d3a7781;
                      dVar7 = IAnalyzer::CoerceValue<double>(pvVar17,(schar)FVar19);
                      uVar24 = SUB84(dVar7,0);
                      uVar25 = (undefined4)((ulonglong)dVar7 >> 0x20);
                    }
                    FCborWriter::WriteValue(&local_118,(double)CONCAT44(uVar25,uVar24));
                    uVar23 = uVar23 + 1;
                  } while (uVar23 < uVar10);
                }
                goto LAB_14d3a79c3;
              }
            }
LAB_14d3a79b9:
            FCborWriter::WriteNull(&local_118);
          }
          else {
            EVar9 = IAnalyzer::FEventFieldInfo::GetType(pFVar21);
            if (EVar9 == Integer) {
              if (((byte)pFVar21[0xb] & 0x10) == 0) {
                uVar15 = IAnalyzer::FEventData::GetValue<unsigned___int64>(param_2,(char *)_Str,0);
                FCborWriter::WriteValue(&local_118,uVar15);
              }
              else {
                uVar23 = 0x811c9dc5;
                puVar6 = *(uint **)(param_2 + 8);
                FVar2 = *_Str;
                while (FVar2 != (FEventFieldInfo)0x0) {
                  _Str = _Str + 1;
                  uVar23 = ((byte)FVar2 ^ uVar23) * 0x1000193;
                  FVar2 = *_Str;
                }
                puVar8 = puVar6;
                if ((ulonglong)*(byte *)((longlong)puVar6 + 6) != 0) {
                  do {
                    if (puVar8[4] == uVar23) {
                      pdVar20 = (double *)
                                ((ulonglong)(ushort)puVar6[(longlong)pFVar18 * 4 + 5] +
                                *(longlong *)param_2);
                      if (pdVar20 != (double *)0x0) {
                        switch(*(undefined1 *)((longlong)puVar6 + (longlong)pFVar18 * 0x10 + 0x1a))
                        {
                        case 1:
                          FCborWriter::WriteValue(&local_118,(longlong)*(char *)pdVar20);
                          goto LAB_14d3a79c3;
                        case 2:
                          FCborWriter::WriteValue(&local_118,(longlong)*(short *)pdVar20);
                          goto LAB_14d3a79c3;
                        case 4:
                          FCborWriter::WriteValue(&local_118,(longlong)(int)*(float *)pdVar20);
                          goto LAB_14d3a79c3;
                        case 8:
                          FCborWriter::WriteValue(&local_118,(long64)*pdVar20);
                          goto LAB_14d3a79c3;
                        case 0xf8:
                          FCborWriter::WriteValue(&local_118,(longlong)*pdVar20);
                          goto LAB_14d3a79c3;
                        case 0xfc:
                          FCborWriter::WriteValue(&local_118,(longlong)*(float *)pdVar20);
                          goto LAB_14d3a79c3;
                        }
                      }
                      break;
                    }
                    pFVar18 = pFVar18 + 1;
                    puVar8 = puVar8 + 4;
                  } while ((longlong)pFVar18 < (longlong)(ulonglong)*(byte *)((longlong)puVar6 + 6))
                  ;
                }
                FCborWriter::WriteValue(&local_118,0);
              }
            }
            else {
              EVar9 = IAnalyzer::FEventFieldInfo::GetType(pFVar21);
              if (EVar9 != Float) goto LAB_14d3a79b9;
              dVar7 = IAnalyzer::FEventData::GetValue<double>(param_2,(char *)_Str,0.0);
              FCborWriter::WriteValue(&local_118,dVar7);
            }
          }
        }
LAB_14d3a79c3:
        uVar23 = (uint)uVar22 + 1;
        uVar22 = (ulonglong)uVar23;
      } while (uVar23 < bVar1);
    }
    FCborWriter::~FCborWriter(&local_118);
    FArchive::~FArchive((FArchive *)&local_d8);
  }
  return;
}

