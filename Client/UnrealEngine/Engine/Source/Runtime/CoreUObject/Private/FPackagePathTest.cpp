// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// RunTest @ 141ec5170

bool __thiscall FPackagePathTest::RunTest(FPackagePathTest *this,FString *param_1)

{
  bool bVar1;
  
  RunTestParseExtension(this);
  RunTestIsPackageExtension(this);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// operator() @ 141ed8cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPackagePathTest::RunTestParseExtension'::__l2::<lambda_1>::operator()
          (void *this,EPackageExtension param_1)

{
  TStringBuilderBase<wchar_t> *this_00;
  FAutomationTestBase *this_01;
  longlong *plVar1;
  code *pcVar2;
  FAutomationTestBase *this_02;
  EPackageExtension EVar3;
  int iVar4;
  void *pvVar5;
  wchar_t *_Str;
  size_t sVar6;
  undefined1 auStack_118 [32];
  int local_f8 [4];
  TStringView<wchar_t> local_e8;
  TStringBuilderBase<wchar_t> local_d8;
  FScriptContainerElement local_b8 [128];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_118;
  local_d8.Base = (wchar_t *)local_b8;
  local_d8.bIsDynamic = false;
  local_d8.bIsExternal = false;
  local_d8.CurPos = (wchar_t *)local_b8;
  local_d8.End = (wchar_t *)local_38;
  pvVar5 = FGenericPlatformString::Memcpy(local_b8,L"d:\\Root\\Dir\\Filename",0x28);
  local_d8.CurPos = (wchar_t *)((longlong)pvVar5 + 0x28);
  _Str = ::LexToString(param_1);
  iVar4 = 0;
  if (_Str != (wchar_t *)0x0) {
    sVar6 = wcslen(_Str);
    iVar4 = (int)sVar6;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_d8,_Str,iVar4);
  local_e8.Size = (int)((longlong)local_d8.CurPos - (longlong)local_d8.Base >> 1);
  local_e8.DataPtr = local_d8.Base;
  EVar3 = FPackagePath::ParseExtension(&local_e8,local_f8);
  plVar1 = *(longlong **)this;
  ::LexToString(param_1);
  this_00 = (TStringBuilderBase<wchar_t> *)(plVar1 + 0x1e);
  plVar1[0x1f] = (longlong)this_00->Base;
  TStringBuilderBase<wchar_t>::AppendfImpl
            (this_00,L"ParsedExtension returns correct extension for %s");
  if ((ulonglong)plVar1[0x20] < plVar1[0x1f] + 2U) {
    TStringBuilderBase<wchar_t>::Extend(this_00,1);
  }
  *(undefined2 *)plVar1[0x1f] = 0;
  if (EVar3 != param_1) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl((FString *)&local_e8,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_e8,0);
    if ((FScriptContainerElement *)local_e8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.DataPtr);
    }
  }
  this_02 = *(FAutomationTestBase **)this;
  ::LexToString(param_1);
  this_01 = this_02 + 1;
  *(wchar_t **)&this_02[1].bComplexTask = (wchar_t *)this_01->_padding_;
  TStringBuilderBase<wchar_t>::AppendfImpl
            ((TStringBuilderBase<wchar_t> *)this_01,
             L"ParsedExtension sets correct ExtensionStart for %s");
  if (this_02[1].TestName.Data.AllocatorInstance.Data <
      (FScriptContainerElement *)(*(longlong *)&this_02[1].bComplexTask + 2)) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this_01,1);
  }
  **(undefined2 **)&this_02[1].bComplexTask = 0;
  FAutomationTestBase::TestEqual(this_02,(wchar_t *)this_01->_padding_,local_f8[0],0x14);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
  return;
}

// RunTestIsPackageExtension @ 141f0e710

void __thiscall FPackagePathTest::RunTestIsPackageExtension(FPackagePathTest *this)

{
  bool bVar1;
  
  bVar1 = FPackageName::IsPackageExtension(L".uasset");
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"IsPackageExtension returns true for .uasset",bVar1);
  bVar1 = FPackageName::IsAssetPackageExtension(L".uasset");
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"IsAssetPackageExtension returns true for .uasset",bVar1);
  bVar1 = FPackageName::IsMapPackageExtension(L".uasset");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsMapPackageExtension returns false for .uasset",bVar1);
  bVar1 = FPackageName::IsPackageExtension(L"uasset");
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"IsPackageExtension returns true for uasset",bVar1);
  bVar1 = FPackageName::IsPackageExtension(L".umap");
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"IsPackageExtension returns true for .umap",bVar1);
  bVar1 = FPackageName::IsAssetPackageExtension(L".umap");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsAssetPackageExtension returns false for .umap",bVar1);
  bVar1 = FPackageName::IsMapPackageExtension(L".umap");
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"IsMapPackageExtension returns true for .umap",bVar1);
  bVar1 = FPackageName::IsPackageExtension(L"umap");
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"IsPackageExtension returns true for umap",bVar1);
  bVar1 = FPackageName::IsPackageExtension(L".set");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsPackageExtension returns false for .set",bVar1);
  bVar1 = FPackageName::IsPackageExtension(L"set");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsPackageExtension returns false for set",bVar1);
  bVar1 = FPackageName::IsPackageExtension(L".set");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsPackageExtension returns false for .ap",bVar1);
  bVar1 = FPackageName::IsPackageExtension(L"ap");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsPackageExtension returns false for ap",bVar1);
  bVar1 = FPackageName::IsPackageExtension(L".uassetWarglBargl");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsPackageExtension returns false for .uassetWarglBargl",
             bVar1);
  bVar1 = FPackageName::IsPackageExtension(L"uassetWarglBargl");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsPackageExtension returns false for uassetWarglBargl",
             bVar1);
  bVar1 = FPackageName::IsPackageExtension(L".umapBarglWargl");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsPackageExtension returns false for .umapBarglWargl",
             bVar1);
  bVar1 = FPackageName::IsPackageExtension(L"umapBarglWargl");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsPackageExtension returns false for umapBarglWargl",
             bVar1);
  bVar1 = FPackageName::IsPackageExtension(L".utxt");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsPackageExtension returns false for .utxt",bVar1);
  bVar1 = FPackageName::IsPackageExtension(L"utxt");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsPackageExtension returns false for utxt",bVar1);
  bVar1 = FPackageName::IsPackageExtension(L".utxtmap");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsPackageExtension returns false for .utxtmap",bVar1);
  bVar1 = FPackageName::IsPackageExtension(L"utxtmap");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsPackageExtension returns false for utxtmap",bVar1);
  bVar1 = FPackageName::IsPackageExtension(L".ubulk");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsPackageExtension returns false for .ubulk",bVar1);
  bVar1 = FPackageName::IsPackageExtension(L"ubulk");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsPackageExtension returns false for ubulk",bVar1);
  bVar1 = FPackageName::IsPackageExtension(L"");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsPackageExtension returns false for empty string",bVar1)
  ;
  bVar1 = FPackageName::IsPackageExtension(L".");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsPackageExtension returns false for \".\"",bVar1);
  bVar1 = FPackageName::IsTextPackageExtension(L".utxt");
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"IsTextPackageExtension returns true for .utxt",bVar1);
  bVar1 = FPackageName::IsTextAssetPackageExtension(L".utxt");
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"IsTextAssetPackageExtension returns true for .utxt",bVar1
            );
  bVar1 = FPackageName::IsTextMapPackageExtension(L".utxt");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsTextMapPackageExtension returns false for .utxt",bVar1)
  ;
  bVar1 = FPackageName::IsTextPackageExtension(L"utxt");
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"IsTextPackageExtension returns true for utxt",bVar1);
  bVar1 = FPackageName::IsTextPackageExtension(L".utxtmap");
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"IsTextPackageExtension returns true for .utxtmap",bVar1);
  bVar1 = FPackageName::IsTextAssetPackageExtension(L".utxtmap");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsTextAssetPackageExtension returns false for .utxtmap",
             bVar1);
  bVar1 = FPackageName::IsTextMapPackageExtension(L".utxtmap");
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"IsTextMapPackageExtension returns true for .utxtmap",
             bVar1);
  bVar1 = FPackageName::IsTextPackageExtension(L"utxtmap");
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"IsTextPackageExtension returns true for utxtmap",bVar1);
  bVar1 = FPackageName::IsPackageExtension(L".xt");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsTextPackageExtension returns false for .xt",bVar1);
  bVar1 = FPackageName::IsPackageExtension(L"xt");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsTextPackageExtension returns false for xt",bVar1);
  bVar1 = FPackageName::IsPackageExtension(L".map");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsTextPackageExtension returns false for .map",bVar1);
  bVar1 = FPackageName::IsPackageExtension(L"map");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsTextPackageExtension returns false for map",bVar1);
  bVar1 = FPackageName::IsPackageExtension(L".utxtWarglBargl");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsTextPackageExtension returns false for .utxtWarglBargl"
             ,bVar1);
  bVar1 = FPackageName::IsPackageExtension(L"utxtWarglBargl");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsTextPackageExtension returns false for utxtWarglBargl",
             bVar1);
  bVar1 = FPackageName::IsPackageExtension(L".utxtmapBarglWargl");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,
             L"IsTextPackageExtension returns false for .utxtmapBarglWargl",bVar1);
  bVar1 = FPackageName::IsPackageExtension(L"utxtmapBarglWargl");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,
             L"IsTextPackageExtension returns false for utxtmapBarglWargl",bVar1);
  bVar1 = FPackageName::IsTextPackageExtension(L".uasset");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsTextPackageExtension returns false for .uasset",bVar1);
  bVar1 = FPackageName::IsTextPackageExtension(L"uasset");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsTextPackageExtension returns false for uasset",bVar1);
  bVar1 = FPackageName::IsTextPackageExtension(L".umap");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsTextPackageExtension returns false for .umap",bVar1);
  bVar1 = FPackageName::IsTextPackageExtension(L"umap");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsTextPackageExtension returns false for umap",bVar1);
  bVar1 = FPackageName::IsTextPackageExtension(L".ubulk");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsTextPackageExtension returns false for .ubulk",bVar1);
  bVar1 = FPackageName::IsTextPackageExtension(L"ubulk");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsTextPackageExtension returns false for ubulk",bVar1);
  bVar1 = FPackageName::IsTextPackageExtension(L"");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsTextPackageExtension returns false for empty string",
             bVar1);
  bVar1 = FPackageName::IsTextPackageExtension(L".");
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"IsTextPackageExtension returns false for \".\"",bVar1);
  return;
}

// RunTestParseExtension @ 141f0ed00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FPackagePathTest::RunTestParseExtension(FPackagePathTest *this)

{
  TStringBuilderWithBuffer<wchar_t,256> *this_00;
  code *pcVar1;
  EPackageExtension EVar2;
  void *pvVar3;
  undefined1 auStack_108 [32];
  FPackagePathTest *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TStringView<wchar_t> local_d8;
  TStringBuilderBase<wchar_t> local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8 = this;
  `FPackagePathTest::RunTestParseExtension'::__l2::<lambda_1>::operator()(&local_e8,Unspecified);
  `FPackagePathTest::RunTestParseExtension'::__l2::<lambda_1>::operator()(&local_e8,Asset);
  `FPackagePathTest::RunTestParseExtension'::__l2::<lambda_1>::operator()(&local_e8,Map);
  `FPackagePathTest::RunTestParseExtension'::__l2::<lambda_1>::operator()(&local_e8,TextAsset);
  `FPackagePathTest::RunTestParseExtension'::__l2::<lambda_1>::operator()(&local_e8,TextMap);
  `FPackagePathTest::RunTestParseExtension'::__l2::<lambda_1>::operator()(&local_e8,Exports);
  `FPackagePathTest::RunTestParseExtension'::__l2::<lambda_1>::operator()(&local_e8,BulkDataDefault)
  ;
  `FPackagePathTest::RunTestParseExtension'::__l2::<lambda_1>::operator()
            (&local_e8,BulkDataOptional);
  `FPackagePathTest::RunTestParseExtension'::__l2::<lambda_1>::operator()
            (&local_e8,BulkDataMemoryMapped);
  `FPackagePathTest::RunTestParseExtension'::__l2::<lambda_1>::operator()(&local_e8,PayloadSidecar);
  local_c8.Base = (wchar_t *)&stack0xffffffffffffff58;
  local_c8.bIsDynamic = false;
  local_c8.bIsExternal = false;
  local_c8.CurPos = (wchar_t *)&stack0xffffffffffffff58;
  local_c8.End = (wchar_t *)&stack0xffffffffffffffd8;
  pvVar3 = FGenericPlatformString::Memcpy(&stack0xffffffffffffff58,L"d:\\Root\\Dir\\Filename",0x28);
  local_c8.CurPos = (wchar_t *)((longlong)pvVar3 + 0x28);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_c8,L".SomeOtherExtension",0x13);
  local_e8 = (FPackagePathTest *)local_c8.Base;
  iStack_e0 = (int)((longlong)local_c8.CurPos - (longlong)local_c8.Base >> 1);
  local_d8._12_4_ = uStack_dc;
  local_d8.Size = iStack_e0;
  local_d8.DataPtr = local_c8.Base;
  EVar2 = FPackagePath::ParseExtension(&local_d8,(int *)&local_e8);
  ::LexToString(Custom);
  this_00 = &this->ErrorText;
  (this->ErrorText)._padding_ = this_00->_padding_;
  TStringBuilderBase<wchar_t>::AppendfImpl
            ((TStringBuilderBase<wchar_t> *)this_00,
             L"ParsedExtension returns correct extension for %s");
  if ((ulonglong)(this->ErrorText)._padding_ < (this->ErrorText)._padding_ + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this_00,1);
  }
  *(undefined2 *)(this->ErrorText)._padding_ = 0;
  if (EVar2 != Custom) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_d8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_d8,0);
    if ((FPackagePathTest *)local_d8.DataPtr != (FPackagePathTest *)0x0) {
      FMemory::Free(local_d8.DataPtr);
    }
  }
  ::LexToString(Custom);
  (this->ErrorText)._padding_ = this_00->_padding_;
  TStringBuilderBase<wchar_t>::AppendfImpl
            ((TStringBuilderBase<wchar_t> *)this_00,
             L"ParsedExtension sets correct ExtensionStart for %s");
  if ((ulonglong)(this->ErrorText)._padding_ < (this->ErrorText)._padding_ + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this_00,1);
  }
  *(undefined2 *)(this->ErrorText)._padding_ = 0;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)this_00->_padding_,(int)local_e8,0x14);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_c8);
  return;
}

