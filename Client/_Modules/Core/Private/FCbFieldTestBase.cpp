// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 82

// TestField<2,FCbObjectView,TCbFieldTypeAccessors<2>_> @ 141a56b30

void __thiscall
FCbFieldTestBase::TestField<2,FCbObjectView,TCbFieldTypeAccessors<2>_>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,FCbObjectView *param_3,
          FCbObjectView *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<2> *param_6)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FSharedBuffer FVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FString local_78;
  FCbObjectView local_68;
  FCbObjectView local_58;
  TCbBuffer<FCbFieldView> local_48;
  
  local_68._0_8_ = *(undefined8 *)param_3;
  local_68._8_8_ = *(undefined8 *)&param_3->field_0x8;
  local_78.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_4;
  local_78.Data.ArrayNum = *(int *)&param_4->field_0x8;
  local_78.Data.ArrayMax = *(int *)&param_4->field_0xc;
  TestFieldNoClone<2,FCbObjectView,TCbFieldTypeAccessors<2>,FCbFieldView>
            (this,param_1,param_2,&local_68,(FCbObjectView *)&local_78,param_5,param_6);
  local_48._padding_._0_1_ = param_2->TypeWithFlags;
  local_48._padding_._1_1_ = param_2->Error;
  local_48._padding_._2_2_ = *(undefined2 *)&param_2->field_0x2;
  local_48._padding_._4_4_ = param_2->NameLen;
  local_48._padding_ = (longlong)param_2->Value;
  local_48.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  TCbBuffer<FCbFieldView>::MakeOwned(&local_48);
  ::FString::PrintfImpl(&local_78,L"%s, Clone");
  local_68._0_8_ = *(undefined8 *)param_4;
  local_68._8_8_ = *(undefined8 *)&param_4->field_0x8;
  local_58._0_8_ = *(undefined8 *)param_3;
  local_58._8_8_ = *(undefined8 *)&param_3->field_0x8;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar5.Data = local_78.Data.AllocatorInstance.Data;
  }
  TestFieldNoClone<2,FCbObjectView,TCbFieldTypeAccessors<2>,FCbField>
            (this,(wchar_t *)FVar5.Data,(FCbField *)&local_48,&local_58,&local_68,param_5,param_6);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  bVar4 = FCbFieldView::Equals(param_2,(FCbFieldView *)&local_48);
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::Equals(%s)");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar5.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  FVar3.Owner.Owner = local_48.Buffer.Owner.Owner;
  if (local_48.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_48.Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_48.Buffer.Owner.Owner + 0x10))(local_48.Buffer.Owner.Owner);
      *(void **)((longlong)FVar3.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar3.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar3.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar3.Owner.Owner)(FVar3.Owner.Owner,1);
      }
    }
  }
  return;
}

// TestField<3,FCbObjectView,TCbFieldTypeAccessors<3>_> @ 141a56d10

void __thiscall
FCbFieldTestBase::TestField<3,FCbObjectView,TCbFieldTypeAccessors<3>_>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,FCbObjectView *param_3,
          FCbObjectView *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<3> *param_6)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FSharedBuffer FVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FString local_78;
  FCbObjectView local_68;
  FCbObjectView local_58;
  TCbBuffer<FCbFieldView> local_48;
  
  local_68._0_8_ = *(undefined8 *)param_3;
  local_68._8_8_ = *(undefined8 *)&param_3->field_0x8;
  local_78.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_4;
  local_78.Data.ArrayNum = *(int *)&param_4->field_0x8;
  local_78.Data.ArrayMax = *(int *)&param_4->field_0xc;
  TestFieldNoClone<3,FCbObjectView,TCbFieldTypeAccessors<3>,FCbFieldView>
            (this,param_1,param_2,&local_68,(FCbObjectView *)&local_78,param_5,param_6);
  local_48._padding_._0_1_ = param_2->TypeWithFlags;
  local_48._padding_._1_1_ = param_2->Error;
  local_48._padding_._2_2_ = *(undefined2 *)&param_2->field_0x2;
  local_48._padding_._4_4_ = param_2->NameLen;
  local_48._padding_ = (longlong)param_2->Value;
  local_48.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  TCbBuffer<FCbFieldView>::MakeOwned(&local_48);
  ::FString::PrintfImpl(&local_78,L"%s, Clone");
  local_68._0_8_ = *(undefined8 *)param_4;
  local_68._8_8_ = *(undefined8 *)&param_4->field_0x8;
  local_58._0_8_ = *(undefined8 *)param_3;
  local_58._8_8_ = *(undefined8 *)&param_3->field_0x8;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar5.Data = local_78.Data.AllocatorInstance.Data;
  }
  TestFieldNoClone<3,FCbObjectView,TCbFieldTypeAccessors<3>,FCbField>
            (this,(wchar_t *)FVar5.Data,(FCbField *)&local_48,&local_58,&local_68,param_5,param_6);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  bVar4 = FCbFieldView::Equals(param_2,(FCbFieldView *)&local_48);
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::Equals(%s)");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar5.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  FVar3.Owner.Owner = local_48.Buffer.Owner.Owner;
  if (local_48.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_48.Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_48.Buffer.Owner.Owner + 0x10))(local_48.Buffer.Owner.Owner);
      *(void **)((longlong)FVar3.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar3.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar3.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar3.Owner.Owner)(FVar3.Owner.Owner,1);
      }
    }
  }
  return;
}

// TestField<4,FCbArrayView,TCbFieldTypeAccessors<4>_> @ 141a56ef0

void __thiscall
FCbFieldTestBase::TestField<4,FCbArrayView,TCbFieldTypeAccessors<4>_>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,FCbArrayView *param_3,
          FCbArrayView *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<4> *param_6)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FSharedBuffer FVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FString local_78;
  FCbArrayView local_68;
  FCbArrayView local_58;
  TCbBuffer<FCbFieldView> local_48;
  
  local_68._0_8_ = *(undefined8 *)param_3;
  local_68._8_8_ = *(undefined8 *)&param_3->field_0x8;
  local_78.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_4;
  local_78.Data.ArrayNum = *(int *)&param_4->field_0x8;
  local_78.Data.ArrayMax = *(int *)&param_4->field_0xc;
  TestFieldNoClone<4,FCbArrayView,TCbFieldTypeAccessors<4>,FCbFieldView>
            (this,param_1,param_2,&local_68,(FCbArrayView *)&local_78,param_5,param_6);
  local_48._padding_._0_1_ = param_2->TypeWithFlags;
  local_48._padding_._1_1_ = param_2->Error;
  local_48._padding_._2_2_ = *(undefined2 *)&param_2->field_0x2;
  local_48._padding_._4_4_ = param_2->NameLen;
  local_48._padding_ = (longlong)param_2->Value;
  local_48.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  TCbBuffer<FCbFieldView>::MakeOwned(&local_48);
  ::FString::PrintfImpl(&local_78,L"%s, Clone");
  local_68._0_8_ = *(undefined8 *)param_4;
  local_68._8_8_ = *(undefined8 *)&param_4->field_0x8;
  local_58._0_8_ = *(undefined8 *)param_3;
  local_58._8_8_ = *(undefined8 *)&param_3->field_0x8;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar5.Data = local_78.Data.AllocatorInstance.Data;
  }
  TestFieldNoClone<4,FCbArrayView,TCbFieldTypeAccessors<4>,FCbField>
            (this,(wchar_t *)FVar5.Data,(FCbField *)&local_48,&local_58,&local_68,param_5,param_6);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  bVar4 = FCbFieldView::Equals(param_2,(FCbFieldView *)&local_48);
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::Equals(%s)");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar5.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  FVar3.Owner.Owner = local_48.Buffer.Owner.Owner;
  if (local_48.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_48.Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_48.Buffer.Owner.Owner + 0x10))(local_48.Buffer.Owner.Owner);
      *(void **)((longlong)FVar3.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar3.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar3.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar3.Owner.Owner)(FVar3.Owner.Owner,1);
      }
    }
  }
  return;
}

// TestField<10,float,TCbFieldTypeAccessors<10>_> @ 141a570d0

void __thiscall
FCbFieldTestBase::TestField<10,float,TCbFieldTypeAccessors<10>_>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,float param_3,float param_4
          ,ECbFieldError param_5,TCbFieldTypeAccessors<10> *param_6)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FSharedBuffer FVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FString local_68;
  TCbBuffer<FCbFieldView> local_58 [2];
  
  TestFieldNoClone<10,float,TCbFieldTypeAccessors<10>,FCbFieldView>
            (this,param_1,param_2,param_3,param_4,param_5,param_6);
  local_58[0]._padding_._0_1_ = param_2->TypeWithFlags;
  local_58[0]._padding_._1_1_ = param_2->Error;
  local_58[0]._padding_._2_2_ = *(undefined2 *)&param_2->field_0x2;
  local_58[0]._padding_._4_4_ = param_2->NameLen;
  local_58[0]._padding_ = (longlong)param_2->Value;
  local_58[0].Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  TCbBuffer<FCbFieldView>::MakeOwned(local_58);
  ::FString::PrintfImpl(&local_68,L"%s, Clone");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar5.Data = local_68.Data.AllocatorInstance.Data;
  }
  TestFieldNoClone<10,float,TCbFieldTypeAccessors<10>,FCbField>
            (this,(wchar_t *)FVar5.Data,(FCbField *)local_58,param_3,param_4,param_5,param_6);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  bVar4 = FCbFieldView::Equals(param_2,(FCbFieldView *)local_58);
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::Equals(%s)");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar5.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  FVar3.Owner.Owner = local_58[0].Buffer.Owner.Owner;
  if (local_58[0].Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_58[0].Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_58[0].Buffer.Owner.Owner + 0x10))
                (local_58[0].Buffer.Owner.Owner);
      *(void **)((longlong)FVar3.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar3.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar3.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar3.Owner.Owner)(FVar3.Owner.Owner,1);
      }
    }
  }
  return;
}

// TestField<16,FIoHash,TCbFieldTypeAccessors<16>_> @ 141a57280

void __thiscall
FCbFieldTestBase::TestField<16,FIoHash,TCbFieldTypeAccessors<16>_>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,FIoHash *param_3,
          FIoHash *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<16> *param_6)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FSharedBuffer FVar3;
  bool bVar4;
  wchar_t *pwVar5;
  FIoHash local_a8;
  FIoHash local_88;
  FIoHash local_68;
  TCbBuffer<FCbFieldView> local_48;
  
  local_a8.Hash._0_8_ = *(undefined8 *)param_4->Hash;
  local_a8.Hash._8_8_ = *(undefined8 *)(param_4->Hash + 8);
  local_a8.Hash._16_4_ = *(undefined4 *)(param_4->Hash + 0x10);
  local_88.Hash._16_4_ = *(undefined4 *)(param_3->Hash + 0x10);
  local_88.Hash._0_8_ = *(undefined8 *)param_3->Hash;
  local_88.Hash._8_8_ = *(undefined8 *)(param_3->Hash + 8);
  TestFieldNoClone<16,FIoHash,TCbFieldTypeAccessors<16>,FCbFieldView>
            (this,param_1,param_2,&local_88,&local_a8,param_5,param_6);
  local_48._padding_._0_1_ = param_2->TypeWithFlags;
  local_48._padding_._1_1_ = param_2->Error;
  local_48._padding_._2_2_ = *(undefined2 *)&param_2->field_0x2;
  local_48._padding_._4_4_ = param_2->NameLen;
  local_48._padding_ = (longlong)param_2->Value;
  local_48.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  TCbBuffer<FCbFieldView>::MakeOwned(&local_48);
  ::FString::PrintfImpl((FString *)&local_a8,L"%s, Clone");
  local_88.Hash._0_8_ = *(undefined8 *)param_4->Hash;
  local_88.Hash._8_8_ = *(undefined8 *)(param_4->Hash + 8);
  local_88.Hash._16_4_ = *(undefined4 *)(param_4->Hash + 0x10);
  local_68.Hash._16_4_ = *(undefined4 *)(param_3->Hash + 0x10);
  pwVar5 = L"";
  if (local_a8.Hash._8_4_ != 0) {
    pwVar5 = (wchar_t *)local_a8.Hash._0_8_;
  }
  local_68.Hash._0_8_ = *(undefined8 *)param_3->Hash;
  local_68.Hash._8_8_ = *(undefined8 *)(param_3->Hash + 8);
  TestFieldNoClone<16,FIoHash,TCbFieldTypeAccessors<16>,FCbField>
            (this,pwVar5,(FCbField *)&local_48,&local_68,&local_88,param_5,param_6);
  if ((wchar_t *)local_a8.Hash._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_a8.Hash._0_8_);
  }
  bVar4 = FCbFieldView::Equals(param_2,(FCbFieldView *)&local_48);
  ::FString::PrintfImpl((FString *)&local_a8,L"FCbFieldView::Equals(%s)");
  pwVar5 = L"";
  if (local_a8.Hash._8_4_ != 0) {
    pwVar5 = (wchar_t *)local_a8.Hash._0_8_;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar5,bVar4);
  if ((wchar_t *)local_a8.Hash._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_a8.Hash._0_8_);
  }
  FVar3.Owner.Owner = local_48.Buffer.Owner.Owner;
  if (local_48.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_48.Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_48.Buffer.Owner.Owner + 0x10))(local_48.Buffer.Owner.Owner);
      *(void **)((longlong)FVar3.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar3.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar3.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar3.Owner.Owner)(FVar3.Owner.Owner,1);
      }
    }
  }
  return;
}

// TestField<11,double,TCbFieldTypeAccessors<11>_> @ 141a57450

void __thiscall
FCbFieldTestBase::TestField<11,double,TCbFieldTypeAccessors<11>_>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,double param_3,
          double param_4,ECbFieldError param_5,TCbFieldTypeAccessors<11> *param_6)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FSharedBuffer FVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FString local_68;
  TCbBuffer<FCbFieldView> local_58 [2];
  
  TestFieldNoClone<11,double,TCbFieldTypeAccessors<11>,FCbFieldView>
            (this,param_1,param_2,param_3,param_4,param_5,param_6);
  local_58[0]._padding_._0_1_ = param_2->TypeWithFlags;
  local_58[0]._padding_._1_1_ = param_2->Error;
  local_58[0]._padding_._2_2_ = *(undefined2 *)&param_2->field_0x2;
  local_58[0]._padding_._4_4_ = param_2->NameLen;
  local_58[0]._padding_ = (longlong)param_2->Value;
  local_58[0].Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  TCbBuffer<FCbFieldView>::MakeOwned(local_58);
  ::FString::PrintfImpl(&local_68,L"%s, Clone");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar5.Data = local_68.Data.AllocatorInstance.Data;
  }
  TestFieldNoClone<11,double,TCbFieldTypeAccessors<11>,FCbField>
            (this,(wchar_t *)FVar5.Data,(FCbField *)local_58,param_3,param_4,param_5,param_6);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  bVar4 = FCbFieldView::Equals(param_2,(FCbFieldView *)local_58);
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::Equals(%s)");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar5.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  FVar3.Owner.Owner = local_58[0].Buffer.Owner.Owner;
  if (local_58[0].Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_58[0].Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_58[0].Buffer.Owner.Owner + 0x10))
                (local_58[0].Buffer.Owner.Owner);
      *(void **)((longlong)FVar3.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar3.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar3.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar3.Owner.Owner)(FVar3.Owner.Owner,1);
      }
    }
  }
  return;
}

// TestFieldBytes<2,FCbObjectView,TCbFieldTypeAccessors<2>_> @ 141a57600

void __thiscall
FCbFieldTestBase::TestFieldBytes<2,FCbObjectView,TCbFieldTypeAccessors<2>_>
          (FCbFieldTestBase *this,wchar_t *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          FCbObjectView *param_3,FCbObjectView *param_4,ECbFieldError param_5,
          TCbFieldTypeAccessors<2> *param_6)

{
  code *pcVar1;
  ulong64 uVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FCbFieldView local_48;
  FString local_38;
  FString local_28;
  
  FCbFieldView::FCbFieldView(&local_48,param_2->DataPtr,Object);
  uVar2 = FCbFieldView::GetSize(&local_48);
  ::FString::PrintfImpl(&local_38,L"FCbFieldView::GetSize(%s)");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,uVar2,(longlong)param_2->ArrayNum + 1
            );
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_38,L"FCbFieldView::HasValue(%s)");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,
             (local_48.TypeWithFlags & CustomByName) != None);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  bVar4 = local_48.Error != None;
  ::FString::PrintfImpl(&local_38,L"FCbFieldView::HasError(%s) == false");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,bVar4);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_38,L"FCbFieldView::GetError(%s) == None");
  if (local_48.Error != None) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_28,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_38.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_3;
  local_38.Data.ArrayNum = *(int *)&param_3->field_0x8;
  local_38.Data.ArrayMax = *(int *)&param_3->field_0xc;
  local_28.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_4;
  local_28.Data.ArrayNum = *(int *)&param_4->field_0x8;
  local_28.Data.ArrayMax = *(int *)&param_4->field_0xc;
  TestField<2,FCbObjectView,TCbFieldTypeAccessors<2>_>
            (this,param_1,&local_48,(FCbObjectView *)&local_38,(FCbObjectView *)&local_28,param_5,
             param_6);
  return;
}

// TestFieldBytes<4,FCbArrayView,TCbFieldTypeAccessors<4>_> @ 141a577e0

void __thiscall
FCbFieldTestBase::TestFieldBytes<4,FCbArrayView,TCbFieldTypeAccessors<4>_>
          (FCbFieldTestBase *this,wchar_t *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          FCbArrayView *param_3,FCbArrayView *param_4,ECbFieldError param_5,
          TCbFieldTypeAccessors<4> *param_6)

{
  code *pcVar1;
  ulong64 uVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FCbFieldView local_48;
  FString local_38;
  FString local_28;
  
  FCbFieldView::FCbFieldView(&local_48,param_2->DataPtr,Array);
  uVar2 = FCbFieldView::GetSize(&local_48);
  ::FString::PrintfImpl(&local_38,L"FCbFieldView::GetSize(%s)");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,uVar2,(longlong)param_2->ArrayNum + 1
            );
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_38,L"FCbFieldView::HasValue(%s)");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,
             (local_48.TypeWithFlags & CustomByName) != None);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  bVar4 = local_48.Error != None;
  ::FString::PrintfImpl(&local_38,L"FCbFieldView::HasError(%s) == false");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar3.Data,bVar4);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_38,L"FCbFieldView::GetError(%s) == None");
  if (local_48.Error != None) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_28,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_38.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_3;
  local_38.Data.ArrayNum = *(int *)&param_3->field_0x8;
  local_38.Data.ArrayMax = *(int *)&param_3->field_0xc;
  local_28.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_4;
  local_28.Data.ArrayNum = *(int *)&param_4->field_0x8;
  local_28.Data.ArrayMax = *(int *)&param_4->field_0xc;
  TestField<4,FCbArrayView,TCbFieldTypeAccessors<4>_>
            (this,param_1,&local_48,(FCbArrayView *)&local_38,(FCbArrayView *)&local_28,param_5,
             param_6);
  return;
}

// TestFieldBytes<6,TMemoryView<void_const_>,TCbFieldTypeAccessors<6>_> @ 141a579c0

void __thiscall
FCbFieldTestBase::TestFieldBytes<6,TMemoryView<void_const_>,TCbFieldTypeAccessors<6>_>
          (FCbFieldTestBase *this,wchar_t *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          TMemoryView<void_const_> *param_3,TMemoryView<void_const_> *param_4,ECbFieldError param_5,
          TCbFieldTypeAccessors<6> *param_6)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  code *pcVar3;
  FSharedBuffer FVar4;
  ulong64 uVar5;
  wchar_t *pwVar6;
  bool bVar7;
  FCbFieldView local_88;
  TMemoryView<void_const_> local_78;
  TMemoryView<void_const_> local_68;
  TMemoryView<void_const_> local_58;
  TCbBuffer<FCbFieldView> local_48;
  
  FCbFieldView::FCbFieldView(&local_88,param_2->DataPtr,Binary);
  uVar5 = FCbFieldView::GetSize(&local_88);
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::GetSize(%s)");
  pwVar6 = L"";
  if ((int)local_78.Size != 0) {
    pwVar6 = local_78.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,pwVar6,uVar5,(longlong)param_2->ArrayNum + 1);
  if (local_78.Data != (wchar_t *)0x0) {
    FMemory::Free(local_78.Data);
  }
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::HasValue(%s)");
  pwVar6 = L"";
  if ((int)local_78.Size != 0) {
    pwVar6 = local_78.Data;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,pwVar6,(local_88.TypeWithFlags & CustomByName) != None);
  if (local_78.Data != (wchar_t *)0x0) {
    FMemory::Free(local_78.Data);
  }
  bVar7 = local_88.Error != None;
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::HasError(%s) == false");
  pwVar6 = L"";
  if ((int)local_78.Size != 0) {
    pwVar6 = local_78.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar6,bVar7);
  if (local_78.Data != (wchar_t *)0x0) {
    FMemory::Free(local_78.Data);
  }
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::GetError(%s) == None");
  if (local_88.Error != None) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_68,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_68,0);
    if (local_68.Data != (void *)0x0) {
      FMemory::Free(local_68.Data);
    }
  }
  if (local_78.Data != (wchar_t *)0x0) {
    FMemory::Free(local_78.Data);
  }
  local_78.Data = param_3->Data;
  local_78.Size = param_3->Size;
  local_68.Data = param_4->Data;
  local_68.Size = param_4->Size;
  TestFieldNoClone<6,TMemoryView<void_const_>,TCbFieldTypeAccessors<6>,FCbFieldView>
            (this,param_1,&local_88,&local_78,&local_68,param_5,param_6);
  local_48.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_48._padding_ = (longlong)local_88.Value;
  TCbBuffer<FCbFieldView>::MakeOwned(&local_48);
  ::FString::PrintfImpl((FString *)&local_78,L"%s, Clone");
  local_68.Data = param_4->Data;
  local_68.Size = param_4->Size;
  local_58.Data = param_3->Data;
  local_58.Size = param_3->Size;
  pwVar6 = L"";
  if ((int)local_78.Size != 0) {
    pwVar6 = local_78.Data;
  }
  TestFieldNoClone<6,TMemoryView<void_const_>,TCbFieldTypeAccessors<6>,FCbField>
            (this,pwVar6,(FCbField *)&local_48,&local_58,&local_68,param_5,param_6);
  if (local_78.Data != (wchar_t *)0x0) {
    FMemory::Free(local_78.Data);
  }
  bVar7 = FCbFieldView::Equals(&local_88,(FCbFieldView *)&local_48);
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::Equals(%s)");
  pwVar6 = L"";
  if ((int)local_78.Size != 0) {
    pwVar6 = local_78.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar6,bVar7);
  if (local_78.Data != (wchar_t *)0x0) {
    FMemory::Free(local_78.Data);
  }
  FVar4.Owner.Owner = local_48.Buffer.Owner.Owner;
  if (local_48.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_48.Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_48.Buffer.Owner.Owner + 0x10))(local_48.Buffer.Owner.Owner);
      *(void **)((longlong)FVar4.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar4.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar4.Owner.Owner)(FVar4.Owner.Owner,1);
      }
    }
  }
  return;
}

// TestFieldBytes<7,TStringView<char8_t>,TCbFieldTypeAccessors<7>_> @ 141a57cc0

void __thiscall
FCbFieldTestBase::TestFieldBytes<7,TStringView<char8_t>,TCbFieldTypeAccessors<7>_>
          (FCbFieldTestBase *this,wchar_t *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          TStringView<char8_t> *param_3,TStringView<char8_t> *param_4,ECbFieldError param_5,
          TCbFieldTypeAccessors<7> *param_6)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  code *pcVar3;
  FSharedBuffer FVar4;
  ulong64 uVar5;
  wchar_t *pwVar6;
  bool bVar7;
  FCbFieldView local_88;
  TStringView<char8_t> local_78;
  TStringView<char8_t> local_68;
  TStringView<char8_t> local_58;
  TCbBuffer<FCbFieldView> local_48;
  
  FCbFieldView::FCbFieldView(&local_88,param_2->DataPtr,String);
  uVar5 = FCbFieldView::GetSize(&local_88);
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::GetSize(%s)");
  pwVar6 = L"";
  if (local_78.Size != 0) {
    pwVar6 = (wchar_t *)local_78.DataPtr;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,pwVar6,uVar5,(longlong)param_2->ArrayNum + 1);
  if ((wchar_t *)local_78.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_78.DataPtr);
  }
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::HasValue(%s)");
  pwVar6 = L"";
  if (local_78.Size != 0) {
    pwVar6 = (wchar_t *)local_78.DataPtr;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,pwVar6,(local_88.TypeWithFlags & CustomByName) != None);
  if ((wchar_t *)local_78.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_78.DataPtr);
  }
  bVar7 = local_88.Error != None;
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::HasError(%s) == false");
  pwVar6 = L"";
  if (local_78.Size != 0) {
    pwVar6 = (wchar_t *)local_78.DataPtr;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar6,bVar7);
  if ((wchar_t *)local_78.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_78.DataPtr);
  }
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::GetError(%s) == None");
  if (local_88.Error != None) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_68,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_68,0);
    if (local_68.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_68.DataPtr);
    }
  }
  if ((wchar_t *)local_78.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_78.DataPtr);
  }
  local_78.DataPtr = param_3->DataPtr;
  local_78.Size = param_3->Size;
  local_78._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_68.DataPtr = param_4->DataPtr;
  local_68.Size = param_4->Size;
  local_68._12_4_ = *(undefined4 *)&param_4->field_0xc;
  TestFieldNoClone<7,TStringView<char8_t>,TCbFieldTypeAccessors<7>,FCbFieldView>
            (this,param_1,&local_88,&local_78,&local_68,param_5,param_6);
  local_48.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_48._padding_ = (longlong)local_88.Value;
  TCbBuffer<FCbFieldView>::MakeOwned(&local_48);
  ::FString::PrintfImpl((FString *)&local_78,L"%s, Clone");
  local_68.DataPtr = param_4->DataPtr;
  local_68.Size = param_4->Size;
  local_68._12_4_ = *(undefined4 *)&param_4->field_0xc;
  local_58.DataPtr = param_3->DataPtr;
  local_58.Size = param_3->Size;
  local_58._12_4_ = *(undefined4 *)&param_3->field_0xc;
  pwVar6 = L"";
  if (local_78.Size != 0) {
    pwVar6 = (wchar_t *)local_78.DataPtr;
  }
  TestFieldNoClone<7,TStringView<char8_t>,TCbFieldTypeAccessors<7>,FCbField>
            (this,pwVar6,(FCbField *)&local_48,&local_58,&local_68,param_5,param_6);
  if ((wchar_t *)local_78.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_78.DataPtr);
  }
  bVar7 = FCbFieldView::Equals(&local_88,(FCbFieldView *)&local_48);
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::Equals(%s)");
  pwVar6 = L"";
  if (local_78.Size != 0) {
    pwVar6 = (wchar_t *)local_78.DataPtr;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar6,bVar7);
  if ((wchar_t *)local_78.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_78.DataPtr);
  }
  FVar4.Owner.Owner = local_48.Buffer.Owner.Owner;
  if (local_48.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_48.Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_48.Buffer.Owner.Owner + 0x10))(local_48.Buffer.Owner.Owner);
      *(void **)((longlong)FVar4.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar4.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar4.Owner.Owner)(FVar4.Owner.Owner,1);
      }
    }
  }
  return;
}

// TestFieldBytes<16,FIoHash,TCbFieldTypeAccessors<16>_> @ 141a57fc0

void __thiscall
FCbFieldTestBase::TestFieldBytes<16,FIoHash,TCbFieldTypeAccessors<16>_>
          (FCbFieldTestBase *this,wchar_t *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          FIoHash *param_3,FIoHash *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<16> *param_6
          )

{
  code *pcVar1;
  ulong64 uVar2;
  wchar_t *pwVar3;
  bool bVar4;
  FCbFieldView local_68;
  FIoHash local_58;
  FIoHash local_38;
  
  FCbFieldView::FCbFieldView(&local_68,param_2->DataPtr,Hash);
  uVar2 = FCbFieldView::GetSize(&local_68);
  ::FString::PrintfImpl((FString *)&local_58,L"FCbFieldView::GetSize(%s)");
  pwVar3 = L"";
  if (local_58.Hash._8_4_ != 0) {
    pwVar3 = (wchar_t *)local_58.Hash._0_8_;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,pwVar3,uVar2,(longlong)param_2->ArrayNum + 1);
  if ((wchar_t *)local_58.Hash._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_58.Hash._0_8_);
  }
  ::FString::PrintfImpl((FString *)&local_58,L"FCbFieldView::HasValue(%s)");
  pwVar3 = L"";
  if (local_58.Hash._8_4_ != 0) {
    pwVar3 = (wchar_t *)local_58.Hash._0_8_;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,pwVar3,(local_68.TypeWithFlags & CustomByName) != None);
  if ((wchar_t *)local_58.Hash._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_58.Hash._0_8_);
  }
  bVar4 = local_68.Error != None;
  ::FString::PrintfImpl((FString *)&local_58,L"FCbFieldView::HasError(%s) == false");
  pwVar3 = L"";
  if (local_58.Hash._8_4_ != 0) {
    pwVar3 = (wchar_t *)local_58.Hash._0_8_;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar3,bVar4);
  if ((wchar_t *)local_58.Hash._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_58.Hash._0_8_);
  }
  ::FString::PrintfImpl((FString *)&local_58,L"FCbFieldView::GetError(%s) == None");
  if (local_68.Error != None) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_38,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_38,0);
    if ((void *)local_38.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38.Hash._0_8_);
    }
  }
  if ((wchar_t *)local_58.Hash._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_58.Hash._0_8_);
  }
  local_38.Hash._0_8_ = *(undefined8 *)param_4->Hash;
  local_38.Hash._8_8_ = *(undefined8 *)(param_4->Hash + 8);
  local_38.Hash._16_4_ = *(undefined4 *)(param_4->Hash + 0x10);
  local_58.Hash._16_4_ = *(undefined4 *)(param_3->Hash + 0x10);
  local_58.Hash._0_8_ = *(undefined8 *)param_3->Hash;
  local_58.Hash._8_8_ = *(undefined8 *)(param_3->Hash + 8);
  TestField<16,FIoHash,TCbFieldTypeAccessors<16>_>
            (this,param_1,&local_68,&local_58,&local_38,param_5,param_6);
  return;
}

// TestFieldBytes<17,FGuid,TCbFieldTypeAccessors<17>_> @ 141a581b0

void __thiscall
FCbFieldTestBase::TestFieldBytes<17,FGuid,TCbFieldTypeAccessors<17>_>
          (FCbFieldTestBase *this,wchar_t *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          FGuid *param_3,FGuid *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<17> *param_6)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  code *pcVar3;
  FSharedBuffer FVar4;
  ulong64 uVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  FCbFieldView local_88;
  ForAnyElementType local_78;
  uint uStack_70;
  FGuid local_68;
  FGuid local_58;
  TCbBuffer<FCbFieldView> local_48;
  
  FCbFieldView::FCbFieldView(&local_88,param_2->DataPtr,Uuid);
  uVar5 = FCbFieldView::GetSize(&local_88);
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::GetSize(%s)");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (uStack_70 != 0) {
    FVar6.Data = local_78.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,uVar5,(longlong)param_2->ArrayNum + 1
            );
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::HasValue(%s)");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (uStack_70 != 0) {
    FVar6.Data = local_78.Data;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,
             (local_88.TypeWithFlags & CustomByName) != None);
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  bVar7 = local_88.Error != None;
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::HasError(%s) == false");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (uStack_70 != 0) {
    FVar6.Data = local_78.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar7);
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::GetError(%s) == None");
  if (local_88.Error != None) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_68,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_68,0);
    if ((void *)local_68._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  local_78.Data = *(FScriptContainerElement **)param_3;
  uStack_70 = param_3->C;
  unique0x1000032c = param_3->D;
  local_68.A = param_4->A;
  local_68.B = param_4->B;
  local_68.C = param_4->C;
  local_68.D = param_4->D;
  TestFieldNoClone<17,FGuid,TCbFieldTypeAccessors<17>,FCbFieldView>
            (this,param_1,&local_88,(FGuid *)&local_78,&local_68,param_5,param_6);
  local_48.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_48._padding_ = (longlong)local_88.Value;
  TCbBuffer<FCbFieldView>::MakeOwned(&local_48);
  ::FString::PrintfImpl((FString *)&local_78,L"%s, Clone");
  local_68.A = param_4->A;
  local_68.B = param_4->B;
  local_68.C = param_4->C;
  local_68.D = param_4->D;
  local_58.A = param_3->A;
  local_58.B = param_3->B;
  local_58.C = param_3->C;
  local_58.D = param_3->D;
  FVar6.Data = (FScriptContainerElement *)L"";
  if (uStack_70 != 0) {
    FVar6.Data = local_78.Data;
  }
  TestFieldNoClone<17,FGuid,TCbFieldTypeAccessors<17>,FCbField>
            (this,(wchar_t *)FVar6.Data,(FCbField *)&local_48,&local_58,&local_68,param_5,param_6);
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  bVar7 = FCbFieldView::Equals(&local_88,(FCbFieldView *)&local_48);
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::Equals(%s)");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (uStack_70 != 0) {
    FVar6.Data = local_78.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar7);
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  FVar4.Owner.Owner = local_48.Buffer.Owner.Owner;
  if (local_48.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_48.Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_48.Buffer.Owner.Owner + 0x10))(local_48.Buffer.Owner.Owner);
      *(void **)((longlong)FVar4.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar4.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar4.Owner.Owner)(FVar4.Owner.Owner,1);
      }
    }
  }
  return;
}

// TestFieldBytes<18,__int64,TCbFieldTypeAccessors<18>_> @ 141a584b0

void __thiscall
FCbFieldTestBase::TestFieldBytes<18,__int64,TCbFieldTypeAccessors<18>_>
          (FCbFieldTestBase *this,wchar_t *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          long64 param_3,long64 param_4,ECbFieldError param_5,TCbFieldTypeAccessors<18> *param_6)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  code *pcVar3;
  FSharedBuffer FVar4;
  ulong64 uVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  FCbFieldView local_68;
  FString local_58;
  TCbBuffer<FCbFieldView> local_48;
  
  FCbFieldView::FCbFieldView(&local_68,param_2->DataPtr,DateTime);
  uVar5 = FCbFieldView::GetSize(&local_68);
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::GetSize(%s)");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,uVar5,(longlong)param_2->ArrayNum + 1
            );
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::HasValue(%s)");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,
             (local_68.TypeWithFlags & CustomByName) != None);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  bVar7 = local_68.Error != None;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::HasError(%s) == false");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar7);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::GetError(%s) == None");
  if (local_68.Error != None) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_48,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_48,0);
    if ((void *)local_48._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_48._padding_);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  TestFieldNoClone<18,__int64,TCbFieldTypeAccessors<18>,FCbFieldView>
            (this,param_1,&local_68,param_3,param_4,param_5,param_6);
  local_48.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_48._padding_ = (longlong)local_68.Value;
  TCbBuffer<FCbFieldView>::MakeOwned(&local_48);
  ::FString::PrintfImpl(&local_58,L"%s, Clone");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  TestFieldNoClone<18,__int64,TCbFieldTypeAccessors<18>,FCbField>
            (this,(wchar_t *)FVar6.Data,(FCbField *)&local_48,param_3,param_4,param_5,param_6);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  bVar7 = FCbFieldView::Equals(&local_68,(FCbFieldView *)&local_48);
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::Equals(%s)");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar7);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FVar4.Owner.Owner = local_48.Buffer.Owner.Owner;
  if (local_48.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_48.Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_48.Buffer.Owner.Owner + 0x10))(local_48.Buffer.Owner.Owner);
      *(void **)((longlong)FVar4.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar4.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar4.Owner.Owner)(FVar4.Owner.Owner,1);
      }
    }
  }
  return;
}

// TestFieldBytes<19,__int64,TCbFieldTypeAccessors<19>_> @ 141a58790

void __thiscall
FCbFieldTestBase::TestFieldBytes<19,__int64,TCbFieldTypeAccessors<19>_>
          (FCbFieldTestBase *this,wchar_t *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          long64 param_3,long64 param_4,ECbFieldError param_5,TCbFieldTypeAccessors<19> *param_6)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  code *pcVar3;
  FSharedBuffer FVar4;
  ulong64 uVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  FCbFieldView local_68;
  FString local_58;
  TCbBuffer<FCbFieldView> local_48;
  
  FCbFieldView::FCbFieldView(&local_68,param_2->DataPtr,TimeSpan);
  uVar5 = FCbFieldView::GetSize(&local_68);
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::GetSize(%s)");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,uVar5,(longlong)param_2->ArrayNum + 1
            );
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::HasValue(%s)");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,
             (local_68.TypeWithFlags & CustomByName) != None);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  bVar7 = local_68.Error != None;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::HasError(%s) == false");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar7);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::GetError(%s) == None");
  if (local_68.Error != None) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_48,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_48,0);
    if ((void *)local_48._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_48._padding_);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  TestFieldNoClone<19,__int64,TCbFieldTypeAccessors<19>,FCbFieldView>
            (this,param_1,&local_68,param_3,param_4,param_5,param_6);
  local_48.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_48._padding_ = (longlong)local_68.Value;
  TCbBuffer<FCbFieldView>::MakeOwned(&local_48);
  ::FString::PrintfImpl(&local_58,L"%s, Clone");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  TestFieldNoClone<19,__int64,TCbFieldTypeAccessors<19>,FCbField>
            (this,(wchar_t *)FVar6.Data,(FCbField *)&local_48,param_3,param_4,param_5,param_6);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  bVar7 = FCbFieldView::Equals(&local_68,(FCbFieldView *)&local_48);
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::Equals(%s)");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar7);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FVar4.Owner.Owner = local_48.Buffer.Owner.Owner;
  if (local_48.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_48.Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_48.Buffer.Owner.Owner + 0x10))(local_48.Buffer.Owner.Owner);
      *(void **)((longlong)FVar4.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar4.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar4.Owner.Owner)(FVar4.Owner.Owner,1);
      }
    }
  }
  return;
}

// TestFieldBytes<20,FCbObjectId,TCbFieldTypeAccessors<20>_> @ 141a58a70

void __thiscall
FCbFieldTestBase::TestFieldBytes<20,FCbObjectId,TCbFieldTypeAccessors<20>_>
          (FCbFieldTestBase *this,wchar_t *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          FCbObjectId *param_3,FCbObjectId *param_4,ECbFieldError param_5,
          TCbFieldTypeAccessors<20> *param_6)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  code *pcVar3;
  FSharedBuffer FVar4;
  ulong64 uVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  FCbObjectId local_88;
  FString local_78;
  FCbFieldView local_68;
  FString local_58;
  TCbBuffer<FCbFieldView> local_48;
  
  FCbFieldView::FCbFieldView(&local_68,param_2->DataPtr,ObjectId);
  uVar5 = FCbFieldView::GetSize(&local_68);
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::GetSize(%s)");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar6.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,uVar5,(longlong)param_2->ArrayNum + 1
            );
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::HasValue(%s)");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar6.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,
             (local_68.TypeWithFlags & CustomByName) != None);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  bVar7 = local_68.Error != None;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::HasError(%s) == false");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar6.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar7);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::GetError(%s) == None");
  if (local_68.Error != None) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  local_88.Bytes._8_4_ = *(undefined4 *)(param_4->Bytes + 8);
  local_88.Bytes._0_8_ = *(undefined8 *)param_4->Bytes;
  local_78.Data.ArrayNum = *(int *)(param_3->Bytes + 8);
  local_78.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_3->Bytes;
  TestFieldNoClone<20,FCbObjectId,TCbFieldTypeAccessors<20>,FCbFieldView>
            (this,param_1,&local_68,(FCbObjectId *)&local_78,&local_88,param_5,param_6);
  local_48.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_48._padding_ = (longlong)local_68.Value;
  TCbBuffer<FCbFieldView>::MakeOwned(&local_48);
  ::FString::PrintfImpl(&local_58,L"%s, Clone");
  local_78.Data.ArrayNum = *(int *)(param_4->Bytes + 8);
  local_78.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_4->Bytes;
  local_88.Bytes._8_4_ = *(undefined4 *)(param_3->Bytes + 8);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  local_88.Bytes._0_8_ = *(undefined8 *)param_3->Bytes;
  TestFieldNoClone<20,FCbObjectId,TCbFieldTypeAccessors<20>,FCbField>
            (this,(wchar_t *)FVar6.Data,(FCbField *)&local_48,&local_88,(FCbObjectId *)&local_78,
             param_5,param_6);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  bVar7 = FCbFieldView::Equals(&local_68,(FCbFieldView *)&local_48);
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::Equals(%s)");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar7);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FVar4.Owner.Owner = local_48.Buffer.Owner.Owner;
  if (local_48.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_48.Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_48.Buffer.Owner.Owner + 0x10))(local_48.Buffer.Owner.Owner);
      *(void **)((longlong)FVar4.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar4.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar4.Owner.Owner)(FVar4.Owner.Owner,1);
      }
    }
  }
  return;
}

// TestFieldBytes<30,FCbCustomById,TCbFieldTypeAccessors<30>_> @ 141a58d90

void __thiscall
FCbFieldTestBase::TestFieldBytes<30,FCbCustomById,TCbFieldTypeAccessors<30>_>
          (FCbFieldTestBase *this,wchar_t *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          FCbCustomById *param_3,FCbCustomById *param_4,ECbFieldError param_5,
          TCbFieldTypeAccessors<30> *param_6)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  code *pcVar3;
  FSharedBuffer FVar4;
  ulong64 uVar5;
  wchar_t *pwVar6;
  bool bVar7;
  FCbCustomById local_b8;
  FCbFieldView local_98;
  TCbBuffer<FCbFieldView> local_88;
  FCbCustomById local_68;
  FCbCustomById local_48;
  
  FCbFieldView::FCbFieldView(&local_98,param_2->DataPtr,CustomById);
  uVar5 = FCbFieldView::GetSize(&local_98);
  ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::GetSize(%s)");
  pwVar6 = L"";
  if ((int)local_b8.Data.Data != 0) {
    pwVar6 = (wchar_t *)local_b8.Id;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,pwVar6,uVar5,(longlong)param_2->ArrayNum + 1);
  if ((wchar_t *)local_b8.Id != (wchar_t *)0x0) {
    FMemory::Free((void *)local_b8.Id);
  }
  ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::HasValue(%s)");
  pwVar6 = L"";
  if ((int)local_b8.Data.Data != 0) {
    pwVar6 = (wchar_t *)local_b8.Id;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,pwVar6,(local_98.TypeWithFlags & CustomByName) != None);
  if ((wchar_t *)local_b8.Id != (wchar_t *)0x0) {
    FMemory::Free((void *)local_b8.Id);
  }
  bVar7 = local_98.Error != None;
  ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::HasError(%s) == false");
  pwVar6 = L"";
  if ((int)local_b8.Data.Data != 0) {
    pwVar6 = (wchar_t *)local_b8.Id;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar6,bVar7);
  if ((wchar_t *)local_b8.Id != (wchar_t *)0x0) {
    FMemory::Free((void *)local_b8.Id);
  }
  ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::GetError(%s) == None");
  if (local_98.Error != None) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_88,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_88,0);
    if ((void *)local_88._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_88._padding_);
    }
  }
  if ((wchar_t *)local_b8.Id != (wchar_t *)0x0) {
    FMemory::Free((void *)local_b8.Id);
  }
  local_b8.Id = param_4->Id;
  local_b8.Data.Data = (param_4->Data).Data;
  local_b8.Data.Size = (param_4->Data).Size;
  local_68.Id = param_3->Id;
  local_68.Data.Data = (param_3->Data).Data;
  local_68.Data.Size = (param_3->Data).Size;
  TestFieldNoClone<30,FCbCustomById,TCbFieldTypeAccessors<30>,FCbFieldView>
            (this,param_1,&local_98,&local_68,&local_b8,param_5,param_6);
  local_88.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_88._padding_ = (longlong)local_98.Value;
  TCbBuffer<FCbFieldView>::MakeOwned(&local_88);
  ::FString::PrintfImpl((FString *)&local_b8,L"%s, Clone");
  local_68.Id = param_4->Id;
  local_68.Data.Data = (param_4->Data).Data;
  local_68.Data.Size = (param_4->Data).Size;
  local_48.Id = param_3->Id;
  local_48.Data.Data = (param_3->Data).Data;
  local_48.Data.Size = (param_3->Data).Size;
  pwVar6 = L"";
  if ((int)local_b8.Data.Data != 0) {
    pwVar6 = (wchar_t *)local_b8.Id;
  }
  TestFieldNoClone<30,FCbCustomById,TCbFieldTypeAccessors<30>,FCbField>
            (this,pwVar6,(FCbField *)&local_88,&local_48,&local_68,param_5,param_6);
  if ((wchar_t *)local_b8.Id != (wchar_t *)0x0) {
    FMemory::Free((void *)local_b8.Id);
  }
  bVar7 = FCbFieldView::Equals(&local_98,(FCbFieldView *)&local_88);
  ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::Equals(%s)");
  pwVar6 = L"";
  if ((int)local_b8.Data.Data != 0) {
    pwVar6 = (wchar_t *)local_b8.Id;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar6,bVar7);
  if ((wchar_t *)local_b8.Id != (wchar_t *)0x0) {
    FMemory::Free((void *)local_b8.Id);
  }
  FVar4.Owner.Owner = local_88.Buffer.Owner.Owner;
  if (local_88.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_88.Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_88.Buffer.Owner.Owner + 0x10))(local_88.Buffer.Owner.Owner);
      *(void **)((longlong)FVar4.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar4.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar4.Owner.Owner)(FVar4.Owner.Owner,1);
      }
    }
  }
  return;
}

// TestFieldBytes<31,FCbCustomByName,TCbFieldTypeAccessors<31>_> @ 141a593c0

void __thiscall
FCbFieldTestBase::TestFieldBytes<31,FCbCustomByName,TCbFieldTypeAccessors<31>_>
          (FCbFieldTestBase *this,wchar_t *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          FCbCustomByName *param_3,FCbCustomByName *param_4,ECbFieldError param_5,
          TCbFieldTypeAccessors<31> *param_6)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  code *pcVar3;
  FSharedBuffer FVar4;
  ulong64 uVar5;
  wchar_t *pwVar6;
  bool bVar7;
  FCbCustomByName local_b8;
  FCbFieldView local_98;
  TCbBuffer<FCbFieldView> local_88;
  FCbCustomByName local_68;
  FCbCustomByName local_48;
  
  FCbFieldView::FCbFieldView(&local_98,param_2->DataPtr,CustomByName);
  uVar5 = FCbFieldView::GetSize(&local_98);
  ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::GetSize(%s)");
  pwVar6 = L"";
  if (local_b8.Name.Size != 0) {
    pwVar6 = (wchar_t *)local_b8.Name.DataPtr;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,pwVar6,uVar5,(longlong)param_2->ArrayNum + 1);
  if ((wchar_t *)local_b8.Name.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_b8.Name.DataPtr);
  }
  ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::HasValue(%s)");
  pwVar6 = L"";
  if (local_b8.Name.Size != 0) {
    pwVar6 = (wchar_t *)local_b8.Name.DataPtr;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,pwVar6,(local_98.TypeWithFlags & CustomByName) != None);
  if ((wchar_t *)local_b8.Name.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_b8.Name.DataPtr);
  }
  bVar7 = local_98.Error != None;
  ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::HasError(%s) == false");
  pwVar6 = L"";
  if (local_b8.Name.Size != 0) {
    pwVar6 = (wchar_t *)local_b8.Name.DataPtr;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar6,bVar7);
  if ((wchar_t *)local_b8.Name.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_b8.Name.DataPtr);
  }
  ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::GetError(%s) == None");
  if (local_98.Error != None) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_88,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_88,0);
    if ((void *)local_88._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_88._padding_);
    }
  }
  if ((wchar_t *)local_b8.Name.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_b8.Name.DataPtr);
  }
  local_b8.Name.DataPtr = (param_4->Name).DataPtr;
  local_b8.Name.Size = (param_4->Name).Size;
  local_b8.Name._12_4_ = *(undefined4 *)&(param_4->Name).field_0xc;
  local_b8.Data.Data = (param_4->Data).Data;
  local_b8.Data.Size = (param_4->Data).Size;
  local_68.Name.DataPtr = (param_3->Name).DataPtr;
  local_68.Name.Size = (param_3->Name).Size;
  local_68.Name._12_4_ = *(undefined4 *)&(param_3->Name).field_0xc;
  local_68.Data.Data = (param_3->Data).Data;
  local_68.Data.Size = (param_3->Data).Size;
  TestFieldNoClone<31,FCbCustomByName,TCbFieldTypeAccessors<31>,FCbFieldView>
            (this,param_1,&local_98,&local_68,&local_b8,param_5,param_6);
  local_88.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_88._padding_ = (longlong)local_98.Value;
  TCbBuffer<FCbFieldView>::MakeOwned(&local_88);
  ::FString::PrintfImpl((FString *)&local_b8,L"%s, Clone");
  local_68.Name.DataPtr = (param_4->Name).DataPtr;
  local_68.Name.Size = (param_4->Name).Size;
  local_68.Name._12_4_ = *(undefined4 *)&(param_4->Name).field_0xc;
  local_68.Data.Data = (param_4->Data).Data;
  local_68.Data.Size = (param_4->Data).Size;
  local_48.Name.DataPtr = (param_3->Name).DataPtr;
  local_48.Name.Size = (param_3->Name).Size;
  local_48.Name._12_4_ = *(undefined4 *)&(param_3->Name).field_0xc;
  local_48.Data.Data = (param_3->Data).Data;
  local_48.Data.Size = (param_3->Data).Size;
  pwVar6 = L"";
  if (local_b8.Name.Size != 0) {
    pwVar6 = (wchar_t *)local_b8.Name.DataPtr;
  }
  TestFieldNoClone<31,FCbCustomByName,TCbFieldTypeAccessors<31>,FCbField>
            (this,pwVar6,(FCbField *)&local_88,&local_48,&local_68,param_5,param_6);
  if ((wchar_t *)local_b8.Name.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_b8.Name.DataPtr);
  }
  bVar7 = FCbFieldView::Equals(&local_98,(FCbFieldView *)&local_88);
  ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::Equals(%s)");
  pwVar6 = L"";
  if (local_b8.Name.Size != 0) {
    pwVar6 = (wchar_t *)local_b8.Name.DataPtr;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar6,bVar7);
  if ((wchar_t *)local_b8.Name.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_b8.Name.DataPtr);
  }
  FVar4.Owner.Owner = local_88.Buffer.Owner.Owner;
  if (local_88.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_88.Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_88.Buffer.Owner.Owner + 0x10))(local_88.Buffer.Owner.Owner);
      *(void **)((longlong)FVar4.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar4.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar4.Owner.Owner)(FVar4.Owner.Owner,1);
      }
    }
  }
  return;
}

// TestFieldBytes<12,bool,TCbFieldTypeAccessors<12>_> @ 141a599e0

void __thiscall
FCbFieldTestBase::TestFieldBytes<12,bool,TCbFieldTypeAccessors<12>_>
          (FCbFieldTestBase *this,wchar_t *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          bool param_3,bool param_4,ECbFieldError param_5,TCbFieldTypeAccessors<12> *param_6)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  code *pcVar3;
  FSharedBuffer FVar4;
  ulong64 uVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  FCbFieldView local_68;
  FString local_58;
  TCbBuffer<FCbFieldView> local_48;
  
  FCbFieldView::FCbFieldView(&local_68,param_2->DataPtr,BoolFalse);
  uVar5 = FCbFieldView::GetSize(&local_68);
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::GetSize(%s)");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,uVar5,(longlong)param_2->ArrayNum + 1
            );
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::HasValue(%s)");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,
             (local_68.TypeWithFlags & CustomByName) != None);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  bVar7 = local_68.Error != None;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::HasError(%s) == false");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar7);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::GetError(%s) == None");
  if (local_68.Error != None) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_48,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_48,0);
    if ((void *)local_48._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_48._padding_);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  TestFieldNoClone<12,bool,TCbFieldTypeAccessors<12>,FCbFieldView>
            (this,param_1,&local_68,param_3,param_4,param_5,param_6);
  local_48.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_48._padding_ = (longlong)local_68.Value;
  TCbBuffer<FCbFieldView>::MakeOwned(&local_48);
  ::FString::PrintfImpl(&local_58,L"%s, Clone");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  TestFieldNoClone<12,bool,TCbFieldTypeAccessors<12>,FCbField>
            (this,(wchar_t *)FVar6.Data,(FCbField *)&local_48,param_3,param_4,param_5,param_6);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  bVar7 = FCbFieldView::Equals(&local_68,(FCbFieldView *)&local_48);
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::Equals(%s)");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar7);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FVar4.Owner.Owner = local_48.Buffer.Owner.Owner;
  if (local_48.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_48.Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_48.Buffer.Owner.Owner + 0x10))(local_48.Buffer.Owner.Owner);
      *(void **)((longlong)FVar4.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar4.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar4.Owner.Owner)(FVar4.Owner.Owner,1);
      }
    }
  }
  return;
}

// TestFieldBytes<13,bool,TCbFieldTypeAccessors<13>_> @ 141a59cc0

void __thiscall
FCbFieldTestBase::TestFieldBytes<13,bool,TCbFieldTypeAccessors<13>_>
          (FCbFieldTestBase *this,wchar_t *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          bool param_3,bool param_4,ECbFieldError param_5,TCbFieldTypeAccessors<13> *param_6)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  code *pcVar3;
  FSharedBuffer FVar4;
  ulong64 uVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  FCbFieldView local_68;
  FString local_58;
  TCbBuffer<FCbFieldView> local_48;
  
  FCbFieldView::FCbFieldView(&local_68,param_2->DataPtr,BoolTrue);
  uVar5 = FCbFieldView::GetSize(&local_68);
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::GetSize(%s)");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,uVar5,(longlong)param_2->ArrayNum + 1
            );
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::HasValue(%s)");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,
             (local_68.TypeWithFlags & CustomByName) != None);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  bVar7 = local_68.Error != None;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::HasError(%s) == false");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar7);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::GetError(%s) == None");
  if (local_68.Error != None) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_48,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_48,0);
    if ((void *)local_48._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_48._padding_);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  TestFieldNoClone<13,bool,TCbFieldTypeAccessors<13>,FCbFieldView>
            (this,param_1,&local_68,param_3,param_4,param_5,param_6);
  local_48.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_48._padding_ = (longlong)local_68.Value;
  TCbBuffer<FCbFieldView>::MakeOwned(&local_48);
  ::FString::PrintfImpl(&local_58,L"%s, Clone");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  TestFieldNoClone<13,bool,TCbFieldTypeAccessors<13>,FCbField>
            (this,(wchar_t *)FVar6.Data,(FCbField *)&local_48,param_3,param_4,param_5,param_6);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  bVar7 = FCbFieldView::Equals(&local_68,(FCbFieldView *)&local_48);
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::Equals(%s)");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar7);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FVar4.Owner.Owner = local_48.Buffer.Owner.Owner;
  if (local_48.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_48.Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_48.Buffer.Owner.Owner + 0x10))(local_48.Buffer.Owner.Owner);
      *(void **)((longlong)FVar4.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar4.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar4.Owner.Owner)(FVar4.Owner.Owner,1);
      }
    }
  }
  return;
}

// TestFieldBytes<14,FIoHash,TCbFieldTypeAccessors<14>_> @ 141a59fa0

void __thiscall
FCbFieldTestBase::TestFieldBytes<14,FIoHash,TCbFieldTypeAccessors<14>_>
          (FCbFieldTestBase *this,wchar_t *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          FIoHash *param_3,FIoHash *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<14> *param_6
          )

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  code *pcVar3;
  FSharedBuffer FVar4;
  ulong64 uVar5;
  wchar_t *pwVar6;
  bool bVar7;
  FIoHash local_b8;
  FCbFieldView local_98;
  FIoHash local_88;
  TCbBuffer<FCbFieldView> local_68;
  FIoHash local_48;
  
  FCbFieldView::FCbFieldView(&local_98,param_2->DataPtr,ObjectAttachment);
  uVar5 = FCbFieldView::GetSize(&local_98);
  ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::GetSize(%s)");
  pwVar6 = L"";
  if (local_b8.Hash._8_4_ != 0) {
    pwVar6 = (wchar_t *)local_b8.Hash._0_8_;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,pwVar6,uVar5,(longlong)param_2->ArrayNum + 1);
  if ((wchar_t *)local_b8.Hash._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_b8.Hash._0_8_);
  }
  ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::HasValue(%s)");
  pwVar6 = L"";
  if (local_b8.Hash._8_4_ != 0) {
    pwVar6 = (wchar_t *)local_b8.Hash._0_8_;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,pwVar6,(local_98.TypeWithFlags & CustomByName) != None);
  if ((wchar_t *)local_b8.Hash._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_b8.Hash._0_8_);
  }
  bVar7 = local_98.Error != None;
  ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::HasError(%s) == false");
  pwVar6 = L"";
  if (local_b8.Hash._8_4_ != 0) {
    pwVar6 = (wchar_t *)local_b8.Hash._0_8_;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar6,bVar7);
  if ((wchar_t *)local_b8.Hash._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_b8.Hash._0_8_);
  }
  ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::GetError(%s) == None");
  if (local_98.Error != None) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_88,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_88,0);
    if ((void *)local_88.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_88.Hash._0_8_);
    }
  }
  if ((wchar_t *)local_b8.Hash._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_b8.Hash._0_8_);
  }
  local_88.Hash._0_8_ = *(undefined8 *)param_4->Hash;
  local_88.Hash._8_8_ = *(undefined8 *)(param_4->Hash + 8);
  local_88.Hash._16_4_ = *(undefined4 *)(param_4->Hash + 0x10);
  local_b8.Hash._16_4_ = *(undefined4 *)(param_3->Hash + 0x10);
  local_b8.Hash._0_8_ = *(undefined8 *)param_3->Hash;
  local_b8.Hash._8_8_ = *(undefined8 *)(param_3->Hash + 8);
  TestFieldNoClone<14,FIoHash,TCbFieldTypeAccessors<14>,FCbFieldView>
            (this,param_1,&local_98,&local_b8,&local_88,param_5,param_6);
  local_68.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_68._padding_ = (longlong)local_98.Value;
  TCbBuffer<FCbFieldView>::MakeOwned(&local_68);
  ::FString::PrintfImpl((FString *)&local_b8,L"%s, Clone");
  local_88.Hash._0_8_ = *(undefined8 *)param_4->Hash;
  local_88.Hash._8_8_ = *(undefined8 *)(param_4->Hash + 8);
  local_88.Hash._16_4_ = *(undefined4 *)(param_4->Hash + 0x10);
  local_48.Hash._16_4_ = *(undefined4 *)(param_3->Hash + 0x10);
  pwVar6 = L"";
  if (local_b8.Hash._8_4_ != 0) {
    pwVar6 = (wchar_t *)local_b8.Hash._0_8_;
  }
  local_48.Hash._0_8_ = *(undefined8 *)param_3->Hash;
  local_48.Hash._8_8_ = *(undefined8 *)(param_3->Hash + 8);
  TestFieldNoClone<14,FIoHash,TCbFieldTypeAccessors<14>,FCbField>
            (this,pwVar6,(FCbField *)&local_68,&local_48,&local_88,param_5,param_6);
  if ((wchar_t *)local_b8.Hash._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_b8.Hash._0_8_);
  }
  bVar7 = FCbFieldView::Equals(&local_98,(FCbFieldView *)&local_68);
  ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::Equals(%s)");
  pwVar6 = L"";
  if (local_b8.Hash._8_4_ != 0) {
    pwVar6 = (wchar_t *)local_b8.Hash._0_8_;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar6,bVar7);
  if ((wchar_t *)local_b8.Hash._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_b8.Hash._0_8_);
  }
  FVar4.Owner.Owner = local_68.Buffer.Owner.Owner;
  if (local_68.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_68.Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_68.Buffer.Owner.Owner + 0x10))(local_68.Buffer.Owner.Owner);
      *(void **)((longlong)FVar4.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar4.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar4.Owner.Owner)(FVar4.Owner.Owner,1);
      }
    }
  }
  return;
}

// TestFieldBytes<15,FIoHash,TCbFieldTypeAccessors<15>_> @ 141a5a2c0

void __thiscall
FCbFieldTestBase::TestFieldBytes<15,FIoHash,TCbFieldTypeAccessors<15>_>
          (FCbFieldTestBase *this,wchar_t *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          FIoHash *param_3,FIoHash *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<15> *param_6
          )

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  code *pcVar3;
  FSharedBuffer FVar4;
  ulong64 uVar5;
  wchar_t *pwVar6;
  bool bVar7;
  FIoHash local_b8;
  FCbFieldView local_98;
  FIoHash local_88;
  TCbBuffer<FCbFieldView> local_68;
  FIoHash local_48;
  
  FCbFieldView::FCbFieldView(&local_98,param_2->DataPtr,BinaryAttachment);
  uVar5 = FCbFieldView::GetSize(&local_98);
  ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::GetSize(%s)");
  pwVar6 = L"";
  if (local_b8.Hash._8_4_ != 0) {
    pwVar6 = (wchar_t *)local_b8.Hash._0_8_;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,pwVar6,uVar5,(longlong)param_2->ArrayNum + 1);
  if ((wchar_t *)local_b8.Hash._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_b8.Hash._0_8_);
  }
  ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::HasValue(%s)");
  pwVar6 = L"";
  if (local_b8.Hash._8_4_ != 0) {
    pwVar6 = (wchar_t *)local_b8.Hash._0_8_;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,pwVar6,(local_98.TypeWithFlags & CustomByName) != None);
  if ((wchar_t *)local_b8.Hash._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_b8.Hash._0_8_);
  }
  bVar7 = local_98.Error != None;
  ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::HasError(%s) == false");
  pwVar6 = L"";
  if (local_b8.Hash._8_4_ != 0) {
    pwVar6 = (wchar_t *)local_b8.Hash._0_8_;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar6,bVar7);
  if ((wchar_t *)local_b8.Hash._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_b8.Hash._0_8_);
  }
  ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::GetError(%s) == None");
  if (local_98.Error != None) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_88,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_88,0);
    if ((void *)local_88.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_88.Hash._0_8_);
    }
  }
  if ((wchar_t *)local_b8.Hash._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_b8.Hash._0_8_);
  }
  local_88.Hash._0_8_ = *(undefined8 *)param_4->Hash;
  local_88.Hash._8_8_ = *(undefined8 *)(param_4->Hash + 8);
  local_88.Hash._16_4_ = *(undefined4 *)(param_4->Hash + 0x10);
  local_b8.Hash._16_4_ = *(undefined4 *)(param_3->Hash + 0x10);
  local_b8.Hash._0_8_ = *(undefined8 *)param_3->Hash;
  local_b8.Hash._8_8_ = *(undefined8 *)(param_3->Hash + 8);
  TestFieldNoClone<15,FIoHash,TCbFieldTypeAccessors<15>,FCbFieldView>
            (this,param_1,&local_98,&local_b8,&local_88,param_5,param_6);
  local_68.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_68._padding_ = (longlong)local_98.Value;
  TCbBuffer<FCbFieldView>::MakeOwned(&local_68);
  ::FString::PrintfImpl((FString *)&local_b8,L"%s, Clone");
  local_88.Hash._0_8_ = *(undefined8 *)param_4->Hash;
  local_88.Hash._8_8_ = *(undefined8 *)(param_4->Hash + 8);
  local_88.Hash._16_4_ = *(undefined4 *)(param_4->Hash + 0x10);
  local_48.Hash._16_4_ = *(undefined4 *)(param_3->Hash + 0x10);
  pwVar6 = L"";
  if (local_b8.Hash._8_4_ != 0) {
    pwVar6 = (wchar_t *)local_b8.Hash._0_8_;
  }
  local_48.Hash._0_8_ = *(undefined8 *)param_3->Hash;
  local_48.Hash._8_8_ = *(undefined8 *)(param_3->Hash + 8);
  TestFieldNoClone<15,FIoHash,TCbFieldTypeAccessors<15>,FCbField>
            (this,pwVar6,(FCbField *)&local_68,&local_48,&local_88,param_5,param_6);
  if ((wchar_t *)local_b8.Hash._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_b8.Hash._0_8_);
  }
  bVar7 = FCbFieldView::Equals(&local_98,(FCbFieldView *)&local_68);
  ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::Equals(%s)");
  pwVar6 = L"";
  if (local_b8.Hash._8_4_ != 0) {
    pwVar6 = (wchar_t *)local_b8.Hash._0_8_;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar6,bVar7);
  if ((wchar_t *)local_b8.Hash._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_b8.Hash._0_8_);
  }
  FVar4.Owner.Owner = local_68.Buffer.Owner.Owner;
  if (local_68.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_68.Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_68.Buffer.Owner.Owner + 0x10))(local_68.Buffer.Owner.Owner);
      *(void **)((longlong)FVar4.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar4.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar4.Owner.Owner)(FVar4.Owner.Owner,1);
      }
    }
  }
  return;
}

// TestFieldNoClone<2,FCbObject,FCbFieldObjectAccessors,FCbField> @ 141a5a5e0

void __thiscall
FCbFieldTestBase::TestFieldNoClone<2,FCbObject,FCbFieldObjectAccessors,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,FCbObject *param_3,
          FCbObject *param_4,ECbFieldError param_5,FCbFieldObjectAccessors *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  FString local_58;
  undefined1 local_48 [32];
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1e) == 2) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_48,L"%s: The two values are not equal.");
    (*pcVar4)(this,local_48,0);
    if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) == false");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar6.Data = local_58.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar6.Data = local_58.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,cVar2 != '\0');
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)local_48,L"%s: The two values are not equal.");
      (*pcVar4)(this,local_48,0);
      if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_48._0_8_);
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  FCbFieldObjectAccessors::AsType((FCbObject *)local_48,param_2,param_4);
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> Equal");
  bVar5 = FCbObjectView::Equals((FCbObjectView *)local_48,(FCbObjectView *)param_3);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_48 + 0x10));
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_48,L"%s: The two values are not equal.");
    (*pcVar4)(this,local_48,0);
    if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_48,L"%s: The two values are not equal.");
    (*pcVar4)(this,local_48,0);
    if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&param_3->field_0x10);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&param_4->field_0x10);
  return;
}

// TestFieldNoClone<2,FCbObjectView,TCbFieldTypeAccessors<2>,FCbField> @ 141a5a920

void __thiscall
FCbFieldTestBase::TestFieldNoClone<2,FCbObjectView,TCbFieldTypeAccessors<2>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,FCbObjectView *param_3,
          FCbObjectView *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<2> *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  FString local_48;
  FString local_38;
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1e) == 2) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,cVar2 != '\0');
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FCbFieldView::AsObjectView((FCbFieldView *)param_2,(FCbObjectView *)&local_38);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  bVar5 = FCbObjectView::Equals((FCbObjectView *)&local_38,param_3);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<2,FCbObjectView,TCbFieldTypeAccessors<2>,FCbFieldView> @ 141a5ac40

void __thiscall
FCbFieldTestBase::TestFieldNoClone<2,FCbObjectView,TCbFieldTypeAccessors<2>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,FCbObjectView *param_3,
          FCbObjectView *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<2> *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FString local_48;
  FString local_38;
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomById) == Object) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,EVar2 != None);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FCbFieldView::AsObjectView(param_2,(FCbObjectView *)&local_38);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  bVar4 = FCbObjectView::Equals((FCbObjectView *)&local_38,param_3);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<3,FCbObjectView,TCbFieldTypeAccessors<3>,FCbField> @ 141a5af60

void __thiscall
FCbFieldTestBase::TestFieldNoClone<3,FCbObjectView,TCbFieldTypeAccessors<3>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,FCbObjectView *param_3,
          FCbObjectView *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<3> *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  FString local_48;
  FString local_38;
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1e) == 2) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,cVar2 != '\0');
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FCbFieldView::AsObjectView((FCbFieldView *)param_2,(FCbObjectView *)&local_38);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  bVar5 = FCbObjectView::Equals((FCbObjectView *)&local_38,param_3);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<3,FCbObjectView,TCbFieldTypeAccessors<3>,FCbFieldView> @ 141a5b280

void __thiscall
FCbFieldTestBase::TestFieldNoClone<3,FCbObjectView,TCbFieldTypeAccessors<3>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,FCbObjectView *param_3,
          FCbObjectView *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<3> *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FString local_48;
  FString local_38;
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomById) == Object) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,EVar2 != None);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FCbFieldView::AsObjectView(param_2,(FCbObjectView *)&local_38);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  bVar4 = FCbObjectView::Equals((FCbObjectView *)&local_38,param_3);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<4,FCbArray,FCbFieldArrayAccessors,FCbField> @ 141a5b5a0

void __thiscall
FCbFieldTestBase::TestFieldNoClone<4,FCbArray,FCbFieldArrayAccessors,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,FCbArray *param_3,
          FCbArray *param_4,ECbFieldError param_5,FCbFieldArrayAccessors *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  FString local_58;
  undefined1 local_48 [32];
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1e) == 4) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_48,L"%s: The two values are not equal.");
    (*pcVar4)(this,local_48,0);
    if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) == false");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar6.Data = local_58.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar6.Data = local_58.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,cVar2 != '\0');
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)local_48,L"%s: The two values are not equal.");
      (*pcVar4)(this,local_48,0);
      if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_48._0_8_);
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  FCbFieldArrayAccessors::AsType((FCbArray *)local_48,param_2,param_4);
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> Equal");
  bVar5 = FCbArrayView::Equals((FCbArrayView *)local_48,(FCbArrayView *)param_3);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_48 + 0x10));
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_48,L"%s: The two values are not equal.");
    (*pcVar4)(this,local_48,0);
    if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_48,L"%s: The two values are not equal.");
    (*pcVar4)(this,local_48,0);
    if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&param_3->field_0x10);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&param_4->field_0x10);
  return;
}

// TestFieldNoClone<4,FCbArrayView,TCbFieldTypeAccessors<4>,FCbField> @ 141a5b8e0

void __thiscall
FCbFieldTestBase::TestFieldNoClone<4,FCbArrayView,TCbFieldTypeAccessors<4>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,FCbArrayView *param_3,
          FCbArrayView *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<4> *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  FString local_48;
  FString local_38;
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1e) == 4) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,cVar2 != '\0');
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FCbFieldView::AsArrayView((FCbFieldView *)param_2,(FCbArrayView *)&local_38);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  bVar5 = FCbArrayView::Equals((FCbArrayView *)&local_38,param_3);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<4,FCbArrayView,TCbFieldTypeAccessors<4>,FCbFieldView> @ 141a5bc00

void __thiscall
FCbFieldTestBase::TestFieldNoClone<4,FCbArrayView,TCbFieldTypeAccessors<4>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,FCbArrayView *param_3,
          FCbArrayView *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<4> *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FString local_48;
  FString local_38;
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomById) == Array) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,EVar2 != None);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FCbFieldView::AsArrayView(param_2,(FCbArrayView *)&local_38);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  bVar4 = FCbArrayView::Equals((FCbArrayView *)&local_38,param_3);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<5,FCbArrayView,TCbFieldTypeAccessors<5>,FCbField> @ 141a5bf20

void __thiscall
FCbFieldTestBase::TestFieldNoClone<5,FCbArrayView,TCbFieldTypeAccessors<5>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,FCbArrayView *param_3,
          FCbArrayView *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<5> *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  FString local_48;
  FString local_38;
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1e) == 4) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,cVar2 != '\0');
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FCbFieldView::AsArrayView((FCbFieldView *)param_2,(FCbArrayView *)&local_38);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  bVar5 = FCbArrayView::Equals((FCbArrayView *)&local_38,param_3);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<5,FCbArrayView,TCbFieldTypeAccessors<5>,FCbFieldView> @ 141a5c240

void __thiscall
FCbFieldTestBase::TestFieldNoClone<5,FCbArrayView,TCbFieldTypeAccessors<5>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,FCbArrayView *param_3,
          FCbArrayView *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<5> *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FString local_48;
  FString local_38;
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomById) == Array) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,EVar2 != None);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FCbFieldView::AsArrayView(param_2,(FCbArrayView *)&local_38);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  bVar4 = FCbArrayView::Equals((FCbArrayView *)&local_38,param_3);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<6,TMemoryView<void_const_>,TCbFieldTypeAccessors<6>,FCbField> @ 141a5c560

void __thiscall
FCbFieldTestBase::TestFieldNoClone<6,TMemoryView<void_const_>,TCbFieldTypeAccessors<6>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,
          TMemoryView<void_const_> *param_3,TMemoryView<void_const_> *param_4,ECbFieldError param_5,
          TCbFieldTypeAccessors<6> *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  FString local_58;
  TMemoryView<void_const_> local_48;
  TMemoryView<void_const_> local_38;
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1f) == 6) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_48,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_48,0);
    if (local_48.Data != (void *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) == false");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar6.Data = local_58.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar6.Data = local_58.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,cVar2 != '\0');
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_48,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_48,0);
      if (local_48.Data != (void *)0x0) {
        FMemory::Free(local_48.Data);
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  local_48.Data = param_4->Data;
  local_48.Size = param_4->Size;
  FCbFieldView::AsBinaryView((FCbFieldView *)param_2,&local_38,&local_48);
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,&local_38,param_3);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_48,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_48,0);
    if (local_48.Data != (void *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_48,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_48,0);
    if (local_48.Data != (void *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<6,TMemoryView<void_const_>,TCbFieldTypeAccessors<6>,FCbFieldView> @ 141a5c880

void __thiscall
FCbFieldTestBase::TestFieldNoClone<6,TMemoryView<void_const_>,TCbFieldTypeAccessors<6>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,
          TMemoryView<void_const_> *param_3,TMemoryView<void_const_> *param_4,ECbFieldError param_5,
          TCbFieldTypeAccessors<6> *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FString local_58;
  TMemoryView<void_const_> local_48;
  TMemoryView<void_const_> local_38;
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomByName) == Binary) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_48,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_48,0);
    if (local_48.Data != (void *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) == false");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar5.Data = local_58.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar5.Data = local_58.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,EVar2 != None);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_48,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_48,0);
      if (local_48.Data != (void *)0x0) {
        FMemory::Free(local_48.Data);
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  local_48.Data = param_4->Data;
  local_48.Size = param_4->Size;
  FCbFieldView::AsBinaryView(param_2,&local_38,&local_48);
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar5.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,&local_38,param_3);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_48,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_48,0);
    if (local_48.Data != (void *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_48,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_48,0);
    if (local_48.Data != (void *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<7,TStringView<char8_t>,TCbFieldTypeAccessors<7>,FCbField> @ 141a5cf50

void __thiscall
FCbFieldTestBase::TestFieldNoClone<7,TStringView<char8_t>,TCbFieldTypeAccessors<7>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,TStringView<char8_t> *param_3,
          TStringView<char8_t> *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<7> *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  FString local_68;
  TStringView<char8_t> local_58;
  TStringView<char8_t> local_48;
  TStringView<char8_t> local_38;
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1f) == 7) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_58,0);
    if (local_58.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_68,L"FCbFieldView::AsBool(%s) == false");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar6.Data = local_68.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_68,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar6.Data = local_68.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,cVar2 != '\0');
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_68,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_58,0);
      if (local_58.DataPtr != (uchar *)0x0) {
        FMemory::Free(local_58.DataPtr);
      }
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  local_58.DataPtr = param_4->DataPtr;
  local_58.Size = param_4->Size;
  local_58._12_4_ = *(undefined4 *)&param_4->field_0xc;
  FCbFieldView::AsString((FCbFieldView *)param_2,&local_48,&local_58);
  local_58.DataPtr = local_48.DataPtr;
  local_58.Size = local_48.Size;
  local_58._12_4_ = local_48._12_4_;
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> Equal");
  local_38.DataPtr = param_3->DataPtr;
  local_38.Size = param_3->Size;
  local_38._12_4_ = *(undefined4 *)&param_3->field_0xc;
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar6.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,&local_58,&local_38);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_58,0);
    if (local_58.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_58,0);
    if (local_58.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<7,TStringView<char8_t>,TCbFieldTypeAccessors<7>,FCbFieldView> @ 141a5d290

void __thiscall
FCbFieldTestBase::TestFieldNoClone<7,TStringView<char8_t>,TCbFieldTypeAccessors<7>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,
          TStringView<char8_t> *param_3,TStringView<char8_t> *param_4,ECbFieldError param_5,
          TCbFieldTypeAccessors<7> *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FString local_68;
  TStringView<char8_t> local_58;
  TStringView<char8_t> local_48;
  TStringView<char8_t> local_38;
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomByName) == String) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_58,0);
    if (local_58.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_68,L"FCbFieldView::AsBool(%s) == false");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar5.Data = local_68.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_68,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar5.Data = local_68.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,EVar2 != None);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_68,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_58,0);
      if (local_58.DataPtr != (uchar *)0x0) {
        FMemory::Free(local_58.DataPtr);
      }
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  local_58.DataPtr = param_4->DataPtr;
  local_58.Size = param_4->Size;
  local_58._12_4_ = *(undefined4 *)&param_4->field_0xc;
  FCbFieldView::AsString(param_2,&local_48,&local_58);
  local_58.DataPtr = local_48.DataPtr;
  local_58.Size = local_48.Size;
  local_58._12_4_ = local_48._12_4_;
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> Equal");
  local_38.DataPtr = param_3->DataPtr;
  local_38.Size = param_3->Size;
  local_38._12_4_ = *(undefined4 *)&param_3->field_0xc;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar5.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,&local_58,&local_38);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_58,0);
    if (local_58.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_58,0);
    if (local_58.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<8,unsigned_char,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned_char,&FCbFieldView::AsUInt8>,FCbField> @ 141a5d5d0

void __thiscall
FCbFieldTestBase::
TestFieldNoClone<8,unsigned_char,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned_char,&FCbFieldView::AsUInt8>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,uchar param_3,uchar param_4,
          ECbFieldError param_5,
          TCbIntegerAccessors<unsigned_char,&public:_unsigned_char___cdecl_FCbFieldView::AsUInt8(unsigned_char)>
          *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  FIntegerParams FVar6;
  ulong64 uVar7;
  ForAnyElementType FVar8;
  FString local_48;
  FString local_38;
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1e) == 8) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,cVar2 != '\0');
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FVar6 = UE::CompactBinary::Private::MakeIntegerParams<unsigned_char>();
  uVar7 = FCbFieldView::AsInteger((FCbFieldView *)param_2,(ulonglong)param_4,FVar6);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  if ((uchar)uVar7 != param_3) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<8,unsigned_char,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned_char,&FCbFieldView::AsUInt8>,FCbFieldView> @ 141a5d910

void __thiscall
FCbFieldTestBase::
TestFieldNoClone<8,unsigned_char,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned_char,&FCbFieldView::AsUInt8>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,uchar param_3,uchar param_4
          ,ECbFieldError param_5,
          TCbIntegerAccessors<unsigned_char,&public:_unsigned_char___cdecl_FCbFieldView::AsUInt8(unsigned_char)>
          *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  FIntegerParams FVar5;
  ulong64 uVar6;
  ForAnyElementType FVar7;
  FString local_48;
  FString local_38;
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomById) == IntegerPositive) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,bVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,EVar2 != None);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FVar5 = UE::CompactBinary::Private::MakeIntegerParams<unsigned_char>();
  uVar6 = FCbFieldView::AsInteger(param_2,(ulonglong)param_4,FVar5);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  if ((uchar)uVar6 != param_3) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<8,unsigned_short,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned_short,&FCbFieldView::AsUInt16>,FCbField> @ 141a5dc50

void __thiscall
FCbFieldTestBase::
TestFieldNoClone<8,unsigned_short,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned_short,&FCbFieldView::AsUInt16>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,ushort param_3,ushort param_4,
          ECbFieldError param_5,
          TCbIntegerAccessors<unsigned_short,&public:_unsigned_short___cdecl_FCbFieldView::AsUInt16(unsigned_short)>
          *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  FIntegerParams FVar6;
  ulong64 uVar7;
  ForAnyElementType FVar8;
  FString local_48;
  FString local_38;
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1e) == 8) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,cVar2 != '\0');
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FVar6 = UE::CompactBinary::Private::MakeIntegerParams<unsigned_short>();
  uVar7 = FCbFieldView::AsInteger((FCbFieldView *)param_2,(ulonglong)param_4,FVar6);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  if ((ushort)uVar7 != param_3) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<8,unsigned_short,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned_short,&FCbFieldView::AsUInt16>,FCbFieldView> @ 141a5df90

void __thiscall
FCbFieldTestBase::
TestFieldNoClone<8,unsigned_short,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned_short,&FCbFieldView::AsUInt16>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,ushort param_3,
          ushort param_4,ECbFieldError param_5,
          TCbIntegerAccessors<unsigned_short,&public:_unsigned_short___cdecl_FCbFieldView::AsUInt16(unsigned_short)>
          *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  FIntegerParams FVar5;
  ulong64 uVar6;
  ForAnyElementType FVar7;
  FString local_48;
  FString local_38;
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomById) == IntegerPositive) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,bVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,EVar2 != None);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FVar5 = UE::CompactBinary::Private::MakeIntegerParams<unsigned_short>();
  uVar6 = FCbFieldView::AsInteger(param_2,(ulonglong)param_4,FVar5);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  if ((ushort)uVar6 != param_3) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<8,unsigned_int,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned_int,&FCbFieldView::AsUInt32>,FCbField> @ 141a5e2d0

void __thiscall
FCbFieldTestBase::
TestFieldNoClone<8,unsigned_int,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned_int,&FCbFieldView::AsUInt32>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,uint param_3,uint param_4,
          ECbFieldError param_5,
          TCbIntegerAccessors<unsigned_int,&public:_unsigned_int___cdecl_FCbFieldView::AsUInt32(unsigned_int)>
          *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  FIntegerParams FVar6;
  ulong64 uVar7;
  ForAnyElementType FVar8;
  FString local_48;
  FString local_38;
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1e) == 8) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,cVar2 != '\0');
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FVar6 = UE::CompactBinary::Private::MakeIntegerParams<unsigned_int>();
  uVar7 = FCbFieldView::AsInteger((FCbFieldView *)param_2,(ulonglong)param_4,FVar6);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  if ((uint)uVar7 != param_3) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<8,unsigned_int,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned_int,&FCbFieldView::AsUInt32>,FCbFieldView> @ 141a5e610

void __thiscall
FCbFieldTestBase::
TestFieldNoClone<8,unsigned_int,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned_int,&FCbFieldView::AsUInt32>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,uint param_3,uint param_4,
          ECbFieldError param_5,
          TCbIntegerAccessors<unsigned_int,&public:_unsigned_int___cdecl_FCbFieldView::AsUInt32(unsigned_int)>
          *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  FIntegerParams FVar5;
  ulong64 uVar6;
  ForAnyElementType FVar7;
  FString local_48;
  FString local_38;
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomById) == IntegerPositive) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,bVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,EVar2 != None);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FVar5 = UE::CompactBinary::Private::MakeIntegerParams<unsigned_int>();
  uVar6 = FCbFieldView::AsInteger(param_2,(ulonglong)param_4,FVar5);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  if ((uint)uVar6 != param_3) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<8,unsigned___int64,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned___int64,&FCbFieldView::AsUInt64>,FCbField> @ 141a5e950

void __thiscall
FCbFieldTestBase::
TestFieldNoClone<8,unsigned___int64,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned___int64,&FCbFieldView::AsUInt64>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,ulong64 param_3,ulong64 param_4
          ,ECbFieldError param_5,
          TCbIntegerAccessors<unsigned___int64,&public:_unsigned___int64___cdecl_FCbFieldView::AsUInt64(unsigned___int64)>
          *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  FIntegerParams FVar6;
  ulong64 uVar7;
  ForAnyElementType FVar8;
  FString local_48;
  FString local_38;
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1e) == 8) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,cVar2 != '\0');
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FVar6 = UE::CompactBinary::Private::MakeIntegerParams<unsigned___int64>();
  uVar7 = FCbFieldView::AsInteger((FCbFieldView *)param_2,param_4,FVar6);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar8.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,uVar7,param_3);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<8,unsigned___int64,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned___int64,&FCbFieldView::AsUInt64>,FCbFieldView> @ 141a5ec70

void __thiscall
FCbFieldTestBase::
TestFieldNoClone<8,unsigned___int64,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned___int64,&FCbFieldView::AsUInt64>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,ulong64 param_3,
          ulong64 param_4,ECbFieldError param_5,
          TCbIntegerAccessors<unsigned___int64,&public:_unsigned___int64___cdecl_FCbFieldView::AsUInt64(unsigned___int64)>
          *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  FIntegerParams FVar5;
  ulong64 uVar6;
  ForAnyElementType FVar7;
  FString local_48;
  FString local_38;
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomById) == IntegerPositive) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,bVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,EVar2 != None);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FVar5 = UE::CompactBinary::Private::MakeIntegerParams<unsigned___int64>();
  uVar6 = FCbFieldView::AsInteger(param_2,param_4,FVar5);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,uVar6,param_3);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<9,signed_char,FCbFieldIntegerTestBase::TCbIntegerAccessors<signed_char,&FCbFieldView::AsInt8>,FCbField> @ 141a5ef90

void __thiscall
FCbFieldTestBase::
TestFieldNoClone<9,signed_char,FCbFieldIntegerTestBase::TCbIntegerAccessors<signed_char,&FCbFieldView::AsInt8>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,schar param_3,schar param_4,
          ECbFieldError param_5,
          TCbIntegerAccessors<signed_char,&public:_signed_char___cdecl_FCbFieldView::AsInt8(signed_char)>
          *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  FIntegerParams FVar6;
  ulong64 uVar7;
  ForAnyElementType FVar8;
  FString local_48;
  FString local_38;
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1e) == 8) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,cVar2 != '\0');
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FVar6 = UE::CompactBinary::Private::MakeIntegerParams<signed_char>();
  uVar7 = FCbFieldView::AsInteger((FCbFieldView *)param_2,(longlong)param_4,FVar6);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  if ((char)uVar7 != param_3) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<9,signed_char,FCbFieldIntegerTestBase::TCbIntegerAccessors<signed_char,&FCbFieldView::AsInt8>,FCbFieldView> @ 141a5f2d0

void __thiscall
FCbFieldTestBase::
TestFieldNoClone<9,signed_char,FCbFieldIntegerTestBase::TCbIntegerAccessors<signed_char,&FCbFieldView::AsInt8>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,schar param_3,schar param_4
          ,ECbFieldError param_5,
          TCbIntegerAccessors<signed_char,&public:_signed_char___cdecl_FCbFieldView::AsInt8(signed_char)>
          *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  FIntegerParams FVar5;
  ulong64 uVar6;
  ForAnyElementType FVar7;
  FString local_48;
  FString local_38;
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomById) == IntegerPositive) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,bVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,EVar2 != None);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FVar5 = UE::CompactBinary::Private::MakeIntegerParams<signed_char>();
  uVar6 = FCbFieldView::AsInteger(param_2,(longlong)param_4,FVar5);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  if ((char)uVar6 != param_3) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<9,short,FCbFieldIntegerTestBase::TCbIntegerAccessors<short,&FCbFieldView::AsInt16>,FCbField> @ 141a5f610

void __thiscall
FCbFieldTestBase::
TestFieldNoClone<9,short,FCbFieldIntegerTestBase::TCbIntegerAccessors<short,&FCbFieldView::AsInt16>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,short param_3,short param_4,
          ECbFieldError param_5,
          TCbIntegerAccessors<short,&public:_short___cdecl_FCbFieldView::AsInt16(short)> *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  FIntegerParams FVar6;
  ulong64 uVar7;
  ForAnyElementType FVar8;
  FString local_48;
  FString local_38;
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1e) == 8) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,cVar2 != '\0');
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FVar6 = UE::CompactBinary::Private::MakeIntegerParams<short>();
  uVar7 = FCbFieldView::AsInteger((FCbFieldView *)param_2,(longlong)param_4,FVar6);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  if ((short)uVar7 != param_3) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<9,short,FCbFieldIntegerTestBase::TCbIntegerAccessors<short,&FCbFieldView::AsInt16>,FCbFieldView> @ 141a5f960

void __thiscall
FCbFieldTestBase::
TestFieldNoClone<9,short,FCbFieldIntegerTestBase::TCbIntegerAccessors<short,&FCbFieldView::AsInt16>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,short param_3,short param_4
          ,ECbFieldError param_5,
          TCbIntegerAccessors<short,&public:_short___cdecl_FCbFieldView::AsInt16(short)> *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  FIntegerParams FVar5;
  ulong64 uVar6;
  ForAnyElementType FVar7;
  FString local_48;
  FString local_38;
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomById) == IntegerPositive) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,bVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,EVar2 != None);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FVar5 = UE::CompactBinary::Private::MakeIntegerParams<short>();
  uVar6 = FCbFieldView::AsInteger(param_2,(longlong)param_4,FVar5);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  if ((short)uVar6 != param_3) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<9,int,FCbFieldIntegerTestBase::TCbIntegerAccessors<int,&FCbFieldView::AsInt32>,FCbField> @ 141a5fcb0

void __thiscall
FCbFieldTestBase::
TestFieldNoClone<9,int,FCbFieldIntegerTestBase::TCbIntegerAccessors<int,&FCbFieldView::AsInt32>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,int param_3,int param_4,
          ECbFieldError param_5,
          TCbIntegerAccessors<int,&public:_int___cdecl_FCbFieldView::AsInt32(int)> *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  FIntegerParams FVar6;
  ulong64 uVar7;
  ForAnyElementType FVar8;
  FString local_48;
  FString local_38;
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1e) == 8) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,cVar2 != '\0');
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FVar6 = UE::CompactBinary::Private::MakeIntegerParams<int>();
  uVar7 = FCbFieldView::AsInteger((FCbFieldView *)param_2,(longlong)param_4,FVar6);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar8.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,(int)uVar7,param_3);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<9,int,FCbFieldIntegerTestBase::TCbIntegerAccessors<int,&FCbFieldView::AsInt32>,FCbFieldView> @ 141a5ffd0

void __thiscall
FCbFieldTestBase::
TestFieldNoClone<9,int,FCbFieldIntegerTestBase::TCbIntegerAccessors<int,&FCbFieldView::AsInt32>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,int param_3,int param_4,
          ECbFieldError param_5,
          TCbIntegerAccessors<int,&public:_int___cdecl_FCbFieldView::AsInt32(int)> *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  FIntegerParams FVar5;
  ulong64 uVar6;
  ForAnyElementType FVar7;
  FString local_48;
  FString local_38;
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomById) == IntegerPositive) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,bVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,EVar2 != None);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FVar5 = UE::CompactBinary::Private::MakeIntegerParams<int>();
  uVar6 = FCbFieldView::AsInteger(param_2,(longlong)param_4,FVar5);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,(int)uVar6,param_3);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<9,__int64,FCbFieldIntegerTestBase::TCbIntegerAccessors<__int64,&FCbFieldView::AsInt64>,FCbField> @ 141a602f0

void __thiscall
FCbFieldTestBase::
TestFieldNoClone<9,__int64,FCbFieldIntegerTestBase::TCbIntegerAccessors<__int64,&FCbFieldView::AsInt64>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,long64 param_3,long64 param_4,
          ECbFieldError param_5,
          TCbIntegerAccessors<__int64,&public:___int64___cdecl_FCbFieldView::AsInt64(__int64)>
          *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  FIntegerParams FVar6;
  ulong64 uVar7;
  ForAnyElementType FVar8;
  FString local_48;
  FString local_38;
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1e) == 8) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,cVar2 != '\0');
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FVar6 = UE::CompactBinary::Private::MakeIntegerParams<__int64>();
  uVar7 = FCbFieldView::AsInteger((FCbFieldView *)param_2,param_4,FVar6);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar8.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,uVar7,param_3);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<9,__int64,FCbFieldIntegerTestBase::TCbIntegerAccessors<__int64,&FCbFieldView::AsInt64>,FCbFieldView> @ 141a60610

void __thiscall
FCbFieldTestBase::
TestFieldNoClone<9,__int64,FCbFieldIntegerTestBase::TCbIntegerAccessors<__int64,&FCbFieldView::AsInt64>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,long64 param_3,
          long64 param_4,ECbFieldError param_5,
          TCbIntegerAccessors<__int64,&public:___int64___cdecl_FCbFieldView::AsInt64(__int64)>
          *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  FIntegerParams FVar5;
  ulong64 uVar6;
  ForAnyElementType FVar7;
  FString local_48;
  FString local_38;
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomById) == IntegerPositive) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,bVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,EVar2 != None);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FVar5 = UE::CompactBinary::Private::MakeIntegerParams<__int64>();
  uVar6 = FCbFieldView::AsInteger(param_2,param_4,FVar5);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,uVar6,param_3);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<10,float,TCbFieldTypeAccessors<10>,FCbField> @ 141a60930

void __thiscall
FCbFieldTestBase::TestFieldNoClone<10,float,TCbFieldTypeAccessors<10>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,float param_3,float param_4,
          ECbFieldError param_5,TCbFieldTypeAccessors<10> *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  float fVar7;
  FString local_68;
  FString local_58 [3];
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1c) == 8) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_68,L"FCbFieldView::AsBool(%s) == false");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar6.Data = local_68.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_68,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar6.Data = local_68.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,cVar2 != '\0');
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_68,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(local_58,L"%s: The two values are not equal.");
      (*pcVar4)(this,local_58,0);
      if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
      }
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  fVar7 = FCbFieldView::AsFloat((FCbFieldView *)param_2,param_4);
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar6.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,fVar7,param_3,__real_38d1b717);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<10,float,TCbFieldTypeAccessors<10>,FCbFieldView> @ 141a60c60

void __thiscall
FCbFieldTestBase::TestFieldNoClone<10,float,TCbFieldTypeAccessors<10>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,float param_3,float param_4
          ,ECbFieldError param_5,TCbFieldTypeAccessors<10> *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  float fVar6;
  FString local_68;
  FString local_58 [3];
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & (Hash|BoolFalse)) == IntegerPositive) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_68,L"FCbFieldView::AsBool(%s) == false");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar5.Data = local_68.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_68,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar5.Data = local_68.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,EVar2 != None);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_68,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(local_58,L"%s: The two values are not equal.");
      (*pcVar3)(this,local_58,0);
      if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
      }
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  fVar6 = FCbFieldView::AsFloat(param_2,param_4);
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar5.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,fVar6,param_3,__real_38d1b717);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<16,FIoHash,TCbFieldTypeAccessors<16>,FCbField> @ 141a60f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCbFieldTestBase::TestFieldNoClone<16,FIoHash,TCbFieldTypeAccessors<16>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,FIoHash *param_3,
          FIoHash *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<16> *param_6)

{
  char cVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  undefined1 auStack_98 [32];
  FString local_78;
  FIoHash *local_68;
  FIoHash *local_60;
  FIoHash local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68 = param_4;
  local_60 = param_3;
  bVar4 = FCbFieldType::IsHash(*(ECbFieldType *)param_2);
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::Is[Type](%s)");
  if (bVar4 != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar4 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) == false");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar5.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    cVar1 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar5.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,cVar1 != '\0');
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    cVar1 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar1 != '\x01') {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_58,0);
      if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_58.Hash._0_8_);
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  FCbFieldView::AsHash((FCbFieldView *)param_2,&local_58,local_68);
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar5.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual<FIoHash>
            ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,&local_58,local_60);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  cVar1 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar1 != '\0') != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<16,FIoHash,TCbFieldTypeAccessors<16>,FCbFieldView> @ 141a612b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCbFieldTestBase::TestFieldNoClone<16,FIoHash,TCbFieldTypeAccessors<16>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,FIoHash *param_3,
          FIoHash *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<16> *param_6)

{
  ECbFieldError EVar1;
  code *pcVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  undefined1 auStack_98 [32];
  FString local_78;
  FIoHash *local_68;
  FIoHash *local_60;
  FIoHash local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68 = param_4;
  local_60 = param_3;
  bVar3 = FCbFieldType::IsHash(param_2->TypeWithFlags);
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::Is[Type](%s)");
  if (bVar3 != (param_5 != TypeError)) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar3 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) == false");
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar4.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar4.Data,bVar3);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    EVar1 = param_2->Error;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar4.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar4.Data,EVar1 != None);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    EVar1 = param_2->Error;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar1 != TypeError) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
      (*pcVar2)(this,&local_58,0);
      if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_58.Hash._0_8_);
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  FCbFieldView::AsHash(param_2,&local_58,local_68);
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar4.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual<FIoHash>
            ((FAutomationTestBase *)this,(wchar_t *)FVar4.Data,&local_58,local_60);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  EVar1 = param_2->Error;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar1 != None) != (param_5 != None)) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  EVar1 = param_2->Error;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar1 != param_5) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<17,FGuid,TCbFieldTypeAccessors<17>,FCbField> @ 141a615d0

void __thiscall
FCbFieldTestBase::TestFieldNoClone<17,FGuid,TCbFieldTypeAccessors<17>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,FGuid *param_3,FGuid *param_4,
          ECbFieldError param_5,TCbFieldTypeAccessors<17> *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  ForAnyElementType local_48;
  uint local_40;
  FString local_38;
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl((FString *)&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1f) == 0x11) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl((FString *)&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_40 != 0) {
      FVar6.Data = local_48.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl((FString *)&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_40 != 0) {
      FVar6.Data = local_48.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,cVar2 != '\0');
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl
              ((FString *)&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  FCbFieldView::AsUuid((FCbFieldView *)param_2,(FGuid *)&local_48,param_4);
  ::FString::PrintfImpl(&local_38,L"FCbFieldView::As[Type](%s) -> Equal");
  FAutomationTestBase::TestEqual<FGuid>
            ((FAutomationTestBase *)this,&local_38,(FGuid *)&local_48,param_3);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl((FString *)&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl((FString *)&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// TestFieldNoClone<17,FGuid,TCbFieldTypeAccessors<17>,FCbFieldView> @ 141a618e0

void __thiscall
FCbFieldTestBase::TestFieldNoClone<17,FGuid,TCbFieldTypeAccessors<17>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,FGuid *param_3,
          FGuid *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<17> *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  ForAnyElementType local_48;
  uint local_40;
  FString local_38;
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl((FString *)&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomByName) == Uuid) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl((FString *)&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_40 != 0) {
      FVar5.Data = local_48.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl((FString *)&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_40 != 0) {
      FVar5.Data = local_48.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,EVar2 != None);
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl
              ((FString *)&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  FCbFieldView::AsUuid(param_2,(FGuid *)&local_48,param_4);
  ::FString::PrintfImpl(&local_38,L"FCbFieldView::As[Type](%s) -> Equal");
  FAutomationTestBase::TestEqual<FGuid>
            ((FAutomationTestBase *)this,&local_38,(FGuid *)&local_48,param_3);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl((FString *)&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl((FString *)&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// TestFieldNoClone<18,__int64,TCbFieldTypeAccessors<18>,FCbField> @ 141a61bf0

void __thiscall
FCbFieldTestBase::TestFieldNoClone<18,__int64,TCbFieldTypeAccessors<18>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,long64 param_3,long64 param_4,
          ECbFieldError param_5,TCbFieldTypeAccessors<18> *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  long64 lVar6;
  ForAnyElementType FVar7;
  FString local_48;
  FString local_38;
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1f) == 0x12) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,bVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,cVar2 != '\0');
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  lVar6 = FCbFieldView::AsDateTimeTicks((FCbFieldView *)param_2,param_4);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,lVar6,param_3);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<18,__int64,TCbFieldTypeAccessors<18>,FCbFieldView> @ 141a61f00

void __thiscall
FCbFieldTestBase::TestFieldNoClone<18,__int64,TCbFieldTypeAccessors<18>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,long64 param_3,
          long64 param_4,ECbFieldError param_5,TCbFieldTypeAccessors<18> *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  long64 lVar5;
  ForAnyElementType FVar6;
  FString local_48;
  FString local_38;
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomByName) == DateTime) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,EVar2 != None);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  lVar5 = FCbFieldView::AsDateTimeTicks(param_2,param_4);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,lVar5,param_3);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<19,__int64,TCbFieldTypeAccessors<19>,FCbField> @ 141a62210

void __thiscall
FCbFieldTestBase::TestFieldNoClone<19,__int64,TCbFieldTypeAccessors<19>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,long64 param_3,long64 param_4,
          ECbFieldError param_5,TCbFieldTypeAccessors<19> *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  long64 lVar6;
  ForAnyElementType FVar7;
  FString local_48;
  FString local_38;
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1f) == 0x13) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,bVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,cVar2 != '\0');
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  lVar6 = FCbFieldView::AsTimeSpanTicks((FCbFieldView *)param_2,param_4);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,lVar6,param_3);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<19,__int64,TCbFieldTypeAccessors<19>,FCbFieldView> @ 141a62520

void __thiscall
FCbFieldTestBase::TestFieldNoClone<19,__int64,TCbFieldTypeAccessors<19>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,long64 param_3,
          long64 param_4,ECbFieldError param_5,TCbFieldTypeAccessors<19> *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  long64 lVar5;
  ForAnyElementType FVar6;
  FString local_48;
  FString local_38;
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomByName) == TimeSpan) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,EVar2 != None);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  lVar5 = FCbFieldView::AsTimeSpanTicks(param_2,param_4);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,lVar5,param_3);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<20,FCbObjectId,TCbFieldTypeAccessors<20>,FCbField> @ 141a62830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCbFieldTestBase::TestFieldNoClone<20,FCbObjectId,TCbFieldTypeAccessors<20>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,FCbObjectId *param_3,
          FCbObjectId *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<20> *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  undefined1 auStack_98 [32];
  FString local_78;
  FString local_68;
  FCbObjectId *local_58;
  FCbObjectId *local_50 [2];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_50[0] = param_4;
  bVar1 = *(byte *)param_2;
  local_58 = param_3;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1f) == 0x14) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_68,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) == false");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar6.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar6.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,cVar2 != '\0');
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_68,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_68,0);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  FCbFieldView::AsObjectId((FCbFieldView *)param_2,(FCbObjectId *)local_50,local_50[0]);
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> Equal");
  FAutomationTestBase::TestEqual<FCbObjectId>
            ((FAutomationTestBase *)this,&local_68,(FCbObjectId *)local_50,local_58);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_68,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_68,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<20,FCbObjectId,TCbFieldTypeAccessors<20>,FCbFieldView> @ 141a62b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCbFieldTestBase::TestFieldNoClone<20,FCbObjectId,TCbFieldTypeAccessors<20>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,FCbObjectId *param_3,
          FCbObjectId *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<20> *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  undefined1 auStack_98 [32];
  FString local_78;
  FString local_68;
  FCbObjectId *local_58;
  FCbObjectId *local_50 [2];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_50[0] = param_4;
  EVar1 = param_2->TypeWithFlags;
  local_58 = param_3;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomByName) == ObjectId) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_68,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) == false");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar5.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar5.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,EVar2 != None);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_68,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_68,0);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  FCbFieldView::AsObjectId(param_2,(FCbObjectId *)local_50,local_50[0]);
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> Equal");
  FAutomationTestBase::TestEqual<FCbObjectId>
            ((FAutomationTestBase *)this,&local_68,(FCbObjectId *)local_50,local_58);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_68,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_68,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<30,FCbCustomById,TCbFieldTypeAccessors<30>,FCbField> @ 141a62e70

void __thiscall
FCbFieldTestBase::TestFieldNoClone<30,FCbCustomById,TCbFieldTypeAccessors<30>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,FCbCustomById *param_3,
          FCbCustomById *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<30> *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  FCbCustomById *pFVar6;
  ForAnyElementType FVar7;
  FString local_78;
  FCbCustomById local_68;
  FCbCustomById local_48;
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1f) == 0x1e) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_68,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_68,0);
    if ((void *)local_68.Id != (void *)0x0) {
      FMemory::Free((void *)local_68.Id);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) == false");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar7.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,bVar5);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar7.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,cVar2 != '\0');
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_68,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_68,0);
      if ((void *)local_68.Id != (void *)0x0) {
        FMemory::Free((void *)local_68.Id);
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  local_68.Id = param_4->Id;
  local_68.Data.Data = (param_4->Data).Data;
  local_68.Data.Size = (param_4->Data).Size;
  pFVar6 = FCbFieldView::AsCustomById((FCbFieldView *)param_2,&local_48,&local_68);
  local_68.Id = pFVar6->Id;
  local_68.Data.Data = (pFVar6->Data).Data;
  local_48.Data.Size = (pFVar6->Data).Size;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> Equal");
  if ((((void *)local_68.Id == (void *)param_3->Id) && (local_48.Data.Size == (param_3->Data).Size))
     && ((local_48.Data.Size == 0 || (local_68.Data.Data == (param_3->Data).Data)))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar7.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar7.Data,bVar5);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_68,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_68,0);
    if ((void *)local_68.Id != (void *)0x0) {
      FMemory::Free((void *)local_68.Id);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_68,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_68,0);
    if ((void *)local_68.Id != (void *)0x0) {
      FMemory::Free((void *)local_68.Id);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<30,FCbCustomById,TCbFieldTypeAccessors<30>,FCbFieldView> @ 141a631d0

void __thiscall
FCbFieldTestBase::TestFieldNoClone<30,FCbCustomById,TCbFieldTypeAccessors<30>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,FCbCustomById *param_3,
          FCbCustomById *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<30> *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  FCbCustomById *pFVar5;
  ForAnyElementType FVar6;
  FString local_78;
  FCbCustomById local_68;
  FCbCustomById local_48;
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomByName) == CustomById) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_68,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_68,0);
    if ((void *)local_68.Id != (void *)0x0) {
      FMemory::Free((void *)local_68.Id);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) == false");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar6.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar4);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar6.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,EVar2 != None);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_68,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_68,0);
      if ((void *)local_68.Id != (void *)0x0) {
        FMemory::Free((void *)local_68.Id);
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  local_68.Id = param_4->Id;
  local_68.Data.Data = (param_4->Data).Data;
  local_68.Data.Size = (param_4->Data).Size;
  pFVar5 = FCbFieldView::AsCustomById(param_2,&local_48,&local_68);
  local_68.Id = pFVar5->Id;
  local_68.Data.Data = (pFVar5->Data).Data;
  local_48.Data.Size = (pFVar5->Data).Size;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> Equal");
  if ((((void *)local_68.Id == (void *)param_3->Id) && (local_48.Data.Size == (param_3->Data).Size))
     && ((local_48.Data.Size == 0 || (local_68.Data.Data == (param_3->Data).Data)))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar6.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar4);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_68,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_68,0);
    if ((void *)local_68.Id != (void *)0x0) {
      FMemory::Free((void *)local_68.Id);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_68,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_68,0);
    if ((void *)local_68.Id != (void *)0x0) {
      FMemory::Free((void *)local_68.Id);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<31,FCbCustomByName,TCbFieldTypeAccessors<31>,FCbField> @ 141a63bd0

void __thiscall
FCbFieldTestBase::TestFieldNoClone<31,FCbCustomByName,TCbFieldTypeAccessors<31>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,FCbCustomByName *param_3,
          FCbCustomByName *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<31> *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  FCbCustomByName *pFVar6;
  wchar_t *pwVar7;
  FCbCustomByName local_78;
  FString local_58;
  FCbCustomByName local_48;
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1f) == 0x1f) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if ((wchar_t *)local_78.Name.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_78.Name.DataPtr);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::AsBool(%s) == false");
    pwVar7 = L"";
    if (local_78.Name.Size != 0) {
      pwVar7 = (wchar_t *)local_78.Name.DataPtr;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar7,bVar5);
    if ((wchar_t *)local_78.Name.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_78.Name.DataPtr);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::AsBool(%s) -> HasError()");
    pwVar7 = L"";
    if (local_78.Name.Size != 0) {
      pwVar7 = (wchar_t *)local_78.Name.DataPtr;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar7,cVar2 != '\0');
    if ((wchar_t *)local_78.Name.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_78.Name.DataPtr);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl
              ((FString *)&local_78,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_58,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_58,0);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    if ((wchar_t *)local_78.Name.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_78.Name.DataPtr);
    }
  }
  local_78.Name.DataPtr = (param_4->Name).DataPtr;
  local_78.Name.Size = (param_4->Name).Size;
  local_78.Name._12_4_ = *(undefined4 *)&(param_4->Name).field_0xc;
  local_78.Data.Data = (param_4->Data).Data;
  local_78.Data.Size = (param_4->Data).Size;
  pFVar6 = FCbFieldView::AsCustomByName((FCbFieldView *)param_2,&local_48,&local_78);
  local_78.Name.DataPtr = (pFVar6->Name).DataPtr;
  local_78.Name.Size = (pFVar6->Name).Size;
  local_78.Name._12_4_ = *(undefined4 *)&(pFVar6->Name).field_0xc;
  local_78.Data.Data = (pFVar6->Data).Data;
  local_78.Data.Size = (pFVar6->Data).Size;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> Equal");
  TestEqual(this,&local_58,&local_78,param_3);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.Name.DataPtr != (uchar *)0x0) {
    FMemory::Free(local_78.Name.DataPtr);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.Name.DataPtr != (uchar *)0x0) {
    FMemory::Free(local_78.Name.DataPtr);
  }
  return;
}

// TestFieldNoClone<31,FCbCustomByName,TCbFieldTypeAccessors<31>,FCbFieldView> @ 141a63f00

void __thiscall
FCbFieldTestBase::TestFieldNoClone<31,FCbCustomByName,TCbFieldTypeAccessors<31>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,FCbCustomByName *param_3,
          FCbCustomByName *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<31> *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  FCbCustomByName *pFVar5;
  wchar_t *pwVar6;
  FCbCustomByName local_78;
  FString local_58;
  FCbCustomByName local_48;
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomByName) == CustomByName) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if ((wchar_t *)local_78.Name.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_78.Name.DataPtr);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::AsBool(%s) == false");
    pwVar6 = L"";
    if (local_78.Name.Size != 0) {
      pwVar6 = (wchar_t *)local_78.Name.DataPtr;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar6,bVar4);
    if ((wchar_t *)local_78.Name.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_78.Name.DataPtr);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::AsBool(%s) -> HasError()");
    pwVar6 = L"";
    if (local_78.Name.Size != 0) {
      pwVar6 = (wchar_t *)local_78.Name.DataPtr;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar6,EVar2 != None);
    if ((wchar_t *)local_78.Name.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_78.Name.DataPtr);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl
              ((FString *)&local_78,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_58,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_58,0);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    if ((wchar_t *)local_78.Name.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_78.Name.DataPtr);
    }
  }
  local_78.Name.DataPtr = (param_4->Name).DataPtr;
  local_78.Name.Size = (param_4->Name).Size;
  local_78.Name._12_4_ = *(undefined4 *)&(param_4->Name).field_0xc;
  local_78.Data.Data = (param_4->Data).Data;
  local_78.Data.Size = (param_4->Data).Size;
  pFVar5 = FCbFieldView::AsCustomByName(param_2,&local_48,&local_78);
  local_78.Name.DataPtr = (pFVar5->Name).DataPtr;
  local_78.Name.Size = (pFVar5->Name).Size;
  local_78.Name._12_4_ = *(undefined4 *)&(pFVar5->Name).field_0xc;
  local_78.Data.Data = (pFVar5->Data).Data;
  local_78.Data.Size = (pFVar5->Data).Size;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> Equal");
  TestEqual(this,&local_58,&local_78,param_3);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.Name.DataPtr != (uchar *)0x0) {
    FMemory::Free(local_78.Name.DataPtr);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.Name.DataPtr != (uchar *)0x0) {
    FMemory::Free(local_78.Name.DataPtr);
  }
  return;
}

// TestFieldNoClone<11,double,TCbFieldTypeAccessors<11>,FCbField> @ 141a648d0

void __thiscall
FCbFieldTestBase::TestFieldNoClone<11,double,TCbFieldTypeAccessors<11>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,double param_3,double param_4,
          ECbFieldError param_5,TCbFieldTypeAccessors<11> *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  double dVar7;
  FString local_68;
  FString local_58 [3];
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1c) == 8) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_68,L"FCbFieldView::AsBool(%s) == false");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar6.Data = local_68.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_68,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar6.Data = local_68.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,cVar2 != '\0');
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_68,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(local_58,L"%s: The two values are not equal.");
      (*pcVar4)(this,local_58,0);
      if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
      }
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  dVar7 = FCbFieldView::AsDouble((FCbFieldView *)param_2,param_4);
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar6.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,dVar7,param_3,__real_3f1a36e2e0000000
            );
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<11,double,TCbFieldTypeAccessors<11>,FCbFieldView> @ 141a64c00

void __thiscall
FCbFieldTestBase::TestFieldNoClone<11,double,TCbFieldTypeAccessors<11>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,double param_3,
          double param_4,ECbFieldError param_5,TCbFieldTypeAccessors<11> *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  double dVar6;
  FString local_68;
  FString local_58 [3];
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & (Hash|BoolFalse)) == IntegerPositive) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_68,L"FCbFieldView::AsBool(%s) == false");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar5.Data = local_68.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_68,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar5.Data = local_68.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,EVar2 != None);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_68,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(local_58,L"%s: The two values are not equal.");
      (*pcVar3)(this,local_58,0);
      if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
      }
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  dVar6 = FCbFieldView::AsDouble(param_2,param_4);
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar5.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,dVar6,param_3,__real_3f1a36e2e0000000
            );
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_68,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<12,bool,TCbFieldTypeAccessors<12>,FCbField> @ 141a64f30

void __thiscall
FCbFieldTestBase::TestFieldNoClone<12,bool,TCbFieldTypeAccessors<12>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,bool param_3,bool param_4,
          ECbFieldError param_5,TCbFieldTypeAccessors<12> *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  FString local_48;
  FString local_38;
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1e) == 0xc) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,cVar2 != '\0');
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,param_4);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  if (bVar5 != param_3) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<12,bool,TCbFieldTypeAccessors<12>,FCbFieldView> @ 141a65270

void __thiscall
FCbFieldTestBase::TestFieldNoClone<12,bool,TCbFieldTypeAccessors<12>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,bool param_3,bool param_4,
          ECbFieldError param_5,TCbFieldTypeAccessors<12> *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FString local_48;
  FString local_38;
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomById) == BoolFalse) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,EVar2 != None);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = FCbFieldView::AsBool(param_2,param_4);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  if (bVar4 != param_3) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<13,bool,TCbFieldTypeAccessors<13>,FCbField> @ 141a655b0

void __thiscall
FCbFieldTestBase::TestFieldNoClone<13,bool,TCbFieldTypeAccessors<13>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,bool param_3,bool param_4,
          ECbFieldError param_5,TCbFieldTypeAccessors<13> *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  FString local_48;
  FString local_38;
  
  bVar1 = *(byte *)param_2;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1e) == 0xc) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,cVar2 != '\0');
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,param_4);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  if (bVar5 != param_3) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<13,bool,TCbFieldTypeAccessors<13>,FCbFieldView> @ 141a658f0

void __thiscall
FCbFieldTestBase::TestFieldNoClone<13,bool,TCbFieldTypeAccessors<13>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,bool param_3,bool param_4,
          ECbFieldError param_5,TCbFieldTypeAccessors<13> *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FString local_48;
  FString local_38;
  
  EVar1 = param_2->TypeWithFlags;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomById) == BoolFalse) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,EVar2 != None);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = FCbFieldView::AsBool(param_2,param_4);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  if (bVar4 != param_3) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<14,FIoHash,TCbFieldTypeAccessors<14>,FCbField> @ 141a65c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCbFieldTestBase::TestFieldNoClone<14,FIoHash,TCbFieldTypeAccessors<14>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,FIoHash *param_3,
          FIoHash *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<14> *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  undefined1 auStack_98 [32];
  FString local_78;
  FIoHash *local_68;
  FIoHash *local_60;
  FIoHash local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68 = param_4;
  bVar1 = *(byte *)param_2;
  local_60 = param_3;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1f) == 0xe) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) == false");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar6.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar6.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,cVar2 != '\0');
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_58,0);
      if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_58.Hash._0_8_);
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  FCbFieldView::AsObjectAttachment((FCbFieldView *)param_2,&local_58,local_68);
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar6.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual<FIoHash>
            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,&local_58,local_60);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<14,FIoHash,TCbFieldTypeAccessors<14>,FCbFieldView> @ 141a65f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCbFieldTestBase::TestFieldNoClone<14,FIoHash,TCbFieldTypeAccessors<14>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,FIoHash *param_3,
          FIoHash *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<14> *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  undefined1 auStack_98 [32];
  FString local_78;
  FIoHash *local_68;
  FIoHash *local_60;
  FIoHash local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68 = param_4;
  EVar1 = param_2->TypeWithFlags;
  local_60 = param_3;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomByName) == ObjectAttachment) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) == false");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar5.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar5.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,EVar2 != None);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_58,0);
      if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_58.Hash._0_8_);
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  FCbFieldView::AsObjectAttachment(param_2,&local_58,local_68);
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar5.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual<FIoHash>
            ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,&local_58,local_60);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<14,FIoHash,FCbAttachmentAccessors,FCbField> @ 141a66270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCbFieldTestBase::TestFieldNoClone<14,FIoHash,FCbAttachmentAccessors,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,FIoHash *param_3,
          FIoHash *param_4,ECbFieldError param_5,FCbAttachmentAccessors *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  undefined1 auStack_98 [32];
  FString local_78;
  FIoHash *local_68;
  FIoHash *local_60;
  FIoHash local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68 = param_4;
  bVar1 = *(byte *)param_2;
  local_60 = param_3;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1e) == 0xe) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) == false");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar6.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar6.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,cVar2 != '\0');
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_58,0);
      if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_58.Hash._0_8_);
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  FCbFieldView::AsAttachment((FCbFieldView *)param_2,&local_58,local_68);
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar6.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual<FIoHash>
            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,&local_58,local_60);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<14,FIoHash,FCbAttachmentAccessors,FCbFieldView> @ 141a66590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCbFieldTestBase::TestFieldNoClone<14,FIoHash,FCbAttachmentAccessors,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,FIoHash *param_3,
          FIoHash *param_4,ECbFieldError param_5,FCbAttachmentAccessors *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  undefined1 auStack_98 [32];
  FString local_78;
  FIoHash *local_68;
  FIoHash *local_60;
  FIoHash local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68 = param_4;
  EVar1 = param_2->TypeWithFlags;
  local_60 = param_3;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomById) == ObjectAttachment) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) == false");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar5.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar5.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,EVar2 != None);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_58,0);
      if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_58.Hash._0_8_);
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  FCbFieldView::AsAttachment(param_2,&local_58,local_68);
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar5.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual<FIoHash>
            ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,&local_58,local_60);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<15,FIoHash,TCbFieldTypeAccessors<15>,FCbField> @ 141a668b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCbFieldTestBase::TestFieldNoClone<15,FIoHash,TCbFieldTypeAccessors<15>,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,FIoHash *param_3,
          FIoHash *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<15> *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  undefined1 auStack_98 [32];
  FString local_78;
  FIoHash *local_68;
  FIoHash *local_60;
  FIoHash local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68 = param_4;
  bVar1 = *(byte *)param_2;
  local_60 = param_3;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1f) == 0xf) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) == false");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar6.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar6.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,cVar2 != '\0');
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_58,0);
      if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_58.Hash._0_8_);
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  FCbFieldView::AsBinaryAttachment((FCbFieldView *)param_2,&local_58,local_68);
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar6.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual<FIoHash>
            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,&local_58,local_60);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<15,FIoHash,TCbFieldTypeAccessors<15>,FCbFieldView> @ 141a66bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCbFieldTestBase::TestFieldNoClone<15,FIoHash,TCbFieldTypeAccessors<15>,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,FIoHash *param_3,
          FIoHash *param_4,ECbFieldError param_5,TCbFieldTypeAccessors<15> *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  undefined1 auStack_98 [32];
  FString local_78;
  FIoHash *local_68;
  FIoHash *local_60;
  FIoHash local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68 = param_4;
  EVar1 = param_2->TypeWithFlags;
  local_60 = param_3;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomByName) == BinaryAttachment) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) == false");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar5.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar5.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,EVar2 != None);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_58,0);
      if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_58.Hash._0_8_);
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  FCbFieldView::AsBinaryAttachment(param_2,&local_58,local_68);
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar5.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual<FIoHash>
            ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,&local_58,local_60);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<15,FIoHash,FCbAttachmentAccessors,FCbField> @ 141a66ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCbFieldTestBase::TestFieldNoClone<15,FIoHash,FCbAttachmentAccessors,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,FIoHash *param_3,
          FIoHash *param_4,ECbFieldError param_5,FCbAttachmentAccessors *param_6)

{
  byte bVar1;
  char cVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  undefined1 auStack_98 [32];
  FString local_78;
  FIoHash *local_68;
  FIoHash *local_60;
  FIoHash local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68 = param_4;
  bVar1 = *(byte *)param_2;
  local_60 = param_3;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::Is[Type](%s)");
  if (((bVar1 & 0x1e) == 0xe) != (param_5 != TypeError)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) == false");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar6.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,bVar5);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar6.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,cVar2 != '\0');
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    cVar2 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar2 != '\x01') {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
      (*pcVar4)(this,&local_58,0);
      if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_58.Hash._0_8_);
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  FCbFieldView::AsAttachment((FCbFieldView *)param_2,&local_58,local_68);
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar6.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual<FIoHash>
            ((FAutomationTestBase *)this,(wchar_t *)FVar6.Data,&local_58,local_60);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  cVar2 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar2 != '\0') != (param_5 != None)) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  EVar3 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar3 != param_5) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar4)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<15,FIoHash,FCbAttachmentAccessors,FCbFieldView> @ 141a67210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCbFieldTestBase::TestFieldNoClone<15,FIoHash,FCbAttachmentAccessors,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,FIoHash *param_3,
          FIoHash *param_4,ECbFieldError param_5,FCbAttachmentAccessors *param_6)

{
  ECbFieldType EVar1;
  ECbFieldError EVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  undefined1 auStack_98 [32];
  FString local_78;
  FIoHash *local_68;
  FIoHash *local_60;
  FIoHash local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68 = param_4;
  EVar1 = param_2->TypeWithFlags;
  local_60 = param_3;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::Is[Type](%s)");
  if (((EVar1 & CustomById) == ObjectAttachment) != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar4 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) == false");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar5.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,bVar4);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar5.Data = local_78.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,EVar2 != None);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    EVar2 = param_2->Error;
    ::FString::PrintfImpl(&local_78,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar2 != TypeError) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_58,0);
      if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_58.Hash._0_8_);
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  FCbFieldView::AsAttachment(param_2,&local_58,local_68);
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar5.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual<FIoHash>
            ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,&local_58,local_60);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar2 != None) != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  EVar2 = param_2->Error;
  ::FString::PrintfImpl(&local_78,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_58,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_58,0);
    if ((void *)local_58.Hash._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58.Hash._0_8_);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// TestEqual @ 141a94380

bool __thiscall
FCbFieldTestBase::TestEqual
          (FCbFieldTestBase *this,FString *param_1,FCbCustomByName *param_2,FCbCustomByName *param_3
          )

{
  int iVar1;
  ulong64 uVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  int iVar6;
  
  iVar1 = (param_2->Name).Size;
  iVar6 = (int)*(undefined8 *)&(param_3->Name).Size;
  if (iVar1 == iVar6) {
    if ((iVar1 != 0) && (iVar6 != 0)) {
      iVar4 = iVar6;
      if (iVar1 < iVar6) {
        iVar4 = iVar1;
      }
      iVar4 = strncmp((char *)(param_2->Name).DataPtr,(char *)(param_3->Name).DataPtr,
                      (longlong)iVar4);
      if (iVar4 != 0) goto LAB_141a943fc;
    }
    if (((iVar1 == iVar6) && (uVar2 = (param_2->Data).Size, uVar2 == (param_3->Data).Size)) &&
       ((uVar2 == 0 || ((param_2->Data).Data == (param_3->Data).Data)))) {
      bVar3 = true;
      goto LAB_141a943ff;
    }
  }
LAB_141a943fc:
  bVar3 = false;
LAB_141a943ff:
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar5,bVar3);
  return bVar3;
}

