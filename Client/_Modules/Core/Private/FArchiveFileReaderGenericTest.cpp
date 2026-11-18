// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// ~FArchiveFileReaderGenericTest @ 141becb40

void __thiscall
FArchiveFileReaderGenericTest::~FArchiveFileReaderGenericTest(FArchiveFileReaderGenericTest *this)

{
  IFileHandle *pIVar1;
  FScriptContainerElement *pFVar2;
  IFileManager *pIVar3;
  wchar_t *pwVar4;
  
  pIVar1 = (this->ReadHandle).Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    (this->ReadHandle).Ptr = (IFileHandle *)0x0;
    (**(code **)*pIVar1)(pIVar1,1);
  }
  if (1 < (this->TestFileName).Data.ArrayNum) {
    pIVar3 = IFileManager::Get();
    if ((this->TestFileName).Data.ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(this->TestFileName).Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar3 + 0x38))(pIVar3,pwVar4,0,1,1);
  }
  ::FString::Empty(&this->TestFileName);
  pIVar1 = (this->ReadHandle).Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pFVar2 = (this->TestFileName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// CreateTestFile @ 141bfc600

void __thiscall FArchiveFileReaderGenericTest::CreateTestFile(FArchiveFileReaderGenericTest *this)

{
  FScriptContainerElement *pFVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  IFileHandle *pIVar4;
  longlong lVar5;
  int iVar6;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar7;
  wchar_t *pwVar8;
  FArchiveFileReaderGenericTest *pFVar9;
  longlong *plVar10;
  FAutomationTestFramework *pFVar11;
  IFileHandle *pIVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  int iVar15;
  ForAnyElementType local_28;
  int local_20 [2];
  FString local_18;
  
  IFileManager::Get();
  this_00 = FPlatformFileManager::Get();
  pIVar7 = FPlatformFileManager::GetPlatformFile(this_00);
  pwVar8 = FWindowsPlatformProcess::UserTempDir();
  pFVar9 = (FArchiveFileReaderGenericTest *)
           FPaths::CreateTempFilename(&local_18,pwVar8,L"ArchiveFileReaderGenericTest",L".tmp");
  iVar15 = 0;
  if (this != pFVar9) {
    pFVar1 = (this->TestFileName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->TestFileName).Data.AllocatorInstance.Data =
         (pFVar9->TestFileName).Data.AllocatorInstance.Data;
    (pFVar9->TestFileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TestFileName).Data.ArrayNum = (pFVar9->TestFileName).Data.ArrayNum;
    (this->TestFileName).Data.ArrayMax = (pFVar9->TestFileName).Data.ArrayMax;
    (pFVar9->TestFileName).Data.ArrayNum = 0;
    (pFVar9->TestFileName).Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((this->TestFileName).Data.ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(this->TestFileName).Data.AllocatorInstance.Data;
  }
  plVar10 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x110))(pIVar7,pwVar8,0,0);
  if (plVar10 == (longlong *)0x0) {
    pFVar11 = FAutomationTestFramework::Get();
    pFVar2 = pFVar11->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"Could not create test file %s.");
    (*pcVar3)(pFVar2,&local_18,0);
    FVar14.Data = local_18.Data.AllocatorInstance.Data;
  }
  else {
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20[0] = 0;
    local_20[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x20011,&local_28,local_20,local_20 + 1);
    FVar14.Data = local_28.Data;
    if (0 < local_20[0]) {
      do {
        iVar6 = iVar15 + -0x42000000;
        iVar15 = iVar15 + 1;
        *(int *)FVar14.Data = iVar6;
        FVar14.Data = FVar14.Data + 4;
      } while (iVar15 < local_20[0]);
    }
    this->FileSize = 0x80044;
    (**(code **)(*plVar10 + 0x30))(plVar10,local_28.Data,0x80044);
    (**(code **)*plVar10)(plVar10,1);
    if ((this->TestFileName).Data.ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(this->TestFileName).Data.AllocatorInstance.Data;
    }
    pIVar12 = (IFileHandle *)(**(code **)((longlong)*pIVar7 + 0xe8))(pIVar7,pwVar8,0);
    pIVar4 = (this->ReadHandle).Ptr;
    if ((pIVar4 != pIVar12) && ((this->ReadHandle).Ptr = pIVar12, pIVar4 != (IFileHandle *)0x0)) {
      (**(code **)*pIVar4)(pIVar4,1);
    }
    pIVar4 = (this->ReadHandle).Ptr;
    if (pIVar4 == (IFileHandle *)0x0) {
      pFVar11 = FAutomationTestFramework::Get();
      pFVar2 = pFVar11->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_18,L"Could not open test file %s.");
      (*pcVar3)(pFVar2,&local_18,0);
    }
    else {
      lVar5 = this->FileSize;
      lVar13 = (**(code **)((longlong)*pIVar4 + 0x50))();
      FVar14.Data = local_28.Data;
      if (lVar13 == lVar5) goto LAB_141bfc888;
      pFVar11 = FAutomationTestFramework::Get();
      pFVar2 = pFVar11->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      (**(code **)((longlong)*(this->ReadHandle).Ptr + 0x50))();
      ::FString::PrintfImpl
                (&local_18,
                 L"Received incorrect file size from test file %s. Expected = %lld. Actual = %lld.")
      ;
      (*pcVar3)(pFVar2,&local_18,0);
    }
    FVar14.Data = local_28.Data;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      FVar14.Data = local_28.Data;
    }
  }
LAB_141bfc888:
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return;
}

// GetExpectedValue @ 141c01920

int __thiscall
FArchiveFileReaderGenericTest::GetExpectedValue(FArchiveFileReaderGenericTest *this,long64 param_1)

{
  return (int)param_1 + -0x42000000;
}

// SetPosAndBuffer @ 141c099a0

void __thiscall
FArchiveFileReaderGenericTest::SetPosAndBuffer
          (FArchiveFileReaderGenericTest *this,
          TUniquePtr<FArchiveFileReaderGeneric,TDefaultDelete<FArchiveFileReaderGeneric>_> *param_1,
          long64 param_2,long64 param_3,long64 param_4)

{
  long64 *plVar1;
  FArchiveFileReaderGeneric *pFVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  long64 lVar5;
  bool bVar6;
  FAutomationTestFramework *pFVar7;
  FScriptContainerElement *_Dst;
  longlong lVar8;
  size_t _Size;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  lVar5 = param_4;
  param_1->Ptr->Pos = param_2;
  param_1->Ptr->BufferBase = param_3;
  pFVar2 = param_1->Ptr;
  plVar1 = &(pFVar2->BufferArray).ArrayNum;
  lVar8 = *plVar1;
  if (lVar8 < param_4) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,param_4 - lVar8,&(pFVar2->BufferArray).AllocatorInstance,plVar1,
               &(pFVar2->BufferArray).ArrayMax);
  }
  else {
    if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(param_4);
    }
    if (param_4 < lVar8) {
      lVar8 = lVar8 - param_4;
      if (lVar8 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (lVar8 != 0) {
        _Dst = (pFVar2->BufferArray).AllocatorInstance.Data + lVar5;
        _Size = (*plVar1 - lVar8) - lVar5;
        if (_Size != 0) {
          memmove(_Dst,_Dst + lVar8,_Size);
        }
        *plVar1 = *plVar1 - lVar8;
      }
    }
  }
  if (lVar5 != 0) {
    (**(code **)(param_1->Ptr->_padding_ + 0x268))(param_1->Ptr,param_3);
    pFVar2 = param_1->Ptr;
    (**(code **)(pFVar2->_padding_ + 0x278))
              (pFVar2,(pFVar2->BufferArray).AllocatorInstance.Data,lVar5,&param_4);
    if (param_4 != lVar5) {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar3 = pFVar7->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_68,L"SetPosAndBuffer - ReadLowLevel read the requested bytes");
      (*pcVar4)(pFVar3,&local_68,0);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
  }
  if ((param_2 < param_3) || (param_3 + lVar5 <= param_2)) {
    (**(code **)(param_1->Ptr->_padding_ + 0x268))(param_1->Ptr,param_2);
  }
  if (param_1->Ptr->Pos != param_2) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_58,L"SetPosAndBuffer - Pos set correctly");
    (*pcVar4)(pFVar3,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (param_1->Ptr->BufferBase != param_3) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_48,L"SetPosAndBuffer - BufferBase set correctly");
    (*pcVar4)(pFVar3,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if ((param_1->Ptr->BufferArray).ArrayNum != lVar5) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar3 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_38,L"SetPosAndBuffer - BufferSize set correctly");
    (*pcVar4)(pFVar3,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pFVar2 = param_1->Ptr;
  param_4 = pFVar2->BufferBase;
  TestBytesValid(this,L"SetPosAndBuffer - BufferBytes should match BufferBase",
                 (uchar *)(pFVar2->BufferArray).AllocatorInstance.Data,
                 (pFVar2->BufferArray).ArrayNum,param_4);
  return;
}

// TestBytesValid @ 141c45d90

void __thiscall
FArchiveFileReaderGenericTest::TestBytesValid
          (FArchiveFileReaderGenericTest *this,wchar_t *param_1,uchar *param_2,long64 param_3,
          long64 param_4)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  long64 lVar3;
  FAutomationTestFramework *pFVar4;
  uchar *puVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  bool bVar15;
  int local_38 [2];
  FString local_30;
  ulonglong uVar10;
  
  lVar3 = param_4;
  uVar13 = 0;
  uVar14 = (uint)param_4 & 3;
  uVar11 = (ulonglong)uVar14;
  uVar7 = param_4;
  if ((param_4 & 3U) != 0) {
    param_4 = (longlong)((int)(param_4 - uVar11 >> 2) + -0x42000000);
    if (0 < param_3) {
      puVar5 = param_2;
      uVar7 = uVar13;
      uVar10 = uVar13;
      do {
        if (4 - uVar11 <= uVar7) break;
        if (*puVar5 != puVar5[(longlong)&param_4 + ((ulonglong)uVar14 - (longlong)param_2)]) {
          bVar15 = param_2[uVar7] == *(uchar *)((longlong)&param_4 + uVar7 + uVar11);
          goto LAB_141c45eea;
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        puVar5 = puVar5 + 1;
        uVar7 = (ulonglong)(int)uVar9;
      } while ((longlong)uVar7 < param_3);
    }
    if (param_3 < (longlong)(4 - uVar11)) {
      return;
    }
    lVar8 = 4 - uVar11;
    param_2 = param_2 + lVar8;
    uVar7 = lVar3 + lVar8;
    param_3 = param_3 - lVar8;
  }
  uVar11 = (ulonglong)param_3 >> 2;
  iVar12 = (int)(uVar7 >> 2);
  if (uVar11 != 0) {
    uVar7 = uVar13;
    piVar6 = (int *)param_2;
    do {
      if (*piVar6 != iVar12 + -0x42000000 + (int)uVar7) goto LAB_141c45eec;
      uVar14 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar14;
      piVar6 = piVar6 + 1;
    } while ((longlong)(int)uVar14 < (longlong)uVar11);
  }
  lVar8 = param_3 + uVar11 * -4;
  if ((lVar8 != 0) && (local_38[0] = (int)uVar11 + -0x42000000 + iVar12, 0 < lVar8)) {
    piVar6 = local_38;
    do {
      iVar12 = (int)uVar13;
      if (*(char *)((longlong)piVar6 + (longlong)param_2 + (uVar11 * 4 - (longlong)local_38)) !=
          (char)*piVar6) {
        bVar15 = *(char *)((longlong)param_2 + (longlong)iVar12 + uVar11 * 4) ==
                 *(char *)((longlong)local_38 + (longlong)iVar12);
LAB_141c45eea:
        if (bVar15) {
          return;
        }
LAB_141c45eec:
        pFVar4 = FAutomationTestFramework::Get();
        pFVar1 = pFVar4->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_30,param_1);
        (*pcVar2)(pFVar1,&local_30,0);
        if (local_30.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
        return;
      }
      uVar13 = (ulonglong)(iVar12 + 1U);
      piVar6 = (int *)((longlong)piVar6 + 1);
    } while ((int)(iVar12 + 1U) < lVar8);
  }
  return;
}

// TestInternalPrecache @ 141c47a90

void __thiscall
FArchiveFileReaderGenericTest::TestInternalPrecache(FArchiveFileReaderGenericTest *this)

{
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar1;
  long64 *plVar2;
  long64 lVar3;
  IFileHandle *pIVar4;
  FAutomationTestBase *pFVar5;
  code *pcVar6;
  bool bVar7;
  FArchiveFileReaderGeneric *this_00;
  FArchiveFileReaderGeneric *this_01;
  FAutomationTestFramework *pFVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  TUniquePtr<FArchiveFileReaderGeneric,TDefaultDelete<FArchiveFileReaderGeneric>_> local_res10;
  ForAnyElementType local_48;
  int local_40 [2];
  FString local_38;
  
  CreateTestFile(this);
  this_01 = (FArchiveFileReaderGeneric *)0x0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40[0] = 0;
  local_40[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0x400,&local_48,local_40,local_40 + 1);
  this_00 = ::operator_new(0xe8);
  if (this_00 != (FArchiveFileReaderGeneric *)0x0) {
    lVar3 = this->FileSize;
    if ((this->TestFileName).Data.ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(this->TestFileName).Data.AllocatorInstance.Data;
    }
    pIVar4 = (this->ReadHandle).Ptr;
    (this->ReadHandle).Ptr = (IFileHandle *)0x0;
    this_01 = FArchiveFileReaderGeneric::FArchiveFileReaderGeneric
                        (this_00,pIVar4,pwVar10,lVar3,0x400,0);
  }
  local_res10.Ptr = this_01;
  if (this_01->Pos != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"Initial Pos should be 0");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (this_01->Size != this->FileSize) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"Size should be what was passed in");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (this_01->BufferSize != 0x400) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"BufferSize should be what was passed in");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  bVar7 = FArchiveFileReaderGeneric::InternalPrecache(this_01,0,0x400);
  if (!bVar7) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"Vanilla0 - InternalPrecache should succeed");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (this_01->Pos != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"Vanilla0 - InternalPrecache should not alter Pos");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (this_01->BufferBase != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,
                       L"Vanilla0 - BufferBase should have be set to PrecacheOffset aka Pos");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((this_01->BufferArray).ArrayNum != 0x400) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,
                       L"Vanilla0 - Bytes precached should be set to BufferSize unless it runs out of room"
                      );
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pTVar1 = &this_01->BufferArray;
  TestBytesValid(this,L"Vanilla0 - BufferArray should be expected bytes",
                 (uchar *)(pTVar1->AllocatorInstance).Data,(this_01->BufferArray).ArrayNum,
                 this_01->BufferBase);
  bVar7 = FArchiveFileReaderGeneric::InternalPrecache(this_01,0x800,0x400);
  if (bVar7) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"PrecacheNotAtPos - Should fail");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (this_01->BufferBase != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"PrecacheNotAtPos - BufferBase should not be altered");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((this_01->BufferArray).ArrayNum != 0x400) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"PrecacheNotAtPos - Buffe should not be altered");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  bVar7 = FArchiveFileReaderGeneric::InternalPrecache(this_01,0x3ff,0x400);
  if (!bVar7) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,
                       L"PrecacheNotAtPos - Should succeed since the first byte at PrecacheOffset is buffered"
                      );
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (this_01->BufferBase != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"PrecacheNotAtPos - BufferBase should not be altered");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((this_01->BufferArray).ArrayNum != 0x400) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"PrecacheNotAtPos - Buffe should not be altered");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  SetPosAndBuffer(this,&local_res10,0x200,0,0x400);
  bVar7 = FArchiveFileReaderGeneric::InternalPrecache(this_01,0x200,0x400);
  if (!bVar7) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"PrecachePartwayPosMoreThanBuffer - Should succeed");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (this_01->BufferBase != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,
                       L"PrecachePartwayPosMoreThanBuffer - BufferBase should not be updated");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((this_01->BufferArray).ArrayNum != 0x400) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,
                       L"PrecachePartwayPosMoreThanBuffer - BufferCount should be set to BufferSize"
                      );
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  TestBytesValid(this,L"PrecachePartwayPosMoreThanBuffer - BufferBytes should match BufferBase",
                 (uchar *)(pTVar1->AllocatorInstance).Data,(this_01->BufferArray).ArrayNum,
                 this_01->BufferBase);
  SetPosAndBuffer(this,&local_res10,0x300,0x200,0x200);
  lVar11 = (this_01->BufferArray).ArrayNum;
  plVar2 = &(this_01->BufferArray).ArrayMax;
  if (*plVar2 != lVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,lVar11,&pTVar1->AllocatorInstance,lVar11,plVar2);
  }
  bVar7 = FArchiveFileReaderGeneric::InternalPrecache(this_01,0x300,0x400);
  if (!bVar7) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"PrecachePartwayPosMoreThanBufferReallocation - Should succeed");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (this_01->BufferBase != 0x200) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,
                       L"PrecachePartwayPosMoreThanBufferReallocation - BufferBase should not be updated"
                      );
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((this_01->BufferArray).ArrayNum != 0x200) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,
                       L"PrecachePartwayPosMoreThanBufferReallocation - BufferCount should not be updated"
                      );
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  TestBytesValid(this,
                 L"PrecachePartwayPosMoreThanBufferReallocation - BufferBytes should match BufferBase"
                 ,(uchar *)(pTVar1->AllocatorInstance).Data,(this_01->BufferArray).ArrayNum,
                 this_01->BufferBase);
  SetPosAndBuffer(this,&local_res10,0x200,0,0x400);
  bVar7 = FArchiveFileReaderGeneric::InternalPrecache(this_01,0x200,0x100);
  if (!bVar7) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"PrecachePartwayPosLessThanBuffer - Should succeed");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (this_01->BufferBase != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,
                       L"PrecachePartwayPosLessThanBuffer - BufferBase should not be updated");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((this_01->BufferArray).ArrayNum != 0x400) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,
                       L"PrecachePartwayPosLessThanBuffer - BufferCount should be set to BufferSize"
                      );
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  TestBytesValid(this,L"PrecachePartwayPosLessThanBuffer - BufferBytes should match BufferBase",
                 (uchar *)(pTVar1->AllocatorInstance).Data,(this_01->BufferArray).ArrayNum,
                 this_01->BufferBase);
  SetPosAndBuffer(this,&local_res10,0x400,0,0x400);
  bVar7 = FArchiveFileReaderGeneric::InternalPrecache(this_01,0x400,0x400);
  if (!bVar7) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"PrecachePosEndOfBuffer - Should succeed");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (this_01->BufferBase != 0x400) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"PrecachePosEndOfBuffer - BufferBase should be updated");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((this_01->BufferArray).ArrayNum != 0x400) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"PrecachePosEndOfBuffer - BufferCount should be set to BufferSize"
                      );
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  TestBytesValid(this,L"PrecachePosEndOfBuffer - BufferBytes should match BufferBase",
                 (uchar *)(pTVar1->AllocatorInstance).Data,(this_01->BufferArray).ArrayNum,
                 this_01->BufferBase);
  lVar11 = this->FileSize + -1;
  SetPosAndBuffer(this,&local_res10,lVar11,0,0);
  bVar7 = FArchiveFileReaderGeneric::InternalPrecache(this_01,lVar11,0x400);
  if (!bVar7) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"PrecacheNearEndOfFile - Should succeed");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (this_01->BufferBase != lVar11) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"PrecacheNearEndOfFile - BufferBase should be updated");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((this_01->BufferArray).ArrayNum != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,
                       L"PrecacheNearEndOfFile - BufferCount should be set Min(BufferSize, Size - Pos)"
                      );
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  TestBytesValid(this,L"PrecacheNearEndOfFile - BufferBytes should match BufferBase",
                 (uchar *)(pTVar1->AllocatorInstance).Data,(this_01->BufferArray).ArrayNum,
                 this_01->BufferBase);
  pFVar8 = FAutomationTestFramework::Get();
  pFVar5 = pFVar8->CurrentTest;
  pFVar9 = ::FString::FString(&local_38,L"ReadFile failed");
  FAutomationTestBase::AddExpectedError(pFVar5,pFVar9,Contains,1,true);
  SetPosAndBuffer(this,&local_res10,this->FileSize,0,0x10);
  bVar7 = FArchiveFileReaderGeneric::InternalPrecache(this_01,this->FileSize,0x400);
  if (bVar7) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"PrecacheEndOfFile - Should fail");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (this_01->BufferBase != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"PrecacheEndOfFile - BufferBase should not be updated");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((this_01->BufferArray).ArrayNum != 0x10) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"PrecacheEndOfFile - BufferCount should not be updated");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  SetPosAndBuffer(this,&local_res10,8,0,0x10);
  (**(code **)(this_01->_padding_ + 0x268))(this_01,this->FileSize);
  bVar7 = FArchiveFileReaderGeneric::InternalPrecache(this_01,8,0x10);
  if (!bVar7) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,
                       L"PrecacheReadFailsBytesRemain - Should succeed if bytes are left in the buffer"
                      );
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (this_01->BufferBase != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"PrecacheReadFailsBytesRemain - BufferBase should not be updated")
    ;
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((this_01->BufferArray).ArrayNum != 0x10) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"PrecacheReadFailsBytesRemain - BufferCount should not be updated"
                      );
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  SetPosAndBuffer(this,&local_res10,0x10,0,0x10);
  (**(code **)(this_01->_padding_ + 0x268))(this_01,this->FileSize);
  bVar7 = FArchiveFileReaderGeneric::InternalPrecache(this_01,0x10,0x10);
  if (bVar7) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,
                       L"PrecacheReadFails - Should fail if bytes are not left in the buffer");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((this_01->BufferArray).ArrayNum != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar5 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_38,L"PrecacheReadFails - BufferCount should be updated to empty");
    (*pcVar6)(pFVar5,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)this_01->_padding_)(this_01,1);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

