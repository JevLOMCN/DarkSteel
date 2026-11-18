// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// GetTestFlags @ 141c5dd80

EAutomationTestFlags __thiscall FMiscAESTest::GetTestFlags(FMiscAESTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141c5dd90

bool __thiscall FMiscAESTest::IsStressTest(FMiscAESTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141c5dda0

uint __thiscall FMiscAESTest::GetRequiredDeviceNum(FMiscAESTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141c5ddb0

FString * __thiscall
FMiscAESTest::GetTestSourceFileName(FMiscAESTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AESTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141c5dde0

int __thiscall FMiscAESTest::GetTestSourceFileLine(FMiscAESTest *this)

{
  return 0x10;
}

// GetTests @ 141c5ddf0

/* WARNING: Removing unreachable block (ram,0x000141c5df6e) */

void __thiscall
FMiscAESTest::GetTests
          (FMiscAESTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141c5df90

bool __thiscall FMiscAESTest::RunTest(FMiscAESTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141c5dfc0

FString * __thiscall
FMiscAESTest::GetBeautifiedTestName(FMiscAESTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FMiscAESTest @ 141c8d130

FMiscAESTest * __thiscall FMiscAESTest::FMiscAESTest(FMiscAESTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FMiscAESTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][AES][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::AES");
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
  ::FString::FString(&local_18,"[Core][AES][SmokeFilter]");
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

// operator() @ 141c8fb40

void __thiscall
`FMiscAESTest::TestBody'::__l2::<lambda_1>::operator()
          (void *this,TStringView<char> *param_1,TStringView<char> *param_2,
          TStringView<char> *param_3,int param_4)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FAutomationTestFramework *pFVar5;
  ForAnyElementType FVar6;
  int iVar7;
  size_t sVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ForAnyElementType local_1b8;
  int local_1b0;
  int local_1ac;
  ForAnyElementType local_1a8;
  int local_1a0;
  int local_19c;
  ForAnyElementType local_198;
  uint local_190 [2];
  ForAnyElementType local_188;
  int local_180 [2];
  ForAnyElementType local_178;
  int local_170 [2];
  TStringBuilderBase<char> local_168;
  TStringBuilderBase<char> local_148;
  uchar *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  uchar *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  uchar *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FString local_d8;
  FString local_c8;
  TStringView<char8_t> local_b8;
  TStringView<char8_t> local_a8;
  TStringView<char8_t> local_98;
  TArrayView<unsigned_char_const_,int> local_88;
  TArrayView<unsigned_char_const_,int> local_78;
  char *local_68;
  undefined8 uStack_60;
  char *local_58;
  undefined8 uStack_50;
  char *local_48;
  undefined8 uStack_40;
  char *local_38;
  undefined8 uStack_30;
  char *local_28;
  undefined8 uStack_20;
  
  if ((1 < param_1->Size - 0x40U) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Key.Len()/2) == FAES::FAESKey::KeySize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AESTest.cpp"
                         ,0x14,L"key size must be 32 bytes = 256 bits"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((param_2->Size / 2 & 0xfU) != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(PlainText.Len()/2) % FAES::AESBlockSize == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AESTest.cpp"
                         ,0x15,L"plain-text must be multiple of block size"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_3->Size != param_2->Size) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CipherText.Len() == PlainText.Len()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\AESTest.cpp"
                         ,0x16,L"expected cipher-text should be same length as plain-text"), bVar3))
  {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_198.Data = (FScriptContainerElement *)0x0;
  local_190[0] = 0;
  local_190[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0x20,&local_198,(int *)local_190,(int *)(local_190 + 1));
  local_68 = param_1->DataPtr;
  uStack_60 = *(undefined8 *)&param_1->Size;
  local_128 = (uchar *)param_1->DataPtr;
  iStack_120 = (int)*(undefined8 *)&param_1->Size;
  local_b8._12_4_ = uStack_11c;
  local_b8.Size = iStack_120;
  local_b8.DataPtr = local_128;
  UE::String::HexToBytes(&local_b8,(uchar *)local_198.Data);
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170[0] = 0;
  local_170[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,param_2->Size / 2,&local_178,local_170,local_170 + 1);
  local_58 = param_2->DataPtr;
  uStack_50 = *(undefined8 *)&param_2->Size;
  local_118 = (uchar *)param_2->DataPtr;
  iStack_110 = (int)*(undefined8 *)&param_2->Size;
  local_a8._12_4_ = uStack_10c;
  local_a8.Size = iStack_110;
  local_a8.DataPtr = local_118;
  UE::String::HexToBytes(&local_a8,(uchar *)local_178.Data);
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180[0] = 0;
  local_180[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,param_3->Size / 2,&local_188,local_180,local_180 + 1);
  local_48 = param_3->DataPtr;
  uStack_40 = *(undefined8 *)&param_3->Size;
  local_108 = (uchar *)param_3->DataPtr;
  iStack_100 = (int)*(undefined8 *)&param_3->Size;
  local_98._12_4_ = uStack_fc;
  local_98.Size = iStack_100;
  local_98.DataPtr = local_108;
  UE::String::HexToBytes(&local_98,(uchar *)local_188.Data);
  FVar6.Data = local_178.Data;
  sVar8 = (size_t)local_170[0];
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0 = local_170[0];
  if (local_170[0] == 0) {
    local_19c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_170[0],0,&local_1a8,local_170[0],&local_19c);
    memcpy(local_1a8.Data,FVar6.Data,sVar8);
  }
  uVar10 = (ulonglong)(uint)param_4;
  if (0 < param_4) {
    uVar9 = (ulonglong)(uint)param_4;
    do {
      FAES::EncryptData((uchar *)local_1a8.Data,(longlong)local_1a0,(uchar *)local_198.Data,
                        local_190[0]);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  iVar7 = local_1a0;
  local_f8 = local_1a8.Data;
  local_148.End = (char *)0x0;
  local_148.bIsDynamic = false;
  local_148.bIsExternal = false;
  local_148.Base = (char *)0x0;
  local_148.CurPos = (char *)0x0;
  if ((local_1a0 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_f0 = iVar7;
  local_88._12_4_ = uStack_ec;
  local_88.ArrayNum = iVar7;
  local_88.DataPtr = (uchar *)local_f8;
  UE::String::BytesToHex(&local_88,&local_148);
  local_38 = param_3->DataPtr;
  uStack_30 = *(undefined8 *)&param_3->Size;
  iVar7 = (int)local_148.CurPos - (int)local_148.Base;
  iVar11 = (int)*(undefined8 *)&param_3->Size;
  if (iVar7 == iVar11) {
    local_28 = local_38;
    uStack_20 = uStack_30;
    if ((iVar7 != 0) && (iVar11 != 0)) {
      iVar4 = iVar11;
      if (iVar7 < iVar11) {
        iVar4 = iVar7;
      }
      iVar4 = FGenericPlatformStricmp::Strnicmp(local_148.Base,local_38,(longlong)iVar4);
      if (iVar4 != 0) goto LAB_141c90021;
    }
    if (iVar7 == iVar11) {
      TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_148);
      if (local_1a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
      FVar6.Data = local_188.Data;
      sVar8 = (size_t)local_180[0];
      local_1b8.Data = (FScriptContainerElement *)0x0;
      local_1b0 = local_180[0];
      if (local_180[0] == 0) {
        local_1ac = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_180[0],0,&local_1b8,local_180[0],&local_1ac);
        memcpy(local_1b8.Data,FVar6.Data,sVar8);
      }
      if (0 < param_4) {
        do {
          FAES::DecryptData((uchar *)local_1b8.Data,(longlong)local_1b0,(uchar *)local_198.Data,
                            local_190[0]);
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      iVar7 = local_1b0;
      local_e8 = local_1b8.Data;
      local_168.End = (char *)0x0;
      local_168.bIsDynamic = false;
      local_168.bIsExternal = false;
      local_168.Base = (char *)0x0;
      local_168.CurPos = (char *)0x0;
      if ((local_1b0 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iStack_e0 = iVar7;
      local_78._12_4_ = uStack_dc;
      local_78.ArrayNum = iVar7;
      local_78.DataPtr = (uchar *)local_e8;
      UE::String::BytesToHex(&local_78,&local_168);
      iVar7 = (int)local_168.CurPos - (int)local_168.Base;
      iVar11 = (int)*(undefined8 *)&param_2->Size;
      if (iVar7 == iVar11) {
        if ((iVar7 != 0) && (iVar11 != 0)) {
          iVar4 = iVar11;
          if (iVar7 < iVar11) {
            iVar4 = iVar7;
          }
          iVar4 = FGenericPlatformStricmp::Strnicmp(local_168.Base,param_2->DataPtr,(longlong)iVar4)
          ;
          if (iVar4 != 0) goto LAB_141c8ffd4;
        }
        if (iVar7 == iVar11) {
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_168);
          FVar6.Data = local_1b8.Data;
          goto LAB_141c9006c;
        }
      }
LAB_141c8ffd4:
      pFVar5 = FAutomationTestFramework::Get();
      pFVar1 = pFVar5->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_d8,L"Required condition failed, interrupting test");
      (*pcVar2)(pFVar1,&local_d8,0);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_168);
      FVar6.Data = local_1b8.Data;
      goto LAB_141c9006c;
    }
  }
LAB_141c90021:
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_c8,L"Required condition failed, interrupting test");
  (*pcVar2)(pFVar1,&local_c8,0);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_148);
  FVar6.Data = local_1a8.Data;
LAB_141c9006c:
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  if (local_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data);
  }
  return;
}

// TestBody @ 141caa9c0

void __thiscall FMiscAESTest::TestBody(FMiscAESTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  FAutomationTestFramework *pFVar4;
  size_t sVar5;
  AesTestCase *pAVar6;
  undefined1 local_res18 [16];
  TStringView<char> local_68;
  TStringView<char> local_58;
  TStringView<char> local_48;
  TStringView<char> local_38;
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_68,L"Example Vector");
  (*pcVar2)(pFVar1,&local_68,0,0);
  if (local_68.DataPtr != (char *)0x0) {
    FMemory::Free(local_68.DataPtr);
  }
  local_68.Size = 0x20;
  local_58.Size = 0x20;
  local_48.Size = 0x40;
  local_68.DataPtr = "8ea2b7ca516745bfeafc49904b496089";
  local_48.DataPtr = "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f";
  local_58.DataPtr = "00112233445566778899aabbccddeeff";
  `FMiscAESTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,&local_48,&local_58,&local_68,1);
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_48,L"GFSbox Known Answer");
  (*pcVar2)(pFVar1,&local_48,0,0);
  if (local_48.DataPtr != (char *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  pAVar6 = GFSboxCases;
  do {
    local_48.DataPtr = pAVar6->CipherText;
    iVar3 = 0;
    if (local_48.DataPtr != (char *)0x0) {
      sVar5 = strlen(local_48.DataPtr);
      iVar3 = (int)sVar5;
    }
    local_58.DataPtr = pAVar6->PlainText;
    local_48.Size = iVar3;
    iVar3 = 0;
    if (local_58.DataPtr != (char *)0x0) {
      sVar5 = strlen(local_58.DataPtr);
      iVar3 = (int)sVar5;
    }
    local_68.DataPtr = pAVar6->Key;
    local_58.Size = iVar3;
    iVar3 = 0;
    if (local_68.DataPtr != (char *)0x0) {
      sVar5 = strlen(local_68.DataPtr);
      iVar3 = (int)sVar5;
    }
    local_38.DataPtr = local_48.DataPtr;
    local_38.Size = local_48.Size;
    local_38._12_4_ = local_48._12_4_;
    local_68.Size = iVar3;
    local_18.DataPtr = local_68.DataPtr;
    local_18.Size = iVar3;
    local_18._12_4_ = local_68._12_4_;
    local_28.DataPtr = local_58.DataPtr;
    local_28.Size = local_58.Size;
    local_28._12_4_ = local_58._12_4_;
    `FMiscAESTest::TestBody'::__l2::<lambda_1>::operator()
              (local_res18,&local_18,&local_28,&local_38,1);
    pAVar6 = pAVar6 + 1;
  } while (pAVar6 != (AesTestCase *)&DAT_1507508a8);
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_48,L"KeySbox Known Answer");
  (*pcVar2)(pFVar1,&local_48,0,0);
  if (local_48.DataPtr != (char *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  pAVar6 = KeySboxCases;
  do {
    local_48.DataPtr = pAVar6->CipherText;
    iVar3 = 0;
    if (local_48.DataPtr != (char *)0x0) {
      sVar5 = strlen(local_48.DataPtr);
      iVar3 = (int)sVar5;
    }
    local_58.DataPtr = pAVar6->PlainText;
    local_48.Size = iVar3;
    iVar3 = 0;
    if (local_58.DataPtr != (char *)0x0) {
      sVar5 = strlen(local_58.DataPtr);
      iVar3 = (int)sVar5;
    }
    local_68.DataPtr = pAVar6->Key;
    local_58.Size = iVar3;
    iVar3 = 0;
    if (local_68.DataPtr != (char *)0x0) {
      sVar5 = strlen(local_68.DataPtr);
      iVar3 = (int)sVar5;
    }
    local_18.DataPtr = local_48.DataPtr;
    local_18.Size = local_48.Size;
    local_18._12_4_ = local_48._12_4_;
    local_68.Size = iVar3;
    local_38.DataPtr = local_68.DataPtr;
    local_38.Size = iVar3;
    local_38._12_4_ = local_68._12_4_;
    local_28.DataPtr = local_58.DataPtr;
    local_28.Size = local_58.Size;
    local_28._12_4_ = local_58._12_4_;
    `FMiscAESTest::TestBody'::__l2::<lambda_1>::operator()
              (local_res18,&local_38,&local_28,&local_18,1);
    pAVar6 = pAVar6 + 1;
  } while (pAVar6 != (AesTestCase *)
                     "c47b0294dbbbee0fec4757f22ffeee3587ca4730c3d33b691df38bab076bc558");
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_48,L"VarTxt Known Answer");
  (*pcVar2)(pFVar1,&local_48,0,0);
  if (local_48.DataPtr != (char *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  pAVar6 = VarTxtCases;
  do {
    local_48.DataPtr = pAVar6->CipherText;
    iVar3 = 0;
    if (local_48.DataPtr != (char *)0x0) {
      sVar5 = strlen(local_48.DataPtr);
      iVar3 = (int)sVar5;
    }
    local_58.DataPtr = pAVar6->PlainText;
    local_48.Size = iVar3;
    iVar3 = 0;
    if (local_58.DataPtr != (char *)0x0) {
      sVar5 = strlen(local_58.DataPtr);
      iVar3 = (int)sVar5;
    }
    local_68.DataPtr = pAVar6->Key;
    local_58.Size = iVar3;
    iVar3 = 0;
    if (local_68.DataPtr != (char *)0x0) {
      sVar5 = strlen(local_68.DataPtr);
      iVar3 = (int)sVar5;
    }
    local_18.DataPtr = local_48.DataPtr;
    local_18.Size = local_48.Size;
    local_18._12_4_ = local_48._12_4_;
    local_68.Size = iVar3;
    local_38.DataPtr = local_68.DataPtr;
    local_38.Size = iVar3;
    local_38._12_4_ = local_68._12_4_;
    local_28.DataPtr = local_58.DataPtr;
    local_28.Size = local_58.Size;
    local_28._12_4_ = local_58._12_4_;
    `FMiscAESTest::TestBody'::__l2::<lambda_1>::operator()
              (local_res18,&local_38,&local_28,&local_18,1);
    pAVar6 = pAVar6 + 1;
  } while (pAVar6 != (AesTestCase *)"80000000000000000000000000000000");
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_48,L"VarKey Known Answer");
  (*pcVar2)(pFVar1,&local_48,0,0);
  if (local_48.DataPtr != (char *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  pAVar6 = VarKeyCases;
  do {
    local_48.DataPtr = pAVar6->CipherText;
    iVar3 = 0;
    if (local_48.DataPtr != (char *)0x0) {
      sVar5 = strlen(local_48.DataPtr);
      iVar3 = (int)sVar5;
    }
    local_58.DataPtr = pAVar6->PlainText;
    local_48.Size = iVar3;
    iVar3 = 0;
    if (local_58.DataPtr != (char *)0x0) {
      sVar5 = strlen(local_58.DataPtr);
      iVar3 = (int)sVar5;
    }
    local_68.DataPtr = pAVar6->Key;
    local_58.Size = iVar3;
    iVar3 = 0;
    if (local_68.DataPtr != (char *)0x0) {
      sVar5 = strlen(local_68.DataPtr);
      iVar3 = (int)sVar5;
    }
    local_18.DataPtr = local_48.DataPtr;
    local_18.Size = local_48.Size;
    local_18._12_4_ = local_48._12_4_;
    local_68.Size = iVar3;
    local_38.DataPtr = local_68.DataPtr;
    local_38.Size = iVar3;
    local_38._12_4_ = local_68._12_4_;
    local_28.DataPtr = local_58.DataPtr;
    local_28.Size = local_58.Size;
    local_28._12_4_ = local_58._12_4_;
    `FMiscAESTest::TestBody'::__l2::<lambda_1>::operator()
              (local_res18,&local_38,&local_28,&local_18,1);
    pAVar6 = pAVar6 + 1;
  } while (pAVar6 != (AesTestCase *)
                     "8000000000000000000000000000000000000000000000000000000000000000");
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_48,L"Monte Carlo");
  (*pcVar2)(pFVar1,&local_48,0,0);
  if (local_48.DataPtr != (char *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  pAVar6 = MonteCarloCases;
  do {
    local_48.DataPtr = pAVar6->CipherText;
    iVar3 = 0;
    if (local_48.DataPtr != (char *)0x0) {
      sVar5 = strlen(local_48.DataPtr);
      iVar3 = (int)sVar5;
    }
    local_58.DataPtr = pAVar6->PlainText;
    local_48.Size = iVar3;
    iVar3 = 0;
    if (local_58.DataPtr != (char *)0x0) {
      sVar5 = strlen(local_58.DataPtr);
      iVar3 = (int)sVar5;
    }
    local_68.DataPtr = pAVar6->Key;
    local_58.Size = iVar3;
    iVar3 = 0;
    if (local_68.DataPtr != (char *)0x0) {
      sVar5 = strlen(local_68.DataPtr);
      iVar3 = (int)sVar5;
    }
    local_18.DataPtr = local_48.DataPtr;
    local_18.Size = local_48.Size;
    local_18._12_4_ = local_48._12_4_;
    local_68.Size = iVar3;
    local_38.DataPtr = local_68.DataPtr;
    local_38.Size = iVar3;
    local_38._12_4_ = local_68._12_4_;
    local_28.DataPtr = local_58.DataPtr;
    local_28.Size = local_58.Size;
    local_28._12_4_ = local_58._12_4_;
    `FMiscAESTest::TestBody'::__l2::<lambda_1>::operator()
              (local_res18,&local_38,&local_28,&local_18,1000);
    pAVar6 = pAVar6 + 1;
  } while (pAVar6 != (AesTestCase *)
                     "f9e8389f5b80712e3886cc1fa2d28a3b8c9cd88a2d4a54c6aa86ce0fef944be0");
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_48,L"Multi-block Message");
  (*pcVar2)(pFVar1,&local_48,0,0);
  if (local_48.DataPtr != (char *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  pAVar6 = MultiBlockCases;
  do {
    local_48.DataPtr = pAVar6->CipherText;
    iVar3 = 0;
    if (local_48.DataPtr != (char *)0x0) {
      sVar5 = strlen(local_48.DataPtr);
      iVar3 = (int)sVar5;
    }
    local_58.DataPtr = pAVar6->PlainText;
    local_48.Size = iVar3;
    iVar3 = 0;
    if (local_58.DataPtr != (char *)0x0) {
      sVar5 = strlen(local_58.DataPtr);
      iVar3 = (int)sVar5;
    }
    local_68.DataPtr = pAVar6->Key;
    local_58.Size = iVar3;
    iVar3 = 0;
    if (local_68.DataPtr != (char *)0x0) {
      sVar5 = strlen(local_68.DataPtr);
      iVar3 = (int)sVar5;
    }
    local_18.DataPtr = local_48.DataPtr;
    local_18.Size = local_48.Size;
    local_18._12_4_ = local_48._12_4_;
    local_68.Size = iVar3;
    local_38.DataPtr = local_68.DataPtr;
    local_38.Size = iVar3;
    local_38._12_4_ = local_68._12_4_;
    local_28.DataPtr = local_58.DataPtr;
    local_28.Size = local_58.Size;
    local_28._12_4_ = local_58._12_4_;
    `FMiscAESTest::TestBody'::__l2::<lambda_1>::operator()
              (local_res18,&local_38,&local_28,&local_18,1);
    pAVar6 = pAVar6 + 1;
  } while (pAVar6 != (AesTestCase *)
                     "cc22da787f375711c76302bef0979d8eddf842829c2b99ef3dd04e23e54cc24b");
  return;
}

