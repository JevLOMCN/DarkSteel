// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 141a37510

EAutomationTestFlags __thiscall FCbFieldStringTest::GetTestFlags(FCbFieldStringTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141a37520

bool __thiscall FCbFieldStringTest::IsStressTest(FCbFieldStringTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a37530

uint __thiscall FCbFieldStringTest::GetRequiredDeviceNum(FCbFieldStringTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a37540

FString * __thiscall
FCbFieldStringTest::GetTestSourceFileName(FCbFieldStringTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tests\\Serialization\\CompactBinaryTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a37570

int __thiscall FCbFieldStringTest::GetTestSourceFileLine(FCbFieldStringTest *this)

{
  return 0x2fe;
}

// GetTests @ 141a37580

/* WARNING: Removing unreachable block (ram,0x000141a3766d) */
/* WARNING: Removing unreachable block (ram,0x000141a37738) */

void __thiscall
FCbFieldStringTest::GetTests
          (FCbFieldStringTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Serialization.CbField.String");
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

// RunTest @ 141a37760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall FCbFieldStringTest::RunTest(FCbFieldStringTest *this,FString *param_1)

{
  code *pcVar1;
  longlong lVar2;
  ECbFieldError EVar3;
  uchar *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint uVar10;
  byte *pbVar11;
  undefined1 auVar12 [8];
  ForAnyElementType FVar13;
  ECbFieldType EVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStackY_108 [32];
  uchar local_c8;
  TCbFieldTypeAccessors<7> local_c7 [15];
  ForAnyElementType local_b8;
  void *pvStack_b0;
  TArrayView<unsigned_char_const_,int> local_a8;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  TStringView<char8_t> local_88;
  uchar local_78 [16];
  TStringView<char8_t> local_68;
  FCbFieldView local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_a8.ArrayNum = 1;
  local_a8.DataPtr = &local_c8;
  local_88.DataPtr = (uchar *)0x0;
  local_88.Size = 0;
  local_88._12_4_ = 0;
  uStack_90._0_4_ = 0;
  uStack_90._4_4_ = 0;
  local_98 = (undefined1  [8])0x0;
  local_c8 = '\0';
  local_b8.Data = (FScriptContainerElement *)0x0;
  pvStack_b0 = (void *)0x0;
  FCbFieldTestBase::TestFieldBytes<7,TStringView<char8_t>,TCbFieldTypeAccessors<7>_>
            ((FCbFieldTestBase *)this,L"String, Empty",&local_a8,(TStringView<char8_t> *)&local_b8,
             &local_88,None,local_c7);
  local_b8.Data = (FScriptContainerElement *)((longlong)local_78 + 1);
  local_a8.DataPtr = local_78;
  local_a8.ArrayNum = 4;
  local_88.DataPtr = (uchar *)0x0;
  local_88.Size = 0;
  local_88._12_4_ = 0;
  uStack_90 = (void *)CONCAT44(local_68._12_4_,3);
  builtin_memcpy(local_78,"\x03ABC",4);
  pvStack_b0 = uStack_90;
  local_98 = (undefined1  [8])local_b8.Data;
  FCbFieldTestBase::TestFieldBytes<7,TStringView<char8_t>,TCbFieldTypeAccessors<7>_>
            ((FCbFieldTestBase *)this,L"String, Value",&local_a8,(TStringView<char8_t> *)&local_b8,
             &local_88,None,local_c7);
  uVar15 = 0x80000000;
  for (lVar2 = 0x3f; 0x80000000UL >> lVar2 == 0; lVar2 = lVar2 + -1) {
  }
  uVar9 = 9;
  uVar10 = (int)lVar2 / 7 + 1;
  if ((int)uVar10 < 9) {
    uVar9 = (ulonglong)uVar10;
  }
  pbVar11 = &local_68.field_0xf + uVar9;
  switch((int)uVar9) {
  case 9:
    *pbVar11 = 0;
    uVar15 = 0x800000;
    pbVar11 = &local_68.field_0xe + uVar9;
  case 8:
    *pbVar11 = 0;
    pbVar11 = pbVar11 + -1;
    uVar15 = uVar15 >> 8;
  case 7:
    *pbVar11 = 0;
    pbVar11 = pbVar11 + -1;
    uVar15 = uVar15 >> 8;
  case 6:
    *pbVar11 = (byte)uVar15;
    pbVar11 = pbVar11 + -1;
    uVar15 = uVar15 >> 8;
  case 5:
    *pbVar11 = (byte)uVar15;
    pbVar11 = pbVar11 + -1;
    uVar15 = uVar15 >> 8;
  case 4:
    *pbVar11 = (byte)uVar15;
    pbVar11 = pbVar11 + -1;
    uVar15 = uVar15 >> 8;
  case 3:
    *pbVar11 = (byte)uVar15;
    pbVar11 = pbVar11 + -1;
    uVar15 = uVar15 >> 8;
  case 2:
    *pbVar11 = (byte)uVar15;
    pbVar11 = pbVar11 + -1;
    uVar15 = uVar15 >> 8;
  default:
    *pbVar11 = -1 << (9U - (char)uVar9 & 0x1f) | (byte)uVar15;
    FCbFieldView::FCbFieldView((FCbFieldView *)&local_b8,&local_58,String);
    uVar7 = local_68._12_4_;
    local_a8.DataPtr = "ABC";
    EVar14 = (ECbFieldType)local_b8.Data & CustomByName;
    local_a8._12_4_ = local_68._12_4_;
    local_a8.ArrayNum = 3;
    ::FString::PrintfImpl((FString *)local_98,L"FCbFieldView::Is[Type](%s)");
    if (EVar14 != String) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_88,L"%s: The two values are not equal.");
      (*pcVar1)(this,&local_88,0);
      if (local_88.DataPtr != (uchar *)0x0) {
        FMemory::Free(local_88.DataPtr);
      }
    }
    if (local_98 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_98);
    }
    local_88.DataPtr = local_a8.DataPtr;
    local_88.Size = local_a8.ArrayNum;
    local_88._12_4_ = local_a8._12_4_;
    FCbFieldView::AsString((FCbFieldView *)&local_b8,&local_68,&local_88);
    uVar5 = local_68._8_8_;
    puVar4 = local_68.DataPtr;
    ::FString::PrintfImpl((FString *)local_98,L"FCbFieldView::As[Type](%s) -> Equal");
    uVar8 = local_68._12_4_;
    auVar12 = (undefined1  [8])L"";
    if ((int)uStack_90 != 0) {
      auVar12 = local_98;
    }
    local_a8.DataPtr = puVar4;
    local_68.Size = (int)uVar5;
    local_68._12_4_ = SUB84(uVar5,4);
    local_a8.ArrayNum = local_68.Size;
    local_a8._12_4_ = local_68._12_4_;
    local_88.DataPtr = "ABC";
    local_88.Size = 3;
    local_88._12_4_ = uVar7;
    local_68._12_4_ = uVar8;
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,(wchar_t *)auVar12,(TStringView<char8_t> *)&local_a8,
               &local_88);
    if (local_98 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_98);
    }
    bVar16 = local_b8.Data._1_1_ == None;
    ::FString::PrintfImpl((FString *)local_98,L"FCbFieldView::As[Type](%s) -> HasError()");
    if (bVar16) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_88,L"%s: The two values are not equal.");
      (*pcVar1)(this,&local_88,0);
      if (local_88.DataPtr != (uchar *)0x0) {
        FMemory::Free(local_88.DataPtr);
      }
    }
    if (local_98 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_98);
    }
    EVar3 = local_b8.Data._1_1_;
    ::FString::PrintfImpl((FString *)local_98,L"FCbFieldView::As[Type](%s) -> GetError()");
    if (EVar3 != RangeError) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_88,L"%s: The two values are not equal.");
      (*pcVar1)(this,&local_88,0);
      if (local_88.DataPtr != (uchar *)0x0) {
        FMemory::Free(local_88.DataPtr);
      }
    }
    if (local_98 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_98);
    }
    uVar7 = local_68._12_4_;
    local_58.TypeWithFlags = None;
    local_58.Error = None;
    local_58.NameLen = 0;
    local_58.Value = (void *)0x0;
    local_a8.DataPtr = "ABC";
    local_a8._12_4_ = local_68._12_4_;
    local_a8.ArrayNum = 3;
    ::FString::PrintfImpl((FString *)&local_68,L"FCbFieldView::Is[Type](%s)");
    if (local_68.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_68.DataPtr);
    }
    local_68.DataPtr = local_a8.DataPtr;
    local_68.Size = local_a8.ArrayNum;
    local_68._12_4_ = local_a8._12_4_;
    FCbFieldView::AsString(&local_58,&local_88,&local_68);
    uVar5 = local_88._8_8_;
    puVar4 = local_88.DataPtr;
    ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::As[Type](%s) -> Equal");
    uVar6 = local_88._8_8_;
    FVar13.Data = (FScriptContainerElement *)L"";
    if ((int)pvStack_b0 != 0) {
      FVar13.Data = local_b8.Data;
    }
    local_a8.DataPtr = puVar4;
    local_88.Size = (int)uVar5;
    local_88._12_4_ = SUB84(uVar5,4);
    local_a8.ArrayNum = local_88.Size;
    local_a8._12_4_ = local_88._12_4_;
    local_68.DataPtr = "ABC";
    local_68.Size = 3;
    local_68._12_4_ = uVar7;
    local_88._8_8_ = uVar6;
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,(TStringView<char8_t> *)&local_a8,
               &local_68);
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
    bVar16 = local_58.Error == None;
    ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::As[Type](%s) -> HasError()");
    if (bVar16) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_88,L"%s: The two values are not equal.");
      (*pcVar1)(this,&local_88,0);
      if (local_88.DataPtr != (uchar *)0x0) {
        FMemory::Free(local_88.DataPtr);
      }
    }
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
    EVar3 = local_58.Error;
    ::FString::PrintfImpl((FString *)&local_b8,L"FCbFieldView::As[Type](%s) -> GetError()");
    if (EVar3 != TypeError) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_88,L"%s: The two values are not equal.");
      (*pcVar1)(this,&local_88,0);
      if (local_88.DataPtr != (uchar *)0x0) {
        FMemory::Free(local_88.DataPtr);
      }
    }
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
    return true;
  }
}

// GetBeautifiedTestName @ 141a37d20

FString * __thiscall
FCbFieldStringTest::GetBeautifiedTestName(FCbFieldStringTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Serialization.CbField.String");
  return __return_storage_ptr__;
}

