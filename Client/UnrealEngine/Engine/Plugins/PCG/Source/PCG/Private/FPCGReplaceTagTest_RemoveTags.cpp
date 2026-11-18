// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149faf0e0

EAutomationTestFlags __thiscall
FPCGReplaceTagTest_RemoveTags::GetTestFlags(FPCGReplaceTagTest_RemoveTags *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149faf0f0

bool __thiscall FPCGReplaceTagTest_RemoveTags::IsStressTest(FPCGReplaceTagTest_RemoveTags *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149faf100

uint __thiscall
FPCGReplaceTagTest_RemoveTags::GetRequiredDeviceNum(FPCGReplaceTagTest_RemoveTags *this)

{
  return 1;
}

// GetTestSourceFileName @ 149faf110

FString * __thiscall
FPCGReplaceTagTest_RemoveTags::GetTestSourceFileName
          (FPCGReplaceTagTest_RemoveTags *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGReplaceTagTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149faf140

int __thiscall
FPCGReplaceTagTest_RemoveTags::GetTestSourceFileLine(FPCGReplaceTagTest_RemoveTags *this)

{
  return 0x74;
}

// GetTests @ 149faf150

/* WARNING: Removing unreachable block (ram,0x000149faf23d) */
/* WARNING: Removing unreachable block (ram,0x000149faf308) */

void __thiscall
FPCGReplaceTagTest_RemoveTags::GetTests
          (FPCGReplaceTagTest_RemoveTags *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.ReplaceTag.RemoveTags");
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

// RunTest @ 149faf330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGReplaceTagTest_RemoveTags::RunTest(FPCGReplaceTagTest_RemoveTags *this,FString *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 auStackY_158 [32];
  initializer_list<FString> local_128;
  FString local_118;
  FString local_108;
  undefined1 local_f8 [40];
  undefined1 local_d0 [24];
  undefined8 uStack_b8;
  void *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ForElementType<FSetElementId> FStack_98;
  ulonglong uStack_88;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_f8[0] = true;
  local_f8._8_8_ = (FScriptContainerElement *)0x0;
  local_f8._16_4_ = 0;
  local_f8._20_4_ = 0;
  local_f8._24_8_ = (FScriptContainerElement *)0x0;
  local_f8._32_4_ = 0;
  local_f8._36_4_ = 0;
  FStack_98.InlineData[0] = '\0';
  FStack_98.InlineData[1] = '\0';
  FStack_98.InlineData[2] = '\0';
  FStack_98.InlineData[3] = '\0';
  FStack_98._padding_ = 0;
  local_d0._0_8_ = (FScriptContainerElement *)0x0;
  local_d0._16_8_ = 0;
  uStack_b8 = 0;
  local_d0._8_8_ = 0;
  uStack_a8 = ___xmm_00000000ffffffff0000008000000000;
  local_a0 = _UNK_150631d98;
  local_b0 = (void *)0x0;
  FStack_98.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_88 = 0;
  ::FString::operator=((FString *)(local_f8 + 8),L"Awesome");
  if ((FScriptContainerElement *)local_f8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._24_8_);
  }
  local_f8._24_8_ = (FScriptContainerElement *)0x0;
  local_f8._32_4_ = 0;
  local_f8._36_4_ = 0;
  local_f8[0] = true;
  ::FString::FString(&local_118,L"Fun");
  ::FString::FString(&local_108,L"Cool");
  local_128._First = &local_118;
  local_128._Last = (FString *)local_f8;
  pTVar5 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
           TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>(&local_78,&local_128);
  if ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_d0 != pTVar5) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_d0,pTVar5);
  }
  local_78.HashSize = 0;
  if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_78.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_78.Elements);
  puVar7 = local_f8;
  lVar6 = 2;
  do {
    puVar1 = (undefined8 *)(puVar7 + -0x10);
    puVar7 = puVar7 + -0x10;
    lVar6 = lVar6 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar6 != 0);
  bVar4 = PCGReplaceTagsTestBase::GenerateTestDataRunAndValidate
                    ((PCGReplaceTagsTestBase *)this,(FTestParameters *)local_f8);
  uStack_88 = uStack_88 & 0xffffffff00000000;
  if (FStack_98.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_98.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_d0,0,local_d0._8_4_);
  iVar2 = SUB84(local_d0._8_8_,4);
  local_d0._8_8_ = local_d0._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_d0,0,(int *)(local_d0 + 0xc));
  }
  uVar3 = uStack_a8._4_4_;
  local_a0 = 0xffffffff;
  uStack_a8 = (ulonglong)uStack_a8._4_4_ << 0x20;
  if (0x80 < uVar3) {
    uStack_a8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d0 + 0x10),0);
  }
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  if ((FScriptContainerElement *)local_d0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d0._0_8_);
  }
  if ((FScriptContainerElement *)local_f8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._24_8_);
  }
  if ((FScriptContainerElement *)local_f8._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._8_8_);
  }
  return bVar4;
}

// GetBeautifiedTestName @ 149faf580

FString * __thiscall
FPCGReplaceTagTest_RemoveTags::GetBeautifiedTestName
          (FPCGReplaceTagTest_RemoveTags *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.ReplaceTag.RemoveTags");
  return __return_storage_ptr__;
}

