// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 141a3d600

EAutomationTestFlags __thiscall FCbFieldUuidTest::GetTestFlags(FCbFieldUuidTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141a3d610

bool __thiscall FCbFieldUuidTest::IsStressTest(FCbFieldUuidTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a3d620

uint __thiscall FCbFieldUuidTest::GetRequiredDeviceNum(FCbFieldUuidTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a3d630

FString * __thiscall
FCbFieldUuidTest::GetTestSourceFileName(FCbFieldUuidTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tests\\Serialization\\CompactBinaryTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a3d660

int __thiscall FCbFieldUuidTest::GetTestSourceFileLine(FCbFieldUuidTest *this)

{
  return 0x461;
}

// GetTests @ 141a3d670

/* WARNING: Removing unreachable block (ram,0x000141a3d75d) */
/* WARNING: Removing unreachable block (ram,0x000141a3d828) */

void __thiscall
FCbFieldUuidTest::GetTests
          (FCbFieldUuidTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Serialization.CbField.Uuid");
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

// RunTest @ 141a3d850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FCbFieldUuidTest::RunTest(FCbFieldUuidTest *this,FString *param_1)

{
  code *pcVar1;
  ECbFieldError EVar2;
  bool bVar3;
  FGuid *pFVar4;
  ECbFieldType EVar5;
  undefined1 auStackY_f8 [32];
  TCbFieldTypeAccessors<17> local_b8 [16];
  ForAnyElementType local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  void *pvStack_90;
  undefined1 local_88 [8];
  undefined8 uStack_80;
  FScriptContainerElement *local_78;
  void *pvStack_70;
  FGuid local_68;
  FGuid local_58;
  FGuid local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0x3020100;
  local_24 = 0x7060504;
  local_20 = 0xb0a0908;
  local_1c = 0xf0e0d0c;
  ::FString::FString((FString *)&local_a8,L"00010203-0405-0607-0809-0a0b0c0d0e0f");
  bVar3 = FGuid::Parse((FString *)&local_a8,(FGuid *)&local_78);
  if (!bVar3) {
    pvStack_70 = (void *)0x0;
    local_78 = (FScriptContainerElement *)0x0;
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  local_a8.Data = (FScriptContainerElement *)&local_38;
  uStack_a0 = 0x10;
  local_88 = (undefined1  [8])local_78;
  uStack_80 = pvStack_70;
  local_98._0_4_ = 0;
  local_98._4_4_ = 0;
  pvStack_90 = (void *)0x0;
  FCbFieldTestBase::TestFieldBytes<17,FGuid,TCbFieldTypeAccessors<17>_>
            ((FCbFieldTestBase *)this,L"Uuid, Zero",
             (TArrayView<unsigned_char_const_,int> *)&local_a8,(FGuid *)&local_98,(FGuid *)local_88,
             None,local_b8);
  local_a8.Data = (FScriptContainerElement *)&local_28;
  uStack_a0 = 0x10;
  local_88 = (undefined1  [8])0x0;
  uStack_80._0_4_ = 0;
  uStack_80._4_4_ = 0;
  local_98 = local_78;
  pvStack_90 = pvStack_70;
  FCbFieldTestBase::TestFieldBytes<17,FGuid,TCbFieldTypeAccessors<17>_>
            ((FCbFieldTestBase *)this,L"Uuid, NonZero",
             (TArrayView<unsigned_char_const_,int> *)&local_a8,(FGuid *)&local_98,(FGuid *)local_88,
             None,local_b8);
  local_98 = (FScriptContainerElement *)(((ulonglong)local_98 >> 0x10 & 0xffff) << 0x10);
  pvStack_90 = (void *)0x0;
  pFVar4 = FGuid::NewGuid(&local_48);
  EVar5 = (ECbFieldType)local_98 & CustomByName;
  local_68.A = pFVar4->A;
  local_68.B = pFVar4->B;
  local_68.C = pFVar4->C;
  local_68.D = pFVar4->D;
  local_58._0_8_ = local_68._0_8_;
  local_58._8_8_ = local_68._8_8_;
  ::FString::PrintfImpl((FString *)&local_a8,L"FCbFieldView::Is[Type](%s)");
  if (EVar5 == Uuid) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_88,L"%s: The two values are not equal.");
    (*pcVar1)(this,local_88,0);
    if (local_88 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_88);
    }
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  FCbFieldView::AsUuid((FCbFieldView *)&local_98,(FGuid *)&local_a8,&local_68);
  ::FString::PrintfImpl((FString *)local_88,L"FCbFieldView::As[Type](%s) -> Equal");
  FAutomationTestBase::TestEqual<FGuid>
            ((FAutomationTestBase *)this,(FString *)local_88,(FGuid *)&local_a8,&local_58);
  if (local_88 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_88);
  }
  bVar3 = local_98._1_1_ == None;
  ::FString::PrintfImpl((FString *)&local_a8,L"FCbFieldView::As[Type](%s) -> HasError()");
  if (bVar3) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_88,L"%s: The two values are not equal.");
    (*pcVar1)(this,local_88,0);
    if (local_88 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_88);
    }
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  EVar2 = local_98._1_1_;
  ::FString::PrintfImpl((FString *)&local_a8,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != TypeError) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_88,L"%s: The two values are not equal.");
    (*pcVar1)(this,local_88,0);
    if (local_88 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_88);
    }
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 141a3db90

FString * __thiscall
FCbFieldUuidTest::GetBeautifiedTestName(FCbFieldUuidTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Serialization.CbField.Uuid");
  return __return_storage_ptr__;
}

