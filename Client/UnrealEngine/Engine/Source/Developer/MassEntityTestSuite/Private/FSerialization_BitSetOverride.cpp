// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// FSerialization_BitSetOverride @ 1470f50d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FSerialization_BitSetOverride * __thiscall
FMassSerializationTest::FSerialization_BitSetOverride::FSerialization_BitSetOverride
          (FSerialization_BitSetOverride *this)

{
  FAITestBase::FAITestBase((FAITestBase *)this);
  *(undefined ***)this = &___7FExecutionTestBase__6B_;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,(FNullTag *)0x0);
  this->field_0x38 = 1;
  *(undefined ***)this = &___7FSerialization_BitSetOverride_FMassSerializationTest__6B_;
  return this;
}

// InstantTest @ 147181650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001471816df) */

bool __thiscall
FMassSerializationTest::FSerialization_BitSetOverride::InstantTest
          (FSerialization_BitSetOverride *this)

{
  uint uVar1;
  FName FVar2;
  bool bVar3;
  undefined1 auStackY_268 [32];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_210;
  FNameEntryId *local_200;
  FNameEntryId local_1f8 [2];
  FNameEntryId *local_1f0;
  FNameEntryId *local_1e8;
  TBitArray<FDefaultBitArrayAllocator> *local_1e0;
  FAutomationTestBase *local_1d8;
  FString local_1d0;
  FNameEntryId local_1c0;
  undefined4 uStack_1bc;
  FMemoryReader local_1b8;
  FMemoryWriter local_108;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  TBitArray<FDefaultBitArrayAllocator> local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_268;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
            ((TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)&local_38);
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  Add<FTestFragment_Float>
            ((TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)&local_38);
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  Add<FTestFragment_Int>
            ((TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)&local_38);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_210.AllocatorInstance);
  local_210.ArrayNum = 0;
  local_210.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_210.AllocatorInstance);
  local_200 = FNameEntryId::FNameEntryId(local_1f8);
  uVar1 = local_200->Value;
  local_1f0 = local_200;
  FNameEntryId::FNameEntryId(&local_1c0);
  uStack_1bc = 0;
  FVar2.Number = 0;
  FVar2.ComparisonIndex.Value = uVar1;
  local_1e8 = &local_1c0;
  local_1c0.Value = uVar1;
  FMemoryWriter::FMemoryWriter(&local_108,&local_210,false,false,FVar2);
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::Serialize
            ((TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)&local_38,(FArchive *)&local_108);
  FMemoryReader::FMemoryReader(&local_1b8,&local_210,false);
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
            ((TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)&local_58);
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  Add<FTestFragment_Large>
            ((TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)&local_58);
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  Add<FTestFragment_Array>
            ((TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)&local_58);
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::Serialize
            ((TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)&local_58,(FArchive *)&local_1b8);
  local_1d8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_1e0 = &local_38;
  bVar3 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                    (local_1e0,&local_58,false);
  ::FString::FString(&local_1d0,"The original contents of SerializedBitSet should have been erased")
  ;
  bVar3 = FAutomationTestBase::TestTrue(local_1d8,&local_1d0,bVar3);
  ::FString::~FString(&local_1d0);
  if (bVar3) {
    TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
    ~TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              ((TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                *)&local_58);
    FMemoryReader::~FMemoryReader(&local_1b8);
    FMemoryWriter::~FMemoryWriter(&local_108);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::
    ~TArray<unsigned_char,TSizedDefaultAllocator<32>_>(&local_210);
    TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
    ~TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              ((TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                *)&local_38);
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
    ~TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              ((TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                *)&local_58);
    FMemoryReader::~FMemoryReader(&local_1b8);
    FMemoryWriter::~FMemoryWriter(&local_108);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::
    ~TArray<unsigned_char,TSizedDefaultAllocator<32>_>(&local_210);
    TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
    ~TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              ((TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                *)&local_38);
  }
  return bVar3;
}

