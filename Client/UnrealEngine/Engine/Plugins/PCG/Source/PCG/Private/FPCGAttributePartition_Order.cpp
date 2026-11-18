// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fb22d0

EAutomationTestFlags __thiscall
FPCGAttributePartition_Order::GetTestFlags(FPCGAttributePartition_Order *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fb22e0

bool __thiscall FPCGAttributePartition_Order::IsStressTest(FPCGAttributePartition_Order *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fb22f0

uint __thiscall
FPCGAttributePartition_Order::GetRequiredDeviceNum(FPCGAttributePartition_Order *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fb2300

FString * __thiscall
FPCGAttributePartition_Order::GetTestSourceFileName
          (FPCGAttributePartition_Order *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributePartitionTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fb2330

int __thiscall
FPCGAttributePartition_Order::GetTestSourceFileLine(FPCGAttributePartition_Order *this)

{
  return 0xe;
}

// GetTests @ 149fb23a0

/* WARNING: Removing unreachable block (ram,0x000149fb248d) */
/* WARNING: Removing unreachable block (ram,0x000149fb2558) */

void __thiscall
FPCGAttributePartition_Order::GetTests
          (FPCGAttributePartition_Order *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributePartition.Order");
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

// RunTest @ 149fb2590

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
FPCGAttributePartition_Order::RunTest(FPCGAttributePartition_Order *this,FString *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int iVar6;
  UPCGMetadata *this_00;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  long64 lVar9;
  code *pcVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  UPCGMetadataPartitionSettings *pUVar17;
  UPCGBasePointData *pUVar18;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<int> *pFVar19;
  UClass *pUVar20;
  FPCGMetadataAttributeBase *pFVar21;
  float *pfVar22;
  longlong *plVar23;
  undefined4 *puVar24;
  long64 *plVar25;
  long64 *plVar26;
  ForAnyElementType FVar27;
  FPCGDataPtrWrapper *this_02;
  int iVar28;
  FPCGMetadataAttribute<int> *pFVar29;
  undefined4 *puVar30;
  uint uVar31;
  FObjectPtr_u_0 FVar32;
  uint uVar33;
  longlong local_res18;
  int local_res20 [2];
  undefined4 local_2b8 [2];
  undefined1 local_2b0 [32];
  longlong local_290;
  FNameEntryId local_288;
  uint local_284;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_280;
  long64 local_278;
  FPCGMetadataAttribute<int> *local_270;
  FObjectPtr_u_0 local_268;
  FName local_260;
  ForAnyElementType local_258;
  int local_250;
  int local_24c;
  int local_248;
  UPCGBasePointData *local_240;
  ForAnyElementType local_238;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  TSharedPtr<IPCGElement,1> local_1c0;
  FName local_1a8;
  FPCGMetadataDomainID local_1a0;
  FName local_188;
  FPCGMetadataDomainID FStack_180;
  FString local_168;
  FString local_158;
  longlong local_148;
  int local_140;
  int local_13c;
  int local_138;
  FPCGAttributeIdentifier local_128;
  FTestData local_108;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_78;
  float fVar5;
  FPCGMetadataAttribute<int> *pFVar34;
  
  local_238.Data = (FScriptContainerElement *)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_238.Data != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_238.Data);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_108,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_238);
  pFVar29 = (FPCGMetadataAttribute<int> *)0x0;
  local_78._0_8_ = 0;
  local_78._40_8_ = 0;
  pUVar17 = PCGTestsCommon::GenerateSettings<UPCGMetadataPartitionSettings>(&local_108,&local_78);
  if ((pUVar17 == (UPCGMetadataPartitionSettings *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributePartitionTest.cpp"
                          ,0xda,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    uVar13 = (*pcVar10)();
    return (bool)uVar13;
  }
  iVar28 = (pUVar17->PartitionAttributeSelectors).ArrayNum;
  ::FString::FString(&local_230,"There is one Partition Attribute Selector by default");
  FVar27.Data = (FScriptContainerElement *)L"";
  if (local_230.Data.ArrayNum != 0) {
    FVar27.Data = local_230.Data.AllocatorInstance.Data;
  }
  bVar12 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar27.Data,iVar28,1);
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  if (bVar12) {
    ::FName::FName(&local_260,L"Attr");
    if (((pUVar17->PartitionAttributeSelectors).ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
    FPCGAttributePropertySelector::SetAttributeName
              ((FPCGAttributePropertySelector *)
               (pUVar17->PartitionAttributeSelectors).AllocatorInstance.Data,local_260,true);
    pUVar18 = PCGTestsCommon::CreateEmptyBasePointData();
    local_1a8 = local_260;
    local_1a0.Flag = PCGMetadataDomainID::Default.Flag;
    local_1a0._1_3_ = PCGMetadataDomainID::Default._1_3_;
    local_1a0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
    local_1a0.DebugName = PCGMetadataDomainID::Default.DebugName;
    local_res20[0] = 0;
    local_240 = pUVar18;
    this_01 = UPCGMetadata::FindOrCreateMetadataDomain
                        ((UPCGMetadata *)pUVar18->_padding_,&local_1a0);
    pFVar19 = pFVar29;
    if (this_01 != (FPCGMetadataDomain *)0x0) {
      pFVar19 = FPCGMetadataDomain::CreateAttribute<int>(this_01,local_1a8,local_res20,false,false);
    }
    local_270 = pFVar19;
    (**(code **)(pUVar18->_padding_ + 0x490))(pUVar18,10,1);
    (**(code **)(pUVar18->_padding_ + 0x4c8))(pUVar18,local_2b0 + 8,1);
    (**(code **)(pUVar18->_padding_ + 0x4f8))(pUVar18,&local_290,1);
    uVar33 = 0;
    pTVar1 = &pFVar19->Values;
    pFVar34 = pFVar29;
    do {
      iVar28 = (int)pFVar29;
      if (((int)local_2b0._24_4_ <= iVar28) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        uVar13 = (*pcVar10)();
        return (bool)uVar13;
      }
      pUVar18 = local_240;
      if (iVar28 == iVar28 % (int)local_2b0._20_4_) {
        pfVar22 = (float *)((longlong)(iVar28 % (int)local_2b0._20_4_) *
                            (longlong)(int)local_2b0._16_4_ + local_2b0._8_8_);
      }
      else {
        pfVar22 = (float *)(local_2b0 + 0x1c);
      }
      *pfVar22 = (float)iVar28;
      this_00 = (UPCGMetadata *)pUVar18->_padding_;
      if (((int)local_280._0_4_ <= iVar28) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        uVar13 = (*pcVar10)();
        return (bool)uVar13;
      }
      if (iVar28 == iVar28 % (int)local_284) {
        plVar25 = (long64 *)
                  ((longlong)(iVar28 % (int)local_284) * (longlong)(int)local_288.Value + local_290)
        ;
      }
      else {
        plVar25 = &local_278;
      }
      UPCGMetadata::InitializeOnSet(this_00,plVar25,-1,(UPCGMetadata *)0x0,-1,(UPCGMetadata *)0x0);
      local_2b8[0] = (undefined4)((ulonglong)pFVar34 / 10);
      if (((int)local_280._0_4_ <= iVar28) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        uVar13 = (*pcVar10)();
        return (bool)uVar13;
      }
      if (iVar28 == iVar28 % (int)local_284) {
        plVar23 = (longlong *)
                  ((longlong)(iVar28 % (int)local_284) * (longlong)(int)local_288.Value + local_290)
        ;
      }
      else {
        plVar23 = &local_278;
      }
      lVar7 = *plVar23;
      if ((lVar7 == -1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ItemKey != PCGInvalidEntryKey",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                              ,0x24b,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        uVar13 = (*pcVar10)();
        return (bool)uVar13;
      }
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar19->ValueLock);
      pFVar8 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar8 <= (FScriptContainerElement *)local_2b8) &&
          ((FScriptContainerElement *)local_2b8 < pFVar8 + (longlong)(pFVar19->Values).ArrayMax * 4)
          ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
        pcVar10 = (code *)swi(3);
        uVar13 = (*pcVar10)();
        return (bool)uVar13;
      }
      iVar14 = (pFVar19->Values).ArrayNum;
      if (iVar14 == (pFVar19->Values).ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar1->AllocatorInstance,&(pFVar19->Values).ArrayMax);
      }
      pFVar8 = (pTVar1->AllocatorInstance).Data;
      (pFVar19->Values).ArrayNum = iVar14 + 1;
      *(undefined4 *)(pFVar8 + (longlong)iVar14 * 4) = local_2b8[0];
      iVar6 = local_270->ValueKeyOffset;
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar19->ValueLock);
      FPCGMetadataAttributeBase::SetValueFromValueKey
                ((FPCGMetadataAttributeBase *)local_270,lVar7,iVar6 + iVar14,false);
      pFVar29 = (FPCGMetadataAttribute<int> *)(ulonglong)(iVar28 + 1);
      uVar33 = uVar33 + 2;
      pFVar34 = (FPCGMetadataAttribute<int> *)(ulonglong)uVar33;
    } while ((int)uVar33 < 0x14);
    iVar28 = 0;
    uVar33 = 9;
    do {
      uVar31 = 0;
      if ((int)uVar33 < (int)local_2b0._24_4_) {
        uVar31 = ~uVar33 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        uVar13 = (*pcVar10)();
        return (bool)uVar13;
      }
      if (uVar33 == (int)uVar33 % (int)local_2b0._20_4_) {
        puVar30 = (undefined4 *)
                  ((longlong)((int)uVar33 % (int)local_2b0._20_4_) * (longlong)(int)local_2b0._16_4_
                  + local_2b0._8_8_);
      }
      else {
        puVar30 = (undefined4 *)(local_2b0 + 0x1c);
      }
      if (((int)local_2b0._24_4_ <= iVar28) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        uVar13 = (*pcVar10)();
        return (bool)uVar13;
      }
      if (iVar28 == iVar28 % (int)local_2b0._20_4_) {
        puVar24 = (undefined4 *)
                  ((longlong)(iVar28 % (int)local_2b0._20_4_) * (longlong)(int)local_2b0._16_4_ +
                  local_2b0._8_8_);
      }
      else {
        puVar24 = (undefined4 *)(local_2b0 + 0x1c);
      }
      uVar2 = *puVar24;
      *puVar24 = *puVar30;
      *puVar30 = uVar2;
      uVar31 = 0;
      if ((int)uVar33 < (int)local_280._0_4_) {
        uVar31 = ~uVar33 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        uVar13 = (*pcVar10)();
        return (bool)uVar13;
      }
      if (uVar33 == (int)uVar33 % (int)local_284) {
        plVar25 = (long64 *)
                  ((longlong)((int)uVar33 % (int)local_284) * (longlong)(int)local_288.Value +
                  local_290);
      }
      else {
        plVar25 = &local_278;
      }
      if (((int)local_280._0_4_ <= iVar28) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        uVar13 = (*pcVar10)();
        return (bool)uVar13;
      }
      if (iVar28 == iVar28 % (int)local_284) {
        plVar26 = (long64 *)
                  ((longlong)(iVar28 % (int)local_284) * (longlong)(int)local_288.Value + local_290)
        ;
      }
      else {
        plVar26 = &local_278;
      }
      iVar28 = iVar28 + 1;
      lVar9 = *plVar26;
      uVar33 = uVar33 - 1;
      *plVar26 = *plVar25;
      *plVar25 = lVar9;
    } while (4 < (int)uVar33);
    if (local_108.InputData.TaggedData.ArrayNum == local_108.InputData.TaggedData.ArrayMax) {
      local_108.InputData.TaggedData.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x878,(ForAnyElementType *)&local_108.InputData,
                      &local_108.InputData.TaggedData.ArrayMax);
    }
    this_02 = (FPCGDataPtrWrapper *)
              (local_108.InputData.TaggedData.AllocatorInstance.Data +
              (longlong)local_108.InputData.TaggedData.ArrayNum * 0x78);
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
    local_108.InputData.TaggedData.ArrayNum = local_108.InputData.TaggedData.ArrayNum + 1;
    FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)local_240);
    this_02[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
         (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
    UPCGSettings::GetElement(local_108.Settings,&local_1c0);
    PCGTestsCommon::FTestData::InitializeTestContext(&local_108,(UPCGNode *)local_2b0);
    do {
      if ((local_1c0.Object == (IPCGElement *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        uVar13 = (*pcVar10)();
        return (bool)uVar13;
      }
      bVar12 = IPCGElement::Execute(local_1c0.Object,(FPCGContext *)local_2b0._0_8_);
    } while (!bVar12);
    iVar28 = (((FPCGDataCollection *)(local_2b0._0_8_ + 0x38))->TaggedData).ArrayNum;
    ::FString::FString(&local_220,"There are 2 outputs");
    FVar27.Data = (FScriptContainerElement *)L"";
    if (local_220.Data.ArrayNum != 0) {
      FVar27.Data = local_220.Data.AllocatorInstance.Data;
    }
    bVar12 = FAutomationTestBase::TestEqual
                       ((FAutomationTestBase *)this,(wchar_t *)FVar27.Data,iVar28,2);
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
    if (bVar12) {
      uVar33 = 0;
      if (0 < (((FPCGDataCollection *)(local_2b0._0_8_ + 0x38))->TaggedData).ArrayNum) {
        local_res18 = 0;
        do {
          uVar11 = local_2b0._0_8_;
          uVar31 = 0;
          if ((int)uVar33 < (((FPCGDataCollection *)(local_2b0._0_8_ + 0x38))->TaggedData).ArrayNum)
          {
            uVar31 = ~uVar33 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            uVar13 = (*pcVar10)();
            return (bool)uVar13;
          }
          local_268 = (FObjectPtr_u_0)
                      ((FObjectPtr_u_0 *)
                      ((((FPCGDataCollection *)(uVar11 + 0x38))->TaggedData).AllocatorInstance.Data
                      + local_res18))->Handle;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fb2df1:
            if (local_268.Handle == (UObject *)0x0) goto LAB_149fb2e11;
            pUVar20 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
            bVar12 = FObjectPtr::IsA((FObjectPtr *)&local_268,pUVar20);
            FVar32 = local_268;
            if (!bVar12) goto LAB_149fb2e11;
          }
          else {
            if (local_268.Handle != (UObject *)0x0) {
              UE::GC::MarkAsReachable(local_268.Handle);
              goto LAB_149fb2df1;
            }
LAB_149fb2e11:
            FVar32.Handle = (UObject *)0x0;
          }
          ::FString::PrintfImpl(&local_210,L"Output %d is a point data");
          if (FVar32.Handle == (UObject *)0x0) {
            pcVar10 = *(code **)(*(longlong *)this + 0x28);
            ::FString::PrintfImpl(&local_168,L"Expected \'%s\' to be not null.");
            (*pcVar10)(this,&local_168,0);
            if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_168.Data.AllocatorInstance.Data);
            }
            bVar12 = true;
          }
          else {
            bVar12 = false;
          }
          if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_210.Data.AllocatorInstance.Data);
          }
          if (bVar12) goto LAB_149fb3377;
          if ((FVar32.Handle == (UObject *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("OutputPointData",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributePartitionTest.cpp"
                                  ,0x10a,L""), bVar12)) {
            pcVar10 = (code *)swi(3);
            uVar13 = (*pcVar10)();
            return (bool)uVar13;
          }
          local_188 = local_260;
          FStack_180.Flag = PCGMetadataDomainID::Default.Flag;
          FStack_180._1_3_ = PCGMetadataDomainID::Default._1_3_;
          FStack_180.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
          FStack_180.DebugName = PCGMetadataDomainID::Default.DebugName;
          local_128.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
          local_128.Name = local_260;
          local_128.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
          local_128.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
          local_128.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
          pFVar21 = UPCGMetadata::GetConstAttribute
                              (*(UPCGMetadata **)&FVar32.Handle[1].field_0x10,&local_128);
          if ((pFVar21 == (FPCGMetadataAttributeBase *)0x0) || (pFVar21->TypeId != 2)) {
            pFVar21 = (FPCGMetadataAttributeBase *)0x0;
          }
          ::FString::PrintfImpl(&local_200,L"Output %d has the expected attribute");
          if (pFVar21 == (FPCGMetadataAttributeBase *)0x0) {
            pcVar10 = *(code **)(*(longlong *)this + 0x28);
            ::FString::PrintfImpl(&local_158,L"Expected \'%s\' to be not null.");
            (*pcVar10)(this,&local_158,0);
            if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_158.Data.AllocatorInstance.Data);
            }
            bVar12 = true;
          }
          else {
            bVar12 = false;
          }
          if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_200.Data.AllocatorInstance.Data);
          }
          if (bVar12) goto LAB_149fb3377;
          if ((pFVar21 == (FPCGMetadataAttributeBase *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("OutputAttribute",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributePartitionTest.cpp"
                                  ,0x10f,L""), bVar12)) {
            pcVar10 = (code *)swi(3);
            uVar13 = (*pcVar10)();
            return (bool)uVar13;
          }
          iVar28 = (**(code **)(*(longlong *)FVar32.Handle + 0x488))(FVar32.Handle);
          ::FString::PrintfImpl(&local_1f0,L"Output %d has %d points");
          FVar27.Data = (FScriptContainerElement *)L"";
          if (local_1f0.Data.ArrayNum != 0) {
            FVar27.Data = local_1f0.Data.AllocatorInstance.Data;
          }
          bVar12 = FAutomationTestBase::TestEqual
                             ((FAutomationTestBase *)this,(wchar_t *)FVar27.Data,iVar28,5);
          if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
          }
          if (!bVar12) goto LAB_149fb3377;
          (**(code **)(*(longlong *)FVar32.Handle + 0x508))(FVar32.Handle,&local_258);
          (**(code **)(*(longlong *)FVar32.Handle + 0x538))(FVar32.Handle,&local_148);
          uVar31 = 0;
          iVar28 = (**(code **)(*(longlong *)FVar32.Handle + 0x488))(FVar32.Handle);
          if (0 < iVar28 + -1) {
            do {
              uVar15 = 0;
              if ((int)uVar31 < local_248) {
                uVar15 = ~uVar31 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < NumElements)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                      ,0x8b,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar12)) {
                pcVar10 = (code *)swi(3);
                uVar13 = (*pcVar10)();
                return (bool)uVar13;
              }
              uVar15 = uVar31 + 1;
              fVar3 = *(float *)(local_258.Data +
                                (longlong)((int)uVar31 % local_24c) * (longlong)local_250);
              uVar16 = 0;
              if ((int)uVar15 < local_248) {
                uVar16 = ~uVar15 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < NumElements)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                      ,0x8b,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar12)) {
                pcVar10 = (code *)swi(3);
                uVar13 = (*pcVar10)();
                return (bool)uVar13;
              }
              fVar4 = *(float *)(local_258.Data +
                                (longlong)((int)uVar15 % local_24c) * (longlong)local_250);
              fVar5 = *(float *)(local_258.Data +
                                (longlong)((int)uVar15 % local_24c) * (longlong)local_250);
              ::FString::PrintfImpl(&local_1e0,L"Output %d: Point_%d is at the right place");
              FVar27.Data = (FScriptContainerElement *)L"";
              if (local_1e0.Data.ArrayNum != 0) {
                FVar27.Data = local_1e0.Data.AllocatorInstance.Data;
              }
              bVar12 = FAutomationTestBase::TestTrue
                                 ((FAutomationTestBase *)this,(wchar_t *)FVar27.Data,
                                  fVar5 <= fVar3 && fVar3 != fVar4);
              if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
              }
              if (!bVar12) goto LAB_149fb3377;
              uVar16 = 0;
              if ((int)uVar31 < local_138) {
                uVar16 = ~uVar31 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < NumElements)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                      ,0x8b,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar12)) {
                pcVar10 = (code *)swi(3);
                uVar13 = (*pcVar10)();
                return (bool)uVar13;
              }
              iVar28 = *(int *)((longlong)((int)uVar31 % local_13c) * (longlong)local_140 +
                               local_148);
              if (iVar28 == -1) {
LAB_149fb32c4:
                iVar28 = *(int *)&pFVar21[1].EntryToValueKeyMap.field_0x10;
              }
              else {
                iVar14 = *(int *)&pFVar21[1].EntryToValueKeyMap.field_0x14;
                if (iVar28 < iVar14) {
                  if ((FPCGMetadataAttribute<int> *)pFVar21->Parent ==
                      (FPCGMetadataAttribute<int> *)0x0) goto LAB_149fb32c4;
                  iVar28 = FPCGMetadataAttribute<int>::GetValue
                                     ((FPCGMetadataAttribute<int> *)pFVar21->Parent,iVar28);
                }
                else {
                  iVar28 = iVar28 - iVar14;
                  AcquireSRWLockShared((PSRWLOCK)(pFVar21 + 1));
                  if (iVar28 < *(int *)&pFVar21[1].EntryToValueKeyMap.field_0x8) {
                    if ((iVar28 < 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar10 = (code *)swi(3);
                      uVar13 = (*pcVar10)();
                      return (bool)uVar13;
                    }
                    iVar28 = *(int *)(*(longlong *)&pFVar21[1].EntryToValueKeyMap +
                                     (longlong)iVar28 * 4);
                    ReleaseSRWLockShared((PSRWLOCK)(pFVar21 + 1));
                  }
                  else {
                    iVar28 = *(int *)&pFVar21[1].EntryToValueKeyMap.field_0x10;
                    ReleaseSRWLockShared((PSRWLOCK)(pFVar21 + 1));
                  }
                }
              }
              ::FString::PrintfImpl(&local_1d0,L"Output %d: Point_%d has the right attribute value")
              ;
              FVar27.Data = (FScriptContainerElement *)L"";
              if (local_1d0.Data.ArrayNum != 0) {
                FVar27.Data = local_1d0.Data.AllocatorInstance.Data;
              }
              uVar31 = uVar33 + 1 & 0x80000001;
              if ((int)uVar31 < 0) {
                uVar31 = (uVar31 - 1 | 0xfffffffe) + 1;
              }
              bVar12 = FAutomationTestBase::TestEqual
                                 ((FAutomationTestBase *)this,(wchar_t *)FVar27.Data,iVar28,uVar31);
              if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
              }
              if (!bVar12) goto LAB_149fb3377;
              iVar28 = (**(code **)(*(longlong *)FVar32.Handle + 0x488))(FVar32.Handle);
              uVar31 = uVar15;
            } while ((int)uVar15 < iVar28 + -1);
          }
          local_res18 = local_res18 + 0x78;
          uVar33 = uVar33 + 1;
        } while ((int)uVar33 <
                 (((FPCGDataCollection *)(local_2b0._0_8_ + 0x38))->TaggedData).ArrayNum);
      }
      bVar12 = true;
    }
    else {
LAB_149fb3377:
      bVar12 = false;
    }
    if ((FPCGContext *)local_2b0._0_8_ != (FPCGContext *)0x0) {
      (**(code **)((FPCGContext *)local_2b0._0_8_)->_padding_)(local_2b0._0_8_,1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c0.SharedReferenceCount.ReferenceController);
  }
  else {
    bVar12 = false;
  }
  PCGTestsCommon::FTestData::~FTestData(&local_108);
  return bVar12;
}

// GetBeautifiedTestName @ 149fb33f0

FString * __thiscall
FPCGAttributePartition_Order::GetBeautifiedTestName
          (FPCGAttributePartition_Order *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributePartition.Order");
  return __return_storage_ptr__;
}

