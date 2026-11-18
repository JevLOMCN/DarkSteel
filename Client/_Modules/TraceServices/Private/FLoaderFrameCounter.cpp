// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 11

// FLoaderFrameCounter @ 14d423c00

FLoaderFrameCounter * __thiscall
TraceServices::FLoadTimeProfilerProvider::FLoaderFrameCounter::FLoaderFrameCounter
          (FLoaderFrameCounter *this,ELoaderFrameCounterType param_1,
          TPagedArray<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerProvider::FLoaderFrame>_>
          *param_2)

{
  this->Frames = param_2;
  this->_padding_ = (longlong)&___7FLoaderFrameCounter_FLoadTimeProfilerProvider_TraceServices__6B_;
  this->Type = param_1;
  return this;
}

// ~FLoaderFrameCounter @ 14d42bae0

void __thiscall
TraceServices::FLoadTimeProfilerProvider::FLoaderFrameCounter::~FLoaderFrameCounter
          (FLoaderFrameCounter *this)

{
  this->_padding_ = (longlong)&___7FLoaderFrameCounter_FLoadTimeProfilerProvider_TraceServices__6B_;
  return;
}

// EnumerateFloatOps @ 14d459200

void __thiscall
TraceServices::FLoadTimeProfilerProvider::FLoaderFrameCounter::EnumerateFloatOps
          (FLoaderFrameCounter *this,double param_1,double param_2,bool param_3,
          TFunctionRef<void___cdecl(double,TraceServices::ECounterOpType,double)> *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\LoadTimeProfiler.cpp"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// EnumerateFloatValues @ 14d4592b0

void __thiscall
TraceServices::FLoadTimeProfilerProvider::FLoaderFrameCounter::EnumerateFloatValues
          (FLoaderFrameCounter *this,double param_1,double param_2,bool param_3,
          TFunctionRef<void___cdecl(double,double)> *param_4)

{
  ulonglong uVar1;
  FLoaderFrame *pFVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  ulong64 uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 in_XMM0 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double local_res8;
  double local_78 [12];
  
  dVar8 = __real_3f81111111111111;
  dVar7 = __real_404e000000000000;
  dVar6 = __real_3f91111111111111;
  uVar10 = this->Frames->TotalItemCount;
  if (uVar10 != 0) {
    dVar16 = param_1 * __real_404e000000000000;
    if (0.0 <= dVar16) {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = dVar16;
      auVar15 = roundpd(in_XMM0,auVar15,1);
    }
    else {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = dVar16;
      auVar15 = roundpd(in_XMM0,auVar3,2);
    }
    dVar16 = param_2 * __real_404e000000000000;
    iVar12 = (int)auVar15._0_8_ + -1;
    if (iVar12 < 0) {
      iVar12 = 0;
    }
    if (0.0 <= dVar16) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = dVar16;
      auVar15 = roundpd(auVar15,auVar5,1);
      dVar16 = auVar15._0_8_;
    }
    else {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = dVar16;
      auVar15 = roundpd(auVar15,auVar4,2);
      dVar16 = auVar15._0_8_;
    }
    iVar9 = (int)uVar10 + -1;
    iVar13 = (int)dVar16 + 1;
    if (iVar9 < (int)dVar16 + 1) {
      iVar13 = iVar9;
    }
    if (iVar12 <= iVar13) {
      uVar14 = (ulonglong)iVar12;
      do {
        local_78[0] = (double)iVar12 * dVar6 + dVar8;
        if ((param_3) || ((param_1 <= local_78[0] && (local_78[0] <= param_2)))) {
          uVar1 = this->Frames->PageSize;
          uVar11 = uVar14 % uVar1;
          pFVar2 = this->Frames->FirstPage[uVar14 / uVar1].Items;
          if (this->Type == LoaderFrameCounterType_IoDispatcherThroughput) {
            uVar10 = pFVar2[uVar11].IoDispatcherReadBytes;
            if ((longlong)uVar10 < 0) {
LAB_14d45941e:
              local_res8 = (double)uVar10;
            }
            else {
              local_res8 = (double)(longlong)uVar10;
            }
          }
          else {
            if (this->Type != LoaderFrameCounterType_LoaderThroughput) goto LAB_14d45945c;
            uVar10 = pFVar2[uVar11].ExportLoadedBytes + pFVar2[uVar11].HeaderLoadedBytes;
            if ((longlong)uVar10 < 0) goto LAB_14d45941e;
            local_res8 = (double)(longlong)uVar10;
          }
          local_res8 = local_res8 * dVar7;
          (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_78,&local_res8);
        }
LAB_14d45945c:
        iVar12 = iVar12 + 1;
        uVar14 = uVar14 + 1;
      } while (iVar12 <= iVar13);
    }
  }
  return;
}

// EnumerateOps @ 14d45adf0

void __thiscall
TraceServices::FLoadTimeProfilerProvider::FLoaderFrameCounter::EnumerateOps
          (FLoaderFrameCounter *this,double param_1,double param_2,bool param_3,
          TFunctionRef<void___cdecl(double,TraceServices::ECounterOpType,__int64)> *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\LoadTimeProfiler.cpp"
                     ,0x62,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// EnumerateValues @ 14d45dc40

void __thiscall
TraceServices::FLoadTimeProfilerProvider::FLoaderFrameCounter::EnumerateValues
          (FLoaderFrameCounter *this,double param_1,double param_2,bool param_3,
          TFunctionRef<void___cdecl(double,__int64)> *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\LoadTimeProfiler.cpp"
                     ,0x42,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetDescription @ 14d4650e0

wchar_t * __thiscall
TraceServices::FLoadTimeProfilerProvider::FLoaderFrameCounter::GetDescription
          (FLoaderFrameCounter *this)

{
  return L"N/A";
}

// GetDisplayHint @ 14d465180

ECounterDisplayHint __thiscall
TraceServices::FLoadTimeProfilerProvider::FLoaderFrameCounter::GetDisplayHint
          (FLoaderFrameCounter *this)

{
  if ((this->Type != LoaderFrameCounterType_IoDispatcherThroughput) &&
     (this->Type != LoaderFrameCounterType_LoaderThroughput)) {
    return CounterDisplayHint_None;
  }
  return CounterDisplayHint_Memory;
}

// GetGroup @ 14d468390

wchar_t * __thiscall
TraceServices::FLoadTimeProfilerProvider::FLoaderFrameCounter::GetGroup(FLoaderFrameCounter *this)

{
  return (wchar_t *)0x0;
}

// GetName @ 14d469c80

wchar_t * __thiscall
TraceServices::FLoadTimeProfilerProvider::FLoaderFrameCounter::GetName(FLoaderFrameCounter *this)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (this->Type == LoaderFrameCounterType_IoDispatcherThroughput) {
    return L"AssetLoading/IoDispatcher/Throughput";
  }
  if (this->Type != LoaderFrameCounterType_LoaderThroughput) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\LoadTimeProfiler.cpp"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
    return L"";
  }
  return L"AssetLoading/AsyncLoading/Throughput";
}

// IsFloatingPoint @ 14d474c60

bool __thiscall
TraceServices::FLoadTimeProfilerProvider::FLoaderFrameCounter::IsFloatingPoint
          (FLoaderFrameCounter *this)

{
  if ((this->Type != LoaderFrameCounterType_IoDispatcherThroughput) &&
     (this->Type != LoaderFrameCounterType_LoaderThroughput)) {
    return false;
  }
  return true;
}

