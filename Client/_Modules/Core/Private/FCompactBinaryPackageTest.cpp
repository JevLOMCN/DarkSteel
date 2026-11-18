// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// GetTestFlags @ 141cc6240

EAutomationTestFlags __thiscall
FCompactBinaryPackageTest::GetTestFlags(FCompactBinaryPackageTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc6250

bool __thiscall FCompactBinaryPackageTest::IsStressTest(FCompactBinaryPackageTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc6260

uint __thiscall FCompactBinaryPackageTest::GetRequiredDeviceNum(FCompactBinaryPackageTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc6270

FString * __thiscall
FCompactBinaryPackageTest::GetTestSourceFileName
          (FCompactBinaryPackageTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\CompactBinaryPackageTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc62a0

int __thiscall FCompactBinaryPackageTest::GetTestSourceFileLine(FCompactBinaryPackageTest *this)

{
  return 0xfa;
}

// GetTests @ 141cc62b0

/* WARNING: Removing unreachable block (ram,0x000141cc642e) */

void __thiscall
FCompactBinaryPackageTest::GetTests
          (FCompactBinaryPackageTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cc6450

bool __thiscall FCompactBinaryPackageTest::RunTest(FCompactBinaryPackageTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc6480

FString * __thiscall
FCompactBinaryPackageTest::GetBeautifiedTestName
          (FCompactBinaryPackageTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCompactBinaryPackageTest @ 141ce6f80

FCompactBinaryPackageTest * __thiscall
FCompactBinaryPackageTest::FCompactBinaryPackageTest
          (FCompactBinaryPackageTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCompactBinaryPackageTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][CompactBinary][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::CompactBinary::Package");
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
  ::FString::FString(&local_18,"[Core][CompactBinary][SmokeFilter]");
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

// operator() @ 141cf3720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FCompactBinaryPackageTest::TestBody'::__l2::<lambda_1>::operator()(void *this,FCbPackage *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  FAutomationTestBase *pFVar5;
  code *pcVar6;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar7;
  FScriptContainerElement *_Buf1;
  longlong *plVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  ECbValidateError EVar12;
  FAutomationTestFramework *pFVar13;
  FScriptContainerElement *_Buf2;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *_Size;
  undefined1 auStack_3a8 [32];
  TMemoryView<void_const_> local_388;
  undefined1 local_378 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_368 [2];
  FArchiveState local_358;
  undefined8 local_2c8;
  FScriptContainerElement **local_2c0;
  undefined8 local_2b8;
  FScriptContainerElement *local_2b0;
  undefined8 local_2a8;
  FArchiveState local_298;
  undefined8 local_208;
  FScriptContainerElement **local_200;
  undefined8 local_1f8;
  undefined1 local_1e8 [32];
  longlong *local_1c8;
  uchar local_1c0 [24];
  undefined1 local_1a8 [32];
  longlong *local_188;
  uchar local_180 [24];
  FCbWriter local_168 [7];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  FCbWriter::FCbWriter(local_168,0x100);
  _Buf2 = (FScriptContainerElement *)0x0;
  local_358._padding_ = 0;
  local_358.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_388.Data = (void *)0x0;
  local_358.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_358.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_358.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_358._40_8_ = 0;
  local_358.ArSerializingDefaults = 0;
  local_358.ArPortFlags = 0;
  local_358.ArMaxSerializeSize = 0;
  local_358.ArUEVer.FileVersionUE4 = 0;
  local_358.ArUEVer.FileVersionUE5 = 0;
  local_358.ArLicenseeUEVer = 0;
  local_358.ArEngineVer.Major = 0;
  local_358.ArEngineVer.Minor = 0;
  local_358.ArEngineVer.Patch = 0;
  local_358.ArEngineVer._6_2_ = 0;
  local_358.ArEngineVer.Changelist = 0;
  local_358.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_358.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_358.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_358.SerializedProperty = (FProperty *)0x0;
  local_358.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_358.bCustomVersionsAreReset = false;
  local_358._129_7_ = 0;
  local_358.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_358);
  local_2c8 = 0;
  local_358._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_2c0 = &local_2b0;
  local_2b8 = 0;
  FArchiveState::SetIsSaving(&local_358,true);
  (**(code **)(local_358._padding_ + 0x108))(&local_358,0);
  local_2b0 = (FScriptContainerElement *)0x0;
  local_358._padding_ = (longlong)&___7FBufferArchive__6B_;
  local_2a8 = 0;
  FCbPackage::Save(param_1,local_168);
  FCbPackage::Save(param_1,(FArchive *)&local_358);
  FCbWriter::Save(local_168,(FCbFieldIterator *)local_378);
  _Buf1 = local_2b0;
  TVar7.Owner = local_368[0].Owner;
  _Size = (FScriptContainerElement *)(longlong)(int)local_2a8;
  TVar14.Owner = local_368[0].Owner;
  pFVar15 = _Buf2;
  if (local_368[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_368[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_368[0].Owner)->_padding_ + 8))(local_368[0].Owner);
    }
    TVar14.Owner = local_368[0].Owner;
    pFVar15 = (FScriptContainerElement *)(TVar7.Owner)->Size;
  }
  if (TVar14.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(TVar14.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((TVar14.Owner)->_padding_ + 8))(TVar14.Owner);
    }
    _Buf2 = (TVar14.Owner)->Data;
  }
  if ((_Size != pFVar15) ||
     ((_Buf1 != _Buf2 && (iVar11 = memcmp(_Buf1,_Buf2,(size_t)_Size), iVar11 != 0)))) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar5 = pFVar13->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString((FString *)&local_388,L"Condition failed");
    (*pcVar6)(pFVar5,&local_388,0);
    if (local_388.Data != (void *)0x0) {
      FMemory::Free(local_388.Data);
    }
  }
  local_388.Data = local_2b0;
  local_388.Size = (ulong64)(int)local_2a8;
  EVar12 = ValidateCompactBinaryRange(&local_388,All);
  if (EVar12 != None) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar5 = pFVar13->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString((FString *)&local_388,L"Condition failed");
    (*pcVar6)(pFVar5,&local_388,0);
    if (local_388.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data);
    }
  }
  local_388.Data = local_2b0;
  local_388.Size = (ulong64)(int)local_2a8;
  EVar12 = ValidateCompactBinaryPackage(&local_388,All);
  if (EVar12 != None) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar5 = pFVar13->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString((FString *)&local_388,L"Condition failed");
    (*pcVar6)(pFVar5,&local_388,0);
    if (local_388.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data);
    }
  }
  local_1a8._0_8_ = (FScriptContainerElement *)0x0;
  local_1a8._8_4_ = 0;
  local_1a8._12_4_ = 0;
  FCbObjectView::FCbObjectView((FCbObjectView *)(local_1a8 + 0x10));
  local_188 = (longlong *)0x0;
  local_180[0x10] = '\0';
  local_180[0x11] = '\0';
  local_180[0x12] = '\0';
  local_180[0x13] = '\0';
  local_180[0] = '\0';
  local_180[1] = '\0';
  local_180[2] = '\0';
  local_180[3] = '\0';
  local_180[4] = '\0';
  local_180[5] = '\0';
  local_180[6] = '\0';
  local_180[7] = '\0';
  local_180[8] = '\0';
  local_180[9] = '\0';
  local_180[10] = '\0';
  local_180[0xb] = '\0';
  local_180[0xc] = '\0';
  local_180[0xd] = '\0';
  local_180[0xe] = '\0';
  local_180[0xf] = '\0';
  bVar9 = FCbPackage::TryLoad((FCbPackage *)local_1a8,(FCbFieldIterator *)local_378);
  if (!bVar9) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar5 = pFVar13->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString((FString *)&local_388,L"Condition failed");
    (*pcVar6)(pFVar5,&local_388,0);
    if (local_388.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data);
    }
  }
  if ((local_378[0] & 0x1f) != 0) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar5 = pFVar13->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString((FString *)&local_388,L"Condition expected to return false but returned true"
                      );
    (*pcVar6)(pFVar5,&local_388,0);
    if (local_388.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data);
    }
  }
  bVar9 = FCbPackage::Equals((FCbPackage *)local_1a8,param_1);
  if (!bVar9) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar5 = pFVar13->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString((FString *)&local_388,L"Condition failed");
    (*pcVar6)(pFVar5,&local_388,0);
    if (local_388.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data);
    }
  }
  local_1e8._0_8_ = (FScriptContainerElement *)0x0;
  local_1e8._8_4_ = 0;
  local_1e8._12_4_ = 0;
  FCbObjectView::FCbObjectView((FCbObjectView *)(local_1e8 + 0x10));
  local_1c8 = (longlong *)0x0;
  local_1c0[0] = '\0';
  local_1c0[1] = '\0';
  local_1c0[2] = '\0';
  local_1c0[3] = '\0';
  local_1c0[4] = '\0';
  local_1c0[5] = '\0';
  local_1c0[6] = '\0';
  local_1c0[7] = '\0';
  local_1c0[8] = '\0';
  local_1c0[9] = '\0';
  local_1c0[10] = '\0';
  local_1c0[0xb] = '\0';
  local_1c0[0xc] = '\0';
  local_1c0[0xd] = '\0';
  local_1c0[0xe] = '\0';
  local_1c0[0xf] = '\0';
  local_1c0[0x10] = '\0';
  local_1c0[0x11] = '\0';
  local_1c0[0x12] = '\0';
  local_1c0[0x13] = '\0';
  local_298._padding_ = 0;
  local_298.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_298.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_298.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_298.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_298._40_8_ = 0;
  local_298.ArSerializingDefaults = 0;
  local_298.ArPortFlags = 0;
  local_298.ArMaxSerializeSize = 0;
  local_298.ArUEVer.FileVersionUE4 = 0;
  local_298.ArUEVer.FileVersionUE5 = 0;
  local_298.ArLicenseeUEVer = 0;
  local_298.ArEngineVer.Major = 0;
  local_298.ArEngineVer.Minor = 0;
  local_298.ArEngineVer.Patch = 0;
  local_298.ArEngineVer._6_2_ = 0;
  local_298.ArEngineVer.Changelist = 0;
  local_298.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_298.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_298.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_298.SerializedProperty = (FProperty *)0x0;
  local_298.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_298.bCustomVersionsAreReset = false;
  local_298._129_7_ = 0;
  local_298.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_298);
  local_208 = 0;
  local_298._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_200 = &local_2b0;
  local_1f8 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_298,true);
  (**(code **)(local_298._padding_ + 0x108))(&local_298,0);
  local_388.Size = (ulong64)FUniqueBuffer::Alloc;
  local_388.Data =
       UE::Core::Private::Function::
       TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>::
       Call;
  bVar9 = FCbPackage::TryLoad((FCbPackage *)local_1e8,(FArchive *)&local_298,
                              (TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_388);
  if (!bVar9) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar5 = pFVar13->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString((FString *)&local_388,L"Condition failed");
    (*pcVar6)(pFVar5,&local_388,0);
    if (local_388.Data != (code *)0x0) {
      FMemory::Free(local_388.Data);
    }
  }
  if (*(code **)(local_298._padding_ + 0x38) == FArchiveState::AtEnd) {
    cVar10 = FArchiveState::AtEnd(&local_298);
  }
  else {
    cVar10 = (**(code **)(local_298._padding_ + 0x38))();
  }
  if (cVar10 == '\0') {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar5 = pFVar13->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString((FString *)&local_388,L"Condition failed");
    (*pcVar6)(pFVar5,&local_388,0);
    if (local_388.Data != (code *)0x0) {
      FMemory::Free(local_388.Data);
    }
  }
  bVar9 = FCbPackage::Equals((FCbPackage *)local_1e8,param_1);
  if (!bVar9) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar5 = pFVar13->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString((FString *)&local_388,L"Condition failed");
    (*pcVar6)(pFVar5,&local_388,0);
    if (local_388.Data != (code *)0x0) {
      FMemory::Free(local_388.Data);
    }
  }
  FArchive::~FArchive((FArchive *)&local_298);
  plVar8 = local_1c8;
  if (local_1c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1c8 + 3;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*local_1c8 + 0x10))(local_1c8);
      plVar8[1] = 0;
      plVar8[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar8 + 3);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar4 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar8)(plVar8,1);
      }
    }
  }
  DestructItems<FCbAttachment,int>((FCbAttachment *)local_1e8._0_8_,local_1e8._8_4_);
  if ((FScriptContainerElement *)local_1e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1e8._0_8_);
  }
  plVar8 = local_188;
  if (local_188 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_188 + 3;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*local_188 + 0x10))(local_188);
      plVar8[1] = 0;
      plVar8[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar8 + 3);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar4 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar8)(plVar8,1);
      }
    }
  }
  DestructItems<FCbAttachment,int>((FCbAttachment *)local_1a8._0_8_,local_1a8._8_4_);
  if ((FScriptContainerElement *)local_1a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1a8._0_8_);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_368);
  if (local_2b0 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0);
  }
  FArchive::~FArchive((FArchive *)&local_358);
  FCbWriter::~FCbWriter(local_168);
  return;
}

// operator() @ 141cf62d0

FSharedBuffer __thiscall
`FCompactBinaryPackageTest::TestBody'::__l2::<lambda_2>::operator()(void *this,FIoHash *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FBufferOwner *pFVar10;
  longlong *in_R8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res10;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res18;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res20;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_28;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_20 [2];
  
  pFVar10 = (FBufferOwner *)0x0;
  local_res8.Owner = local_res8.Owner & 0xffffffff00000000;
  plVar3 = *(longlong **)((longlong)this + 8);
  if (((*in_R8 == *plVar3) && (in_R8[1] == plVar3[1])) && ((int)in_R8[2] == (int)plVar3[2])) {
    pFVar10 = *(FBufferOwner **)(*(longlong *)this + 0x10);
    if (pFVar10 != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &pFVar10->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        pFVar10->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)((longlong)pFVar10->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    bVar9 = true;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    local_20[0].Owner = pFVar10;
  }
  else {
    plVar3 = *(longlong **)((longlong)this + 0x18);
    if (((*in_R8 == *plVar3) && (in_R8[1] == plVar3[1])) && ((int)in_R8[2] == (int)plVar3[2])) {
      pFVar10 = *(FBufferOwner **)(*(longlong *)((longlong)this + 0x10) + 0x10);
      if (pFVar10 != (FBufferOwner *)0x0) {
        LOCK();
        paVar1 = &pFVar10->ReferenceCountsAndFlags;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
        UNLOCK();
        if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
          LOCK();
          pFVar10->ReferenceCountsAndFlags =
               (atomic<unsigned___int64>)((longlong)pFVar10->ReferenceCountsAndFlags + 0x40000000);
          UNLOCK();
        }
      }
      bVar8 = true;
      bVar7 = false;
      bVar6 = false;
      bVar5 = false;
      local_28.Owner = pFVar10;
    }
    else {
      plVar3 = *(longlong **)((longlong)this + 0x28);
      if (((*in_R8 == *plVar3) && (in_R8[1] == plVar3[1])) && ((int)in_R8[2] == (int)plVar3[2])) {
        pFVar10 = (FBufferOwner *)**(ulonglong **)((longlong)this + 0x20);
        if (pFVar10 != (FBufferOwner *)0x0) {
          LOCK();
          paVar1 = &pFVar10->ReferenceCountsAndFlags;
          aVar2 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
          UNLOCK();
          if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
            LOCK();
            pFVar10->ReferenceCountsAndFlags =
                 (atomic<unsigned___int64>)((longlong)pFVar10->ReferenceCountsAndFlags + 0x40000000)
            ;
            UNLOCK();
          }
        }
        bVar7 = true;
        bVar6 = false;
        local_res20.Owner = pFVar10;
        if (pFVar10 != (FBufferOwner *)0x0) {
          LOCK();
          paVar1 = &pFVar10->ReferenceCountsAndFlags;
          aVar2 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
          UNLOCK();
          if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
            LOCK();
            pFVar10->ReferenceCountsAndFlags =
                 (atomic<unsigned___int64>)((longlong)pFVar10->ReferenceCountsAndFlags + 0x40000000)
            ;
            UNLOCK();
          }
        }
      }
      else {
        local_res18.Owner = (FBufferOwner *)0x0;
        bVar7 = false;
        bVar6 = true;
      }
      bVar8 = false;
      bVar5 = true;
      local_res10.Owner = pFVar10;
    }
    bVar9 = false;
    bVar4 = true;
    local_res8.Owner = pFVar10;
    if (pFVar10 != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &pFVar10->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        pFVar10->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)((longlong)pFVar10->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
  }
  if (pFVar10 != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &pFVar10->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
      LOCK();
      pFVar10->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)((longlong)pFVar10->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
    }
  }
  *(FBufferOwner **)param_1->Hash = pFVar10;
  if (bVar4) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8);
  }
  if (bVar5) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res10);
  }
  if (bVar6) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res18);
  }
  if (bVar7) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res20);
  }
  if (bVar8) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_28);
  }
  if (bVar9) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_20);
  }
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// TestBody @ 141d1cd70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141d1ef71) */

void __thiscall
FCompactBinaryPackageTest::TestBody(FCompactBinaryPackageTest *this,FString *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  atomic<unsigned___int64> *paVar4;
  atomic<unsigned___int64> aVar5;
  FAutomationTestBase *pFVar6;
  code *pcVar7;
  longlong *plVar8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar9;
  bool bVar10;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar11;
  FSharedBuffer FVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  FAutomationTestFramework *pFVar19;
  FCbFieldIterator *pFVar20;
  ulong64 uVar21;
  FIoHash *pFVar22;
  FCbObject *pFVar23;
  FCbField *this_00;
  FSharedBuffer FVar24;
  FCbAttachment *pFVar25;
  FCbAttachment *pFVar26;
  FBlake3Hash *pFVar27;
  TMemoryView<void_const_> *pTVar28;
  TMemoryView<void_const_> *pTVar29;
  FCbAttachment *this_01;
  ulonglong uVar30;
  longlong lVar31;
  undefined1 auStack_1f28 [32];
  TInPlaceType<FCbAttachment::FBinaryValue> local_1f08;
  undefined1 local_1f07 [3];
  undefined4 local_1f04;
  TMemoryView<void_const_> local_1f00;
  TCbFieldIterator<FCbField> local_1ef0;
  undefined1 local_1ed0 [16];
  FSharedBuffer local_1ec0;
  FCbObjectView local_1eb8;
  longlong *local_1ea8;
  undefined1 local_1ea0 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1e90;
  FCbObjectView local_1e88;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1e78;
  TMemoryView<void_const_> local_1e70;
  FCbObjectView local_1e60;
  FSharedBuffer local_1e50;
  undefined1 local_1e48 [8];
  TCbBuffer<FCbFieldView> local_1e40;
  FBufferOwner *local_1e28;
  undefined8 local_1e20;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1e18;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1e10;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1e08;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1e00;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1df8 [2];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1de8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1de0;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1dd8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1dd0;
  TInPlaceType<FCbAttachment::FBinaryValue> *local_1dc8;
  FCbObjectView local_1dc0;
  longlong *local_1db0;
  undefined1 local_1da8 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1d98;
  FCbObject local_1d90;
  char *local_1d78;
  undefined4 uStack_1d70;
  undefined4 uStack_1d6c;
  FCbFieldView local_1d68;
  FString local_1d58;
  FString local_1d48;
  FString local_1d38;
  char *local_1d28;
  undefined4 uStack_1d20;
  undefined4 uStack_1d1c;
  FString local_1d18;
  FString local_1d08;
  FString local_1cf8;
  FString local_1ce8;
  char *local_1cd8;
  undefined4 uStack_1cd0;
  undefined4 uStack_1ccc;
  FString local_1cc8;
  FString local_1cb8;
  FString local_1ca8;
  char *local_1c98;
  undefined4 uStack_1c90;
  undefined4 uStack_1c8c;
  char *local_1c88;
  undefined4 uStack_1c80;
  undefined4 uStack_1c7c;
  FString local_1c78;
  FString local_1c68;
  FString local_1c58;
  FString local_1c48;
  FString local_1c38;
  FString local_1c28;
  FString local_1c18;
  longlong local_1c08;
  longlong local_1c00;
  FString local_1bf8;
  FString local_1be8;
  FString local_1bd8;
  FString local_1bc8;
  FString local_1bb8;
  FString local_1ba8;
  undefined4 *local_1b98;
  undefined8 local_1b90;
  char *local_1b88;
  undefined4 uStack_1b80;
  undefined4 uStack_1b7c;
  char *local_1b78;
  undefined4 uStack_1b70;
  undefined4 uStack_1b6c;
  char *local_1b68;
  undefined4 uStack_1b60;
  undefined4 uStack_1b5c;
  FString local_1b58;
  code *local_1b48;
  FCbObjectView **local_1b40;
  FString local_1b38;
  FString local_1b28;
  FString local_1b18;
  FString local_1b08;
  FString local_1af8;
  FString local_1ae8;
  FString local_1ad8;
  FString local_1ac8;
  FString local_1ab8;
  FString local_1aa8;
  FString local_1a98;
  FString local_1a88;
  FString local_1a78;
  FString local_1a68;
  FString local_1a58;
  FString local_1a48;
  FString local_1a38;
  FString local_1a28;
  FString local_1a18;
  FString local_1a08;
  FString local_19f8;
  FString local_19e8;
  FString local_19d8;
  FString local_19c8;
  FString local_19b8;
  FString local_19a8;
  FString local_1998;
  FString local_1988;
  FString local_1978;
  FString local_1968;
  FString local_1958;
  FString local_1948;
  code *local_1938;
  code *local_1930;
  FString local_1928;
  FString local_1918;
  FString local_1908;
  FString local_18f8;
  FString local_18e8;
  FString local_18d8;
  FString local_18c8;
  FString local_18b8;
  TMemoryView<void_const_> local_18a8;
  FString local_1898;
  FString local_1888;
  FString local_1878;
  FString local_1868;
  FString local_1858;
  FString local_1848;
  FString local_1838;
  FString local_1828;
  FString local_1818;
  code *local_1808;
  TInPlaceType<FCbAttachment::FBinaryValue> **local_1800;
  FString local_17f8;
  FString local_17e8;
  FString local_17d8;
  FString local_17c8;
  FString local_17b8;
  FString local_17a8;
  char *local_1798;
  undefined4 uStack_1790;
  undefined4 uStack_178c;
  FString local_1788;
  FString local_1778;
  FString local_1768;
  FString local_1758;
  undefined1 local_1748 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1738;
  undefined1 local_1730 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1720;
  undefined1 local_1718 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1708;
  undefined1 local_1700 [24];
  undefined1 local_16e8 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_16d8;
  undefined1 local_16d0 [16];
  FSharedBuffer local_16c0 [2];
  FCbObjectView *local_16b0;
  FIoHash *local_16a8;
  undefined1 *local_16a0;
  FIoHash *local_1698;
  TMemoryView<void_const_> *local_1690;
  FIoHash *local_1688;
  TStringView<char8_t> local_1678;
  void *local_1668;
  ulong64 uStack_1660;
  undefined1 local_1658 [24];
  undefined1 local_1640 [24];
  TStringView<char8_t> local_1628;
  TStringView<char8_t> local_1618;
  TMemoryView<void_const_> local_1608;
  TStringView<char8_t> local_15f8;
  TStringView<char8_t> local_15e8;
  TMemoryView<void_const_> local_15d8;
  TStringView<char8_t> local_15c8;
  TStringView<char8_t> local_15b8;
  TStringView<char8_t> local_15a8;
  TStringView<char8_t> local_1598;
  undefined1 local_1588 [24];
  undefined1 local_1570 [24];
  undefined1 local_1558 [24];
  undefined1 local_1540 [24];
  undefined1 local_1528 [24];
  undefined1 local_1510 [24];
  undefined1 local_14f8 [24];
  undefined1 local_14e0 [24];
  undefined1 local_14c8 [24];
  undefined1 local_14b0 [24];
  undefined1 local_1498 [24];
  undefined1 local_1480 [24];
  undefined1 local_1468 [24];
  undefined1 local_1450 [24];
  undefined1 local_1438 [24];
  undefined1 local_1420 [24];
  undefined1 local_1408 [32];
  undefined1 local_13e8 [32];
  undefined1 local_13c8 [32];
  TMemoryView<void_const_> local_13a8;
  TMemoryView<void_const_> local_1398;
  TMemoryView<void_const_> local_1388;
  TMemoryView<void_const_> local_1378;
  TMemoryView<void_const_> local_1368;
  TMemoryView<void_const_> local_1358;
  TMemoryView<void_const_> local_1348;
  TMemoryView<void_const_> local_1338;
  undefined1 local_1328 [32];
  TMemoryView<void_const_> local_1308;
  undefined1 local_12f8 [32];
  undefined1 local_12d8 [32];
  undefined1 local_12b8 [32];
  FCbObject local_1298;
  FCbObject local_1280;
  undefined1 local_1268 [168];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_11c0;
  FMemoryReader local_11a8;
  undefined1 local_10f8 [16];
  undefined1 local_10e8 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_10d8;
  uchar local_10d0 [24];
  FIoHash local_10b8;
  FIoHash local_10a4;
  FIoHash local_1090;
  undefined1 local_1078 [32];
  longlong *local_1058;
  uchar local_1050 [24];
  FIoHash local_1038;
  undefined1 local_1018 [40];
  uchar local_ff0 [8];
  uchar auStack_fe8 [8];
  uchar local_fe0 [8];
  undefined1 local_fd8 [32];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_fb8;
  longlong local_fb0;
  longlong local_fa8;
  int local_fa0;
  undefined1 local_f98 [32];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_f78;
  uchar local_f70 [24];
  undefined1 local_f58 [16];
  undefined1 local_f48 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_f38;
  longlong local_f30;
  longlong local_f28;
  int local_f20;
  undefined1 local_f18 [32];
  longlong *local_ef8;
  uchar local_ef0 [24];
  TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
  local_ed8;
  undefined1 local_e98 [32];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_e78 [4];
  FIoHash local_e58;
  FIoHash local_e44;
  FIoHash local_e30;
  FIoHash local_e1c;
  FCbAttachment local_e08;
  FCbAttachment local_dd0;
  undefined1 local_d98 [64];
  undefined1 local_d58 [64];
  FCbAttachment local_d18;
  FCbAttachment local_ce0;
  FCbAttachment local_ca8;
  FCbAttachment local_c70;
  FCbAttachment local_c38;
  FCbAttachment local_c00;
  FCbAttachment local_bc8;
  FIoHash local_b90;
  FIoHash local_b7c;
  FIoHash local_b68;
  FIoHash local_b54;
  FIoHash local_b40;
  FIoHash local_b2c;
  FIoHash local_b18;
  FIoHash local_b04;
  FIoHash local_af0;
  FIoHash local_adc;
  FIoHash local_ac8;
  FIoHash local_ab4;
  FIoHash local_aa0;
  FIoHash local_a8c;
  FBlake3Hash local_a78;
  FBlake3Hash local_a58;
  FCbWriter local_a38 [10];
  FCbWriter local_888 [7];
  FCbWriter local_758 [7];
  FCbWriter local_628 [7];
  FCbWriter local_4f8 [7];
  FCbWriter local_3c8 [7];
  FCbWriter local_298 [7];
  FCbWriter local_168 [7];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x141d1cd9a;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f28;
  local_1f04 = 0;
  pFVar19 = FAutomationTestFramework::Get();
  pFVar6 = pFVar19->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x50);
  ::FString::FString(&local_17e8,L"Empty");
  (*pcVar7)(pFVar6,&local_17e8,0,0);
  if (local_17e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_17e8.Data.AllocatorInstance.Data);
  }
  local_f18._0_8_ = (FScriptContainerElement *)0x0;
  local_f18._8_4_ = 0;
  local_f18._12_4_ = 0;
  FCbObjectView::FCbObjectView((FCbObjectView *)(local_f18 + 0x10));
  local_ef8 = (longlong *)0x0;
  local_ef0[0] = '\0';
  local_ef0[1] = '\0';
  local_ef0[2] = '\0';
  local_ef0[3] = '\0';
  local_ef0[4] = '\0';
  local_ef0[5] = '\0';
  local_ef0[6] = '\0';
  local_ef0[7] = '\0';
  local_ef0[8] = '\0';
  local_ef0[9] = '\0';
  local_ef0[10] = '\0';
  local_ef0[0xb] = '\0';
  local_ef0[0xc] = '\0';
  local_ef0[0xd] = '\0';
  local_ef0[0xe] = '\0';
  local_ef0[0xf] = '\0';
  local_ef0[0x10] = '\0';
  local_ef0[0x11] = '\0';
  local_ef0[0x12] = '\0';
  local_ef0[0x13] = '\0';
  bVar15 = FCbObjectView::operator_bool((FCbObjectView *)(local_f18 + 0x10));
  if ((bVar15) || (local_f18._8_4_ != 0)) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_17d8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_17d8,0);
    ::FString::~FString(&local_17d8);
  }
  bVar15 = FCbObjectView::operator_bool((FCbObjectView *)(local_f18 + 0x10));
  if (bVar15) {
LAB_141d1cea8:
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_17c8,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_17c8,0);
    ::FString::~FString(&local_17c8);
    iVar18 = local_f18._8_4_;
  }
  else {
    iVar18 = 0;
    if (local_f18._8_4_ != 0) goto LAB_141d1cea8;
  }
  if (iVar18 < 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar15) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
LAB_141d1cf1f:
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_17b8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_17b8,0);
    ::FString::~FString(&local_17b8);
  }
  else if (iVar18 != 0) goto LAB_141d1cf1f;
  `FCompactBinaryPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_1f07,(FCbPackage *)local_f18);
  plVar8 = local_ef8;
  if (local_ef8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_ef8 + 3;
    lVar31 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar31 & 0x3fffffff) == 1) {
      (**(code **)(*local_ef8 + 0x10))(local_ef8);
      plVar8[1] = 0;
      plVar8[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar8 + 3);
      uVar30 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar30 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar8)(plVar8,1);
      }
    }
  }
  DestructItems<FCbAttachment,int>((FCbAttachment *)local_f18._0_8_,local_f18._8_4_);
  if ((FScriptContainerElement *)local_f18._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f18._0_8_);
  }
  pFVar19 = FAutomationTestFramework::Get();
  pFVar6 = pFVar19->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x50);
  ::FString::FString(&local_17a8,L"Object Only");
  (*pcVar7)(pFVar6,&local_17a8,0,0);
  if (local_17a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_17a8.Data.AllocatorInstance.Data);
  }
  FCbWriter::FCbWriter(local_888,0x100);
  FCbWriter::BeginObject(local_888);
  uStack_1790 = 5;
  local_1798 = "Field";
  local_15f8._12_4_ = uStack_178c;
  local_15f8.Size = 5;
  local_15f8.DataPtr = "Field";
  FCbWriter::SetNameOrAddString(local_888,&local_15f8);
  FCbWriter::AddInteger(local_888,0x2a);
  FCbWriter::EndObject(local_888);
  pFVar20 = FCbWriter::Save(local_888,(FCbFieldIterator *)local_1328);
  FCbField::AsObject((FCbField *)pFVar20,(FCbObject *)local_1da8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_1328 + 0x10));
  local_1640._0_8_ = local_1da8._0_8_;
  local_1640._8_8_ = local_1da8._8_8_;
  if (local_1d98.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar4 = &(local_1d98.Owner)->ReferenceCountsAndFlags;
    aVar5 = *paVar4;
    *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + 1);
    UNLOCK();
    if (((ulonglong)aVar5 & 0x3fffffff) == 0) {
      LOCK();
      (local_1d98.Owner)->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((longlong)(local_1d98.Owner)->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
    }
  }
  local_1640._16_8_ = local_1d98.Owner;
  FCbPackage::FCbPackage((FCbPackage *)local_fd8,(FCbObject *)local_1640);
  bVar15 = FCbObjectView::operator_bool((FCbObjectView *)(local_fd8 + 0x10));
  if ((!bVar15) && (local_fd8._8_4_ == 0)) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1788,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_1788,0);
    ::FString::~FString(&local_1788);
  }
  bVar15 = FCbObjectView::operator_bool((FCbObjectView *)(local_fd8 + 0x10));
  if ((!bVar15) && (local_fd8._8_4_ == 0)) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1778,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1778,0);
    ::FString::~FString(&local_1778);
  }
  if ((int)local_fd8._8_4_ < 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar15) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
LAB_141d1d21f:
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1768,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1768,0);
    ::FString::~FString(&local_1768);
  }
  else if (local_fd8._8_4_ != 0) goto LAB_141d1d21f;
  if (local_fb8.Owner != local_1d98.Owner) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1758,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1758,0);
    ::FString::~FString(&local_1758);
  }
  uStack_1d70 = 5;
  local_1d78 = "Field";
  local_1598._12_4_ = uStack_1d6c;
  local_1598.Size = 5;
  local_1598.DataPtr = "Field";
  FCbObjectView::FindView((FCbObjectView *)(local_fd8 + 0x10),&local_1d68,&local_1598);
  if ((local_1d68.TypeWithFlags & CustomByName) == None) {
    local_1e40._padding_ = 0;
    local_1e40._padding_ = 0;
    local_1e40.Buffer.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  }
  else {
    if (local_fb8.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar4 = &(local_fb8.Owner)->ReferenceCountsAndFlags;
      aVar5 = *paVar4;
      *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + 1);
      UNLOCK();
      if (((ulonglong)aVar5 & 0x3fffffff) == 0) {
        LOCK();
        (local_fb8.Owner)->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)(local_fb8.Owner)->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    local_1e28 = local_fb8.Owner;
    TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
              ((TCbBuffer<FCbFieldView> *)(local_1e48 + 8),&local_1d68,(FSharedBuffer)&local_1e28);
  }
  uVar21 = FCbFieldView::AsInteger((FCbFieldView *)(local_1e48 + 8),0,(FIntegerParams)0x3f);
  FVar24.Owner.Owner = local_1e40.Buffer.Owner.Owner;
  if (local_1e40.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    plVar8 = (longlong *)((longlong)local_1e40.Buffer.Owner.Owner + 0x18);
    lVar31 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (((uint)lVar31 & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_1e40.Buffer.Owner.Owner + 0x10))
                (local_1e40.Buffer.Owner.Owner);
      *(longlong *)((longlong)FVar24.Owner.Owner + 8) = 0;
      *(longlong *)((longlong)FVar24.Owner.Owner + 0x10) = 0;
      LOCK();
      puVar2 = (ulonglong *)((longlong)FVar24.Owner.Owner + 0x18);
      uVar30 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar30 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar24.Owner.Owner)(FVar24.Owner.Owner,1);
      }
    }
  }
  if ((int)uVar21 != 0x2a) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1d58,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1d58,0);
    ::FString::~FString(&local_1d58);
  }
  pFVar22 = FCbObjectView::GetHash((FCbObjectView *)(local_fd8 + 0x10),&local_b04);
  if (((local_fb0 != *(longlong *)pFVar22->Hash) || (local_fa8 != *(longlong *)(pFVar22->Hash + 8)))
     || (local_fa0 != *(int *)(pFVar22->Hash + 0x10))) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1d48,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1d48,0);
    ::FString::~FString(&local_1d48);
  }
  `FCompactBinaryPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_1f07,(FCbPackage *)local_fd8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_fb8);
  DestructItems<FCbAttachment,int>((FCbAttachment *)local_fd8._0_8_,local_fd8._8_4_);
  if ((FScriptContainerElement *)local_fd8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_fd8._0_8_);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1d98);
  FCbWriter::~FCbWriter(local_888);
  pFVar19 = FAutomationTestFramework::Get();
  pFVar6 = pFVar19->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x50);
  ::FString::FString(&local_1d38,L"Object View Only");
  (*pcVar7)(pFVar6,&local_1d38,0,0);
  if (local_1d38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d38.Data.AllocatorInstance.Data);
  }
  FCbWriter::FCbWriter(local_168,0x100);
  FCbWriter::BeginObject(local_168);
  uStack_1d20 = 5;
  local_1d28 = "Field";
  local_15a8._12_4_ = uStack_1d1c;
  local_15a8.Size = 5;
  local_15a8.DataPtr = "Field";
  FCbWriter::SetNameOrAddString(local_168,&local_15a8);
  FCbWriter::AddInteger(local_168,0x2a);
  FCbWriter::EndObject(local_168);
  pFVar20 = FCbWriter::Save(local_168,(FCbFieldIterator *)local_12f8);
  FCbField::AsObject((FCbField *)pFVar20,(FCbObject *)local_16e8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_12f8 + 0x10));
  local_1e20 = 0;
  pFVar23 = TCbBufferFactory<FCbObject,FCbObjectView>::MakeView
                      (&local_1280,(FCbObjectView *)local_16e8,(FSharedBuffer)&local_1e20);
  FCbPackage::FCbPackage((FCbPackage *)local_f58,pFVar23);
  bVar15 = FCbObjectView::operator_bool((FCbObjectView *)local_f48);
  if ((!bVar15) && (local_f58._8_4_ == 0)) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1d18,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_1d18,0);
    ::FString::~FString(&local_1d18);
  }
  bVar15 = FCbObjectView::operator_bool((FCbObjectView *)local_f48);
  if ((!bVar15) && (local_f58._8_4_ == 0)) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1d08,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1d08,0);
    ::FString::~FString(&local_1d08);
  }
  if ((int)local_f58._8_4_ < 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar15) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
LAB_141d1d6ba:
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1cf8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1cf8,0);
    ::FString::~FString(&local_1cf8);
  }
  else if (local_f58._8_4_ != 0) goto LAB_141d1d6ba;
  if (local_f38.Owner == local_16d8.Owner) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1ce8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1ce8,0);
    ::FString::~FString(&local_1ce8);
  }
  uStack_1cd0 = 5;
  local_1cd8 = "Field";
  local_1628._12_4_ = uStack_1ccc;
  local_1628.Size = 5;
  local_1628.DataPtr = "Field";
  this_00 = FCbObject::operator[]((FCbObject *)local_f48,(FCbField *)local_1468,&local_1628);
  uVar21 = FCbFieldView::AsInteger((FCbFieldView *)this_00,0,(FIntegerParams)0x3f);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_1468 + 0x10));
  if ((int)uVar21 != 0x2a) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1cc8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1cc8);
    ::FString::~FString(&local_1cc8);
  }
  pFVar22 = FCbObjectView::GetHash((FCbObjectView *)local_f48,&local_af0);
  if (((local_f30 != *(longlong *)pFVar22->Hash) || (local_f28 != *(longlong *)(pFVar22->Hash + 8)))
     || (local_f20 != *(int *)(pFVar22->Hash + 0x10))) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1cb8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1cb8);
    ::FString::~FString(&local_1cb8);
  }
  `FCompactBinaryPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_1f07,(FCbPackage *)local_f58);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_f38);
  DestructItems<FCbAttachment,int>((FCbAttachment *)local_f58._0_8_,local_f58._8_4_);
  if ((FScriptContainerElement *)local_f58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f58._0_8_);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_16d8);
  FCbWriter::~FCbWriter(local_168);
  pFVar19 = FAutomationTestFramework::Get();
  pFVar6 = pFVar19->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x50);
  ::FString::FString(&local_1ca8,L"Attachment Only");
  (*pcVar7)(pFVar6,&local_1ca8,0,0);
  if (local_1ca8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1ca8.Data.AllocatorInstance.Data);
  }
  FCbObjectView::FCbObjectView(&local_1eb8);
  local_1ea8 = (longlong *)0x0;
  FCbWriter::FCbWriter(local_758,0x100);
  FCbWriter::BeginObject(local_758);
  uStack_1c90 = 6;
  local_1c98 = "Field1";
  local_15b8._12_4_ = uStack_1c8c;
  local_15b8.Size = 6;
  local_15b8.DataPtr = "Field1";
  FCbWriter::SetNameOrAddString(local_758,&local_15b8);
  FCbWriter::AddInteger(local_758,0x2a);
  FCbWriter::EndObject(local_758);
  pFVar20 = FCbWriter::Save(local_758,(FCbFieldIterator *)local_1408);
  pFVar23 = FCbField::AsObject((FCbField *)pFVar20,(FCbObject *)local_1450);
  plVar1 = local_1ea8;
  local_1eb8._0_4_ = *(undefined4 *)pFVar23;
  local_1eb8._4_4_ = *(undefined4 *)&pFVar23->field_0x4;
  local_1eb8._8_4_ = *(undefined4 *)&pFVar23->field_0x8;
  local_1eb8._12_4_ = *(undefined4 *)&pFVar23->field_0xc;
  plVar8 = *(longlong **)&pFVar23->field_0x10;
  *(undefined8 *)&pFVar23->field_0x10 = 0;
  if (local_1ea8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1ea8 + 3;
    lVar31 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (((uint)lVar31 & 0x3fffffff) == 1) {
      lVar31 = *local_1ea8;
      local_1ea8 = plVar8;
      (**(code **)(lVar31 + 0x10))(plVar1);
      plVar1[1] = 0;
      plVar1[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar1 + 3);
      uVar30 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      plVar8 = local_1ea8;
      if (((uint)(uVar30 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar1)(plVar1,1);
        plVar8 = local_1ea8;
      }
    }
  }
  local_1ea8 = plVar8;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_1450 + 0x10));
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_1408 + 0x10));
  FCbWriter::~FCbWriter(local_758);
  FCbObjectView::FCbObjectView(&local_1e60);
  local_1e50.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  FCbWriter::FCbWriter(local_628,0x100);
  FCbWriter::BeginObject(local_628);
  uStack_1c80 = 6;
  local_1c88 = "Field2";
  local_15c8._12_4_ = uStack_1c7c;
  local_15c8.Size = 6;
  local_15c8.DataPtr = "Field2";
  FCbWriter::SetNameOrAddString(local_628,&local_15c8);
  FCbWriter::AddInteger(local_628,0x2a);
  FCbWriter::EndObject(local_628);
  pFVar20 = FCbWriter::Save(local_628,(FCbFieldIterator *)local_13e8);
  pFVar23 = FCbField::AsObject((FCbField *)pFVar20,(FCbObject *)local_14c8);
  FVar12.Owner.Owner = local_1e50.Owner.Owner;
  local_1e60._0_4_ = *(undefined4 *)pFVar23;
  local_1e60._4_4_ = *(undefined4 *)&pFVar23->field_0x4;
  local_1e60._8_4_ = *(undefined4 *)&pFVar23->field_0x8;
  local_1e60._12_4_ = *(undefined4 *)&pFVar23->field_0xc;
  FVar24.Owner.Owner =
       *(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&pFVar23->field_0x10;
  *(undefined8 *)&pFVar23->field_0x10 = 0;
  if (local_1e50.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar4 = (atomic<unsigned___int64> *)((longlong)local_1e50.Owner.Owner + 0x18);
    aVar5 = *paVar4;
    *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + -1);
    UNLOCK();
    if ((aVar5._0_4_ & 0x3fffffff) == 1) {
      lVar31 = *(longlong *)local_1e50.Owner.Owner;
      local_1e50.Owner.Owner = FVar24.Owner.Owner;
      (**(code **)(lVar31 + 0x10))(FVar12.Owner.Owner);
      *(void **)((longlong)FVar12.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar12.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar4 = (atomic<unsigned___int64> *)((longlong)FVar12.Owner.Owner + 0x18);
      aVar5 = *paVar4;
      *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 - 0x40000000);
      UNLOCK();
      FVar24.Owner.Owner = local_1e50.Owner.Owner;
      if (((uint)((ulonglong)aVar5 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar12.Owner.Owner)(FVar12.Owner.Owner,1);
        FVar24.Owner.Owner = local_1e50.Owner.Owner;
      }
    }
  }
  local_1e50.Owner.Owner = FVar24.Owner.Owner;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_14c8 + 0x10));
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_13e8 + 0x10));
  FCbWriter::~FCbWriter(local_628);
  local_1078._0_8_ = (FScriptContainerElement *)0x0;
  local_1078._8_4_ = 0;
  local_1078._12_4_ = 0;
  FCbObjectView::FCbObjectView((FCbObjectView *)(local_1078 + 0x10));
  local_1058 = (longlong *)0x0;
  local_1050[0x10] = '\0';
  local_1050[0x11] = '\0';
  local_1050[0x12] = '\0';
  local_1050[0x13] = '\0';
  local_1050[0] = '\0';
  local_1050[1] = '\0';
  local_1050[2] = '\0';
  local_1050[3] = '\0';
  local_1050[4] = '\0';
  local_1050[5] = '\0';
  local_1050[6] = '\0';
  local_1050[7] = '\0';
  local_1050[8] = '\0';
  local_1050[9] = '\0';
  local_1050[10] = '\0';
  local_1050[0xb] = '\0';
  local_1050[0xc] = '\0';
  local_1050[0xd] = '\0';
  local_1050[0xe] = '\0';
  local_1050[0xf] = '\0';
  local_1700._4_4_ = local_1eb8._4_4_;
  local_1700._0_4_ = local_1eb8._0_4_;
  local_1700._12_4_ = local_1eb8._12_4_;
  local_1700._8_4_ = local_1eb8._8_4_;
  if (local_1ea8 != (longlong *)0x0) {
    LOCK();
    puVar2 = (ulonglong *)(local_1ea8 + 3);
    uVar30 = *puVar2;
    *puVar2 = *puVar2 + 1;
    UNLOCK();
    if ((uVar30 & 0x3fffffff) == 0) {
      LOCK();
      local_1ea8[3] = local_1ea8[3] + 0x40000000;
      UNLOCK();
    }
  }
  local_1700._16_8_ = local_1ea8;
  FCbAttachment::FObjectValue::FObjectValue
            ((FObjectValue *)&local_c70,(FCbObject *)local_1700,(FIoHash *)0x0);
  uVar13 = local_1700._16_8_;
  bVar15 = true;
  local_c70.Value.TypeIndex = '\x01';
  if ((longlong *)local_1700._16_8_ != (longlong *)0x0) {
    LOCK();
    plVar8 = (longlong *)(local_1700._16_8_ + 0x18);
    lVar31 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (((uint)lVar31 & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_1700._16_8_ + 0x10))(local_1700._16_8_);
      *(longlong *)(uVar13 + 8) = 0;
      *(longlong *)(uVar13 + 0x10) = 0;
      LOCK();
      puVar2 = (ulonglong *)(uVar13 + 0x18);
      uVar30 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar30 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)uVar13)(uVar13,1);
      }
    }
  }
  FCbPackage::AddAttachment
            ((FCbPackage *)local_1078,&local_c70,
             (TFunctionRef<FSharedBuffer___cdecl(FIoHash_const_&)> *)0x0);
  FCbAttachment::~FCbAttachment(&local_c70);
  FVar24 = FSharedBuffer::MakeOwned(&local_1e50);
  FCbAttachment::FCbAttachment<FSharedBuffer,0>
            (&local_c00,local_1f08,(FSharedBuffer *)FVar24.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1e18);
  FCbPackage::AddAttachment
            ((FCbPackage *)local_1078,&local_c00,
             (TFunctionRef<FSharedBuffer___cdecl(FIoHash_const_&)> *)0x0);
  FCbAttachment::~FCbAttachment(&local_c00);
  bVar16 = FCbObjectView::operator_bool((FCbObjectView *)(local_1078 + 0x10));
  if ((!bVar16) && (local_1078._8_4_ == 0)) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1c78,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_1c78,0);
    ::FString::~FString(&local_1c78);
  }
  bVar16 = FCbObjectView::operator_bool((FCbObjectView *)(local_1078 + 0x10));
  if ((!bVar16) && (local_1078._8_4_ == 0)) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1c68,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1c68,0);
    ::FString::~FString(&local_1c68);
  }
  if ((int)local_1078._8_4_ < 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
LAB_141d1dd8d:
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1c58,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1c58,0);
    ::FString::~FString(&local_1c58);
  }
  else if (local_1078._8_4_ != 2) goto LAB_141d1dd8d;
  local_1dc0._0_8_ = 0;
  local_1dc0._8_8_ = 0;
  local_1db0 = (longlong *)0x0;
  FCbObjectView::FCbObjectView(&local_1dc0);
  local_1db0 = (longlong *)0x0;
  bVar16 = FCbObjectView::Equals((FCbObjectView *)(local_1078 + 0x10),&local_1dc0);
  plVar8 = local_1db0;
  if (local_1db0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1db0 + 3;
    lVar31 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar31 & 0x3fffffff) == 1) {
      (**(code **)(*local_1db0 + 0x10))(local_1db0);
      plVar8[1] = 0;
      plVar8[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar8 + 3);
      uVar30 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar30 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar8)(plVar8,1);
      }
    }
  }
  if (!bVar16) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1c48,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1c48,0);
    ::FString::~FString(&local_1c48);
  }
  iVar18 = memcmp(local_1050,&FIoHash::Zero,0x14);
  if (iVar18 != 0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1c38,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1c38);
    ::FString::~FString(&local_1c38);
  }
  `FCompactBinaryPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_1f07,(FCbPackage *)local_1078);
  pFVar22 = FCbObjectView::GetHash(&local_1eb8,&local_b18);
  pFVar25 = FCbPackage::FindAttachment((FCbPackage *)local_1078,pFVar22);
  pFVar22 = FCbObjectView::GetHash(&local_1e60,&local_b2c);
  pFVar26 = FCbPackage::FindAttachment((FCbPackage *)local_1078,pFVar22);
  local_1f00.Size = (ulong64)pFVar26;
  bVar16 = false;
  if (pFVar25 == (FCbAttachment *)0x0) {
LAB_141d1df77:
    bVar10 = bVar16;
    bVar16 = true;
  }
  else {
    pFVar23 = FCbAttachment::AsObject(pFVar25,(FCbObject *)local_1438);
    bVar10 = true;
    bVar17 = FCbObjectView::Equals((FCbObjectView *)pFVar23,&local_1eb8);
    bVar16 = true;
    if (!bVar17) goto LAB_141d1df77;
    bVar16 = false;
  }
  if (bVar10) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_1438 + 0x10));
  }
  bVar10 = false;
  if (bVar16) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1c28,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1c28);
    ::FString::~FString(&local_1c28);
    pFVar26 = (FCbAttachment *)local_1f00.Size;
  }
  bVar16 = bVar15;
  if (pFVar26 != (FCbAttachment *)0x0) {
    bVar10 = true;
    FVar24 = FCbAttachment::AsBinary(pFVar26);
                    /* WARNING: Load size is inaccurate */
    if ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)*FVar24.Owner.Owner ==
        local_1e50.Owner.Owner) {
      bVar10 = true;
      bVar16 = false;
    }
  }
  if (bVar10) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1e10);
  }
  if (bVar16) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1c18,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1c18);
    ::FString::~FString(&local_1c18);
  }
  plVar8 = local_1ea8;
  if (local_1ea8 == (longlong *)0x0) {
    lVar31 = 0;
  }
  else {
    if (((ulonglong)local_1ea8[3] >> 0x3c & 4) == 0) {
      (**(code **)(*local_1ea8 + 8))(local_1ea8);
    }
    lVar31 = plVar8[2];
  }
  plVar8 = local_1ea8;
  if (local_1ea8 == (longlong *)0x0) {
    local_1c08 = 0;
  }
  else {
    if (((ulonglong)local_1ea8[3] >> 0x3c & 4) == 0) {
      (**(code **)(*local_1ea8 + 8))(local_1ea8);
    }
    local_1c08 = plVar8[1];
  }
  local_1c00 = lVar31;
  FSharedBuffer::Clone(&local_1e70);
  FVar24 = FSharedBuffer::MakeOwned((FSharedBuffer *)&local_1e70);
  FVar24 = FSharedBuffer::MakeOwned((FSharedBuffer *)FVar24.Owner.Owner);
  FCompositeBuffer::FCompositeBuffer<FSharedBuffer,0>
            ((FCompositeBuffer *)&local_ed8,(FSharedBuffer *)FVar24.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1e08);
  pFVar27 = FBlake3::HashBuffer(&local_a78,(FCompositeBuffer *)&local_ed8);
  local_ed8._padding_ = *(longlong *)pFVar27->Hash;
  local_ed8._padding_ = *(longlong *)(pFVar27->Hash + 8);
  local_ed8._padding_._0_4_ = *(undefined4 *)(pFVar27->Hash + 0x10);
  local_ed8.TypeIndex = 2;
  if ((int)local_ed8._padding_ == 0) {
    TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
    ::Emplace<std::nullptr_t>(&local_ed8);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1e00);
  FCbPackage::AddAttachment
            ((FCbPackage *)local_1078,(FCbAttachment *)&local_ed8,
             (TFunctionRef<FSharedBuffer___cdecl(FIoHash_const_&)> *)0x0);
  uVar30 = (ulonglong)local_ed8.TypeIndex;
  if ((3 < local_ed8.TypeIndex) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar30] ==
      UE::Core::Private::TDestructorCaller<FCbAttachment::FBinaryValue>::Destruct) {
    FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)&local_ed8);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar30])();
  }
  pFVar23 = TCbBufferFactory<FCbObject,FCbObjectView>::Clone((FCbObject *)local_1588,&local_1e60);
  FCbAttachment::FObjectValue::FObjectValue((FObjectValue *)&local_e08,pFVar23,(FIoHash *)0x0);
  local_e08.Value.TypeIndex = 1;
  FCbPackage::AddAttachment
            ((FCbPackage *)local_1078,&local_e08,
             (TFunctionRef<FSharedBuffer___cdecl(FIoHash_const_&)> *)0x0);
  uVar30 = (ulonglong)local_e08.Value.TypeIndex;
  if ((3 < local_e08.Value.TypeIndex) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar30] ==
      UE::Core::Private::TDestructorCaller<FCbAttachment::FObjectValue>::Destruct) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_e08.Value._padding_)
    ;
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar30])(&local_e08);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_1588 + 0x10));
  if ((int)local_1078._8_4_ < 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
LAB_141d1e299:
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1bf8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1bf8,0);
    ::FString::~FString(&local_1bf8);
  }
  else if (local_1078._8_4_ != 2) goto LAB_141d1e299;
  pFVar22 = FCbObjectView::GetHash(&local_1eb8,&local_b40);
  pFVar26 = FCbPackage::FindAttachment((FCbPackage *)local_1078,pFVar22);
  if (pFVar26 != pFVar25) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1be8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1be8,0);
    ::FString::~FString(&local_1be8);
  }
  pFVar22 = FCbObjectView::GetHash(&local_1e60,&local_b54);
  pFVar26 = FCbPackage::FindAttachment((FCbPackage *)local_1078,pFVar22);
  if (pFVar26 != (FCbAttachment *)local_1f00.Size) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1bd8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1bd8,0);
    ::FString::~FString(&local_1bd8);
  }
  bVar16 = false;
  if (pFVar25 == (FCbAttachment *)0x0) {
LAB_141d1e3c8:
    bVar10 = bVar16;
    bVar16 = true;
  }
  else {
    bVar10 = true;
    FVar24 = FCbAttachment::AsBinary(pFVar25);
    bVar16 = true;
    if (*(void **)FVar24.Owner.Owner != local_1e70.Data) goto LAB_141d1e3c8;
    bVar16 = false;
  }
  if (bVar10) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_1df8);
  }
  bVar10 = false;
  if (bVar16) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1bc8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1bc8,0);
    ::FString::~FString(&local_1bc8);
  }
  bVar16 = bVar15;
  if ((FCbAttachment *)local_1f00.Size != (FCbAttachment *)0x0) {
    bVar10 = true;
    pFVar23 = FCbAttachment::AsObject((FCbAttachment *)local_1f00.Size,(FCbObject *)local_1570);
    bVar17 = FCbObjectView::Equals((FCbObjectView *)pFVar23,&local_1e60);
    if (bVar17) {
      bVar16 = false;
      bVar10 = true;
    }
  }
  if (bVar10) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_1570 + 0x10));
  }
  if (bVar16) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1bb8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1bb8,0);
    ::FString::~FString(&local_1bb8);
  }
  uVar13 = local_1078._0_8_;
  uVar14 = local_1078._8_4_;
  if (((int)local_1078._8_4_ < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar16 = AlgoImpl::IsSortedBy<FCbAttachment,int,FIdentityFunctor,TLess<void>_>
                     ((FCbAttachment *)uVar13,uVar14,(FIdentityFunctor)local_1f08,
                      (TLess<void>)local_1f08);
  if (!bVar16) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1ba8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1ba8,0);
    ::FString::~FString(&local_1ba8);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_1e70);
  plVar8 = local_1058;
  if (local_1058 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1058 + 3;
    lVar31 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar31 & 0x3fffffff) == 1) {
      (**(code **)(*local_1058 + 0x10))(local_1058);
      plVar8[1] = 0;
      plVar8[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar8 + 3);
      uVar30 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar30 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar8)(plVar8,1);
      }
    }
  }
  DestructItems<FCbAttachment,int>((FCbAttachment *)local_1078._0_8_,local_1078._8_4_);
  if ((FScriptContainerElement *)local_1078._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1078._0_8_);
  }
  FVar24.Owner.Owner = local_1e50.Owner.Owner;
  if (local_1e50.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar4 = (atomic<unsigned___int64> *)((longlong)local_1e50.Owner.Owner + 0x18);
    aVar5 = *paVar4;
    *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + -1);
    UNLOCK();
    if ((aVar5._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_1e50.Owner.Owner + 0x10))(local_1e50.Owner.Owner);
      *(void **)((longlong)FVar24.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar24.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar4 = (atomic<unsigned___int64> *)((longlong)FVar24.Owner.Owner + 0x18);
      aVar5 = *paVar4;
      *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar5 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar24.Owner.Owner)(FVar24.Owner.Owner,1);
      }
    }
  }
  plVar8 = local_1ea8;
  if (local_1ea8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1ea8 + 3;
    lVar31 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar31 & 0x3fffffff) == 1) {
      (**(code **)(*local_1ea8 + 0x10))(local_1ea8);
      plVar8[1] = 0;
      plVar8[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar8 + 3);
      uVar30 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar30 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar8)(plVar8,1);
      }
    }
  }
  local_1b98 = &local_1f04;
  local_1f04 = 0x3020100;
  local_1b90 = 4;
  FSharedBuffer::MakeView(&local_1f00);
  FSharedBuffer::GetView((FSharedBuffer *)&local_1f00,&local_15d8);
  local_1608.Data = local_15d8.Data;
  local_1608.Size = local_15d8.Size;
  pFVar27 = FBlake3::HashBuffer(&local_a58,&local_1608);
  local_10b8.Hash._0_8_ = *(undefined8 *)pFVar27->Hash;
  local_10b8.Hash._8_8_ = *(undefined8 *)(pFVar27->Hash + 8);
  local_10b8.Hash._16_4_ = *(undefined4 *)(pFVar27->Hash + 0x10);
  FCbObjectView::FCbObjectView((FCbObjectView *)local_1ed0);
  local_1ec0.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  FCbWriter::FCbWriter(local_4f8,0x100);
  FCbWriter::BeginObject(local_4f8);
  uStack_1b80 = 6;
  local_1b88 = "Level4";
  local_1618._12_4_ = uStack_1b7c;
  local_1618.Size = 6;
  local_1618.DataPtr = "Level4";
  FCbWriter::SetName(local_4f8,&local_1618);
  FCbWriter::AddBinaryAttachment(local_4f8,&local_10b8);
  FCbWriter::EndObject(local_4f8);
  pFVar20 = FCbWriter::Save(local_4f8,(FCbFieldIterator *)local_13c8);
  pFVar23 = FCbField::AsObject((FCbField *)pFVar20,(FCbObject *)local_1480);
  local_1ed0._0_8_ = *(undefined8 *)pFVar23;
  local_1ed0._8_8_ = *(undefined8 *)&pFVar23->field_0x8;
  FSharedBuffer::operator=(&local_1ec0,(FSharedBuffer *)&pFVar23->field_0x10);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_1480 + 0x10));
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_13c8 + 0x10));
  FCbWriter::~FCbWriter(local_4f8);
  FCbObjectView::GetHash((FCbObjectView *)local_1ed0,&local_1090);
  FCbObjectView::FCbObjectView(&local_1e88);
  local_1e78.Owner = (FBufferOwner *)0x0;
  FCbWriter::FCbWriter(local_3c8,0x100);
  FCbWriter::BeginObject(local_3c8);
  uStack_1b70 = 6;
  local_1b78 = "Level3";
  local_15e8._12_4_ = uStack_1b6c;
  local_15e8.Size = 6;
  local_15e8.DataPtr = "Level3";
  FCbWriter::SetName(local_3c8,&local_15e8);
  FCbWriter::AddObjectAttachment(local_3c8,&local_1090);
  FCbWriter::EndObject(local_3c8);
  pFVar20 = FCbWriter::Save(local_3c8,(FCbFieldIterator *)local_12d8);
  pFVar23 = FCbField::AsObject((FCbField *)pFVar20,(FCbObject *)local_1498);
  TVar11.Owner = local_1e78.Owner;
  local_1e88._0_4_ = *(undefined4 *)pFVar23;
  local_1e88._4_4_ = *(undefined4 *)&pFVar23->field_0x4;
  local_1e88._8_4_ = *(undefined4 *)&pFVar23->field_0x8;
  local_1e88._12_4_ = *(undefined4 *)&pFVar23->field_0xc;
  TVar9.Owner = *(FBufferOwner **)&pFVar23->field_0x10;
  *(undefined8 *)&pFVar23->field_0x10 = 0;
  if (local_1e78.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar4 = &(local_1e78.Owner)->ReferenceCountsAndFlags;
    aVar5 = *paVar4;
    *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + -1);
    UNLOCK();
    if ((aVar5._0_4_ & 0x3fffffff) == 1) {
      plVar8 = &(local_1e78.Owner)->_padding_;
      local_1e78.Owner = TVar9.Owner;
      (**(code **)(*plVar8 + 0x10))(TVar11.Owner);
      (TVar11.Owner)->Data = (void *)0x0;
      (TVar11.Owner)->Size = 0;
      LOCK();
      paVar4 = &(TVar11.Owner)->ReferenceCountsAndFlags;
      aVar5 = *paVar4;
      *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + -0x40000000);
      UNLOCK();
      TVar9.Owner = local_1e78.Owner;
      if (((uint)((ulonglong)aVar5 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)(TVar11.Owner)->_padding_)(TVar11.Owner,1);
        TVar9.Owner = local_1e78.Owner;
      }
    }
  }
  local_1e78.Owner = TVar9.Owner;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_1498 + 0x10));
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_12d8 + 0x10));
  FCbWriter::~FCbWriter(local_3c8);
  FCbObjectView::GetHash(&local_1e88,&local_10a4);
  FCbObjectView::FCbObjectView((FCbObjectView *)local_1ea0);
  local_1e90.Owner = (FBufferOwner *)0x0;
  FCbWriter::FCbWriter(local_298,0x100);
  FCbWriter::BeginObject(local_298);
  uStack_1b60 = 6;
  local_1b68 = "Level2";
  local_1678._12_4_ = uStack_1b5c;
  local_1678.Size = 6;
  local_1678.DataPtr = "Level2";
  FCbWriter::SetName(local_298,&local_1678);
  FCbWriter::AddObjectAttachment(local_298,&local_10a4);
  FCbWriter::EndObject(local_298);
  pFVar20 = FCbWriter::Save(local_298,(FCbFieldIterator *)local_12b8);
  pFVar23 = FCbField::AsObject((FCbField *)pFVar20,(FCbObject *)local_14b0);
  TVar11.Owner = local_1e90.Owner;
  local_1ea0._0_4_ = *(undefined4 *)pFVar23;
  local_1ea0._4_4_ = *(undefined4 *)&pFVar23->field_0x4;
  local_1ea0._8_4_ = *(undefined4 *)&pFVar23->field_0x8;
  local_1ea0._12_4_ = *(undefined4 *)&pFVar23->field_0xc;
  TVar9.Owner = *(FBufferOwner **)&pFVar23->field_0x10;
  *(undefined8 *)&pFVar23->field_0x10 = 0;
  if (local_1e90.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar4 = &(local_1e90.Owner)->ReferenceCountsAndFlags;
    aVar5 = *paVar4;
    *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + -1);
    UNLOCK();
    if ((aVar5._0_4_ & 0x3fffffff) == 1) {
      plVar8 = &(local_1e90.Owner)->_padding_;
      local_1e90.Owner = TVar9.Owner;
      (**(code **)(*plVar8 + 0x10))(TVar11.Owner);
      (TVar11.Owner)->Data = (void *)0x0;
      (TVar11.Owner)->Size = 0;
      LOCK();
      paVar4 = &(TVar11.Owner)->ReferenceCountsAndFlags;
      aVar5 = *paVar4;
      *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + -0x40000000);
      UNLOCK();
      TVar9.Owner = local_1e90.Owner;
      if (((uint)((ulonglong)aVar5 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)(TVar11.Owner)->_padding_)(TVar11.Owner,1);
        TVar9.Owner = local_1e90.Owner;
      }
    }
  }
  local_1e90.Owner = TVar9.Owner;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_14b0 + 0x10));
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_12b8 + 0x10));
  FCbWriter::~FCbWriter(local_298);
  FCbObjectView::GetHash((FCbObjectView *)local_1ea0,&local_1038);
  local_16b0 = &local_1e88;
  local_16a8 = &local_10a4;
  local_16a0 = local_1ed0;
  local_1698 = &local_1090;
  local_1690 = &local_1f00;
  local_1688 = &local_10b8;
  pFVar19 = FAutomationTestFramework::Get();
  pFVar6 = pFVar19->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x50);
  ::FString::FString(&local_1b58,L"Object + Attachments");
  (*pcVar7)(pFVar6,&local_1b58,0,0);
  if (local_1b58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b58.Data.AllocatorInstance.Data);
  }
  local_10f8._0_8_ = (FScriptContainerElement *)0x0;
  local_10f8._8_4_ = 0;
  local_10f8._12_4_ = 0;
  FCbObjectView::FCbObjectView((FCbObjectView *)local_10e8);
  local_10d0[0x10] = '\0';
  local_10d0[0x11] = '\0';
  local_10d0[0x12] = '\0';
  local_10d0[0x13] = '\0';
  local_10d8.Owner = (FBufferOwner *)0x0;
  local_1b40 = &local_16b0;
  local_1b48 = UE::Core::Private::Function::
               TFunctionRefCaller<`FCompactBinaryPackageTest::TestBody'::__l2::<lambda_2>_const_,FSharedBuffer,FIoHash_const_&>
               ::Call;
  local_10d0[0] = '\0';
  local_10d0[1] = '\0';
  local_10d0[2] = '\0';
  local_10d0[3] = '\0';
  local_10d0[4] = '\0';
  local_10d0[5] = '\0';
  local_10d0[6] = '\0';
  local_10d0[7] = '\0';
  local_10d0[8] = '\0';
  local_10d0[9] = '\0';
  local_10d0[10] = '\0';
  local_10d0[0xb] = '\0';
  local_10d0[0xc] = '\0';
  local_10d0[0xd] = '\0';
  local_10d0[0xe] = '\0';
  local_10d0[0xf] = '\0';
  local_1658._4_4_ = local_1ea0._4_4_;
  local_1658._0_4_ = local_1ea0._0_4_;
  local_1658._12_4_ = local_1ea0._12_4_;
  local_1658._8_4_ = local_1ea0._8_4_;
  if (local_1e90.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar4 = &(local_1e90.Owner)->ReferenceCountsAndFlags;
    aVar5 = *paVar4;
    *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + 1);
    UNLOCK();
    if (((ulonglong)aVar5 & 0x3fffffff) == 0) {
      LOCK();
      (local_1e90.Owner)->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((longlong)(local_1e90.Owner)->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
    }
  }
  local_1658._16_8_ = local_1e90.Owner;
  local_1298._0_8_ = local_1658._0_8_;
  local_1298._8_8_ = local_1658._8_8_;
  FCbPackage::SetObject
            ((FCbPackage *)local_10f8,(FCbObject *)local_1658,&local_1038,
             (TFunctionRef<FSharedBuffer___cdecl(FIoHash_const_&)> *)&local_1b48);
  bVar16 = FCbObjectView::operator_bool((FCbObjectView *)local_10e8);
  if ((!bVar16) && (local_10f8._8_4_ == 0)) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1b38,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_1b38,0);
    ::FString::~FString(&local_1b38);
  }
  bVar16 = FCbObjectView::operator_bool((FCbObjectView *)local_10e8);
  if ((!bVar16) && (local_10f8._8_4_ == 0)) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1b28,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1b28,0);
    ::FString::~FString(&local_1b28);
  }
  if ((int)local_10f8._8_4_ < 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
LAB_141d1ec87:
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1b18,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1b18,0);
    ::FString::~FString(&local_1b18);
  }
  else if (local_10f8._8_4_ != 3) goto LAB_141d1ec87;
  if (local_10d8.Owner != local_1e90.Owner) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1b08,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1b08,0);
    ::FString::~FString(&local_1b08);
  }
  iVar18 = memcmp(local_10d0,&local_1038,0x14);
  if (iVar18 != 0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1af8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1af8,0);
    if (local_1af8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1af8.Data.AllocatorInstance.Data);
    }
  }
  `FCompactBinaryPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_1f07,(FCbPackage *)local_10f8);
  pFVar26 = FCbPackage::FindAttachment((FCbPackage *)local_10f8,&local_10a4);
  local_1f00.Size = (ulong64)FCbPackage::FindAttachment((FCbPackage *)local_10f8,&local_1090);
  pFVar25 = FCbPackage::FindAttachment((FCbPackage *)local_10f8,&local_10b8);
  bVar16 = false;
  if (pFVar26 == (FCbAttachment *)0x0) {
LAB_141d1edf9:
    bVar10 = bVar16;
    bVar16 = true;
  }
  else {
    bVar10 = true;
    pFVar23 = FCbAttachment::AsObject(pFVar26,(FCbObject *)local_1420);
    bVar17 = FCbObjectView::Equals((FCbObjectView *)pFVar23,&local_1e88);
    bVar16 = true;
    if (!bVar17) goto LAB_141d1edf9;
    bVar16 = false;
  }
  if (bVar10) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_1420 + 0x10));
  }
  bVar10 = false;
  if (bVar16) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1ae8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1ae8,0);
    if (local_1ae8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1ae8.Data.AllocatorInstance.Data);
    }
  }
  bVar16 = bVar15;
  if ((FCbAttachment *)local_1f00.Size != (FCbAttachment *)0x0) {
    bVar10 = true;
    pFVar23 = FCbAttachment::AsObject((FCbAttachment *)local_1f00.Size,(FCbObject *)local_14e0);
    bVar17 = FCbObjectView::Equals((FCbObjectView *)pFVar23,(FCbObjectView *)local_1ed0);
    if (bVar17) {
      bVar16 = false;
      bVar10 = true;
    }
  }
  if (bVar10) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_14e0 + 0x10));
  }
  bVar10 = false;
  if (bVar16) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1ad8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1ad8,0);
    if (local_1ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1ad8.Data.AllocatorInstance.Data);
    }
  }
  bVar16 = bVar15;
  if (pFVar25 != (FCbAttachment *)0x0) {
    bVar10 = true;
    if ((pFVar25->Value).TypeIndex == '\x02') {
      FCompositeBuffer::ToShared((FCompositeBuffer *)pFVar25);
    }
    else {
      local_1e70.Size = 0;
    }
    if ((void *)local_1e70.Size != local_1f00.Data) {
      bVar10 = true;
      FVar24 = FCbAttachment::AsBinary(pFVar25);
      pTVar28 = FSharedBuffer::GetView((FSharedBuffer *)FVar24.Owner.Owner,&local_1338);
      pTVar29 = FSharedBuffer::GetView((FSharedBuffer *)&local_1f00,&local_1348);
      bVar17 = TMemoryView<void_const_>::EqualBytes<void_const_>(pTVar28,pTVar29);
      if (bVar17) {
        bVar16 = false;
      }
    }
  }
  if (bVar10) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_1e70.Size);
  }
  if (bVar16) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1ac8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1ac8,0);
    ::FString::~FString(&local_1ac8);
  }
  uVar13 = local_10f8._0_8_;
  uVar14 = local_10f8._8_4_;
  if (((int)local_10f8._8_4_ < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar16 = AlgoImpl::IsSortedBy<FCbAttachment,int,FIdentityFunctor,TLess<void>_>
                     ((FCbAttachment *)uVar13,uVar14,(FIdentityFunctor)local_1f08,
                      (TLess<void>)local_1f08);
  if (!bVar16) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1ab8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1ab8,0);
    ::FString::~FString(&local_1ab8);
  }
  local_1018._0_8_ = (FScriptContainerElement *)0x0;
  TArray<FCbAttachment,TSizedDefaultAllocator<32>_>::CopyToEmpty<FCbAttachment,int>
            ((TArray<FCbAttachment,TSizedDefaultAllocator<32>_> *)local_1018,
             (FCbAttachment *)local_10f8._0_8_,local_10f8._8_4_,0);
  local_1018._20_4_ = local_10e8._4_4_;
  local_1018._16_4_ = local_10e8._0_4_;
  local_1018._28_4_ = local_10e8._12_4_;
  local_1018._24_4_ = local_10e8._8_4_;
  if (local_10d8.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar4 = &(local_10d8.Owner)->ReferenceCountsAndFlags;
    aVar5 = *paVar4;
    *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + 1);
    UNLOCK();
    if (((ulonglong)aVar5 & 0x3fffffff) == 0) {
      LOCK();
      (local_10d8.Owner)->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((longlong)(local_10d8.Owner)->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
    }
  }
  local_1018._32_8_ = local_10d8.Owner;
  local_ff0[0] = local_10d0[0];
  local_ff0[1] = local_10d0[1];
  local_ff0[2] = local_10d0[2];
  local_ff0[3] = local_10d0[3];
  local_ff0[4] = local_10d0[4];
  local_ff0[5] = local_10d0[5];
  local_ff0[6] = local_10d0[6];
  local_ff0[7] = local_10d0[7];
  auStack_fe8[0] = local_10d0[8];
  auStack_fe8[1] = local_10d0[9];
  auStack_fe8[2] = local_10d0[10];
  auStack_fe8[3] = local_10d0[0xb];
  auStack_fe8[4] = local_10d0[0xc];
  auStack_fe8[5] = local_10d0[0xd];
  auStack_fe8[6] = local_10d0[0xe];
  auStack_fe8[7] = local_10d0[0xf];
  local_fe0[0] = local_10d0[0x10];
  local_fe0[1] = local_10d0[0x11];
  local_fe0[2] = local_10d0[0x12];
  local_fe0[3] = local_10d0[0x13];
  bVar16 = FCbPackage::Equals((FCbPackage *)local_1018,(FCbPackage *)local_10f8);
  if (!bVar16) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1aa8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1aa8,0);
    ::FString::~FString(&local_1aa8);
  }
  iVar18 = FCbPackage::RemoveAttachment((FCbPackage *)local_10f8,&local_1038);
  if (iVar18 != 0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1a98,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1a98,0);
    ::FString::~FString(&local_1a98);
  }
  iVar18 = FCbPackage::RemoveAttachment((FCbPackage *)local_10f8,&local_10a4);
  if (iVar18 != 1) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1a88,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1a88,0);
    ::FString::~FString(&local_1a88);
  }
  iVar18 = FCbPackage::RemoveAttachment((FCbPackage *)local_10f8,&local_1090);
  if (iVar18 != 1) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1a78,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1a78,0);
    ::FString::~FString(&local_1a78);
  }
  iVar18 = FCbPackage::RemoveAttachment((FCbPackage *)local_10f8,&local_10b8);
  if (iVar18 != 1) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1a68,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1a68,0);
    ::FString::~FString(&local_1a68);
  }
  iVar18 = FCbPackage::RemoveAttachment((FCbPackage *)local_10f8,&local_10b8);
  if (iVar18 != 0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1a58,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1a58,0);
    ::FString::~FString(&local_1a58);
  }
  if ((int)local_10f8._8_4_ < 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
LAB_141d1f329:
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1a48,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1a48,0);
    ::FString::~FString(&local_1a48);
  }
  else if (local_10f8._8_4_ != 0) goto LAB_141d1f329;
  bVar16 = FCbPackage::Equals((FCbPackage *)local_1018,(FCbPackage *)local_10f8);
  if (bVar16) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1a38,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1a38,0);
    ::FString::~FString(&local_1a38);
  }
  DestructItems<FCbAttachment,int>((FCbAttachment *)local_10f8._0_8_,local_10f8._8_4_);
  TArray<FCbAttachment,TSizedDefaultAllocator<32>_>::CopyToEmpty<FCbAttachment,int>
            ((TArray<FCbAttachment,TSizedDefaultAllocator<32>_> *)local_10f8,
             (FCbAttachment *)local_1018._0_8_,local_1018._8_4_,local_10f8._12_4_);
  TVar9.Owner = local_10d8.Owner;
  local_10e8._0_4_ = local_1018._16_4_;
  local_10e8._4_4_ = local_1018._20_4_;
  local_10e8._8_4_ = local_1018._24_4_;
  local_10e8._12_4_ = local_1018._28_4_;
  if ((FBufferOwner *)local_1018._32_8_ != (FBufferOwner *)0x0) {
    LOCK();
    paVar4 = (atomic<unsigned___int64> *)(local_1018._32_8_ + 0x18);
    aVar5 = *paVar4;
    *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + 1);
    UNLOCK();
    if (((ulonglong)aVar5 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)(local_1018._32_8_ + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)(local_1018._32_8_ + 0x18) + 0x40000000);
      UNLOCK();
    }
  }
  local_10d8.Owner = (FBufferOwner *)local_1018._32_8_;
  if (TVar9.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar4 = &(TVar9.Owner)->ReferenceCountsAndFlags;
    aVar5 = *paVar4;
    *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + -1);
    UNLOCK();
    if ((aVar5._0_4_ & 0x3fffffff) == 1) {
      (**(code **)((TVar9.Owner)->_padding_ + 0x10))(TVar9.Owner);
      (TVar9.Owner)->Data = (void *)0x0;
      (TVar9.Owner)->Size = 0;
      LOCK();
      paVar4 = &(TVar9.Owner)->ReferenceCountsAndFlags;
      aVar5 = *paVar4;
      *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + -0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar5 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)(TVar9.Owner)->_padding_)(TVar9.Owner,1);
      }
    }
  }
  local_10d0[0x10] = local_fe0[0];
  local_10d0[0x11] = local_fe0[1];
  local_10d0[0x12] = local_fe0[2];
  local_10d0[0x13] = local_fe0[3];
  local_10d0[0] = local_ff0[0];
  local_10d0[1] = local_ff0[1];
  local_10d0[2] = local_ff0[2];
  local_10d0[3] = local_ff0[3];
  local_10d0[4] = local_ff0[4];
  local_10d0[5] = local_ff0[5];
  local_10d0[6] = local_ff0[6];
  local_10d0[7] = local_ff0[7];
  local_10d0[8] = auStack_fe8[0];
  local_10d0[9] = auStack_fe8[1];
  local_10d0[10] = auStack_fe8[2];
  local_10d0[0xb] = auStack_fe8[3];
  local_10d0[0xc] = auStack_fe8[4];
  local_10d0[0xd] = auStack_fe8[5];
  local_10d0[0xe] = auStack_fe8[6];
  local_10d0[0xf] = auStack_fe8[7];
  bVar16 = FCbPackage::Equals((FCbPackage *)local_1018,(FCbPackage *)local_10f8);
  if (!bVar16) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1a28,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1a28,0);
    ::FString::~FString(&local_1a28);
  }
  local_1d90._0_8_ = 0;
  local_1d90._8_8_ = 0;
  local_1d90._16_8_ = 0;
  FCbObjectView::FCbObjectView((FCbObjectView *)&local_1d90);
  local_1d90._16_8_ = 0;
  FCbPackage::SetObject((FCbPackage *)local_10f8,&local_1d90);
  bVar16 = FCbPackage::Equals((FCbPackage *)local_1018,(FCbPackage *)local_10f8);
  if (bVar16) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1a18,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1a18,0);
    ::FString::~FString(&local_1a18);
  }
  iVar18 = memcmp(local_10d0,&FIoHash::Zero,0x14);
  if (iVar18 != 0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1a08,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1a08,0);
    ::FString::~FString(&local_1a08);
  }
  uVar13 = local_1018._32_8_;
  if ((FBufferOwner *)local_1018._32_8_ != (FBufferOwner *)0x0) {
    LOCK();
    paVar4 = (atomic<unsigned___int64> *)(local_1018._32_8_ + 0x18);
    aVar5 = *paVar4;
    *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + -1);
    UNLOCK();
    if ((aVar5._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_1018._32_8_ + 0x10))(local_1018._32_8_);
      *(void **)(uVar13 + 8) = (void *)0x0;
      *(ulong64 *)(uVar13 + 0x10) = 0;
      LOCK();
      paVar4 = (atomic<unsigned___int64> *)(uVar13 + 0x18);
      aVar5 = *paVar4;
      *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + -0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar5 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*(longlong *)uVar13)(uVar13,1);
      }
    }
  }
  DestructItems<FCbAttachment,int>((FCbAttachment *)local_1018._0_8_,local_1018._8_4_);
  if ((FScriptContainerElement *)local_1018._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1018._0_8_);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_10d8);
  DestructItems<FCbAttachment,int>((FCbAttachment *)local_10f8._0_8_,local_10f8._8_4_);
  if ((FScriptContainerElement *)local_10f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_10f8._0_8_);
  }
  pFVar19 = FAutomationTestFramework::Get();
  pFVar6 = pFVar19->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x50);
  ::FString::FString(&local_19f8,L"Out of Order");
  (*pcVar7)(pFVar6,&local_19f8,0,0);
  if (local_19f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_19f8.Data.AllocatorInstance.Data);
  }
  FCbWriter::FCbWriter(local_a38,0x180);
  local_1718._4_4_ = local_1e88._4_4_;
  local_1718._0_4_ = local_1e88._0_4_;
  local_1718._12_4_ = local_1e88._12_4_;
  local_1718._8_4_ = local_1e88._8_4_;
  if (local_1e78.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar4 = &(local_1e78.Owner)->ReferenceCountsAndFlags;
    aVar5 = *paVar4;
    *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + 1);
    UNLOCK();
    if (((ulonglong)aVar5 & 0x3fffffff) == 0) {
      LOCK();
      (local_1e78.Owner)->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((longlong)(local_1e78.Owner)->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
    }
  }
  local_1708.Owner = local_1e78.Owner;
  FCbAttachment::FObjectValue::FObjectValue
            ((FObjectValue *)&local_ce0,(FCbObject *)local_1718,&local_10a4);
  local_ce0.Value.TypeIndex = '\x01';
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1708);
  FCbAttachment::Save(&local_ce0,local_a38);
  FVar24 = FSharedBuffer::MakeOwned((FSharedBuffer *)&local_1f00);
  FCbAttachment::FCbAttachment<FSharedBuffer,0>
            (&local_c38,local_1f08,(FSharedBuffer *)FVar24.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1de8);
  FCbAttachment::Save(&local_c38,local_a38);
  FCbWriter::AddHash(local_a38,&local_1038);
  FCbWriter::AddObject(local_a38,(FCbObject *)local_1ea0);
  local_1730._0_8_ = local_1ed0._0_8_;
  local_1730._8_8_ = local_1ed0._8_8_;
  if (local_1ec0.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar4 = (atomic<unsigned___int64> *)((longlong)local_1ec0.Owner.Owner + 0x18);
    aVar5 = *paVar4;
    *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + 1);
    UNLOCK();
    if (((ulonglong)aVar5 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)((longlong)local_1ec0.Owner.Owner + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)((longlong)local_1ec0.Owner.Owner + 0x18) +
           0x40000000);
      UNLOCK();
    }
  }
  local_1720 = local_1ec0.Owner.Owner;
  FCbAttachment::FObjectValue::FObjectValue
            ((FObjectValue *)&local_d18,(FCbObject *)local_1730,&local_1090);
  local_d18.Value.TypeIndex = '\x01';
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1720);
  FCbAttachment::Save(&local_d18,local_a38);
  FCbWriter::AddNull(local_a38);
  FCbWriter::Save(local_a38,(FCbFieldIterator *)local_16d0);
  local_f98._0_8_ = (FScriptContainerElement *)0x0;
  local_f98._8_4_ = 0;
  local_f98._12_4_ = 0;
  FCbObjectView::FCbObjectView((FCbObjectView *)(local_f98 + 0x10));
  local_f78.Owner = (FBufferOwner *)0x0;
  local_f70[0x10] = '\0';
  local_f70[0x11] = '\0';
  local_f70[0x12] = '\0';
  local_f70[0x13] = '\0';
  local_f70[0] = '\0';
  local_f70[1] = '\0';
  local_f70[2] = '\0';
  local_f70[3] = '\0';
  local_f70[4] = '\0';
  local_f70[5] = '\0';
  local_f70[6] = '\0';
  local_f70[7] = '\0';
  local_f70[8] = '\0';
  local_f70[9] = '\0';
  local_f70[10] = '\0';
  local_f70[0xb] = '\0';
  local_f70[0xc] = '\0';
  local_f70[0xd] = '\0';
  local_f70[0xe] = '\0';
  local_f70[0xf] = '\0';
  bVar16 = FCbPackage::TryLoad((FCbPackage *)local_f98,(FCbFieldIterator *)local_16d0);
  if (!bVar16) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_19e8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_19e8,0);
    ::FString::~FString(&local_19e8);
  }
  pFVar26 = FCbPackage::FindAttachment((FCbPackage *)local_f98,&local_10a4);
  pFVar25 = FCbPackage::FindAttachment((FCbPackage *)local_f98,&local_1090);
  this_01 = FCbPackage::FindAttachment((FCbPackage *)local_f98,&local_10b8);
  bVar16 = FCbObjectView::Equals((FCbObjectView *)(local_f98 + 0x10),(FCbObjectView *)local_1ea0);
  if (!bVar16) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_19d8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_19d8,0);
    ::FString::~FString(&local_19d8);
  }
  if ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)local_f78.Owner !=
      local_16c0[0].Owner.Owner) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_19c8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_19c8,0);
    ::FString::~FString(&local_19c8);
  }
  iVar18 = memcmp(local_f70,&local_1038,0x14);
  if (iVar18 != 0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_19b8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_19b8);
    ::FString::~FString(&local_19b8);
  }
  bVar16 = false;
  if (pFVar26 == (FCbAttachment *)0x0) {
LAB_141d1fa45:
    bVar10 = bVar16;
    bVar16 = true;
  }
  else {
    bVar10 = true;
    pFVar23 = FCbAttachment::AsObject(pFVar26,(FCbObject *)local_14f8);
    bVar17 = FCbObjectView::Equals((FCbObjectView *)pFVar23,&local_1e88);
    bVar16 = true;
    if (!bVar17) goto LAB_141d1fa45;
    bVar16 = false;
  }
  if (bVar10) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_14f8 + 0x10));
  }
  bVar10 = false;
  if (bVar16) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_19a8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_19a8);
    ::FString::~FString(&local_19a8);
  }
  if (pFVar26 == (FCbAttachment *)0x0) {
LAB_141d1facb:
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1998,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1998);
    if (local_1998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1998.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar22 = FCbAttachment::GetHash(pFVar26,&local_b7c);
    bVar16 = ::operator==(pFVar22,&local_10a4);
    if (!bVar16) goto LAB_141d1facb;
  }
  bVar16 = bVar15;
  if (pFVar25 != (FCbAttachment *)0x0) {
    bVar10 = true;
    pFVar23 = FCbAttachment::AsObject(pFVar25,(FCbObject *)local_1510);
    bVar17 = FCbObjectView::Equals((FCbObjectView *)pFVar23,(FCbObjectView *)local_1ed0);
    if (bVar17) {
      bVar10 = true;
      bVar16 = false;
    }
  }
  if (bVar10) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_1510 + 0x10));
  }
  bVar10 = false;
  if (bVar16) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1988,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1988);
    ::FString::~FString(&local_1988);
  }
  if (pFVar25 == (FCbAttachment *)0x0) {
LAB_141d1fbc4:
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1978,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1978);
    if (local_1978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1978.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar22 = FCbAttachment::GetHash(pFVar25,&local_b90);
    bVar16 = ::operator==(pFVar22,&local_1090);
    if (!bVar16) goto LAB_141d1fbc4;
  }
  bVar16 = bVar15;
  if (this_01 != (FCbAttachment *)0x0) {
    bVar10 = true;
    FVar24 = FCbAttachment::AsBinary(this_01);
    pTVar28 = FSharedBuffer::GetView((FSharedBuffer *)FVar24.Owner.Owner,&local_1358);
    pTVar29 = FSharedBuffer::GetView((FSharedBuffer *)&local_1f00,&local_1368);
    bVar17 = TMemoryView<void_const_>::EqualBytes<void_const_>(pTVar28,pTVar29);
    if (bVar17) {
      bVar10 = true;
      bVar16 = false;
    }
  }
  if (bVar10) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1de0);
  }
  bVar10 = false;
  if (bVar16) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1968,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1968);
    ::FString::~FString(&local_1968);
  }
  if (this_01 != (FCbAttachment *)0x0) {
    pTVar28 = FSharedBuffer::GetView(local_16c0,&local_1378);
    bVar10 = true;
    FVar24 = FCbAttachment::AsBinary(this_01);
    pTVar29 = FSharedBuffer::GetView((FSharedBuffer *)FVar24.Owner.Owner,&local_1308);
    bVar16 = TMemoryView<void_const_>::Contains<void_const_>(pTVar28,pTVar29);
    if (bVar16) {
      bVar15 = false;
    }
  }
  if (bVar10) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1dd8);
  }
  if (bVar15) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1958,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1958);
    ::FString::~FString(&local_1958);
  }
  if (this_01 == (FCbAttachment *)0x0) {
LAB_141d1fd7d:
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1948,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1948);
    if (local_1948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1948.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar22 = FCbAttachment::GetHash(this_01,&local_a8c);
    bVar15 = ::operator==(pFVar22,&local_10b8);
    if (!bVar15) goto LAB_141d1fd7d;
  }
  FBufferArchive::FBufferArchive((FBufferArchive *)local_1268);
  FCbWriter::Save(local_a38,(FArchive *)local_1268);
  FCbPackage::FCbPackage((FCbPackage *)local_d98);
  FMemoryReader::FMemoryReader(&local_11a8,&local_11c0,false);
  local_1930 = FUniqueBuffer::Alloc;
  local_1938 = UE::Core::Private::Function::
               TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
               ::Call;
  bVar15 = FCbPackage::TryLoad((FCbPackage *)local_d98,(FArchive *)&local_11a8,
                               (TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_1938)
  ;
  if (!bVar15) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1928,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1928,0);
    ::FString::~FString(&local_1928);
  }
  FCbWriter::Reset(local_a38);
  FCbPackage::Save((FCbPackage *)local_d98,local_a38);
  FCbWriter::Save(local_a38,(FCbFieldIterator *)&local_1ef0);
  local_e1c.Hash[0x10] = '\0';
  local_e1c.Hash[0x11] = '\0';
  local_e1c.Hash[0x12] = '\0';
  local_e1c.Hash[0x13] = '\0';
  local_e1c.Hash[0] = '\0';
  local_e1c.Hash[1] = '\0';
  local_e1c.Hash[2] = '\0';
  local_e1c.Hash[3] = '\0';
  local_e1c.Hash[4] = '\0';
  local_e1c.Hash[5] = '\0';
  local_e1c.Hash[6] = '\0';
  local_e1c.Hash[7] = '\0';
  local_e1c.Hash[8] = '\0';
  local_e1c.Hash[9] = '\0';
  local_e1c.Hash[10] = '\0';
  local_e1c.Hash[0xb] = '\0';
  local_e1c.Hash[0xc] = '\0';
  local_e1c.Hash[0xd] = '\0';
  local_e1c.Hash[0xe] = '\0';
  local_e1c.Hash[0xf] = '\0';
  pFVar22 = FCbFieldView::AsHash((FCbFieldView *)&local_1ef0,&local_aa0,&local_e1c);
  if (((*(longlong *)pFVar22->Hash != local_1038.Hash._0_8_) ||
      (*(longlong *)(pFVar22->Hash + 8) != local_1038.Hash._8_8_)) ||
     (*(int *)(pFVar22->Hash + 0x10) != local_1038.Hash._16_4_)) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1918,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1918,0);
    ::FString::~FString(&local_1918);
  }
  TCbFieldIterator<FCbField>::operator++(&local_1ef0);
  pFVar23 = FCbField::AsObject((FCbField *)&local_1ef0,(FCbObject *)local_1528);
  bVar15 = FCbObjectView::Equals((FCbObjectView *)pFVar23,(FCbObjectView *)local_1ea0);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_1528 + 0x10));
  if (!bVar15) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1908,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1908,0);
    ::FString::~FString(&local_1908);
  }
  TCbFieldIterator<FCbField>::operator++(&local_1ef0);
  local_e30.Hash[0x10] = '\0';
  local_e30.Hash[0x11] = '\0';
  local_e30.Hash[0x12] = '\0';
  local_e30.Hash[0x13] = '\0';
  local_e30.Hash[0] = '\0';
  local_e30.Hash[1] = '\0';
  local_e30.Hash[2] = '\0';
  local_e30.Hash[3] = '\0';
  local_e30.Hash[4] = '\0';
  local_e30.Hash[5] = '\0';
  local_e30.Hash[6] = '\0';
  local_e30.Hash[7] = '\0';
  local_e30.Hash[8] = '\0';
  local_e30.Hash[9] = '\0';
  local_e30.Hash[10] = '\0';
  local_e30.Hash[0xb] = '\0';
  local_e30.Hash[0xc] = '\0';
  local_e30.Hash[0xd] = '\0';
  local_e30.Hash[0xe] = '\0';
  local_e30.Hash[0xf] = '\0';
  pFVar22 = FCbFieldView::AsObjectAttachment((FCbFieldView *)&local_1ef0,&local_b68,&local_e30);
  if (((*(longlong *)pFVar22->Hash != local_10a4.Hash._0_8_) ||
      (*(longlong *)(pFVar22->Hash + 8) != local_10a4.Hash._8_8_)) ||
     (*(int *)(pFVar22->Hash + 0x10) != local_10a4.Hash._16_4_)) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_18f8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_18f8,0);
    ::FString::~FString(&local_18f8);
  }
  TCbFieldIterator<FCbField>::operator++(&local_1ef0);
  pFVar23 = FCbField::AsObject((FCbField *)&local_1ef0,(FCbObject *)local_1540);
  bVar15 = FCbObjectView::Equals((FCbObjectView *)pFVar23,&local_1e88);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_1540 + 0x10));
  if (!bVar15) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_18e8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_18e8,0);
    ::FString::~FString(&local_18e8);
  }
  TCbFieldIterator<FCbField>::operator++(&local_1ef0);
  local_e44.Hash[0x10] = '\0';
  local_e44.Hash[0x11] = '\0';
  local_e44.Hash[0x12] = '\0';
  local_e44.Hash[0x13] = '\0';
  local_e44.Hash[0] = '\0';
  local_e44.Hash[1] = '\0';
  local_e44.Hash[2] = '\0';
  local_e44.Hash[3] = '\0';
  local_e44.Hash[4] = '\0';
  local_e44.Hash[5] = '\0';
  local_e44.Hash[6] = '\0';
  local_e44.Hash[7] = '\0';
  local_e44.Hash[8] = '\0';
  local_e44.Hash[9] = '\0';
  local_e44.Hash[10] = '\0';
  local_e44.Hash[0xb] = '\0';
  local_e44.Hash[0xc] = '\0';
  local_e44.Hash[0xd] = '\0';
  local_e44.Hash[0xe] = '\0';
  local_e44.Hash[0xf] = '\0';
  pFVar22 = FCbFieldView::AsObjectAttachment((FCbFieldView *)&local_1ef0,&local_ab4,&local_e44);
  if (((*(longlong *)pFVar22->Hash != local_1090.Hash._0_8_) ||
      (*(longlong *)(pFVar22->Hash + 8) != local_1090.Hash._8_8_)) ||
     (*(int *)(pFVar22->Hash + 0x10) != local_1090.Hash._16_4_)) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_18d8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_18d8,0);
    ::FString::~FString(&local_18d8);
  }
  TCbFieldIterator<FCbField>::operator++(&local_1ef0);
  pFVar23 = FCbField::AsObject((FCbField *)&local_1ef0,(FCbObject *)local_1558);
  bVar15 = FCbObjectView::Equals((FCbObjectView *)pFVar23,(FCbObjectView *)local_1ed0);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_1558 + 0x10));
  if (!bVar15) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_18c8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_18c8,0);
    ::FString::~FString(&local_18c8);
  }
  TCbFieldIterator<FCbField>::operator++(&local_1ef0);
  local_e58.Hash[0x10] = '\0';
  local_e58.Hash[0x11] = '\0';
  local_e58.Hash[0x12] = '\0';
  local_e58.Hash[0x13] = '\0';
  local_e58.Hash[0] = '\0';
  local_e58.Hash[1] = '\0';
  local_e58.Hash[2] = '\0';
  local_e58.Hash[3] = '\0';
  local_e58.Hash[4] = '\0';
  local_e58.Hash[5] = '\0';
  local_e58.Hash[6] = '\0';
  local_e58.Hash[7] = '\0';
  local_e58.Hash[8] = '\0';
  local_e58.Hash[9] = '\0';
  local_e58.Hash[10] = '\0';
  local_e58.Hash[0xb] = '\0';
  local_e58.Hash[0xc] = '\0';
  local_e58.Hash[0xd] = '\0';
  local_e58.Hash[0xe] = '\0';
  local_e58.Hash[0xf] = '\0';
  pFVar22 = FCbFieldView::AsBinaryAttachment((FCbFieldView *)&local_1ef0,&local_ac8,&local_e58);
  if (((*(longlong *)pFVar22->Hash != local_10b8.Hash._0_8_) ||
      (*(longlong *)(pFVar22->Hash + 8) != local_10b8.Hash._8_8_)) ||
     (*(int *)(pFVar22->Hash + 0x10) != local_10b8.Hash._16_4_)) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_18b8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_18b8,0);
    ::FString::~FString(&local_18b8);
  }
  TCbFieldIterator<FCbField>::operator++(&local_1ef0);
  local_18a8.Data = (void *)0x0;
  local_18a8.Size = 0;
  pTVar28 = FCbFieldView::AsBinaryView((FCbFieldView *)&local_1ef0,&local_1388,&local_18a8);
  local_1668 = pTVar28->Data;
  uStack_1660 = pTVar28->Size;
  FSharedBuffer::MakeView((TMemoryView<void_const_> *)local_1e48);
  pTVar28 = FSharedBuffer::GetView((FSharedBuffer *)local_1e48,&local_1398);
  pTVar29 = FSharedBuffer::GetView((FSharedBuffer *)&local_1f00,&local_13a8);
  bVar15 = TMemoryView<void_const_>::EqualBytes<void_const_>(pTVar28,pTVar29);
  if (!bVar15) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1898,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1898);
    ::FString::~FString(&local_1898);
  }
  TCbFieldIterator<FCbField>::operator++(&local_1ef0);
  if (((byte)local_1ef0._padding_ & 0x1f) != 1) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1888,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1888);
    ::FString::~FString(&local_1888);
  }
  TCbFieldIterator<FCbField>::operator++(&local_1ef0);
  if (((byte)local_1ef0._padding_ & 0x1f) != 0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1878,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_1878);
    ::FString::~FString(&local_1878);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_1e48);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_1ef0._padding_);
  FArchive::~FArchive((FArchive *)&local_11a8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_d98 + 0x20));
  TArray<FCbAttachment,TSizedDefaultAllocator<32>_>::
  ~TArray<FCbAttachment,TSizedDefaultAllocator<32>_>
            ((TArray<FCbAttachment,TSizedDefaultAllocator<32>_> *)local_d98);
  if (local_11c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_11c0.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)local_1268);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_f78);
  DestructItems<FCbAttachment,int>((FCbAttachment *)local_f98._0_8_,local_f98._8_4_);
  if ((FScriptContainerElement *)local_f98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f98._0_8_);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_16c0[0].Owner);
  FCbAttachment::~FCbAttachment(&local_d18);
  FCbAttachment::~FCbAttachment(&local_c38);
  FCbAttachment::~FCbAttachment(&local_ce0);
  FCbWriter::~FCbWriter(local_a38);
  pFVar19 = FAutomationTestFramework::Get();
  pFVar6 = pFVar19->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x50);
  ::FString::FString(&local_1868,L"Null Attachment");
  (*pcVar7)(pFVar6,&local_1868,0,0);
  if (local_1868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1868.Data.AllocatorInstance.Data);
  }
  local_dd0.Value._padding_ = 0;
  local_dd0.Value.TypeIndex = '\0';
  FCbPackage::FCbPackage((FCbPackage *)local_e98);
  FCbPackage::AddAttachment
            ((FCbPackage *)local_e98,&local_dd0,
             (TFunctionRef<FSharedBuffer___cdecl(FIoHash_const_&)> *)0x0);
  bVar15 = FCbObjectView::operator_bool((FCbObjectView *)(local_e98 + 0x10));
  if ((bVar15) || (local_e98._8_4_ != 0)) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1858,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1858,0);
    ::FString::~FString(&local_1858);
  }
  bVar15 = FCbObjectView::operator_bool((FCbObjectView *)(local_e98 + 0x10));
  if ((bVar15) || (local_e98._8_4_ != 0)) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1848,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_1848,0);
    ::FString::~FString(&local_1848);
  }
  if ((int)local_e98._8_4_ < 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar15) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (local_e98._8_4_ == 0) goto LAB_141d20651;
  pFVar19 = FAutomationTestFramework::Get();
  pFVar6 = pFVar19->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
  ::FString::FString(&local_1838,L"Condition failed");
  (*pcVar7)(pFVar6,&local_1838,0);
  ::FString::~FString(&local_1838);
LAB_141d20651:
  pFVar22 = FCbAttachment::GetHash(&local_dd0,&local_adc);
  pFVar26 = FCbPackage::FindAttachment((FCbPackage *)local_e98,pFVar22);
  if (pFVar26 != (FCbAttachment *)0x0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1828,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_1828,0);
    ::FString::~FString(&local_1828);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_e78);
  TArray<FCbAttachment,TSizedDefaultAllocator<32>_>::
  ~TArray<FCbAttachment,TSizedDefaultAllocator<32>_>
            ((TArray<FCbAttachment,TSizedDefaultAllocator<32>_> *)local_e98);
  FCbAttachment::~FCbAttachment(&local_dd0);
  pFVar19 = FAutomationTestFramework::Get();
  pFVar6 = pFVar19->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x50);
  ::FString::FString(&local_1818,L"Resolve After Merge");
  (*pcVar7)(pFVar6,&local_1818,0,0);
  if (local_1818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1818.Data.AllocatorInstance.Data);
  }
  local_1f08 = (TInPlaceType<FCbAttachment::FBinaryValue>)0x0;
  FCbPackage::FCbPackage((FCbPackage *)local_d58);
  FVar24 = FSharedBuffer::MakeOwned(&local_1ec0);
  FCbAttachment::FCbAttachment<FSharedBuffer,0>
            (&local_bc8,local_1f08,(FSharedBuffer *)FVar24.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1dd0);
  FCbPackage::AddAttachment
            ((FCbPackage *)local_d58,&local_bc8,
             (TFunctionRef<FSharedBuffer___cdecl(FIoHash_const_&)> *)0x0);
  FCbAttachment::~FCbAttachment(&local_bc8);
  local_1dc8 = &local_1f08;
  local_1800 = &local_1dc8;
  local_1808 = UE::Core::Private::Function::
               TFunctionRefCaller<`FCompactBinaryPackageTest::TestBody'::__l237::<lambda_3>,FSharedBuffer,FIoHash_const_&>
               ::Call;
  local_1748._0_8_ = local_1ed0._0_8_;
  local_1748._8_8_ = local_1ed0._8_8_;
  if (local_1ec0.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar4 = (atomic<unsigned___int64> *)((longlong)local_1ec0.Owner.Owner + 0x18);
    aVar5 = *paVar4;
    *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + 1);
    UNLOCK();
    if (((ulonglong)aVar5 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)((longlong)local_1ec0.Owner.Owner + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)((longlong)local_1ec0.Owner.Owner + 0x18) +
           0x40000000);
      UNLOCK();
    }
  }
  local_1738 = local_1ec0.Owner.Owner;
  FCbAttachment::FObjectValue::FObjectValue
            ((FObjectValue *)&local_ca8,(FCbObject *)local_1748,(FIoHash *)0x0);
  local_ca8.Value.TypeIndex = '\x01';
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1738);
  FCbPackage::AddAttachment
            ((FCbPackage *)local_d58,&local_ca8,
             (TFunctionRef<FSharedBuffer___cdecl(FIoHash_const_&)> *)&local_1808);
  FCbAttachment::~FCbAttachment(&local_ca8);
  if (local_1f08 == (TInPlaceType<FCbAttachment::FBinaryValue>)0x0) {
    pFVar19 = FAutomationTestFramework::Get();
    pFVar6 = pFVar19->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_17f8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_17f8,0);
    ::FString::~FString(&local_17f8);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_d58 + 0x20));
  TArray<FCbAttachment,TSizedDefaultAllocator<32>_>::
  ~TArray<FCbAttachment,TSizedDefaultAllocator<32>_>
            ((TArray<FCbAttachment,TSizedDefaultAllocator<32>_> *)local_d58);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1e90);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1e78);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1ec0.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_1f00);
  return;
}

