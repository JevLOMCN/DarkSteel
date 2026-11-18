// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// GetTestFlags @ 141cbd5f0

EAutomationTestFlags __thiscall FStringConvertTest::GetTestFlags(FStringConvertTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cbd600

bool __thiscall FStringConvertTest::IsStressTest(FStringConvertTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cbd610

uint __thiscall FStringConvertTest::GetRequiredDeviceNum(FStringConvertTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cbd620

FString * __thiscall
FStringConvertTest::GetTestSourceFileName(FStringConvertTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\PlatformStringConvertTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cbd650

int __thiscall FStringConvertTest::GetTestSourceFileLine(FStringConvertTest *this)

{
  return 0xc;
}

// GetTests @ 141cbd660

/* WARNING: Removing unreachable block (ram,0x000141cbd7de) */

void __thiscall
FStringConvertTest::GetTests
          (FStringConvertTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cbd800

bool __thiscall FStringConvertTest::RunTest(FStringConvertTest *this,FString *param_1)

{
  bool bVar1;
  undefined1 local_res18 [16];
  
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<unsigned_short,char8_t>
            (local_res18,L"UnrealEngineIsGreat UTF-16 -> UTF-8",
             (ushort *)L"𝙐п𝗋𝘦𝕒l 𝑬𝔫ｇ𝒾𝖓𝕖 𝚒ｓ 𝑮𝚛℮𝜶ｔ!",
             &s__________l______);
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<char8_t,unsigned_short>
            (local_res18,L"UnrealEngineIsGreat UTF-8 -> UTF-16",&s__________l______,
             (ushort *)L"𝙐п𝗋𝘦𝕒l 𝑬𝔫ｇ𝒾𝖓𝕖 𝚒ｓ 𝑮𝚛℮𝜶ｔ!");
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<unsigned_short,char8_t>
            (local_res18,L"Internationalization UTF-16 -> UTF-8",
             (ushort *)L"Iñtërnâtiônàlizætiøn",&s_I_t_rn_ti_n_liz_ti_n);
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<char8_t,unsigned_short>
            (local_res18,L"Internationalization UTF-8 -> UTF-16",&s_I_t_rn_ti_n_liz_ti_n,
             (ushort *)L"Iñtërnâtiônàlizætiøn");
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<unsigned_short,char8_t>
            (local_res18,L"WomanEmoji UTF-16 -> UTF-8",(ushort *)L"👩",(uchar *)::s___);
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<char8_t,unsigned_short>
            (local_res18,L"WomanEmoji UTF-8 -> UTF-16",(uchar *)::s___,(ushort *)L"👩");
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<unsigned_short,char8_t>
            (local_res18,L"LanguageProcessingChinese UTF-16 -> UTF-8",(ushort *)L"语言处理",
             (uchar *)s_____);
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<char8_t,unsigned_short>
            (local_res18,L"LanguageProcessingChinese UTF-8 -> UTF-16",(uchar *)s_____,
             (ushort *)L"语言处理");
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<unsigned_short,char8_t>
            (local_res18,L"Double UTF-16 high surrogate",(ushort *)u_q__q,(uchar *)"q??q");
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<unsigned_short,char8_t>
            (local_res18,L"Double UTF-16 low surrogate",(ushort *)u_qiiq,(uchar *)"q??q");
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<unsigned_short,char8_t>
            (local_res18,L"Orphaned UTF-16 high surrogate",(ushort *)u_qiq,(uchar *)"q?q");
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<unsigned_short,char8_t>
            (local_res18,L"Orphaned UTF-16 low surrogate",(ushort *)u_qiq,(uchar *)"q?q");
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cbd9a0

FString * __thiscall
FStringConvertTest::GetBeautifiedTestName(FStringConvertTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// operator()<unsigned_short,char8_t> @ 141cd6a30

void __thiscall
`FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<unsigned_short,char8_t>
          (void *this,wchar_t *param_1,ushort *param_2,uchar *param_3)

{
  byte bVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  int iVar4;
  char *_Dst;
  uchar *puVar5;
  FAutomationTestFramework *pFVar6;
  byte *pbVar7;
  FString local_38;
  
  iVar4 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_2);
  _Dst = operator_new__((longlong)iVar4 + 9);
  memset(_Dst,0xcd,(longlong)iVar4 + 9);
  pbVar7 = (byte *)(_Dst + 4);
  puVar5 = UE::Core::Private::Convert(pbVar7,iVar4 + 1,param_2);
  if (puVar5 != (uchar *)0x0) {
    *puVar5 = '\0';
    puVar5 = puVar5 + 1;
  }
  if (puVar5 != (uchar *)(_Dst + (longlong)(iVar4 + 1) + 4)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s converted length matches");
    (*pcVar3)(pFVar2,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((*_Dst != -0x33) || (*puVar5 != 0xcd)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s guard block is preserved");
    (*pcVar3)(pFVar2,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((_Dst[1] != -0x33) || (puVar5[1] != 0xcd)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s guard block is preserved");
    (*pcVar3)(pFVar2,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((_Dst[2] != -0x33) || (puVar5[2] != 0xcd)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s guard block is preserved");
    (*pcVar3)(pFVar2,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((_Dst[3] != -0x33) || (puVar5[3] != 0xcd)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s guard block is preserved");
    (*pcVar3)(pFVar2,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  bVar1 = *param_3;
  do {
    if (bVar1 == 0) {
      iVar4 = -(uint)(*pbVar7 != 0);
LAB_141cd6c5f:
      if (iVar4 != 0) {
LAB_141cd6c63:
        pFVar6 = FAutomationTestFramework::Get();
        pFVar2 = pFVar6->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_38,L"%s converted string matches");
        (*pcVar3)(pFVar2,&local_38,0);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      operator_delete__(_Dst);
      return;
    }
    bVar1 = *pbVar7;
    if (bVar1 == 0) goto LAB_141cd6c63;
    if (*param_3 != bVar1) {
      iVar4 = 1;
      if (*param_3 < bVar1) {
        iVar4 = -1;
      }
      goto LAB_141cd6c5f;
    }
    param_3 = param_3 + 1;
    pbVar7 = pbVar7 + 1;
    bVar1 = *param_3;
  } while( true );
}

// operator()<char8_t,unsigned_short> @ 141cd9910

void __thiscall
`FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<char8_t,unsigned_short>
          (void *this,wchar_t *param_1,uchar *param_2,ushort *param_3)

{
  ushort uVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  int iVar5;
  ulong64 uVar6;
  char *_Dst;
  ushort *puVar7;
  FAutomationTestFramework *pFVar8;
  ushort *puVar9;
  FString local_38;
  
  iVar5 = UE::Core::Private::GetConvertedLength((ushort *)0x0,param_2);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)iVar5 + 9U;
  uVar6 = SUB168(ZEXT816(2) * auVar4,0);
  if (SUB168(ZEXT816(2) * auVar4,8) != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  _Dst = operator_new__(uVar6);
  memset(_Dst,0xcd,((longlong)iVar5 + 9U) * 2);
  puVar9 = (ushort *)(_Dst + 8);
  puVar7 = UE::Core::Private::Convert(puVar9,iVar5 + 1,param_2);
  if (puVar7 != (ushort *)0x0) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  if (puVar7 != (ushort *)(_Dst + (longlong)(iVar5 + 1) * 2 + 8)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s converted length matches");
    (*pcVar3)(pFVar2,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((*_Dst != -0x33) || ((char)*puVar7 != -0x33)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s guard block is preserved");
    (*pcVar3)(pFVar2,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((_Dst[1] != -0x33) || (*(char *)((longlong)puVar7 + 1) != -0x33)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s guard block is preserved");
    (*pcVar3)(pFVar2,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((_Dst[2] != -0x33) || ((char)puVar7[1] != -0x33)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s guard block is preserved");
    (*pcVar3)(pFVar2,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((_Dst[3] != -0x33) || (*(char *)((longlong)puVar7 + 3) != -0x33)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s guard block is preserved");
    (*pcVar3)(pFVar2,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((_Dst[4] != -0x33) || ((char)puVar7[2] != -0x33)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s guard block is preserved");
    (*pcVar3)(pFVar2,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((_Dst[5] != -0x33) || (*(char *)((longlong)puVar7 + 5) != -0x33)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s guard block is preserved");
    (*pcVar3)(pFVar2,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((_Dst[6] != -0x33) || ((char)puVar7[3] != -0x33)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s guard block is preserved");
    (*pcVar3)(pFVar2,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((_Dst[7] != -0x33) || (*(char *)((longlong)puVar7 + 7) != -0x33)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s guard block is preserved");
    (*pcVar3)(pFVar2,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  uVar1 = *param_3;
  do {
    if (uVar1 == 0) {
      iVar5 = -(uint)(*puVar9 != 0);
LAB_141cd9c95:
      if (iVar5 != 0) {
LAB_141cd9c99:
        pFVar8 = FAutomationTestFramework::Get();
        pFVar2 = pFVar8->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_38,L"%s converted string matches");
        (*pcVar3)(pFVar2,&local_38,0);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      operator_delete__(_Dst);
      return;
    }
    uVar1 = *puVar9;
    if (uVar1 == 0) goto LAB_141cd9c99;
    if (*param_3 != uVar1) {
      iVar5 = 1;
      if (*param_3 < uVar1) {
        iVar5 = -1;
      }
      goto LAB_141cd9c95;
    }
    param_3 = param_3 + 1;
    puVar9 = puVar9 + 1;
    uVar1 = *param_3;
  } while( true );
}

// FStringConvertTest @ 141ceb2d0

FStringConvertTest * __thiscall
FStringConvertTest::FStringConvertTest(FStringConvertTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FStringConvertTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::StringConvertTests");
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

// TestBody @ 141d3b310

void __thiscall FStringConvertTest::TestBody(FStringConvertTest *this,FString *param_1)

{
  undefined1 local_res18 [16];
  
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<unsigned_short,char8_t>
            (local_res18,L"UnrealEngineIsGreat UTF-16 -> UTF-8",
             (ushort *)L"𝙐п𝗋𝘦𝕒l 𝑬𝔫ｇ𝒾𝖓𝕖 𝚒ｓ 𝑮𝚛℮𝜶ｔ!",
             &s__________l______);
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<char8_t,unsigned_short>
            (local_res18,L"UnrealEngineIsGreat UTF-8 -> UTF-16",&s__________l______,
             (ushort *)L"𝙐п𝗋𝘦𝕒l 𝑬𝔫ｇ𝒾𝖓𝕖 𝚒ｓ 𝑮𝚛℮𝜶ｔ!");
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<unsigned_short,char8_t>
            (local_res18,L"Internationalization UTF-16 -> UTF-8",
             (ushort *)L"Iñtërnâtiônàlizætiøn",&s_I_t_rn_ti_n_liz_ti_n);
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<char8_t,unsigned_short>
            (local_res18,L"Internationalization UTF-8 -> UTF-16",&s_I_t_rn_ti_n_liz_ti_n,
             (ushort *)L"Iñtërnâtiônàlizætiøn");
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<unsigned_short,char8_t>
            (local_res18,L"WomanEmoji UTF-16 -> UTF-8",(ushort *)L"👩",(uchar *)::s___);
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<char8_t,unsigned_short>
            (local_res18,L"WomanEmoji UTF-8 -> UTF-16",(uchar *)::s___,(ushort *)L"👩");
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<unsigned_short,char8_t>
            (local_res18,L"LanguageProcessingChinese UTF-16 -> UTF-8",(ushort *)L"语言处理",
             (uchar *)s_____);
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<char8_t,unsigned_short>
            (local_res18,L"LanguageProcessingChinese UTF-8 -> UTF-16",(uchar *)s_____,
             (ushort *)L"语言处理");
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<unsigned_short,char8_t>
            (local_res18,L"Double UTF-16 high surrogate",(ushort *)u_q__q,(uchar *)"q??q");
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<unsigned_short,char8_t>
            (local_res18,L"Double UTF-16 low surrogate",(ushort *)u_qiiq,(uchar *)"q??q");
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<unsigned_short,char8_t>
            (local_res18,L"Orphaned UTF-16 high surrogate",(ushort *)u_qiq,(uchar *)"q?q");
  `FStringConvertTest::TestBody'::__l2::<lambda_1>::operator()<unsigned_short,char8_t>
            (local_res18,L"Orphaned UTF-16 low surrogate",(ushort *)u_qiq,(uchar *)"q?q");
  return;
}

