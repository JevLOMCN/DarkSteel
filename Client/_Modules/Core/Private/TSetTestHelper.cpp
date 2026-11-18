// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// TSetTestHelper<FCompactSetTestResolver> @ 141b12be0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSetTestHelper<FCompactSetTestResolver> * __thiscall
TSetTestHelper<FCompactSetTestResolver>::TSetTestHelper<FCompactSetTestResolver>
          (TSetTestHelper<FCompactSetTestResolver> *this)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  FAutomationTestBase *pFVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auVar7 [16];
  TCompactSet<int,DefaultKeyFuncs<int,0>,TFixedCompactSetAllocator<64>_> *pTVar8;
  float fVar9;
  ForElementType<unsigned_char> FVar10;
  TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator> *pTVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FAutomationTestFramework *pFVar15;
  TSetTestHelper<FCompactSetTestResolver> *pTVar16;
  FString *this_00;
  FSetTestNonCopyableTestData *pFVar17;
  uint *puVar18;
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *pTVar19;
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *pTVar20;
  TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> *pTVar21;
  ulong64 uVar22;
  int *piVar23;
  FString *pFVar24;
  char cVar25;
  sbyte sVar26;
  int iVar27;
  ForAnyElementType FVar28;
  ulonglong uVar29;
  uint uVar30;
  uint *puVar31;
  wchar_t *pwVar32;
  longlong lVar33;
  void *pvVar34;
  ulonglong *puVar35;
  int *piVar36;
  TCompactSet<int,DefaultKeyFuncs<int,0>,TFixedCompactSetAllocator<64>_> *pTVar37;
  void *pvVar38;
  ulonglong uVar39;
  uint uVar40;
  longlong lVar41;
  wchar_t *pwVar42;
  uchar *puVar43;
  ulonglong uVar44;
  int *piVar45;
  uchar *puVar46;
  undefined1 auStack_41998 [32];
  FString *pFStack_41978;
  longlong lStack_41970;
  TCompactSetBase<TSizedDefaultAllocator<32>_> TStack_41968;
  TCompactSetBase<TSizedDefaultAllocator<32>_> TStack_41958;
  TCompactSetBase<TSizedDefaultAllocator<32>_> TStack_41948;
  void *pvStack_41938;
  undefined8 uStack_41930;
  void *pvStack_41928;
  undefined8 uStack_41920;
  void *pvStack_41918;
  undefined8 uStack_41910;
  FIdentityFunctor FStack_41908;
  void *apvStack_41900 [2];
  void *pvStack_418f0;
  undefined8 uStack_418e8;
  uint uStack_418e0;
  undefined1 auStack_418dc [12];
  undefined8 uStack_418d0;
  void *pvStack_418c8;
  undefined8 uStack_418c0;
  void *pvStack_418b8;
  undefined8 uStack_418b0;
  FSetTestNonCopyableTestData FStack_418a8;
  FSetTestNonCopyableTestData FStack_418a4;
  uint auStack_418a0 [2];
  uint auStack_41898 [2];
  uint auStack_41890 [2];
  uint auStack_41888 [2];
  int aiStack_41880 [6];
  TSetTestHelper<FCompactSetTestResolver> *pTStack_41868;
  TCompactSetBase<TSizedDefaultAllocator<32>_> TStack_41860;
  TBaseKeyIterator<0> TStack_41850;
  FCompactSetLayout FStack_41818;
  uint auStack_41810 [2];
  void *apvStack_41808 [2];
  FString FStack_417f8;
  TBaseKeyIterator<1> TStack_417e8;
  FCompactSetLayout FStack_417b0;
  FCompactSetLayout FStack_417a8;
  FCompactSetLayout FStack_417a0;
  FString *pFStack_41798;
  FString FStack_41790;
  FCompactHashTableView FStack_41780;
  FCompactHashTableView FStack_41768;
  FString FStack_41750;
  initializer_list<FString> iStack_41738;
  FString FStack_41728;
  FString FStack_41718;
  FString FStack_41708;
  FString FStack_416f8;
  FString FStack_416e8;
  FString FStack_416d8;
  FString FStack_416c8;
  FString FStack_416b8;
  uint *puStack_416a8;
  undefined4 uStack_416a0;
  undefined4 uStack_4169c;
  FString FStack_41698;
  FString FStack_41688;
  void *apvStack_41678 [2];
  FString FStack_41668;
  void *apvStack_41658 [2];
  void *apvStack_41648 [2];
  FString FStack_41638;
  void *apvStack_41628 [2];
  void *apvStack_41618 [2];
  FString FStack_41608;
  void *apvStack_415f8 [2];
  FString FStack_415e8;
  void *apvStack_415d8 [2];
  void *apvStack_415c8 [2];
  FString FStack_415b8;
  void *apvStack_415a8 [2];
  void *apvStack_41598 [2];
  void *apvStack_41588 [2];
  FString FStack_41578;
  FString FStack_41568;
  FString FStack_41558;
  FString FStack_41548;
  initializer_list<FString> iStack_41538;
  void *apvStack_41528 [2];
  FString FStack_41518;
  FString FStack_41508;
  FString FStack_414f8;
  FString FStack_414e8;
  FString FStack_414d8;
  FString FStack_414c8;
  uint *puStack_414b8;
  undefined4 uStack_414b0;
  undefined4 uStack_414ac;
  FString FStack_414a8;
  FString FStack_41498;
  FString FStack_41488;
  FString FStack_41478;
  FString FStack_41468;
  FString FStack_41458;
  FString FStack_41448;
  FString FStack_41438;
  FString FStack_41428;
  FString FStack_41418;
  FString FStack_41408;
  FString FStack_413f8;
  FString FStack_413e8;
  FString FStack_413d8;
  FString FStack_413c8;
  FString FStack_413b8;
  FString FStack_413a8;
  FString FStack_41398;
  FString FStack_41388;
  FString FStack_41378;
  FString FStack_41368;
  FString FStack_41358;
  FString FStack_41348;
  FString FStack_41338;
  FString FStack_41328;
  FString FStack_41318;
  TArrayView<int_const_,int> TStack_41308;
  undefined1 auStack_412f8 [8];
  undefined1 auStack_412f0 [8];
  undefined1 auStack_412e8 [16];
  TArrayView<int_const_,int> TStack_412d8;
  TBaseKeyIterator<1> TStack_412c8;
  TBaseKeyIterator<1> TStack_41290;
  FString FStack_41258;
  FString FStack_41248;
  FString FStack_41238;
  FString FStack_41228;
  FString FStack_41218;
  FString FStack_41208;
  FString FStack_411f8;
  FString FStack_411e8;
  TCompactSet<int,DefaultKeyFuncs<int,0>,TFixedCompactSetAllocator<64>_> TStack_411d8;
  FString FStack_41048;
  FString FStack_41038;
  FString FStack_41028;
  FString FStack_41018;
  FString aFStack_41008 [3];
  FString FStack_40fd8;
  FString FStack_40fc8;
  FString FStack_40fb8;
  FString FStack_40fa8;
  FString FStack_40f98;
  uint auStack_40f88 [256];
  ulonglong auStack_40b88 [128];
  ulonglong auStack_40788 [33000];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_41998;
  pTStack_41868 = this;
  pFVar15 = FAutomationTestFramework::Get();
  pFVar4 = pFVar15->CurrentTest;
  pcVar5 = *(code **)(pFVar4->_padding_ + 0x50);
  ::FString::FString(&FStack_41318,L"Default Constructor");
  (*pcVar5)(pFVar4,&FStack_41318,0);
  if (FStack_41318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_41318.Data.AllocatorInstance.Data);
  }
  pvVar38 = (void *)0x0;
  TStack_41860.Elements = (ForElementType<unsigned_char>)0x0;
  TStack_41860.NumElements = 0;
  TStack_41860.MaxElements = 0;
  FStack_417a8.Size = 4;
  FStack_417a8.Alignment = 4;
  TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
            (&TStack_41860,0,&FStack_417a8,false);
  if (0 < TStack_41860.MaxElements) {
    puVar31 = (uint *)((ulonglong)(uint)(TStack_41860.MaxElements * 4) +
                      (longlong)TStack_41860.Elements);
    sVar26 = (0xffU < (uint)TStack_41860.MaxElements) + (0xffffU < (uint)TStack_41860.MaxElements);
    memset((void *)((longlong)puVar31 + ((ulonglong)(uint)TStack_41860.MaxElements << sVar26) + 4),
           0xff,(ulonglong)*puVar31 << sVar26);
  }
  if (TStack_41860.Elements != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)TStack_41860.Elements);
  }
  pFVar15 = FAutomationTestFramework::Get();
  pFVar4 = pFVar15->CurrentTest;
  pcVar5 = *(code **)(pFVar4->_padding_ + 0x50);
  ::FString::FString(&FStack_41750,L"Basic Tests");
  (*pcVar5)(pFVar4,&FStack_41750,0,0);
  if (FStack_41750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_41750.Data.AllocatorInstance.Data);
  }
  ::FString::FString(aFStack_41008,L"Zero");
  ::FString::FString(aFStack_41008 + 1,L"One");
  ::FString::FString(aFStack_41008 + 2,L"Two");
  ::FString::FString(&FStack_40fd8,L"Three");
  ::FString::FString(&FStack_41258,aFStack_41008);
  ::FString::FString(&FStack_41248,aFStack_41008 + 1);
  ::FString::FString(&FStack_41238,aFStack_41008 + 2);
  ::FString::FString(&FStack_41228,&FStack_40fd8);
  iStack_41738._First = &FStack_41258;
  iStack_41738._Last = &FStack_41218;
  TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>::
  TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>
            ((TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> *)
             apvStack_41900,&iStack_41738);
  pFVar24 = &FStack_41218;
  lVar33 = 4;
  do {
    pFVar6 = pFVar24[-1].Data.AllocatorInstance.Data;
    pFVar24 = pFVar24 + -1;
    lVar33 = lVar33 + -1;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
  } while (lVar33 != 0);
  if ((int)apvStack_41900[1] != 4) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_41728,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_41728,0);
    if (FStack_41728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41728.Data.AllocatorInstance.Data);
    }
  }
  iVar27 = 0;
  pvVar34 = pvVar38;
  do {
    iVar14 = (int)pvVar34;
    if ((iVar14 < 0) || ((int)apvStack_41900[1] <= iVar14)) {
      lStack_41970 = (longlong)(int)apvStack_41900[1];
      pFStack_41978 = (FString *)CONCAT44(pFStack_41978._4_4_,iVar14);
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidId(Id)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                          ,0x265,L"Array index out of bounds: %d into an array of size %lld");
      if (bVar12) {
        pcVar5 = (code *)swi(3);
        pTVar16 = (TSetTestHelper<FCompactSetTestResolver> *)(*pcVar5)();
        return pTVar16;
      }
    }
    pFVar24 = aFStack_41008 + iVar14;
    bVar12 = ::FString::Equals((FString *)((longlong)iVar14 * 0x10 + (longlong)apvStack_41900[0]),
                               pFVar24,IgnoreCase);
    if (!bVar12) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar4 = pFVar15->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&FStack_41718,L"Condition failed");
      (*pcVar5)(pFVar4,&FStack_41718,0);
      if (FStack_41718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_41718.Data.AllocatorInstance.Data);
      }
    }
    this_00 = TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>::Find
                        ((TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>
                          *)apvStack_41900,pFVar24);
    if (this_00 == (FString *)0x0) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar4 = pFVar15->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&FStack_41708,L"Condition failed");
      (*pcVar5)(pFVar4,&FStack_41708,0);
      FVar28.Data = FStack_41708.Data.AllocatorInstance.Data;
LAB_141b12fd6:
      if (FVar28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar28.Data);
      }
    }
    else {
      bVar12 = ::FString::Equals(this_00,pFVar24,IgnoreCase);
      if (!bVar12) {
        pFVar15 = FAutomationTestFramework::Get();
        pFVar4 = pFVar15->CurrentTest;
        pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
        ::FString::FString(&FStack_416f8,L"Condition failed");
        (*pcVar5)(pFVar4,&FStack_416f8,0);
        FVar28.Data = FStack_416f8.Data.AllocatorInstance.Data;
        goto LAB_141b12fd6;
      }
    }
    pvVar34 = (void *)(ulonglong)(iVar14 + 1U);
  } while (iVar14 + 1U < 4);
  ::FString::FString(&FStack_417f8,L"Invalid");
  if (FStack_417f8.Data.ArrayNum == 0) {
    pwVar42 = L"";
  }
  else {
    iVar27 = FStack_417f8.Data.ArrayNum + -1;
    pwVar42 = (wchar_t *)FStack_417f8.Data.AllocatorInstance.Data;
  }
  uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar27,pwVar42);
  iVar27 = TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>::
           FindIndexByHash<FString>
                     ((TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> *
                      )apvStack_41900,uVar13,&FStack_417f8);
  pvVar34 = pvVar38;
  if (iVar27 != -1) {
    pvVar34 = (void *)((longlong)iVar27 * 0x10 + (longlong)apvStack_41900[0]);
  }
  if (FStack_417f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_417f8.Data.AllocatorInstance.Data);
  }
  if (pvVar34 != (void *)0x0) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_416e8,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_416e8,0);
    if (FStack_416e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_416e8.Data.AllocatorInstance.Data);
    }
  }
  FStack_41790.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_41790.Data.ArrayNum = 0;
  FStack_41790.Data.ArrayMax = 0;
  uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(0,L"");
  iVar27 = TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>::
           FindIndexByHash<FString>
                     ((TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> *
                      )apvStack_41900,uVar13,&FStack_41790);
  if ((iVar27 != -1) &&
     ((void *)((longlong)iVar27 * 0x10 + (longlong)apvStack_41900[0]) != (void *)0x0)) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_416d8,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_416d8,0);
    if (FStack_416d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_416d8.Data.AllocatorInstance.Data);
    }
  }
  TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>::Empty
            ((TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> *)
             apvStack_41900,0);
  if (apvStack_41900[0] != (void *)0x0) {
    FMemory::Free(apvStack_41900[0]);
  }
  pFVar24 = &FStack_40fc8;
  lVar33 = 4;
  do {
    pFVar6 = pFVar24[-1].Data.AllocatorInstance.Data;
    pFVar24 = pFVar24 + -1;
    lVar33 = lVar33 + -1;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
  } while (lVar33 != 0);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar4 = pFVar15->CurrentTest;
  pcVar5 = *(code **)(pFVar4->_padding_ + 0x50);
  ::FString::FString(&FStack_416c8,L"NonCopyable Tests");
  (*pcVar5)(pFVar4,&FStack_416c8,0,0);
  if (FStack_416c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_416c8.Data.AllocatorInstance.Data);
  }
  auStack_418dc._4_8_ = (void *)0x0;
  uStack_418d0 = 0;
  pvVar34 = pvVar38;
  do {
    uVar13 = (uint)pvVar34;
    FStack_418a8.Value = uVar13;
    iVar27 = TCompactSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultCompactSetAllocator>
             ::FindIndexByHash<FSetTestNonCopyableTestData>
                       ((TCompactSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultCompactSetAllocator>
                         *)(auStack_418dc + 4),uVar13,&FStack_418a8);
    if (iVar27 == -1) {
      pFVar17 = TCompactSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultCompactSetAllocator>
                ::AddUninitialized((TCompactSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultCompactSetAllocator>
                                    *)(auStack_418dc + 4),uVar13);
      pFVar17->Value = uVar13;
    }
    else {
      *(uint *)(auStack_418dc._4_8_ + (longlong)iVar27 * 4) = uVar13;
    }
    FStack_418a4.Value = uVar13;
    iVar27 = TCompactSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultCompactSetAllocator>
             ::FindIndexByHash<FSetTestNonCopyableTestData>
                       ((TCompactSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultCompactSetAllocator>
                         *)(auStack_418dc + 4),uVar13,&FStack_418a4);
    if (iVar27 == -1) {
      pFVar17 = TCompactSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultCompactSetAllocator>
                ::AddUninitialized((TCompactSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultCompactSetAllocator>
                                    *)(auStack_418dc + 4),uVar13);
      pFVar17->Value = uVar13;
    }
    else {
      *(uint *)(auStack_418dc._4_8_ + (longlong)iVar27 * 4) = uVar13;
    }
    pvVar34 = (void *)(ulonglong)(uVar13 + 1);
  } while (uVar13 + 1 < 10);
  TCompactSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultCompactSetAllocator>
  ::Empty((TCompactSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultCompactSetAllocator>
           *)(auStack_418dc + 4),0);
  if ((void *)auStack_418dc._4_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_418dc._4_8_);
  }
  pFVar15 = FAutomationTestFramework::Get();
  pFVar4 = pFVar15->CurrentTest;
  pcVar5 = *(code **)(pFVar4->_padding_ + 0x50);
  ::FString::FString(&FStack_416b8,L"Advanced Tests");
  (*pcVar5)(pFVar4,&FStack_416b8,0,0);
  if (FStack_416b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_416b8.Data.AllocatorInstance.Data);
  }
  puVar31 = auStack_40f88;
  iVar27 = 1;
  do {
    uVar40 = 0x9e3779b9U - iVar27 ^ iVar27 << 8;
    uVar13 = -(uVar40 + iVar27) ^ uVar40 >> 0xd;
    uVar30 = (iVar27 - uVar13) - uVar40 ^ uVar13 >> 0xc;
    uVar40 = (uVar40 - uVar30) - uVar13 ^ uVar30 << 0x10;
    uVar13 = (uVar13 - uVar40) - uVar30 ^ uVar40 >> 5;
    uVar30 = (uVar30 - uVar13) - uVar40 ^ uVar13 >> 3;
    uVar40 = (uVar40 - uVar30) - uVar13 ^ uVar30 << 10;
    *puVar31 = (uVar13 - uVar40) - uVar30 ^ uVar40 >> 0xf;
    puVar31 = puVar31 + 1;
    iVar27 = iVar27 + 1;
  } while (puVar31 != auStack_40f88 + 0x100);
  puStack_416a8 = auStack_40f88;
  uStack_416a0 = 0x100;
  TStack_412d8._12_4_ = uStack_4169c;
  TStack_412d8.ArrayNum = 0x100;
  pvStack_41928 = (void *)0x0;
  uStack_41920 = 0;
  TStack_412d8.DataPtr = (int *)puStack_416a8;
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Append
            ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)&pvStack_41928,
             &TStack_412d8);
  pvStack_41938 = (void *)0x0;
  puVar31 = auStack_40f88 + 0x100;
  uStack_41930 = 0;
  do {
    uVar13 = puVar31[-1];
    puVar31 = puVar31 + -1;
    auStack_418a0[0] = uVar13;
    iVar27 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::
             FindIndexByHash<int>
                       ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                        &pvStack_41938,uVar13,(int *)auStack_418a0);
    if (iVar27 == -1) {
      puVar18 = (uint *)TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::
                        AddUninitialized((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>
                                          *)&pvStack_41938,uVar13);
      *puVar18 = uVar13;
    }
    else {
      *(uint *)((longlong)pvStack_41938 + (longlong)iVar27 * 4) = uVar13;
    }
  } while (puVar31 != auStack_40f88);
  puVar31 = auStack_40f88;
  do {
    uStack_418e0 = *puVar31;
    SetTestExists<int,TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>_>
              ((int *)&uStack_418e0,
               (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)&pvStack_41928
              );
    SetTestExists<int,TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>_>
              ((int *)&uStack_418e0,
               (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)&pvStack_41938
              );
    puVar31 = puVar31 + 1;
  } while (puVar31 != auStack_40f88 + 0x100);
  bVar12 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Includes
                     ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                      &pvStack_41928,
                      (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                      &pvStack_41938);
  if (!bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_41698,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_41698,0);
    if (FStack_41698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41698.Data.AllocatorInstance.Data);
    }
  }
  bVar12 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Includes
                     ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                      &pvStack_41938,
                      (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                      &pvStack_41928);
  if (!bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_41688,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_41688,0);
    if (FStack_41688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41688.Data.AllocatorInstance.Data);
    }
  }
  pTVar19 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Difference
                      ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       &pvStack_41928,
                       (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       apvStack_41678,
                       (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       &pvStack_41938);
  iVar27 = *(int *)&pTVar19->field_0x8;
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Empty
            ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)apvStack_41678,0
            );
  if (apvStack_41678[0] != (void *)0x0) {
    FMemory::Free(apvStack_41678[0]);
  }
  if (iVar27 != 0) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_41668,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_41668,0);
    if (FStack_41668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41668.Data.AllocatorInstance.Data);
    }
  }
  pTVar19 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Union
                      ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       &pvStack_41928,
                       (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       apvStack_41648,
                       (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       &pvStack_41938);
  pTVar19 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Difference
                      (pTVar19,(TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>
                                *)apvStack_41658,
                       (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       &pvStack_41938);
  iVar27 = *(int *)&pTVar19->field_0x8;
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Empty
            ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)apvStack_41658,0
            );
  if (apvStack_41658[0] != (void *)0x0) {
    FMemory::Free(apvStack_41658[0]);
  }
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Empty
            ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)apvStack_41648,0
            );
  if (apvStack_41648[0] != (void *)0x0) {
    FMemory::Free(apvStack_41648[0]);
  }
  if (iVar27 != 0) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_41638,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_41638,0);
    if (FStack_41638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41638.Data.AllocatorInstance.Data);
    }
  }
  pTVar19 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Intersect
                      ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       &pvStack_41928,
                       (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       apvStack_41618,
                       (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       &pvStack_41938);
  pTVar19 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Difference
                      (pTVar19,(TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>
                                *)apvStack_41628,
                       (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       &pvStack_41938);
  iVar27 = *(int *)&pTVar19->field_0x8;
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Empty
            ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)apvStack_41628,0
            );
  if (apvStack_41628[0] != (void *)0x0) {
    FMemory::Free(apvStack_41628[0]);
  }
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Empty
            ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)apvStack_41618,0
            );
  if (apvStack_41618[0] != (void *)0x0) {
    FMemory::Free(apvStack_41618[0]);
  }
  if (iVar27 != 0) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_41608,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_41608);
    if (FStack_41608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41608.Data.AllocatorInstance.Data);
    }
  }
  pvStack_418f0 = (void *)0x0;
  puVar31 = auStack_40f88;
  uStack_418e8 = 0;
  pvVar34 = pvVar38;
  do {
    pFStack_41978 = (FString *)puVar31;
    TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::EmplaceByHash<int_const_&>
              ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)&pvStack_418f0
               ,(EInPlace)auStack_412e8,0,(int *)(ulonglong)*puVar31);
    uVar13 = (int)pvVar34 + 1;
    pvVar34 = (void *)(ulonglong)uVar13;
    puVar31 = puVar31 + 1;
  } while (uVar13 < 0x80);
  pTVar19 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Difference
                      ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       &pvStack_41928,
                       (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       apvStack_415f8,
                       (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       &pvStack_418f0);
  iVar27 = *(int *)&pTVar19->field_0x8;
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Empty
            ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)apvStack_415f8,0
            );
  if (apvStack_415f8[0] != (void *)0x0) {
    FMemory::Free(apvStack_415f8[0]);
  }
  if (iVar27 != 0x80) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_415e8,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_415e8,0);
    if (FStack_415e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_415e8.Data.AllocatorInstance.Data);
    }
  }
  pTVar19 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Intersect
                      ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       &pvStack_41928,
                       (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       apvStack_415c8,
                       (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       &pvStack_418f0);
  pTVar19 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Difference
                      (pTVar19,(TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>
                                *)apvStack_415d8,
                       (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       &pvStack_418f0);
  iVar27 = *(int *)&pTVar19->field_0x8;
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Empty
            ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)apvStack_415d8,0
            );
  if (apvStack_415d8[0] != (void *)0x0) {
    FMemory::Free(apvStack_415d8[0]);
  }
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Empty
            ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)apvStack_415c8,0
            );
  if (apvStack_415c8[0] != (void *)0x0) {
    FMemory::Free(apvStack_415c8[0]);
  }
  if (iVar27 != 0) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_415b8,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_415b8,0);
    if (FStack_415b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_415b8.Data.AllocatorInstance.Data);
    }
  }
  pTVar19 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Difference
                      ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       &pvStack_41928,
                       (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       apvStack_41588,
                       (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       &pvStack_418f0);
  pTVar20 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Difference
                      ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       &pvStack_41938,
                       (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       apvStack_41598,
                       (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                       &pvStack_418f0);
  pTVar19 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Difference
                      (pTVar19,(TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>
                                *)apvStack_415a8,pTVar20);
  iVar27 = *(int *)&pTVar19->field_0x8;
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Empty
            ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)apvStack_415a8,0
            );
  if (apvStack_415a8[0] != (void *)0x0) {
    FMemory::Free(apvStack_415a8[0]);
  }
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Empty
            ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)apvStack_41598,0
            );
  if (apvStack_41598[0] != (void *)0x0) {
    FMemory::Free(apvStack_41598[0]);
  }
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Empty
            ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)apvStack_41588,0
            );
  if (apvStack_41588[0] != (void *)0x0) {
    FMemory::Free(apvStack_41588[0]);
  }
  if (iVar27 != 0) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_41578,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_41578,0);
    if (FStack_41578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41578.Data.AllocatorInstance.Data);
    }
  }
  bVar12 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Includes
                     ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                      &pvStack_41928,
                      (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                      &pvStack_418f0);
  if (!bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_41568,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_41568,0);
    if (FStack_41568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41568.Data.AllocatorInstance.Data);
    }
  }
  bVar12 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Includes
                     ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                      &pvStack_418f0,
                      (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                      &pvStack_41928);
  if (bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_41558,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_41558,0);
    if (FStack_41558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41558.Data.AllocatorInstance.Data);
    }
  }
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Empty
            ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)&pvStack_418f0,0
            );
  if (pvStack_418f0 != (void *)0x0) {
    FMemory::Free(pvStack_418f0);
  }
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Empty
            ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)&pvStack_41938,0
            );
  if (pvStack_41938 != (void *)0x0) {
    FMemory::Free(pvStack_41938);
  }
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Empty
            ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)&pvStack_41928,0
            );
  if (pvStack_41928 != (void *)0x0) {
    FMemory::Free(pvStack_41928);
  }
  pFVar15 = FAutomationTestFramework::Get();
  pFVar4 = pFVar15->CurrentTest;
  pcVar5 = *(code **)(pFVar4->_padding_ + 0x50);
  ::FString::FString(&FStack_41548,L"Copy/Move");
  (*pcVar5)(pFVar4,&FStack_41548,0,0);
  if (FStack_41548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_41548.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&FStack_40fc8,L"Zero");
  ::FString::FString(&FStack_40fb8,L"One");
  ::FString::FString(&FStack_40fa8,L"Two");
  ::FString::FString(&FStack_40f98,L"Three");
  ::FString::FString(&FStack_41218,&FStack_40fc8);
  ::FString::FString(&FStack_41208,&FStack_40fb8);
  ::FString::FString(&FStack_411f8,&FStack_40fa8);
  ::FString::FString(&FStack_411e8,&FStack_40f98);
  iStack_41538._First = &FStack_41218;
  iStack_41538._Last = (FString *)&TStack_411d8;
  TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>::
  TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>
            ((TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> *)
             &pvStack_418b8,&iStack_41538);
  pTVar37 = &TStack_411d8;
  lVar33 = 4;
  do {
    pTVar8 = pTVar37 + -1;
    pTVar37 = (TCompactSet<int,DefaultKeyFuncs<int,0>,TFixedCompactSetAllocator<64>_> *)
              &pTVar37[-1].field_0x17c;
    lVar33 = lVar33 + -1;
    if (*(void **)&pTVar8->field_0x17c != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar8->field_0x17c);
    }
  } while (lVar33 != 0);
  apvStack_41808[0] = pvStack_418b8;
  apvStack_41808[1]._0_4_ = (undefined4)uStack_418b0;
  apvStack_41808[1]._4_4_ = uStack_418b0._4_4_;
  uStack_418b0 = 0;
  pvStack_418b8 = (void *)0x0;
  pTVar21 = TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>::Difference
                      ((TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>
                        *)&pvStack_418b8,
                       (TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>
                        *)apvStack_41528,
                       (TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>
                        *)apvStack_41808);
  iVar27 = *(int *)&pTVar21->field_0x8;
  TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>::Empty
            ((TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> *)
             apvStack_41528,0);
  if (apvStack_41528[0] != (void *)0x0) {
    FMemory::Free(apvStack_41528[0]);
  }
  if (iVar27 != 0) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_41518,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_41518,0);
    if (FStack_41518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41518.Data.AllocatorInstance.Data);
    }
  }
  TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>::Empty
            ((TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> *)
             apvStack_41808,0);
  if (apvStack_41808[0] != (void *)0x0) {
    FMemory::Free(apvStack_41808[0]);
  }
  TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>::Empty
            ((TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> *)
             &pvStack_418b8,0);
  if (pvStack_418b8 != (void *)0x0) {
    FMemory::Free(pvStack_418b8);
  }
  puVar31 = auStack_40f88;
  lVar33 = 4;
  do {
    puVar18 = puVar31 + -4;
    puVar31 = puVar31 + -4;
    lVar33 = lVar33 + -1;
    if (*(void **)puVar18 != (void *)0x0) {
      FMemory::Free(*(void **)puVar18);
    }
  } while (lVar33 != 0);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar4 = pFVar15->CurrentTest;
  pcVar5 = *(code **)(pFVar4->_padding_ + 0x50);
  ::FString::FString(&FStack_41508,L"Growth Tests");
  (*pcVar5)(pFVar4,&FStack_41508,0,0);
  if (FStack_41508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_41508.Data.AllocatorInstance.Data);
  }
  fVar9 = __real_39000100;
  puVar35 = auStack_40788;
  pvStack_418c8 = (void *)0x0;
  uStack_418c0 = 0;
  do {
    uVar13 = rand();
    iVar14 = (int)((float)(uVar13 & 0x7fff) * fVar9);
    iVar27 = 3;
    if (iVar14 < 3) {
      iVar27 = iVar14;
    }
    uVar13 = (int)pvVar38 + iVar27 + 1;
    pvVar38 = (void *)(ulonglong)uVar13;
    *(uint *)puVar35 = uVar13;
    puVar35 = (ulonglong *)((longlong)puVar35 + 4);
  } while (puVar35 != local_48);
  Algo::RandomShuffle<int_(&)[66000]>((int (*) [66000])auStack_40788);
  puVar35 = auStack_40788;
  do {
    uVar13 = (uint)*puVar35;
    auStack_41898[0] = uVar13;
    iVar27 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::
             FindIndexByHash<int>
                       ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                        &pvStack_418c8,uVar13,(int *)auStack_41898);
    if (iVar27 != -1) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar4 = pFVar15->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&FStack_414f8,L"Condition failed");
      (*pcVar5)(pFVar4,&FStack_414f8,0);
      if (FStack_414f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_414f8.Data.AllocatorInstance.Data);
      }
    }
    auStack_41890[0] = uVar13;
    iVar27 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::
             FindIndexByHash<int>
                       ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                        &pvStack_418c8,uVar13,(int *)auStack_41890);
    if (iVar27 == -1) {
      puVar31 = (uint *)TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::
                        AddUninitialized((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>
                                          *)&pvStack_418c8,uVar13);
      *puVar31 = uVar13;
    }
    else {
      *(uint *)((longlong)pvStack_418c8 + (longlong)iVar27 * 4) = uVar13;
    }
    auStack_41888[0] = uVar13;
    iVar27 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::
             FindIndexByHash<int>
                       ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                        &pvStack_418c8,uVar13,(int *)auStack_41888);
    if (iVar27 == -1) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar4 = pFVar15->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&FStack_414e8,L"Condition failed");
      (*pcVar5)(pFVar4,&FStack_414e8,0);
      if (FStack_414e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_414e8.Data.AllocatorInstance.Data);
      }
    }
    puVar35 = (ulonglong *)((longlong)puVar35 + 4);
  } while (puVar35 != local_48);
  puVar35 = auStack_40788;
  do {
    auStack_41810[0] = (uint)*puVar35;
    iVar27 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::
             FindIndexByHash<int>
                       ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                        &pvStack_418c8,auStack_41810[0],(int *)auStack_41810);
    if (iVar27 == -1) {
      pFVar15 = FAutomationTestFramework::Get();
      pFVar4 = pFVar15->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&FStack_414d8,L"Condition failed");
      (*pcVar5)(pFVar4,&FStack_414d8,0);
      if (FStack_414d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_414d8.Data.AllocatorInstance.Data);
      }
    }
    puVar35 = (ulonglong *)((longlong)puVar35 + 4);
  } while (puVar35 != local_48);
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Empty
            ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)&pvStack_418c8,0
            );
  if (pvStack_418c8 != (void *)0x0) {
    FMemory::Free(pvStack_418c8);
  }
  pFVar15 = FAutomationTestFramework::Get();
  pFVar4 = pFVar15->CurrentTest;
  pcVar5 = *(code **)(pFVar4->_padding_ + 0x50);
  ::FString::FString(&FStack_414c8,L"Iteration");
  (*pcVar5)(pFVar4,&FStack_414c8,0,0);
  if (FStack_414c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_414c8.Data.AllocatorInstance.Data);
  }
  puVar35 = (ulonglong *)(auStack_40f88 + 0x100);
  iVar27 = 1;
  do {
    uVar40 = 0x9e3779b9U - iVar27 ^ iVar27 << 8;
    uVar13 = -(iVar27 + uVar40) ^ uVar40 >> 0xd;
    uVar30 = (iVar27 - uVar13) - uVar40 ^ uVar13 >> 0xc;
    uVar40 = (uVar40 - uVar30) - uVar13 ^ uVar30 << 0x10;
    uVar13 = (uVar13 - uVar40) - uVar30 ^ uVar40 >> 5;
    uVar30 = (uVar30 - uVar13) - uVar40 ^ uVar13 >> 3;
    uVar40 = (uVar40 - uVar30) - uVar13 ^ uVar30 << 10;
    *(uint *)puVar35 = (uVar13 - uVar40) - uVar30 ^ uVar40 >> 0xf;
    puVar35 = (ulonglong *)((longlong)puVar35 + 4);
    iVar27 = iVar27 + 1;
  } while (puVar35 != auStack_40788);
  puStack_414b8 = auStack_40f88 + 0x100;
  uStack_414b0 = 0x100;
  TStack_41308._12_4_ = uStack_414ac;
  TStack_41308.ArrayNum = 0x100;
  uVar29 = 0;
  pvStack_41918 = (void *)0x0;
  uStack_41910 = 0;
  TStack_41308.DataPtr = (int *)puStack_414b8;
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Append
            ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)&pvStack_41918,
             &TStack_41308);
  uVar44 = uVar29;
  if (0 < (int)uStack_41910) {
    do {
      iVar27 = (int)uVar29;
      if ((iVar27 < 0) || ((int)uStack_41910 <= iVar27)) {
        lStack_41970 = (longlong)(int)uStack_41910;
        pFStack_41978 = (FString *)CONCAT44(pFStack_41978._4_4_,iVar27);
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidId(Id)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                            ,0x265,L"Array index out of bounds: %d into an array of size %lld");
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          pTVar16 = (TSetTestHelper<FCompactSetTestResolver> *)(*pcVar5)();
          return pTVar16;
        }
      }
      if (*(int *)((longlong)auStack_40f88 + uVar44 + 0x400) !=
          *(int *)(uVar44 + (longlong)pvStack_41918)) {
        pFVar15 = FAutomationTestFramework::Get();
        pFVar4 = pFVar15->CurrentTest;
        pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
        ::FString::FString(&FStack_414a8,L"Condition failed");
        (*pcVar5)(pFVar4);
        if (FStack_414a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_414a8.Data.AllocatorInstance.Data);
        }
      }
      uVar29 = (ulonglong)(iVar27 + 1U);
      uVar44 = uVar44 + 4;
    } while ((int)(iVar27 + 1U) < (int)uStack_41910);
  }
  piVar45 = (int *)0x0;
  iVar27 = (int)uStack_41910;
  piVar23 = piVar45;
  piVar36 = piVar45;
  if (((int)uStack_41910 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= InitialNum",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                          ,0x66,L""), piVar23 = (int *)0x0, piVar36 = (int *)0x0, bVar12)) {
    pcVar5 = (code *)swi(3);
    pTVar16 = (TSetTestHelper<FCompactSetTestResolver> *)(*pcVar5)();
    return pTVar16;
  }
  while( true ) {
    iVar14 = (int)piVar23;
    if ((iVar14 < 0) || ((int)uStack_41910 <= iVar14)) break;
    if (((ulonglong)piVar36 & 1) != 0) {
      TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::RemoveByIndexAndHash<0>
                ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                 &pvStack_41918,iVar14,*(uint *)((longlong)pvStack_41918 + (longlong)iVar14 * 4));
      iVar14 = iVar14 + -1;
      iVar27 = iVar27 + -1;
    }
    if ((int)uStack_41910 < iVar27) {
      lStack_41970 = CONCAT44(lStack_41970._4_4_,(int)uStack_41910);
      pFStack_41978 = (FString *)CONCAT44(pFStack_41978._4_4_,iVar27);
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("SetNum >= InitialNum",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                          ,0x78,
                          L"Sets/Maps should never have elements removed during iteration outside of Iterator.RemoveCurrent(). InitialNum %d CurrentNum %d"
                         );
      if (bVar12) {
        pcVar5 = (code *)swi(3);
        pTVar16 = (TSetTestHelper<FCompactSetTestResolver> *)(*pcVar5)();
        return pTVar16;
      }
    }
    piVar23 = (int *)(ulonglong)(iVar14 + 1);
    piVar36 = (int *)(ulonglong)((int)piVar36 + 1);
  }
  if ((int)uStack_41910 != 0x80) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_41498,L"Condition failed");
    (*pcVar5)(pFVar4);
    if (FStack_41498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41498.Data.AllocatorInstance.Data);
    }
  }
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Empty
            ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)&pvStack_41918,0
            );
  if (pvStack_41918 != (void *)0x0) {
    FMemory::Free(pvStack_41918);
  }
  pFVar15 = FAutomationTestFramework::Get();
  pFVar4 = pFVar15->CurrentTest;
  pcVar5 = *(code **)(pFVar4->_padding_ + 0x50);
  ::FString::FString(&FStack_41488,L"Fixed Allocator");
  (*pcVar5)(pFVar4,&FStack_41488,0,0);
  if (FStack_41488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_41488.Data.AllocatorInstance.Data);
  }
  TStack_411d8._388_8_ = 0;
  auStack_418dc._0_4_ = 0;
  piVar23 = piVar45;
  do {
    pFStack_41978 = (FString *)auStack_418dc;
    TCompactSet<int,DefaultKeyFuncs<int,0>,TFixedCompactSetAllocator<64>_>::
    EmplaceByHash<int_const_&>(&TStack_411d8,(EInPlace)auStack_412f0,0,piVar23);
    auStack_418dc._0_4_ = (int)piVar23 + 1;
    piVar23 = (int *)(ulonglong)(uint)auStack_418dc._0_4_;
  } while ((int)auStack_418dc._0_4_ < 0x40);
  TCompactSet<int,DefaultKeyFuncs<int,0>,TFixedCompactSetAllocator<64>_>::Empty(&TStack_411d8,0);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar4 = pFVar15->CurrentTest;
  pcVar5 = *(code **)(pFVar4->_padding_ + 0x50);
  ::FString::FString(&FStack_41478,L"Duplicate Entry Behavior");
  (*pcVar5)(pFVar4,&FStack_41478,0,0);
  if (FStack_41478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_41478.Data.AllocatorInstance.Data);
  }
  TStack_41968.Elements = (ForElementType<unsigned_char>)0x0;
  TStack_41968.NumElements = 0;
  TStack_41968.MaxElements = 0;
  uVar22 = FMemory::QuantizeSize(0xd,4);
  uVar13 = (uint)uVar22;
  lVar33 = 0x20;
  if ((int)uVar13 < 0xd) {
    uVar13 = 0x7fffffff;
  }
  if ((ulonglong)uVar13 == 0xd) {
    uVar13 = 1;
  }
  else {
    uVar44 = (ulonglong)uVar13 - 8;
    uVar29 = uVar44 / 5;
    uVar44 = uVar44 - uVar29 >> 2;
    if ((int)uVar29 < (int)uVar44) {
      uVar44 = uVar29;
    }
    uVar13 = (uint)uVar44;
    if ((int)uVar13 < 2) {
      uVar13 = 1;
    }
    else if (7 < uVar13) {
      uVar30 = FGenericPlatformMath::CountLeadingZeros((uint)((uVar44 & 0xffffffff) >> 1));
      uVar30 = 1 << (-(char)uVar30 & 0x1fU);
      if (4 < uVar30) {
        uVar13 = uVar30 - 1;
      }
    }
  }
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Reserve
            ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)&TStack_41968,
             uVar13);
  FStack_41768._16_4_ = TStack_41968.MaxElements;
  FStack_41768._0_8_ =
       (longlong)TStack_41968.Elements + 4 + (ulonglong)(uint)(TStack_41968.MaxElements * 4);
  FStack_41768._8_8_ =
       ((ulonglong)(uint)TStack_41968.MaxElements <<
       (0xffU < (uint)TStack_41968.MaxElements) + (0xffffU < (uint)TStack_41968.MaxElements)) +
       FStack_41768._0_8_;
  FStack_41768._20_4_ =
       *(undefined4 *)
        ((ulonglong)(uint)(TStack_41968.MaxElements * 4) + (longlong)TStack_41968.Elements);
  FCompactHashTableView::Add(&FStack_41768,TStack_41968.NumElements,0);
  uVar13 = TStack_41968.NumElements + 1;
  *(undefined4 *)((longlong)TStack_41968.Elements + (longlong)TStack_41968.NumElements * 4) = 0;
  TStack_41968.NumElements = uVar13;
  if (uVar13 == 0) {
LAB_141b143f0:
    uVar44 = (ulonglong)(uint)TStack_41968.MaxElements;
  }
  else {
    uVar44 = (ulonglong)TStack_41968.MaxElements;
    iVar27 = *(int *)((ulonglong)(uint)(TStack_41968.MaxElements * 4) +
                     (longlong)TStack_41968.Elements);
    lVar41 = (longlong)TStack_41968.Elements + 4 + (ulonglong)(uint)(TStack_41968.MaxElements * 4);
    cVar25 = '\0';
    if (0xffff < (uint)TStack_41968.MaxElements) {
      cVar25 = '\x02';
    }
    cVar25 = (0xffU < (uint)TStack_41968.MaxElements) + '\x01' + cVar25;
    if (cVar25 == '\x01') {
      for (bVar1 = *(byte *)(uVar44 + (ulonglong)(iVar27 - 1U & 1) + lVar41); bVar1 != 0xff;
          bVar1 = *(byte *)((ulonglong)bVar1 + lVar41)) {
        if (*(int *)((longlong)TStack_41968.Elements + (ulonglong)bVar1 * 4) == 1) {
          uVar13 = (uint)bVar1;
          goto LAB_141b144b1;
        }
      }
    }
    else if (cVar25 == '\x02') {
      for (uVar2 = *(ushort *)(lVar41 + ((iVar27 - 1U & 1) + uVar44) * 2); uVar2 != 0xffff;
          uVar2 = *(ushort *)(lVar41 + (ulonglong)uVar2 * 2)) {
        if (*(int *)((longlong)TStack_41968.Elements + (ulonglong)uVar2 * 4) == 1) {
          uVar13 = (uint)uVar2;
          goto LAB_141b144b1;
        }
      }
    }
    else {
      if (cVar25 != '\x04') {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                            ,0x5cc,L"");
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          pTVar16 = (TSetTestHelper<FCompactSetTestResolver> *)(*pcVar5)();
          return pTVar16;
        }
        goto LAB_141b143f0;
      }
      for (uVar13 = *(uint *)(lVar41 + ((iVar27 - 1U & 1) + uVar44) * 4); uVar13 != 0xffffffff;
          uVar13 = *(uint *)(lVar41 + (ulonglong)uVar13 * 4)) {
        if (*(int *)((longlong)TStack_41968.Elements + (ulonglong)uVar13 * 4) == 1)
        goto LAB_141b144b1;
      }
    }
  }
LAB_141b143f5:
  FStack_41780._16_4_ = SUB84(uVar44,0);
  if (TStack_41968.NumElements == FStack_41780._16_4_) {
    uVar13 = TStack_41968.NumElements + 1;
    if (0 < (int)FStack_41780._16_4_) {
      piVar45 = (int *)((ulonglong)(uint)(FStack_41780._16_4_ * 4) + 4 +
                       ((ulonglong)
                        *(uint *)((ulonglong)(uint)(FStack_41780._16_4_ * 4) +
                                 (longlong)TStack_41968.Elements) + (uVar44 & 0xffffffff) <<
                       (0xff < (uint)FStack_41780._16_4_) + (0xffff < (uint)FStack_41780._16_4_)));
    }
    if ((int)uVar13 < 1) {
      uVar44 = 0;
    }
    else if (uVar13 < 8) {
      uVar44 = 4;
    }
    else {
      uVar30 = FGenericPlatformMath::CountLeadingZeros(uVar13 >> 1);
      uVar44 = (ulonglong)(uint)(1 << (-(char)uVar30 & 0x1fU));
    }
    if ((int)uVar13 < 1) {
      lVar41 = 0;
    }
    else {
      lVar41 = (ulonglong)(uVar13 * 4) + 4 +
               (uVar13 + uVar44 << (0xff < uVar13) + (0xffff < uVar13));
    }
    uVar29 = (ulonglong)(int)lVar41;
    if ((int)piVar45 == 0) {
      uVar22 = 4;
      if (4 < uVar29) {
        uVar22 = uVar29;
      }
    }
    else {
      uVar22 = (uVar29 * 3 >> 3) + 0x10 + uVar29;
    }
    uVar22 = FMemory::QuantizeSize(uVar22,4);
    iVar27 = (int)uVar22;
    if (iVar27 < (int)lVar41) {
      iVar27 = 0x7fffffff;
    }
    if (iVar27 != lVar41) {
      sVar26 = (0xffff < uVar13) + (0xff < uVar13);
      uVar29 = ((longlong)iVar27 - (uVar44 << sVar26)) - 4;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar29;
      auVar7 = auVar7 / ZEXT416((uint)(0xffff < uVar13) * 2 + 5 + (uint)(0xff < uVar13));
      uVar29 = uVar29 - (auVar7._0_8_ << sVar26) >> 2;
      uVar30 = auVar7._0_4_;
      uVar39 = uVar29 & 0xffffffff;
      if ((int)uVar30 < (int)uVar29) {
        uVar39 = (ulonglong)uVar30;
      }
      uVar30 = (uint)uVar39;
      if ((int)uVar13 < (int)uVar30) {
        if (uVar30 == 0) {
          uVar40 = 0;
        }
        else if (uVar30 < 8) {
          uVar40 = 4;
        }
        else {
          uVar13 = FGenericPlatformMath::CountLeadingZeros((uint)(uVar39 >> 1));
          uVar40 = 1 << (-(char)uVar13 & 0x1fU);
        }
        uVar13 = uVar30;
        if ((uint)uVar44 < uVar40) {
          uVar13 = uVar40 - 1;
        }
      }
    }
    TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Reserve
              ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)&TStack_41968,
               uVar13);
    FStack_41780._16_4_ = TStack_41968.MaxElements;
  }
  FStack_41780._0_8_ =
       (longlong)TStack_41968.Elements + 4 + (ulonglong)(uint)(FStack_41780._16_4_ * 4);
  FStack_41780._8_8_ =
       ((ulonglong)(uint)FStack_41780._16_4_ <<
       (0xff < (uint)FStack_41780._16_4_) + (0xffff < (uint)FStack_41780._16_4_)) +
       FStack_41780._0_8_;
  FStack_41780._20_4_ =
       *(undefined4 *)((ulonglong)(uint)(FStack_41780._16_4_ * 4) + (longlong)TStack_41968.Elements)
  ;
  FCompactHashTableView::Add(&FStack_41780,TStack_41968.NumElements,1);
  *(undefined4 *)((longlong)TStack_41968.Elements + (longlong)TStack_41968.NumElements * 4) = 1;
  TStack_41968.NumElements = TStack_41968.NumElements + 1;
LAB_141b146cc:
  uVar44 = 0;
  aiStack_41880[0] = 2;
  iVar27 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::FindIndexByHash<int>
                     ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                      &TStack_41968,2,aiStack_41880);
  if (iVar27 == -1) {
    piVar23 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::AddUninitialized
                        ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                         &TStack_41968,2);
    *piVar23 = 2;
  }
  else {
    *(undefined4 *)((longlong)TStack_41968.Elements + (longlong)iVar27 * 4) = 2;
  }
  aiStack_41880[1] = 3;
  iVar27 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::FindIndexByHash<int>
                     ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                      &TStack_41968,3,aiStack_41880 + 1);
  if (iVar27 == -1) {
    piVar23 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::AddUninitialized
                        ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                         &TStack_41968,3);
    *piVar23 = 3;
  }
  else {
    *(undefined4 *)((longlong)TStack_41968.Elements + (longlong)iVar27 * 4) = 3;
  }
  aiStack_41880[2] = 2;
  iVar27 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::FindIndexByHash<int>
                     ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                      &TStack_41968,2,aiStack_41880 + 2);
  if (iVar27 == -1) {
    piVar23 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::AddUninitialized
                        ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                         &TStack_41968,2);
    *piVar23 = 2;
  }
  else {
    *(undefined4 *)((longlong)TStack_41968.Elements + (longlong)iVar27 * 4) = 2;
  }
  uVar29 = uVar44;
  if (0 < TStack_41968.NumElements) {
    do {
      iVar27 = (int)uVar44;
      if ((iVar27 < 0) || (TStack_41968.NumElements <= iVar27)) {
        lStack_41970 = (longlong)TStack_41968.NumElements;
        pFStack_41978 = (FString *)CONCAT44(pFStack_41978._4_4_,iVar27);
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidId(Id)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                            ,0x265,L"Array index out of bounds: %d into an array of size %lld");
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          pTVar16 = (TSetTestHelper<FCompactSetTestResolver> *)(*pcVar5)();
          return pTVar16;
        }
      }
      if (*(int *)(uVar29 + (longlong)TStack_41968.Elements) != iVar27) {
        pFVar15 = FAutomationTestFramework::Get();
        pFVar4 = pFVar15->CurrentTest;
        pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
        ::FString::FString(&FStack_41468,L"Condition failed");
        (*pcVar5)(pFVar4,&FStack_41468,0);
        if (FStack_41468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_41468.Data.AllocatorInstance.Data);
        }
      }
      uVar44 = (ulonglong)(iVar27 + 1U);
      uVar29 = uVar29 + 4;
    } while ((int)(iVar27 + 1U) < TStack_41968.NumElements);
  }
  iVar27 = 0;
  TStack_41968.NumElements = 0;
  FStack_417b0.Size = 4;
  FStack_417b0.Alignment = 4;
  TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
            (&TStack_41968,0,&FStack_417b0,false);
  if (0 < TStack_41968.MaxElements) {
    puVar31 = (uint *)((ulonglong)(uint)(TStack_41968.MaxElements * 4) +
                      (longlong)TStack_41968.Elements);
    sVar26 = (0xffU < (uint)TStack_41968.MaxElements) + (0xffffU < (uint)TStack_41968.MaxElements);
    memset((void *)((longlong)puVar31 + ((ulonglong)(uint)TStack_41968.MaxElements << sVar26) + 4),
           0xff,(ulonglong)*puVar31 << sVar26);
  }
  if (TStack_41968.Elements != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)TStack_41968.Elements);
  }
  pFVar15 = FAutomationTestFramework::Get();
  pFVar4 = pFVar15->CurrentTest;
  pcVar5 = *(code **)(pFVar4->_padding_ + 0x50);
  ::FString::FString(&FStack_41458,L"Duplicate Support");
  (*pcVar5)(pFVar4,&FStack_41458,0,0);
  if (FStack_41458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_41458.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&FStack_41048,L"Zero");
  ::FString::FString(&FStack_41038,L"One");
  ::FString::FString(&FStack_41028,L"Two");
  ::FString::FString(&FStack_41018,L"Three");
  TStack_41948.Elements = (ForElementType<unsigned_char>)0x0;
  TStack_41948.NumElements = 0;
  TStack_41948.MaxElements = 0;
  do {
    pFVar24 = &FStack_41048;
    do {
      iVar14 = (pFVar24->Data).ArrayNum;
      if (iVar14 == 0) {
        pwVar42 = L"";
        iVar14 = 0;
      }
      else {
        pwVar42 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
        iVar14 = iVar14 + -1;
      }
      uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar42);
      pFStack_41978 = pFVar24;
      TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::
      EmplaceByHash<FString_const_&>
                ((TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator> *)
                 &TStack_41948,(EInPlace)auStack_412f8,0,(FString *)(ulonglong)uVar13);
      pFVar24 = pFVar24 + 1;
    } while (pFVar24 != aFStack_41008);
    lVar33 = lVar33 + -1;
  } while (lVar33 != 0);
  if (TStack_41948.NumElements != 0x80) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_41448,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_41448,0);
    if (FStack_41448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41448.Data.AllocatorInstance.Data);
    }
  }
  TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::TBaseKeyIterator<1>::
  TBaseKeyIterator<1>(&TStack_417e8,
                      (TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator> *
                      )&TStack_41948,&FStack_41038);
  uVar13 = TStack_417e8.Index;
  uVar30 = TStack_417e8.NextIndex;
  if (TStack_417e8.Index == 0xffffffff) {
LAB_141b14c91:
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_41418,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_41418,0);
    if (FStack_41418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41418.Data.AllocatorInstance.Data);
    }
  }
  else {
    do {
      uVar40 = uVar13 & 0x80000003;
      if ((int)uVar40 < 0) {
        uVar40 = (uVar40 - 1 | 0xfffffffc) + 1;
      }
      if (uVar40 != 1) {
        pFVar15 = FAutomationTestFramework::Get();
        pFVar4 = pFVar15->CurrentTest;
        pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
        ::FString::FString(&FStack_41438,L"Condition failed");
        (*pcVar5)(pFVar4,&FStack_41438,0);
        if (FStack_41438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_41438.Data.AllocatorInstance.Data);
        }
      }
      pTVar11 = TStack_417e8.Set;
      if (((int)uVar13 < 0) || (*(int *)&(TStack_417e8.Set)->field_0x8 <= (int)uVar13)) {
        lStack_41970 = (longlong)*(int *)&(TStack_417e8.Set)->field_0x8;
        pFStack_41978 = (FString *)CONCAT44(pFStack_41978._4_4_,uVar13);
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidId(Id)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                            ,0x265,L"Array index out of bounds: %d into an array of size %lld");
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          pTVar16 = (TSetTestHelper<FCompactSetTestResolver> *)(*pcVar5)();
          return pTVar16;
        }
      }
      iVar14 = *(int *)(*(longlong *)pTVar11 + 8 + (longlong)(int)uVar13 * 0x10);
      if (iVar14 == FStack_41038.Data.ArrayNum) {
        if (1 < iVar14) {
          iVar14 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)(*(longlong *)pTVar11 + (longlong)(int)uVar13 * 0x10),
                              (wchar_t *)FStack_41038.Data.AllocatorInstance.Data);
          bVar12 = iVar14 == 0;
          goto LAB_141b14b10;
        }
      }
      else {
        bVar12 = iVar14 + FStack_41038.Data.ArrayNum == 1;
LAB_141b14b10:
        if (!bVar12) {
          pFVar15 = FAutomationTestFramework::Get();
          pFVar4 = pFVar15->CurrentTest;
          pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
          ::FString::FString(&FStack_41428,L"Condition failed");
          (*pcVar5)(pFVar4,&FStack_41428);
          if (FStack_41428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_41428.Data.AllocatorInstance.Data);
          }
        }
      }
      uVar40 = *(uint *)&(TStack_417e8.Set)->field_0x8;
      if ((int)uVar40 < TStack_417e8.InitialNum) {
        lStack_41970 = CONCAT44(lStack_41970._4_4_,uVar40);
        pFStack_41978 = (FString *)CONCAT44(pFStack_41978._4_4_,TStack_417e8.InitialNum);
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("SetNum >= InitialNum",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                            ,0xc1,
                            L"Sets/Maps should never have elements removed during iteration outside of Iterator.RemoveCurrent(). InitialNum %d CurrentNum %d"
                           );
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          pTVar16 = (TSetTestHelper<FCompactSetTestResolver> *)(*pcVar5)();
          return pTVar16;
        }
      }
      uVar13 = uVar30;
      TStack_417e8.Index = uVar30;
      if (uVar30 != 0xffffffff) {
        do {
          TStack_417e8.Index = uVar13;
          uVar30 = FConstCompactHashTableView::GetNext(&TStack_417e8.HashTable,uVar13,uVar40);
          pFVar24 = TStack_417e8.Key;
          pTVar11 = TStack_417e8.Set;
          TStack_417e8.NextIndex = uVar30;
          if (((int)uVar13 < 0) || (*(int *)&(TStack_417e8.Set)->field_0x8 <= (int)uVar13)) {
            lStack_41970 = (longlong)*(int *)&(TStack_417e8.Set)->field_0x8;
            pFStack_41978 = (FString *)CONCAT44(pFStack_41978._4_4_,uVar13);
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidId(Id)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                                ,0x265,L"Array index out of bounds: %d into an array of size %lld");
            if (bVar12) {
              pcVar5 = (code *)swi(3);
              pTVar16 = (TSetTestHelper<FCompactSetTestResolver> *)(*pcVar5)();
              return pTVar16;
            }
          }
          iVar14 = (pFVar24->Data).ArrayNum;
          iVar3 = *(int *)(*(longlong *)pTVar11 + 8 + (longlong)(int)uVar13 * 0x10);
          if (iVar3 == iVar14) {
            if (iVar3 < 2) break;
            iVar14 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)(*(longlong *)pTVar11 + (longlong)(int)uVar13 * 0x10),
                                (wchar_t *)(pFVar24->Data).AllocatorInstance.Data);
            bVar12 = iVar14 == 0;
          }
          else {
            bVar12 = iVar3 + iVar14 == 1;
          }
          if ((bVar12) || (uVar13 = uVar30, TStack_417e8.Index = uVar30, uVar30 == 0xffffffff))
          break;
        } while( true );
      }
      iVar27 = iVar27 + 1;
    } while (uVar13 != 0xffffffff);
    if (iVar27 != 0x20) goto LAB_141b14c91;
  }
  FVar10 = TStack_41948.Elements;
  iVar27 = TStack_41948.NumElements;
  pFStack_41798 = &FStack_41048;
  pwVar42 = L"";
  if ((TStack_41948.NumElements < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    pTVar16 = (TSetTestHelper<FCompactSetTestResolver> *)(*pcVar5)();
    return pTVar16;
  }
  AlgoImpl::
  IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_TSetTestHelper<FCompactSetTestResolver>::TSetTestHelper<FCompactSetTestResolver>_[::A]::<lambda_1>_>_>
            ((FString *)FVar10,iVar27,FStack_41908,(<lambda_1> *)&pFStack_41798);
  TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::Rehash
            ((TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator> *)
             &TStack_41948);
  puVar43 = (uchar *)0x0;
  uVar13 = 0;
  TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::TBaseKeyIterator<1>::
  TBaseKeyIterator<1>(&TStack_412c8,
                      (TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator> *
                      )&TStack_41948,&FStack_41038);
  puVar46 = puVar43;
  if (TStack_412c8.Index == -1) {
LAB_141b14e61:
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_413e8,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_413e8,0);
    if (FStack_413e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_413e8.Data.AllocatorInstance.Data);
    }
  }
  else {
    do {
      iVar27 = TStack_412c8.Index;
      if (0x1f < TStack_412c8.Index - 0x20U) {
        pFVar15 = FAutomationTestFramework::Get();
        pFVar4 = pFVar15->CurrentTest;
        pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
        ::FString::FString(&FStack_41408,L"Condition failed");
        (*pcVar5)(pFVar4,&FStack_41408,0);
        if (FStack_41408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_41408.Data.AllocatorInstance.Data);
        }
      }
      pFVar24 = TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::
                operator[](TStack_412c8.Set,(FSetElementId)iVar27);
      iVar27 = (pFVar24->Data).ArrayNum;
      if (iVar27 == FStack_41038.Data.ArrayNum) {
        if (1 < iVar27) {
          iVar27 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)(pFVar24->Data).AllocatorInstance.Data,
                              (wchar_t *)FStack_41038.Data.AllocatorInstance.Data);
          bVar12 = iVar27 == 0;
          goto LAB_141b14df0;
        }
      }
      else {
        bVar12 = iVar27 + FStack_41038.Data.ArrayNum == 1;
LAB_141b14df0:
        if (!bVar12) {
          pFVar15 = FAutomationTestFramework::Get();
          pFVar4 = pFVar15->CurrentTest;
          pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
          ::FString::FString(&FStack_413f8,L"Condition failed");
          (*pcVar5)(pFVar4,&FStack_413f8);
          if (FStack_413f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_413f8.Data.AllocatorInstance.Data);
          }
        }
      }
      TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::
      TBaseKeyIterator<1>::operator++(&TStack_412c8);
      uVar30 = (int)puVar46 + 1;
      puVar46 = (uchar *)(ulonglong)uVar30;
    } while (TStack_412c8.Index != -1);
    if (uVar30 != 0x20) goto LAB_141b14e61;
  }
  TStack_41850.Set =
       (TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator> *)&TStack_41948;
  TStack_41850.Key = &FStack_41038;
  if (TStack_41948.NumElements == 0) {
    TStack_41850.HashTable.NextIndexCount = 0;
    TStack_41850.NextIndex = 0xffffffff;
    TStack_41850.InitialNum = 0;
    TStack_41850.HashTable.NextIndexData = puVar43;
    TStack_41850.HashTable.HashData = puVar43;
    TStack_41850.HashTable.HashCount = uVar13;
  }
  else {
    TStack_41850.HashTable.NextIndexData =
         (undefined1 *)((longlong)TStack_41948.Elements + 4) + (uint)(TStack_41948.MaxElements << 4)
    ;
    TStack_41850.HashTable.HashCount =
         *(uint *)((ulonglong)(uint)(TStack_41948.MaxElements << 4) +
                  (longlong)TStack_41948.Elements);
    TStack_41850.HashTable.HashData =
         TStack_41850.HashTable.NextIndexData +
         ((ulonglong)(uint)TStack_41948.MaxElements <<
         (0xffU < (uint)TStack_41948.MaxElements) + (0xffffU < (uint)TStack_41948.MaxElements));
    TStack_41850.HashTable.NextIndexCount = TStack_41948.MaxElements;
    if (FStack_41038.Data.ArrayNum == 0) {
      pwVar32 = L"";
      uVar30 = uVar13;
    }
    else {
      pwVar32 = (wchar_t *)FStack_41038.Data.AllocatorInstance.Data;
      uVar30 = FStack_41038.Data.ArrayNum - 1;
    }
    uVar30 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar30,pwVar32);
    TStack_41850.NextIndex = FConstCompactHashTableView::GetFirst(&TStack_41850.HashTable,uVar30);
    TStack_41850.InitialNum = TStack_41948.NumElements;
  }
  TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::TBaseKeyIterator<0>::
  operator++(&TStack_41850);
  puVar46 = puVar43;
  if (TStack_41850.Index == 0xffffffff) {
LAB_141b15033:
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_413d8,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_413d8,0);
    if (FStack_413d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_413d8.Data.AllocatorInstance.Data);
    }
  }
  else {
    do {
      iVar27 = TStack_41850.Index;
      pTVar11 = TStack_41850.Set;
      if (((ulonglong)puVar46 & 1) == 0) {
        lVar33 = (longlong)TStack_41850.Index;
        if (((TStack_41850.Index < 0) ||
            (*(int *)&(TStack_41850.Set)->field_0x8 <= TStack_41850.Index)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ElementIndex >= 0 && ElementIndex < this->NumElements",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                                ,0x5d5,
                                L"Invalid ElementIndex passed to UE_TCOMPACT_SET::RemoveByIndex"),
           bVar12)) {
          pcVar5 = (code *)swi(3);
          pTVar16 = (TSetTestHelper<FCompactSetTestResolver> *)(*pcVar5)();
          return pTVar16;
        }
        iVar14 = *(int *)((longlong)*(ForElementType<unsigned_char> *)&pTVar11->field_0x0 + 8 +
                         lVar33 * 0x10);
        if (iVar14 == 0) {
          pwVar32 = L"";
          iVar14 = 0;
        }
        else {
          pwVar32 = *(wchar_t **)
                     ((longlong)*(ForElementType<unsigned_char> *)&pTVar11->field_0x0 +
                     lVar33 * 0x10);
          iVar14 = iVar14 + -1;
        }
        uVar30 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar32);
        TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::
        RemoveByIndexAndHash<0>(pTVar11,iVar27,uVar30);
        TStack_41850.InitialNum = TStack_41850.InitialNum + -1;
        TStack_41850.Index = 0xffffffff;
        if (TStack_41850.NextIndex == *(uint *)&pTVar11->field_0x8) {
          TStack_41850.NextIndex = iVar27;
        }
      }
      TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::
      TBaseKeyIterator<0>::operator++(&TStack_41850);
      uVar30 = (int)puVar46 + 1;
      puVar46 = (uchar *)(ulonglong)uVar30;
    } while (TStack_41850.Index != 0xffffffff);
    if (uVar30 != 0x20) goto LAB_141b15033;
  }
  TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::TBaseKeyIterator<1>::
  TBaseKeyIterator<1>(&TStack_41290,
                      (TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator> *
                      )&TStack_41948,&FStack_41038);
  if (TStack_41290.Index == -1) {
LAB_141b1519c:
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_413a8,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_413a8,0);
    if (FStack_413a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_413a8.Data.AllocatorInstance.Data);
    }
  }
  else {
    do {
      iVar27 = TStack_41290.Index;
      if (0x1f < TStack_41290.Index - 0x20U) {
        pFVar15 = FAutomationTestFramework::Get();
        pFVar4 = pFVar15->CurrentTest;
        pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
        ::FString::FString(&FStack_413c8,L"Condition failed");
        (*pcVar5)(pFVar4,&FStack_413c8,0);
        if (FStack_413c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_413c8.Data.AllocatorInstance.Data);
        }
      }
      pFVar24 = TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::
                operator[](TStack_41290.Set,(FSetElementId)iVar27);
      iVar27 = (pFVar24->Data).ArrayNum;
      if (iVar27 == FStack_41038.Data.ArrayNum) {
        if (1 < iVar27) {
          iVar27 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)(pFVar24->Data).AllocatorInstance.Data,
                              (wchar_t *)FStack_41038.Data.AllocatorInstance.Data);
          bVar12 = iVar27 == 0;
          goto LAB_141b1512b;
        }
      }
      else {
        bVar12 = iVar27 + FStack_41038.Data.ArrayNum == 1;
LAB_141b1512b:
        if (!bVar12) {
          pFVar15 = FAutomationTestFramework::Get();
          pFVar4 = pFVar15->CurrentTest;
          pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
          ::FString::FString(&FStack_413b8,L"Condition failed");
          (*pcVar5)(pFVar4,&FStack_413b8);
          if (FStack_413b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_413b8.Data.AllocatorInstance.Data);
          }
        }
      }
      TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::
      TBaseKeyIterator<1>::operator++(&TStack_41290);
      uVar30 = (int)puVar43 + 1;
      puVar43 = (uchar *)(ulonglong)uVar30;
    } while (TStack_41290.Index != -1);
    if (uVar30 != 0x10) goto LAB_141b1519c;
  }
  if (TStack_41948.NumElements == 0) {
LAB_141b15223:
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_41398,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_41398,0);
    if (FStack_41398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41398.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (FStack_41038.Data.ArrayNum == 0) {
      pwVar32 = L"";
      uVar30 = uVar13;
    }
    else {
      pwVar32 = (wchar_t *)FStack_41038.Data.AllocatorInstance.Data;
      uVar30 = FStack_41038.Data.ArrayNum - 1;
    }
    uVar30 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar30,pwVar32);
    iVar27 = TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::
             RemoveImpl<FString,0>
                       ((TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>
                         *)&TStack_41948,uVar30,&FStack_41038);
    if (iVar27 != 0x10) goto LAB_141b15223;
  }
  if (TStack_41948.NumElements != 0x60) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_41388,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_41388,0);
    if (FStack_41388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41388.Data.AllocatorInstance.Data);
    }
  }
  if (FStack_41038.Data.ArrayNum != 0) {
    uVar13 = FStack_41038.Data.ArrayNum - 1;
    pwVar42 = (wchar_t *)FStack_41038.Data.AllocatorInstance.Data;
  }
  uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar42);
  iVar27 = TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::
           FindIndexByHash<FString>
                     ((TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator> *
                      )&TStack_41948,uVar13,&FStack_41038);
  if ((iVar27 != -1) &&
     ((FString *)((longlong)iVar27 * 0x10 + (longlong)TStack_41948.Elements) != (FString *)0x0)) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_41378,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_41378,0);
    if (FStack_41378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41378.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<FString,int>((FString *)TStack_41948.Elements,TStack_41948.NumElements);
  TStack_41948._8_8_ = TStack_41948._8_8_ & 0xffffffff00000000;
  FStack_417a0 = (FCompactSetLayout)&DAT_800000010;
  TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
            (&TStack_41948,0,&FStack_417a0,false);
  if (0 < TStack_41948.MaxElements) {
    puVar31 = (uint *)((ulonglong)(uint)(TStack_41948.MaxElements << 4) +
                      (longlong)TStack_41948.Elements);
    sVar26 = (0xffU < (uint)TStack_41948.MaxElements) + (0xffffU < (uint)TStack_41948.MaxElements);
    memset((void *)(((ulonglong)(uint)TStack_41948.MaxElements << sVar26) + 4 + (longlong)puVar31),
           0xff,(ulonglong)*puVar31 << sVar26);
  }
  if (TStack_41948.Elements != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)TStack_41948.Elements);
  }
  pFVar24 = aFStack_41008;
  lVar33 = 4;
  do {
    pFVar6 = pFVar24[-1].Data.AllocatorInstance.Data;
    pFVar24 = pFVar24 + -1;
    lVar33 = lVar33 + -1;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
  } while (lVar33 != 0);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar4 = pFVar15->CurrentTest;
  pcVar5 = *(code **)(pFVar4->_padding_ + 0x50);
  ::FString::FString(&FStack_41368,L"Optional Support");
  (*pcVar5)(pFVar4,&FStack_41368,0);
  if (FStack_41368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_41368.Data.AllocatorInstance.Data);
  }
  TStack_41958.Elements = (ForElementType<unsigned_char>)0x0;
  FStack_41818.Size = 4;
  FStack_41818.Alignment = 4;
  TStack_41958.NumElements = 0;
  TStack_41958.MaxElements = -1;
  TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
            (&TStack_41958,0,&FStack_41818,false);
  if (0 < TStack_41958.MaxElements) {
    puVar31 = (uint *)((ulonglong)(uint)(TStack_41958.MaxElements * 4) +
                      (longlong)TStack_41958.Elements);
    sVar26 = (0xffU < (uint)TStack_41958.MaxElements) + (0xffffU < (uint)TStack_41958.MaxElements);
    memset((void *)((longlong)puVar31 + ((ulonglong)(uint)TStack_41958.MaxElements << sVar26) + 4),
           0xff,(ulonglong)*puVar31 << sVar26);
  }
  if (TStack_41958.Elements != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)TStack_41958.Elements);
  }
  TStack_41958.Elements = (ForElementType<unsigned_char>)0x0;
  TStack_41958.NumElements = 0;
  TStack_41958.MaxElements = 0;
  aiStack_41880[3] = 1;
  iVar27 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::FindIndexByHash<int>
                     ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                      &TStack_41958,1,aiStack_41880 + 3);
  if (iVar27 == -1) {
    piVar23 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::AddUninitialized
                        ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                         &TStack_41958,1);
    *piVar23 = 1;
  }
  else {
    *(undefined4 *)((longlong)TStack_41958.Elements + (longlong)iVar27 * 4) = 1;
  }
  if ((TStack_41958.MaxElements == -1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar12)) {
    pcVar5 = (code *)swi(3);
    pTVar16 = (TSetTestHelper<FCompactSetTestResolver> *)(*pcVar5)();
    return pTVar16;
  }
  aiStack_41880[4] = 2;
  iVar27 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::FindIndexByHash<int>
                     ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                      &TStack_41958,2,aiStack_41880 + 4);
  if (iVar27 == -1) {
    piVar23 = TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::AddUninitialized
                        ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                         &TStack_41958,2);
    *piVar23 = 2;
  }
  else {
    *(undefined4 *)((longlong)TStack_41958.Elements + (longlong)iVar27 * 4) = 2;
  }
  if ((TStack_41958.MaxElements == -1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar12)) {
    pcVar5 = (code *)swi(3);
    pTVar16 = (TSetTestHelper<FCompactSetTestResolver> *)(*pcVar5)();
    return pTVar16;
  }
  if (TStack_41958.NumElements != 2) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_41358,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_41358,0);
    if (FStack_41358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41358.Data.AllocatorInstance.Data);
    }
  }
  if (TStack_41958.MaxElements == -1) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_41348,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_41348,0);
    if (FStack_41348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41348.Data.AllocatorInstance.Data);
    }
    if (TStack_41958.MaxElements == -1) {
      if (TStack_41958.NumElements != 0) {
        pFVar15 = FAutomationTestFramework::Get();
        pFVar4 = pFVar15->CurrentTest;
        pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
        ::FString::FString(&FStack_41338,L"Condition failed");
        (*pcVar5)(pFVar4,&FStack_41338,0);
        if (FStack_41338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_41338.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_141b156f7;
    }
  }
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Empty
            ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)&TStack_41958,0)
  ;
  if (TStack_41958.Elements != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)TStack_41958.Elements);
  }
  TStack_41958.Elements = (ForElementType<unsigned_char>)0x0;
  TStack_41958.NumElements = 0;
  TStack_41958.MaxElements = -1;
LAB_141b156f7:
  if (TStack_41958.MaxElements != -1) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar4 = pFVar15->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&FStack_41328,L"Condition failed");
    (*pcVar5)(pFVar4,&FStack_41328,0);
    if (FStack_41328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41328.Data.AllocatorInstance.Data);
    }
    if ((TStack_41958.MaxElements != -1) &&
       (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Empty
                  ((TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                   &TStack_41958,0), TStack_41958.Elements != (ForElementType<unsigned_char>)0x0)) {
      FMemory::Free((void *)TStack_41958.Elements);
    }
  }
  return pTStack_41868;
LAB_141b144b1:
  if (uVar13 == 0xffffffff) goto LAB_141b143f5;
  *(undefined4 *)((longlong)TStack_41968.Elements + (longlong)(int)uVar13 * 4) = 1;
  goto LAB_141b146cc;
}

// TSetTestHelper<FSparseSetTestResolver> @ 141b157b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSetTestHelper<FSparseSetTestResolver> * __thiscall
TSetTestHelper<FSparseSetTestResolver>::TSetTestHelper<FSparseSetTestResolver>
          (TSetTestHelper<FSparseSetTestResolver> *this)

{
  bool *pbVar1;
  int iVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  float fVar6;
  TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FAutomationTestFramework *pFVar13;
  FString *pFVar14;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *pTVar15;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *pTVar16;
  TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> *pTVar17;
  longlong lVar18;
  ulong64 uVar19;
  ulonglong uVar20;
  TSetTestHelper<FSparseSetTestResolver> *pTVar21;
  ForElementType<unsigned_int> FVar22;
  ForAnyElementType FVar23;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar24;
  ForElementType<FSetElementId> FVar25;
  ForElementType<FSetElementId> FVar26;
  uint *puVar27;
  wchar_t *pwVar28;
  undefined8 uVar29;
  longlong lVar30;
  bool *pbVar31;
  ulonglong *puVar32;
  int iVar33;
  ulonglong uVar34;
  uint *puVar35;
  uint uVar36;
  ulonglong uVar37;
  uint uVar38;
  int *piVar39;
  longlong lVar40;
  undefined1 auStackY_421e8 [32];
  FIdentityFunctor FStack_421b8;
  uint uStack_421b4;
  int iStack_421b0;
  uint uStack_421ac;
  bool abStack_421a8 [8];
  FString FStack_421a0;
  FString FStack_42190;
  FString FStack_42180;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> TStack_42168;
  TBaseKeyIterator<1> TStack_42118;
  TBaseKeyIterator<1> TStack_42100;
  int iStack_420e8;
  uint uStack_420e4;
  undefined4 uStack_420e0;
  undefined4 uStack_420dc;
  undefined4 uStack_420d8;
  bool abStack_420d4 [4];
  undefined4 uStack_420d0;
  TSetTestHelper<FSparseSetTestResolver> *pTStack_420c8;
  FScriptContainerElement *pFStack_420c0;
  TBaseKeyIterator<0> TStack_420b8;
  TBaseKeyIterator<1> TStack_420a0;
  uint uStack_42088;
  FSetTestNonCopyableTestData FStack_42084;
  int iStack_42080;
  int iStack_4207c;
  int iStack_42078;
  FString FStack_42074;
  FString *pFStack_42060;
  FString **ppFStack_42058;
  int iStack_42050;
  undefined4 uStack_4204c;
  int aiStack_42048 [2];
  FString FStack_42040;
  undefined4 uStack_42030;
  int iStack_4202c;
  longlong *plStack_42028;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_42020;
  longlong *plStack_42000;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_41ff8;
  undefined1 auStack_41fd8 [12];
  uint uStack_41fcc;
  longlong lStack_41fc8;
  uint uStack_41fc0;
  int iStack_41fbc;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *pTStack_41fb0;
  FString FStack_41fa8;
  bool *pbStack_41f98;
  undefined4 uStack_41f90;
  undefined4 uStack_41f8c;
  FString FStack_41f88;
  FString FStack_41f78;
  FString FStack_41f68;
  FString FStack_41f58;
  FString FStack_41f48;
  FString FStack_41f38;
  FString FStack_41f28;
  FString FStack_41f18;
  FString FStack_41f08;
  FString FStack_41ef8;
  FString FStack_41ee8;
  initializer_list<FString> iStack_41ed8;
  FString FStack_41ec8;
  FString FStack_41eb8;
  FString FStack_41ea8;
  FString FStack_41e98;
  FString FStack_41e88;
  FString FStack_41e78;
  FString FStack_41e68;
  int *piStack_41e58;
  undefined4 uStack_41e50;
  undefined4 uStack_41e4c;
  FString FStack_41e48;
  FString FStack_41e38;
  FString FStack_41e28;
  FString FStack_41e18;
  FSparseArrayAllocationInfo FStack_41e08;
  FSparseArrayAllocationInfo FStack_41df8;
  FString FStack_41de8;
  FString FStack_41dd8;
  FString FStack_41dc8;
  FString FStack_41db8;
  FString FStack_41da8;
  FString FStack_41d98;
  FString FStack_41d88;
  FString FStack_41d78;
  FString FStack_41d68;
  FString FStack_41d58;
  FString FStack_41d48;
  FString FStack_41d38;
  FString FStack_41d28;
  FString FStack_41d18;
  FString FStack_41d08;
  FString FStack_41cf8;
  FString FStack_41ce8;
  FString FStack_41cd8;
  FString FStack_41cc8;
  FString FStack_41cb8;
  FString FStack_41ca8;
  FString FStack_41c98;
  FString FStack_41c88;
  initializer_list<FString> iStack_41c78;
  FString FStack_41c68;
  FString FStack_41c58;
  FString FStack_41c48;
  FString FStack_41c38;
  FString FStack_41c28;
  TArrayView<int_const_,int> TStack_41c18;
  TArrayView<int_const_,int> TStack_41c08;
  undefined1 auStack_41bf8 [32];
  ForElementType<unsigned_int> FStack_41bd8;
  int iStack_41bd0;
  uint uStack_41bcc;
  int iStack_41bc8;
  int iStack_41bc4;
  FScriptContainerElement aFStack_41bc0 [8];
  ForAnyElementType FStack_41bb8;
  uint uStack_41bb0;
  undefined1 auStack_41ba8 [32];
  ForElementType<unsigned_int> FStack_41b88;
  int iStack_41b80;
  int iStack_41b7c;
  int iStack_41b78;
  int iStack_41b74;
  undefined1 auStack_41b70 [8];
  ForElementType<FSetElementId> FStack_41b68;
  int iStack_41b60;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> TStack_41b58;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> TStack_41b08;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> TStack_41ab8;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> TStack_41a68;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> TStack_41a18;
  TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> TStack_419c8;
  TSparseSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultSparseSetAllocator>
  TStack_41978;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  TStack_41928;
  undefined8 uStack_418e8;
  undefined4 uStack_418e0;
  FString FStack_418d8;
  FString FStack_418c8;
  FString FStack_418b8;
  FString FStack_418a8;
  FString FStack_41898;
  FString FStack_41888;
  FString FStack_41878;
  FString FStack_41868;
  TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> TStack_41858;
  TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> TStack_41808;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> TStack_417b8;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> TStack_41768;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> TStack_41718;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> TStack_416c8;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> TStack_41678;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> TStack_41628;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> TStack_415d8;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> TStack_41588;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> TStack_41538;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> TStack_414e8;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> TStack_41498;
  TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> TStack_41448;
  TSparseSet<int,DefaultKeyFuncs<int,0>,TFixedSparseSetAllocator<64,2,4>_> TStack_413f8;
  FString FStack_41048;
  FString FStack_41038;
  FString FStack_41028;
  FString FStack_41018;
  FString FStack_41008;
  FString FStack_40ff8;
  FString FStack_40fe8;
  FString FStack_40fd8;
  FString FStack_40fc8;
  FString FStack_40fb8;
  FString FStack_40fa8;
  FString FStack_40f98;
  bool abStack_40f88 [1020];
  int aiStack_40b8c [257];
  ulonglong auStack_40788 [33000];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_421e8;
  pTStack_420c8 = this;
  pFVar13 = FAutomationTestFramework::Get();
  pFVar3 = pFVar13->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&FStack_41c98,L"Default Constructor");
  (*pcVar4)(pFVar3,&FStack_41c98,0,0);
  if (FStack_41c98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_41c98.Data.AllocatorInstance.Data);
  }
  uVar37 = 0;
  TStack_41928._44_4_ = 0x80;
  TStack_41928._0_8_ = 0;
  TStack_41928._8_8_ = 0;
  TStack_41928._32_8_ = 0;
  TStack_41928._40_4_ = 0;
  TStack_41928._52_4_ = 0;
  uStack_418e8 = 0;
  uStack_418e0 = 0;
  TStack_41928._48_4_ = 0xffffffff;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_41928);
  pFVar13 = FAutomationTestFramework::Get();
  pFVar3 = pFVar13->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&FStack_41c88,L"Basic Tests");
  (*pcVar4)(pFVar3,&FStack_41c88,0,0);
  if (FStack_41c88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_41c88.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&FStack_41008,L"Zero");
  ::FString::FString(&FStack_40ff8,L"One");
  ::FString::FString(&FStack_40fe8,L"Two");
  ::FString::FString(&FStack_40fd8,L"Three");
  ::FString::FString(&FStack_418d8,&FStack_41008);
  ::FString::FString(&FStack_418c8,&FStack_40ff8);
  ::FString::FString(&FStack_418b8,&FStack_40fe8);
  ::FString::FString(&FStack_418a8,&FStack_40fd8);
  iStack_41c78._First = &FStack_418d8;
  iStack_41c78._Last = &FStack_41898;
  TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>::
  TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>
            (&TStack_419c8,&iStack_41c78);
  pFVar14 = &FStack_41898;
  lVar30 = 4;
  do {
    pFVar5 = pFVar14[-1].Data.AllocatorInstance.Data;
    pFVar14 = pFVar14 + -1;
    lVar30 = lVar30 + -1;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
  } while (lVar30 != 0);
  if (TStack_419c8.Elements._8_4_ - TStack_419c8.Elements._52_4_ != 4) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41c68,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41c68,0);
    if (FStack_41c68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41c68.Data.AllocatorInstance.Data);
    }
  }
  bVar8 = ::FString::Equals((FString *)TStack_419c8.Elements._0_8_,&FStack_41008,IgnoreCase);
  if (!bVar8) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_42190,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_42190,0);
    if (FStack_42190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_42190.Data.AllocatorInstance.Data);
    }
  }
  pFVar14 = TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>::Find
                      (&TStack_419c8,&FStack_41008);
  if (pFVar14 == (FString *)0x0) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_421a0,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_421a0,0);
    FVar23.Data = FStack_421a0.Data.AllocatorInstance.Data;
LAB_141b15b2d:
    if (FVar23.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar23.Data);
    }
  }
  else {
    bVar8 = ::FString::Equals(pFVar14,&FStack_41008,IgnoreCase);
    if (!bVar8) {
      pFVar13 = FAutomationTestFramework::Get();
      pFVar3 = pFVar13->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&FStack_42180,L"Condition failed");
      (*pcVar4)(pFVar3,&FStack_42180,0);
      FVar23.Data = FStack_42180.Data.AllocatorInstance.Data;
      goto LAB_141b15b2d;
    }
  }
  bVar8 = ::FString::Equals((FString *)
                            &(((FString *)(TStack_419c8.Elements._0_8_ + 0x10))->Data).ArrayNum,
                            &FStack_40ff8,IgnoreCase);
  if (!bVar8) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_42190,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_42190,0);
    if (FStack_42190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_42190.Data.AllocatorInstance.Data);
    }
  }
  pFVar14 = TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>::Find
                      (&TStack_419c8,&FStack_40ff8);
  if (pFVar14 == (FString *)0x0) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_421a0,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_421a0,0);
    FVar23.Data = FStack_421a0.Data.AllocatorInstance.Data;
LAB_141b15c37:
    if (FVar23.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar23.Data);
    }
  }
  else {
    bVar8 = ::FString::Equals(pFVar14,&FStack_40ff8,IgnoreCase);
    if (!bVar8) {
      pFVar13 = FAutomationTestFramework::Get();
      pFVar3 = pFVar13->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&FStack_42180,L"Condition failed");
      (*pcVar4)(pFVar3,&FStack_42180,0);
      FVar23.Data = FStack_42180.Data.AllocatorInstance.Data;
      goto LAB_141b15c37;
    }
  }
  bVar8 = ::FString::Equals((FString *)(TStack_419c8.Elements._0_8_ + 0x30),&FStack_40fe8,IgnoreCase
                           );
  if (!bVar8) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_42190,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_42190,0);
    if (FStack_42190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_42190.Data.AllocatorInstance.Data);
    }
  }
  pFVar14 = TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>::Find
                      (&TStack_419c8,&FStack_40fe8);
  if (pFVar14 == (FString *)0x0) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_421a0,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_421a0,0);
    FVar23.Data = FStack_421a0.Data.AllocatorInstance.Data;
LAB_141b15d41:
    if (FVar23.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar23.Data);
    }
  }
  else {
    bVar8 = ::FString::Equals(pFVar14,&FStack_40fe8,IgnoreCase);
    if (!bVar8) {
      pFVar13 = FAutomationTestFramework::Get();
      pFVar3 = pFVar13->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&FStack_42180,L"Condition failed");
      (*pcVar4)(pFVar3,&FStack_42180,0);
      FVar23.Data = FStack_42180.Data.AllocatorInstance.Data;
      goto LAB_141b15d41;
    }
  }
  bVar8 = ::FString::Equals((FString *)
                            &(((FString *)(TStack_419c8.Elements._0_8_ + 0x40))->Data).ArrayNum,
                            &FStack_40fd8,IgnoreCase);
  if (!bVar8) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_42190,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_42190,0);
    if (FStack_42190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_42190.Data.AllocatorInstance.Data);
    }
  }
  pFVar14 = TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>::Find
                      (&TStack_419c8,&FStack_40fd8);
  if (pFVar14 == (FString *)0x0) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_421a0,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_421a0,0);
LAB_141b15e4b:
    if (FStack_421a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_421a0.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar8 = ::FString::Equals(pFVar14,&FStack_40fd8,IgnoreCase);
    if (!bVar8) {
      pFVar13 = FAutomationTestFramework::Get();
      pFVar3 = pFVar13->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&FStack_42180,L"Condition failed");
      (*pcVar4)(pFVar3,&FStack_42180,0);
      FStack_421a0.Data.AllocatorInstance.Data = FStack_42180.Data.AllocatorInstance.Data;
      goto LAB_141b15e4b;
    }
  }
  ::FString::FString(&FStack_41c58,L"Invalid");
  pFVar14 = TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>::Find
                      (&TStack_419c8,&FStack_41c58);
  if (FStack_41c58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_41c58.Data.AllocatorInstance.Data);
  }
  if (pFVar14 != (FString *)0x0) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41c48,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41c48,0);
    if (FStack_41c48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41c48.Data.AllocatorInstance.Data);
    }
  }
  FStack_42040.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_42040.Data.ArrayNum = 0;
  FStack_42040.Data.ArrayMax = 0;
  pFStack_420c0 = (FScriptContainerElement *)0x15060d16c;
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(0,L"");
  iVar10 = TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>::
           FindIndexByHash<FString>(&TStack_419c8,uVar9,&FStack_42040);
  if ((iVar10 != -1) && (TStack_419c8.Elements._0_8_ + (longlong)iVar10 * 0x18 != 0)) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41c38,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41c38,0);
    if (FStack_41c38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41c38.Data.AllocatorInstance.Data);
    }
  }
  TStack_419c8.HashSize = 0;
  if (TStack_419c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_419c8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_419c8.Elements);
  pFVar14 = &FStack_40fc8;
  lVar30 = 4;
  do {
    pFVar5 = pFVar14[-1].Data.AllocatorInstance.Data;
    pFVar14 = pFVar14 + -1;
    lVar30 = lVar30 + -1;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
  } while (lVar30 != 0);
  pFVar13 = FAutomationTestFramework::Get();
  pFVar3 = pFVar13->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&FStack_41c28,L"NonCopyable Tests");
  (*pcVar4)(pFVar3,&FStack_41c28,0,0);
  if (FStack_41c28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_41c28.Data.AllocatorInstance.Data);
  }
  TStack_41978.Elements._0_8_ = 0;
  uStack_421b4 = 0;
  TStack_41978.Elements._8_8_ = 0;
  TStack_41978.Elements._32_8_ = 0;
  TStack_41978.Elements._40_4_ = 0;
  TStack_41978.Elements._44_4_ = 0x80;
  TStack_41978.Elements._48_4_ = 0xffffffff;
  TStack_41978.Elements._52_4_ = 0;
  TStack_41978.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TStack_41978.HashSize = 0;
  uVar34 = uVar37;
  do {
    TSparseSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultSparseSetAllocator>
    ::Emplace<unsigned_int_&>(&TStack_41978,&uStack_42088,(bool *)&uStack_421b4);
    iStack_420e8 = (int)uVar34;
    TSparseSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultSparseSetAllocator>
    ::Emplace<FSetTestNonCopyableTestData>(&TStack_41978,&FStack_42084,(bool *)&iStack_420e8);
    uStack_421b4 = (int)uVar34 + 1;
    uVar34 = (ulonglong)uStack_421b4;
  } while (uStack_421b4 < 10);
  TStack_41978.HashSize = 0;
  if (TStack_41978.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_41978.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FSetTestNonCopyableTestData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FSetTestNonCopyableTestData>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_41978.Elements);
  pFVar13 = FAutomationTestFramework::Get();
  pFVar3 = pFVar13->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&FStack_41fa8,L"Advanced Tests");
  (*pcVar4)(pFVar3,&FStack_41fa8,0,0);
  if (FStack_41fa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_41fa8.Data.AllocatorInstance.Data);
  }
  pbVar31 = abStack_40f88;
  iVar10 = 1;
  do {
    uVar38 = iVar10 << 8 ^ 0x9e3779b9U - iVar10;
    uVar9 = -(iVar10 + uVar38) ^ uVar38 >> 0xd;
    uVar36 = (iVar10 - uVar9) - uVar38 ^ uVar9 >> 0xc;
    uVar38 = (uVar38 - uVar36) - uVar9 ^ uVar36 << 0x10;
    uVar9 = (uVar9 - uVar38) - uVar36 ^ uVar38 >> 5;
    uVar36 = (uVar36 - uVar9) - uVar38 ^ uVar9 >> 3;
    uVar38 = (uVar38 - uVar36) - uVar9 ^ uVar36 << 10;
    *(uint *)pbVar31 = (uVar9 - uVar38) - uVar36 ^ uVar38 >> 0xf;
    pbVar31 = pbVar31 + 4;
    iVar10 = iVar10 + 1;
  } while (pbVar31 != (bool *)(aiStack_40b8c + 1));
  pbStack_41f98 = abStack_40f88;
  uStack_41f90 = 0x100;
  TStack_41c18._12_4_ = uStack_41f8c;
  TStack_41c18.ArrayNum = 0x100;
  TStack_41b08.Elements._0_8_ = 0;
  TStack_41b08.Elements._8_8_ = 0;
  TStack_41b08.Elements._32_8_ = 0;
  TStack_41b08.Elements._40_4_ = 0;
  TStack_41b08.Elements._44_4_ = 0x80;
  TStack_41b08.Elements._48_4_ = 0xffffffff;
  TStack_41b08.Elements._52_4_ = 0;
  TStack_41b08.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TStack_41b08.HashSize = 0;
  TStack_41c18.DataPtr = (int *)pbStack_41f98;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Append
            (&TStack_41b08,&TStack_41c18);
  TStack_41ab8.Elements._0_8_ = 0;
  pbVar31 = (bool *)(aiStack_40b8c + 1);
  TStack_41ab8.Elements._8_8_ = 0;
  TStack_41ab8.Elements._32_8_ = 0;
  TStack_41ab8.Elements._40_4_ = 0;
  TStack_41ab8.Elements._44_4_ = 0x80;
  TStack_41ab8.Elements._48_4_ = 0xffffffff;
  TStack_41ab8.Elements._52_4_ = 0;
  TStack_41ab8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TStack_41ab8.HashSize = 0;
  do {
    uStack_420d0 = *(undefined4 *)(pbVar31 + -4);
    pbVar31 = pbVar31 + -4;
    TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Emplace<int_const_&>
              (&TStack_41ab8,&iStack_42080,(bool *)&uStack_420d0);
  } while (pbVar31 != abStack_40f88);
  pbVar31 = abStack_40f88;
  do {
    iStack_421b0 = *(int *)pbVar31;
    SetTestExists<int,TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>_>
              (&iStack_421b0,&TStack_41b08);
    SetTestExists<int,TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>_>
              (&iStack_421b0,&TStack_41ab8);
    pbVar31 = pbVar31 + 4;
  } while (pbVar31 != (bool *)(aiStack_40b8c + 1));
  bVar8 = TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Includes
                    (&TStack_41b08,&TStack_41ab8);
  if (!bVar8) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41f88,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41f88,0);
    if (FStack_41f88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41f88.Data.AllocatorInstance.Data);
    }
  }
  bVar8 = TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Includes
                    (&TStack_41ab8,&TStack_41b08);
  if (!bVar8) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41f78,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41f78,0);
    if (FStack_41f78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41f78.Data.AllocatorInstance.Data);
    }
  }
  pTVar15 = TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Difference
                      (&TStack_41b08,&TStack_417b8,&TStack_41ab8);
  iVar10 = *(int *)&(pTVar15->Elements).field_0x34;
  iVar11 = *(int *)&(pTVar15->Elements).field_0x8;
  TStack_417b8.HashSize = 0;
  if (TStack_417b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_417b8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_417b8.Elements);
  if (iVar11 != iVar10) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41f68,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41f68,0);
    if (FStack_41f68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41f68.Data.AllocatorInstance.Data);
    }
  }
  pTVar15 = TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Union
                      (&TStack_41b08,&TStack_41718,&TStack_41ab8);
  pTVar15 = TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Difference
                      (pTVar15,&TStack_41768,&TStack_41ab8);
  iVar10 = *(int *)&(pTVar15->Elements).field_0x34;
  iVar11 = *(int *)&(pTVar15->Elements).field_0x8;
  TStack_41768.HashSize = 0;
  if (TStack_41768.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_41768.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_41768.Elements);
  TStack_41718.HashSize = 0;
  if (TStack_41718.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_41718.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_41718.Elements);
  if (iVar11 != iVar10) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41f58,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41f58,0);
    if (FStack_41f58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41f58.Data.AllocatorInstance.Data);
    }
  }
  pTVar15 = TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Intersect
                      (&TStack_41b08,&TStack_41678,&TStack_41ab8);
  pTVar15 = TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Difference
                      (pTVar15,&TStack_416c8,&TStack_41ab8);
  iVar10 = *(int *)&(pTVar15->Elements).field_0x34;
  iVar11 = *(int *)&(pTVar15->Elements).field_0x8;
  TStack_416c8.HashSize = 0;
  if (TStack_416c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_416c8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_416c8.Elements);
  TStack_41678.HashSize = 0;
  if (TStack_41678.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_41678.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_41678.Elements);
  if (iVar11 != iVar10) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41f48,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41f48,0);
    if (FStack_41f48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41f48.Data.AllocatorInstance.Data);
    }
  }
  TStack_41a18.Elements._0_8_ = 0;
  TStack_41a18.Elements._8_8_ = 0;
  TStack_41a18.Elements._32_8_ = 0;
  TStack_41a18.Elements._40_4_ = 0;
  TStack_41a18.Elements._44_4_ = 0x80;
  TStack_41a18.Elements._48_4_ = 0xffffffff;
  TStack_41a18.Elements._52_4_ = 0;
  TStack_41a18.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TStack_41a18.HashSize = 0;
  uVar34 = uVar37;
  do {
    TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Emplace<int_const_&>
              (&TStack_41a18,&iStack_4207c,abStack_40f88 + (longlong)(int)uVar34 * 4);
    uVar9 = (int)uVar34 + 1;
    uVar34 = (ulonglong)uVar9;
  } while (uVar9 < 0x80);
  pTVar15 = TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Difference
                      (&TStack_41b08,&TStack_41628,&TStack_41a18);
  iVar10 = *(int *)&(pTVar15->Elements).field_0x8;
  iVar11 = *(int *)&(pTVar15->Elements).field_0x34;
  TStack_41628.HashSize = 0;
  if (TStack_41628.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_41628.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_41628.Elements);
  if (iVar10 - iVar11 != 0x80) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41f38,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41f38,0);
    if (FStack_41f38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41f38.Data.AllocatorInstance.Data);
    }
  }
  pTVar15 = TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Intersect
                      (&TStack_41b08,&TStack_41588,&TStack_41a18);
  pTVar15 = TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Difference
                      (pTVar15,&TStack_415d8,&TStack_41a18);
  iVar10 = *(int *)&(pTVar15->Elements).field_0x34;
  iVar11 = *(int *)&(pTVar15->Elements).field_0x8;
  TStack_415d8.HashSize = 0;
  if (TStack_415d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_415d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_415d8.Elements);
  TStack_41588.HashSize = 0;
  if (TStack_41588.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_41588.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_41588.Elements);
  if (iVar11 != iVar10) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41f28,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41f28,0);
    if (FStack_41f28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41f28.Data.AllocatorInstance.Data);
    }
  }
  pTVar15 = TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Difference
                      (&TStack_41b08,&TStack_41498,&TStack_41a18);
  pTVar16 = TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Difference
                      (&TStack_41ab8,&TStack_414e8,&TStack_41a18);
  pTVar15 = TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Difference
                      (pTVar15,&TStack_41538,pTVar16);
  iVar10 = *(int *)&(pTVar15->Elements).field_0x34;
  iVar11 = *(int *)&(pTVar15->Elements).field_0x8;
  TStack_41538.HashSize = 0;
  if (TStack_41538.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_41538.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_41538.Elements);
  TStack_414e8.HashSize = 0;
  if (TStack_414e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_414e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_414e8.Elements);
  TStack_41498.HashSize = 0;
  if (TStack_41498.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_41498.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_41498.Elements);
  if (iVar11 != iVar10) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41f18,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41f18,0);
    if (FStack_41f18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41f18.Data.AllocatorInstance.Data);
    }
  }
  bVar8 = TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Includes
                    (&TStack_41b08,&TStack_41a18);
  if (!bVar8) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41f08,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41f08,0);
    if (FStack_41f08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41f08.Data.AllocatorInstance.Data);
    }
  }
  bVar8 = TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Includes
                    (&TStack_41a18,&TStack_41b08);
  if (bVar8) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41ef8,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41ef8,0);
    if (FStack_41ef8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41ef8.Data.AllocatorInstance.Data);
    }
  }
  TStack_41a18.HashSize = 0;
  if (TStack_41a18.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_41a18.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_41a18.Elements);
  TStack_41ab8.HashSize = 0;
  if (TStack_41ab8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_41ab8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_41ab8.Elements);
  TStack_41b08.HashSize = 0;
  if (TStack_41b08.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_41b08.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_41b08.Elements);
  pFVar13 = FAutomationTestFramework::Get();
  pFVar3 = pFVar13->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&FStack_41ee8,L"Copy/Move");
  (*pcVar4)(pFVar3,&FStack_41ee8,0,0);
  if (FStack_41ee8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_41ee8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&FStack_40fc8,L"Zero");
  ::FString::FString(&FStack_40fb8,L"One");
  ::FString::FString(&FStack_40fa8,L"Two");
  ::FString::FString(&FStack_40f98,L"Three");
  ::FString::FString(&FStack_41898,&FStack_40fc8);
  ::FString::FString(&FStack_41888,&FStack_40fb8);
  ::FString::FString(&FStack_41878,&FStack_40fa8);
  ::FString::FString(&FStack_41868,&FStack_40f98);
  iStack_41ed8._First = &FStack_41898;
  iStack_41ed8._Last = (FString *)&TStack_41858;
  TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>::
  TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>
            (&TStack_41858,&iStack_41ed8);
  pTVar17 = &TStack_41858;
  lVar30 = 4;
  do {
    FVar25 = pTVar17[-1].Hash.SecondaryData;
    pTVar17 = (TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator> *)
              &pTVar17[-1].Hash.SecondaryData;
    lVar30 = lVar30 + -1;
    if (FVar25 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar25);
    }
  } while (lVar30 != 0);
  TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>::
  TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>
            (&TStack_41808,&TStack_41858);
  if (TStack_41858.Elements._8_4_ != TStack_41858.Elements._52_4_) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41ec8,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41ec8,0);
    if (FStack_41ec8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41ec8.Data.AllocatorInstance.Data);
    }
  }
  pTVar17 = TSparseSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSparseSetAllocator>::Difference
                      (&TStack_41858,&TStack_41448,&TStack_41808);
  iVar10 = *(int *)&(pTVar17->Elements).field_0x34;
  iVar11 = *(int *)&(pTVar17->Elements).field_0x8;
  TStack_41448.HashSize = 0;
  if (TStack_41448.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_41448.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_41448.Elements);
  if (iVar11 != iVar10) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41eb8,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41eb8,0);
    if (FStack_41eb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41eb8.Data.AllocatorInstance.Data);
    }
  }
  TStack_41808.HashSize = 0;
  if (TStack_41808.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_41808.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_41808.Elements);
  TStack_41858.HashSize = 0;
  if (TStack_41858.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_41858.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_41858.Elements);
  pbVar31 = abStack_40f88;
  lVar30 = 4;
  do {
    pbVar1 = pbVar31 + -0x10;
    pbVar31 = pbVar31 + -0x10;
    lVar30 = lVar30 + -1;
    if (*(void **)pbVar1 != (void *)0x0) {
      FMemory::Free(*(void **)pbVar1);
    }
  } while (lVar30 != 0);
  pFVar13 = FAutomationTestFramework::Get();
  pFVar3 = pFVar13->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&FStack_41ea8,L"Growth Tests");
  (*pcVar4)(pFVar3,&FStack_41ea8,0,0);
  if (FStack_41ea8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_41ea8.Data.AllocatorInstance.Data);
  }
  fVar6 = __real_39000100;
  puVar32 = auStack_40788;
  TStack_41b58.Elements._0_8_ = 0;
  TStack_41b58.Elements._8_8_ = 0;
  TStack_41b58.Elements._32_8_ = 0;
  TStack_41b58.Elements._40_4_ = 0;
  TStack_41b58.Elements._44_4_ = 0x80;
  TStack_41b58.Elements._48_4_ = 0xffffffff;
  TStack_41b58.Elements._52_4_ = 0;
  TStack_41b58.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TStack_41b58.HashSize = 0;
  uVar34 = uVar37;
  do {
    uVar9 = rand();
    iVar11 = (int)((float)(uVar9 & 0x7fff) * fVar6);
    iVar10 = 3;
    if (iVar11 < 3) {
      iVar10 = iVar11;
    }
    uVar9 = (int)uVar34 + iVar10 + 1;
    uVar34 = (ulonglong)uVar9;
    *(uint *)puVar32 = uVar9;
    puVar32 = (ulonglong *)((longlong)puVar32 + 4);
  } while (puVar32 != local_48);
  Algo::RandomShuffle<int_(&)[66000]>((int (*) [66000])auStack_40788);
  puVar32 = auStack_40788;
  do {
    uVar9 = (uint)*puVar32;
    uStack_420e4 = uVar9;
    if (TStack_41b58.Elements._8_4_ != TStack_41b58.Elements._52_4_) {
      FVar25 = (ForElementType<FSetElementId>)&TStack_41b58.Hash;
      if (TStack_41b58.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar25 = TStack_41b58.Hash.SecondaryData;
      }
      for (iVar10 = *(int *)((longlong)FVar25 + (ulonglong)(TStack_41b58.HashSize - 1U & uVar9) * 4)
          ; iVar10 != -1;
          iVar10 = *(int *)(TStack_41b58.Elements._0_8_ + 4 + (longlong)iVar10 * 0xc)) {
        if (*(uint *)(TStack_41b58.Elements._0_8_ + (longlong)iVar10 * 0xc) == uVar9) {
          pFVar13 = FAutomationTestFramework::Get();
          pFVar3 = pFVar13->CurrentTest;
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
          ::FString::FString(&FStack_41e98,L"Condition failed");
          (*pcVar4)(pFVar3,&FStack_41e98,0);
          if (FStack_41e98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_41e98.Data.AllocatorInstance.Data);
          }
          break;
        }
      }
    }
    TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Emplace<int_const_&>
              (&TStack_41b58,aiStack_42048,(bool *)&uStack_420e4);
    if (TStack_41b58.Elements._8_4_ != TStack_41b58.Elements._52_4_) {
      FVar25 = (ForElementType<FSetElementId>)&TStack_41b58.Hash;
      if (TStack_41b58.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar25 = TStack_41b58.Hash.SecondaryData;
      }
      for (iVar10 = *(int *)((longlong)FVar25 + (ulonglong)(TStack_41b58.HashSize - 1U & uVar9) * 4)
          ; iVar10 != -1;
          iVar10 = *(int *)(TStack_41b58.Elements._0_8_ + 4 + (longlong)iVar10 * 0xc)) {
        if (*(uint *)(TStack_41b58.Elements._0_8_ + (longlong)iVar10 * 0xc) == uVar9)
        goto LAB_141b16eea;
      }
    }
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41e88,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41e88,0);
    if (FStack_41e88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41e88.Data.AllocatorInstance.Data);
    }
LAB_141b16eea:
    puVar32 = (ulonglong *)((longlong)puVar32 + 4);
  } while (puVar32 != local_48);
  puVar32 = auStack_40788;
  lVar30 = TStack_41b58.Elements._0_8_;
  FVar25 = TStack_41b58.Hash.SecondaryData;
  do {
    if (TStack_41b58.Elements._8_4_ != TStack_41b58.Elements._52_4_) {
      FVar26 = (ForElementType<FSetElementId>)&TStack_41b58.Hash;
      if (FVar25 != (ForElementType<FSetElementId>)0x0) {
        FVar26 = FVar25;
      }
      for (iVar10 = *(int *)((longlong)FVar26 +
                            (ulonglong)(TStack_41b58.HashSize - 1U & (uint)*puVar32) * 4);
          iVar10 != -1; iVar10 = *(int *)(lVar30 + 4 + (longlong)iVar10 * 0xc)) {
        if (*(uint *)(lVar30 + (longlong)iVar10 * 0xc) == (uint)*puVar32) goto LAB_141b16fac;
      }
    }
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41e78,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41e78,0);
    lVar30 = TStack_41b58.Elements._0_8_;
    FVar25 = TStack_41b58.Hash.SecondaryData;
    if (FStack_41e78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41e78.Data.AllocatorInstance.Data);
      lVar30 = TStack_41b58.Elements._0_8_;
      FVar25 = TStack_41b58.Hash.SecondaryData;
    }
LAB_141b16fac:
    puVar32 = (ulonglong *)((longlong)puVar32 + 4);
  } while (puVar32 != local_48);
  TStack_41b58.HashSize = 0;
  if (FVar25 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar25);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_41b58.Elements);
  pFVar13 = FAutomationTestFramework::Get();
  pFVar3 = pFVar13->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&FStack_41e68,L"Iteration");
  (*pcVar4)(pFVar3,&FStack_41e68,0,0);
  if (FStack_41e68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_41e68.Data.AllocatorInstance.Data);
  }
  puVar32 = (ulonglong *)(aiStack_40b8c + 1);
  iVar10 = 1;
  do {
    uVar38 = iVar10 << 8 ^ 0x9e3779b9U - iVar10;
    uVar9 = -(iVar10 + uVar38) ^ uVar38 >> 0xd;
    uVar36 = (iVar10 - uVar9) - uVar38 ^ uVar9 >> 0xc;
    uVar38 = (uVar38 - uVar36) - uVar9 ^ uVar36 << 0x10;
    uVar9 = (uVar9 - uVar38) - uVar36 ^ uVar38 >> 5;
    uVar36 = (uVar36 - uVar9) - uVar38 ^ uVar9 >> 3;
    uVar38 = (uVar38 - uVar36) - uVar9 ^ uVar36 << 10;
    *(uint *)puVar32 = (uVar9 - uVar38) - uVar36 ^ uVar38 >> 0xf;
    puVar32 = (ulonglong *)((longlong)puVar32 + 4);
    iVar10 = iVar10 + 1;
  } while (puVar32 != auStack_40788);
  piStack_41e58 = aiStack_40b8c + 1;
  uStack_41e50 = 0x100;
  TStack_41c08._12_4_ = uStack_41e4c;
  TStack_41c08.ArrayNum = 0x100;
  TStack_41a68.Elements._0_8_ = 0;
  TStack_41a68.Elements._8_8_ = 0;
  TStack_41a68.Elements._32_8_ = 0;
  TStack_41a68.Elements._40_4_ = 0;
  TStack_41a68.Elements._44_4_ = 0x80;
  TStack_41a68.Elements._48_4_ = 0xffffffff;
  TStack_41a68.Elements._52_4_ = 0;
  TStack_41a68.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TStack_41a68.HashSize = 0;
  TStack_41c08.DataPtr = piStack_41e58;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Append
            (&TStack_41a68,&TStack_41c08);
  if (0 < (int)(TStack_41a68.Elements._8_4_ - TStack_41a68.Elements._52_4_)) {
    piVar39 = aiStack_40b8c;
    uVar34 = uVar37;
    uVar20 = uVar37;
    do {
      piVar39 = (int *)((longlong)piVar39 + 4);
      if (*piVar39 != *(int *)(uVar34 + TStack_41a68.Elements._0_8_)) {
        pFVar13 = FAutomationTestFramework::Get();
        pFVar3 = pFVar13->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&FStack_41e48,L"Condition failed");
        (*pcVar4)(pFVar3,&FStack_41e48,0);
        if (FStack_41e48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_41e48.Data.AllocatorInstance.Data);
        }
      }
      uVar9 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar9;
      uVar34 = uVar34 + 0xc;
    } while ((int)uVar9 < (int)(TStack_41a68.Elements._8_4_ - TStack_41a68.Elements._52_4_));
  }
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::TIterator::TIterator
            ((TIterator *)auStack_41fd8,&TStack_41a68);
  uVar34 = uVar37;
  if (iStack_41fbc < *(int *)(lStack_41fc8 + 0x18)) {
    do {
      if ((uVar34 & 1) != 0) {
        TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::RemoveByIndex
                  (pTStack_41fb0,iStack_41fbc);
      }
      uStack_41fc0 = uStack_41fc0 & ~uStack_41fcc;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(auStack_41fd8 + 8));
      uVar34 = (ulonglong)((int)uVar34 + 1);
    } while (iStack_41fbc < *(int *)(lStack_41fc8 + 0x18));
  }
  if (TStack_41a68.Elements._8_4_ - TStack_41a68.Elements._52_4_ != 0x80) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41e38,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41e38,0);
    if (FStack_41e38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41e38.Data.AllocatorInstance.Data);
    }
  }
  TStack_41a68.HashSize = 0;
  if (TStack_41a68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_41a68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_41a68.Elements);
  pFVar13 = FAutomationTestFramework::Get();
  pFVar3 = pFVar13->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&FStack_41e28,L"Fixed Allocator");
  (*pcVar4)(pFVar3,&FStack_41e28,0,0);
  if (FStack_41e28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_41e28.Data.AllocatorInstance.Data);
  }
  TStack_413f8.Elements._784_8_ = ___xmm_00000000ffffffff0000004000000000;
  TStack_413f8.Elements._792_8_ = _UNK_150631d88;
  TStack_413f8.Elements._768_4_ = 0;
  TStack_413f8.Elements._772_4_ = 0x40;
  TStack_413f8.HashSize = 0;
  uStack_421ac = 0;
  do {
    TSparseSet<int,DefaultKeyFuncs<int,0>,TFixedSparseSetAllocator<64,2,4>_>::Emplace<int_const_&>
              (&TStack_413f8,&iStack_4202c,(bool *)&uStack_421ac);
    uStack_421ac = (int)uVar37 + 1;
    uVar37 = (ulonglong)uStack_421ac;
  } while ((int)uStack_421ac < 0x40);
  TStack_413f8.HashSize = 0;
  TSparseArray<TSparseSetElement<int>,TFixedSparseArrayAllocator<64>_>::
  ~TSparseArray<TSparseSetElement<int>,TFixedSparseArrayAllocator<64>_>(&TStack_413f8.Elements);
  pFVar13 = FAutomationTestFramework::Get();
  pFVar3 = pFVar13->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&FStack_41e18,L"Duplicate Entry Behavior");
  (*pcVar4)(pFVar3,&FStack_41e18,0,0);
  if (FStack_41e18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_41e18.Data.AllocatorInstance.Data);
  }
  auStack_41bf8._0_8_ = (FScriptContainerElement *)0x0;
  auStack_41bf8._8_8_ = 0;
  FStack_41bd8 = (ForElementType<unsigned_int>)0x0;
  iStack_41bd0 = 0;
  uStack_41bcc = 0x80;
  iStack_41bc8 = -1;
  iStack_41bc4 = 0;
  FStack_41bb8.Data = (FScriptContainerElement *)0x0;
  uStack_41bb0 = 0;
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0xc,4,1,(ForAnyElementType *)auStack_41bf8,(int *)(auStack_41bf8 + 8),
                      (int *)(auStack_41bf8 + 0xc));
  iVar10 = iStack_41bd0;
  lVar30 = 0x20;
  if (iStack_41bd0 == 0) {
    iVar33 = 0;
LAB_141b17467:
    if ((int)uStack_41bcc < iStack_41bd0 + 1) {
      uVar9 = uStack_41bcc + 0x1f >> 5;
      uVar36 = iStack_41bd0 + 0x20U >> 5;
      uVar37 = (ulonglong)uVar36;
      if (uVar36 < 5) {
        iVar12 = 4;
      }
      else {
        if (uVar9 < 5) {
          uVar9 = 0;
        }
        if (uVar9 == 0) {
          uVar34 = 4;
          if (4 < uVar37) {
            uVar34 = uVar37;
          }
        }
        else {
          uVar34 = (uVar37 * 3 >> 3) + 0x10 + uVar37;
        }
        uVar19 = FMemory::QuantizeSize(uVar34 * 4,0);
        iVar12 = (int)(uVar19 >> 2);
        if (iVar12 < (int)uVar36) {
          iVar12 = 0x7fffffff;
        }
      }
      uStack_41bcc = iVar12 << 5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_41bf8 + 0x10),iStack_41bd0);
    }
    iStack_41bd0 = iStack_41bd0 + 1;
    uVar36 = iStack_41bd0 >> 0x1f & 0x1f;
    uVar9 = iStack_41bd0 + uVar36;
    iVar12 = (uVar9 & 0x1f) - uVar36;
    if (iVar12 != 0) {
      FVar22 = (ForElementType<unsigned_int>)((longlong)auStack_41bf8 + 0x10);
      if (FStack_41bd8 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = FStack_41bd8;
      }
      puVar35 = (uint *)((longlong)FVar22 + (longlong)((int)uVar9 >> 5) * 4);
      *puVar35 = *puVar35 & 0xffffffffU >> (-(char)iVar12 & 0x1fU);
    }
  }
  else {
    iVar33 = (int)(iStack_41bd0 + (iStack_41bd0 >> 0x1f & 0x1fU)) >> 5;
    if (iVar33 != (int)((iStack_41bd0 + -1 >> 0x1f & 0x1fU) + iStack_41bd0 + -1) >> 5)
    goto LAB_141b17467;
    iStack_41bd0 = iStack_41bd0 + 1;
  }
  FVar22 = (ForElementType<unsigned_int>)((longlong)auStack_41bf8 + 0x10);
  if (FStack_41bd8 != (ForElementType<unsigned_int>)0x0) {
    FVar22 = FStack_41bd8;
  }
  puVar35 = (uint *)((longlong)FVar22 + (longlong)iVar33 * 4);
  *puVar35 = *puVar35 & ~(1 << ((byte)iVar10 & 0x1f));
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)auStack_41bf8,&FStack_41e08,iVar11);
  puVar35 = (uint *)0x0;
  puVar27 = puVar35;
  if (FStack_41e08.Pointer != (uint *)0x0) {
    *(uint *)FStack_41e08.Pointer = 0;
    *(uint *)((longlong)FStack_41e08.Pointer + 4) = 0xffffffff;
    puVar27 = FStack_41e08.Pointer;
  }
  uVar9 = *puVar27;
  if ((auStack_41bf8._8_4_ - iStack_41bc4 != 1) && (auStack_41bf8._8_4_ != iStack_41bc4)) {
    FVar23.Data = aFStack_41bc0;
    if (FStack_41bb8.Data != (FScriptContainerElement *)0x0) {
      FVar23.Data = FStack_41bb8.Data;
    }
    for (iVar10 = *(int *)(FVar23.Data + (ulonglong)(uStack_41bb0 - 1 & uVar9) * 4); iVar10 != -1;
        iVar10 = *(int *)(auStack_41bf8._0_8_ + (longlong)iVar10 * 0xc + 4)) {
      if (*(uint *)(auStack_41bf8._0_8_ + (longlong)iVar10 * 0xc) == uVar9) {
        if (iVar10 != -1) {
          *(uint *)(auStack_41bf8._0_8_ + (longlong)iVar10 * 0xc) = uVar9;
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)auStack_41bf8,FStack_41e08.Index,1);
          goto LAB_141b17865;
        }
        break;
      }
    }
  }
  uVar38 = auStack_41bf8._8_4_ - iStack_41bc4;
  uVar36 = 1;
  if (3 < uVar38) {
    uVar37 = (ulonglong)((uVar38 >> 1) + 7) * 2 + 1;
    lVar40 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar40 == 0; lVar40 = lVar40 + -1) {
      }
    }
    uStack_42030 = (undefined4)lVar40;
    uVar36 = 1 << ((byte)lVar40 & 0x1f);
  }
  if (((int)uVar38 < 1) || ((int)uVar36 <= (int)uStack_41bb0)) {
    uVar9 = uStack_41bb0 - 1 & uVar9;
    puVar27[2] = uVar9;
    FVar23.Data = aFStack_41bc0;
    if (FStack_41bb8.Data != (FScriptContainerElement *)0x0) {
      FVar23.Data = FStack_41bb8.Data;
    }
    uVar37 = (longlong)(int)uStack_41bb0 - 1U & (longlong)(int)uVar9;
    puVar27[1] = *(uint *)(FVar23.Data + uVar37 * 4);
    *(int *)(FVar23.Data + uVar37 * 4) = FStack_41e08.Index;
  }
  else {
    uStack_41bb0 = uVar36;
    if (FStack_41bb8.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_41bb8,0,0,4);
    }
    if (uVar36 != 0) {
      uVar9 = uVar36;
      if (uVar36 < 2) {
        if (FStack_41bb8.Data != (FScriptContainerElement *)0x0) {
          uVar9 = 0;
          goto LAB_141b17711;
        }
      }
      else {
LAB_141b17711:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  (&FStack_41bb8,0,uVar9,4);
      }
      if (0 < (int)uVar36) {
        uVar37 = (ulonglong)uVar36;
        puVar27 = puVar35;
        do {
          FVar23.Data = aFStack_41bc0;
          if (FStack_41bb8.Data != (FScriptContainerElement *)0x0) {
            FVar23.Data = FStack_41bb8.Data;
          }
          uVar34 = (longlong)(int)uVar36 - 1U & (ulonglong)puVar27;
          puVar27 = (uint *)((longlong)puVar27 + 1);
          *(undefined4 *)(FVar23.Data + uVar34 * 4) = 0xffffffff;
          uVar37 = uVar37 - 1;
        } while (uVar37 != 0);
      }
    }
    if ((uStack_41bb0 != 0) &&
       (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TConstIterator::TConstIterator
                  ((TConstIterator *)&plStack_42028,
                   (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)auStack_41bf8), TStack_42020.CurrentBitIndex < (TStack_42020.Array)->NumBits))
    {
      do {
        lVar18 = (longlong)TStack_42020.CurrentBitIndex;
        lVar40 = *plStack_42028;
        uVar9 = uStack_41bb0 - 1 & *(uint *)(lVar40 + lVar18 * 0xc);
        *(uint *)(lVar40 + 8 + lVar18 * 0xc) = uVar9;
        FVar23.Data = aFStack_41bc0;
        if (FStack_41bb8.Data != (FScriptContainerElement *)0x0) {
          FVar23.Data = FStack_41bb8.Data;
        }
        uVar37 = (longlong)(int)uStack_41bb0 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(lVar40 + 4 + lVar18 * 0xc) = *(undefined4 *)(FVar23.Data + uVar37 * 4);
        *(int *)(FVar23.Data + uVar37 * 4) = TStack_42020.CurrentBitIndex;
        TStack_42020.UnvisitedBitMask =
             TStack_42020.UnvisitedBitMask & ~TStack_42020._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_42020);
      } while (TStack_42020.CurrentBitIndex < (TStack_42020.Array)->NumBits);
    }
  }
LAB_141b17865:
  if (iStack_41bc4 == 0) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0xc,4,1,(ForAnyElementType *)auStack_41bf8,(int *)(auStack_41bf8 + 8),
                        (int *)(auStack_41bf8 + 0xc));
    iVar10 = iStack_41bd0;
    if (iStack_41bd0 == 0) {
      iVar33 = 0;
LAB_141b17906:
      if ((int)uStack_41bcc < iStack_41bd0 + 1) {
        uVar9 = uStack_41bcc + 0x1f >> 5;
        uVar36 = iStack_41bd0 + 0x20U >> 5;
        uVar37 = (ulonglong)uVar36;
        if (uVar36 < 5) {
          iVar12 = 4;
        }
        else {
          if (uVar9 < 5) {
            uVar9 = 0;
          }
          if (uVar9 == 0) {
            uVar34 = 4;
            if (4 < uVar37) {
              uVar34 = uVar37;
            }
          }
          else {
            uVar34 = (uVar37 * 3 >> 3) + 0x10 + uVar37;
          }
          uVar19 = FMemory::QuantizeSize(uVar34 * 4,0);
          iVar12 = (int)(uVar19 >> 2);
          if (iVar12 < (int)uVar36) {
            iVar12 = 0x7fffffff;
          }
        }
        uStack_41bcc = iVar12 << 5;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_41bf8 + 0x10),iStack_41bd0);
      }
      iStack_41bd0 = iStack_41bd0 + 1;
      uVar36 = iStack_41bd0 >> 0x1f & 0x1f;
      uVar9 = iStack_41bd0 + uVar36;
      iVar12 = (uVar9 & 0x1f) - uVar36;
      if (iVar12 != 0) {
        FVar22 = (ForElementType<unsigned_int>)((longlong)auStack_41bf8 + 0x10);
        if (FStack_41bd8 != (ForElementType<unsigned_int>)0x0) {
          FVar22 = FStack_41bd8;
        }
        puVar27 = (uint *)((longlong)FVar22 + (longlong)((int)uVar9 >> 5) * 4);
        *puVar27 = *puVar27 & 0xffffffffU >> (-(char)iVar12 & 0x1fU);
      }
    }
    else {
      iVar33 = (int)(iStack_41bd0 + (iStack_41bd0 >> 0x1f & 0x1fU)) >> 5;
      if (iVar33 != (int)((iStack_41bd0 + -1 >> 0x1f & 0x1fU) + iStack_41bd0 + -1) >> 5)
      goto LAB_141b17906;
      iStack_41bd0 = iStack_41bd0 + 1;
    }
    FVar22 = (ForElementType<unsigned_int>)((longlong)auStack_41bf8 + 0x10);
    if (FStack_41bd8 != (ForElementType<unsigned_int>)0x0) {
      FVar22 = FStack_41bd8;
    }
    puVar27 = (uint *)((longlong)FVar22 + (longlong)iVar33 * 4);
    *puVar27 = *puVar27 & ~(1 << ((byte)iVar10 & 0x1f));
    iVar10 = iStack_41bc8;
  }
  else {
    iStack_41bc4 = iStack_41bc4 + -1;
    iVar10 = *(int *)(auStack_41bf8._0_8_ + (longlong)iStack_41bc8 * 0xc + 4);
    iVar11 = iStack_41bc8;
    if (iStack_41bc4 != 0) {
      *(undefined4 *)(auStack_41bf8._0_8_ + (longlong)iVar10 * 0xc) = 0xffffffff;
    }
  }
  iStack_41bc8 = iVar10;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)auStack_41bf8,&FStack_41df8,iVar11);
  if (FStack_41df8.Pointer != (uint *)0x0) {
    *(uint *)FStack_41df8.Pointer = 1;
    *(uint *)((longlong)FStack_41df8.Pointer + 4) = 0xffffffff;
    puVar35 = FStack_41df8.Pointer;
  }
  uVar9 = *puVar35;
  if ((auStack_41bf8._8_4_ - iStack_41bc4 != 1) && (auStack_41bf8._8_4_ != iStack_41bc4)) {
    FVar23.Data = aFStack_41bc0;
    if (FStack_41bb8.Data != (FScriptContainerElement *)0x0) {
      FVar23.Data = FStack_41bb8.Data;
    }
    for (iVar10 = *(int *)(FVar23.Data + (ulonglong)(uStack_41bb0 - 1 & uVar9) * 4); iVar10 != -1;
        iVar10 = *(int *)(auStack_41bf8._0_8_ + (longlong)iVar10 * 0xc + 4)) {
      if (*(uint *)(auStack_41bf8._0_8_ + (longlong)iVar10 * 0xc) == uVar9) {
        if (iVar10 != -1) {
          *(uint *)(auStack_41bf8._0_8_ + (longlong)iVar10 * 0xc) = uVar9;
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)auStack_41bf8,FStack_41df8.Index,1);
          goto LAB_141b17d21;
        }
        break;
      }
    }
  }
  uVar38 = auStack_41bf8._8_4_ - iStack_41bc4;
  uVar36 = 1;
  if (3 < uVar38) {
    uVar37 = (ulonglong)((uVar38 >> 1) + 7) * 2 + 1;
    lVar40 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar40 == 0; lVar40 = lVar40 + -1) {
      }
    }
    uStack_4204c = (undefined4)lVar40;
    uVar36 = 1 << ((byte)lVar40 & 0x1f);
  }
  if (((int)uVar38 < 1) || ((int)uVar36 <= (int)uStack_41bb0)) {
    uVar9 = uStack_41bb0 - 1 & uVar9;
    puVar35[2] = uVar9;
    FVar23.Data = aFStack_41bc0;
    if (FStack_41bb8.Data != (FScriptContainerElement *)0x0) {
      FVar23.Data = FStack_41bb8.Data;
    }
    uVar37 = (longlong)(int)uStack_41bb0 - 1U & (longlong)(int)uVar9;
    puVar35[1] = *(uint *)(FVar23.Data + uVar37 * 4);
    *(int *)(FVar23.Data + uVar37 * 4) = FStack_41df8.Index;
  }
  else {
    uStack_41bb0 = uVar36;
    if (FStack_41bb8.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_41bb8,0,0,4);
    }
    if (uVar36 != 0) {
      uVar9 = uVar36;
      if (uVar36 < 2) {
        if (FStack_41bb8.Data != (FScriptContainerElement *)0x0) {
          uVar9 = 0;
          goto LAB_141b17bbe;
        }
      }
      else {
LAB_141b17bbe:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  (&FStack_41bb8,0,uVar9,4);
      }
      if (0 < (int)uVar36) {
        uVar37 = 0;
        uVar34 = (ulonglong)uVar36;
        do {
          FVar23.Data = aFStack_41bc0;
          if (FStack_41bb8.Data != (FScriptContainerElement *)0x0) {
            FVar23.Data = FStack_41bb8.Data;
          }
          uVar20 = uVar37 & (longlong)(int)uVar36 - 1U;
          uVar37 = uVar37 + 1;
          *(undefined4 *)(FVar23.Data + uVar20 * 4) = 0xffffffff;
          uVar34 = uVar34 - 1;
        } while (uVar34 != 0);
      }
    }
    if ((uStack_41bb0 != 0) &&
       (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TConstIterator::TConstIterator
                  ((TConstIterator *)&plStack_42000,
                   (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)auStack_41bf8), TStack_41ff8.CurrentBitIndex < (TStack_41ff8.Array)->NumBits))
    {
      do {
        lVar18 = (longlong)TStack_41ff8.CurrentBitIndex;
        lVar40 = *plStack_42000;
        uVar9 = uStack_41bb0 - 1 & *(uint *)(lVar40 + lVar18 * 0xc);
        *(uint *)(lVar40 + 8 + lVar18 * 0xc) = uVar9;
        FVar23.Data = aFStack_41bc0;
        if (FStack_41bb8.Data != (FScriptContainerElement *)0x0) {
          FVar23.Data = FStack_41bb8.Data;
        }
        uVar37 = (longlong)(int)uStack_41bb0 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(lVar40 + 4 + lVar18 * 0xc) = *(undefined4 *)(FVar23.Data + uVar37 * 4);
        *(int *)(FVar23.Data + uVar37 * 4) = TStack_41ff8.CurrentBitIndex;
        TStack_41ff8.UnvisitedBitMask =
             TStack_41ff8.UnvisitedBitMask & ~TStack_41ff8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_41ff8);
      } while (TStack_41ff8.CurrentBitIndex < (TStack_41ff8.Array)->NumBits);
    }
  }
LAB_141b17d21:
  uStack_420e0 = 2;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Emplace<int>
            ((TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *)auStack_41bf8,
             &iStack_42050,(bool *)&uStack_420e0);
  uStack_420dc = 3;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Emplace<int>
            ((TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *)auStack_41bf8,
             &FStack_42074.Data.ArrayMax,(bool *)&uStack_420dc);
  uStack_420d8 = 2;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Emplace<int>
            ((TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator> *)auStack_41bf8,
             &iStack_42078,(bool *)&uStack_420d8);
  iVar11 = 0;
  iVar10 = 0;
  if (0 < auStack_41bf8._8_4_ - iStack_41bc4) {
    lVar40 = 0;
    do {
      if (*(int *)(auStack_41bf8._0_8_ + lVar40) != iVar10) {
        pFVar13 = FAutomationTestFramework::Get();
        pFVar3 = pFVar13->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&FStack_41de8,L"Condition failed");
        (*pcVar4)(pFVar3);
        if (FStack_41de8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_41de8.Data.AllocatorInstance.Data);
        }
      }
      iVar10 = iVar10 + 1;
      lVar40 = lVar40 + 0xc;
    } while (iVar10 < auStack_41bf8._8_4_ - iStack_41bc4);
  }
  uStack_41bb0 = 0;
  if (FStack_41bb8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_41bb8.Data);
  }
  iVar10 = SUB84(auStack_41bf8._8_8_,4);
  auStack_41bf8._8_8_ = auStack_41bf8._8_8_ & 0xffffffff00000000;
  if (iVar10 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)auStack_41bf8,0,(int *)(auStack_41bf8 + 0xc));
  }
  iStack_41bc8 = -1;
  iStack_41bc4 = 0;
  iStack_41bd0 = 0;
  if (0x80 < uStack_41bcc) {
    uStack_41bcc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_41bf8 + 0x10),0);
  }
  if (FStack_41bd8 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FStack_41bd8);
  }
  if ((FScriptContainerElement *)auStack_41bf8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_41bf8._0_8_);
  }
  pFVar13 = FAutomationTestFramework::Get();
  pFVar3 = pFVar13->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&FStack_41dd8,L"Duplicate Support");
  (*pcVar4)(pFVar3,&FStack_41dd8,0);
  if (FStack_41dd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_41dd8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&FStack_41048,L"Zero");
  ::FString::FString(&FStack_41038,L"One");
  ::FString::FString(&FStack_41028,L"Two");
  ::FString::FString(&FStack_41018,L"Three");
  auStack_41ba8._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)0x0;
  auStack_41ba8._8_8_ = 0;
  FStack_41b88 = (ForElementType<unsigned_int>)0x0;
  iStack_41b80 = 0;
  iStack_41b7c = 0x80;
  iStack_41b78 = -1;
  iStack_41b74 = 0;
  FStack_41b68 = (ForElementType<FSetElementId>)0x0;
  iStack_41b60 = 0;
  do {
    pFVar14 = &FStack_41048;
    do {
      TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator>::
      Emplace<FString_const_&>
                ((TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator> *)
                 auStack_41ba8,&FStack_42074,(bool *)pFVar14);
      pFVar14 = pFVar14 + 1;
    } while (pFVar14 != &FStack_41008);
    lVar30 = lVar30 + -1;
  } while (lVar30 != 0);
  if (auStack_41ba8._8_4_ - iStack_41b74 != 0x80) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41dc8,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41dc8,0);
    if (FStack_41dc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41dc8.Data.AllocatorInstance.Data);
    }
  }
  TStack_42100.Set =
       (TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator> *)auStack_41ba8;
  TStack_42100.Key = &FStack_41038;
  TStack_42100.Index = 0xffffffff;
  if (iStack_41b60 == 0) {
    TStack_42100.NextIndex = 0xffffffff;
LAB_141b18229:
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41d98,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41d98,0);
    if (FStack_41d98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41d98.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (FStack_41038.Data.ArrayNum == 0) {
      pwVar28 = L"";
      iVar10 = iVar11;
    }
    else {
      pwVar28 = (wchar_t *)FStack_41038.Data.AllocatorInstance.Data;
      iVar10 = FStack_41038.Data.ArrayNum + -1;
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar28);
    FVar25 = (ForElementType<FSetElementId>)auStack_41b70;
    if (FStack_41b68 != (ForElementType<FSetElementId>)0x0) {
      FVar25 = FStack_41b68;
    }
    TStack_42100.NextIndex =
         *(uint *)((longlong)FVar25 + (longlong)(int)(iStack_41b60 - 1U & uVar9) * 4);
    TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator>::TBaseKeyIterator<1>::
    operator++(&TStack_42100);
    pFVar14 = TStack_42100.Key;
    pTVar7 = TStack_42100.Set;
    uVar9 = TStack_42100.NextIndex;
    if (TStack_42100.Index == 0xffffffff) goto LAB_141b18229;
    do {
      uVar36 = uVar9;
      iVar10 = TStack_42100.Index;
      uVar9 = TStack_42100.Index & 0x80000003;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
      }
      if (uVar9 != 1) {
        pFVar13 = FAutomationTestFramework::Get();
        pFVar3 = pFVar13->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&FStack_41db8,L"Condition failed");
        (*pcVar4)(pFVar3,&FStack_41db8,0);
        if (FStack_41db8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_41db8.Data.AllocatorInstance.Data);
        }
      }
      lVar30 = *(longlong *)&pTVar7->Elements;
      iVar33 = *(int *)(lVar30 + 8 + (longlong)iVar10 * 0x18);
      if (iVar33 == FStack_41038.Data.ArrayNum) {
        if (1 < iVar33) {
          iVar10 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)(lVar30 + (longlong)iVar10 * 0x18),
                              (wchar_t *)FStack_41038.Data.AllocatorInstance.Data);
          bVar8 = iVar10 == 0;
          goto LAB_141b18159;
        }
      }
      else {
        bVar8 = iVar33 + FStack_41038.Data.ArrayNum == 1;
LAB_141b18159:
        if (!bVar8) {
          pFVar13 = FAutomationTestFramework::Get();
          pFVar3 = pFVar13->CurrentTest;
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
          ::FString::FString(&FStack_41da8,L"Condition failed");
          (*pcVar4)(pFVar3,&FStack_41da8);
          if (FStack_41da8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_41da8.Data.AllocatorInstance.Data);
          }
        }
      }
      uVar9 = uVar36;
      TStack_42100.Index = uVar36;
      if (uVar36 != 0xffffffff) {
        do {
          lVar30 = *(longlong *)&pTVar7->Elements;
          iVar10 = (pFVar14->Data).ArrayNum;
          lVar40 = (longlong)(int)uVar36;
          iVar33 = *(int *)(lVar30 + 8 + lVar40 * 0x18);
          uVar9 = *(uint *)(lVar30 + 0x10 + lVar40 * 0x18);
          TStack_42100.NextIndex = uVar9;
          if (iVar33 == iVar10) {
            if (iVar33 < 2) break;
            iVar10 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)(lVar30 + lVar40 * 0x18),
                                (wchar_t *)(pFVar14->Data).AllocatorInstance.Data);
            bVar8 = iVar10 == 0;
          }
          else {
            bVar8 = iVar33 + iVar10 == 1;
          }
          if ((bVar8) || (uVar36 = uVar9, uVar9 == 0xffffffff)) break;
        } while( true );
      }
      iVar11 = iVar11 + 1;
      TStack_42100.Index = uVar36;
    } while (uVar36 != 0xffffffff);
    TStack_42100.Index = 0xffffffff;
    if (iVar11 != 0x20) goto LAB_141b18229;
  }
  pFStack_42060 = &FStack_41048;
  ppFStack_42058 = &pFStack_42060;
  if (0 < auStack_41ba8._8_4_ - iStack_41b74) {
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)auStack_41ba8);
    uVar29 = auStack_41ba8._0_8_;
    iVar10 = auStack_41ba8._8_4_ - iStack_41b74;
    if ((iVar10 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      pTVar21 = (TSetTestHelper<FSparseSetTestResolver> *)(*pcVar4)();
      return pTVar21;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator>::FElementCompareClass<_TSetTestHelper<FSparseSetTestResolver>::TSetTestHelper<FSparseSetTestResolver>_[::A]::<lambda_1>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)uVar29,iVar10,FStack_421b8
               ,(FElementCompareClass<_public:___cdecl_TSetTestHelper<FSparseSetTestResolver>::TSetTestHelper<FSparseSetTestResolver>(void)_[::A]::<lambda_1>_>
                 *)&ppFStack_42058);
  }
  TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator>::Rehash
            ((TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator> *)
             auStack_41ba8);
  iVar11 = 0;
  TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator>::TBaseKeyIterator<1>::
  TBaseKeyIterator<1>(&TStack_420a0,
                      (TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator> *)
                      auStack_41ba8,&FStack_41038);
  iVar10 = TStack_420a0.NextIndex;
  if (TStack_420a0.Index == -1) {
LAB_141b18481:
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41d68,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41d68,0);
    if (FStack_41d68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41d68.Data.AllocatorInstance.Data);
    }
  }
  else {
    do {
      iVar33 = TStack_420a0.Index;
      if (0x1f < TStack_420a0.Index - 0x20U) {
        pFVar13 = FAutomationTestFramework::Get();
        pFVar3 = pFVar13->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&FStack_41d88,L"Condition failed");
        (*pcVar4)(pFVar3,&FStack_41d88,0);
        if (FStack_41d88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_41d88.Data.AllocatorInstance.Data);
        }
      }
      iVar12 = *(int *)(*(longlong *)&(TStack_420a0.Set)->Elements + 8 + (longlong)iVar33 * 0x18);
      if (iVar12 == FStack_41038.Data.ArrayNum) {
        if (1 < iVar12) {
          iVar33 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)
                               (*(longlong *)&(TStack_420a0.Set)->Elements + (longlong)iVar33 * 0x18
                               ),(wchar_t *)FStack_41038.Data.AllocatorInstance.Data);
          bVar8 = iVar33 == 0;
          goto LAB_141b183c7;
        }
      }
      else {
        bVar8 = iVar12 + FStack_41038.Data.ArrayNum == 1;
LAB_141b183c7:
        if (!bVar8) {
          pFVar13 = FAutomationTestFramework::Get();
          pFVar3 = pFVar13->CurrentTest;
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
          ::FString::FString(&FStack_41d78,L"Condition failed");
          (*pcVar4)(pFVar3,&FStack_41d78);
          if (FStack_41d78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_41d78.Data.AllocatorInstance.Data);
          }
        }
      }
      TStack_420a0.Index = iVar10;
      iVar33 = iVar10;
      if (iVar10 != -1) {
        do {
          lVar30 = *(longlong *)&(TStack_420a0.Set)->Elements;
          iVar12 = ((TStack_420a0.Key)->Data).ArrayNum;
          lVar40 = (longlong)iVar33;
          iVar2 = *(int *)(lVar30 + 8 + lVar40 * 0x18);
          iVar10 = *(int *)(lVar30 + 0x10 + lVar40 * 0x18);
          TStack_420a0.NextIndex = iVar10;
          if (iVar2 == iVar12) {
            if (iVar2 < 2) break;
            iVar12 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)(lVar30 + lVar40 * 0x18),
                                (wchar_t *)((TStack_420a0.Key)->Data).AllocatorInstance.Data);
            bVar8 = iVar12 == 0;
          }
          else {
            bVar8 = iVar2 + iVar12 == 1;
          }
          if ((bVar8) || (iVar33 = iVar10, iVar10 == -1)) break;
        } while( true );
      }
      TStack_420a0.Index = iVar33;
      iVar11 = iVar11 + 1;
    } while (TStack_420a0.Index != -1);
    if (iVar11 != 0x20) goto LAB_141b18481;
  }
  uVar9 = 0;
  TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator>::TBaseKeyIterator<0>::
  TBaseKeyIterator<0>(&TStack_420b8,
                      (TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator> *)
                      auStack_41ba8,&FStack_41038);
  iVar10 = TStack_420b8.NextIndex;
  if (TStack_420b8.Index == -1) {
LAB_141b18568:
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41d58,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41d58,0);
    if (FStack_41d58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41d58.Data.AllocatorInstance.Data);
    }
  }
  else {
    do {
      if ((uVar9 & 1) == 0) {
        TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator>::RemoveByIndex
                  (TStack_420b8.Set,TStack_420b8.Index);
      }
      iVar11 = iVar10;
      TStack_420b8.Index = iVar10;
      if (iVar10 != -1) {
        do {
          lVar30 = *(longlong *)&(TStack_420b8.Set)->Elements;
          iVar33 = ((TStack_420b8.Key)->Data).ArrayNum;
          lVar40 = (longlong)iVar11;
          iVar12 = *(int *)(lVar30 + 8 + lVar40 * 0x18);
          iVar10 = *(int *)(lVar30 + 0x10 + lVar40 * 0x18);
          TStack_420b8.NextIndex = iVar10;
          if (iVar12 == iVar33) {
            if (iVar12 < 2) break;
            iVar33 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)(lVar30 + lVar40 * 0x18),
                                (wchar_t *)((TStack_420b8.Key)->Data).AllocatorInstance.Data);
            bVar8 = iVar33 == 0;
          }
          else {
            bVar8 = iVar12 + iVar33 == 1;
          }
          if ((bVar8) || (iVar11 = iVar10, iVar10 == -1)) break;
        } while( true );
      }
      uVar9 = uVar9 + 1;
      TStack_420b8.Index = iVar11;
    } while (iVar11 != -1);
    TStack_420b8.Index = -1;
    if (uVar9 != 0x20) goto LAB_141b18568;
  }
  TStack_42118.Set =
       (TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator> *)auStack_41ba8;
  iVar10 = 0;
  TStack_42118.Key = &FStack_41038;
  TStack_42118.Index = -1;
  if (iStack_41b60 == 0) {
    TStack_42118.NextIndex = -1;
LAB_141b1879a:
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41d28,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41d28,0);
    if (FStack_41d28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41d28.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (FStack_41038.Data.ArrayNum == 0) {
      pwVar28 = L"";
      iVar11 = 0;
    }
    else {
      iVar11 = FStack_41038.Data.ArrayNum + -1;
      pwVar28 = (wchar_t *)FStack_41038.Data.AllocatorInstance.Data;
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar28);
    FVar25 = (ForElementType<FSetElementId>)auStack_41b70;
    if (FStack_41b68 != (ForElementType<FSetElementId>)0x0) {
      FVar25 = FStack_41b68;
    }
    TStack_42118.NextIndex =
         *(int *)((longlong)FVar25 + (longlong)(int)(iStack_41b60 - 1U & uVar9) * 4);
    TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator>::TBaseKeyIterator<1>::
    operator++(&TStack_42118);
    pFVar14 = TStack_42118.Key;
    pTVar7 = TStack_42118.Set;
    iVar11 = TStack_42118.NextIndex;
    if (TStack_42118.Index == -1) goto LAB_141b1879a;
    do {
      iVar33 = TStack_42118.Index;
      if (0x1f < TStack_42118.Index - 0x20U) {
        pFVar13 = FAutomationTestFramework::Get();
        pFVar3 = pFVar13->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&FStack_41d48,L"Condition failed");
        (*pcVar4)(pFVar3,&FStack_41d48,0);
        if (FStack_41d48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_41d48.Data.AllocatorInstance.Data);
        }
      }
      lVar30 = *(longlong *)&pTVar7->Elements;
      iVar12 = *(int *)(lVar30 + 8 + (longlong)iVar33 * 0x18);
      if (iVar12 == FStack_41038.Data.ArrayNum) {
        if (1 < iVar12) {
          iVar33 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)(lVar30 + (longlong)iVar33 * 0x18),
                              (wchar_t *)FStack_41038.Data.AllocatorInstance.Data);
          bVar8 = iVar33 == 0;
          goto LAB_141b186d7;
        }
      }
      else {
        bVar8 = iVar12 + FStack_41038.Data.ArrayNum == 1;
LAB_141b186d7:
        if (!bVar8) {
          pFVar13 = FAutomationTestFramework::Get();
          pFVar3 = pFVar13->CurrentTest;
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
          ::FString::FString(&FStack_41d38,L"Condition failed");
          (*pcVar4)(pFVar3,&FStack_41d38);
          if (FStack_41d38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_41d38.Data.AllocatorInstance.Data);
          }
        }
      }
      TStack_42118.Index = iVar11;
      iVar33 = iVar11;
      if (iVar11 != -1) {
        do {
          lVar30 = *(longlong *)&pTVar7->Elements;
          iVar12 = (pFVar14->Data).ArrayNum;
          lVar40 = (longlong)iVar33;
          iVar2 = *(int *)(lVar30 + 8 + lVar40 * 0x18);
          iVar11 = *(int *)(lVar30 + 0x10 + lVar40 * 0x18);
          TStack_42118.NextIndex = iVar11;
          if (iVar2 == iVar12) {
            if (iVar2 < 2) break;
            iVar12 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)(lVar30 + lVar40 * 0x18),
                                (wchar_t *)(pFVar14->Data).AllocatorInstance.Data);
            bVar8 = iVar12 == 0;
          }
          else {
            bVar8 = iVar2 + iVar12 == 1;
          }
          if ((bVar8) || (iVar33 = iVar11, iVar11 == -1)) break;
        } while( true );
      }
      TStack_42118.Index = iVar33;
      iVar10 = iVar10 + 1;
    } while (TStack_42118.Index != -1);
    if (iVar10 != 0x10) goto LAB_141b1879a;
  }
  if (auStack_41ba8._8_4_ == iStack_41b74) {
LAB_141b18830:
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41d18,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41d18,0);
    if (FStack_41d18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41d18.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (FStack_41038.Data.ArrayNum == 0) {
      pwVar28 = L"";
      iVar10 = 0;
    }
    else {
      iVar10 = FStack_41038.Data.ArrayNum + -1;
      pwVar28 = (wchar_t *)FStack_41038.Data.AllocatorInstance.Data;
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar28);
    iVar10 = TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator>::
             RemoveImpl<FString>((TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator>
                                  *)auStack_41ba8,uVar9,&FStack_41038);
    if (iVar10 != 0x10) goto LAB_141b18830;
  }
  if (auStack_41ba8._8_4_ - iStack_41b74 != 0x60) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41d08,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41d08,0);
    if (FStack_41d08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41d08.Data.AllocatorInstance.Data);
    }
  }
  iVar10 = 0;
  if (FStack_41038.Data.ArrayNum != 0) {
    pFStack_420c0 = FStack_41038.Data.AllocatorInstance.Data;
    iVar10 = FStack_41038.Data.ArrayNum + -1;
  }
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)pFStack_420c0);
  if (auStack_41ba8._8_4_ != iStack_41b74) {
    FVar25 = (ForElementType<FSetElementId>)auStack_41b70;
    if (FStack_41b68 != (ForElementType<FSetElementId>)0x0) {
      FVar25 = FStack_41b68;
    }
    iVar10 = *(int *)((longlong)FVar25 + (ulonglong)(iStack_41b60 - 1U & uVar9) * 4);
    pTVar24 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)auStack_41ba8._0_8_;
    uVar29 = FStack_41038.Data._8_8_;
    while (iVar10 != -1) {
      lVar30 = (longlong)iVar10;
      iVar11 = *(int *)((longlong)pTVar24 + lVar30 * 0x18 + 8);
      if (iVar11 == (int)uVar29) {
        if (1 < iVar11) {
          iVar11 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)pTVar24[lVar30]._s_1,
                              (wchar_t *)FStack_41038.Data.AllocatorInstance.Data);
          bVar8 = iVar11 == 0;
          pTVar24 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)auStack_41ba8._0_8_;
          uVar29 = FStack_41038.Data._8_8_;
          goto LAB_141b1898b;
        }
LAB_141b1899d:
        if ((iVar10 != -1) &&
           (pTVar24 + lVar30 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)0x0)) {
          pFVar13 = FAutomationTestFramework::Get();
          pFVar3 = pFVar13->CurrentTest;
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
          ::FString::FString(&FStack_41cf8,L"Condition failed");
          (*pcVar4)(pFVar3,&FStack_41cf8,0);
          if (FStack_41cf8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_41cf8.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      bVar8 = iVar11 + (int)uVar29 == 1;
LAB_141b1898b:
      if (bVar8) goto LAB_141b1899d;
      iVar10 = *(int *)((longlong)pTVar24 + lVar30 * 0x18 + 0x10);
    }
  }
  iStack_41b60 = 0;
  if (FStack_41b68 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_41b68);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_41ba8);
  pFVar14 = &FStack_41008;
  lVar30 = 4;
  do {
    pFVar5 = pFVar14[-1].Data.AllocatorInstance.Data;
    pFVar14 = pFVar14 + -1;
    lVar30 = lVar30 + -1;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
  } while (lVar30 != 0);
  pFVar13 = FAutomationTestFramework::Get();
  pFVar3 = pFVar13->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&FStack_41ce8,L"Optional Support");
  (*pcVar4)(pFVar3,&FStack_41ce8,0,0);
  if (FStack_41ce8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_41ce8.Data.AllocatorInstance.Data);
  }
  TStack_42168.Elements._0_8_ = 0;
  TStack_42168.Elements._8_8_ = 0xffffffff00000000;
  TStack_42168.Elements._32_8_ = 0;
  TStack_42168.Elements._40_4_ = 0;
  TStack_42168.Elements._44_4_ = 0x80;
  TStack_42168.Elements._48_4_ = 0xffffffff;
  TStack_42168.Elements._52_4_ = 0;
  TStack_42168.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TStack_42168._72_8_ = (ulonglong)(uint)TStack_42168._76_4_ << 0x20;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_42168.Elements);
  TStack_42168.Hash.InlineData[0] = '\0';
  TStack_42168.Hash.InlineData[1] = '\0';
  TStack_42168.Hash.InlineData[2] = '\0';
  TStack_42168.Hash.InlineData[3] = '\0';
  TStack_42168.Hash._padding_ = 0;
  TStack_42168.Elements._16_8_ = 0;
  TStack_42168.Elements._24_8_ = 0;
  TStack_42168._72_8_ = 0;
  TStack_42168.Elements._0_8_ = 0;
  TStack_42168.Elements._8_8_ = 0;
  TStack_42168.Elements._32_8_ = 0;
  TStack_42168.Elements._40_4_ = 0;
  TStack_42168.Elements._44_4_ = 0x80;
  TStack_42168.Elements._48_4_ = 0xffffffff;
  TStack_42168.Elements._52_4_ = 0;
  TStack_42168.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  abStack_420d4[0] = true;
  abStack_420d4[1] = false;
  abStack_420d4[2] = false;
  abStack_420d4[3] = false;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Emplace<int>
            (&TStack_42168,(int *)((longlong)&FStack_42074.Data.AllocatorInstance.Data + 4),
             abStack_420d4);
  if ((TStack_42168.Elements._12_4_ == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar21 = (TSetTestHelper<FSparseSetTestResolver> *)(*pcVar4)();
    return pTVar21;
  }
  abStack_421a8[0] = true;
  abStack_421a8[1] = false;
  abStack_421a8[2] = false;
  abStack_421a8[3] = false;
  TSparseSet<int,DefaultKeyFuncs<int,0>,FDefaultSparseSetAllocator>::Emplace<int>
            (&TStack_42168,&FStack_42074.Data.ArrayNum,abStack_421a8);
  if ((TStack_42168.Elements._12_4_ == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar21 = (TSetTestHelper<FSparseSetTestResolver> *)(*pcVar4)();
    return pTVar21;
  }
  if (TStack_42168.Elements._8_4_ - TStack_42168.Elements._52_4_ != 2) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41cd8,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41cd8,0);
    if (FStack_41cd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41cd8.Data.AllocatorInstance.Data);
    }
  }
  if (TStack_42168.Elements._12_4_ == -1) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41cc8,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41cc8,0);
    if (FStack_41cc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41cc8.Data.AllocatorInstance.Data);
    }
    if (TStack_42168.Elements._12_4_ == -1) goto LAB_141b18c7f;
  }
  TStack_42168._72_8_ = TStack_42168._72_8_ & 0xffffffff00000000;
  if (TStack_42168.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_42168.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_42168.Elements);
  TStack_42168.Elements._0_8_ = 0;
  TStack_42168.Elements._8_8_ = 0xffffffff00000000;
  TStack_42168.Elements._32_8_ = 0;
  TStack_42168.Elements._40_4_ = 0;
  TStack_42168.Elements._44_4_ = 0x80;
  TStack_42168.Elements._48_4_ = 0xffffffff;
  TStack_42168.Elements._52_4_ = 0;
  TStack_42168.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TStack_42168._72_8_ = TStack_42168._72_8_ & 0xffffffff00000000;
LAB_141b18c7f:
  if (TStack_42168.Elements._8_4_ != TStack_42168.Elements._52_4_) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41cb8,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41cb8,0);
    if (FStack_41cb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41cb8.Data.AllocatorInstance.Data);
    }
  }
  if (TStack_42168.Elements._12_4_ != -1) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&FStack_41ca8,L"Condition failed");
    (*pcVar4)(pFVar3,&FStack_41ca8,0);
    if (FStack_41ca8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_41ca8.Data.AllocatorInstance.Data);
    }
    if (TStack_42168.Elements._12_4_ != -1) {
      TStack_42168._72_8_ = TStack_42168._72_8_ & 0xffffffff00000000;
      if (TStack_42168.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)TStack_42168.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&TStack_42168.Elements);
    }
  }
  return pTStack_420c8;
}

