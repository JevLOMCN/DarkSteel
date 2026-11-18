// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// GetTestFlags @ 141a36d90

EAutomationTestFlags __thiscall FCbFieldParseTest::GetTestFlags(FCbFieldParseTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141a36da0

bool __thiscall FCbFieldParseTest::IsStressTest(FCbFieldParseTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a36db0

uint __thiscall FCbFieldParseTest::GetRequiredDeviceNum(FCbFieldParseTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a36dc0

FString * __thiscall
FCbFieldParseTest::GetTestSourceFileName(FCbFieldParseTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tests\\Serialization\\CompactBinaryTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a36df0

int __thiscall FCbFieldParseTest::GetTestSourceFileLine(FCbFieldParseTest *this)

{
  return 0x731;
}

// GetTests @ 141a36e00

/* WARNING: Removing unreachable block (ram,0x000141a36eed) */
/* WARNING: Removing unreachable block (ram,0x000141a36fb8) */

void __thiscall
FCbFieldParseTest::GetTests
          (FCbFieldParseTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Serialization.CbFieldParseTest");
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

// RunTest @ 141a36fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FCbFieldParseTest::RunTest(FCbFieldParseTest *this,FString *param_1)

{
  bool bVar1;
  undefined1 auStackY_98 [32];
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  FCbFieldView local_48;
  undefined4 local_38;
  undefined1 local_34;
  FCbFieldView local_30;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_58[0] = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  FCbFieldView::FCbFieldView(&local_48,local_58,Object);
  `FCbFieldParseTest::RunTest'::__l2::<lambda_1>::operator()
            (local_50,(FCbObjectView *)&local_48,&local_68,&local_64,&local_60,&local_5c);
  if ((((local_68 == 0) && (local_64 == 0)) && (local_60 == 0)) && (local_5c == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"FCbObjectView Parse(None)",bVar1);
  local_30.TypeWithFlags = Hash;
  local_30.Error = 0x88;
  local_30._2_2_ = 0x4101;
  local_30.NameLen = 0x42018801;
  local_30.Value._0_4_ = 0x43018802;
  local_30.Value._4_4_ = 0x44018803;
  local_20 = 4;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  FCbFieldView::FCbFieldView(&local_48,&local_30,Object);
  `FCbFieldParseTest::RunTest'::__l2::<lambda_1>::operator()
            (local_50,(FCbObjectView *)&local_48,&local_5c,&local_60,&local_64,&local_68);
  if (((local_5c == 1) && (local_60 == 2)) && ((local_64 == 3 && (local_68 == 4)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"FCbObjectView Parse(ABCD)",bVar1);
  local_30.TypeWithFlags = Hash;
  local_30.Error = 0x88;
  local_30._2_2_ = 0x4201;
  local_30.NameLen = 0x43018802;
  local_30.Value._0_4_ = 0x44018803;
  local_30.Value._4_4_ = 0x41018804;
  local_20 = 1;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  FCbFieldView::FCbFieldView(&local_48,&local_30,Object);
  `FCbFieldParseTest::RunTest'::__l2::<lambda_1>::operator()
            (local_50,(FCbObjectView *)&local_48,&local_5c,&local_60,&local_64,&local_68);
  if (((local_5c == 1) && (local_60 == 2)) && ((local_64 == 3 && (local_68 == 4)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"FCbObjectView Parse(BCDA)",bVar1);
  local_48.TypeWithFlags = BoolFalse;
  local_48.Error = 0x88;
  local_48._2_2_ = 0x4201;
  local_48.NameLen = 0x43018802;
  local_48.Value._0_4_ = 0x44018803;
  local_48.Value._4_4_ = CONCAT31(local_48.Value._5_3_,4);
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  FCbFieldView::FCbFieldView(&local_30,&local_48,Object);
  `FCbFieldParseTest::RunTest'::__l2::<lambda_1>::operator()
            (local_50,(FCbObjectView *)&local_30,&local_5c,&local_60,&local_64,&local_68);
  if ((((local_5c == 0) && (local_60 == 2)) && (local_64 == 3)) && (local_68 == 4)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"FCbObjectView Parse(BCD)",bVar1);
  local_48.TypeWithFlags = IntegerPositive;
  local_48.Error = 0x88;
  local_48._2_2_ = 0x4201;
  local_48.NameLen = 0x43018802;
  local_48.Value._0_4_ = CONCAT31(local_48.Value._1_3_,3);
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  FCbFieldView::FCbFieldView(&local_30,&local_48,Object);
  `FCbFieldParseTest::RunTest'::__l2::<lambda_1>::operator()
            (local_50,(FCbObjectView *)&local_30,&local_5c,&local_60,&local_64,&local_68);
  if (((local_5c == 0) && (local_60 == 2)) && ((local_64 == 3 && (local_68 == 0)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"FCbObjectView Parse(BC)",bVar1);
  local_48.TypeWithFlags = ObjectId;
  local_48.Error = 0x88;
  local_48._2_2_ = 0x4101;
  local_48.NameLen = 0x42018801;
  local_48.Value._0_4_ = 0x43018802;
  local_48.Value._4_4_ = 0x44018803;
  local_38 = 0x45018804;
  local_34 = 5;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  FCbFieldView::FCbFieldView(&local_30,&local_48,Object);
  `FCbFieldParseTest::RunTest'::__l2::<lambda_1>::operator()
            (local_50,(FCbObjectView *)&local_30,&local_5c,&local_60,&local_64,&local_68);
  if (((local_5c == 1) && (local_60 == 2)) && ((local_64 == 3 && (local_68 == 4)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"FCbObjectView Parse(ABCDE)",bVar1);
  local_48.TypeWithFlags = ObjectId;
  local_48.Error = 0x88;
  local_48._2_2_ = 0x4501;
  local_48.NameLen = 0x41018805;
  local_48.Value._0_4_ = 0x42018801;
  local_48.Value._4_4_ = 0x43018802;
  local_38 = 0x44018803;
  local_34 = 4;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  FCbFieldView::FCbFieldView(&local_30,&local_48,Object);
  `FCbFieldParseTest::RunTest'::__l2::<lambda_1>::operator()
            (local_50,(FCbObjectView *)&local_30,&local_5c,&local_60,&local_64,&local_68);
  if ((((local_5c == 1) && (local_60 == 2)) && (local_64 == 3)) && (local_68 == 4)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"FCbObjectView Parse(EABCD)",bVar1);
  local_48.TypeWithFlags = Hash;
  local_48.Error = 0x88;
  local_48._2_2_ = 0x4401;
  local_48.NameLen = 0x43018804;
  local_48.Value._0_4_ = 0x42018803;
  local_48.Value._4_4_ = 0x41018802;
  local_38 = CONCAT31(local_38._1_3_,1);
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  FCbFieldView::FCbFieldView(&local_30,&local_48,Object);
  `FCbFieldParseTest::RunTest'::__l2::<lambda_1>::operator()
            (local_50,(FCbObjectView *)&local_30,&local_5c,&local_60,&local_64,&local_68);
  if (((local_5c == 1) && (local_60 == 2)) && ((local_64 == 3 && (local_68 == 4)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"FCbObjectView Parse(DCBA)",bVar1);
  return true;
}

// GetBeautifiedTestName @ 141a374a0

FString * __thiscall
FCbFieldParseTest::GetBeautifiedTestName(FCbFieldParseTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Serialization.CbFieldParseTest");
  return __return_storage_ptr__;
}

// operator() @ 141a73d30

void __thiscall
`FCbFieldParseTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,FCbObjectView *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5
          )

{
  longlong lVar1;
  int iVar2;
  ulong64 uVar3;
  bool bVar4;
  TCbFieldIterator<FCbFieldView> local_48;
  void *local_20;
  
  FCbFieldView::CreateViewIterator((FCbFieldView *)param_1,(FCbFieldViewIterator *)&local_48);
  lVar1 = local_48._padding_;
  while (((uint)local_48._padding_ & 0x1f) != 0) {
    local_48._padding_ = lVar1;
    local_20 = local_48.FieldsEnd;
    if ((local_48._padding_._4_4_ == 1) &&
       (iVar2 = strncmp((char *)(lVar1 - (ulonglong)local_48._padding_._4_4_),"A",1), iVar2 == 0)) {
      uVar3 = FCbFieldView::AsInteger((FCbFieldView *)&local_48,0,(FIntegerParams)0x40);
      *param_2 = (uint)uVar3;
      TCbFieldIterator<FCbFieldView>::operator++(&local_48);
    }
    if ((local_48._padding_._4_4_ == 1) &&
       (iVar2 = strncmp((char *)(local_48._padding_ - (ulonglong)local_48._padding_._4_4_),"B",1),
       iVar2 == 0)) {
      uVar3 = FCbFieldView::AsInteger((FCbFieldView *)&local_48,0,(FIntegerParams)0x40);
      *param_3 = (uint)uVar3;
      TCbFieldIterator<FCbFieldView>::operator++(&local_48);
    }
    if ((local_48._padding_._4_4_ == 1) &&
       (iVar2 = strncmp((char *)(local_48._padding_ - (ulonglong)local_48._padding_._4_4_),"C",1),
       iVar2 == 0)) {
      uVar3 = FCbFieldView::AsInteger((FCbFieldView *)&local_48,0,(FIntegerParams)0x40);
      *param_4 = (uint)uVar3;
      TCbFieldIterator<FCbFieldView>::operator++(&local_48);
    }
    if ((local_48._padding_._4_4_ == 1) &&
       (iVar2 = strncmp((char *)(local_48._padding_ - (ulonglong)local_48._padding_._4_4_),"D",1),
       iVar2 == 0)) {
      uVar3 = FCbFieldView::AsInteger((FCbFieldView *)&local_48,0,(FIntegerParams)0x40);
      *param_5 = (uint)uVar3;
      TCbFieldIterator<FCbFieldView>::operator++(&local_48);
    }
    bVar4 = lVar1 == local_48._padding_;
    lVar1 = local_48._padding_;
    if ((bVar4) && (local_20 == local_48.FieldsEnd)) {
      TCbFieldIterator<FCbFieldView>::operator++(&local_48);
      lVar1 = local_48._padding_;
    }
  }
  return;
}

