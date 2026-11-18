// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 3

// MultiChannelIir @ 14f0759f0

MultiChannelIir * __thiscall
vraudio::MultiChannelIir::MultiChannelIir
          (MultiChannelIir *this,ulong64 param_1,ulong64 param_2,ulong64 param_3)

{
  this->num_channels_ = param_1;
  this->num_coefficients_ = param_3;
  this->delay_line_front_ = 0;
  AudioBuffer::AudioBuffer(&this->numerator_,1,param_1 * param_3);
  AudioBuffer::AudioBuffer(&this->denominator_,1,this->num_coefficients_ * this->num_channels_);
  AudioBuffer::AudioBuffer(&this->delay_line_,1,this->num_coefficients_ * this->num_channels_);
  return this;
}

// Create @ 14f075a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014f0765db) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unique_ptr<vraudio::MultiChannelIir,std::default_delete<vraudio::MultiChannelIir>_> __cdecl
vraudio::MultiChannelIir::Create
          (ulong64 param_1,ulong64 param_2,
          vector<std::vector<float,std::allocator<float>_>,std::allocator<std::vector<float,std::allocator<float>_>_>_>
          *param_3,vector<std::vector<float,std::allocator<float>_>,std::allocator<std::vector<float,std::allocator<float>_>_>_>
                   *param_4)

{
  float *pfVar1;
  vector<float,std::allocator<float>_> *pvVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  void *pvVar10;
  basic_ostream<char,std::char_traits<char>_> *pbVar11;
  ulong64 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulong64 uVar15;
  char *pcVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  char *pcVar21;
  ulong64 uVar22;
  vector<float,std::allocator<float>_> *pvVar23;
  float **ppfVar24;
  float fVar25;
  longlong *in_stack_00000028;
  undefined1 auStackY_1c8 [32];
  int iStack_17c;
  undefined1 local_178 [32];
  longlong *local_158;
  longlong *local_150;
  longlong *local_138;
  ulonglong *local_130;
  int *local_120;
  char *local_108;
  uint local_100;
  basic_ios<char,std::char_traits<char>_> local_f0;
  undefined4 local_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  lVar13 = (longlong)(param_4->_Mypair)._Myval2._Mylast -
           (longlong)(param_4->_Mypair)._Myval2._Myfirst;
  uVar20 = (ulonglong)_tls_index;
  lVar13 = lVar13 / 6 + (lVar13 >> 0x3f);
  local_90 = 0;
  if ((in_stack_00000028[1] - *in_stack_00000028) / 0x18 == (lVar13 >> 2) - (lVar13 >> 0x3f)) {
    bVar6 = false;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8) + 0x9d4c) <
         `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__), bVar6 = false,
       `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)
                 &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                  ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
      atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
      _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  else {
    FatalLogger::FatalLogger
              ((FatalLogger *)local_178,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\dsp\\multi_channel_iir.cc"
               ,0x21);
    bVar6 = true;
  }
  if (bVar6) {
    FatalLogger::~FatalLogger((FatalLogger *)local_178);
  }
  bVar6 = false;
  if ((in_stack_00000028[1] - *in_stack_00000028) / 0x18 == param_2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8) + 0x9d4c) <
         `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)
                 &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                  ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
      atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
      _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  else {
    bVar6 = true;
    FatalLogger::FatalLogger
              ((FatalLogger *)local_178,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\dsp\\multi_channel_iir.cc"
               ,0x22);
  }
  if (bVar6) {
    FatalLogger::~FatalLogger((FatalLogger *)local_178);
  }
  bVar6 = false;
  if ((param_2 & 3) == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8) + 0x9d4c) <
         `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)
                 &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                  ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
      atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
      _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  else {
    bVar6 = true;
    FatalLogger::FatalLogger
              ((FatalLogger *)local_178,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\dsp\\multi_channel_iir.cc"
               ,0x23);
  }
  if (bVar6) {
    FatalLogger::~FatalLogger((FatalLogger *)local_178);
  }
  bVar6 = false;
  if (param_2 == 0) {
    bVar6 = true;
    FatalLogger::FatalLogger
              ((FatalLogger *)local_178,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\dsp\\multi_channel_iir.cc"
               ,0x24);
  }
  else if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8) + 0x9d4c) <
            `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
            ::__l2::_thread_safe_static_guard_0__) &&
          (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                ::__l2::_thread_safe_static_guard_0__),
          `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1)) {
    std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
    atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
    _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (bVar6) {
    FatalLogger::~FatalLogger((FatalLogger *)local_178);
  }
  pvVar10 = ThreadLocalStoragePointer;
  fVar25 = __real_34000000;
  uVar17 = _UNK_15076add8;
  uVar22 = ___xmm_000000000000000f0000000000000000;
  uVar9 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  uVar19 = 0;
  if (param_2 != 0) {
    lVar13 = 0;
    do {
      if (*(longlong *)(lVar13 + 8 + *in_stack_00000028) -
          *(longlong *)(lVar13 + *in_stack_00000028) >> 2 == 0) {
        local_178._0_8_ =
             &std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::_vbtable_
        ;
        std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
                  (&local_f0);
        bVar6 = true;
        std::basic_ostream<char,std::char_traits<char>_>::
        basic_ostream<char,std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)local_178,
                   (basic_streambuf<char,std::char_traits<char>_> *)(local_178 + 8),false);
        *(undefined ***)(local_178 + *(int *)(local_178._0_8_ + 4)) =
             std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((longlong)&iStack_17c + (longlong)*(int *)(local_178._0_8_ + 4)) =
             *(int *)(local_178._0_8_ + 4) + -0x88;
        std::basic_streambuf<char,std::char_traits<char>_>::
        basic_streambuf<char,std::char_traits<char>_>
                  ((basic_streambuf<char,std::char_traits<char>_> *)(local_178 + 8));
        local_108 = (char *)0x0;
        local_178._8_8_ =
             std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        local_100 = 4;
        pbVar11 = std::operator<<<std::char_traits<char>_>
                            ((basic_ostream<char,std::char_traits<char>_> *)local_178,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\dsp\\multi_channel_iir.cc"
                            );
        pbVar11 = std::operator<<<std::char_traits<char>_>(pbVar11,":");
        pbVar11 = (basic_ostream<char,std::char_traits<char>_> *)
                  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar11,0x26);
        std::operator<<<std::char_traits<char>_>(pbVar11,": ");
      }
      else if ((*(int *)(*(longlong *)((longlong)pvVar10 + uVar20 * 8) + 0x9d4c) <
                `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) &&
              (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                    ::__l2::_thread_safe_static_guard_0__),
              `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
              ::__l2::_thread_safe_static_guard_0__ == -1)) {
        std::basic_ostream<char,std::char_traits<char>_>::
        basic_ostream<char,std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)
                   &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                    ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
        atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
        _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      if (bVar6) {
        bVar6 = false;
        local_88._8_8_ = 0;
        local_88._Ptr = (char *)0x0;
        local_78 = uVar22;
        uStack_70 = uVar17;
        if ((((byte)local_100 & 0x22) == 2) ||
           (pcVar21 = (char *)*local_130, pcVar21 == (char *)0x0)) {
          if (((local_100 & 4) == 0) && (*local_138 != 0)) {
            pcVar16 = (char *)*local_158;
            pcVar21 = (char *)(*local_138 + ((longlong)*local_120 - (longlong)pcVar16));
          }
          else {
            pcVar21 = (char *)0x0;
            pcVar16 = (char *)0x0;
          }
        }
        else {
          if (pcVar21 < local_108) {
            pcVar21 = local_108;
          }
          pcVar16 = (char *)*local_150;
          pcVar21 = pcVar21 + -(longlong)pcVar16;
        }
        if (pcVar16 != (char *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88,
                     pcVar16,(ulong64)pcVar21);
        }
        uVar14 = &local_88;
        if (0xf < uStack_70) {
          uVar14 = local_88._Ptr;
        }
        pbVar11 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                            ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                             (char *)uVar14,local_78);
        std::basic_ostream<char,std::char_traits<char>_>::operator<<
                  (pbVar11,std::endl<char,std::char_traits<char>_>);
        if (0xf < uStack_70) {
          uVar15 = uStack_70 + 1;
          uVar14 = local_88._Ptr;
          if (0xfff < uVar15) {
            uVar14 = *(undefined8 *)(local_88._Ptr + -8);
            uVar15 = uStack_70 + 0x28;
            if ((char *)0x1f < local_88._Ptr + (-8 - uVar14)) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)uVar14,uVar15);
        }
        std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::
        _vbase_destructor_((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *
                           )local_178);
      }
      if (fVar25 < (float)(**(uint **)(lVar13 + *in_stack_00000028) & uVar9)) {
        if ((*(int *)(*(longlong *)((longlong)pvVar10 + uVar20 * 8) + 0x9d4c) <
             `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          std::basic_ostream<char,std::char_traits<char>_>::
          basic_ostream<char,std::char_traits<char>_>
                    ((basic_ostream<char,std::char_traits<char>_> *)
                     &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                      ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false
                    );
          atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
          _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      else {
        local_178._0_8_ =
             &std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::_vbtable_
        ;
        std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
                  (&local_f0);
        bVar7 = true;
        std::basic_ostream<char,std::char_traits<char>_>::
        basic_ostream<char,std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)local_178,
                   (basic_streambuf<char,std::char_traits<char>_> *)(local_178 + 8),false);
        *(undefined ***)(local_178 + *(int *)(local_178._0_8_ + 4)) =
             std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((longlong)&iStack_17c + (longlong)*(int *)(local_178._0_8_ + 4)) =
             *(int *)(local_178._0_8_ + 4) + -0x88;
        std::basic_streambuf<char,std::char_traits<char>_>::
        basic_streambuf<char,std::char_traits<char>_>
                  ((basic_streambuf<char,std::char_traits<char>_> *)(local_178 + 8));
        local_108 = (char *)0x0;
        local_178._8_8_ =
             std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        local_100 = 4;
        pbVar11 = std::operator<<<std::char_traits<char>_>
                            ((basic_ostream<char,std::char_traits<char>_> *)local_178,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\dsp\\multi_channel_iir.cc"
                            );
        pbVar11 = std::operator<<<std::char_traits<char>_>(pbVar11,":");
        pbVar11 = (basic_ostream<char,std::char_traits<char>_> *)
                  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar11,0x28);
        std::operator<<<std::char_traits<char>_>(pbVar11,": ");
      }
      if (bVar7) {
        bVar7 = false;
        local_88._8_8_ = 0;
        local_88._Ptr = (char *)0x0;
        local_78 = uVar22;
        uStack_70 = uVar17;
        if ((((byte)local_100 & 0x22) == 2) ||
           (pcVar21 = (char *)*local_130, pcVar21 == (char *)0x0)) {
          if (((local_100 & 4) == 0) && (*local_138 != 0)) {
            pcVar16 = (char *)*local_158;
            pcVar21 = (char *)(*local_138 + ((longlong)*local_120 - (longlong)pcVar16));
          }
          else {
            pcVar21 = (char *)0x0;
            pcVar16 = (char *)0x0;
          }
        }
        else {
          if (pcVar21 < local_108) {
            pcVar21 = local_108;
          }
          pcVar16 = (char *)*local_150;
          pcVar21 = pcVar21 + -(longlong)pcVar16;
        }
        if (pcVar16 != (char *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88,
                     pcVar16,(ulong64)pcVar21);
        }
        uVar14 = &local_88;
        if (0xf < uStack_70) {
          uVar14 = local_88._Ptr;
        }
        pbVar11 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                            ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                             (char *)uVar14,local_78);
        std::basic_ostream<char,std::char_traits<char>_>::operator<<
                  (pbVar11,std::endl<char,std::char_traits<char>_>);
        if (0xf < uStack_70) {
          uVar15 = uStack_70 + 1;
          uVar14 = local_88._Ptr;
          if (0xfff < uVar15) {
            uVar14 = *(undefined8 *)(local_88._Ptr + -8);
            uVar15 = uStack_70 + 0x28;
            if ((char *)0x1f < local_88._Ptr + (-8 - uVar14)) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)uVar14,uVar15);
        }
        std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::
        _vbase_destructor_((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *
                           )local_178);
      }
      pvVar2 = (param_4->_Mypair)._Myval2._Myfirst;
      if (((*(longlong *)((longlong)&(pvVar2->_Mypair)._Myval2._Mylast + lVar13) -
            *(longlong *)((longlong)&(pvVar2->_Mypair)._Myval2._Myfirst + lVar13) ^
           *(longlong *)(lVar13 + 8 + *in_stack_00000028) -
           *(longlong *)(lVar13 + *in_stack_00000028)) & 0xfffffffffffffffcU) == 0) {
        if ((*(int *)(*(longlong *)((longlong)pvVar10 + uVar20 * 8) + 0x9d4c) <
             `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          std::basic_ostream<char,std::char_traits<char>_>::
          basic_ostream<char,std::char_traits<char>_>
                    ((basic_ostream<char,std::char_traits<char>_> *)
                     &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                      ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false
                    );
          atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
          _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      else {
        local_178._0_8_ =
             &std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::_vbtable_
        ;
        std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
                  (&local_f0);
        bVar8 = true;
        std::basic_ostream<char,std::char_traits<char>_>::
        basic_ostream<char,std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)local_178,
                   (basic_streambuf<char,std::char_traits<char>_> *)(local_178 + 8),false);
        *(undefined ***)(local_178 + *(int *)(local_178._0_8_ + 4)) =
             std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((longlong)&iStack_17c + (longlong)*(int *)(local_178._0_8_ + 4)) =
             *(int *)(local_178._0_8_ + 4) + -0x88;
        std::basic_streambuf<char,std::char_traits<char>_>::
        basic_streambuf<char,std::char_traits<char>_>
                  ((basic_streambuf<char,std::char_traits<char>_> *)(local_178 + 8));
        local_108 = (char *)0x0;
        local_178._8_8_ =
             std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        local_100 = 4;
        pbVar11 = std::operator<<<std::char_traits<char>_>
                            ((basic_ostream<char,std::char_traits<char>_> *)local_178,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\dsp\\multi_channel_iir.cc"
                            );
        pbVar11 = std::operator<<<std::char_traits<char>_>(pbVar11,":");
        pbVar11 = (basic_ostream<char,std::char_traits<char>_> *)
                  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar11,0x29);
        std::operator<<<std::char_traits<char>_>(pbVar11,": ");
      }
      if (bVar8) {
        bVar8 = false;
        local_88._8_8_ = 0;
        local_88._Ptr = (char *)0x0;
        local_78 = uVar22;
        uStack_70 = uVar17;
        if ((((byte)local_100 & 0x22) == 2) ||
           (pcVar21 = (char *)*local_130, pcVar21 == (char *)0x0)) {
          if (((local_100 & 4) == 0) && (*local_138 != 0)) {
            pcVar16 = (char *)*local_158;
            pcVar21 = (char *)(*local_138 + ((longlong)*local_120 - (longlong)pcVar16));
          }
          else {
            pcVar21 = (char *)0x0;
            pcVar16 = (char *)0x0;
          }
        }
        else {
          if (pcVar21 < local_108) {
            pcVar21 = local_108;
          }
          pcVar16 = (char *)*local_150;
          pcVar21 = pcVar21 + -(longlong)pcVar16;
        }
        if (pcVar16 != (char *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88,
                     pcVar16,(ulong64)pcVar21);
        }
        uVar14 = &local_88;
        if (0xf < uStack_70) {
          uVar14 = local_88._Ptr;
        }
        pbVar11 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                            ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                             (char *)uVar14,local_78);
        std::basic_ostream<char,std::char_traits<char>_>::operator<<
                  (pbVar11,std::endl<char,std::char_traits<char>_>);
        if (0xf < uStack_70) {
          uVar15 = uStack_70 + 1;
          uVar14 = local_88._Ptr;
          if (0xfff < uVar15) {
            uVar14 = *(undefined8 *)(local_88._Ptr + -8);
            uVar15 = uStack_70 + 0x28;
            if ((char *)0x1f < local_88._Ptr + (-8 - uVar14)) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)uVar14,uVar15);
        }
        std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::
        _vbase_destructor_((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *
                           )local_178);
      }
      uVar19 = uVar19 + 1;
      lVar13 = lVar13 + 0x18;
    } while (uVar19 < param_2);
    uVar20 = (ulonglong)_tls_index;
  }
  puVar12 = ::operator_new(0xf0);
  if (puVar12 == (ulong64 *)0x0) {
    puVar12 = (ulong64 *)0x0;
  }
  else {
    pvVar2 = (param_4->_Mypair)._Myval2._Myfirst;
    uVar22 = (longlong)(pvVar2->_Mypair)._Myval2._Mylast -
             (longlong)(pvVar2->_Mypair)._Myval2._Myfirst >> 2;
    puVar12[1] = uVar22;
    *puVar12 = param_2;
    puVar12[2] = 0;
    AudioBuffer::AudioBuffer((AudioBuffer *)(puVar12 + 3),1,uVar22 * param_2);
    AudioBuffer::AudioBuffer((AudioBuffer *)(puVar12 + 0xc),1,*puVar12 * puVar12[1]);
    AudioBuffer::AudioBuffer((AudioBuffer *)(puVar12 + 0x15),1,*puVar12 * puVar12[1]);
  }
  *(ulong64 **)param_1 = puVar12;
  if (puVar12 == (ulong64 *)0x0) {
    FatalLogger::FatalLogger
              ((FatalLogger *)local_178,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\dsp\\multi_channel_iir.cc"
               ,0x2e);
  }
  else if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8) + 0x9d4c) <
            `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
            ::__l2::_thread_safe_static_guard_0__) &&
          (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                ::__l2::_thread_safe_static_guard_0__),
          `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1)) {
    std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
    atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
    _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar9 = __xmm_80000000800000008000000080000000;
  uVar20 = 0;
  if (param_2 != 0) {
    pvVar2 = (param_4->_Mypair)._Myval2._Myfirst;
    ppfVar24 = &(pvVar2->_Mypair)._Myval2._Mylast;
    pvVar23 = pvVar2;
    do {
      pfVar3 = (pvVar23->_Mypair)._Myval2._Myfirst;
      uVar17 = 0;
      if ((longlong)*ppfVar24 - (longlong)pfVar3 >> 2 != 0) {
        lVar13 = uVar20 * 4;
        pfVar4 = *(float **)((longlong)pvVar23 + (*in_stack_00000028 - (longlong)pvVar2));
        do {
          *(float *)(lVar13 + **(longlong **)(*(longlong *)param_1 + 0x40)) =
               pfVar3[uVar17] / *pfVar4;
          fVar25 = *pfVar4;
          if (uVar17 != 0) {
            fVar25 = (float)((uint)fVar25 ^ uVar9);
          }
          pfVar1 = pfVar4 + uVar17;
          uVar17 = uVar17 + 1;
          *(float *)(lVar13 + **(longlong **)(*(longlong *)param_1 + 0x88)) = *pfVar1 / fVar25;
          lVar13 = lVar13 + param_2 * 4;
        } while (uVar17 < (ulonglong)
                          ((longlong)*ppfVar24 - (longlong)(pvVar23->_Mypair)._Myval2._Myfirst >> 2)
                );
      }
      uVar20 = uVar20 + 1;
      pvVar23 = pvVar23 + 1;
      ppfVar24 = ppfVar24 + 3;
    } while (uVar20 < param_2);
  }
  puVar5 = *(undefined8 **)(*(longlong *)param_1 + 0xd8);
  for (puVar18 = *(undefined8 **)(*(longlong *)param_1 + 0xd0); puVar18 != puVar5;
      puVar18 = puVar18 + 3) {
    *(undefined1 *)(puVar18 + 2) = 1;
    memset((void *)*puVar18,0,puVar18[1] << 2);
  }
  return (unique_ptr<vraudio::MultiChannelIir,std::default_delete<vraudio::MultiChannelIir>_>)
         (_Compressed_pair<std::default_delete<vraudio::MultiChannelIir>,vraudio::MultiChannelIir_*,1>
          )param_1;
}

// Process @ 14f076740

void __thiscall vraudio::MultiChannelIir::Process(MultiChannelIir *this,ChannelView *param_1)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulong64 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float *pfVar19;
  ulonglong uVar20;
  float *pfVar21;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulonglong local_res18;
  longlong local_res20;
  
  uVar20 = this->num_channels_;
  pfVar23 = param_1->begin_itr_;
  uVar18 = uVar20 >> 2;
  local_res18 = 0;
  uVar15 = param_1->size_ >> 2;
  pfVar3 = ((this->delay_line_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_;
  uVar13 = uVar18 * this->num_coefficients_;
  uVar17 = 1;
  if (1 < uVar13) {
    uVar17 = uVar13;
  }
  local_res20 = 0;
  if (uVar15 != 0) {
    uVar16 = this->delay_line_front_;
    lVar22 = (longlong)((this->numerator_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_ -
             (longlong)pfVar23;
    lVar24 = (uVar18 * 0x10 - (longlong)pfVar23) +
             (longlong)((this->denominator_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_;
    do {
      if (uVar20 != 0) {
        memmove(((this->delay_line_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_ +
                uVar16 * 4,param_1->begin_itr_ + local_res20,uVar20 * 4);
      }
      uVar20 = 0;
      pfVar19 = pfVar23;
      if (uVar18 != 0) {
        do {
          pfVar19[0] = 0.0;
          pfVar19[1] = 0.0;
          pfVar19[2] = 0.0;
          pfVar19[3] = 0.0;
          if (uVar18 < uVar17) {
            pfVar21 = (float *)(lVar24 + (longlong)pfVar19);
            uVar13 = uVar18;
            do {
              lVar1 = this->delay_line_front_ + uVar20;
              lVar14 = this->delay_line_front_ + uVar13;
              uVar13 = uVar13 + uVar18;
              pfVar2 = pfVar3 + ((lVar14 + uVar20) % uVar17) * 4;
              fVar25 = pfVar2[1];
              fVar26 = pfVar2[2];
              fVar27 = pfVar2[3];
              fVar28 = *pfVar21;
              fVar4 = pfVar21[1];
              fVar5 = pfVar21[2];
              fVar6 = pfVar21[3];
              pfVar21 = pfVar21 + uVar18 * 4;
              pfVar10 = pfVar3 + lVar1 * 4;
              fVar7 = pfVar10[1];
              fVar8 = pfVar10[2];
              fVar9 = pfVar10[3];
              pfVar11 = pfVar3 + lVar1 * 4;
              *pfVar11 = *pfVar2 * fVar28 + *pfVar10;
              pfVar11[1] = fVar25 * fVar4 + fVar7;
              pfVar11[2] = fVar26 * fVar5 + fVar8;
              pfVar11[3] = fVar27 * fVar6 + fVar9;
            } while (uVar13 < uVar17);
          }
          uVar13 = 0;
          if (uVar17 != 0) {
            fVar25 = *pfVar19;
            fVar26 = pfVar19[1];
            fVar27 = pfVar19[2];
            fVar28 = pfVar19[3];
            pfVar21 = (float *)((longlong)pfVar19 + lVar22);
            do {
              lVar1 = uVar13 + uVar20;
              uVar13 = uVar13 + uVar18;
              pfVar2 = pfVar3 + ((lVar1 + this->delay_line_front_) % uVar17) * 4;
              fVar4 = *pfVar21;
              pfVar10 = pfVar21 + 1;
              pfVar11 = pfVar21 + 2;
              pfVar12 = pfVar21 + 3;
              pfVar21 = pfVar21 + uVar18 * 4;
              fVar25 = fVar25 + *pfVar2 * fVar4;
              fVar26 = fVar26 + pfVar2[1] * *pfVar10;
              fVar27 = fVar27 + pfVar2[2] * *pfVar11;
              fVar28 = fVar28 + pfVar2[3] * *pfVar12;
              *pfVar19 = fVar25;
              pfVar19[1] = fVar26;
              pfVar19[2] = fVar27;
              pfVar19[3] = fVar28;
            } while (uVar13 < uVar17);
          }
          uVar20 = uVar20 + 1;
          pfVar19 = pfVar19 + 4;
        } while (uVar20 < uVar18);
      }
      uVar20 = this->num_channels_;
      uVar16 = (((longlong)(int)this->delay_line_front_ - uVar18) + uVar17) % uVar17;
      lVar24 = lVar24 + uVar18 * -0x10;
      this->delay_line_front_ = uVar16;
      local_res18 = local_res18 + uVar18;
      local_res20 = local_res20 + uVar20;
      pfVar23 = pfVar23 + uVar18 * 4;
      lVar22 = lVar22 + uVar18 * -0x10;
    } while (local_res18 < uVar15);
  }
  return;
}

