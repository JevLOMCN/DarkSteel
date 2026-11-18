// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 40

// GetTestFlags @ 141cc8110

EAutomationTestFlags __thiscall FPathViewsIterateTest::GetTestFlags(FPathViewsIterateTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc8120

bool __thiscall FPathViewsIterateTest::IsStressTest(FPathViewsIterateTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc8130

uint __thiscall FPathViewsIterateTest::GetRequiredDeviceNum(FPathViewsIterateTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc8140

FString * __thiscall
FPathViewsIterateTest::GetTestSourceFileName
          (FPathViewsIterateTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\PathViewsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc8170

int __thiscall FPathViewsIterateTest::GetTestSourceFileLine(FPathViewsIterateTest *this)

{
  return 0x20d;
}

// GetTests @ 141cc8180

/* WARNING: Removing unreachable block (ram,0x000141cc82fe) */

void __thiscall
FPathViewsIterateTest::GetTests
          (FPathViewsIterateTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar1 = &this->PrettyNameDotNotation;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar1)
  ;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = local_18;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar5 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 141cc8320

bool __thiscall FPathViewsIterateTest::RunTest(FPathViewsIterateTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc8350

FString * __thiscall
FPathViewsIterateTest::GetBeautifiedTestName
          (FPathViewsIterateTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// operator()<wchar_t_const_(&)[1]> @ 141ccf590

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [1])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  longlong lVar7;
  FAutomationTestFramework *pFVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 **local_res18;
  code *local_res20;
  ForAnyElementType local_88;
  uint local_80;
  int local_7c;
  undefined8 *local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined8 ***local_60;
  FString local_58;
  TStringView<wchar_t> local_48;
  
  local_78 = (undefined8 *)0x0;
  iVar4 = 0;
  local_70 = 0;
  local_58.Data.ArrayNum = iVar4;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  if (param_2 != (wchar_t (*) [1])0x0) {
    sVar6 = wcslen(*param_2);
    local_58.Data.ArrayNum = (int)sVar6;
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_88,1,&local_7c);
  *(FScriptContainerElement **)local_88.Data = local_58.Data.AllocatorInstance.Data;
  *(undefined8 *)(local_88.Data + 8) = local_58.Data._8_8_;
  local_res18 = &local_78;
  local_60 = &local_res18;
  local_68 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    iVar4 = (int)sVar6;
  }
  local_58.Data.ArrayNum = iVar4;
  local_48.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
  local_48.Size = iVar4;
  local_48._12_4_ = local_58.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_48,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_68);
  lVar7 = (longlong)(int)(uint)local_70;
  if ((uint)local_70 == local_80) {
    FVar10.Data = local_88.Data;
    puVar11 = local_78;
    if ((uint)local_70 != 0) {
      do {
        iVar4 = *(int *)(puVar11 + 1);
        iVar14 = (int)*(undefined8 *)(FVar10.Data + 8);
        if (iVar4 != iVar14) goto LAB_141ccf6f1;
        if ((iVar4 != 0) && (iVar14 != 0)) {
          iVar5 = iVar14;
          if (iVar4 < iVar14) {
            iVar5 = iVar4;
          }
          iVar5 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar11,*(wchar_t **)FVar10.Data,(longlong)iVar5);
          if (iVar5 != 0) goto LAB_141ccf6f1;
        }
        if (iVar4 != iVar14) goto LAB_141ccf6f1;
        lVar7 = lVar7 + -1;
        FVar10.Data = FVar10.Data + 0x10;
        puVar11 = puVar11 + 2;
      } while (lVar7 != 0);
    }
  }
  else {
LAB_141ccf6f1:
    pFVar8 = FAutomationTestFramework::Get();
    uVar3 = local_80;
    bVar2 = true;
    pFVar1 = pFVar8->CurrentTest;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_res20 = *(code **)(pFVar1->_padding_ + 0x28);
    uVar9 = (ulonglong)(int)local_80;
    pFVar12 = local_88.Data + uVar9 * 0x10;
    FVar10.Data = local_88.Data;
    while( true ) {
      if ((uint)uVar9 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (FVar10.Data == pFVar12) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_58,L",",1);
      }
      ::FString::AppendChars
                (&local_58,*(wchar_t **)FVar10.Data,(int)*(undefined8 *)(FVar10.Data + 8));
      uVar9 = (ulonglong)local_80;
      FVar10.Data = FVar10.Data + 0x10;
    }
    iVar4 = (uint)local_70;
    bVar2 = true;
    local_68 = (undefined1  [8])0x0;
    puVar13 = local_78 + (longlong)(int)(uint)local_70 * 2;
    local_60 = (undefined8 ***)0x0;
    puVar11 = local_78;
    while( true ) {
      if ((uint)local_70 != iVar4) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (puVar11 == puVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_68,L",",1);
      }
      ::FString::AppendChars((FString *)local_68,(wchar_t *)*puVar11,(int)puVar11[1]);
      puVar11 = puVar11 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_48,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*local_res20)(pFVar1,&local_48,0);
    if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
    if (local_68 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_68);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_78 != (undefined8 *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5]> @ 141ccf8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [1],wchar_t (*param_3) [1],
          wchar_t (*param_4) [10],wchar_t (*param_5) [5])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  longlong lVar8;
  FAutomationTestFramework *pFVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStackY_138 [32];
  undefined1 local_f8 [8];
  ForAnyElementType local_f0;
  uint local_e8;
  int local_e4;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  undefined8 ***local_c8;
  FString local_b8;
  undefined8 **local_a8 [2];
  TStringView<wchar_t> local_98;
  wchar_t *local_88;
  wchar_t (*local_78) [1];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  wchar_t (*local_68) [1];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  wchar_t (*local_58) [10];
  int iStack_50;
  undefined4 uStack_4c;
  wchar_t (*local_48) [5];
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar4 = 0;
  local_e0 = (undefined8 *)0x0;
  local_d8 = 0;
  uStack_70 = uVar4;
  local_88 = param_1;
  local_78 = param_2;
  if (param_2 != (wchar_t (*) [1])0x0) {
    sVar7 = wcslen(*param_2);
    uStack_70 = (undefined4)sVar7;
  }
  local_68 = param_3;
  if (param_3 != (wchar_t (*) [1])0x0) {
    sVar7 = wcslen(*param_3);
    uVar4 = (undefined4)sVar7;
  }
  iVar5 = 0;
  local_58 = param_4;
  iStack_50 = iVar5;
  uStack_60 = uVar4;
  if (param_4 != (wchar_t (*) [10])0x0) {
    sVar7 = wcslen(*param_4);
    iStack_50 = (int)sVar7;
  }
  local_48 = param_5;
  iStack_40 = iVar5;
  if (param_5 != (wchar_t (*) [5])0x0) {
    sVar7 = wcslen(*param_5);
    iStack_40 = (int)sVar7;
  }
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_f0,4,&local_e4);
  *(wchar_t (**) [1])local_f0.Data = local_78;
  *(ulonglong *)(local_f0.Data + 8) = CONCAT44(uStack_6c,uStack_70);
  *(wchar_t (**) [1])(local_f0.Data + 0x10) = local_68;
  *(ulonglong *)(local_f0.Data + 0x18) = CONCAT44(uStack_5c,uStack_60);
  *(wchar_t (**) [10])(local_f0.Data + 0x20) = local_58;
  *(ulonglong *)(local_f0.Data + 0x28) = CONCAT44(uStack_4c,iStack_50);
  *(wchar_t (**) [5])(local_f0.Data + 0x30) = local_48;
  *(ulonglong *)(local_f0.Data + 0x38) = CONCAT44(uStack_3c,iStack_40);
  local_a8[0] = &local_e0;
  local_c8 = local_a8;
  local_d0 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_1);
    iVar5 = (int)sVar7;
  }
  local_b8.Data.ArrayNum = iVar5;
  local_98.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
  local_98.Size = iVar5;
  local_98._12_4_ = local_b8.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_98,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_d0);
  lVar8 = (longlong)(int)(uint)local_d8;
  if ((uint)local_d8 == local_e8) {
    FVar11.Data = local_f0.Data;
    puVar12 = local_e0;
    if ((uint)local_d8 != 0) {
      do {
        iVar5 = *(int *)(puVar12 + 1);
        iVar15 = (int)*(undefined8 *)(FVar11.Data + 8);
        if (iVar5 != iVar15) goto LAB_141ccfab1;
        if ((iVar5 != 0) && (iVar15 != 0)) {
          iVar6 = iVar15;
          if (iVar5 < iVar15) {
            iVar6 = iVar5;
          }
          iVar6 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar12,*(wchar_t **)FVar11.Data,(longlong)iVar6);
          if (iVar6 != 0) goto LAB_141ccfab1;
        }
        if (iVar5 != iVar15) goto LAB_141ccfab1;
        lVar8 = lVar8 + -1;
        FVar11.Data = FVar11.Data + 0x10;
        puVar12 = puVar12 + 2;
      } while (lVar8 != 0);
    }
  }
  else {
LAB_141ccfab1:
    pFVar9 = FAutomationTestFramework::Get();
    uVar3 = local_e8;
    bVar2 = true;
    pFVar1 = pFVar9->CurrentTest;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    local_a8[0] = *(undefined8 ***)(pFVar1->_padding_ + 0x28);
    uVar10 = (ulonglong)(int)local_e8;
    pFVar13 = local_f0.Data + uVar10 * 0x10;
    FVar11.Data = local_f0.Data;
    while( true ) {
      if ((uint)uVar10 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (FVar11.Data == pFVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_b8,L",",1);
      }
      ::FString::AppendChars
                (&local_b8,*(wchar_t **)FVar11.Data,(int)*(undefined8 *)(FVar11.Data + 8));
      uVar10 = (ulonglong)local_e8;
      FVar11.Data = FVar11.Data + 0x10;
    }
    iVar5 = (uint)local_d8;
    bVar2 = true;
    local_d0 = (undefined1  [8])0x0;
    puVar14 = local_e0 + (longlong)(int)(uint)local_d8 * 2;
    local_c8 = (undefined8 ***)0x0;
    puVar12 = local_e0;
    while( true ) {
      if ((uint)local_d8 != iVar5) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (puVar12 == puVar14) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_d0,L",",1);
      }
      ::FString::AppendChars((FString *)local_d0,(wchar_t *)*puVar12,(int)puVar12[1]);
      puVar12 = puVar12 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_98,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*(code *)local_a8[0])(pFVar1,&local_98,0);
    if ((FScriptContainerElement *)local_98.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.DataPtr);
    }
    if (local_d0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_d0);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  if (local_e0 != (undefined8 *)0x0) {
    FMemory::Free(local_e0);
  }
  return;
}

// operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[1]> @ 141ccfcb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[1]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [1],wchar_t (*param_3) [1],
          wchar_t (*param_4) [10],wchar_t (*param_5) [5],wchar_t (*param_6) [1])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  longlong lVar8;
  FAutomationTestFramework *pFVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStackY_148 [32];
  undefined1 local_108 [8];
  ForAnyElementType local_100;
  uint local_f8;
  int local_f4;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [8];
  undefined8 ***local_d8;
  FString local_c8;
  undefined8 **local_b8 [2];
  TStringView<wchar_t> local_a8;
  wchar_t *local_98;
  wchar_t (*local_88) [1];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  wchar_t (*local_78) [1];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  wchar_t (*local_68) [10];
  int iStack_60;
  undefined4 uStack_5c;
  wchar_t (*local_58) [5];
  int iStack_50;
  undefined4 uStack_4c;
  wchar_t (*local_48) [1];
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  uVar4 = 0;
  local_f0 = (undefined8 *)0x0;
  local_e8 = 0;
  uStack_80 = uVar4;
  local_98 = param_1;
  local_88 = param_2;
  if (param_2 != (wchar_t (*) [1])0x0) {
    sVar7 = wcslen(*param_2);
    uStack_80 = (undefined4)sVar7;
  }
  local_78 = param_3;
  if (param_3 != (wchar_t (*) [1])0x0) {
    sVar7 = wcslen(*param_3);
    uVar4 = (undefined4)sVar7;
  }
  iVar5 = 0;
  local_68 = param_4;
  iStack_60 = iVar5;
  uStack_70 = uVar4;
  if (param_4 != (wchar_t (*) [10])0x0) {
    sVar7 = wcslen(*param_4);
    iStack_60 = (int)sVar7;
  }
  local_58 = param_5;
  iStack_50 = iVar5;
  if (param_5 != (wchar_t (*) [5])0x0) {
    sVar7 = wcslen(*param_5);
    iStack_50 = (int)sVar7;
  }
  local_48 = param_6;
  iStack_40 = iVar5;
  if (param_6 != (wchar_t (*) [1])0x0) {
    sVar7 = wcslen(*param_6);
    iStack_40 = (int)sVar7;
  }
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8 = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,5,0,&local_100,5,&local_f4);
  *(wchar_t (**) [1])local_100.Data = local_88;
  *(ulonglong *)(local_100.Data + 8) = CONCAT44(uStack_7c,uStack_80);
  *(wchar_t (**) [1])(local_100.Data + 0x10) = local_78;
  *(ulonglong *)(local_100.Data + 0x18) = CONCAT44(uStack_6c,uStack_70);
  *(wchar_t (**) [10])(local_100.Data + 0x20) = local_68;
  *(ulonglong *)(local_100.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  *(wchar_t (**) [5])(local_100.Data + 0x30) = local_58;
  *(ulonglong *)(local_100.Data + 0x38) = CONCAT44(uStack_4c,iStack_50);
  *(wchar_t (**) [1])(local_100.Data + 0x40) = local_48;
  *(ulonglong *)(local_100.Data + 0x48) = CONCAT44(uStack_3c,iStack_40);
  local_b8[0] = &local_f0;
  local_d8 = local_b8;
  local_e0 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[1]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_1);
    iVar5 = (int)sVar7;
  }
  local_c8.Data.ArrayNum = iVar5;
  local_a8.DataPtr = (wchar_t *)local_c8.Data.AllocatorInstance.Data;
  local_a8.Size = iVar5;
  local_a8._12_4_ = local_c8.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_a8,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_e0);
  lVar8 = (longlong)(int)(uint)local_e8;
  if ((uint)local_e8 == local_f8) {
    FVar11.Data = local_100.Data;
    puVar12 = local_f0;
    if ((uint)local_e8 != 0) {
      do {
        iVar5 = *(int *)(puVar12 + 1);
        iVar15 = (int)*(undefined8 *)(FVar11.Data + 8);
        if (iVar5 != iVar15) goto LAB_141ccfeb1;
        if ((iVar5 != 0) && (iVar15 != 0)) {
          iVar6 = iVar15;
          if (iVar5 < iVar15) {
            iVar6 = iVar5;
          }
          iVar6 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar12,*(wchar_t **)FVar11.Data,(longlong)iVar6);
          if (iVar6 != 0) goto LAB_141ccfeb1;
        }
        if (iVar5 != iVar15) goto LAB_141ccfeb1;
        lVar8 = lVar8 + -1;
        FVar11.Data = FVar11.Data + 0x10;
        puVar12 = puVar12 + 2;
      } while (lVar8 != 0);
    }
  }
  else {
LAB_141ccfeb1:
    pFVar9 = FAutomationTestFramework::Get();
    uVar3 = local_f8;
    bVar2 = true;
    pFVar1 = pFVar9->CurrentTest;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    local_b8[0] = *(undefined8 ***)(pFVar1->_padding_ + 0x28);
    uVar10 = (ulonglong)(int)local_f8;
    pFVar13 = local_100.Data + uVar10 * 0x10;
    FVar11.Data = local_100.Data;
    while( true ) {
      if ((uint)uVar10 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_108);
      }
      if (FVar11.Data == pFVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_c8,L",",1);
      }
      ::FString::AppendChars
                (&local_c8,*(wchar_t **)FVar11.Data,(int)*(undefined8 *)(FVar11.Data + 8));
      uVar10 = (ulonglong)local_f8;
      FVar11.Data = FVar11.Data + 0x10;
    }
    iVar5 = (uint)local_e8;
    bVar2 = true;
    local_e0 = (undefined1  [8])0x0;
    puVar14 = local_f0 + (longlong)(int)(uint)local_e8 * 2;
    local_d8 = (undefined8 ***)0x0;
    puVar12 = local_f0;
    while( true ) {
      if ((uint)local_e8 != iVar5) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_108);
      }
      if (puVar12 == puVar14) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_e0,L",",1);
      }
      ::FString::AppendChars((FString *)local_e0,(wchar_t *)*puVar12,(int)puVar12[1]);
      puVar12 = puVar12 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_a8,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*(code *)local_b8[0])(pFVar1,&local_a8,0);
    if ((FScriptContainerElement *)local_a8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.DataPtr);
    }
    if (local_e0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_e0);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (local_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data);
  }
  if (local_f0 != (undefined8 *)0x0) {
    FMemory::Free(local_f0);
  }
  return;
}

// operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[4]> @ 141cd00b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[4]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [1],wchar_t (*param_3) [1],
          wchar_t (*param_4) [10],wchar_t (*param_5) [5],wchar_t (*param_6) [4])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  longlong lVar8;
  FAutomationTestFramework *pFVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStackY_148 [32];
  undefined1 local_108 [8];
  ForAnyElementType local_100;
  uint local_f8;
  int local_f4;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [8];
  undefined8 ***local_d8;
  FString local_c8;
  undefined8 **local_b8 [2];
  TStringView<wchar_t> local_a8;
  wchar_t *local_98;
  wchar_t (*local_88) [1];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  wchar_t (*local_78) [1];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  wchar_t (*local_68) [10];
  int iStack_60;
  undefined4 uStack_5c;
  wchar_t (*local_58) [5];
  int iStack_50;
  undefined4 uStack_4c;
  wchar_t (*local_48) [4];
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  uVar4 = 0;
  local_f0 = (undefined8 *)0x0;
  local_e8 = 0;
  uStack_80 = uVar4;
  local_98 = param_1;
  local_88 = param_2;
  if (param_2 != (wchar_t (*) [1])0x0) {
    sVar7 = wcslen(*param_2);
    uStack_80 = (undefined4)sVar7;
  }
  local_78 = param_3;
  if (param_3 != (wchar_t (*) [1])0x0) {
    sVar7 = wcslen(*param_3);
    uVar4 = (undefined4)sVar7;
  }
  iVar5 = 0;
  local_68 = param_4;
  iStack_60 = iVar5;
  uStack_70 = uVar4;
  if (param_4 != (wchar_t (*) [10])0x0) {
    sVar7 = wcslen(*param_4);
    iStack_60 = (int)sVar7;
  }
  local_58 = param_5;
  iStack_50 = iVar5;
  if (param_5 != (wchar_t (*) [5])0x0) {
    sVar7 = wcslen(*param_5);
    iStack_50 = (int)sVar7;
  }
  local_48 = param_6;
  iStack_40 = iVar5;
  if (param_6 != (wchar_t (*) [4])0x0) {
    sVar7 = wcslen(*param_6);
    iStack_40 = (int)sVar7;
  }
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8 = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,5,0,&local_100,5,&local_f4);
  *(wchar_t (**) [1])local_100.Data = local_88;
  *(ulonglong *)(local_100.Data + 8) = CONCAT44(uStack_7c,uStack_80);
  *(wchar_t (**) [1])(local_100.Data + 0x10) = local_78;
  *(ulonglong *)(local_100.Data + 0x18) = CONCAT44(uStack_6c,uStack_70);
  *(wchar_t (**) [10])(local_100.Data + 0x20) = local_68;
  *(ulonglong *)(local_100.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  *(wchar_t (**) [5])(local_100.Data + 0x30) = local_58;
  *(ulonglong *)(local_100.Data + 0x38) = CONCAT44(uStack_4c,iStack_50);
  *(wchar_t (**) [4])(local_100.Data + 0x40) = local_48;
  *(ulonglong *)(local_100.Data + 0x48) = CONCAT44(uStack_3c,iStack_40);
  local_b8[0] = &local_f0;
  local_d8 = local_b8;
  local_e0 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[4]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_1);
    iVar5 = (int)sVar7;
  }
  local_c8.Data.ArrayNum = iVar5;
  local_a8.DataPtr = (wchar_t *)local_c8.Data.AllocatorInstance.Data;
  local_a8.Size = iVar5;
  local_a8._12_4_ = local_c8.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_a8,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_e0);
  lVar8 = (longlong)(int)(uint)local_e8;
  if ((uint)local_e8 == local_f8) {
    FVar11.Data = local_100.Data;
    puVar12 = local_f0;
    if ((uint)local_e8 != 0) {
      do {
        iVar5 = *(int *)(puVar12 + 1);
        iVar15 = (int)*(undefined8 *)(FVar11.Data + 8);
        if (iVar5 != iVar15) goto LAB_141cd02b1;
        if ((iVar5 != 0) && (iVar15 != 0)) {
          iVar6 = iVar15;
          if (iVar5 < iVar15) {
            iVar6 = iVar5;
          }
          iVar6 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar12,*(wchar_t **)FVar11.Data,(longlong)iVar6);
          if (iVar6 != 0) goto LAB_141cd02b1;
        }
        if (iVar5 != iVar15) goto LAB_141cd02b1;
        lVar8 = lVar8 + -1;
        FVar11.Data = FVar11.Data + 0x10;
        puVar12 = puVar12 + 2;
      } while (lVar8 != 0);
    }
  }
  else {
LAB_141cd02b1:
    pFVar9 = FAutomationTestFramework::Get();
    uVar3 = local_f8;
    bVar2 = true;
    pFVar1 = pFVar9->CurrentTest;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    local_b8[0] = *(undefined8 ***)(pFVar1->_padding_ + 0x28);
    uVar10 = (ulonglong)(int)local_f8;
    pFVar13 = local_100.Data + uVar10 * 0x10;
    FVar11.Data = local_100.Data;
    while( true ) {
      if ((uint)uVar10 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_108);
      }
      if (FVar11.Data == pFVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_c8,L",",1);
      }
      ::FString::AppendChars
                (&local_c8,*(wchar_t **)FVar11.Data,(int)*(undefined8 *)(FVar11.Data + 8));
      uVar10 = (ulonglong)local_f8;
      FVar11.Data = FVar11.Data + 0x10;
    }
    iVar5 = (uint)local_e8;
    bVar2 = true;
    local_e0 = (undefined1  [8])0x0;
    puVar14 = local_f0 + (longlong)(int)(uint)local_e8 * 2;
    local_d8 = (undefined8 ***)0x0;
    puVar12 = local_f0;
    while( true ) {
      if ((uint)local_e8 != iVar5) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_108);
      }
      if (puVar12 == puVar14) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_e0,L",",1);
      }
      ::FString::AppendChars((FString *)local_e0,(wchar_t *)*puVar12,(int)puVar12[1]);
      puVar12 = puVar12 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_a8,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*(code *)local_b8[0])(pFVar1,&local_a8,0);
    if ((FScriptContainerElement *)local_a8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.DataPtr);
    }
    if (local_e0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_e0);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (local_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data);
  }
  if (local_f0 != (undefined8 *)0x0) {
    FMemory::Free(local_f0);
  }
  return;
}

// operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[4],wchar_t_const_(&)[5]> @ 141cd04b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[4],wchar_t_const_(&)[5]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [1],wchar_t (*param_3) [1],
          wchar_t (*param_4) [10],wchar_t (*param_5) [5],wchar_t (*param_6) [4],
          wchar_t (*param_7) [5])

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  size_t sVar8;
  longlong lVar9;
  FAutomationTestFramework *pFVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  undefined8 *puVar13;
  FScriptContainerElement *pFVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined1 auStackY_158 [32];
  undefined1 local_118 [8];
  ForAnyElementType local_110;
  uint local_108;
  int local_104;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined1 local_f0 [8];
  undefined8 ***local_e8;
  FString local_d8;
  undefined8 **local_c8 [2];
  TStringView<wchar_t> local_b8;
  wchar_t *local_a8;
  wchar_t (*local_98) [1];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  wchar_t (*local_88) [1];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  wchar_t (*local_78) [10];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  wchar_t (*local_68) [5];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  wchar_t (*local_58) [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  wchar_t (*local_48) [5];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar5 = 0;
  local_100 = (undefined8 *)0x0;
  local_f8 = 0;
  uStack_90 = uVar5;
  local_a8 = param_1;
  local_98 = param_2;
  if (param_2 != (wchar_t (*) [1])0x0) {
    sVar8 = wcslen(*param_2);
    uStack_90 = (undefined4)sVar8;
  }
  local_88 = param_3;
  if (param_3 != (wchar_t (*) [1])0x0) {
    sVar8 = wcslen(*param_3);
    uVar5 = (undefined4)sVar8;
  }
  uVar6 = 0;
  local_78 = param_4;
  uStack_70 = uVar6;
  uStack_80 = uVar5;
  if (param_4 != (wchar_t (*) [10])0x0) {
    sVar8 = wcslen(*param_4);
    uStack_70 = (undefined4)sVar8;
  }
  local_68 = param_5;
  uStack_60 = uVar6;
  if (param_5 != (wchar_t (*) [5])0x0) {
    sVar8 = wcslen(*param_5);
    uStack_60 = (undefined4)sVar8;
  }
  local_58 = param_6;
  uStack_50 = uVar6;
  if (param_6 != (wchar_t (*) [4])0x0) {
    sVar8 = wcslen(*param_6);
    uStack_50 = (undefined4)sVar8;
  }
  local_48 = param_7;
  if (param_7 != (wchar_t (*) [5])0x0) {
    sVar8 = wcslen(*param_7);
    uVar6 = (undefined4)sVar8;
  }
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 6;
  uStack_40 = uVar6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,6,0,&local_110,6,&local_104);
  *(wchar_t (**) [1])local_110.Data = local_98;
  *(ulonglong *)(local_110.Data + 8) = CONCAT44(uStack_8c,uStack_90);
  *(wchar_t (**) [1])(local_110.Data + 0x10) = local_88;
  *(ulonglong *)(local_110.Data + 0x18) = CONCAT44(uStack_7c,uStack_80);
  *(wchar_t (**) [10])(local_110.Data + 0x20) = local_78;
  *(ulonglong *)(local_110.Data + 0x28) = CONCAT44(uStack_6c,uStack_70);
  *(wchar_t (**) [5])(local_110.Data + 0x30) = local_68;
  *(ulonglong *)(local_110.Data + 0x38) = CONCAT44(uStack_5c,uStack_60);
  *(wchar_t (**) [4])(local_110.Data + 0x40) = local_58;
  *(ulonglong *)(local_110.Data + 0x48) = CONCAT44(uStack_4c,uStack_50);
  *(wchar_t (**) [5])(local_110.Data + 0x50) = local_48;
  *(ulonglong *)(local_110.Data + 0x58) = CONCAT44(uStack_3c,uStack_40);
  local_c8[0] = &local_100;
  local_e8 = local_c8;
  local_f0 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[4],wchar_t_const_(&)[5]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar8 = wcslen(param_1);
    local_d8.Data.ArrayNum = (int)sVar8;
  }
  local_b8.DataPtr = (wchar_t *)local_d8.Data.AllocatorInstance.Data;
  local_b8.Size = local_d8.Data.ArrayNum;
  local_b8._12_4_ = local_d8.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_b8,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_f0);
  lVar9 = (longlong)(int)(uint)local_f8;
  if ((uint)local_f8 == local_108) {
    FVar12.Data = local_110.Data;
    puVar13 = local_100;
    if ((uint)local_f8 != 0) {
      do {
        iVar1 = *(int *)(puVar13 + 1);
        iVar16 = (int)*(undefined8 *)(FVar12.Data + 8);
        if (iVar1 != iVar16) goto LAB_141cd06d1;
        if ((iVar1 != 0) && (iVar16 != 0)) {
          iVar7 = iVar16;
          if (iVar1 < iVar16) {
            iVar7 = iVar1;
          }
          iVar7 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar13,*(wchar_t **)FVar12.Data,(longlong)iVar7);
          if (iVar7 != 0) goto LAB_141cd06d1;
        }
        if (iVar1 != iVar16) goto LAB_141cd06d1;
        lVar9 = lVar9 + -1;
        FVar12.Data = FVar12.Data + 0x10;
        puVar13 = puVar13 + 2;
      } while (lVar9 != 0);
    }
  }
  else {
LAB_141cd06d1:
    pFVar10 = FAutomationTestFramework::Get();
    uVar4 = local_108;
    bVar3 = true;
    pFVar2 = pFVar10->CurrentTest;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    local_c8[0] = *(undefined8 ***)(pFVar2->_padding_ + 0x28);
    uVar11 = (ulonglong)(int)local_108;
    pFVar14 = local_110.Data + uVar11 * 0x10;
    FVar12.Data = local_110.Data;
    while( true ) {
      if ((uint)uVar11 != uVar4) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_118);
      }
      if (FVar12.Data == pFVar14) break;
      if (bVar3) {
        bVar3 = false;
      }
      else {
        ::FString::AppendChars(&local_d8,L",",1);
      }
      ::FString::AppendChars
                (&local_d8,*(wchar_t **)FVar12.Data,(int)*(undefined8 *)(FVar12.Data + 8));
      uVar11 = (ulonglong)local_108;
      FVar12.Data = FVar12.Data + 0x10;
    }
    iVar1 = (uint)local_f8;
    bVar3 = true;
    local_f0 = (undefined1  [8])0x0;
    puVar15 = local_100 + (longlong)(int)(uint)local_f8 * 2;
    local_e8 = (undefined8 ***)0x0;
    puVar13 = local_100;
    while( true ) {
      if ((uint)local_f8 != iVar1) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_118);
      }
      if (puVar13 == puVar15) break;
      if (bVar3) {
        bVar3 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_f0,L",",1);
      }
      ::FString::AppendChars((FString *)local_f0,(wchar_t *)*puVar13,(int)puVar13[1]);
      puVar13 = puVar13 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_b8,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*(code *)local_c8[0])(pFVar2,&local_b8,0);
    if ((FScriptContainerElement *)local_b8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.DataPtr);
    }
    if (local_f0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_f0);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  if (local_100 != (undefined8 *)0x0) {
    FMemory::Free(local_100);
  }
  return;
}

// operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[4],wchar_t_const_(&)[9]> @ 141cd08d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[4],wchar_t_const_(&)[9]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [1],wchar_t (*param_3) [1],
          wchar_t (*param_4) [10],wchar_t (*param_5) [5],wchar_t (*param_6) [4],
          wchar_t (*param_7) [9])

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  size_t sVar8;
  longlong lVar9;
  FAutomationTestFramework *pFVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  undefined8 *puVar13;
  FScriptContainerElement *pFVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined1 auStackY_158 [32];
  undefined1 local_118 [8];
  ForAnyElementType local_110;
  uint local_108;
  int local_104;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined1 local_f0 [8];
  undefined8 ***local_e8;
  FString local_d8;
  undefined8 **local_c8 [2];
  TStringView<wchar_t> local_b8;
  wchar_t *local_a8;
  wchar_t (*local_98) [1];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  wchar_t (*local_88) [1];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  wchar_t (*local_78) [10];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  wchar_t (*local_68) [5];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  wchar_t (*local_58) [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  wchar_t (*local_48) [9];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar5 = 0;
  local_100 = (undefined8 *)0x0;
  local_f8 = 0;
  uStack_90 = uVar5;
  local_a8 = param_1;
  local_98 = param_2;
  if (param_2 != (wchar_t (*) [1])0x0) {
    sVar8 = wcslen(*param_2);
    uStack_90 = (undefined4)sVar8;
  }
  local_88 = param_3;
  if (param_3 != (wchar_t (*) [1])0x0) {
    sVar8 = wcslen(*param_3);
    uVar5 = (undefined4)sVar8;
  }
  uVar6 = 0;
  local_78 = param_4;
  uStack_70 = uVar6;
  uStack_80 = uVar5;
  if (param_4 != (wchar_t (*) [10])0x0) {
    sVar8 = wcslen(*param_4);
    uStack_70 = (undefined4)sVar8;
  }
  local_68 = param_5;
  uStack_60 = uVar6;
  if (param_5 != (wchar_t (*) [5])0x0) {
    sVar8 = wcslen(*param_5);
    uStack_60 = (undefined4)sVar8;
  }
  local_58 = param_6;
  uStack_50 = uVar6;
  if (param_6 != (wchar_t (*) [4])0x0) {
    sVar8 = wcslen(*param_6);
    uStack_50 = (undefined4)sVar8;
  }
  local_48 = param_7;
  if (param_7 != (wchar_t (*) [9])0x0) {
    sVar8 = wcslen(*param_7);
    uVar6 = (undefined4)sVar8;
  }
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 6;
  uStack_40 = uVar6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,6,0,&local_110,6,&local_104);
  *(wchar_t (**) [1])local_110.Data = local_98;
  *(ulonglong *)(local_110.Data + 8) = CONCAT44(uStack_8c,uStack_90);
  *(wchar_t (**) [1])(local_110.Data + 0x10) = local_88;
  *(ulonglong *)(local_110.Data + 0x18) = CONCAT44(uStack_7c,uStack_80);
  *(wchar_t (**) [10])(local_110.Data + 0x20) = local_78;
  *(ulonglong *)(local_110.Data + 0x28) = CONCAT44(uStack_6c,uStack_70);
  *(wchar_t (**) [5])(local_110.Data + 0x30) = local_68;
  *(ulonglong *)(local_110.Data + 0x38) = CONCAT44(uStack_5c,uStack_60);
  *(wchar_t (**) [4])(local_110.Data + 0x40) = local_58;
  *(ulonglong *)(local_110.Data + 0x48) = CONCAT44(uStack_4c,uStack_50);
  *(wchar_t (**) [9])(local_110.Data + 0x50) = local_48;
  *(ulonglong *)(local_110.Data + 0x58) = CONCAT44(uStack_3c,uStack_40);
  local_c8[0] = &local_100;
  local_e8 = local_c8;
  local_f0 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[4],wchar_t_const_(&)[9]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar8 = wcslen(param_1);
    local_d8.Data.ArrayNum = (int)sVar8;
  }
  local_b8.DataPtr = (wchar_t *)local_d8.Data.AllocatorInstance.Data;
  local_b8.Size = local_d8.Data.ArrayNum;
  local_b8._12_4_ = local_d8.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_b8,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_f0);
  lVar9 = (longlong)(int)(uint)local_f8;
  if ((uint)local_f8 == local_108) {
    FVar12.Data = local_110.Data;
    puVar13 = local_100;
    if ((uint)local_f8 != 0) {
      do {
        iVar1 = *(int *)(puVar13 + 1);
        iVar16 = (int)*(undefined8 *)(FVar12.Data + 8);
        if (iVar1 != iVar16) goto LAB_141cd0af1;
        if ((iVar1 != 0) && (iVar16 != 0)) {
          iVar7 = iVar16;
          if (iVar1 < iVar16) {
            iVar7 = iVar1;
          }
          iVar7 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar13,*(wchar_t **)FVar12.Data,(longlong)iVar7);
          if (iVar7 != 0) goto LAB_141cd0af1;
        }
        if (iVar1 != iVar16) goto LAB_141cd0af1;
        lVar9 = lVar9 + -1;
        FVar12.Data = FVar12.Data + 0x10;
        puVar13 = puVar13 + 2;
      } while (lVar9 != 0);
    }
  }
  else {
LAB_141cd0af1:
    pFVar10 = FAutomationTestFramework::Get();
    uVar4 = local_108;
    bVar3 = true;
    pFVar2 = pFVar10->CurrentTest;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    local_c8[0] = *(undefined8 ***)(pFVar2->_padding_ + 0x28);
    uVar11 = (ulonglong)(int)local_108;
    pFVar14 = local_110.Data + uVar11 * 0x10;
    FVar12.Data = local_110.Data;
    while( true ) {
      if ((uint)uVar11 != uVar4) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_118);
      }
      if (FVar12.Data == pFVar14) break;
      if (bVar3) {
        bVar3 = false;
      }
      else {
        ::FString::AppendChars(&local_d8,L",",1);
      }
      ::FString::AppendChars
                (&local_d8,*(wchar_t **)FVar12.Data,(int)*(undefined8 *)(FVar12.Data + 8));
      uVar11 = (ulonglong)local_108;
      FVar12.Data = FVar12.Data + 0x10;
    }
    iVar1 = (uint)local_f8;
    bVar3 = true;
    local_f0 = (undefined1  [8])0x0;
    puVar15 = local_100 + (longlong)(int)(uint)local_f8 * 2;
    local_e8 = (undefined8 ***)0x0;
    puVar13 = local_100;
    while( true ) {
      if ((uint)local_f8 != iVar1) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_118);
      }
      if (puVar13 == puVar15) break;
      if (bVar3) {
        bVar3 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_f0,L",",1);
      }
      ::FString::AppendChars((FString *)local_f0,(wchar_t *)*puVar13,(int)puVar13[1]);
      puVar13 = puVar13 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_b8,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*(code *)local_c8[0])(pFVar2,&local_b8,0);
    if ((FScriptContainerElement *)local_b8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.DataPtr);
    }
    if (local_f0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_f0);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  if (local_100 != (undefined8 *)0x0) {
    FMemory::Free(local_100);
  }
  return;
}

// operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[4],wchar_t_const_(&)[12]> @ 141cd0cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[4],wchar_t_const_(&)[12]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [1],wchar_t (*param_3) [1],
          wchar_t (*param_4) [10],wchar_t (*param_5) [5],wchar_t (*param_6) [4],
          wchar_t (*param_7) [12])

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  size_t sVar8;
  longlong lVar9;
  FAutomationTestFramework *pFVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  undefined8 *puVar13;
  FScriptContainerElement *pFVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined1 auStackY_158 [32];
  undefined1 local_118 [8];
  ForAnyElementType local_110;
  uint local_108;
  int local_104;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined1 local_f0 [8];
  undefined8 ***local_e8;
  FString local_d8;
  undefined8 **local_c8 [2];
  TStringView<wchar_t> local_b8;
  wchar_t *local_a8;
  wchar_t (*local_98) [1];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  wchar_t (*local_88) [1];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  wchar_t (*local_78) [10];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  wchar_t (*local_68) [5];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  wchar_t (*local_58) [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  wchar_t (*local_48) [12];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar5 = 0;
  local_100 = (undefined8 *)0x0;
  local_f8 = 0;
  uStack_90 = uVar5;
  local_a8 = param_1;
  local_98 = param_2;
  if (param_2 != (wchar_t (*) [1])0x0) {
    sVar8 = wcslen(*param_2);
    uStack_90 = (undefined4)sVar8;
  }
  local_88 = param_3;
  if (param_3 != (wchar_t (*) [1])0x0) {
    sVar8 = wcslen(*param_3);
    uVar5 = (undefined4)sVar8;
  }
  uVar6 = 0;
  local_78 = param_4;
  uStack_70 = uVar6;
  uStack_80 = uVar5;
  if (param_4 != (wchar_t (*) [10])0x0) {
    sVar8 = wcslen(*param_4);
    uStack_70 = (undefined4)sVar8;
  }
  local_68 = param_5;
  uStack_60 = uVar6;
  if (param_5 != (wchar_t (*) [5])0x0) {
    sVar8 = wcslen(*param_5);
    uStack_60 = (undefined4)sVar8;
  }
  local_58 = param_6;
  uStack_50 = uVar6;
  if (param_6 != (wchar_t (*) [4])0x0) {
    sVar8 = wcslen(*param_6);
    uStack_50 = (undefined4)sVar8;
  }
  local_48 = param_7;
  if (param_7 != (wchar_t (*) [12])0x0) {
    sVar8 = wcslen(*param_7);
    uVar6 = (undefined4)sVar8;
  }
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 6;
  uStack_40 = uVar6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,6,0,&local_110,6,&local_104);
  *(wchar_t (**) [1])local_110.Data = local_98;
  *(ulonglong *)(local_110.Data + 8) = CONCAT44(uStack_8c,uStack_90);
  *(wchar_t (**) [1])(local_110.Data + 0x10) = local_88;
  *(ulonglong *)(local_110.Data + 0x18) = CONCAT44(uStack_7c,uStack_80);
  *(wchar_t (**) [10])(local_110.Data + 0x20) = local_78;
  *(ulonglong *)(local_110.Data + 0x28) = CONCAT44(uStack_6c,uStack_70);
  *(wchar_t (**) [5])(local_110.Data + 0x30) = local_68;
  *(ulonglong *)(local_110.Data + 0x38) = CONCAT44(uStack_5c,uStack_60);
  *(wchar_t (**) [4])(local_110.Data + 0x40) = local_58;
  *(ulonglong *)(local_110.Data + 0x48) = CONCAT44(uStack_4c,uStack_50);
  *(wchar_t (**) [12])(local_110.Data + 0x50) = local_48;
  *(ulonglong *)(local_110.Data + 0x58) = CONCAT44(uStack_3c,uStack_40);
  local_c8[0] = &local_100;
  local_e8 = local_c8;
  local_f0 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[4],wchar_t_const_(&)[12]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar8 = wcslen(param_1);
    local_d8.Data.ArrayNum = (int)sVar8;
  }
  local_b8.DataPtr = (wchar_t *)local_d8.Data.AllocatorInstance.Data;
  local_b8.Size = local_d8.Data.ArrayNum;
  local_b8._12_4_ = local_d8.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_b8,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_f0);
  lVar9 = (longlong)(int)(uint)local_f8;
  if ((uint)local_f8 == local_108) {
    FVar12.Data = local_110.Data;
    puVar13 = local_100;
    if ((uint)local_f8 != 0) {
      do {
        iVar1 = *(int *)(puVar13 + 1);
        iVar16 = (int)*(undefined8 *)(FVar12.Data + 8);
        if (iVar1 != iVar16) goto LAB_141cd0f11;
        if ((iVar1 != 0) && (iVar16 != 0)) {
          iVar7 = iVar16;
          if (iVar1 < iVar16) {
            iVar7 = iVar1;
          }
          iVar7 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar13,*(wchar_t **)FVar12.Data,(longlong)iVar7);
          if (iVar7 != 0) goto LAB_141cd0f11;
        }
        if (iVar1 != iVar16) goto LAB_141cd0f11;
        lVar9 = lVar9 + -1;
        FVar12.Data = FVar12.Data + 0x10;
        puVar13 = puVar13 + 2;
      } while (lVar9 != 0);
    }
  }
  else {
LAB_141cd0f11:
    pFVar10 = FAutomationTestFramework::Get();
    uVar4 = local_108;
    bVar3 = true;
    pFVar2 = pFVar10->CurrentTest;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    local_c8[0] = *(undefined8 ***)(pFVar2->_padding_ + 0x28);
    uVar11 = (ulonglong)(int)local_108;
    pFVar14 = local_110.Data + uVar11 * 0x10;
    FVar12.Data = local_110.Data;
    while( true ) {
      if ((uint)uVar11 != uVar4) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_118);
      }
      if (FVar12.Data == pFVar14) break;
      if (bVar3) {
        bVar3 = false;
      }
      else {
        ::FString::AppendChars(&local_d8,L",",1);
      }
      ::FString::AppendChars
                (&local_d8,*(wchar_t **)FVar12.Data,(int)*(undefined8 *)(FVar12.Data + 8));
      uVar11 = (ulonglong)local_108;
      FVar12.Data = FVar12.Data + 0x10;
    }
    iVar1 = (uint)local_f8;
    bVar3 = true;
    local_f0 = (undefined1  [8])0x0;
    puVar15 = local_100 + (longlong)(int)(uint)local_f8 * 2;
    local_e8 = (undefined8 ***)0x0;
    puVar13 = local_100;
    while( true ) {
      if ((uint)local_f8 != iVar1) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_118);
      }
      if (puVar13 == puVar15) break;
      if (bVar3) {
        bVar3 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_f0,L",",1);
      }
      ::FString::AppendChars((FString *)local_f0,(wchar_t *)*puVar13,(int)puVar13[1]);
      puVar13 = puVar13 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_b8,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*(code *)local_c8[0])(pFVar2,&local_b8,0);
    if ((FScriptContainerElement *)local_b8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.DataPtr);
    }
    if (local_f0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_f0);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  if (local_100 != (undefined8 *)0x0) {
    FMemory::Free(local_100);
  }
  return;
}

// operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11]> @ 141cd1110

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [1],wchar_t (*param_3) [11])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  longlong lVar7;
  FAutomationTestFramework *pFVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 **local_res18;
  code *local_res20;
  ForAnyElementType local_98;
  uint local_90;
  int local_8c;
  undefined8 *local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  undefined8 ***local_70;
  FString local_68;
  TStringView<wchar_t> local_58;
  wchar_t (*local_48) [11];
  int iStack_40;
  undefined4 uStack_3c;
  
  local_88 = (undefined8 *)0x0;
  iVar4 = 0;
  local_80 = 0;
  local_58.Size = iVar4;
  local_58.DataPtr = *param_2;
  if (param_2 != (wchar_t (*) [1])0x0) {
    sVar6 = wcslen(*param_2);
    local_58.Size = (int)sVar6;
  }
  local_48 = param_3;
  if (param_3 != (wchar_t (*) [11])0x0) {
    sVar6 = wcslen(*param_3);
    iVar4 = (int)sVar6;
  }
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 2;
  iStack_40 = iVar4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_98,2,&local_8c);
  *(wchar_t **)local_98.Data = local_58.DataPtr;
  *(undefined8 *)(local_98.Data + 8) = local_58._8_8_;
  *(wchar_t (**) [11])(local_98.Data + 0x10) = local_48;
  *(ulonglong *)(local_98.Data + 0x18) = CONCAT44(uStack_3c,iStack_40);
  local_res18 = &local_88;
  local_70 = &local_res18;
  local_78 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_68.Data.ArrayNum = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    local_68.Data.ArrayNum = (int)sVar6;
  }
  local_58.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
  local_58.Size = local_68.Data.ArrayNum;
  local_58._12_4_ = local_68.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_58,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_78);
  lVar7 = (longlong)(int)(uint)local_80;
  if ((uint)local_80 == local_90) {
    FVar10.Data = local_98.Data;
    puVar11 = local_88;
    if ((uint)local_80 != 0) {
      do {
        iVar4 = *(int *)(puVar11 + 1);
        iVar14 = (int)*(undefined8 *)(FVar10.Data + 8);
        if (iVar4 != iVar14) goto LAB_141cd1291;
        if ((iVar4 != 0) && (iVar14 != 0)) {
          iVar5 = iVar14;
          if (iVar4 < iVar14) {
            iVar5 = iVar4;
          }
          iVar5 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar11,*(wchar_t **)FVar10.Data,(longlong)iVar5);
          if (iVar5 != 0) goto LAB_141cd1291;
        }
        if (iVar4 != iVar14) goto LAB_141cd1291;
        lVar7 = lVar7 + -1;
        FVar10.Data = FVar10.Data + 0x10;
        puVar11 = puVar11 + 2;
      } while (lVar7 != 0);
    }
  }
  else {
LAB_141cd1291:
    pFVar8 = FAutomationTestFramework::Get();
    uVar3 = local_90;
    bVar2 = true;
    pFVar1 = pFVar8->CurrentTest;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_res20 = *(code **)(pFVar1->_padding_ + 0x28);
    uVar9 = (ulonglong)(int)local_90;
    pFVar12 = local_98.Data + uVar9 * 0x10;
    FVar10.Data = local_98.Data;
    while( true ) {
      if ((uint)uVar9 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (FVar10.Data == pFVar12) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_68,L",",1);
      }
      ::FString::AppendChars
                (&local_68,*(wchar_t **)FVar10.Data,(int)*(undefined8 *)(FVar10.Data + 8));
      uVar9 = (ulonglong)local_90;
      FVar10.Data = FVar10.Data + 0x10;
    }
    iVar4 = (uint)local_80;
    bVar2 = true;
    local_78 = (undefined1  [8])0x0;
    puVar13 = local_88 + (longlong)(int)(uint)local_80 * 2;
    local_70 = (undefined8 ***)0x0;
    puVar11 = local_88;
    while( true ) {
      if ((uint)local_80 != iVar4) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (puVar11 == puVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_78,L",",1);
      }
      ::FString::AppendChars((FString *)local_78,(wchar_t *)*puVar11,(int)puVar11[1]);
      puVar11 = puVar11 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_58,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*local_res20)(pFVar1,&local_58,0);
    if ((FScriptContainerElement *)local_58.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
    if (local_78 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_78);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  if (local_88 != (undefined8 *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[1]> @ 141cd1470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[1]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [1],wchar_t (*param_3) [11],
          wchar_t (*param_4) [1])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  longlong lVar8;
  FAutomationTestFramework *pFVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStackY_118 [32];
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  uint local_c8;
  int local_c4;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  undefined8 ***local_a8;
  FString local_98;
  undefined8 **local_88 [2];
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  wchar_t (*local_60) [1];
  undefined4 uStack_58;
  undefined4 uStack_54;
  wchar_t (*local_50) [11];
  undefined4 uStack_48;
  undefined4 uStack_44;
  wchar_t (*local_40) [1];
  int iStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_118;
  uVar4 = 0;
  local_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  uStack_58 = uVar4;
  local_68 = param_1;
  local_60 = param_2;
  if (param_2 != (wchar_t (*) [1])0x0) {
    sVar7 = wcslen(*param_2);
    uStack_58 = (undefined4)sVar7;
  }
  local_50 = param_3;
  if (param_3 != (wchar_t (*) [11])0x0) {
    sVar7 = wcslen(*param_3);
    uVar4 = (undefined4)sVar7;
  }
  iVar5 = 0;
  local_40 = param_4;
  iStack_38 = iVar5;
  uStack_48 = uVar4;
  if (param_4 != (wchar_t (*) [1])0x0) {
    sVar7 = wcslen(*param_4);
    iStack_38 = (int)sVar7;
  }
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d0,3,&local_c4);
  *(wchar_t (**) [1])local_d0.Data = local_60;
  *(ulonglong *)(local_d0.Data + 8) = CONCAT44(uStack_54,uStack_58);
  *(wchar_t (**) [11])(local_d0.Data + 0x10) = local_50;
  *(ulonglong *)(local_d0.Data + 0x18) = CONCAT44(uStack_44,uStack_48);
  *(wchar_t (**) [1])(local_d0.Data + 0x20) = local_40;
  *(ulonglong *)(local_d0.Data + 0x28) = CONCAT44(uStack_34,iStack_38);
  local_88[0] = &local_c0;
  local_a8 = local_88;
  local_b0 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[1]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_1);
    iVar5 = (int)sVar7;
  }
  local_98.Data.ArrayNum = iVar5;
  local_78.DataPtr = (wchar_t *)local_98.Data.AllocatorInstance.Data;
  local_78.Size = iVar5;
  local_78._12_4_ = local_98.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_78,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_b0);
  lVar8 = (longlong)(int)(uint)local_b8;
  if ((uint)local_b8 == local_c8) {
    FVar11.Data = local_d0.Data;
    puVar12 = local_c0;
    if ((uint)local_b8 != 0) {
      do {
        iVar5 = *(int *)(puVar12 + 1);
        iVar15 = (int)*(undefined8 *)(FVar11.Data + 8);
        if (iVar5 != iVar15) goto LAB_141cd1631;
        if ((iVar5 != 0) && (iVar15 != 0)) {
          iVar6 = iVar15;
          if (iVar5 < iVar15) {
            iVar6 = iVar5;
          }
          iVar6 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar12,*(wchar_t **)FVar11.Data,(longlong)iVar6);
          if (iVar6 != 0) goto LAB_141cd1631;
        }
        if (iVar5 != iVar15) goto LAB_141cd1631;
        lVar8 = lVar8 + -1;
        FVar11.Data = FVar11.Data + 0x10;
        puVar12 = puVar12 + 2;
      } while (lVar8 != 0);
    }
  }
  else {
LAB_141cd1631:
    pFVar9 = FAutomationTestFramework::Get();
    uVar3 = local_c8;
    bVar2 = true;
    pFVar1 = pFVar9->CurrentTest;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_88[0] = *(undefined8 ***)(pFVar1->_padding_ + 0x28);
    uVar10 = (ulonglong)(int)local_c8;
    pFVar13 = local_d0.Data + uVar10 * 0x10;
    FVar11.Data = local_d0.Data;
    while( true ) {
      if ((uint)uVar10 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      if (FVar11.Data == pFVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_98,L",",1);
      }
      ::FString::AppendChars
                (&local_98,*(wchar_t **)FVar11.Data,(int)*(undefined8 *)(FVar11.Data + 8));
      uVar10 = (ulonglong)local_c8;
      FVar11.Data = FVar11.Data + 0x10;
    }
    iVar5 = (uint)local_b8;
    bVar2 = true;
    local_b0 = (undefined1  [8])0x0;
    puVar14 = local_c0 + (longlong)(int)(uint)local_b8 * 2;
    local_a8 = (undefined8 ***)0x0;
    puVar12 = local_c0;
    while( true ) {
      if ((uint)local_b8 != iVar5) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      if (puVar12 == puVar14) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_b0,L",",1);
      }
      ::FString::AppendChars((FString *)local_b0,(wchar_t *)*puVar12,(int)puVar12[1]);
      puVar12 = puVar12 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_78,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*(code *)local_88[0])(pFVar1,&local_78,0);
    if ((FScriptContainerElement *)local_78.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.DataPtr);
    }
    if (local_b0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_b0);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  if (local_c0 != (undefined8 *)0x0) {
    FMemory::Free(local_c0);
  }
  return;
}

// operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[4]> @ 141cd1830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[4]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [1],wchar_t (*param_3) [11],
          wchar_t (*param_4) [4])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  longlong lVar8;
  FAutomationTestFramework *pFVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStackY_118 [32];
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  uint local_c8;
  int local_c4;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  undefined8 ***local_a8;
  FString local_98;
  undefined8 **local_88 [2];
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  wchar_t (*local_60) [1];
  undefined4 uStack_58;
  undefined4 uStack_54;
  wchar_t (*local_50) [11];
  undefined4 uStack_48;
  undefined4 uStack_44;
  wchar_t (*local_40) [4];
  int iStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_118;
  uVar4 = 0;
  local_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  uStack_58 = uVar4;
  local_68 = param_1;
  local_60 = param_2;
  if (param_2 != (wchar_t (*) [1])0x0) {
    sVar7 = wcslen(*param_2);
    uStack_58 = (undefined4)sVar7;
  }
  local_50 = param_3;
  if (param_3 != (wchar_t (*) [11])0x0) {
    sVar7 = wcslen(*param_3);
    uVar4 = (undefined4)sVar7;
  }
  iVar5 = 0;
  local_40 = param_4;
  iStack_38 = iVar5;
  uStack_48 = uVar4;
  if (param_4 != (wchar_t (*) [4])0x0) {
    sVar7 = wcslen(*param_4);
    iStack_38 = (int)sVar7;
  }
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d0,3,&local_c4);
  *(wchar_t (**) [1])local_d0.Data = local_60;
  *(ulonglong *)(local_d0.Data + 8) = CONCAT44(uStack_54,uStack_58);
  *(wchar_t (**) [11])(local_d0.Data + 0x10) = local_50;
  *(ulonglong *)(local_d0.Data + 0x18) = CONCAT44(uStack_44,uStack_48);
  *(wchar_t (**) [4])(local_d0.Data + 0x20) = local_40;
  *(ulonglong *)(local_d0.Data + 0x28) = CONCAT44(uStack_34,iStack_38);
  local_88[0] = &local_c0;
  local_a8 = local_88;
  local_b0 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[4]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_1);
    iVar5 = (int)sVar7;
  }
  local_98.Data.ArrayNum = iVar5;
  local_78.DataPtr = (wchar_t *)local_98.Data.AllocatorInstance.Data;
  local_78.Size = iVar5;
  local_78._12_4_ = local_98.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_78,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_b0);
  lVar8 = (longlong)(int)(uint)local_b8;
  if ((uint)local_b8 == local_c8) {
    FVar11.Data = local_d0.Data;
    puVar12 = local_c0;
    if ((uint)local_b8 != 0) {
      do {
        iVar5 = *(int *)(puVar12 + 1);
        iVar15 = (int)*(undefined8 *)(FVar11.Data + 8);
        if (iVar5 != iVar15) goto LAB_141cd19f1;
        if ((iVar5 != 0) && (iVar15 != 0)) {
          iVar6 = iVar15;
          if (iVar5 < iVar15) {
            iVar6 = iVar5;
          }
          iVar6 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar12,*(wchar_t **)FVar11.Data,(longlong)iVar6);
          if (iVar6 != 0) goto LAB_141cd19f1;
        }
        if (iVar5 != iVar15) goto LAB_141cd19f1;
        lVar8 = lVar8 + -1;
        FVar11.Data = FVar11.Data + 0x10;
        puVar12 = puVar12 + 2;
      } while (lVar8 != 0);
    }
  }
  else {
LAB_141cd19f1:
    pFVar9 = FAutomationTestFramework::Get();
    uVar3 = local_c8;
    bVar2 = true;
    pFVar1 = pFVar9->CurrentTest;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_88[0] = *(undefined8 ***)(pFVar1->_padding_ + 0x28);
    uVar10 = (ulonglong)(int)local_c8;
    pFVar13 = local_d0.Data + uVar10 * 0x10;
    FVar11.Data = local_d0.Data;
    while( true ) {
      if ((uint)uVar10 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      if (FVar11.Data == pFVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_98,L",",1);
      }
      ::FString::AppendChars
                (&local_98,*(wchar_t **)FVar11.Data,(int)*(undefined8 *)(FVar11.Data + 8));
      uVar10 = (ulonglong)local_c8;
      FVar11.Data = FVar11.Data + 0x10;
    }
    iVar5 = (uint)local_b8;
    bVar2 = true;
    local_b0 = (undefined1  [8])0x0;
    puVar14 = local_c0 + (longlong)(int)(uint)local_b8 * 2;
    local_a8 = (undefined8 ***)0x0;
    puVar12 = local_c0;
    while( true ) {
      if ((uint)local_b8 != iVar5) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      if (puVar12 == puVar14) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_b0,L",",1);
      }
      ::FString::AppendChars((FString *)local_b0,(wchar_t *)*puVar12,(int)puVar12[1]);
      puVar12 = puVar12 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_78,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*(code *)local_88[0])(pFVar1,&local_78,0);
    if ((FScriptContainerElement *)local_78.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.DataPtr);
    }
    if (local_b0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_b0);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  if (local_c0 != (undefined8 *)0x0) {
    FMemory::Free(local_c0);
  }
  return;
}

// operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[4],wchar_t_const_(&)[5]> @ 141cd1bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[4],wchar_t_const_(&)[5]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [1],wchar_t (*param_3) [11],
          wchar_t (*param_4) [4],wchar_t (*param_5) [5])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  longlong lVar8;
  FAutomationTestFramework *pFVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStackY_138 [32];
  undefined1 local_f8 [8];
  ForAnyElementType local_f0;
  uint local_e8;
  int local_e4;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  undefined8 ***local_c8;
  FString local_b8;
  undefined8 **local_a8 [2];
  TStringView<wchar_t> local_98;
  wchar_t *local_88;
  wchar_t (*local_78) [1];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  wchar_t (*local_68) [11];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  wchar_t (*local_58) [4];
  int iStack_50;
  undefined4 uStack_4c;
  wchar_t (*local_48) [5];
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar4 = 0;
  local_e0 = (undefined8 *)0x0;
  local_d8 = 0;
  uStack_70 = uVar4;
  local_88 = param_1;
  local_78 = param_2;
  if (param_2 != (wchar_t (*) [1])0x0) {
    sVar7 = wcslen(*param_2);
    uStack_70 = (undefined4)sVar7;
  }
  local_68 = param_3;
  if (param_3 != (wchar_t (*) [11])0x0) {
    sVar7 = wcslen(*param_3);
    uVar4 = (undefined4)sVar7;
  }
  iVar5 = 0;
  local_58 = param_4;
  iStack_50 = iVar5;
  uStack_60 = uVar4;
  if (param_4 != (wchar_t (*) [4])0x0) {
    sVar7 = wcslen(*param_4);
    iStack_50 = (int)sVar7;
  }
  local_48 = param_5;
  iStack_40 = iVar5;
  if (param_5 != (wchar_t (*) [5])0x0) {
    sVar7 = wcslen(*param_5);
    iStack_40 = (int)sVar7;
  }
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_f0,4,&local_e4);
  *(wchar_t (**) [1])local_f0.Data = local_78;
  *(ulonglong *)(local_f0.Data + 8) = CONCAT44(uStack_6c,uStack_70);
  *(wchar_t (**) [11])(local_f0.Data + 0x10) = local_68;
  *(ulonglong *)(local_f0.Data + 0x18) = CONCAT44(uStack_5c,uStack_60);
  *(wchar_t (**) [4])(local_f0.Data + 0x20) = local_58;
  *(ulonglong *)(local_f0.Data + 0x28) = CONCAT44(uStack_4c,iStack_50);
  *(wchar_t (**) [5])(local_f0.Data + 0x30) = local_48;
  *(ulonglong *)(local_f0.Data + 0x38) = CONCAT44(uStack_3c,iStack_40);
  local_a8[0] = &local_e0;
  local_c8 = local_a8;
  local_d0 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[4],wchar_t_const_(&)[5]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_1);
    iVar5 = (int)sVar7;
  }
  local_b8.Data.ArrayNum = iVar5;
  local_98.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
  local_98.Size = iVar5;
  local_98._12_4_ = local_b8.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_98,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_d0);
  lVar8 = (longlong)(int)(uint)local_d8;
  if ((uint)local_d8 == local_e8) {
    FVar11.Data = local_f0.Data;
    puVar12 = local_e0;
    if ((uint)local_d8 != 0) {
      do {
        iVar5 = *(int *)(puVar12 + 1);
        iVar15 = (int)*(undefined8 *)(FVar11.Data + 8);
        if (iVar5 != iVar15) goto LAB_141cd1dd1;
        if ((iVar5 != 0) && (iVar15 != 0)) {
          iVar6 = iVar15;
          if (iVar5 < iVar15) {
            iVar6 = iVar5;
          }
          iVar6 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar12,*(wchar_t **)FVar11.Data,(longlong)iVar6);
          if (iVar6 != 0) goto LAB_141cd1dd1;
        }
        if (iVar5 != iVar15) goto LAB_141cd1dd1;
        lVar8 = lVar8 + -1;
        FVar11.Data = FVar11.Data + 0x10;
        puVar12 = puVar12 + 2;
      } while (lVar8 != 0);
    }
  }
  else {
LAB_141cd1dd1:
    pFVar9 = FAutomationTestFramework::Get();
    uVar3 = local_e8;
    bVar2 = true;
    pFVar1 = pFVar9->CurrentTest;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    local_a8[0] = *(undefined8 ***)(pFVar1->_padding_ + 0x28);
    uVar10 = (ulonglong)(int)local_e8;
    pFVar13 = local_f0.Data + uVar10 * 0x10;
    FVar11.Data = local_f0.Data;
    while( true ) {
      if ((uint)uVar10 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (FVar11.Data == pFVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_b8,L",",1);
      }
      ::FString::AppendChars
                (&local_b8,*(wchar_t **)FVar11.Data,(int)*(undefined8 *)(FVar11.Data + 8));
      uVar10 = (ulonglong)local_e8;
      FVar11.Data = FVar11.Data + 0x10;
    }
    iVar5 = (uint)local_d8;
    bVar2 = true;
    local_d0 = (undefined1  [8])0x0;
    puVar14 = local_e0 + (longlong)(int)(uint)local_d8 * 2;
    local_c8 = (undefined8 ***)0x0;
    puVar12 = local_e0;
    while( true ) {
      if ((uint)local_d8 != iVar5) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (puVar12 == puVar14) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_d0,L",",1);
      }
      ::FString::AppendChars((FString *)local_d0,(wchar_t *)*puVar12,(int)puVar12[1]);
      puVar12 = puVar12 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_98,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*(code *)local_a8[0])(pFVar1,&local_98,0);
    if ((FScriptContainerElement *)local_98.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.DataPtr);
    }
    if (local_d0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_d0);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  if (local_e0 != (undefined8 *)0x0) {
    FMemory::Free(local_e0);
  }
  return;
}

// operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[4],wchar_t_const_(&)[9]> @ 141cd1fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[4],wchar_t_const_(&)[9]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [1],wchar_t (*param_3) [11],
          wchar_t (*param_4) [4],wchar_t (*param_5) [9])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  longlong lVar8;
  FAutomationTestFramework *pFVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStackY_138 [32];
  undefined1 local_f8 [8];
  ForAnyElementType local_f0;
  uint local_e8;
  int local_e4;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  undefined8 ***local_c8;
  FString local_b8;
  undefined8 **local_a8 [2];
  TStringView<wchar_t> local_98;
  wchar_t *local_88;
  wchar_t (*local_78) [1];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  wchar_t (*local_68) [11];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  wchar_t (*local_58) [4];
  int iStack_50;
  undefined4 uStack_4c;
  wchar_t (*local_48) [9];
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar4 = 0;
  local_e0 = (undefined8 *)0x0;
  local_d8 = 0;
  uStack_70 = uVar4;
  local_88 = param_1;
  local_78 = param_2;
  if (param_2 != (wchar_t (*) [1])0x0) {
    sVar7 = wcslen(*param_2);
    uStack_70 = (undefined4)sVar7;
  }
  local_68 = param_3;
  if (param_3 != (wchar_t (*) [11])0x0) {
    sVar7 = wcslen(*param_3);
    uVar4 = (undefined4)sVar7;
  }
  iVar5 = 0;
  local_58 = param_4;
  iStack_50 = iVar5;
  uStack_60 = uVar4;
  if (param_4 != (wchar_t (*) [4])0x0) {
    sVar7 = wcslen(*param_4);
    iStack_50 = (int)sVar7;
  }
  local_48 = param_5;
  iStack_40 = iVar5;
  if (param_5 != (wchar_t (*) [9])0x0) {
    sVar7 = wcslen(*param_5);
    iStack_40 = (int)sVar7;
  }
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_f0,4,&local_e4);
  *(wchar_t (**) [1])local_f0.Data = local_78;
  *(ulonglong *)(local_f0.Data + 8) = CONCAT44(uStack_6c,uStack_70);
  *(wchar_t (**) [11])(local_f0.Data + 0x10) = local_68;
  *(ulonglong *)(local_f0.Data + 0x18) = CONCAT44(uStack_5c,uStack_60);
  *(wchar_t (**) [4])(local_f0.Data + 0x20) = local_58;
  *(ulonglong *)(local_f0.Data + 0x28) = CONCAT44(uStack_4c,iStack_50);
  *(wchar_t (**) [9])(local_f0.Data + 0x30) = local_48;
  *(ulonglong *)(local_f0.Data + 0x38) = CONCAT44(uStack_3c,iStack_40);
  local_a8[0] = &local_e0;
  local_c8 = local_a8;
  local_d0 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[4],wchar_t_const_(&)[9]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_1);
    iVar5 = (int)sVar7;
  }
  local_b8.Data.ArrayNum = iVar5;
  local_98.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
  local_98.Size = iVar5;
  local_98._12_4_ = local_b8.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_98,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_d0);
  lVar8 = (longlong)(int)(uint)local_d8;
  if ((uint)local_d8 == local_e8) {
    FVar11.Data = local_f0.Data;
    puVar12 = local_e0;
    if ((uint)local_d8 != 0) {
      do {
        iVar5 = *(int *)(puVar12 + 1);
        iVar15 = (int)*(undefined8 *)(FVar11.Data + 8);
        if (iVar5 != iVar15) goto LAB_141cd21b1;
        if ((iVar5 != 0) && (iVar15 != 0)) {
          iVar6 = iVar15;
          if (iVar5 < iVar15) {
            iVar6 = iVar5;
          }
          iVar6 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar12,*(wchar_t **)FVar11.Data,(longlong)iVar6);
          if (iVar6 != 0) goto LAB_141cd21b1;
        }
        if (iVar5 != iVar15) goto LAB_141cd21b1;
        lVar8 = lVar8 + -1;
        FVar11.Data = FVar11.Data + 0x10;
        puVar12 = puVar12 + 2;
      } while (lVar8 != 0);
    }
  }
  else {
LAB_141cd21b1:
    pFVar9 = FAutomationTestFramework::Get();
    uVar3 = local_e8;
    bVar2 = true;
    pFVar1 = pFVar9->CurrentTest;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    local_a8[0] = *(undefined8 ***)(pFVar1->_padding_ + 0x28);
    uVar10 = (ulonglong)(int)local_e8;
    pFVar13 = local_f0.Data + uVar10 * 0x10;
    FVar11.Data = local_f0.Data;
    while( true ) {
      if ((uint)uVar10 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (FVar11.Data == pFVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_b8,L",",1);
      }
      ::FString::AppendChars
                (&local_b8,*(wchar_t **)FVar11.Data,(int)*(undefined8 *)(FVar11.Data + 8));
      uVar10 = (ulonglong)local_e8;
      FVar11.Data = FVar11.Data + 0x10;
    }
    iVar5 = (uint)local_d8;
    bVar2 = true;
    local_d0 = (undefined1  [8])0x0;
    puVar14 = local_e0 + (longlong)(int)(uint)local_d8 * 2;
    local_c8 = (undefined8 ***)0x0;
    puVar12 = local_e0;
    while( true ) {
      if ((uint)local_d8 != iVar5) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (puVar12 == puVar14) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_d0,L",",1);
      }
      ::FString::AppendChars((FString *)local_d0,(wchar_t *)*puVar12,(int)puVar12[1]);
      puVar12 = puVar12 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_98,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*(code *)local_a8[0])(pFVar1,&local_98,0);
    if ((FScriptContainerElement *)local_98.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.DataPtr);
    }
    if (local_d0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_d0);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  if (local_e0 != (undefined8 *)0x0) {
    FMemory::Free(local_e0);
  }
  return;
}

// operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[4],wchar_t_const_(&)[12]> @ 141cd23b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[4],wchar_t_const_(&)[12]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [1],wchar_t (*param_3) [11],
          wchar_t (*param_4) [4],wchar_t (*param_5) [12])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  longlong lVar8;
  FAutomationTestFramework *pFVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStackY_138 [32];
  undefined1 local_f8 [8];
  ForAnyElementType local_f0;
  uint local_e8;
  int local_e4;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  undefined8 ***local_c8;
  FString local_b8;
  undefined8 **local_a8 [2];
  TStringView<wchar_t> local_98;
  wchar_t *local_88;
  wchar_t (*local_78) [1];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  wchar_t (*local_68) [11];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  wchar_t (*local_58) [4];
  int iStack_50;
  undefined4 uStack_4c;
  wchar_t (*local_48) [12];
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar4 = 0;
  local_e0 = (undefined8 *)0x0;
  local_d8 = 0;
  uStack_70 = uVar4;
  local_88 = param_1;
  local_78 = param_2;
  if (param_2 != (wchar_t (*) [1])0x0) {
    sVar7 = wcslen(*param_2);
    uStack_70 = (undefined4)sVar7;
  }
  local_68 = param_3;
  if (param_3 != (wchar_t (*) [11])0x0) {
    sVar7 = wcslen(*param_3);
    uVar4 = (undefined4)sVar7;
  }
  iVar5 = 0;
  local_58 = param_4;
  iStack_50 = iVar5;
  uStack_60 = uVar4;
  if (param_4 != (wchar_t (*) [4])0x0) {
    sVar7 = wcslen(*param_4);
    iStack_50 = (int)sVar7;
  }
  local_48 = param_5;
  iStack_40 = iVar5;
  if (param_5 != (wchar_t (*) [12])0x0) {
    sVar7 = wcslen(*param_5);
    iStack_40 = (int)sVar7;
  }
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_f0,4,&local_e4);
  *(wchar_t (**) [1])local_f0.Data = local_78;
  *(ulonglong *)(local_f0.Data + 8) = CONCAT44(uStack_6c,uStack_70);
  *(wchar_t (**) [11])(local_f0.Data + 0x10) = local_68;
  *(ulonglong *)(local_f0.Data + 0x18) = CONCAT44(uStack_5c,uStack_60);
  *(wchar_t (**) [4])(local_f0.Data + 0x20) = local_58;
  *(ulonglong *)(local_f0.Data + 0x28) = CONCAT44(uStack_4c,iStack_50);
  *(wchar_t (**) [12])(local_f0.Data + 0x30) = local_48;
  *(ulonglong *)(local_f0.Data + 0x38) = CONCAT44(uStack_3c,iStack_40);
  local_a8[0] = &local_e0;
  local_c8 = local_a8;
  local_d0 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[4],wchar_t_const_(&)[12]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_1);
    iVar5 = (int)sVar7;
  }
  local_b8.Data.ArrayNum = iVar5;
  local_98.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
  local_98.Size = iVar5;
  local_98._12_4_ = local_b8.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_98,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_d0);
  lVar8 = (longlong)(int)(uint)local_d8;
  if ((uint)local_d8 == local_e8) {
    FVar11.Data = local_f0.Data;
    puVar12 = local_e0;
    if ((uint)local_d8 != 0) {
      do {
        iVar5 = *(int *)(puVar12 + 1);
        iVar15 = (int)*(undefined8 *)(FVar11.Data + 8);
        if (iVar5 != iVar15) goto LAB_141cd2591;
        if ((iVar5 != 0) && (iVar15 != 0)) {
          iVar6 = iVar15;
          if (iVar5 < iVar15) {
            iVar6 = iVar5;
          }
          iVar6 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar12,*(wchar_t **)FVar11.Data,(longlong)iVar6);
          if (iVar6 != 0) goto LAB_141cd2591;
        }
        if (iVar5 != iVar15) goto LAB_141cd2591;
        lVar8 = lVar8 + -1;
        FVar11.Data = FVar11.Data + 0x10;
        puVar12 = puVar12 + 2;
      } while (lVar8 != 0);
    }
  }
  else {
LAB_141cd2591:
    pFVar9 = FAutomationTestFramework::Get();
    uVar3 = local_e8;
    bVar2 = true;
    pFVar1 = pFVar9->CurrentTest;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    local_a8[0] = *(undefined8 ***)(pFVar1->_padding_ + 0x28);
    uVar10 = (ulonglong)(int)local_e8;
    pFVar13 = local_f0.Data + uVar10 * 0x10;
    FVar11.Data = local_f0.Data;
    while( true ) {
      if ((uint)uVar10 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (FVar11.Data == pFVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_b8,L",",1);
      }
      ::FString::AppendChars
                (&local_b8,*(wchar_t **)FVar11.Data,(int)*(undefined8 *)(FVar11.Data + 8));
      uVar10 = (ulonglong)local_e8;
      FVar11.Data = FVar11.Data + 0x10;
    }
    iVar5 = (uint)local_d8;
    bVar2 = true;
    local_d0 = (undefined1  [8])0x0;
    puVar14 = local_e0 + (longlong)(int)(uint)local_d8 * 2;
    local_c8 = (undefined8 ***)0x0;
    puVar12 = local_e0;
    while( true ) {
      if ((uint)local_d8 != iVar5) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (puVar12 == puVar14) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_d0,L",",1);
      }
      ::FString::AppendChars((FString *)local_d0,(wchar_t *)*puVar12,(int)puVar12[1]);
      puVar12 = puVar12 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_98,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*(code *)local_a8[0])(pFVar1,&local_98,0);
    if ((FScriptContainerElement *)local_98.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.DataPtr);
    }
    if (local_d0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_d0);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  if (local_e0 != (undefined8 *)0x0) {
    FMemory::Free(local_e0);
  }
  return;
}

// operator()<wchar_t_const_(&)[2]> @ 141cd2790

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[2]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [2])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  longlong lVar7;
  FAutomationTestFramework *pFVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 **local_res18;
  code *local_res20;
  ForAnyElementType local_88;
  uint local_80;
  int local_7c;
  undefined8 *local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined8 ***local_60;
  FString local_58;
  TStringView<wchar_t> local_48;
  
  local_78 = (undefined8 *)0x0;
  iVar4 = 0;
  local_70 = 0;
  local_58.Data.ArrayNum = iVar4;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  if (param_2 != (wchar_t (*) [2])0x0) {
    sVar6 = wcslen(*param_2);
    local_58.Data.ArrayNum = (int)sVar6;
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_88,1,&local_7c);
  *(FScriptContainerElement **)local_88.Data = local_58.Data.AllocatorInstance.Data;
  *(undefined8 *)(local_88.Data + 8) = local_58.Data._8_8_;
  local_res18 = &local_78;
  local_60 = &local_res18;
  local_68 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[2]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    iVar4 = (int)sVar6;
  }
  local_58.Data.ArrayNum = iVar4;
  local_48.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
  local_48.Size = iVar4;
  local_48._12_4_ = local_58.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_48,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_68);
  lVar7 = (longlong)(int)(uint)local_70;
  if ((uint)local_70 == local_80) {
    FVar10.Data = local_88.Data;
    puVar11 = local_78;
    if ((uint)local_70 != 0) {
      do {
        iVar4 = *(int *)(puVar11 + 1);
        iVar14 = (int)*(undefined8 *)(FVar10.Data + 8);
        if (iVar4 != iVar14) goto LAB_141cd28f1;
        if ((iVar4 != 0) && (iVar14 != 0)) {
          iVar5 = iVar14;
          if (iVar4 < iVar14) {
            iVar5 = iVar4;
          }
          iVar5 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar11,*(wchar_t **)FVar10.Data,(longlong)iVar5);
          if (iVar5 != 0) goto LAB_141cd28f1;
        }
        if (iVar4 != iVar14) goto LAB_141cd28f1;
        lVar7 = lVar7 + -1;
        FVar10.Data = FVar10.Data + 0x10;
        puVar11 = puVar11 + 2;
      } while (lVar7 != 0);
    }
  }
  else {
LAB_141cd28f1:
    pFVar8 = FAutomationTestFramework::Get();
    uVar3 = local_80;
    bVar2 = true;
    pFVar1 = pFVar8->CurrentTest;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_res20 = *(code **)(pFVar1->_padding_ + 0x28);
    uVar9 = (ulonglong)(int)local_80;
    pFVar12 = local_88.Data + uVar9 * 0x10;
    FVar10.Data = local_88.Data;
    while( true ) {
      if ((uint)uVar9 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (FVar10.Data == pFVar12) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_58,L",",1);
      }
      ::FString::AppendChars
                (&local_58,*(wchar_t **)FVar10.Data,(int)*(undefined8 *)(FVar10.Data + 8));
      uVar9 = (ulonglong)local_80;
      FVar10.Data = FVar10.Data + 0x10;
    }
    iVar4 = (uint)local_70;
    bVar2 = true;
    local_68 = (undefined1  [8])0x0;
    puVar13 = local_78 + (longlong)(int)(uint)local_70 * 2;
    local_60 = (undefined8 ***)0x0;
    puVar11 = local_78;
    while( true ) {
      if ((uint)local_70 != iVar4) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (puVar11 == puVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_68,L",",1);
      }
      ::FString::AppendChars((FString *)local_68,(wchar_t *)*puVar11,(int)puVar11[1]);
      puVar11 = puVar11 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_48,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*local_res20)(pFVar1,&local_48,0);
    if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
    if (local_68 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_68);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_78 != (undefined8 *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// operator()<wchar_t_const_(&)[3]> @ 141cd2ad0

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[3]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [3])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  longlong lVar7;
  FAutomationTestFramework *pFVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 **local_res18;
  code *local_res20;
  ForAnyElementType local_88;
  uint local_80;
  int local_7c;
  undefined8 *local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined8 ***local_60;
  FString local_58;
  TStringView<wchar_t> local_48;
  
  local_78 = (undefined8 *)0x0;
  iVar4 = 0;
  local_70 = 0;
  local_58.Data.ArrayNum = iVar4;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  if (param_2 != (wchar_t (*) [3])0x0) {
    sVar6 = wcslen(*param_2);
    local_58.Data.ArrayNum = (int)sVar6;
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_88,1,&local_7c);
  *(FScriptContainerElement **)local_88.Data = local_58.Data.AllocatorInstance.Data;
  *(undefined8 *)(local_88.Data + 8) = local_58.Data._8_8_;
  local_res18 = &local_78;
  local_60 = &local_res18;
  local_68 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[3]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    iVar4 = (int)sVar6;
  }
  local_58.Data.ArrayNum = iVar4;
  local_48.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
  local_48.Size = iVar4;
  local_48._12_4_ = local_58.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_48,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_68);
  lVar7 = (longlong)(int)(uint)local_70;
  if ((uint)local_70 == local_80) {
    FVar10.Data = local_88.Data;
    puVar11 = local_78;
    if ((uint)local_70 != 0) {
      do {
        iVar4 = *(int *)(puVar11 + 1);
        iVar14 = (int)*(undefined8 *)(FVar10.Data + 8);
        if (iVar4 != iVar14) goto LAB_141cd2c31;
        if ((iVar4 != 0) && (iVar14 != 0)) {
          iVar5 = iVar14;
          if (iVar4 < iVar14) {
            iVar5 = iVar4;
          }
          iVar5 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar11,*(wchar_t **)FVar10.Data,(longlong)iVar5);
          if (iVar5 != 0) goto LAB_141cd2c31;
        }
        if (iVar4 != iVar14) goto LAB_141cd2c31;
        lVar7 = lVar7 + -1;
        FVar10.Data = FVar10.Data + 0x10;
        puVar11 = puVar11 + 2;
      } while (lVar7 != 0);
    }
  }
  else {
LAB_141cd2c31:
    pFVar8 = FAutomationTestFramework::Get();
    uVar3 = local_80;
    bVar2 = true;
    pFVar1 = pFVar8->CurrentTest;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_res20 = *(code **)(pFVar1->_padding_ + 0x28);
    uVar9 = (ulonglong)(int)local_80;
    pFVar12 = local_88.Data + uVar9 * 0x10;
    FVar10.Data = local_88.Data;
    while( true ) {
      if ((uint)uVar9 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (FVar10.Data == pFVar12) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_58,L",",1);
      }
      ::FString::AppendChars
                (&local_58,*(wchar_t **)FVar10.Data,(int)*(undefined8 *)(FVar10.Data + 8));
      uVar9 = (ulonglong)local_80;
      FVar10.Data = FVar10.Data + 0x10;
    }
    iVar4 = (uint)local_70;
    bVar2 = true;
    local_68 = (undefined1  [8])0x0;
    puVar13 = local_78 + (longlong)(int)(uint)local_70 * 2;
    local_60 = (undefined8 ***)0x0;
    puVar11 = local_78;
    while( true ) {
      if ((uint)local_70 != iVar4) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (puVar11 == puVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_68,L",",1);
      }
      ::FString::AppendChars((FString *)local_68,(wchar_t *)*puVar11,(int)puVar11[1]);
      puVar11 = puVar11 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_48,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*local_res20)(pFVar1,&local_48,0);
    if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
    if (local_68 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_68);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_78 != (undefined8 *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7]> @ 141cd2e10

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [3],wchar_t (*param_3) [7])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  longlong lVar7;
  FAutomationTestFramework *pFVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 **local_res18;
  code *local_res20;
  ForAnyElementType local_98;
  uint local_90;
  int local_8c;
  undefined8 *local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  undefined8 ***local_70;
  FString local_68;
  TStringView<wchar_t> local_58;
  wchar_t (*local_48) [7];
  int iStack_40;
  undefined4 uStack_3c;
  
  local_88 = (undefined8 *)0x0;
  iVar4 = 0;
  local_80 = 0;
  local_58.Size = iVar4;
  local_58.DataPtr = *param_2;
  if (param_2 != (wchar_t (*) [3])0x0) {
    sVar6 = wcslen(*param_2);
    local_58.Size = (int)sVar6;
  }
  local_48 = param_3;
  if (param_3 != (wchar_t (*) [7])0x0) {
    sVar6 = wcslen(*param_3);
    iVar4 = (int)sVar6;
  }
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 2;
  iStack_40 = iVar4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_98,2,&local_8c);
  *(wchar_t **)local_98.Data = local_58.DataPtr;
  *(undefined8 *)(local_98.Data + 8) = local_58._8_8_;
  *(wchar_t (**) [7])(local_98.Data + 0x10) = local_48;
  *(ulonglong *)(local_98.Data + 0x18) = CONCAT44(uStack_3c,iStack_40);
  local_res18 = &local_88;
  local_70 = &local_res18;
  local_78 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_68.Data.ArrayNum = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    local_68.Data.ArrayNum = (int)sVar6;
  }
  local_58.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
  local_58.Size = local_68.Data.ArrayNum;
  local_58._12_4_ = local_68.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_58,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_78);
  lVar7 = (longlong)(int)(uint)local_80;
  if ((uint)local_80 == local_90) {
    FVar10.Data = local_98.Data;
    puVar11 = local_88;
    if ((uint)local_80 != 0) {
      do {
        iVar4 = *(int *)(puVar11 + 1);
        iVar14 = (int)*(undefined8 *)(FVar10.Data + 8);
        if (iVar4 != iVar14) goto LAB_141cd2f91;
        if ((iVar4 != 0) && (iVar14 != 0)) {
          iVar5 = iVar14;
          if (iVar4 < iVar14) {
            iVar5 = iVar4;
          }
          iVar5 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar11,*(wchar_t **)FVar10.Data,(longlong)iVar5);
          if (iVar5 != 0) goto LAB_141cd2f91;
        }
        if (iVar4 != iVar14) goto LAB_141cd2f91;
        lVar7 = lVar7 + -1;
        FVar10.Data = FVar10.Data + 0x10;
        puVar11 = puVar11 + 2;
      } while (lVar7 != 0);
    }
  }
  else {
LAB_141cd2f91:
    pFVar8 = FAutomationTestFramework::Get();
    uVar3 = local_90;
    bVar2 = true;
    pFVar1 = pFVar8->CurrentTest;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_res20 = *(code **)(pFVar1->_padding_ + 0x28);
    uVar9 = (ulonglong)(int)local_90;
    pFVar12 = local_98.Data + uVar9 * 0x10;
    FVar10.Data = local_98.Data;
    while( true ) {
      if ((uint)uVar9 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (FVar10.Data == pFVar12) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_68,L",",1);
      }
      ::FString::AppendChars
                (&local_68,*(wchar_t **)FVar10.Data,(int)*(undefined8 *)(FVar10.Data + 8));
      uVar9 = (ulonglong)local_90;
      FVar10.Data = FVar10.Data + 0x10;
    }
    iVar4 = (uint)local_80;
    bVar2 = true;
    local_78 = (undefined1  [8])0x0;
    puVar13 = local_88 + (longlong)(int)(uint)local_80 * 2;
    local_70 = (undefined8 ***)0x0;
    puVar11 = local_88;
    while( true ) {
      if ((uint)local_80 != iVar4) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (puVar11 == puVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_78,L",",1);
      }
      ::FString::AppendChars((FString *)local_78,(wchar_t *)*puVar11,(int)puVar11[1]);
      puVar11 = puVar11 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_58,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*local_res20)(pFVar1,&local_58,0);
    if ((FScriptContainerElement *)local_58.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
    if (local_78 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_78);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  if (local_88 != (undefined8 *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[1]> @ 141cd3170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[1]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [3],wchar_t (*param_3) [7],
          wchar_t (*param_4) [1])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  longlong lVar8;
  FAutomationTestFramework *pFVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStackY_118 [32];
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  uint local_c8;
  int local_c4;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  undefined8 ***local_a8;
  FString local_98;
  undefined8 **local_88 [2];
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  wchar_t (*local_60) [3];
  undefined4 uStack_58;
  undefined4 uStack_54;
  wchar_t (*local_50) [7];
  undefined4 uStack_48;
  undefined4 uStack_44;
  wchar_t (*local_40) [1];
  int iStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_118;
  uVar4 = 0;
  local_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  uStack_58 = uVar4;
  local_68 = param_1;
  local_60 = param_2;
  if (param_2 != (wchar_t (*) [3])0x0) {
    sVar7 = wcslen(*param_2);
    uStack_58 = (undefined4)sVar7;
  }
  local_50 = param_3;
  if (param_3 != (wchar_t (*) [7])0x0) {
    sVar7 = wcslen(*param_3);
    uVar4 = (undefined4)sVar7;
  }
  iVar5 = 0;
  local_40 = param_4;
  iStack_38 = iVar5;
  uStack_48 = uVar4;
  if (param_4 != (wchar_t (*) [1])0x0) {
    sVar7 = wcslen(*param_4);
    iStack_38 = (int)sVar7;
  }
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d0,3,&local_c4);
  *(wchar_t (**) [3])local_d0.Data = local_60;
  *(ulonglong *)(local_d0.Data + 8) = CONCAT44(uStack_54,uStack_58);
  *(wchar_t (**) [7])(local_d0.Data + 0x10) = local_50;
  *(ulonglong *)(local_d0.Data + 0x18) = CONCAT44(uStack_44,uStack_48);
  *(wchar_t (**) [1])(local_d0.Data + 0x20) = local_40;
  *(ulonglong *)(local_d0.Data + 0x28) = CONCAT44(uStack_34,iStack_38);
  local_88[0] = &local_c0;
  local_a8 = local_88;
  local_b0 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[1]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_1);
    iVar5 = (int)sVar7;
  }
  local_98.Data.ArrayNum = iVar5;
  local_78.DataPtr = (wchar_t *)local_98.Data.AllocatorInstance.Data;
  local_78.Size = iVar5;
  local_78._12_4_ = local_98.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_78,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_b0);
  lVar8 = (longlong)(int)(uint)local_b8;
  if ((uint)local_b8 == local_c8) {
    FVar11.Data = local_d0.Data;
    puVar12 = local_c0;
    if ((uint)local_b8 != 0) {
      do {
        iVar5 = *(int *)(puVar12 + 1);
        iVar15 = (int)*(undefined8 *)(FVar11.Data + 8);
        if (iVar5 != iVar15) goto LAB_141cd3331;
        if ((iVar5 != 0) && (iVar15 != 0)) {
          iVar6 = iVar15;
          if (iVar5 < iVar15) {
            iVar6 = iVar5;
          }
          iVar6 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar12,*(wchar_t **)FVar11.Data,(longlong)iVar6);
          if (iVar6 != 0) goto LAB_141cd3331;
        }
        if (iVar5 != iVar15) goto LAB_141cd3331;
        lVar8 = lVar8 + -1;
        FVar11.Data = FVar11.Data + 0x10;
        puVar12 = puVar12 + 2;
      } while (lVar8 != 0);
    }
  }
  else {
LAB_141cd3331:
    pFVar9 = FAutomationTestFramework::Get();
    uVar3 = local_c8;
    bVar2 = true;
    pFVar1 = pFVar9->CurrentTest;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_88[0] = *(undefined8 ***)(pFVar1->_padding_ + 0x28);
    uVar10 = (ulonglong)(int)local_c8;
    pFVar13 = local_d0.Data + uVar10 * 0x10;
    FVar11.Data = local_d0.Data;
    while( true ) {
      if ((uint)uVar10 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      if (FVar11.Data == pFVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_98,L",",1);
      }
      ::FString::AppendChars
                (&local_98,*(wchar_t **)FVar11.Data,(int)*(undefined8 *)(FVar11.Data + 8));
      uVar10 = (ulonglong)local_c8;
      FVar11.Data = FVar11.Data + 0x10;
    }
    iVar5 = (uint)local_b8;
    bVar2 = true;
    local_b0 = (undefined1  [8])0x0;
    puVar14 = local_c0 + (longlong)(int)(uint)local_b8 * 2;
    local_a8 = (undefined8 ***)0x0;
    puVar12 = local_c0;
    while( true ) {
      if ((uint)local_b8 != iVar5) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      if (puVar12 == puVar14) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_b0,L",",1);
      }
      ::FString::AppendChars((FString *)local_b0,(wchar_t *)*puVar12,(int)puVar12[1]);
      puVar12 = puVar12 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_78,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*(code *)local_88[0])(pFVar1,&local_78,0);
    if ((FScriptContainerElement *)local_78.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.DataPtr);
    }
    if (local_b0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_b0);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  if (local_c0 != (undefined8 *)0x0) {
    FMemory::Free(local_c0);
  }
  return;
}

// operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[5]> @ 141cd3530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[5]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [3],wchar_t (*param_3) [7],
          wchar_t (*param_4) [5])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  longlong lVar8;
  FAutomationTestFramework *pFVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStackY_118 [32];
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  uint local_c8;
  int local_c4;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  undefined8 ***local_a8;
  FString local_98;
  undefined8 **local_88 [2];
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  wchar_t (*local_60) [3];
  undefined4 uStack_58;
  undefined4 uStack_54;
  wchar_t (*local_50) [7];
  undefined4 uStack_48;
  undefined4 uStack_44;
  wchar_t (*local_40) [5];
  int iStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_118;
  uVar4 = 0;
  local_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  uStack_58 = uVar4;
  local_68 = param_1;
  local_60 = param_2;
  if (param_2 != (wchar_t (*) [3])0x0) {
    sVar7 = wcslen(*param_2);
    uStack_58 = (undefined4)sVar7;
  }
  local_50 = param_3;
  if (param_3 != (wchar_t (*) [7])0x0) {
    sVar7 = wcslen(*param_3);
    uVar4 = (undefined4)sVar7;
  }
  iVar5 = 0;
  local_40 = param_4;
  iStack_38 = iVar5;
  uStack_48 = uVar4;
  if (param_4 != (wchar_t (*) [5])0x0) {
    sVar7 = wcslen(*param_4);
    iStack_38 = (int)sVar7;
  }
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d0,3,&local_c4);
  *(wchar_t (**) [3])local_d0.Data = local_60;
  *(ulonglong *)(local_d0.Data + 8) = CONCAT44(uStack_54,uStack_58);
  *(wchar_t (**) [7])(local_d0.Data + 0x10) = local_50;
  *(ulonglong *)(local_d0.Data + 0x18) = CONCAT44(uStack_44,uStack_48);
  *(wchar_t (**) [5])(local_d0.Data + 0x20) = local_40;
  *(ulonglong *)(local_d0.Data + 0x28) = CONCAT44(uStack_34,iStack_38);
  local_88[0] = &local_c0;
  local_a8 = local_88;
  local_b0 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[5]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_1);
    iVar5 = (int)sVar7;
  }
  local_98.Data.ArrayNum = iVar5;
  local_78.DataPtr = (wchar_t *)local_98.Data.AllocatorInstance.Data;
  local_78.Size = iVar5;
  local_78._12_4_ = local_98.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_78,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_b0);
  lVar8 = (longlong)(int)(uint)local_b8;
  if ((uint)local_b8 == local_c8) {
    FVar11.Data = local_d0.Data;
    puVar12 = local_c0;
    if ((uint)local_b8 != 0) {
      do {
        iVar5 = *(int *)(puVar12 + 1);
        iVar15 = (int)*(undefined8 *)(FVar11.Data + 8);
        if (iVar5 != iVar15) goto LAB_141cd36f1;
        if ((iVar5 != 0) && (iVar15 != 0)) {
          iVar6 = iVar15;
          if (iVar5 < iVar15) {
            iVar6 = iVar5;
          }
          iVar6 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar12,*(wchar_t **)FVar11.Data,(longlong)iVar6);
          if (iVar6 != 0) goto LAB_141cd36f1;
        }
        if (iVar5 != iVar15) goto LAB_141cd36f1;
        lVar8 = lVar8 + -1;
        FVar11.Data = FVar11.Data + 0x10;
        puVar12 = puVar12 + 2;
      } while (lVar8 != 0);
    }
  }
  else {
LAB_141cd36f1:
    pFVar9 = FAutomationTestFramework::Get();
    uVar3 = local_c8;
    bVar2 = true;
    pFVar1 = pFVar9->CurrentTest;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_88[0] = *(undefined8 ***)(pFVar1->_padding_ + 0x28);
    uVar10 = (ulonglong)(int)local_c8;
    pFVar13 = local_d0.Data + uVar10 * 0x10;
    FVar11.Data = local_d0.Data;
    while( true ) {
      if ((uint)uVar10 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      if (FVar11.Data == pFVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_98,L",",1);
      }
      ::FString::AppendChars
                (&local_98,*(wchar_t **)FVar11.Data,(int)*(undefined8 *)(FVar11.Data + 8));
      uVar10 = (ulonglong)local_c8;
      FVar11.Data = FVar11.Data + 0x10;
    }
    iVar5 = (uint)local_b8;
    bVar2 = true;
    local_b0 = (undefined1  [8])0x0;
    puVar14 = local_c0 + (longlong)(int)(uint)local_b8 * 2;
    local_a8 = (undefined8 ***)0x0;
    puVar12 = local_c0;
    while( true ) {
      if ((uint)local_b8 != iVar5) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      if (puVar12 == puVar14) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_b0,L",",1);
      }
      ::FString::AppendChars((FString *)local_b0,(wchar_t *)*puVar12,(int)puVar12[1]);
      puVar12 = puVar12 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_78,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*(code *)local_88[0])(pFVar1,&local_78,0);
    if ((FScriptContainerElement *)local_78.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.DataPtr);
    }
    if (local_b0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_b0);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  if (local_c0 != (undefined8 *)0x0) {
    FMemory::Free(local_c0);
  }
  return;
}

// operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[9]> @ 141cd38f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[9]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [3],wchar_t (*param_3) [7],
          wchar_t (*param_4) [9])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  longlong lVar8;
  FAutomationTestFramework *pFVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStackY_118 [32];
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  uint local_c8;
  int local_c4;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  undefined8 ***local_a8;
  FString local_98;
  undefined8 **local_88 [2];
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  wchar_t (*local_60) [3];
  undefined4 uStack_58;
  undefined4 uStack_54;
  wchar_t (*local_50) [7];
  undefined4 uStack_48;
  undefined4 uStack_44;
  wchar_t (*local_40) [9];
  int iStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_118;
  uVar4 = 0;
  local_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  uStack_58 = uVar4;
  local_68 = param_1;
  local_60 = param_2;
  if (param_2 != (wchar_t (*) [3])0x0) {
    sVar7 = wcslen(*param_2);
    uStack_58 = (undefined4)sVar7;
  }
  local_50 = param_3;
  if (param_3 != (wchar_t (*) [7])0x0) {
    sVar7 = wcslen(*param_3);
    uVar4 = (undefined4)sVar7;
  }
  iVar5 = 0;
  local_40 = param_4;
  iStack_38 = iVar5;
  uStack_48 = uVar4;
  if (param_4 != (wchar_t (*) [9])0x0) {
    sVar7 = wcslen(*param_4);
    iStack_38 = (int)sVar7;
  }
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d0,3,&local_c4);
  *(wchar_t (**) [3])local_d0.Data = local_60;
  *(ulonglong *)(local_d0.Data + 8) = CONCAT44(uStack_54,uStack_58);
  *(wchar_t (**) [7])(local_d0.Data + 0x10) = local_50;
  *(ulonglong *)(local_d0.Data + 0x18) = CONCAT44(uStack_44,uStack_48);
  *(wchar_t (**) [9])(local_d0.Data + 0x20) = local_40;
  *(ulonglong *)(local_d0.Data + 0x28) = CONCAT44(uStack_34,iStack_38);
  local_88[0] = &local_c0;
  local_a8 = local_88;
  local_b0 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[9]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_1);
    iVar5 = (int)sVar7;
  }
  local_98.Data.ArrayNum = iVar5;
  local_78.DataPtr = (wchar_t *)local_98.Data.AllocatorInstance.Data;
  local_78.Size = iVar5;
  local_78._12_4_ = local_98.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_78,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_b0);
  lVar8 = (longlong)(int)(uint)local_b8;
  if ((uint)local_b8 == local_c8) {
    FVar11.Data = local_d0.Data;
    puVar12 = local_c0;
    if ((uint)local_b8 != 0) {
      do {
        iVar5 = *(int *)(puVar12 + 1);
        iVar15 = (int)*(undefined8 *)(FVar11.Data + 8);
        if (iVar5 != iVar15) goto LAB_141cd3ab1;
        if ((iVar5 != 0) && (iVar15 != 0)) {
          iVar6 = iVar15;
          if (iVar5 < iVar15) {
            iVar6 = iVar5;
          }
          iVar6 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar12,*(wchar_t **)FVar11.Data,(longlong)iVar6);
          if (iVar6 != 0) goto LAB_141cd3ab1;
        }
        if (iVar5 != iVar15) goto LAB_141cd3ab1;
        lVar8 = lVar8 + -1;
        FVar11.Data = FVar11.Data + 0x10;
        puVar12 = puVar12 + 2;
      } while (lVar8 != 0);
    }
  }
  else {
LAB_141cd3ab1:
    pFVar9 = FAutomationTestFramework::Get();
    uVar3 = local_c8;
    bVar2 = true;
    pFVar1 = pFVar9->CurrentTest;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_88[0] = *(undefined8 ***)(pFVar1->_padding_ + 0x28);
    uVar10 = (ulonglong)(int)local_c8;
    pFVar13 = local_d0.Data + uVar10 * 0x10;
    FVar11.Data = local_d0.Data;
    while( true ) {
      if ((uint)uVar10 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      if (FVar11.Data == pFVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_98,L",",1);
      }
      ::FString::AppendChars
                (&local_98,*(wchar_t **)FVar11.Data,(int)*(undefined8 *)(FVar11.Data + 8));
      uVar10 = (ulonglong)local_c8;
      FVar11.Data = FVar11.Data + 0x10;
    }
    iVar5 = (uint)local_b8;
    bVar2 = true;
    local_b0 = (undefined1  [8])0x0;
    puVar14 = local_c0 + (longlong)(int)(uint)local_b8 * 2;
    local_a8 = (undefined8 ***)0x0;
    puVar12 = local_c0;
    while( true ) {
      if ((uint)local_b8 != iVar5) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      if (puVar12 == puVar14) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_b0,L",",1);
      }
      ::FString::AppendChars((FString *)local_b0,(wchar_t *)*puVar12,(int)puVar12[1]);
      puVar12 = puVar12 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_78,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*(code *)local_88[0])(pFVar1,&local_78,0);
    if ((FScriptContainerElement *)local_78.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.DataPtr);
    }
    if (local_b0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_b0);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  if (local_c0 != (undefined8 *)0x0) {
    FMemory::Free(local_c0);
  }
  return;
}

// operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[1]> @ 141cd3cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[1]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [3],wchar_t (*param_3) [7],
          wchar_t (*param_4) [11],wchar_t (*param_5) [1])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  longlong lVar8;
  FAutomationTestFramework *pFVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStackY_138 [32];
  undefined1 local_f8 [8];
  ForAnyElementType local_f0;
  uint local_e8;
  int local_e4;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  undefined8 ***local_c8;
  FString local_b8;
  undefined8 **local_a8 [2];
  TStringView<wchar_t> local_98;
  wchar_t *local_88;
  wchar_t (*local_78) [3];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  wchar_t (*local_68) [7];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  wchar_t (*local_58) [11];
  int iStack_50;
  undefined4 uStack_4c;
  wchar_t (*local_48) [1];
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar4 = 0;
  local_e0 = (undefined8 *)0x0;
  local_d8 = 0;
  uStack_70 = uVar4;
  local_88 = param_1;
  local_78 = param_2;
  if (param_2 != (wchar_t (*) [3])0x0) {
    sVar7 = wcslen(*param_2);
    uStack_70 = (undefined4)sVar7;
  }
  local_68 = param_3;
  if (param_3 != (wchar_t (*) [7])0x0) {
    sVar7 = wcslen(*param_3);
    uVar4 = (undefined4)sVar7;
  }
  iVar5 = 0;
  local_58 = param_4;
  iStack_50 = iVar5;
  uStack_60 = uVar4;
  if (param_4 != (wchar_t (*) [11])0x0) {
    sVar7 = wcslen(*param_4);
    iStack_50 = (int)sVar7;
  }
  local_48 = param_5;
  iStack_40 = iVar5;
  if (param_5 != (wchar_t (*) [1])0x0) {
    sVar7 = wcslen(*param_5);
    iStack_40 = (int)sVar7;
  }
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_f0,4,&local_e4);
  *(wchar_t (**) [3])local_f0.Data = local_78;
  *(ulonglong *)(local_f0.Data + 8) = CONCAT44(uStack_6c,uStack_70);
  *(wchar_t (**) [7])(local_f0.Data + 0x10) = local_68;
  *(ulonglong *)(local_f0.Data + 0x18) = CONCAT44(uStack_5c,uStack_60);
  *(wchar_t (**) [11])(local_f0.Data + 0x20) = local_58;
  *(ulonglong *)(local_f0.Data + 0x28) = CONCAT44(uStack_4c,iStack_50);
  *(wchar_t (**) [1])(local_f0.Data + 0x30) = local_48;
  *(ulonglong *)(local_f0.Data + 0x38) = CONCAT44(uStack_3c,iStack_40);
  local_a8[0] = &local_e0;
  local_c8 = local_a8;
  local_d0 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[1]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_1);
    iVar5 = (int)sVar7;
  }
  local_b8.Data.ArrayNum = iVar5;
  local_98.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
  local_98.Size = iVar5;
  local_98._12_4_ = local_b8.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_98,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_d0);
  lVar8 = (longlong)(int)(uint)local_d8;
  if ((uint)local_d8 == local_e8) {
    FVar11.Data = local_f0.Data;
    puVar12 = local_e0;
    if ((uint)local_d8 != 0) {
      do {
        iVar5 = *(int *)(puVar12 + 1);
        iVar15 = (int)*(undefined8 *)(FVar11.Data + 8);
        if (iVar5 != iVar15) goto LAB_141cd3e91;
        if ((iVar5 != 0) && (iVar15 != 0)) {
          iVar6 = iVar15;
          if (iVar5 < iVar15) {
            iVar6 = iVar5;
          }
          iVar6 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar12,*(wchar_t **)FVar11.Data,(longlong)iVar6);
          if (iVar6 != 0) goto LAB_141cd3e91;
        }
        if (iVar5 != iVar15) goto LAB_141cd3e91;
        lVar8 = lVar8 + -1;
        FVar11.Data = FVar11.Data + 0x10;
        puVar12 = puVar12 + 2;
      } while (lVar8 != 0);
    }
  }
  else {
LAB_141cd3e91:
    pFVar9 = FAutomationTestFramework::Get();
    uVar3 = local_e8;
    bVar2 = true;
    pFVar1 = pFVar9->CurrentTest;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    local_a8[0] = *(undefined8 ***)(pFVar1->_padding_ + 0x28);
    uVar10 = (ulonglong)(int)local_e8;
    pFVar13 = local_f0.Data + uVar10 * 0x10;
    FVar11.Data = local_f0.Data;
    while( true ) {
      if ((uint)uVar10 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (FVar11.Data == pFVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_b8,L",",1);
      }
      ::FString::AppendChars
                (&local_b8,*(wchar_t **)FVar11.Data,(int)*(undefined8 *)(FVar11.Data + 8));
      uVar10 = (ulonglong)local_e8;
      FVar11.Data = FVar11.Data + 0x10;
    }
    iVar5 = (uint)local_d8;
    bVar2 = true;
    local_d0 = (undefined1  [8])0x0;
    puVar14 = local_e0 + (longlong)(int)(uint)local_d8 * 2;
    local_c8 = (undefined8 ***)0x0;
    puVar12 = local_e0;
    while( true ) {
      if ((uint)local_d8 != iVar5) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (puVar12 == puVar14) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_d0,L",",1);
      }
      ::FString::AppendChars((FString *)local_d0,(wchar_t *)*puVar12,(int)puVar12[1]);
      puVar12 = puVar12 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_98,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*(code *)local_a8[0])(pFVar1,&local_98,0);
    if ((FScriptContainerElement *)local_98.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.DataPtr);
    }
    if (local_d0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_d0);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  if (local_e0 != (undefined8 *)0x0) {
    FMemory::Free(local_e0);
  }
  return;
}

// operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[5]> @ 141cd4090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[5]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [3],wchar_t (*param_3) [7],
          wchar_t (*param_4) [11],wchar_t (*param_5) [5])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  longlong lVar8;
  FAutomationTestFramework *pFVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStackY_138 [32];
  undefined1 local_f8 [8];
  ForAnyElementType local_f0;
  uint local_e8;
  int local_e4;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  undefined8 ***local_c8;
  FString local_b8;
  undefined8 **local_a8 [2];
  TStringView<wchar_t> local_98;
  wchar_t *local_88;
  wchar_t (*local_78) [3];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  wchar_t (*local_68) [7];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  wchar_t (*local_58) [11];
  int iStack_50;
  undefined4 uStack_4c;
  wchar_t (*local_48) [5];
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar4 = 0;
  local_e0 = (undefined8 *)0x0;
  local_d8 = 0;
  uStack_70 = uVar4;
  local_88 = param_1;
  local_78 = param_2;
  if (param_2 != (wchar_t (*) [3])0x0) {
    sVar7 = wcslen(*param_2);
    uStack_70 = (undefined4)sVar7;
  }
  local_68 = param_3;
  if (param_3 != (wchar_t (*) [7])0x0) {
    sVar7 = wcslen(*param_3);
    uVar4 = (undefined4)sVar7;
  }
  iVar5 = 0;
  local_58 = param_4;
  iStack_50 = iVar5;
  uStack_60 = uVar4;
  if (param_4 != (wchar_t (*) [11])0x0) {
    sVar7 = wcslen(*param_4);
    iStack_50 = (int)sVar7;
  }
  local_48 = param_5;
  iStack_40 = iVar5;
  if (param_5 != (wchar_t (*) [5])0x0) {
    sVar7 = wcslen(*param_5);
    iStack_40 = (int)sVar7;
  }
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_f0,4,&local_e4);
  *(wchar_t (**) [3])local_f0.Data = local_78;
  *(ulonglong *)(local_f0.Data + 8) = CONCAT44(uStack_6c,uStack_70);
  *(wchar_t (**) [7])(local_f0.Data + 0x10) = local_68;
  *(ulonglong *)(local_f0.Data + 0x18) = CONCAT44(uStack_5c,uStack_60);
  *(wchar_t (**) [11])(local_f0.Data + 0x20) = local_58;
  *(ulonglong *)(local_f0.Data + 0x28) = CONCAT44(uStack_4c,iStack_50);
  *(wchar_t (**) [5])(local_f0.Data + 0x30) = local_48;
  *(ulonglong *)(local_f0.Data + 0x38) = CONCAT44(uStack_3c,iStack_40);
  local_a8[0] = &local_e0;
  local_c8 = local_a8;
  local_d0 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[5]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_1);
    iVar5 = (int)sVar7;
  }
  local_b8.Data.ArrayNum = iVar5;
  local_98.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
  local_98.Size = iVar5;
  local_98._12_4_ = local_b8.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_98,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_d0);
  lVar8 = (longlong)(int)(uint)local_d8;
  if ((uint)local_d8 == local_e8) {
    FVar11.Data = local_f0.Data;
    puVar12 = local_e0;
    if ((uint)local_d8 != 0) {
      do {
        iVar5 = *(int *)(puVar12 + 1);
        iVar15 = (int)*(undefined8 *)(FVar11.Data + 8);
        if (iVar5 != iVar15) goto LAB_141cd4271;
        if ((iVar5 != 0) && (iVar15 != 0)) {
          iVar6 = iVar15;
          if (iVar5 < iVar15) {
            iVar6 = iVar5;
          }
          iVar6 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar12,*(wchar_t **)FVar11.Data,(longlong)iVar6);
          if (iVar6 != 0) goto LAB_141cd4271;
        }
        if (iVar5 != iVar15) goto LAB_141cd4271;
        lVar8 = lVar8 + -1;
        FVar11.Data = FVar11.Data + 0x10;
        puVar12 = puVar12 + 2;
      } while (lVar8 != 0);
    }
  }
  else {
LAB_141cd4271:
    pFVar9 = FAutomationTestFramework::Get();
    uVar3 = local_e8;
    bVar2 = true;
    pFVar1 = pFVar9->CurrentTest;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    local_a8[0] = *(undefined8 ***)(pFVar1->_padding_ + 0x28);
    uVar10 = (ulonglong)(int)local_e8;
    pFVar13 = local_f0.Data + uVar10 * 0x10;
    FVar11.Data = local_f0.Data;
    while( true ) {
      if ((uint)uVar10 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (FVar11.Data == pFVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_b8,L",",1);
      }
      ::FString::AppendChars
                (&local_b8,*(wchar_t **)FVar11.Data,(int)*(undefined8 *)(FVar11.Data + 8));
      uVar10 = (ulonglong)local_e8;
      FVar11.Data = FVar11.Data + 0x10;
    }
    iVar5 = (uint)local_d8;
    bVar2 = true;
    local_d0 = (undefined1  [8])0x0;
    puVar14 = local_e0 + (longlong)(int)(uint)local_d8 * 2;
    local_c8 = (undefined8 ***)0x0;
    puVar12 = local_e0;
    while( true ) {
      if ((uint)local_d8 != iVar5) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (puVar12 == puVar14) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_d0,L",",1);
      }
      ::FString::AppendChars((FString *)local_d0,(wchar_t *)*puVar12,(int)puVar12[1]);
      puVar12 = puVar12 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_98,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*(code *)local_a8[0])(pFVar1,&local_98,0);
    if ((FScriptContainerElement *)local_98.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.DataPtr);
    }
    if (local_d0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_d0);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  if (local_e0 != (undefined8 *)0x0) {
    FMemory::Free(local_e0);
  }
  return;
}

// operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[9]> @ 141cd4470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[9]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [3],wchar_t (*param_3) [7],
          wchar_t (*param_4) [11],wchar_t (*param_5) [9])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  longlong lVar8;
  FAutomationTestFramework *pFVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStackY_138 [32];
  undefined1 local_f8 [8];
  ForAnyElementType local_f0;
  uint local_e8;
  int local_e4;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  undefined8 ***local_c8;
  FString local_b8;
  undefined8 **local_a8 [2];
  TStringView<wchar_t> local_98;
  wchar_t *local_88;
  wchar_t (*local_78) [3];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  wchar_t (*local_68) [7];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  wchar_t (*local_58) [11];
  int iStack_50;
  undefined4 uStack_4c;
  wchar_t (*local_48) [9];
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar4 = 0;
  local_e0 = (undefined8 *)0x0;
  local_d8 = 0;
  uStack_70 = uVar4;
  local_88 = param_1;
  local_78 = param_2;
  if (param_2 != (wchar_t (*) [3])0x0) {
    sVar7 = wcslen(*param_2);
    uStack_70 = (undefined4)sVar7;
  }
  local_68 = param_3;
  if (param_3 != (wchar_t (*) [7])0x0) {
    sVar7 = wcslen(*param_3);
    uVar4 = (undefined4)sVar7;
  }
  iVar5 = 0;
  local_58 = param_4;
  iStack_50 = iVar5;
  uStack_60 = uVar4;
  if (param_4 != (wchar_t (*) [11])0x0) {
    sVar7 = wcslen(*param_4);
    iStack_50 = (int)sVar7;
  }
  local_48 = param_5;
  iStack_40 = iVar5;
  if (param_5 != (wchar_t (*) [9])0x0) {
    sVar7 = wcslen(*param_5);
    iStack_40 = (int)sVar7;
  }
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_f0,4,&local_e4);
  *(wchar_t (**) [3])local_f0.Data = local_78;
  *(ulonglong *)(local_f0.Data + 8) = CONCAT44(uStack_6c,uStack_70);
  *(wchar_t (**) [7])(local_f0.Data + 0x10) = local_68;
  *(ulonglong *)(local_f0.Data + 0x18) = CONCAT44(uStack_5c,uStack_60);
  *(wchar_t (**) [11])(local_f0.Data + 0x20) = local_58;
  *(ulonglong *)(local_f0.Data + 0x28) = CONCAT44(uStack_4c,iStack_50);
  *(wchar_t (**) [9])(local_f0.Data + 0x30) = local_48;
  *(ulonglong *)(local_f0.Data + 0x38) = CONCAT44(uStack_3c,iStack_40);
  local_a8[0] = &local_e0;
  local_c8 = local_a8;
  local_d0 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[9]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_1);
    iVar5 = (int)sVar7;
  }
  local_b8.Data.ArrayNum = iVar5;
  local_98.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
  local_98.Size = iVar5;
  local_98._12_4_ = local_b8.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_98,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_d0);
  lVar8 = (longlong)(int)(uint)local_d8;
  if ((uint)local_d8 == local_e8) {
    FVar11.Data = local_f0.Data;
    puVar12 = local_e0;
    if ((uint)local_d8 != 0) {
      do {
        iVar5 = *(int *)(puVar12 + 1);
        iVar15 = (int)*(undefined8 *)(FVar11.Data + 8);
        if (iVar5 != iVar15) goto LAB_141cd4651;
        if ((iVar5 != 0) && (iVar15 != 0)) {
          iVar6 = iVar15;
          if (iVar5 < iVar15) {
            iVar6 = iVar5;
          }
          iVar6 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar12,*(wchar_t **)FVar11.Data,(longlong)iVar6);
          if (iVar6 != 0) goto LAB_141cd4651;
        }
        if (iVar5 != iVar15) goto LAB_141cd4651;
        lVar8 = lVar8 + -1;
        FVar11.Data = FVar11.Data + 0x10;
        puVar12 = puVar12 + 2;
      } while (lVar8 != 0);
    }
  }
  else {
LAB_141cd4651:
    pFVar9 = FAutomationTestFramework::Get();
    uVar3 = local_e8;
    bVar2 = true;
    pFVar1 = pFVar9->CurrentTest;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    local_a8[0] = *(undefined8 ***)(pFVar1->_padding_ + 0x28);
    uVar10 = (ulonglong)(int)local_e8;
    pFVar13 = local_f0.Data + uVar10 * 0x10;
    FVar11.Data = local_f0.Data;
    while( true ) {
      if ((uint)uVar10 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (FVar11.Data == pFVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_b8,L",",1);
      }
      ::FString::AppendChars
                (&local_b8,*(wchar_t **)FVar11.Data,(int)*(undefined8 *)(FVar11.Data + 8));
      uVar10 = (ulonglong)local_e8;
      FVar11.Data = FVar11.Data + 0x10;
    }
    iVar5 = (uint)local_d8;
    bVar2 = true;
    local_d0 = (undefined1  [8])0x0;
    puVar14 = local_e0 + (longlong)(int)(uint)local_d8 * 2;
    local_c8 = (undefined8 ***)0x0;
    puVar12 = local_e0;
    while( true ) {
      if ((uint)local_d8 != iVar5) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (puVar12 == puVar14) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_d0,L",",1);
      }
      ::FString::AppendChars((FString *)local_d0,(wchar_t *)*puVar12,(int)puVar12[1]);
      puVar12 = puVar12 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_98,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*(code *)local_a8[0])(pFVar1,&local_98,0);
    if ((FScriptContainerElement *)local_98.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.DataPtr);
    }
    if (local_d0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_d0);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  if (local_e0 != (undefined8 *)0x0) {
    FMemory::Free(local_e0);
  }
  return;
}

// operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[12]> @ 141cd4850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[12]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [3],wchar_t (*param_3) [7],
          wchar_t (*param_4) [11],wchar_t (*param_5) [12])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  longlong lVar8;
  FAutomationTestFramework *pFVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStackY_138 [32];
  undefined1 local_f8 [8];
  ForAnyElementType local_f0;
  uint local_e8;
  int local_e4;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  undefined8 ***local_c8;
  FString local_b8;
  undefined8 **local_a8 [2];
  TStringView<wchar_t> local_98;
  wchar_t *local_88;
  wchar_t (*local_78) [3];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  wchar_t (*local_68) [7];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  wchar_t (*local_58) [11];
  int iStack_50;
  undefined4 uStack_4c;
  wchar_t (*local_48) [12];
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar4 = 0;
  local_e0 = (undefined8 *)0x0;
  local_d8 = 0;
  uStack_70 = uVar4;
  local_88 = param_1;
  local_78 = param_2;
  if (param_2 != (wchar_t (*) [3])0x0) {
    sVar7 = wcslen(*param_2);
    uStack_70 = (undefined4)sVar7;
  }
  local_68 = param_3;
  if (param_3 != (wchar_t (*) [7])0x0) {
    sVar7 = wcslen(*param_3);
    uVar4 = (undefined4)sVar7;
  }
  iVar5 = 0;
  local_58 = param_4;
  iStack_50 = iVar5;
  uStack_60 = uVar4;
  if (param_4 != (wchar_t (*) [11])0x0) {
    sVar7 = wcslen(*param_4);
    iStack_50 = (int)sVar7;
  }
  local_48 = param_5;
  iStack_40 = iVar5;
  if (param_5 != (wchar_t (*) [12])0x0) {
    sVar7 = wcslen(*param_5);
    iStack_40 = (int)sVar7;
  }
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_f0,4,&local_e4);
  *(wchar_t (**) [3])local_f0.Data = local_78;
  *(ulonglong *)(local_f0.Data + 8) = CONCAT44(uStack_6c,uStack_70);
  *(wchar_t (**) [7])(local_f0.Data + 0x10) = local_68;
  *(ulonglong *)(local_f0.Data + 0x18) = CONCAT44(uStack_5c,uStack_60);
  *(wchar_t (**) [11])(local_f0.Data + 0x20) = local_58;
  *(ulonglong *)(local_f0.Data + 0x28) = CONCAT44(uStack_4c,iStack_50);
  *(wchar_t (**) [12])(local_f0.Data + 0x30) = local_48;
  *(ulonglong *)(local_f0.Data + 0x38) = CONCAT44(uStack_3c,iStack_40);
  local_a8[0] = &local_e0;
  local_c8 = local_a8;
  local_d0 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[12]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_1);
    iVar5 = (int)sVar7;
  }
  local_b8.Data.ArrayNum = iVar5;
  local_98.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
  local_98.Size = iVar5;
  local_98._12_4_ = local_b8.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_98,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_d0);
  lVar8 = (longlong)(int)(uint)local_d8;
  if ((uint)local_d8 == local_e8) {
    FVar11.Data = local_f0.Data;
    puVar12 = local_e0;
    if ((uint)local_d8 != 0) {
      do {
        iVar5 = *(int *)(puVar12 + 1);
        iVar15 = (int)*(undefined8 *)(FVar11.Data + 8);
        if (iVar5 != iVar15) goto LAB_141cd4a31;
        if ((iVar5 != 0) && (iVar15 != 0)) {
          iVar6 = iVar15;
          if (iVar5 < iVar15) {
            iVar6 = iVar5;
          }
          iVar6 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar12,*(wchar_t **)FVar11.Data,(longlong)iVar6);
          if (iVar6 != 0) goto LAB_141cd4a31;
        }
        if (iVar5 != iVar15) goto LAB_141cd4a31;
        lVar8 = lVar8 + -1;
        FVar11.Data = FVar11.Data + 0x10;
        puVar12 = puVar12 + 2;
      } while (lVar8 != 0);
    }
  }
  else {
LAB_141cd4a31:
    pFVar9 = FAutomationTestFramework::Get();
    uVar3 = local_e8;
    bVar2 = true;
    pFVar1 = pFVar9->CurrentTest;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    local_a8[0] = *(undefined8 ***)(pFVar1->_padding_ + 0x28);
    uVar10 = (ulonglong)(int)local_e8;
    pFVar13 = local_f0.Data + uVar10 * 0x10;
    FVar11.Data = local_f0.Data;
    while( true ) {
      if ((uint)uVar10 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (FVar11.Data == pFVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_b8,L",",1);
      }
      ::FString::AppendChars
                (&local_b8,*(wchar_t **)FVar11.Data,(int)*(undefined8 *)(FVar11.Data + 8));
      uVar10 = (ulonglong)local_e8;
      FVar11.Data = FVar11.Data + 0x10;
    }
    iVar5 = (uint)local_d8;
    bVar2 = true;
    local_d0 = (undefined1  [8])0x0;
    puVar14 = local_e0 + (longlong)(int)(uint)local_d8 * 2;
    local_c8 = (undefined8 ***)0x0;
    puVar12 = local_e0;
    while( true ) {
      if ((uint)local_d8 != iVar5) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (puVar12 == puVar14) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_d0,L",",1);
      }
      ::FString::AppendChars((FString *)local_d0,(wchar_t *)*puVar12,(int)puVar12[1]);
      puVar12 = puVar12 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_98,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*(code *)local_a8[0])(pFVar1,&local_98,0);
    if ((FScriptContainerElement *)local_98.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.DataPtr);
    }
    if (local_d0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_d0);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  if (local_e0 != (undefined8 *)0x0) {
    FMemory::Free(local_e0);
  }
  return;
}

// operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[12]> @ 141cd4c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[12]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [3],wchar_t (*param_3) [7],
          wchar_t (*param_4) [12])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  longlong lVar8;
  FAutomationTestFramework *pFVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStackY_118 [32];
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  uint local_c8;
  int local_c4;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  undefined8 ***local_a8;
  FString local_98;
  undefined8 **local_88 [2];
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  wchar_t (*local_60) [3];
  undefined4 uStack_58;
  undefined4 uStack_54;
  wchar_t (*local_50) [7];
  undefined4 uStack_48;
  undefined4 uStack_44;
  wchar_t (*local_40) [12];
  int iStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_118;
  uVar4 = 0;
  local_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  uStack_58 = uVar4;
  local_68 = param_1;
  local_60 = param_2;
  if (param_2 != (wchar_t (*) [3])0x0) {
    sVar7 = wcslen(*param_2);
    uStack_58 = (undefined4)sVar7;
  }
  local_50 = param_3;
  if (param_3 != (wchar_t (*) [7])0x0) {
    sVar7 = wcslen(*param_3);
    uVar4 = (undefined4)sVar7;
  }
  iVar5 = 0;
  local_40 = param_4;
  iStack_38 = iVar5;
  uStack_48 = uVar4;
  if (param_4 != (wchar_t (*) [12])0x0) {
    sVar7 = wcslen(*param_4);
    iStack_38 = (int)sVar7;
  }
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d0,3,&local_c4);
  *(wchar_t (**) [3])local_d0.Data = local_60;
  *(ulonglong *)(local_d0.Data + 8) = CONCAT44(uStack_54,uStack_58);
  *(wchar_t (**) [7])(local_d0.Data + 0x10) = local_50;
  *(ulonglong *)(local_d0.Data + 0x18) = CONCAT44(uStack_44,uStack_48);
  *(wchar_t (**) [12])(local_d0.Data + 0x20) = local_40;
  *(ulonglong *)(local_d0.Data + 0x28) = CONCAT44(uStack_34,iStack_38);
  local_88[0] = &local_c0;
  local_a8 = local_88;
  local_b0 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[12]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_1);
    iVar5 = (int)sVar7;
  }
  local_98.Data.ArrayNum = iVar5;
  local_78.DataPtr = (wchar_t *)local_98.Data.AllocatorInstance.Data;
  local_78.Size = iVar5;
  local_78._12_4_ = local_98.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_78,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_b0);
  lVar8 = (longlong)(int)(uint)local_b8;
  if ((uint)local_b8 == local_c8) {
    FVar11.Data = local_d0.Data;
    puVar12 = local_c0;
    if ((uint)local_b8 != 0) {
      do {
        iVar5 = *(int *)(puVar12 + 1);
        iVar15 = (int)*(undefined8 *)(FVar11.Data + 8);
        if (iVar5 != iVar15) goto LAB_141cd4df1;
        if ((iVar5 != 0) && (iVar15 != 0)) {
          iVar6 = iVar15;
          if (iVar5 < iVar15) {
            iVar6 = iVar5;
          }
          iVar6 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar12,*(wchar_t **)FVar11.Data,(longlong)iVar6);
          if (iVar6 != 0) goto LAB_141cd4df1;
        }
        if (iVar5 != iVar15) goto LAB_141cd4df1;
        lVar8 = lVar8 + -1;
        FVar11.Data = FVar11.Data + 0x10;
        puVar12 = puVar12 + 2;
      } while (lVar8 != 0);
    }
  }
  else {
LAB_141cd4df1:
    pFVar9 = FAutomationTestFramework::Get();
    uVar3 = local_c8;
    bVar2 = true;
    pFVar1 = pFVar9->CurrentTest;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_88[0] = *(undefined8 ***)(pFVar1->_padding_ + 0x28);
    uVar10 = (ulonglong)(int)local_c8;
    pFVar13 = local_d0.Data + uVar10 * 0x10;
    FVar11.Data = local_d0.Data;
    while( true ) {
      if ((uint)uVar10 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      if (FVar11.Data == pFVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_98,L",",1);
      }
      ::FString::AppendChars
                (&local_98,*(wchar_t **)FVar11.Data,(int)*(undefined8 *)(FVar11.Data + 8));
      uVar10 = (ulonglong)local_c8;
      FVar11.Data = FVar11.Data + 0x10;
    }
    iVar5 = (uint)local_b8;
    bVar2 = true;
    local_b0 = (undefined1  [8])0x0;
    puVar14 = local_c0 + (longlong)(int)(uint)local_b8 * 2;
    local_a8 = (undefined8 ***)0x0;
    puVar12 = local_c0;
    while( true ) {
      if ((uint)local_b8 != iVar5) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      if (puVar12 == puVar14) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_b0,L",",1);
      }
      ::FString::AppendChars((FString *)local_b0,(wchar_t *)*puVar12,(int)puVar12[1]);
      puVar12 = puVar12 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_78,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*(code *)local_88[0])(pFVar1,&local_78,0);
    if ((FScriptContainerElement *)local_78.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.DataPtr);
    }
    if (local_b0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_b0);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  if (local_c0 != (undefined8 *)0x0) {
    FMemory::Free(local_c0);
  }
  return;
}

// operator()<wchar_t_const_(&)[5]> @ 141cd4ff0

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[5]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [5])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  longlong lVar7;
  FAutomationTestFramework *pFVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 **local_res18;
  code *local_res20;
  ForAnyElementType local_88;
  uint local_80;
  int local_7c;
  undefined8 *local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined8 ***local_60;
  FString local_58;
  TStringView<wchar_t> local_48;
  
  local_78 = (undefined8 *)0x0;
  iVar4 = 0;
  local_70 = 0;
  local_58.Data.ArrayNum = iVar4;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  if (param_2 != (wchar_t (*) [5])0x0) {
    sVar6 = wcslen(*param_2);
    local_58.Data.ArrayNum = (int)sVar6;
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_88,1,&local_7c);
  *(FScriptContainerElement **)local_88.Data = local_58.Data.AllocatorInstance.Data;
  *(undefined8 *)(local_88.Data + 8) = local_58.Data._8_8_;
  local_res18 = &local_78;
  local_60 = &local_res18;
  local_68 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[5]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    iVar4 = (int)sVar6;
  }
  local_58.Data.ArrayNum = iVar4;
  local_48.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
  local_48.Size = iVar4;
  local_48._12_4_ = local_58.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_48,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_68);
  lVar7 = (longlong)(int)(uint)local_70;
  if ((uint)local_70 == local_80) {
    FVar10.Data = local_88.Data;
    puVar11 = local_78;
    if ((uint)local_70 != 0) {
      do {
        iVar4 = *(int *)(puVar11 + 1);
        iVar14 = (int)*(undefined8 *)(FVar10.Data + 8);
        if (iVar4 != iVar14) goto LAB_141cd5151;
        if ((iVar4 != 0) && (iVar14 != 0)) {
          iVar5 = iVar14;
          if (iVar4 < iVar14) {
            iVar5 = iVar4;
          }
          iVar5 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar11,*(wchar_t **)FVar10.Data,(longlong)iVar5);
          if (iVar5 != 0) goto LAB_141cd5151;
        }
        if (iVar4 != iVar14) goto LAB_141cd5151;
        lVar7 = lVar7 + -1;
        FVar10.Data = FVar10.Data + 0x10;
        puVar11 = puVar11 + 2;
      } while (lVar7 != 0);
    }
  }
  else {
LAB_141cd5151:
    pFVar8 = FAutomationTestFramework::Get();
    uVar3 = local_80;
    bVar2 = true;
    pFVar1 = pFVar8->CurrentTest;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_res20 = *(code **)(pFVar1->_padding_ + 0x28);
    uVar9 = (ulonglong)(int)local_80;
    pFVar12 = local_88.Data + uVar9 * 0x10;
    FVar10.Data = local_88.Data;
    while( true ) {
      if ((uint)uVar9 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (FVar10.Data == pFVar12) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_58,L",",1);
      }
      ::FString::AppendChars
                (&local_58,*(wchar_t **)FVar10.Data,(int)*(undefined8 *)(FVar10.Data + 8));
      uVar9 = (ulonglong)local_80;
      FVar10.Data = FVar10.Data + 0x10;
    }
    iVar4 = (uint)local_70;
    bVar2 = true;
    local_68 = (undefined1  [8])0x0;
    puVar13 = local_78 + (longlong)(int)(uint)local_70 * 2;
    local_60 = (undefined8 ***)0x0;
    puVar11 = local_78;
    while( true ) {
      if ((uint)local_70 != iVar4) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (puVar11 == puVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_68,L",",1);
      }
      ::FString::AppendChars((FString *)local_68,(wchar_t *)*puVar11,(int)puVar11[1]);
      puVar11 = puVar11 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_48,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*local_res20)(pFVar1,&local_48,0);
    if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
    if (local_68 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_68);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_78 != (undefined8 *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// operator()<wchar_t_const_(&)[8]> @ 141cd5330

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[8]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [8])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  longlong lVar7;
  FAutomationTestFramework *pFVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 **local_res18;
  code *local_res20;
  ForAnyElementType local_88;
  uint local_80;
  int local_7c;
  undefined8 *local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined8 ***local_60;
  FString local_58;
  TStringView<wchar_t> local_48;
  
  local_78 = (undefined8 *)0x0;
  iVar4 = 0;
  local_70 = 0;
  local_58.Data.ArrayNum = iVar4;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  if (param_2 != (wchar_t (*) [8])0x0) {
    sVar6 = wcslen(*param_2);
    local_58.Data.ArrayNum = (int)sVar6;
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_88,1,&local_7c);
  *(FScriptContainerElement **)local_88.Data = local_58.Data.AllocatorInstance.Data;
  *(undefined8 *)(local_88.Data + 8) = local_58.Data._8_8_;
  local_res18 = &local_78;
  local_60 = &local_res18;
  local_68 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[8]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    iVar4 = (int)sVar6;
  }
  local_58.Data.ArrayNum = iVar4;
  local_48.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
  local_48.Size = iVar4;
  local_48._12_4_ = local_58.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_48,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_68);
  lVar7 = (longlong)(int)(uint)local_70;
  if ((uint)local_70 == local_80) {
    FVar10.Data = local_88.Data;
    puVar11 = local_78;
    if ((uint)local_70 != 0) {
      do {
        iVar4 = *(int *)(puVar11 + 1);
        iVar14 = (int)*(undefined8 *)(FVar10.Data + 8);
        if (iVar4 != iVar14) goto LAB_141cd5491;
        if ((iVar4 != 0) && (iVar14 != 0)) {
          iVar5 = iVar14;
          if (iVar4 < iVar14) {
            iVar5 = iVar4;
          }
          iVar5 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar11,*(wchar_t **)FVar10.Data,(longlong)iVar5);
          if (iVar5 != 0) goto LAB_141cd5491;
        }
        if (iVar4 != iVar14) goto LAB_141cd5491;
        lVar7 = lVar7 + -1;
        FVar10.Data = FVar10.Data + 0x10;
        puVar11 = puVar11 + 2;
      } while (lVar7 != 0);
    }
  }
  else {
LAB_141cd5491:
    pFVar8 = FAutomationTestFramework::Get();
    uVar3 = local_80;
    bVar2 = true;
    pFVar1 = pFVar8->CurrentTest;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_res20 = *(code **)(pFVar1->_padding_ + 0x28);
    uVar9 = (ulonglong)(int)local_80;
    pFVar12 = local_88.Data + uVar9 * 0x10;
    FVar10.Data = local_88.Data;
    while( true ) {
      if ((uint)uVar9 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (FVar10.Data == pFVar12) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_58,L",",1);
      }
      ::FString::AppendChars
                (&local_58,*(wchar_t **)FVar10.Data,(int)*(undefined8 *)(FVar10.Data + 8));
      uVar9 = (ulonglong)local_80;
      FVar10.Data = FVar10.Data + 0x10;
    }
    iVar4 = (uint)local_70;
    bVar2 = true;
    local_68 = (undefined1  [8])0x0;
    puVar13 = local_78 + (longlong)(int)(uint)local_70 * 2;
    local_60 = (undefined8 ***)0x0;
    puVar11 = local_78;
    while( true ) {
      if ((uint)local_70 != iVar4) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (puVar11 == puVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_68,L",",1);
      }
      ::FString::AppendChars((FString *)local_68,(wchar_t *)*puVar11,(int)puVar11[1]);
      puVar11 = puVar11 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_48,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*local_res20)(pFVar1,&local_48,0);
    if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
    if (local_68 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_68);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_78 != (undefined8 *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// operator()<wchar_t_const_(&)[8],wchar_t_const_(&)[1]> @ 141cd5670

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[8],wchar_t_const_(&)[1]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [8],wchar_t (*param_3) [1])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  longlong lVar7;
  FAutomationTestFramework *pFVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 **local_res18;
  code *local_res20;
  ForAnyElementType local_98;
  uint local_90;
  int local_8c;
  undefined8 *local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  undefined8 ***local_70;
  FString local_68;
  TStringView<wchar_t> local_58;
  wchar_t (*local_48) [1];
  int iStack_40;
  undefined4 uStack_3c;
  
  local_88 = (undefined8 *)0x0;
  iVar4 = 0;
  local_80 = 0;
  local_58.Size = iVar4;
  local_58.DataPtr = *param_2;
  if (param_2 != (wchar_t (*) [8])0x0) {
    sVar6 = wcslen(*param_2);
    local_58.Size = (int)sVar6;
  }
  local_48 = param_3;
  if (param_3 != (wchar_t (*) [1])0x0) {
    sVar6 = wcslen(*param_3);
    iVar4 = (int)sVar6;
  }
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 2;
  iStack_40 = iVar4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_98,2,&local_8c);
  *(wchar_t **)local_98.Data = local_58.DataPtr;
  *(undefined8 *)(local_98.Data + 8) = local_58._8_8_;
  *(wchar_t (**) [1])(local_98.Data + 0x10) = local_48;
  *(ulonglong *)(local_98.Data + 0x18) = CONCAT44(uStack_3c,iStack_40);
  local_res18 = &local_88;
  local_70 = &local_res18;
  local_78 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[8],wchar_t_const_(&)[1]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_68.Data.ArrayNum = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    local_68.Data.ArrayNum = (int)sVar6;
  }
  local_58.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
  local_58.Size = local_68.Data.ArrayNum;
  local_58._12_4_ = local_68.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_58,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_78);
  lVar7 = (longlong)(int)(uint)local_80;
  if ((uint)local_80 == local_90) {
    FVar10.Data = local_98.Data;
    puVar11 = local_88;
    if ((uint)local_80 != 0) {
      do {
        iVar4 = *(int *)(puVar11 + 1);
        iVar14 = (int)*(undefined8 *)(FVar10.Data + 8);
        if (iVar4 != iVar14) goto LAB_141cd57f1;
        if ((iVar4 != 0) && (iVar14 != 0)) {
          iVar5 = iVar14;
          if (iVar4 < iVar14) {
            iVar5 = iVar4;
          }
          iVar5 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar11,*(wchar_t **)FVar10.Data,(longlong)iVar5);
          if (iVar5 != 0) goto LAB_141cd57f1;
        }
        if (iVar4 != iVar14) goto LAB_141cd57f1;
        lVar7 = lVar7 + -1;
        FVar10.Data = FVar10.Data + 0x10;
        puVar11 = puVar11 + 2;
      } while (lVar7 != 0);
    }
  }
  else {
LAB_141cd57f1:
    pFVar8 = FAutomationTestFramework::Get();
    uVar3 = local_90;
    bVar2 = true;
    pFVar1 = pFVar8->CurrentTest;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_res20 = *(code **)(pFVar1->_padding_ + 0x28);
    uVar9 = (ulonglong)(int)local_90;
    pFVar12 = local_98.Data + uVar9 * 0x10;
    FVar10.Data = local_98.Data;
    while( true ) {
      if ((uint)uVar9 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (FVar10.Data == pFVar12) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_68,L",",1);
      }
      ::FString::AppendChars
                (&local_68,*(wchar_t **)FVar10.Data,(int)*(undefined8 *)(FVar10.Data + 8));
      uVar9 = (ulonglong)local_90;
      FVar10.Data = FVar10.Data + 0x10;
    }
    iVar4 = (uint)local_80;
    bVar2 = true;
    local_78 = (undefined1  [8])0x0;
    puVar13 = local_88 + (longlong)(int)(uint)local_80 * 2;
    local_70 = (undefined8 ***)0x0;
    puVar11 = local_88;
    while( true ) {
      if ((uint)local_80 != iVar4) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (puVar11 == puVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_78,L",",1);
      }
      ::FString::AppendChars((FString *)local_78,(wchar_t *)*puVar11,(int)puVar11[1]);
      puVar11 = puVar11 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_58,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*local_res20)(pFVar1,&local_58,0);
    if ((FScriptContainerElement *)local_58.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
    if (local_78 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_78);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  if (local_88 != (undefined8 *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// operator()<wchar_t_const_(&)[9]> @ 141cd59d0

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[9]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [9])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  longlong lVar7;
  FAutomationTestFramework *pFVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 **local_res18;
  code *local_res20;
  ForAnyElementType local_88;
  uint local_80;
  int local_7c;
  undefined8 *local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined8 ***local_60;
  FString local_58;
  TStringView<wchar_t> local_48;
  
  local_78 = (undefined8 *)0x0;
  iVar4 = 0;
  local_70 = 0;
  local_58.Data.ArrayNum = iVar4;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  if (param_2 != (wchar_t (*) [9])0x0) {
    sVar6 = wcslen(*param_2);
    local_58.Data.ArrayNum = (int)sVar6;
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_88,1,&local_7c);
  *(FScriptContainerElement **)local_88.Data = local_58.Data.AllocatorInstance.Data;
  *(undefined8 *)(local_88.Data + 8) = local_58.Data._8_8_;
  local_res18 = &local_78;
  local_60 = &local_res18;
  local_68 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[9]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    iVar4 = (int)sVar6;
  }
  local_58.Data.ArrayNum = iVar4;
  local_48.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
  local_48.Size = iVar4;
  local_48._12_4_ = local_58.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_48,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_68);
  lVar7 = (longlong)(int)(uint)local_70;
  if ((uint)local_70 == local_80) {
    FVar10.Data = local_88.Data;
    puVar11 = local_78;
    if ((uint)local_70 != 0) {
      do {
        iVar4 = *(int *)(puVar11 + 1);
        iVar14 = (int)*(undefined8 *)(FVar10.Data + 8);
        if (iVar4 != iVar14) goto LAB_141cd5b31;
        if ((iVar4 != 0) && (iVar14 != 0)) {
          iVar5 = iVar14;
          if (iVar4 < iVar14) {
            iVar5 = iVar4;
          }
          iVar5 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar11,*(wchar_t **)FVar10.Data,(longlong)iVar5);
          if (iVar5 != 0) goto LAB_141cd5b31;
        }
        if (iVar4 != iVar14) goto LAB_141cd5b31;
        lVar7 = lVar7 + -1;
        FVar10.Data = FVar10.Data + 0x10;
        puVar11 = puVar11 + 2;
      } while (lVar7 != 0);
    }
  }
  else {
LAB_141cd5b31:
    pFVar8 = FAutomationTestFramework::Get();
    uVar3 = local_80;
    bVar2 = true;
    pFVar1 = pFVar8->CurrentTest;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_res20 = *(code **)(pFVar1->_padding_ + 0x28);
    uVar9 = (ulonglong)(int)local_80;
    pFVar12 = local_88.Data + uVar9 * 0x10;
    FVar10.Data = local_88.Data;
    while( true ) {
      if ((uint)uVar9 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (FVar10.Data == pFVar12) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_58,L",",1);
      }
      ::FString::AppendChars
                (&local_58,*(wchar_t **)FVar10.Data,(int)*(undefined8 *)(FVar10.Data + 8));
      uVar9 = (ulonglong)local_80;
      FVar10.Data = FVar10.Data + 0x10;
    }
    iVar4 = (uint)local_70;
    bVar2 = true;
    local_68 = (undefined1  [8])0x0;
    puVar13 = local_78 + (longlong)(int)(uint)local_70 * 2;
    local_60 = (undefined8 ***)0x0;
    puVar11 = local_78;
    while( true ) {
      if ((uint)local_70 != iVar4) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (puVar11 == puVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_68,L",",1);
      }
      ::FString::AppendChars((FString *)local_68,(wchar_t *)*puVar11,(int)puVar11[1]);
      puVar11 = puVar11 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_48,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*local_res20)(pFVar1,&local_48,0);
    if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
    if (local_68 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_68);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_78 != (undefined8 *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// operator()<wchar_t_const_(&)[12]> @ 141cd5d10

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[12]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [12])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  longlong lVar7;
  FAutomationTestFramework *pFVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 **local_res18;
  code *local_res20;
  ForAnyElementType local_88;
  uint local_80;
  int local_7c;
  undefined8 *local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined8 ***local_60;
  FString local_58;
  TStringView<wchar_t> local_48;
  
  local_78 = (undefined8 *)0x0;
  iVar4 = 0;
  local_70 = 0;
  local_58.Data.ArrayNum = iVar4;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  if (param_2 != (wchar_t (*) [12])0x0) {
    sVar6 = wcslen(*param_2);
    local_58.Data.ArrayNum = (int)sVar6;
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_88,1,&local_7c);
  *(FScriptContainerElement **)local_88.Data = local_58.Data.AllocatorInstance.Data;
  *(undefined8 *)(local_88.Data + 8) = local_58.Data._8_8_;
  local_res18 = &local_78;
  local_60 = &local_res18;
  local_68 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[12]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    iVar4 = (int)sVar6;
  }
  local_58.Data.ArrayNum = iVar4;
  local_48.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
  local_48.Size = iVar4;
  local_48._12_4_ = local_58.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_48,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_68);
  lVar7 = (longlong)(int)(uint)local_70;
  if ((uint)local_70 == local_80) {
    FVar10.Data = local_88.Data;
    puVar11 = local_78;
    if ((uint)local_70 != 0) {
      do {
        iVar4 = *(int *)(puVar11 + 1);
        iVar14 = (int)*(undefined8 *)(FVar10.Data + 8);
        if (iVar4 != iVar14) goto LAB_141cd5e71;
        if ((iVar4 != 0) && (iVar14 != 0)) {
          iVar5 = iVar14;
          if (iVar4 < iVar14) {
            iVar5 = iVar4;
          }
          iVar5 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar11,*(wchar_t **)FVar10.Data,(longlong)iVar5);
          if (iVar5 != 0) goto LAB_141cd5e71;
        }
        if (iVar4 != iVar14) goto LAB_141cd5e71;
        lVar7 = lVar7 + -1;
        FVar10.Data = FVar10.Data + 0x10;
        puVar11 = puVar11 + 2;
      } while (lVar7 != 0);
    }
  }
  else {
LAB_141cd5e71:
    pFVar8 = FAutomationTestFramework::Get();
    uVar3 = local_80;
    bVar2 = true;
    pFVar1 = pFVar8->CurrentTest;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_res20 = *(code **)(pFVar1->_padding_ + 0x28);
    uVar9 = (ulonglong)(int)local_80;
    pFVar12 = local_88.Data + uVar9 * 0x10;
    FVar10.Data = local_88.Data;
    while( true ) {
      if ((uint)uVar9 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (FVar10.Data == pFVar12) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_58,L",",1);
      }
      ::FString::AppendChars
                (&local_58,*(wchar_t **)FVar10.Data,(int)*(undefined8 *)(FVar10.Data + 8));
      uVar9 = (ulonglong)local_80;
      FVar10.Data = FVar10.Data + 0x10;
    }
    iVar4 = (uint)local_70;
    bVar2 = true;
    local_68 = (undefined1  [8])0x0;
    puVar13 = local_78 + (longlong)(int)(uint)local_70 * 2;
    local_60 = (undefined8 ***)0x0;
    puVar11 = local_78;
    while( true ) {
      if ((uint)local_70 != iVar4) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (puVar11 == puVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_68,L",",1);
      }
      ::FString::AppendChars((FString *)local_68,(wchar_t *)*puVar11,(int)puVar11[1]);
      puVar11 = puVar11 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_48,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*local_res20)(pFVar1,&local_48,0);
    if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
    if (local_68 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_68);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_78 != (undefined8 *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// operator()<wchar_t_const_(&)[12],wchar_t_const_(&)[1]> @ 141cd6050

void __thiscall
`FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
operator()<wchar_t_const_(&)[12],wchar_t_const_(&)[1]>
          (void *this,wchar_t *param_1,wchar_t (*param_2) [12],wchar_t (*param_3) [1])

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  longlong lVar7;
  FAutomationTestFramework *pFVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 **local_res18;
  code *local_res20;
  ForAnyElementType local_98;
  uint local_90;
  int local_8c;
  undefined8 *local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  undefined8 ***local_70;
  FString local_68;
  TStringView<wchar_t> local_58;
  wchar_t (*local_48) [1];
  int iStack_40;
  undefined4 uStack_3c;
  
  local_88 = (undefined8 *)0x0;
  iVar4 = 0;
  local_80 = 0;
  local_58.Size = iVar4;
  local_58.DataPtr = *param_2;
  if (param_2 != (wchar_t (*) [12])0x0) {
    sVar6 = wcslen(*param_2);
    local_58.Size = (int)sVar6;
  }
  local_48 = param_3;
  if (param_3 != (wchar_t (*) [1])0x0) {
    sVar6 = wcslen(*param_3);
    iVar4 = (int)sVar6;
  }
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 2;
  iStack_40 = iVar4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_98,2,&local_8c);
  *(wchar_t **)local_98.Data = local_58.DataPtr;
  *(undefined8 *)(local_98.Data + 8) = local_58._8_8_;
  *(wchar_t (**) [1])(local_98.Data + 0x10) = local_48;
  *(ulonglong *)(local_98.Data + 0x18) = CONCAT44(uStack_3c,iStack_40);
  local_res18 = &local_88;
  local_70 = &local_res18;
  local_78 = (undefined1  [8])
             UE::Core::Private::Function::
             TFunctionRefCaller<``FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[12],wchar_t_const_(&)[1]>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_68.Data.ArrayNum = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    local_68.Data.ArrayNum = (int)sVar6;
  }
  local_58.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
  local_58.Size = local_68.Data.ArrayNum;
  local_58._12_4_ = local_68.Data.ArrayMax;
  FPathViews::IterateComponents
            (&local_58,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_78);
  lVar7 = (longlong)(int)(uint)local_80;
  if ((uint)local_80 == local_90) {
    FVar10.Data = local_98.Data;
    puVar11 = local_88;
    if ((uint)local_80 != 0) {
      do {
        iVar4 = *(int *)(puVar11 + 1);
        iVar14 = (int)*(undefined8 *)(FVar10.Data + 8);
        if (iVar4 != iVar14) goto LAB_141cd61d1;
        if ((iVar4 != 0) && (iVar14 != 0)) {
          iVar5 = iVar14;
          if (iVar4 < iVar14) {
            iVar5 = iVar4;
          }
          iVar5 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar11,*(wchar_t **)FVar10.Data,(longlong)iVar5);
          if (iVar5 != 0) goto LAB_141cd61d1;
        }
        if (iVar4 != iVar14) goto LAB_141cd61d1;
        lVar7 = lVar7 + -1;
        FVar10.Data = FVar10.Data + 0x10;
        puVar11 = puVar11 + 2;
      } while (lVar7 != 0);
    }
  }
  else {
LAB_141cd61d1:
    pFVar8 = FAutomationTestFramework::Get();
    uVar3 = local_90;
    bVar2 = true;
    pFVar1 = pFVar8->CurrentTest;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_res20 = *(code **)(pFVar1->_padding_ + 0x28);
    uVar9 = (ulonglong)(int)local_90;
    pFVar12 = local_98.Data + uVar9 * 0x10;
    FVar10.Data = local_98.Data;
    while( true ) {
      if ((uint)uVar9 != uVar3) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (FVar10.Data == pFVar12) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_68,L",",1);
      }
      ::FString::AppendChars
                (&local_68,*(wchar_t **)FVar10.Data,(int)*(undefined8 *)(FVar10.Data + 8));
      uVar9 = (ulonglong)local_90;
      FVar10.Data = FVar10.Data + 0x10;
    }
    iVar4 = (uint)local_80;
    bVar2 = true;
    local_78 = (undefined1  [8])0x0;
    puVar13 = local_88 + (longlong)(int)(uint)local_80 * 2;
    local_70 = (undefined8 ***)0x0;
    puVar11 = local_88;
    while( true ) {
      if ((uint)local_80 != iVar4) {
        `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (puVar11 == puVar13) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars((FString *)local_78,L",",1);
      }
      ::FString::AppendChars((FString *)local_78,(wchar_t *)*puVar11,(int)puVar11[1]);
      puVar11 = puVar11 + 2;
    }
    ::FString::PrintfImpl
              ((FString *)&local_58,
               L"Incorrect components splitting %s - got %d, expected %d. Got components (%s), expected components (%s)"
              );
    (*local_res20)(pFVar1,&local_58,0);
    if ((FScriptContainerElement *)local_58.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
    if (local_78 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_78);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  if (local_88 != (undefined8 *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// FPathViewsIterateTest @ 141cea240

FPathViewsIterateTest * __thiscall
FPathViewsIterateTest::FPathViewsIterateTest(FPathViewsIterateTest *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EAutomationTestFlags EVar3;
  FString *pFVar4;
  FAutomationTestFramework *this_00;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7FPathViewsIterateTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::PathViews::IterateComponents");
  pFVar4 = ::FString::Replace(pFVar4,&local_18,L"::",L".",IgnoreCase);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrettyNameDotNotation).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->PrettyNameDotNotation).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = this->TestFlags;
  if ((EVar3 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) == None
     ) {
    EVar3 = EVar3 | (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
    this->TestFlags = EVar3;
  }
  if ((EVar3 & (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      None) {
    this->TestFlags = EVar3 | EngineFilter;
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,lVar5 * 2);
  }
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_28,&local_18,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// TestBody @ 141d38880

void __thiscall FPathViewsIterateTest::TestBody(FPathViewsIterateTest *this,FString *param_1)

{
  undefined1 local_res18 [8];
  
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[1]>
            (local_res18,L"",(wchar_t (*) [1])L"");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[5]>
            (local_res18,L".txt",(wchar_t (*) [5])L".txt");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[8]>
            (local_res18,L".tar.gz",(wchar_t (*) [8])L".tar.gz");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[8],wchar_t_const_(&)[1]>
            (local_res18,L".tar.gz/",(wchar_t (*) [8])L".tar.gz",(wchar_t (*) [1])L"");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[8],wchar_t_const_(&)[1]>
            (local_res18,L".tar.gz\\",(wchar_t (*) [8])L".tar.gz",(wchar_t (*) [1])L"");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[2]>
            (local_res18,L".",(wchar_t (*) [2])L".");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[3]>
            (local_res18,L"..",(wchar_t (*) [3])L"..");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[5]>
            (local_res18,L"File",(wchar_t (*) [5])L"File");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[9]>
            (local_res18,L"File.txt",(wchar_t (*) [9])L"File.txt");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::operator()<wchar_t_const_(&)[12]>
            (local_res18,L"File.tar.gz",(wchar_t (*) [12])L"File.tar.gz");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[12],wchar_t_const_(&)[1]>
            (local_res18,L"File.tar.gz/",(wchar_t (*) [12])L"File.tar.gz",(wchar_t (*) [1])L"");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[12],wchar_t_const_(&)[1]>
            (local_res18,L"File.tar.gz\\",(wchar_t (*) [12])L"File.tar.gz",(wchar_t (*) [1])L"");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7]>
            (local_res18,L"C:/Folder",(wchar_t (*) [3])L"C:",(wchar_t (*) [7])L"Folder");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[1]>
            (local_res18,L"C:/Folder/",(wchar_t (*) [3])L"C:",(wchar_t (*) [7])L"Folder",
             (wchar_t (*) [1])L"");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[5]>
            (local_res18,L"C:/Folder/File",(wchar_t (*) [3])L"C:",(wchar_t (*) [7])L"Folder",
             (wchar_t (*) [5])L"File");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[9]>
            (local_res18,L"C:/Folder/File.txt",(wchar_t (*) [3])L"C:",(wchar_t (*) [7])L"Folder",
             (wchar_t (*) [9])L"File.txt");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[12]>
            (local_res18,L"C:/Folder/File.tar.gz",(wchar_t (*) [3])L"C:",(wchar_t (*) [7])L"Folder",
             (wchar_t (*) [12])L"File.tar.gz");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[5]>
            (local_res18,L"C:/Folder/First.Last/File",(wchar_t (*) [3])L"C:",
             (wchar_t (*) [7])L"Folder",(wchar_t (*) [11])L"First.Last",(wchar_t (*) [5])L"File");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[9]>
            (local_res18,L"C:/Folder/First.Last/File.txt",(wchar_t (*) [3])L"C:",
             (wchar_t (*) [7])L"Folder",(wchar_t (*) [11])L"First.Last",(wchar_t (*) [9])L"File.txt"
            );
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[12]>
            (local_res18,L"C:/Folder/First.Last/File.tar.gz",(wchar_t (*) [3])L"C:",
             (wchar_t (*) [7])L"Folder",(wchar_t (*) [11])L"First.Last",
             (wchar_t (*) [12])L"File.tar.gz");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7]>
            (local_res18,L"C:\\Folder",(wchar_t (*) [3])L"C:",(wchar_t (*) [7])L"Folder");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[1]>
            (local_res18,L"C:\\Folder\\",(wchar_t (*) [3])L"C:",(wchar_t (*) [7])L"Folder",
             (wchar_t (*) [1])L"");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[5]>
            (local_res18,L"C:\\Folder\\File",(wchar_t (*) [3])L"C:",(wchar_t (*) [7])L"Folder",
             (wchar_t (*) [5])L"File");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[1]>
            (local_res18,L"C:\\Folder\\First.Last\\",(wchar_t (*) [3])L"C:",
             (wchar_t (*) [7])L"Folder",(wchar_t (*) [11])L"First.Last",(wchar_t (*) [1])L"");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[5]>
            (local_res18,L"C:\\Folder\\First.Last\\File",(wchar_t (*) [3])L"C:",
             (wchar_t (*) [7])L"Folder",(wchar_t (*) [11])L"First.Last",(wchar_t (*) [5])L"File");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[9]>
            (local_res18,L"C:\\Folder\\First.Last\\File.txt",(wchar_t (*) [3])L"C:",
             (wchar_t (*) [7])L"Folder",(wchar_t (*) [11])L"First.Last",(wchar_t (*) [9])L"File.txt"
            );
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[3],wchar_t_const_(&)[7],wchar_t_const_(&)[11],wchar_t_const_(&)[12]>
            (local_res18,L"C:\\Folder\\First.Last\\File.tar.gz",(wchar_t (*) [3])L"C:",
             (wchar_t (*) [7])L"Folder",(wchar_t (*) [11])L"First.Last",
             (wchar_t (*) [12])L"File.tar.gz");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5]>
            (local_res18,L"//ShareName/Path",(wchar_t (*) [1])L"",(wchar_t (*) [1])L"",
             (wchar_t (*) [10])L"ShareName",(wchar_t (*) [5])L"Path");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[1]>
            (local_res18,L"//ShareName/Path/",(wchar_t (*) [1])L"",(wchar_t (*) [1])L"",
             (wchar_t (*) [10])L"ShareName",(wchar_t (*) [5])L"Path",(wchar_t (*) [1])L"");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[4]>
            (local_res18,L"//ShareName/Path/Sub",(wchar_t (*) [1])L"",(wchar_t (*) [1])L"",
             (wchar_t (*) [10])L"ShareName",(wchar_t (*) [5])L"Path",(wchar_t (*) [4])L"Sub");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[4],wchar_t_const_(&)[5]>
            (local_res18,L"//ShareName/Path/Sub/File",(wchar_t (*) [1])L"",(wchar_t (*) [1])L"",
             (wchar_t (*) [10])L"ShareName",(wchar_t (*) [5])L"Path",(wchar_t (*) [4])L"Sub",
             (wchar_t (*) [5])L"File");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[4],wchar_t_const_(&)[9]>
            (local_res18,L"//ShareName/Path/Sub/File.txt",(wchar_t (*) [1])L"",(wchar_t (*) [1])L"",
             (wchar_t (*) [10])L"ShareName",(wchar_t (*) [5])L"Path",(wchar_t (*) [4])L"Sub",
             (wchar_t (*) [9])L"File.txt");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[1],wchar_t_const_(&)[10],wchar_t_const_(&)[5],wchar_t_const_(&)[4],wchar_t_const_(&)[12]>
            (local_res18,L"//ShareName/Path/Sub/File.tar.gz",(wchar_t (*) [1])L"",
             (wchar_t (*) [1])L"",(wchar_t (*) [10])L"ShareName",(wchar_t (*) [5])L"Path",
             (wchar_t (*) [4])L"Sub",(wchar_t (*) [12])L"File.tar.gz");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11]>
            (local_res18,L"/MountPoint",(wchar_t (*) [1])L"",(wchar_t (*) [11])L"MountPoint");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[1]>
            (local_res18,L"/MountPoint/",(wchar_t (*) [1])L"",(wchar_t (*) [11])L"MountPoint",
             (wchar_t (*) [1])L"");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[4]>
            (local_res18,L"/MountPoint/Sub",(wchar_t (*) [1])L"",(wchar_t (*) [11])L"MountPoint",
             (wchar_t (*) [4])L"Sub");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[4],wchar_t_const_(&)[5]>
            (local_res18,L"/MountPoint/Sub/File",(wchar_t (*) [1])L"",
             (wchar_t (*) [11])L"MountPoint",(wchar_t (*) [4])L"Sub",(wchar_t (*) [5])L"File");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[4],wchar_t_const_(&)[9]>
            (local_res18,L"/MountPoint/Sub/File.txt",(wchar_t (*) [1])L"",
             (wchar_t (*) [11])L"MountPoint",(wchar_t (*) [4])L"Sub",(wchar_t (*) [9])L"File.txt");
  `FPathViewsIterateTest::TestBody'::__l2::<lambda_1>::
  operator()<wchar_t_const_(&)[1],wchar_t_const_(&)[11],wchar_t_const_(&)[4],wchar_t_const_(&)[12]>
            (local_res18,L"/MountPoint/Sub/File.tar.gz",(wchar_t (*) [1])L"",
             (wchar_t (*) [11])L"MountPoint",(wchar_t (*) [4])L"Sub",
             (wchar_t (*) [12])L"File.tar.gz");
  return;
}

