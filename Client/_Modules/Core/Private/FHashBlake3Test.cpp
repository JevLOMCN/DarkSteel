// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bc1bd0

EAutomationTestFlags __thiscall FHashBlake3Test::GetTestFlags(FHashBlake3Test *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bc1be0

bool __thiscall FHashBlake3Test::IsStressTest(FHashBlake3Test *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bc1bf0

uint __thiscall FHashBlake3Test::GetRequiredDeviceNum(FHashBlake3Test *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bc1c00

FString * __thiscall
FHashBlake3Test::GetTestSourceFileName(FHashBlake3Test *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Hash\\Blake3Test.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bc1c30

int __thiscall FHashBlake3Test::GetTestSourceFileLine(FHashBlake3Test *this)

{
  return 10;
}

// GetTests @ 141bc1c40

/* WARNING: Removing unreachable block (ram,0x000141bc1dbe) */

void __thiscall
FHashBlake3Test::GetTests
          (FHashBlake3Test *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bc1de0

bool __thiscall FHashBlake3Test::RunTest(FHashBlake3Test *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bc1e10

FString * __thiscall
FHashBlake3Test::GetBeautifiedTestName(FHashBlake3Test *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FHashBlake3Test @ 141be3100

FHashBlake3Test * __thiscall
FHashBlake3Test::FHashBlake3Test(FHashBlake3Test *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FHashBlake3Test__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][Hash][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Hash::Blake3");
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
  ::FString::FString(&local_18,"[Core][Hash][SmokeFilter]");
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

// TestBody @ 141c14d10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FHashBlake3Test::TestBody(FHashBlake3Test *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  char cVar6;
  ulonglong uVar9;
  int iVar10;
  FAutomationTestFramework *pFVar11;
  char cVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  int iVar15;
  uint *puVar16;
  char *pcVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  short sVar31;
  uint uVar32;
  int iVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  int iVar43;
  int iVar44;
  undefined8 unaff_XMM6_Qb;
  undefined1 auStack_86d8 [32];
  FString local_86b8;
  uint local_86a8 [2];
  wchar_t *local_86a0;
  undefined8 uStack_8698;
  undefined8 local_8690;
  wchar_t *local_8688;
  undefined8 local_8680;
  undefined8 local_8678;
  wchar_t *local_8670;
  undefined8 local_8668;
  undefined8 local_8660;
  wchar_t *local_8658;
  undefined8 local_8650;
  undefined8 local_8648;
  wchar_t *local_8640;
  undefined8 local_8638;
  undefined8 local_8630;
  wchar_t *local_8628;
  undefined8 local_8620;
  undefined8 local_8618;
  wchar_t *local_8610;
  undefined8 local_8608;
  undefined8 local_8600;
  wchar_t *local_85f8;
  undefined8 local_85f0;
  undefined8 local_85e8;
  wchar_t *local_85e0;
  undefined8 local_85d8;
  undefined8 local_85d0;
  wchar_t *local_85c8;
  undefined8 local_85c0;
  undefined8 local_85b8;
  wchar_t *local_85b0;
  undefined8 local_85a8;
  undefined8 local_85a0;
  wchar_t *local_8598;
  undefined8 local_8590;
  undefined8 local_8588;
  wchar_t *local_8580;
  undefined8 local_8578;
  undefined8 local_8570;
  wchar_t *local_8568;
  undefined8 local_8560;
  undefined8 local_8558;
  wchar_t *local_8550;
  undefined8 local_8548;
  undefined8 local_8540;
  wchar_t *local_8538;
  undefined8 local_8530;
  undefined8 local_8528;
  wchar_t *local_8520;
  undefined8 local_8518;
  undefined8 local_8510;
  wchar_t *local_8508;
  undefined8 local_8500;
  undefined8 local_84f8;
  wchar_t *local_84f0;
  undefined8 local_84e8;
  undefined8 local_84e0;
  wchar_t *local_84d8;
  undefined8 local_84d0;
  undefined8 local_84c8;
  wchar_t *local_84c0;
  undefined8 local_84b8;
  uint local_84b0 [2];
  FBlake3Hash *local_84a8;
  undefined4 uStack_84a0;
  undefined4 uStack_849c;
  TArrayView<unsigned_char_const_,int> local_8498;
  TStringBuilderBase<wchar_t> local_8488;
  wchar_t local_8468 [70];
  wchar_t local_83dc [2];
  FBlake3Hash local_83d8;
  FBlake3 local_83b8;
  char local_7c38 [4];
  undefined4 local_7c34 [7935];
  ulonglong local_38;
  undefined8 uStack_10;
  char cVar7;
  char cVar8;
  undefined4 uVar33;
  undefined6 uVar34;
  
  uStack_10 = 0x141c14d32;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_86d8;
  uStack_8698 = 0x40;
  local_86a0 = L"af1349b9f5f9a1a6a0404dea36dcc9499bcb25c9adc112b7cc9a93cae41f3262";
  uVar18 = 0;
  local_86a8[0] = 0;
  local_86a8[1] = 0;
  local_8688 = L"2d3adedff11b61f14c886e35afa036736dcd87a74d27b5c1510225d0f592e213";
  local_8670 = L"10108970eeda3eb932baac1428c7a2163b0e924c9a9e25b35bba72b28f70bd11";
  local_8658 = L"42214739f095a406f3fc83deb889744ac00df831c10daa55189b5d121c855af7";
  local_8640 = L"d00278ae47eb27b34faecf67b4fe263f82d5412916c1ffd97c8cb7fb814b8444";
  local_8628 = L"e776b6028c7cd22a4d0ba182a8bf62205d2ef576467e838ed6f2529b85fba24a";
  local_8610 = L"5f4d72f40d7a5f82b15ca2b2e44b1de3c2ef86c426c95c1af0b6879522563030";
  local_85f8 = L"b98cb0ff3623be03326b373de6b9095218513e64f1ee2edd2525c7ad1e5cffd2";
  local_85e0 = L"7124b49501012f81cc7f11ca069ec9226cecb8a2c850cfe644e327d22d3e1cd3";
  local_85c8 = L"015094013f57a5277b59d8475c0501042c0b642e531b0a1c8f58d2163229e969";
  local_85b0 = L"9b4052b38f1c5fc8b1f9ff7ac7b27cd242487b3d890d15c96a1c25b8aa0fb995";
  local_8598 = L"9cadc15fed8b5d854562b26a9536d9707cadeda9b143978f319ab34230535833";
  local_8580 = L"628bd2cb2004694adaab7bbd778a25df25c47b9d4155a55f8fbd79f2fe154cff";
  local_8568 = L"3e2e5b74e048f3add6d21faab3f83aa44d3b2278afb83b80b3c35164ebeca205";
  local_8550 = L"f1323a8631446cc50536a9f705ee5cb619424d46887f3c376c695b70e0f0507f";
  local_8538 = L"61da957ec2499a95d6b8023e2b0e604ec7f6b50e80a9678b89d2628e99ada77a";
  local_8520 = L"a003fc7a51754a9b3c7fae0367ab3d782dccf28855a03d435f8cfe74605e7817";
  local_8508 = L"aae792484c8efe4f19e2ca7d371d8c467ffb10748d8a5a1ae579948f718a2a63";
  local_84f0 = L"bab6c09cb8ce8cf459261398d2e7aef35700bf488116ceb94a36d0f5f1b7bc3b";
  local_84d8 = L"f875d6646de28985646f34ee13be9a576fd515f76b5b0a26bb324735041ddde4";
  local_8690 = 1;
  local_8680 = 0x40;
  local_8678 = 0x3ff;
  local_8668 = 0x40;
  local_8660 = 0x400;
  local_8650 = 0x40;
  local_8648 = 0x401;
  local_8638 = 0x40;
  local_8630 = 0x800;
  local_8620 = 0x40;
  local_8618 = 0x801;
  local_8608 = 0x40;
  local_8600 = 0xc00;
  local_85f0 = 0x40;
  local_85e8 = 0xc01;
  local_85d8 = 0x40;
  local_85d0 = 0x1000;
  local_85c0 = 0x40;
  local_85b8 = 0x1001;
  local_85a8 = 0x40;
  local_85a0 = 0x1400;
  local_8590 = 0x40;
  local_8588 = 0x1401;
  local_8578 = 0x40;
  local_8570 = 0x1800;
  local_8560 = 0x40;
  local_8558 = 0x1801;
  local_8548 = 0x40;
  local_8540 = 0x1c00;
  local_8530 = 0x40;
  local_8528 = 0x1c01;
  local_8518 = 0x40;
  local_8510 = 0x2000;
  local_8500 = 0x40;
  local_84f8 = 0x2001;
  local_84e8 = 0x40;
  local_84e0 = 0x4000;
  local_84d0 = 0x40;
  local_84c0 = L"62b6960e1a44bcc1eb1a611a8d6235b6b4b78f32e7abc4fb4c6cdcce94895c47";
  local_84c8 = 0x7c00;
  local_84b8 = 0x40;
  if (__isa_available < 2) {
    uVar13 = uVar18;
    pcVar17 = local_7c38;
    do {
      uVar9 = uVar13 / 0xfb;
      cVar12 = (char)uVar13;
      uVar32 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar32;
      *pcVar17 = (char)uVar9 * '\x05' + cVar12;
      pcVar17 = pcVar17 + 1;
    } while (uVar32 < 0x7c00);
  }
  else {
    puVar14 = local_7c34 + 1;
    iVar15 = 8;
    do {
      iVar10 = iVar15 + -8;
      iVar43 = iVar15 + -4;
      uVar32 = iVar10 + (int)__xmm_00000003000000020000000100000000;
      iVar35 = iVar10 + __xmm_00000003000000020000000100000000._4_4_;
      auVar22._4_4_ = iVar35;
      auVar22._0_4_ = uVar32;
      uVar37 = iVar10 + _UNK_150631e08;
      iVar10 = iVar10 + _UNK_150631e0c;
      auVar22._8_4_ = iVar35;
      auVar22._12_4_ = iVar35;
      iVar44 = iVar15 + 4;
      uVar39 = iVar43 + (int)__xmm_00000003000000020000000100000000;
      iVar40 = iVar43 + __xmm_00000003000000020000000100000000._4_4_;
      auVar25._4_4_ = iVar40;
      auVar25._0_4_ = uVar39;
      uVar41 = iVar43 + _UNK_150631e08;
      iVar43 = iVar43 + _UNK_150631e0c;
      auVar24._4_4_ = uVar37;
      auVar24._0_4_ = uVar37;
      auVar24._8_4_ = iVar10;
      auVar24._12_4_ = iVar10;
      auVar23._0_4_ =
           (uint)((ulonglong)uVar32 * (ulonglong)___xmm_828cbfbf828cbfbf828cbfbf828cbfbf >> 0x27);
      auVar23._4_4_ = (uint)((auVar22._8_8_ & 0xffffffff) * (ulonglong)_UNK_1507441a8 >> 0x27);
      auVar23._8_4_ =
           (uint)((ulonglong)uVar37 * (ulonglong)___xmm_828cbfbf828cbfbf828cbfbf828cbfbf >> 0x27);
      auVar23._12_4_ = (uint)((auVar24._8_8_ & 0xffffffff) * (ulonglong)_UNK_1507441a8 >> 0x27);
      auVar24 = pmulld(auVar23,___xmm_000000fb000000fb000000fb000000fb);
      auVar19._4_4_ = uVar41;
      auVar19._0_4_ = uVar41;
      auVar19._8_4_ = iVar43;
      auVar19._12_4_ = iVar43;
      auVar25._8_4_ = iVar40;
      auVar25._12_4_ = iVar40;
      uVar32 = uVar32 - auVar24._0_4_ & ___xmm_000000ff000000ff000000ff000000ff;
      uVar36 = iVar35 - auVar24._4_4_ & _UNK_150631f64;
      uVar37 = uVar37 - auVar24._8_4_ & _UNK_150631f68;
      uVar38 = iVar10 - auVar24._12_4_ & _UNK_150631f6c;
      sVar3 = (short)uVar32;
      cVar12 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar32 - (0xff < sVar3);
      sVar3 = (short)(uVar32 >> 0x10);
      sVar31 = CONCAT11((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar32 >> 0x10) - (0xff < sVar3),
                        cVar12);
      sVar3 = (short)uVar36;
      cVar6 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar36 - (0xff < sVar3);
      sVar3 = (short)(uVar36 >> 0x10);
      uVar33 = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar36 >> 0x10) - (0xff < sVar3),
                        CONCAT12(cVar6,sVar31));
      sVar3 = (short)uVar37;
      cVar7 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar37 - (0xff < sVar3);
      sVar3 = (short)(uVar37 >> 0x10);
      uVar34 = CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar37 >> 0x10) - (0xff < sVar3),
                        CONCAT14(cVar7,uVar33));
      sVar3 = (short)uVar38;
      cVar8 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar38 - (0xff < sVar3);
      sVar5 = (short)(uVar38 >> 0x10);
      sVar3 = (short)((uint)uVar33 >> 0x10);
      sVar4 = (short)((uint6)uVar34 >> 0x20);
      sVar5 = (short)(CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)(uVar38 >> 0x10) -
                               (0xff < sVar5),CONCAT16(cVar8,uVar34)) >> 0x30);
      puVar14[-2] = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * cVar8 - (0xff < sVar5),
                             CONCAT12((0 < sVar4) * (sVar4 < 0x100) * cVar7 - (0xff < sVar4),
                                      CONCAT11((0 < sVar3) * (sVar3 < 0x100) * cVar6 -
                                               (0xff < sVar3),
                                               (0 < sVar31) * (sVar31 < 0x100) * cVar12 -
                                               (0xff < sVar31))));
      auVar26._0_4_ =
           (uint)((ulonglong)uVar39 * (ulonglong)___xmm_828cbfbf828cbfbf828cbfbf828cbfbf >> 0x27);
      auVar26._4_4_ = (uint)((auVar25._8_8_ & 0xffffffff) * (ulonglong)_UNK_1507441a8 >> 0x27);
      auVar26._8_4_ =
           (uint)((ulonglong)uVar41 * (ulonglong)___xmm_828cbfbf828cbfbf828cbfbf828cbfbf >> 0x27);
      auVar26._12_4_ = (uint)((auVar19._8_8_ & 0xffffffff) * (ulonglong)_UNK_1507441a8 >> 0x27);
      auVar24 = pmulld(auVar26,___xmm_000000fb000000fb000000fb000000fb);
      uVar32 = uVar39 - auVar24._0_4_ & ___xmm_000000ff000000ff000000ff000000ff;
      uVar37 = iVar40 - auVar24._4_4_ & _UNK_150631f64;
      uVar39 = uVar41 - auVar24._8_4_ & _UNK_150631f68;
      uVar41 = iVar43 - auVar24._12_4_ & _UNK_150631f6c;
      uVar36 = iVar15 + (int)__xmm_00000003000000020000000100000000;
      iVar43 = iVar15 + __xmm_00000003000000020000000100000000._4_4_;
      auVar27._4_4_ = iVar43;
      auVar27._0_4_ = uVar36;
      uVar38 = iVar15 + _UNK_150631e08;
      iVar10 = iVar15 + _UNK_150631e0c;
      sVar3 = (short)uVar32;
      cVar12 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar32 - (0xff < sVar3);
      sVar3 = (short)(uVar32 >> 0x10);
      sVar31 = CONCAT11((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar32 >> 0x10) - (0xff < sVar3),
                        cVar12);
      sVar3 = (short)uVar37;
      cVar6 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar37 - (0xff < sVar3);
      sVar3 = (short)(uVar37 >> 0x10);
      uVar33 = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar37 >> 0x10) - (0xff < sVar3),
                        CONCAT12(cVar6,sVar31));
      sVar3 = (short)uVar39;
      cVar7 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar39 - (0xff < sVar3);
      sVar3 = (short)(uVar39 >> 0x10);
      uVar34 = CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar39 >> 0x10) - (0xff < sVar3),
                        CONCAT14(cVar7,uVar33));
      sVar3 = (short)uVar41;
      cVar8 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar41 - (0xff < sVar3);
      sVar5 = (short)(uVar41 >> 0x10);
      auVar27._8_4_ = iVar43;
      auVar27._12_4_ = iVar43;
      auVar20._4_4_ = uVar38;
      auVar20._0_4_ = uVar38;
      auVar20._8_4_ = iVar10;
      auVar20._12_4_ = iVar10;
      sVar3 = (short)((uint)uVar33 >> 0x10);
      sVar4 = (short)((uint6)uVar34 >> 0x20);
      sVar5 = (short)(CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)(uVar41 >> 0x10) -
                               (0xff < sVar5),CONCAT16(cVar8,uVar34)) >> 0x30);
      puVar14[-1] = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * cVar8 - (0xff < sVar5),
                             CONCAT12((0 < sVar4) * (sVar4 < 0x100) * cVar7 - (0xff < sVar4),
                                      CONCAT11((0 < sVar3) * (sVar3 < 0x100) * cVar6 -
                                               (0xff < sVar3),
                                               (0 < sVar31) * (sVar31 < 0x100) * cVar12 -
                                               (0xff < sVar31))));
      uVar32 = iVar15 + 8;
      uVar41 = iVar44 + (int)__xmm_00000003000000020000000100000000;
      iVar35 = iVar44 + __xmm_00000003000000020000000100000000._4_4_;
      auVar29._4_4_ = iVar35;
      auVar29._0_4_ = uVar41;
      uVar42 = iVar44 + _UNK_150631e08;
      iVar44 = iVar44 + _UNK_150631e0c;
      auVar28._0_4_ =
           (uint)((ulonglong)uVar36 * (ulonglong)___xmm_828cbfbf828cbfbf828cbfbf828cbfbf >> 0x27);
      auVar28._4_4_ = (uint)((auVar27._8_8_ & 0xffffffff) * (ulonglong)_UNK_1507441a8 >> 0x27);
      auVar28._8_4_ =
           (uint)((ulonglong)uVar38 * (ulonglong)___xmm_828cbfbf828cbfbf828cbfbf828cbfbf >> 0x27);
      auVar28._12_4_ = (uint)((auVar20._8_8_ & 0xffffffff) * (ulonglong)_UNK_1507441a8 >> 0x27);
      auVar21._4_4_ = uVar42;
      auVar21._0_4_ = uVar42;
      auVar21._8_4_ = iVar44;
      auVar21._12_4_ = iVar44;
      auVar24 = pmulld(auVar28,___xmm_000000fb000000fb000000fb000000fb);
      auVar29._8_4_ = iVar35;
      auVar29._12_4_ = iVar35;
      uVar36 = uVar36 - auVar24._0_4_ & ___xmm_000000ff000000ff000000ff000000ff;
      uVar37 = iVar43 - auVar24._4_4_ & _UNK_150631f64;
      uVar38 = uVar38 - auVar24._8_4_ & _UNK_150631f68;
      uVar39 = iVar10 - auVar24._12_4_ & _UNK_150631f6c;
      sVar3 = (short)uVar36;
      cVar12 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar36 - (0xff < sVar3);
      sVar3 = (short)(uVar36 >> 0x10);
      sVar31 = CONCAT11((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar36 >> 0x10) - (0xff < sVar3),
                        cVar12);
      sVar3 = (short)uVar37;
      cVar6 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar37 - (0xff < sVar3);
      sVar3 = (short)(uVar37 >> 0x10);
      uVar33 = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar37 >> 0x10) - (0xff < sVar3),
                        CONCAT12(cVar6,sVar31));
      sVar3 = (short)uVar38;
      cVar7 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar38 - (0xff < sVar3);
      sVar3 = (short)(uVar38 >> 0x10);
      uVar34 = CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar38 >> 0x10) - (0xff < sVar3),
                        CONCAT14(cVar7,uVar33));
      sVar3 = (short)uVar39;
      cVar8 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar39 - (0xff < sVar3);
      sVar5 = (short)(uVar39 >> 0x10);
      sVar3 = (short)((uint)uVar33 >> 0x10);
      sVar4 = (short)((uint6)uVar34 >> 0x20);
      sVar5 = (short)(CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)(uVar39 >> 0x10) -
                               (0xff < sVar5),CONCAT16(cVar8,uVar34)) >> 0x30);
      *puVar14 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * cVar8 - (0xff < sVar5),
                          CONCAT12((0 < sVar4) * (sVar4 < 0x100) * cVar7 - (0xff < sVar4),
                                   CONCAT11((0 < sVar3) * (sVar3 < 0x100) * cVar6 - (0xff < sVar3),
                                            (0 < sVar31) * (sVar31 < 0x100) * cVar12 -
                                            (0xff < sVar31))));
      auVar30._0_4_ =
           (uint)((ulonglong)uVar41 * (ulonglong)___xmm_828cbfbf828cbfbf828cbfbf828cbfbf >> 0x27);
      auVar30._4_4_ = (uint)((auVar29._8_8_ & 0xffffffff) * (ulonglong)_UNK_1507441a8 >> 0x27);
      auVar30._8_4_ =
           (uint)((ulonglong)uVar42 * (ulonglong)___xmm_828cbfbf828cbfbf828cbfbf828cbfbf >> 0x27);
      auVar30._12_4_ = (uint)((auVar21._8_8_ & 0xffffffff) * (ulonglong)_UNK_1507441a8 >> 0x27);
      auVar24 = pmulld(auVar30,___xmm_000000fb000000fb000000fb000000fb);
      uVar36 = uVar41 - auVar24._0_4_ & ___xmm_000000ff000000ff000000ff000000ff;
      uVar37 = iVar35 - auVar24._4_4_ & _UNK_150631f64;
      uVar38 = uVar42 - auVar24._8_4_ & _UNK_150631f68;
      uVar39 = iVar44 - auVar24._12_4_ & _UNK_150631f6c;
      sVar3 = (short)uVar36;
      cVar12 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar36 - (0xff < sVar3);
      sVar3 = (short)(uVar36 >> 0x10);
      sVar31 = CONCAT11((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar36 >> 0x10) - (0xff < sVar3),
                        cVar12);
      sVar3 = (short)uVar37;
      cVar6 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar37 - (0xff < sVar3);
      sVar3 = (short)(uVar37 >> 0x10);
      uVar33 = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar37 >> 0x10) - (0xff < sVar3),
                        CONCAT12(cVar6,sVar31));
      sVar3 = (short)uVar38;
      cVar7 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar38 - (0xff < sVar3);
      sVar3 = (short)(uVar38 >> 0x10);
      uVar34 = CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar38 >> 0x10) - (0xff < sVar3),
                        CONCAT14(cVar7,uVar33));
      sVar3 = (short)uVar39;
      cVar8 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar39 - (0xff < sVar3);
      sVar5 = (short)(uVar39 >> 0x10);
      sVar3 = (short)((uint)uVar33 >> 0x10);
      sVar4 = (short)((uint6)uVar34 >> 0x20);
      sVar5 = (short)(CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)(uVar39 >> 0x10) -
                               (0xff < sVar5),CONCAT16(cVar8,uVar34)) >> 0x30);
      puVar14[1] = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * cVar8 - (0xff < sVar5),
                            CONCAT12((0 < sVar4) * (sVar4 < 0x100) * cVar7 - (0xff < sVar4),
                                     CONCAT11((0 < sVar3) * (sVar3 < 0x100) * cVar6 - (0xff < sVar3)
                                              ,(0 < sVar31) * (sVar31 < 0x100) * cVar12 -
                                               (0xff < sVar31))));
      puVar14 = puVar14 + 4;
      iVar15 = iVar15 + 0x10;
      uStack_10 = unaff_XMM6_Qb;
    } while (uVar32 < 0x7c00);
  }
  FBlake3::Reset(&local_83b8);
  puVar16 = local_86a8;
  do {
    uVar32 = *puVar16;
    if ((uVar32 < (uint)uVar18) || (0x7c00 < uVar32)) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar1 = pFVar11->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_86b8,L"Required condition failed, interrupting test");
      (*pcVar2)(pFVar1,&local_86b8,0);
      if (local_86b8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_86b8.Data.AllocatorInstance.Data);
      return;
    }
    FBlake3::Update(&local_83b8,local_7c38 + uVar18,(ulonglong)(uVar32 - (uint)uVar18));
    local_8488.Base = local_8468;
    local_8488.bIsDynamic = false;
    local_8488.bIsExternal = false;
    local_8488.CurPos = local_8468;
    uVar18 = (ulonglong)uVar32;
    local_8488.End = local_83dc;
    local_84a8 = FBlake3::Finalize(&local_83b8,&local_83d8);
    uStack_84a0 = 0x20;
    local_8498._12_4_ = uStack_849c;
    local_8498.ArrayNum = 0x20;
    local_8498.DataPtr = local_84a8->Hash;
    UE::String::BytesToHexLower(&local_8498,&local_8488);
    iVar43 = (int)*(undefined8 *)(puVar16 + 4);
    iVar15 = (int)((longlong)local_8488.CurPos - (longlong)local_8488.Base >> 1);
    if (iVar15 == iVar43) {
      if ((iVar15 != 0) && (iVar43 != 0)) {
        iVar44 = iVar43;
        if (iVar15 < iVar43) {
          iVar44 = iVar15;
        }
        iVar44 = FGenericPlatformStricmp::Strnicmp
                           (local_8488.Base,*(wchar_t **)(puVar16 + 2),(longlong)iVar44);
        if (iVar44 != 0) goto LAB_141c152b8;
      }
      if (iVar15 != iVar43) goto LAB_141c152b8;
    }
    else {
LAB_141c152b8:
      pFVar11 = FAutomationTestFramework::Get();
      pFVar1 = pFVar11->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_86b8,L"Condition failed");
      (*pcVar2)(pFVar1,&local_86b8);
      if (local_86b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_86b8.Data.AllocatorInstance.Data);
      }
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_8488);
    puVar16 = puVar16 + 6;
    if (puVar16 == local_84b0) {
      return;
    }
  } while( true );
}

