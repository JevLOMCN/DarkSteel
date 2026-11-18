// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 141a45520

EAutomationTestFlags __thiscall FCbFieldBufferTest::GetTestFlags(FCbFieldBufferTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141a45530

bool __thiscall FCbFieldBufferTest::IsStressTest(FCbFieldBufferTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a45540

uint __thiscall FCbFieldBufferTest::GetRequiredDeviceNum(FCbFieldBufferTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a45550

FString * __thiscall
FCbFieldBufferTest::GetTestSourceFileName(FCbFieldBufferTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tests\\Serialization\\CompactBinaryTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a45580

int __thiscall FCbFieldBufferTest::GetTestSourceFileLine(FCbFieldBufferTest *this)

{
  return 0x5dd;
}

// GetTests @ 141a45590

/* WARNING: Removing unreachable block (ram,0x000141a4567d) */
/* WARNING: Removing unreachable block (ram,0x000141a45748) */

void __thiscall
FCbFieldBufferTest::GetTests
          (FCbFieldBufferTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Serialization.CbFieldBuffer");
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

// RunTest @ 141a45770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FCbFieldBufferTest::RunTest(FCbFieldBufferTest *this,FString *param_1)

{
  atomic<unsigned___int64> *paVar1;
  ulonglong *puVar2;
  ulong64 uVar3;
  atomic<unsigned___int64> aVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FSharedBuffer FVar8;
  bool bVar9;
  undefined1 *puVar10;
  TMemoryView<void_const_> *pTVar11;
  TMemoryView<void_const_> *pTVar12;
  FCbFieldView *pFVar13;
  undefined1 *puVar14;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  undefined1 auStack_168 [32];
  TMemoryView<void_const_> local_148;
  undefined1 *local_138;
  undefined1 *puStack_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  TCbBuffer<FCbFieldView> local_110;
  TMemoryView<void_const_> local_f8;
  TCbBuffer<FCbFieldView> local_e8;
  TCbBuffer<FCbFieldView> local_d0;
  TCbBuffer<FCbFieldView> local_b8;
  TCbBuffer<FCbFieldView> local_a0;
  TCbBuffer<FCbFieldView> local_88;
  TCbBuffer<FCbFieldView> local_70;
  TCbBuffer<FCbFieldView> local_58;
  TCbBuffer<FCbFieldView> local_40;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_168;
  puVar14 = (undefined1 *)0x0;
  local_110._padding_._0_2_ = 0;
  local_110._padding_._4_4_ = 0;
  local_110._padding_ = 0;
  local_110.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,L"FCbField().HasValue()",false);
  if ((local_110.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_110.Buffer.Owner.Owner + 0x18) >>
       0x3c & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,L"FCbField().IsOwned()",bVar9);
  TCbBuffer<FCbFieldView>::MakeOwned(&local_110);
  if ((local_110.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_110.Buffer.Owner.Owner + 0x18) >>
       0x3c & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbField().MakeOwned().IsOwned()",bVar9);
  FVar8.Owner.Owner = local_110.Buffer.Owner.Owner;
  if (local_110.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_110.Buffer.Owner.Owner + 0x18);
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar4._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_110.Buffer.Owner.Owner + 0x10))(local_110.Buffer.Owner.Owner);
      *(void **)((longlong)FVar8.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar8.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar8.Owner.Owner + 0x18);
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar8.Owner.Owner)(FVar8.Owner.Owner,1);
      }
    }
  }
  local_148.Data = &local_28;
  local_28 = 0x5040306;
  local_24 = 6;
  local_148.Size = 5;
  FSharedBuffer::MakeView((TMemoryView<void_const_> *)local_128);
  uVar6 = local_128._0_8_;
  puVar10 = puVar14;
  puVar17 = puVar14;
  if ((FBufferOwner *)local_128._0_8_ != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)(local_128._0_8_ + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_128._0_8_ + 8))(local_128._0_8_);
    }
    uVar7 = local_128._0_8_;
    puVar17 = *(undefined1 **)(uVar6 + 0x10);
    if ((FBufferOwner *)local_128._0_8_ != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)(local_128._0_8_ + 0x18) >> 0x3c & 4) == 0) {
        (**(code **)(*(longlong *)local_128._0_8_ + 8))(local_128._0_8_);
      }
      puVar10 = *(void **)(uVar7 + 8);
    }
  }
  local_148.Data = puVar10;
  local_148.Size = (ulong64)puVar17;
  FSharedBuffer::Clone((TMemoryView<void_const_> *)(local_128 + 8));
  if ((FBufferOwner *)local_128._0_8_ != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)(local_128._0_8_ + 0x18);
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar4 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)(local_128._0_8_ + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)(local_128._0_8_ + 0x18) + 0x40000000);
      UNLOCK();
    }
  }
  local_148.Data = (void *)local_128._0_8_;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
            (&local_110,(FSharedBuffer)&local_148,HasFieldType);
  if ((FBufferOwner *)local_128._0_8_ != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)(local_128._0_8_ + 0x18);
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar4 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)(local_128._0_8_ + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)(local_128._0_8_ + 0x18) + 0x40000000);
      UNLOCK();
    }
  }
  local_148.Data = (void *)local_128._0_8_;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>(&local_40,(FSharedBuffer)&local_148,HasFieldType)
  ;
  if ((FBufferOwner *)local_128._0_8_ != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)(local_128._0_8_ + 0x18);
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar4 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)(local_128._0_8_ + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)(local_128._0_8_ + 0x18) + 0x40000000);
      UNLOCK();
    }
  }
  local_138 = (undefined1 *)
              CONCAT44(local_110._padding_._4_4_,
                       CONCAT22(local_110._padding_._2_2_,(undefined2)local_110._padding_));
  local_148.Data = (void *)local_128._0_8_;
  puStack_130 = (undefined1 *)local_110._padding_;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
            (&local_58,(FCbFieldView *)&local_138,(FSharedBuffer)&local_148);
  if (local_110.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_110.Buffer.Owner.Owner + 0x18);
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar4 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)((longlong)local_110.Buffer.Owner.Owner + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)((longlong)local_110.Buffer.Owner.Owner + 0x18) +
           0x40000000);
      UNLOCK();
    }
  }
  local_138 = (undefined1 *)
              CONCAT44(local_110._padding_._4_4_,
                       CONCAT22(local_110._padding_._2_2_,(undefined2)local_110._padding_));
  local_148.Data = (void *)local_110.Buffer.Owner.Owner;
  puStack_130 = (undefined1 *)local_110._padding_;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
            (&local_70,(FCbFieldView *)&local_138,(FSharedBuffer)&local_148);
  if ((longlong *)local_128._8_8_ != (longlong *)0x0) {
    LOCK();
    puVar2 = (ulonglong *)(local_128._8_8_ + 0x18);
    uVar5 = *puVar2;
    *puVar2 = *puVar2 + 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 0) {
      LOCK();
      *(longlong *)(local_128._8_8_ + 0x18) = *(longlong *)(local_128._8_8_ + 0x18) + 0x40000000;
      UNLOCK();
    }
  }
  local_148.Data = (void *)local_128._8_8_;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>(&local_e8,(FSharedBuffer)&local_148,HasFieldType)
  ;
  if ((longlong *)local_128._8_8_ != (longlong *)0x0) {
    LOCK();
    puVar2 = (ulonglong *)(local_128._8_8_ + 0x18);
    uVar5 = *puVar2;
    *puVar2 = *puVar2 + 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 0) {
      LOCK();
      *(longlong *)(local_128._8_8_ + 0x18) = *(longlong *)(local_128._8_8_ + 0x18) + 0x40000000;
      UNLOCK();
    }
  }
  local_148.Data = (void *)local_128._8_8_;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>(&local_88,(FSharedBuffer)&local_148,HasFieldType)
  ;
  if ((longlong *)local_128._8_8_ != (longlong *)0x0) {
    LOCK();
    puVar2 = (ulonglong *)(local_128._8_8_ + 0x18);
    uVar5 = *puVar2;
    *puVar2 = *puVar2 + 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 0) {
      LOCK();
      *(longlong *)(local_128._8_8_ + 0x18) = *(longlong *)(local_128._8_8_ + 0x18) + 0x40000000;
      UNLOCK();
    }
  }
  local_148.Data = (void *)local_128._8_8_;
  local_138 = (undefined1 *)local_e8._padding_;
  puStack_130 = (undefined1 *)local_e8._padding_;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
            (&local_b8,(FCbFieldView *)&local_138,(FSharedBuffer)&local_148);
  local_d0._padding_ = local_e8._padding_;
  local_d0._padding_ = local_e8._padding_;
  if (local_e8.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_e8.Buffer.Owner.Owner + 0x18);
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar4 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)((longlong)local_e8.Buffer.Owner.Owner + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)((longlong)local_e8.Buffer.Owner.Owner + 0x18) +
           0x40000000);
      UNLOCK();
    }
  }
  local_d0.Buffer.Owner.Owner = local_e8.Buffer.Owner.Owner;
  local_138 = (undefined1 *)local_e8._padding_;
  puStack_130 = (undefined1 *)local_e8._padding_;
  FCbField::FCbField<FCbFieldView>((FCbField *)&local_a0,(FCbFieldView *)&local_138,&local_d0);
  uVar6 = local_128._0_8_;
  TVar15.Owner = (FBufferOwner *)local_128._0_8_;
  puVar17 = puVar14;
  if ((FBufferOwner *)local_128._0_8_ != (FBufferOwner *)0x0) {
    if (((ulonglong)*(atomic<unsigned___int64> *)(local_128._0_8_ + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_128._0_8_ + 8))(local_128._0_8_);
    }
    TVar15.Owner = (FBufferOwner *)local_128._0_8_;
    puVar17 = *(undefined1 **)(uVar6 + 0x10);
  }
  puVar10 = puVar14;
  if (TVar15.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(TVar15.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((TVar15.Owner)->_padding_ + 8))(TVar15.Owner);
    }
    puVar10 = (TVar15.Owner)->Data;
  }
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  puStack_130 = &DAT_00000003;
  if (puVar17 < &DAT_00000003) {
    puStack_130 = puVar17;
  }
  local_138 = puVar17 + ((longlong)puVar10 - (longlong)puStack_130);
  pTVar11 = FCbFieldView::AsBinaryView((FCbFieldView *)&local_110,&local_f8,&local_148);
  FAutomationTestBase::TestEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,L"FCbField(ViewBuffer)",pTVar11,
             (TMemoryView<void_const_> *)&local_138);
  local_138 = (void *)0x0;
  puStack_130 = (void *)0x0;
  pTVar11 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_110,&local_f8,(TMemoryView<void_const_> *)&local_138);
  local_138 = (void *)0x0;
  puStack_130 = (void *)0x0;
  pTVar12 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_40,&local_148,(TMemoryView<void_const_> *)&local_138);
  FAutomationTestBase::TestEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,L"FCbField(ViewBuffer&&)",pTVar12,pTVar11);
  local_138 = (void *)0x0;
  puStack_130 = (void *)0x0;
  pTVar11 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_110,&local_f8,(TMemoryView<void_const_> *)&local_138);
  local_138 = (void *)0x0;
  puStack_130 = (void *)0x0;
  pTVar12 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_58,&local_148,(TMemoryView<void_const_> *)&local_138);
  FAutomationTestBase::TestEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,L"FCbField(ViewOuterField)",pTVar12,pTVar11);
  local_138 = (void *)0x0;
  puStack_130 = (void *)0x0;
  pTVar11 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_110,&local_f8,(TMemoryView<void_const_> *)&local_138);
  local_138 = (void *)0x0;
  puStack_130 = (void *)0x0;
  pTVar12 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_70,&local_148,(TMemoryView<void_const_> *)&local_138);
  FAutomationTestBase::TestEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,L"FCbField(ViewOuterBuffer)",pTVar12,pTVar11);
  uVar6 = local_128._8_8_;
  plVar16 = (longlong *)local_128._8_8_;
  puVar17 = puVar14;
  if ((longlong *)local_128._8_8_ != (longlong *)0x0) {
    if ((*(ulonglong *)(local_128._8_8_ + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)local_128._8_8_ + 8))(local_128._8_8_);
    }
    plVar16 = (longlong *)local_128._8_8_;
    puVar17 = *(undefined1 **)(uVar6 + 0x10);
  }
  if (plVar16 != (longlong *)0x0) {
    if (((ulonglong)plVar16[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar16 + 8))(plVar16);
    }
    puVar14 = (undefined1 *)plVar16[1];
  }
  local_138 = (void *)0x0;
  puStack_130 = (void *)0x0;
  local_148.Size = (ulong64)&DAT_00000003;
  if (puVar17 < &DAT_00000003) {
    local_148.Size = (ulong64)puVar17;
  }
  local_148.Data = puVar17 + ((longlong)puVar14 - local_148.Size);
  pTVar11 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_e8,&local_f8,(TMemoryView<void_const_> *)&local_138);
  FAutomationTestBase::TestEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,L"FCbField(OwnedBuffer)",pTVar11,&local_148);
  local_138 = (void *)0x0;
  puStack_130 = (void *)0x0;
  pTVar11 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_e8,&local_f8,(TMemoryView<void_const_> *)&local_138);
  local_138 = (void *)0x0;
  puStack_130 = (void *)0x0;
  pTVar12 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_88,&local_148,(TMemoryView<void_const_> *)&local_138);
  FAutomationTestBase::TestEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,L"FCbField(OwnedBuffer&&)",pTVar12,pTVar11);
  local_138 = (void *)0x0;
  puStack_130 = (void *)0x0;
  pTVar11 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_e8,&local_f8,(TMemoryView<void_const_> *)&local_138);
  local_138 = (void *)0x0;
  puStack_130 = (void *)0x0;
  pTVar12 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_b8,&local_148,(TMemoryView<void_const_> *)&local_138);
  FAutomationTestBase::TestEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,L"FCbField(OwnedOuterField)",pTVar12,pTVar11);
  local_138 = (void *)0x0;
  puStack_130 = (void *)0x0;
  pTVar11 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_e8,&local_f8,(TMemoryView<void_const_> *)&local_138);
  local_138 = (void *)0x0;
  puStack_130 = (void *)0x0;
  pTVar12 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_a0,&local_148,(TMemoryView<void_const_> *)&local_138);
  FAutomationTestBase::TestEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,L"FCbField(OwnedOuterBuffer)",pTVar12,pTVar11);
  if ((local_110.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_110.Buffer.Owner.Owner + 0x18) >>
       0x3c & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbField(ViewBuffer).IsOwned()",bVar9);
  if ((local_40.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_40.Buffer.Owner.Owner + 0x18) >>
       0x3c & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbField(ViewBuffer&&).IsOwned()",bVar9);
  if ((local_58.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_58.Buffer.Owner.Owner + 0x18) >>
       0x3c & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbField(ViewOuterField).IsOwned()",bVar9);
  if ((local_70.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_70.Buffer.Owner.Owner + 0x18) >>
       0x3c & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbField(ViewOuterBuffer).IsOwned()",bVar9);
  if ((local_e8.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_e8.Buffer.Owner.Owner + 0x18) >>
       0x3c & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbField(OwnedBuffer).IsOwned()",bVar9);
  if ((local_88.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_88.Buffer.Owner.Owner + 0x18) >>
       0x3c & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbField(OwnedBuffer&&).IsOwned()",bVar9);
  if ((local_b8.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_b8.Buffer.Owner.Owner + 0x18) >>
       0x3c & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbField(OwnedOuterField).IsOwned()",bVar9);
  if ((local_a0.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_a0.Buffer.Owner.Owner + 0x18) >>
       0x3c & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbField(OwnedOuterBuffer).IsOwned()",bVar9);
  TCbBuffer<FCbFieldView>::MakeOwned(&local_110);
  TCbBuffer<FCbFieldView>::MakeOwned(&local_e8);
  pTVar11 = FSharedBuffer::GetView((FSharedBuffer *)local_128,&local_f8);
  local_138 = (void *)0x0;
  puStack_130 = (void *)0x0;
  uVar5 = pTVar11->Size;
  local_148.Size = 3;
  if (uVar5 < 3) {
    local_148.Size = uVar5;
  }
  local_148.Data = (void *)((longlong)pTVar11->Data + (uVar5 - local_148.Size));
  pTVar11 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_110,(TMemoryView<void_const_> *)&local_d0,
                       (TMemoryView<void_const_> *)&local_138);
  FAutomationTestBase::TestNotEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,L"FCbField(View).MakeOwned()",pTVar11,&local_148);
  if ((local_110.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_110.Buffer.Owner.Owner + 0x18) >>
       0x3c & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbField(View).MakeOwned().IsOwned()",bVar9);
  pTVar11 = FSharedBuffer::GetView
                      ((FSharedBuffer *)(local_128 + 8),(TMemoryView<void_const_> *)&local_d0);
  local_138 = (void *)0x0;
  puStack_130 = (void *)0x0;
  uVar5 = pTVar11->Size;
  local_148.Size = 3;
  if (uVar5 < 3) {
    local_148.Size = uVar5;
  }
  local_148.Data = (void *)((longlong)pTVar11->Data + (uVar5 - local_148.Size));
  pTVar11 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_e8,&local_f8,(TMemoryView<void_const_> *)&local_138);
  FAutomationTestBase::TestEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,L"FCbField(Owned).MakeOwned()",pTVar11,&local_148);
  if ((local_e8.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_e8.Buffer.Owner.Owner + 0x18) >>
       0x3c & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbField(Owned).MakeOwned().IsOwned()",bVar9);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_a0.Buffer.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_b8.Buffer.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_88.Buffer.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_e8.Buffer.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_70.Buffer.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_58.Buffer.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_40.Buffer.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_110.Buffer.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_128 + 8));
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_128);
  local_28 = 0x5040306;
  local_24 = 6;
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_138,&local_28,HasFieldType);
  pFVar13 = FCbFieldView::FCbFieldView((FCbFieldView *)&local_d0,&local_28,HasFieldType);
  local_148.Data = (void *)0x0;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>(&local_110,pFVar13,(FSharedBuffer)&local_148);
  pFVar13 = FCbFieldView::FCbFieldView((FCbFieldView *)&local_d0,&local_28,HasFieldType);
  local_148.Data = (void *)0x0;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>(&local_a0,pFVar13,(FSharedBuffer)&local_148);
  TCbBuffer<FCbFieldView>::MakeOwned(&local_a0);
  local_148.Data = (void *)0x0;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
            (&local_b8,(FCbFieldView *)&local_138,(FSharedBuffer)&local_148);
  local_148.Data = (void *)0x0;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
            (&local_88,(FCbFieldView *)&local_138,(FSharedBuffer)&local_148);
  TCbBuffer<FCbFieldView>::MakeOwned(&local_88);
  local_148.Data = (void *)0x0;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
            (&local_e8,(FCbFieldView *)&local_b8,(FSharedBuffer)&local_148);
  TCbBuffer<FCbFieldView>::MakeOwned(&local_e8);
  uVar3 = (longlong)&local_28 + 2;
  local_118 = 3;
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  local_128._8_8_ = uVar3;
  pTVar11 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_110,(TMemoryView<void_const_> *)&local_d0,&local_148);
  FAutomationTestBase::TestEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,L"FCbField::MakeView(Void)",pTVar11,
             (TMemoryView<void_const_> *)(local_128 + 8));
  local_118 = 3;
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  local_128._8_8_ = uVar3;
  pTVar11 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_a0,(TMemoryView<void_const_> *)&local_d0,&local_148);
  FAutomationTestBase::TestNotEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,L"FCbField::Clone(Void)",pTVar11,
             (TMemoryView<void_const_> *)(local_128 + 8));
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  pTVar11 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_a0,(TMemoryView<void_const_> *)&local_d0,&local_148);
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  pTVar12 = FCbFieldView::AsBinaryView((FCbFieldView *)&local_110,&local_f8,&local_148);
  bVar9 = TMemoryView<void_const_>::EqualBytes<void_const_>(pTVar11,pTVar12);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbField::Clone(Void)->EqualBytes",bVar9);
  local_118 = 3;
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  local_128._8_8_ = uVar3;
  pTVar11 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_b8,(TMemoryView<void_const_> *)&local_d0,&local_148);
  FAutomationTestBase::TestEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,L"FCbField::MakeView(Field)",pTVar11,
             (TMemoryView<void_const_> *)(local_128 + 8));
  local_118 = 3;
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  local_128._8_8_ = uVar3;
  pTVar11 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_88,(TMemoryView<void_const_> *)&local_d0,&local_148);
  FAutomationTestBase::TestNotEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,L"FCbField::Clone(Field)",pTVar11,
             (TMemoryView<void_const_> *)(local_128 + 8));
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  pTVar11 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_88,(TMemoryView<void_const_> *)&local_d0,&local_148);
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  pTVar12 = FCbFieldView::AsBinaryView((FCbFieldView *)&local_110,&local_f8,&local_148);
  bVar9 = TMemoryView<void_const_>::EqualBytes<void_const_>(pTVar11,pTVar12);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbField::Clone(Field)->EqualBytes",bVar9);
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  pTVar11 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_b8,(TMemoryView<void_const_> *)&local_d0,&local_148);
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  pTVar12 = FCbFieldView::AsBinaryView((FCbFieldView *)&local_e8,&local_f8,&local_148);
  FAutomationTestBase::TestNotEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,L"FCbField::Clone(FieldView)",pTVar12,pTVar11);
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  pTVar11 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_e8,(TMemoryView<void_const_> *)&local_d0,&local_148);
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  pTVar12 = FCbFieldView::AsBinaryView((FCbFieldView *)&local_110,&local_f8,&local_148);
  bVar9 = TMemoryView<void_const_>::EqualBytes<void_const_>(pTVar11,pTVar12);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbField::Clone(FieldView)->EqualBytes",bVar9);
  if ((local_110.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_110.Buffer.Owner.Owner + 0x18) >>
       0x3c & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbField::MakeView(Void).IsOwned()",bVar9);
  if ((local_a0.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_a0.Buffer.Owner.Owner + 0x18) >>
       0x3c & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbField::Clone(Void).IsOwned()",bVar9);
  if ((local_b8.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_b8.Buffer.Owner.Owner + 0x18) >>
       0x3c & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbField::MakeView(Field).IsOwned()",bVar9);
  if ((local_88.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_88.Buffer.Owner.Owner + 0x18) >>
       0x3c & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbField::Clone(Field).IsOwned()",bVar9);
  if ((local_e8.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_e8.Buffer.Owner.Owner + 0x18) >>
       0x3c & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbField::Clone(FieldView).IsOwned()",bVar9);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_e8.Buffer.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_88.Buffer.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_b8.Buffer.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_a0.Buffer.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_110.Buffer.Owner);
  local_28 = 0x6050403;
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_138,&local_28,Binary);
  local_128._0_8_ = (FBufferOwner *)0x0;
  local_128._8_8_ = 0;
  local_148.Data = (void *)0x0;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
            (&local_110,(FCbFieldView *)&local_138,(FSharedBuffer)&local_148);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_128 + 8));
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_128);
  local_128._0_8_ = (FBufferOwner *)0x0;
  local_128._8_8_ = 0;
  local_148.Data = (void *)0x0;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
            (&local_b8,(FCbFieldView *)&local_138,(FSharedBuffer)&local_148);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_128 + 8));
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_128);
  TCbBuffer<FCbFieldView>::MakeOwned(&local_b8);
  local_128._0_8_ = (FBufferOwner *)0x0;
  local_128._8_8_ = 0;
  local_148.Data = (void *)0x0;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
            (&local_a0,(FCbFieldView *)&local_110,(FSharedBuffer)&local_148);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_128 + 8));
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_128);
  TCbBuffer<FCbFieldView>::MakeOwned(&local_a0);
  local_118 = 3;
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  local_128._8_8_ = (void *)((longlong)&local_28 + 1U);
  pTVar11 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_110,(TMemoryView<void_const_> *)&local_d0,&local_148);
  FAutomationTestBase::TestEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,L"FCbField::MakeView(Field, NoType)",pTVar11,
             (TMemoryView<void_const_> *)(local_128 + 8));
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  pTVar11 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_b8,(TMemoryView<void_const_> *)&local_d0,&local_148);
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  pTVar12 = FCbFieldView::AsBinaryView((FCbFieldView *)&local_110,&local_f8,&local_148);
  bVar9 = TMemoryView<void_const_>::EqualBytes<void_const_>(pTVar11,pTVar12);
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"FCbField::Clone(Field, NoType)",bVar9)
  ;
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  pTVar11 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_a0,(TMemoryView<void_const_> *)&local_d0,&local_148);
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  pTVar12 = FCbFieldView::AsBinaryView((FCbFieldView *)&local_110,&local_f8,&local_148);
  bVar9 = TMemoryView<void_const_>::EqualBytes<void_const_>(pTVar11,pTVar12);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbField::Clone(FieldView, NoType)",bVar9);
  if ((local_110.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_110.Buffer.Owner.Owner + 0x18) >>
       0x3c & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbField::MakeView(Field, NoType).IsOwned()",bVar9);
  if ((local_b8.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_b8.Buffer.Owner.Owner + 0x18) >>
       0x3c & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbField::Clone(Field, NoType).IsOwned()",bVar9);
  if ((local_a0.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_a0.Buffer.Owner.Owner + 0x18) >>
       0x3c & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbField::Clone(FieldView, NoType).IsOwned()",bVar9);
  TCbBuffer<FCbFieldView>::MakeOwned(&local_110);
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  pTVar11 = FCbFieldView::AsBinaryView
                      ((FCbFieldView *)&local_110,(TMemoryView<void_const_> *)&local_d0,&local_148);
  local_148.Size = 3;
  local_148.Data = (void *)((longlong)&local_28 + 1U);
  bVar9 = TMemoryView<void_const_>::EqualBytes<void_const_>(pTVar11,&local_148);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbField::MakeView(NoType).MakeOwned()",bVar9);
  if ((local_110.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
     (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_110.Buffer.Owner.Owner + 0x18) >>
       0x3c & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbField::MakeView(NoType).MakeOwned().IsOwned()",bVar9);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_a0.Buffer.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_b8.Buffer.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_110.Buffer.Owner);
  return true;
}

// GetBeautifiedTestName @ 141a468c0

FString * __thiscall
FCbFieldBufferTest::GetBeautifiedTestName(FCbFieldBufferTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Serialization.CbFieldBuffer");
  return __return_storage_ptr__;
}

