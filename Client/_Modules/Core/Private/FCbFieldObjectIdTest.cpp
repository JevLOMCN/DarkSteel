// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 141a3e7a0

EAutomationTestFlags __thiscall FCbFieldObjectIdTest::GetTestFlags(FCbFieldObjectIdTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141a3e7b0

bool __thiscall FCbFieldObjectIdTest::IsStressTest(FCbFieldObjectIdTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a3e7c0

uint __thiscall FCbFieldObjectIdTest::GetRequiredDeviceNum(FCbFieldObjectIdTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a3e7d0

FString * __thiscall
FCbFieldObjectIdTest::GetTestSourceFileName
          (FCbFieldObjectIdTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tests\\Serialization\\CompactBinaryTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a3e800

int __thiscall FCbFieldObjectIdTest::GetTestSourceFileLine(FCbFieldObjectIdTest *this)

{
  return 0x4ad;
}

// GetTests @ 141a3e810

/* WARNING: Removing unreachable block (ram,0x000141a3e8fd) */
/* WARNING: Removing unreachable block (ram,0x000141a3e9c8) */

void __thiscall
FCbFieldObjectIdTest::GetTests
          (FCbFieldObjectIdTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Serialization.CbField.ObjectId");
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

// RunTest @ 141a3e9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FCbFieldObjectIdTest::RunTest(FCbFieldObjectIdTest *this,FString *param_1)

{
  code *pcVar1;
  ECbFieldError EVar2;
  FCbObjectId *pFVar3;
  bool bVar4;
  undefined1 auStackY_c8 [32];
  TCbFieldTypeAccessors<20> local_88 [16];
  FCbFieldView local_78;
  FCbFieldView local_68;
  FCbObjectId local_58;
  FCbObjectId local_48;
  TMemoryView<void_const_> local_38;
  FString local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_78.Value = (void *)CONCAT44(local_78.Value._4_4_,0xc);
  local_78._0_8_ = &local_48;
  local_68.Value._0_4_ = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Bytes[0] = '\0';
  local_58.Bytes[1] = '\0';
  local_58.Bytes[2] = '\0';
  local_58.Bytes[3] = '\0';
  local_58.Bytes[4] = '\0';
  local_58.Bytes[5] = '\0';
  local_58.Bytes[6] = '\0';
  local_58.Bytes[7] = '\0';
  local_68.TypeWithFlags = None;
  local_68.Error = None;
  local_68._2_2_ = 0;
  local_68.NameLen = 0;
  local_48.Bytes[0] = '\0';
  local_48.Bytes[1] = '\0';
  local_48.Bytes[2] = '\0';
  local_48.Bytes[3] = '\0';
  local_48.Bytes[4] = '\0';
  local_48.Bytes[5] = '\0';
  local_48.Bytes[6] = '\0';
  local_48.Bytes[7] = '\0';
  local_48.Bytes[8] = '\0';
  local_48.Bytes[9] = '\0';
  local_48.Bytes[10] = '\0';
  local_48.Bytes[0xb] = '\0';
  local_58.Bytes[8] = '\0';
  local_58.Bytes[9] = '\0';
  local_58.Bytes[10] = '\0';
  local_58.Bytes[0xb] = '\0';
  FCbFieldTestBase::TestFieldBytes<20,FCbObjectId,TCbFieldTypeAccessors<20>_>
            ((FCbFieldTestBase *)this,L"ObjectId, Zero",
             (TArrayView<unsigned_char_const_,int> *)&local_78,(FCbObjectId *)&local_68,&local_58,
             None,local_88);
  local_78._0_8_ = &local_48;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Bytes[0] = '\x10';
  local_48.Bytes[1] = ' ';
  local_48.Bytes[2] = '0';
  local_48.Bytes[3] = '@';
  local_48.Bytes[4] = 'P';
  local_48.Bytes[5] = '`';
  local_48.Bytes[6] = 'p';
  local_48.Bytes[7] = 0x80;
  local_48.Bytes[8] = 0x90;
  local_48.Bytes[9] = 0xa0;
  local_48.Bytes[10] = 0xb0;
  local_48.Bytes[0xb] = 0xc0;
  local_78.Value = &DAT_0000000c;
  pFVar3 = FCbObjectId::FCbObjectId((FCbObjectId *)&local_38,(TMemoryView<void_const_> *)&local_78);
  local_78.Value = (void *)CONCAT44(local_78.Value._4_4_,0xc);
  local_68._0_8_ = local_28.Data.AllocatorInstance.Data;
  local_28.Data.ArrayNum = *(int *)(pFVar3->Bytes + 8);
  local_28.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar3->Bytes;
  local_78._0_8_ = &local_58;
  local_58.Bytes[0] = '\x10';
  local_58.Bytes[1] = ' ';
  local_58.Bytes[2] = '0';
  local_58.Bytes[3] = '@';
  local_58.Bytes[4] = 'P';
  local_58.Bytes[5] = '`';
  local_58.Bytes[6] = 'p';
  local_58.Bytes[7] = 0x80;
  local_58.Bytes[8] = 0x90;
  local_58.Bytes[9] = 0xa0;
  local_58.Bytes[10] = 0xb0;
  local_58.Bytes[0xb] = 0xc0;
  local_68.Value._0_4_ = 0;
  FCbFieldTestBase::TestFieldBytes<20,FCbObjectId,TCbFieldTypeAccessors<20>_>
            ((FCbFieldTestBase *)this,L"ObjectId, NonZero",
             (TArrayView<unsigned_char_const_,int> *)&local_78,(FCbObjectId *)&local_28,
             (FCbObjectId *)&local_68,None,local_88);
  local_58.Bytes[0] = '\0';
  local_58.Bytes[1] = '\0';
  local_58.Bytes[2] = '\0';
  local_58.Bytes[3] = '\0';
  local_58.Bytes[4] = '\0';
  local_58.Bytes[5] = '\0';
  local_58.Bytes[6] = '\0';
  local_58.Bytes[7] = '\0';
  local_58.Bytes[8] = '\0';
  local_58.Bytes[9] = '\0';
  local_58.Bytes[10] = '\0';
  local_58.Bytes[0xb] = '\0';
  FCbFieldView::FCbFieldView(&local_68,&local_58,ObjectId);
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  pFVar3 = FCbFieldView::AsObjectId(&local_68,(FCbObjectId *)&local_38,(FCbObjectId *)&local_28);
  if ((*(longlong *)pFVar3->Bytes != 0) || (*(int *)(pFVar3->Bytes + 8) != 0)) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_78,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_78,0);
    if ((FCbObjectId *)local_78._0_8_ != (FCbObjectId *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68._0_8_ = (void *)0x0;
  local_78._0_8_ = ((ulonglong)local_78._0_8_ >> 0x10 & 0xffff) << 0x10;
  local_78.Value = (void *)0x0;
  local_28.Data.ArrayNum = 0;
  local_68.Value._0_4_ = 0;
  ::FString::PrintfImpl((FString *)&local_38,L"FCbFieldView::Is[Type](%s)");
  if (local_38.Data != (void *)0x0) {
    FMemory::Free(local_38.Data);
  }
  FCbFieldView::AsObjectId(&local_78,&local_58,(FCbObjectId *)&local_28);
  ::FString::PrintfImpl((FString *)&local_38,L"FCbFieldView::As[Type](%s) -> Equal");
  FAutomationTestBase::TestEqual<FCbObjectId>
            ((FAutomationTestBase *)this,(FString *)&local_38,&local_58,(FCbObjectId *)&local_68);
  if (local_38.Data != (void *)0x0) {
    FMemory::Free(local_38.Data);
  }
  bVar4 = local_78.Error == None;
  ::FString::PrintfImpl((FString *)&local_38,L"FCbFieldView::As[Type](%s) -> HasError()");
  if (bVar4) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_68,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_68,0);
    if ((void *)local_68._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
  }
  if (local_38.Data != (void *)0x0) {
    FMemory::Free(local_38.Data);
  }
  EVar2 = local_78.Error;
  ::FString::PrintfImpl((FString *)&local_38,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != TypeError) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_68,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_68,0);
    if ((void *)local_68._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
  }
  if (local_38.Data != (void *)0x0) {
    FMemory::Free(local_38.Data);
  }
  local_38.Data = &local_58;
  local_58.Bytes[0] = '\x10';
  local_58.Bytes[1] = ' ';
  local_58.Bytes[2] = '0';
  local_58.Bytes[3] = '@';
  local_58.Bytes[4] = 'P';
  local_58.Bytes[5] = '`';
  local_58.Bytes[6] = 'p';
  local_58.Bytes[7] = 0x80;
  local_58.Bytes[8] = 0x90;
  local_58.Bytes[9] = 0xa0;
  local_58.Bytes[10] = 0xb0;
  local_58.Bytes[0xb] = 0xc0;
  local_38.Size = 0xc;
  FCbObjectId::FCbObjectId(&local_48,&local_38);
  pFVar3 = FCbFieldView::AsObjectId(&local_78,(FCbObjectId *)&local_38,&local_48);
  if ((*(longlong *)pFVar3->Bytes != local_48.Bytes._0_8_) ||
     (*(int *)(pFVar3->Bytes + 8) != local_48.Bytes._8_4_)) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_28,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// GetBeautifiedTestName @ 141a3edf0

FString * __thiscall
FCbFieldObjectIdTest::GetBeautifiedTestName
          (FCbFieldObjectIdTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Serialization.CbField.ObjectId");
  return __return_storage_ptr__;
}

