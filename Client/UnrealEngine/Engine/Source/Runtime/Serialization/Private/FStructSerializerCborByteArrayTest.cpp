// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 11

// GetTestFlags @ 148b85600

EAutomationTestFlags __thiscall
FStructSerializerCborByteArrayTest::GetTestFlags(FStructSerializerCborByteArrayTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 148b85610

bool __thiscall
FStructSerializerCborByteArrayTest::IsStressTest(FStructSerializerCborByteArrayTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148b85620

uint __thiscall
FStructSerializerCborByteArrayTest::GetRequiredDeviceNum(FStructSerializerCborByteArrayTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 148b85630

FString * __thiscall
FStructSerializerCborByteArrayTest::GetTestSourceFileName
          (FStructSerializerCborByteArrayTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Serialization\\Private\\Tests\\StructSerializerTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148b85660

int __thiscall
FStructSerializerCborByteArrayTest::GetTestSourceFileLine(FStructSerializerCborByteArrayTest *this)

{
  return 0x389;
}

// GetTests @ 148b85670

/* WARNING: Removing unreachable block (ram,0x000148b857ee) */

void __thiscall
FStructSerializerCborByteArrayTest::GetTests
          (FStructSerializerCborByteArrayTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 148b85810

bool __thiscall
FStructSerializerCborByteArrayTest::RunTest
          (FStructSerializerCborByteArrayTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 148b85840

FString * __thiscall
FStructSerializerCborByteArrayTest::GetBeautifiedTestName
          (FStructSerializerCborByteArrayTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 148b88250

bool __cdecl
`FStructSerializerCborByteArrayTest::TestBody'::__l22::<lambda_1>::<lambda_invoker_cdecl>
          (FProperty *param_1,FProperty *param_2)

{
  bool bVar1;
  FName *pFVar2;
  FName FVar3;
  FName FVar4;
  FName local_res18;
  FName local_res20;
  
  pFVar2 = ::FName::FName(&local_res18,L"ByteArray");
  bVar1 = IsThisNotNull(param_1,"FField::GetFName");
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  FVar3 = FVar4;
  if (bVar1) {
    FVar3 = (FName)param_1->_padding_;
  }
  if (FVar3 != *pFVar2) {
    pFVar2 = ::FName::FName(&local_res20,L"Int8Array");
    bVar1 = IsThisNotNull(param_1,"FField::GetFName");
    if (bVar1) {
      FVar4 = (FName)param_1->_padding_;
    }
    if (FVar4 != *pFVar2) {
      return true;
    }
  }
  return false;
}

// FStructSerializerCborByteArrayTest @ 148b9cd80

FStructSerializerCborByteArrayTest * __thiscall
FStructSerializerCborByteArrayTest::FStructSerializerCborByteArrayTest
          (FStructSerializerCborByteArrayTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FStructSerializerCborByteArrayTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter][StructSerializer]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::StructSerializerCborByteArray"
                             );
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

// TestBody @ 148bae050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148baea06) */
/* WARNING: Removing unreachable block (ram,0x000148baea1a) */
/* WARNING: Removing unreachable block (ram,0x000148baea1e) */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
FStructSerializerCborByteArrayTest::TestBody
          (FStructSerializerCborByteArrayTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  UPackage *pUVar7;
  FAutomationTestFramework *pFVar8;
  undefined ***pppuVar9;
  longlong *plVar10;
  ForAnyElementType *pFVar11;
  undefined1 auStack_408 [32];
  FString local_3e8;
  void *local_3d8;
  undefined8 local_3d0;
  FStructSerializerByteArray local_3c8;
  IStructDeserializerBackend local_388;
  FCborReader local_380;
  undefined1 local_360;
  undefined8 local_358;
  void *pvStack_350;
  undefined8 local_348;
  void *local_340;
  undefined8 local_338;
  undefined4 local_330;
  undefined2 local_32c;
  IStructSerializerBackend local_328;
  FCborWriter local_320;
  undefined4 local_300;
  void *local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8;
  FArchiveState local_2d8;
  undefined8 local_248;
  void **local_240;
  undefined8 local_238;
  FArchiveState local_228;
  undefined8 local_198;
  void **local_190;
  undefined8 local_188;
  FStructSerializerState local_178;
  undefined1 local_138 [16];
  undefined8 local_128;
  UScriptStruct *pUStack_120;
  ForAnyElementType local_118;
  UScriptStruct *pUStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined **local_d8;
  UScriptStruct *pUStack_d0;
  FScriptContainerElement *local_c8;
  undefined ***pppuStack_c0;
  undefined1 local_b8 [56];
  longlong *local_80;
  undefined1 local_78 [32];
  ForAnyElementType local_58 [3];
  ForAnyElementType *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_408;
  local_3d8 = (void *)0x0;
  local_3d0 = 0;
  local_3e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8._padding_ = 0;
  local_2d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_2d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_2d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_2d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_2d8._40_8_ = 0;
  local_2d8.ArSerializingDefaults = 0;
  local_2d8.ArPortFlags = 0;
  local_2d8.ArMaxSerializeSize = 0;
  local_2d8.ArUEVer.FileVersionUE4 = 0;
  local_2d8.ArUEVer.FileVersionUE5 = 0;
  local_2d8.ArLicenseeUEVer = 0;
  local_2d8.ArEngineVer.Major = 0;
  local_2d8.ArEngineVer.Minor = 0;
  local_2d8.ArEngineVer.Patch = 0;
  local_2d8.ArEngineVer._6_2_ = 0;
  local_2d8.ArEngineVer.Changelist = 0;
  local_2d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_2d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_2d8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_2d8.SerializedProperty = (FProperty *)0x0;
  local_2d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_2d8.bCustomVersionsAreReset = false;
  local_2d8._129_7_ = 0;
  local_2d8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_2d8);
  local_248 = 0;
  local_2d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_240 = &local_3d8;
  local_238 = 0;
  FArchiveState::SetIsSaving(&local_2d8,true);
  (**(code **)(local_2d8._padding_ + 0x108))(&local_2d8,0);
  local_2d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  local_328 = (IStructSerializerBackend)&___7FCborStructSerializerBackend__6B_;
  FCborWriter::FCborWriter(&local_320,(FArchive *)&local_2d8,Platform);
  local_300 = 3;
  local_2f8 = (void *)0x0;
  local_2f0 = 0;
  local_2e8 = 0;
  FStructSerializerByteArray::FStructSerializerByteArray(&local_3c8);
  local_78._0_4_ = Serialize;
  local_78._4_4_ = Array;
  local_78._8_4_ = KeyValuePair;
  local_78._16_8_ = 0;
  local_40 = (ForAnyElementType *)0x0;
  if (Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerByteArray,(UObject *)pUVar7,
                         L"StructSerializerByteArray");
  }
  uVar3 = local_f8._0_4_;
  local_178.ValueData = &local_3c8;
  local_f8._0_4_ = local_f8._0_4_ & 0xffffff00;
  local_f8._8_8_ = 0;
  local_178._0_8_ = CONCAT44(local_f8._4_4_,uVar3) & 0xffffffffffffff00;
  local_178.KeyData = (void *)0x0;
  local_e8._0_8_ = 0;
  local_178.KeyProperty = (FProperty *)0x0;
  local_d8 = (undefined **)0x0;
  local_c8 = (FScriptContainerElement *)0x0;
  pppuStack_c0 = (undefined ***)0xffffffff;
  local_178.FieldType = (FFieldClass *)0x0;
  local_178.ElementIndex = -1;
  local_178.StateFlags = None;
  local_178.ValueProperty = (FProperty *)0x0;
  local_178.ValueType =
       (UStruct *)Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton;
  local_e8._8_8_ = local_178.ValueData;
  pUStack_d0 = Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton;
  StructSerializer::Serialize(&local_178,&local_328,(FStructSerializerPolicies *)local_78);
  if (local_78._16_8_ != 0) {
    pFVar11 = local_58;
    if (local_40 != (ForAnyElementType *)0x0) {
      pFVar11 = local_40;
    }
    (**(code **)(pFVar11->Data + 0x10))();
  }
  if ((int)local_3d0 != 0x36) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,L"Arrays of int8/uint8 must be encoded in byte string (compact)");
    (*pcVar2)(pFVar1,&local_3e8);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  local_228._padding_ = 0;
  local_228.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_228.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_228.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_228.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_228._40_8_ = 0;
  local_228.ArSerializingDefaults = 0;
  local_228.ArPortFlags = 0;
  local_228.ArMaxSerializeSize = 0;
  local_228.ArUEVer.FileVersionUE4 = 0;
  local_228.ArUEVer.FileVersionUE5 = 0;
  local_228.ArLicenseeUEVer = 0;
  local_228.ArEngineVer.Major = 0;
  local_228.ArEngineVer.Minor = 0;
  local_228.ArEngineVer.Patch = 0;
  local_228.ArEngineVer._6_2_ = 0;
  local_228.ArEngineVer.Changelist = 0;
  local_228.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_228.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_228.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_228.SerializedProperty = (FProperty *)0x0;
  local_228.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_228.bCustomVersionsAreReset = false;
  local_228._129_7_ = 0;
  local_228.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_228);
  local_198 = 0;
  local_228._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_190 = &local_3d8;
  local_188 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_228,true);
  (**(code **)(local_228._padding_ + 0x108))(&local_228,0);
  local_388 = (IStructDeserializerBackend)&___7FCborStructDeserializerBackend__6B_;
  FCborReader::FCborReader(&local_380,(FArchive *)&local_228,Platform);
  local_360 = 0x1c;
  local_358 = 0;
  pvStack_350 = (void *)0x0;
  local_348 = 0;
  local_340 = (void *)0x0;
  local_338 = 0;
  local_330 = 0;
  local_32c = 0;
  local_b8._0_4_ = 2;
  local_b8._4_4_ = KeyValuePair;
  local_b8._16_8_ = 0;
  local_80 = (longlong *)0x0;
  local_138._8_8_ = (FScriptContainerElement *)0x0;
  local_128._0_4_ = 0;
  local_128._4_4_ = 0;
  local_118.Data = (FScriptContainerElement *)0x0;
  pUStack_110 = (UScriptStruct *)0x0;
  if (Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerByteArray,(UObject *)pUVar7,
                         L"StructSerializerByteArray");
  }
  FStructDeserializer::Deserialize
            (local_138,
             (UStruct *)Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton,
             &local_388,(FStructDeserializerPolicies *)local_b8);
  if (local_138._0_4_ != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,
                       L"Value before TArray<uint8> must be the same before and after de-/serialization."
                      );
    (*pcVar2)(pFVar1,&local_3e8);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  if ((int)pUStack_120 != 2) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,
                       L"Value after TArray<uint8> must be the same before and after de-/serialization."
                      );
    (*pcVar2)(pFVar1,&local_3e8);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  if ((int)local_108 != 3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,
                       L"Value after TArray<int8> must be the same before and after de-/serialization."
                      );
    (*pcVar2)(pFVar1,&local_3e8);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_3c8.ByteArray.ArrayNum != (int)local_128) ||
     ((local_3c8.ByteArray.ArrayNum != 0 &&
      (iVar6 = memcmp(local_3c8.ByteArray.AllocatorInstance.Data,(void *)local_138._8_8_,
                      (longlong)local_3c8.ByteArray.ArrayNum), iVar6 != 0)))) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,L"Array uint8 must be the same before and after de-/serialization"
                      );
    (*pcVar2)(pFVar1,&local_3e8);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_3c8.Int8Array.ArrayNum != (int)pUStack_110) ||
     ((local_3c8.Int8Array.ArrayNum != 0 &&
      (iVar6 = memcmp(local_3c8.Int8Array.AllocatorInstance.Data,local_118.Data,
                      (longlong)local_3c8.Int8Array.ArrayNum), iVar6 != 0)))) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,L"Array int8 must be the same before and after de-/serialization")
    ;
    (*pcVar2)(pFVar1,&local_3e8);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  if ((FScriptContainerElement *)local_138._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_138._8_8_);
  }
  if (local_b8._16_8_ != 0) {
    plVar10 = (longlong *)(local_b8 + 0x20);
    if (local_80 != (longlong *)0x0) {
      plVar10 = local_80;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  local_388 = (IStructDeserializerBackend)&___7FCborStructDeserializerBackend__6B_;
  if (local_340 != (void *)0x0) {
    FMemory::Free(local_340);
  }
  if (pvStack_350 != (void *)0x0) {
    FMemory::Free(pvStack_350);
  }
  FCborReader::~FCborReader(&local_380);
  local_388 = (IStructDeserializerBackend)&___7IStructDeserializerBackend__6B_;
  FArchive::~FArchive((FArchive *)&local_228);
  if (local_3c8.Int8Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Int8Array.AllocatorInstance.Data);
  }
  if (local_3c8.ByteArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.ByteArray.AllocatorInstance.Data);
  }
  local_328 = (IStructSerializerBackend)&___7FCborStructSerializerBackend__6B_;
  if (local_2f8 != (void *)0x0) {
    FMemory::Free(local_2f8);
  }
  FCborWriter::~FCborWriter(&local_320);
  local_328 = (IStructSerializerBackend)&___7IStructSerializerBackend__6B_;
  FArchive::~FArchive((FArchive *)&local_2d8);
  if (local_3d8 != (void *)0x0) {
    FMemory::Free(local_3d8);
  }
  local_3d8 = (void *)0x0;
  local_3d0 = 0;
  local_2d8._padding_ = 0;
  local_2d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_3e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_2d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_2d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_2d8._40_8_ = 0;
  local_2d8.ArSerializingDefaults = 0;
  local_2d8.ArPortFlags = 0;
  local_2d8.ArMaxSerializeSize = 0;
  local_2d8.ArUEVer.FileVersionUE4 = 0;
  local_2d8.ArUEVer.FileVersionUE5 = 0;
  local_2d8.ArLicenseeUEVer = 0;
  local_2d8.ArEngineVer.Major = 0;
  local_2d8.ArEngineVer.Minor = 0;
  local_2d8.ArEngineVer.Patch = 0;
  local_2d8.ArEngineVer._6_2_ = 0;
  local_2d8.ArEngineVer.Changelist = 0;
  local_2d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_2d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_2d8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_2d8.SerializedProperty = (FProperty *)0x0;
  local_2d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_2d8.bCustomVersionsAreReset = false;
  local_2d8._129_7_ = 0;
  local_2d8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_2d8);
  local_248 = 0;
  local_2d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_240 = &local_3d8;
  local_238 = 0;
  FArchiveState::SetIsSaving(&local_2d8,true);
  (**(code **)(local_2d8._padding_ + 0x108))(&local_2d8,0);
  local_328 = (IStructSerializerBackend)&___7FCborStructSerializerBackend__6B_;
  local_2d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  FCborWriter::FCborWriter(&local_320,(FArchive *)&local_2d8,Platform);
  local_300 = 3;
  local_2f8 = (void *)0x0;
  local_2f0 = 0;
  local_2e8 = 0;
  FStructSerializerByteArray::FStructSerializerByteArray((FStructSerializerByteArray *)local_78);
  local_b8._0_4_ = Serialize;
  local_b8._4_4_ = Array;
  local_b8._8_4_ = KeyValuePair;
  local_b8._16_8_ = 0;
  local_80 = (longlong *)0x0;
  if (Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerByteArray,(UObject *)pUVar7,
                         L"StructSerializerByteArray");
  }
  local_178.ValueData = local_78;
  local_138._0_8_ = local_138._0_8_ & 0xffffffffffffff00;
  local_138._8_8_ = (FScriptContainerElement *)0x0;
  local_178._0_8_ = local_138._0_8_;
  local_178.KeyData = (void *)0x0;
  local_128._0_4_ = 0;
  local_128._4_4_ = 0;
  local_178.KeyProperty = (FProperty *)0x0;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_108._0_4_ = 0;
  local_108._4_4_ = 0;
  uStack_100 = 0xffffffff;
  uStack_fc = 0;
  local_178.ElementIndex = -1;
  local_178.StateFlags = None;
  local_178.FieldType = (FFieldClass *)0x0;
  local_178.ValueProperty = (FProperty *)0x0;
  local_178.ValueType =
       (UStruct *)Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton;
  pUStack_120 = local_178.ValueData;
  pUStack_110 = Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton;
  StructSerializer::Serialize(&local_178,&local_328,(FStructSerializerPolicies *)local_b8);
  if (local_b8._16_8_ != 0) {
    plVar10 = (longlong *)(local_b8 + 0x20);
    if (local_80 != (longlong *)0x0) {
      plVar10 = local_80;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  local_228._padding_ = 0;
  local_228.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_228.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_228.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_228.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_228._40_8_ = 0;
  local_228.ArSerializingDefaults = 0;
  local_228.ArPortFlags = 0;
  local_228.ArMaxSerializeSize = 0;
  local_228.ArUEVer.FileVersionUE4 = 0;
  local_228.ArUEVer.FileVersionUE5 = 0;
  local_228.ArLicenseeUEVer = 0;
  local_228.ArEngineVer.Major = 0;
  local_228.ArEngineVer.Minor = 0;
  local_228.ArEngineVer.Patch = 0;
  local_228.ArEngineVer._6_2_ = 0;
  local_228.ArEngineVer.Changelist = 0;
  local_228.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_228.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_228.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_228.SerializedProperty = (FProperty *)0x0;
  local_228.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_228.bCustomVersionsAreReset = false;
  local_228._129_7_ = 0;
  local_228.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_228);
  local_198 = 0;
  local_228._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_190 = &local_3d8;
  local_188 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_228,true);
  (**(code **)(local_228._padding_ + 0x108))(&local_228,0);
  local_388 = (IStructDeserializerBackend)&___7FCborStructDeserializerBackend__6B_;
  FCborReader::FCborReader(&local_380,(FArchive *)&local_228,Platform);
  pFVar5 = local_c8;
  pUStack_120 = pUStack_d0;
  local_128 = local_d8;
  uVar4 = local_e8._8_8_;
  local_c8 = local_118.Data;
  local_e8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<bool_(__cdecl*)(FProperty_const_*,FProperty_const_*),bool,FProperty_const_*,FProperty_const_*>
       ::Call;
  local_e8._8_8_ = local_138._8_8_;
  pppuStack_c0 = (undefined ***)0x0;
  local_f8._4_4_ = KeyValuePair;
  local_d8 = &
             ___7__TFunction_OwnedObject_P6A_NPEBVFProperty__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  pUStack_d0 = (UScriptStruct *)
               `FStructSerializerCborByteArrayTest::TestBody'::__l22::<lambda_1>::
               <lambda_invoker_cdecl>;
  local_118.Data = pFVar5;
  pUStack_110 = (UScriptStruct *)0x0;
  pppuStack_c0 = (undefined ***)0x0;
  pUStack_d0 = (UScriptStruct *)
               `FStructSerializerCborByteArrayTest::TestBody'::__l22::<lambda_1>::
               <lambda_invoker_cdecl>;
  local_d8 = &
             ___7__TFunction_OwnedObject_P6A_NPEBVFProperty__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_e8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<bool_(__cdecl*)(FProperty_const_*,FProperty_const_*),bool,FProperty_const_*,FProperty_const_*>
       ::Call;
  local_f8._4_4_ = KeyValuePair;
  pUStack_110 = (UScriptStruct *)0x0;
  local_138._8_8_ = uVar4;
  local_138._0_8_ = 0;
  local_32c = 0;
  local_330 = 0;
  local_338 = 0;
  local_340 = (void *)0x0;
  local_348 = 0;
  pvStack_350 = (void *)0x0;
  local_358 = 0;
  local_360 = 0x1c;
  local_f8._0_4_ = Warning;
  local_3c8.ByteArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3c8.ByteArray.ArrayNum = 0;
  local_3c8.ByteArray.ArrayMax = 0;
  local_3c8.Int8Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3c8.Int8Array.ArrayNum = 0;
  local_3c8.Int8Array.ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerByteArray,(UObject *)pUVar7,
                         L"StructSerializerByteArray");
  }
  FStructDeserializer::Deserialize
            (&local_3c8,
             (UStruct *)Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton,
             &local_388,(FStructDeserializerPolicies *)local_f8);
  if (local_3c8.Dummy1 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,
                       L"Per deserializer policy, value before TArray<uint8> must be the same before and after de-/serialization."
                      );
    (*pcVar2)(pFVar1,&local_3e8);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  if (local_3c8.Dummy2 != 2) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,
                       L"Per deserializer policy, value after TArray<uint8> must be the same before and after de-/serialization."
                      );
    (*pcVar2)(pFVar1,&local_3e8);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  if (local_3c8.Dummy3 != 3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,
                       L"Per deserializer policy, value after TArray<int8> must be the same before and after de-/serialization."
                      );
    (*pcVar2)(pFVar1,&local_3e8);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  if (local_3c8.ByteArray.ArrayNum != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,
                       L"Per deserializer policy, TArray<uint8> must be skipped on deserialization")
    ;
    (*pcVar2)(pFVar1,&local_3e8);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  if (local_3c8.Int8Array.ArrayNum != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,
                       L"Per deserializer policy, TArray<int8> must be skipped on deserialization");
    (*pcVar2)(pFVar1,&local_3e8);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  if (local_3c8.Int8Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Int8Array.AllocatorInstance.Data);
  }
  if (local_3c8.ByteArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.ByteArray.AllocatorInstance.Data);
  }
  if ((code *)local_e8._0_8_ != (code *)0x0) {
    pppuVar9 = &local_d8;
    if (pppuStack_c0 != (undefined ***)0x0) {
      pppuVar9 = pppuStack_c0;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  local_388 = (IStructDeserializerBackend)&___7FCborStructDeserializerBackend__6B_;
  if (local_340 != (void *)0x0) {
    FMemory::Free(local_340);
  }
  if (pvStack_350 != (void *)0x0) {
    FMemory::Free(pvStack_350);
  }
  FCborReader::~FCborReader(&local_380);
  local_388 = (IStructDeserializerBackend)&___7IStructDeserializerBackend__6B_;
  FArchive::~FArchive((FArchive *)&local_228);
  if (local_58[0].Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data);
  }
  if ((void *)CONCAT44(local_78._12_4_,local_78._8_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_78._12_4_,local_78._8_4_));
  }
  local_328 = (IStructSerializerBackend)&___7FCborStructSerializerBackend__6B_;
  if (local_2f8 != (void *)0x0) {
    FMemory::Free(local_2f8);
  }
  FCborWriter::~FCborWriter(&local_320);
  local_328 = (IStructSerializerBackend)&___7IStructSerializerBackend__6B_;
  FArchive::~FArchive((FArchive *)&local_2d8);
  if (local_3d8 != (void *)0x0) {
    FMemory::Free(local_3d8);
  }
  local_3d8 = (void *)0x0;
  local_3d0 = 0;
  local_2d8._padding_ = 0;
  local_2d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_3e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_2d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_2d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_2d8._40_8_ = 0;
  local_2d8.ArSerializingDefaults = 0;
  local_2d8.ArPortFlags = 0;
  local_2d8.ArMaxSerializeSize = 0;
  local_2d8.ArUEVer.FileVersionUE4 = 0;
  local_2d8.ArUEVer.FileVersionUE5 = 0;
  local_2d8.ArLicenseeUEVer = 0;
  local_2d8.ArEngineVer.Major = 0;
  local_2d8.ArEngineVer.Minor = 0;
  local_2d8.ArEngineVer.Patch = 0;
  local_2d8.ArEngineVer._6_2_ = 0;
  local_2d8.ArEngineVer.Changelist = 0;
  local_2d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_2d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_2d8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_2d8.SerializedProperty = (FProperty *)0x0;
  local_2d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_2d8.bCustomVersionsAreReset = false;
  local_2d8._129_7_ = 0;
  local_2d8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_2d8);
  local_248 = 0;
  local_2d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_240 = &local_3d8;
  local_238 = 0;
  FArchiveState::SetIsSaving(&local_2d8,true);
  (**(code **)(local_2d8._padding_ + 0x108))(&local_2d8,0);
  local_328 = (IStructSerializerBackend)&___7FCborStructSerializerBackend__6B_;
  local_2d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  FCborWriter::FCborWriter(&local_320,(FArchive *)&local_2d8,Platform);
  local_300 = 3;
  local_2f8 = (void *)0x0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_3c8.ByteArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3c8.ByteArray.ArrayNum = 0;
  local_3c8.ByteArray.ArrayMax = 0;
  local_3c8.Int8Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3c8.Int8Array.ArrayNum = 0;
  local_3c8.Int8Array.ArrayMax = 0;
  local_3c8.Dummy1 = 1;
  local_3c8.Dummy2 = 2;
  local_3c8.Dummy3 = 3;
  local_b8._0_4_ = Serialize;
  local_b8._4_4_ = Array;
  local_b8._8_4_ = KeyValuePair;
  local_b8._16_8_ = 0;
  local_80 = (longlong *)0x0;
  if (Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerByteArray,(UObject *)pUVar7,
                         L"StructSerializerByteArray");
  }
  uVar3 = local_f8._0_4_;
  local_178.ValueData = &local_3c8;
  local_f8._0_4_ = local_f8._0_4_ & 0xffffff00;
  local_f8._8_8_ = 0;
  local_178._0_8_ = CONCAT44(local_f8._4_4_,uVar3) & 0xffffffffffffff00;
  local_178.KeyData = (void *)0x0;
  local_e8._0_8_ = 0;
  local_178.KeyProperty = (FProperty *)0x0;
  local_d8 = (undefined **)0x0;
  local_c8 = (FScriptContainerElement *)0x0;
  pppuStack_c0 = (undefined ***)0xffffffff;
  local_178.FieldType = (FFieldClass *)0x0;
  local_178.ElementIndex = -1;
  local_178.StateFlags = None;
  local_178.ValueProperty = (FProperty *)0x0;
  local_178.ValueType =
       (UStruct *)Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton;
  local_e8._8_8_ = local_178.ValueData;
  pUStack_d0 = Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton;
  StructSerializer::Serialize(&local_178,&local_328,(FStructSerializerPolicies *)local_b8);
  if (local_b8._16_8_ != 0) {
    plVar10 = (longlong *)(local_b8 + 0x20);
    if (local_80 != (longlong *)0x0) {
      plVar10 = local_80;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if ((int)local_3d0 != 0x30) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,L"Arrays of int8/uint8 must be encoded in byte string (compact)");
    (*pcVar2)(pFVar1,&local_3e8);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  local_228._padding_ = 0;
  local_228.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_228.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_228.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_228.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_228._40_8_ = 0;
  local_228.ArSerializingDefaults = 0;
  local_228.ArPortFlags = 0;
  local_228.ArMaxSerializeSize = 0;
  local_228.ArUEVer.FileVersionUE4 = 0;
  local_228.ArUEVer.FileVersionUE5 = 0;
  local_228.ArLicenseeUEVer = 0;
  local_228.ArEngineVer.Major = 0;
  local_228.ArEngineVer.Minor = 0;
  local_228.ArEngineVer.Patch = 0;
  local_228.ArEngineVer._6_2_ = 0;
  local_228.ArEngineVer.Changelist = 0;
  local_228.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_228.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_228.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_228.SerializedProperty = (FProperty *)0x0;
  local_228.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_228.bCustomVersionsAreReset = false;
  local_228._129_7_ = 0;
  local_228.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_228);
  local_198 = 0;
  local_228._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_190 = &local_3d8;
  local_188 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_228,true);
  (**(code **)(local_228._padding_ + 0x108))(&local_228,0);
  local_388 = (IStructDeserializerBackend)&___7FCborStructDeserializerBackend__6B_;
  FCborReader::FCborReader(&local_380,(FArchive *)&local_228,Platform);
  local_360 = 0x1c;
  local_358 = 0;
  pvStack_350 = (void *)0x0;
  local_348 = 0;
  local_340 = (void *)0x0;
  local_338 = 0;
  local_330 = 0;
  local_32c = 0;
  local_78._0_4_ = 2;
  local_78._4_4_ = KeyValuePair;
  local_78._16_8_ = 0;
  local_40 = (ForAnyElementType *)0x0;
  local_138._8_8_ = (FScriptContainerElement *)0x0;
  local_128._0_4_ = 0;
  local_128._4_4_ = 0;
  local_118.Data = (FScriptContainerElement *)0x0;
  pUStack_110 = (UScriptStruct *)0x0;
  if (Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerByteArray,(UObject *)pUVar7,
                         L"StructSerializerByteArray");
  }
  FStructDeserializer::Deserialize
            (local_138,
             (UStruct *)Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton,
             &local_388,(FStructDeserializerPolicies *)local_78);
  if (local_138._0_4_ != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,
                       L"Value before TArray<uint8> must be the same before and after de-/serialization."
                      );
    (*pcVar2)(pFVar1,&local_3e8);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  if ((int)pUStack_120 != 2) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,
                       L"Value after TArray<uint8> must be the same before and after de-/serialization."
                      );
    (*pcVar2)(pFVar1,&local_3e8);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  if ((int)local_108 != 3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,
                       L"Value after TArray<int8> must be the same before and after de-/serialization."
                      );
    (*pcVar2)(pFVar1,&local_3e8);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_3c8.ByteArray.ArrayNum != (int)local_128) ||
     ((local_3c8.ByteArray.ArrayNum != 0 &&
      (iVar6 = memcmp(local_3c8.ByteArray.AllocatorInstance.Data,(void *)local_138._8_8_,
                      (longlong)local_3c8.ByteArray.ArrayNum), iVar6 != 0)))) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,L"Array uint8 must be the same before and after de-/serialization"
                      );
    (*pcVar2)(pFVar1,&local_3e8);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_3c8.Int8Array.ArrayNum != (int)pUStack_110) ||
     ((local_3c8.Int8Array.ArrayNum != 0 &&
      (iVar6 = memcmp(local_3c8.Int8Array.AllocatorInstance.Data,local_118.Data,
                      (longlong)local_3c8.Int8Array.ArrayNum), iVar6 != 0)))) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,L"Array int8 must be the same before and after de-/serialization")
    ;
    (*pcVar2)(pFVar1,&local_3e8);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  if ((FScriptContainerElement *)local_138._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_138._8_8_);
  }
  if (local_78._16_8_ != 0) {
    pFVar11 = local_58;
    if (local_40 != (ForAnyElementType *)0x0) {
      pFVar11 = local_40;
    }
    (**(code **)(pFVar11->Data + 0x10))();
  }
  local_388 = (IStructDeserializerBackend)&___7FCborStructDeserializerBackend__6B_;
  if (local_340 != (void *)0x0) {
    FMemory::Free(local_340);
  }
  if (pvStack_350 != (void *)0x0) {
    FMemory::Free(pvStack_350);
  }
  FCborReader::~FCborReader(&local_380);
  local_388 = (IStructDeserializerBackend)&___7IStructDeserializerBackend__6B_;
  FArchive::~FArchive((FArchive *)&local_228);
  if (local_3c8.Int8Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Int8Array.AllocatorInstance.Data);
  }
  if (local_3c8.ByteArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.ByteArray.AllocatorInstance.Data);
  }
  local_328 = (IStructSerializerBackend)&___7FCborStructSerializerBackend__6B_;
  if (local_2f8 != (void *)0x0) {
    FMemory::Free(local_2f8);
  }
  FCborWriter::~FCborWriter(&local_320);
  local_328 = (IStructSerializerBackend)&___7IStructSerializerBackend__6B_;
  FArchive::~FArchive((FArchive *)&local_2d8);
  if (local_3d8 != (void *)0x0) {
    FMemory::Free(local_3d8);
  }
  local_3d8 = (void *)0x0;
  local_3d0 = 0;
  local_2d8._padding_ = 0;
  local_2d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_3e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_2d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_2d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_2d8._40_8_ = 0;
  local_2d8.ArSerializingDefaults = 0;
  local_2d8.ArPortFlags = 0;
  local_2d8.ArMaxSerializeSize = 0;
  local_2d8.ArUEVer.FileVersionUE4 = 0;
  local_2d8.ArUEVer.FileVersionUE5 = 0;
  local_2d8.ArLicenseeUEVer = 0;
  local_2d8.ArEngineVer.Major = 0;
  local_2d8.ArEngineVer.Minor = 0;
  local_2d8.ArEngineVer.Patch = 0;
  local_2d8.ArEngineVer._6_2_ = 0;
  local_2d8.ArEngineVer.Changelist = 0;
  local_2d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_2d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_2d8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_2d8.SerializedProperty = (FProperty *)0x0;
  local_2d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_2d8.bCustomVersionsAreReset = false;
  local_2d8._129_7_ = 0;
  local_2d8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_2d8);
  local_248 = 0;
  local_2d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_240 = &local_3d8;
  local_238 = 0;
  FArchiveState::SetIsSaving(&local_2d8,true);
  (**(code **)(local_2d8._padding_ + 0x108))(&local_2d8,0);
  local_328 = (IStructSerializerBackend)&___7FCborStructSerializerBackend__6B_;
  local_2d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  FCborWriter::FCborWriter(&local_320,(FArchive *)&local_2d8,Platform);
  local_300 = 0;
  local_2f8 = (void *)0x0;
  local_2f0 = 0;
  local_2e8 = 0;
  FStructSerializerByteArray::FStructSerializerByteArray((FStructSerializerByteArray *)local_138);
  local_b8._0_4_ = Serialize;
  local_b8._4_4_ = Array;
  local_b8._8_4_ = KeyValuePair;
  local_b8._16_8_ = 0;
  local_80 = (longlong *)0x0;
  if (Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerByteArray,(UObject *)pUVar7,
                         L"StructSerializerByteArray");
  }
  uVar3 = local_f8._0_4_;
  local_178.ValueData = local_138;
  local_f8._0_4_ = local_f8._0_4_ & 0xffffff00;
  local_f8._8_8_ = 0;
  local_178._0_8_ = CONCAT44(local_f8._4_4_,uVar3) & 0xffffffffffffff00;
  local_178.KeyData = (void *)0x0;
  local_e8._0_8_ = 0;
  local_178.KeyProperty = (FProperty *)0x0;
  local_d8 = (undefined **)0x0;
  local_c8 = (FScriptContainerElement *)0x0;
  pppuStack_c0 = (undefined ***)0xffffffff;
  local_178.FieldType = (FFieldClass *)0x0;
  local_178.ElementIndex = -1;
  local_178.StateFlags = None;
  local_178.ValueProperty = (FProperty *)0x0;
  local_178.ValueType =
       (UStruct *)Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton;
  local_e8._8_8_ = local_178.ValueData;
  pUStack_d0 = Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton;
  StructSerializer::Serialize(&local_178,&local_328,(FStructSerializerPolicies *)local_b8);
  if (local_b8._16_8_ != 0) {
    plVar10 = (longlong *)(local_b8 + 0x20);
    if (local_80 != (longlong *)0x0) {
      plVar10 = local_80;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if ((int)local_3d0 != 0x3c) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,L"Backward compatibility: Serialized size check");
    (*pcVar2)(pFVar1,&local_3e8);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  local_228._padding_ = 0;
  local_228.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_228.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_228.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_228.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_228._40_8_ = 0;
  local_228.ArSerializingDefaults = 0;
  local_228.ArPortFlags = 0;
  local_228.ArMaxSerializeSize = 0;
  local_228.ArUEVer.FileVersionUE4 = 0;
  local_228.ArUEVer.FileVersionUE5 = 0;
  local_228.ArLicenseeUEVer = 0;
  local_228.ArEngineVer.Major = 0;
  local_228.ArEngineVer.Minor = 0;
  local_228.ArEngineVer.Patch = 0;
  local_228.ArEngineVer._6_2_ = 0;
  local_228.ArEngineVer.Changelist = 0;
  local_228.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_228.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_228.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_228.SerializedProperty = (FProperty *)0x0;
  local_228.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_228.bCustomVersionsAreReset = false;
  local_228._129_7_ = 0;
  local_228.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_228);
  local_198 = 0;
  local_228._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_190 = &local_3d8;
  local_188 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_228,true);
  (**(code **)(local_228._padding_ + 0x108))(&local_228,0);
  local_388 = (IStructDeserializerBackend)&___7FCborStructDeserializerBackend__6B_;
  FCborReader::FCborReader(&local_380,(FArchive *)&local_228,Platform);
  local_348 = 0;
  local_340 = (void *)0x0;
  local_338 = 0;
  local_330 = 0;
  local_32c = 0;
  local_78._16_8_ = 0;
  local_40 = (ForAnyElementType *)0x0;
  local_3c8.ByteArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3c8.ByteArray.ArrayNum = 0;
  local_3c8.ByteArray.ArrayMax = 0;
  local_3c8.Int8Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3c8.Int8Array.ArrayNum = 0;
  local_3c8.Int8Array.ArrayMax = 0;
  local_360 = 0x1c;
  local_358 = 0;
  pvStack_350 = (void *)0x0;
  local_78._0_4_ = 2;
  local_78._4_4_ = KeyValuePair;
  if (Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerByteArray,(UObject *)pUVar7,
                         L"StructSerializerByteArray");
  }
  FStructDeserializer::Deserialize
            (&local_3c8,
             (UStruct *)Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.OuterSingleton,
             &local_388,(FStructDeserializerPolicies *)local_78);
  if (local_3c8.Dummy1 != 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,
                       L"Backward compatibility: Integer must be the same before and after de-/serialization."
                      );
    (*pcVar2)(pFVar1,&local_3e8,0);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  if (local_3c8.Dummy2 != 2) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,
                       L"Backward compatibility: Integer must be the same before and after de-/serialization."
                      );
    (*pcVar2)(pFVar1,&local_3e8,0);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  if (local_3c8.Dummy3 != 3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,
                       L"Backward compatibility: Integer must be the same before and after de-/serialization."
                      );
    (*pcVar2)(pFVar1,&local_3e8,0);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  iVar6 = (int)local_128;
  if ((iVar6 != local_3c8.ByteArray.ArrayNum) ||
     ((iVar6 != 0 &&
      (iVar6 = memcmp((void *)local_138._8_8_,local_3c8.ByteArray.AllocatorInstance.Data,
                      (longlong)iVar6), iVar6 != 0)))) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,
                       L"Backward compatibility: TArray<uint8> must be readable as CBOR array of number."
                      );
    (*pcVar2)(pFVar1,&local_3e8,0);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  iVar6 = (int)pUStack_110;
  if ((iVar6 != local_3c8.Int8Array.ArrayNum) ||
     ((iVar6 != 0 &&
      (iVar6 = memcmp(local_118.Data,local_3c8.Int8Array.AllocatorInstance.Data,(longlong)iVar6),
      iVar6 != 0)))) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3e8,
                       L"Backward compatibility: TArray<int8> must be readable as CBOR array of number."
                      );
    (*pcVar2)(pFVar1,&local_3e8,0);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  if (local_3c8.Int8Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Int8Array.AllocatorInstance.Data);
  }
  if (local_3c8.ByteArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.ByteArray.AllocatorInstance.Data);
  }
  if (local_78._16_8_ != 0) {
    pFVar11 = local_58;
    if (local_40 != (ForAnyElementType *)0x0) {
      pFVar11 = local_40;
    }
    (**(code **)(pFVar11->Data + 0x10))();
  }
  local_388 = (IStructDeserializerBackend)&___7FCborStructDeserializerBackend__6B_;
  if (local_340 != (void *)0x0) {
    FMemory::Free(local_340);
  }
  if (pvStack_350 != (void *)0x0) {
    FMemory::Free(pvStack_350);
  }
  FCborReader::~FCborReader(&local_380);
  local_388 = (IStructDeserializerBackend)&___7IStructDeserializerBackend__6B_;
  FArchive::~FArchive((FArchive *)&local_228);
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  if ((FScriptContainerElement *)local_138._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_138._8_8_);
  }
  local_328 = (IStructSerializerBackend)&___7FCborStructSerializerBackend__6B_;
  if (local_2f8 != (void *)0x0) {
    FMemory::Free(local_2f8);
  }
  FCborWriter::~FCborWriter(&local_320);
  local_328 = (IStructSerializerBackend)&___7IStructSerializerBackend__6B_;
  FArchive::~FArchive((FArchive *)&local_2d8);
  if (local_3d8 != (void *)0x0) {
    FMemory::Free(local_3d8);
  }
  return;
}

