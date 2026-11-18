// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 4

// FProtocol4Stage @ 14d38fb10

FProtocol4Stage * __thiscall
UE::Trace::FProtocol4Stage::FProtocol4Stage(FProtocol4Stage *this,uint param_1,FTransport *param_2)

{
  FProtocol2Stage::FProtocol2Stage((FProtocol2Stage *)this,param_1,param_2);
  *(undefined ***)this = &___7FProtocol4Stage_Trace_UE__6B_;
  return this;
}

// OnData @ 14d3a2100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

int __thiscall
UE::Trace::FProtocol4Stage::OnData
          (FProtocol4Stage *this,FStreamReader *param_1,FAnalysisBridge *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  FDispatch *pFVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  ForElementType<UE::Trace::FAuxData> FVar12;
  ForElementType<UE::Trace::FAuxData> FVar13;
  uchar *puVar14;
  undefined1 auStackY_138 [32];
  undefined1 local_108;
  undefined1 local_107 [7];
  FProtocol2Stage *local_100;
  FEventDataInfo local_f8;
  undefined1 local_d8 [128];
  ForElementType<UE::Trace::FAuxData> local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_100 = (FProtocol2Stage *)this;
  while( true ) {
    uVar6 = param_1->Cursor;
    if (param_1->End < uVar6 + 1) {
      uVar6 = 1;
      goto LAB_14d3a24cb;
    }
    puVar9 = (ushort *)(param_1->Buffer + uVar6);
    if (puVar9 == (ushort *)0x0) {
      return -1;
    }
    uVar10 = (uint)(byte)*puVar9;
    uVar11 = ((byte)*puVar9 & 1) + 1;
    if ((1 < uVar11) && (param_1->End < uVar6 + uVar11)) break;
    if ((uVar11 != 1) && (uVar10 = 0xffffffff, uVar11 == 2)) {
      uVar10 = (uint)*puVar9;
    }
    uVar10 = uVar10 >> 1;
    if (uVar10 < (param_2->State).UserUidBias) {
      param_1->Cursor = uVar6 + uVar11;
      iVar4 = OnDataKnown((FProtocol4Stage *)local_100,uVar10,param_1,param_2);
      if (iVar4 == 0) {
        param_1->Cursor = uVar6;
        if (param_1->End < uVar6) {
          param_1->Cursor = param_1->End;
        }
        return -1;
      }
    }
    else {
      pFVar7 = FTypeRegistry::Get(&local_100->TypeRegistry,uVar10);
      if (pFVar7 == (FDispatch *)0x0) {
        return -1;
      }
      if (uVar11 != 2) {
        bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<401518075683278032>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\Engine.cpp"
                           ,0xcd0,"UidBytes == 2");
        if (!bVar3) {
          return -1;
        }
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      uVar10 = param_1->Cursor;
      uVar1 = param_1->End;
      if (uVar1 < uVar10 + 4) {
        uVar6 = 4;
LAB_14d3a24cb:
        if (uVar6 < param_1->DemandHint) {
          uVar6 = param_1->DemandHint;
        }
        param_1->DemandHint = uVar6;
        return -1;
      }
      puVar14 = param_1->Buffer + uVar10;
      if (puVar14 == (uchar *)0x0) {
        return -1;
      }
      if ((pFVar7->Flags & 4) == 0) {
        if (uVar1 < uVar10 + 7) {
          uVar6 = 7;
          goto LAB_14d3a24cb;
        }
        if ((uint)*(uint3 *)(puVar14 + 4) !=
            ((param_2->State).Serial.Mask & (param_2->State).Serial.Value)) {
          return (uint)*(uint3 *)(puVar14 + 4);
        }
        uVar11 = *(ushort *)(puVar14 + 2) + 7;
      }
      else {
        uVar11 = *(ushort *)(puVar14 + 2) + 4;
      }
      uVar10 = uVar10 + uVar11;
      if (uVar1 < uVar10) break;
      param_1->Cursor = uVar10;
      local_58 = (ForElementType<UE::Trace::FAuxData>)0x0;
      local_50 = 0;
      local_4c = 8;
      if ((pFVar7->Flags & 2) != 0) {
        if ((pFVar7->Flags & 1) != 0) {
          param_1->Cursor = uVar6;
          uVar8 = uVar6;
          if (uVar1 < uVar6) {
            param_1->Cursor = uVar1;
            uVar8 = uVar1;
          }
          param_1->Cursor = uVar8 + 4 + (uint)pFVar7->EventSize;
        }
        iVar5 = FProtocol2Stage::OnDataAux(local_100,param_1,(FAuxDataCollector *)local_d8);
        iVar4 = local_50;
        if (iVar5 == 0) {
          param_1->Cursor = uVar6;
          if (param_1->End < uVar6) {
            param_1->Cursor = param_1->End;
          }
          FVar12 = (ForElementType<UE::Trace::FAuxData>)local_d8;
          if (local_58 != (ForElementType<UE::Trace::FAuxData>)0x0) {
            FVar12 = local_58;
          }
          FVar13 = (ForElementType<UE::Trace::FAuxData>)
                   ((longlong)local_50 * 0x10 + (longlong)FVar12);
          while( true ) {
            if (local_50 != iVar4) {
              `TCheckedPointerIterator<UE::Trace::FAuxData,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_107);
            }
            if (FVar12 == FVar13) break;
            if ((*(byte *)((longlong)FVar12 + 0xf) & 4) != 0) {
              FMemory::Free(*(void **)FVar12);
            }
            FVar12 = (ForElementType<UE::Trace::FAuxData>)((longlong)FVar12 + 0x10);
          }
          local_50 = 0;
          if ((local_4c < 0) && (local_4c != 0)) {
            Core::Private::
            ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Trace::FAuxData>_>
                      (0x10,8,0,(ForElementType<UE::Trace::FAuxData> *)local_d8,0,&local_4c);
          }
          if (local_58 == (ForElementType<UE::Trace::FAuxData>)0x0) {
            return -1;
          }
          FMemory::Free((void *)local_58);
          return -1;
        }
        if ((pFVar7->Flags & 1) != 0) {
          param_1->Cursor = uVar10;
          if (param_1->End < uVar10) {
            param_1->Cursor = param_1->End;
          }
        }
      }
      if ((pFVar7->Flags & 4) == 0) {
        (param_2->State).Serial.Value = (param_2->State).Serial.Value + 1 & 0x7fffffff;
      }
      local_f8.AuxCollector = (FAuxDataCollector *)local_d8;
      local_f8.Ptr = puVar14 + ((ulonglong)uVar11 - (ulonglong)*(ushort *)(puVar14 + 2));
      local_f8.Size = *(ushort *)(puVar14 + 2);
      local_f8.Dispatch = pFVar7;
      FAnalysisBridge::OnEvent(param_2,&local_f8);
      iVar4 = local_50;
      FVar12 = (ForElementType<UE::Trace::FAuxData>)local_d8;
      if (local_58 != (ForElementType<UE::Trace::FAuxData>)0x0) {
        FVar12 = local_58;
      }
      FVar13 = (ForElementType<UE::Trace::FAuxData>)((longlong)local_50 * 0x10 + (longlong)FVar12);
      while( true ) {
        if (local_50 != iVar4) {
          local_108 = 0;
          `TCheckedPointerIterator<UE::Trace::FAuxData,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_108);
        }
        if (FVar12 == FVar13) break;
        if ((*(byte *)((longlong)FVar12 + 0xf) & 4) != 0) {
          FMemory::Free(*(void **)FVar12);
        }
        FVar12 = (ForElementType<UE::Trace::FAuxData>)((longlong)FVar12 + 0x10);
      }
      local_50 = 0;
      if ((local_4c < 0) && (local_4c != 0)) {
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Trace::FAuxData>_>
                  (0x10,8,0,(ForElementType<UE::Trace::FAuxData> *)local_d8,0,&local_4c);
      }
      if (local_58 != (ForElementType<UE::Trace::FAuxData>)0x0) {
        FMemory::Free((void *)local_58);
      }
    }
  }
  if (uVar11 < param_1->DemandHint) {
    uVar11 = param_1->DemandHint;
  }
  param_1->DemandHint = uVar11;
  return -1;
}

// OnDataImpl @ 14d3a2a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::Trace::FProtocol4Stage::OnDataImpl
          (FProtocol4Stage *this,FStreamReader *param_1,FAnalysisBridge *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  FDispatch *pFVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  ForElementType<UE::Trace::FAuxData> FVar11;
  uint uVar12;
  ForElementType<UE::Trace::FAuxData> FVar13;
  uchar *puVar14;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  FProtocol2Stage *local_100;
  FEventDataInfo local_f8;
  undefined1 local_d8 [128];
  ForElementType<UE::Trace::FAuxData> local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar4 = param_1->Cursor;
  iVar5 = 1;
  if (param_1->End < uVar4 + 1) {
    uVar4 = 1;
    if (1 < param_1->DemandHint) {
      uVar4 = param_1->DemandHint;
    }
    param_1->DemandHint = uVar4;
    return 1;
  }
  puVar9 = (ushort *)(param_1->Buffer + uVar4);
  if (puVar9 == (ushort *)0x0) {
    return 1;
  }
  uVar10 = (uint)(byte)*puVar9;
  uVar12 = ((byte)*puVar9 & 1) + 1;
  if ((1 < uVar12) && (param_1->End < uVar4 + uVar12)) {
LAB_14d3a2c13:
    if (uVar12 < param_1->DemandHint) {
      uVar12 = param_1->DemandHint;
    }
    param_1->DemandHint = uVar12;
    return 1;
  }
  if ((uVar12 != 1) && (uVar10 = 0xffffffff, uVar12 == 2)) {
    uVar10 = (uint)*puVar9;
  }
  uVar10 = uVar10 >> 1;
  local_100 = (FProtocol2Stage *)this;
  if (uVar10 < (param_2->State).UserUidBias) {
    param_1->Cursor = uVar4 + uVar12;
    iVar5 = OnDataKnown(this,uVar10,param_1,param_2);
    if (iVar5 != 0) {
      return 0;
    }
    param_1->Cursor = uVar4;
    if (uVar4 <= param_1->End) {
      return 1;
    }
    param_1->Cursor = param_1->End;
    return 1;
  }
  pFVar7 = FTypeRegistry::Get((FTypeRegistry *)&this->field_0x8,uVar10);
  if (pFVar7 == (FDispatch *)0x0) {
    return 1;
  }
  if (uVar12 != 2) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<401518075683278032>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\Engine.cpp"
                       ,0xcd0,"UidBytes == 2");
    if (!bVar3) {
      return 1;
    }
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  uVar10 = param_1->Cursor;
  uVar1 = param_1->End;
  if (uVar1 < uVar10 + 4) {
    uVar4 = 4;
    if (4 < param_1->DemandHint) {
      uVar4 = param_1->DemandHint;
    }
    param_1->DemandHint = uVar4;
    return 1;
  }
  puVar14 = param_1->Buffer + uVar10;
  if (puVar14 == (uchar *)0x0) {
    return 1;
  }
  if ((pFVar7->Flags & 4) == 0) {
    if (uVar1 < uVar10 + 7) {
      uVar4 = 7;
      if (7 < param_1->DemandHint) {
        uVar4 = param_1->DemandHint;
      }
      param_1->DemandHint = uVar4;
      return 1;
    }
    if ((uint)*(uint3 *)(puVar14 + 4) !=
        ((param_2->State).Serial.Mask & (param_2->State).Serial.Value)) {
      return ~(uint)*(uint3 *)(puVar14 + 4);
    }
    uVar12 = *(ushort *)(puVar14 + 2) + 7;
  }
  else {
    uVar12 = *(ushort *)(puVar14 + 2) + 4;
  }
  uVar10 = uVar10 + uVar12;
  if (uVar1 < uVar10) goto LAB_14d3a2c13;
  param_1->Cursor = uVar10;
  local_58 = (ForElementType<UE::Trace::FAuxData>)0x0;
  local_50 = 0;
  local_4c = 8;
  if ((pFVar7->Flags & 2) != 0) {
    if ((pFVar7->Flags & 1) != 0) {
      param_1->Cursor = uVar4;
      uVar8 = uVar4;
      if (uVar1 < uVar4) {
        param_1->Cursor = uVar1;
        uVar8 = uVar1;
      }
      param_1->Cursor = uVar8 + 4 + (uint)pFVar7->EventSize;
    }
    iVar6 = FProtocol2Stage::OnDataAux(local_100,param_1,(FAuxDataCollector *)local_d8);
    if (iVar6 == 0) {
      param_1->Cursor = uVar4;
      if (param_1->End < uVar4) {
        param_1->Cursor = param_1->End;
      }
      goto LAB_14d3a2cfa;
    }
    if ((pFVar7->Flags & 1) != 0) {
      param_1->Cursor = uVar10;
      if (param_1->End < uVar10) {
        param_1->Cursor = param_1->End;
      }
    }
  }
  if ((pFVar7->Flags & 4) == 0) {
    (param_2->State).Serial.Value = (param_2->State).Serial.Value + 1 & 0x7fffffff;
  }
  local_f8.AuxCollector = (FAuxDataCollector *)local_d8;
  local_f8.Ptr = puVar14 + ((ulonglong)uVar12 - (ulonglong)*(ushort *)(puVar14 + 2));
  local_f8.Size = *(ushort *)(puVar14 + 2);
  local_f8.Dispatch = pFVar7;
  FAnalysisBridge::OnEvent(param_2,&local_f8);
  iVar5 = 0;
LAB_14d3a2cfa:
  iVar6 = local_50;
  FVar11 = (ForElementType<UE::Trace::FAuxData>)local_d8;
  if (local_58 != (ForElementType<UE::Trace::FAuxData>)0x0) {
    FVar11 = local_58;
  }
  FVar13 = (ForElementType<UE::Trace::FAuxData>)((longlong)local_50 * 0x10 + (longlong)FVar11);
  while( true ) {
    if (local_50 != iVar6) {
      `TCheckedPointerIterator<UE::Trace::FAuxData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_108);
    }
    if (FVar11 == FVar13) break;
    if ((*(byte *)((longlong)FVar11 + 0xf) & 4) != 0) {
      FMemory::Free(*(void **)FVar11);
    }
    FVar11 = (ForElementType<UE::Trace::FAuxData>)((longlong)FVar11 + 0x10);
  }
  local_50 = 0;
  if ((local_4c < 0) && (local_4c != 0)) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Trace::FAuxData>_>
              (0x10,8,0,(ForElementType<UE::Trace::FAuxData> *)local_d8,0,&local_4c);
  }
  if (local_58 != (ForElementType<UE::Trace::FAuxData>)0x0) {
    FMemory::Free((void *)local_58);
  }
  return iVar5;
}

// OnDataKnown @ 14d3a2f20

int __thiscall
UE::Trace::FProtocol4Stage::OnDataKnown
          (FProtocol4Stage *this,uint param_1,FStreamReader *param_2,FAnalysisBridge *param_3)

{
  long64 *plVar1;
  FInfo *pFVar2;
  FDispatch *pFVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  
  if (param_1 == 0) {
    uVar4 = param_2->Cursor;
    if (param_2->End < uVar4 + 2) {
      uVar4 = 2;
      if (2 < param_2->DemandHint) {
        uVar4 = param_2->DemandHint;
      }
      param_2->DemandHint = uVar4;
      return 0;
    }
    puVar6 = (ushort *)(param_2->Buffer + uVar4);
    if (puVar6 == (ushort *)0x0) {
      return 0;
    }
    uVar5 = *puVar6 + 2;
    if (uVar5 + uVar4 <= param_2->End) {
      pFVar3 = FTypeRegistry::AddVersion4((FTypeRegistry *)&this->field_0x8,puVar6 + 1);
      FAnalyzerHub::OnNewType(&param_3->AnalyzerHub,pFVar3);
      param_2->Cursor = param_2->Cursor + *puVar6 + 2;
      return 1;
    }
    if (uVar5 < param_2->DemandHint) {
      uVar5 = param_2->DemandHint;
    }
    param_2->DemandHint = uVar5;
    return 0;
  }
  if (param_1 == 1) {
    FAnalysisBridge::EnterScope(param_3);
    return 1;
  }
  if (param_1 == 2) {
    if (param_2->Cursor + 7 <= param_2->End) {
      if (param_2->Buffer + param_2->Cursor == (uchar *)0x0) {
        return 0;
      }
      FAnalysisBridge::EnterScope
                (param_3,*(ulonglong *)(param_2->Buffer + param_2->Cursor + -1) >> 8);
      param_2->Cursor = param_2->Cursor + 7;
      return 1;
    }
  }
  else {
    if (param_1 == 3) {
      (param_3->State).Timing.EventTimestamp = 0;
      FAnalysisBridge::DispatchLeaveScope(param_3);
      return 1;
    }
    if (param_1 != 4) {
      return 0;
    }
    if (param_2->Cursor + 7 <= param_2->End) {
      if (param_2->Buffer + param_2->Cursor == (uchar *)0x0) {
        return 0;
      }
      pFVar2 = param_3->ThreadInfo;
      plVar1 = &pFVar2->PrevTimestamp;
      *plVar1 = *plVar1 + (*(ulonglong *)(param_2->Buffer + param_2->Cursor + -1) >> 8);
      (param_3->State).Timing.EventTimestamp = pFVar2->PrevTimestamp;
      FAnalysisBridge::DispatchLeaveScope(param_3);
      (param_3->State).Timing.EventTimestamp = 0;
      param_2->Cursor = param_2->Cursor + 7;
      return 1;
    }
  }
  uVar4 = 7;
  if (7 < param_2->DemandHint) {
    uVar4 = param_2->DemandHint;
  }
  param_2->DemandHint = uVar4;
  return 0;
}

