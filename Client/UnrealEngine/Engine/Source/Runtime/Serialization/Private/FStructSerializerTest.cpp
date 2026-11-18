// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 10

// GetTestFlags @ 148b87d20

EAutomationTestFlags __thiscall FStructSerializerTest::GetTestFlags(FStructSerializerTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 148b87d30

bool __thiscall FStructSerializerTest::IsStressTest(FStructSerializerTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148b87d40

uint __thiscall FStructSerializerTest::GetRequiredDeviceNum(FStructSerializerTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 148b87d50

FString * __thiscall
FStructSerializerTest::GetTestSourceFileName
          (FStructSerializerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Serialization\\Private\\Tests\\StructSerializerTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148b87d80

int __thiscall FStructSerializerTest::GetTestSourceFileLine(FStructSerializerTest *this)

{
  return 0x33c;
}

// GetTests @ 148b87d90

/* WARNING: Removing unreachable block (ram,0x000148b87f0e) */

void __thiscall
FStructSerializerTest::GetTests
          (FStructSerializerTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar1 = &this->PrettyNameDotNotation;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar1)
  ;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = local_18;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar5 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 148b87f30

bool __thiscall FStructSerializerTest::RunTest(FStructSerializerTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 148b87f60

FString * __thiscall
FStructSerializerTest::GetBeautifiedTestName
          (FStructSerializerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FStructSerializerTest @ 148b9f5e0

FStructSerializerTest * __thiscall
FStructSerializerTest::FStructSerializerTest(FStructSerializerTest *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EAutomationTestFlags EVar3;
  FString *pFVar4;
  FAutomationTestFramework *this_00;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7FStructSerializerTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter][StructSerializer]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::StructSerializer");
  pFVar4 = ::FString::Replace(pFVar4,&local_18,L"::",L".",IgnoreCase);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrettyNameDotNotation).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->PrettyNameDotNotation).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = this->TestFlags;
  if ((EVar3 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) == None
     ) {
    EVar3 = EVar3 | (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
    this->TestFlags = EVar3;
  }
  if ((EVar3 & (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      None) {
    this->TestFlags = EVar3 | EngineFilter;
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter][StructSerializer]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,lVar5 * 2);
  }
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_28,&local_18,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// TestBody @ 148baf930

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall FStructSerializerTest::TestBody(FStructSerializerTest *this,FString *param_1)

{
  TJsonReader<wchar_t> *pTVar1;
  TJsonReader<wchar_t> *pTVar2;
  TRawPtrProxy<TJsonReader<wchar_t>_> local_res18;
  void *local_2b8;
  undefined8 local_2b0;
  IStructDeserializerBackend local_2a8;
  undefined1 local_2a0 [32];
  undefined4 local_280;
  undefined4 uStack_27c;
  void *local_278;
  undefined8 local_270;
  undefined1 local_268;
  FArchiveState local_258;
  undefined8 local_1c8;
  void **local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8 [16];
  uchar *local_198;
  uchar *puStack_190;
  uchar *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  void *pvStack_170;
  FPackageFileVersion local_168;
  void *pvStack_160;
  undefined8 local_158;
  FCustomVersionContainer *pFStack_150;
  FCustomPropertyListNode *local_148;
  FArchiveSavePackageData *pFStack_140;
  FProperty *local_138;
  FArchiveSerializedPropertyChain *pFStack_130;
  undefined8 local_128;
  FArchiveState *pFStack_120;
  undefined8 local_118;
  void **local_110;
  undefined8 local_108;
  FArchiveState local_f8;
  undefined8 local_68;
  void **local_60;
  undefined8 local_58;
  IStructSerializerBackend local_48;
  TSharedRef<TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>,1> local_40;
  undefined4 local_30;
  
  pTVar2 = (TJsonReader<wchar_t> *)0x0;
  local_2b8 = (void *)0x0;
  local_2b0 = 0;
  local_258._padding_ = 0;
  local_258.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_258.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_258.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_258.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_258._40_8_ = 0;
  local_258.ArSerializingDefaults = 0;
  local_258.ArPortFlags = 0;
  local_258.ArMaxSerializeSize = 0;
  local_258.ArUEVer.FileVersionUE4 = 0;
  local_258.ArUEVer.FileVersionUE5 = 0;
  local_258.ArLicenseeUEVer = 0;
  local_258.ArEngineVer.Major = 0;
  local_258.ArEngineVer.Minor = 0;
  local_258.ArEngineVer.Patch = 0;
  local_258.ArEngineVer._6_2_ = 0;
  local_258.ArEngineVer.Changelist = 0;
  local_258.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_258.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_258.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_258.SerializedProperty = (FProperty *)0x0;
  local_258.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_258.bCustomVersionsAreReset = false;
  local_258._129_7_ = 0;
  local_258.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_258);
  local_1c8 = 0;
  local_258._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_1c0 = &local_2b8;
  local_1b8 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_258,true);
  (**(code **)(local_258._padding_ + 0x108))(&local_258,0);
  local_res18.Object = (TJsonReader<wchar_t> *)0x0;
  local_1a8._0_8_ = (IStructDeserializerBackend)0x0;
  local_1a8._8_8_ = (FFastPathLoadBuffer *)0x0;
  local_198 = (uchar *)0x0;
  puStack_190 = (uchar *)0x0;
  local_188 = (uchar *)0x0;
  uStack_180 = 0;
  local_178._0_4_ = 0;
  local_178._4_4_ = 0;
  pvStack_170 = (void *)0x0;
  local_168.FileVersionUE4 = 0;
  local_168.FileVersionUE5 = 0;
  pvStack_160 = (void *)0x0;
  local_158._0_2_ = 0;
  local_158._2_2_ = 0;
  local_158._4_4_ = 0;
  pFStack_150 = (FCustomVersionContainer *)0x0;
  local_148 = (FCustomPropertyListNode *)0x0;
  pFStack_140 = (FArchiveSavePackageData *)0x0;
  local_138 = (FProperty *)0x0;
  pFStack_130 = (FArchiveSerializedPropertyChain *)0x0;
  local_128._0_1_ = false;
  local_128._1_7_ = 0;
  pFStack_120 = (FArchiveState *)0x0;
  FArchiveState::FArchiveState((FArchiveState *)local_1a8);
  local_118 = 0;
  local_1a8._0_8_ = &___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_110 = &local_2b8;
  local_108 = 0;
  FArchiveState::SetIsSaving((FArchiveState *)local_1a8,true);
  (**(code **)(local_1a8._0_8_ + 0x108))(local_1a8,0);
  local_48 = (IStructSerializerBackend)&___7FJsonStructSerializerBackend__6B_;
  local_1a8._0_8_ = &___7FMemoryWriter__6B_;
  pTVar1 = ::operator_new(0x28);
  local_res18.Object = pTVar2;
  if (pTVar1 != (TJsonReader<wchar_t> *)0x0) {
    (pTVar1->ParseState).ArrayNum = 0;
    (pTVar1->ParseState).ArrayMax = 0;
    pTVar1->_padding_ = (longlong)&___7__TJsonWriter_GU__TPrettyJsonPrintPolicy_G____6B_;
    (pTVar1->ParseState).AllocatorInstance.Data = (FScriptContainerElement *)local_1a8;
    *(undefined8 *)&pTVar1->CurrentToken = 0;
    pTVar1->Stream = (FArchive *)0x0;
    local_res18.Object = pTVar1;
  }
  TSharedRef<TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>,1>::
  TSharedRef<TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>,1><TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>_>
            (&local_40,
             (TRawPtrProxy<TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>_> *)
             &local_res18);
  local_30 = 3;
  local_2a8 = (IStructDeserializerBackend)&___7FJsonStructDeserializerBackend__6B_;
  local_2a0._0_8_ = (FArchive *)0x0;
  local_2a0._8_8_ = (FScriptContainerElement *)0x0;
  pTVar1 = ::operator_new(0x70);
  if (pTVar1 != (TJsonReader<wchar_t> *)0x0) {
    (pTVar1->ParseState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->ParseState).ArrayNum = 0;
    (pTVar1->ParseState).ArrayMax = 0;
    pTVar1->_padding_ = (longlong)&___7__TJsonReader__W__6B_;
    pTVar1->Stream = (FArchive *)&local_258;
    pTVar1->CurrentToken = None;
    (pTVar1->Identifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->Identifier).Data.ArrayNum = 0;
    (pTVar1->Identifier).Data.ArrayMax = 0;
    (pTVar1->ErrorMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->ErrorMessage).Data.ArrayNum = 0;
    (pTVar1->ErrorMessage).Data.ArrayMax = 0;
    (pTVar1->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->StringValue).Data.ArrayNum = 0;
    (pTVar1->StringValue).Data.ArrayMax = 0;
    pTVar1->NumberValue = 0.0;
    pTVar1->LineNumber = 1;
    pTVar1->CharacterNumber = 0;
    pTVar1->BoolValue = false;
    pTVar1->FinishedReadingRootObject = false;
    pTVar2 = pTVar1;
  }
  local_res18.Object = pTVar2;
  TSharedRef<TJsonReader<wchar_t>,1>::TSharedRef<TJsonReader<wchar_t>,1><TJsonReader<wchar_t>_>
            ((TSharedRef<TJsonReader<wchar_t>,1> *)(local_2a0 + 0x18),&local_res18);
  StructSerializerTest::TestSerialization(&local_48,&local_2a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(uStack_27c,local_280));
  if ((FArchive *)local_2a0._0_8_ != (FArchive *)0x0) {
    FMemory::Free((void *)local_2a0._0_8_);
  }
  local_2a8 = (IStructDeserializerBackend)&___7IStructDeserializerBackend__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  local_48 = (IStructSerializerBackend)&___7IStructSerializerBackend__6B_;
  FArchive::~FArchive((FArchive *)local_1a8);
  FArchive::~FArchive((FArchive *)&local_258);
  if (local_2b8 != (void *)0x0) {
    FMemory::Free(local_2b8);
  }
  local_2b8 = (void *)0x0;
  local_2b0 = 0;
  local_f8._padding_ = 0;
  local_f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_f8._40_8_ = 0;
  local_f8.ArSerializingDefaults = 0;
  local_f8.ArPortFlags = 0;
  local_f8.ArMaxSerializeSize = 0;
  local_f8.ArUEVer.FileVersionUE4 = 0;
  local_f8.ArUEVer.FileVersionUE5 = 0;
  local_f8.ArLicenseeUEVer = 0;
  local_f8.ArEngineVer.Major = 0;
  local_f8.ArEngineVer.Minor = 0;
  local_f8.ArEngineVer.Patch = 0;
  local_f8.ArEngineVer._6_2_ = 0;
  local_f8.ArEngineVer.Changelist = 0;
  local_f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_f8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_f8.SerializedProperty = (FProperty *)0x0;
  local_f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_f8.bCustomVersionsAreReset = false;
  local_f8._129_7_ = 0;
  local_f8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_f8);
  local_68 = 0;
  local_f8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_60 = &local_2b8;
  local_58 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_f8,true);
  (**(code **)(local_f8._padding_ + 0x108))(&local_f8,0);
  local_res18.Object = (TJsonReader<wchar_t> *)0x0;
  local_258._padding_ = 0;
  local_258.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_258.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_258.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_258.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_258._40_8_ = 0;
  local_258.ArSerializingDefaults = 0;
  local_258.ArPortFlags = 0;
  local_258.ArMaxSerializeSize = 0;
  local_258.ArUEVer.FileVersionUE4 = 0;
  local_258.ArUEVer.FileVersionUE5 = 0;
  local_258.ArLicenseeUEVer = 0;
  local_258.ArEngineVer.Major = 0;
  local_258.ArEngineVer.Minor = 0;
  local_258.ArEngineVer.Patch = 0;
  local_258.ArEngineVer._6_2_ = 0;
  local_258.ArEngineVer.Changelist = 0;
  local_258.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_258.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_258.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_258.SerializedProperty = (FProperty *)0x0;
  local_258.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_258.bCustomVersionsAreReset = false;
  local_258._129_7_ = 0;
  local_258.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_258);
  local_1c8 = 0;
  local_258._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_1c0 = &local_2b8;
  local_1b8 = 0;
  FArchiveState::SetIsSaving(&local_258,true);
  (**(code **)(local_258._padding_ + 0x108))(&local_258,0);
  local_258._padding_ = (longlong)&___7FMemoryWriter__6B_;
  local_2a8 = (IStructDeserializerBackend)&___7FCborStructSerializerBackend__6B_;
  FCborWriter::FCborWriter((FCborWriter *)local_2a0,(FArchive *)&local_258,Platform);
  local_280 = 3;
  local_1a8._0_8_ = &___7FCborStructDeserializerBackend__6B_;
  local_278 = (void *)0x0;
  local_270 = 0;
  local_268 = 0;
  FCborReader::FCborReader((FCborReader *)(local_1a8 + 8),(FArchive *)&local_f8,Platform);
  INSERT(0,'\0',7,1);
  INSERT((undefined1)uStack_180,'\0',6,1);
  INSERT((undefined1)uStack_180,'\0',5,1);
  INSERT((undefined1)uStack_180,'\x01',4,1);
  INSERT((undefined1)uStack_180,'\x01',3,1);
  INSERT((undefined1)uStack_180,'\x01',2,1);
  INSERT((undefined1)uStack_180,'\0',1,1);
  INSERT((undefined1)uStack_180,'\0',0,1);
  local_178._0_4_ = 0;
  local_178._4_4_ = 0;
  pvStack_170 = (void *)0x0;
  local_168.FileVersionUE4 = 0;
  local_168.FileVersionUE5 = 0;
  pvStack_160 = (void *)0x0;
  local_158._0_2_ = 0;
  local_158._2_2_ = 0;
  local_158._4_4_ = 0;
  pFStack_150 = (FCustomVersionContainer *)((ulonglong)pFStack_150 & 0xffff000000000000);
  StructSerializerTest::TestSerialization
            ((IStructSerializerBackend *)&local_2a8,(IStructDeserializerBackend *)local_1a8);
  local_1a8._0_8_ = &___7FCborStructDeserializerBackend__6B_;
  if (pvStack_160 != (void *)0x0) {
    FMemory::Free(pvStack_160);
  }
  if (pvStack_170 != (void *)0x0) {
    FMemory::Free(pvStack_170);
  }
  FCborReader::~FCborReader((FCborReader *)(local_1a8 + 8));
  local_1a8._0_8_ = &___7IStructDeserializerBackend__6B_;
  local_2a8 = (IStructDeserializerBackend)&___7FCborStructSerializerBackend__6B_;
  if (local_278 != (void *)0x0) {
    FMemory::Free(local_278);
  }
  FCborWriter::~FCborWriter((FCborWriter *)local_2a0);
  local_2a8 = (IStructDeserializerBackend)&___7IStructSerializerBackend__6B_;
  FArchive::~FArchive((FArchive *)&local_258);
  FArchive::~FArchive((FArchive *)&local_f8);
  if (local_2b8 != (void *)0x0) {
    FMemory::Free(local_2b8);
  }
  local_2b8 = (void *)0x0;
  local_2b0 = 0;
  local_f8._padding_ = 0;
  local_f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_f8._40_8_ = 0;
  local_f8.ArSerializingDefaults = 0;
  local_f8.ArPortFlags = 0;
  local_f8.ArMaxSerializeSize = 0;
  local_f8.ArUEVer.FileVersionUE4 = 0;
  local_f8.ArUEVer.FileVersionUE5 = 0;
  local_f8.ArLicenseeUEVer = 0;
  local_f8.ArEngineVer.Major = 0;
  local_f8.ArEngineVer.Minor = 0;
  local_f8.ArEngineVer.Patch = 0;
  local_f8.ArEngineVer._6_2_ = 0;
  local_f8.ArEngineVer.Changelist = 0;
  local_f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_f8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_f8.SerializedProperty = (FProperty *)0x0;
  local_f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_f8.bCustomVersionsAreReset = false;
  local_f8._129_7_ = 0;
  local_f8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_f8);
  local_68 = 0;
  local_f8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_60 = &local_2b8;
  local_58 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_f8,true);
  (**(code **)(local_f8._padding_ + 0x108))(&local_f8,0);
  local_res18.Object = (TJsonReader<wchar_t> *)0x0;
  local_258._padding_ = 0;
  local_258.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_258.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_258.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_258.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_258._40_8_ = 0;
  local_258.ArSerializingDefaults = 0;
  local_258.ArPortFlags = 0;
  local_258.ArMaxSerializeSize = 0;
  local_258.ArUEVer.FileVersionUE4 = 0;
  local_258.ArUEVer.FileVersionUE5 = 0;
  local_258.ArLicenseeUEVer = 0;
  local_258.ArEngineVer.Major = 0;
  local_258.ArEngineVer.Minor = 0;
  local_258.ArEngineVer.Patch = 0;
  local_258.ArEngineVer._6_2_ = 0;
  local_258.ArEngineVer.Changelist = 0;
  local_258.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_258.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_258.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_258.SerializedProperty = (FProperty *)0x0;
  local_258.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_258.bCustomVersionsAreReset = false;
  local_258._129_7_ = 0;
  local_258.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_258);
  local_1c8 = 0;
  local_258._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_1c0 = &local_2b8;
  local_1b8 = 0;
  FArchiveState::SetIsSaving(&local_258,true);
  (**(code **)(local_258._padding_ + 0x108))(&local_258,0);
  local_2a8 = (IStructDeserializerBackend)&___7FCborStructSerializerBackend__6B_;
  local_258._padding_ = (longlong)&___7FMemoryWriter__6B_;
  FCborWriter::FCborWriter((FCborWriter *)local_2a0,(FArchive *)&local_258,BigEndian);
  local_280 = 7;
  local_278 = (void *)0x0;
  local_270 = 0;
  local_268 = 0;
  local_1a8._0_8_ = &___7FCborStructDeserializerBackend__6B_;
  FCborReader::FCborReader((FCborReader *)(local_1a8 + 8),(FArchive *)&local_f8,BigEndian);
  INSERT(0,'\0',7,1);
  INSERT((undefined1)uStack_180,'\0',6,1);
  INSERT((undefined1)uStack_180,'\0',5,1);
  INSERT((undefined1)uStack_180,'\x01',4,1);
  INSERT((undefined1)uStack_180,'\x01',3,1);
  INSERT((undefined1)uStack_180,'\x01',2,1);
  INSERT((undefined1)uStack_180,'\0',1,1);
  INSERT((undefined1)uStack_180,'\0',0,1);
  local_178._0_4_ = 0;
  local_178._4_4_ = 0;
  pvStack_170 = (void *)0x0;
  local_168.FileVersionUE4 = 0;
  local_168.FileVersionUE5 = 0;
  pvStack_160 = (void *)0x0;
  local_158._0_2_ = 0;
  local_158._2_2_ = 0;
  local_158._4_4_ = 0;
  pFStack_150 = (FCustomVersionContainer *)((ulonglong)pFStack_150 & 0xffff000000000000);
  StructSerializerTest::TestSerialization
            ((IStructSerializerBackend *)&local_2a8,(IStructDeserializerBackend *)local_1a8);
  local_1a8._0_8_ = &___7FCborStructDeserializerBackend__6B_;
  if (pvStack_160 != (void *)0x0) {
    FMemory::Free(pvStack_160);
  }
  if (pvStack_170 != (void *)0x0) {
    FMemory::Free(pvStack_170);
  }
  FCborReader::~FCborReader((FCborReader *)(local_1a8 + 8));
  local_1a8._0_8_ = &___7IStructDeserializerBackend__6B_;
  local_2a8 = (IStructDeserializerBackend)&___7FCborStructSerializerBackend__6B_;
  if (local_278 != (void *)0x0) {
    FMemory::Free(local_278);
  }
  FCborWriter::~FCborWriter((FCborWriter *)local_2a0);
  local_2a8 = (IStructDeserializerBackend)&___7IStructSerializerBackend__6B_;
  FArchive::~FArchive((FArchive *)&local_258);
  FArchive::~FArchive((FArchive *)&local_f8);
  if (local_2b8 != (void *)0x0) {
    FMemory::Free(local_2b8);
  }
  local_2b8 = (void *)0x0;
  local_2b0 = 0;
  local_f8._padding_ = 0;
  local_f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_f8._40_8_ = 0;
  local_f8.ArSerializingDefaults = 0;
  local_f8.ArPortFlags = 0;
  local_f8.ArMaxSerializeSize = 0;
  local_f8.ArUEVer.FileVersionUE4 = 0;
  local_f8.ArUEVer.FileVersionUE5 = 0;
  local_f8.ArLicenseeUEVer = 0;
  local_f8.ArEngineVer.Major = 0;
  local_f8.ArEngineVer.Minor = 0;
  local_f8.ArEngineVer.Patch = 0;
  local_f8.ArEngineVer._6_2_ = 0;
  local_f8.ArEngineVer.Changelist = 0;
  local_f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_f8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_f8.SerializedProperty = (FProperty *)0x0;
  local_f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_f8.bCustomVersionsAreReset = false;
  local_f8._129_7_ = 0;
  local_f8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_f8);
  local_68 = 0;
  local_f8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_60 = &local_2b8;
  local_58 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_f8,true);
  (**(code **)(local_f8._padding_ + 0x108))(&local_f8,0);
  local_res18.Object = (TJsonReader<wchar_t> *)0x0;
  local_258._padding_ = 0;
  local_258.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_258.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_258.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_258.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_258._40_8_ = 0;
  local_258.ArSerializingDefaults = 0;
  local_258.ArPortFlags = 0;
  local_258.ArMaxSerializeSize = 0;
  local_258.ArUEVer.FileVersionUE4 = 0;
  local_258.ArUEVer.FileVersionUE5 = 0;
  local_258.ArLicenseeUEVer = 0;
  local_258.ArEngineVer.Major = 0;
  local_258.ArEngineVer.Minor = 0;
  local_258.ArEngineVer.Patch = 0;
  local_258.ArEngineVer._6_2_ = 0;
  local_258.ArEngineVer.Changelist = 0;
  local_258.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_258.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_258.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_258.SerializedProperty = (FProperty *)0x0;
  local_258.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_258.bCustomVersionsAreReset = false;
  local_258._129_7_ = 0;
  local_258.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_258);
  local_1c8 = 0;
  local_258._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_1c0 = &local_2b8;
  local_1b8 = 0;
  FArchiveState::SetIsSaving(&local_258,true);
  (**(code **)(local_258._padding_ + 0x108))(&local_258,0);
  local_2a8 = (IStructDeserializerBackend)&___7FCborStructSerializerBackend__6B_;
  local_258._padding_ = (longlong)&___7FMemoryWriter__6B_;
  FCborWriter::FCborWriter((FCborWriter *)local_2a0,(FArchive *)&local_258,BigEndian);
  local_280 = 0xf;
  local_278 = (void *)0x0;
  local_270 = 0;
  local_268 = 0;
  local_1a8._0_8_ = &___7FCborStructDeserializerBackend__6B_;
  FCborReader::FCborReader((FCborReader *)(local_1a8 + 8),(FArchive *)&local_f8,BigEndian);
  INSERT(0,'\0',7,1);
  INSERT((undefined1)uStack_180,'\0',6,1);
  INSERT((undefined1)uStack_180,'\0',5,1);
  INSERT((undefined1)uStack_180,'\x01',4,1);
  INSERT((undefined1)uStack_180,'\x01',3,1);
  INSERT((undefined1)uStack_180,'\x01',2,1);
  INSERT((undefined1)uStack_180,'\0',1,1);
  INSERT((undefined1)uStack_180,'\0',0,1);
  local_178._0_4_ = 0;
  local_178._4_4_ = 0;
  pvStack_170 = (void *)0x0;
  local_168.FileVersionUE4 = 0;
  local_168.FileVersionUE5 = 0;
  pvStack_160 = (void *)0x0;
  local_158._0_2_ = 0;
  local_158._2_2_ = 0;
  local_158._4_4_ = 0;
  pFStack_150 = (FCustomVersionContainer *)((ulonglong)pFStack_150 & 0xffff000000000000);
  StructSerializerTest::TestLWCSerialization
            ((IStructSerializerBackend *)&local_2a8,(IStructDeserializerBackend *)local_1a8);
  local_1a8._0_8_ = &___7FCborStructDeserializerBackend__6B_;
  if (pvStack_160 != (void *)0x0) {
    FMemory::Free(pvStack_160);
  }
  if (pvStack_170 != (void *)0x0) {
    FMemory::Free(pvStack_170);
  }
  FCborReader::~FCborReader((FCborReader *)(local_1a8 + 8));
  local_1a8._0_8_ = &___7IStructDeserializerBackend__6B_;
  local_2a8 = (IStructDeserializerBackend)&___7FCborStructSerializerBackend__6B_;
  if (local_278 != (void *)0x0) {
    FMemory::Free(local_278);
  }
  FCborWriter::~FCborWriter((FCborWriter *)local_2a0);
  local_2a8 = (IStructDeserializerBackend)&___7IStructSerializerBackend__6B_;
  FArchive::~FArchive((FArchive *)&local_258);
  FArchive::~FArchive((FArchive *)&local_f8);
  if (local_2b8 != (void *)0x0) {
    FMemory::Free(local_2b8);
  }
  local_2b8 = (void *)0x0;
  local_2b0 = 0;
  local_f8._padding_ = 0;
  local_f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_f8._40_8_ = 0;
  local_f8.ArSerializingDefaults = 0;
  local_f8.ArPortFlags = 0;
  local_f8.ArMaxSerializeSize = 0;
  local_f8.ArUEVer.FileVersionUE4 = 0;
  local_f8.ArUEVer.FileVersionUE5 = 0;
  local_f8.ArLicenseeUEVer = 0;
  local_f8.ArEngineVer.Major = 0;
  local_f8.ArEngineVer.Minor = 0;
  local_f8.ArEngineVer.Patch = 0;
  local_f8.ArEngineVer._6_2_ = 0;
  local_f8.ArEngineVer.Changelist = 0;
  local_f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_f8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_f8.SerializedProperty = (FProperty *)0x0;
  local_f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_f8.bCustomVersionsAreReset = false;
  local_f8._129_7_ = 0;
  local_f8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_f8);
  local_68 = 0;
  local_f8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_60 = &local_2b8;
  local_58 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_f8,true);
  (**(code **)(local_f8._padding_ + 0x108))(&local_f8,0);
  local_res18.Object = (TJsonReader<wchar_t> *)0x0;
  local_258._padding_ = 0;
  local_258.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_258.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_258.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_258.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_258._40_8_ = 0;
  local_258.ArSerializingDefaults = 0;
  local_258.ArPortFlags = 0;
  local_258.ArMaxSerializeSize = 0;
  local_258.ArUEVer.FileVersionUE4 = 0;
  local_258.ArUEVer.FileVersionUE5 = 0;
  local_258.ArLicenseeUEVer = 0;
  local_258.ArEngineVer.Major = 0;
  local_258.ArEngineVer.Minor = 0;
  local_258.ArEngineVer.Patch = 0;
  local_258.ArEngineVer._6_2_ = 0;
  local_258.ArEngineVer.Changelist = 0;
  local_258.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_258.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_258.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_258.SerializedProperty = (FProperty *)0x0;
  local_258.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_258.bCustomVersionsAreReset = false;
  local_258._129_7_ = 0;
  local_258.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_258);
  local_1c8 = 0;
  local_258._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_1c0 = &local_2b8;
  local_1b8 = 0;
  FArchiveState::SetIsSaving(&local_258,true);
  (**(code **)(local_258._padding_ + 0x108))(&local_258,0);
  local_2a8 = (IStructDeserializerBackend)&___7FCborStructSerializerBackend__6B_;
  local_258._padding_ = (longlong)&___7FMemoryWriter__6B_;
  FCborWriter::FCborWriter((FCborWriter *)local_2a0,(FArchive *)&local_258,BigEndian);
  local_280 = 0xf;
  local_278 = (void *)0x0;
  local_270 = 0;
  local_268 = 0;
  local_1a8._0_8_ = &___7FCborStructDeserializerBackend__6B_;
  FCborReader::FCborReader((FCborReader *)(local_1a8 + 8),(FArchive *)&local_f8,BigEndian);
  INSERT(0,'\0',7,1);
  INSERT((undefined1)uStack_180,'\0',6,1);
  INSERT((undefined1)uStack_180,'\0',5,1);
  INSERT((undefined1)uStack_180,'\x01',4,1);
  INSERT((undefined1)uStack_180,'\x01',3,1);
  INSERT((undefined1)uStack_180,'\x01',2,1);
  INSERT((undefined1)uStack_180,'\0',1,1);
  INSERT((undefined1)uStack_180,'\0',0,1);
  local_178._0_4_ = 0;
  local_178._4_4_ = 0;
  pvStack_170 = (void *)0x0;
  local_168.FileVersionUE4 = 0;
  local_168.FileVersionUE5 = 0;
  pvStack_160 = (void *)0x0;
  local_158._0_2_ = 0;
  local_158._2_2_ = 0;
  local_158._4_4_ = 0;
  pFStack_150 = (FCustomVersionContainer *)
                CONCAT26((short)((ulonglong)pFStack_150 >> 0x30),0x10000000000);
  StructSerializerTest::TestLWCDeserialization
            ((IStructSerializerBackend *)&local_2a8,(IStructDeserializerBackend *)local_1a8);
  local_1a8._0_8_ = &___7FCborStructDeserializerBackend__6B_;
  if (pvStack_160 != (void *)0x0) {
    FMemory::Free(pvStack_160);
  }
  if (pvStack_170 != (void *)0x0) {
    FMemory::Free(pvStack_170);
  }
  FCborReader::~FCborReader((FCborReader *)(local_1a8 + 8));
  local_1a8._0_8_ = &___7IStructDeserializerBackend__6B_;
  local_2a8 = (IStructDeserializerBackend)&___7FCborStructSerializerBackend__6B_;
  if (local_278 != (void *)0x0) {
    FMemory::Free(local_278);
  }
  FCborWriter::~FCborWriter((FCborWriter *)local_2a0);
  local_2a8 = (IStructDeserializerBackend)&___7IStructSerializerBackend__6B_;
  FArchive::~FArchive((FArchive *)&local_258);
  FArchive::~FArchive((FArchive *)&local_f8);
  if (local_2b8 != (void *)0x0) {
    FMemory::Free(local_2b8);
  }
  return;
}

