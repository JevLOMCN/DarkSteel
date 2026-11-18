// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 146253820

EAutomationTestFlags __thiscall
FMovieSceneSparseBitSetTest::GetTestFlags(FMovieSceneSparseBitSetTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146253830

bool __thiscall FMovieSceneSparseBitSetTest::IsStressTest(FMovieSceneSparseBitSetTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146253840

uint __thiscall FMovieSceneSparseBitSetTest::GetRequiredDeviceNum(FMovieSceneSparseBitSetTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146253850

FString * __thiscall
FMovieSceneSparseBitSetTest::GetTestSourceFileName
          (FMovieSceneSparseBitSetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieSceneSparseBitSetTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146253880

int __thiscall FMovieSceneSparseBitSetTest::GetTestSourceFileLine(FMovieSceneSparseBitSetTest *this)

{
  return 0x66;
}

// GetTests @ 146253890

/* WARNING: Removing unreachable block (ram,0x00014625397d) */
/* WARNING: Removing unreachable block (ram,0x000146253a48) */

void __thiscall
FMovieSceneSparseBitSetTest::GetTests
          (FMovieSceneSparseBitSetTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.SparseBitSet");
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

// RunTest @ 146253a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMovieSceneSparseBitSetTest::RunTest(FMovieSceneSparseBitSetTest *this,FString *param_1)

{
  undefined1 auStack_338 [32];
  TDynamicSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
  local_318;
  TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
  local_308;
  TDynamicSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
  local_2f8;
  TDynamicSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
  local_2e8;
  TDynamicSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
  local_2d8;
  TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
  local_2c8;
  TDynamicSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
  local_2b8;
  TDynamicSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
  local_2a8;
  FEntry *local_298;
  ForElementType<unsigned_char> local_290;
  int local_288;
  int local_284;
  uchar local_280;
  FEntry *local_278;
  ForElementType<unsigned_char> local_270;
  int local_268;
  int local_264;
  ushort local_260;
  FEntry *local_258;
  ForElementType<unsigned_char> local_250;
  int local_248;
  undefined8 local_244;
  FEntry *local_238;
  ForElementType<unsigned_char> local_230;
  int local_228;
  int local_224;
  ulong64 local_220;
  TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
  local_218;
  TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
  local_1f8;
  TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
  local_1d8;
  TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
  local_1b8;
  TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
  local_198;
  TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
  local_170;
  TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
  local_148;
  TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>
  local_120;
  TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
  local_f8;
  TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
  local_c0;
  TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
  local_88;
  TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>
  local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_338;
  local_284 = 4;
  local_290 = (ForElementType<unsigned_char>)0x0;
  local_288 = 0;
  local_280 = '\0';
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>_>
            ((FAutomationTestBase *)this,
             (TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
              *)&local_298);
  local_270 = (ForElementType<unsigned_char>)0x0;
  local_268 = 0;
  local_264 = 4;
  local_260 = 0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>_>
            ((FAutomationTestBase *)this,
             (TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
              *)&local_278);
  local_250 = (ForElementType<unsigned_char>)0x0;
  local_248 = 0;
  local_244._0_4_ = 4;
  local_244._4_4_ = 0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>_>
            ((FAutomationTestBase *)this,
             (TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
              *)&local_258);
  local_230 = (ForElementType<unsigned_char>)0x0;
  local_228 = 0;
  local_224 = 4;
  local_220 = 0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>_>
            ((FAutomationTestBase *)this,
             (TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
              *)&local_238);
  local_218.Buckets.Storage.AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  local_218.Buckets.Storage.ArrayNum = 0;
  local_218.Buckets.Storage.ArrayMax = 4;
  local_218.BucketHash = '\0';
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>_>
            ((FAutomationTestBase *)this,&local_218);
  local_1f8.Buckets.Storage.AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  local_1f8.Buckets.Storage.ArrayNum = 0;
  local_1f8.Buckets.Storage.ArrayMax = 4;
  local_1f8.BucketHash = 0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>_>
            ((FAutomationTestBase *)this,&local_1f8);
  local_1d8.Buckets.Storage.AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  local_1d8.Buckets.Storage.ArrayNum = 0;
  local_1d8.Buckets.Storage.ArrayMax = 4;
  local_1d8.BucketHash = 0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>_>
            ((FAutomationTestBase *)this,&local_1d8);
  local_1b8.Buckets.Storage.AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  local_1b8.Buckets.Storage.ArrayNum = 0;
  local_1b8.Buckets.Storage.ArrayMax = 4;
  local_1b8.BucketHash = 0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>_>
            ((FAutomationTestBase *)this,&local_1b8);
  local_120.Buckets.Storage.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_120.Buckets.Storage.ArrayNum = 0;
  local_120.Buckets.Storage.ArrayMax = 4;
  local_120.BucketHash = '\0';
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>_>
            ((FAutomationTestBase *)this,&local_120);
  local_148.Buckets.Storage.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_148.Buckets.Storage.ArrayNum = 0;
  local_148.Buckets.Storage.ArrayMax = 4;
  local_148.BucketHash = 0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>_>
            ((FAutomationTestBase *)this,&local_148);
  local_170.Buckets.Storage.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_170.Buckets.Storage.ArrayNum = 0;
  local_170.Buckets.Storage.ArrayMax = 4;
  local_170.BucketHash = 0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>_>
            ((FAutomationTestBase *)this,&local_170);
  local_198.Buckets.Storage.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_198.Buckets.Storage.ArrayNum = 0;
  local_198.Buckets.Storage.ArrayMax = 4;
  local_198.BucketHash = 0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>_>
            ((FAutomationTestBase *)this,&local_198);
  local_50.Buckets.Storage.AllocatorInstance.SecondaryData = (ForElementType<unsigned___int64>)0x0;
  local_50.Buckets.Storage.ArrayNum = 0;
  local_50.Buckets.Storage.ArrayMax = 4;
  local_50.BucketHash = '\0';
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TFixedSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>_>
            ((FAutomationTestBase *)this,&local_50);
  local_88.Buckets.Storage.AllocatorInstance.SecondaryData = (ForElementType<unsigned___int64>)0x0;
  local_88.Buckets.Storage.ArrayNum = 0;
  local_88.Buckets.Storage.ArrayMax = 4;
  local_88.BucketHash = 0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TFixedSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>_>
            ((FAutomationTestBase *)this,&local_88);
  local_c0.Buckets.Storage.AllocatorInstance.SecondaryData = (ForElementType<unsigned___int64>)0x0;
  local_c0.Buckets.Storage.ArrayNum = 0;
  local_c0.Buckets.Storage.ArrayMax = 4;
  local_c0.BucketHash = 0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TFixedSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>_>
            ((FAutomationTestBase *)this,&local_c0);
  local_f8.Buckets.Storage.AllocatorInstance.SecondaryData = (ForElementType<unsigned___int64>)0x0;
  local_f8.Buckets.Storage.ArrayNum = 0;
  local_f8.Buckets.Storage.ArrayMax = 4;
  local_f8.BucketHash = 0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TFixedSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>_>
            ((FAutomationTestBase *)this,&local_f8);
  if (local_f8.Buckets.Storage.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_f8.Buckets.Storage.AllocatorInstance.SecondaryData);
  }
  if (local_c0.Buckets.Storage.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_c0.Buckets.Storage.AllocatorInstance.SecondaryData);
  }
  if (local_88.Buckets.Storage.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_88.Buckets.Storage.AllocatorInstance.SecondaryData);
  }
  if (local_50.Buckets.Storage.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_50.Buckets.Storage.AllocatorInstance.SecondaryData);
  }
  if (local_198.Buckets.Storage.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_198.Buckets.Storage.AllocatorInstance.SecondaryData);
  }
  if (local_170.Buckets.Storage.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_170.Buckets.Storage.AllocatorInstance.SecondaryData);
  }
  if (local_148.Buckets.Storage.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_148.Buckets.Storage.AllocatorInstance.SecondaryData);
  }
  if (local_120.Buckets.Storage.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_120.Buckets.Storage.AllocatorInstance.SecondaryData);
  }
  if (local_1b8.Buckets.Storage.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_1b8.Buckets.Storage.AllocatorInstance.SecondaryData);
  }
  if (local_1d8.Buckets.Storage.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_1d8.Buckets.Storage.AllocatorInstance.SecondaryData);
  }
  if (local_1f8.Buckets.Storage.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_1f8.Buckets.Storage.AllocatorInstance.SecondaryData);
  }
  if (local_218.Buckets.Storage.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_218.Buckets.Storage.AllocatorInstance.SecondaryData);
  }
  if (local_230 != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_230);
  }
  if (local_250 != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_250);
  }
  if (local_270 != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_270);
  }
  if (local_290 != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_290);
  }
  local_1b8.Buckets.Storage.AllocatorInstance.InlineData[0] = '\0';
  local_1b8.Buckets.Storage.AllocatorInstance.InlineData[1] = '\0';
  local_1b8.Buckets.Storage.AllocatorInstance.InlineData[2] = '\0';
  local_1b8.Buckets.Storage.AllocatorInstance.InlineData[3] = '\0';
  local_1b8.Buckets.Storage.AllocatorInstance.InlineData[4] = '\0';
  local_1b8.Buckets.Storage.AllocatorInstance.InlineData[5] = '\0';
  local_1b8.Buckets.Storage.AllocatorInstance.InlineData[6] = '\0';
  local_1b8.Buckets.Storage.AllocatorInstance.InlineData[7] = '\0';
  local_1b8.Buckets.Storage.AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TDynamicSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>_>
            ((FAutomationTestBase *)this,
             (TDynamicSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
              *)&local_1b8);
  local_1d8.Buckets.Storage.AllocatorInstance.InlineData[0] = '\0';
  local_1d8.Buckets.Storage.AllocatorInstance.InlineData[1] = '\0';
  local_1d8.Buckets.Storage.AllocatorInstance.InlineData[2] = '\0';
  local_1d8.Buckets.Storage.AllocatorInstance.InlineData[3] = '\0';
  local_1d8.Buckets.Storage.AllocatorInstance.InlineData[4] = '\0';
  local_1d8.Buckets.Storage.AllocatorInstance.InlineData[5] = '\0';
  local_1d8.Buckets.Storage.AllocatorInstance.InlineData[6] = '\0';
  local_1d8.Buckets.Storage.AllocatorInstance.InlineData[7] = '\0';
  local_1d8.Buckets.Storage.AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TDynamicSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>_>
            ((FAutomationTestBase *)this,
             (TDynamicSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
              *)&local_1d8);
  local_1f8.Buckets.Storage.AllocatorInstance.InlineData[0] = '\0';
  local_1f8.Buckets.Storage.AllocatorInstance.InlineData[1] = '\0';
  local_1f8.Buckets.Storage.AllocatorInstance.InlineData[2] = '\0';
  local_1f8.Buckets.Storage.AllocatorInstance.InlineData[3] = '\0';
  local_1f8.Buckets.Storage.AllocatorInstance.InlineData[4] = '\0';
  local_1f8.Buckets.Storage.AllocatorInstance.InlineData[5] = '\0';
  local_1f8.Buckets.Storage.AllocatorInstance.InlineData[6] = '\0';
  local_1f8.Buckets.Storage.AllocatorInstance.InlineData[7] = '\0';
  local_1f8.Buckets.Storage.AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>_>
            ((FAutomationTestBase *)this,
             (TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
              *)&local_1f8);
  local_218.Buckets.Storage.AllocatorInstance.InlineData[0] = '\0';
  local_218.Buckets.Storage.AllocatorInstance.InlineData[1] = '\0';
  local_218.Buckets.Storage.AllocatorInstance.InlineData[2] = '\0';
  local_218.Buckets.Storage.AllocatorInstance.InlineData[3] = '\0';
  local_218.Buckets.Storage.AllocatorInstance.InlineData[4] = '\0';
  local_218.Buckets.Storage.AllocatorInstance.InlineData[5] = '\0';
  local_218.Buckets.Storage.AllocatorInstance.InlineData[6] = '\0';
  local_218.Buckets.Storage.AllocatorInstance.InlineData[7] = '\0';
  local_218.Buckets.Storage.AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TDynamicSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>_>
            ((FAutomationTestBase *)this,
             (TDynamicSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>
              *)&local_218);
  local_238 = (FEntry *)0x0;
  local_230 = (ForElementType<unsigned_char>)0x0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TDynamicSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>_>
            ((FAutomationTestBase *)this,
             (TDynamicSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
              *)&local_238);
  local_258 = (FEntry *)0x0;
  local_250 = (ForElementType<unsigned_char>)0x0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TDynamicSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>_>
            ((FAutomationTestBase *)this,
             (TDynamicSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
              *)&local_258);
  local_278 = (FEntry *)0x0;
  local_270 = (ForElementType<unsigned_char>)0x0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>_>
            ((FAutomationTestBase *)this,
             (TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
              *)&local_278);
  local_298 = (FEntry *)0x0;
  local_290 = (ForElementType<unsigned_char>)0x0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TDynamicSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>_>
            ((FAutomationTestBase *)this,
             (TDynamicSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>
              *)&local_298);
  local_2a8.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.Entries.ArrayNum = 0;
  local_2a8.Entries.ArrayMax = 0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TDynamicSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>_>
            ((FAutomationTestBase *)this,&local_2a8);
  local_2b8.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.Entries.ArrayNum = 0;
  local_2b8.Entries.ArrayMax = 0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TDynamicSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>_>
            ((FAutomationTestBase *)this,&local_2b8);
  local_2c8.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.Entries.ArrayNum = 0;
  local_2c8.Entries.ArrayMax = 0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>_>
            ((FAutomationTestBase *)this,&local_2c8);
  local_2d8.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.Entries.ArrayNum = 0;
  local_2d8.Entries.ArrayMax = 0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TDynamicSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>_>
            ((FAutomationTestBase *)this,&local_2d8);
  local_2e8.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e8.Entries.ArrayNum = 0;
  local_2e8.Entries.ArrayMax = 0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TDynamicSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>_>
            ((FAutomationTestBase *)this,&local_2e8);
  local_2f8.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f8.Entries.ArrayNum = 0;
  local_2f8.Entries.ArrayMax = 0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TDynamicSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>_>
            ((FAutomationTestBase *)this,&local_2f8);
  local_308.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_308.Entries.ArrayNum = 0;
  local_308.Entries.ArrayMax = 0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>_>
            ((FAutomationTestBase *)this,&local_308);
  local_318.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_318.Entries.ArrayNum = 0;
  local_318.Entries.ArrayMax = 0;
  UE::MovieScene::Tests::
  TestBitSet<UE::MovieScene::TDynamicSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>_>
            ((FAutomationTestBase *)this,&local_318);
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>::FEntry,int>
            ((FEntry *)local_318.Entries.AllocatorInstance.Data,local_318.Entries.ArrayNum);
  if ((FEntry *)local_318.Entries.AllocatorInstance.Data != (FEntry *)0x0) {
    FMemory::Free(local_318.Entries.AllocatorInstance.Data);
  }
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>::FEntry,int>
            ((FEntry *)local_308.Entries.AllocatorInstance.Data,local_308.Entries.ArrayNum);
  if ((FEntry *)local_308.Entries.AllocatorInstance.Data != (FEntry *)0x0) {
    FMemory::Free(local_308.Entries.AllocatorInstance.Data);
  }
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>::FEntry,int>
            ((FEntry *)local_2f8.Entries.AllocatorInstance.Data,local_2f8.Entries.ArrayNum);
  if ((FEntry *)local_2f8.Entries.AllocatorInstance.Data != (FEntry *)0x0) {
    FMemory::Free(local_2f8.Entries.AllocatorInstance.Data);
  }
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned___int64,4>_>::FEntry,int>
            ((FEntry *)local_2e8.Entries.AllocatorInstance.Data,local_2e8.Entries.ArrayNum);
  if ((FEntry *)local_2e8.Entries.AllocatorInstance.Data != (FEntry *)0x0) {
    FMemory::Free(local_2e8.Entries.AllocatorInstance.Data);
  }
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>::FEntry,int>
            ((FEntry *)local_2d8.Entries.AllocatorInstance.Data,local_2d8.Entries.ArrayNum);
  if ((FEntry *)local_2d8.Entries.AllocatorInstance.Data != (FEntry *)0x0) {
    FMemory::Free(local_2d8.Entries.AllocatorInstance.Data);
  }
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>::FEntry,int>
            ((FEntry *)local_2c8.Entries.AllocatorInstance.Data,local_2c8.Entries.ArrayNum);
  if ((FEntry *)local_2c8.Entries.AllocatorInstance.Data != (FEntry *)0x0) {
    FMemory::Free(local_2c8.Entries.AllocatorInstance.Data);
  }
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>::FEntry,int>
            ((FEntry *)local_2b8.Entries.AllocatorInstance.Data,local_2b8.Entries.ArrayNum);
  if ((FEntry *)local_2b8.Entries.AllocatorInstance.Data != (FEntry *)0x0) {
    FMemory::Free(local_2b8.Entries.AllocatorInstance.Data);
  }
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_int,4>_>::FEntry,int>
            ((FEntry *)local_2a8.Entries.AllocatorInstance.Data,local_2a8.Entries.ArrayNum);
  if ((FEntry *)local_2a8.Entries.AllocatorInstance.Data != (FEntry *)0x0) {
    FMemory::Free(local_2a8.Entries.AllocatorInstance.Data);
  }
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>::FEntry,int>
            (local_298,local_290._0_4_);
  if (local_298 != (FEntry *)0x0) {
    FMemory::Free(local_298);
  }
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>::FEntry,int>
            (local_278,local_270._0_4_);
  if (local_278 != (FEntry *)0x0) {
    FMemory::Free(local_278);
  }
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>::FEntry,int>
            (local_258,local_250._0_4_);
  if (local_258 != (FEntry *)0x0) {
    FMemory::Free(local_258);
  }
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,4>_>::FEntry,int>
            (local_238,local_230._0_4_);
  if (local_238 != (FEntry *)0x0) {
    FMemory::Free(local_238);
  }
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned___int64,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>::FEntry,int>
            ((FEntry *)local_218.Buckets.Storage.AllocatorInstance.InlineData,
             local_218.Buckets.Storage.AllocatorInstance.SecondaryData._0_4_);
  if (local_218.Buckets.Storage.AllocatorInstance.InlineData != (uchar  [8])0x0) {
    FMemory::Free((void *)local_218.Buckets.Storage.AllocatorInstance.InlineData);
  }
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>::FEntry,int>
            ((FEntry *)local_1f8.Buckets.Storage.AllocatorInstance.InlineData,
             local_1f8.Buckets.Storage.AllocatorInstance.SecondaryData._0_4_);
  if (local_1f8.Buckets.Storage.AllocatorInstance.InlineData != (uchar  [8])0x0) {
    FMemory::Free((void *)local_1f8.Buckets.Storage.AllocatorInstance.InlineData);
  }
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_short,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>::FEntry,int>
            ((FEntry *)local_1d8.Buckets.Storage.AllocatorInstance.InlineData,
             local_1d8.Buckets.Storage.AllocatorInstance.SecondaryData._0_4_);
  if (local_1d8.Buckets.Storage.AllocatorInstance.InlineData != (uchar  [8])0x0) {
    FMemory::Free((void *)local_1d8.Buckets.Storage.AllocatorInstance.InlineData);
  }
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_char,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_char,4>_>::FEntry,int>
            ((FEntry *)local_1b8.Buckets.Storage.AllocatorInstance.InlineData,
             local_1b8.Buckets.Storage.AllocatorInstance.SecondaryData._0_4_);
  if (local_1b8.Buckets.Storage.AllocatorInstance.InlineData != (uchar  [8])0x0) {
    FMemory::Free((void *)local_1b8.Buckets.Storage.AllocatorInstance.InlineData);
  }
  return true;
}

// GetBeautifiedTestName @ 146254140

FString * __thiscall
FMovieSceneSparseBitSetTest::GetBeautifiedTestName
          (FMovieSceneSparseBitSetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.SparseBitSet");
  return __return_storage_ptr__;
}

