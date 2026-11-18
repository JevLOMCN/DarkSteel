// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// GetTestFlags @ 141cc30c0

EAutomationTestFlags __thiscall
FCompactBinaryAttachmentTest::GetTestFlags(FCompactBinaryAttachmentTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc30d0

bool __thiscall FCompactBinaryAttachmentTest::IsStressTest(FCompactBinaryAttachmentTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc30e0

uint __thiscall
FCompactBinaryAttachmentTest::GetRequiredDeviceNum(FCompactBinaryAttachmentTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc30f0

FString * __thiscall
FCompactBinaryAttachmentTest::GetTestSourceFileName
          (FCompactBinaryAttachmentTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\CompactBinaryPackageTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc3120

int __thiscall
FCompactBinaryAttachmentTest::GetTestSourceFileLine(FCompactBinaryAttachmentTest *this)

{
  return 0xe;
}

// GetTests @ 141cc3130

/* WARNING: Removing unreachable block (ram,0x000141cc32ae) */

void __thiscall
FCompactBinaryAttachmentTest::GetTests
          (FCompactBinaryAttachmentTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cc32d0

bool __thiscall
FCompactBinaryAttachmentTest::RunTest(FCompactBinaryAttachmentTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc3300

FString * __thiscall
FCompactBinaryAttachmentTest::GetBeautifiedTestName
          (FCompactBinaryAttachmentTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCompactBinaryAttachmentTest @ 141ce6be0

FCompactBinaryAttachmentTest * __thiscall
FCompactBinaryAttachmentTest::FCompactBinaryAttachmentTest
          (FCompactBinaryAttachmentTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCompactBinaryAttachmentTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][CompactBinary][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::CompactBinary::Attachment");
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

// operator() @ 141cf2e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FCompactBinaryAttachmentTest::TestBody'::__l2::<lambda_1>::operator()
          (void *this,FCbAttachment *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar3;
  void *_Buf1;
  bool bVar4;
  char cVar5;
  int iVar6;
  ECbValidateError EVar7;
  FAutomationTestFramework *pFVar8;
  FIoHash *pFVar9;
  FIoHash *pFVar10;
  void *_Buf2;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar11;
  ulonglong uVar12;
  void *pvVar13;
  void *_Size;
  undefined1 auStack_4a8 [32];
  undefined8 local_488;
  FString local_480;
  TMemoryView<void_const_> local_468;
  FString local_458;
  TMemoryView<void_const_> local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  code *local_3f8;
  code *local_3f0;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  undefined1 local_3b8 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_3a8 [2];
  FArchiveState local_398;
  undefined8 local_308;
  void **local_300;
  undefined8 local_2f8;
  void *local_2f0;
  undefined8 local_2e8;
  FArchiveState local_2d8;
  undefined8 local_248;
  void **local_240;
  undefined8 local_238;
  FCbAttachment local_228;
  FCbAttachment local_1f0;
  FIoHash local_1b8;
  FIoHash local_1a4;
  FIoHash local_190;
  FIoHash local_17c;
  FCbWriter local_168 [7];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_4a8;
  FCbWriter::FCbWriter(local_168,0x100);
  _Buf2 = (void *)0x0;
  local_398._padding_ = 0;
  local_398.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_488 = 0;
  local_398.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_398.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_398.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_398._40_8_ = 0;
  local_398.ArSerializingDefaults = 0;
  local_398.ArPortFlags = 0;
  local_398.ArMaxSerializeSize = 0;
  local_398.ArUEVer.FileVersionUE4 = 0;
  local_398.ArUEVer.FileVersionUE5 = 0;
  local_398.ArLicenseeUEVer = 0;
  local_398.ArEngineVer.Major = 0;
  local_398.ArEngineVer.Minor = 0;
  local_398.ArEngineVer.Patch = 0;
  local_398.ArEngineVer._6_2_ = 0;
  local_398.ArEngineVer.Changelist = 0;
  local_398.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_398.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_398.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_398.SerializedProperty = (FProperty *)0x0;
  local_398.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_398.bCustomVersionsAreReset = false;
  local_398._129_7_ = 0;
  local_398.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_398);
  local_308 = 0;
  local_398._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_300 = &local_2f0;
  local_2f8 = 0;
  FArchiveState::SetIsSaving(&local_398,true);
  (**(code **)(local_398._padding_ + 0x108))(&local_398,0);
  local_2f0 = (void *)0x0;
  local_398._padding_ = (longlong)&___7FBufferArchive__6B_;
  local_2e8 = 0;
  FCbAttachment::Save(param_1,local_168);
  FCbAttachment::Save(param_1,(FArchive *)&local_398);
  FCbWriter::Save(local_168,(FCbFieldIterator *)local_3b8);
  _Buf1 = local_2f0;
  TVar3.Owner = local_3a8[0].Owner;
  _Size = (void *)(longlong)(int)local_2e8;
  TVar11.Owner = local_3a8[0].Owner;
  pvVar13 = _Buf2;
  if (local_3a8[0].Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_3a8[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_3a8[0].Owner)->_padding_ + 8))(local_3a8[0].Owner);
    }
    TVar11.Owner = local_3a8[0].Owner;
    pvVar13 = (void *)(TVar3.Owner)->Size;
  }
  if (TVar11.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(TVar11.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((TVar11.Owner)->_padding_ + 8))(TVar11.Owner);
    }
    _Buf2 = (TVar11.Owner)->Data;
  }
  if ((_Size != pvVar13) ||
     ((_Buf1 != _Buf2 && (iVar6 = memcmp(_Buf1,_Buf2,(size_t)_Size), iVar6 != 0)))) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_480,L"Condition failed");
    (*pcVar2)(pFVar1,&local_480,0);
    if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_480.Data.AllocatorInstance.Data);
    }
  }
  local_468.Data = local_2f0;
  local_468.Size = (ulong64)(int)local_2e8;
  EVar7 = ValidateCompactBinaryRange(&local_468,All);
  if (EVar7 != None) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_458,L"Condition failed");
    (*pcVar2)(pFVar1,&local_458,0);
    if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_458.Data.AllocatorInstance.Data);
    }
  }
  local_448.Data = local_2f0;
  local_448.Size = (ulong64)(int)local_2e8;
  EVar7 = ValidateCompactBinaryAttachment(&local_448,All);
  if (EVar7 != None) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_438,L"Condition failed");
    (*pcVar2)(pFVar1,&local_438,0);
    if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.Data.AllocatorInstance.Data);
    }
  }
  local_1f0.Value._padding_ = 0;
  local_1f0.Value.TypeIndex = 0;
  bVar4 = FCbAttachment::TryLoad(&local_1f0,(FCbFieldIterator *)local_3b8);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_428,L"Condition failed");
    (*pcVar2)(pFVar1,&local_428,0);
    if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.Data.AllocatorInstance.Data);
    }
  }
  if ((local_3b8[0] & 0x1f) != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_418,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_418,0);
    if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.Data.AllocatorInstance.Data);
    }
  }
  pFVar9 = FCbAttachment::GetHash(param_1,&local_1b8);
  pFVar10 = FCbAttachment::GetHash(&local_1f0,&local_1a4);
  if (((*(longlong *)pFVar10->Hash != *(longlong *)pFVar9->Hash) ||
      (*(longlong *)(pFVar10->Hash + 8) != *(longlong *)(pFVar9->Hash + 8))) ||
     (*(int *)(pFVar10->Hash + 0x10) != *(int *)(pFVar9->Hash + 0x10))) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_408,L"Condition failed");
    (*pcVar2)(pFVar1,&local_408,0);
    if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.Data.AllocatorInstance.Data);
    }
  }
  local_228.Value._padding_ = 0;
  local_228.Value.TypeIndex = 0;
  local_2d8._padding_ = 0;
  local_2d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_2d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_2d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_2d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_2d8._40_8_ = 0;
  local_2d8.ArSerializingDefaults = 0;
  local_2d8.ArPortFlags = 0;
  local_2d8.ArMaxSerializeSize = 0;
  local_2d8.ArUEVer.FileVersionUE4 = 0;
  local_2d8.ArUEVer.FileVersionUE5 = 0;
  local_2d8.ArLicenseeUEVer = 0;
  local_2d8.ArEngineVer.Major = 0;
  local_2d8.ArEngineVer.Minor = 0;
  local_2d8.ArEngineVer.Patch = 0;
  local_2d8.ArEngineVer._6_2_ = 0;
  local_2d8.ArEngineVer.Changelist = 0;
  local_2d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_2d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_2d8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_2d8.SerializedProperty = (FProperty *)0x0;
  local_2d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_2d8.bCustomVersionsAreReset = false;
  local_2d8._129_7_ = 0;
  local_2d8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_2d8);
  local_248 = 0;
  local_2d8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_240 = &local_2f0;
  local_238 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_2d8,true);
  (**(code **)(local_2d8._padding_ + 0x108))(&local_2d8,0);
  local_3f0 = FUniqueBuffer::Alloc;
  local_3f8 = UE::Core::Private::Function::
              TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
              ::Call;
  bVar4 = FCbAttachment::TryLoad
                    (&local_228,(FArchive *)&local_2d8,
                     (TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_3f8);
  if (!bVar4) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_3e8,0);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  if (*(code **)(local_2d8._padding_ + 0x38) == FArchiveState::AtEnd) {
    cVar5 = FArchiveState::AtEnd(&local_2d8);
  }
  else {
    cVar5 = (**(code **)(local_2d8._padding_ + 0x38))();
  }
  if (cVar5 == '\0') {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_3d8,0);
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
  }
  pFVar9 = FCbAttachment::GetHash(param_1,&local_190);
  pFVar10 = FCbAttachment::GetHash(&local_228,&local_17c);
  if (((*(longlong *)pFVar10->Hash != *(longlong *)pFVar9->Hash) ||
      (*(longlong *)(pFVar10->Hash + 8) != *(longlong *)(pFVar9->Hash + 8))) ||
     (*(int *)(pFVar10->Hash + 0x10) != *(int *)(pFVar9->Hash + 0x10))) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_3c8,0);
    if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
    }
  }
  FArchive::~FArchive((FArchive *)&local_2d8);
  uVar12 = (ulonglong)local_228.Value.TypeIndex;
  if ((3 < local_228.Value.TypeIndex) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar12] !=
      UE::Core::Private::TDestructorCaller<std::nullptr_t>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar12])(&local_228);
  }
  uVar12 = (ulonglong)local_1f0.Value.TypeIndex;
  if ((3 < local_1f0.Value.TypeIndex) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar12] !=
      UE::Core::Private::TDestructorCaller<std::nullptr_t>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar12])(&local_1f0);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_3a8);
  if (local_2f0 != (void *)0x0) {
    FMemory::Free(local_2f0);
  }
  FArchive::~FArchive((FArchive *)&local_398);
  FCbWriter::~FCbWriter(local_168);
  return;
}

// TestBody @ 141d18170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCompactBinaryAttachmentTest::TestBody(FCompactBinaryAttachmentTest *this,FString *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  atomic<unsigned___int64> *paVar3;
  longlong *plVar4;
  atomic<unsigned___int64> aVar5;
  FAutomationTestBase *pFVar6;
  code *pcVar7;
  longlong lVar8;
  ulong64 uVar9;
  undefined8 uVar10;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar11;
  bool bVar12;
  int iVar13;
  ECbValidateError EVar14;
  FAutomationTestFramework *pFVar15;
  FIoHash *pFVar16;
  FSharedBuffer FVar17;
  FBlake3Hash *pFVar18;
  FCompositeBuffer *pFVar19;
  TMemoryView<void_const_> *pTVar20;
  TMemoryView<void_const_> *pTVar21;
  FIoHash *pFVar22;
  FCbFieldIterator *pFVar23;
  FCbObject *pFVar24;
  void *pvVar25;
  FUniqueBuffer FVar26;
  FCompressedBuffer *pFVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined1 auStack_14b8 [32];
  TInPlaceType<FCbAttachment::FBinaryValue> local_1498 [4];
  undefined4 local_1494;
  undefined4 local_1490;
  undefined4 local_148c;
  undefined4 local_1488;
  undefined4 local_1484;
  undefined1 local_1480 [16];
  FSharedBuffer local_1470;
  FSharedBuffer local_1468;
  FSharedBuffer local_1460;
  TMemoryView<void_const_> local_1458;
  FCbFieldView local_1448;
  FSharedBuffer local_1438;
  longlong *local_1430;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1428;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1420;
  longlong *local_1418;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1410;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1408;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1400;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_13f8;
  FSharedBuffer local_13f0;
  uchar local_13e8 [8];
  ForElementType<FSharedBuffer> FStack_13e0;
  longlong *local_13d8;
  FCbObjectView local_13d0;
  longlong *local_13c0;
  uchar local_13b8 [8];
  ForElementType<FSharedBuffer> FStack_13b0;
  longlong *local_13a8;
  FCbObjectView local_13a0;
  longlong *local_1390;
  FCbObjectView local_1388;
  longlong *local_1378;
  undefined8 local_1370;
  TMemoryView<void_const_> local_1368;
  undefined8 local_1358;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1350;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1348;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1340;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1338;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1330;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1328;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1320;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1318;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1310;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1308;
  TMemoryView<void_const_> local_1300;
  undefined8 local_12f0;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_12e8;
  FCbObjectView local_12e0;
  longlong *local_12d0;
  undefined1 local_12c8 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_12b8;
  undefined1 local_12b0 [24];
  undefined1 local_1298 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1288;
  FCbObjectView local_1280;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1270;
  undefined1 local_1268 [24];
  longlong local_1250;
  longlong lStack_1248;
  int local_1240;
  longlong local_123c;
  longlong lStack_1234;
  uint local_122c;
  longlong local_1228;
  longlong lStack_1220;
  uint local_1218;
  FString local_1210;
  FString local_1200;
  undefined4 *local_11e8;
  undefined8 local_11e0;
  FString local_11d8;
  FString local_11c8;
  FString local_11b8;
  FString local_11a8;
  FString local_1198;
  FString local_1188;
  FString local_1178;
  FString local_1168;
  FString local_1158;
  undefined *local_1148;
  undefined4 uStack_1140;
  undefined4 uStack_113c;
  FString local_1138;
  FString local_1128;
  FString local_1118;
  FString local_1108;
  FString local_10f8;
  FString local_10e8;
  FString local_10d8;
  FString local_10c8;
  FString local_10b8;
  undefined4 *local_10a8;
  undefined8 local_10a0;
  FString local_1098;
  FString local_1088;
  FString local_1078;
  FString local_1068;
  FString local_1058;
  FString local_1048;
  FString local_1038;
  FString local_1028;
  TMemoryView<void_const_> local_1018;
  FString local_1008;
  FString local_ff8;
  undefined *local_fe8;
  undefined4 uStack_fe0;
  undefined4 uStack_fdc;
  FString local_fd8;
  FString local_fc8;
  FString local_fb8;
  FString local_fa8;
  FString local_f98;
  FString local_f88;
  FString local_f78;
  FString local_f68;
  undefined4 *local_f58;
  undefined8 local_f50;
  FString local_f48;
  FString local_f38;
  FString local_f28;
  FString local_f18;
  FString local_f08;
  FString local_ef8;
  FString local_ee8;
  FString local_ed8;
  FString local_ec8;
  TMemoryView<void_const_> local_eb8;
  FString local_ea8;
  FString local_e98;
  undefined4 *local_e88;
  undefined8 local_e80;
  FString local_e78;
  FString local_e68;
  FString local_e58;
  FString local_e48;
  FString local_e38;
  FString local_e28;
  FString local_e18;
  FString local_e08;
  FString local_df8;
  TMemoryView<void_const_> local_de8;
  FString local_dd8;
  FString local_dc8;
  undefined *local_db8;
  undefined4 uStack_db0;
  undefined4 uStack_dac;
  FString local_da8;
  FString local_d98;
  FString local_d88;
  FString local_d78;
  TMemoryView<void_const_> local_d68;
  FString local_d58;
  FString local_d48;
  FString local_d38;
  FString local_d28;
  FString local_d18;
  FString local_d08;
  FString local_cf8;
  FString local_ce8;
  FString local_cd8;
  FString local_cc8;
  FString local_cb8;
  FString local_ca8;
  FString local_c98;
  FString local_c88;
  FString local_c78;
  FString local_c68;
  FString local_c58;
  TMemoryView<void_const_> local_c48;
  FString local_c38;
  FString local_c28;
  FString local_c18;
  FString local_c08;
  FString local_bf8;
  FString local_be8;
  TMemoryView<void_const_> local_bd8;
  FString local_bc8;
  FString local_bb8;
  FString local_ba8;
  FString local_b98;
  FString local_b88;
  FString local_b78;
  FString local_b68;
  FString local_b58;
  FString local_b48;
  FString local_b38;
  FString local_b28;
  FString local_b18;
  FString local_b08;
  FString local_af8;
  undefined4 *local_ae8;
  undefined8 local_ae0;
  FString local_ad8;
  FString local_ac8;
  FString local_ab8;
  FString local_aa8;
  FString local_a98;
  FString local_a88;
  FString local_a78;
  FCbWriter local_a68;
  FCbWriter local_a40;
  FCbWriter local_a18;
  undefined1 local_9f0 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_9e0;
  undefined1 local_9d8 [24];
  undefined1 local_9c0 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_9b0;
  undefined1 local_9a8 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_998 [2];
  TStringView<char8_t> local_988;
  TStringView<char8_t> local_978;
  TMemoryView<void_const_> local_968;
  TMemoryView<void_const_> local_958;
  TMemoryView<void_const_> local_948;
  TMemoryView<void_const_> local_938;
  TStringView<char8_t> local_928;
  undefined1 local_918 [32];
  undefined1 local_8f8 [32];
  undefined1 local_8d8 [32];
  undefined1 local_8b8 [32];
  undefined1 local_898 [32];
  undefined1 local_878 [32];
  undefined1 local_858 [24];
  undefined1 local_840 [24];
  FCbFieldIterator local_828;
  longlong lStack_808;
  int local_800;
  longlong local_7fc;
  longlong lStack_7f4;
  int local_7ec;
  longlong local_7e8;
  longlong lStack_7e0;
  int local_7d8;
  FCbWriter local_7d0;
  FCbWriter local_7a8;
  FCbWriter local_780;
  undefined1 local_758 [24];
  undefined1 local_740 [24];
  TMemoryView<void_const_> local_728;
  TMemoryView<void_const_> local_718;
  TMemoryView<void_const_> local_708;
  TMemoryView<void_const_> local_6f8;
  TMemoryView<void_const_> local_6e8;
  TMemoryView<void_const_> local_6d8;
  undefined1 local_6c8 [32];
  undefined1 local_6a8 [32];
  TMemoryView<void_const_> local_688;
  TMemoryView<void_const_> local_678;
  TMemoryView<void_const_> local_668;
  TMemoryView<void_const_> local_658;
  TMemoryView<void_const_> local_648;
  TMemoryView<void_const_> local_638;
  TMemoryView<void_const_> local_628;
  TMemoryView<void_const_> local_618;
  TMemoryView<void_const_> local_608;
  undefined1 local_5f8 [32];
  undefined1 local_5d8 [48];
  byte local_5a8;
  TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
  local_5a0;
  undefined1 local_568 [48];
  byte local_538;
  FCbAttachment local_530;
  TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
  local_4f8;
  FCbAttachment local_4c0;
  FCbAttachment local_488;
  TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
  local_450;
  undefined1 local_418 [48];
  uchar local_3e8;
  FCompressedBuffer local_3e0;
  FCompressedBuffer local_3c8;
  FCbAttachment local_3b0;
  FCbAttachment local_378;
  FCbAttachment local_340;
  FCbAttachment local_308;
  FCompositeBuffer local_2d0;
  FCompositeBuffer local_2b8;
  FCompressedBuffer local_2a0;
  FIoHash local_288;
  FIoHash local_274;
  FIoHash local_260;
  FIoHash local_24c;
  FIoHash local_238;
  FIoHash local_224;
  FIoHash local_210;
  FIoHash local_1fc;
  FIoHash local_1e8;
  FIoHash local_1d4;
  FIoHash local_1c0;
  FIoHash local_1ac;
  FIoHash local_198;
  FIoHash local_184;
  FIoHash local_170;
  FIoHash local_15c;
  FIoHash local_148;
  FIoHash local_134;
  FBlake3Hash local_120;
  FBlake3Hash local_100;
  FBlake3Hash local_e0;
  FBlake3Hash local_c0;
  FBlake3Hash local_a0;
  FBlake3Hash local_80;
  FBlake3Hash local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_14b8;
  pvVar25 = (void *)0x0;
  pFVar15 = FAutomationTestFramework::Get();
  pFVar6 = pFVar15->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x50);
  ::FString::FString(&local_b58,L"Empty Attachment");
  (*pcVar7)(pFVar6,&local_b58,0,0);
  if (local_b58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b58.Data.AllocatorInstance.Data);
  }
  local_3b0.Value._padding_ = 0;
  local_3b0.Value.TypeIndex = 0;
  local_12e0._0_8_ = 0;
  local_12e0._8_8_ = 0;
  local_12d0 = (longlong *)0x0;
  FCbObjectView::FCbObjectView(&local_12e0);
  local_12d0 = (longlong *)0x0;
  bVar12 = FCbObjectView::operator_bool(&local_12e0);
  plVar4 = local_12d0;
  if (local_12d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_12d0 + 3;
    lVar29 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar29 & 0x3fffffff) == 1) {
      (**(code **)(*local_12d0 + 0x10))(local_12d0);
      plVar4[1] = 0;
      plVar4[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar4 + 3);
      uVar28 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar28 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar4)(plVar4,1);
      }
    }
  }
  if (bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_b48,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_b48,0);
    if (local_b48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b48.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_3b0.Value.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_b38,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_b38,0);
    if (local_b38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b38.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_3b0.Value.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_b28,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_b28,0);
    if (local_b28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b28.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_3b0.Value.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_b18,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_b18,0);
    if (local_b18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b18.Data.AllocatorInstance.Data);
    }
  }
  pFVar16 = FCbAttachment::GetHash(&local_3b0,&local_1c0);
  if (((*(longlong *)pFVar16->Hash != FIoHash::Zero.Hash._0_8_) ||
      (*(longlong *)(pFVar16->Hash + 8) != FIoHash::Zero.Hash._8_8_)) ||
     (*(int *)(pFVar16->Hash + 0x10) != FIoHash::Zero.Hash._16_4_)) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_b08,L"Condition failed");
    (*pcVar7)(pFVar6,&local_b08,0);
    if (local_b08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b08.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_3b0.Value.TypeIndex;
  if ((3 < local_3b0.Value.TypeIndex) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar28] !=
      UE::Core::Private::TDestructorCaller<std::nullptr_t>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar28])(&local_3b0);
  }
  pFVar15 = FAutomationTestFramework::Get();
  pFVar6 = pFVar15->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x50);
  ::FString::FString(&local_af8,L"Binary Attachment");
  (*pcVar7)(pFVar6,&local_af8,0,0);
  if (local_af8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_af8.Data.AllocatorInstance.Data);
  }
  local_ae8 = &local_1488;
  local_1488 = 0x3020100;
  local_ae0 = 4;
  FSharedBuffer::Clone((TMemoryView<void_const_> *)(local_1480 + 8));
  FVar17 = FSharedBuffer::MakeOwned((FSharedBuffer *)(local_1480 + 8));
  FVar17 = FSharedBuffer::MakeOwned((FSharedBuffer *)FVar17.Owner.Owner);
  FCompositeBuffer::FCompositeBuffer<FSharedBuffer,0>
            ((FCompositeBuffer *)&local_5a0,(FSharedBuffer *)FVar17.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1310);
  pFVar18 = FBlake3::HashBuffer(&local_c0,(FCompositeBuffer *)&local_5a0);
  local_5a0._padding_ = *(longlong *)pFVar18->Hash;
  local_5a0._padding_ = *(longlong *)(pFVar18->Hash + 8);
  local_5a0._padding_._0_4_ = *(undefined4 *)(pFVar18->Hash + 0x10);
  local_5a0.TypeIndex = 2;
  if ((int)local_5a0._padding_ == 0) {
    TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
    ::Emplace<std::nullptr_t>(&local_5a0);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1308);
  uVar28 = (ulonglong)local_5a0.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_ad8,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_ad8,0);
    if (local_ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ad8.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_5a0.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_ac8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_ac8,0);
    if (local_ac8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ac8.Data.AllocatorInstance.Data);
    }
  }
  if (local_5a0.TypeIndex == 2) {
    FCompositeBuffer::ToShared((FCompositeBuffer *)&local_5a0);
    plVar4 = local_1430;
    bVar12 = local_1430 != (longlong *)local_1480._8_8_;
    if (local_1430 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1430 + 3;
      lVar29 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (((uint)lVar29 & 0x3fffffff) == 1) {
        (**(code **)(*local_1430 + 0x10))(local_1430);
        plVar4[1] = 0;
        plVar4[2] = 0;
        LOCK();
        plVar1 = plVar4 + 3;
        uVar28 = *plVar1;
        *plVar1 = *plVar1 + -0x40000000;
        UNLOCK();
        if (((uint)(uVar28 >> 0x1e) & 0x3fffffff) == 1) {
          (**(code **)*plVar4)(plVar4,1);
        }
      }
    }
  }
  else {
    bVar12 = (longlong *)local_1480._8_8_ != (longlong *)0x0;
    local_1430 = (longlong *)0x0;
  }
  if (bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_ab8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_ab8,0);
    if (local_ab8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ab8.Data.AllocatorInstance.Data);
    }
  }
  if (local_5a0.TypeIndex == 1) {
    local_13c0 = (longlong *)CONCAT44(local_5a0._padding_._4_4_,(int)local_5a0._padding_);
    local_13d0._0_8_ = local_5a0._padding_;
    local_13d0._8_8_ = local_5a0._padding_;
    if (local_13c0 != (longlong *)0x0) {
      LOCK();
      puVar2 = (ulonglong *)(local_13c0 + 3);
      uVar28 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      if ((uVar28 & 0x3fffffff) == 0) {
        LOCK();
        local_13c0[3] = local_13c0[3] + 0x40000000;
        UNLOCK();
      }
    }
  }
  else {
    local_13d0._0_8_ = 0;
    local_13d0._8_8_ = 0;
    local_13c0 = (longlong *)0x0;
    FCbObjectView::FCbObjectView(&local_13d0);
    local_13c0 = (longlong *)0x0;
  }
  bVar12 = FCbObjectView::operator_bool(&local_13d0);
  plVar4 = local_13c0;
  if (local_13c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_13c0 + 3;
    lVar29 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar29 & 0x3fffffff) == 1) {
      (**(code **)(*local_13c0 + 0x10))(local_13c0);
      plVar4[1] = 0;
      plVar4[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar4 + 3);
      uVar28 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar28 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar4)(plVar4,1);
      }
    }
  }
  if (bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_aa8,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_aa8,0);
    if (local_aa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_aa8.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_5a0.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) == '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_a98,L"Condition failed");
    (*pcVar7)(pFVar6,&local_a98,0);
    if (local_a98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a98.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_5a0.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_a88,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_a88,0);
    if (local_a88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a88.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_5a0.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_a78,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_a78,0);
    if (local_a78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a78.Data.AllocatorInstance.Data);
    }
  }
  FSharedBuffer::GetView((FSharedBuffer *)(local_1480 + 8),&local_948);
  local_938.Data = local_948.Data;
  local_938.Size = local_948.Size;
  pFVar18 = FBlake3::HashBuffer(&local_e0,&local_938);
  lVar29 = *(longlong *)pFVar18->Hash;
  lVar8 = *(longlong *)(pFVar18->Hash + 8);
  iVar13 = *(int *)(pFVar18->Hash + 0x10);
  local_7fc = lVar29;
  lStack_7f4 = lVar8;
  local_7ec = iVar13;
  pFVar16 = FCbAttachment::GetHash((FCbAttachment *)&local_5a0,&local_1ac);
  if (((*(longlong *)pFVar16->Hash != lVar29) || (*(longlong *)(pFVar16->Hash + 8) != lVar8)) ||
     (*(int *)(pFVar16->Hash + 0x10) != iVar13)) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1210,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1210,0);
    if (local_1210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1210.Data.AllocatorInstance.Data);
    }
  }
  `FCompactBinaryAttachmentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_1498,(FCbAttachment *)&local_5a0);
  TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
  ::
  ~TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
            (&local_5a0);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_1480 + 8));
  pFVar15 = FAutomationTestFramework::Get();
  pFVar6 = pFVar15->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x50);
  ::FString::FString(&local_1200,L"Compressed Binary Attachment");
  (*pcVar7)(pFVar6,&local_1200,0,0);
  if (local_1200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1200.Data.AllocatorInstance.Data);
  }
  local_11e8 = &local_1484;
  local_1484 = 0x3020100;
  local_11e0 = 4;
  FVar17 = FSharedBuffer::Clone(&local_1300);
  FCompressedBuffer::Compress(&local_3e0,(FSharedBuffer *)FVar17.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_1300);
  pFVar19 = FCompositeBuffer::MakeOwned(&local_3e0.CompressedData,&local_2d0);
  FCompressedBuffer::FromCompressed((FCompressedBuffer *)local_568,pFVar19);
  FCompositeBuffer::~FCompositeBuffer(&local_2d0);
  FCompressedBuffer::GetRawHash((FCompressedBuffer *)local_568,(FIoHash *)(local_568 + 0x18));
  local_538 = 3;
  if (local_568._16_4_ == 0) {
    TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
    ::Emplace<std::nullptr_t>
              ((TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
                *)local_568);
  }
  uVar28 = (ulonglong)local_538;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_11d8,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_11d8,0);
    if (local_11d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11d8.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_538;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_11c8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_11c8,0);
    if (local_11c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11c8.Data.AllocatorInstance.Data);
    }
  }
  pFVar27 = (FCompressedBuffer *)local_568;
  if (local_538 != 3) {
    pFVar27 = &FCompressedBuffer::Null;
  }
  FVar17 = FCompositeBuffer::ToShared(&pFVar27->CompressedData);
  pTVar20 = FSharedBuffer::GetView((FSharedBuffer *)FVar17.Owner.Owner,&local_608);
  FVar17 = FCompositeBuffer::ToShared(&local_3e0.CompressedData);
  pTVar21 = FSharedBuffer::GetView((FSharedBuffer *)FVar17.Owner.Owner,&local_688);
  if (pTVar20->Size == pTVar21->Size) {
    if ((pTVar20->Data != pTVar21->Data) &&
       (iVar13 = memcmp(pTVar20->Data,pTVar21->Data,pTVar20->Size), iVar13 != 0))
    goto LAB_141d18e24;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1428);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1420);
  }
  else {
LAB_141d18e24:
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1428);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1420);
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_11b8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_11b8);
    if (local_11b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_538 == 1) {
    local_13a8 = (longlong *)CONCAT44(local_568._20_4_,local_568._16_4_);
    local_13b8[0] = local_568[0];
    local_13b8[1] = local_568[1];
    local_13b8[2] = local_568[2];
    local_13b8[3] = local_568[3];
    local_13b8[4] = local_568[4];
    local_13b8[5] = local_568[5];
    local_13b8[6] = local_568[6];
    local_13b8[7] = local_568[7];
    FStack_13b0 = (ForElementType<FSharedBuffer>)local_568._8_8_;
    if (local_13a8 != (longlong *)0x0) {
      LOCK();
      puVar2 = (ulonglong *)(local_13a8 + 3);
      uVar28 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      if ((uVar28 & 0x3fffffff) == 0) {
        LOCK();
        local_13a8[3] = local_13a8[3] + 0x40000000;
        UNLOCK();
      }
    }
  }
  else {
    local_13b8[0] = '\0';
    local_13b8[1] = '\0';
    local_13b8[2] = '\0';
    local_13b8[3] = '\0';
    local_13b8[4] = '\0';
    local_13b8[5] = '\0';
    local_13b8[6] = '\0';
    local_13b8[7] = '\0';
    FStack_13b0 = (ForElementType<FSharedBuffer>)0x0;
    local_13a8 = (longlong *)0x0;
    FCbObjectView::FCbObjectView((FCbObjectView *)local_13b8);
    local_13a8 = (longlong *)0x0;
  }
  bVar12 = FCbObjectView::operator_bool((FCbObjectView *)local_13b8);
  plVar4 = local_13a8;
  if (local_13a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_13a8 + 3;
    lVar29 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar29 & 0x3fffffff) == 1) {
      (**(code **)(*local_13a8 + 0x10))(local_13a8);
      plVar4[1] = 0;
      plVar4[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar4 + 3);
      uVar28 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar28 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar4)(plVar4,1);
      }
    }
  }
  if (bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_11a8,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_11a8);
    if (local_11a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11a8.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_538;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1198,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_1198);
    if (local_1198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1198.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_538;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28) == '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1188,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1188);
    if (local_1188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1188.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_538;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1178,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_1178);
    if (local_1178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1178.Data.AllocatorInstance.Data);
    }
  }
  pFVar16 = FCompressedBuffer::GetRawHash(&local_3e0,&local_1e8);
  pFVar22 = FCbAttachment::GetHash((FCbAttachment *)local_568,&local_1fc);
  if (((*(longlong *)pFVar22->Hash != *(longlong *)pFVar16->Hash) ||
      (*(longlong *)(pFVar22->Hash + 8) != *(longlong *)(pFVar16->Hash + 8))) ||
     (*(int *)(pFVar22->Hash + 0x10) != *(int *)(pFVar16->Hash + 0x10))) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1168,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1168);
    if (local_1168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1168.Data.AllocatorInstance.Data);
    }
  }
  `FCompactBinaryAttachmentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_1498,(FCbAttachment *)local_568);
  FCbAttachment::~FCbAttachment((FCbAttachment *)local_568);
  FCompositeBuffer::~FCompositeBuffer(&local_3e0.CompressedData);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar6 = pFVar15->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x50);
  ::FString::FString(&local_1158,L"Object Attachment");
  (*pcVar7)(pFVar6,&local_1158,0,0);
  if (local_1158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1158.Data.AllocatorInstance.Data);
  }
  FCbWriter::FCbWriter(&local_a18);
  FCbWriter::BeginObject(&local_a18);
  uStack_1140 = 4;
  local_1148 = &s_Name;
  local_928._12_4_ = uStack_113c;
  local_928.Size = 4;
  local_928.DataPtr = "Name";
  FCbWriter::SetNameOrAddString(&local_a18,&local_928);
  FCbWriter::AddInteger(&local_a18,0x2a);
  FCbWriter::EndObject(&local_a18);
  pFVar23 = FCbWriter::Save(&local_a18,(FCbFieldIterator *)local_5f8);
  FCbField::AsObject((FCbField *)pFVar23,(FCbObject *)local_12c8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_5f8 + 0x10));
  local_9a8._0_8_ = local_12c8._0_8_;
  local_9a8._8_8_ = local_12c8._8_8_;
  if (local_12b8.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar3 = &(local_12b8.Owner)->ReferenceCountsAndFlags;
    aVar5 = *paVar3;
    *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + 1);
    UNLOCK();
    if (((ulonglong)aVar5 & 0x3fffffff) == 0) {
      LOCK();
      (local_12b8.Owner)->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((longlong)(local_12b8.Owner)->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
    }
  }
  local_998[0].Owner = local_12b8.Owner;
  FCbAttachment::FObjectValue::FObjectValue
            ((FObjectValue *)&local_4f8,(FCbObject *)local_9a8,(FIoHash *)0x0);
  local_4f8.TypeIndex = 1;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_998);
  uVar28 = (ulonglong)local_4f8.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1138,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_1138,0);
    if (local_1138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1138.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_4f8.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1128,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1128,0);
    if (local_1128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1128.Data.AllocatorInstance.Data);
    }
  }
  if (local_4f8.TypeIndex == 2) {
    FCompositeBuffer::ToShared((FCompositeBuffer *)&local_4f8);
    plVar4 = local_1418;
    if (local_1418 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1418 + 3;
      lVar29 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (((uint)lVar29 & 0x3fffffff) == 1) {
        (**(code **)(*local_1418 + 0x10))(local_1418);
        plVar4[1] = 0;
        plVar4[2] = 0;
        LOCK();
        puVar2 = (ulonglong *)(plVar4 + 3);
        uVar28 = *puVar2;
        *puVar2 = *puVar2 - 0x40000000;
        UNLOCK();
        if (((uint)(uVar28 >> 0x1e) & 0x3fffffff) == 1) {
          (**(code **)*plVar4)(plVar4,1);
        }
      }
      pFVar15 = FAutomationTestFramework::Get();
      pFVar6 = pFVar15->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      ::FString::FString(&local_1118,L"Condition failed");
      (*pcVar7)(pFVar6,&local_1118,0);
      if (local_1118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1118.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_1418 = (longlong *)0x0;
  }
  if (local_4f8.TypeIndex == 1) {
    local_13a0._0_8_ = local_4f8._padding_;
    local_13a0._8_8_ = local_4f8._padding_;
    if ((longlong *)local_4f8._padding_ != (longlong *)0x0) {
      LOCK();
      puVar2 = (ulonglong *)(local_4f8._padding_ + 0x18);
      uVar28 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      if ((uVar28 & 0x3fffffff) == 0) {
        LOCK();
        *(longlong *)(local_4f8._padding_ + 0x18) =
             *(longlong *)(local_4f8._padding_ + 0x18) + 0x40000000;
        UNLOCK();
      }
    }
    local_1390 = (longlong *)local_4f8._padding_;
  }
  else {
    local_13a0._0_8_ = 0;
    local_13a0._8_8_ = 0;
    local_1390 = (longlong *)0x0;
    FCbObjectView::FCbObjectView(&local_13a0);
    local_1390 = (longlong *)0x0;
  }
  bVar12 = FCbObjectView::Equals(&local_13a0,(FCbObjectView *)local_12c8);
  plVar4 = local_1390;
  if (local_1390 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1390 + 3;
    lVar29 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar29 & 0x3fffffff) == 1) {
      (**(code **)(*local_1390 + 0x10))(local_1390);
      plVar4[1] = 0;
      plVar4[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar4 + 3);
      uVar28 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar28 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar4)(plVar4,1);
      }
    }
  }
  if (!bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1108,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1108,0);
    if (local_1108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1108.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_4f8.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_10f8,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_10f8,0);
    if (local_10f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10f8.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_4f8.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_10e8,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_10e8,0);
    if (local_10e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10e8.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_4f8.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28) == '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_10d8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_10d8,0);
    if (local_10d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10d8.Data.AllocatorInstance.Data);
    }
  }
  pFVar16 = FCbObjectView::GetHash((FCbObjectView *)local_12c8,&local_210);
  pFVar22 = FCbAttachment::GetHash((FCbAttachment *)&local_4f8,&local_184);
  if (((*(longlong *)pFVar22->Hash != *(longlong *)pFVar16->Hash) ||
      (*(longlong *)(pFVar22->Hash + 8) != *(longlong *)(pFVar16->Hash + 8))) ||
     (*(int *)(pFVar22->Hash + 0x10) != *(int *)(pFVar16->Hash + 0x10))) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_10c8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_10c8,0);
    if (local_10c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10c8.Data.AllocatorInstance.Data);
    }
  }
  `FCompactBinaryAttachmentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_1498,(FCbAttachment *)&local_4f8);
  TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
  ::
  ~TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
            (&local_4f8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_12b8);
  FCbWriter::~FCbWriter(&local_a18);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar6 = pFVar15->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x50);
  ::FString::FString(&local_10b8,L"Binary View");
  (*pcVar7)(pFVar6,&local_10b8,0,0);
  if (local_10b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_10b8.Data.AllocatorInstance.Data);
  }
  local_10a8 = &local_148c;
  local_148c = 0x3020100;
  local_10a0 = 4;
  FSharedBuffer::MakeView((TMemoryView<void_const_> *)local_1480);
  FVar17 = FSharedBuffer::MakeOwned((FSharedBuffer *)local_1480);
  FCbAttachment::FCbAttachment<FSharedBuffer,0>
            ((FCbAttachment *)&local_450,local_1498[0],(FSharedBuffer *)FVar17.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_1300.Size);
  uVar28 = (ulonglong)local_450.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1098,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_1098,0);
    if (local_1098.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1098.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_450.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1088,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1088,0);
    if (local_1088.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1088.Data.AllocatorInstance.Data);
    }
  }
  if (local_450.TypeIndex == 2) {
    FCompositeBuffer::ToShared((FCompositeBuffer *)&local_450);
    TVar11.Owner = local_1410.Owner;
    bVar12 = local_1410.Owner == (FBufferOwner *)local_1480._0_8_;
    if (local_1410.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar3 = &(local_1410.Owner)->ReferenceCountsAndFlags;
      aVar5 = *paVar3;
      *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + -1);
      UNLOCK();
      if ((aVar5._0_4_ & 0x3fffffff) == 1) {
        (**(code **)((local_1410.Owner)->_padding_ + 0x10))(local_1410.Owner);
        (TVar11.Owner)->Data = (void *)0x0;
        (TVar11.Owner)->Size = 0;
        LOCK();
        paVar3 = &(TVar11.Owner)->ReferenceCountsAndFlags;
        aVar5 = *paVar3;
        *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + -0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar5 >> 0x1e) & 0x3fffffff) == 1) {
          (**(code **)(TVar11.Owner)->_padding_)(TVar11.Owner,1);
        }
      }
    }
  }
  else {
    bVar12 = (FBufferOwner *)local_1480._0_8_ == (FBufferOwner *)0x0;
    local_1410.Owner = (FBufferOwner *)0x0;
  }
  if (bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1078,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1078,0);
    if (local_1078.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1078.Data.AllocatorInstance.Data);
    }
  }
  if (local_450.TypeIndex == 2) {
    FCompositeBuffer::ToShared((FCompositeBuffer *)&local_450);
  }
  else {
    local_1470.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  }
  pTVar20 = FSharedBuffer::GetView(&local_1470,&local_678);
  pTVar21 = FSharedBuffer::GetView((FSharedBuffer *)local_1480,&local_668);
  if (pTVar20->Size == pTVar21->Size) {
    if ((pTVar20->Data != pTVar21->Data) &&
       (iVar13 = memcmp(pTVar20->Data,pTVar21->Data,pTVar20->Size), iVar13 != 0))
    goto LAB_141d19b02;
    bVar12 = false;
  }
  else {
LAB_141d19b02:
    bVar12 = true;
  }
  FVar17.Owner.Owner = local_1470.Owner.Owner;
  if (local_1470.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar3 = (atomic<unsigned___int64> *)((longlong)local_1470.Owner.Owner + 0x18);
    aVar5 = *paVar3;
    *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + -1);
    UNLOCK();
    if ((aVar5._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_1470.Owner.Owner + 0x10))(local_1470.Owner.Owner);
      *(void **)((longlong)FVar17.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar17.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar3 = (atomic<unsigned___int64> *)((longlong)FVar17.Owner.Owner + 0x18);
      aVar5 = *paVar3;
      *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar5 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar17.Owner.Owner)(FVar17.Owner.Owner,1);
      }
    }
  }
  if (bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1068,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1068,0);
    if (local_1068.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1068.Data.AllocatorInstance.Data);
    }
  }
  pFVar24 = FCbAttachment::AsObject((FCbAttachment *)&local_450,(FCbObject *)local_740);
  bVar12 = FCbObjectView::operator_bool((FCbObjectView *)pFVar24);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_740 + 0x10));
  if (bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1058,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_1058,0);
    if (local_1058.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1058.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_450.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) == '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1048,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1048,0);
    if (local_1048.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1048.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_450.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1038,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_1038,0);
    if (local_1038.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1038.Data.AllocatorInstance.Data);
    }
  }
  if ((3 < (ulonglong)local_450.TypeIndex) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)local_450.TypeIndex) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1028,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_1028,0);
    if (local_1028.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1028.Data.AllocatorInstance.Data);
    }
  }
  uVar10 = local_1480._0_8_;
  local_1018.Size = (ulong64)pvVar25;
  if ((FBufferOwner *)local_1480._0_8_ != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)(local_1480._0_8_ + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_1480._0_8_ + 8))(local_1480._0_8_);
    }
    local_1018.Size = *(ulong64 *)(uVar10 + 0x10);
    if ((FBufferOwner *)local_1480._0_8_ != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)(local_1480._0_8_ + 0x18) >> 0x3c & 4) == 0) {
        (**(code **)(*(longlong *)local_1480._0_8_ + 8))(local_1480._0_8_);
      }
      pvVar25 = *(void **)(local_1480._0_8_ + 8);
    }
  }
  local_1018.Data = pvVar25;
  pFVar18 = FBlake3::HashBuffer(&local_120,&local_1018);
  lVar29 = *(longlong *)pFVar18->Hash;
  lVar8 = *(longlong *)(pFVar18->Hash + 8);
  iVar13 = *(int *)(pFVar18->Hash + 0x10);
  local_828._24_8_ = lVar29;
  lStack_808 = lVar8;
  local_800 = iVar13;
  pFVar16 = FCbAttachment::GetHash((FCbAttachment *)&local_450,&local_224);
  if (((*(longlong *)pFVar16->Hash != lVar29) || (*(longlong *)(pFVar16->Hash + 8) != lVar8)) ||
     (*(int *)(pFVar16->Hash + 0x10) != iVar13)) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_1008,L"Condition failed");
    (*pcVar7)(pFVar6,&local_1008,0);
    if (local_1008.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1008.Data.AllocatorInstance.Data);
    }
  }
  TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
  ::
  ~TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
            (&local_450);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_1480);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar6 = pFVar15->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x50);
  ::FString::FString(&local_ff8,L"Object View");
  (*pcVar7)(pFVar6,&local_ff8,0,0);
  if (local_ff8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ff8.Data.AllocatorInstance.Data);
  }
  FCbWriter::FCbWriter(&local_a40);
  FCbWriter::BeginObject(&local_a40);
  local_fe8 = &s_Name;
  uStack_fe0 = 4;
  local_988._12_4_ = uStack_fdc;
  local_988.Size = 4;
  local_988.DataPtr = "Name";
  FCbWriter::SetNameOrAddString(&local_a40,&local_988);
  FCbWriter::AddInteger(&local_a40,0x2a);
  FCbWriter::EndObject(&local_a40);
  pFVar23 = FCbWriter::Save(&local_a40,(FCbFieldIterator *)local_6c8);
  FCbField::AsObject((FCbField *)pFVar23,(FCbObject *)local_1268);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_6c8 + 0x10));
  local_12f0 = 0;
  TCbBufferFactory<FCbObject,FCbObjectView>::MakeView
            ((FCbObject *)local_9f0,(FCbObjectView *)local_1268,(FSharedBuffer)&local_12f0);
  local_9c0._0_8_ = local_9f0._0_8_;
  local_9c0._8_8_ = local_9f0._8_8_;
  if (local_9e0.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar3 = &(local_9e0.Owner)->ReferenceCountsAndFlags;
    aVar5 = *paVar3;
    *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + 1);
    UNLOCK();
    if (((ulonglong)aVar5 & 0x3fffffff) == 0) {
      LOCK();
      (local_9e0.Owner)->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((longlong)(local_9e0.Owner)->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
    }
  }
  local_9b0.Owner = local_9e0.Owner;
  FCbAttachment::FObjectValue::FObjectValue
            ((FObjectValue *)&local_488,(FCbObject *)local_9c0,(FIoHash *)0x0);
  local_488.Value.TypeIndex = 1;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_9b0);
  uVar28 = (ulonglong)local_488.Value.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_fd8,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_fd8,0);
    if (local_fd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fd8.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_488.Value.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_fc8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_fc8,0);
    if (local_fc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fc8.Data.AllocatorInstance.Data);
    }
  }
  if (local_488.Value.TypeIndex == 1) {
    local_1388._0_8_ = local_488.Value._padding_;
    local_1388._8_8_ = local_488.Value._padding_;
    if ((longlong *)local_488.Value._padding_ != (longlong *)0x0) {
      LOCK();
      puVar2 = (ulonglong *)(local_488.Value._padding_ + 0x18);
      uVar28 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      if ((uVar28 & 0x3fffffff) == 0) {
        LOCK();
        *(longlong *)(local_488.Value._padding_ + 0x18) =
             *(longlong *)(local_488.Value._padding_ + 0x18) + 0x40000000;
        UNLOCK();
      }
    }
    local_1378 = (longlong *)local_488.Value._padding_;
  }
  else {
    local_1388._0_8_ = 0;
    local_1388._8_8_ = 0;
    local_1378 = (longlong *)0x0;
    FCbObjectView::FCbObjectView(&local_1388);
    local_1378 = (longlong *)0x0;
  }
  bVar12 = FCbObjectView::Equals(&local_1388,(FCbObjectView *)local_1268);
  plVar4 = local_1378;
  if (local_1378 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1378 + 3;
    lVar29 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar29 & 0x3fffffff) == 1) {
      (**(code **)(*local_1378 + 0x10))(local_1378);
      plVar4[1] = 0;
      plVar4[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar4 + 3);
      uVar28 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar28 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar4)(plVar4,1);
      }
    }
  }
  if (!bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_fb8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_fb8,0);
    if (local_fb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fb8.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_488.Value.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_fa8,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_fa8,0);
    if (local_fa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fa8.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_488.Value.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_f98,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_f98,0);
    if (local_f98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f98.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_488.Value.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28) == '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_f88,L"Condition failed");
    (*pcVar7)(pFVar6,&local_f88,0);
    if (local_f88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f88.Data.AllocatorInstance.Data);
    }
  }
  pFVar16 = FCbObjectView::GetHash((FCbObjectView *)local_1268,&local_238);
  pFVar22 = FCbAttachment::GetHash(&local_488,&local_288);
  if (((*(longlong *)pFVar22->Hash != *(longlong *)pFVar16->Hash) ||
      (*(longlong *)(pFVar22->Hash + 8) != *(longlong *)(pFVar16->Hash + 8))) ||
     (*(int *)(pFVar22->Hash + 0x10) != *(int *)(pFVar16->Hash + 0x10))) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_f78,L"Condition failed");
    (*pcVar7)(pFVar6,&local_f78,0);
    if (local_f78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f78.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_488.Value.TypeIndex;
  if ((3 < local_488.Value.TypeIndex) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar28])(&local_488);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_9e0);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_1268 + 0x10));
  FCbWriter::~FCbWriter(&local_a40);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar6 = pFVar15->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x50);
  ::FString::FString(&local_f68,L"Binary Load from View");
  (*pcVar7)(pFVar6,&local_f68,0,0);
  if (local_f68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f68.Data.AllocatorInstance.Data);
  }
  local_f58 = &local_1494;
  local_1494 = 0x3020100;
  local_f50 = 4;
  FSharedBuffer::MakeView(&local_1458);
  FVar17 = FSharedBuffer::MakeOwned((FSharedBuffer *)&local_1458);
  FCbAttachment::FCbAttachment<FSharedBuffer,0>
            (&local_4c0,local_1498[0],(FSharedBuffer *)FVar17.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_12e8);
  FCbWriter::FCbWriter(&local_780);
  FCbAttachment::Save(&local_4c0,&local_780);
  FCbWriter::Save(&local_780,(FCbFieldIterator *)local_878);
  local_1370 = 0;
  local_828._16_8_ = local_878._24_8_;
  local_828._0_8_ = local_878._0_8_;
  local_828._8_8_ = local_878._8_8_;
  FCbFieldIterator::MakeRangeView
            ((FCbFieldIterator *)local_918,(FCbFieldViewIterator *)(local_840 + 0x18),
             (FSharedBuffer)&local_1370);
  bVar12 = FCbAttachment::TryLoad(&local_4c0,(FCbFieldIterator *)local_918);
  if (!bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_f48,L"Condition failed");
    (*pcVar7)(pFVar6,&local_f48,0);
    if (local_f48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f48.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_4c0.Value.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_f38,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_f38,0);
    if (local_f38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f38.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_4c0.Value.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_f28,L"Condition failed");
    (*pcVar7)(pFVar6,&local_f28,0);
    if (local_f28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f28.Data.AllocatorInstance.Data);
    }
  }
  pTVar20 = FSharedBuffer::GetView((FSharedBuffer *)(local_918 + 0x10),&local_658);
  if (local_4c0.Value.TypeIndex == 2) {
    FCompositeBuffer::ToShared((FCompositeBuffer *)&local_4c0);
  }
  else {
    local_1468.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  }
  pTVar21 = FSharedBuffer::GetView(&local_1468,&local_648);
  FVar17.Owner.Owner = local_1468.Owner.Owner;
  if ((pTVar21->Data < pTVar20->Data) ||
     (pTVar20->Size + (longlong)pTVar20->Data < pTVar21->Size + (longlong)pTVar21->Data)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (local_1468.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar3 = (atomic<unsigned___int64> *)((longlong)local_1468.Owner.Owner + 0x18);
    aVar5 = *paVar3;
    *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + -1);
    UNLOCK();
    if ((aVar5._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_1468.Owner.Owner + 0x10))(local_1468.Owner.Owner);
      *(void **)((longlong)FVar17.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar17.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar3 = (atomic<unsigned___int64> *)((longlong)FVar17.Owner.Owner + 0x18);
      aVar5 = *paVar3;
      *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar5 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar17.Owner.Owner)(FVar17.Owner.Owner,1);
      }
    }
  }
  if (bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_f18,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_f18,0);
    if (local_f18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f18.Data.AllocatorInstance.Data);
    }
  }
  if (local_4c0.Value.TypeIndex == 2) {
    FCompositeBuffer::ToShared((FCompositeBuffer *)&local_4c0);
  }
  else {
    local_1460.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  }
  pTVar20 = FSharedBuffer::GetView(&local_1460,&local_638);
  pTVar21 = FSharedBuffer::GetView((FSharedBuffer *)&local_1458,&local_628);
  if (pTVar20->Size == pTVar21->Size) {
    if ((pTVar20->Data != pTVar21->Data) &&
       (iVar13 = memcmp(pTVar20->Data,pTVar21->Data,pTVar20->Size), iVar13 != 0))
    goto LAB_141d1a88a;
    bVar12 = false;
  }
  else {
LAB_141d1a88a:
    bVar12 = true;
  }
  FVar17.Owner.Owner = local_1460.Owner.Owner;
  if (local_1460.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar3 = (atomic<unsigned___int64> *)((longlong)local_1460.Owner.Owner + 0x18);
    aVar5 = *paVar3;
    *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + -1);
    UNLOCK();
    if ((aVar5._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_1460.Owner.Owner + 0x10))(local_1460.Owner.Owner);
      *(void **)((longlong)FVar17.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar17.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar3 = (atomic<unsigned___int64> *)((longlong)FVar17.Owner.Owner + 0x18);
      aVar5 = *paVar3;
      *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar5 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar17.Owner.Owner)(FVar17.Owner.Owner,1);
      }
    }
  }
  if (bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_f08,L"Condition failed");
    (*pcVar7)(pFVar6,&local_f08,0);
    if (local_f08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f08.Data.AllocatorInstance.Data);
    }
  }
  pFVar24 = FCbAttachment::AsObject(&local_4c0,(FCbObject *)local_758);
  bVar12 = FCbObjectView::operator_bool((FCbObjectView *)pFVar24);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_758 + 0x10));
  if (bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_ef8,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_ef8,0);
    if (local_ef8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ef8.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_4c0.Value.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) == '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_ee8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_ee8,0);
    if (local_ee8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ee8.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_4c0.Value.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_ed8,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_ed8,0);
    if (local_ed8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ed8.Data.AllocatorInstance.Data);
    }
  }
  if ((3 < (ulonglong)local_4c0.Value.TypeIndex) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)local_4c0.Value.TypeIndex) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_ec8,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_ec8,0);
    if (local_ec8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ec8.Data.AllocatorInstance.Data);
    }
  }
  local_eb8.Data = &local_1494;
  local_eb8.Size = 4;
  pFVar18 = FBlake3::HashBuffer(&local_60,&local_eb8);
  lVar29 = *(longlong *)pFVar18->Hash;
  lVar8 = *(longlong *)(pFVar18->Hash + 8);
  iVar13 = *(int *)(pFVar18->Hash + 0x10);
  local_7e8 = lVar29;
  lStack_7e0 = lVar8;
  local_7d8 = iVar13;
  pFVar16 = FCbAttachment::GetHash(&local_4c0,&local_134);
  if (((*(longlong *)pFVar16->Hash != lVar29) || (*(longlong *)(pFVar16->Hash + 8) != lVar8)) ||
     (*(int *)(pFVar16->Hash + 0x10) != iVar13)) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_ea8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_ea8,0);
    if (local_ea8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ea8.Data.AllocatorInstance.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_918 + 0x10));
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_878 + 0x10));
  FCbWriter::~FCbWriter(&local_780);
  FCbAttachment::~FCbAttachment(&local_4c0);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_1458);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar6 = pFVar15->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x50);
  ::FString::FString(&local_e98,L"Compressed Binary Load from View");
  (*pcVar7)(pFVar6,&local_e98,0,0);
  if (local_e98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e98.Data.AllocatorInstance.Data);
  }
  local_e88 = &local_1490;
  local_1490 = 0x3020100;
  local_e80 = 4;
  FVar17 = FSharedBuffer::MakeView(&local_1368);
  FCompressedBuffer::Compress(&local_3c8,(FSharedBuffer *)FVar17.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_1368);
  pFVar19 = FCompositeBuffer::MakeOwned(&local_3c8.CompressedData,&local_2b8);
  FCompressedBuffer::FromCompressed((FCompressedBuffer *)local_5d8,pFVar19);
  FCompositeBuffer::~FCompositeBuffer(&local_2b8);
  FCompressedBuffer::GetRawHash((FCompressedBuffer *)local_5d8,(FIoHash *)(local_5d8 + 0x18));
  local_5a8 = 3;
  if (local_5d8._16_4_ == 0) {
    TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
    ::Emplace<std::nullptr_t>
              ((TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
                *)local_5d8);
  }
  FCbWriter::FCbWriter(&local_7a8);
  FCbAttachment::Save((FCbAttachment *)local_5d8,&local_7a8);
  FCbWriter::Save(&local_7a8,(FCbFieldIterator *)local_8b8);
  local_1368.Size = 0;
  local_840._16_8_ = local_8b8._24_8_;
  local_840._0_8_ = local_8b8._0_8_;
  local_840._8_8_ = local_8b8._8_8_;
  FCbFieldIterator::MakeRangeView
            ((FCbFieldIterator *)local_898,(FCbFieldViewIterator *)local_840,
             (FSharedBuffer)&local_1368.Size);
  bVar12 = FCbAttachment::TryLoad((FCbAttachment *)local_5d8,(FCbFieldIterator *)local_898);
  if (!bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_e78,L"Condition failed");
    (*pcVar7)(pFVar6,&local_e78,0);
    if (local_e78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e78.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_5a8;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_e68,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_e68,0);
    if (local_e68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e68.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_5a8;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_e58,L"Condition failed");
    (*pcVar7)(pFVar6,&local_e58,0);
    if (local_e58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e58.Data.AllocatorInstance.Data);
    }
  }
  pTVar20 = FSharedBuffer::GetView((FSharedBuffer *)(local_898 + 0x10),&local_618);
  pFVar27 = (FCompressedBuffer *)local_5d8;
  if (local_5a8 != 3) {
    pFVar27 = &FCompressedBuffer::Null;
  }
  FVar17 = FCompositeBuffer::ToShared(&pFVar27->CompressedData);
  pTVar21 = FSharedBuffer::GetView((FSharedBuffer *)FVar17.Owner.Owner,&local_728);
  if ((pTVar21->Data < pTVar20->Data) ||
     (pTVar20->Size + (longlong)pTVar20->Data < pTVar21->Size + (longlong)pTVar21->Data)) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1408);
  }
  else {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1408);
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_e48,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_e48,0);
    if (local_e48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e48.Data.AllocatorInstance.Data);
    }
  }
  pFVar27 = (FCompressedBuffer *)local_5d8;
  if (local_5a8 != 3) {
    pFVar27 = &FCompressedBuffer::Null;
  }
  FVar17 = FCompositeBuffer::ToShared(&pFVar27->CompressedData);
  pTVar20 = FSharedBuffer::GetView((FSharedBuffer *)FVar17.Owner.Owner,&local_718);
  FVar17 = FCompositeBuffer::ToShared(&local_3c8.CompressedData);
  pTVar21 = FSharedBuffer::GetView((FSharedBuffer *)FVar17.Owner.Owner,&local_708);
  if (pTVar20->Size == pTVar21->Size) {
    if ((pTVar20->Data != pTVar21->Data) &&
       (iVar13 = memcmp(pTVar20->Data,pTVar21->Data,pTVar20->Size), iVar13 != 0))
    goto LAB_141d1b013;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1400);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_13f8);
  }
  else {
LAB_141d1b013:
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1400);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_13f8);
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_e38,L"Condition failed");
    (*pcVar7)(pFVar6,&local_e38);
    if (local_e38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e38.Data.AllocatorInstance.Data);
    }
  }
  if (local_5a8 == 1) {
    local_13d8 = (longlong *)CONCAT44(local_5d8._20_4_,local_5d8._16_4_);
    local_13e8[0] = local_5d8[0];
    local_13e8[1] = local_5d8[1];
    local_13e8[2] = local_5d8[2];
    local_13e8[3] = local_5d8[3];
    local_13e8[4] = local_5d8[4];
    local_13e8[5] = local_5d8[5];
    local_13e8[6] = local_5d8[6];
    local_13e8[7] = local_5d8[7];
    FStack_13e0 = (ForElementType<FSharedBuffer>)local_5d8._8_8_;
    if (local_13d8 != (longlong *)0x0) {
      LOCK();
      puVar2 = (ulonglong *)(local_13d8 + 3);
      uVar28 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      if ((uVar28 & 0x3fffffff) == 0) {
        LOCK();
        local_13d8[3] = local_13d8[3] + 0x40000000;
        UNLOCK();
      }
    }
  }
  else {
    local_13e8[0] = '\0';
    local_13e8[1] = '\0';
    local_13e8[2] = '\0';
    local_13e8[3] = '\0';
    local_13e8[4] = '\0';
    local_13e8[5] = '\0';
    local_13e8[6] = '\0';
    local_13e8[7] = '\0';
    FStack_13e0 = (ForElementType<FSharedBuffer>)0x0;
    local_13d8 = (longlong *)0x0;
    FCbObjectView::FCbObjectView((FCbObjectView *)local_13e8);
    local_13d8 = (longlong *)0x0;
  }
  bVar12 = FCbObjectView::operator_bool((FCbObjectView *)local_13e8);
  plVar4 = local_13d8;
  if (local_13d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_13d8 + 3;
    lVar29 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar29 & 0x3fffffff) == 1) {
      (**(code **)(*local_13d8 + 0x10))(local_13d8);
      plVar4[1] = 0;
      plVar4[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar4 + 3);
      uVar28 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar28 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar4)(plVar4,1);
      }
    }
  }
  if (bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_e28,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_e28);
    if (local_e28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e28.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_5a8;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_e18,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_e18);
    if (local_e18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e18.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_5a8;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28) == '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_e08,L"Condition failed");
    (*pcVar7)(pFVar6,&local_e08);
    if (local_e08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e08.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_5a8;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_df8,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_df8);
    if (local_df8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_df8.Data.AllocatorInstance.Data);
    }
  }
  local_de8.Data = &local_1490;
  local_de8.Size = 4;
  local_1240 = 0;
  local_1250 = 0;
  lStack_1248 = 0;
  pFVar18 = FBlake3::HashBuffer(&local_80,&local_de8);
  lVar29 = *(longlong *)pFVar18->Hash;
  lVar8 = *(longlong *)(pFVar18->Hash + 8);
  iVar13 = *(int *)(pFVar18->Hash + 0x10);
  local_1250 = lVar29;
  lStack_1248 = lVar8;
  local_1240 = iVar13;
  pFVar16 = FCbAttachment::GetHash((FCbAttachment *)local_5d8,&local_148);
  if (((*(longlong *)pFVar16->Hash != lVar29) || (*(longlong *)(pFVar16->Hash + 8) != lVar8)) ||
     (*(int *)(pFVar16->Hash + 0x10) != iVar13)) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_dd8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_dd8);
    if (local_dd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_dd8.Data.AllocatorInstance.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_898 + 0x10));
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_8b8 + 0x10));
  FCbWriter::~FCbWriter(&local_7a8);
  FCbAttachment::~FCbAttachment((FCbAttachment *)local_5d8);
  FCompositeBuffer::~FCompositeBuffer(&local_3c8.CompressedData);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar6 = pFVar15->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x50);
  ::FString::FString(&local_dc8,L"Object Load from View");
  (*pcVar7)(pFVar6,&local_dc8,0,0);
  if (local_dc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_dc8.Data.AllocatorInstance.Data);
  }
  FCbWriter::FCbWriter(&local_a68);
  FCbWriter::BeginObject(&local_a68);
  local_db8 = &s_Name;
  uStack_db0 = 4;
  local_978._12_4_ = uStack_dac;
  local_978.Size = 4;
  local_978.DataPtr = "Name";
  FCbWriter::SetNameOrAddString(&local_a68,&local_978);
  FCbWriter::AddInteger(&local_a68,0x2a);
  FCbWriter::EndObject(&local_a68);
  pFVar23 = FCbWriter::Save(&local_a68,(FCbFieldIterator *)local_6a8);
  FCbField::AsObject((FCbField *)pFVar23,(FCbObject *)local_12b0);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_6a8 + 0x10));
  FSharedBuffer::GetView((FSharedBuffer *)(local_12b0 + 0x10),&local_968);
  local_958.Data = local_968.Data;
  local_958.Size = local_968.Size;
  EVar14 = ValidateCompactBinaryRange(&local_958,All);
  if (EVar14 != None) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_da8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_da8);
    if (local_da8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_da8.Data.AllocatorInstance.Data);
    }
  }
  local_9d8._0_8_ = local_12b0._0_8_;
  local_9d8._8_8_ = local_12b0._8_8_;
  FSharedBuffer::FSharedBuffer
            ((FSharedBuffer *)(local_9d8 + 0x10),(FSharedBuffer *)(local_12b0 + 0x10));
  FCbAttachment::FObjectValue::FObjectValue
            ((FObjectValue *)&local_530,(FCbObject *)local_9d8,(FIoHash *)0x0);
  local_530.Value.TypeIndex = 1;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_9d8 + 0x10));
  FCbWriter::FCbWriter(&local_7d0);
  FCbAttachment::Save(&local_530,&local_7d0);
  FCbWriter::Save(&local_7d0,(FCbFieldIterator *)local_8f8);
  local_1358 = 0;
  local_858._16_8_ = local_8f8._24_8_;
  local_858._0_8_ = local_8f8._0_8_;
  local_858._8_8_ = local_8f8._8_8_;
  FCbFieldIterator::MakeRangeView
            ((FCbFieldIterator *)local_8d8,(FCbFieldViewIterator *)local_858,
             (FSharedBuffer)&local_1358);
  bVar12 = FCbAttachment::TryLoad(&local_530,(FCbFieldIterator *)local_8d8);
  if (!bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_d98,L"Condition failed");
    (*pcVar7)(pFVar6,&local_d98,0);
    if (local_d98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d98.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_530.Value.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_d88,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_d88,0);
    if (local_d88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d88.Data.AllocatorInstance.Data);
    }
  }
  bVar12 = FCbAttachment::operator_bool(&local_530);
  if (!bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_d78,L"Condition failed");
    (*pcVar7)(pFVar6,&local_d78,0);
    if (local_d78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d78.Data.AllocatorInstance.Data);
    }
  }
  if (local_530.Value.TypeIndex == 2) {
    FCompositeBuffer::ToShared((FCompositeBuffer *)&local_530);
  }
  else {
    local_1458.Size = 0;
  }
  pTVar20 = FSharedBuffer::GetView((FSharedBuffer *)&local_1458.Size,&local_6f8);
  local_d68.Data = (void *)0x0;
  local_d68.Size = 0;
  bVar12 = TMemoryView<void_const_>::EqualBytes<void_const_>(pTVar20,&local_d68);
  uVar9 = local_1458.Size;
  if ((longlong *)local_1458.Size != (longlong *)0x0) {
    LOCK();
    plVar4 = (longlong *)(local_1458.Size + 0x18);
    lVar29 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (((uint)lVar29 & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_1458.Size + 0x10))(local_1458.Size);
      *(longlong *)(uVar9 + 8) = 0;
      *(longlong *)(uVar9 + 0x10) = 0;
      LOCK();
      puVar2 = (ulonglong *)(uVar9 + 0x18);
      uVar28 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar28 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)uVar9)(uVar9,1);
      }
    }
  }
  if (!bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_d58,L"Condition failed");
    (*pcVar7)(pFVar6,&local_d58,0);
    if (local_d58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d58.Data.AllocatorInstance.Data);
    }
  }
  if (local_530.Value.TypeIndex == 1) {
    local_1448.TypeWithFlags = (undefined1)local_530.Value._padding_;
    local_1448.Error = local_530.Value._padding_._1_1_;
    local_1448._2_2_ = local_530.Value._padding_._2_2_;
    local_1448.NameLen = local_530.Value._padding_._4_4_;
    local_1448.Value = (void *)local_530.Value._padding_;
    FSharedBuffer::FSharedBuffer(&local_1438,(FSharedBuffer *)&local_530.Value._padding_);
  }
  else {
    local_1448.TypeWithFlags = None;
    local_1448.Error = None;
    local_1448._2_2_ = 0;
    local_1448.NameLen = 0;
    local_1448.Value = (void *)0x0;
    local_1438.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    FCbObjectView::FCbObjectView((FCbObjectView *)&local_1448);
    local_1438.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  }
  if ((-1 < (char)local_1448.TypeWithFlags) && ((local_1448._0_8_ & 0x40) != 0)) {
    pTVar20 = FCbFieldView::GetView(&local_1448,&local_6e8);
    pvVar25 = pTVar20->Data;
    uVar9 = pTVar20->Size;
    pTVar20 = FSharedBuffer::GetView((FSharedBuffer *)(local_8d8 + 0x10),&local_6d8);
    if ((pvVar25 < pTVar20->Data) ||
       (pTVar20->Size + (longlong)pTVar20->Data < uVar9 + (longlong)pvVar25)) {
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1438.Owner);
      goto LAB_141d1b930;
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1438.Owner);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar6 = pFVar15->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
  ::FString::FString(&local_d48,L"Condition expected to return false but returned true");
  (*pcVar7)(pFVar6,&local_d48,0);
  if (local_d48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d48.Data.AllocatorInstance.Data);
  }
LAB_141d1b930:
  uVar28 = (ulonglong)local_530.Value.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_d38,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_d38,0);
    if (local_d38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d38.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_530.Value.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_d28,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_d28,0);
    if (local_d28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d28.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_530.Value.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28) == '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_d18,L"Condition failed");
    (*pcVar7)(pFVar6,&local_d18,0);
    if (local_d18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d18.Data.AllocatorInstance.Data);
    }
  }
  pFVar16 = FCbObjectView::GetHash((FCbObjectView *)local_12b0,&local_15c);
  pFVar22 = FCbAttachment::GetHash(&local_530,&local_1d4);
  if (((*(longlong *)pFVar22->Hash != *(longlong *)pFVar16->Hash) ||
      (*(longlong *)(pFVar22->Hash + 8) != *(longlong *)(pFVar16->Hash + 8))) ||
     (*(int *)(pFVar22->Hash + 0x10) != *(int *)(pFVar16->Hash + 0x10))) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_d08,L"Condition failed");
    (*pcVar7)(pFVar6,&local_d08,0);
    if (local_d08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d08.Data.AllocatorInstance.Data);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_8d8 + 0x10));
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_8f8 + 0x10));
  FCbWriter::~FCbWriter(&local_7d0);
  FCbAttachment::~FCbAttachment(&local_530);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_12b0 + 0x10));
  FCbWriter::~FCbWriter(&local_a68);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar6 = pFVar15->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x50);
  ::FString::FString(&local_cf8,L"Binary Null");
  (*pcVar7)(pFVar6,&local_cf8,0,0);
  if (local_cf8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cf8.Data.AllocatorInstance.Data);
  }
  local_13f0.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  FVar17 = FSharedBuffer::MakeOwned(&local_13f0);
  FCbAttachment::FCbAttachment<FSharedBuffer,0>
            (&local_308,local_1498[0],(FSharedBuffer *)FVar17.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1350);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_13f0.Owner);
  uVar28 = (ulonglong)local_308.Value.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) == '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_ce8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_ce8,0);
    if (local_ce8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ce8.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_308.Value.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_cd8,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_cd8,0);
    if (local_cd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cd8.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_308.Value.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_cc8,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_cc8,0);
    if (local_cc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cc8.Data.AllocatorInstance.Data);
    }
  }
  if ((3 < (ulonglong)local_308.Value.TypeIndex) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)local_308.Value.TypeIndex) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_cb8,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_cb8,0);
    if (local_cb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cb8.Data.AllocatorInstance.Data);
    }
  }
  pFVar16 = FCbAttachment::GetHash(&local_308,&local_24c);
  if (((*(longlong *)pFVar16->Hash != FIoHash::Zero.Hash._0_8_) ||
      (*(longlong *)(pFVar16->Hash + 8) != FIoHash::Zero.Hash._8_8_)) ||
     (*(int *)(pFVar16->Hash + 0x10) != FIoHash::Zero.Hash._16_4_)) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_ca8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_ca8,0);
    if (local_ca8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ca8.Data.AllocatorInstance.Data);
    }
  }
  FCbAttachment::~FCbAttachment(&local_308);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar6 = pFVar15->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x50);
  ::FString::FString(&local_c98,L"Binary Empty");
  (*pcVar7)(pFVar6,&local_c98,0,0);
  if (local_c98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c98.Data.AllocatorInstance.Data);
  }
  FVar26 = FUniqueBuffer::Alloc((ulong64)&local_1338);
  FVar17 = FUniqueBuffer::MoveToShared((FUniqueBuffer *)FVar26.Owner.Owner);
  FVar17 = FSharedBuffer::MakeOwned((FSharedBuffer *)FVar17.Owner.Owner);
  FCbAttachment::FCbAttachment<FSharedBuffer,0>
            (&local_340,local_1498[0],(FSharedBuffer *)FVar17.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1348);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1340);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1338);
  uVar28 = (ulonglong)local_340.Value.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_c88,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_c88);
    if (local_c88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c88.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_340.Value.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28 + 4) == '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_c78,L"Condition failed");
    (*pcVar7)(pFVar6,&local_c78);
    if (local_c78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c78.Data.AllocatorInstance.Data);
    }
  }
  uVar28 = (ulonglong)local_340.Value.TypeIndex;
  if ((3 < uVar28) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar28) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_c68,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_c68);
    if (local_c68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c68.Data.AllocatorInstance.Data);
    }
  }
  if ((3 < (ulonglong)local_340.Value.TypeIndex) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)local_340.Value.TypeIndex) != '\0') {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_c58,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_c58);
    if (local_c58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c58.Data.AllocatorInstance.Data);
    }
  }
  local_1330.Owner = (FBufferOwner *)0x0;
  local_c48.Data = (void *)0x0;
  local_122c = 0;
  local_c48.Size = 0;
  local_123c = 0;
  lStack_1234 = 0;
  pFVar18 = FBlake3::HashBuffer(&local_100,&local_c48);
  lVar29 = *(longlong *)pFVar18->Hash;
  lVar8 = *(longlong *)(pFVar18->Hash + 8);
  local_122c = *(uint *)(pFVar18->Hash + 0x10);
  uVar28 = (ulonglong)local_122c;
  local_123c = lVar29;
  lStack_1234 = lVar8;
  pFVar16 = FCbAttachment::GetHash(&local_340,&local_170);
  lVar29 = *(longlong *)pFVar16->Hash - lVar29;
  if ((lVar29 == 0) && (lVar29 = *(longlong *)(pFVar16->Hash + 8) - lVar8, lVar29 == 0)) {
    lVar29 = *(uint *)(pFVar16->Hash + 0x10) - uVar28;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1330);
  if (lVar29 != 0) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_c38,L"Condition failed");
    (*pcVar7)(pFVar6,&local_c38);
    if (local_c38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c38.Data.AllocatorInstance.Data);
    }
  }
  FCbAttachment::~FCbAttachment(&local_340);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar6 = pFVar15->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x50);
  ::FString::FString(&local_c28,L"Compressed Binary Empty");
  (*pcVar7)(pFVar6,&local_c28,0,0);
  if (local_c28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c28.Data.AllocatorInstance.Data);
  }
  FVar26 = FUniqueBuffer::Alloc((ulong64)&local_1320);
  FVar17 = FUniqueBuffer::MoveToShared((FUniqueBuffer *)FVar26.Owner.Owner);
  pFVar27 = FCompressedBuffer::Compress(&local_2a0,(FSharedBuffer *)FVar17.Owner.Owner);
  FCompressedBuffer::MakeOwned(pFVar27,(FCompressedBuffer *)local_418);
  FCompressedBuffer::GetRawHash((FCompressedBuffer *)local_418,(FIoHash *)(local_418 + 0x18));
  local_3e8 = '\x03';
  if (local_418._16_4_ == 0) {
    TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
    ::Emplace<std::nullptr_t>
              ((TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
                *)local_418);
  }
  FCompositeBuffer::~FCompositeBuffer(&local_2a0.CompressedData);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1328);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1320);
  bVar12 = FCbAttachment::IsNull((FCbAttachment *)local_418);
  if (bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_c18,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_c18);
    if (local_c18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c18.Data.AllocatorInstance.Data);
    }
  }
  bVar12 = FCbAttachment::IsBinary((FCbAttachment *)local_418);
  if (bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_c08,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_c08);
    if (local_c08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c08.Data.AllocatorInstance.Data);
    }
  }
  bVar12 = FCbAttachment::IsCompressedBinary((FCbAttachment *)local_418);
  if (!bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_bf8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_bf8);
    if (local_bf8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bf8.Data.AllocatorInstance.Data);
    }
  }
  bVar12 = FCbAttachment::IsObject((FCbAttachment *)local_418);
  if (bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_be8,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_be8);
    if (local_be8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_be8.Data.AllocatorInstance.Data);
    }
  }
  local_1318.Owner = (FBufferOwner *)0x0;
  local_bd8.Data = (void *)0x0;
  local_1218 = 0;
  local_bd8.Size = 0;
  local_1228 = 0;
  lStack_1220 = 0;
  pFVar18 = FBlake3::HashBuffer(&local_a0,&local_bd8);
  lVar29 = *(longlong *)pFVar18->Hash;
  lVar8 = *(longlong *)(pFVar18->Hash + 8);
  local_1218 = *(uint *)(pFVar18->Hash + 0x10);
  uVar28 = (ulonglong)local_1218;
  local_1228 = lVar29;
  lStack_1220 = lVar8;
  pFVar16 = FCbAttachment::GetHash((FCbAttachment *)local_418,&local_198);
  lVar29 = *(longlong *)pFVar16->Hash - lVar29;
  if ((lVar29 == 0) && (lVar29 = *(longlong *)(pFVar16->Hash + 8) - lVar8, lVar29 == 0)) {
    lVar29 = *(uint *)(pFVar16->Hash + 0x10) - uVar28;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1318);
  if (lVar29 != 0) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_bc8,L"Condition failed");
    (*pcVar7)(pFVar6,&local_bc8);
    if (local_bc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bc8.Data.AllocatorInstance.Data);
    }
  }
  FCbAttachment::~FCbAttachment((FCbAttachment *)local_418);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar6 = pFVar15->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x50);
  ::FString::FString(&local_bb8,L"Object Empty");
  (*pcVar7)(pFVar6,&local_bb8,0,0);
  if (local_bb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bb8.Data.AllocatorInstance.Data);
  }
  local_1298._0_8_ = 0;
  local_1298._8_8_ = 0;
  local_1288.Owner = (FBufferOwner *)0x0;
  FCbObjectView::FCbObjectView((FCbObjectView *)local_1298);
  local_1288.Owner = (FBufferOwner *)0x0;
  FCbAttachment::FObjectValue::FObjectValue
            ((FObjectValue *)&local_378,(FCbObject *)local_1298,(FIoHash *)0x0);
  local_378.Value.TypeIndex = '\x01';
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1288);
  bVar12 = FCbAttachment::IsNull(&local_378);
  if (bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_ba8,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_ba8,0);
    if (local_ba8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ba8.Data.AllocatorInstance.Data);
    }
  }
  bVar12 = FCbAttachment::IsBinary(&local_378);
  if (bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_b98,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_b98,0);
    if (local_b98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b98.Data.AllocatorInstance.Data);
    }
  }
  bVar12 = FCbAttachment::IsCompressedBinary(&local_378);
  if (bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_b88,L"Condition expected to return false but returned true");
    (*pcVar7)(pFVar6,&local_b88,0);
    if (local_b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b88.Data.AllocatorInstance.Data);
    }
  }
  bVar12 = FCbAttachment::IsObject(&local_378);
  if (!bVar12) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_b78,L"Condition failed");
    (*pcVar7)(pFVar6,&local_b78,0);
    if (local_b78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b78.Data.AllocatorInstance.Data);
    }
  }
  local_1280._0_8_ = 0;
  local_1280._8_8_ = 0;
  local_1270.Owner = (FBufferOwner *)0x0;
  FCbObjectView::FCbObjectView(&local_1280);
  local_1270.Owner = (FBufferOwner *)0x0;
  pFVar16 = FCbObjectView::GetHash(&local_1280,&local_260);
  pFVar22 = FCbAttachment::GetHash(&local_378,&local_274);
  lVar29 = *(longlong *)pFVar22->Hash - *(longlong *)pFVar16->Hash;
  if ((lVar29 == 0) &&
     (lVar29 = *(longlong *)(pFVar22->Hash + 8) - *(longlong *)(pFVar16->Hash + 8), lVar29 == 0)) {
    lVar29 = (ulonglong)*(uint *)(pFVar22->Hash + 0x10) - (ulonglong)*(uint *)(pFVar16->Hash + 0x10)
    ;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1270);
  if (lVar29 != 0) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar6 = pFVar15->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_b68,L"Condition failed");
    (*pcVar7)(pFVar6,&local_b68,0);
    if (local_b68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b68.Data.AllocatorInstance.Data);
    }
  }
  FCbAttachment::~FCbAttachment(&local_378);
  return;
}

