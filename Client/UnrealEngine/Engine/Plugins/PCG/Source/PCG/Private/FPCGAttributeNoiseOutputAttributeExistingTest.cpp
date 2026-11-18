// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fa9ac0

EAutomationTestFlags __thiscall
FPCGAttributeNoiseOutputAttributeExistingTest::GetTestFlags
          (FPCGAttributeNoiseOutputAttributeExistingTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fa9ad0

bool __thiscall
FPCGAttributeNoiseOutputAttributeExistingTest::IsStressTest
          (FPCGAttributeNoiseOutputAttributeExistingTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fa9ae0

uint __thiscall
FPCGAttributeNoiseOutputAttributeExistingTest::GetRequiredDeviceNum
          (FPCGAttributeNoiseOutputAttributeExistingTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fa9af0

FString * __thiscall
FPCGAttributeNoiseOutputAttributeExistingTest::GetTestSourceFileName
          (FPCGAttributeNoiseOutputAttributeExistingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeNoiseTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fa9b20

int __thiscall
FPCGAttributeNoiseOutputAttributeExistingTest::GetTestSourceFileLine
          (FPCGAttributeNoiseOutputAttributeExistingTest *this)

{
  return 0x161;
}

// GetTests @ 149fa9b30

/* WARNING: Removing unreachable block (ram,0x000149fa9c1d) */
/* WARNING: Removing unreachable block (ram,0x000149fa9ce8) */

void __thiscall
FPCGAttributeNoiseOutputAttributeExistingTest::GetTests
          (FPCGAttributeNoiseOutputAttributeExistingTest *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeNoise.OutputAttributeExisting");
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

// RunTest @ 149fa9d10

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
FPCGAttributeNoiseOutputAttributeExistingTest::RunTest
          (FPCGAttributeNoiseOutputAttributeExistingTest *this,FString *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  FPCGContext *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  UPCGAttributeNoiseSettings *pUVar12;
  UObject *pUVar13;
  UPCGParamData *pUVar14;
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *this_01;
  long64 lVar15;
  UClass *pUVar16;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *pFVar17;
  ForAnyElementType FVar18;
  FPCGDataPtrWrapper *this_02;
  double *pdVar19;
  uint uVar20;
  ulonglong uVar21;
  FObjectPtr_u_0 FVar22;
  FPCGContext *local_res20;
  FObjectPtr_u_0 local_278 [2];
  FName local_268;
  FPCGMetadataDomainID FStack_260;
  UPCGParamData *local_248;
  FName local_240;
  double local_238;
  double dStack_230;
  double local_228;
  UClass *local_220;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  TSharedPtr<IPCGElement,1> local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FPCGAttributeIdentifier local_178;
  TVector<double>_u_0 local_158;
  double local_140 [4];
  undefined8 local_120;
  FTestData local_118;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_88;
  
  local_220 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_220 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_220);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_118,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_220);
  pFVar17 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
  local_88._0_8_ = 0;
  local_88._40_8_ = 0;
  pUVar12 = PCGTestsCommon::GenerateSettings<UPCGAttributeNoiseSettings>(&local_118,&local_88);
  if ((pUVar12 == (UPCGAttributeNoiseSettings *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeNoiseTest.cpp"
                         ,0x167,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  ::FName::FName(&local_240,L"Attr");
  ::FString::FString(&local_1b8,L"Attr.X");
  FPCGAttributePropertySelector::Update
            ((FPCGAttributePropertySelector *)&pUVar12->InputSource,&local_1b8);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1a8,L"Attr.Z");
  FPCGAttributePropertySelector::Update
            ((FPCGAttributePropertySelector *)&pUVar12->OutputTarget,&local_1a8);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  pUVar13 = GetTransientPackageAsObject();
  pUVar14 = NewObject<UPCGParamData>(pUVar13);
  local_268 = local_240;
  FStack_260.Flag = PCGMetadataDomainID::Default.Flag;
  FStack_260._1_3_ = PCGMetadataDomainID::Default._1_3_;
  FStack_260.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  FStack_260.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_248 = pUVar14;
  this_00 = UPCGMetadata::FindOrCreateMetadataDomain((UPCGMetadata *)pUVar14->_padding_,&FStack_260)
  ;
  this_01 = pFVar17;
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    this_01 = FPCGMetadataDomain::CreateAttribute<UE::Math::TVector<double>_>
                        (this_00,local_268,&UE::Math::TVector<double>::ZeroVector,true,false);
  }
  dVar7 = __real_3fc999999999999a;
  pTVar1 = &this_01->Values;
  do {
    local_238 = (double)(int)pFVar17 * dVar7;
    dStack_230 = local_238;
    local_228 = local_238;
    lVar15 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar14->_padding_,-1);
    if ((lVar15 == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemKey != PCGInvalidEntryKey",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                           ,0x24b,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    AcquireSRWLockExclusive((PSRWLOCK)&this_01->ValueLock);
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_238) &&
        ((FScriptContainerElement *)&local_238 <
         pFVar3 + (longlong)(this_01->Values).ArrayMax * 0x18)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    iVar11 = (this_01->Values).ArrayNum;
    if (iVar11 == (this_01->Values).ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar1->AllocatorInstance,&(this_01->Values).ArrayMax);
    }
    (this_01->Values).ArrayNum = iVar11 + 1;
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    pFVar3 = pFVar4 + (longlong)iVar11 * 0x18;
    *(double *)pFVar3 = local_238;
    *(double *)(pFVar3 + 8) = dStack_230;
    *(double *)(pFVar4 + (longlong)iVar11 * 0x18 + 0x10) = local_228;
    iVar2 = this_01->ValueKeyOffset;
    ReleaseSRWLockExclusive((PSRWLOCK)&this_01->ValueLock);
    FPCGMetadataAttributeBase::SetValueFromValueKey
              ((FPCGMetadataAttributeBase *)this_01,lVar15,iVar2 + iVar11,false);
    pUVar14 = local_248;
    uVar20 = (int)pFVar17 + 1;
    pFVar17 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)(ulonglong)uVar20;
  } while ((int)uVar20 < 5);
  uVar21 = 0;
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
  FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)pUVar14);
  this_02[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_118.Settings,&local_1c8);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_118,(UPCGNode *)&local_res20);
  do {
    if ((local_1c8.Object == (IPCGElement *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    bVar9 = IPCGElement::Execute(local_1c8.Object,local_res20);
  } while (!bVar9);
  iVar11 = (local_res20->OutputData).TaggedData.ArrayNum;
  ::FString::FString(&local_218,"1 output");
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_218.Data.ArrayNum != 0) {
    FVar18.Data = local_218.Data.AllocatorInstance.Data;
  }
  bVar9 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,iVar11,1);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  pFVar8 = local_res20;
  if (bVar9) {
    if (((local_res20->OutputData).TaggedData.ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    local_278[0] = (FObjectPtr_u_0)
                   ((FObjectPtr_u_0 *)(pFVar8->OutputData).TaggedData.AllocatorInstance.Data)->
                   Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149faa1f1:
      if (local_278[0].Handle == (UObject *)0x0) goto LAB_149faa211;
      pUVar16 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar9 = FObjectPtr::IsA((FObjectPtr *)local_278,pUVar16);
      FVar22 = local_278[0];
      if (!bVar9) goto LAB_149faa211;
    }
    else {
      if (local_278[0].Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_278[0].Handle);
        goto LAB_149faa1f1;
      }
LAB_149faa211:
      FVar22.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_208,"Output is param");
    if (FVar22.Handle == (UObject *)0x0) {
      pcVar5 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_198,L"Expected \'%s\' to be not null.");
      (*pcVar5)(this,&local_198,0);
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    if (!bVar9) {
      local_268 = local_240;
      FStack_260.Flag = PCGMetadataDomainID::Default.Flag;
      FStack_260._1_3_ = PCGMetadataDomainID::Default._1_3_;
      FStack_260.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      FStack_260.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_178.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_178.Name = local_240;
      local_178.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_178.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_178.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      pFVar17 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
                UPCGMetadata::GetConstAttribute
                          (*(UPCGMetadata **)&FVar22.Handle[1].field_0x10,&local_178);
      if ((pFVar17 == (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) ||
         ((short)pFVar17->_padding_ != 5)) {
        pFVar17 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
      }
      ::FString::FString(&local_1f8,"Output attrbiute exists");
      if (pFVar17 == (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
        pcVar5 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_188,L"Expected \'%s\' to be not null.");
        (*pcVar5)(this,&local_188,0);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      dVar6 = __real_3f1a36e2e0000000;
      if (!bVar9) {
        pdVar19 = local_140;
        local_140[0] = ___xmm_3fc13b18dac258d63fc8ba83f4eca687;
        local_140[1] = (double)_UNK_15202fe68;
        local_120 = __real_3febc6d13ff91453;
        local_140[2] = (double)___xmm_3fb5a650614163783fe90a7829068987;
        local_140[3] = (double)_UNK_15202fe58;
        do {
          iVar11 = FPCGMetadataAttributeBase::GetValueKey
                             ((FPCGMetadataAttributeBase *)pFVar17,uVar21);
          FPCGMetadataAttribute<UE::Math::TVector<double>_>::GetValue
                    (pFVar17,(TVector<double> *)&local_158._s_0,iVar11);
          ::FString::PrintfImpl(&local_1e8,L"Value %d for X component is the same");
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_1e8.Data.ArrayNum != 0) {
            FVar18.Data = local_1e8.Data.AllocatorInstance.Data;
          }
          bVar9 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,local_158._s_0.X,
                             (double)(int)uVar21 * dVar7,dVar6);
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
          if (!bVar9) goto LAB_149faa469;
          ::FString::PrintfImpl(&local_1d8,L"Value %d for Z component is noised as expected");
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_1d8.Data.ArrayNum != 0) {
            FVar18.Data = local_1d8.Data.AllocatorInstance.Data;
          }
          bVar9 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,local_158._s_0.Z,
                             *pdVar19,dVar6);
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          }
          if (!bVar9) goto LAB_149faa469;
          uVar20 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar20;
          pdVar19 = pdVar19 + 1;
        } while ((int)uVar20 < 5);
        bVar9 = true;
        goto LAB_149faa46b;
      }
    }
  }
LAB_149faa469:
  bVar9 = false;
LAB_149faa46b:
  if (local_res20 != (FPCGContext *)0x0) {
    (**(code **)local_res20->_padding_)(local_res20,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_118);
  return bVar9;
}

// GetBeautifiedTestName @ 149faa4e0

FString * __thiscall
FPCGAttributeNoiseOutputAttributeExistingTest::GetBeautifiedTestName
          (FPCGAttributeNoiseOutputAttributeExistingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributeNoise.OutputAttributeExisting");
  return __return_storage_ptr__;
}

