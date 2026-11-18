// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 10

// FTraceAnalyzer @ 14d38fe60

FTraceAnalyzer * __thiscall
UE::Trace::FTraceAnalyzer::FTraceAnalyzer
          (FTraceAnalyzer *this,FAnalysisState *param_1,FThreadInfoCallback *param_2)

{
  this->State = param_1;
  this->_padding_ = (longlong)&___7FTraceAnalyzer_Trace_UE__6B_;
  this->ThreadInfoCallback = param_2;
  return this;
}

// OnAnalysisBegin @ 14d3a0910

void __thiscall
UE::Trace::FTraceAnalyzer::OnAnalysisBegin(FTraceAnalyzer *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,0,"$Trace","NewTrace",0);
  (**(code **)*pFVar1)(pFVar1,1,"$Trace","SerialSync",0);
  (**(code **)*pFVar1)(pFVar1,2,"$Trace","Timing",0);
  (**(code **)*pFVar1)(pFVar1,3,"$Trace","ThreadTiming",0);
  (**(code **)*pFVar1)(pFVar1,4,"$Trace","ThreadInfo",0);
  (**(code **)*pFVar1)(pFVar1,5,"$Trace","ThreadGroupBegin",0);
  (**(code **)*pFVar1)(pFVar1,6,"$Trace","ThreadGroupEnd",0);
  return;
}

// OnEvent @ 14d3a3d50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Trace::FTraceAnalyzer::OnEvent
          (FTraceAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  FSerial *pFVar1;
  uint *puVar2;
  FDispatch *pFVar3;
  uint *puVar4;
  FDispatch *pFVar5;
  uint uVar6;
  ulong64 uVar7;
  FInfo *pFVar8;
  FAuxData *pFVar9;
  byte bVar10;
  void *pvVar11;
  uint uVar12;
  char *pcVar13;
  ulong64 uVar14;
  byte *pbVar15;
  uchar *puVar16;
  int iVar17;
  ulonglong uVar18;
  uchar *puVar19;
  uint uVar20;
  uint uVar21;
  uchar *local_18;
  
  switch(param_1) {
  case 0:
    OnNewTrace(this,param_3);
    return true;
  case 1:
    pFVar1 = &this->State->Serial;
    pFVar1->Value = pFVar1->Value & 0xbfffffff;
    return true;
  case 2:
    OnTiming(this,param_3);
    return true;
  case 3:
    pcVar13 = "BaseTimestamp";
    uVar6 = 0x811c9dc5;
    bVar10 = 0x42;
    puVar2 = *(uint **)(param_3->EventData + 8);
    do {
      pcVar13 = pcVar13 + 1;
      uVar6 = (bVar10 ^ uVar6) * 0x1000193;
      bVar10 = *pcVar13;
    } while (bVar10 != 0);
    uVar7 = 0;
    uVar14 = uVar7;
    uVar18 = uVar7;
    puVar4 = puVar2;
    if ((ulonglong)*(byte *)((longlong)puVar2 + 6) != 0) {
      do {
        iVar17 = (int)uVar18;
        if (puVar4[4] == uVar6) {
          if (-1 < iVar17) {
            pvVar11 = (void *)((ulonglong)(ushort)puVar2[(longlong)iVar17 * 4 + 5] +
                              *(longlong *)param_3->EventData);
            uVar7 = 0;
            if (pvVar11 != (void *)0x0) {
              uVar7 = IAnalyzer::CoerceValue<unsigned___int64>
                                (pvVar11,*(schar *)((longlong)puVar2 +
                                                   (longlong)iVar17 * 0x10 + 0x1a));
            }
          }
          break;
        }
        uVar14 = uVar14 + 1;
        uVar18 = (ulonglong)(iVar17 + 1);
        puVar4 = puVar4 + 4;
      } while ((longlong)uVar14 < (longlong)(ulonglong)*(byte *)((longlong)puVar2 + 6));
    }
    pFVar8 = FThreads::GetInfo(&this->State->Threads,(this->State->Threads).LastGetInfoId);
    if (pFVar8 != (FInfo *)0x0) {
      pFVar8->PrevTimestamp = uVar7;
      (**(code **)((longlong)*this->ThreadInfoCallback + 8))(this->ThreadInfoCallback,pFVar8);
      return true;
    }
    break;
  case 4:
    OnThreadInfoInternal(this,param_3);
    return true;
  case 5:
    pbVar15 = &s_Name;
    local_18 = (uchar *)0x0;
    uVar20 = 0;
    uVar6 = 0x811c9dc5;
    bVar10 = 0x4e;
    pFVar3 = ((FEventDataInfo *)param_3->EventData)->Dispatch;
    do {
      pbVar15 = pbVar15 + 1;
      uVar6 = (bVar10 ^ uVar6) * 0x1000193;
      bVar10 = *pbVar15;
    } while (bVar10 != 0);
    puVar16 = local_18;
    puVar19 = local_18;
    pFVar5 = pFVar3;
    uVar21 = 0;
    if ((ulonglong)pFVar3->FieldCount != 0) {
      do {
        uVar12 = (uint)puVar16;
        uVar21 = uVar20;
        if (pFVar5[1].Hash == uVar6) {
          if (((-1 < (int)uVar12) &&
              (local_18 = (uchar *)0x0,
              (pFVar3[(longlong)(int)uVar12 + 1].LoggerNameOffset & 0x7f00) == 0x800)) &&
             ((char)pFVar3[(longlong)(int)uVar12 + 1].LoggerNameOffset == '\x01')) {
            pFVar9 = FEventDataInfo::GetAuxData((FEventDataInfo *)param_3->EventData,uVar12);
            if (pFVar9 == (FAuxData *)0x0) {
              local_18 = (uchar *)0x0;
              uVar21 = 0;
            }
            else {
              local_18 = pFVar9->Data;
              uVar21 = pFVar9->DataSize;
            }
          }
          break;
        }
        puVar19 = puVar19 + 1;
        puVar16 = (uchar *)(ulonglong)(uVar12 + 1);
        pFVar5 = pFVar5 + 1;
      } while ((longlong)puVar19 < (longlong)(ulonglong)pFVar3->FieldCount);
    }
    FThreads::SetGroupName(&this->State->Threads,(char *)local_18,uVar21);
    return true;
  case 6:
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
              (&(this->State->Threads).GroupName,0,Default);
  }
  return true;
}

// OnNewTrace @ 14d3a3ff0

void __thiscall UE::Trace::FTraceAnalyzer::OnNewTrace(FTraceAnalyzer *this,FOnEventContext *param_1)

{
  FSerial *pFVar1;
  FAnalysisState *pFVar2;
  FEventData *this_00;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  char *pcVar8;
  ulonglong uVar9;
  double *pdVar10;
  int iVar11;
  ulonglong uVar12;
  
  pFVar2 = this->State;
  this_00 = param_1->EventData;
  uVar6 = (pFVar2->Serial).Mask;
  uVar5 = IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"Serial",0);
  pcVar8 = "FeatureSet";
  bVar7 = 0x46;
  (pFVar2->Serial).Value = uVar5 - (uVar6 + 1 >> 1) & uVar6 | 0xc0000000;
  uVar6 = 0x811c9dc5;
  puVar3 = *(uint **)(this_00 + 8);
  do {
    pcVar8 = pcVar8 + 1;
    uVar6 = (bVar7 ^ uVar6) * 0x1000193;
    bVar7 = *pcVar8;
  } while (bVar7 != 0);
  uVar9 = 0;
  uVar12 = uVar9;
  puVar4 = puVar3;
  if ((ulonglong)*(byte *)((longlong)puVar3 + 6) != 0) {
    do {
      iVar11 = (int)uVar12;
      if (puVar4[4] == uVar6) {
        if (-1 < iVar11) {
          pdVar10 = (double *)
                    ((ulonglong)(ushort)puVar3[(longlong)iVar11 * 4 + 5] + *(longlong *)this_00);
          if (pdVar10 != (double *)0x0) {
            switch(*(undefined1 *)((longlong)puVar3 + (longlong)iVar11 * 0x10 + 0x1a)) {
            case 1:
            case 2:
            case 4:
            case 8:
              uVar6 = (uint)*(byte *)pdVar10;
              break;
            case 0xf8:
              uVar6 = (uint)*pdVar10;
              break;
            default:
              uVar6 = 0;
              break;
            case 0xfc:
              uVar6 = (uint)*(float *)pdVar10;
            }
            if ((uVar6 & 1) != 0) goto LAB_14d3a40f2;
          }
        }
        break;
      }
      uVar9 = uVar9 + 1;
      uVar12 = (ulonglong)(iVar11 + 1);
      puVar4 = puVar4 + 4;
    } while ((longlong)uVar9 < (longlong)(ulonglong)*(byte *)((longlong)puVar3 + 6));
  }
  pFVar1 = &this->State->Serial;
  pFVar1->Value = pFVar1->Value & 0xbfffffff;
LAB_14d3a40f2:
  uVar6 = IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"UserUidBias",1);
  this->State->UserUidBias = uVar6;
  OnTiming(this,param_1);
  return;
}

// OnSerialSync @ 14d3a4370

void __thiscall
UE::Trace::FTraceAnalyzer::OnSerialSync(FTraceAnalyzer *this,FOnEventContext *param_1)

{
  FSerial *pFVar1;
  
  pFVar1 = &this->State->Serial;
  pFVar1->Value = pFVar1->Value & 0xbfffffff;
  return;
}

// OnThreadGroupBegin @ 14d3a4390

void __thiscall
UE::Trace::FTraceAnalyzer::OnThreadGroupBegin(FTraceAnalyzer *this,FOnEventContext *param_1)

{
  FDispatch *pFVar1;
  FDispatch *pFVar2;
  uint uVar3;
  FAuxData *pFVar4;
  byte bVar5;
  uint uVar6;
  uchar *puVar7;
  byte *pbVar8;
  uchar *puVar9;
  uint uVar10;
  uint uVar11;
  uchar *local_18;
  
  pbVar8 = &s_Name;
  local_18 = (uchar *)0x0;
  uVar10 = 0;
  uVar3 = 0x811c9dc5;
  bVar5 = 0x4e;
  pFVar1 = ((FEventDataInfo *)param_1->EventData)->Dispatch;
  do {
    pbVar8 = pbVar8 + 1;
    uVar3 = (bVar5 ^ uVar3) * 0x1000193;
    bVar5 = *pbVar8;
  } while (bVar5 != 0);
  puVar7 = local_18;
  puVar9 = local_18;
  pFVar2 = pFVar1;
  uVar11 = 0;
  if ((ulonglong)pFVar1->FieldCount != 0) {
    do {
      uVar6 = (uint)puVar7;
      uVar11 = uVar10;
      if (pFVar2[1].Hash == uVar3) {
        if (((-1 < (int)uVar6) &&
            (local_18 = (uchar *)0x0,
            (pFVar1[(longlong)(int)uVar6 + 1].LoggerNameOffset & 0x7f00) == 0x800)) &&
           ((char)pFVar1[(longlong)(int)uVar6 + 1].LoggerNameOffset == '\x01')) {
          pFVar4 = FEventDataInfo::GetAuxData((FEventDataInfo *)param_1->EventData,uVar6);
          if (pFVar4 == (FAuxData *)0x0) {
            local_18 = (uchar *)0x0;
            uVar11 = 0;
          }
          else {
            local_18 = pFVar4->Data;
            uVar11 = pFVar4->DataSize;
          }
        }
        break;
      }
      puVar9 = puVar9 + 1;
      puVar7 = (uchar *)(ulonglong)(uVar6 + 1);
      pFVar2 = pFVar2 + 1;
    } while ((longlong)puVar9 < (longlong)(ulonglong)pFVar1->FieldCount);
  }
  FThreads::SetGroupName(&this->State->Threads,(char *)local_18,uVar11);
  return;
}

// OnThreadGroupEnd @ 14d3a4490

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Trace::FTraceAnalyzer::OnThreadGroupEnd(FTraceAnalyzer *this)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
            (&(this->State->Threads).GroupName,0,Default);
  return;
}

// OnThreadInfoInternal @ 14d3a45b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Trace::FTraceAnalyzer::OnThreadInfoInternal(FTraceAnalyzer *this,FOnEventContext *param_1)

{
  int *piVar1;
  FEventDataInfo *this_00;
  FDispatch *pFVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  FDispatch *pFVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  float fVar8;
  FInfo *pFVar9;
  FAuxData *pFVar10;
  byte *pbVar11;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar14;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *_Src_00;
  char *pcVar15;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar16;
  double *pdVar17;
  int iVar18;
  float fVar19;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar20;
  undefined4 local_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  this_00 = (FEventDataInfo *)param_1->EventData;
  uVar7 = IAnalyzer::FEventData::GetValue<unsigned_int>((FEventData *)this_00,"ThreadId",0xffffffff)
  ;
  if (uVar7 == 0xffffffff) {
    uVar7 = (this->State->Threads).LastGetInfoId;
  }
  pFVar9 = FThreads::GetInfo(&this->State->Threads,uVar7);
  if (pFVar9 != (FInfo *)0x0) {
    uVar7 = IAnalyzer::FEventData::GetValue<unsigned_int>((FEventData *)this_00,"SystemId",0);
    pFVar9->SystemId = uVar7;
    pcVar15 = "SortHint";
    pFVar2 = this_00->Dispatch;
    uVar13 = 0x811c9dc5;
    uVar7 = 0x811c9dc5;
    bVar5 = 0x53;
    do {
      pcVar15 = pcVar15 + 1;
      uVar7 = (bVar5 ^ uVar7) * 0x1000193;
      bVar5 = *pcVar15;
    } while (bVar5 != 0);
    pTVar20 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0;
    fVar19 = 0.0;
    pTVar14 = pTVar20;
    pTVar12 = pTVar20;
    pFVar4 = pFVar2;
    if ((ulonglong)pFVar2->FieldCount != 0) {
      do {
        iVar18 = (int)pTVar12;
        if (pFVar4[1].Hash == uVar7) {
          if (-1 < iVar18) {
            pdVar17 = (double *)(this_00->Ptr + pFVar2[(longlong)iVar18 + 1].Uid);
            if (pdVar17 != (double *)0x0) {
              switch((char)pFVar2[(longlong)iVar18 + 1].LoggerNameOffset) {
              case '\x01':
                fVar8 = (float)(int)*(char *)pdVar17;
                goto LAB_14d3a4686;
              case '\x02':
                fVar8 = (float)(int)*(short *)pdVar17;
                goto LAB_14d3a4686;
              case '\x04':
              case '\b':
                fVar8 = *(float *)pdVar17;
                goto LAB_14d3a4686;
              case -8:
                fVar8 = (float)(int)*pdVar17;
                goto LAB_14d3a4686;
              case -4:
                fVar8 = (float)(int)*(float *)pdVar17;
                goto LAB_14d3a4686;
              }
            }
          }
          break;
        }
        pTVar14 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                  ((longlong)&(pTVar14->AllocatorInstance).Data + 1);
        pTVar12 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(ulonglong)(iVar18 + 1);
        pFVar4 = pFVar4 + 1;
      } while ((longlong)pTVar14 < (longlong)(ulonglong)pFVar2->FieldCount);
    }
    fVar8 = fVar19;
LAB_14d3a4686:
    pFVar9->SortHint = (int)fVar8;
    pbVar11 = &s_Name;
    pFVar2 = this_00->Dispatch;
    bVar5 = 0x4e;
    pTVar14 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0;
    do {
      pbVar11 = pbVar11 + 1;
      uVar13 = (bVar5 ^ uVar13) * 0x1000193;
      bVar5 = *pbVar11;
    } while (bVar5 != 0);
    pTVar12 = pTVar20;
    _Src_00 = pTVar20;
    pTVar16 = pTVar20;
    fStack_30 = fVar19;
    pFVar4 = pFVar2;
    if ((ulonglong)pFVar2->FieldCount != 0) {
      do {
        uVar7 = (uint)pTVar16;
        if (pFVar4[1].Hash == uVar13) {
          _Src_00 = pTVar14;
          if (((-1 < (int)uVar7) &&
              ((pFVar2[(longlong)(int)uVar7 + 1].LoggerNameOffset & 0x7f00) == 0x800)) &&
             ((char)pFVar2[(longlong)(int)uVar7 + 1].LoggerNameOffset == '\x01')) {
            pFVar10 = FEventDataInfo::GetAuxData(this_00,uVar7);
            if (pFVar10 == (FAuxData *)0x0) {
              local_38 = 0;
              uStack_34 = 0;
              fStack_30 = 0.0;
              local_28 = local_38;
              uStack_24 = uStack_34;
            }
            else {
              fStack_30 = (float)pFVar10->DataSize;
              local_28 = SUB84(pFVar10->Data,0);
              uStack_24 = (undefined4)((ulonglong)pFVar10->Data >> 0x20);
            }
            _Src_00 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                      CONCAT44(uStack_24,local_28);
          }
          break;
        }
        pTVar12 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                  ((longlong)&(pTVar12->AllocatorInstance).Data + 1);
        pTVar16 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(ulonglong)(uVar7 + 1);
        pFVar4 = pFVar4 + 1;
      } while ((longlong)pTVar12 < (longlong)(ulonglong)pFVar2->FieldCount);
    }
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&pFVar9->Name,(int)fStack_30 + 1,Default);
    if ((int)fStack_30 < (pFVar9->Name).ArrayNum) {
      fVar19 = (float)(~(uint)fStack_30 >> 0x1f);
    }
    if ((fVar19 == 0.0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (pFVar9->Name).AllocatorInstance.Data[(int)fStack_30] = (FScriptContainerElement)0x0;
    memcpy((pFVar9->Name).AllocatorInstance.Data,_Src_00,(longlong)(int)fStack_30);
    if ((pFVar9->GroupName).ArrayNum < 1) {
      pTVar14 = &(this->State->Threads).GroupName;
      if ((this->State->Threads).GroupName.ArrayNum < 1) {
        pTVar14 = pTVar20;
      }
      if ((pTVar14 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) &&
         (pTVar12 = &pFVar9->GroupName, pTVar12 != pTVar14)) {
        iVar18 = pTVar14->ArrayNum;
        piVar1 = &(pFVar9->GroupName).ArrayMax;
        _Src = (pTVar14->AllocatorInstance).Data;
        (pFVar9->GroupName).ArrayNum = iVar18;
        if ((iVar18 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar18,*piVar1,&pTVar12->AllocatorInstance,iVar18,piVar1);
          if (iVar18 != 0) {
            memcpy((pTVar12->AllocatorInstance).Data,_Src,(longlong)iVar18);
          }
        }
      }
    }
    (**(code **)((longlong)*this->ThreadInfoCallback + 8))(this->ThreadInfoCallback,pFVar9);
  }
  return;
}

// OnThreadTiming @ 14d3a4920

void __thiscall
UE::Trace::FTraceAnalyzer::OnThreadTiming(FTraceAnalyzer *this,FOnEventContext *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  ulong64 uVar4;
  FInfo *pFVar5;
  void *pvVar6;
  byte bVar7;
  ulong64 uVar8;
  int iVar9;
  char *pcVar10;
  ulonglong uVar11;
  
  pcVar10 = "BaseTimestamp";
  uVar3 = 0x811c9dc5;
  bVar7 = 0x42;
  puVar1 = *(uint **)(param_1->EventData + 8);
  do {
    pcVar10 = pcVar10 + 1;
    uVar3 = (bVar7 ^ uVar3) * 0x1000193;
    bVar7 = *pcVar10;
  } while (bVar7 != 0);
  uVar4 = 0;
  uVar8 = uVar4;
  uVar11 = uVar4;
  puVar2 = puVar1;
  if ((ulonglong)*(byte *)((longlong)puVar1 + 6) != 0) {
    do {
      iVar9 = (int)uVar11;
      if (puVar2[4] == uVar3) {
        if (-1 < iVar9) {
          pvVar6 = (void *)((ulonglong)(ushort)puVar1[(longlong)iVar9 * 4 + 5] +
                           *(longlong *)param_1->EventData);
          uVar4 = 0;
          if (pvVar6 != (void *)0x0) {
            uVar4 = IAnalyzer::CoerceValue<unsigned___int64>
                              (pvVar6,*(schar *)((longlong)puVar1 + (longlong)iVar9 * 0x10 + 0x1a));
          }
        }
        break;
      }
      uVar8 = uVar8 + 1;
      uVar11 = (ulonglong)(iVar9 + 1);
      puVar2 = puVar2 + 4;
    } while ((longlong)uVar8 < (longlong)(ulonglong)*(byte *)((longlong)puVar1 + 6));
  }
  pFVar5 = FThreads::GetInfo(&this->State->Threads,(this->State->Threads).LastGetInfoId);
  if (pFVar5 != (FInfo *)0x0) {
    pFVar5->PrevTimestamp = uVar4;
    (**(code **)((longlong)*this->ThreadInfoCallback + 8))(this->ThreadInfoCallback,pFVar5);
  }
  return;
}

// OnTiming @ 14d3a49f0

void __thiscall UE::Trace::FTraceAnalyzer::OnTiming(FTraceAnalyzer *this,FOnEventContext *param_1)

{
  FEventData *pFVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  byte bVar8;
  ulong64 uVar9;
  void *pvVar10;
  char *pcVar11;
  ulong64 uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  pFVar1 = param_1->EventData;
  uVar13 = 0x811c9dc5;
  pcVar11 = "StartCycle";
  uVar5 = 0x811c9dc5;
  uVar4 = 0x811c9dc5;
  puVar2 = *(uint **)(pFVar1 + 8);
  uVar16 = 0x53;
  do {
    pcVar11 = pcVar11 + 1;
    uVar4 = (uVar16 ^ uVar4) * 0x1000193;
    uVar16 = (uint)(byte)*pcVar11;
  } while (*pcVar11 != 0);
  uVar14 = (ulonglong)*(byte *)((longlong)puVar2 + 6);
  uVar9 = 0;
  uVar12 = uVar9;
  uVar15 = uVar9;
  uVar6 = uVar9;
  puVar3 = puVar2;
  if (uVar14 != 0) {
    do {
      iVar17 = (int)uVar15;
      if (puVar3[4] == uVar4) {
        if (-1 < iVar17) {
          pvVar10 = (void *)((ulonglong)(ushort)puVar2[(longlong)iVar17 * 4 + 5] +
                            *(longlong *)pFVar1);
          if (pvVar10 != (void *)0x0) {
            uVar6 = IAnalyzer::CoerceValue<unsigned___int64>
                              (pvVar10,*(schar *)((longlong)puVar2 + (longlong)iVar17 * 0x10 + 0x1a)
                              );
          }
        }
        break;
      }
      uVar12 = uVar12 + 1;
      uVar15 = (ulonglong)(iVar17 + 1);
      puVar3 = puVar3 + 4;
    } while ((longlong)uVar12 < (longlong)uVar14);
  }
  pcVar11 = "CycleFrequency";
  bVar8 = 0x43;
  do {
    pcVar11 = pcVar11 + 1;
    uVar5 = (bVar8 ^ uVar5) * 0x1000193;
    bVar8 = *pcVar11;
  } while (bVar8 != 0);
  uVar12 = uVar9;
  uVar7 = uVar9;
  uVar15 = uVar9;
  puVar3 = puVar2;
  if (uVar14 != 0) {
    do {
      iVar17 = (int)uVar15;
      if (puVar3[4] == uVar5) {
        if (-1 < iVar17) {
          pvVar10 = (void *)((ulonglong)(ushort)puVar2[(longlong)iVar17 * 4 + 5] +
                            *(longlong *)pFVar1);
          if (pvVar10 != (void *)0x0) {
            uVar7 = IAnalyzer::CoerceValue<unsigned___int64>
                              (pvVar10,*(schar *)((longlong)puVar2 + (longlong)iVar17 * 0x10 + 0x1a)
                              );
          }
        }
        break;
      }
      uVar12 = uVar12 + 1;
      uVar15 = (ulonglong)(iVar17 + 1);
      puVar3 = puVar3 + 4;
    } while ((longlong)uVar12 < (longlong)uVar14);
  }
  pcVar11 = "StartDateTime";
  bVar8 = 0x53;
  do {
    pcVar11 = pcVar11 + 1;
    uVar13 = (bVar8 ^ uVar13) * 0x1000193;
    bVar8 = *pcVar11;
  } while (bVar8 != 0);
  uVar15 = uVar9;
  puVar3 = puVar2;
  if (uVar14 != 0) {
    do {
      iVar17 = (int)uVar15;
      if (puVar3[4] == uVar13) {
        if (-1 < iVar17) {
          pvVar10 = (void *)((ulonglong)(ushort)puVar2[(longlong)iVar17 * 4 + 5] +
                            *(longlong *)pFVar1);
          if (pvVar10 != (void *)0x0) {
            dVar18 = IAnalyzer::CoerceValue<double>
                               (pvVar10,*(schar *)((longlong)puVar2 + (longlong)iVar17 * 0x10 + 0x1a
                                                  ));
            uVar19 = SUB84(dVar18,0);
            uVar20 = (undefined4)((ulonglong)dVar18 >> 0x20);
            goto LAB_14d3a4b1b;
          }
        }
        break;
      }
      uVar9 = uVar9 + 1;
      uVar15 = (ulonglong)(iVar17 + 1);
      puVar3 = puVar3 + 4;
    } while ((longlong)uVar9 < (longlong)uVar14);
  }
  uVar19 = 0;
  uVar20 = 0;
LAB_14d3a4b1b:
  (this->State->Timing).BaseTimestamp = uVar6;
  (this->State->Timing).TimestampHz = uVar7;
  (this->State->Timing).InvTimestampHz = __real_3ff0000000000000 / (double)uVar7;
  (this->State->Timing).BaseDateTimestamp = (double)CONCAT44(uVar20,uVar19);
  return;
}

