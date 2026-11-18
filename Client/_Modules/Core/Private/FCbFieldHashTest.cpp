// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 141a3cc40

EAutomationTestFlags __thiscall FCbFieldHashTest::GetTestFlags(FCbFieldHashTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141a3cc50

bool __thiscall FCbFieldHashTest::IsStressTest(FCbFieldHashTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a3cc60

uint __thiscall FCbFieldHashTest::GetRequiredDeviceNum(FCbFieldHashTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a3cc70

FString * __thiscall
FCbFieldHashTest::GetTestSourceFileName(FCbFieldHashTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tests\\Serialization\\CompactBinaryTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a3cca0

int __thiscall FCbFieldHashTest::GetTestSourceFileLine(FCbFieldHashTest *this)

{
  return 0x440;
}

// GetTests @ 141a3ccb0

/* WARNING: Removing unreachable block (ram,0x000141a3cd9d) */
/* WARNING: Removing unreachable block (ram,0x000141a3ce68) */

void __thiscall
FCbFieldHashTest::GetTests
          (FCbFieldHashTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Serialization.CbField.Hash");
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

// RunTest @ 141a3ce90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FCbFieldHashTest::RunTest(FCbFieldHashTest *this,FString *param_1)

{
  code *pcVar1;
  ECbFieldError EVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  undefined1 auStackY_138 [32];
  TCbFieldTypeAccessors<16> local_f8 [16];
  FString local_e8;
  uchar local_d8 [16];
  undefined1 local_c8 [8];
  undefined8 uStack_c0;
  uchar local_b8 [16];
  undefined1 local_a8 [8];
  void *pvStack_a0;
  uchar local_98 [16];
  undefined1 local_88 [8];
  undefined8 uStack_80;
  uchar local_78 [16];
  undefined1 local_68 [12];
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  uchar uStack_59;
  uchar local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  int local_40;
  undefined4 uStack_3c;
  uchar local_38 [8];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_e8.Data.ArrayNum._0_1_ = 0x14;
  local_e8.Data.ArrayNum._1_1_ = 0;
  local_e8.Data.ArrayNum._2_1_ = 0;
  local_e8.Data.ArrayNum._3_1_ = 0;
  local_20 = 0;
  local_48 = 0x4030201;
  local_a8[0] = None;
  local_a8[1] = None;
  local_a8._2_2_ = 0;
  local_a8._4_4_ = 0;
  pvStack_a0 = (void *)0x0;
  uStack_44 = 0x8070605;
  local_98[0] = '\0';
  local_98[1] = '\0';
  local_98[2] = '\0';
  local_98[3] = '\0';
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)&local_30;
  local_b8[0] = '\0';
  local_b8[1] = '\0';
  local_b8[2] = '\0';
  local_b8[3] = '\0';
  local_40 = 0xc0b0a09;
  local_30 = 0;
  uStack_28 = 0;
  unique0x10000607 =
       (void *)CONCAT17(local_e8.Data.ArrayMax._3_1_,
                        CONCAT16(local_e8.Data.ArrayMax._2_1_,
                                 CONCAT15(local_e8.Data.ArrayMax._1_1_,
                                          CONCAT14((undefined1)local_e8.Data.ArrayMax,0x14))));
  uStack_3c = 0x100f0e0d;
  builtin_memcpy(local_38,"\x11\x12\x13\x14",4);
  local_c8[0] = '\0';
  local_c8[1] = '\0';
  local_c8[2] = '\0';
  local_c8[3] = '\0';
  local_c8[4] = '\0';
  local_c8[5] = '\0';
  local_c8[6] = '\0';
  local_c8[7] = '\0';
  uStack_c0._0_1_ = '\0';
  uStack_c0._1_1_ = '\0';
  uStack_c0._2_1_ = '\0';
  uStack_c0._3_1_ = '\0';
  uStack_c0._4_1_ = '\0';
  uStack_c0._5_1_ = '\0';
  uStack_c0._6_1_ = '\0';
  uStack_c0._7_1_ = '\0';
  local_68._0_8_ = local_e8.Data.AllocatorInstance.Data;
  FCbFieldTestBase::TestFieldBytes<16,FIoHash,TCbFieldTypeAccessors<16>_>
            ((FCbFieldTestBase *)this,L"Hash, Zero",(TArrayView<unsigned_char_const_,int> *)local_68
             ,(FIoHash *)local_c8,(FIoHash *)local_a8,None,local_f8);
  local_68[4] = (uchar)uStack_44;
  local_68._0_4_ = local_48;
  local_68[5] = (uchar)((uint)uStack_44 >> 8);
  local_68[6] = (uchar)((uint)uStack_44 >> 0x10);
  local_68[7] = (char)((uint)uStack_44 >> 0x18);
  stack0xffffffffffffffa0 = CONCAT14((char)uStack_3c,local_40);
  stack0xffffffffffffffa0 = CONCAT15((char)((uint)uStack_3c >> 8),stack0xffffffffffffffa0);
  stack0xffffffffffffffa0 = CONCAT16((char)((uint)uStack_3c >> 0x10),stack0xffffffffffffffa0);
  stack0xffffffffffffffa0 =
       (void *)CONCAT17((char)((uint)uStack_3c >> 0x18),stack0xffffffffffffffa0);
  local_c8[0] = '\0';
  local_c8[1] = '\0';
  local_c8[2] = '\0';
  local_c8[3] = '\0';
  local_c8[4] = '\0';
  local_c8[5] = '\0';
  local_c8[6] = '\0';
  local_c8[7] = '\0';
  uStack_c0._0_1_ = '\0';
  uStack_c0._1_1_ = '\0';
  uStack_c0._2_1_ = '\0';
  uStack_c0._3_1_ = '\0';
  uStack_c0._4_1_ = '\0';
  uStack_c0._5_1_ = '\0';
  uStack_c0._6_1_ = '\0';
  uStack_c0._7_1_ = '\0';
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)&local_48;
  local_58[0] = local_38[0];
  local_58[1] = local_38[1];
  local_58[2] = local_38[2];
  local_58[3] = local_38[3];
  local_98[0] = local_38[0];
  local_98[1] = local_38[1];
  local_98[2] = local_38[2];
  local_98[3] = local_38[3];
  local_a8 = (undefined1  [8])local_68._0_8_;
  pvStack_a0 = stack0xffffffffffffffa0;
  local_b8[0] = '\0';
  local_b8[1] = '\0';
  local_b8[2] = '\0';
  local_b8[3] = '\0';
  local_e8.Data.ArrayNum._0_1_ = 0x14;
  local_e8.Data.ArrayNum._1_1_ = 0;
  local_e8.Data.ArrayNum._2_1_ = 0;
  local_e8.Data.ArrayNum._3_1_ = 0;
  unique0x1000062a =
       (void *)CONCAT17(local_e8.Data.ArrayMax._3_1_,
                        CONCAT16(local_e8.Data.ArrayMax._2_1_,
                                 CONCAT15(local_e8.Data.ArrayMax._1_1_,
                                          CONCAT14((undefined1)local_e8.Data.ArrayMax,0x14))));
  local_68._0_8_ = local_e8.Data.AllocatorInstance.Data;
  FCbFieldTestBase::TestFieldBytes<16,FIoHash,TCbFieldTypeAccessors<16>_>
            ((FCbFieldTestBase *)this,L"Hash, NonZero",
             (TArrayView<unsigned_char_const_,int> *)local_68,(FIoHash *)local_a8,
             (FIoHash *)local_c8,None,local_f8);
  local_a8._2_6_ = local_a8._2_6_ & 0xffff;
  pvStack_a0 = (void *)0x0;
  local_68[4] = (uchar)uStack_44;
  local_68._0_4_ = local_48;
  local_68[5] = (uchar)((uint)uStack_44 >> 8);
  local_68[6] = (uchar)((uint)uStack_44 >> 0x10);
  local_68[7] = (char)((uint)uStack_44 >> 0x18);
  local_a8 = (undefined1  [8])((ulonglong)(uint6)local_a8._2_6_ << 0x10);
  stack0xffffffffffffffa0 = CONCAT14((char)uStack_3c,local_40);
  stack0xffffffffffffffa0 = CONCAT15((char)((uint)uStack_3c >> 8),stack0xffffffffffffffa0);
  stack0xffffffffffffffa0 = CONCAT16((char)((uint)uStack_3c >> 0x10),stack0xffffffffffffffa0);
  stack0xffffffffffffffa0 =
       (void *)CONCAT17((uchar)((uint)uStack_3c >> 0x18),stack0xffffffffffffffa0);
  local_58[0] = local_38[0];
  local_58[1] = local_38[1];
  local_58[2] = local_38[2];
  local_58[3] = local_38[3];
  local_b8[0] = local_38[0];
  local_b8[1] = local_38[1];
  local_b8[2] = local_38[2];
  local_b8[3] = local_38[3];
  local_78[0] = local_38[0];
  local_78[1] = local_38[1];
  local_78[2] = local_38[2];
  local_78[3] = local_38[3];
  local_c8 = (undefined1  [8])local_68._0_8_;
  uStack_c0 = stack0xffffffffffffffa0;
  local_88 = (undefined1  [8])local_68._0_8_;
  uStack_80 = stack0xffffffffffffffa0;
  bVar3 = FCbFieldType::IsHash(None);
  ::FString::PrintfImpl(&local_e8,L"FCbFieldView::Is[Type](%s)");
  if (bVar3) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_68,L"%s: The two values are not equal.");
    (*pcVar1)(this,local_68,0);
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  FCbFieldView::AsHash((FCbFieldView *)local_a8,(FIoHash *)local_68,(FIoHash *)local_c8);
  ::FString::PrintfImpl(&local_e8,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (CONCAT13(local_e8.Data.ArrayNum._3_1_,
               CONCAT12(local_e8.Data.ArrayNum._2_1_,
                        CONCAT11(local_e8.Data.ArrayNum._1_1_,(undefined1)local_e8.Data.ArrayNum)))
      != 0) {
    FVar4.Data = local_e8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual<FIoHash>
            ((FAutomationTestBase *)this,(wchar_t *)FVar4.Data,(FIoHash *)local_68,
             (FIoHash *)local_88);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  bVar3 = local_a8[1] == None;
  ::FString::PrintfImpl(&local_e8,L"FCbFieldView::As[Type](%s) -> HasError()");
  if (bVar3) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_68,L"%s: The two values are not equal.");
    (*pcVar1)(this,local_68,0);
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  EVar2 = local_a8[1];
  ::FString::PrintfImpl(&local_e8,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != TypeError) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_68,L"%s: The two values are not equal.");
    (*pcVar1)(this,local_68,0);
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  FCbFieldView::FCbFieldView((FCbFieldView *)local_68,&local_48,ObjectAttachment);
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_e8.Data.AllocatorInstance.Data._4_1_ = (char)uStack_44;
  local_e8.Data.AllocatorInstance.Data._0_4_ = local_48;
  local_e8.Data.AllocatorInstance.Data._5_1_ = (char)((uint)uStack_44 >> 8);
  local_e8.Data.AllocatorInstance.Data._6_1_ = (char)((uint)uStack_44 >> 0x10);
  local_e8.Data.ArrayNum._0_1_ = (undefined1)local_40;
  local_e8.Data.AllocatorInstance.Data._7_1_ = (uchar)((uint)uStack_44 >> 0x18);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  uStack_80._0_1_ = '\0';
  uStack_80._1_1_ = '\0';
  uStack_80._2_1_ = '\0';
  uStack_80._3_1_ = '\0';
  uStack_80._4_1_ = '\0';
  uStack_80._5_1_ = '\0';
  uStack_80._6_1_ = '\0';
  uStack_80._7_1_ = '\0';
  local_e8.Data.ArrayNum._1_1_ = (undefined1)((uint)local_40 >> 8);
  local_e8.Data.ArrayNum._2_1_ = (undefined1)((uint)local_40 >> 0x10);
  local_e8.Data.ArrayNum._3_1_ = (undefined1)((uint)local_40 >> 0x18);
  local_e8.Data.ArrayMax._0_1_ = (undefined1)uStack_3c;
  local_e8.Data.ArrayMax._1_1_ = (undefined1)((uint)uStack_3c >> 8);
  local_e8.Data.ArrayMax._2_1_ = (undefined1)((uint)uStack_3c >> 0x10);
  local_e8.Data.ArrayMax._3_1_ = (uchar)((uint)uStack_3c >> 0x18);
  uStack_c0._4_1_ = (undefined1)local_e8.Data.ArrayMax;
  uStack_c0._0_1_ = (undefined1)local_40;
  uStack_c0._1_1_ = local_40._1_1_;
  uStack_c0._2_1_ = local_40._2_1_;
  uStack_c0._3_1_ = local_40._3_1_;
  uStack_c0._5_1_ = local_e8.Data.ArrayMax._1_1_;
  uStack_c0._6_1_ = local_e8.Data.ArrayMax._2_1_;
  uStack_c0._7_1_ = local_e8.Data.ArrayMax._3_1_;
  local_d8[0] = local_38[0];
  local_d8[1] = local_38[1];
  local_d8[2] = local_38[2];
  local_d8[3] = local_38[3];
  local_b8[0] = local_38[0];
  local_b8[1] = local_38[1];
  local_b8[2] = local_38[2];
  local_b8[3] = local_38[3];
  local_c8 = (undefined1  [8])local_e8.Data.AllocatorInstance.Data;
  FCbFieldTestBase::TestField<16,FIoHash,TCbFieldTypeAccessors<16>_>
            ((FCbFieldTestBase *)this,L"ObjectAttachment, NonZero, AsHash",(FCbFieldView *)local_68,
             (FIoHash *)local_c8,(FIoHash *)local_88,None,local_f8);
  FCbFieldView::FCbFieldView((FCbFieldView *)local_68,&local_48,BinaryAttachment);
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_e8.Data.AllocatorInstance.Data._4_1_ = (char)uStack_44;
  local_e8.Data.AllocatorInstance.Data._0_4_ = local_48;
  local_e8.Data.AllocatorInstance.Data._5_1_ = (char)((uint)uStack_44 >> 8);
  local_e8.Data.AllocatorInstance.Data._6_1_ = (char)((uint)uStack_44 >> 0x10);
  local_e8.Data.ArrayNum._0_1_ = (undefined1)local_40;
  local_e8.Data.AllocatorInstance.Data._7_1_ = (uchar)((uint)uStack_44 >> 0x18);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  uStack_80._0_1_ = '\0';
  uStack_80._1_1_ = '\0';
  uStack_80._2_1_ = '\0';
  uStack_80._3_1_ = '\0';
  uStack_80._4_1_ = '\0';
  uStack_80._5_1_ = '\0';
  uStack_80._6_1_ = '\0';
  uStack_80._7_1_ = '\0';
  local_e8.Data.ArrayNum._1_1_ = (undefined1)((uint)local_40 >> 8);
  local_e8.Data.ArrayNum._2_1_ = (undefined1)((uint)local_40 >> 0x10);
  local_e8.Data.ArrayNum._3_1_ = (undefined1)((uint)local_40 >> 0x18);
  local_e8.Data.ArrayMax._0_1_ = (undefined1)uStack_3c;
  local_e8.Data.ArrayMax._1_1_ = (undefined1)((uint)uStack_3c >> 8);
  local_e8.Data.ArrayMax._2_1_ = (undefined1)((uint)uStack_3c >> 0x10);
  local_e8.Data.ArrayMax._3_1_ = (uchar)((uint)uStack_3c >> 0x18);
  uStack_c0._4_1_ = (undefined1)local_e8.Data.ArrayMax;
  uStack_c0._0_1_ = (undefined1)local_40;
  uStack_c0._1_1_ = local_40._1_1_;
  uStack_c0._2_1_ = local_40._2_1_;
  uStack_c0._3_1_ = local_40._3_1_;
  uStack_c0._5_1_ = local_e8.Data.ArrayMax._1_1_;
  uStack_c0._6_1_ = local_e8.Data.ArrayMax._2_1_;
  uStack_c0._7_1_ = local_e8.Data.ArrayMax._3_1_;
  local_d8[0] = local_38[0];
  local_d8[1] = local_38[1];
  local_d8[2] = local_38[2];
  local_d8[3] = local_38[3];
  local_b8[0] = local_38[0];
  local_b8[1] = local_38[1];
  local_b8[2] = local_38[2];
  local_b8[3] = local_38[3];
  local_c8 = (undefined1  [8])local_e8.Data.AllocatorInstance.Data;
  FCbFieldTestBase::TestField<16,FIoHash,TCbFieldTypeAccessors<16>_>
            ((FCbFieldTestBase *)this,L"BinaryAttachment, NonZero, AsHash",(FCbFieldView *)local_68,
             (FIoHash *)local_c8,(FIoHash *)local_88,None,local_f8);
  return true;
}

// GetBeautifiedTestName @ 141a3d590

FString * __thiscall
FCbFieldHashTest::GetBeautifiedTestName(FCbFieldHashTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Serialization.CbField.Hash");
  return __return_storage_ptr__;
}

