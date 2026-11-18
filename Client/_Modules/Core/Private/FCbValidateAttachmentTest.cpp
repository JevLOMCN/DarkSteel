// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cbed70

EAutomationTestFlags __thiscall
FCbValidateAttachmentTest::GetTestFlags(FCbValidateAttachmentTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cbed80

bool __thiscall FCbValidateAttachmentTest::IsStressTest(FCbValidateAttachmentTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cbed90

uint __thiscall FCbValidateAttachmentTest::GetRequiredDeviceNum(FCbValidateAttachmentTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cbedb0

FString * __thiscall
FCbValidateAttachmentTest::GetTestSourceFileName
          (FCbValidateAttachmentTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\CompactBinaryValidationTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cbedf0

int __thiscall FCbValidateAttachmentTest::GetTestSourceFileLine(FCbValidateAttachmentTest *this)

{
  return 0x13e;
}

// GetTests @ 141cbee50

/* WARNING: Removing unreachable block (ram,0x000141cbefce) */

void __thiscall
FCbValidateAttachmentTest::GetTests
          (FCbValidateAttachmentTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cbf190

bool __thiscall FCbValidateAttachmentTest::RunTest(FCbValidateAttachmentTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cbf1c0

FString * __thiscall
FCbValidateAttachmentTest::GetBeautifiedTestName
          (FCbValidateAttachmentTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCbValidateAttachmentTest @ 141ce3e90

FCbValidateAttachmentTest * __thiscall
FCbValidateAttachmentTest::FCbValidateAttachmentTest
          (FCbValidateAttachmentTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCbValidateAttachmentTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Serialization::ValidateCompactBinaryAttachment");
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

// TestBody @ 141d059e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCbValidateAttachmentTest::TestBody(FCbValidateAttachmentTest *this,FString *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  FAutomationTestBase *pFVar6;
  code *pcVar7;
  undefined4 *puVar8;
  bool bVar9;
  ECbValidateError EVar10;
  int iVar11;
  FAutomationTestFramework *pFVar12;
  FSharedBuffer FVar13;
  FBlake3Hash *pFVar14;
  FCbFieldIterator *this_00;
  FCbObject *pFVar15;
  ulong64 uVar16;
  FCbWriter *pFVar17;
  int iVar18;
  ulonglong uVar19;
  undefined1 auStackY_bc8 [32];
  undefined1 local_b98 [4];
  undefined2 local_b94 [2];
  undefined2 local_b90;
  undefined1 local_b8e;
  undefined2 local_b8c;
  undefined1 local_b8a;
  undefined4 local_b88 [2];
  undefined8 local_b80;
  undefined8 local_b78;
  undefined8 local_b70;
  byte local_b68;
  undefined1 uStack_b67;
  undefined2 uStack_b66;
  undefined4 uStack_b64;
  longlong lStack_b60;
  FArchiveState local_b58;
  undefined8 local_ac8;
  ForAnyElementType *local_ac0;
  undefined8 local_ab8;
  ForAnyElementType local_ab0;
  int local_aa8 [4];
  FArchiveState local_a98;
  undefined8 local_a08;
  ForAnyElementType *local_a00;
  undefined8 local_9f8;
  ForAnyElementType local_9f0;
  int local_9e8 [4];
  FCbObjectView local_9d8;
  longlong *local_9c8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_9c0;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_9b8;
  undefined1 local_9b0 [8];
  TCbFieldIterator<FCbField> local_9a8;
  TMemoryView<void_const_> local_988;
  FString local_978;
  undefined1 *local_968;
  undefined8 local_960;
  TMemoryView<void_const_> local_958;
  FString local_948;
  TMemoryView<void_const_> local_938;
  FString local_928;
  TMemoryView<void_const_> local_918;
  FString local_908;
  TMemoryView<void_const_> local_8f8;
  FString local_8e8;
  TMemoryView<void_const_> local_8d8;
  FString local_8c8;
  FScriptContainerElement *local_8b8;
  ulonglong uStack_8b0;
  FString local_8a8;
  FScriptContainerElement *local_898;
  ulonglong uStack_890;
  FString local_888;
  FScriptContainerElement *local_878;
  ulonglong uStack_870;
  FString local_868;
  char *local_858;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  TMemoryView<void_const_> local_848;
  FString local_838;
  TMemoryView<void_const_> local_828;
  FString local_818;
  TMemoryView<void_const_> local_808;
  FString local_7f8;
  TMemoryView<void_const_> local_7e8;
  FString local_7d8;
  TMemoryView<void_const_> local_7c8;
  FString local_7b8;
  FScriptContainerElement *local_7a8;
  ulonglong uStack_7a0;
  FString local_798;
  FScriptContainerElement *local_788;
  ulonglong uStack_780;
  FString local_778;
  FScriptContainerElement *local_768;
  ulonglong uStack_760;
  FString local_758;
  TMemoryView<void_const_> local_748;
  FString local_738;
  TMemoryView<void_const_> local_728;
  FString local_718;
  TMemoryView<void_const_> local_708;
  FString local_6f8;
  undefined4 *local_6e8;
  ulong64 uStack_6e0;
  undefined *local_6d8;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  TMemoryView<void_const_> local_6c8;
  FString local_6b8;
  TMemoryView<void_const_> local_6a8;
  FString local_698;
  undefined *local_688;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  TMemoryView<void_const_> local_678;
  FString local_668;
  TMemoryView<void_const_> local_658;
  FString local_648;
  TMemoryView<void_const_> local_638;
  FString local_628;
  TMemoryView<void_const_> local_618;
  FString local_608;
  FArchiveState local_5f8;
  undefined8 local_568;
  void **local_560;
  undefined8 local_558;
  void *local_550;
  undefined8 local_548;
  TMemoryView<void_const_> local_538;
  TMemoryView<void_const_> local_528;
  TMemoryView<void_const_> local_518;
  TMemoryView<void_const_> local_508;
  TStringView<char8_t> local_4f8;
  TStringView<char8_t> local_4e8;
  TMemoryView<void_const_> local_4d8;
  TMemoryView<void_const_> local_4c8;
  TMemoryView<void_const_> local_4b8;
  FCbWriter local_4a8;
  FCbWriter local_480;
  TMemoryView<void_const_> local_458;
  TStringView<char8_t> local_448;
  undefined1 local_438 [24];
  undefined1 local_420 [40];
  undefined1 local_3f8 [176];
  int local_348;
  undefined1 local_338 [176];
  int local_288;
  FIoHash local_278;
  FIoHash local_264;
  TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
  local_250;
  FCbAttachment local_218;
  FBlake3Hash local_1e0;
  FBlake3Hash local_1c0;
  FBlake3Hash local_1a0;
  FCbWriter local_178 [7];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_bc8;
  local_b88[0] = 0x3020100;
  uStack_6e0 = 4;
  local_6e8 = local_b88;
  pFVar12 = FAutomationTestFramework::Get();
  local_638.Size = 2;
  pFVar6 = pFVar12->CurrentTest;
  local_638.Data = local_b94;
  local_b94[0] = 6;
  EVar10 = ValidateCompactBinaryAttachment(&local_638,PackageHash|Padding|Format|Names|Default);
  if (EVar10 != None) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_628,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_628,0);
    if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_628.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FAutomationTestFramework::Get();
  local_618.Size = 3;
  pFVar6 = pFVar12->CurrentTest;
  local_618.Data = &local_b90;
  local_b90 = 6;
  local_b8e = 0;
  EVar10 = ValidateCompactBinaryAttachment(&local_618,PackageHash|Padding|Format|Names|Default);
  if (EVar10 != Padding) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_608,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_608,0);
    if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_608.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FAutomationTestFramework::Get();
  local_988.Size = 3;
  pFVar6 = pFVar12->CurrentTest;
  local_988.Data = &local_b8c;
  local_b8c = 6;
  local_b8a = 0;
  EVar10 = ValidateCompactBinaryAttachment(&local_988,PackageHash|Format|Names|Default);
  if (EVar10 != None) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_978,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_978,0);
    if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_978.Data.AllocatorInstance.Data);
    }
  }
  local_b80 = 0;
  local_b58._padding_ = 0;
  local_b58.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_b58.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_b58.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_b58.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_b58._40_8_ = 0;
  local_b58.ArSerializingDefaults = 0;
  local_b58.ArPortFlags = 0;
  local_b58.ArMaxSerializeSize = 0;
  local_b58.ArUEVer.FileVersionUE4 = 0;
  local_b58.ArUEVer.FileVersionUE5 = 0;
  local_b58.ArLicenseeUEVer = 0;
  local_b58.ArEngineVer.Major = 0;
  local_b58.ArEngineVer.Minor = 0;
  local_b58.ArEngineVer.Patch = 0;
  local_b58.ArEngineVer._6_2_ = 0;
  local_b58.ArEngineVer.Changelist = 0;
  local_b58.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_b58.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_b58.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_b58.SerializedProperty = (FProperty *)0x0;
  local_b58.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_b58.bCustomVersionsAreReset = false;
  local_b58._129_7_ = 0;
  local_b58.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_b58);
  local_ac8 = 0;
  local_b58._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_ac0 = &local_ab0;
  local_ab8 = 0;
  FArchiveState::SetIsSaving(&local_b58,true);
  (**(code **)(local_b58._padding_ + 0x108))(&local_b58,0);
  local_968 = local_b98;
  local_ab0.Data = (FScriptContainerElement *)0x0;
  local_aa8[0] = 0;
  local_aa8[1] = 0;
  local_b58._padding_ = (longlong)&___7FBufferArchive__6B_;
  local_b98[0] = 0;
  local_960 = 1;
  FVar13 = FSharedBuffer::MakeView((TMemoryView<void_const_> *)local_9b0);
  FVar13 = FSharedBuffer::MakeOwned((FSharedBuffer *)FVar13.Owner.Owner);
  FVar13 = FSharedBuffer::MakeOwned((FSharedBuffer *)FVar13.Owner.Owner);
  FCompositeBuffer::FCompositeBuffer<FSharedBuffer,0>
            ((FCompositeBuffer *)&local_250,(FSharedBuffer *)FVar13.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_9c0);
  pFVar14 = FBlake3::HashBuffer(&local_1e0,(FCompositeBuffer *)&local_250);
  local_250._padding_ = *(longlong *)pFVar14->Hash;
  local_250._padding_ = *(longlong *)(pFVar14->Hash + 8);
  local_250._padding_._0_4_ = *(undefined4 *)(pFVar14->Hash + 0x10);
  local_250.TypeIndex = 2;
  if ((int)local_250._padding_ == 0) {
    TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
    ::Emplace<std::nullptr_t>(&local_250);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_9b8);
  FCbAttachment::Save((FCbAttachment *)&local_250,(FArchive *)&local_b58);
  uVar19 = (ulonglong)local_250.TypeIndex;
  if ((3 < local_250.TypeIndex) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar19] ==
      UE::Core::Private::TDestructorCaller<FCbAttachment::FBinaryValue>::Destruct) {
    FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)&local_250);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar19])();
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_9b0);
  pFVar12 = FAutomationTestFramework::Get();
  pFVar6 = pFVar12->CurrentTest;
  local_958.Data = local_ab0.Data;
  local_958.Size = (ulong64)local_aa8[0];
  EVar10 = ValidateCompactBinaryAttachment(&local_958,All);
  if (EVar10 != None) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_948,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_948,0);
    if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_948.Data.AllocatorInstance.Data);
    }
  }
  if ((local_aa8[0] < 3) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_ab0.Data[2] = (FScriptContainerElement)((char)local_ab0.Data[2] + '\x01');
  pFVar12 = FAutomationTestFramework::Get();
  pFVar6 = pFVar12->CurrentTest;
  local_938.Data = local_ab0.Data;
  local_938.Size = (ulong64)local_aa8[0];
  EVar10 = ValidateCompactBinaryAttachment(&local_938,All);
  if (EVar10 != InvalidPackageHash) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_928,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_928,0);
    if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_928.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FAutomationTestFramework::Get();
  pFVar6 = pFVar12->CurrentTest;
  local_918.Data = local_ab0.Data;
  local_918.Size = (ulong64)local_aa8[0];
  EVar10 = ValidateCompactBinaryAttachment(&local_918,Package|Padding|Format|Names|Default);
  if (EVar10 != None) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_908,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_908,0);
    if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_908.Data.AllocatorInstance.Data);
    }
  }
  if ((local_aa8[0] < 3) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_ab0.Data[2] = (FScriptContainerElement)((char)local_ab0.Data[2] + -1);
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,1,&local_ab0,local_aa8,local_aa8 + 1);
  local_ab0.Data[iVar11] = (FScriptContainerElement)0x0;
  pFVar12 = FAutomationTestFramework::Get();
  pFVar6 = pFVar12->CurrentTest;
  local_8f8.Data = local_ab0.Data;
  local_8f8.Size = (ulong64)local_aa8[0];
  EVar10 = ValidateCompactBinaryAttachment(&local_8f8,All);
  if (EVar10 != Padding) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_8e8,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_8e8);
    if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FAutomationTestFramework::Get();
  pFVar6 = pFVar12->CurrentTest;
  local_8d8.Data = local_ab0.Data;
  local_8d8.Size = (ulong64)local_aa8[0];
  EVar10 = ValidateCompactBinaryAttachment(&local_8d8,PackageHash|Package|Format|Names|Default);
  if (EVar10 != None) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_8c8,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_8c8);
    if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
    }
  }
  if (local_aa8[0] < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = ~(local_aa8[0] - 1U) + local_aa8[0];
  iVar11 = local_aa8[0];
  if (iVar18 != 0) {
    memmove(local_ab0.Data + (int)(local_aa8[0] - 1U),local_ab0.Data + (int)(local_aa8[0] - 1U) + 1,
            (longlong)iVar18);
    iVar11 = local_aa8[0];
  }
  local_aa8[0] = iVar11 + -1;
  pFVar12 = FAutomationTestFramework::Get();
  pFVar6 = pFVar12->CurrentTest;
  local_8b8 = local_ab0.Data;
  uStack_8b0 = (ulonglong)(local_aa8[0] != 0);
  local_4c8.Data = local_ab0.Data;
  local_4c8.Size = uStack_8b0;
  EVar10 = ValidateCompactBinaryAttachment(&local_4c8,All);
  if (EVar10 != OutOfBounds) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_8a8,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_8a8);
    if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FAutomationTestFramework::Get();
  pFVar6 = pFVar12->CurrentTest;
  local_898 = local_ab0.Data;
  uStack_890 = 4;
  if ((ulonglong)(longlong)local_aa8[0] < 4) {
    uStack_890 = (longlong)local_aa8[0];
  }
  local_4b8.Data = local_ab0.Data;
  local_4b8.Size = uStack_890;
  EVar10 = ValidateCompactBinaryAttachment(&local_4b8,All);
  if (EVar10 != OutOfBounds) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_888,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6);
    if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_888.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FAutomationTestFramework::Get();
  pFVar6 = pFVar12->CurrentTest;
  local_878 = local_ab0.Data;
  uStack_870 = 4;
  if ((ulonglong)(longlong)local_aa8[0] < 4) {
    uStack_870 = (longlong)local_aa8[0];
  }
  local_458.Data = local_ab0.Data;
  local_458.Size = uStack_870;
  EVar10 = ValidateCompactBinaryAttachment(&local_458,None);
  if (EVar10 != None) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_868,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_868);
    if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_868.Data.AllocatorInstance.Data);
    }
  }
  if (local_ab0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ab0.Data);
  }
  FArchive::~FArchive((FArchive *)&local_b58);
  FCbWriter::FCbWriter(local_178,0x100);
  FCbWriter::BeginObject(local_178);
  uStack_850 = 1;
  local_858 = "N";
  local_448._12_4_ = uStack_84c;
  local_448.Size = 1;
  local_448.DataPtr = "N";
  FCbWriter::SetName(local_178,&local_448);
  FCbWriter::AddNull(local_178);
  FCbWriter::EndObject(local_178);
  local_b78 = 0;
  local_a98._padding_ = 0;
  local_a98.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_a98.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_a98.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_a98.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_a98._40_8_ = 0;
  local_a98.ArSerializingDefaults = 0;
  local_a98.ArPortFlags = 0;
  local_a98.ArMaxSerializeSize = 0;
  local_a98.ArUEVer.FileVersionUE4 = 0;
  local_a98.ArUEVer.FileVersionUE5 = 0;
  local_a98.ArLicenseeUEVer = 0;
  local_a98.ArEngineVer.Major = 0;
  local_a98.ArEngineVer.Minor = 0;
  local_a98.ArEngineVer.Patch = 0;
  local_a98.ArEngineVer._6_2_ = 0;
  local_a98.ArEngineVer.Changelist = 0;
  local_a98.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_a98.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_a98.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_a98.SerializedProperty = (FProperty *)0x0;
  local_a98.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_a98.bCustomVersionsAreReset = false;
  local_a98._129_7_ = 0;
  local_a98.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_a98);
  local_a08 = 0;
  local_a98._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_a00 = &local_9f0;
  local_9f8 = 0;
  FArchiveState::SetIsSaving(&local_a98,true);
  (**(code **)(local_a98._padding_ + 0x108))(&local_a98,0);
  local_9f0.Data = (FScriptContainerElement *)0x0;
  local_9e8[0] = 0;
  local_9e8[1] = 0;
  local_a98._padding_ = (longlong)&___7FBufferArchive__6B_;
  this_00 = FCbWriter::Save(local_178,(FCbFieldIterator *)local_420);
  pFVar15 = FCbField::AsObject((FCbField *)this_00,(FCbObject *)local_438);
  FCbAttachment::FObjectValue::FObjectValue((FObjectValue *)&local_218,pFVar15,(FIoHash *)0x0);
  local_218.Value.TypeIndex = 1;
  FCbAttachment::Save(&local_218,(FArchive *)&local_a98);
  uVar19 = (ulonglong)local_218.Value.TypeIndex;
  if ((3 < local_218.Value.TypeIndex) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar19] ==
      UE::Core::Private::TDestructorCaller<FCbAttachment::FObjectValue>::Destruct) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_218.Value._padding_)
    ;
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar19])(&local_218);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_438 + 0x10));
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_420 + 0x10));
  pFVar12 = FAutomationTestFramework::Get();
  pFVar6 = pFVar12->CurrentTest;
  local_848.Data = local_9f0.Data;
  local_848.Size = (ulong64)local_9e8[0];
  EVar10 = ValidateCompactBinaryAttachment(&local_848,All);
  if (EVar10 != None) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_838,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_838,0);
    if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_838.Data.AllocatorInstance.Data);
    }
  }
  if ((local_9e8[0] < 3) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_9f0.Data[2] = (FScriptContainerElement)((char)local_9f0.Data[2] + '\x01');
  pFVar12 = FAutomationTestFramework::Get();
  pFVar6 = pFVar12->CurrentTest;
  local_828.Data = local_9f0.Data;
  local_828.Size = (ulong64)local_9e8[0];
  EVar10 = ValidateCompactBinaryAttachment(&local_828,All);
  if (EVar10 != InvalidPackageHash) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_818,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_818,0);
    if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_818.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FAutomationTestFramework::Get();
  pFVar6 = pFVar12->CurrentTest;
  local_808.Data = local_9f0.Data;
  local_808.Size = (ulong64)local_9e8[0];
  EVar10 = ValidateCompactBinaryAttachment(&local_808,Package|Padding|Format|Names|Default);
  if (EVar10 != None) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_7f8,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_7f8,0);
    if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_9e8[0] < 3) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_9f0.Data[2] = (FScriptContainerElement)((char)local_9f0.Data[2] + -1);
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,1,&local_9f0,local_9e8,local_9e8 + 1);
  local_9f0.Data[iVar11] = (FScriptContainerElement)0x0;
  pFVar12 = FAutomationTestFramework::Get();
  pFVar6 = pFVar12->CurrentTest;
  local_7e8.Data = local_9f0.Data;
  local_7e8.Size = (ulong64)local_9e8[0];
  EVar10 = ValidateCompactBinaryAttachment(&local_7e8,All);
  if (EVar10 != Padding) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_7d8,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_7d8,0);
    if (local_7d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7d8.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FAutomationTestFramework::Get();
  pFVar6 = pFVar12->CurrentTest;
  local_7c8.Data = local_9f0.Data;
  local_7c8.Size = (ulong64)local_9e8[0];
  EVar10 = ValidateCompactBinaryAttachment(&local_7c8,PackageHash|Package|Format|Names|Default);
  if (EVar10 != None) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_7b8,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_7b8,0);
    if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_9e8[0] < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = ~(local_9e8[0] - 1U) + local_9e8[0];
  iVar11 = local_9e8[0];
  if (iVar18 != 0) {
    memmove(local_9f0.Data + (int)(local_9e8[0] - 1U),local_9f0.Data + (int)(local_9e8[0] - 1U) + 1,
            (longlong)iVar18);
    iVar11 = local_9e8[0];
  }
  local_9e8[0] = iVar11 + -1;
  pFVar12 = FAutomationTestFramework::Get();
  pFVar6 = pFVar12->CurrentTest;
  local_7a8 = local_9f0.Data;
  uStack_7a0 = (ulonglong)(local_9e8[0] != 0);
  local_538.Data = local_9f0.Data;
  local_538.Size = uStack_7a0;
  EVar10 = ValidateCompactBinaryAttachment(&local_538,All);
  if (EVar10 != OutOfBounds) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_798,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_798,0);
    if (local_798.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_798.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FAutomationTestFramework::Get();
  pFVar6 = pFVar12->CurrentTest;
  local_788 = local_9f0.Data;
  uStack_780 = 8;
  if ((ulonglong)(longlong)local_9e8[0] < 8) {
    uStack_780 = (longlong)local_9e8[0];
  }
  local_528.Data = local_9f0.Data;
  local_528.Size = uStack_780;
  EVar10 = ValidateCompactBinaryAttachment(&local_528,All);
  if (EVar10 != OutOfBounds) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_778,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_778,0);
    if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_778.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FAutomationTestFramework::Get();
  pFVar6 = pFVar12->CurrentTest;
  uStack_760 = 8;
  if ((ulonglong)(longlong)local_9e8[0] < 8) {
    uStack_760 = (longlong)local_9e8[0];
  }
  local_768 = local_9f0.Data;
  local_518.Data = local_9f0.Data;
  local_518.Size = uStack_760;
  EVar10 = ValidateCompactBinaryAttachment(&local_518,None);
  if (EVar10 != None) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_758,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_758,0);
    if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_758.Data.AllocatorInstance.Data);
    }
  }
  if (local_9f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9f0.Data);
  }
  FArchive::~FArchive((FArchive *)&local_a98);
  FCbWriter::~FCbWriter(local_178);
  local_b70 = 0;
  local_5f8._padding_ = 0;
  local_5f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_5f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_5f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_5f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_5f8._40_8_ = 0;
  local_5f8.ArSerializingDefaults = 0;
  local_5f8.ArPortFlags = 0;
  local_5f8.ArMaxSerializeSize = 0;
  local_5f8.ArUEVer.FileVersionUE4 = 0;
  local_5f8.ArUEVer.FileVersionUE5 = 0;
  local_5f8.ArLicenseeUEVer = 0;
  local_5f8.ArEngineVer.Major = 0;
  local_5f8.ArEngineVer.Minor = 0;
  local_5f8.ArEngineVer.Patch = 0;
  local_5f8.ArEngineVer._6_2_ = 0;
  local_5f8.ArEngineVer.Changelist = 0;
  local_5f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_5f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_5f8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_5f8.SerializedProperty = (FProperty *)0x0;
  local_5f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_5f8.bCustomVersionsAreReset = false;
  local_5f8._129_7_ = 0;
  local_5f8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_5f8);
  local_568 = 0;
  local_5f8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_560 = &local_550;
  local_558 = 0;
  FArchiveState::SetIsSaving(&local_5f8,true);
  (**(code **)(local_5f8._padding_ + 0x108))(&local_5f8,0);
  local_550 = (void *)0x0;
  local_548 = 0;
  local_9c8 = (longlong *)0x0;
  local_9d8._0_8_ = 0;
  local_9d8._8_8_ = 0;
  local_5f8._padding_ = (longlong)&___7FBufferArchive__6B_;
  FCbObjectView::FCbObjectView(&local_9d8);
  local_b68 = local_9d8._0_1_ & 0x3f;
  uStack_b67 = 0;
  lStack_b60 = local_9d8._8_8_;
  uStack_b64 = 0;
  local_9a8._padding_ = (longlong)CONCAT22(uStack_b66,(ushort)local_b68);
  local_9c8 = (longlong *)0x0;
  local_9a8._padding_ = 0;
  local_9a8._padding_ = local_9d8._8_8_;
  uVar16 = FCbFieldView::GetValueSize((FCbFieldView *)(local_9b0 + 8));
  local_9a8.FieldsEnd = (void *)(uVar16 + local_9a8._padding_);
  TCbFieldIterator<FCbField>::CopyRangeTo
            ((TCbFieldIterator<FCbField> *)(local_9b0 + 8),(FArchive *)&local_5f8);
  lVar5 = local_9a8._padding_;
  if ((longlong *)local_9a8._padding_ != (longlong *)0x0) {
    LOCK();
    plVar1 = (longlong *)(local_9a8._padding_ + 0x18);
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar4 & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_9a8._padding_ + 0x10))(local_9a8._padding_);
      *(longlong *)(lVar5 + 8) = 0;
      *(longlong *)(lVar5 + 0x10) = 0;
      LOCK();
      puVar2 = (ulonglong *)(lVar5 + 0x18);
      uVar19 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar19 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)lVar5)(lVar5,1);
      }
    }
  }
  plVar1 = local_9c8;
  if (local_9c8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_9c8 + 3;
    lVar5 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (((uint)lVar5 & 0x3fffffff) == 1) {
      (**(code **)(*local_9c8 + 0x10))(local_9c8);
      plVar1[1] = 0;
      plVar1[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar1 + 3);
      uVar19 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar19 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar1)(plVar1,1);
      }
    }
  }
  pFVar12 = FAutomationTestFramework::Get();
  pFVar6 = pFVar12->CurrentTest;
  local_748.Data = local_550;
  local_748.Size = (ulong64)(int)local_548;
  EVar10 = ValidateCompactBinaryAttachment(&local_748,All);
  if (EVar10 != None) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_738,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_738,0);
    if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_738.Data.AllocatorInstance.Data);
    }
  }
  if (local_550 != (void *)0x0) {
    FMemory::Free(local_550);
  }
  FArchive::~FArchive((FArchive *)&local_5f8);
  pFVar12 = FAutomationTestFramework::Get();
  local_728.Data = (void *)0x0;
  local_728.Size = 0;
  pFVar6 = pFVar12->CurrentTest;
  EVar10 = ValidateCompactBinaryAttachment(&local_728,All);
  if (EVar10 != InvalidPackageFormat) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_718,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_718,0);
    if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_718.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FAutomationTestFramework::Get();
  local_708.Data = (void *)0x0;
  local_708.Size = 0;
  pFVar6 = pFVar12->CurrentTest;
  EVar10 = ValidateCompactBinaryAttachment(&local_708,PackageHash|Padding|Format|Names|Default);
  if (EVar10 != None) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_6f8,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_6f8,0);
    if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
    }
  }
  FBufferArchive::FBufferArchive((FBufferArchive *)local_3f8);
  FCbWriter::FCbWriter(&local_4a8);
  uVar16 = uStack_6e0;
  puVar8 = local_6e8;
  local_508.Data = local_6e8;
  local_508.Size = uStack_6e0;
  pFVar14 = FBlake3::HashBuffer(&local_1c0,&local_508);
  local_278.Hash._0_8_ = *(undefined8 *)pFVar14->Hash;
  local_278.Hash._8_8_ = *(undefined8 *)(pFVar14->Hash + 8);
  local_278.Hash._16_4_ = *(undefined4 *)(pFVar14->Hash + 0x10);
  FCbWriter::AddBinaryAttachment(&local_4a8,&local_278);
  uStack_6d0 = 4;
  local_6d8 = &s_Name;
  local_4f8._12_4_ = uStack_6cc;
  local_4f8.Size = 4;
  local_4f8.DataPtr = "Name";
  pFVar17 = FCbWriter::SetName(&local_4a8,&local_4f8);
  FCbWriter::AddBinary(pFVar17,local_b88,4);
  FCbWriter::Save(&local_4a8,(FArchive *)local_3f8);
  pFVar12 = FAutomationTestFramework::Get();
  pFVar6 = pFVar12->CurrentTest;
  local_6c8.Data = (void *)local_3f8._168_8_;
  local_6c8.Size = (ulong64)local_348;
  EVar10 = ValidateCompactBinaryAttachment(&local_6c8,All);
  if (EVar10 != InvalidPackageFormat) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_6b8,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_6b8,0);
    if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FAutomationTestFramework::Get();
  pFVar6 = pFVar12->CurrentTest;
  local_6a8.Data = (void *)local_3f8._168_8_;
  local_6a8.Size = (ulong64)local_348;
  EVar10 = ValidateCompactBinaryAttachment(&local_6a8,PackageHash|Padding|Format|Names|Default);
  if (EVar10 != None) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_698,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_698,0);
    if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_698.Data.AllocatorInstance.Data);
    }
  }
  FCbWriter::~FCbWriter(&local_4a8);
  if ((void *)local_3f8._168_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3f8._168_8_);
  }
  FArchive::~FArchive((FArchive *)local_3f8);
  FBufferArchive::FBufferArchive((FBufferArchive *)local_338);
  FCbWriter::FCbWriter(&local_480);
  local_688 = &s_Name;
  uStack_680 = 4;
  local_4e8._12_4_ = uStack_67c;
  local_4e8.Size = 4;
  local_4e8.DataPtr = "Name";
  pFVar17 = FCbWriter::SetName(&local_480,&local_4e8);
  local_4d8.Data = puVar8;
  local_4d8.Size = uVar16;
  pFVar14 = FBlake3::HashBuffer(&local_1a0,&local_4d8);
  local_264.Hash._0_8_ = *(undefined8 *)pFVar14->Hash;
  local_264.Hash._8_8_ = *(undefined8 *)(pFVar14->Hash + 8);
  local_264.Hash._16_4_ = *(undefined4 *)(pFVar14->Hash + 0x10);
  FCbWriter::AddBinaryAttachment(pFVar17,&local_264);
  FCbWriter::AddBinary(&local_480,local_b88,4);
  FCbWriter::Save(&local_480,(FArchive *)local_338);
  pFVar12 = FAutomationTestFramework::Get();
  pFVar6 = pFVar12->CurrentTest;
  local_678.Data = (void *)local_338._168_8_;
  local_678.Size = (ulong64)local_288;
  EVar10 = ValidateCompactBinaryAttachment(&local_678,All);
  if (EVar10 != InvalidPackageFormat) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_668,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_668,0);
    if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_668.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = FAutomationTestFramework::Get();
  pFVar6 = pFVar12->CurrentTest;
  local_658.Data = (void *)local_338._168_8_;
  local_658.Size = (ulong64)local_288;
  EVar10 = ValidateCompactBinaryAttachment(&local_658,PackageHash|Padding|Format|Names|Default);
  if (EVar10 != None) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_648,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_648,0);
    if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_648.Data.AllocatorInstance.Data);
    }
  }
  FCbWriter::~FCbWriter(&local_480);
  if ((void *)local_338._168_8_ != (void *)0x0) {
    FMemory::Free((void *)local_338._168_8_);
  }
  FArchive::~FArchive((FArchive *)local_338);
  return;
}

