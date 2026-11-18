// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 141a388b0

EAutomationTestFlags __thiscall FCbFieldFloatTest::GetTestFlags(FCbFieldFloatTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141a388c0

bool __thiscall FCbFieldFloatTest::IsStressTest(FCbFieldFloatTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a388d0

uint __thiscall FCbFieldFloatTest::GetRequiredDeviceNum(FCbFieldFloatTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a388e0

FString * __thiscall
FCbFieldFloatTest::GetTestSourceFileName(FCbFieldFloatTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tests\\Serialization\\CompactBinaryTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a38910

int __thiscall FCbFieldFloatTest::GetTestSourceFileLine(FCbFieldFloatTest *this)

{
  return 0x387;
}

// GetTests @ 141a38920

/* WARNING: Removing unreachable block (ram,0x000141a38a0d) */
/* WARNING: Removing unreachable block (ram,0x000141a38ad8) */

void __thiscall
FCbFieldFloatTest::GetTests
          (FCbFieldFloatTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Serialization.CbField.Float");
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

// RunTest @ 141a38b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FCbFieldFloatTest::RunTest(FCbFieldFloatTest *this,FString *param_1)

{
  code *pcVar1;
  longlong lVar2;
  float fVar3;
  double dVar4;
  ECbFieldError EVar5;
  ulong64 uVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  wchar_t *pwVar11;
  ECbFieldType EVar12;
  ulonglong uVar13;
  byte bVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  bool bVar18;
  float fVar19;
  double dVar20;
  undefined1 auStackY_108 [32];
  TCbFieldTypeAccessors<10> local_c8 [8];
  FCbFieldView local_c0;
  FCbFieldView local_b0;
  ForAnyElementType local_a0;
  byte abStack_92 [2];
  FCbFieldView local_90;
  undefined4 local_80;
  undefined4 local_7c;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_80 = 0x563412c0;
  FCbFieldView::FCbFieldView((FCbFieldView *)(abStack_92 + 2),&local_80,Float32);
  uVar6 = FCbFieldView::GetSize((FCbFieldView *)(abStack_92 + 2));
  ::FString::PrintfImpl((FString *)&local_c0,L"FCbFieldView::GetSize(%s)");
  pwVar11 = L"";
  if ((int)local_c0.Value != 0) {
    pwVar11 = (wchar_t *)CONCAT62(local_c0._2_6_,CONCAT11(local_c0.Error,local_c0.TypeWithFlags));
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar11,uVar6,5);
  pvVar7 = (void *)CONCAT62(local_c0._2_6_,CONCAT11(local_c0.Error,local_c0.TypeWithFlags));
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  EVar12 = local_90.TypeWithFlags & CustomByName;
  ::FString::PrintfImpl((FString *)&local_c0,L"FCbFieldView::HasValue(%s)");
  pwVar11 = L"";
  if ((int)local_c0.Value != 0) {
    pwVar11 = (wchar_t *)CONCAT62(local_c0._2_6_,CONCAT11(local_c0.Error,local_c0.TypeWithFlags));
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar11,EVar12 != None);
  pvVar7 = (void *)CONCAT62(local_c0._2_6_,CONCAT11(local_c0.Error,local_c0.TypeWithFlags));
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  bVar18 = local_90.Error != None;
  ::FString::PrintfImpl((FString *)&local_c0,L"FCbFieldView::HasError(%s) == false");
  pwVar11 = L"";
  if ((int)local_c0.Value != 0) {
    pwVar11 = (wchar_t *)CONCAT62(local_c0._2_6_,CONCAT11(local_c0.Error,local_c0.TypeWithFlags));
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar11,bVar18);
  pvVar7 = (void *)CONCAT62(local_c0._2_6_,CONCAT11(local_c0.Error,local_c0.TypeWithFlags));
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  EVar5 = local_90.Error;
  ::FString::PrintfImpl((FString *)&local_c0,L"FCbFieldView::GetError(%s) == None");
  pvVar7 = (void *)CONCAT62(local_c0._2_6_,CONCAT11(local_c0.Error,local_c0.TypeWithFlags));
  if (EVar5 != None) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_b0,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_b0,0);
    if ((void *)local_b0._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_b0._0_8_);
    }
    pvVar7 = (void *)CONCAT62(local_c0._2_6_,CONCAT11(local_c0.Error,local_c0.TypeWithFlags));
  }
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  FCbFieldTestBase::TestField<10,float,TCbFieldTypeAccessors<10>_>
            ((FCbFieldTestBase *)this,L"Float32",(FCbFieldView *)(abStack_92 + 2),__real_c0123456,
             0.0,None,local_c8);
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_a0,&local_80,Float32);
  FCbFieldTestBase::TestField<11,double,TCbFieldTypeAccessors<11>_>
            ((FCbFieldTestBase *)this,L"Float32, AsDouble",(FCbFieldView *)&local_a0,
             __real_c002468abfb70fa1,0.0,None,(TCbFieldTypeAccessors<11> *)local_c8);
  local_80 = 0x674523c1;
  local_7c = 0xefcdab89;
  FCbFieldView::FCbFieldView(&local_c0,&local_80,Float64);
  uVar6 = FCbFieldView::GetSize(&local_c0);
  ::FString::PrintfImpl((FString *)(abStack_92 + 2),L"FCbFieldView::GetSize(%s)");
  pwVar11 = L"";
  if ((int)local_90.Value != 0) {
    pwVar11 = (wchar_t *)
              CONCAT44(local_90.NameLen,
                       CONCAT22(local_90._2_2_,CONCAT11(local_90.Error,local_90.TypeWithFlags)));
  }
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar11,uVar6,9);
  pvVar7 = (void *)CONCAT44(local_90.NameLen,
                            CONCAT22(local_90._2_2_,CONCAT11(local_90.Error,local_90.TypeWithFlags))
                           );
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  EVar12 = local_c0.TypeWithFlags & CustomByName;
  ::FString::PrintfImpl((FString *)(abStack_92 + 2),L"FCbFieldView::HasValue(%s)");
  pwVar11 = L"";
  if ((int)local_90.Value != 0) {
    pwVar11 = (wchar_t *)
              CONCAT44(local_90.NameLen,
                       CONCAT22(local_90._2_2_,CONCAT11(local_90.Error,local_90.TypeWithFlags)));
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar11,EVar12 != None);
  pvVar7 = (void *)CONCAT44(local_90.NameLen,
                            CONCAT22(local_90._2_2_,CONCAT11(local_90.Error,local_90.TypeWithFlags))
                           );
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  bVar18 = local_c0.Error != None;
  ::FString::PrintfImpl((FString *)(abStack_92 + 2),L"FCbFieldView::HasError(%s) == false");
  pwVar11 = L"";
  if ((int)local_90.Value != 0) {
    pwVar11 = (wchar_t *)
              CONCAT44(local_90.NameLen,
                       CONCAT22(local_90._2_2_,CONCAT11(local_90.Error,local_90.TypeWithFlags)));
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar11,bVar18);
  pvVar7 = (void *)CONCAT44(local_90.NameLen,
                            CONCAT22(local_90._2_2_,CONCAT11(local_90.Error,local_90.TypeWithFlags))
                           );
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  EVar5 = local_c0.Error;
  ::FString::PrintfImpl((FString *)(abStack_92 + 2),L"FCbFieldView::GetError(%s) == None");
  pvVar7 = (void *)CONCAT44(local_90.NameLen,
                            CONCAT22(local_90._2_2_,CONCAT11(local_90.Error,local_90.TypeWithFlags))
                           );
  if (EVar5 != None) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_b0,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_b0,0);
    if ((void *)local_b0._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_b0._0_8_);
    }
    pvVar7 = (void *)CONCAT44(local_90.NameLen,
                              CONCAT22(local_90._2_2_,
                                       CONCAT11(local_90.Error,local_90.TypeWithFlags)));
  }
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  FCbFieldTestBase::TestField<11,double,TCbFieldTypeAccessors<11>_>
            ((FCbFieldTestBase *)this,L"Float64",&local_c0,__real_c123456789abcdef,0.0,None,
             (TCbFieldTypeAccessors<11> *)local_c8);
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_a0,&local_80,Float64);
  fVar3 = __real_41000000;
  FCbFieldTestBase::TestFieldNoClone<10,float,TCbFieldTypeAccessors<10>,FCbFieldView>
            ((FCbFieldTestBase *)this,L"Float64, AsFloat",(FCbFieldView *)&local_a0,__real_41000000,
             __real_41000000,RangeError,local_c8);
  uVar13 = 0xffffff;
  for (lVar2 = 0x3f; 0xffffffUL >> lVar2 == 0; lVar2 = lVar2 + -1) {
  }
  uVar15 = 0xffffff;
  uVar8 = (int)lVar2 / 7 + 1;
  uVar17 = 9;
  if ((int)uVar8 < 9) {
    uVar17 = uVar8;
  }
  pbVar10 = abStack_92 + (ulonglong)uVar17 + 1;
  switch(uVar17) {
  case 9:
    *pbVar10 = 0xff;
    uVar15 = 0xffff;
    pbVar10 = abStack_92 + uVar17;
  case 8:
    *pbVar10 = (byte)uVar15;
    pbVar10 = pbVar10 + -1;
    uVar15 = uVar15 >> 8;
  case 7:
    *pbVar10 = (byte)uVar15;
    pbVar10 = pbVar10 + -1;
    uVar15 = uVar15 >> 8;
  case 6:
    *pbVar10 = (byte)uVar15;
    pbVar10 = pbVar10 + -1;
    uVar15 = uVar15 >> 8;
  case 5:
    *pbVar10 = (byte)uVar15;
    pbVar10 = pbVar10 + -1;
    uVar15 = uVar15 >> 8;
  case 4:
    *pbVar10 = (byte)uVar15;
    pbVar10 = pbVar10 + -1;
    uVar15 = uVar15 >> 8;
  case 3:
    *pbVar10 = (byte)uVar15;
    pbVar10 = pbVar10 + -1;
    uVar15 = uVar15 >> 8;
  case 2:
    *pbVar10 = (byte)uVar15;
    pbVar10 = pbVar10 + -1;
    uVar15 = uVar15 >> 8;
  default:
    *pbVar10 = -1 << (9U - (char)uVar17 & 0x1f) | (byte)uVar15;
    FCbFieldView::FCbFieldView(&local_b0,abStack_92 + 2,IntegerPositive);
    FCbFieldTestBase::TestField<10,float,TCbFieldTypeAccessors<10>_>
              ((FCbFieldTestBase *)this,L"Integer+, MaxBinary32, AsFloat",&local_b0,__real_4b7fffff,
               0.0,None,local_c8);
    FCbFieldTestBase::TestField<11,double,TCbFieldTypeAccessors<11>_>
              ((FCbFieldTestBase *)this,L"Integer+, MaxBinary32, AsDouble",&local_b0,
               __real_416fffffe0000000,0.0,None,(TCbFieldTypeAccessors<11> *)local_c8);
    uVar15 = 0x1000000;
    for (lVar2 = 0x3f; 0x1000000UL >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
    uVar8 = (int)lVar2 / 7 + 1;
    uVar17 = 9;
    if ((int)uVar8 < 9) {
      uVar17 = uVar8;
    }
  }
  pbVar10 = (byte *)((longlong)&local_90.Value + (ulonglong)uVar17 + 7);
  switch(uVar17) {
  case 9:
    *pbVar10 = 0;
    uVar15 = 0x10000;
    pbVar10 = (byte *)((longlong)&local_90.Value + (ulonglong)uVar17 + 6);
  case 8:
    *pbVar10 = 0;
    pbVar10 = pbVar10 + -1;
    uVar15 = uVar15 >> 8;
  case 7:
    *pbVar10 = 0;
    pbVar10 = pbVar10 + -1;
    uVar15 = uVar15 >> 8;
  case 6:
    *pbVar10 = (byte)uVar15;
    pbVar10 = pbVar10 + -1;
    uVar15 = uVar15 >> 8;
  case 5:
    *pbVar10 = (byte)uVar15;
    pbVar10 = pbVar10 + -1;
    uVar15 = uVar15 >> 8;
  case 4:
    *pbVar10 = (byte)uVar15;
    pbVar10 = pbVar10 + -1;
    uVar15 = uVar15 >> 8;
  case 3:
    *pbVar10 = (byte)uVar15;
    pbVar10 = pbVar10 + -1;
    uVar15 = uVar15 >> 8;
  case 2:
    *pbVar10 = (byte)uVar15;
    pbVar10 = pbVar10 + -1;
    uVar15 = uVar15 >> 8;
  default:
    uVar8 = 9;
    *pbVar10 = -1 << (9U - (char)uVar17 & 0x1f) | (byte)uVar15;
    FCbFieldView::FCbFieldView(&local_b0,&local_80,IntegerPositive);
    FCbFieldTestBase::TestFieldNoClone<10,float,TCbFieldTypeAccessors<10>,FCbFieldView>
              ((FCbFieldTestBase *)this,L"Integer+, MaxBinary32+1, AsFloat",&local_b0,fVar3,fVar3,
               RangeError,local_c8);
    FCbFieldTestBase::TestField<11,double,TCbFieldTypeAccessors<11>_>
              ((FCbFieldTestBase *)this,L"Integer+, MaxBinary32+1, AsDouble",&local_b0,
               __real_4170000000000000,0.0,None,(TCbFieldTypeAccessors<11> *)local_c8);
    uVar15 = 0x1fffffffffffff;
    for (lVar2 = 0x3f; 0x1fffffffffffffU >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
    uVar16 = 0x1fffffffffffff;
    uVar9 = (int)lVar2 / 7 + 1;
    uVar17 = uVar8;
    if ((int)uVar9 < 9) {
      uVar17 = uVar9;
    }
  }
  pbVar10 = abStack_92 + (ulonglong)uVar17 + 1;
  switch(uVar17) {
  case 9:
    *pbVar10 = 0xff;
    uVar16 = 0x1fffffffffff;
    pbVar10 = abStack_92 + uVar17;
  case 8:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 7:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 6:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 5:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 4:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 3:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 2:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  default:
    *pbVar10 = -1 << (9U - (char)uVar17 & 0x1f) | (byte)uVar16;
    FCbFieldView::FCbFieldView(&local_b0,abStack_92 + 2,IntegerPositive);
    FCbFieldTestBase::TestFieldNoClone<10,float,TCbFieldTypeAccessors<10>,FCbFieldView>
              ((FCbFieldTestBase *)this,L"Integer+, MaxBinary64, AsFloat",&local_b0,fVar3,fVar3,
               RangeError,local_c8);
    FCbFieldTestBase::TestField<11,double,TCbFieldTypeAccessors<11>_>
              ((FCbFieldTestBase *)this,L"Integer+, MaxBinary64, AsDouble",&local_b0,
               __real_433fffffffffffff,0.0,None,(TCbFieldTypeAccessors<11> *)local_c8);
    uVar16 = 0x20000000000000;
    for (lVar2 = 0x3f; 0x20000000000000U >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
    uVar9 = (int)lVar2 / 7 + 1;
    uVar17 = uVar8;
    if ((int)uVar9 < 9) {
      uVar17 = uVar9;
    }
  }
  pbVar10 = (byte *)((longlong)&local_90.Value + (ulonglong)uVar17 + 7);
  switch(uVar17) {
  case 9:
    *pbVar10 = 0;
    uVar16 = 0x200000000000;
    pbVar10 = (byte *)((longlong)&local_90.Value + (ulonglong)uVar17 + 6);
  case 8:
    *pbVar10 = 0;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 7:
    *pbVar10 = 0;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 6:
    *pbVar10 = 0;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 5:
    *pbVar10 = 0;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 4:
    *pbVar10 = 0;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 3:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 2:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  default:
    *pbVar10 = -1 << (9U - (char)uVar17 & 0x1f) | (byte)uVar16;
    FCbFieldView::FCbFieldView(&local_b0,&local_80,IntegerPositive);
    FCbFieldTestBase::TestFieldNoClone<10,float,TCbFieldTypeAccessors<10>,FCbFieldView>
              ((FCbFieldTestBase *)this,L"Integer+, MaxBinary64+1, AsFloat",&local_b0,fVar3,fVar3,
               RangeError,local_c8);
    dVar4 = __real_4020000000000000;
    FCbFieldTestBase::TestFieldNoClone<11,double,TCbFieldTypeAccessors<11>,FCbFieldView>
              ((FCbFieldTestBase *)this,L"Integer+, MaxBinary64+1, AsDouble",&local_b0,
               __real_4020000000000000,__real_4020000000000000,RangeError,
               (TCbFieldTypeAccessors<11> *)local_c8);
    uVar16 = 0xffffffffffffffff;
    for (lVar2 = 0x3f; 0xffffffffffffffffU >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
    uVar9 = (int)lVar2 / 7 + 1;
    uVar17 = 9;
    if ((int)uVar9 < 9) {
      uVar8 = uVar9;
    }
  }
  pbVar10 = abStack_92 + (ulonglong)uVar8 + 1;
  switch(uVar8) {
  case 9:
    *pbVar10 = 0xff;
    uVar16 = 0xffffffffffffff;
    pbVar10 = abStack_92 + uVar8;
  case 8:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 7:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 6:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 5:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 4:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 3:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 2:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  default:
    *pbVar10 = -1 << (9U - (char)uVar8 & 0x1f) | (byte)uVar16;
    FCbFieldView::FCbFieldView(&local_b0,abStack_92 + 2,IntegerPositive);
    FCbFieldTestBase::TestFieldNoClone<10,float,TCbFieldTypeAccessors<10>,FCbFieldView>
              ((FCbFieldTestBase *)this,L"Integer+, MaxUInt64, AsFloat",&local_b0,fVar3,fVar3,
               RangeError,local_c8);
    FCbFieldTestBase::TestFieldNoClone<11,double,TCbFieldTypeAccessors<11>,FCbFieldView>
              ((FCbFieldTestBase *)this,L"Integer+, MaxUInt64, AsDouble",&local_b0,dVar4,dVar4,
               RangeError,(TCbFieldTypeAccessors<11> *)local_c8);
    uVar16 = 0xfffffe;
    for (lVar2 = 0x3f; 0xfffffeUL >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
    uVar9 = (int)lVar2 / 7 + 1;
    uVar8 = uVar17;
    if ((int)uVar9 < 9) {
      uVar8 = uVar9;
    }
  }
  pbVar10 = (byte *)((longlong)&local_90.Value + (ulonglong)uVar8 + 7);
  switch(uVar8) {
  case 9:
    *pbVar10 = 0xfe;
    uVar16 = 0xffff;
    pbVar10 = (byte *)((longlong)&local_90.Value + (ulonglong)uVar8 + 6);
  case 8:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 7:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 6:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 5:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 4:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 3:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  case 2:
    *pbVar10 = (byte)uVar16;
    pbVar10 = pbVar10 + -1;
    uVar16 = uVar16 >> 8;
  default:
    *pbVar10 = -1 << (9U - (char)uVar8 & 0x1f) | (byte)uVar16;
    FCbFieldView::FCbFieldView(&local_b0,&local_80,IntegerNegative);
    FCbFieldTestBase::TestField<10,float,TCbFieldTypeAccessors<10>_>
              ((FCbFieldTestBase *)this,L"Integer-, MaxBinary32, AsFloat",&local_b0,__real_cb7fffff,
               0.0,None,local_c8);
    FCbFieldTestBase::TestField<11,double,TCbFieldTypeAccessors<11>_>
              ((FCbFieldTestBase *)this,L"Integer-, MaxBinary32, AsDouble",&local_b0,
               __real_c16fffffe0000000,0.0,None,(TCbFieldTypeAccessors<11> *)local_c8);
    for (lVar2 = 0x3f; 0xffffffUL >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
    uVar9 = (int)lVar2 / 7 + 1;
    uVar8 = uVar17;
    if ((int)uVar9 < 9) {
      uVar8 = uVar9;
    }
  }
  pbVar10 = abStack_92 + (ulonglong)uVar8 + 1;
  switch(uVar8) {
  case 9:
    *pbVar10 = 0xff;
    uVar13 = 0xffff;
    pbVar10 = abStack_92 + uVar8;
  case 8:
    *pbVar10 = (byte)uVar13;
    pbVar10 = pbVar10 + -1;
    uVar13 = uVar13 >> 8;
  case 7:
    *pbVar10 = (byte)uVar13;
    pbVar10 = pbVar10 + -1;
    uVar13 = uVar13 >> 8;
  case 6:
    *pbVar10 = (byte)uVar13;
    pbVar10 = pbVar10 + -1;
    uVar13 = uVar13 >> 8;
  case 5:
    *pbVar10 = (byte)uVar13;
    pbVar10 = pbVar10 + -1;
    uVar13 = uVar13 >> 8;
  case 4:
    *pbVar10 = (byte)uVar13;
    pbVar10 = pbVar10 + -1;
    uVar13 = uVar13 >> 8;
  case 3:
    *pbVar10 = (byte)uVar13;
    pbVar10 = pbVar10 + -1;
    uVar13 = uVar13 >> 8;
  case 2:
    *pbVar10 = (byte)uVar13;
    pbVar10 = pbVar10 + -1;
    uVar13 = uVar13 >> 8;
  default:
    *pbVar10 = -1 << (9U - (char)uVar8 & 0x1f) | (byte)uVar13;
    FCbFieldView::FCbFieldView(&local_b0,abStack_92 + 2,IntegerNegative);
    FCbFieldTestBase::TestFieldNoClone<10,float,TCbFieldTypeAccessors<10>,FCbFieldView>
              ((FCbFieldTestBase *)this,L"Integer-, MaxBinary32+1, AsFloat",&local_b0,fVar3,fVar3,
               RangeError,local_c8);
    FCbFieldTestBase::TestField<11,double,TCbFieldTypeAccessors<11>_>
              ((FCbFieldTestBase *)this,L"Integer-, MaxBinary32+1, AsDouble",&local_b0,
               __real_c170000000000000,0.0,None,(TCbFieldTypeAccessors<11> *)local_c8);
    bVar14 = 0xfe;
    for (lVar2 = 0x3f; 0x1ffffffffffffeU >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
    uVar9 = (int)lVar2 / 7 + 1;
    uVar8 = uVar17;
    if ((int)uVar9 < 9) {
      uVar8 = uVar9;
    }
    uVar13 = (ulonglong)uVar8;
    pbVar10 = (byte *)((longlong)&local_90.Value + uVar13 + 7);
    switch(uVar8) {
    case 2:
      *pbVar10 = 0xfe;
      pbVar10 = (byte *)((longlong)&local_90.Value + uVar13 + 6);
      bVar14 = 0xff;
      break;
    case 3:
      *pbVar10 = 0xfe;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 6) = 0xff;
      pbVar10 = (byte *)((longlong)&local_90.Value + uVar13 + 5);
      bVar14 = 0xff;
      break;
    case 4:
      *pbVar10 = 0xfe;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 6) = 0xff;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 5) = 0xff;
      pbVar10 = (byte *)((longlong)&local_90.Value + uVar13 + 4);
      bVar14 = 0xff;
      break;
    case 5:
      *pbVar10 = 0xfe;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 6) = 0xff;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 5) = 0xff;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 4) = 0xff;
      pbVar10 = (byte *)((longlong)&local_90.Value + uVar13 + 3);
      bVar14 = 0xff;
      break;
    case 6:
      *pbVar10 = 0xfe;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 6) = 0xff;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 5) = 0xff;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 4) = 0xff;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 3) = 0xff;
      pbVar10 = (byte *)((longlong)&local_90.Value + uVar13 + 2);
      bVar14 = 0xff;
      break;
    case 7:
      *pbVar10 = 0xfe;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 6) = 0xff;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 5) = 0xff;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 4) = 0xff;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 3) = 0xff;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 2) = 0xff;
      pbVar10 = (byte *)((longlong)&local_90.Value + uVar13 + 1);
      bVar14 = 0x1f;
      break;
    case 8:
      *pbVar10 = 0xfe;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 6) = 0xff;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 5) = 0xff;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 4) = 0xff;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 3) = 0xff;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 2) = 0xff;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 1) = 0x1f;
      pbVar10 = (byte *)((longlong)&local_90.Value + uVar13);
      bVar14 = 0;
      break;
    case 9:
      *pbVar10 = 0xfe;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 6) = 0xff;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 5) = 0xff;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 4) = 0xff;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 3) = 0xff;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 2) = 0xff;
      *(undefined1 *)((longlong)&local_90.Value + uVar13 + 1) = 0x1f;
      *(undefined1 *)((longlong)&local_90.Value + uVar13) = 0;
      pbVar10 = (byte *)((longlong)&local_90.NameLen + uVar13 + 3);
      bVar14 = 0;
    }
    *pbVar10 = -1 << (9U - (char)uVar8 & 0x1f) | bVar14;
    FCbFieldView::FCbFieldView(&local_b0,&local_80,IntegerNegative);
    FCbFieldTestBase::TestFieldNoClone<10,float,TCbFieldTypeAccessors<10>,FCbFieldView>
              ((FCbFieldTestBase *)this,L"Integer-, MaxBinary64, AsFloat",&local_b0,fVar3,fVar3,
               RangeError,local_c8);
    FCbFieldTestBase::TestField<11,double,TCbFieldTypeAccessors<11>_>
              ((FCbFieldTestBase *)this,L"Integer-, MaxBinary64, AsDouble",&local_b0,
               __real_c33fffffffffffff,0.0,None,(TCbFieldTypeAccessors<11> *)local_c8);
    for (lVar2 = 0x3f; 0x1fffffffffffffU >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
    uVar8 = (int)lVar2 / 7 + 1;
    if ((int)uVar8 < 9) {
      uVar17 = uVar8;
    }
  }
  pbVar10 = abStack_92 + (ulonglong)uVar17 + 1;
  switch(uVar17) {
  case 9:
    *pbVar10 = 0xff;
    uVar15 = 0x1fffffffffff;
    pbVar10 = abStack_92 + uVar17;
  case 8:
    *pbVar10 = (byte)uVar15;
    pbVar10 = pbVar10 + -1;
    uVar15 = uVar15 >> 8;
  case 7:
    *pbVar10 = (byte)uVar15;
    pbVar10 = pbVar10 + -1;
    uVar15 = uVar15 >> 8;
  case 6:
    *pbVar10 = (byte)uVar15;
    pbVar10 = pbVar10 + -1;
    uVar15 = uVar15 >> 8;
  case 5:
    *pbVar10 = (byte)uVar15;
    pbVar10 = pbVar10 + -1;
    uVar15 = uVar15 >> 8;
  case 4:
    *pbVar10 = (byte)uVar15;
    pbVar10 = pbVar10 + -1;
    uVar15 = uVar15 >> 8;
  case 3:
    *pbVar10 = (byte)uVar15;
    pbVar10 = pbVar10 + -1;
    uVar15 = uVar15 >> 8;
  case 2:
    *pbVar10 = (byte)uVar15;
    pbVar10 = pbVar10 + -1;
    uVar15 = uVar15 >> 8;
  default:
    *pbVar10 = -1 << (9U - (char)uVar17 & 0x1f) | (byte)uVar15;
    FCbFieldView::FCbFieldView(&local_b0,abStack_92 + 2,IntegerNegative);
    FCbFieldTestBase::TestFieldNoClone<10,float,TCbFieldTypeAccessors<10>,FCbFieldView>
              ((FCbFieldTestBase *)this,L"Integer-, MaxBinary64+1, AsFloat",&local_b0,fVar3,fVar3,
               RangeError,local_c8);
    FCbFieldTestBase::TestFieldNoClone<11,double,TCbFieldTypeAccessors<11>,FCbFieldView>
              ((FCbFieldTestBase *)this,L"Integer-, MaxBinary64+1, AsDouble",&local_b0,dVar4,dVar4,
               RangeError,(TCbFieldTypeAccessors<11> *)local_c8);
    local_90.TypeWithFlags = None;
    local_90.Error = None;
    local_90.NameLen = 0;
    local_90.Value = (void *)0x0;
    ::FString::PrintfImpl((FString *)&local_a0,L"FCbFieldView::Is[Type](%s)");
    if (local_a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data);
    }
    fVar19 = FCbFieldView::AsFloat((FCbFieldView *)(abStack_92 + 2),fVar3);
    ::FString::PrintfImpl((FString *)&local_c0,L"FCbFieldView::As[Type](%s) -> Equal");
    pwVar11 = L"";
    if ((int)local_c0.Value != 0) {
      pwVar11 = (wchar_t *)CONCAT62(local_c0._2_6_,CONCAT11(local_c0.Error,local_c0.TypeWithFlags));
    }
    FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar11,fVar19,fVar3,__real_38d1b717)
    ;
    pvVar7 = (void *)CONCAT62(local_c0._2_6_,CONCAT11(local_c0.Error,local_c0.TypeWithFlags));
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    bVar18 = local_90.Error == None;
    ::FString::PrintfImpl((FString *)&local_c0,L"FCbFieldView::As[Type](%s) -> HasError()");
    pvVar7 = (void *)CONCAT62(local_c0._2_6_,CONCAT11(local_c0.Error,local_c0.TypeWithFlags));
    if (bVar18) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_b0,L"%s: The two values are not equal.");
      (*pcVar1)(this,&local_b0,0);
      if ((void *)local_b0._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b0._0_8_);
      }
      pvVar7 = (void *)CONCAT62(local_c0._2_6_,CONCAT11(local_c0.Error,local_c0.TypeWithFlags));
    }
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    EVar5 = local_90.Error;
    ::FString::PrintfImpl((FString *)&local_c0,L"FCbFieldView::As[Type](%s) -> GetError()");
    pvVar7 = (void *)CONCAT62(local_c0._2_6_,CONCAT11(local_c0.Error,local_c0.TypeWithFlags));
    if (EVar5 != TypeError) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_b0,L"%s: The two values are not equal.");
      (*pcVar1)(this,&local_b0,0);
      if ((void *)local_b0._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b0._0_8_);
      }
      pvVar7 = (void *)CONCAT62(local_c0._2_6_,CONCAT11(local_c0.Error,local_c0.TypeWithFlags));
    }
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    EVar12 = local_90.TypeWithFlags & (Hash|BoolFalse);
    ::FString::PrintfImpl((FString *)&local_c0,L"FCbFieldView::Is[Type](%s)");
    pvVar7 = (void *)CONCAT62(local_c0._2_6_,CONCAT11(local_c0.Error,local_c0.TypeWithFlags));
    if (EVar12 == IntegerPositive) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_b0,L"%s: The two values are not equal.");
      (*pcVar1)(this,&local_b0,0);
      if ((void *)local_b0._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b0._0_8_);
      }
      pvVar7 = (void *)CONCAT62(local_c0._2_6_,CONCAT11(local_c0.Error,local_c0.TypeWithFlags));
    }
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    dVar20 = FCbFieldView::AsDouble((FCbFieldView *)(abStack_92 + 2),dVar4);
    ::FString::PrintfImpl((FString *)&local_c0,L"FCbFieldView::As[Type](%s) -> Equal");
    pwVar11 = L"";
    if ((int)local_c0.Value != 0) {
      pwVar11 = (wchar_t *)CONCAT62(local_c0._2_6_,CONCAT11(local_c0.Error,local_c0.TypeWithFlags));
    }
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,pwVar11,dVar20,dVar4,__real_3f1a36e2e0000000);
    pvVar7 = (void *)CONCAT62(local_c0._2_6_,CONCAT11(local_c0.Error,local_c0.TypeWithFlags));
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    bVar18 = local_90.Error == None;
    ::FString::PrintfImpl((FString *)&local_c0,L"FCbFieldView::As[Type](%s) -> HasError()");
    pvVar7 = (void *)CONCAT62(local_c0._2_6_,CONCAT11(local_c0.Error,local_c0.TypeWithFlags));
    if (bVar18) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_b0,L"%s: The two values are not equal.");
      (*pcVar1)(this,&local_b0,0);
      if ((void *)local_b0._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b0._0_8_);
      }
      pvVar7 = (void *)CONCAT62(local_c0._2_6_,CONCAT11(local_c0.Error,local_c0.TypeWithFlags));
    }
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    EVar5 = local_90.Error;
    ::FString::PrintfImpl((FString *)&local_c0,L"FCbFieldView::As[Type](%s) -> GetError()");
    pvVar7 = (void *)CONCAT62(local_c0._2_6_,CONCAT11(local_c0.Error,local_c0.TypeWithFlags));
    if (EVar5 != TypeError) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_b0,L"%s: The two values are not equal.");
      (*pcVar1)(this,&local_b0,0);
      if ((void *)local_b0._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b0._0_8_);
      }
      pvVar7 = (void *)CONCAT62(local_c0._2_6_,CONCAT11(local_c0.Error,local_c0.TypeWithFlags));
    }
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    return true;
  }
}

// GetBeautifiedTestName @ 141a39ec0

FString * __thiscall
FCbFieldFloatTest::GetBeautifiedTestName(FCbFieldFloatTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Serialization.CbField.Float");
  return __return_storage_ptr__;
}

