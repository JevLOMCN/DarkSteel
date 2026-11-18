// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 141a34c00

EAutomationTestFlags __thiscall
FCbFieldBufferIteratorTest::GetTestFlags(FCbFieldBufferIteratorTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141a34c10

bool __thiscall FCbFieldBufferIteratorTest::IsStressTest(FCbFieldBufferIteratorTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a34c20

uint __thiscall FCbFieldBufferIteratorTest::GetRequiredDeviceNum(FCbFieldBufferIteratorTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a34c30

FString * __thiscall
FCbFieldBufferIteratorTest::GetTestSourceFileName
          (FCbFieldBufferIteratorTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tests\\Serialization\\CompactBinaryTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a34c60

int __thiscall FCbFieldBufferIteratorTest::GetTestSourceFileLine(FCbFieldBufferIteratorTest *this)

{
  return 0x69f;
}

// GetTests @ 141a34c70

/* WARNING: Removing unreachable block (ram,0x000141a34d5d) */
/* WARNING: Removing unreachable block (ram,0x000141a34e28) */

void __thiscall
FCbFieldBufferIteratorTest::GetTests
          (FCbFieldBufferIteratorTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Serialization.CbFieldBufferIterator");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 141a34e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FCbFieldBufferIteratorTest::RunTest(FCbFieldBufferIteratorTest *this,FString *param_1)

{
  atomic<unsigned___int64> *paVar1;
  ulonglong *puVar2;
  atomic<unsigned___int64> aVar3;
  ulonglong uVar4;
  byte bVar5;
  code *pcVar6;
  undefined4 *_Buf1;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [8];
  undefined1 auVar10 [8];
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  FCbFieldView *pFVar14;
  FBlake3Hash *pFVar15;
  FIoHash *pFVar16;
  void *pvVar17;
  TMemoryView<void_const_> *pTVar18;
  TCbFieldIterator<FCbField> *pTVar19;
  FIoHash *pFVar20;
  ulong64 uVar21;
  uint uVar22;
  void *pvVar23;
  uint uVar24;
  void *pvVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined1 local_1d4 [12];
  TMemoryView<void_const_> local_1c8;
  undefined1 local_1b8 [8];
  TCbFieldIterator<FCbFieldView> local_1b0;
  TCbFieldIterator<FCbFieldView> local_198;
  TCbFieldIterator<FCbField> local_180;
  FCbFieldView local_160;
  undefined1 local_150 [16];
  void *pvStack_140;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TStack_138;
  void *local_130;
  undefined1 local_128 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_118;
  undefined1 *local_110;
  TCbFieldIterator<FCbField> local_108;
  undefined1 local_e8 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_d8;
  void *local_d0;
  TMemoryView<void_const_> local_c8;
  TMemoryView<void_const_> local_b8;
  TCbFieldIterator<FCbField> local_a8;
  undefined1 local_88 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_78;
  void *local_70;
  TCbFieldIterator<FCbField> local_68;
  undefined4 local_48;
  undefined4 uStack_44;
  FBufferOwner local_40;
  
  local_40.Data = (void *)(__security_cookie.value ^ (ulonglong)auStack_1f8);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"FCbFieldViewIterator()",0,0);
  pvVar25 = (void *)0x0;
  uVar27 = 0;
  uVar24 = 0;
  local_150._8_8_ = 0;
  local_130 = (void *)0x0;
  pvStack_140 = (void *)0x0;
  TStack_138.Owner = (FBufferOwner *)0x0;
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"FCbFieldIterator()",0,0);
  local_1c8.Data = &local_48;
  local_48 = 0x1080008;
  uStack_44 = 0x3080208;
  local_1c8.Size = 8;
  FSharedBuffer::MakeView((TMemoryView<void_const_> *)local_1b8);
  auVar9 = local_1b8;
  pvVar17 = pvVar25;
  pvVar23 = pvVar25;
  if (local_1b8 != (undefined1  [8])0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_1b8 + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_1b8 + 8))(local_1b8);
    }
    auVar10 = local_1b8;
    pvVar23 = *(void **)((longlong)auVar9 + 0x10);
    if (local_1b8 != (undefined1  [8])0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_1b8 + 0x18) >> 0x3c & 4) == 0) {
        (**(code **)(*(longlong *)local_1b8 + 8))(local_1b8);
      }
      pvVar17 = *(void **)((longlong)auVar10 + 8);
    }
  }
  local_1c8.Data = pvVar17;
  local_1c8.Size = (ulong64)pvVar23;
  FSharedBuffer::Clone((TMemoryView<void_const_> *)&local_160);
  auVar9 = local_1b8;
  pvVar23 = pvVar25;
  pvVar17 = pvVar25;
  if (local_1b8 != (undefined1  [8])0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_1b8 + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_1b8 + 8))(local_1b8);
    }
    auVar10 = local_1b8;
    pvVar23 = *(void **)((longlong)auVar9 + 0x10);
    if (local_1b8 != (undefined1  [8])0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_1b8 + 0x18) >> 0x3c & 4) == 0) {
        (**(code **)(*(longlong *)local_1b8 + 8))(local_1b8);
      }
      pvVar17 = *(void **)((longlong)auVar10 + 8);
    }
  }
  if (pvVar23 == (void *)0x0) {
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198.FieldsEnd = (void *)0x0;
  }
  else {
    pFVar14 = FCbFieldView::FCbFieldView((FCbFieldView *)local_88,pvVar17,HasFieldType);
    local_198._padding_._0_1_ = pFVar14->TypeWithFlags;
    local_198._padding_._1_1_ = pFVar14->Error;
    local_198._padding_._2_2_ = *(undefined2 *)&pFVar14->field_0x2;
    local_198._padding_._4_4_ = pFVar14->NameLen;
    local_198._padding_ = (longlong)pFVar14->Value;
    local_198.FieldsEnd = (void *)((longlong)pvVar23 + (longlong)pvVar17);
  }
  if (local_1b8 != (undefined1  [8])0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_1b8 + 0x18);
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)((longlong)local_1b8 + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)((longlong)local_1b8 + 0x18) + 0x40000000);
      UNLOCK();
    }
  }
  FCbFieldIterator::MakeRange((FCbFieldIterator *)&local_180,(FSharedBuffer)&local_1c8,HasFieldType)
  ;
  auVar9 = local_1b8;
  local_1c8.Data = pvVar25;
  pvVar23 = pvVar25;
  if (local_1b8 != (undefined1  [8])0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_1b8 + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_1b8 + 8))(local_1b8);
    }
    auVar10 = local_1b8;
    pvVar23 = *(void **)((longlong)auVar9 + 0x10);
    if (local_1b8 != (undefined1  [8])0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_1b8 + 0x18) >> 0x3c & 4) == 0) {
        (**(code **)(*(longlong *)local_1b8 + 8))(local_1b8);
      }
      local_1c8.Data = *(void **)((longlong)auVar10 + 8);
    }
  }
  local_1c8.Size = (ulong64)pvVar23;
  pFVar15 = FBlake3::HashBuffer((FBlake3Hash *)&local_68,&local_1c8);
  lVar7 = *(longlong *)pFVar15->Hash;
  lVar8 = *(longlong *)(pFVar15->Hash + 8);
  iVar13 = *(int *)(pFVar15->Hash + 0x10);
  pFVar16 = TCbFieldIterator<FCbFieldView>::GetRangeHash(&local_198,(FIoHash *)&local_a8);
  if (((*(longlong *)pFVar16->Hash != lVar7) || (*(longlong *)(pFVar16->Hash + 8) != lVar8)) ||
     (*(int *)(pFVar16->Hash + 0x10) != iVar13)) {
    pcVar6 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_1c8,L"%s: The two values are not equal.");
    (*pcVar6)(this,&local_1c8);
    if (local_1c8.Data != (void *)0x0) {
      FMemory::Free(local_1c8.Data);
    }
  }
  auVar9 = local_1b8;
  pvVar17 = pvVar25;
  pvVar23 = pvVar25;
  if (local_1b8 != (undefined1  [8])0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_1b8 + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_1b8 + 8))(local_1b8);
    }
    auVar10 = local_1b8;
    pvVar23 = *(void **)((longlong)auVar9 + 0x10);
    if (local_1b8 != (undefined1  [8])0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_1b8 + 0x18) >> 0x3c & 4) == 0) {
        (**(code **)(*(longlong *)local_1b8 + 8))(local_1b8);
      }
      pvVar17 = *(void **)((longlong)auVar10 + 8);
    }
  }
  local_1c8.Data = pvVar17;
  local_1c8.Size = (ulong64)pvVar23;
  pFVar15 = FBlake3::HashBuffer((FBlake3Hash *)&local_68,&local_1c8);
  lVar7 = *(longlong *)pFVar15->Hash;
  lVar8 = *(longlong *)(pFVar15->Hash + 8);
  iVar13 = *(int *)(pFVar15->Hash + 0x10);
  pFVar16 = TCbFieldIterator<FCbField>::GetRangeHash(&local_180,(FIoHash *)&local_a8);
  if (((*(longlong *)pFVar16->Hash != lVar7) || (*(longlong *)(pFVar16->Hash + 8) != lVar8)) ||
     (*(int *)(pFVar16->Hash + 0x10) != iVar13)) {
    pcVar6 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_1c8,L"%s: The two values are not equal.");
    (*pcVar6)(this,&local_1c8);
    if (local_1c8.Data != (void *)0x0) {
      FMemory::Free(local_1c8.Data);
    }
  }
  if ((local_198._padding_ & 0x40U) == 0) {
LAB_141a35225:
    bVar28 = false;
  }
  else {
    pTVar18 = FCbFieldView::GetView((FCbFieldView *)&local_198,&local_c8);
    local_88._8_8_ = pTVar18->Size;
    if (((longlong)local_198.FieldsEnd - (longlong)pTVar18->Data != 8) ||
       (pTVar18->Data != &local_48)) goto LAB_141a35225;
    bVar28 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbFieldViewIterator::TryGetRangeView()",bVar28);
  if (((uint)local_180._padding_ & 0x40) == 0) {
LAB_141a35275:
    bVar28 = false;
  }
  else {
    pTVar18 = FCbFieldView::GetView((FCbFieldView *)&local_180,&local_b8);
    local_88._8_8_ = pTVar18->Size;
    if (((longlong)local_180.FieldsEnd - (longlong)pTVar18->Data != 8) ||
       (pTVar18->Data != &local_48)) goto LAB_141a35275;
    bVar28 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbFieldIterator::TryGetRangeView()",bVar28);
  local_a8._padding_ = 0;
  local_a8._padding_ = 0;
  local_a8._padding_ = 0;
  pTVar19 = (TCbFieldIterator<FCbField> *)
            FCbFieldIterator::CloneRange
                      ((FCbFieldIterator *)&local_68,(FCbFieldViewIterator *)&local_a8);
  bVar5 = (byte)pTVar19->_padding_;
  pvVar23 = pvVar25;
  uVar26 = uVar27;
  while ((bVar5 & 0x1f) != 0) {
    uVar26 = (int)pvVar23 + 1;
    pvVar23 = (void *)(ulonglong)uVar26;
    TCbFieldIterator<FCbField>::operator++(pTVar19);
    bVar5 = (byte)pTVar19->_padding_;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&pTVar19->_padding_);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldIterator::CloneRange(EmptyViewIt)",uVar26,0);
  local_a8._padding_ = 0;
  local_a8._padding_ = 0;
  local_a8._padding_ = 0;
  FCbFieldIterator::CloneRange((FCbFieldIterator *)&local_68,(FCbFieldViewIterator *)&local_a8);
  pvVar23 = pvVar25;
  uVar26 = uVar24;
  while (((byte)local_68._padding_ & 0x1f) != 0) {
    uVar26 = (int)pvVar23 + 1;
    pvVar23 = (void *)(ulonglong)uVar26;
    TCbFieldIterator<FCbField>::operator++(&local_68);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_68._padding_);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldIterator::CloneRange(EmptyIt)",uVar26,0);
  FCbFieldIterator::CloneRange
            ((FCbFieldIterator *)(local_150 + 8),(FCbFieldViewIterator *)&local_198);
  local_a8._padding_ = (longlong)local_180.FieldsEnd;
  FCbFieldIterator::CloneRange((FCbFieldIterator *)local_e8,(FCbFieldViewIterator *)&local_a8);
  if (TStack_138.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &(TStack_138.Owner)->ReferenceCountsAndFlags;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
      LOCK();
      (TStack_138.Owner)->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((longlong)(TStack_138.Owner)->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
    }
  }
  uVar22 = 0;
  pvVar23 = pvVar25;
  uVar26 = uVar22;
  local_a8._padding_ = local_150._8_8_;
  local_a8._padding_ = (longlong)pvStack_140;
  local_a8.FieldsEnd = local_130;
  local_a8._padding_ = (longlong)TStack_138.Owner;
  while ((local_a8._padding_ & 0x1fU) != 0) {
    uVar26 = (int)pvVar23 + 1;
    pvVar23 = (void *)(ulonglong)uVar26;
    TCbFieldIterator<FCbField>::operator++(&local_a8);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_a8._padding_);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldIterator::CloneRange(FieldViewIt)",uVar26,4);
  pvVar23 = pvVar25;
  uVar26 = uVar22;
  local_a8._padding_ = local_e8._0_8_;
  if (local_d8.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &(local_d8.Owner)->ReferenceCountsAndFlags;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
      LOCK();
      (local_d8.Owner)->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((longlong)(local_d8.Owner)->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
    }
  }
  while ((local_a8._padding_ & 0x1fU) != 0) {
    uVar26 = (int)pvVar23 + 1;
    TCbFieldIterator<FCbField>::operator++(&local_a8);
    pvVar23 = (void *)(ulonglong)uVar26;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_a8._padding_);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldIterator::CloneRange(FieldIt)",uVar26,4);
  if ((pvStack_140 == (void *)CONCAT44(local_180._padding_._4_4_,(undefined4)local_180._padding_))
     && (local_130 == local_180.FieldsEnd)) {
    pcVar6 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_1c8,L"%s: The two values are equal.");
    (*pcVar6)(this,&local_1c8,0);
    if (local_1c8.Data != (void *)0x0) {
      FMemory::Free(local_1c8.Data);
    }
  }
  if ((local_e8._8_8_ == CONCAT44(local_180._padding_._4_4_,(undefined4)local_180._padding_)) &&
     (local_d0 == local_180.FieldsEnd)) {
    pcVar6 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_1c8,L"%s: The two values are equal.");
    (*pcVar6)(this,&local_1c8,0);
    if (local_1c8.Data != (void *)0x0) {
      FMemory::Free(local_1c8.Data);
    }
  }
  local_a8._padding_ = 0;
  local_a8._padding_ = 0;
  local_a8._padding_ = 0;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldViewIterator::MakeRange(EmptyView)",0,0);
  local_1c8.Data = (void *)0x0;
  pTVar19 = (TCbFieldIterator<FCbField> *)
            FCbFieldIterator::MakeRange
                      ((FCbFieldIterator *)&local_a8,(FSharedBuffer)&local_1c8,HasFieldType);
  bVar5 = (byte)pTVar19->_padding_;
  pvVar23 = pvVar25;
  uVar26 = uVar27;
  while ((bVar5 & 0x1f) != 0) {
    uVar26 = (int)pvVar23 + 1;
    pvVar23 = (void *)(ulonglong)uVar26;
    TCbFieldIterator<FCbField>::operator++(pTVar19);
    bVar5 = (byte)pTVar19->_padding_;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&pTVar19->_padding_);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldIterator::MakeRange(BufferNullL)",uVar26,0);
  local_1c8.Data = (void *)0x0;
  pTVar19 = (TCbFieldIterator<FCbField> *)
            FCbFieldIterator::MakeRange
                      ((FCbFieldIterator *)&local_a8,(FSharedBuffer)&local_1c8,HasFieldType);
  bVar5 = (byte)pTVar19->_padding_;
  pvVar23 = pvVar25;
  uVar26 = uVar27;
  while ((bVar5 & 0x1f) != 0) {
    uVar26 = (int)pvVar23 + 1;
    pvVar23 = (void *)(ulonglong)uVar26;
    TCbFieldIterator<FCbField>::operator++(pTVar19);
    bVar5 = (byte)pTVar19->_padding_;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&pTVar19->_padding_);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldIterator::MakeRange(BufferNullR)",uVar26,0);
  pFVar14 = FCbFieldView::FCbFieldView((FCbFieldView *)local_88,&local_48,HasFieldType);
  uVar26._0_1_ = pFVar14->TypeWithFlags;
  uVar26._1_1_ = pFVar14->Error;
  uVar26._2_2_ = *(undefined2 *)&pFVar14->field_0x2;
  local_a8._padding_._0_1_ = pFVar14->TypeWithFlags;
  local_a8._padding_._1_1_ = pFVar14->Error;
  local_a8._padding_._2_2_ = *(undefined2 *)&pFVar14->field_0x2;
  local_a8._padding_._4_4_ = pFVar14->NameLen;
  local_a8._padding_ = (longlong)pFVar14->Value;
  local_a8._padding_ = (longlong)&local_40;
  pvVar23 = pvVar25;
  local_68._padding_ = local_a8._padding_;
  if ((uVar26 & 0x1f) != 0) {
    do {
      uVar22 = (int)pvVar23 + 1;
      pvVar23 = (void *)(ulonglong)uVar22;
      TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)&local_a8);
    } while ((local_a8._padding_ & 0x1fU) != 0);
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldViewIterator::MakeRange(BufferView)",uVar22,4);
  if ((FBufferOwner *)local_160._0_8_ != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)(local_160._0_8_ + 0x18);
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)(local_160._0_8_ + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)(local_160._0_8_ + 0x18) + 0x40000000);
      UNLOCK();
    }
  }
  local_1c8.Data = (void *)local_160._0_8_;
  pTVar19 = (TCbFieldIterator<FCbField> *)
            FCbFieldIterator::MakeRange
                      ((FCbFieldIterator *)&local_a8,(FSharedBuffer)&local_1c8,HasFieldType);
  bVar5 = (byte)pTVar19->_padding_;
  pvVar23 = pvVar25;
  uVar26 = uVar27;
  while ((bVar5 & 0x1f) != 0) {
    uVar26 = (int)pvVar23 + 1;
    pvVar23 = (void *)(ulonglong)uVar26;
    TCbFieldIterator<FCbField>::operator++(pTVar19);
    bVar5 = (byte)pTVar19->_padding_;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&pTVar19->_padding_);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldIterator::MakeRange(BufferCloneL)",uVar26,4);
  if ((FBufferOwner *)local_160._0_8_ != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)(local_160._0_8_ + 0x18);
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)(local_160._0_8_ + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)(local_160._0_8_ + 0x18) + 0x40000000);
      UNLOCK();
    }
  }
  local_1c8.Data = (void *)local_160._0_8_;
  pTVar19 = (TCbFieldIterator<FCbField> *)
            FCbFieldIterator::MakeRange
                      ((FCbFieldIterator *)&local_a8,(FSharedBuffer)&local_1c8,HasFieldType);
  bVar5 = (byte)pTVar19->_padding_;
  pvVar23 = pvVar25;
  uVar26 = uVar27;
  while ((bVar5 & 0x1f) != 0) {
    uVar26 = (int)pvVar23 + 1;
    pvVar23 = (void *)(ulonglong)uVar26;
    TCbFieldIterator<FCbField>::operator++(pTVar19);
    bVar5 = (byte)pTVar19->_padding_;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&pTVar19->_padding_);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldIterator::MakeRange(BufferCloneR)",uVar26,4);
  local_1c8.Data = (void *)0x0;
  FSharedBuffer::GetView((FSharedBuffer *)local_1b8,(TMemoryView<void_const_> *)local_88);
  uVar12 = local_88._8_8_;
  uVar11 = local_88._0_8_;
  if ((void *)local_88._8_8_ == (void *)0x0) {
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
  }
  else {
    pFVar14 = FCbFieldView::FCbFieldView
                        ((FCbFieldView *)local_88,(void *)local_88._0_8_,HasFieldType);
    local_a8._padding_._0_1_ = pFVar14->TypeWithFlags;
    local_a8._padding_._1_1_ = pFVar14->Error;
    local_a8._padding_._2_2_ = *(undefined2 *)&pFVar14->field_0x2;
    local_a8._padding_._4_4_ = pFVar14->NameLen;
    local_a8._padding_ = (longlong)pFVar14->Value;
    local_a8._padding_ = uVar11 + uVar12;
  }
  pTVar19 = (TCbFieldIterator<FCbField> *)
            FCbFieldIterator::MakeRangeView
                      ((FCbFieldIterator *)&local_68,(FCbFieldViewIterator *)&local_a8,
                       (FSharedBuffer)&local_1c8);
  bVar5 = (byte)pTVar19->_padding_;
  pvVar23 = pvVar25;
  uVar26 = uVar27;
  while ((bVar5 & 0x1f) != 0) {
    uVar26 = (int)pvVar23 + 1;
    pvVar23 = (void *)(ulonglong)uVar26;
    TCbFieldIterator<FCbField>::operator++(pTVar19);
    bVar5 = (byte)pTVar19->_padding_;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&pTVar19->_padding_);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldIterator::MakeRangeView(FieldIt, BufferNullL)",
             uVar26,4);
  local_1c8.Data = (void *)0x0;
  FSharedBuffer::GetView((FSharedBuffer *)local_1b8,(TMemoryView<void_const_> *)local_88);
  uVar12 = local_88._8_8_;
  uVar11 = local_88._0_8_;
  if ((void *)local_88._8_8_ == (void *)0x0) {
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
  }
  else {
    pFVar14 = FCbFieldView::FCbFieldView
                        ((FCbFieldView *)local_88,(void *)local_88._0_8_,HasFieldType);
    local_a8._padding_._0_1_ = pFVar14->TypeWithFlags;
    local_a8._padding_._1_1_ = pFVar14->Error;
    local_a8._padding_._2_2_ = *(undefined2 *)&pFVar14->field_0x2;
    local_a8._padding_._4_4_ = pFVar14->NameLen;
    local_a8._padding_ = (longlong)pFVar14->Value;
    local_a8._padding_ = uVar11 + uVar12;
  }
  pTVar19 = (TCbFieldIterator<FCbField> *)
            FCbFieldIterator::MakeRangeView
                      ((FCbFieldIterator *)&local_68,(FCbFieldViewIterator *)&local_a8,
                       (FSharedBuffer)&local_1c8);
  bVar5 = (byte)pTVar19->_padding_;
  pvVar23 = pvVar25;
  uVar26 = uVar27;
  while ((bVar5 & 0x1f) != 0) {
    uVar26 = (int)pvVar23 + 1;
    pvVar23 = (void *)(ulonglong)uVar26;
    TCbFieldIterator<FCbField>::operator++(pTVar19);
    bVar5 = (byte)pTVar19->_padding_;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&pTVar19->_padding_);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldIterator::MakeRangeView(FieldIt, BufferNullR)",
             uVar26,4);
  if (local_1b8 != (undefined1  [8])0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_1b8 + 0x18);
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)((longlong)local_1b8 + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)((longlong)local_1b8 + 0x18) + 0x40000000);
      UNLOCK();
    }
  }
  local_1c8.Data = (void *)local_1b8;
  FSharedBuffer::GetView((FSharedBuffer *)local_1b8,(TMemoryView<void_const_> *)local_88);
  uVar12 = local_88._8_8_;
  uVar11 = local_88._0_8_;
  if ((void *)local_88._8_8_ == (void *)0x0) {
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
  }
  else {
    pFVar14 = FCbFieldView::FCbFieldView
                        ((FCbFieldView *)local_88,(void *)local_88._0_8_,HasFieldType);
    local_a8._padding_._0_1_ = pFVar14->TypeWithFlags;
    local_a8._padding_._1_1_ = pFVar14->Error;
    local_a8._padding_._2_2_ = *(undefined2 *)&pFVar14->field_0x2;
    local_a8._padding_._4_4_ = pFVar14->NameLen;
    local_a8._padding_ = (longlong)pFVar14->Value;
    local_a8._padding_ = uVar11 + uVar12;
  }
  pTVar19 = (TCbFieldIterator<FCbField> *)
            FCbFieldIterator::MakeRangeView
                      ((FCbFieldIterator *)&local_68,(FCbFieldViewIterator *)&local_a8,
                       (FSharedBuffer)&local_1c8);
  bVar5 = (byte)pTVar19->_padding_;
  pvVar23 = pvVar25;
  uVar26 = uVar27;
  while ((bVar5 & 0x1f) != 0) {
    uVar26 = (int)pvVar23 + 1;
    pvVar23 = (void *)(ulonglong)uVar26;
    TCbFieldIterator<FCbField>::operator++(pTVar19);
    bVar5 = (byte)pTVar19->_padding_;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&pTVar19->_padding_);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldIterator::MakeRangeView(FieldIt, BufferViewL)",
             uVar26,4);
  if (local_1b8 != (undefined1  [8])0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_1b8 + 0x18);
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)((longlong)local_1b8 + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)((longlong)local_1b8 + 0x18) + 0x40000000);
      UNLOCK();
    }
  }
  local_1c8.Data = (void *)local_1b8;
  FSharedBuffer::GetView((FSharedBuffer *)local_1b8,(TMemoryView<void_const_> *)local_88);
  uVar12 = local_88._8_8_;
  uVar11 = local_88._0_8_;
  if ((void *)local_88._8_8_ == (void *)0x0) {
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
  }
  else {
    pFVar14 = FCbFieldView::FCbFieldView
                        ((FCbFieldView *)local_88,(void *)local_88._0_8_,HasFieldType);
    local_a8._padding_._0_1_ = pFVar14->TypeWithFlags;
    local_a8._padding_._1_1_ = pFVar14->Error;
    local_a8._padding_._2_2_ = *(undefined2 *)&pFVar14->field_0x2;
    local_a8._padding_._4_4_ = pFVar14->NameLen;
    local_a8._padding_ = (longlong)pFVar14->Value;
    local_a8._padding_ = uVar11 + uVar12;
  }
  pTVar19 = (TCbFieldIterator<FCbField> *)
            FCbFieldIterator::MakeRangeView
                      ((FCbFieldIterator *)&local_68,(FCbFieldViewIterator *)&local_a8,
                       (FSharedBuffer)&local_1c8);
  bVar5 = (byte)pTVar19->_padding_;
  pvVar23 = pvVar25;
  uVar26 = uVar27;
  while ((bVar5 & 0x1f) != 0) {
    uVar26 = (int)pvVar23 + 1;
    pvVar23 = (void *)(ulonglong)uVar26;
    TCbFieldIterator<FCbField>::operator++(pTVar19);
    bVar5 = (byte)pTVar19->_padding_;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&pTVar19->_padding_);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldIterator::MakeRangeView(FieldIt, BufferViewR)",
             uVar26,4);
  if ((FBufferOwner *)local_160._0_8_ != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)(local_160._0_8_ + 0x18);
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)(local_160._0_8_ + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)(local_160._0_8_ + 0x18) + 0x40000000);
      UNLOCK();
    }
  }
  local_1c8.Data = (void *)local_160._0_8_;
  FSharedBuffer::GetView((FSharedBuffer *)&local_160,(TMemoryView<void_const_> *)local_88);
  uVar12 = local_88._8_8_;
  uVar11 = local_88._0_8_;
  if ((void *)local_88._8_8_ == (void *)0x0) {
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
  }
  else {
    pFVar14 = FCbFieldView::FCbFieldView
                        ((FCbFieldView *)local_88,(void *)local_88._0_8_,HasFieldType);
    local_a8._padding_._0_1_ = pFVar14->TypeWithFlags;
    local_a8._padding_._1_1_ = pFVar14->Error;
    local_a8._padding_._2_2_ = *(undefined2 *)&pFVar14->field_0x2;
    local_a8._padding_._4_4_ = pFVar14->NameLen;
    local_a8._padding_ = (longlong)pFVar14->Value;
    local_a8._padding_ = uVar11 + uVar12;
  }
  pTVar19 = (TCbFieldIterator<FCbField> *)
            FCbFieldIterator::MakeRangeView
                      ((FCbFieldIterator *)&local_68,(FCbFieldViewIterator *)&local_a8,
                       (FSharedBuffer)&local_1c8);
  bVar5 = (byte)pTVar19->_padding_;
  pvVar23 = pvVar25;
  uVar26 = uVar27;
  while ((bVar5 & 0x1f) != 0) {
    uVar26 = (int)pvVar23 + 1;
    pvVar23 = (void *)(ulonglong)uVar26;
    TCbFieldIterator<FCbField>::operator++(pTVar19);
    bVar5 = (byte)pTVar19->_padding_;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&pTVar19->_padding_);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldIterator::MakeRangeView(FieldIt, BufferCloneL)",
             uVar26,4);
  if ((FBufferOwner *)local_160._0_8_ != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)(local_160._0_8_ + 0x18);
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)(local_160._0_8_ + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)(local_160._0_8_ + 0x18) + 0x40000000);
      UNLOCK();
    }
  }
  local_1c8.Data = (void *)local_160._0_8_;
  FSharedBuffer::GetView((FSharedBuffer *)&local_160,(TMemoryView<void_const_> *)local_88);
  uVar11 = local_88._8_8_;
  if ((void *)local_88._8_8_ == (void *)0x0) {
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
  }
  else {
    pFVar14 = FCbFieldView::FCbFieldView
                        ((FCbFieldView *)local_88,(void *)local_88._0_8_,HasFieldType);
    local_a8._padding_._0_1_ = pFVar14->TypeWithFlags;
    local_a8._padding_._1_1_ = pFVar14->Error;
    local_a8._padding_._2_2_ = *(undefined2 *)&pFVar14->field_0x2;
    local_a8._padding_._4_4_ = pFVar14->NameLen;
    local_a8._padding_ = (longlong)pFVar14->Value;
    local_a8._padding_ = local_88._0_8_ + uVar11;
  }
  pTVar19 = (TCbFieldIterator<FCbField> *)
            FCbFieldIterator::MakeRangeView
                      ((FCbFieldIterator *)&local_68,(FCbFieldViewIterator *)&local_a8,
                       (FSharedBuffer)&local_1c8);
  bVar5 = (byte)pTVar19->_padding_;
  pvVar23 = pvVar25;
  uVar26 = uVar27;
  while ((bVar5 & 0x1f) != 0) {
    uVar26 = (int)pvVar23 + 1;
    pvVar23 = (void *)(ulonglong)uVar26;
    TCbFieldIterator<FCbField>::operator++(pTVar19);
    bVar5 = (byte)pTVar19->_padding_;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&pTVar19->_padding_);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldIterator::MakeRangeView(FieldIt, BufferCloneR)",
             uVar26,4);
  local_68._padding_ = (longlong)local_180.FieldsEnd;
  local_a8._padding_ = (longlong)(uint)local_180._padding_;
  local_a8._padding_ = (longlong)local_180.FieldsEnd;
  pvVar23 = pvVar25;
  uVar26 = uVar27;
  if (((uint)local_180._padding_ & 0x1f) != 0) {
    do {
      uVar26 = (int)pvVar23 + 1;
      pvVar23 = (void *)(ulonglong)uVar26;
      TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)&local_a8);
    } while ((local_a8._padding_ & 0x1fU) != 0);
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldViewIterator(FieldItL)",uVar26,4);
  if ((FBufferOwner *)local_180._padding_ != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)(local_180._padding_ + 0x18);
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)(local_180._padding_ + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)(local_180._padding_ + 0x18) + 0x40000000);
      UNLOCK();
    }
  }
  local_68._padding_ = (longlong)local_180.FieldsEnd;
  local_70 = local_180.FieldsEnd;
  local_78.Owner = (FBufferOwner *)local_180._padding_;
  local_a8._padding_ = (longlong)(uint)local_180._padding_;
  local_a8._padding_ = CONCAT44(local_180._padding_._4_4_,(undefined4)local_180._padding_);
  local_a8._padding_ = (longlong)local_180.FieldsEnd;
  pvVar23 = pvVar25;
  uVar26 = uVar27;
  if (((uint)local_180._padding_ & 0x1f) != 0) {
    do {
      uVar26 = (int)pvVar23 + 1;
      TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)&local_a8);
      pvVar23 = (void *)(ulonglong)uVar26;
    } while ((local_a8._padding_ & 0x1fU) != 0);
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldViewIterator(FieldItR)",uVar26,4);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_78);
  local_1d8 = 0x3020100;
  pFVar14 = FCbFieldView::FCbFieldView((FCbFieldView *)local_88,&local_1d8,IntegerPositive);
  local_1b0._padding_._0_1_ = pFVar14->TypeWithFlags;
  local_1b0._padding_._1_1_ = pFVar14->Error;
  local_1b0._padding_._2_2_ = *(undefined2 *)&pFVar14->field_0x2;
  local_1b0._padding_._4_4_ = pFVar14->NameLen;
  local_1b0._padding_ = (longlong)pFVar14->Value;
  local_1b0.FieldsEnd = local_1d4;
  pFVar16 = TCbFieldIterator<FCbFieldView>::GetRangeHash(&local_198,(FIoHash *)&local_a8);
  pFVar20 = TCbFieldIterator<FCbFieldView>::GetRangeHash
                      ((TCbFieldIterator<FCbFieldView> *)(local_1b8 + 8),(FIoHash *)&local_68);
  FAutomationTestBase::TestEqual<FIoHash>
            ((FAutomationTestBase *)this,L"FCbFieldViewIterator::MakeRange(Uniform).GetRangeHash()",
             pFVar20,pFVar16);
  bVar28 = (local_1b0._padding_ & 0x40U) != 0;
  if (bVar28) {
    FCbFieldView::GetView((FCbFieldView *)(local_1b8 + 8),(TMemoryView<void_const_> *)&local_68);
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,
             L"FCbFieldViewIterator::MakeRange(Uniform).TryGetRangeView()",bVar28);
  local_88._0_8_ = &local_1d8;
  local_88._8_8_ = &DAT_00000004;
  FSharedBuffer::MakeView((TMemoryView<void_const_> *)local_150);
  if ((FBufferOwner *)local_150._0_8_ != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)(local_150._0_8_ + 0x18);
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)(local_150._0_8_ + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)(local_150._0_8_ + 0x18) + 0x40000000);
      UNLOCK();
    }
  }
  local_1c8.Data = (void *)local_150._0_8_;
  FCbFieldIterator::MakeRange
            ((FCbFieldIterator *)&local_108,(FSharedBuffer)&local_1c8,IntegerPositive);
  pFVar16 = TCbFieldIterator<FCbFieldView>::GetRangeHash(&local_198,(FIoHash *)&local_a8);
  pFVar20 = TCbFieldIterator<FCbField>::GetRangeHash(&local_108,(FIoHash *)local_88);
  FAutomationTestBase::TestEqual<FIoHash>
            ((FAutomationTestBase *)this,L"FCbFieldIterator::MakeRange(Uniform).GetRangeHash()",
             pFVar20,pFVar16);
  bVar28 = ((byte)local_108._padding_ & 0x40) != 0;
  if (bVar28) {
    FCbFieldView::GetView((FCbFieldView *)&local_108,&local_1c8);
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbFieldIterator::MakeRange(Uniform).TryGetRangeView()",
             bVar28);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbFieldViewIterator::Equals(Self)",true);
  if (((void *)local_198._padding_ ==
       (void *)CONCAT44(local_180._padding_._4_4_,(undefined4)local_180._padding_)) &&
     (local_198.FieldsEnd == local_180.FieldsEnd)) {
    bVar28 = true;
  }
  else {
    bVar28 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbFieldViewIterator::Equals(OtherType)",bVar28);
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"FCbFieldIterator::Equals(Self)",true);
  if (((void *)CONCAT44(local_180._padding_._4_4_,(undefined4)local_180._padding_) ==
       (void *)local_198._padding_) && (local_180.FieldsEnd == local_198.FieldsEnd)) {
    bVar28 = true;
  }
  else {
    bVar28 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbFieldIterator::Equals(OtherType)",bVar28);
  if (((void *)local_198._padding_ == pvStack_140) && (local_198.FieldsEnd == local_130)) {
    bVar28 = true;
  }
  else {
    bVar28 = false;
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbFieldViewIterator::Equals(OtherRange)",bVar28);
  if ((CONCAT44(local_180._padding_._4_4_,(undefined4)local_180._padding_) == local_e8._8_8_) &&
     (local_180.FieldsEnd == local_d0)) {
    bVar28 = true;
  }
  else {
    bVar28 = false;
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbFieldIterator::Equals(OtherRange)",bVar28);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbFieldViewIterator::Equals(Uniform, Self)",true);
  if ((local_1b0._padding_ == local_108._padding_) && (local_1b0.FieldsEnd == local_108.FieldsEnd))
  {
    bVar28 = true;
  }
  else {
    bVar28 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbFieldViewIterator::Equals(Uniform, OtherType)",bVar28)
  ;
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbFieldIterator::Equals(Uniform, Self)",true);
  if ((local_108._padding_ == local_1b0._padding_) && (local_108.FieldsEnd == local_1b0.FieldsEnd))
  {
    bVar28 = true;
  }
  else {
    bVar28 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbFieldIterator::Equals(Uniform, OtherType)",bVar28);
  FCbFieldView::FCbFieldView((FCbFieldView *)local_88,&local_1d8,IntegerPositive);
  FCbFieldView::FCbFieldView((FCbFieldView *)local_88,&local_1d8,IntegerPositive);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbFieldViewIterator::Equals(SameValue, DifferentEnd)",
             false);
  pFVar14 = FCbFieldView::FCbFieldView((FCbFieldView *)local_88,&local_1d8,IntegerPositive);
  pvVar23 = pFVar14->Value;
  pFVar14 = FCbFieldView::FCbFieldView
                      ((FCbFieldView *)local_88,(void *)((longlong)&local_1d8 + 1),IntegerPositive);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbFieldViewIterator::Equals(DifferentValue, SameEnd)",
             pvVar23 == pFVar14->Value);
  local_88._0_8_ = &local_40;
  local_88._8_8_ = &DAT_00000008;
  TCbFieldIterator<FCbFieldView>::CopyRangeTo(&local_198,(TMemoryView<void> *)local_88);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbFieldViewIterator::MakeRange().CopyRangeTo()",
             (void *)local_40._padding_ == (void *)CONCAT44(uStack_44,local_48));
  local_88._0_8_ = &local_40;
  local_88._8_8_ = &DAT_00000008;
  TCbFieldIterator<FCbField>::CopyRangeTo(&local_180,(TMemoryView<void> *)local_88);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbFieldIterator::MakeRange().CopyRangeTo()",
             (void *)local_40._padding_ == (void *)CONCAT44(uStack_44,local_48));
  local_88._0_8_ = &local_40;
  local_88._8_8_ = &DAT_00000008;
  TCbFieldIterator<FCbFieldView>::CopyRangeTo
            ((TCbFieldIterator<FCbFieldView> *)(local_1b8 + 8),(TMemoryView<void> *)local_88);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbFieldViewIterator::MakeRange(Uniform).CopyRangeTo()",
             (void *)local_40._padding_ == (void *)CONCAT44(uStack_44,local_48));
  local_128._0_8_ = CONCAT71(local_108._padding_._1_7_,(byte)local_108._padding_);
  local_128._8_8_ = local_108._padding_;
  if ((FBufferOwner *)local_108._padding_ != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)(local_108._padding_ + 0x18);
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)(local_108._padding_ + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)(local_108._padding_ + 0x18) + 0x40000000);
      UNLOCK();
    }
  }
  local_118.Owner = (FBufferOwner *)local_108._padding_;
  local_110 = local_108.FieldsEnd;
  FCbFieldIterator::MakeRangeOwned((FCbFieldIterator *)local_128);
  if ((local_128._0_8_ & 0x40) != 0) {
    pTVar18 = FCbFieldView::GetView((FCbFieldView *)local_128,(TMemoryView<void_const_> *)local_88);
    _Buf1 = pTVar18->Data;
    local_a8._padding_ = pTVar18->Size;
    if (((longlong)local_110 - (longlong)_Buf1 == 8) &&
       ((_Buf1 == &local_48 || (iVar13 = memcmp(_Buf1,&local_48,8), iVar13 == 0)))) {
      bVar28 = true;
      goto LAB_141a360de;
    }
  }
  bVar28 = false;
LAB_141a360de:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbFieldIterator::MakeRangeOwned(View)",bVar28);
  local_a8._padding_ = local_128._0_8_;
  local_a8._padding_ = local_128._8_8_;
  if (local_118.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &(local_118.Owner)->ReferenceCountsAndFlags;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
      LOCK();
      (local_118.Owner)->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((longlong)(local_118.Owner)->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
    }
  }
  local_a8._padding_ = (longlong)local_118.Owner;
  local_a8.FieldsEnd = local_110;
  FCbFieldIterator::MakeRangeOwned((FCbFieldIterator *)&local_a8);
  if ((local_a8._padding_ != local_128._8_8_) || (local_a8.FieldsEnd != local_110)) {
    pcVar6 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_88,L"%s: The two values are not equal.");
    (*pcVar6)(this,(ForAnyElementType *)local_88,0);
    if ((FBufferOwner *)local_88._0_8_ != (FBufferOwner *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_a8._padding_);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_118);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_108._padding_);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_150);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_d8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&TStack_138);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_180._padding_);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_160);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_1b8);
  local_88._0_8_ = &local_1d8;
  local_1d8 = CONCAT22(local_1d8._2_2_,8);
  local_88._8_8_ = &DAT_00000002;
  FSharedBuffer::MakeView((TMemoryView<void_const_> *)&local_40);
  FSharedBuffer::GetView((FSharedBuffer *)&local_40,(TMemoryView<void_const_> *)local_88);
  FSharedBuffer::Clone((TMemoryView<void_const_> *)local_150);
  FCbFieldView::FCbFieldView(&local_160,&local_1d8,HasFieldType);
  if ((void *)local_40._padding_ != (void *)0x0) {
    LOCK();
    puVar2 = (ulonglong *)(local_40._padding_ + 0x18);
    uVar4 = *puVar2;
    *puVar2 = *puVar2 + 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 0) {
      LOCK();
      *(longlong *)(local_40._padding_ + 0x18) =
           *(longlong *)(local_40._padding_ + 0x18) + 0x40000000;
      UNLOCK();
    }
  }
  local_1c8.Data = (void *)local_40._padding_;
  FCbField::FCbField((FCbField *)&local_198,(FSharedBuffer)&local_1c8,HasFieldType);
  local_1b0._padding_._0_1_ = local_160.TypeWithFlags;
  local_1b0._padding_._1_1_ = local_160.Error;
  local_1b0._padding_._2_2_ = local_160._2_2_;
  local_1b0._padding_._4_4_ = local_160.NameLen;
  local_1b0._padding_ = (longlong)local_160.Value;
  uVar21 = FCbFieldView::GetValueSize((FCbFieldView *)(local_1b8 + 8));
  local_1b0.FieldsEnd = (void *)(uVar21 + local_1b0._padding_);
  local_a8._padding_ = (longlong)local_1b0.FieldsEnd;
  pvVar23 = pvVar25;
  uVar26 = uVar27;
  local_a8._padding_ = local_1b0._padding_;
  local_a8._padding_ = local_1b0._padding_;
  while ((local_a8._padding_ & 0x1fU) != 0) {
    uVar26 = (int)pvVar23 + 1;
    pvVar23 = (void *)(ulonglong)uVar26;
    TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)&local_a8);
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldViewIterator::MakeSingle(FieldViewL)",uVar26,1);
  local_1b0._padding_._0_1_ = local_160.TypeWithFlags;
  local_1b0._padding_._1_1_ = local_160.Error;
  local_1b0._padding_._2_2_ = local_160._2_2_;
  local_1b0._padding_._4_4_ = local_160.NameLen;
  local_1b0._padding_ = (longlong)local_160.Value;
  uVar21 = FCbFieldView::GetValueSize((FCbFieldView *)(local_1b8 + 8));
  local_1b0.FieldsEnd = (void *)(uVar21 + local_1b0._padding_);
  local_a8._padding_ = (longlong)local_1b0.FieldsEnd;
  pvVar23 = pvVar25;
  uVar26 = uVar27;
  local_a8._padding_ = local_1b0._padding_;
  local_a8._padding_ = local_1b0._padding_;
  while ((local_a8._padding_ & 0x1fU) != 0) {
    uVar26 = (int)pvVar23 + 1;
    pvVar23 = (void *)(ulonglong)uVar26;
    TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)&local_a8);
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldViewIterator::MakeSingle(FieldViewR)",uVar26,1);
  local_1b0._padding_ = local_198._padding_;
  local_1b0._padding_ = local_198._padding_;
  if (local_198.FieldsEnd != (void *)0x0) {
    LOCK();
    lVar7 = (longlong)local_198.FieldsEnd + 0x18;
    uVar4 = *(ulonglong *)lVar7;
    *(longlong *)lVar7 = *(longlong *)lVar7 + 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 0) {
      LOCK();
      *(longlong *)((longlong)local_198.FieldsEnd + 0x18) =
           *(longlong *)((longlong)local_198.FieldsEnd + 0x18) + 0x40000000;
      UNLOCK();
    }
  }
  local_1b0.FieldsEnd = local_198.FieldsEnd;
  pTVar19 = (TCbFieldIterator<FCbField> *)
            FCbFieldIterator::MakeSingle
                      ((FCbFieldIterator *)(local_150 + 8),(FCbField *)(local_1b8 + 8));
  bVar5 = (byte)pTVar19->_padding_;
  pvVar23 = pvVar25;
  while ((bVar5 & 0x1f) != 0) {
    uVar27 = (int)pvVar23 + 1;
    pvVar23 = (void *)(ulonglong)uVar27;
    TCbFieldIterator<FCbField>::operator++(pTVar19);
    bVar5 = (byte)pTVar19->_padding_;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&pTVar19->_padding_);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldIterator::MakeSingle(FieldL)",uVar27,1);
  local_1b0._padding_ = local_198._padding_;
  local_1b0._padding_ = local_198._padding_;
  if (local_198.FieldsEnd != (void *)0x0) {
    LOCK();
    lVar7 = (longlong)local_198.FieldsEnd + 0x18;
    uVar4 = *(ulonglong *)lVar7;
    *(longlong *)lVar7 = *(longlong *)lVar7 + 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 0) {
      LOCK();
      *(longlong *)((longlong)local_198.FieldsEnd + 0x18) =
           *(longlong *)((longlong)local_198.FieldsEnd + 0x18) + 0x40000000;
      UNLOCK();
    }
  }
  local_1b0.FieldsEnd = local_198.FieldsEnd;
  pTVar19 = (TCbFieldIterator<FCbField> *)
            FCbFieldIterator::MakeSingle
                      ((FCbFieldIterator *)(local_150 + 8),(FCbField *)(local_1b8 + 8));
  bVar5 = (byte)pTVar19->_padding_;
  while ((bVar5 & 0x1f) != 0) {
    uVar24 = (int)pvVar25 + 1;
    pvVar25 = (void *)(ulonglong)uVar24;
    TCbFieldIterator<FCbField>::operator++(pTVar19);
    bVar5 = (byte)pTVar19->_padding_;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&pTVar19->_padding_);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldIterator::MakeSingle(FieldR)",uVar24,1);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_198.FieldsEnd);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_150);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_40);
  return true;
}

// GetBeautifiedTestName @ 141a36490

FString * __thiscall
FCbFieldBufferIteratorTest::GetBeautifiedTestName
          (FCbFieldBufferIteratorTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Serialization.CbFieldBufferIterator");
  return __return_storage_ptr__;
}

