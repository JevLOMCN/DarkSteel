// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 12

// operator() @ 1425c3ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `FSlateTrace::WidgetInvalidated'::__l20::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  char *_Str;
  size_t sVar2;
  char *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStackY_c78 [32];
  undefined8 *local_c48;
  longlong local_c40;
  FProgramCounterSymbolInfo local_c38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c78;
  _Str = malloc(0xffff);
  uVar9 = 0;
  MemoryTrace_Alloc((ulong64)_Str,0xffff,0,0,0);
  if (_Str != (char *)0x0) {
    *_Str = '\0';
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&UE::Slate::Private::ModuleLoadLock);
  if (*(int *)((longlong)this + 0x208) != 0) {
    do {
      if ((1 < (uint)uVar9) && (*(longlong *)((longlong)this + uVar9 * 8 + 8) != 0)) {
        FProgramCounterSymbolInfo::FProgramCounterSymbolInfo(&local_c38);
        FWindowsPlatformStackWalk::ProgramCounterToSymbolInfo
                  (*(ulong64 *)((longlong)this + uVar9 * 8 + 8),&local_c38);
        FGenericPlatformStackWalk::SymbolInfoToHumanReadableString(&local_c38,_Str,0xffff);
        pcVar7 = "\r\n";
        sVar2 = strlen(_Str);
        iVar6 = (int)sVar2 + 1;
        if (iVar6 < 0xffff) {
          cVar5 = '\r';
          pcVar3 = _Str + (int)sVar2;
          do {
            *pcVar3 = cVar5;
            pcVar7 = pcVar7 + 1;
            cVar5 = *pcVar7;
            pcVar3 = pcVar3 + 1;
            iVar6 = iVar6 + 1;
            if (cVar5 == '\0') break;
          } while (iVar6 < 0xffff);
          *pcVar3 = '\0';
        }
      }
      uVar8 = (uint)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 < *(uint *)((longlong)this + 0x208));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&UE::Slate::Private::ModuleLoadLock);
  if (-1 < SlateChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FSlateTraceInvalidationCallstackFields>
              ((TLogScope<1> *)&local_c48);
    *local_c48 = *(undefined8 *)this;
    sVar2 = strlen(_Str);
    UE::Trace::Private::Field_WriteStringAnsi(1,_Str,(int)sVar2);
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0x20);
    **(undefined1 **)(lVar1 + 0x20) = 6;
    lVar4 = *(longlong *)(lVar1 + 0x20) + 1;
    *(longlong *)(lVar1 + 0x20) = lVar4;
    if (lVar1 != local_c40) {
      *(longlong *)(lVar1 + 0x28) = lVar4;
    }
    *(undefined8 *)(local_c40 + 0x28) = *(undefined8 *)(local_c40 + 0x20);
  }
  MemoryTrace_Free((ulong64)_Str,0,0);
  free(_Str);
  return;
}

// AddWidget @ 1425ca9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FSlateTrace::AddWidget(SWidget *param_1)

{
  LARGE_INTEGER LVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  SlateTraceDetail::GWidgetCount = SlateTraceDetail::GWidgetCount + 1;
  if (-1 < SlateChannel->Enabled) {
    if (param_1 == (SWidget *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InWidget",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Trace\\SlateTrace.cpp"
                         ,0x8b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LVar1 = (LARGE_INTEGER)param_1->UniqueIdentifier;
    if (-1 < SlateChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FSlateTraceAddWidgetFields>((TLogScope<0> *)&local_20);
      QueryPerformanceCounter(&local_28);
      *local_20 = local_28;
      local_20[1] = LVar1;
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
  }
  return;
}

// ApplicationRegisterTraceEvents @ 1425cac40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl FSlateTrace::ApplicationRegisterTraceEvents(FSlateApplicationBase *param_1)

{
  undefined1 local_res10 [24];
  
  TMulticastDelegateRegistration<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
  ::AddStatic<>(&FTraceAuxiliary::OnTraceStarted,
                (_func___cdecl_void_EConnectionType_FString_ptr *)local_res10);
  return;
}

// ApplicationTickAndDrawWidgets @ 1425cac70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FSlateTrace::ApplicationTickAndDrawWidgets(float param_1)

{
  FScriptContainerElement *pFVar1;
  LARGE_INTEGER LVar2;
  wchar_t wVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  longlong lVar6;
  atomic<int> aVar7;
  int iVar8;
  atomic<int> aVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  LARGE_INTEGER LVar12;
  TReferenceControllerBase<1> *pTVar13;
  uint uVar14;
  ulonglong uVar15;
  TReferenceControllerBase<1> *pTVar16;
  ForAnyElementType FVar17;
  FScriptContainerElement *pFVar18;
  bool bVar19;
  byte bVar20;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [8];
  LARGE_INTEGER local_70;
  int local_68;
  FString local_60;
  LARGE_INTEGER *local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (-1 < SlateChannel->Enabled) {
    SlateTraceDetail::FlushWidgetUpdateStepsBuffer();
    iVar8 = SlateTraceDetail::UpdateWidgetInfos.ArrayNum;
    uVar15 = (ulonglong)_tls_index;
    pFVar18 = SlateTraceDetail::UpdateWidgetInfos.AllocatorInstance.Data +
              (longlong)SlateTraceDetail::UpdateWidgetInfos.ArrayNum * 0x10;
    pTVar16 = (TReferenceControllerBase<1> *)0x0;
    FVar17 = SlateTraceDetail::UpdateWidgetInfos.AllocatorInstance;
    while( true ) {
      if (SlateTraceDetail::UpdateWidgetInfos.ArrayNum != iVar8) {
        `TCheckedPointerIterator<TWeakPtr<SWidget_const_,1>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_78);
      }
      uVar14 = 0;
      if (FVar17.Data == pFVar18) break;
      pTVar4 = *(TReferenceControllerBase<1> **)(FVar17.Data + 8);
      pTVar13 = pTVar4;
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_1425cad31:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        FVar17.Data = FVar17.Data + 0x10;
      }
      else {
        aVar7 = pTVar4->SharedReferenceCount;
        do {
          pTVar13 = pTVar16;
          if (aVar7 == (atomic<int>)0x0) goto LAB_1425cad31;
          LOCK();
          aVar9 = pTVar4->SharedReferenceCount;
          bVar19 = aVar7 == aVar9;
          if (bVar19) {
            pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
            aVar9 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar9;
        } while (!bVar19);
        pSVar5 = *(SWidget **)FVar17.Data;
        pTVar13 = pTVar4;
        if (pSVar5 == (SWidget *)0x0) goto LAB_1425cad31;
        LVar12 = (LARGE_INTEGER)pSVar5->UniqueIdentifier;
        FReflectionMetaData::GetWidgetPath(&local_60,pSVar5,true,false);
        FReflectionMetaData::GetWidgetDebugInfo((FString *)&local_70.s,pSVar5);
        bVar19 = FTraceAuxiliary::IsConnected();
        if (bVar19) {
          pSVar5->Debug_LastTraceInfoSent = TraceCounter;
        }
        if (-1 < SlateChannel->Enabled) {
          UE::Trace::Private::FLogScope::Enter<FSlateTraceWidgetInfoFields>
                    ((TLogScope<1> *)&local_50);
          local_50[1] = LVar12;
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_60.Data.ArrayNum != 0) {
            FVar11.Data = local_60.Data.AllocatorInstance.Data;
          }
          wVar3 = *(wchar_t *)FVar11.Data;
          pFVar1 = FVar11.Data;
          pTVar13 = pTVar16;
          while (wVar3 != L'\0') {
            pFVar1 = pFVar1 + 2;
            uVar14 = (int)pTVar13 + 1;
            pTVar13 = (TReferenceControllerBase<1> *)(ulonglong)uVar14;
            wVar3 = *(wchar_t *)pFVar1;
          }
          UE::Trace::Private::Field_WriteStringWide(2,(wchar_t *)FVar11.Data,uVar14);
          LVar12 = (LARGE_INTEGER)L"";
          if (local_68 != 0) {
            LVar12 = local_70;
          }
          wVar3 = *(wchar_t *)LVar12;
          LVar2 = LVar12;
          pTVar13 = pTVar16;
          while (wVar3 != L'\0') {
            LVar2.QuadPart = LVar2.QuadPart + 2;
            pTVar13 = (TReferenceControllerBase<1> *)(ulonglong)((int)pTVar13 + 1);
            wVar3 = *(wchar_t *)LVar2;
          }
          UE::Trace::Private::Field_WriteStringWide(3,(wchar_t *)LVar12,(int)pTVar13);
          lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8);
          if (*(char *)(lVar6 + 0x9d48) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar6 = *(longlong *)(lVar6 + 0x20);
          **(undefined1 **)(lVar6 + 0x20) = 6;
          lVar10 = *(longlong *)(lVar6 + 0x20) + 1;
          *(longlong *)(lVar6 + 0x20) = lVar10;
          if (lVar6 != local_48) {
            *(longlong *)(lVar6 + 0x28) = lVar10;
          }
          *(undefined8 *)(local_48 + 0x28) = *(undefined8 *)(local_48 + 0x20);
        }
        if ((wchar_t *)local_70.QuadPart != (wchar_t *)0x0) {
          FMemory::Free((void *)local_70);
        }
        pTVar13 = pTVar4;
        if (local_60.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
        goto LAB_1425cad31;
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        FVar17.Data = FVar17.Data + 0x10;
      }
    }
    DestructItems<TWeakPtr<SWidget_const_,1>,int>
              ((TWeakPtr<SWidget_const_,1> *)
               SlateTraceDetail::UpdateWidgetInfos.AllocatorInstance.Data,
               SlateTraceDetail::UpdateWidgetInfos.ArrayNum);
    SlateTraceDetail::UpdateWidgetInfos.ArrayNum = 0;
    if (SlateTraceDetail::UpdateWidgetInfos.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&SlateTraceDetail::UpdateWidgetInfos.AllocatorInstance,0,
                 &SlateTraceDetail::UpdateWidgetInfos.ArrayMax);
    }
    bVar20 = GSlateEnableGlobalInvalidation != false;
    if (GSlateFastWidgetPath != false) {
      bVar20 = bVar20 | 2;
    }
    if (-1 < SlateChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FSlateTraceApplicationTickAndDrawWidgetsFields>
                ((TLogScope<0> *)&local_50);
      QueryPerformanceCounter(&local_70);
      *local_50 = local_70;
      local_50[1] = (LARGE_INTEGER)(double)param_1;
      local_50[2].s.LowPart = SlateTraceDetail::GWidgetCount;
      *(uint *)((longlong)local_50 + 0x14) = SlateTraceDetail::GFrameTickCount;
      local_50[3].s.LowPart = SlateTraceDetail::GFrameTimerCount;
      *(uint *)((longlong)local_50 + 0x1c) = SlateTraceDetail::GFrameRepaintCount;
      local_50[4].s.LowPart = SlateTraceDetail::GFramePaintCount;
      *(uint *)((longlong)local_50 + 0x24) = SlateTraceDetail::GFrameInvalidateCount;
      local_50[5].s.LowPart = SlateTraceDetail::GFrameRootInvalidateCount;
      *(byte *)((longlong)local_50 + 0x2c) = bVar20;
      *(undefined8 *)(local_48 + 0x28) = *(undefined8 *)(local_48 + 0x20);
    }
    SlateTraceDetail::GFrameTickCount = 0;
    SlateTraceDetail::GFrameTimerCount = 0;
    SlateTraceDetail::GFrameRepaintCount = 0;
    SlateTraceDetail::GFramePaintCount = 0;
    SlateTraceDetail::GFrameInvalidateCount = 0;
    SlateTraceDetail::GFrameRootInvalidateCount = 0;
  }
  return;
}

// ConditionallyUpdateWidgetInfo @ 1425d2550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FSlateTrace::ConditionallyUpdateWidgetInfo(SWidget *param_1)

{
  ulong64 uVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  undefined1 auStack_68 [32];
  FString local_48;
  FString local_38;
  uchar *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (-1 < SlateChannel->Enabled) {
    bVar2 = FTraceAuxiliary::IsConnected();
    if (((bVar2) && (param_1 != (SWidget *)0x0)) &&
       (param_1->Debug_LastTraceInfoSent < TraceCounter)) {
      uVar1 = param_1->UniqueIdentifier;
      FReflectionMetaData::GetWidgetPath(&local_38,param_1,true,false);
      FReflectionMetaData::GetWidgetDebugInfo(&local_48,param_1);
      if (-1 < SlateChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FSlateTraceWidgetInfoFields>
                  ((TLogScope<1> *)&stack0xffffffffffffffd8);
        *(ulong64 *)(local_28 + 8) = uVar1;
        FVar3.Data = (FScriptContainerElement *)L"";
        if (local_38.Data.ArrayNum != 0) {
          FVar3.Data = local_38.Data.AllocatorInstance.Data;
        }
        FSlateTraceWidgetInfoFields::Path<wchar_t_const_*>
                  ((FSlateTraceWidgetInfoFields *)&stack0xffffffffffffffd8,(wchar_t *)FVar3.Data);
        FVar3.Data = (FScriptContainerElement *)L"";
        if (local_48.Data.ArrayNum != 0) {
          FVar3.Data = local_48.Data.AllocatorInstance.Data;
        }
        FSlateTraceWidgetInfoFields::DebugInfo<wchar_t_const_*>
                  ((FSlateTraceWidgetInfoFields *)&stack0xffffffffffffffd8,(wchar_t *)FVar3.Data);
        UE::Trace::Private::TLogScope<1>::operator+=
                  ((TLogScope<1> *)&stack0xffffffffffffffd8,(FLogScope *)&stack0xffffffffffffffd8);
      }
      param_1->Debug_LastTraceInfoSent = TraceCounter;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// HandleOnTraceStarted @ 1425e5c10

void __cdecl FSlateTrace::HandleOnTraceStarted(EConnectionType param_1,FString *param_2)

{
  TraceCounter = TraceCounter + '\x01';
  return;
}

// OutputWidgetUpdate @ 1425f1190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FSlateTrace::OutputWidgetUpdate
          (SWidget *param_1,ulong64 param_2,ulong64 param_3,EWidgetUpdateFlags param_4,uint param_5)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStack_48 [32];
  ulong64 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((param_4 & NeedsActiveTimerUpdate) == None) {
    if ((param_4 & NeedsTick) != None) {
      SlateTraceDetail::GFrameTickCount = SlateTraceDetail::GFrameTickCount + 1;
    }
  }
  else {
    SlateTraceDetail::GFrameTimerCount = SlateTraceDetail::GFrameTimerCount + 1;
  }
  if ((param_4 & (NeedsVolatilePaint|NeedsRepaint)) != None) {
    SlateTraceDetail::GFrameRepaintCount = SlateTraceDetail::GFrameRepaintCount + 1;
  }
  if (param_1 == (SWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Trace\\SlateTrace.cpp"
                       ,0x8b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = param_1->UniqueIdentifier;
  if (-1 < SlateChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FSlateTraceWidgetUpdatedFields>((TLogScope<0> *)&local_28);
    *local_28 = param_2;
    local_28[1] = param_3;
    local_28[2] = uVar1;
    *(uint *)(local_28 + 3) = param_5;
    *(EWidgetUpdateFlags *)((longlong)local_28 + 0x1c) = param_4;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// RemoveWidget @ 1425f91b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FSlateTrace::RemoveWidget(SWidget *param_1)

{
  LARGE_INTEGER LVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_58 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_58;
  if (-1 < SlateChannel->Enabled) {
    if (param_1 == (SWidget *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InWidget",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Trace\\SlateTrace.cpp"
                         ,0x8b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LVar1 = (LARGE_INTEGER)param_1->UniqueIdentifier;
    if (-1 < SlateChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FSlateTraceRemoveWidgetFields>((TLogScope<0> *)&local_20)
      ;
      QueryPerformanceCounter(&local_28);
      *local_20 = local_28;
      local_20[1] = LVar1;
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
    if (SlateTraceDetail::GWidgetCount != 0) {
      SlateTraceDetail::GWidgetCount = SlateTraceDetail::GWidgetCount - 1;
      return;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_96221999168224740>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Trace\\SlateTrace.cpp"
                       ,0x21c,"SlateTraceDetail::GWidgetCount > 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SlateTraceDetail::GWidgetCount = SlateTraceDetail::GWidgetCount - 1;
  return;
}

// RootChildOrderInvalidated @ 1425f9e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FSlateTrace::RootChildOrderInvalidated(SWidget *param_1,SWidget *param_2)

{
  LARGE_INTEGER LVar1;
  code *pcVar2;
  bool bVar3;
  LARGE_INTEGER LVar4;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < SlateChannel->Enabled) {
    ConditionallyUpdateWidgetInfo(param_1);
    SlateTraceDetail::GFrameInvalidateCount = SlateTraceDetail::GFrameInvalidateCount + 1;
    if ((param_1 == (SWidget *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InWidget",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Trace\\SlateTrace.cpp"
                           ,0x8b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    LVar1 = (LARGE_INTEGER)param_1->UniqueIdentifier;
    if (param_2 == (SWidget *)0x0) {
      LVar4.QuadPart = 0;
    }
    else {
      LVar4 = (LARGE_INTEGER)param_2->UniqueIdentifier;
    }
    if (-1 < SlateChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FSlateTraceRootChildOrderInvalidatedFields>
                ((TLogScope<0> *)&local_20);
      QueryPerformanceCounter(&local_28);
      *local_20 = local_28;
      local_20[1] = LVar1;
      local_20[2] = LVar4;
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
  }
  return;
}

// RootInvalidated @ 1425f9f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FSlateTrace::RootInvalidated(SWidget *param_1,SWidget *param_2)

{
  LARGE_INTEGER LVar1;
  code *pcVar2;
  bool bVar3;
  LARGE_INTEGER LVar4;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < SlateChannel->Enabled) {
    ConditionallyUpdateWidgetInfo(param_1);
    SlateTraceDetail::GFrameInvalidateCount = SlateTraceDetail::GFrameInvalidateCount + 1;
    if ((param_1 == (SWidget *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InWidget",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Trace\\SlateTrace.cpp"
                           ,0x8b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    LVar1 = (LARGE_INTEGER)param_1->UniqueIdentifier;
    if (param_2 == (SWidget *)0x0) {
      LVar4.QuadPart = 0;
    }
    else {
      LVar4 = (LARGE_INTEGER)param_2->UniqueIdentifier;
    }
    if (-1 < SlateChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FSlateTraceRootInvalidatedFields>
                ((TLogScope<0> *)&local_20);
      QueryPerformanceCounter(&local_28);
      *local_20 = local_28;
      local_20[1] = LVar1;
      local_20[2] = LVar4;
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
  }
  return;
}

// UpdateWidgetInfo @ 142605710

void __cdecl FSlateTrace::UpdateWidgetInfo(SWidget *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  TSharedRef<SWidget_const_,1> *pTVar4;
  longlong lVar5;
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<SWidget_const_,1> local_18;
  
  if ((-1 < SlateChannel->Enabled) && (param_1 != (SWidget *)0x0)) {
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_18);
    local_28 = pTVar4->Object;
    local_20 = (pTVar4->SharedReferenceCount).ReferenceController;
    if (local_20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_20->WeakReferenceCount = (atomic<int>)((int)local_20->WeakReferenceCount + 1);
      UNLOCK();
    }
    if (((SlateTraceDetail::UpdateWidgetInfos.AllocatorInstance.Data <=
          (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 <
         SlateTraceDetail::UpdateWidgetInfos.AllocatorInstance.Data +
         (longlong)SlateTraceDetail::UpdateWidgetInfos.ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (SlateTraceDetail::UpdateWidgetInfos.ArrayNum == SlateTraceDetail::UpdateWidgetInfos.ArrayMax
       ) {
      SlateTraceDetail::UpdateWidgetInfos.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&SlateTraceDetail::UpdateWidgetInfos.AllocatorInstance,
                      &SlateTraceDetail::UpdateWidgetInfos.ArrayMax);
    }
    FVar2.Data = SlateTraceDetail::UpdateWidgetInfos.AllocatorInstance.Data;
    lVar5 = (longlong)SlateTraceDetail::UpdateWidgetInfos.ArrayNum;
    SlateTraceDetail::UpdateWidgetInfos.ArrayNum = SlateTraceDetail::UpdateWidgetInfos.ArrayNum + 1;
    *(SWidget **)(SlateTraceDetail::UpdateWidgetInfos.AllocatorInstance.Data + lVar5 * 0x10) =
         local_28;
    *(TReferenceControllerBase<1> **)(FVar2.Data + lVar5 * 0x10 + 8) = local_20;
    local_20 = (TReferenceControllerBase<1> *)0x0;
    local_28 = (SWidget *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// WidgetInvalidated @ 142605b90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FSlateTrace::WidgetInvalidated(SWidget *param_1,SWidget *param_2,EInvalidateWidgetReason param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  wchar_t wVar3;
  LARGE_INTEGER LVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  LARGE_INTEGER LVar10;
  LARGE_INTEGER LVar11;
  FTaskBase *pFVar12;
  LARGE_INTEGER *pLVar13;
  bool bVar14;
  uint uVar15;
  FThreadHeartBeat *pFVar16;
  FGameThreadHitchHeartBeatThreaded *pFVar17;
  undefined8 *puVar18;
  FTaskBase *this;
  FTaskBase *pFVar19;
  wchar_t *pwVar20;
  LARGE_INTEGER *pLVar21;
  LARGE_INTEGER LVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  undefined1 auStackY_24c8 [32];
  LARGE_INTEGER local_2490 [2];
  undefined4 local_2480;
  LARGE_INTEGER local_2478;
  undefined8 auStack_2470 [64];
  uint local_2270;
  FLogScope local_2268;
  TStringBuilderBase<wchar_t> local_2258;
  wchar_t local_2238 [4096];
  wchar_t local_238 [256];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_24c8;
  if ((-1 < SlateChannel->Enabled) && (param_3 != None)) {
    ConditionallyUpdateWidgetInfo(param_1);
    SlateTraceDetail::GFrameInvalidateCount = SlateTraceDetail::GFrameInvalidateCount + 1;
    local_2258.Base = local_2238;
    local_2258.CurPos = local_2238;
    local_2258.bIsDynamic = false;
    local_2258.bIsExternal = false;
    local_2258.End = local_238;
    memset(local_238,0,0x200);
    LVar22.QuadPart = 0;
    uVar15 = 0;
    if ((param_2 == (SWidget *)0x0) && (uVar15 = 0, bCaptureRootInvalidationCallstacks != 0)) {
      pFVar16 = FThreadHeartBeat::GetNoInit();
      if (pFVar16 != (FThreadHeartBeat *)0x0) {
        FThreadHeartBeat::SuspendHeartBeat(pFVar16,false);
      }
      pFVar17 = FGameThreadHitchHeartBeatThreaded::Get();
      FGameThreadHitchHeartBeatThreaded::SuspendHeartBeat(pFVar17);
      FFrame::GetScriptCallstack(&local_2258,true,false);
      iVar24 = (int)((longlong)local_2258.CurPos - (longlong)local_2258.Base >> 1);
      if (iVar24 != 0) {
        local_2480 = 0xe;
        if ((iVar24 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pos + RemoveLen <= Len()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                ,0x119,L""), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (local_2258.End < local_2258.CurPos + 0xe) {
          TStringBuilderBase<wchar_t>::Extend(&local_2258,0xe);
        }
        for (pwVar20 = local_2258.CurPos + 0xd; pwVar20 != local_2258.Base + 0xd;
            pwVar20 = pwVar20 + -1) {
          *pwVar20 = pwVar20[-0xe];
        }
        *(undefined8 *)local_2258.Base = u_ScriptTrace___._0_8_;
        *(undefined8 *)(local_2258.Base + 4) = u_ScriptTrace___._8_8_;
        *(undefined8 *)(local_2258.Base + 8) = u_ScriptTrace___._16_8_;
        *(undefined4 *)(local_2258.Base + 0xc) = u_ScriptTrace___._24_4_;
        local_2258.CurPos = local_2258.CurPos + 0xe;
      }
      uVar15 = FWindowsPlatformStackWalk::CaptureStackBackTrace
                         ((ulong64 *)local_238,0x40,(void *)0x0);
      FWindowsPlatformProcess::GetCurrentProcessId();
      pFVar17 = FGameThreadHitchHeartBeatThreaded::Get();
      FGameThreadHitchHeartBeatThreaded::ResumeHeartBeat(pFVar17);
      if ((pFVar16 != (FThreadHeartBeat *)0x0) &&
         (pFVar16 = FThreadHeartBeat::GetNoInit(), pFVar16 != (FThreadHeartBeat *)0x0)) {
        FThreadHeartBeat::ResumeHeartBeat(pFVar16,false);
      }
    }
    if ((param_1 == (SWidget *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InWidget",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Trace\\SlateTrace.cpp"
                            ,0x8b,L""), bVar14)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    LVar4 = (LARGE_INTEGER)param_1->UniqueIdentifier;
    if (param_2 != (SWidget *)0x0) {
      LVar22 = (LARGE_INTEGER)param_2->UniqueIdentifier;
    }
    QueryPerformanceCounter(local_2490);
    lVar23 = 4;
    if (-1 < SlateChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FSlateTraceWidgetInvalidatedFields>
                ((TLogScope<1> *)&local_2268);
      *(LARGE_INTEGER *)local_2268.Ptr = local_2490[0];
      *(LARGE_INTEGER *)((longlong)local_2268.Ptr + 8) = LVar4;
      *(LARGE_INTEGER *)((longlong)local_2268.Ptr + 0x10) = LVar22;
      if (local_2258.End < local_2258.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_2258,1);
      }
      iVar24 = 0;
      *local_2258.CurPos = L'\0';
      wVar3 = *local_2258.Base;
      pwVar20 = local_2258.Base;
      while (wVar3 != L'\0') {
        pwVar20 = pwVar20 + 1;
        iVar24 = iVar24 + 1;
        wVar3 = *pwVar20;
      }
      UE::Trace::Private::Field_WriteStringWide(4,local_2258.Base,iVar24);
      UE::Trace::Private::Field_WriteAuxData(5,(uchar *)local_238,uVar15 * 8 & 0x7fff8);
      *(EInvalidateWidgetReason *)((longlong)local_2268.Ptr + 0x18) = param_3;
      UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_2268,&local_2268);
    }
    if (((param_2 == (SWidget *)0x0) && (bCaptureRootInvalidationCallstacks != 0)) &&
       (GIsRequestingExit == false)) {
      local_2478 = local_2490[0];
      lVar25 = 4;
      puVar18 = auStack_2470;
      pwVar20 = local_238;
      do {
        uVar6 = *(undefined8 *)(pwVar20 + 4);
        uVar7 = *(undefined8 *)(pwVar20 + 8);
        uVar8 = *(undefined8 *)(pwVar20 + 0xc);
        *puVar18 = *(undefined8 *)pwVar20;
        puVar18[1] = uVar6;
        uVar6 = *(undefined8 *)(pwVar20 + 0x10);
        uVar9 = *(undefined8 *)(pwVar20 + 0x14);
        puVar18[2] = uVar7;
        puVar18[3] = uVar8;
        uVar7 = *(undefined8 *)(pwVar20 + 0x18);
        uVar8 = *(undefined8 *)(pwVar20 + 0x1c);
        puVar18[4] = uVar6;
        puVar18[5] = uVar9;
        uVar6 = *(undefined8 *)(pwVar20 + 0x20);
        uVar9 = *(undefined8 *)(pwVar20 + 0x24);
        puVar18[6] = uVar7;
        puVar18[7] = uVar8;
        uVar7 = *(undefined8 *)(pwVar20 + 0x28);
        uVar8 = *(undefined8 *)(pwVar20 + 0x2c);
        puVar18[8] = uVar6;
        puVar18[9] = uVar9;
        uVar6 = *(undefined8 *)(pwVar20 + 0x30);
        uVar9 = *(undefined8 *)(pwVar20 + 0x34);
        puVar18[10] = uVar7;
        puVar18[0xb] = uVar8;
        uVar7 = *(undefined8 *)(pwVar20 + 0x38);
        uVar8 = *(undefined8 *)(pwVar20 + 0x3c);
        puVar18[0xc] = uVar6;
        puVar18[0xd] = uVar9;
        puVar18[0xe] = uVar7;
        puVar18[0xf] = uVar8;
        lVar25 = lVar25 + -1;
        puVar18 = puVar18 + 0x10;
        pwVar20 = pwVar20 + 0x40;
      } while (lVar25 != 0);
      local_2270 = uVar15;
      this = FMemory::Malloc(0x300,0x40);
      if (this == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x300);
      }
      else {
        UE::Tasks::Private::FTaskBase::FTaskBase(this,2,true);
        this->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<`FSlateTrace::WidgetInvalidated'::`20'::<lambda_1>,void,void>::
              _vftable_;
        UE::Tasks::Private::FTaskBase::Init
                  (this,
                   L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Trace\\SlateTrace.cpp(430)"
                   ,BackgroundNormal,None,None);
        pFVar12 = this + 1;
        pLVar13 = &local_2478;
        do {
          pLVar21 = pLVar13;
          pFVar19 = pFVar12;
          pFVar12 = (FTaskBase *)&(pFVar19->LowLevelTask).field_0x8;
          LVar22 = pLVar21[1];
          LVar4 = pLVar21[2];
          LVar10 = pLVar21[3];
          pFVar19->_padding_ = (longlong)*pLVar21;
          pFVar19->_padding_ = (longlong)LVar22;
          LVar22 = pLVar21[4];
          LVar11 = pLVar21[5];
          pFVar19->_padding_ = (longlong)LVar4;
          pFVar19->_padding_ = (longlong)LVar10;
          LVar4 = pLVar21[6];
          LVar10 = pLVar21[7];
          pFVar19->_padding_ = (longlong)LVar22;
          pFVar19->_padding_ = (longlong)LVar11;
          LVar22 = pLVar21[8];
          LVar11 = pLVar21[9];
          *(LARGE_INTEGER *)&pFVar19->RefCount = LVar4;
          pFVar19->Pipe = (FPipe *)LVar10;
          LVar4 = pLVar21[10];
          LVar10 = pLVar21[0xb];
          *(LARGE_INTEGER *)&pFVar19->StateChangeEvent = LVar22;
          *(LARGE_INTEGER *)&pFVar19->ExecutingThreadId = LVar11;
          LVar22 = pLVar21[0xc];
          LVar11 = pLVar21[0xd];
          pFVar19->TraceId = (atomic<unsigned___int64>)LVar4;
          *(LARGE_INTEGER *)(pFVar19->Prerequisites).Prerequisites.AllocatorInstance.InlineData =
               LVar10;
          LVar4 = pLVar21[0xe];
          LVar10 = pLVar21[0xf];
          (pFVar19->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
               (ForElementType<UE::Tasks::Private::FTaskBase_*>)LVar22;
          *(LARGE_INTEGER *)&(pFVar19->Prerequisites).Prerequisites.ArrayNum = LVar11;
          *(LARGE_INTEGER *)&(pFVar19->Prerequisites).Mutex = LVar4;
          *(LARGE_INTEGER *)&pFVar19->LowLevelTask = LVar10;
          lVar23 = lVar23 + -1;
          pLVar13 = pLVar21 + 0x10;
        } while (lVar23 != 0);
        LVar22 = pLVar21[0x11];
        *(LARGE_INTEGER *)pFVar12 = pLVar21[0x10];
        *(LARGE_INTEGER *)&(pFVar19->LowLevelTask).field_0x10 = LVar22;
        this->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<`FSlateTrace::WidgetInvalidated'::`20'::<lambda_1>_>::_vftable_;
        UE::Tasks::Private::FTaskBase::TryLaunch(this,0x300);
        LOCK();
        paVar1 = &this->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)this->_padding_)(this,1);
        }
      }
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2258);
  }
  return;
}

