// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fac000

EAutomationTestFlags __thiscall FPCGReplaceTagTest_NToN::GetTestFlags(FPCGReplaceTagTest_NToN *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fac010

bool __thiscall FPCGReplaceTagTest_NToN::IsStressTest(FPCGReplaceTagTest_NToN *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fac200

uint __thiscall FPCGReplaceTagTest_NToN::GetRequiredDeviceNum(FPCGReplaceTagTest_NToN *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fac210

FString * __thiscall
FPCGReplaceTagTest_NToN::GetTestSourceFileName
          (FPCGReplaceTagTest_NToN *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGReplaceTagTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fad660

int __thiscall FPCGReplaceTagTest_NToN::GetTestSourceFileLine(FPCGReplaceTagTest_NToN *this)

{
  return 0x56;
}

// GetTests @ 149fad6a0

/* WARNING: Removing unreachable block (ram,0x000149fad78d) */
/* WARNING: Removing unreachable block (ram,0x000149fad858) */

void __thiscall
FPCGReplaceTagTest_NToN::GetTests
          (FPCGReplaceTagTest_NToN *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.ReplaceTag.NToN");
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

// RunTest @ 149fad880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FPCGReplaceTagTest_NToN::RunTest(FPCGReplaceTagTest_NToN *this,FString *param_1)

{
  ForElementType<FSetElementId> FVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar5;
  longlong lVar6;
  undefined1 auStackY_168 [32];
  initializer_list<FString> local_138;
  undefined1 local_128 [40];
  undefined1 local_100 [24];
  undefined8 uStack_e8;
  void *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ForElementType<FSetElementId> FStack_c8;
  ulonglong uStack_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_128[0] = true;
  local_128._8_8_ = (FScriptContainerElement *)0x0;
  local_128._16_4_ = 0;
  local_128._20_4_ = 0;
  local_128._24_8_ = (FScriptContainerElement *)0x0;
  local_128._32_4_ = 0;
  local_128._36_4_ = 0;
  FStack_c8.InlineData[0] = '\0';
  FStack_c8.InlineData[1] = '\0';
  FStack_c8.InlineData[2] = '\0';
  FStack_c8.InlineData[3] = '\0';
  FStack_c8._padding_ = 0;
  local_100._0_8_ = (FScriptContainerElement *)0x0;
  local_100._16_8_ = 0;
  uStack_e8 = 0;
  local_100._8_8_ = 0;
  uStack_d8 = ___xmm_00000000ffffffff0000008000000000;
  local_d0 = _UNK_150631d98;
  local_e0 = (void *)0x0;
  FStack_c8.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_b8 = 0;
  ::FString::operator=((FString *)(local_128 + 8),L"Awesome, Fun, Cool");
  ::FString::operator=((FString *)(local_128 + 0x18),L"Neat, Great, Amazing");
  local_128[0] = true;
  ::FString::FString(&local_a8,L"Neat");
  ::FString::FString(&local_98,L"Great");
  ::FString::FString(&local_88,L"Amazing");
  local_138._First = &local_a8;
  local_138._Last = (FString *)&local_78;
  pTVar5 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
           TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>(&local_78,&local_138);
  if ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_100 != pTVar5) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_100,pTVar5);
  }
  local_78.HashSize = 0;
  if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_78.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_78.Elements);
  pTVar5 = &local_78;
  lVar6 = 3;
  do {
    FVar1 = pTVar5[-1].Hash.SecondaryData;
    pTVar5 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
             &pTVar5[-1].Hash.SecondaryData;
    lVar6 = lVar6 + -1;
    if (FVar1 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar1);
    }
  } while (lVar6 != 0);
  bVar4 = PCGReplaceTagsTestBase::GenerateTestDataRunAndValidate
                    ((PCGReplaceTagsTestBase *)this,(FTestParameters *)local_128);
  uStack_b8 = uStack_b8 & 0xffffffff00000000;
  if (FStack_c8.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_c8.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_100,0,local_100._8_4_);
  iVar2 = SUB84(local_100._8_8_,4);
  local_100._8_8_ = local_100._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_100,0,(int *)(local_100 + 0xc));
  }
  uVar3 = uStack_d8._4_4_;
  local_d0 = 0xffffffff;
  uStack_d8 = (ulonglong)uStack_d8._4_4_ << 0x20;
  if (0x80 < uVar3) {
    uStack_d8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_100 + 0x10),0);
  }
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  if ((FScriptContainerElement *)local_100._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_100._0_8_);
  }
  if ((FScriptContainerElement *)local_128._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._24_8_);
  }
  if ((FScriptContainerElement *)local_128._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._8_8_);
  }
  return bVar4;
}

// GetBeautifiedTestName @ 149fadae0

FString * __thiscall
FPCGReplaceTagTest_NToN::GetBeautifiedTestName
          (FPCGReplaceTagTest_NToN *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.ReplaceTag.NToN");
  return __return_storage_ptr__;
}

