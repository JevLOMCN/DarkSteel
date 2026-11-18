// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 141a3c160

EAutomationTestFlags __thiscall
FCbFieldBinaryAttachmentTest::GetTestFlags(FCbFieldBinaryAttachmentTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141a3c170

bool __thiscall FCbFieldBinaryAttachmentTest::IsStressTest(FCbFieldBinaryAttachmentTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a3c180

uint __thiscall
FCbFieldBinaryAttachmentTest::GetRequiredDeviceNum(FCbFieldBinaryAttachmentTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a3c190

FString * __thiscall
FCbFieldBinaryAttachmentTest::GetTestSourceFileName
          (FCbFieldBinaryAttachmentTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tests\\Serialization\\CompactBinaryTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a3c1c0

int __thiscall
FCbFieldBinaryAttachmentTest::GetTestSourceFileLine(FCbFieldBinaryAttachmentTest *this)

{
  return 0x425;
}

// GetTests @ 141a3c1d0

/* WARNING: Removing unreachable block (ram,0x000141a3c2bd) */
/* WARNING: Removing unreachable block (ram,0x000141a3c388) */

void __thiscall
FCbFieldBinaryAttachmentTest::GetTests
          (FCbFieldBinaryAttachmentTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Serialization.CbField.BinaryAttachment");
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

// RunTest @ 141a3c3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FCbFieldBinaryAttachmentTest::RunTest(FCbFieldBinaryAttachmentTest *this,FString *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  code *pcVar3;
  undefined5 uVar4;
  ECbFieldError EVar5;
  FAutomationTestBase *this_00;
  FSharedBuffer FVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  ForAnyElementType FVar12;
  wchar_t *pwVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  uchar uVar16;
  undefined1 auStackY_1f8 [32];
  TCbFieldTypeAccessors<15> local_1b8 [16];
  ForAnyElementType local_1a8;
  undefined8 uStack_1a0;
  uchar local_198 [16];
  FCbFieldView local_188;
  undefined1 local_178 [16];
  uchar local_168 [16];
  FIoHash local_158;
  FIoHash local_138;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  FAutomationTestBase *local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  TCbBuffer<FCbFieldView> local_b0;
  FIoHash local_98;
  undefined4 local_78;
  uint uStack_74;
  int local_70;
  uint uStack_6c;
  uchar local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_50 = 0;
  local_188.Value._0_4_ = 0x14;
  local_98.Hash[0] = '\0';
  local_98.Hash[1] = '\0';
  local_98.Hash[2] = '\0';
  local_98.Hash[3] = '\0';
  local_98.Hash[4] = '\0';
  local_98.Hash[5] = '\0';
  local_98.Hash[6] = '\0';
  local_98.Hash[7] = '\0';
  local_98.Hash[8] = '\0';
  local_98.Hash[9] = '\0';
  local_98.Hash[10] = '\0';
  local_98.Hash[0xb] = '\0';
  local_98.Hash[0xc] = '\0';
  local_98.Hash[0xd] = '\0';
  local_98.Hash[0xe] = '\0';
  local_98.Hash[0xf] = '\0';
  local_78 = 0x4030201;
  local_98.Hash[0x10] = '\0';
  local_98.Hash[0x11] = '\0';
  local_98.Hash[0x12] = '\0';
  local_98.Hash[0x13] = '\0';
  local_188._0_8_ = &local_60;
  local_198[0] = '\0';
  local_198[1] = '\0';
  local_198[2] = '\0';
  local_198[3] = '\0';
  uStack_74 = 0x8070605;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0xc0b0a09;
  uStack_6c = 0x100f0e0d;
  builtin_memcpy(local_68,"\x11\x12\x13\x14",4);
  local_1a8.Data = (FScriptContainerElement *)0x0;
  uStack_1a0 = (void *)0x0;
  local_d8 = (FAutomationTestBase *)this;
  FCbFieldTestBase::TestFieldBytes<15,FIoHash,TCbFieldTypeAccessors<15>_>
            ((FCbFieldTestBase *)this,L"BinaryAttachment, Zero",
             (TArrayView<unsigned_char_const_,int> *)&local_188,(FIoHash *)&local_1a8,&local_98,None
             ,local_1b8);
  local_1a8.Data._4_1_ = (uchar)uStack_74;
  local_1a8.Data._0_4_ = local_78;
  local_1a8.Data._5_1_ = (uchar)(uStack_74 >> 8);
  local_1a8.Data._6_1_ = (uchar)(uStack_74 >> 0x10);
  local_1a8.Data._7_1_ = (uchar)(uStack_74 >> 0x18);
  uStack_1a0 = (void *)CONCAT17((uchar)(uStack_6c >> 0x18),
                                CONCAT16((uchar)(uStack_6c >> 0x10),
                                         CONCAT15((uchar)(uStack_6c >> 8),
                                                  CONCAT14((uchar)uStack_6c,local_70))));
  local_188._0_8_ = &local_78;
  local_198[0] = local_68[0];
  local_198[1] = local_68[1];
  local_198[2] = local_68[2];
  local_198[3] = local_68[3];
  local_98.Hash[0] = '\0';
  local_98.Hash[1] = '\0';
  local_98.Hash[2] = '\0';
  local_98.Hash[3] = '\0';
  local_98.Hash[4] = '\0';
  local_98.Hash[5] = '\0';
  local_98.Hash[6] = '\0';
  local_98.Hash[7] = '\0';
  local_98.Hash[8] = '\0';
  local_98.Hash[9] = '\0';
  local_98.Hash[10] = '\0';
  local_98.Hash[0xb] = '\0';
  local_98.Hash[0xc] = '\0';
  local_98.Hash[0xd] = '\0';
  local_98.Hash[0xe] = '\0';
  local_98.Hash[0xf] = '\0';
  local_168[0] = local_68[0];
  local_168[1] = local_68[1];
  local_168[2] = local_68[2];
  local_168[3] = local_68[3];
  local_188.Value = (void *)CONCAT44(local_188.Value._4_4_,0x14);
  local_178._0_8_ = local_1a8.Data;
  local_178._8_8_ = uStack_1a0;
  local_98.Hash[0x10] = '\0';
  local_98.Hash[0x11] = '\0';
  local_98.Hash[0x12] = '\0';
  local_98.Hash[0x13] = '\0';
  FCbFieldTestBase::TestFieldBytes<15,FIoHash,TCbFieldTypeAccessors<15>_>
            ((FCbFieldTestBase *)this,L"BinaryAttachment, NonZero",
             (TArrayView<unsigned_char_const_,int> *)&local_188,(FIoHash *)local_178,&local_98,None,
             local_1b8);
  FCbFieldView::FCbFieldView(&local_188,&local_78,BinaryAttachment);
  uVar9 = local_68._0_4_;
  local_118 = CONCAT44(uStack_74,local_78);
  local_c8 = CONCAT44(uStack_6c,local_70);
  local_e0 = 0;
  local_110 = local_118 >> 8;
  local_e8 = (ulonglong)(uStack_74 >> 0x10);
  local_108 = local_118 >> 0x10;
  local_d0 = (ulonglong)(uStack_74 >> 0x18);
  local_100 = local_118 >> 0x18;
  local_c0 = local_c8 >> 8;
  local_f8 = (ulonglong)uStack_74;
  local_f0 = (ulonglong)(uStack_74 >> 8);
  local_1a8.Data = (FScriptContainerElement *)(ulonglong)uStack_6c;
  local_b8 = local_c8 >> 0x10;
  local_178._0_8_ = local_c8 >> 0x18;
  local_98.Hash[4] = (uchar)uStack_74;
  local_98.Hash[0] = (undefined1)local_78;
  local_98.Hash[1] = local_78._1_1_;
  local_98.Hash[2] = local_78._2_1_;
  local_98.Hash[3] = local_78._3_1_;
  local_158.Hash[0x10] = '\0';
  local_158.Hash[0x11] = '\0';
  local_158.Hash[0x12] = '\0';
  local_158.Hash[0x13] = '\0';
  local_98.Hash[5] = (uchar)(uStack_74 >> 8);
  uVar4 = (undefined5)CONCAT44(uStack_6c,local_70);
  local_98.Hash[6] = (uchar)(uStack_74 >> 0x10);
  local_98.Hash[7] = (uchar)(uStack_74 >> 0x18);
  uVar7 = local_98.Hash._0_8_;
  local_98.Hash[0x10] = local_68[0];
  local_98.Hash[0x11] = local_68[1];
  local_98.Hash[0x12] = local_68[2];
  local_98.Hash[0x13] = local_68[3];
  local_138.Hash[0x10] = local_68[0];
  local_138.Hash[0x11] = local_68[1];
  local_138.Hash[0x12] = local_68[2];
  local_138.Hash[0x13] = local_68[3];
  uVar15 = (undefined1)(uStack_6c >> 8);
  local_138.Hash[0xd] = uVar15;
  local_138.Hash[8] = (char)uVar4;
  local_138.Hash[9] = (char)((uint5)uVar4 >> 8);
  local_138.Hash[10] = (char)((uint5)uVar4 >> 0x10);
  local_138.Hash[0xb] = (char)((uint5)uVar4 >> 0x18);
  local_138.Hash[0xc] = (char)((uint5)uVar4 >> 0x20);
  uVar14 = (undefined1)(uStack_6c >> 0x10);
  local_138.Hash[0xe] = uVar14;
  uVar16 = (uchar)(uStack_6c >> 0x18);
  local_138.Hash[0xf] = uVar16;
  local_98.Hash[0] = (uchar)local_78;
  local_98.Hash[1] = (uchar)((uint)local_78 >> 8);
  local_98.Hash[2] = (uchar)((uint)local_78 >> 0x10);
  local_98.Hash[3] = (uchar)((uint)local_78 >> 0x18);
  local_138.Hash[0] = local_98.Hash[0];
  local_138.Hash[1] = local_98.Hash[1];
  local_138.Hash[2] = local_98.Hash[2];
  local_138.Hash[3] = local_98.Hash[3];
  local_138.Hash[4] = (uchar)uStack_74;
  local_138.Hash[5] = local_98.Hash[5];
  local_138.Hash[6] = local_98.Hash[6];
  local_138.Hash[7] = local_98.Hash[7];
  local_158.Hash[0] = '\0';
  local_158.Hash[1] = '\0';
  local_158.Hash[2] = '\0';
  local_158.Hash[3] = '\0';
  local_158.Hash[4] = '\0';
  local_158.Hash[5] = '\0';
  local_158.Hash[6] = '\0';
  local_158.Hash[7] = '\0';
  local_158.Hash[8] = '\0';
  local_158.Hash[9] = '\0';
  local_158.Hash[10] = '\0';
  local_158.Hash[0xb] = '\0';
  local_158.Hash[0xc] = '\0';
  local_158.Hash[0xd] = '\0';
  local_158.Hash[0xe] = '\0';
  local_158.Hash[0xf] = '\0';
  local_98.Hash._0_8_ = uVar7;
  local_98.Hash._8_8_ = local_138.Hash._8_8_;
  FCbFieldTestBase::TestFieldNoClone<15,FIoHash,FCbAttachmentAccessors,FCbFieldView>
            ((FCbFieldTestBase *)local_d8,L"BinaryAttachment, NonZero, AsAttachment",&local_188,
             &local_138,&local_158,None,(FCbAttachmentAccessors *)local_1b8);
  local_b0.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_b0._padding_._0_1_ = local_188.TypeWithFlags;
  local_b0._padding_._1_1_ = local_188.Error;
  local_b0._padding_._2_2_ = local_188._2_2_;
  local_b0._padding_._4_4_ = local_188.NameLen;
  local_b0._padding_ = (longlong)local_188.Value;
  TCbBuffer<FCbFieldView>::MakeOwned(&local_b0);
  uVar10 = local_68._0_4_;
  local_98.Hash[1] = (char)local_110;
  local_98.Hash[0] = (char)local_118;
  local_98.Hash[2] = (char)local_108;
  local_98.Hash[3] = (char)local_100;
  local_98.Hash[4] = (char)local_f8;
  local_98.Hash[5] = (char)local_f0;
  local_98.Hash[6] = (char)local_e8;
  local_98.Hash[7] = (uchar)local_d0;
  local_98.Hash[9] = (char)local_c0;
  local_98.Hash[8] = (char)local_c8;
  local_98.Hash[10] = (char)local_b8;
  local_98.Hash[0xb] = (char)local_178._0_8_;
  local_98.Hash[0xc] = (char)local_1a8.Data;
  local_98.Hash[0xd] = uVar15;
  local_98.Hash[0xe] = uVar14;
  local_98.Hash[0xf] = uVar16;
  local_68[0] = (uchar)uVar9;
  local_68[1] = SUB41(uVar9,1);
  local_68[2] = SUB41(uVar9,2);
  local_68[3] = SUB41(uVar9,3);
  local_98.Hash[0x10] = local_68[0];
  local_98.Hash[0x11] = local_68[1];
  local_98.Hash[0x12] = local_68[2];
  local_98.Hash[0x13] = local_68[3];
  local_68._0_4_ = uVar10;
  ::FString::PrintfImpl((FString *)&local_1a8,L"%s, Clone");
  this_00 = local_d8;
  local_138.Hash._16_4_ = SUB84(local_e0,0);
  FVar12.Data = (FScriptContainerElement *)L"";
  if ((int)uStack_1a0 != 0) {
    FVar12.Data = local_1a8.Data;
  }
  local_158.Hash[0x10] = local_98.Hash[0x10];
  local_158.Hash[0x11] = local_98.Hash[0x11];
  local_158.Hash[0x12] = local_98.Hash[0x12];
  local_158.Hash[0x13] = local_98.Hash[0x13];
  local_138.Hash[0] = '\0';
  local_138.Hash[1] = '\0';
  local_138.Hash[2] = '\0';
  local_138.Hash[3] = '\0';
  local_138.Hash[4] = '\0';
  local_138.Hash[5] = '\0';
  local_138.Hash[6] = '\0';
  local_138.Hash[7] = '\0';
  local_138.Hash[8] = '\0';
  local_138.Hash[9] = '\0';
  local_138.Hash[10] = '\0';
  local_138.Hash[0xb] = '\0';
  local_138.Hash[0xc] = '\0';
  local_138.Hash[0xd] = '\0';
  local_138.Hash[0xe] = '\0';
  local_138.Hash[0xf] = '\0';
  local_158.Hash[0] = local_98.Hash[0];
  local_158.Hash[1] = local_98.Hash[1];
  local_158.Hash[2] = local_98.Hash[2];
  local_158.Hash[3] = local_98.Hash[3];
  local_158.Hash[4] = local_98.Hash[4];
  local_158.Hash[5] = local_98.Hash[5];
  local_158.Hash[6] = local_98.Hash[6];
  local_158.Hash[7] = local_98.Hash[7];
  local_158.Hash[8] = local_98.Hash[8];
  local_158.Hash[9] = local_98.Hash[9];
  local_158.Hash[10] = local_98.Hash[10];
  local_158.Hash[0xb] = local_98.Hash[0xb];
  local_158.Hash[0xc] = local_98.Hash[0xc];
  local_158.Hash[0xd] = local_98.Hash[0xd];
  local_158.Hash[0xe] = local_98.Hash[0xe];
  local_158.Hash[0xf] = local_98.Hash[0xf];
  FCbFieldTestBase::TestFieldNoClone<15,FIoHash,FCbAttachmentAccessors,FCbField>
            ((FCbFieldTestBase *)local_d8,(wchar_t *)FVar12.Data,(FCbField *)&local_b0,&local_158,
             &local_138,None,(FCbAttachmentAccessors *)local_1b8);
  if (local_1a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  bVar11 = FCbFieldView::Equals(&local_188,(FCbFieldView *)&local_b0);
  ::FString::PrintfImpl((FString *)&local_1a8,L"FCbFieldView::Equals(%s)");
  FVar12.Data = (FScriptContainerElement *)L"";
  if ((int)uStack_1a0 != 0) {
    FVar12.Data = local_1a8.Data;
  }
  FAutomationTestBase::TestTrue(this_00,(wchar_t *)FVar12.Data,bVar11);
  if (local_1a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  FVar6.Owner.Owner = local_b0.Buffer.Owner.Owner;
  if (local_b0.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_b0.Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_b0.Buffer.Owner.Owner + 0x10))(local_b0.Buffer.Owner.Owner);
      *(void **)((longlong)FVar6.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar6.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar6.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar6.Owner.Owner)(FVar6.Owner.Owner,1);
      }
    }
  }
  local_98.Hash[4] = (uchar)uStack_74;
  local_98.Hash[0] = (undefined1)local_78;
  local_98.Hash[1] = local_78._1_1_;
  local_98.Hash[2] = local_78._2_1_;
  local_98.Hash[3] = local_78._3_1_;
  local_98.Hash[5] = (uchar)(uStack_74 >> 8);
  local_98.Hash[6] = (uchar)(uStack_74 >> 0x10);
  local_98.Hash[7] = (uchar)(uStack_74 >> 0x18);
  uVar7 = local_98.Hash._0_8_;
  local_98.Hash[0xc] = (uchar)uStack_6c;
  local_98.Hash[8] = (undefined1)local_70;
  local_98.Hash[9] = local_70._1_1_;
  local_98.Hash[10] = local_70._2_1_;
  local_98.Hash[0xb] = local_70._3_1_;
  local_98.Hash[0xd] = (uchar)(uStack_6c >> 8);
  local_98.Hash[0xe] = (uchar)(uStack_6c >> 0x10);
  local_98.Hash[0xf] = (uchar)(uStack_6c >> 0x18);
  uVar8 = local_98.Hash._8_8_;
  local_98.Hash[0x10] = local_68[0];
  local_98.Hash[0x11] = local_68[1];
  local_98.Hash[0x12] = local_68[2];
  local_98.Hash[0x13] = local_68[3];
  local_138.Hash[0x10] = local_68[0];
  local_138.Hash[0x11] = local_68[1];
  local_138.Hash[0x12] = local_68[2];
  local_138.Hash[0x13] = local_68[3];
  local_158.Hash[0x10] = local_68[0];
  local_158.Hash[0x11] = local_68[1];
  local_158.Hash[0x12] = local_68[2];
  local_158.Hash[0x13] = local_68[3];
  local_1a8.Data = (FScriptContainerElement *)(((ulonglong)local_1a8.Data >> 0x10 & 0xffff) << 0x10)
  ;
  uStack_1a0 = (void *)0x0;
  local_98.Hash[0] = (uchar)local_78;
  local_98.Hash[1] = (uchar)((uint)local_78 >> 8);
  local_98.Hash[2] = (uchar)((uint)local_78 >> 0x10);
  local_98.Hash[3] = (uchar)((uint)local_78 >> 0x18);
  local_138.Hash[0] = local_98.Hash[0];
  local_138.Hash[1] = local_98.Hash[1];
  local_138.Hash[2] = local_98.Hash[2];
  local_138.Hash[3] = local_98.Hash[3];
  local_138.Hash[4] = local_98.Hash[4];
  local_138.Hash[5] = local_98.Hash[5];
  local_138.Hash[6] = local_98.Hash[6];
  local_138.Hash[7] = local_98.Hash[7];
  local_98.Hash[8] = (uchar)local_70;
  local_98.Hash[9] = (uchar)((uint)local_70 >> 8);
  local_98.Hash[10] = (uchar)((uint)local_70 >> 0x10);
  local_98.Hash[0xb] = (uchar)((uint)local_70 >> 0x18);
  local_138.Hash[8] = local_98.Hash[8];
  local_138.Hash[9] = local_98.Hash[9];
  local_138.Hash[10] = local_98.Hash[10];
  local_138.Hash[0xb] = local_98.Hash[0xb];
  local_138.Hash[0xc] = local_98.Hash[0xc];
  local_138.Hash[0xd] = local_98.Hash[0xd];
  local_138.Hash[0xe] = local_98.Hash[0xe];
  local_138.Hash[0xf] = local_98.Hash[0xf];
  local_98.Hash[0] = (uchar)local_78;
  local_98.Hash[1] = (uchar)((uint)local_78 >> 8);
  local_98.Hash[2] = (uchar)((uint)local_78 >> 0x10);
  local_98.Hash[3] = (uchar)((uint)local_78 >> 0x18);
  local_158.Hash[0] = local_98.Hash[0];
  local_158.Hash[1] = local_98.Hash[1];
  local_158.Hash[2] = local_98.Hash[2];
  local_158.Hash[3] = local_98.Hash[3];
  local_158.Hash[4] = local_98.Hash[4];
  local_158.Hash[5] = local_98.Hash[5];
  local_158.Hash[6] = local_98.Hash[6];
  local_158.Hash[7] = local_98.Hash[7];
  local_98.Hash[8] = (uchar)local_70;
  local_98.Hash[9] = (uchar)((uint)local_70 >> 8);
  local_98.Hash[10] = (uchar)((uint)local_70 >> 0x10);
  local_98.Hash[0xb] = (uchar)((uint)local_70 >> 0x18);
  local_158.Hash[8] = local_98.Hash[8];
  local_158.Hash[9] = local_98.Hash[9];
  local_158.Hash[10] = local_98.Hash[10];
  local_158.Hash[0xb] = local_98.Hash[0xb];
  local_158.Hash[0xc] = local_98.Hash[0xc];
  local_158.Hash[0xd] = local_98.Hash[0xd];
  local_158.Hash[0xe] = local_98.Hash[0xe];
  local_158.Hash[0xf] = local_98.Hash[0xf];
  local_98.Hash._0_8_ = uVar7;
  local_98.Hash._8_8_ = uVar8;
  ::FString::PrintfImpl((FString *)&local_188,L"FCbFieldView::Is[Type](%s)");
  if ((wchar_t *)local_188._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  FCbFieldView::AsBinaryAttachment((FCbFieldView *)&local_1a8,&local_98,&local_138);
  ::FString::PrintfImpl((FString *)&local_188,L"FCbFieldView::As[Type](%s) -> Equal");
  pwVar13 = L"";
  if ((int)local_188.Value != 0) {
    pwVar13 = (wchar_t *)local_188._0_8_;
  }
  FAutomationTestBase::TestEqual<FIoHash>(this_00,pwVar13,&local_98,&local_158);
  if ((wchar_t *)local_188._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  bVar11 = local_1a8.Data._1_1_ == None;
  ::FString::PrintfImpl((FString *)local_178,L"FCbFieldView::As[Type](%s) -> HasError()");
  if (bVar11) {
    pcVar3 = *(code **)(this_00->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_188,L"%s: The two values are not equal.");
    (*pcVar3)(this_00,&local_188,0);
    if ((wchar_t *)local_188._0_8_ != (wchar_t *)0x0) {
      FMemory::Free((void *)local_188._0_8_);
    }
  }
  if ((FScriptContainerElement *)local_178._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  EVar5 = local_1a8.Data._1_1_;
  ::FString::PrintfImpl((FString *)local_178,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar5 != TypeError) {
    pcVar3 = *(code **)(this_00->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_188,L"%s: The two values are not equal.");
    (*pcVar3)(this_00,&local_188,0);
    if ((wchar_t *)local_188._0_8_ != (wchar_t *)0x0) {
      FMemory::Free((void *)local_188._0_8_);
    }
  }
  if ((FScriptContainerElement *)local_178._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  return true;
}

// GetBeautifiedTestName @ 141a3cbd0

FString * __thiscall
FCbFieldBinaryAttachmentTest::GetBeautifiedTestName
          (FCbFieldBinaryAttachmentTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Serialization.CbField.BinaryAttachment");
  return __return_storage_ptr__;
}

