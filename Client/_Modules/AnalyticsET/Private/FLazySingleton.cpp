// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsET
// Functions: 1

// Construct<FAnalyticsPerfTracker> @ 143190ba0

void __cdecl FLazySingleton::Construct<FAnalyticsPerfTracker>(void *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FTSTicker *pFVar4;
  FString *pFVar5;
  size_t sVar6;
  wchar_t *pwVar7;
  FDateTime this;
  FString *pFVar8;
  FEngineVersion *this_00;
  ForAnyElementType FVar9;
  double dVar10;
  LARGE_INTEGER LStackX_8;
  FString FStack_88;
  TStringView<wchar_t> TStack_78;
  wchar_t *pwStack_68;
  undefined4 uStack_60;
  ForAnyElementType FStack_58;
  undefined8 uStack_50;
  TFunction<void___cdecl(wchar_t_const_*)> TStack_48;
  
  pFVar4 = FTSTicker::GetCoreTicker();
  FTSTickerObjectBase::FTSTickerObjectBase(param_1,0.0,pFVar4);
  *(undefined ***)param_1 = &___7FAnalyticsPerfTracker__6B_;
  TStack_48._0_8_ = 0;
  TStack_48._40_8_ = 0;
  pFVar5 = FPaths::ProjectSavedDir();
  TStack_78.Size = 0;
  if ((pFVar5->Data).ArrayNum == 0) {
    TStack_78.DataPtr = L"";
  }
  else {
    TStack_78.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  if ((FScriptContainerElement *)TStack_78.DataPtr != (FScriptContainerElement *)0x0) {
    sVar6 = wcslen(TStack_78.DataPtr);
    TStack_78.Size = (int)sVar6;
  }
  uStack_60 = 0x13;
  pwStack_68 = L"AnalyticsTiming.csv";
  FPaths::CombineInternal((FString *)&FStack_58,&TStack_78,2);
  FVar9.Data = (FScriptContainerElement *)L"";
  if ((uint)uStack_50 != 0) {
    FVar9.Data = FStack_58.Data;
  }
  FOutputDeviceFile::FOutputDeviceFile
            ((FOutputDeviceFile *)((longlong)param_1 + 0x20),(wchar_t *)FVar9.Data,false,false,true,
             &TStack_48);
  if (FStack_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data);
  }
  pFVar5 = (FString *)((longlong)param_1 + 0x880);
  FStack_58.Data = (FScriptContainerElement *)0x0;
  pFVar1 = (FString *)((longlong)param_1 + 0x890);
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x888) = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x898) = 0;
  uStack_50._0_4_ = 0;
  uStack_50._4_4_ = 0;
  TStack_78.DataPtr = (wchar_t *)0x0;
  TStack_78.Size = 0;
  TStack_78._12_4_ = 0;
  FGuid::AppendString((FGuid *)&FStack_58,(FString *)&TStack_78,Digits);
  ::FString::ToLower((FString *)&TStack_78,(FString *)((longlong)param_1 + 0x8a0));
  if (TStack_78.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(TStack_78.DataPtr);
  }
  *(undefined8 *)((longlong)param_1 + 0x8b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d0) = 0;
  QueryPerformanceCounter(&LStackX_8);
  dVar10 = (double)LStackX_8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  *(undefined1 *)((longlong)param_1 + 0x8e0) = 0;
  *(double *)((longlong)param_1 + 0x8d8) = dVar10 + __real_4170000000000000;
  pwVar7 = FCommandLine::Get();
  bVar3 = FParse::Param(pwVar7,L"ANALYTICSTRACKPERF");
  *(bool *)((longlong)param_1 + 0x8e0) = bVar3;
  if (bVar3) {
    *(undefined1 *)((longlong)param_1 + 0x28) = 1;
    LStackX_8.QuadPart = 0;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x20) + 0x10))
              ((longlong)param_1 + 0x20,
               L"Date,CL,RunID,Time,WindowSeconds,ProfiledSeconds,Frames,Flushes,Events,Bytes,FrameCounter"
               ,5,&LStackX_8);
    *(undefined8 *)((longlong)param_1 + 0x8b0) = *(undefined8 *)((longlong)param_1 + 0x8d8);
    this = FDateTime::UtcNow();
    pFVar8 = FDateTime::ToIso8601((FDateTime *)this.Ticks,(FString *)&FStack_58);
    if (pFVar5 != pFVar8) {
      pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar5->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)((longlong)param_1 + 0x888) = (pFVar8->Data).ArrayNum;
      *(int *)((longlong)param_1 + 0x88c) = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    if (FStack_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data);
    }
    this_00 = FEngineVersion::Current();
    FEngineVersionBase::GetChangelist((FEngineVersionBase *)this_00);
    ::FString::PrintfImpl(&FStack_88,L"%u");
    if (pFVar1 != &FStack_88) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = FStack_88.Data.AllocatorInstance.Data;
      *(int *)((longlong)param_1 + 0x898) = FStack_88.Data.ArrayNum;
      *(int *)((longlong)param_1 + 0x89c) = FStack_88.Data.ArrayMax;
      FStack_88.Data.ArrayNum = 0;
      FStack_88.Data.ArrayMax = 0;
      FStack_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
    }
  }
  return;
}

