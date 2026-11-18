// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 14886d540

EAutomationTestFlags __thiscall FIntSerializationTest::GetTestFlags(FIntSerializationTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14886d550

bool __thiscall FIntSerializationTest::IsStressTest(FIntSerializationTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14886d560

uint __thiscall FIntSerializationTest::GetRequiredDeviceNum(FIntSerializationTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14886d570

FString * __thiscall
FIntSerializationTest::GetTestSourceFileName
          (FIntSerializationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\IntSerializationTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14886d5a0

int __thiscall FIntSerializationTest::GetTestSourceFileLine(FIntSerializationTest *this)

{
  return 10;
}

// GetTests @ 14886d5f0

/* WARNING: Removing unreachable block (ram,0x00014886d6dd) */
/* WARNING: Removing unreachable block (ram,0x00014886d7a8) */

void __thiscall
FIntSerializationTest::GetTests
          (FIntSerializationTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Int Serialization");
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

// RunTest @ 14886d7d0

bool __thiscall FIntSerializationTest::RunTest(FIntSerializationTest *this,FString *param_1)

{
  code *pcVar1;
  UObject *pUVar2;
  UIntSerialization *pUVar3;
  UIntSerialization *pUVar4;
  undefined7 uVar6;
  FArchiveState *pFVar5;
  FString local_198;
  void *local_188;
  undefined8 local_180;
  FArchiveState local_178;
  undefined8 local_e8;
  void **local_e0;
  undefined8 local_d8;
  FArchiveState local_c8;
  undefined8 local_38;
  void **local_30;
  undefined8 local_28;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UIntSerialization>(pUVar2);
  pUVar3->UnsignedInt8Variable = 0xff;
  pUVar3->UnsignedInt16Variable = 0xffff;
  pUVar3->UnsignedInt32Variable = 0xffffffff;
  pUVar3->UnsignedInt64Variable = 0xffffffffffffffff;
  pUVar3->SignedInt8Variable = -0x80;
  pUVar3->SignedInt16Variable = -0x8000;
  pUVar3->SignedInt32Variable = 0x7fffffff;
  pUVar3->SignedInt64Variable = 0x7fffffffffffffff;
  local_188 = (void *)0x0;
  local_180 = 0;
  local_178._padding_ = 0;
  local_178.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_178.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_178.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_178.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_178._40_8_ = 0;
  local_178.ArSerializingDefaults = 0;
  local_178.ArPortFlags = 0;
  local_178.ArMaxSerializeSize = 0;
  local_178.ArUEVer.FileVersionUE4 = 0;
  local_178.ArUEVer.FileVersionUE5 = 0;
  local_178.ArLicenseeUEVer = 0;
  local_178.ArEngineVer.Major = 0;
  local_178.ArEngineVer.Minor = 0;
  local_178.ArEngineVer.Patch = 0;
  local_178.ArEngineVer._6_2_ = 0;
  local_178.ArEngineVer.Changelist = 0;
  local_178.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_178.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_178.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_178.SerializedProperty = (FProperty *)0x0;
  local_178.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_178.bCustomVersionsAreReset = false;
  local_178._129_7_ = 0;
  local_178.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_178);
  local_e8 = 0;
  uVar6 = (undefined7)((ulonglong)param_1 >> 8);
  local_178._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_e0 = &local_188;
  local_d8 = 0;
  FArchiveState::SetIsSaving(&local_178,true);
  (**(code **)(local_178._padding_ + 0x108))(&local_178,CONCAT71(uVar6,1));
  local_178._padding_ = (longlong)&___7FMemoryWriter__6B_;
  pFVar5 = &local_178;
  (**(code **)(pUVar3->_padding_ + 200))(pUVar3,pFVar5);
  local_c8._padding_ = 0;
  local_c8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_c8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_c8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_c8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_c8._40_8_ = 0;
  local_c8.ArSerializingDefaults = 0;
  local_c8.ArPortFlags = 0;
  local_c8.ArMaxSerializeSize = 0;
  local_c8.ArUEVer.FileVersionUE4 = 0;
  local_c8.ArUEVer.FileVersionUE5 = 0;
  local_c8.ArLicenseeUEVer = 0;
  local_c8.ArEngineVer.Major = 0;
  local_c8.ArEngineVer.Minor = 0;
  local_c8.ArEngineVer.Patch = 0;
  local_c8.ArEngineVer._6_2_ = 0;
  local_c8.ArEngineVer.Changelist = 0;
  local_c8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_c8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_c8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_c8.SerializedProperty = (FProperty *)0x0;
  local_c8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_c8.bCustomVersionsAreReset = false;
  local_c8._129_7_ = 0;
  local_c8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_c8);
  local_38 = 0;
  local_c8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_30 = &local_188;
  local_28 = 0x7fffffffffffffff;
  uVar6 = (undefined7)((ulonglong)pFVar5 >> 8);
  FArchiveState::SetIsLoading(&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,CONCAT71(uVar6,1));
  pUVar2 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UIntSerialization>(pUVar2);
  (**(code **)(pUVar4->_padding_ + 200))(pUVar4,&local_c8);
  if (pUVar3->SignedInt8Variable != pUVar4->SignedInt8Variable) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_198,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_198,0);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  if (pUVar3->SignedInt16Variable != pUVar4->SignedInt16Variable) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_198,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_198,0);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"int32 serialised and deserialised incorrectly",
             pUVar3->SignedInt32Variable,pUVar4->SignedInt32Variable);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"int64 serialised and deserialised incorrectly",
             pUVar3->SignedInt64Variable,pUVar4->SignedInt64Variable);
  if (pUVar3->UnsignedInt8Variable != pUVar4->UnsignedInt8Variable) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_198,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_198,0);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  if (pUVar3->UnsignedInt16Variable != pUVar4->UnsignedInt16Variable) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_198,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_198,0);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  if (pUVar3->UnsignedInt32Variable != pUVar4->UnsignedInt32Variable) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_198,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_198,0);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"uint64 serialised and deserialised incorrectly",
             pUVar3->UnsignedInt64Variable,pUVar4->UnsignedInt64Variable);
  FArchive::~FArchive((FArchive *)&local_c8);
  FArchive::~FArchive((FArchive *)&local_178);
  if (local_188 != (void *)0x0) {
    FMemory::Free(local_188);
  }
  return true;
}

// GetBeautifiedTestName @ 14886db70

FString * __thiscall
FIntSerializationTest::GetBeautifiedTestName
          (FIntSerializationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Int Serialization");
  return __return_storage_ptr__;
}

