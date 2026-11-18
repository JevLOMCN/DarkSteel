// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FrameSync @ 14197dae0

void __thiscall FVTuneExternalProfiler::FrameSync(FVTuneExternalProfiler *this)

{
  return;
}

// GetProfilerName @ 14197daf0

wchar_t * __thiscall FVTuneExternalProfiler::GetProfilerName(FVTuneExternalProfiler *this)

{
  return L"VTune";
}

// ProfilerPauseFunction @ 14197db00

void __thiscall FVTuneExternalProfiler::ProfilerPauseFunction(FVTuneExternalProfiler *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014197db00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->VTPause)();
  return;
}

// ProfilerResumeFunction @ 14197db10

void __thiscall FVTuneExternalProfiler::ProfilerResumeFunction(FVTuneExternalProfiler *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014197db10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->VTResume)();
  return;
}

// StartScopedEvent @ 14197db20

void __thiscall
FVTuneExternalProfiler::StartScopedEvent
          (FVTuneExternalProfiler *this,FColor *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  TSet<TTuple<unsigned_int,___itt_string_handle_*>,TDefaultMapHashableKeyFuncs<unsigned_int,___itt_string_handle_*,0>,FDefaultSetAllocator>
  *this_00;
  wchar_t wVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTlsAutoCleanup *pFVar6;
  ___itt_string_handle *p_Var7;
  ___itt_string_handle **pp_Var8;
  ushort uVar9;
  FTlsAutoCleanup FVar10;
  uint uVar11;
  ___itt_string_handle *p_Var12;
  undefined1 local_res8 [8];
  uint local_res18 [4];
  ___itt_string_handle *local_88;
  code *local_80;
  undefined1 *local_78;
  uint *local_70;
  ___itt_string_handle **local_68;
  ___itt_id local_58;
  ___itt_id local_38;
  
  if ((FCrc::CRCTable_DEPRECATED[1] == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CRCTable_DEPRECATED[1] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                         ,0xb4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  p_Var7 = (___itt_string_handle *)0x0;
  local_res18[0] = 0;
  wVar2 = *param_2;
  pwVar1 = param_2;
  p_Var12 = p_Var7;
  while (wVar2 != L'\0') {
    pwVar1 = pwVar1 + 1;
    uVar9 = wVar2 - (-(ushort)((ushort)wVar2 - 0x61 < 0x1a) & 0x20);
    uVar11 = (uint)p_Var12 >> 8 ^ FCrc::CRCTable_DEPRECATED[(byte)((byte)p_Var12 ^ (byte)uVar9)];
    local_res18[0] = uVar11 >> 8 ^ FCrc::CRCTable_DEPRECATED[(uVar9 >> 8 ^ uVar11) & 0xff];
    p_Var12 = (___itt_string_handle *)(ulonglong)local_res18[0];
    wVar2 = *pwVar1;
  }
  local_78 = local_res8;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FVTunePerThreadHandleMap>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_80,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FVTunePerThreadHandleMap>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  this_00 = (TSet<TTuple<unsigned_int,___itt_string_handle_*>,TDefaultMapHashableKeyFuncs<unsigned_int,___itt_string_handle_*,0>,FDefaultSetAllocator>
             *)(pFVar6 + 2);
  if (*(int *)(pFVar6 + 3) != *(int *)&pFVar6[8].field_0x4) {
    FVar10 = pFVar6[10];
    if (pFVar6[10] == (FTlsAutoCleanup)0x0) {
      FVar10 = (FTlsAutoCleanup)(pFVar6 + 9);
    }
    iVar5 = *(int *)((longlong)FVar10 +
                    (ulonglong)(*(int *)(pFVar6 + 0xb) - 1U & local_res18[0]) * 4);
    if (iVar5 != -1) {
      do {
        if (*(uint *)(*(longlong *)&this_00->Elements + (longlong)iVar5 * 0x18) == local_res18[0])
        goto LAB_14197dc95;
        iVar5 = *(int *)(*(longlong *)&this_00->Elements + 0x10 + (longlong)iVar5 * 0x18);
      } while (iVar5 != -1);
    }
  }
  if (__itt_string_handle_createW_ptr__3_0 !=
      (_func___cdecl____itt_string_handle_ptr_wchar_t_ptr *)0x0) {
    p_Var7 = (*__itt_string_handle_createW_ptr__3_0)(param_2);
  }
  local_70 = local_res18;
  local_68 = &local_88;
  local_88 = p_Var7;
  TSet<TTuple<unsigned_int,___itt_string_handle_*>,TDefaultMapHashableKeyFuncs<unsigned_int,___itt_string_handle_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&,___itt_string_handle_*_&&>_>
            (this_00,(TPairInitializer<unsigned_int_&,___itt_string_handle_*_&&> *)(local_res18 + 2)
             ,(bool *)&local_70);
LAB_14197dc95:
  pp_Var8 = TMapBase<unsigned_int,___itt_string_handle_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,___itt_string_handle_*,0>_>
            ::FindChecked((TMapBase<unsigned_int,___itt_string_handle_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,___itt_string_handle_*,0>_>
                           *)this_00,local_res18[0]);
  if (((this->Domain != (___itt_domain *)0x0) && (this->Domain->flags != 0)) &&
     (__itt_task_begin_ptr__3_0 !=
      (_func___cdecl_void____itt_domain_ptr____itt_id____itt_id____itt_string_handle_ptr *)0x0)) {
    local_58.d1._0_4_ = (undefined4)__itt_null.d1;
    local_58.d1._4_4_ = __itt_null.d1._4_4_;
    local_58.d2._0_4_ = (undefined4)__itt_null.d2;
    local_58.d2._4_4_ = __itt_null.d2._4_4_;
    local_38.d1._0_4_ = (undefined4)__itt_null.d1;
    local_38.d1._4_4_ = __itt_null.d1._4_4_;
    local_38.d2._0_4_ = (undefined4)__itt_null.d2;
    local_38.d2._4_4_ = __itt_null.d2._4_4_;
    local_58.d3 = __itt_null.d3;
    local_38.d3 = __itt_null.d3;
    (*__itt_task_begin_ptr__3_0)(this->Domain,&local_38,&local_58,*pp_Var8);
  }
  return;
}

// EndScopedEvent @ 14197dd10

void __thiscall FVTuneExternalProfiler::EndScopedEvent(FVTuneExternalProfiler *this)

{
  if (((this->Domain != (___itt_domain *)0x0) && (this->Domain->flags != 0)) &&
     (__itt_task_end_ptr__3_0 != (_func___cdecl_void____itt_domain_ptr *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014197dd2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_task_end_ptr__3_0)(this->Domain);
    return;
  }
  return;
}

// SetThreadName @ 14197dd40

void __thiscall FVTuneExternalProfiler::SetThreadName(FVTuneExternalProfiler *this,wchar_t *param_1)

{
  if (__itt_thread_set_nameW_ptr__3_0 != (_func___cdecl_void_wchar_t_ptr *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014197dd4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_thread_set_nameW_ptr__3_0)(param_1);
    return;
  }
  return;
}

// FVTuneExternalProfiler @ 1419873f0

FVTuneExternalProfiler * __thiscall
FVTuneExternalProfiler::FVTuneExternalProfiler(FVTuneExternalProfiler *this)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  void **ppvVar3;
  
  this->_padding_ = (longlong)&___7FVTuneExternalProfiler__6B_;
  this->DLLHandle = (void *)0x0;
  this->VTPause = (_func___cdecl_void *)0x0;
  this->VTResume = (_func___cdecl_void *)0x0;
  pIVar2 = IModularFeatures::Get();
  ppvVar3 = &this->DLLHandle;
  if (this == (FVTuneExternalProfiler *)0x0) {
    ppvVar3 = (void **)0x0;
  }
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x28);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ProfilerFeatureName,"ExternalProfiler");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (*pcVar1)(pIVar2,ProfilerFeatureName,ppvVar3);
  return this;
}

// ~FVTuneExternalProfiler @ 1419883d0

void __thiscall FVTuneExternalProfiler::~FVTuneExternalProfiler(FVTuneExternalProfiler *this)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  
  this->_padding_ = (longlong)&___7FVTuneExternalProfiler__6B_;
  if (this->DLLHandle != (HMODULE)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(this->DLLHandle);
    this->DLLHandle = (void *)0x0;
  }
  pIVar2 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ProfilerFeatureName,"ExternalProfiler");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (*pcVar1)(pIVar2,ProfilerFeatureName,&this->DLLHandle);
  this->_padding_ = (longlong)&___7FExternalProfiler__6B_;
  return;
}

