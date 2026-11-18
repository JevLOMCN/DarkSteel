// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// GetTestFlags @ 141a46930

EAutomationTestFlags __thiscall FCbFieldArrayTest::GetTestFlags(FCbFieldArrayTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141a46940

bool __thiscall FCbFieldArrayTest::IsStressTest(FCbFieldArrayTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a46950

uint __thiscall FCbFieldArrayTest::GetRequiredDeviceNum(FCbFieldArrayTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a46960

FString * __thiscall
FCbFieldArrayTest::GetTestSourceFileName(FCbFieldArrayTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tests\\Serialization\\CompactBinaryTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a46990

int __thiscall FCbFieldArrayTest::GetTestSourceFileLine(FCbFieldArrayTest *this)

{
  return 0x218;
}

// GetTests @ 141a469a0

/* WARNING: Removing unreachable block (ram,0x000141a46a8d) */
/* WARNING: Removing unreachable block (ram,0x000141a46b58) */

void __thiscall
FCbFieldArrayTest::GetTests
          (FCbFieldArrayTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Serialization.CbField.Array");
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

// RunTest @ 141a46b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FCbFieldArrayTest::RunTest(FCbFieldArrayTest *this,FString *param_1)

{
  atomic<unsigned___int64> *paVar1;
  longlong *this_00;
  atomic<unsigned___int64> aVar2;
  int *piVar3;
  longlong *plVar4;
  code *pcVar5;
  void *pvVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  void *pvVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  FCbArrayView *pFVar13;
  FCbArray *pFVar14;
  FCbArrayView *pFVar15;
  TMemoryView<void_const_> *pTVar16;
  FCbFieldView *pFVar17;
  FCompositeBuffer *pFVar18;
  FSharedBuffer FVar19;
  TMemoryView<void_const_> *pTVar20;
  FCbField *pFVar21;
  FCbArray *pFVar22;
  ulong64 uVar23;
  FIoHash *pFVar24;
  FIoHash *pFVar25;
  ulonglong uVar26;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar27;
  int iVar28;
  int iVar29;
  undefined1 auStackY_1d8 [32];
  TCbFieldTypeAccessors<4> local_198 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_188;
  undefined1 *puStack_180;
  TCbBuffer<FCbArrayView> local_178;
  int *local_158;
  undefined1 *puStack_150;
  undefined1 *local_148;
  void *pvStack_140;
  FCbFieldArrayTest *local_138;
  undefined1 *local_130;
  undefined1 local_128 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_118 [2];
  undefined1 local_108 [8];
  void *pvStack_100;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_f8 [2];
  TCbFieldIterator<FCbField> local_e8;
  TCbBuffer<FCbFieldView> local_c8;
  undefined8 local_b0;
  TCbFieldIterator<FCbField> local_a8;
  undefined4 local_88;
  undefined2 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  char local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  char local_64;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  this_00 = &local_e8._padding_;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_138 = this;
  pFVar13 = FCbArrayView::FCbArrayView((FCbArrayView *)&local_a8);
  pFVar7 = *(FScriptContainerElement **)pFVar13;
  pvVar6 = *(void **)&pFVar13->field_0x8;
  pFVar13 = FCbArrayView::FCbArrayView((FCbArrayView *)local_128);
  pvStack_140 = (void *)CONCAT44(pvStack_140._4_4_,2);
  local_188.Owner = *(FBufferOwner **)pFVar13;
  puStack_180 = *(undefined1 **)&pFVar13->field_0x8;
  local_148 = (undefined1 *)&local_88;
  local_88._0_2_ = 1;
  local_158 = (int *)pFVar7;
  puStack_150 = pvVar6;
  FCbFieldTestBase::TestFieldBytes<4,FCbArrayView,TCbFieldTypeAccessors<4>_>
            ((FCbFieldTestBase *)this,L"Array, Empty",
             (TArrayView<unsigned_char_const_,int> *)&local_148,(FCbArrayView *)&local_188,
             (FCbArrayView *)&local_158,None,local_198);
  FCbArrayView::FCbArrayView((FCbArrayView *)&local_148);
  local_158 = (int *)local_148;
  puStack_150 = pvStack_140;
  `FCbFieldArrayTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_138,(FCbArrayView *)&local_158,0,2);
  FCbFieldView::CreateViewIterator((FCbFieldView *)&local_148,(FCbFieldViewIterator *)&local_178);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbArrayView()::CreateViewIterator() At End",
             (local_178._padding_ & 0x1fU) != 0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbArrayView()::CreateViewIterator() At End",
             (local_178._padding_ & 0x1fU) == 0);
  iVar28 = 0x10;
  do {
    TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)&local_178);
    FCbFieldView::AsInteger((FCbFieldView *)&local_178,0,(FIntegerParams)0x3f);
    iVar28 = iVar28 + -1;
  } while (0 < iVar28);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbArrayView()::CreateViewIterator() At End",
             (local_178._padding_ & 0x1fU) != 0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbArrayView()::CreateViewIterator() At End",
             (local_178._padding_ & 0x1fU) == 0);
  local_70 = 0x1080307;
  local_6c = 0x3080208;
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_148,&local_70,Array);
  pFVar13 = FCbArrayView::FCbArrayView((FCbArrayView *)&local_a8);
  pFVar7 = *(FScriptContainerElement **)pFVar13;
  pvVar6 = *(void **)&pFVar13->field_0x8;
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_158,&local_70,Array);
  local_58._0_8_ = local_158;
  local_58._8_8_ = puStack_150;
  local_188.Owner = (FBufferOwner *)pFVar7;
  puStack_180 = pvVar6;
  FCbFieldTestBase::TestField<4,FCbArrayView,TCbFieldTypeAccessors<4>_>
            ((FCbFieldTestBase *)this,L"Array, NotEmpty",(FCbFieldView *)&local_148,
             (FCbArrayView *)local_58,(FCbArrayView *)&local_188,None,local_198);
  pFVar13 = FCbFieldView::AsArrayView((FCbFieldView *)&local_148,(FCbArrayView *)&local_a8);
  iVar29 = 0;
  local_58._0_8_ = 0;
  TCbBuffer<FCbArrayView>::TCbBuffer<FCbArrayView>(&local_178,pFVar13,(FSharedBuffer)local_58);
  TCbBuffer<FCbArrayView>::MakeOwned(&local_178);
  local_158 = (int *)local_178._padding_;
  puStack_150 = (undefined1 *)local_178._padding_;
  `FCbFieldArrayTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_138,(FCbArrayView *)&local_158,3,8);
  pFVar13 = FCbFieldView::AsArrayView((FCbFieldView *)&local_148,(FCbArrayView *)&local_a8);
  local_158 = *(int **)pFVar13;
  puStack_150 = *(undefined1 **)&pFVar13->field_0x8;
  `FCbFieldArrayTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_138,(FCbArrayView *)&local_158,3,8);
  pFVar13 = FCbFieldView::AsArrayView((FCbFieldView *)&local_148,(FCbArrayView *)&local_a8);
  bVar10 = FCbArrayView::Equals((FCbArrayView *)&local_178,pFVar13);
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"FCbArrayView::Equals()",bVar10);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_178.Buffer.Owner);
  local_88 = 0x1080305;
  local_84 = 0x302;
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_158,&local_88,UniformArray);
  pFVar13 = FCbArrayView::FCbArrayView((FCbArrayView *)&local_e8);
  pFVar7 = *(FScriptContainerElement **)pFVar13;
  pvVar6 = *(void **)&pFVar13->field_0x8;
  FCbFieldView::FCbFieldView((FCbFieldView *)local_108,&local_88,UniformArray);
  local_128._8_8_ = pvStack_100;
  local_188.Owner = (FBufferOwner *)pFVar7;
  puStack_180 = pvVar6;
  FCbFieldTestBase::TestFieldNoClone<5,FCbArrayView,TCbFieldTypeAccessors<5>,FCbFieldView>
            ((FCbFieldTestBase *)this,L"UniformArray",(FCbFieldView *)&local_158,
             (FCbArrayView *)local_128,(FCbArrayView *)&local_188,None,
             (TCbFieldTypeAccessors<5> *)local_198);
  local_188.Owner = (FBufferOwner *)0x0;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
            (&local_c8,(FCbFieldView *)&local_158,(FSharedBuffer)&local_188);
  TCbBuffer<FCbFieldView>::MakeOwned(&local_c8);
  ::FString::PrintfImpl((FString *)&local_188,L"%s, Clone");
  iVar28 = 0;
  TVar27.Owner = (FBufferOwner *)L"";
  if ((int)puStack_180 != 0) {
    TVar27.Owner = local_188.Owner;
  }
  local_a8._padding_ = (longlong)pvStack_100;
  local_128._0_8_ = pFVar7;
  local_128._8_8_ = pvVar6;
  FCbFieldTestBase::TestFieldNoClone<5,FCbArrayView,TCbFieldTypeAccessors<5>,FCbField>
            ((FCbFieldTestBase *)this,(wchar_t *)TVar27.Owner,(FCbField *)&local_c8,
             (FCbArrayView *)&local_a8,(FCbArrayView *)local_128,None,
             (TCbFieldTypeAccessors<5> *)local_198);
  if (local_188.Owner != (FBufferOwner *)0x0) {
    FMemory::Free(local_188.Owner);
  }
  bVar10 = FCbFieldView::Equals((FCbFieldView *)&local_158,(FCbFieldView *)&local_c8);
  ::FString::PrintfImpl((FString *)&local_188,L"FCbFieldView::Equals(%s)");
  TVar27.Owner = (FBufferOwner *)L"";
  if ((int)puStack_180 != 0) {
    TVar27.Owner = local_188.Owner;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)TVar27.Owner,bVar10);
  if (local_188.Owner != (FBufferOwner *)0x0) {
    FMemory::Free(local_188.Owner);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c8.Buffer.Owner);
  pFVar13 = FCbFieldView::AsArrayView((FCbFieldView *)&local_158,(FCbArrayView *)&local_e8);
  local_188.Owner = (FBufferOwner *)0x0;
  TCbBuffer<FCbArrayView>::TCbBuffer<FCbArrayView>(&local_178,pFVar13,(FSharedBuffer)&local_188);
  TCbBuffer<FCbArrayView>::MakeOwned(&local_178);
  local_a8._padding_ = local_178._padding_;
  local_a8._padding_ = local_178._padding_;
  `FCbFieldArrayTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_138,(FCbArrayView *)&local_a8,3,6);
  pFVar13 = FCbFieldView::AsArrayView((FCbFieldView *)&local_158,(FCbArrayView *)&local_e8);
  local_a8._padding_ = *(longlong *)pFVar13;
  local_a8._padding_ = *(longlong *)&pFVar13->field_0x8;
  `FCbFieldArrayTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_138,(FCbArrayView *)&local_a8,3,6);
  pFVar13 = FCbFieldView::AsArrayView((FCbFieldView *)&local_158,(FCbArrayView *)&local_e8);
  bVar10 = FCbArrayView::Equals((FCbArrayView *)&local_178,pFVar13);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbArrayView(Uniform)::Equals()",bVar10);
  if (local_178.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_178.Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)((longlong)local_178.Buffer.Owner.Owner + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)((longlong)local_178.Buffer.Owner.Owner + 0x18) +
           0x40000000);
      UNLOCK();
    }
  }
  local_188 = local_178.Buffer.Owner.Owner;
  local_138 = (FCbFieldArrayTest *)
              (CONCAT71(local_138._1_7_,(byte)local_178._padding_) & 0xffffffffffffff3f);
  local_130 = (undefined1 *)local_178._padding_;
  local_138._0_2_ = (ushort)(ECbFieldType)local_138;
  local_138 = (FCbFieldArrayTest *)((ulonglong)local_138 & 0xffffffff);
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
            (&local_c8,(FCbFieldView *)&local_138,(FSharedBuffer)&local_188);
  pFVar14 = FCbField::AsArray((FCbField *)&local_c8,(FCbArray *)&local_e8);
  local_188.Owner = *(FBufferOwner **)&pFVar14->field_0x10;
  *(undefined8 *)&pFVar14->field_0x10 = 0;
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbArray::AsField()",
             local_178.Buffer.Owner.Owner ==
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)local_188.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_188);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)this_00);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c8.Buffer.Owner);
  local_58._0_8_ = 0x302010803054101;
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_148,local_58,HasFieldName|UniformArray);
  pFVar13 = FCbFieldView::AsArrayView((FCbFieldView *)&local_158,(FCbArrayView *)&local_e8);
  pFVar15 = FCbFieldView::AsArrayView((FCbFieldView *)&local_148,(FCbArrayView *)&local_a8);
  bVar10 = FCbArrayView::Equals(pFVar13,pFVar15);
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"FCbArrayView::Equals()",bVar10);
  pFVar13 = FCbFieldView::AsArrayView((FCbFieldView *)&local_158,(FCbArrayView *)&local_e8);
  local_188.Owner =
       (FBufferOwner *)
       (CONCAT71((int7)((ulonglong)local_188.Owner >> 8),*(undefined1 *)pFVar13) & 0xffff003f);
  puStack_180 = *(undefined1 **)&pFVar13->field_0x8;
  bVar10 = FCbFieldView::Equals((FCbFieldView *)&local_158,(FCbFieldView *)&local_188);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbArrayView::AsFieldView().Equals()",bVar10);
  uVar26 = (ulonglong)local_138 >> 8;
  local_130 = pvStack_140;
  local_138 = (FCbFieldArrayTest *)
              (ulonglong)((uint)CONCAT71((int7)uVar26,(ECbFieldType)local_148) & 0xffff003f);
  pFVar13 = FCbFieldView::AsArrayView((FCbFieldView *)&local_148,(FCbArrayView *)&local_e8);
  local_188.Owner =
       (FBufferOwner *)
       (CONCAT71((int7)((ulonglong)local_188.Owner >> 8),*(undefined1 *)pFVar13) & 0xffff003f);
  puStack_180 = *(undefined1 **)&pFVar13->field_0x8;
  bVar10 = FCbFieldView::Equals((FCbFieldView *)&local_138,(FCbFieldView *)&local_188);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbArrayView::AsFieldView().Equals()",bVar10);
  pFVar13 = FCbFieldView::AsArrayView((FCbFieldView *)&local_158,(FCbArrayView *)&local_e8);
  local_188.Owner = (FBufferOwner *)&local_70;
  puStack_180 = &DAT_00000007;
  FCbArrayView::CopyTo(pFVar13,(TMemoryView<void> *)&local_188);
  local_138 = (FCbFieldArrayTest *)&local_88;
  local_130 = &DAT_00000006;
  local_188.Owner = (FBufferOwner *)((longlong)&local_70 + 1);
  puStack_180 = &DAT_00000006;
  bVar10 = TMemoryView<void_const_>::EqualBytes<void>
                     ((TMemoryView<void_const_> *)&local_138,(TMemoryView<void> *)&local_188);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbArrayView(NoType)::CopyTo()",bVar10);
  pFVar13 = FCbFieldView::AsArrayView((FCbFieldView *)&local_148,(FCbArrayView *)&local_e8);
  local_188.Owner = (FBufferOwner *)&local_70;
  puStack_180 = &DAT_00000007;
  FCbArrayView::CopyTo(pFVar13,(TMemoryView<void> *)&local_188);
  local_138 = (FCbFieldArrayTest *)&local_88;
  local_130 = &DAT_00000006;
  local_188.Owner = (FBufferOwner *)((longlong)&local_70 + 1);
  puStack_180 = &DAT_00000006;
  bVar10 = TMemoryView<void_const_>::EqualBytes<void>
                     ((TMemoryView<void_const_> *)&local_138,(TMemoryView<void> *)&local_188);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbArrayView(NoType, Name)::CopyTo()",bVar10);
  if (((char)(byte)local_178._padding_ < '\0') || (((byte)local_178._padding_ & 0x40) == 0)) {
LAB_141a4731e:
    bVar10 = false;
  }
  else {
    pTVar16 = FCbFieldView::GetView
                        ((FCbFieldView *)&local_178,(TMemoryView<void_const_> *)&local_e8);
    pvVar6 = pTVar16->Data;
    uVar23 = pTVar16->Size;
    pTVar16 = FSharedBuffer::GetView(&local_178.Buffer,(TMemoryView<void_const_> *)&local_a8);
    if ((uVar23 != pTVar16->Size) || ((uVar23 != 0 && (pvVar6 != pTVar16->Data))))
    goto LAB_141a4731e;
    bVar10 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbArrayView(Clone)::TryGetView()",bVar10);
  pFVar17 = (FCbFieldView *)
            FCbFieldView::AsArrayView((FCbFieldView *)&local_158,(FCbArrayView *)&local_e8);
  if (((char)pFVar17->TypeWithFlags < '\0') || ((pFVar17->TypeWithFlags & HasFieldType) == None)) {
    bVar10 = false;
  }
  else {
    FCbFieldView::GetView(pFVar17,(TMemoryView<void_const_> *)&local_a8);
    bVar10 = true;
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbArrayView(NoType)::TryGetView()",bVar10);
  pFVar17 = (FCbFieldView *)
            FCbFieldView::AsArrayView((FCbFieldView *)&local_148,(FCbArrayView *)&local_e8);
  if (((char)pFVar17->TypeWithFlags < '\0') || ((pFVar17->TypeWithFlags & HasFieldType) == None)) {
    bVar10 = false;
  }
  else {
    FCbFieldView::GetView(pFVar17,(TMemoryView<void_const_> *)&local_a8);
    bVar10 = true;
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbArrayView(Name)::TryGetView()",bVar10);
  pFVar18 = FCbArray::GetBuffer((FCbArray *)&local_178,(FCompositeBuffer *)&local_c8);
  FVar19 = FCompositeBuffer::ToShared(pFVar18);
  pTVar16 = FSharedBuffer::GetView
                      ((FSharedBuffer *)FVar19.Owner.Owner,(TMemoryView<void_const_> *)&local_e8);
  pTVar20 = FSharedBuffer::GetView(&local_178.Buffer,(TMemoryView<void_const_> *)&local_a8);
  if ((pTVar16->Size == pTVar20->Size) && ((pTVar16->Size == 0 || (pTVar16->Data == pTVar20->Data)))
     ) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbArrayView(Clone)::GetBuffer()",bVar10);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_188);
  FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)&local_c8);
  local_188.Owner = (FBufferOwner *)0x0;
  pFVar21 = TCbBufferFactory<FCbField,FCbFieldView>::MakeView
                      ((FCbField *)local_108,(FCbFieldView *)&local_158,(FSharedBuffer)&local_188);
  pFVar14 = FCbField::AsArray(pFVar21,(FCbArray *)local_128);
  pFVar18 = FCbArray::GetBuffer(pFVar14,(FCompositeBuffer *)&local_c8);
  FVar19 = FCompositeBuffer::ToShared(pFVar18);
  pTVar16 = FSharedBuffer::GetView
                      ((FSharedBuffer *)FVar19.Owner.Owner,(TMemoryView<void_const_> *)&local_e8);
  pTVar20 = FSharedBuffer::GetView(&local_178.Buffer,(TMemoryView<void_const_> *)&local_a8);
  bVar10 = TMemoryView<void_const_>::EqualBytes<void_const_>(pTVar16,pTVar20);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbArrayView(NoType)::GetBuffer()",bVar10);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_138);
  FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)&local_c8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_118);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_f8);
  local_188.Owner = (FBufferOwner *)0x0;
  pFVar21 = TCbBufferFactory<FCbField,FCbFieldView>::MakeView
                      ((FCbField *)local_108,(FCbFieldView *)&local_148,(FSharedBuffer)&local_188);
  pFVar14 = FCbField::AsArray(pFVar21,(FCbArray *)local_128);
  pFVar18 = FCbArray::GetBuffer(pFVar14,(FCompositeBuffer *)&local_c8);
  FVar19 = FCompositeBuffer::ToShared(pFVar18);
  pTVar16 = FSharedBuffer::GetView
                      ((FSharedBuffer *)FVar19.Owner.Owner,(TMemoryView<void_const_> *)&local_e8);
  pTVar20 = FSharedBuffer::GetView(&local_178.Buffer,(TMemoryView<void_const_> *)&local_a8);
  bVar10 = TMemoryView<void_const_>::EqualBytes<void_const_>(pTVar16,pTVar20);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbArrayView(Name)::GetBuffer()",bVar10);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_138);
  FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)&local_c8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_118);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_f8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_178.Buffer.Owner);
  local_148 = (undefined1 *)(((ulonglong)local_148 >> 0x10 & 0xffff) << 0x10);
  pvStack_140 = (void *)0x0;
  pFVar13 = FCbArrayView::FCbArrayView((FCbArrayView *)&local_e8);
  local_128._0_8_ = *(undefined8 *)pFVar13;
  local_128._8_8_ = *(undefined8 *)&pFVar13->field_0x8;
  bVar10 = true;
  local_a8._padding_ = local_128._0_8_;
  local_a8._padding_ = local_128._8_8_;
  FCbFieldTestBase::TestFieldNoClone<4,FCbArrayView,TCbFieldTypeAccessors<4>,FCbFieldView>
            ((FCbFieldTestBase *)this,L"Array, None, View",(FCbFieldView *)&local_148,
             (FCbArrayView *)local_128,(FCbArrayView *)&local_a8,TypeError,local_198);
  local_108._0_2_ = 0;
  local_108._4_4_ = 0;
  pvStack_100 = (void *)0x0;
  local_f8[0].Owner = (FBufferOwner *)0x0;
  local_178.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_178._padding_ = 0;
  local_178._padding_ = 0;
  FCbArrayView::FCbArrayView((FCbArrayView *)&local_178);
  local_178.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  pFVar14 = FCbArray::FCbArray((FCbArray *)&local_c8,(FCbArray *)&local_178);
  pFVar22 = FCbArray::FCbArray((FCbArray *)&local_e8,(FCbArray *)&local_178);
  FCbFieldTestBase::TestFieldNoClone<4,FCbArray,FCbFieldArrayAccessors,FCbField>
            ((FCbFieldTestBase *)this,L"Array, None",(FCbField *)local_108,pFVar22,pFVar14,TypeError
             ,(FCbFieldArrayAccessors *)local_198);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_178.Buffer.Owner);
  TVar27.Owner = local_f8[0].Owner;
  if (local_f8[0].Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &(local_f8[0].Owner)->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)((local_f8[0].Owner)->_padding_ + 0x10))(local_f8[0].Owner);
      (TVar27.Owner)->Data = (void *)0x0;
      (TVar27.Owner)->Size = 0;
      LOCK();
      paVar1 = &(TVar27.Owner)->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)(TVar27.Owner)->_padding_)(TVar27.Owner,1);
      }
    }
  }
  local_80 = 0x654b0384;
  uStack_7c = 0x8010379;
  local_78 = '\b';
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_148,&local_80,HasFieldType);
  uVar23 = FCbArrayView::GetSize((FCbArrayView *)&local_148);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbArrayView(ArrayWithName)::GetSize()",uVar23,5);
  local_188.Owner = (FBufferOwner *)0x0;
  TCbBuffer<FCbArrayView>::TCbBuffer<FCbArrayView>
            (&local_178,(FCbArrayView *)&local_148,(FSharedBuffer)&local_188);
  TCbBuffer<FCbArrayView>::MakeOwned(&local_178);
  uVar23 = FCbArrayView::GetSize((FCbArrayView *)&local_178);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbArray(ArrayWithName)::GetSize()",uVar23,5);
  bVar11 = FCbArrayView::Equals((FCbArrayView *)&local_148,(FCbArrayView *)&local_178);
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"FCbArrayView::Equals()",bVar11);
  pFVar24 = FCbArrayView::GetHash((FCbArrayView *)&local_148,(FIoHash *)&local_e8);
  pFVar25 = FCbArrayView::GetHash((FCbArrayView *)&local_178,(FIoHash *)&local_a8);
  FAutomationTestBase::TestEqual<FIoHash>
            ((FAutomationTestBase *)this,L"FCbArrayView::GetHash()",pFVar25,pFVar24);
  TCbBuffer<FCbArrayView>::CreateIterator(&local_178,(FCbFieldIterator *)&local_e8);
  while ((local_e8._padding_ & 0x1fU) != 0) {
    if ((FBufferOwner *)local_e8._padding_ != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &((FBufferOwner *)local_e8._padding_)->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        ((FBufferOwner *)local_e8._padding_)->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)((FBufferOwner *)local_e8._padding_)->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    local_c8._padding_ = local_e8._padding_;
    local_c8.Buffer.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)local_e8._padding_;
    uVar23 = FCbFieldView::AsInteger((FCbFieldView *)&local_c8,0,(FIntegerParams)0x3f);
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,L"FCbArray::CreateIterator().AsInt32()",(int)uVar23,8);
    if ((local_c8.Buffer.Owner.Owner == (FBufferOwner *)0x0) ||
       ((SUB81(*(atomic<unsigned___int64> *)((longlong)local_c8.Buffer.Owner.Owner + 0x18),7) >> 4 &
        1) == 0)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"FCbArray::CreateIterator().IsOwned()",bVar11);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c8.Buffer.Owner);
    TCbFieldIterator<FCbField>::operator++(&local_e8);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)this_00);
  TCbBuffer<FCbArrayView>::CreateIterator(&local_178,(FCbFieldIterator *)&local_e8);
  local_c8._padding_ = 0;
  local_c8.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_c8._padding_ = ((ulonglong)local_c8._padding_ >> 0x10 & 0xffff) << 0x10;
  local_b0 = 0;
  while ((local_e8._padding_ != 0 || (local_e8.FieldsEnd != (void *)0x0))) {
    TCbFieldIterator<FCbField>::operator++(&local_e8);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c8.Buffer.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)this_00);
  TCbBuffer<FCbArrayView>::CreateIterator(&local_178,(FCbFieldIterator *)&local_e8);
  while ((local_e8._padding_ & 0x1fU) != 0) {
    if ((FBufferOwner *)local_e8._padding_ != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &((FBufferOwner *)local_e8._padding_)->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        ((FBufferOwner *)local_e8._padding_)->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)((FBufferOwner *)local_e8._padding_)->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    local_c8._padding_ = local_e8._padding_;
    local_c8._padding_ = local_e8._padding_;
    local_c8.Buffer.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)local_e8._padding_;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c8.Buffer.Owner);
    TCbFieldIterator<FCbField>::operator++(&local_e8);
  }
  local_e8._padding_._2_2_ = (undefined2)((ulonglong)local_e8._padding_ >> 0x10);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)this_00);
  local_158 = &local_68;
  puStack_150 = &DAT_00000005;
  FCbArrayView::CopyTo((FCbArrayView *)&local_148,(TMemoryView<void> *)&local_158);
  pTVar16 = FSharedBuffer::GetView(&local_178.Buffer,(TMemoryView<void_const_> *)&local_e8);
  if ((pTVar16->Size == 5) &&
     ((piVar3 = pTVar16->Data, piVar3 == &local_68 ||
      ((*piVar3 == local_68 && ((char)piVar3[1] == local_64)))))) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"FCbArrayView(Name)::CopyTo()",bVar11);
  local_158 = &local_68;
  puStack_150 = &DAT_00000005;
  FCbArrayView::CopyTo((FCbArrayView *)&local_178,(TMemoryView<void> *)&local_158);
  pTVar16 = FSharedBuffer::GetView(&local_178.Buffer,(TMemoryView<void_const_> *)&local_e8);
  if ((pTVar16->Size != 5) ||
     ((piVar3 = pTVar16->Data, bVar11 = bVar10, piVar3 != &local_68 &&
      ((*piVar3 != local_68 || ((char)piVar3[1] != local_64)))))) {
    bVar11 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"FCbArrayView()::CopyTo()",bVar11);
  local_158 = &local_80;
  puStack_150 = &DAT_00000009;
  FVar19 = FSharedBuffer::MakeView((TMemoryView<void_const_> *)&local_138);
  pFVar21 = FCbField::FCbField((FCbField *)&local_a8,FVar19,HasFieldType);
  pFVar18 = FCbField::GetBuffer(pFVar21,(FCompositeBuffer *)&local_c8);
  FVar19 = FCompositeBuffer::ToShared(pFVar18);
  pTVar16 = FSharedBuffer::GetView
                      ((FSharedBuffer *)FVar19.Owner.Owner,(TMemoryView<void_const_> *)&local_e8);
  if ((pTVar16->Size != 9) ||
     ((plVar4 = pTVar16->Data, bVar11 = bVar10, plVar4 != (longlong *)&local_80 &&
      ((*plVar4 != CONCAT44(uStack_7c,local_80) || ((char)plVar4[1] != local_78)))))) {
    bVar11 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbField(ArrayWithName)::GetBuffer()",bVar11);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_188);
  FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)&local_c8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_a8._padding_);
  local_158 = &local_80;
  puStack_150 = &DAT_00000009;
  FVar19 = FSharedBuffer::MakeView((TMemoryView<void_const_> *)&local_138);
  pFVar17 = FCbFieldView::FCbFieldView
                      ((FCbFieldView *)&local_e8,(void *)((longlong)&local_80 + 1),
                       HasFieldName|Array);
  pFVar21 = FCbField::FCbField((FCbField *)local_128,pFVar17,FVar19);
  pFVar18 = FCbField::GetBuffer(pFVar21,(FCompositeBuffer *)&local_c8);
  FVar19 = FCompositeBuffer::ToShared(pFVar18);
  pTVar16 = FSharedBuffer::GetView
                      ((FSharedBuffer *)FVar19.Owner.Owner,(TMemoryView<void_const_> *)&local_a8);
  if ((pTVar16->Size != 9) ||
     ((plVar4 = pTVar16->Data, plVar4 != (longlong *)&local_80 &&
      ((*plVar4 != CONCAT44(uStack_7c,local_80) || ((char)plVar4[1] != local_78)))))) {
    bVar10 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbField(ArrayWithNameNoType)::GetBuffer()",bVar10);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_188);
  FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)&local_c8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_118);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_178.Buffer.Owner);
  FCbArrayView::FCbArrayView((FCbArrayView *)&local_148);
  local_178._padding_ = (longlong)pvStack_140;
  local_178._padding_ = (longlong)(CONCAT22(local_e8._padding_._2_2_,(short)local_148) & 0xffff003f)
  ;
  uVar23 = FCbFieldView::GetValueSize((FCbFieldView *)&local_178);
  local_178.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(uVar23 + local_178._padding_);
  bVar12 = (byte)local_178._padding_;
  local_c8._padding_ = local_178._padding_;
  local_c8._padding_ = local_178._padding_;
  local_c8.Buffer.Owner.Owner = local_178.Buffer.Owner.Owner;
  if ((local_178._padding_ & 0x1fU) != 0) {
    do {
      FAutomationTestBase::TestTrue
                ((FAutomationTestBase *)this,L"FCbArrayView::AsFieldView() as Iterator",
                 (bVar12 & 0x1e) == 4);
      iVar29 = iVar29 + 1;
      TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)&local_c8);
      bVar12 = (byte)local_c8._padding_;
    } while ((local_c8._padding_ & 0x1fU) != 0);
    if (iVar29 == 1) goto LAB_141a47bf6;
  }
  pcVar5 = *(code **)(*(longlong *)this + 0x28);
  ::FString::PrintfImpl((FString *)&local_158,L"%s: The two values are not equal.");
  (*pcVar5)(this,&local_158,0);
  if ((FScriptContainerElement *)local_158 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158);
  }
LAB_141a47bf6:
  FCbArrayView::FCbArrayView((FCbArrayView *)&local_c8);
  local_c8.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  TCbBuffer<FCbArrayView>::MakeOwned((TCbBuffer<FCbArrayView> *)&local_c8);
  pFVar21 = FCbArray::AsField((FCbArray *)&local_c8,(FCbField *)&local_178);
  FCbFieldIterator::MakeSingle((FCbFieldIterator *)&local_a8,pFVar21);
  uVar8 = local_a8._padding_;
  pvVar9 = (void *)local_a8._padding_;
  TVar27.Owner = (FBufferOwner *)local_a8._padding_;
  uVar26 = local_178._padding_;
  pvVar6 = (void *)local_178._padding_;
  FVar19.Owner.Owner = local_178.Buffer.Owner.Owner;
  if ((FBufferOwner *)local_a8._padding_ != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)(local_a8._padding_ + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    uVar8 = local_a8._padding_;
    pvVar9 = (void *)local_a8._padding_;
    TVar27.Owner = (FBufferOwner *)local_a8._padding_;
    if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)(local_a8._padding_ + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)(local_a8._padding_ + 0x18) + 0x40000000);
      UNLOCK();
      uVar8 = local_a8._padding_;
      pvVar9 = (void *)local_a8._padding_;
      TVar27.Owner = (FBufferOwner *)local_a8._padding_;
    }
  }
  while (local_178.Buffer.Owner.Owner =
              (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)
              (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)TVar27.Owner,
        local_178._padding_ = (longlong)pvVar9, local_178._padding_ = uVar8,
        local_e8._padding_ = local_178._padding_, local_e8._padding_ = local_178._padding_,
        local_e8._padding_ = (longlong)local_178.Buffer.Owner.Owner,
        (local_178._padding_ & 0x1fU) != 0) {
    if (local_178.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &((FBufferOwner *)local_178.Buffer.Owner.Owner)->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        ((FBufferOwner *)local_178.Buffer.Owner.Owner)->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)((FBufferOwner *)local_178.Buffer.Owner.Owner)->ReferenceCountsAndFlags +
             0x40000000);
        UNLOCK();
      }
    }
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"FCbArray::AsFieldView() as Iterator",
               ((byte)local_178._padding_ & 0x1e) == 4);
    iVar28 = iVar28 + 1;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_178.Buffer.Owner);
    TCbFieldIterator<FCbField>::operator++(&local_e8);
    uVar8 = local_e8._padding_;
    pvVar9 = (void *)local_e8._padding_;
    TVar27.Owner = (FBufferOwner *)local_e8._padding_;
    uVar26 = local_178._padding_;
    pvVar6 = (void *)local_178._padding_;
    FVar19.Owner.Owner = local_178.Buffer.Owner.Owner;
  }
  local_178._padding_ = uVar26;
  local_178._padding_ = (longlong)pvVar6;
  local_178.Buffer.Owner.Owner = FVar19.Owner.Owner;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)this_00);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_a8._padding_);
  if (iVar28 != 1) {
    pcVar5 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_148,L"%s: The two values are not equal.");
    (*pcVar5)(this,&local_148,0);
    if ((FScriptContainerElement *)local_148 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c8.Buffer.Owner);
  local_88._0_3_ = 0x104;
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_a8,&local_88,HasFieldType);
  local_178.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_178._padding_ = local_a8._padding_;
  local_178._padding_ = local_a8._padding_;
  TCbBuffer<FCbArrayView>::MakeOwned(&local_178);
  FCbFieldView::CreateViewIterator((FCbFieldView *)&local_178,(FCbFieldViewIterator *)&local_c8);
  local_a8.FieldsEnd = (void *)local_c8.Buffer.Owner.Owner;
  if ((local_c8._padding_ & 0x1fU) == 0) {
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    local_a8._padding_ = 0;
    uVar26 = 0;
    local_a8.FieldsEnd = (FBufferOwner *)0x0;
  }
  else {
    if (local_178.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)local_178.Buffer.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        *(atomic<unsigned___int64> *)((longlong)local_178.Buffer.Owner.Owner + 0x18) =
             (atomic<unsigned___int64>)
             ((longlong)*(atomic<unsigned___int64> *)((longlong)local_178.Buffer.Owner.Owner + 0x18)
             + 0x40000000);
        UNLOCK();
      }
    }
    local_188 = local_178.Buffer.Owner.Owner;
    TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
              ((TCbBuffer<FCbFieldView> *)&local_e8,(FCbFieldView *)&local_c8,
               (FSharedBuffer)&local_188);
    uVar26 = local_e8._padding_ & 0xffffffff;
    local_a8._padding_ = local_e8._padding_;
    local_a8._padding_ = local_e8._padding_;
    local_a8._padding_ = local_e8._padding_;
  }
  while ((uVar26 & 0x1f) != 0) {
    TCbFieldIterator<FCbField>::operator++(&local_a8);
    uVar26 = local_a8._padding_;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_a8._padding_);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_178.Buffer.Owner);
  return true;
}

// GetBeautifiedTestName @ 141a47e40

FString * __thiscall
FCbFieldArrayTest::GetBeautifiedTestName(FCbFieldArrayTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Serialization.CbField.Array");
  return __return_storage_ptr__;
}

// operator() @ 141a73870

void __thiscall
`FCbFieldArrayTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,FCbArrayView *param_1,int param_2,ulong64 param_3)

{
  FAutomationTestBase *pFVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  int iVar4;
  int iVar5;
  FCbFieldView local_58;
  TCbFieldIterator<FCbFieldView> local_48;
  TCbFieldIterator<FCbFieldView> local_30;
  
  pFVar1 = *(FAutomationTestBase **)this;
  uVar3 = FCbArrayView::GetSize(param_1);
  FAutomationTestBase::TestEqual
            (pFVar1,L"FCbFieldView(Array)::AsArrayView().GetSize()",uVar3,param_3 + 1);
  pFVar1 = *(FAutomationTestBase **)this;
  uVar3 = FCbArrayView::Num(param_1);
  FAutomationTestBase::TestEqual
            (pFVar1,L"FCbFieldView(Array)::AsArrayView().Num()",uVar3,(longlong)param_2);
  iVar4 = 0;
  iVar5 = 0;
  FCbFieldView::CreateViewIterator((FCbFieldView *)param_1,(FCbFieldViewIterator *)&local_48);
  while ((local_48._padding_ & 0x1fU) != 0) {
    pFVar1 = *(FAutomationTestBase **)this;
    iVar5 = iVar5 + 1;
    uVar3 = FCbFieldView::AsInteger((FCbFieldView *)&local_48,0,(FIntegerParams)0x3f);
    FAutomationTestBase::TestEqual(pFVar1,L"FCbFieldView(Array) Iterator",(int)uVar3,iVar5);
    TCbFieldIterator<FCbFieldView>::operator++(&local_48);
  }
  FAutomationTestBase::TestEqual
            (*(FAutomationTestBase **)this,
             L"FCbFieldView(Array)::AsArrayView().CreateViewIterator() -> Count",iVar5,param_2);
  iVar5 = 0;
  FCbFieldView::CreateViewIterator((FCbFieldView *)param_1,(FCbFieldViewIterator *)&local_48);
  uVar2 = local_58._0_8_;
  local_58._0_8_ = local_48._padding_;
  while ((local_58._0_8_ & 0x1f) != 0) {
    pFVar1 = *(FAutomationTestBase **)this;
    iVar5 = iVar5 + 1;
    local_48._padding_ = local_58._0_8_;
    uVar3 = FCbFieldView::AsInteger(&local_58,0,(FIntegerParams)0x3f);
    FAutomationTestBase::TestEqual(pFVar1,L"FCbFieldView(Array) Range",(int)uVar3,iVar5);
    TCbFieldIterator<FCbFieldView>::operator++(&local_48);
    uVar2 = local_58._0_8_;
    local_58._0_8_ = local_48._padding_;
  }
  local_58._0_8_ = uVar2;
  FAutomationTestBase::TestEqual
            (*(FAutomationTestBase **)this,L"FCbFieldView(Array)::AsArrayView() Range -> Count",
             iVar5,param_2);
  local_58._0_4_ = (uint)CONCAT71(local_58._1_7_,*(undefined1 *)param_1) & 0xffff003f;
  local_58.Value = *(void **)&param_1->field_0x8;
  local_58.NameLen = 0;
  FCbFieldView::CreateViewIterator(&local_58,(FCbFieldViewIterator *)&local_30);
  while (((byte)local_30._padding_ & 0x1f) != 0) {
    pFVar1 = *(FAutomationTestBase **)this;
    iVar4 = iVar4 + 1;
    uVar3 = FCbFieldView::AsInteger((FCbFieldView *)&local_48,0,(FIntegerParams)0x3f);
    FAutomationTestBase::TestEqual(pFVar1,L"FCbFieldView(ArrayField) Range",(int)uVar3,iVar4);
    TCbFieldIterator<FCbFieldView>::operator++(&local_30);
  }
  FAutomationTestBase::TestEqual
            (*(FAutomationTestBase **)this,L"FCbFieldView(ArrayField)::AsArrayView() Range -> Count"
             ,iVar4,param_2);
  return;
}

