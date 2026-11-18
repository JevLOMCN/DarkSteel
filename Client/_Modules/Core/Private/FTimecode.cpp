// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FromFrameNumber @ 141823a90

FTimecode * __cdecl
FTimecode::FromFrameNumber
          (FTimecode *__return_storage_ptr__,FFrameNumber *param_1,FFrameRate *param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  undefined1 in_XMM5 [16];
  undefined1 auVar19 [16];
  
  dVar18 = (double)param_2->Numerator / (double)param_2->Denominator;
  fVar16 = (float)dVar18;
  iVar7 = (int)ROUND(__real_bf000000 - (fVar16 + fVar16)) >> 1;
  iVar8 = -iVar7;
  if (0 < iVar8) {
    iVar3 = param_1->Value;
    iVar6 = iVar3 >> 0x1f;
    if (param_3) {
      iVar4 = 4;
      if (iVar8 < 0x1f) {
        iVar4 = 2;
      }
      fVar9 = (float)(dVar18 * __real_4082c00000000000);
      iVar5 = -iVar3;
      if (-iVar3 < 0) {
        iVar5 = iVar3;
      }
      iVar2 = (int)ROUND((fVar9 + fVar9) - __real_3f000000) >> 1;
      iVar1 = iVar5 / iVar2;
      iVar2 = iVar5 % iVar2;
      if (iVar4 <= iVar2) {
        iVar5 = iVar5 + ((uint)(iVar2 - iVar4) /
                        (uint)((int)ROUND(fVar16 * __real_42f00000 - __real_3f000000) >> 1)) * iVar4
        ;
      }
      if (0 < iVar3) {
        iVar6 = 1;
      }
      iVar3 = (iVar5 + iVar4 * iVar1 * 9) * iVar6;
      dVar17 = (double)iVar3;
      dVar18 = dVar17 / (double)(iVar7 * -0xe10);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = dVar18;
      if (0.0 <= dVar18) {
        auVar19 = roundpd(in_XMM5,auVar10,1);
        dVar18 = auVar19._0_8_;
      }
      else {
        auVar19 = roundpd(in_XMM5,auVar10,2);
        dVar18 = auVar19._0_8_;
      }
      dVar15 = dVar17 / (double)(iVar7 * -0x3c);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = dVar15;
      if (0.0 <= dVar15) {
        auVar19 = roundpd(auVar11,auVar11,1);
        dVar15 = auVar19._0_8_;
      }
      else {
        auVar19 = roundpd(auVar11,auVar11,2);
        dVar15 = auVar19._0_8_;
      }
      auVar12._8_8_ = 0;
      auVar12._0_8_ = dVar17 / (double)iVar8;
      if (0.0 <= dVar17 / (double)iVar8) {
        auVar19 = roundpd(auVar12,auVar12,1);
        dVar17 = auVar19._0_8_;
      }
      else {
        auVar19 = roundpd(auVar12,auVar12,2);
        dVar17 = auVar19._0_8_;
      }
      __return_storage_ptr__->Minutes = (int)dVar15 % 0x3c;
      __return_storage_ptr__->bDropFrameFormat = true;
      __return_storage_ptr__->Hours = (int)dVar18;
    }
    else {
      dVar17 = (double)iVar3;
      dVar18 = dVar17 / (double)(iVar7 * -0xe10);
      auVar19._8_8_ = 0;
      auVar19._0_8_ = dVar18;
      if (0.0 <= dVar18) {
        auVar19 = roundpd(in_XMM5,auVar19,1);
        dVar18 = auVar19._0_8_;
      }
      else {
        auVar19 = roundpd(in_XMM5,auVar19,2);
        dVar18 = auVar19._0_8_;
      }
      dVar15 = dVar17 / (double)(iVar7 * -0x3c);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = dVar15;
      if (0.0 <= dVar15) {
        auVar19 = roundpd(auVar13,auVar13,1);
        dVar15 = auVar19._0_8_;
      }
      else {
        auVar19 = roundpd(auVar13,auVar13,2);
        dVar15 = auVar19._0_8_;
      }
      auVar14._8_8_ = 0;
      auVar14._0_8_ = dVar17 / (double)iVar8;
      if (0.0 <= dVar17 / (double)iVar8) {
        auVar19 = roundpd(auVar14,auVar14,1);
        dVar17 = auVar19._0_8_;
      }
      else {
        auVar19 = roundpd(auVar14,auVar14,2);
        dVar17 = auVar19._0_8_;
      }
      __return_storage_ptr__->Minutes = (int)dVar15 % 0x3c;
      __return_storage_ptr__->Hours = (int)dVar18;
      __return_storage_ptr__->bDropFrameFormat = false;
    }
    __return_storage_ptr__->Subframe = 0.0;
    __return_storage_ptr__->Frames = iVar3 % iVar8;
    __return_storage_ptr__->Seconds = (int)dVar17 % 0x3c;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Hours = 0;
  __return_storage_ptr__->Minutes = 0;
  __return_storage_ptr__->Seconds = 0;
  __return_storage_ptr__->Frames = 0;
  __return_storage_ptr__->Subframe = 0.0;
  __return_storage_ptr__->bDropFrameFormat = false;
  return __return_storage_ptr__;
}

// ParseTimecode @ 14195a250

TOptional<FTimecode> * __cdecl
FTimecode::ParseTimecode(TOptional<FTimecode> *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  TStringView<wchar_t> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_UE::Core::Private::FTimecodeParser&___ptr64___cdecl_UE::Core::Private::FTimecodeParser::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_UE::Core::Private::FTimecodeParser&___ptr64___cdecl_UE::Core::Private::FTimecodeParser::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_UE::Core::Private::FTimecodeParser&___ptr64___cdecl_UE::Core::Private::FTimecodeParser::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      UE::Core::Private::FTimecodeParser::FTimecodeParser
                (&`public:_static_class_UE::Core::Private::FTimecodeParser&___ptr64___cdecl_UE::Core::Private::FTimecodeParser::Get(void)'
                  ::__l2::StaticTimecodeParser);
      atexit(`UE::Core::Private::FTimecodeParser::Get'::__l2::
             _dynamic_atexit_destructor_for__StaticTimecodeParser__);
      _Init_thread_footer(&`public:_static_class_UE::Core::Private::FTimecodeParser&___ptr64___cdecl_UE::Core::Private::FTimecodeParser::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  UE::Core::Private::FTimecodeParser::Evaluate
            (&`public:_static_class_UE::Core::Private::FTimecodeParser&___ptr64___cdecl_UE::Core::Private::FTimecodeParser::Get(void)'
              ::__l2::StaticTimecodeParser,__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// ToString @ 1419728c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FTimecode::ToString(FTimecode *this,FString *__return_storage_ptr__,bool param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  FString *pFVar4;
  longlong lVar5;
  int iVar6;
  wchar_t *pwVar7;
  undefined1 auStack_118 [32];
  int local_f8;
  int local_f0;
  int local_e8;
  FString local_d8;
  TStringBuilderBase<wchar_t> local_c8;
  wchar_t local_a8 [64];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_118;
  if ((((this->Hours < 0) || (iVar6 = this->Minutes, iVar6 < 0)) || (this->Seconds < 0)) ||
     (this->Frames < 0)) {
    iVar6 = this->Minutes;
  }
  local_c8.Base = local_a8;
  local_e8 = -this->Frames;
  local_c8.CurPos = local_a8;
  local_c8.bIsDynamic = false;
  local_c8.bIsExternal = false;
  if (local_e8 < 0) {
    local_e8 = this->Frames;
  }
  local_f0 = -this->Seconds;
  local_c8.End = (wchar_t *)local_28;
  if (local_f0 < 0) {
    local_f0 = this->Seconds;
  }
  local_f8 = -iVar6;
  if (-iVar6 < 0) {
    local_f8 = iVar6;
  }
  pwVar7 = L"%s%02d:%02d:%02d;%02d";
  if (this->bDropFrameFormat == false) {
    pwVar7 = L"%s%02d:%02d:%02d:%02d";
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_c8,pwVar7);
  pTVar2 = CVarForceStringifyTimecodeSubframes.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar5 = 4;
    if (!bVar3) goto LAB_1419729d9;
  }
  lVar5 = 0;
LAB_1419729d9:
  iVar6 = *(int *)((longlong)pTVar2->ShadowedValue + lVar5);
  if ((iVar6 == 1) || ((iVar6 != 2 && (param_2)))) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_c8,L".%02d");
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar4 = ::FString::ConstructFromPtrSize
                     (&local_d8,local_c8.Base,
                      (int)((longlong)local_c8.CurPos - (longlong)local_c8.Base >> 1));
  if (__return_storage_ptr__ != pFVar4) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c8.bIsDynamic != false) {
    FMemory::Free(local_c8.Base);
  }
  return __return_storage_ptr__;
}

// UseDropFormatTimecodeByDefaultWhenSupported @ 14197c420

bool __cdecl FTimecode::UseDropFormatTimecodeByDefaultWhenSupported(void)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarUseDropFormatTimecodeByDefaultWhenSupported.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

// ToFrameNumber @ 141d55750

FFrameNumber __thiscall FTimecode::ToFrameNumber(FTimecode *this,FFrameRate *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *in_R8;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  double dVar11;
  
  iVar8 = (int)ROUND(__real_bf000000 -
                     ((float)*in_R8 / (float)in_R8[1] + (float)*in_R8 / (float)in_R8[1])) >> 1;
  iVar9 = -iVar8;
  iVar4 = iVar8 * -0xe10;
  if (iVar9 < 1) {
    param_1->Numerator = 0;
    return (FFrameNumber)(int)param_1;
  }
  iVar7 = this->Seconds + this->Frames / iVar9;
  iVar6 = this->Minutes + iVar7 / 0x3c;
  iVar2 = this->Hours + iVar6 / 0x3c;
  iVar6 = iVar6 % 0x3c;
  if (this->bDropFrameFormat == false) {
    iVar2 = iVar2 * iVar4;
  }
  else {
    iVar5 = 4;
    if (iVar9 < 0x1f) {
      iVar5 = 2;
    }
    iVar3 = iVar2 * 0x3c + iVar6;
    dVar11 = (double)iVar3 * __real_3fb999999999999a;
    if (0.0 <= dVar11) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = dVar11;
      auVar10 = roundpd(ZEXT816(0),auVar10,1);
      iVar2 = iVar2 * iVar4 - (iVar3 - (int)auVar10._0_8_) * iVar5;
    }
    else {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = dVar11;
      auVar10 = roundpd(ZEXT816(0),auVar1,2);
      iVar2 = iVar2 * iVar4 - (iVar3 - (int)auVar10._0_8_) * iVar5;
    }
  }
  param_1->Numerator = (iVar7 % 0x3c) * iVar9 + iVar6 * iVar8 * -0x3c + this->Frames % iVar9 + iVar2
  ;
  return (FFrameNumber)(int)param_1;
}

