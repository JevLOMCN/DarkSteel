// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// GetTestFlags @ 141cb8640

EAutomationTestFlags __thiscall FCbSaveTest::GetTestFlags(FCbSaveTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cb8650

bool __thiscall FCbSaveTest::IsStressTest(FCbSaveTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cb8660

uint __thiscall FCbSaveTest::GetRequiredDeviceNum(FCbSaveTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cb8670

FString * __thiscall
FCbSaveTest::GetTestSourceFileName(FCbSaveTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\CompactBinarySerializationTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cb86a0

int __thiscall FCbSaveTest::GetTestSourceFileLine(FCbSaveTest *this)

{
  return 0x8a;
}

// GetTests @ 141cb86b0

/* WARNING: Removing unreachable block (ram,0x000141cb882e) */

void __thiscall
FCbSaveTest::GetTests
          (FCbSaveTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cb8850

bool __thiscall FCbSaveTest::RunTest(FCbSaveTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cb8880

FString * __thiscall
FCbSaveTest::GetBeautifiedTestName(FCbSaveTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// operator()<FCbArray> @ 141cd8560

void __thiscall
`FCbSaveTest::TestBody'::__l2::<lambda_1>::operator()<FCbArray>
          (void *this,wchar_t *param_1,FCbArray *param_2,TMemoryView<void_const_> *param_3)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FAutomationTestFramework *pFVar9;
  wchar_t *pwVar10;
  void *_Buf2;
  FScriptContainerElement *pFVar11;
  ulong64 uVar12;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar13;
  void *pvVar14;
  void *pvVar15;
  void *_Buf2_00;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1b8 [2];
  FArchiveState local_1a8;
  undefined8 local_118;
  void **local_110;
  undefined8 local_108;
  void *local_100;
  undefined8 local_f8;
  FArchiveState local_e8;
  undefined8 local_58;
  void **local_50;
  undefined8 local_48;
  
  _Buf2_00 = (void *)0x0;
  local_1a8._padding_ = 0;
  local_1a8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_1a8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_1a8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_1a8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_1a8._40_8_ = 0;
  local_1a8.ArSerializingDefaults = 0;
  local_1a8.ArPortFlags = 0;
  local_1a8.ArMaxSerializeSize = 0;
  local_1a8.ArUEVer.FileVersionUE4 = 0;
  local_1a8.ArUEVer.FileVersionUE5 = 0;
  local_1a8.ArLicenseeUEVer = 0;
  local_1a8.ArEngineVer.Major = 0;
  local_1a8.ArEngineVer.Minor = 0;
  local_1a8.ArEngineVer.Patch = 0;
  local_1a8.ArEngineVer._6_2_ = 0;
  local_1a8.ArEngineVer.Changelist = 0;
  local_1a8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_1a8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_1a8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_1a8.SerializedProperty = (FProperty *)0x0;
  local_1a8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_1a8.bCustomVersionsAreReset = false;
  local_1a8._129_7_ = 0;
  local_1a8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_1a8);
  local_118 = 0;
  local_1a8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_110 = &local_100;
  local_108 = 0;
  FArchiveState::SetIsSaving(&local_1a8,true);
  (**(code **)(local_1a8._padding_ + 0x108))(&local_1a8,0);
  local_100 = (void *)0x0;
  local_1a8._padding_ = (longlong)&___7FBufferArchive__6B_;
  local_f8 = 0;
  SaveCompactBinary((FArchive *)&local_1a8,(FCbArrayView *)param_2);
  pFVar1 = *(FAutomationTestBase **)this;
  uVar12 = (ulong64)(int)local_f8;
  ::FString::PrintfImpl((FString *)local_1d8,L"SaveCompactBinary(%s)->Size");
  pwVar10 = L"";
  pvVar15 = (void *)param_3->Size;
  if (local_1d8._8_4_ != 0) {
    pwVar10 = (wchar_t *)local_1d8._0_8_;
  }
  bVar4 = false;
  bVar7 = FAutomationTestBase::TestEqual(pFVar1,pwVar10,uVar12,(ulong64)pvVar15);
  if (bVar7) {
    pFVar1 = *(FAutomationTestBase **)this;
    if ((pvVar15 == (void *)(longlong)(int)local_f8) &&
       ((param_3->Data == local_100 ||
        (iVar8 = memcmp(param_3->Data,local_100,(size_t)pvVar15), iVar8 == 0)))) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    ::FString::PrintfImpl((FString *)local_1c8,L"SaveCompactBinary(%s)->EqualBytes");
    pFVar11 = (FScriptContainerElement *)L"";
    if (local_1c8._8_4_ != 0) {
      pFVar11 = (FScriptContainerElement *)local_1c8._0_8_;
    }
    bVar4 = true;
    bVar7 = FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)pFVar11,bVar7);
    if (!bVar7) goto LAB_141cd86ff;
    bVar6 = true;
LAB_141cd8707:
    bVar7 = bVar6;
    if ((FScriptContainerElement *)local_1c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1c8._0_8_);
    }
  }
  else {
LAB_141cd86ff:
    bVar7 = false;
    bVar6 = false;
    if (bVar4) goto LAB_141cd8707;
  }
  if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1d8._0_8_);
  }
  if (bVar7) {
    local_e8._padding_ = 0;
    local_e8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_e8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_e8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_e8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_e8._40_8_ = 0;
    local_e8.ArSerializingDefaults = 0;
    local_e8.ArPortFlags = 0;
    local_e8.ArMaxSerializeSize = 0;
    local_e8.ArUEVer.FileVersionUE4 = 0;
    local_e8.ArUEVer.FileVersionUE5 = 0;
    local_e8.ArLicenseeUEVer = 0;
    local_e8.ArEngineVer.Major = 0;
    local_e8.ArEngineVer.Minor = 0;
    local_e8.ArEngineVer.Patch = 0;
    local_e8.ArEngineVer._6_2_ = 0;
    local_e8.ArEngineVer.Changelist = 0;
    local_e8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_e8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_e8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_e8.SerializedProperty = (FProperty *)0x0;
    local_e8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_e8.bCustomVersionsAreReset = false;
    local_e8._129_7_ = 0;
    local_e8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_e8);
    local_58 = 0;
    local_48 = 0x7fffffffffffffff;
    local_e8._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_50 = &local_100;
    FArchiveState::SetIsLoading(&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
    local_1d8._8_8_ = FUniqueBuffer::Alloc;
    local_1d8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
         ::Call;
    LoadCompactBinary((FCbField *)local_1c8,(FArchive *)&local_e8,
                      (TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)local_1d8);
    TVar5.Owner = local_1b8[0].Owner;
    TVar13.Owner = local_1b8[0].Owner;
    pvVar14 = _Buf2_00;
    if (local_1b8[0].Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)(local_1b8[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
        (**(code **)((local_1b8[0].Owner)->_padding_ + 8))(local_1b8[0].Owner);
      }
      TVar13.Owner = local_1b8[0].Owner;
      pvVar14 = (void *)(TVar5.Owner)->Size;
    }
    _Buf2 = _Buf2_00;
    if (TVar13.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)(TVar13.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
        (**(code **)((TVar13.Owner)->_padding_ + 8))(TVar13.Owner);
      }
      _Buf2 = (TVar13.Owner)->Data;
    }
    if ((pvVar15 != pvVar14) ||
       ((param_3->Data != _Buf2 && (iVar8 = memcmp(param_3->Data,_Buf2,(size_t)pvVar15), iVar8 != 0)
        ))) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar1 = pFVar9->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl((FString *)local_1d8,L"LoadCompactBinary(%s)->EqualBytes");
      (*pcVar2)(pFVar1,local_1d8,0);
      if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1d8._0_8_);
      }
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_1b8);
    FArchive::~FArchive((FArchive *)&local_e8);
  }
  if (local_100 != (void *)0x0) {
    FMemory::Free(local_100);
  }
  FArchive::~FArchive((FArchive *)&local_1a8);
  local_1a8._padding_ = 0;
  local_1a8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_1a8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_1a8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_1a8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_1a8._40_8_ = 0;
  local_1a8.ArSerializingDefaults = 0;
  local_1a8.ArPortFlags = 0;
  local_1a8.ArMaxSerializeSize = 0;
  local_1a8.ArUEVer.FileVersionUE4 = 0;
  local_1a8.ArUEVer.FileVersionUE5 = 0;
  local_1a8.ArLicenseeUEVer = 0;
  local_1a8.ArEngineVer.Major = 0;
  local_1a8.ArEngineVer.Minor = 0;
  local_1a8.ArEngineVer.Patch = 0;
  local_1a8.ArEngineVer._6_2_ = 0;
  local_1a8.ArEngineVer.Changelist = 0;
  local_1a8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_1a8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_1a8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_1a8.SerializedProperty = (FProperty *)0x0;
  local_1a8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_1a8.bCustomVersionsAreReset = false;
  local_1a8._129_7_ = 0;
  local_1a8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_1a8);
  local_118 = 0;
  local_1a8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_110 = &local_100;
  local_108 = 0;
  FArchiveState::SetIsSaving(&local_1a8,true);
  (**(code **)(local_1a8._padding_ + 0x108))(&local_1a8,0);
  local_100 = (void *)0x0;
  local_1a8._padding_ = (longlong)&___7FBufferArchive__6B_;
  local_f8 = 0;
  ::operator<<((FArchive *)&local_1a8,param_2);
  uVar12 = (ulong64)(int)local_f8;
  bVar4 = false;
  pFVar1 = *(FAutomationTestBase **)this;
  ::FString::PrintfImpl((FString *)local_1c8,L"Ar << CompactBinary Save(%s)->Size");
  pFVar11 = (FScriptContainerElement *)L"";
  if (local_1c8._8_4_ != 0) {
    pFVar11 = (FScriptContainerElement *)local_1c8._0_8_;
  }
  bVar7 = FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)pFVar11,uVar12,(ulong64)pvVar15);
  if (bVar7) {
    pFVar1 = *(FAutomationTestBase **)this;
    if ((pvVar15 == (void *)(longlong)(int)local_f8) &&
       ((param_3->Data == local_100 ||
        (iVar8 = memcmp(param_3->Data,local_100,(size_t)pvVar15), iVar8 == 0)))) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    bVar4 = true;
    ::FString::PrintfImpl((FString *)local_1d8,L"Ar << CompactBinary Save(%s)->EqualBytes");
    pwVar10 = L"";
    if (local_1d8._8_4_ != 0) {
      pwVar10 = (wchar_t *)local_1d8._0_8_;
    }
    bVar7 = FAutomationTestBase::TestTrue(pFVar1,pwVar10,bVar7);
    if (!bVar7) goto LAB_141cd8a2e;
    bVar6 = true;
  }
  else {
LAB_141cd8a2e:
    bVar7 = false;
    bVar6 = false;
    if (!bVar4) goto LAB_141cd8a45;
  }
  bVar7 = bVar6;
  if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1d8._0_8_);
  }
LAB_141cd8a45:
  if ((FScriptContainerElement *)local_1c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1c8._0_8_);
  }
  if (bVar7) {
    local_e8._padding_ = 0;
    local_e8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_e8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_e8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_e8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_e8._40_8_ = 0;
    local_e8.ArSerializingDefaults = 0;
    local_e8.ArPortFlags = 0;
    local_e8.ArMaxSerializeSize = 0;
    local_e8.ArUEVer.FileVersionUE4 = 0;
    local_e8.ArUEVer.FileVersionUE5 = 0;
    local_e8.ArLicenseeUEVer = 0;
    local_e8.ArEngineVer.Major = 0;
    local_e8.ArEngineVer.Minor = 0;
    local_e8.ArEngineVer.Patch = 0;
    local_e8.ArEngineVer._6_2_ = 0;
    local_e8.ArEngineVer.Changelist = 0;
    local_e8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_e8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_e8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_e8.SerializedProperty = (FProperty *)0x0;
    local_e8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_e8.bCustomVersionsAreReset = false;
    local_e8._129_7_ = 0;
    local_e8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_e8);
    local_58 = 0;
    local_e8._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_50 = &local_100;
    local_48 = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading(&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
    ::operator<<((FArchive *)&local_e8,param_2);
    plVar3 = *(longlong **)&param_2->field_0x10;
    pvVar15 = _Buf2_00;
    if (plVar3 != (longlong *)0x0) {
      if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      pvVar15 = (void *)plVar3[2];
    }
    plVar3 = *(longlong **)&param_2->field_0x10;
    if (plVar3 != (longlong *)0x0) {
      if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      _Buf2_00 = (void *)plVar3[1];
    }
    if (((void *)param_3->Size != pvVar15) ||
       ((param_3->Data != _Buf2_00 &&
        (iVar8 = memcmp(param_3->Data,_Buf2_00,(size_t)param_3->Size), iVar8 != 0)))) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar1 = pFVar9->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl((FString *)local_1d8,L"Ar << CompactBinary Load(%s)->EqualBytes");
      (*pcVar2)(pFVar1,local_1d8,0);
      if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1d8._0_8_);
      }
    }
    FArchive::~FArchive((FArchive *)&local_e8);
  }
  if (local_100 != (void *)0x0) {
    FMemory::Free(local_100);
  }
  FArchive::~FArchive((FArchive *)&local_1a8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&param_2->field_0x10);
  return;
}

// operator()<FCbField> @ 141cd8bf0

void __thiscall
`FCbSaveTest::TestBody'::__l2::<lambda_1>::operator()<FCbField>
          (void *this,wchar_t *param_1,FCbField *param_2,TMemoryView<void_const_> *param_3)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FAutomationTestFramework *pFVar9;
  wchar_t *pwVar10;
  void *_Buf2;
  FScriptContainerElement *pFVar11;
  ulong64 uVar12;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar13;
  void *pvVar14;
  void *pvVar15;
  void *_Buf2_00;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1b8 [2];
  FArchiveState local_1a8;
  undefined8 local_118;
  void **local_110;
  undefined8 local_108;
  void *local_100;
  undefined8 local_f8;
  FArchiveState local_e8;
  undefined8 local_58;
  void **local_50;
  undefined8 local_48;
  
  _Buf2_00 = (void *)0x0;
  local_1a8._padding_ = 0;
  local_1a8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_1a8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_1a8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_1a8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_1a8._40_8_ = 0;
  local_1a8.ArSerializingDefaults = 0;
  local_1a8.ArPortFlags = 0;
  local_1a8.ArMaxSerializeSize = 0;
  local_1a8.ArUEVer.FileVersionUE4 = 0;
  local_1a8.ArUEVer.FileVersionUE5 = 0;
  local_1a8.ArLicenseeUEVer = 0;
  local_1a8.ArEngineVer.Major = 0;
  local_1a8.ArEngineVer.Minor = 0;
  local_1a8.ArEngineVer.Patch = 0;
  local_1a8.ArEngineVer._6_2_ = 0;
  local_1a8.ArEngineVer.Changelist = 0;
  local_1a8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_1a8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_1a8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_1a8.SerializedProperty = (FProperty *)0x0;
  local_1a8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_1a8.bCustomVersionsAreReset = false;
  local_1a8._129_7_ = 0;
  local_1a8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_1a8);
  local_118 = 0;
  local_1a8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_110 = &local_100;
  local_108 = 0;
  FArchiveState::SetIsSaving(&local_1a8,true);
  (**(code **)(local_1a8._padding_ + 0x108))(&local_1a8,0);
  local_100 = (void *)0x0;
  local_1a8._padding_ = (longlong)&___7FBufferArchive__6B_;
  local_f8 = 0;
  SaveCompactBinary((FArchive *)&local_1a8,(FCbFieldView *)param_2);
  pFVar1 = *(FAutomationTestBase **)this;
  uVar12 = (ulong64)(int)local_f8;
  ::FString::PrintfImpl((FString *)local_1d8,L"SaveCompactBinary(%s)->Size");
  pwVar10 = L"";
  pvVar15 = (void *)param_3->Size;
  if (local_1d8._8_4_ != 0) {
    pwVar10 = (wchar_t *)local_1d8._0_8_;
  }
  bVar4 = false;
  bVar7 = FAutomationTestBase::TestEqual(pFVar1,pwVar10,uVar12,(ulong64)pvVar15);
  if (bVar7) {
    pFVar1 = *(FAutomationTestBase **)this;
    if ((pvVar15 == (void *)(longlong)(int)local_f8) &&
       ((param_3->Data == local_100 ||
        (iVar8 = memcmp(param_3->Data,local_100,(size_t)pvVar15), iVar8 == 0)))) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    ::FString::PrintfImpl((FString *)local_1c8,L"SaveCompactBinary(%s)->EqualBytes");
    pFVar11 = (FScriptContainerElement *)L"";
    if (local_1c8._8_4_ != 0) {
      pFVar11 = (FScriptContainerElement *)local_1c8._0_8_;
    }
    bVar4 = true;
    bVar7 = FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)pFVar11,bVar7);
    if (!bVar7) goto LAB_141cd8d8f;
    bVar6 = true;
LAB_141cd8d97:
    bVar7 = bVar6;
    if ((FScriptContainerElement *)local_1c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1c8._0_8_);
    }
  }
  else {
LAB_141cd8d8f:
    bVar7 = false;
    bVar6 = false;
    if (bVar4) goto LAB_141cd8d97;
  }
  if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1d8._0_8_);
  }
  if (bVar7) {
    local_e8._padding_ = 0;
    local_e8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_e8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_e8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_e8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_e8._40_8_ = 0;
    local_e8.ArSerializingDefaults = 0;
    local_e8.ArPortFlags = 0;
    local_e8.ArMaxSerializeSize = 0;
    local_e8.ArUEVer.FileVersionUE4 = 0;
    local_e8.ArUEVer.FileVersionUE5 = 0;
    local_e8.ArLicenseeUEVer = 0;
    local_e8.ArEngineVer.Major = 0;
    local_e8.ArEngineVer.Minor = 0;
    local_e8.ArEngineVer.Patch = 0;
    local_e8.ArEngineVer._6_2_ = 0;
    local_e8.ArEngineVer.Changelist = 0;
    local_e8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_e8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_e8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_e8.SerializedProperty = (FProperty *)0x0;
    local_e8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_e8.bCustomVersionsAreReset = false;
    local_e8._129_7_ = 0;
    local_e8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_e8);
    local_58 = 0;
    local_48 = 0x7fffffffffffffff;
    local_e8._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_50 = &local_100;
    FArchiveState::SetIsLoading(&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
    local_1d8._8_8_ = FUniqueBuffer::Alloc;
    local_1d8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
         ::Call;
    LoadCompactBinary((FCbField *)local_1c8,(FArchive *)&local_e8,
                      (TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)local_1d8);
    TVar5.Owner = local_1b8[0].Owner;
    TVar13.Owner = local_1b8[0].Owner;
    pvVar14 = _Buf2_00;
    if (local_1b8[0].Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)(local_1b8[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
        (**(code **)((local_1b8[0].Owner)->_padding_ + 8))(local_1b8[0].Owner);
      }
      TVar13.Owner = local_1b8[0].Owner;
      pvVar14 = (void *)(TVar5.Owner)->Size;
    }
    _Buf2 = _Buf2_00;
    if (TVar13.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)(TVar13.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
        (**(code **)((TVar13.Owner)->_padding_ + 8))(TVar13.Owner);
      }
      _Buf2 = (TVar13.Owner)->Data;
    }
    if ((pvVar15 != pvVar14) ||
       ((param_3->Data != _Buf2 && (iVar8 = memcmp(param_3->Data,_Buf2,(size_t)pvVar15), iVar8 != 0)
        ))) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar1 = pFVar9->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl((FString *)local_1d8,L"LoadCompactBinary(%s)->EqualBytes");
      (*pcVar2)(pFVar1,local_1d8,0);
      if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1d8._0_8_);
      }
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_1b8);
    FArchive::~FArchive((FArchive *)&local_e8);
  }
  if (local_100 != (void *)0x0) {
    FMemory::Free(local_100);
  }
  FArchive::~FArchive((FArchive *)&local_1a8);
  local_1a8._padding_ = 0;
  local_1a8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_1a8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_1a8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_1a8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_1a8._40_8_ = 0;
  local_1a8.ArSerializingDefaults = 0;
  local_1a8.ArPortFlags = 0;
  local_1a8.ArMaxSerializeSize = 0;
  local_1a8.ArUEVer.FileVersionUE4 = 0;
  local_1a8.ArUEVer.FileVersionUE5 = 0;
  local_1a8.ArLicenseeUEVer = 0;
  local_1a8.ArEngineVer.Major = 0;
  local_1a8.ArEngineVer.Minor = 0;
  local_1a8.ArEngineVer.Patch = 0;
  local_1a8.ArEngineVer._6_2_ = 0;
  local_1a8.ArEngineVer.Changelist = 0;
  local_1a8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_1a8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_1a8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_1a8.SerializedProperty = (FProperty *)0x0;
  local_1a8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_1a8.bCustomVersionsAreReset = false;
  local_1a8._129_7_ = 0;
  local_1a8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_1a8);
  local_118 = 0;
  local_1a8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_110 = &local_100;
  local_108 = 0;
  FArchiveState::SetIsSaving(&local_1a8,true);
  (**(code **)(local_1a8._padding_ + 0x108))(&local_1a8,0);
  local_100 = (void *)0x0;
  local_1a8._padding_ = (longlong)&___7FBufferArchive__6B_;
  local_f8 = 0;
  ::operator<<((FArchive *)&local_1a8,param_2);
  uVar12 = (ulong64)(int)local_f8;
  bVar4 = false;
  pFVar1 = *(FAutomationTestBase **)this;
  ::FString::PrintfImpl((FString *)local_1c8,L"Ar << CompactBinary Save(%s)->Size");
  pFVar11 = (FScriptContainerElement *)L"";
  if (local_1c8._8_4_ != 0) {
    pFVar11 = (FScriptContainerElement *)local_1c8._0_8_;
  }
  bVar7 = FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)pFVar11,uVar12,(ulong64)pvVar15);
  if (bVar7) {
    pFVar1 = *(FAutomationTestBase **)this;
    if ((pvVar15 == (void *)(longlong)(int)local_f8) &&
       ((param_3->Data == local_100 ||
        (iVar8 = memcmp(param_3->Data,local_100,(size_t)pvVar15), iVar8 == 0)))) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    bVar4 = true;
    ::FString::PrintfImpl((FString *)local_1d8,L"Ar << CompactBinary Save(%s)->EqualBytes");
    pwVar10 = L"";
    if (local_1d8._8_4_ != 0) {
      pwVar10 = (wchar_t *)local_1d8._0_8_;
    }
    bVar7 = FAutomationTestBase::TestTrue(pFVar1,pwVar10,bVar7);
    if (!bVar7) goto LAB_141cd90be;
    bVar6 = true;
  }
  else {
LAB_141cd90be:
    bVar7 = false;
    bVar6 = false;
    if (!bVar4) goto LAB_141cd90d5;
  }
  bVar7 = bVar6;
  if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1d8._0_8_);
  }
LAB_141cd90d5:
  if ((FScriptContainerElement *)local_1c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1c8._0_8_);
  }
  if (bVar7) {
    local_e8._padding_ = 0;
    local_e8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_e8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_e8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_e8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_e8._40_8_ = 0;
    local_e8.ArSerializingDefaults = 0;
    local_e8.ArPortFlags = 0;
    local_e8.ArMaxSerializeSize = 0;
    local_e8.ArUEVer.FileVersionUE4 = 0;
    local_e8.ArUEVer.FileVersionUE5 = 0;
    local_e8.ArLicenseeUEVer = 0;
    local_e8.ArEngineVer.Major = 0;
    local_e8.ArEngineVer.Minor = 0;
    local_e8.ArEngineVer.Patch = 0;
    local_e8.ArEngineVer._6_2_ = 0;
    local_e8.ArEngineVer.Changelist = 0;
    local_e8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_e8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_e8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_e8.SerializedProperty = (FProperty *)0x0;
    local_e8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_e8.bCustomVersionsAreReset = false;
    local_e8._129_7_ = 0;
    local_e8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_e8);
    local_58 = 0;
    local_e8._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_50 = &local_100;
    local_48 = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading(&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
    ::operator<<((FArchive *)&local_e8,param_2);
    plVar3 = *(longlong **)&param_2->field_0x10;
    pvVar15 = _Buf2_00;
    if (plVar3 != (longlong *)0x0) {
      if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      pvVar15 = (void *)plVar3[2];
    }
    plVar3 = *(longlong **)&param_2->field_0x10;
    if (plVar3 != (longlong *)0x0) {
      if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      _Buf2_00 = (void *)plVar3[1];
    }
    if (((void *)param_3->Size != pvVar15) ||
       ((param_3->Data != _Buf2_00 &&
        (iVar8 = memcmp(param_3->Data,_Buf2_00,(size_t)param_3->Size), iVar8 != 0)))) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar1 = pFVar9->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl((FString *)local_1d8,L"Ar << CompactBinary Load(%s)->EqualBytes");
      (*pcVar2)(pFVar1,local_1d8,0);
      if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1d8._0_8_);
      }
    }
    FArchive::~FArchive((FArchive *)&local_e8);
  }
  if (local_100 != (void *)0x0) {
    FMemory::Free(local_100);
  }
  FArchive::~FArchive((FArchive *)&local_1a8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&param_2->field_0x10);
  return;
}

// operator()<FCbObject> @ 141cd9280

void __thiscall
`FCbSaveTest::TestBody'::__l2::<lambda_1>::operator()<FCbObject>
          (void *this,wchar_t *param_1,FCbObject *param_2,TMemoryView<void_const_> *param_3)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FAutomationTestFramework *pFVar9;
  wchar_t *pwVar10;
  void *_Buf2;
  FScriptContainerElement *pFVar11;
  ulong64 uVar12;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar13;
  void *pvVar14;
  void *pvVar15;
  void *_Buf2_00;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1b8 [2];
  FArchiveState local_1a8;
  undefined8 local_118;
  void **local_110;
  undefined8 local_108;
  void *local_100;
  undefined8 local_f8;
  FArchiveState local_e8;
  undefined8 local_58;
  void **local_50;
  undefined8 local_48;
  
  _Buf2_00 = (void *)0x0;
  local_1a8._padding_ = 0;
  local_1a8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_1a8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_1a8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_1a8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_1a8._40_8_ = 0;
  local_1a8.ArSerializingDefaults = 0;
  local_1a8.ArPortFlags = 0;
  local_1a8.ArMaxSerializeSize = 0;
  local_1a8.ArUEVer.FileVersionUE4 = 0;
  local_1a8.ArUEVer.FileVersionUE5 = 0;
  local_1a8.ArLicenseeUEVer = 0;
  local_1a8.ArEngineVer.Major = 0;
  local_1a8.ArEngineVer.Minor = 0;
  local_1a8.ArEngineVer.Patch = 0;
  local_1a8.ArEngineVer._6_2_ = 0;
  local_1a8.ArEngineVer.Changelist = 0;
  local_1a8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_1a8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_1a8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_1a8.SerializedProperty = (FProperty *)0x0;
  local_1a8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_1a8.bCustomVersionsAreReset = false;
  local_1a8._129_7_ = 0;
  local_1a8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_1a8);
  local_118 = 0;
  local_1a8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_110 = &local_100;
  local_108 = 0;
  FArchiveState::SetIsSaving(&local_1a8,true);
  (**(code **)(local_1a8._padding_ + 0x108))(&local_1a8,0);
  local_100 = (void *)0x0;
  local_1a8._padding_ = (longlong)&___7FBufferArchive__6B_;
  local_f8 = 0;
  SaveCompactBinary((FArchive *)&local_1a8,(FCbObjectView *)param_2);
  pFVar1 = *(FAutomationTestBase **)this;
  uVar12 = (ulong64)(int)local_f8;
  ::FString::PrintfImpl((FString *)local_1d8,L"SaveCompactBinary(%s)->Size");
  pwVar10 = L"";
  pvVar15 = (void *)param_3->Size;
  if (local_1d8._8_4_ != 0) {
    pwVar10 = (wchar_t *)local_1d8._0_8_;
  }
  bVar4 = false;
  bVar7 = FAutomationTestBase::TestEqual(pFVar1,pwVar10,uVar12,(ulong64)pvVar15);
  if (bVar7) {
    pFVar1 = *(FAutomationTestBase **)this;
    if ((pvVar15 == (void *)(longlong)(int)local_f8) &&
       ((param_3->Data == local_100 ||
        (iVar8 = memcmp(param_3->Data,local_100,(size_t)pvVar15), iVar8 == 0)))) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    ::FString::PrintfImpl((FString *)local_1c8,L"SaveCompactBinary(%s)->EqualBytes");
    pFVar11 = (FScriptContainerElement *)L"";
    if (local_1c8._8_4_ != 0) {
      pFVar11 = (FScriptContainerElement *)local_1c8._0_8_;
    }
    bVar4 = true;
    bVar7 = FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)pFVar11,bVar7);
    if (!bVar7) goto LAB_141cd941f;
    bVar6 = true;
LAB_141cd9427:
    bVar7 = bVar6;
    if ((FScriptContainerElement *)local_1c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1c8._0_8_);
    }
  }
  else {
LAB_141cd941f:
    bVar7 = false;
    bVar6 = false;
    if (bVar4) goto LAB_141cd9427;
  }
  if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1d8._0_8_);
  }
  if (bVar7) {
    local_e8._padding_ = 0;
    local_e8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_e8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_e8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_e8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_e8._40_8_ = 0;
    local_e8.ArSerializingDefaults = 0;
    local_e8.ArPortFlags = 0;
    local_e8.ArMaxSerializeSize = 0;
    local_e8.ArUEVer.FileVersionUE4 = 0;
    local_e8.ArUEVer.FileVersionUE5 = 0;
    local_e8.ArLicenseeUEVer = 0;
    local_e8.ArEngineVer.Major = 0;
    local_e8.ArEngineVer.Minor = 0;
    local_e8.ArEngineVer.Patch = 0;
    local_e8.ArEngineVer._6_2_ = 0;
    local_e8.ArEngineVer.Changelist = 0;
    local_e8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_e8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_e8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_e8.SerializedProperty = (FProperty *)0x0;
    local_e8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_e8.bCustomVersionsAreReset = false;
    local_e8._129_7_ = 0;
    local_e8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_e8);
    local_58 = 0;
    local_48 = 0x7fffffffffffffff;
    local_e8._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_50 = &local_100;
    FArchiveState::SetIsLoading(&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
    local_1d8._8_8_ = FUniqueBuffer::Alloc;
    local_1d8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
         ::Call;
    LoadCompactBinary((FCbField *)local_1c8,(FArchive *)&local_e8,
                      (TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)local_1d8);
    TVar5.Owner = local_1b8[0].Owner;
    TVar13.Owner = local_1b8[0].Owner;
    pvVar14 = _Buf2_00;
    if (local_1b8[0].Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)(local_1b8[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
        (**(code **)((local_1b8[0].Owner)->_padding_ + 8))(local_1b8[0].Owner);
      }
      TVar13.Owner = local_1b8[0].Owner;
      pvVar14 = (void *)(TVar5.Owner)->Size;
    }
    _Buf2 = _Buf2_00;
    if (TVar13.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)(TVar13.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
        (**(code **)((TVar13.Owner)->_padding_ + 8))(TVar13.Owner);
      }
      _Buf2 = (TVar13.Owner)->Data;
    }
    if ((pvVar15 != pvVar14) ||
       ((param_3->Data != _Buf2 && (iVar8 = memcmp(param_3->Data,_Buf2,(size_t)pvVar15), iVar8 != 0)
        ))) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar1 = pFVar9->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl((FString *)local_1d8,L"LoadCompactBinary(%s)->EqualBytes");
      (*pcVar2)(pFVar1,local_1d8,0);
      if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1d8._0_8_);
      }
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_1b8);
    FArchive::~FArchive((FArchive *)&local_e8);
  }
  if (local_100 != (void *)0x0) {
    FMemory::Free(local_100);
  }
  FArchive::~FArchive((FArchive *)&local_1a8);
  local_1a8._padding_ = 0;
  local_1a8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_1a8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_1a8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_1a8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_1a8._40_8_ = 0;
  local_1a8.ArSerializingDefaults = 0;
  local_1a8.ArPortFlags = 0;
  local_1a8.ArMaxSerializeSize = 0;
  local_1a8.ArUEVer.FileVersionUE4 = 0;
  local_1a8.ArUEVer.FileVersionUE5 = 0;
  local_1a8.ArLicenseeUEVer = 0;
  local_1a8.ArEngineVer.Major = 0;
  local_1a8.ArEngineVer.Minor = 0;
  local_1a8.ArEngineVer.Patch = 0;
  local_1a8.ArEngineVer._6_2_ = 0;
  local_1a8.ArEngineVer.Changelist = 0;
  local_1a8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_1a8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_1a8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_1a8.SerializedProperty = (FProperty *)0x0;
  local_1a8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_1a8.bCustomVersionsAreReset = false;
  local_1a8._129_7_ = 0;
  local_1a8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_1a8);
  local_118 = 0;
  local_1a8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_110 = &local_100;
  local_108 = 0;
  FArchiveState::SetIsSaving(&local_1a8,true);
  (**(code **)(local_1a8._padding_ + 0x108))(&local_1a8,0);
  local_100 = (void *)0x0;
  local_1a8._padding_ = (longlong)&___7FBufferArchive__6B_;
  local_f8 = 0;
  ::operator<<((FArchive *)&local_1a8,param_2);
  uVar12 = (ulong64)(int)local_f8;
  bVar4 = false;
  pFVar1 = *(FAutomationTestBase **)this;
  ::FString::PrintfImpl((FString *)local_1c8,L"Ar << CompactBinary Save(%s)->Size");
  pFVar11 = (FScriptContainerElement *)L"";
  if (local_1c8._8_4_ != 0) {
    pFVar11 = (FScriptContainerElement *)local_1c8._0_8_;
  }
  bVar7 = FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)pFVar11,uVar12,(ulong64)pvVar15);
  if (bVar7) {
    pFVar1 = *(FAutomationTestBase **)this;
    if ((pvVar15 == (void *)(longlong)(int)local_f8) &&
       ((param_3->Data == local_100 ||
        (iVar8 = memcmp(param_3->Data,local_100,(size_t)pvVar15), iVar8 == 0)))) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    bVar4 = true;
    ::FString::PrintfImpl((FString *)local_1d8,L"Ar << CompactBinary Save(%s)->EqualBytes");
    pwVar10 = L"";
    if (local_1d8._8_4_ != 0) {
      pwVar10 = (wchar_t *)local_1d8._0_8_;
    }
    bVar7 = FAutomationTestBase::TestTrue(pFVar1,pwVar10,bVar7);
    if (!bVar7) goto LAB_141cd974e;
    bVar6 = true;
  }
  else {
LAB_141cd974e:
    bVar7 = false;
    bVar6 = false;
    if (!bVar4) goto LAB_141cd9765;
  }
  bVar7 = bVar6;
  if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1d8._0_8_);
  }
LAB_141cd9765:
  if ((FScriptContainerElement *)local_1c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1c8._0_8_);
  }
  if (bVar7) {
    local_e8._padding_ = 0;
    local_e8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_e8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_e8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_e8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_e8._40_8_ = 0;
    local_e8.ArSerializingDefaults = 0;
    local_e8.ArPortFlags = 0;
    local_e8.ArMaxSerializeSize = 0;
    local_e8.ArUEVer.FileVersionUE4 = 0;
    local_e8.ArUEVer.FileVersionUE5 = 0;
    local_e8.ArLicenseeUEVer = 0;
    local_e8.ArEngineVer.Major = 0;
    local_e8.ArEngineVer.Minor = 0;
    local_e8.ArEngineVer.Patch = 0;
    local_e8.ArEngineVer._6_2_ = 0;
    local_e8.ArEngineVer.Changelist = 0;
    local_e8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_e8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_e8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_e8.SerializedProperty = (FProperty *)0x0;
    local_e8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_e8.bCustomVersionsAreReset = false;
    local_e8._129_7_ = 0;
    local_e8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_e8);
    local_58 = 0;
    local_e8._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_50 = &local_100;
    local_48 = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading(&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
    ::operator<<((FArchive *)&local_e8,param_2);
    plVar3 = *(longlong **)&param_2->field_0x10;
    pvVar15 = _Buf2_00;
    if (plVar3 != (longlong *)0x0) {
      if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      pvVar15 = (void *)plVar3[2];
    }
    plVar3 = *(longlong **)&param_2->field_0x10;
    if (plVar3 != (longlong *)0x0) {
      if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      _Buf2_00 = (void *)plVar3[1];
    }
    if (((void *)param_3->Size != pvVar15) ||
       ((param_3->Data != _Buf2_00 &&
        (iVar8 = memcmp(param_3->Data,_Buf2_00,(size_t)param_3->Size), iVar8 != 0)))) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar1 = pFVar9->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl((FString *)local_1d8,L"Ar << CompactBinary Load(%s)->EqualBytes");
      (*pcVar2)(pFVar1,local_1d8,0);
      if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1d8._0_8_);
      }
    }
    FArchive::~FArchive((FArchive *)&local_e8);
  }
  if (local_100 != (void *)0x0) {
    FMemory::Free(local_100);
  }
  FArchive::~FArchive((FArchive *)&local_1a8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&param_2->field_0x10);
  return;
}

// FCbSaveTest @ 141ce3cc0

FCbSaveTest * __thiscall FCbSaveTest::FCbSaveTest(FCbSaveTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCbSaveTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::SaveCompactBinary");
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

// TestBody @ 141d054c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCbSaveTest::TestBody(FCbSaveTest *this,FString *param_1)

{
  FCbFieldView *pFVar1;
  FCbObject *pFVar2;
  undefined1 auStack_a8 [32];
  TMemoryView<void_const_> local_88;
  FCbSaveTest *local_78;
  FCbFieldView local_70;
  TCbBuffer<FCbFieldView> local_60;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined1 local_30 [16];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88.Data = local_30;
  local_30._0_2_ = 0x2a08;
  local_88.Size = 2;
  local_78 = this;
  pFVar1 = FCbFieldView::FCbFieldView(&local_70,local_30,HasFieldType);
  local_48[0] = pFVar1->TypeWithFlags;
  local_48[1] = pFVar1->Error;
  local_48._2_2_ = *(undefined2 *)&pFVar1->field_0x2;
  local_48._4_4_ = pFVar1->NameLen;
  local_48._8_8_ = pFVar1->Value;
  local_38 = 0;
  `FCbSaveTest::TestBody'::__l2::<lambda_1>::operator()<FCbField>
            (&local_78,L"Field",(FCbField *)local_48,&local_88);
  local_88.Data = local_48;
  local_48._0_4_ = 0x2a410188;
  local_88.Size = 4;
  pFVar1 = FCbFieldView::FCbFieldView(&local_70,local_48,HasFieldType);
  local_30[0] = pFVar1->TypeWithFlags;
  local_30[1] = pFVar1->Error;
  local_30._2_2_ = *(undefined2 *)&pFVar1->field_0x2;
  local_30._4_4_ = pFVar1->NameLen;
  local_30._8_8_ = pFVar1->Value;
  local_20 = 0;
  `FCbSaveTest::TestBody'::__l2::<lambda_1>::operator()<FCbField>
            (&local_78,L"Field, Name",(FCbField *)local_30,&local_88);
  local_88.Data = local_48;
  local_30[0] = 0x2a;
  local_48._0_2_ = 0x2a08;
  local_88.Size = 2;
  pFVar1 = FCbFieldView::FCbFieldView(&local_70,local_30,IntegerPositive);
  local_60._padding_._0_1_ = pFVar1->TypeWithFlags;
  local_60._padding_._1_1_ = pFVar1->Error;
  local_60._padding_._2_2_ = *(undefined2 *)&pFVar1->field_0x2;
  local_60._padding_._4_4_ = pFVar1->NameLen;
  local_60._padding_ = (longlong)pFVar1->Value;
  local_60.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  `FCbSaveTest::TestBody'::__l2::<lambda_1>::operator()<FCbField>
            (&local_78,L"Field, NoType",(FCbField *)&local_60,&local_88);
  local_48._0_3_ = 0x2a4901;
  local_30._0_4_ = 0x2a490188;
  pFVar1 = FCbFieldView::FCbFieldView(&local_70,local_48,HasFieldName|IntegerPositive);
  local_88.Data = (void *)0x0;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>(&local_60,pFVar1,(FSharedBuffer)&local_88);
  local_88.Data = local_30;
  local_88.Size = 4;
  `FCbSaveTest::TestBody'::__l2::<lambda_1>::operator()<FCbField>
            (&local_78,L"Field, NoType, Name",(FCbField *)&local_60,&local_88);
  local_48._0_7_ = 0x3020108030505;
  FCbFieldView::FCbFieldView((FCbFieldView *)local_30,local_48,HasFieldType);
  local_88.Data = (void *)0x0;
  TCbBuffer<FCbArrayView>::TCbBuffer<FCbArrayView>
            ((TCbBuffer<FCbArrayView> *)&local_60,(FCbArrayView *)local_30,(FSharedBuffer)&local_88)
  ;
  local_88.Data = local_48;
  local_88.Size = 7;
  `FCbSaveTest::TestBody'::__l2::<lambda_1>::operator()<FCbArray>
            (&local_78,L"Array",(FCbArray *)&local_60,&local_88);
  local_30._0_4_ = 0x5410185;
  local_30._4_4_ = 0x2010803;
  local_30[8] = 3;
  local_48._0_7_ = 0x3020108030505;
  FCbFieldView::FCbFieldView(&local_70,local_30,HasFieldType);
  local_88.Data = (void *)0x0;
  TCbBuffer<FCbArrayView>::TCbBuffer<FCbArrayView>
            ((TCbBuffer<FCbArrayView> *)&local_60,(FCbArrayView *)&local_70,(FSharedBuffer)&local_88
            );
  local_88.Data = local_48;
  local_88.Size = 7;
  `FCbSaveTest::TestBody'::__l2::<lambda_1>::operator()<FCbArray>
            (&local_78,L"Array, Name",(FCbArray *)&local_60,&local_88);
  local_48._0_6_ = 0x30201080305;
  local_30._0_7_ = 0x3020108030505;
  FCbFieldView::FCbFieldView(&local_70,local_48,UniformArray);
  local_88.Data = (void *)0x0;
  TCbBuffer<FCbArrayView>::TCbBuffer<FCbArrayView>
            ((TCbBuffer<FCbArrayView> *)&local_60,(FCbArrayView *)&local_70,(FSharedBuffer)&local_88
            );
  local_88.Data = local_30;
  local_88.Size = 7;
  `FCbSaveTest::TestBody'::__l2::<lambda_1>::operator()<FCbArray>
            (&local_78,L"Array, NoType",(FCbArray *)&local_60,&local_88);
  local_30._0_8_ = 0x302010803054101;
  local_48._0_7_ = 0x3020108030505;
  FCbFieldView::FCbFieldView(&local_70,local_30,HasFieldName|UniformArray);
  local_88.Data = (void *)0x0;
  TCbBuffer<FCbArrayView>::TCbBuffer<FCbArrayView>
            ((TCbBuffer<FCbArrayView> *)&local_60,(FCbArrayView *)&local_70,(FSharedBuffer)&local_88
            );
  local_88.Data = local_48;
  local_88.Size = 7;
  `FCbSaveTest::TestBody'::__l2::<lambda_1>::operator()<FCbArray>
            (&local_78,L"Array, NoType, Name",(FCbArray *)&local_60,&local_88);
  local_48._0_8_ = 0x4201014101880a03;
  local_48._8_4_ = 0x3430102;
  FCbFieldView::FCbFieldView(&local_70,local_48,HasFieldType);
  local_88.Data = (void *)0x0;
  TCbBuffer<FCbObjectView>::TCbBuffer<FCbObjectView>
            ((TCbBuffer<FCbObjectView> *)&local_60,(FCbObjectView *)&local_70,
             (FSharedBuffer)&local_88);
  local_88.Data = local_48;
  local_88.Size = 0xc;
  `FCbSaveTest::TestBody'::__l2::<lambda_1>::operator()<FCbObject>
            (&local_78,L"Object",(FCbObject *)&local_60,&local_88);
  local_30._0_8_ = 0x14101880a4f0183;
  local_30._8_6_ = 0x34301024201;
  local_48._0_8_ = 0x4201014101880a03;
  local_48._8_4_ = 0x3430102;
  FCbFieldView::FCbFieldView(&local_70,local_30,HasFieldType);
  local_88.Data = (void *)0x0;
  TCbBuffer<FCbObjectView>::TCbBuffer<FCbObjectView>
            ((TCbBuffer<FCbObjectView> *)&local_60,(FCbObjectView *)&local_70,
             (FSharedBuffer)&local_88);
  local_88.Data = local_48;
  local_88.Size = 0xc;
  `FCbSaveTest::TestBody'::__l2::<lambda_1>::operator()<FCbObject>
            (&local_78,L"Object, Name",(FCbObject *)&local_60,&local_88);
  local_48._0_8_ = 0x24201014101880a;
  local_48._8_3_ = 0x34301;
  local_30._0_8_ = 0x4201014101880a03;
  local_30._8_4_ = 0x3430102;
  local_88.Data = (void *)0x0;
  FCbFieldView::FCbFieldView(&local_70,local_48,UniformObject);
  pFVar2 = FCbObject::FCbObject
                     ((FCbObject *)&local_60,(FCbObjectView *)&local_70,(FSharedBuffer)&local_88);
  local_88.Data = local_30;
  local_88.Size = 0xc;
  `FCbSaveTest::TestBody'::__l2::<lambda_1>::operator()<FCbObject>
            (&local_78,L"Object, NoType",pFVar2,&local_88);
  local_30._0_8_ = 0x1014101880a4f01;
  local_30._8_5_ = 0x343010242;
  local_48._0_8_ = 0x4201014101880a03;
  local_48._8_4_ = 0x3430102;
  local_88.Data = (void *)0x0;
  FCbFieldView::FCbFieldView(&local_70,local_30,HasFieldName|UniformObject);
  pFVar2 = FCbObject::FCbObject
                     ((FCbObject *)&local_60,(FCbObjectView *)&local_70,(FSharedBuffer)&local_88);
  local_88.Data = local_48;
  local_88.Size = 0xc;
  `FCbSaveTest::TestBody'::__l2::<lambda_1>::operator()<FCbObject>
            (&local_78,L"Object, NoType, Name",pFVar2,&local_88);
  return;
}

