// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// CheckFalseMessage @ 141c92d30

void __thiscall
FIsNearlyEqualByULPTestClass::CheckFalseMessage
          (FIsNearlyEqualByULPTestClass *this,FString *param_1,bool param_2)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FAutomationTestFramework *pFVar3;
  wchar_t *pwVar4;
  FString local_18;
  
  if (param_2) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    if ((param_1->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_18,pwVar4);
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// CheckMessage @ 141c92db0

void __thiscall
FIsNearlyEqualByULPTestClass::CheckMessage
          (FIsNearlyEqualByULPTestClass *this,FString *param_1,bool param_2)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FAutomationTestFramework *pFVar3;
  wchar_t *pwVar4;
  FString local_18;
  
  if (!param_2) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    if ((param_1->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_18,pwVar4);
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// IsNearlyEqualByULPTest @ 141c94550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(FIsNearlyEqualByULPTestClass *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  code *pcVar4;
  float *pfVar5;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [5];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest'::__l2::
             _dynamic_atexit_destructor_for___S21__);
      ::FString::FString(&`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
                          ::__l2::_S21,"ZeroEqual");
      `public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'::
      __l2::TestItems =
           (TestItem *)
           &`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
            ::__l2::_S21;
      _DAT_154f86ef4 = 0;
      DAT_154f86ee8 = 1;
      _DAT_154f86eec = 0;
      DAT_154f86ef8 = 0;
      DAT_154f86f00 = 0;
      DAT_154f86f08 = 4;
      atexit(`FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest'::__l2::
             _dynamic_atexit_destructor_for___S22__);
      ::FString::FString(&`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
                          ::__l2::_S22,"OneEqual");
      uVar1 = ___xmm_3ff00000000000003ff0000000000000;
      _DAT_154f86f28 = ___xmm_3ff00000000000003ff0000000000000;
      uRam0000000154f86f30 = _UNK_150689688;
      _DAT_154f86f10 =
           &`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
            ::__l2::_S22;
      DAT_154f86f18 = 1;
      DAT_154f86f1c = 0x3f800000;
      _DAT_154f86f20 = 0x3f800000;
      DAT_154f86f38 = 4;
      atexit(`FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest'::__l2::
             _dynamic_atexit_destructor_for___S23__);
      ::FString::FString(&`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
                          ::__l2::_S23,"MinusOneEqual");
      uVar2 = ___xmm_bff0000000000000bff0000000000000;
      _DAT_154f86f40 =
           &`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
            ::__l2::_S23;
      _DAT_154f86f54 = 0;
      DAT_154f86f48 = 1;
      _DAT_154f86f4c = 0xbf800000;
      _DAT_154f86f50 = 0xbf800000;
      _DAT_154f86f58 = ___xmm_bff0000000000000bff0000000000000;
      uRam0000000154f86f60 = _UNK_15076c718;
      _DAT_154f86f68 = 4;
      atexit(`FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest'::__l2::
             _dynamic_atexit_destructor_for___S24__);
      ::FString::FString(&`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
                          ::__l2::_S24,"PlusMinusOneNotEqual");
      _DAT_154f86f88 = uVar2;
      _DAT_154f86f90 = uVar1;
      _DAT_154f86f70 =
           &`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
            ::__l2::_S24;
      DAT_154f86f78 = 0;
      _DAT_154f86f7c = 0xbf800000;
      _DAT_154f86f80 = 0x3f800000;
      _DAT_154f86f98 = 4;
      atexit(`FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest'::__l2::
             _dynamic_atexit_destructor_for___S25__);
      ::FString::FString(&`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
                          ::__l2::_S25,"NanEqualFail");
      _DAT_154f86fb8 = ___xmm_7ff80000000000007ff8000000000000;
      uRam0000000154f86fc0 = _UNK_15076c538;
      _DAT_154f86fa0 =
           &`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
            ::__l2::_S25;
      DAT_154f86fa8 = 0;
      _DAT_154f86fac = 0x7fc00000;
      _DAT_154f86fb0 = 0x7fc00000;
      _DAT_154f86fc8 = 4;
      atexit(`FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest'::__l2::
             _dynamic_atexit_destructor_for___S26__);
      ::FString::FString(&`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
                          ::__l2::_S26,"OneULPDistUp");
      _DAT_154f86fd0 =
           &`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
            ::__l2::_S26;
      DAT_154f86fd8 = 1;
      _DAT_154f86fdc = 0x3f800000;
      _DAT_154f86ff0 = __real_3ff0000000000001;
      _DAT_154f86fe8 = uVar1;
      _DAT_154f86fe0 = 0x3f800001;
      _DAT_154f86ff8 = 1;
      atexit(`FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest'::__l2::
             _dynamic_atexit_destructor_for___S27__);
      ::FString::FString(&`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
                          ::__l2::_S27,"OneULPDistDown");
      _DAT_154f87020 = __real_3fefffffffffffff;
      _DAT_154f87018 = uVar1;
      _DAT_154f87000 =
           &`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
            ::__l2::_S27;
      DAT_154f87008 = 1;
      _DAT_154f8700c = 0x3f800000;
      _DAT_154f87010 = 0x3f7fffff;
      _DAT_154f87028 = 1;
      atexit(`FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest'::__l2::
             _dynamic_atexit_destructor_for___S28__);
      ::FString::FString(&`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
                          ::__l2::_S28,"TwoULPDist");
      uVar2 = __real_3ff0000000000002;
      _DAT_154f87050 = __real_3ff0000000000002;
      _DAT_154f87048 = uVar1;
      _DAT_154f87030 =
           &`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
            ::__l2::_S28;
      DAT_154f87038 = 1;
      _DAT_154f8703c = 0x3f800000;
      _DAT_154f87040 = 0x3f800002;
      _DAT_154f87058 = 2;
      atexit(`FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest'::__l2::
             _dynamic_atexit_destructor_for___S29__);
      ::FString::FString(&`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
                          ::__l2::_S29,"TwoULPDistFail");
      _DAT_154f87078 = uVar1;
      _DAT_154f87080 = uVar2;
      _DAT_154f87060 =
           &`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
            ::__l2::_S29;
      DAT_154f87068 = 0;
      _DAT_154f8706c = 0x3f800000;
      _DAT_154f87070 = 0x3f800002;
      _DAT_154f87088 = 1;
      atexit(`FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest'::__l2::
             _dynamic_atexit_destructor_for___S30__);
      ::FString::FString(&`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
                          ::__l2::_S30,"ONeULPDistEight");
      uVar1 = __real_4020000000000000;
      _DAT_154f870b0 = __real_4020000000000001;
      _DAT_154f870a8 = __real_4020000000000000;
      _DAT_154f87090 =
           &`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
            ::__l2::_S30;
      DAT_154f87098 = 1;
      _DAT_154f8709c = 0x41000000;
      _DAT_154f870a0 = 0x41000001;
      _DAT_154f870b8 = 1;
      atexit(`FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest'::__l2::
             _dynamic_atexit_destructor_for___S31__);
      ::FString::FString(&`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
                          ::__l2::_S31,"ONeULPDistFailEight");
      _DAT_154f870e0 = __real_4020000000000002;
      _DAT_154f870d8 = uVar1;
      _DAT_154f870c0 =
           &`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
            ::__l2::_S31;
      DAT_154f870c8 = 0;
      _DAT_154f870cc = 0x41000000;
      _DAT_154f870d0 = 0x41000002;
      _DAT_154f870e8 = 1;
      atexit(`FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest'::__l2::
             _dynamic_atexit_destructor_for___S32__);
      ::FString::FString(&`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
                          ::__l2::_S32,"AroundZero");
      uVar1 = __real_8000000000000001;
      _DAT_154f87100 = 1;
      _DAT_154f87108 = __real_8000000000000001;
      _DAT_154f87110 = 1;
      _DAT_154f87104 = 0;
      _DAT_154f870f0 =
           &`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
            ::__l2::_S32;
      DAT_154f870f8 = 1;
      _DAT_154f870fc = 0x80000001;
      _DAT_154f87118 = 2;
      atexit(`FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest'::__l2::
             _dynamic_atexit_destructor_for___S33__);
      ::FString::FString(&`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
                          ::__l2::_S33,"AroundZeroFail");
      _DAT_154f87130 = 1;
      _DAT_154f87134 = 0;
      _DAT_154f87138 = uVar1;
      _DAT_154f87140 = 1;
      _DAT_154f87120 =
           &`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
            ::__l2::_S33;
      DAT_154f87128 = 0;
      _DAT_154f8712c = 0x80000001;
      _DAT_154f87148 = 1;
      atexit(`FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest'::__l2::
             _dynamic_atexit_destructor_for___S34__);
      ::FString::FString(&`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
                          ::__l2::_S34,"PosNextToZero");
      _DAT_154f87160 = 1;
      _DAT_154f87164 = 0;
      _DAT_154f87168 = 0;
      _DAT_154f87170 = 1;
      _DAT_154f87150 =
           &`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
            ::__l2::_S34;
      DAT_154f87158 = 1;
      _DAT_154f8715c = 0;
      _DAT_154f87178 = 1;
      atexit(`FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest'::__l2::
             _dynamic_atexit_destructor_for___S35__);
      ::FString::FString(&`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
                          ::__l2::_S35,"NegNextToZero");
      _DAT_154f87198 = uVar1;
      _DAT_154f871a0 = 0;
      _DAT_154f87180 =
           &`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
            ::__l2::_S35;
      DAT_154f87188 = 1;
      _DAT_154f8718c = 0x80000001;
      _DAT_154f87190 = 0;
      _DAT_154f871a8 = 1;
      atexit(`FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest'::__l2::
             _dynamic_atexit_destructor_for___S36__);
      ::FString::FString(&`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
                          ::__l2::_S36,"InfAndMaxFail");
      uVar2 = _UNK_150689708;
      uVar1 = ___xmm_7ff00000000000007ff0000000000000;
      _DAT_154f871c8 = __real_7fefffffffffffff;
      _DAT_154f871d0 = ___xmm_7ff00000000000007ff0000000000000;
      _DAT_154f871b0 =
           &`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
            ::__l2::_S36;
      DAT_154f871b8 = 0;
      _DAT_154f871bc = 0x7f7fffff;
      _DAT_154f871c0 = 0x7f800000;
      _DAT_154f871d8 = 0x7fffffff;
      atexit(`FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest'::__l2::
             _dynamic_atexit_destructor_for___S37__);
      ::FString::FString(&`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
                          ::__l2::_S37,"InfAndNegInfFail");
      _DAT_154f871e0 =
           &`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
            ::__l2::_S37;
      DAT_154f871e8 = 0;
      _DAT_154f871ec = 0xff800000;
      _DAT_154f871f0 = 0x7f800000;
      _DAT_154f871f8 = __real_fff0000000000000;
      _DAT_154f87200 = uVar1;
      _DAT_154f87208 = 0x7fffffff;
      atexit(`FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest'::__l2::
             _dynamic_atexit_destructor_for___S38__);
      ::FString::FString(&`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
                          ::__l2::_S38,"InfAndInf");
      _DAT_154f87210 =
           &`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
            ::__l2::_S38;
      DAT_154f87218 = 1;
      _DAT_154f8721c = 0x7f800000;
      _DAT_154f87220 = 0x7f800000;
      _DAT_154f87228 = uVar1;
      uRam0000000154f87230 = uVar2;
      _DAT_154f87238 = 0;
      _Init_thread_footer(&`public:_bool___cdecl_FIsNearlyEqualByULPTestClass::IsNearlyEqualByULPTest(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pfVar5 = (float *)&DAT_154f86ef0;
  do {
    pcVar4 = CheckFalseMessage;
    if (*(char *)(pfVar5 + -2) != '\0') {
      pcVar4 = CheckMessage;
    }
    bVar3 = FMath::TIsNearlyEqualByULP<float,unsigned_int,2147483648>
                      (pfVar5[-1],*pfVar5,(int)pfVar5[6]);
    ::FString::FString(&local_98,"-Float");
    ::FString::ConcatFF(&local_a8,*(FString **)(pfVar5 + -4),&local_98);
    (*pcVar4)(this,&local_a8,bVar3);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    bVar3 = FMath::TIsNearlyEqualByULP<double,unsigned___int64,_9223372036854775808>
                      (*(double *)(pfVar5 + 2),*(double *)(pfVar5 + 4),(int)pfVar5[6]);
    ::FString::FString(local_78,"-Double");
    ::FString::ConcatFF(&local_88,*(FString **)(pfVar5 + -4),local_78);
    (*pcVar4)(this,&local_88,bVar3);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
    }
    bVar3 = pfVar5 != (float *)&DAT_154f87220;
    pfVar5 = pfVar5 + 0xc;
  } while (bVar3);
  return true;
}

