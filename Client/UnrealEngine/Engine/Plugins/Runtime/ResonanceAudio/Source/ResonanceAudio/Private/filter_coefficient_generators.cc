// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 4

// ComputeBandPassBiquadCoefficients @ 14f073790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

BiquadCoefficients * __cdecl
vraudio::ComputeBandPassBiquadCoefficients
          (BiquadCoefficients *__return_storage_ptr__,int param_1,float param_2,int param_3)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  bool bVar2;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float fVar3;
  float fVar4;
  int iStack_11c;
  undefined1 local_118 [112];
  char *local_a8;
  int local_a0;
  basic_ios<char,std::char_traits<char>_> local_90;
  
  bVar2 = false;
  if (param_2 < (float)param_1 * __real_3f000000) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        std::basic_ostream<char,std::char_traits<char>_>::
        basic_ostream<char,std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)
                   &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                    ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
        atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
        _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
  }
  else {
    local_118._0_8_ =
         &std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::_vbtable_;
    std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_90)
    ;
    std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)local_118,
               (basic_streambuf<char,std::char_traits<char>_> *)(local_118 + 8),false);
    *(undefined ***)(local_118 + *(int *)(local_118._0_8_ + 4)) =
         std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118._0_8_ + 4)) =
         *(int *)(local_118._0_8_ + 4) + -0x88;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)(local_118 + 8));
    local_a8 = (char *)0x0;
    local_118._8_8_ =
         std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_a0 = 4;
    pbVar1 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)local_118,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\dsp\\filter_coefficient_generators.cc"
                       );
    pbVar1 = std::operator<<<std::char_traits<char>_>(pbVar1,":");
    pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)
             std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,0x38);
    std::operator<<<std::char_traits<char>_>(pbVar1,": ");
    bVar2 = true;
  }
  if (bVar2) {
    FatalLogger::~FatalLogger((FatalLogger *)local_118);
  }
  fVar4 = param_2 * __real_40c90fdb;
  __libm_sse2_sincosf_();
  fVar4 = sinhf(((float)param_3 * ___real_3eb17218 * (fVar4 / (float)param_1)) / extraout_XMM0_Da);
  fVar4 = fVar4 * extraout_XMM0_Da;
  fVar3 = __real_3f800000 - fVar4;
  (__return_storage_ptr__->a)._Elems[0] = fVar4 + __real_3f800000;
  (__return_storage_ptr__->a)._Elems[1] = extraout_XMM0_Db * __real_c0000000;
  (__return_storage_ptr__->a)._Elems[2] = fVar3;
  (__return_storage_ptr__->b)._Elems[0] = fVar4;
  (__return_storage_ptr__->b)._Elems[1] = 0.0;
  (__return_storage_ptr__->b)._Elems[2] =
       (float)((uint)fVar4 ^ __xmm_80000000800000008000000080000000);
  return __return_storage_ptr__;
}

// ComputeDualBandBiquadCoefficients @ 14f0739d0

void __cdecl
vraudio::ComputeDualBandBiquadCoefficients
          (int param_1,float param_2,BiquadCoefficients *param_3,BiquadCoefficients *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = tanf((param_2 * __real_40490fdb) / (float)param_1);
  fVar2 = __real_3f800000;
  (param_3->a)._Elems[0] = 1.0;
  fVar3 = fVar1 * fVar1;
  fVar4 = fVar2 / (fVar1 + fVar1 + fVar3 + fVar2);
  (param_3->a)._Elems[1] = (((fVar3 - fVar2) + fVar3) - fVar2) * fVar4;
  (param_3->a)._Elems[2] = ((fVar3 - (fVar1 + fVar1)) + fVar2) * fVar4;
  memmove(param_4,param_3,0xc);
  fVar3 = fVar4 * fVar3;
  (param_3->b)._Elems[0] = fVar3;
  (param_3->b)._Elems[1] = fVar3 + fVar3;
  fVar2 = fVar4 * __real_c0000000;
  (param_3->b)._Elems[2] = fVar3;
  (param_4->b)._Elems[0] = fVar4;
  (param_4->b)._Elems[1] = fVar2;
  (param_4->b)._Elems[2] = fVar4;
  return;
}

// ComputeLowPassBiquadCoefficients @ 14f073ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

BiquadCoefficients * __cdecl
vraudio::ComputeLowPassBiquadCoefficients
          (BiquadCoefficients *__return_storage_ptr__,int param_1,float param_2,float param_3)

{
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = param_3 * param_3 * param_3;
  __libm_sse2_sincosf_();
  fVar4 = extraout_XMM0_Da *
          (__real_3f000000 /
          (fVar3 * param_3 * ___real_36299ad3 + fVar3 * ___real_39447975 +
          param_3 * ___real_3de95d25 + ___real_3f7fc1a1 + param_3 * param_3 * ___real_3bcac69c));
  fVar2 = __real_3f800000 - extraout_XMM0_Db;
  fVar3 = __real_3f800000 - fVar4;
  fVar1 = fVar2 * __real_3f000000;
  (__return_storage_ptr__->a)._Elems[0] = fVar4 + __real_3f800000;
  (__return_storage_ptr__->a)._Elems[1] = extraout_XMM0_Db * __real_c0000000;
  (__return_storage_ptr__->a)._Elems[2] = fVar3;
  (__return_storage_ptr__->b)._Elems[0] = fVar1;
  (__return_storage_ptr__->b)._Elems[1] = fVar2;
  (__return_storage_ptr__->b)._Elems[2] = fVar1;
  return __return_storage_ptr__;
}

// ComputeLowPassMonoPoleCoefficient @ 14f073bf0

float __cdecl vraudio::ComputeLowPassMonoPoleCoefficient(float param_1,int param_2)

{
  if (__real_41a00000 < param_1) {
    return (float)param_2 / (param_1 * __real_40c90fdb + (float)param_2);
  }
  return 0.0;
}

