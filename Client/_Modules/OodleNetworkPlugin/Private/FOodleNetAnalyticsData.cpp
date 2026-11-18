// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OodleNetworkPlugin
// Functions: 3

// FOodleNetAnalyticsData @ 14e293560

FOodleNetAnalyticsData * __thiscall
FOodleNetAnalyticsData::FOodleNetAnalyticsData(FOodleNetAnalyticsData *this)

{
  FNetAnalyticsData::FNetAnalyticsData((FNetAnalyticsData *)this);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x80 = 0;
  *(undefined8 *)&this->field_0x88 = 0;
  *(undefined8 *)&this->field_0x90 = 0;
  *(undefined8 *)&this->field_0x98 = 0;
  *(undefined8 *)&this->field_0xa0 = 0;
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined ***)this = &_vftable__for__FNetAnalyticsData__;
  *(undefined ***)&this->field_0x20 = &_vftable__for__FOodleNetworkAnalyticsVars__;
  return this;
}

// GetAnalyticsEventName @ 14e295cc0

wchar_t * __thiscall FOodleNetAnalyticsData::GetAnalyticsEventName(FOodleNetAnalyticsData *this)

{
  return L"Oodle.Stats";
}

// SendAnalytics @ 14e29b980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOodleNetAnalyticsData::SendAnalytics(FOodleNetAnalyticsData *this)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  schar local_res8 [8];
  schar local_res10 [8];
  schar local_res18 [8];
  schar local_res20 [8];
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_e8;
  schar local_d8;
  schar local_d7 [3];
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  uint local_c0 [2];
  FString local_b8;
  ulong64 local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  ulong64 local_88;
  ulong64 local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50 [2];
  
  local_b8.Data.AllocatorInstance.Data = *(FScriptContainerElement **)&this->field_0x18;
  if ((((((((*(longlong *)&this->field_0x28 != 0) || (*(longlong *)&this->field_0x30 != 0)) ||
          (*(longlong *)&this->field_0x38 != 0)) ||
         ((*(longlong *)&this->field_0x40 != 0 || (*(longlong *)&this->field_0x48 != 0)))) ||
        (*(longlong *)&this->field_0x50 != 0)) ||
       (((*(longlong *)&this->field_0x58 != 0 || (*(longlong *)&this->field_0x60 != 0)) ||
        ((*(longlong *)&this->field_0x68 != 0 ||
         (((*(longlong *)&this->field_0x70 != 0 || (*(longlong *)&this->field_0x78 != 0)) ||
          (*(longlong *)&this->field_0x80 != 0)))))))) ||
      (((*(longlong *)&this->field_0x88 != 0 || (*(longlong *)&this->field_0x90 != 0)) ||
       ((*(longlong *)&this->field_0x98 != 0 ||
        (((*(longlong *)&this->field_0xa0 != 0 || (*(longlong *)&this->field_0xa8 != 0)) ||
         ((*(longlong *)&this->field_0xb0 != 0 ||
          (((*(longlong *)&this->field_0xb8 != 0 || (*(int *)&this->field_0xc0 != 0)) ||
           (*(int *)&this->field_0xc4 != 0)))))))))))) &&
     (*(longlong *)local_b8.Data.AllocatorInstance.Data != 0)) {
    local_a8 = *(longlong *)&this->field_0x90 +
               *(longlong *)&this->field_0x88 + *(longlong *)&this->field_0x80;
    lVar3 = *(longlong *)&this->field_0x50;
    uVar11 = *(longlong *)&this->field_0x40 + lVar3;
    uVar1 = *(ulonglong *)&this->field_0x38 + lVar3;
    local_70 = *(ulonglong *)&this->field_0x48 + lVar3;
    local_80 = *(longlong *)&this->field_0x78 + *(longlong *)&this->field_0x60 + local_a8;
    lVar3 = *(longlong *)&this->field_0xb0;
    lVar9 = *(longlong *)&this->field_0xb8 + lVar3;
    local_78 = *(longlong *)&this->field_0xa0 + lVar9;
    uVar10 = *(longlong *)&this->field_0xa8 + lVar9;
    uVar2 = lVar9 + *(longlong *)&this->field_0x98;
    local_d4 = (int)((__real_3ff0000000000000 - (double)uVar11 / (double)local_70) *
                    __real_4059000000000000);
    local_res8[0] = (schar)local_d4;
    local_d0 = (int)((__real_3ff0000000000000 -
                     (double)local_78 * (__real_3ff0000000000000 / (double)uVar10)) *
                    __real_4059000000000000);
    local_res10[0] = (schar)local_d0;
    local_a0 = local_70 - uVar11;
    local_98 = uVar10 - local_78;
    local_cc = (int)((__real_3ff0000000000000 - (double)uVar1 / (double)local_70) *
                    __real_4059000000000000);
    local_res18[0] = (schar)local_cc;
    local_50[0] = uVar10 - uVar2;
    local_c8 = (int)((__real_3ff0000000000000 -
                     (double)uVar2 * (__real_3ff0000000000000 / (double)uVar10)) *
                    __real_4059000000000000);
    local_res20[0] = (schar)local_c8;
    local_90 = local_70 - uVar1;
    local_c4 = (int)((__real_3ff0000000000000 -
                     (double)*(ulonglong *)&this->field_0x38 /
                     (double)*(ulonglong *)&this->field_0x48) * __real_4059000000000000);
    local_d8 = (schar)local_c4;
    local_c0[0] = *(int *)&this->field_0xc0 - *(int *)&this->field_0xc4;
    local_d7[0] = (schar)(int)((__real_3ff0000000000000 -
                               (double)(ulonglong)(lVar3 + *(longlong *)&this->field_0x98) /
                               (double)(ulonglong)(*(longlong *)&this->field_0xa8 + lVar3)) *
                              __real_4059000000000000);
    local_88 = local_a8;
    local_68 = local_a0;
    local_60 = local_98;
    local_58 = local_90;
    if ((((4 < (byte)OodleNetworkHandlerComponentLog._0_1_) &&
         (UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
         4 < (byte)OodleNetworkHandlerComponentLog._0_1_)) &&
        (((UE::Logging::Private::BasicLog<5>
                     (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
          4 < (byte)OodleNetworkHandlerComponentLog._0_1_ &&
          ((UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
           4 < (byte)OodleNetworkHandlerComponentLog._0_1_ &&
           (UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
           4 < (byte)OodleNetworkHandlerComponentLog._0_1_)))) &&
         ((UE::Logging::Private::BasicLog<5>
                     (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
          4 < (byte)OodleNetworkHandlerComponentLog._0_1_ &&
          ((((UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
             4 < (byte)OodleNetworkHandlerComponentLog._0_1_ &&
             (UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
             4 < (byte)OodleNetworkHandlerComponentLog._0_1_)) &&
            (UE::Logging::Private::BasicLog<5>
                       ((FStaticBasicLogRecord *)&PTR_u____OutCompresse_152e37048,
                        (FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
            4 < (byte)OodleNetworkHandlerComponentLog._0_1_)) &&
           ((UE::Logging::Private::BasicLog<5>
                       (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
            4 < (byte)OodleNetworkHandlerComponentLog._0_1_ &&
            (UE::Logging::Private::BasicLog<5>
                       (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
            4 < (byte)OodleNetworkHandlerComponentLog._0_1_)))))))))) &&
       ((((UE::Logging::Private::BasicLog<5>
                     (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
          4 < (byte)OodleNetworkHandlerComponentLog._0_1_ &&
          ((UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
           4 < (byte)OodleNetworkHandlerComponentLog._0_1_ &&
           (UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
           4 < (byte)OodleNetworkHandlerComponentLog._0_1_)))) &&
         (UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
         4 < (byte)OodleNetworkHandlerComponentLog._0_1_)) &&
        ((((UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
           4 < (byte)OodleNetworkHandlerComponentLog._0_1_ &&
           (UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
           4 < (byte)OodleNetworkHandlerComponentLog._0_1_)) &&
          (UE::Logging::Private::BasicLog<5>
                     (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
          4 < (byte)OodleNetworkHandlerComponentLog._0_1_)) &&
         (((UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
           4 < (byte)OodleNetworkHandlerComponentLog._0_1_ &&
           (UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
           4 < (byte)OodleNetworkHandlerComponentLog._0_1_)) &&
          ((UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
           4 < (byte)OodleNetworkHandlerComponentLog._0_1_ &&
           (UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
           4 < (byte)OodleNetworkHandlerComponentLog._0_1_)))))))))) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
    }
    if ((((4 < (byte)OodleNetworkHandlerComponentLog._0_1_) &&
         (UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
         4 < (byte)OodleNetworkHandlerComponentLog._0_1_)) &&
        ((UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
         4 < (byte)OodleNetworkHandlerComponentLog._0_1_ &&
         (((UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
           4 < (byte)OodleNetworkHandlerComponentLog._0_1_ &&
           (UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
           4 < (byte)OodleNetworkHandlerComponentLog._0_1_)) &&
          (UE::Logging::Private::BasicLog<5>
                     (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
          4 < (byte)OodleNetworkHandlerComponentLog._0_1_)))))) &&
       (((((UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
           4 < (byte)OodleNetworkHandlerComponentLog._0_1_ &&
           (UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
           4 < (byte)OodleNetworkHandlerComponentLog._0_1_)) &&
          (UE::Logging::Private::BasicLog<5>
                     (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
          4 < (byte)OodleNetworkHandlerComponentLog._0_1_)) &&
         ((UE::Logging::Private::BasicLog<5>
                     (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
          4 < (byte)OodleNetworkHandlerComponentLog._0_1_ &&
          (UE::Logging::Private::BasicLog<5>
                     (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
          4 < (byte)OodleNetworkHandlerComponentLog._0_1_)))) &&
        (UE::Logging::Private::BasicLog<5>
                   (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
        4 < (byte)OodleNetworkHandlerComponentLog._0_1_)))) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
    }
    if (4 < (byte)OodleNetworkHandlerComponentLog._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
    }
    if ((4 < (byte)OodleNetworkHandlerComponentLog._0_1_) &&
       (UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog),
       4 < (byte)OodleNetworkHandlerComponentLog._0_1_)) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&OodleNetworkHandlerComponentLog);
    }
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FString::FString(&EZAttrib_InCompressedNum,L"InCompressedNum");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_InCompressedNum__);
      _Init_thread_footer(&::_TSS0);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FString::FString(&EZAttrib_InNotCompressedNum,L"InNotCompressedNum");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_InNotCompressedNum__);
      _Init_thread_footer(&::_TSS1);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      ::FString::FString(&EZAttrib_InCompressedWithOverheadLengthTotal,
                         L"InCompressedWithOverheadLengthTotal");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_InCompressedWithOverheadLengthTotal__);
      _Init_thread_footer(&::_TSS2);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
      ::FString::FString(&EZAttrib_InCompressedLengthTotal,L"InCompressedLengthTotal");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_InCompressedLengthTotal__);
      _Init_thread_footer(&::_TSS3);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
      ::FString::FString(&EZAttrib_InDecompressedLengthTotal,L"InDecompressedLengthTotal");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_InDecompressedLengthTotal__);
      _Init_thread_footer(&::_TSS4);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
      ::FString::FString(&EZAttrib_InNotCompressedLengthTotal,L"InNotCompressedLengthTotal");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_InNotCompressedLengthTotal__);
      _Init_thread_footer(&::_TSS5);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
      ::FString::FString(&EZAttrib_OutCompressedNum,L"OutCompressedNum");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutCompressedNum__);
      _Init_thread_footer(&::_TSS6);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
      ::FString::FString(&EZAttrib_OutNotCompressedFailedNum,L"OutNotCompressedFailedNum");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutNotCompressedFailedNum__);
      _Init_thread_footer(&::_TSS7);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
      ::FString::FString(&EZAttrib_OutNotCompressedFailedAckOnlyNum,
                         L"OutNotCompressedFailedAckOnlyNum");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutNotCompressedFailedAckOnlyNum__);
      _Init_thread_footer(&::_TSS8);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS9) && (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
      ::FString::FString(&EZAttrib_OutNotCompressedFailedKeepAliveNum,
                         L"OutNotCompressedFailedKeepAliveNum");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutNotCompressedFailedKeepAliveNum__);
      _Init_thread_footer(&::_TSS9);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS10) && (_Init_thread_header(&::_TSS10), ::_TSS10 == -1)) {
      ::FString::FString(&EZAttrib_OutNotCompressedBoundedNum,L"OutNotCompressedBoundedNum");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutNotCompressedBoundedNum__);
      _Init_thread_footer(&::_TSS10);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS11) && (_Init_thread_header(&::_TSS11), ::_TSS11 == -1)) {
      ::FString::FString(&EZAttrib_OutNotCompressedFlaggedNum,L"OutNotCompressedFlaggedNum");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutNotCompressedFlaggedNum__);
      _Init_thread_footer(&::_TSS11);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS12) && (_Init_thread_header(&::_TSS12), ::_TSS12 == -1)) {
      ::FString::FString(&EZAttrib_OutNotCompressedSkippedNum,L"OutNotCompressedSkippedNum");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutNotCompressedSkippedNum__);
      _Init_thread_footer(&::_TSS12);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS13) && (_Init_thread_header(&::_TSS13), ::_TSS13 == -1)) {
      ::FString::FString(&EZAttrib_OutNotCompressedClientDisabledNum,
                         L"OutNotCompressedClientDisabledNum");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutNotCompressedClientDisabledNum__);
      _Init_thread_footer(&::_TSS13);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS14) && (_Init_thread_header(&::_TSS14), ::_TSS14 == -1)) {
      ::FString::FString(&EZAttrib_OutNotCompressedTooSmallNum,L"OutNotCompressedTooSmallNum");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutNotCompressedTooSmallNum__);
      _Init_thread_footer(&::_TSS14);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS15) && (_Init_thread_header(&::_TSS15), ::_TSS15 == -1)) {
      ::FString::FString(&EZAttrib_OutCompressedWithOverheadLengthTotal,
                         L"OutCompressedWithOverheadLengthTotal");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutCompressedWithOverheadLengthTotal__);
      _Init_thread_footer(&::_TSS15);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < _TSS16) && (_Init_thread_header(&_TSS16), _TSS16 == -1)) {
      ::FString::FString(&EZAttrib_OutCompressedLengthTotal,L"OutCompressedLengthTotal");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutCompressedLengthTotal__);
      _Init_thread_footer(&_TSS16);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < _TSS17) && (_Init_thread_header(&_TSS17), _TSS17 == -1)) {
      ::FString::FString(&EZAttrib_OutBeforeCompressedLengthTotal,L"OutBeforeCompressedLengthTotal")
      ;
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutBeforeCompressedLengthTotal__);
      _Init_thread_footer(&_TSS17);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < _TSS18) && (_Init_thread_header(&_TSS18), _TSS18 == -1)) {
      ::FString::FString(&EZAttrib_OutNotCompressedFailedLengthTotal,
                         L"OutNotCompressedFailedLengthTotal");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutNotCompressedFailedLengthTotal__);
      _Init_thread_footer(&_TSS18);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < _TSS19) && (_Init_thread_header(&_TSS19), _TSS19 == -1)) {
      ::FString::FString(&EZAttrib_OutNotCompressedSkippedLengthTotal,
                         L"OutNotCompressedSkippedLengthTotal");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutNotCompressedSkippedLengthTotal__);
      _Init_thread_footer(&_TSS19);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < _TSS20) && (_Init_thread_header(&_TSS20), _TSS20 == -1)) {
      ::FString::FString(&EZAttrib_OutNotCompressedNumTotal,L"OutNotCompressedNumTotal");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutNotCompressedNumTotal__);
      _Init_thread_footer(&_TSS20);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < _TSS21) && (_Init_thread_header(&_TSS21), _TSS21 == -1)) {
      ::FString::FString(&EZAttrib_OutPostLengthTotal,L"OutPostLengthTotal");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutPostLengthTotal__);
      _Init_thread_footer(&_TSS21);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < _TSS22) && (_Init_thread_header(&_TSS22), _TSS22 == -1)) {
      ::FString::FString(&EZAttrib_InPostLengthTotal,L"InPostLengthTotal");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_InPostLengthTotal__);
      _Init_thread_footer(&_TSS22);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < _TSS23) && (_Init_thread_header(&_TSS23), _TSS23 == -1)) {
      ::FString::FString(&EZAttrib_InSavingsPercentTotal,L"InSavingsPercentTotal");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_InSavingsPercentTotal__);
      _Init_thread_footer(&_TSS23);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < _TSS24) && (_Init_thread_header(&_TSS24), _TSS24 == -1)) {
      ::FString::FString(&EZAttrib_OutSavingsPercentTotal,L"OutSavingsPercentTotal");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutSavingsPercentTotal__);
      _Init_thread_footer(&_TSS24);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < _TSS25) && (_Init_thread_header(&_TSS25), _TSS25 == -1)) {
      ::FString::FString(&EZAttrib_InSavingsBytesTotal,L"InSavingsBytesTotal");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_InSavingsBytesTotal__);
      _Init_thread_footer(&_TSS25);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < _TSS26) && (_Init_thread_header(&_TSS26), _TSS26 == -1)) {
      ::FString::FString(&EZAttrib_OutSavingsBytesTotal,L"OutSavingsBytesTotal");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutSavingsBytesTotal__);
      _Init_thread_footer(&_TSS26);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < _TSS27) && (_Init_thread_header(&_TSS27), _TSS27 == -1)) {
      ::FString::FString(&EZAttrib_InSavingsWithOverheadPercentTotal,
                         L"InSavingsWithOverheadPercentTotal");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_InSavingsWithOverheadPercentTotal__);
      _Init_thread_footer(&_TSS27);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < _TSS28) && (_Init_thread_header(&_TSS28), _TSS28 == -1)) {
      ::FString::FString(&EZAttrib_OutSavingsWithOverheadPercentTotal,
                         L"OutSavingsWithOverheadPercentTotal");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutSavingsWithOverheadPercentTotal__);
      _Init_thread_footer(&_TSS28);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < _TSS29) && (_Init_thread_header(&_TSS29), _TSS29 == -1)) {
      ::FString::FString(&EZAttrib_InSavingsWithOverheadBytesTotal,
                         L"InSavingsWithOverheadBytesTotal");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_InSavingsWithOverheadBytesTotal__);
      _Init_thread_footer(&_TSS29);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < _TSS30) && (_Init_thread_header(&_TSS30), _TSS30 == -1)) {
      ::FString::FString(&EZAttrib_OutSavingsWithOverheadBytesTotal,
                         L"OutSavingsWithOverheadBytesTotal");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutSavingsWithOverheadBytesTotal__);
      _Init_thread_footer(&_TSS30);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < _TSS31) && (_Init_thread_header(&_TSS31), _TSS31 == -1)) {
      ::FString::FString(&EZAttrib_InAttemptedSavingsWithOverheadPercentTotal,
                         L"InAttemptedSavingsWithOverheadPercentTotal");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_InAttemptedSavingsWithOverheadPercentTotal__);
      _Init_thread_footer(&_TSS31);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < _TSS32) && (_Init_thread_header(&_TSS32), _TSS32 == -1)) {
      ::FString::FString(&EZAttrib_OutAttemptedSavingsWithOverheadPercentTotal,
                         L"OutAttemptedSavingsWithOverheadPercentTotal");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_OutAttemptedSavingsWithOverheadPercentTotal__)
      ;
      _Init_thread_footer(&_TSS32);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < _TSS33) && (_Init_thread_header(&_TSS33), _TSS33 == -1)) {
      ::FString::FString(&EZAttrib_NumOodleNetworkHandlers,L"NumOodleNetworkHandlers");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_NumOodleNetworkHandlers__);
      _Init_thread_footer(&_TSS33);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < _TSS34) && (_Init_thread_header(&_TSS34), _TSS34 == -1)) {
      ::FString::FString(&EZAttrib_NumOodleNetworkHandlersCompressionEnabled,
                         L"NumOodleNetworkHandlersCompressionEnabled");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_NumOodleNetworkHandlersCompressionEnabled__);
      _Init_thread_footer(&_TSS34);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < _TSS35) && (_Init_thread_header(&_TSS35), _TSS35 == -1)) {
      ::FString::FString(&EZAttrib_NumOodleNetworkHandlersCompressionDisabled,
                         L"NumOodleNetworkHandlersCompressionDisabled");
      atexit(`FOodleNetAnalyticsData::SendAnalytics'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_NumOodleNetworkHandlersCompressionDisabled__);
      _Init_thread_footer(&_TSS35);
    }
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayMax = 0;
    DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)0x0,0);
    local_e8.ArrayNum = 0;
    if (local_e8.ArrayMax != 0x24) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0x24,&local_e8.AllocatorInstance,0,&local_e8.ArrayMax);
    }
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_InCompressedNum,(ulong64 *)&this->field_0x28);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_InNotCompressedNum,(ulong64 *)&this->field_0x30);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_InCompressedWithOverheadLengthTotal,(ulong64 *)&this->field_0x38)
    ;
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_InCompressedLengthTotal,(ulong64 *)&this->field_0x40);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_InDecompressedLengthTotal,(ulong64 *)&this->field_0x48);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_InNotCompressedLengthTotal,(ulong64 *)&this->field_0x50);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_OutCompressedNum,(ulong64 *)&this->field_0x58);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_OutNotCompressedFailedNum,(ulong64 *)&this->field_0x60);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_OutNotCompressedFailedAckOnlyNum,(ulong64 *)&this->field_0x68);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_OutNotCompressedFailedKeepAliveNum,(ulong64 *)&this->field_0x70);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_OutNotCompressedBoundedNum,(ulong64 *)&this->field_0x78);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_OutNotCompressedFlaggedNum,(ulong64 *)&this->field_0x80);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_OutNotCompressedSkippedNum,&local_88);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_OutNotCompressedClientDisabledNum,(ulong64 *)&this->field_0x88);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_OutNotCompressedTooSmallNum,(ulong64 *)&this->field_0x90);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_OutCompressedWithOverheadLengthTotal,(ulong64 *)&this->field_0x98
              );
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_OutCompressedLengthTotal,(ulong64 *)&this->field_0xa0);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_OutBeforeCompressedLengthTotal,(ulong64 *)&this->field_0xa8);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_OutNotCompressedFailedLengthTotal,(ulong64 *)&this->field_0xb0);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_OutNotCompressedSkippedLengthTotal,(ulong64 *)&this->field_0xb8);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_OutNotCompressedNumTotal,&local_80);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_OutPostLengthTotal,&local_78);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned___int64>
              (&local_e8,&EZAttrib_InPostLengthTotal,&local_70);
    ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,signed_char>
              (&local_e8,&EZAttrib_InSavingsPercentTotal,local_res8);
    ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,signed_char>
              (&local_e8,&EZAttrib_OutSavingsPercentTotal,local_res10);
    ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,__int64>
              (&local_e8,&EZAttrib_InSavingsBytesTotal,&local_68);
    ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,__int64>
              (&local_e8,&EZAttrib_OutSavingsBytesTotal,&local_60);
    ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,signed_char>
              (&local_e8,&EZAttrib_InSavingsWithOverheadPercentTotal,local_res18);
    ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,signed_char>
              (&local_e8,&EZAttrib_OutSavingsWithOverheadPercentTotal,local_res20);
    ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,__int64>
              (&local_e8,&EZAttrib_InSavingsWithOverheadBytesTotal,&local_58);
    ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,__int64>
              (&local_e8,&EZAttrib_OutSavingsWithOverheadBytesTotal,local_50);
    ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,signed_char>
              (&local_e8,&EZAttrib_InAttemptedSavingsWithOverheadPercentTotal,&local_d8);
    ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,signed_char>
              (&local_e8,&EZAttrib_OutAttemptedSavingsWithOverheadPercentTotal,local_d7);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned_int>
              (&local_e8,&EZAttrib_NumOodleNetworkHandlers,(uint *)&this->field_0xc0);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned_int>
              (&local_e8,&EZAttrib_NumOodleNetworkHandlersCompressionEnabled,
               (uint *)&this->field_0xc4);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned_int>
              (&local_e8,&EZAttrib_NumOodleNetworkHandlersCompressionDisabled,local_c0);
    FNetAnalyticsAggregator::AppendGameInstanceAttributes
              (*(FNetAnalyticsAggregator **)&this->field_0x18,&local_e8);
    FVar6.Data = local_b8.Data.AllocatorInstance.Data;
    if ((*(longlong *)local_b8.Data.AllocatorInstance.Data == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar4 = *(longlong **)FVar6.Data;
    pcVar5 = *(code **)(*plVar4 + 0x80);
    pwVar8 = (wchar_t *)(**(code **)(*(longlong *)this + 0x20))(this);
    ::FString::FString(&local_b8,pwVar8);
    (*pcVar5)(plVar4,&local_b8,&local_e8);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    DestructItems<FAnalyticsEventAttribute,int>
              ((FAnalyticsEventAttribute *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
    if ((FAnalyticsEventAttribute *)local_e8.AllocatorInstance.Data !=
        (FAnalyticsEventAttribute *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
  }
  return;
}

