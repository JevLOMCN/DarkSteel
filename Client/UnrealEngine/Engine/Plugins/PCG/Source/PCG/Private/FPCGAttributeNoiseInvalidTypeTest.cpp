// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fa5920

EAutomationTestFlags __thiscall
FPCGAttributeNoiseInvalidTypeTest::GetTestFlags(FPCGAttributeNoiseInvalidTypeTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fa5940

bool __thiscall
FPCGAttributeNoiseInvalidTypeTest::IsStressTest(FPCGAttributeNoiseInvalidTypeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fa5950

uint __thiscall
FPCGAttributeNoiseInvalidTypeTest::GetRequiredDeviceNum(FPCGAttributeNoiseInvalidTypeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fa5960

FString * __thiscall
FPCGAttributeNoiseInvalidTypeTest::GetTestSourceFileName
          (FPCGAttributeNoiseInvalidTypeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeNoiseTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fa5990

int __thiscall
FPCGAttributeNoiseInvalidTypeTest::GetTestSourceFileLine(FPCGAttributeNoiseInvalidTypeTest *this)

{
  return 0x10b;
}

// GetTests @ 149fa6030

/* WARNING: Removing unreachable block (ram,0x000149fa611d) */
/* WARNING: Removing unreachable block (ram,0x000149fa61e8) */

void __thiscall
FPCGAttributeNoiseInvalidTypeTest::GetTests
          (FPCGAttributeNoiseInvalidTypeTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeNoise.InvalidType");
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

// RunTest @ 149fa6210

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FPCGAttributeNoiseInvalidTypeTest::RunTest(FPCGAttributeNoiseInvalidTypeTest *this,FString *param_1)

{
  UPCGMetadata *this_00;
  longlong lVar1;
  code *pcVar2;
  FPCGMetadataDomainID FVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UPCGAttributeNoiseSettings *pUVar7;
  FName *pFVar8;
  UPCGBasePointData *pUVar9;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<FString> *this_02;
  FString *pFVar10;
  long64 *plVar11;
  FPCGDataPtrWrapper *this_03;
  ForAnyElementType FVar12;
  int iVar13;
  FPCGContext *local_res18;
  UClass *local_res20;
  FString local_1b8;
  FString local_1a8;
  TSharedPtr<IPCGElement,1> local_198;
  longlong local_188;
  int local_180;
  int local_17c;
  int local_178;
  long64 local_170;
  FName local_168;
  FPCGMetadataDomainID FStack_160;
  FName local_148;
  FPCGMetadataDomainID local_140;
  FString local_130;
  FName local_120;
  FPCGMetadataDomainID FStack_118;
  FTestData local_108;
  FString local_78;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_68;
  
  local_res20 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_108,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_res20);
  this_02 = (FPCGMetadataAttribute<FString> *)0x0;
  local_68._0_8_ = 0;
  local_68._40_8_ = 0;
  pUVar7 = PCGTestsCommon::GenerateSettings<UPCGAttributeNoiseSettings>(&local_108,&local_68);
  if (pUVar7 == (UPCGAttributeNoiseSettings *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Settings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeNoiseTest.cpp"
                       ,0x111,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  pFVar8 = ::FName::FName(&local_148,L"MyStr");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar7->InputSource,*pFVar8,true);
  pUVar9 = PCGTestsCommon::CreateRandomBasePointData(5,0x2a,true);
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Data.ArrayNum = 0;
  local_1b8.Data.ArrayMax = 0;
  this_00 = (UPCGMetadata *)pUVar9->_padding_;
  local_140 = PCGMetadataDomainID::Default;
  ::FName::FName(&local_120,L"MyStr");
  FVar3 = local_140;
  FStack_118.Flag = local_140.Flag;
  FStack_118._1_3_ = local_140._1_3_;
  FStack_118.CustomFlag = local_140.CustomFlag;
  FStack_118.DebugName = local_140.DebugName;
  local_168 = local_120;
  FStack_160.Flag = local_140.Flag;
  FStack_160._1_3_ = local_140._1_3_;
  FStack_160.CustomFlag = local_140.CustomFlag;
  FStack_160.DebugName = local_140.DebugName;
  local_140 = FVar3;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&FStack_160);
  FVar12.Data = (FScriptContainerElement *)this_02;
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    this_02 = FPCGMetadataDomain::CreateAttribute<FString>(this_01,local_168,&local_1b8,false,false)
    ;
    FVar12.Data = local_1b8.Data.AllocatorInstance.Data;
  }
  if ((FPCGMetadataAttribute<FString> *)FVar12.Data != (FPCGMetadataAttribute<FString> *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  (**(code **)(pUVar9->_padding_ + 0x4f8))(pUVar9,&local_188);
  iVar13 = 0;
  do {
    if (iVar13 == local_178) {
      if (local_108.InputData.TaggedData.ArrayNum == local_108.InputData.TaggedData.ArrayMax) {
        local_108.InputData.TaggedData.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x878,(ForAnyElementType *)&local_108.InputData,
                        &local_108.InputData.TaggedData.ArrayMax);
      }
      this_03 = (FPCGDataPtrWrapper *)
                (local_108.InputData.TaggedData.AllocatorInstance.Data +
                (longlong)local_108.InputData.TaggedData.ArrayNum * 0x78);
      this_03[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_03[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_03[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_03[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_03[6].WeakData.WeakPtr.ObjectIndex = 0x100;
      (this_03->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
      (this_03->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
      this_03[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_03[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_03[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_03[3].WeakData.WeakPtr.ObjectIndex = 0;
      this_03[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
      *(undefined4 *)&this_03[4].Data.field0_0x0 = 0xffffffff;
      *(undefined4 *)((longlong)&this_03[4].Data.field0_0x0 + 4) = 0;
      this_03[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_03[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      *(undefined8 *)&this_03[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
      *(undefined4 *)((longlong)&this_03[7].Data.field0_0x0 + 4) = 0xffffffff;
      local_108.InputData.TaggedData.ArrayNum = local_108.InputData.TaggedData.ArrayNum + 1;
      FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)pUVar9);
      this_03[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
           (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
      UPCGSettings::GetElement(local_108.Settings,&local_198);
      PCGTestsCommon::FTestData::InitializeTestContext(&local_108,(UPCGNode *)&local_res18);
      pFVar10 = ::FString::FString(&local_78,
                                   L"Attribute/Property \'MyStr\' is not a numerical type, we can\'t apply noise to it."
                                  );
      FAutomationTestBase::AddExpectedError((FAutomationTestBase *)this,pFVar10,Contains,1,true);
      do {
        if (local_198.Object == (IPCGElement *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
        }
        bVar4 = IPCGElement::Execute(local_198.Object,local_res18);
      } while (!bVar4);
      iVar13 = (local_res18->OutputData).TaggedData.ArrayNum;
      ::FString::FString(&local_1a8,"No output");
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_1a8.Data.ArrayNum != 0) {
        FVar12.Data = local_1a8.Data.AllocatorInstance.Data;
      }
      bVar4 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar13,0);
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      if (local_res18 != (FPCGContext *)0x0) {
        (**(code **)local_res18->_padding_)(local_res18,1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.SharedReferenceCount.ReferenceController);
      PCGTestsCommon::FTestData::~FTestData(&local_108);
      return bVar4;
    }
    if (iVar13 == iVar13 % local_17c) {
      plVar11 = (long64 *)((longlong)local_180 * (longlong)(iVar13 % local_17c) + local_188);
    }
    else {
      plVar11 = &local_170;
    }
    UPCGMetadata::InitializeOnSet
              ((UPCGMetadata *)pUVar9->_padding_,plVar11,-1,(UPCGMetadata *)0x0,-1,
               (UPCGMetadata *)0x0);
    lVar1 = *plVar11;
    if (lVar1 == -1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ItemKey != PCGInvalidEntryKey",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                         ,0x25c,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    pFVar10 = ::FString::FString(&local_130,L"Hey");
    iVar6 = FPCGMetadataAttribute<FString>::AddValue(this_02,pFVar10);
    FPCGMetadataAttributeBase::SetValueFromValueKey
              ((FPCGMetadataAttributeBase *)this_02,lVar1,iVar6,false);
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    iVar13 = iVar13 + 1;
  } while( true );
}

// GetBeautifiedTestName @ 149fa6620

FString * __thiscall
FPCGAttributeNoiseInvalidTypeTest::GetBeautifiedTestName
          (FPCGAttributeNoiseInvalidTypeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributeNoise.InvalidType");
  return __return_storage_ptr__;
}

