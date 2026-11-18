// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 141a36500

EAutomationTestFlags __thiscall FCbFieldBinaryTest::GetTestFlags(FCbFieldBinaryTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141a36510

bool __thiscall FCbFieldBinaryTest::IsStressTest(FCbFieldBinaryTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a36520

uint __thiscall FCbFieldBinaryTest::GetRequiredDeviceNum(FCbFieldBinaryTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a36530

FString * __thiscall
FCbFieldBinaryTest::GetTestSourceFileName(FCbFieldBinaryTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tests\\Serialization\\CompactBinaryTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a36560

int __thiscall FCbFieldBinaryTest::GetTestSourceFileLine(FCbFieldBinaryTest *this)

{
  return 0x2d7;
}

// GetTests @ 141a36570

/* WARNING: Removing unreachable block (ram,0x000141a3665d) */
/* WARNING: Removing unreachable block (ram,0x000141a36728) */

void __thiscall
FCbFieldBinaryTest::GetTests
          (FCbFieldBinaryTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Serialization.CbField.Binary");
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

// RunTest @ 141a36750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall FCbFieldBinaryTest::RunTest(FCbFieldBinaryTest *this,FString *param_1)

{
  atomic<unsigned___int64> *paVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  atomic<unsigned___int64> aVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auVar10 [8];
  FSharedBuffer FVar11;
  undefined ***pppuVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStackY_158 [32];
  undefined1 local_118 [4];
  TCbFieldTypeAccessors<6> local_114;
  uchar local_113 [11];
  FCbFieldView local_108;
  TMemoryView<void_const_> local_f8;
  undefined1 local_e8 [8];
  TCbBuffer<FCbFieldView> local_e0;
  TMemoryView<void_const_> local_c8;
  FBufferOwner *local_b8;
  undefined1 *puStack_b0;
  TMemoryView<void_const_> local_a8;
  code *local_98;
  undefined8 local_90;
  undefined **local_88;
  code *local_80;
  undefined8 local_78;
  undefined ***local_70;
  code *local_68;
  undefined8 local_60;
  undefined **local_58;
  code *local_50;
  undefined8 local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  plVar13 = (longlong *)0x0;
  local_108._0_8_ = local_113;
  local_118 = (undefined1  [4])0x0;
  local_108.Value = (void *)CONCAT44(local_108.Value._4_4_,1);
  local_113[0] = '\0';
  local_f8.Data = (void *)0x0;
  local_f8.Size = 0;
  local_c8.Data = (longlong *)0x0;
  local_c8.Size = 0;
  puStack_b0 = local_108.Value;
  local_b8 = (FBufferOwner *)local_108._0_8_;
  FCbFieldTestBase::TestFieldBytes<6,TMemoryView<void_const_>,TCbFieldTypeAccessors<6>_>
            ((FCbFieldTestBase *)this,L"Binary, Empty",
             (TArrayView<unsigned_char_const_,int> *)&local_b8,&local_c8,&local_f8,None,&local_114);
  local_118 = (undefined1  [4])0x6050403;
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_b8,local_118,Binary);
  local_f8.Data = (void *)((longlong)local_118 + 1);
  local_108._0_8_ = (FBufferOwner *)0x0;
  local_108.Value = (void *)0x0;
  local_f8.Size = (ulong64)&DAT_00000003;
  FCbFieldTestBase::
  TestFieldNoClone<6,TMemoryView<void_const_>,TCbFieldTypeAccessors<6>,FCbFieldView>
            ((FCbFieldTestBase *)this,L"Binary, Value, View",(FCbFieldView *)&local_b8,&local_f8,
             (TMemoryView<void_const_> *)&local_108,None,&local_114);
  local_e0.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_e0._padding_ = (longlong)local_b8;
  local_e0._padding_ = (longlong)puStack_b0;
  TCbBuffer<FCbFieldView>::MakeOwned((TCbBuffer<FCbFieldView> *)(local_e8 + 8));
  local_108._0_8_ = (FBufferOwner *)0x0;
  local_108.Value = (undefined1 *)0x0;
  FCbFieldView::AsBinaryView
            ((FCbFieldView *)(local_e8 + 8),&local_f8,(TMemoryView<void_const_> *)&local_108);
  if (local_e0._padding_._1_1_ == '\0') {
    local_108._0_8_ = local_f8.Data;
    local_108.Value = (void *)local_f8.Size;
    FVar11 = FSharedBuffer::MakeView(&local_c8,(FSharedBuffer *)&local_108);
    local_e8 = *(undefined1 (*) [8])FVar11.Owner.Owner;
    if (local_e8 != (undefined1  [8])0x0) {
      LOCK();
      paVar1 = &((FBufferOwner *)local_e8)->ReferenceCountsAndFlags;
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar4 & 0x3fffffff) == 0) {
        LOCK();
        ((FBufferOwner *)local_e8)->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)((FBufferOwner *)local_e8)->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_c8);
  }
  else {
    local_e8 = (undefined1  [8])0x0;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_e8);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"Binary, Value, AsBinary -> GetOuterBuffer()",
             local_e0.Buffer.Owner.Owner == (FBufferOwner *)0x0);
  local_108._0_8_ = (FBufferOwner *)0x0;
  local_108.Value = (void *)0x0;
  FCbFieldView::AsBinaryView
            ((FCbFieldView *)(local_e8 + 8),&local_a8,(TMemoryView<void_const_> *)&local_108);
  if (local_e0._padding_._1_1_ == '\0') {
    local_e8 = (undefined1  [8])local_e0.Buffer.Owner.Owner;
    local_108._0_8_ = local_a8.Data;
    local_108.Value = (void *)local_a8.Size;
    local_e0.Buffer.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    FVar11 = FSharedBuffer::MakeView(&local_c8,(FSharedBuffer *)&local_108);
    bVar9 = true;
    bVar8 = true;
    bVar7 = false;
    plVar13 = *(longlong **)FVar11.Owner.Owner;
    plVar14 = local_c8.Data;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar13 + 3;
      uVar5 = *plVar2;
      *plVar2 = *plVar2 + 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 0) {
        LOCK();
        plVar13[3] = plVar13[3] + 0x40000000;
        UNLOCK();
      }
    }
  }
  else {
    bVar9 = false;
    bVar8 = false;
    bVar7 = true;
    plVar14 = plVar13;
  }
  local_f8.Data = plVar13;
  if ((bVar7) && (plVar14 != (longlong *)0x0)) {
    LOCK();
    plVar13 = plVar14 + 3;
    lVar6 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (((uint)lVar6 & 0x3fffffff) == 1) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      plVar14[1] = 0;
      plVar14[2] = 0;
      LOCK();
      plVar13 = plVar14 + 3;
      uVar5 = *plVar13;
      *plVar13 = *plVar13 + -0x40000000;
      UNLOCK();
      if (((uint)(uVar5 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar14)(plVar14,1);
      }
    }
  }
  if (bVar8) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_c8);
  }
  auVar10 = local_e8;
  if ((bVar9) && (local_e8 != (undefined1  [8])0x0)) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_e8 + 0x18);
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar4._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_e8 + 0x10))(local_e8);
      *(void **)((longlong)auVar10 + 8) = (void *)0x0;
      *(ulong64 *)((longlong)auVar10 + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)auVar10 + 0x18);
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*(longlong *)auVar10)(auVar10,1);
      }
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_f8);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Binary, Value, AsBinary -> GetOuterBuffer()",
             local_e0.Buffer.Owner.Owner == (FBufferOwner *)0x0);
  FVar11.Owner.Owner = local_e0.Buffer.Owner.Owner;
  if (local_e0.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_e0.Buffer.Owner.Owner + 0x18);
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar4._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_e0.Buffer.Owner.Owner + 0x10))(local_e0.Buffer.Owner.Owner);
      *(void **)((longlong)FVar11.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar11.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar11.Owner.Owner + 0x18);
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*(longlong *)FVar11.Owner.Owner)(FVar11.Owner.Owner,1);
      }
    }
  }
  local_b8 = (FBufferOwner *)local_118;
  local_f8.Data = local_118;
  local_108._0_8_ = ((ulonglong)local_108._0_8_ >> 0x10 & 0xffff) << 0x10;
  local_108.Value = (void *)0x0;
  local_118._0_3_ = 0x30201;
  puStack_b0 = &DAT_00000003;
  local_f8.Size = 3;
  FCbFieldTestBase::
  TestFieldNoClone<6,TMemoryView<void_const_>,TCbFieldTypeAccessors<6>,FCbFieldView>
            ((FCbFieldTestBase *)this,L"Binary, None, View",&local_108,&local_f8,
             (TMemoryView<void_const_> *)&local_b8,TypeError,&local_114);
  local_e0.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_e0._padding_._0_1_ = local_108.TypeWithFlags;
  local_e0._padding_._1_1_ = local_108.Error;
  local_e0._padding_._2_2_ = local_108._2_2_;
  local_e0._padding_._4_4_ = local_108.NameLen;
  local_e0._padding_ = (longlong)local_108.Value;
  TCbBuffer<FCbFieldView>::MakeOwned((TCbBuffer<FCbFieldView> *)(local_e8 + 8));
  local_70 = (undefined ***)0x0;
  local_90 = 0;
  local_78 = 0;
  local_60 = 0;
  local_48 = 0;
  local_88 = &
             ___7__TFunction_OwnedObject_P6A_NAEBVFCbFieldView___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  local_80 = `FCbFieldBinaryTest::RunTest'::__l2::FCbBinaryAccessors::<lambda_5_>::
             <lambda_invoker_cdecl>;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<bool_(__cdecl*)(FCbFieldView_const_&),bool,FCbFieldView_const_&>::
             Call;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AVFSharedBuffer__AEAVFCbFieldView__AEBV1__Z_00_0A__Function_Private_Core_UE__6B_
  ;
  local_50 = `FCbFieldBinaryTest::RunTest'::__l2::FCbBinaryAccessors::<lambda_6_>::
             <lambda_invoker_cdecl>;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<FSharedBuffer_(__cdecl*)(FCbFieldView_&,FSharedBuffer_const_&),FSharedBuffer,FCbFieldView_&,FSharedBuffer_const_&>
             ::Call;
  local_b8 = (FBufferOwner *)local_118;
  local_40 = (undefined ***)0x0;
  puStack_b0 = &DAT_00000003;
  FVar11 = FSharedBuffer::MakeView((TMemoryView<void_const_> *)local_e8);
  local_f8.Data = *(void **)FVar11.Owner.Owner;
  if (local_f8.Data != (void *)0x0) {
    LOCK();
    lVar6 = (longlong)local_f8.Data + 0x18;
    uVar5 = *(ulonglong *)lVar6;
    *(longlong *)lVar6 = *(longlong *)lVar6 + 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 0) {
      LOCK();
      *(longlong *)((longlong)local_f8.Data + 0x18) =
           *(longlong *)((longlong)local_f8.Data + 0x18) + 0x40000000;
      UNLOCK();
    }
  }
  local_c8.Data = *(void **)FVar11.Owner.Owner;
  if (local_c8.Data != (void *)0x0) {
    LOCK();
    lVar6 = (longlong)local_c8.Data + 0x18;
    uVar5 = *(ulonglong *)lVar6;
    *(longlong *)lVar6 = *(longlong *)lVar6 + 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 0) {
      LOCK();
      *(longlong *)((longlong)local_c8.Data + 0x18) =
           *(longlong *)((longlong)local_c8.Data + 0x18) + 0x40000000;
      UNLOCK();
    }
  }
  FCbFieldTestBase::
  TestFieldNoClone<6,FSharedBuffer,_FCbFieldBinaryTest::RunTest_::__l2::FCbBinaryAccessors,FCbField>
            ((FCbFieldTestBase *)this,L"Binary, None",(FCbField *)(local_e8 + 8),
             (FSharedBuffer)&local_c8,(FSharedBuffer)&local_f8,TypeError,
             (FCbBinaryAccessors *)&local_98);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar11.Owner.Owner);
  if (local_68 != (code *)0x0) {
    pppuVar12 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar12 = local_40;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  if (local_98 != (code *)0x0) {
    pppuVar12 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar12 = local_70;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  FVar11.Owner.Owner = local_e0.Buffer.Owner.Owner;
  if (local_e0.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    plVar13 = (longlong *)((longlong)local_e0.Buffer.Owner.Owner + 0x18);
    lVar6 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (((uint)lVar6 & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_e0.Buffer.Owner.Owner + 0x10))(local_e0.Buffer.Owner.Owner);
      *(longlong *)((longlong)FVar11.Owner.Owner + 8) = 0;
      *(longlong *)((longlong)FVar11.Owner.Owner + 0x10) = 0;
      LOCK();
      puVar3 = (ulonglong *)((longlong)FVar11.Owner.Owner + 0x18);
      uVar5 = *puVar3;
      *puVar3 = *puVar3 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar5 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar11.Owner.Owner)(FVar11.Owner.Owner,1);
      }
    }
  }
  return true;
}

// GetBeautifiedTestName @ 141a36d20

FString * __thiscall
FCbFieldBinaryTest::GetBeautifiedTestName(FCbFieldBinaryTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Serialization.CbField.Binary");
  return __return_storage_ptr__;
}

