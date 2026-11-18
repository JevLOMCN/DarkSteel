// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 141a41180

EAutomationTestFlags __thiscall FCbFieldNoneTest::GetTestFlags(FCbFieldNoneTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141a41190

bool __thiscall FCbFieldNoneTest::IsStressTest(FCbFieldNoneTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a411a0

uint __thiscall FCbFieldNoneTest::GetRequiredDeviceNum(FCbFieldNoneTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a411b0

FString * __thiscall
FCbFieldNoneTest::GetTestSourceFileName(FCbFieldNoneTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tests\\Serialization\\CompactBinaryTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a411e0

int __thiscall FCbFieldNoneTest::GetTestSourceFileLine(FCbFieldNoneTest *this)

{
  return 0xc0;
}

// GetTests @ 141a411f0

/* WARNING: Removing unreachable block (ram,0x000141a412dd) */
/* WARNING: Removing unreachable block (ram,0x000141a413a8) */

void __thiscall
FCbFieldNoneTest::GetTests
          (FCbFieldNoneTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Serialization.CbField.None");
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

// RunTest @ 141a413d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FCbFieldNoneTest::RunTest(FCbFieldNoneTest *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulong64 uVar5;
  FBlake3Hash *pFVar6;
  FIoHash *pFVar7;
  FIoHash *pFVar8;
  TMemoryView<void_const_> *pTVar9;
  bool bVar10;
  undefined1 auStack_f8 [32];
  FCbFieldView local_d8;
  undefined1 local_c8 [4];
  undefined2 local_c4;
  FCbFieldView local_b8;
  FIoHash local_a8;
  FBlake3Hash local_88;
  FBlake3Hash local_68;
  undefined4 local_48;
  ushort local_44;
  int local_40;
  ushort local_3c;
  int local_38;
  ushort local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d8.TypeWithFlags = None;
  local_d8.Error = None;
  local_d8._2_2_ = 0;
  local_d8.NameLen = 0;
  local_d8.Value = (void *)0x0;
  uVar5 = FCbFieldView::GetSize(&local_d8);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldView()::GetSize() == 1",uVar5,1);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldView()::GetName().Len() == 0",local_d8.NameLen,0)
  ;
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"!FCbFieldView()::HasName()",
             (bool)(local_d8.TypeWithFlags >> 7));
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"!FCbFieldView()::HasValue()",(local_d8._0_8_ & 0x1f) != 0
            );
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"!FCbFieldView()::HasError()",local_d8.Error != None);
  if (local_d8.Error != None) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_b8,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_b8);
    if ((void *)local_b8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._0_8_);
    }
  }
  local_b8._0_8_ = &local_c4;
  local_c4 = (ushort)local_c4._1_1_ << 8;
  local_b8.Value = &DAT_00000001;
  pFVar6 = FBlake3::HashBuffer(&local_88,(TMemoryView<void_const_> *)&local_b8);
  lVar3 = *(longlong *)pFVar6->Hash;
  lVar4 = *(longlong *)(pFVar6->Hash + 8);
  iVar1 = *(int *)(pFVar6->Hash + 0x10);
  pFVar7 = FCbFieldView::GetHash(&local_d8,&local_a8);
  if (((*(longlong *)pFVar7->Hash != lVar3) || (*(longlong *)(pFVar7->Hash + 8) != lVar4)) ||
     (*(int *)(pFVar7->Hash + 0x10) != iVar1)) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_b8,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_b8);
    if ((undefined2 *)local_b8._0_8_ != (undefined2 *)0x0) {
      FMemory::Free((void *)local_b8._0_8_);
    }
  }
  bVar10 = (local_d8._0_8_ & 0x40) != 0;
  if (bVar10) {
    FCbFieldView::GetView(&local_d8,(TMemoryView<void_const_> *)&local_a8);
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,L"FCbFieldView()::TryGetView()",bVar10)
  ;
  FCbFieldView::FCbFieldView(&local_d8,(void *)0x0,None);
  uVar5 = FCbFieldView::GetSize(&local_d8);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldView(None)::GetSize() == 1",uVar5,1);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldView(None)::GetName().Len() == 0",
             local_d8.NameLen,0);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"!FCbFieldView(None)::HasName()",
             (bool)(local_d8.TypeWithFlags >> 7));
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"!FCbFieldView(None)::HasValue()",
             (local_d8._0_8_ & 0x1f) != 0);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"!FCbFieldView(None)::HasError()",local_d8.Error != None);
  if (local_d8.Error != None) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_b8,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_b8);
    if ((undefined2 *)local_b8._0_8_ != (undefined2 *)0x0) {
      FMemory::Free((void *)local_b8._0_8_);
    }
  }
  local_b8.TypeWithFlags = None;
  local_b8.Error = None;
  local_b8._2_2_ = 0;
  local_b8.NameLen = 0;
  local_b8.Value = (void *)0x0;
  pFVar7 = FCbFieldView::GetHash(&local_b8,(FIoHash *)&local_68);
  pFVar8 = FCbFieldView::GetHash(&local_d8,(FIoHash *)&local_88);
  if (((*(longlong *)pFVar8->Hash != *(longlong *)pFVar7->Hash) ||
      (*(longlong *)(pFVar8->Hash + 8) != *(longlong *)(pFVar7->Hash + 8))) ||
     (*(int *)(pFVar8->Hash + 0x10) != *(int *)(pFVar7->Hash + 0x10))) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_a8,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_a8);
    if ((uchar *)local_a8.Hash._0_8_ != (uchar *)0x0) {
      FMemory::Free((void *)local_a8.Hash._0_8_);
    }
  }
  bVar10 = (local_d8._0_8_ & 0x40) != 0;
  if (bVar10) {
    FCbFieldView::GetView(&local_d8,(TMemoryView<void_const_> *)&local_a8);
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbFieldView(None)::TryGetView()",bVar10);
  local_40 = 0x614e0480;
  local_3c = 0x656d;
  FCbFieldView::FCbFieldView(&local_d8,&local_40,HasFieldType);
  uVar5 = FCbFieldView::GetSize(&local_d8);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldView(None|Type|Name)::GetSize()",uVar5,6);
  local_b8._0_8_ = (longlong)local_d8.Value - (ulonglong)local_d8.NameLen;
  local_b8.Value = (void *)CONCAT44(local_b8.Value._4_4_,local_d8.NameLen);
  local_a8.Hash[8] = '\x04';
  local_a8.Hash[9] = '\0';
  local_a8.Hash[10] = '\0';
  local_a8.Hash[0xb] = '\0';
  local_a8.Hash._0_8_ = &s_Name;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldView(None|Type|Name)::GetName()",
             (TStringView<char8_t> *)&local_b8,(TStringView<char8_t> *)&local_a8);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbFieldView(None|Type|Name)::HasName()",
             (bool)(local_d8.TypeWithFlags >> 7));
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"!FCbFieldView(None|Type|Name)::HasValue()",
             (local_d8._0_8_ & 0x1f) != 0);
  local_a8.Hash._0_8_ = &local_40;
  local_a8.Hash[8] = '\x06';
  local_a8.Hash[9] = '\0';
  local_a8.Hash[10] = '\0';
  local_a8.Hash[0xb] = '\0';
  local_a8.Hash[0xc] = '\0';
  local_a8.Hash[0xd] = '\0';
  local_a8.Hash[0xe] = '\0';
  local_a8.Hash[0xf] = '\0';
  pFVar6 = FBlake3::HashBuffer(&local_68,(TMemoryView<void_const_> *)&local_a8);
  lVar3 = *(longlong *)pFVar6->Hash;
  lVar4 = *(longlong *)(pFVar6->Hash + 8);
  iVar1 = *(int *)(pFVar6->Hash + 0x10);
  pFVar7 = FCbFieldView::GetHash(&local_d8,(FIoHash *)&local_88);
  if (((*(longlong *)pFVar7->Hash != lVar3) || (*(longlong *)(pFVar7->Hash + 8) != lVar4)) ||
     (*(int *)(pFVar7->Hash + 0x10) != iVar1)) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_a8,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_a8);
    if ((int *)local_a8.Hash._0_8_ != (int *)0x0) {
      FMemory::Free((void *)local_a8.Hash._0_8_);
    }
  }
  if ((((local_d8._0_8_ & 0x40) == 0) ||
      (pTVar9 = FCbFieldView::GetView(&local_d8,(TMemoryView<void_const_> *)&local_a8),
      pTVar9->Size != 6)) || (pTVar9->Data != &local_40)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbFieldView(None|Type|Name)::TryGetView()",bVar10);
  local_a8.Hash._0_8_ = &local_48;
  local_a8.Hash[8] = '\x06';
  local_a8.Hash[9] = '\0';
  local_a8.Hash[10] = '\0';
  local_a8.Hash[0xb] = '\0';
  local_a8.Hash[0xc] = '\0';
  local_a8.Hash[0xd] = '\0';
  local_a8.Hash[0xe] = '\0';
  local_a8.Hash[0xf] = '\0';
  FCbFieldView::CopyTo(&local_d8,(TMemoryView<void> *)&local_a8);
  local_48 = local_40 - local_48;
  if (local_48 == 0) {
    local_48 = (uint)local_3c - (uint)local_44;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbFieldView(None|Type|Name)::CopyTo()",local_48 == 0);
  local_c8[0] = 0;
  FCbFieldView::FCbFieldView(&local_d8,local_c8,HasFieldType);
  uVar5 = FCbFieldView::GetSize(&local_d8);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldView(None|Type)::GetSize()",uVar5,1);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldView(None|Type)::GetName()",local_d8.NameLen,0);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbFieldView(None|Type)::HasName()",
             (bool)(local_d8.TypeWithFlags >> 7));
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"!FCbFieldView(None|Type)::HasValue()",
             (local_d8._0_8_ & 0x1f) != 0);
  local_b8.TypeWithFlags = None;
  local_b8.Error = None;
  local_b8._2_2_ = 0;
  local_b8.NameLen = 0;
  local_b8.Value = (void *)0x0;
  pFVar7 = FCbFieldView::GetHash(&local_b8,(FIoHash *)&local_88);
  pFVar8 = FCbFieldView::GetHash(&local_d8,(FIoHash *)&local_68);
  if (((*(longlong *)pFVar8->Hash != *(longlong *)pFVar7->Hash) ||
      (*(longlong *)(pFVar8->Hash + 8) != *(longlong *)(pFVar7->Hash + 8))) ||
     (*(int *)(pFVar8->Hash + 0x10) != *(int *)(pFVar7->Hash + 0x10))) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_a8,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_a8);
    if ((uchar *)local_a8.Hash._0_8_ != (uchar *)0x0) {
      FMemory::Free((void *)local_a8.Hash._0_8_);
    }
  }
  if ((((local_d8._0_8_ & 0x40) == 0) ||
      (pTVar9 = FCbFieldView::GetView(&local_d8,(TMemoryView<void_const_> *)&local_a8),
      pTVar9->Size != 1)) || (pTVar9->Data != local_c8)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbFieldView(None|Type)::TryGetView()",bVar10);
  local_48 = 0x614e0480;
  local_44 = 0x656d;
  FCbFieldView::FCbFieldView(&local_d8,(void *)((longlong)&local_48 + 1),HasFieldName);
  uVar5 = FCbFieldView::GetSize(&local_d8);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldView(None|Name)::GetSize()",uVar5,6);
  local_b8._0_8_ = (longlong)local_d8.Value - (ulonglong)local_d8.NameLen;
  local_b8.Value = (void *)CONCAT44(local_b8.Value._4_4_,local_d8.NameLen);
  local_a8.Hash[8] = '\x04';
  local_a8.Hash[9] = '\0';
  local_a8.Hash[10] = '\0';
  local_a8.Hash[0xb] = '\0';
  local_a8.Hash._0_8_ = &s_Name;
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldView(None|Name)::GetName()",
             (TStringView<char8_t> *)&local_b8,(TStringView<char8_t> *)&local_a8);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbFieldView(None|Name)::HasName()",
             (bool)(local_d8.TypeWithFlags >> 7));
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"!FCbFieldView(None|Name)::HasValue()",
             (local_d8._0_8_ & 0x1f) != 0);
  local_a8.Hash._0_8_ = &local_48;
  local_a8.Hash[8] = '\x06';
  local_a8.Hash[9] = '\0';
  local_a8.Hash[10] = '\0';
  local_a8.Hash[0xb] = '\0';
  local_a8.Hash[0xc] = '\0';
  local_a8.Hash[0xd] = '\0';
  local_a8.Hash[0xe] = '\0';
  local_a8.Hash[0xf] = '\0';
  pFVar6 = FBlake3::HashBuffer(&local_68,(TMemoryView<void_const_> *)&local_a8);
  lVar3 = *(longlong *)pFVar6->Hash;
  lVar4 = *(longlong *)(pFVar6->Hash + 8);
  iVar1 = *(int *)(pFVar6->Hash + 0x10);
  pFVar7 = FCbFieldView::GetHash(&local_d8,(FIoHash *)&local_88);
  if (((*(longlong *)pFVar7->Hash != lVar3) || (*(longlong *)(pFVar7->Hash + 8) != lVar4)) ||
     (*(int *)(pFVar7->Hash + 0x10) != iVar1)) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_a8,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_a8);
    if ((uchar *)local_a8.Hash._0_8_ != (uchar *)0x0) {
      FMemory::Free((void *)local_a8.Hash._0_8_);
    }
  }
  bVar10 = (local_d8._0_8_ & 0x40) != 0;
  if (bVar10) {
    FCbFieldView::GetView(&local_d8,(TMemoryView<void_const_> *)&local_a8);
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbFieldView(None|Name)::TryGetView()",bVar10);
  local_a8.Hash._0_8_ = &local_38;
  local_a8.Hash[8] = '\x06';
  local_a8.Hash[9] = '\0';
  local_a8.Hash[10] = '\0';
  local_a8.Hash[0xb] = '\0';
  local_a8.Hash[0xc] = '\0';
  local_a8.Hash[0xd] = '\0';
  local_a8.Hash[0xe] = '\0';
  local_a8.Hash[0xf] = '\0';
  FCbFieldView::CopyTo(&local_d8,(TMemoryView<void> *)&local_a8);
  local_38 = local_48 - local_38;
  if (local_38 == 0) {
    local_38 = (uint)local_44 - (uint)local_34;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbFieldView(None|Name)::CopyTo()",local_38 == 0);
  local_c4 = 0x80;
  FCbFieldView::FCbFieldView(&local_d8,(void *)((longlong)&local_c4 + 1),HasFieldName);
  uVar5 = FCbFieldView::GetSize(&local_d8);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldView(None|EmptyName)::GetSize()",uVar5,2);
  local_b8._0_8_ = (longlong)local_d8.Value - (ulonglong)local_d8.NameLen;
  local_b8.Value = (void *)CONCAT44(local_b8.Value._4_4_,local_d8.NameLen);
  local_a8.Hash._8_8_ = local_a8.Hash._8_8_ & 0xffffffff00000000;
  local_a8.Hash._0_8_ = "";
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldView(None|EmptyName)::GetName()",
             (TStringView<char8_t> *)&local_b8,(TStringView<char8_t> *)&local_a8);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbFieldView(None|EmptyName)::HasName()",
             (bool)(local_d8.TypeWithFlags >> 7));
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"!FCbFieldView(None|EmptyName)::HasValue()",
             (local_d8._0_8_ & 0x1f) != 0);
  local_a8.Hash._0_8_ = &local_c4;
  local_a8.Hash[8] = '\x02';
  local_a8.Hash[9] = '\0';
  local_a8.Hash[10] = '\0';
  local_a8.Hash[0xb] = '\0';
  local_a8.Hash[0xc] = '\0';
  local_a8.Hash[0xd] = '\0';
  local_a8.Hash[0xe] = '\0';
  local_a8.Hash[0xf] = '\0';
  pFVar6 = FBlake3::HashBuffer(&local_68,(TMemoryView<void_const_> *)&local_a8);
  lVar3 = *(longlong *)pFVar6->Hash;
  lVar4 = *(longlong *)(pFVar6->Hash + 8);
  iVar1 = *(int *)(pFVar6->Hash + 0x10);
  pFVar7 = FCbFieldView::GetHash(&local_d8,(FIoHash *)&local_88);
  if (((*(longlong *)pFVar7->Hash != lVar3) || (*(longlong *)(pFVar7->Hash + 8) != lVar4)) ||
     (*(int *)(pFVar7->Hash + 0x10) != iVar1)) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_a8,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_a8);
    if ((uchar *)local_a8.Hash._0_8_ != (uchar *)0x0) {
      FMemory::Free((void *)local_a8.Hash._0_8_);
    }
  }
  bVar10 = (local_d8._0_8_ & 0x40) != 0;
  if (bVar10) {
    FCbFieldView::GetView(&local_d8,(TMemoryView<void_const_> *)&local_a8);
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbFieldView(None|EmptyName)::TryGetView()",bVar10);
  return true;
}

// GetBeautifiedTestName @ 141a41d10

FString * __thiscall
FCbFieldNoneTest::GetBeautifiedTestName(FCbFieldNoneTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Serialization.CbField.None");
  return __return_storage_ptr__;
}

