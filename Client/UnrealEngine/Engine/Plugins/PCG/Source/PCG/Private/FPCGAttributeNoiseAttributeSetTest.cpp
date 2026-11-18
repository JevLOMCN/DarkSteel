// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fa9120

EAutomationTestFlags __thiscall
FPCGAttributeNoiseAttributeSetTest::GetTestFlags(FPCGAttributeNoiseAttributeSetTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fa9130

bool __thiscall
FPCGAttributeNoiseAttributeSetTest::IsStressTest(FPCGAttributeNoiseAttributeSetTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fa9140

uint __thiscall
FPCGAttributeNoiseAttributeSetTest::GetRequiredDeviceNum(FPCGAttributeNoiseAttributeSetTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fa9150

FString * __thiscall
FPCGAttributeNoiseAttributeSetTest::GetTestSourceFileName
          (FPCGAttributeNoiseAttributeSetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeNoiseTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fa9180

int __thiscall
FPCGAttributeNoiseAttributeSetTest::GetTestSourceFileLine(FPCGAttributeNoiseAttributeSetTest *this)

{
  return 0x12f;
}

// GetTests @ 149fa9190

/* WARNING: Removing unreachable block (ram,0x000149fa927d) */
/* WARNING: Removing unreachable block (ram,0x000149fa9348) */

void __thiscall
FPCGAttributeNoiseAttributeSetTest::GetTests
          (FPCGAttributeNoiseAttributeSetTest *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeNoise.AttributeSet");
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

// RunTest @ 149fa9370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FPCGAttributeNoiseAttributeSetTest::RunTest
          (FPCGAttributeNoiseAttributeSetTest *this,FString *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  UPCGAttributeNoiseSettings *pUVar10;
  UObject *pUVar11;
  UPCGParamData *pUVar12;
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<float> *this_01;
  long64 lVar13;
  UClass *pUVar14;
  FPCGMetadataAttribute<float> *pFVar15;
  ForAnyElementType FVar16;
  FPCGDataPtrWrapper *this_02;
  float *pfVar17;
  uint uVar18;
  ulonglong uVar19;
  float fVar20;
  float local_res18 [4];
  float local_228 [2];
  undefined1 local_220 [40];
  FName local_1f8;
  FName local_1e8;
  UPCGParamData *local_1e0;
  FName local_1d8;
  UClass *local_1d0;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  TSharedPtr<IPCGElement,1> local_188;
  FString local_178;
  FString local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  FPCGAttributeIdentifier local_138;
  FTestData local_118;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_88;
  
  local_1d0 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1d0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1d0);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_118,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_1d0);
  pFVar15 = (FPCGMetadataAttribute<float> *)0x0;
  local_88._0_8_ = 0;
  local_88._40_8_ = 0;
  pUVar10 = PCGTestsCommon::GenerateSettings<UPCGAttributeNoiseSettings>(&local_118,&local_88);
  if ((pUVar10 == (UPCGAttributeNoiseSettings *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeNoiseTest.cpp"
                         ,0x135,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  ::FName::FName(&local_1e8,L"Attr");
  ::FName::FName(&local_1d8,L"OutAttr");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar10->InputSource,local_1e8,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar10->OutputTarget,local_1d8,true);
  pUVar11 = GetTransientPackageAsObject();
  pUVar12 = NewObject<UPCGParamData>(pUVar11);
  local_220._24_4_ = local_1e8.ComparisonIndex.Value;
  local_220._28_4_ = local_1e8.Number;
  local_220[0x20] = PCGMetadataDomainID::Default.Flag;
  local_220._33_3_ = PCGMetadataDomainID::Default._1_3_;
  local_220._36_4_ = PCGMetadataDomainID::Default.CustomFlag;
  local_1f8 = PCGMetadataDomainID::Default.DebugName;
  local_res18[0] = 0.0;
  local_1e0 = pUVar12;
  this_00 = UPCGMetadata::FindOrCreateMetadataDomain
                      ((UPCGMetadata *)pUVar12->_padding_,(FPCGMetadataDomainID *)(local_220 + 0x20)
                      );
  this_01 = pFVar15;
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    this_01 = FPCGMetadataDomain::CreateAttribute<float>
                        (this_00,(FName)local_220._24_8_,local_res18,true,false);
  }
  fVar5 = __real_3e4ccccd;
  pTVar1 = &this_01->Values;
  do {
    local_228[0] = (float)(int)pFVar15 * fVar5;
    lVar13 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar12->_padding_,-1);
    if ((lVar13 == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemKey != PCGInvalidEntryKey",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                           ,0x24b,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    AcquireSRWLockExclusive((PSRWLOCK)&this_01->ValueLock);
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_228) &&
        ((FScriptContainerElement *)local_228 < pFVar3 + (longlong)(this_01->Values).ArrayMax * 4))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    iVar9 = (this_01->Values).ArrayNum;
    if (iVar9 == (this_01->Values).ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar1->AllocatorInstance,&(this_01->Values).ArrayMax);
    }
    (this_01->Values).ArrayNum = iVar9 + 1;
    *(float *)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_228[0];
    iVar2 = this_01->ValueKeyOffset;
    ReleaseSRWLockExclusive((PSRWLOCK)&this_01->ValueLock);
    FPCGMetadataAttributeBase::SetValueFromValueKey
              ((FPCGMetadataAttributeBase *)this_01,lVar13,iVar2 + iVar9,false);
    pUVar12 = local_1e0;
    uVar18 = (int)pFVar15 + 1;
    pFVar15 = (FPCGMetadataAttribute<float> *)(ulonglong)uVar18;
  } while ((int)uVar18 < 5);
  uVar19 = 0;
  if (local_118.InputData.TaggedData.ArrayNum == local_118.InputData.TaggedData.ArrayMax) {
    local_118.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_118.InputData,
                    &local_118.InputData.TaggedData.ArrayMax);
  }
  this_02 = (FPCGDataPtrWrapper *)
            (local_118.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_118.InputData.TaggedData.ArrayNum * 0x78);
  this_02[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_02[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_02[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_02[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_02[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this_02->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_02->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this_02[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_02[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_02[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_02[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_02[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_02[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_02[4].Data.field0_0x0 + 4) = 0;
  this_02[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_02[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_02[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_02[7].Data.field0_0x0 + 4) = 0xffffffff;
  local_118.InputData.TaggedData.ArrayNum = local_118.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)pUVar12);
  this_02[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_118.Settings,&local_188);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_118,(UPCGNode *)local_220);
  do {
    if ((local_188.Object == (IPCGElement *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    bVar7 = IPCGElement::Execute(local_188.Object,(FPCGContext *)local_220._0_8_);
  } while (!bVar7);
  iVar9 = (((FPCGDataCollection *)(local_220._0_8_ + 0x38))->TaggedData).ArrayNum;
  ::FString::FString(&local_1c8,"1 output");
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_1c8.Data.ArrayNum != 0) {
    FVar16.Data = local_1c8.Data.AllocatorInstance.Data;
  }
  bVar7 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,iVar9,1)
  ;
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  uVar6 = local_220._0_8_;
  if (bVar7) {
    if (((((FPCGDataCollection *)(local_220._0_8_ + 0x38))->TaggedData).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    local_220._8_8_ =
         *(undefined8 *)(((FPCGDataCollection *)(uVar6 + 0x38))->TaggedData).AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fa97f3:
      if ((UObject *)local_220._8_8_ == (UObject *)0x0) goto LAB_149fa9813;
      pUVar14 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)(local_220 + 8),pUVar14);
      pUVar11 = (UObject *)local_220._8_8_;
      if (!bVar7) goto LAB_149fa9813;
    }
    else {
      if ((UObject *)local_220._8_8_ != (UObject *)0x0) {
        UE::GC::MarkAsReachable((UObject *)local_220._8_8_);
        goto LAB_149fa97f3;
      }
LAB_149fa9813:
      pUVar11 = (UObject *)0x0;
    }
    ::FString::FString(&local_1b8,"Output is param");
    if (pUVar11 == (UObject *)0x0) {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_178,L"Expected \'%s\' to be not null.");
      (*pcVar4)(this,&local_178,0);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    if (!bVar7) {
      local_220._24_4_ = local_1d8.ComparisonIndex.Value;
      local_220._28_4_ = local_1d8.Number;
      local_220[0x20] = PCGMetadataDomainID::Default.Flag;
      local_220._33_3_ = PCGMetadataDomainID::Default._1_3_;
      local_220._36_4_ = PCGMetadataDomainID::Default.CustomFlag;
      local_1f8 = PCGMetadataDomainID::Default.DebugName;
      local_138.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_138.Name = local_1d8;
      local_138.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_138.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_138.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      pFVar15 = (FPCGMetadataAttribute<float> *)
                UPCGMetadata::GetConstAttribute(*(UPCGMetadata **)&pUVar11[1].field_0x10,&local_138)
      ;
      if ((pFVar15 == (FPCGMetadataAttribute<float> *)0x0) || ((short)pFVar15->_padding_ != 0)) {
        pFVar15 = (FPCGMetadataAttribute<float> *)0x0;
      }
      ::FString::FString(&local_1a8,"Output attrbiute exists");
      if (pFVar15 == (FPCGMetadataAttribute<float> *)0x0) {
        pcVar4 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_168,L"Expected \'%s\' to be not null.");
        (*pcVar4)(this,&local_168,0);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      fVar5 = __real_38d1b717;
      if (!bVar7) {
        pfVar17 = (float *)&local_158;
        local_158 = ___xmm_3dad32833f4853c13e09d8c73e45d420;
        uStack_150 = _UNK_15202fde8;
        local_148 = 0x3f5e368a;
        do {
          iVar9 = FPCGMetadataAttributeBase::GetValueKey
                            ((FPCGMetadataAttributeBase *)pFVar15,uVar19);
          fVar20 = FPCGMetadataAttribute<float>::GetValue(pFVar15,iVar9);
          ::FString::PrintfImpl(&local_198,L"Value %d is noised as expected");
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_198.Data.ArrayNum != 0) {
            FVar16.Data = local_198.Data.AllocatorInstance.Data;
          }
          bVar7 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,fVar20,*pfVar17,
                             fVar5);
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
          if (!bVar7) goto LAB_149fa99ec;
          uVar18 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar18;
          pfVar17 = pfVar17 + 1;
        } while ((int)uVar18 < 5);
        bVar7 = true;
        goto LAB_149fa99ee;
      }
    }
  }
LAB_149fa99ec:
  bVar7 = false;
LAB_149fa99ee:
  if ((FPCGContext *)local_220._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_220._0_8_)(local_220._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_118);
  return bVar7;
}

// GetBeautifiedTestName @ 149fa9a50

FString * __thiscall
FPCGAttributeNoiseAttributeSetTest::GetBeautifiedTestName
          (FPCGAttributeNoiseAttributeSetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributeNoise.AttributeSet");
  return __return_storage_ptr__;
}

