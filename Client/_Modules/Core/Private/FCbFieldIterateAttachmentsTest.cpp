// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// GetTestFlags @ 141a41d80

EAutomationTestFlags __thiscall
FCbFieldIterateAttachmentsTest::GetTestFlags(FCbFieldIterateAttachmentsTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141a41d90

bool __thiscall FCbFieldIterateAttachmentsTest::IsStressTest(FCbFieldIterateAttachmentsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a41da0

uint __thiscall
FCbFieldIterateAttachmentsTest::GetRequiredDeviceNum(FCbFieldIterateAttachmentsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a41db0

FString * __thiscall
FCbFieldIterateAttachmentsTest::GetTestSourceFileName
          (FCbFieldIterateAttachmentsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tests\\Serialization\\CompactBinaryTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a41de0

int __thiscall
FCbFieldIterateAttachmentsTest::GetTestSourceFileLine(FCbFieldIterateAttachmentsTest *this)

{
  return 0x52d;
}

// GetTests @ 141a41df0

/* WARNING: Removing unreachable block (ram,0x000141a41edd) */
/* WARNING: Removing unreachable block (ram,0x000141a41fa8) */

void __thiscall
FCbFieldIterateAttachmentsTest::GetTests
          (FCbFieldIterateAttachmentsTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Serialization.CbField.IterateAttachments");
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

// RunTest @ 141a41fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FCbFieldIterateAttachmentsTest::RunTest(FCbFieldIterateAttachmentsTest *this,FString *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  atomic<unsigned___int64> aVar5;
  code *pcVar6;
  atomic<unsigned___int64> aVar7;
  ECbValidateError EVar8;
  FCbWriter *pFVar9;
  FBlake3Hash *pFVar10;
  FCbFieldIterator *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStack_f8 [32];
  undefined4 local_d8 [2];
  FCbWriter local_d0;
  undefined1 local_a8 [12];
  undefined4 uStack_9c;
  ulong64 uStack_98;
  atomic<unsigned___int64> aStack_90;
  undefined8 local_88;
  undefined1 local_78 [32];
  undefined1 local_58 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_48 [2];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_a8._8_4_ = local_a8._8_4_ & 0xffff0000;
  uStack_9c = 0;
  uStack_98 = 0;
  aStack_90 = (atomic<unsigned___int64>)0x0;
  FCbWriter::FCbWriter(&local_d0);
  local_78._8_4_ = 0x11;
  local_78._0_8_ = "IgnoredTypeInRoot";
  pFVar9 = FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  local_d8[0] = 100;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddHash(pFVar9,(FIoHash *)local_58);
  local_d8[0] = 0;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddObjectAttachment(&local_d0,(FIoHash *)local_58);
  local_d8[0] = 1;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddBinaryAttachment(&local_d0,(FIoHash *)local_58);
  local_78._8_4_ = 0x13;
  local_78._0_8_ = "ObjAttachmentInRoot";
  pFVar9 = FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  local_d8[0] = 2;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddObjectAttachment(pFVar9,(FIoHash *)local_58);
  local_78._8_4_ = 0x13;
  local_78._0_8_ = "BinAttachmentInRoot";
  pFVar9 = FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  local_d8[0] = 3;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddBinaryAttachment(pFVar9,(FIoHash *)local_58);
  FCbWriter::BeginArray(&local_d0);
  FCbWriter::AddInteger(&local_d0,1);
  FCbWriter::AddInteger(&local_d0,2);
  FCbWriter::EndArray(&local_d0);
  FCbWriter::BeginArray(&local_d0);
  local_d8[0] = 4;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddBinaryAttachment(&local_d0,(FIoHash *)local_58);
  local_d8[0] = 5;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddBinaryAttachment(&local_d0,(FIoHash *)local_58);
  FCbWriter::EndArray(&local_d0);
  FCbWriter::BeginArray(&local_d0);
  FCbWriter::BeginArray(&local_d0);
  local_d8[0] = 6;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddBinaryAttachment(&local_d0,(FIoHash *)local_58);
  local_d8[0] = 7;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddBinaryAttachment(&local_d0,(FIoHash *)local_58);
  FCbWriter::EndArray(&local_d0);
  FCbWriter::BeginArray(&local_d0);
  local_d8[0] = 8;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddBinaryAttachment(&local_d0,(FIoHash *)local_58);
  local_d8[0] = 9;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddBinaryAttachment(&local_d0,(FIoHash *)local_58);
  FCbWriter::EndArray(&local_d0);
  FCbWriter::EndArray(&local_d0);
  FCbWriter::BeginArray(&local_d0);
  FCbWriter::BeginArray(&local_d0);
  FCbWriter::AddInteger(&local_d0,0);
  FCbWriter::AddBool(&local_d0,false);
  FCbWriter::EndArray(&local_d0);
  FCbWriter::BeginArray(&local_d0);
  local_d8[0] = 10;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddObjectAttachment(&local_d0,(FIoHash *)local_58);
  FCbWriter::AddBool(&local_d0,false);
  FCbWriter::EndArray(&local_d0);
  FCbWriter::EndArray(&local_d0);
  FCbWriter::BeginArray(&local_d0);
  FCbWriter::BeginObject(&local_d0);
  local_78._8_4_ = 0x1e;
  local_78._0_8_ = "ObjAttachmentInUniObjInUniObj1";
  pFVar9 = FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  local_d8[0] = 0xb;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddObjectAttachment(pFVar9,(FIoHash *)local_58);
  local_78._8_4_ = 0x1e;
  local_78._0_8_ = "ObjAttachmentInUniObjInUniObj2";
  pFVar9 = FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  local_d8[0] = 0xc;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddObjectAttachment(pFVar9,(FIoHash *)local_58);
  FCbWriter::EndObject(&local_d0);
  FCbWriter::BeginObject(&local_d0);
  local_78._8_4_ = 0x1e;
  local_78._0_8_ = "ObjAttachmentInUniObjInUniObj3";
  pFVar9 = FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  local_d8[0] = 0xd;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddObjectAttachment(pFVar9,(FIoHash *)local_58);
  local_78._8_4_ = 0x1e;
  local_78._0_8_ = "ObjAttachmentInUniObjInUniObj4";
  pFVar9 = FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  local_d8[0] = 0xe;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddObjectAttachment(pFVar9,(FIoHash *)local_58);
  FCbWriter::EndObject(&local_d0);
  FCbWriter::EndArray(&local_d0);
  FCbWriter::BeginArray(&local_d0);
  FCbWriter::BeginObject(&local_d0);
  local_78._8_4_ = 3;
  local_78._0_8_ = "Int";
  FCbWriter::SetNameOrAddString(&local_d0,(TStringView<char8_t> *)local_78);
  FCbWriter::AddInteger(&local_d0,0);
  local_78._8_4_ = 4;
  local_78._0_8_ = "Bool";
  FCbWriter::SetNameOrAddString(&local_d0,(TStringView<char8_t> *)local_78);
  FCbWriter::AddBool(&local_d0,false);
  FCbWriter::EndObject(&local_d0);
  FCbWriter::BeginObject(&local_d0);
  local_78._8_4_ = 0x20;
  local_78._0_8_ = "ObjAttachmentInNonUniObjInUniObj";
  pFVar9 = FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  local_d8[0] = 0xf;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddObjectAttachment(pFVar9,(FIoHash *)local_58);
  local_78._8_4_ = 4;
  local_78._0_8_ = "Bool";
  FCbWriter::SetNameOrAddString(&local_d0,(TStringView<char8_t> *)local_78);
  FCbWriter::AddBool(&local_d0,false);
  FCbWriter::EndObject(&local_d0);
  FCbWriter::EndArray(&local_d0);
  FCbWriter::BeginObject(&local_d0);
  local_78._8_4_ = 4;
  local_78._0_8_ = "Int1";
  FCbWriter::SetNameOrAddString(&local_d0,(TStringView<char8_t> *)local_78);
  FCbWriter::AddInteger(&local_d0,1);
  local_78._8_4_ = 4;
  local_78._0_8_ = "Int2";
  FCbWriter::SetNameOrAddString(&local_d0,(TStringView<char8_t> *)local_78);
  FCbWriter::AddInteger(&local_d0,2);
  FCbWriter::EndObject(&local_d0);
  FCbWriter::BeginObject(&local_d0);
  local_78._8_4_ = 0x16;
  local_78._0_8_ = "BinAttachmentInUniObj1";
  pFVar9 = FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  local_d8[0] = 0x10;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddBinaryAttachment(pFVar9,(FIoHash *)local_58);
  local_78._8_4_ = 0x16;
  local_78._0_8_ = "BinAttachmentInUniObj2";
  pFVar9 = FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  local_d8[0] = 0x11;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddBinaryAttachment(pFVar9,(FIoHash *)local_58);
  FCbWriter::EndObject(&local_d0);
  FCbWriter::BeginObject(&local_d0);
  local_78._8_4_ = 6;
  local_78._0_8_ = "Array1";
  FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  FCbWriter::BeginArray(&local_d0);
  local_d8[0] = 0x12;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddBinaryAttachment(&local_d0,(FIoHash *)local_58);
  local_d8[0] = 0x13;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddBinaryAttachment(&local_d0,(FIoHash *)local_58);
  FCbWriter::EndArray(&local_d0);
  local_78._8_4_ = 6;
  local_78._0_8_ = "Array2";
  FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  FCbWriter::BeginArray(&local_d0);
  local_d8[0] = 0x14;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddBinaryAttachment(&local_d0,(FIoHash *)local_58);
  local_d8[0] = 0x15;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddBinaryAttachment(&local_d0,(FIoHash *)local_58);
  FCbWriter::EndArray(&local_d0);
  FCbWriter::EndObject(&local_d0);
  FCbWriter::BeginObject(&local_d0);
  local_78._8_4_ = 6;
  local_78._0_8_ = "Array1";
  FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  FCbWriter::BeginArray(&local_d0);
  FCbWriter::AddInteger(&local_d0,0);
  FCbWriter::AddBool(&local_d0,false);
  FCbWriter::EndArray(&local_d0);
  local_78._8_4_ = 6;
  local_78._0_8_ = "Array2";
  FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  FCbWriter::BeginArray(&local_d0);
  local_d8[0] = 0x16;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddObjectAttachment(&local_d0,(FIoHash *)local_58);
  FCbWriter::AddBool(&local_d0,false);
  FCbWriter::EndArray(&local_d0);
  FCbWriter::EndObject(&local_d0);
  FCbWriter::BeginObject(&local_d0);
  local_78._8_4_ = 7;
  local_78._0_8_ = "Object1";
  FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  FCbWriter::BeginObject(&local_d0);
  local_78._8_4_ = 0x1e;
  local_78._0_8_ = "ObjAttachmentInUniObjInUniObj1";
  pFVar9 = FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  local_d8[0] = 0x17;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddObjectAttachment(pFVar9,(FIoHash *)local_58);
  local_78._8_4_ = 0x1e;
  local_78._0_8_ = "ObjAttachmentInUniObjInUniObj2";
  pFVar9 = FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  local_d8[0] = 0x18;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddObjectAttachment(pFVar9,(FIoHash *)local_58);
  FCbWriter::EndObject(&local_d0);
  local_78._8_4_ = 7;
  local_78._0_8_ = "Object2";
  FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  FCbWriter::BeginObject(&local_d0);
  local_78._8_4_ = 0x1e;
  local_78._0_8_ = "ObjAttachmentInUniObjInUniObj3";
  pFVar9 = FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  local_d8[0] = 0x19;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddObjectAttachment(pFVar9,(FIoHash *)local_58);
  local_78._8_4_ = 0x1e;
  local_78._0_8_ = "ObjAttachmentInUniObjInUniObj4";
  pFVar9 = FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  local_d8[0] = 0x1a;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_1_ = pFVar10->Hash[0x10];
  local_48[0].Owner._1_1_ = pFVar10->Hash[0x11];
  local_48[0].Owner._2_1_ = pFVar10->Hash[0x12];
  local_48[0].Owner._3_1_ = pFVar10->Hash[0x13];
  FCbWriter::AddObjectAttachment(pFVar9,(FIoHash *)local_58);
  FCbWriter::EndObject(&local_d0);
  FCbWriter::EndObject(&local_d0);
  FCbWriter::BeginObject(&local_d0);
  local_78._8_4_ = 7;
  local_78._0_8_ = "Object1";
  FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  FCbWriter::BeginObject(&local_d0);
  local_78._8_4_ = 3;
  local_78._0_8_ = "Int";
  FCbWriter::SetNameOrAddString(&local_d0,(TStringView<char8_t> *)local_78);
  FCbWriter::AddInteger(&local_d0,0);
  local_78._8_4_ = 4;
  local_78._0_8_ = "Bool";
  FCbWriter::SetNameOrAddString(&local_d0,(TStringView<char8_t> *)local_78);
  FCbWriter::AddBool(&local_d0,false);
  FCbWriter::EndObject(&local_d0);
  local_78._8_4_ = 7;
  local_78._0_8_ = "Object2";
  FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  FCbWriter::BeginObject(&local_d0);
  local_78._8_4_ = 0x20;
  local_78._0_8_ = "ObjAttachmentInNonUniObjInUniObj";
  pFVar9 = FCbWriter::SetName(&local_d0,(TStringView<char8_t> *)local_78);
  local_d8[0] = 0x1b;
  pFVar10 = FBlake3::HashBuffer((FBlake3Hash *)local_78,local_d8,4);
  local_58[0] = pFVar10->Hash[0];
  local_58[1] = pFVar10->Hash[1];
  local_58[2] = pFVar10->Hash[2];
  local_58[3] = pFVar10->Hash[3];
  local_58[4] = pFVar10->Hash[4];
  local_58[5] = pFVar10->Hash[5];
  local_58[6] = pFVar10->Hash[6];
  local_58[7] = pFVar10->Hash[7];
  local_58[8] = pFVar10->Hash[8];
  local_58[9] = pFVar10->Hash[9];
  local_58[10] = pFVar10->Hash[10];
  local_58[0xb] = pFVar10->Hash[0xb];
  local_58[0xc] = pFVar10->Hash[0xc];
  local_58[0xd] = pFVar10->Hash[0xd];
  local_58[0xe] = pFVar10->Hash[0xe];
  local_58[0xf] = pFVar10->Hash[0xf];
  local_48[0].Owner._0_4_ = *(undefined4 *)(pFVar10->Hash + 0x10);
  FCbWriter::AddObjectAttachment(pFVar9,(FIoHash *)local_58);
  local_78._8_4_ = 4;
  local_78._0_8_ = "Bool";
  FCbWriter::SetNameOrAddString(&local_d0,(TStringView<char8_t> *)local_78);
  FCbWriter::AddBool(&local_d0,false);
  FCbWriter::EndObject(&local_d0);
  FCbWriter::EndObject(&local_d0);
  pFVar11 = FCbWriter::Save(&local_d0,(FCbFieldIterator *)local_58);
  aVar7 = aStack_90;
  local_a8._8_4_ = *(undefined4 *)pFVar11;
  uStack_9c = *(undefined4 *)&pFVar11->field_0x4;
  uStack_98 = *(ulong64 *)&pFVar11->field_0x8;
  pFVar12 = (FScriptContainerElement *)0x0;
  aVar5 = *(atomic<unsigned___int64> *)&pFVar11->field_0x10;
  *(undefined8 *)&pFVar11->field_0x10 = 0;
  if (aStack_90 != (atomic<unsigned___int64>)0x0) {
    LOCK();
    plVar1 = (longlong *)((longlong)aStack_90 + 0x18);
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      lVar3 = *(longlong *)aStack_90;
      aStack_90 = aVar5;
      (**(code **)(lVar3 + 0x10))(aVar7);
      *(longlong *)((longlong)aVar7 + 8) = 0;
      *(longlong *)((longlong)aVar7 + 0x10) = 0;
      LOCK();
      puVar2 = (ulonglong *)((longlong)aVar7 + 0x18);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      aVar5 = aStack_90;
      if (((uint)(uVar4 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)aVar7)(aVar7,1);
        aVar5 = aStack_90;
      }
    }
  }
  aStack_90 = aVar5;
  local_88 = *(undefined8 *)&pFVar11->field_0x18;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_48);
  FCbWriter::~FCbWriter(&local_d0);
  aVar5 = aStack_90;
  pFVar13 = pFVar12;
  if (aStack_90 != (atomic<unsigned___int64>)0x0) {
    if ((*(ulonglong *)((longlong)aStack_90 + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)aStack_90 + 8))(aStack_90);
    }
    pFVar13 = *(FScriptContainerElement **)((longlong)aVar5 + 0x10);
  }
  aVar5 = aStack_90;
  if (aStack_90 != (atomic<unsigned___int64>)0x0) {
    if ((*(ulonglong *)((longlong)aStack_90 + 0x18) >> 0x3c & 4) == 0) {
      (**(code **)(*(longlong *)aStack_90 + 8))(aStack_90);
    }
    pFVar12 = *(FScriptContainerElement **)((longlong)aVar5 + 8);
  }
  local_78._0_8_ = pFVar12;
  local_78._8_8_ = pFVar13;
  EVar8 = ValidateCompactBinaryRange((TMemoryView<void_const_> *)local_78,All);
  if (EVar8 != None) {
    pcVar6 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_78,L"%s: The two values are not equal.");
    (*pcVar6)(this,local_78,0);
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
  }
  local_58._8_8_ = local_a8 + 4;
  local_a8._4_4_ = 0;
  local_48[0].Owner = (FBufferOwner *)local_a8;
  local_78._8_8_ = local_58;
  local_78._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FCbFieldIterateAttachmentsTest::RunTest'::__l2::<lambda_2>,void,FCbFieldView>
       ::Call;
  local_58._0_8_ = this;
  TCbFieldIterator<FCbField>::IterateRangeAttachments
            ((TCbFieldIterator<FCbField> *)(local_a8 + 8),
             (TFunctionRef<void___cdecl(FCbFieldView)> *)local_78);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbFieldView::IterateAttachments",local_a8._4_4_,0x1c);
  aVar5 = aStack_90;
  if (aStack_90 != (atomic<unsigned___int64>)0x0) {
    LOCK();
    plVar1 = (longlong *)((longlong)aStack_90 + 0x18);
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)aStack_90 + 0x10))(aStack_90);
      *(longlong *)((longlong)aVar5 + 8) = 0;
      *(longlong *)((longlong)aVar5 + 0x10) = 0;
      LOCK();
      puVar2 = (ulonglong *)((longlong)aVar5 + 0x18);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar4 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)aVar5)(aVar5,1);
      }
    }
  }
  return true;
}

// GetBeautifiedTestName @ 141a430e0

FString * __thiscall
FCbFieldIterateAttachmentsTest::GetBeautifiedTestName
          (FCbFieldIterateAttachmentsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Serialization.CbField.IterateAttachments");
  return __return_storage_ptr__;
}

// operator() @ 141a74110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FCbFieldIterateAttachmentsTest::RunTest'::__l2::<lambda_2>::operator()
          (void *this,FCbFieldView *param_1)

{
  ECbFieldType EVar1;
  FAutomationTestBase *pFVar2;
  FBlake3Hash *pFVar3;
  FIoHash *pFVar4;
  ForAnyElementType FVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [2];
  FString local_90;
  FIoHash local_80;
  FIoHash local_6c;
  FIoHash local_58;
  FBlake3Hash local_44;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_b8;
  EVar1 = param_1->TypeWithFlags;
  pFVar2 = *(FAutomationTestBase **)this;
  ::FString::PrintfImpl(&local_90,L"FCbFieldView::IterateAttachments(%u)::IsAttachment");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_90.Data.ArrayNum != 0) {
    FVar5.Data = local_90.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue
            (pFVar2,(wchar_t *)FVar5.Data,(EVar1 & CustomById) == ObjectAttachment);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  pFVar2 = *(FAutomationTestBase **)this;
  local_98[0] = **(undefined4 **)((longlong)this + 8);
  pFVar3 = FBlake3::HashBuffer(&local_44,local_98,4);
  local_6c.Hash._0_8_ = *(undefined8 *)pFVar3->Hash;
  local_6c.Hash._8_8_ = *(undefined8 *)(pFVar3->Hash + 8);
  local_6c.Hash._16_4_ = *(undefined4 *)(pFVar3->Hash + 0x10);
  local_80.Hash[0x10] = '\0';
  local_80.Hash[0x11] = '\0';
  local_80.Hash[0x12] = '\0';
  local_80.Hash[0x13] = '\0';
  local_80.Hash[0] = '\0';
  local_80.Hash[1] = '\0';
  local_80.Hash[2] = '\0';
  local_80.Hash[3] = '\0';
  local_80.Hash[4] = '\0';
  local_80.Hash[5] = '\0';
  local_80.Hash[6] = '\0';
  local_80.Hash[7] = '\0';
  local_80.Hash[8] = '\0';
  local_80.Hash[9] = '\0';
  local_80.Hash[10] = '\0';
  local_80.Hash[0xb] = '\0';
  local_80.Hash[0xc] = '\0';
  local_80.Hash[0xd] = '\0';
  local_80.Hash[0xe] = '\0';
  local_80.Hash[0xf] = '\0';
  pFVar4 = FCbFieldView::AsAttachment(param_1,&local_58,&local_80);
  ::FString::PrintfImpl(&local_90,L"FCbFieldView::IterateAttachments(%u)");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_90.Data.ArrayNum != 0) {
    FVar5.Data = local_90.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual<FIoHash>(pFVar2,(wchar_t *)FVar5.Data,pFVar4,&local_6c);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
  return;
}

