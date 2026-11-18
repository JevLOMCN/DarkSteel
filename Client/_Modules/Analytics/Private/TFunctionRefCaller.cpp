// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 10

// Call @ 143135c90

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(unsigned_int_&),bool,unsigned_int_&>
::Call(void *param_1,uint *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143135c96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2);
  return (bool)uVar1;
}

// Call @ 143135ca0

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(FDateTime_&),bool,FDateTime_&>::Call
          (void *param_1,FDateTime *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143135ca6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2);
  return (bool)uVar1;
}

// Call @ 143135cb0

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(__int64_&),bool,__int64_&>::Call
          (void *param_1,long64 *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143135cb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2);
  return (bool)uVar1;
}

// Call @ 143135cc0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(int_const_*,int_const_&),bool,int_const_*,int_const_&>::Call
          (void *param_1,int **param_2,int *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143135ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(*param_2,param_3);
  return (bool)uVar1;
}

// Call @ 143135ce0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(float_const_*,float_const_&),bool,float_const_*,float_const_&>::
Call(void *param_1,float **param_2,float *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143135cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(*param_2,param_3);
  return (bool)uVar1;
}

// Call @ 143135d00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(double_const_*,double_const_&),bool,double_const_*,double_const_&>
::Call(void *param_1,double **param_2,double *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143135d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(*param_2,param_3);
  return (bool)uVar1;
}

// Call @ 143135d20

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(__int64_const_*,__int64_const_&),bool,__int64_const_*,__int64_const_&>
::Call(void *param_1,long64 **param_2,long64 *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143135d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(*param_2,param_3);
  return (bool)uVar1;
}

// Call @ 143135d40

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l413::<lambda_4>,bool,FString_const_*,FString_const_&>
::Call(void *param_1,FString **param_2,FString *param_3)

{
  bool bVar1;
  
  bVar1 = `FAnalyticsPropertyStoreAutomationTest::RunTest'::__l413::<lambda_4>::operator()
                    (param_1,*param_2,param_3);
  return bVar1;
}

// Call @ 143135d50

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l462::<lambda_8>,bool,bool_&>
::Call(void *param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (*param_2 != (bool)**(char **)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOutStored == Actual_Bool",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                       ,0xb3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  *param_2 = (bool)**(undefined1 **)((longlong)param_1 + 8);
  return true;
}

// Call @ 143135db0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l61::<lambda_9>,void,FAnalyticsEventAttribute_&&>
::Call(void *param_1,FAnalyticsEventAttribute *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  FString *pFVar4;
  char *pcVar5;
  wchar_t *pwVar6;
  bool bVar7;
  FString FStack_88;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  FString FStack_28;
  FString FStack_18;
  
  iVar3 = (param_2->AttrName).Data.ArrayNum;
  if (iVar3 == I32Key.Data.ArrayNum) {
    if (1 < iVar3) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_2->AttrName).Data.AllocatorInstance.Data,
                         (wchar_t *)I32Key.Data.AllocatorInstance.Data);
      bVar7 = iVar3 == 0;
      goto LAB_14313447c;
    }
LAB_143134b23:
    ::FString::PrintfImpl(&FStack_48,L"%d");
    iVar3 = (param_2->AttrValueString).Data.ArrayNum;
    if (iVar3 == FStack_48.Data.ArrayNum) {
      if (iVar3 < 2) {
        bVar7 = false;
      }
      else {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_2->AttrValueString).Data.AllocatorInstance.Data,
                           (wchar_t *)FStack_48.Data.AllocatorInstance.Data);
        bVar7 = iVar3 != 0;
      }
    }
    else {
      bVar7 = iVar3 + FStack_48.Data.ArrayNum != 1;
    }
    if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
    }
    if (!bVar7) {
      return;
    }
    iVar3 = 0xbb;
    pcVar5 = "Attr.GetValue() == LexToString(Expected_I32)";
  }
  else {
    bVar7 = iVar3 + I32Key.Data.ArrayNum == 1;
LAB_14313447c:
    if (bVar7) goto LAB_143134b23;
    iVar3 = (param_2->AttrName).Data.ArrayNum;
    if (iVar3 == U32Key.Data.ArrayNum) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_2->AttrName).Data.AllocatorInstance.Data,
                           (wchar_t *)U32Key.Data.AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
        goto LAB_1431344b6;
      }
LAB_143134aa0:
      ::FString::PrintfImpl(&FStack_58,L"%u");
      iVar3 = (param_2->AttrValueString).Data.ArrayNum;
      if (iVar3 == FStack_58.Data.ArrayNum) {
        if (iVar3 < 2) {
          bVar7 = false;
        }
        else {
          iVar3 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(param_2->AttrValueString).Data.AllocatorInstance.Data,
                             (wchar_t *)FStack_58.Data.AllocatorInstance.Data);
          bVar7 = iVar3 != 0;
        }
      }
      else {
        bVar7 = iVar3 + FStack_58.Data.ArrayNum != 1;
      }
      if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
      }
      if (!bVar7) {
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attr.GetValue() == LexToString(Expected_U32)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xbf,L"");
      if (!bVar7) {
        return;
      }
      goto code_r0x000143134ba0;
    }
    bVar7 = iVar3 + U32Key.Data.ArrayNum == 1;
LAB_1431344b6:
    if (bVar7) goto LAB_143134aa0;
    iVar3 = (param_2->AttrName).Data.ArrayNum;
    if (iVar3 == I64Key.Data.ArrayNum) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_2->AttrName).Data.AllocatorInstance.Data,
                           (wchar_t *)I64Key.Data.AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
        goto LAB_1431344f0;
      }
LAB_143134a16:
      ::FString::PrintfImpl(&FStack_68,L"%lld");
      iVar3 = (param_2->AttrValueString).Data.ArrayNum;
      if (iVar3 == FStack_68.Data.ArrayNum) {
        if (iVar3 < 2) {
          bVar7 = false;
        }
        else {
          iVar3 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(param_2->AttrValueString).Data.AllocatorInstance.Data,
                             (wchar_t *)FStack_68.Data.AllocatorInstance.Data);
          bVar7 = iVar3 != 0;
        }
      }
      else {
        bVar7 = iVar3 + FStack_68.Data.ArrayNum != 1;
      }
      if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
      }
      if (!bVar7) {
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attr.GetValue() == LexToString(Expected_I64)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xc3,L"");
      if (!bVar7) {
        return;
      }
      goto code_r0x000143134ba0;
    }
    bVar7 = iVar3 + I64Key.Data.ArrayNum == 1;
LAB_1431344f0:
    if (bVar7) goto LAB_143134a16;
    iVar3 = (param_2->AttrName).Data.ArrayNum;
    if (iVar3 == U64Key.Data.ArrayNum) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_2->AttrName).Data.AllocatorInstance.Data,
                           (wchar_t *)U64Key.Data.AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
        goto LAB_14313452a;
      }
LAB_14313498c:
      ::FString::PrintfImpl(&FStack_78,L"%llu");
      iVar3 = (param_2->AttrValueString).Data.ArrayNum;
      if (iVar3 == FStack_78.Data.ArrayNum) {
        if (iVar3 < 2) {
          bVar7 = false;
        }
        else {
          iVar3 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(param_2->AttrValueString).Data.AllocatorInstance.Data,
                             (wchar_t *)FStack_78.Data.AllocatorInstance.Data);
          bVar7 = iVar3 != 0;
        }
      }
      else {
        bVar7 = iVar3 + FStack_78.Data.ArrayNum != 1;
      }
      if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
      }
      if (!bVar7) {
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attr.GetValue() == LexToString(Expected_U64)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,199,L"");
      if (!bVar7) {
        return;
      }
      goto code_r0x000143134ba0;
    }
    bVar7 = iVar3 + U64Key.Data.ArrayNum == 1;
LAB_14313452a:
    if (bVar7) goto LAB_14313498c;
    iVar3 = (param_2->AttrName).Data.ArrayNum;
    if (iVar3 == FltKey.Data.ArrayNum) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_2->AttrName).Data.AllocatorInstance.Data,
                           (wchar_t *)FltKey.Data.AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
        goto LAB_143134564;
      }
LAB_143134900:
      pFVar4 = ::FString::SanitizeFloat(&FStack_18,(double)**(float **)((longlong)param_1 + 0x20),1)
      ;
      iVar3 = (param_2->AttrValueString).Data.ArrayNum;
      iVar1 = (pFVar4->Data).ArrayNum;
      if (iVar3 == iVar1) {
        if (iVar3 < 2) {
          bVar7 = false;
        }
        else {
          iVar3 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(param_2->AttrValueString).Data.AllocatorInstance.Data,
                             (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
          bVar7 = iVar3 != 0;
        }
      }
      else {
        bVar7 = iVar1 + iVar3 != 1;
      }
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
      if (!bVar7) {
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attr.GetValue() == FString::SanitizeFloat(Expected_Flt)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xcb,L"");
      if (!bVar7) {
        return;
      }
      goto code_r0x000143134ba0;
    }
    bVar7 = iVar3 + FltKey.Data.ArrayNum == 1;
LAB_143134564:
    if (bVar7) goto LAB_143134900;
    iVar3 = (param_2->AttrName).Data.ArrayNum;
    if (iVar3 == DblKey.Data.ArrayNum) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_2->AttrName).Data.AllocatorInstance.Data,
                           (wchar_t *)DblKey.Data.AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
        goto LAB_14313459e;
      }
LAB_143134877:
      pFVar4 = ::FString::SanitizeFloat(&FStack_28,**(double **)((longlong)param_1 + 0x28),1);
      iVar3 = (param_2->AttrValueString).Data.ArrayNum;
      iVar1 = (pFVar4->Data).ArrayNum;
      if (iVar3 == iVar1) {
        if (iVar3 < 2) {
          bVar7 = false;
        }
        else {
          iVar3 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(param_2->AttrValueString).Data.AllocatorInstance.Data,
                             (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
          bVar7 = iVar3 != 0;
        }
      }
      else {
        bVar7 = iVar1 + iVar3 != 1;
      }
      if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
      }
      if (!bVar7) {
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attr.GetValue() == FString::SanitizeFloat(Expected_Dbl)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xcf,L"");
      if (!bVar7) {
        return;
      }
      goto code_r0x000143134ba0;
    }
    bVar7 = iVar3 + DblKey.Data.ArrayNum == 1;
LAB_14313459e:
    if (bVar7) goto LAB_143134877;
    iVar3 = (param_2->AttrName).Data.ArrayNum;
    if (iVar3 == BoolKey.Data.ArrayNum) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_2->AttrName).Data.AllocatorInstance.Data,
                           (wchar_t *)BoolKey.Data.AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
        goto LAB_1431345d8;
      }
LAB_1431347e2:
      pwVar6 = L"true";
      if (**(char **)((longlong)param_1 + 0x30) == '\0') {
        pwVar6 = L"false";
      }
      ::FString::FString(&FStack_88,pwVar6);
      iVar3 = (param_2->AttrValueString).Data.ArrayNum;
      if (iVar3 == FStack_88.Data.ArrayNum) {
        if (iVar3 < 2) {
          bVar7 = false;
        }
        else {
          iVar3 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(param_2->AttrValueString).Data.AllocatorInstance.Data,
                             (wchar_t *)FStack_88.Data.AllocatorInstance.Data);
          bVar7 = iVar3 != 0;
        }
      }
      else {
        bVar7 = iVar3 + FStack_88.Data.ArrayNum != 1;
      }
      if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
      }
      if (!bVar7) {
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attr.GetValue() == LexToString(Expected_Bool)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xd3,L"");
      if (!bVar7) {
        return;
      }
      goto code_r0x000143134ba0;
    }
    bVar7 = iVar3 + BoolKey.Data.ArrayNum == 1;
LAB_1431345d8:
    if (bVar7) goto LAB_1431347e2;
    iVar3 = (param_2->AttrName).Data.ArrayNum;
    if (iVar3 == Str1Key.Data.ArrayNum) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_2->AttrName).Data.AllocatorInstance.Data,
                           (wchar_t *)Str1Key.Data.AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
        goto LAB_143134612;
      }
LAB_14313477e:
      iVar3 = (param_2->AttrValueString).Data.ArrayNum;
      iVar1 = *(int *)(*(undefined8 **)((longlong)param_1 + 0x38) + 1);
      if (iVar3 == iVar1) {
        if (iVar3 < 2) {
          return;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_2->AttrValueString).Data.AllocatorInstance.Data,
                           (wchar_t *)**(undefined8 **)((longlong)param_1 + 0x38));
        bVar7 = iVar3 == 0;
      }
      else {
        bVar7 = iVar3 + iVar1 == 1;
      }
      if (bVar7) {
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attr.GetValue() == Expected_Str1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xd7,L"");
      if (!bVar7) {
        return;
      }
      goto code_r0x000143134ba0;
    }
    bVar7 = iVar3 + Str1Key.Data.ArrayNum == 1;
LAB_143134612:
    if (bVar7) goto LAB_14313477e;
    iVar3 = (param_2->AttrName).Data.ArrayNum;
    if (iVar3 == DateKey.Data.ArrayNum) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_2->AttrName).Data.AllocatorInstance.Data,
                           (wchar_t *)DateKey.Data.AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
        goto LAB_14313464c;
      }
LAB_1431346ff:
      pFVar4 = FDateTime::ToIso8601(*(FDateTime **)((longlong)param_1 + 0x40),&FStack_38);
      iVar3 = (param_2->AttrValueString).Data.ArrayNum;
      iVar1 = (pFVar4->Data).ArrayNum;
      if (iVar3 == iVar1) {
        if (iVar3 < 2) {
          bVar7 = false;
        }
        else {
          iVar3 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(param_2->AttrValueString).Data.AllocatorInstance.Data,
                             (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
          bVar7 = iVar3 != 0;
        }
      }
      else {
        bVar7 = iVar1 + iVar3 != 1;
      }
      if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
      }
      if (!bVar7) {
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attr.GetValue() == Expected_Date.ToIso8601()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xdb,L"");
      if (!bVar7) {
        return;
      }
      goto code_r0x000143134ba0;
    }
    bVar7 = iVar3 + DateKey.Data.ArrayNum == 1;
LAB_14313464c:
    if (bVar7) goto LAB_1431346ff;
    iVar3 = (param_2->AttrName).Data.ArrayNum;
    if (iVar3 == Str2Key.Data.ArrayNum) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_2->AttrName).Data.AllocatorInstance.Data,
                           (wchar_t *)Str2Key.Data.AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
        goto LAB_143134682;
      }
LAB_14313469b:
      iVar3 = (param_2->AttrValueString).Data.ArrayNum;
      iVar1 = *(int *)(*(undefined8 **)((longlong)param_1 + 0x48) + 1);
      if (iVar3 == iVar1) {
        if (iVar3 < 2) {
          return;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_2->AttrValueString).Data.AllocatorInstance.Data,
                           (wchar_t *)**(undefined8 **)((longlong)param_1 + 0x48));
        bVar7 = iVar3 == 0;
      }
      else {
        bVar7 = iVar3 + iVar1 == 1;
      }
      if (bVar7) {
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attr.GetValue() == Expected_Str2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                         ,0xdf,L"");
      if (!bVar7) {
        return;
      }
      goto code_r0x000143134ba0;
    }
    bVar7 = iVar3 + Str2Key.Data.ArrayNum == 1;
LAB_143134682:
    if (bVar7) goto LAB_14313469b;
    iVar3 = 0xe3;
    pcVar5 = "false";
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar5,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Tests\\AnalyticsPropertyStoreTests.cpp"
                     ,iVar3,L"");
  if (!bVar7) {
    return;
  }
code_r0x000143134ba0:
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

