// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f77c10

EAutomationTestFlags __thiscall
FPCGAttributeCast_PointsIntToDoubleToDensity::GetTestFlags
          (FPCGAttributeCast_PointsIntToDoubleToDensity *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f77c20

bool __thiscall
FPCGAttributeCast_PointsIntToDoubleToDensity::IsStressTest
          (FPCGAttributeCast_PointsIntToDoubleToDensity *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f77c30

uint __thiscall
FPCGAttributeCast_PointsIntToDoubleToDensity::GetRequiredDeviceNum
          (FPCGAttributeCast_PointsIntToDoubleToDensity *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f77c40

FString * __thiscall
FPCGAttributeCast_PointsIntToDoubleToDensity::GetTestSourceFileName
          (FPCGAttributeCast_PointsIntToDoubleToDensity *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f77c70

int __thiscall
FPCGAttributeCast_PointsIntToDoubleToDensity::GetTestSourceFileLine
          (FPCGAttributeCast_PointsIntToDoubleToDensity *this)

{
  return 0x6f;
}

// GetTests @ 149f77c80

/* WARNING: Removing unreachable block (ram,0x000149f77d6d) */
/* WARNING: Removing unreachable block (ram,0x000149f77e38) */

void __thiscall
FPCGAttributeCast_PointsIntToDoubleToDensity::GetTests
          (FPCGAttributeCast_PointsIntToDoubleToDensity *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeCast.PointsIntToDoubleToDensity");
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

// RunTest @ 149f77e60

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
FPCGAttributeCast_PointsIntToDoubleToDensity::RunTest
          (FPCGAttributeCast_PointsIntToDoubleToDensity *this,FString *param_1)

{
  float fVar1;
  UPCGMetadata *pUVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  UPCGAttributeCastSettings *pUVar10;
  UPCGBasePointData *pUVar11;
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<int> *pFVar12;
  longlong *plVar13;
  UClass *pUVar14;
  long64 *plVar15;
  ForAnyElementType FVar16;
  FPCGDataPtrWrapper *this_01;
  int local_res18 [2];
  int local_res20 [2];
  undefined1 local_1f8 [64];
  float *local_1b8;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  ForAnyElementType local_1a0;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  TSharedPtr<IPCGElement,1> local_148;
  FName local_138;
  FPCGMetadataDomainID local_130;
  FString local_118;
  FTestData local_108;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_78;
  
  local_1a0.Data = (FScriptContainerElement *)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_1a0.Data != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1a0.Data);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_108,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_1a0);
  local_78._0_8_ = 0;
  local_78._40_8_ = 0;
  pUVar10 = PCGTestsCommon::GenerateSettings<UPCGAttributeCastSettings>(&local_108,&local_78);
  if ((pUVar10 == (UPCGAttributeCastSettings *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                         ,0xaf,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  ::FName::FName((FName *)(local_1f8 + 0x38),L"Int");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar10->InputSource,(FName)local_1f8._56_8_,true);
  FPCGAttributePropertySelector::SetPointProperty
            ((FPCGAttributePropertySelector *)&pUVar10->OutputTarget,Density,true);
  pUVar10->OutputType = Double;
  pUVar11 = PCGTestsCommon::CreateEmptyBasePointData();
  local_138.ComparisonIndex.Value = local_1f8._56_4_;
  local_138.Number = local_1f8._60_4_;
  local_130.Flag = PCGMetadataDomainID::Default.Flag;
  local_130._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_130.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_130.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_res18[0] = 5;
  this_00 = UPCGMetadata::FindOrCreateMetadataDomain((UPCGMetadata *)pUVar11->_padding_,&local_130);
  pFVar12 = (FPCGMetadataAttribute<int> *)0x0;
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar12 = FPCGMetadataDomain::CreateAttribute<int>(this_00,local_138,local_res18,true,false);
  }
  (**(code **)(pUVar11->_padding_ + 0x490))(pUVar11,2,1);
  (**(code **)(pUVar11->_padding_ + 0x4f8))(pUVar11,local_1f8 + 0x18,1);
  pUVar2 = (UPCGMetadata *)pUVar11->_padding_;
  if (((int)local_1f8._40_4_ < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar7
     )) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  UPCGMetadata::InitializeOnSet
            (pUVar2,(long64 *)local_1f8._24_8_,-1,(UPCGMetadata *)0x0,-1,(UPCGMetadata *)0x0);
  pUVar2 = (UPCGMetadata *)pUVar11->_padding_;
  if (((int)local_1f8._40_4_ < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar7
     )) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  if ((int)(1 % (longlong)(int)local_1f8._36_4_) == 1) {
    plVar15 = (long64 *)((longlong)(int)local_1f8._32_4_ + local_1f8._24_8_);
  }
  else {
    plVar15 = (long64 *)(local_1f8 + 0x30);
  }
  UPCGMetadata::InitializeOnSet(pUVar2,plVar15,-1,(UPCGMetadata *)0x0,-1,(UPCGMetadata *)0x0);
  local_res20[0] = 1;
  if (((int)local_1f8._40_4_ < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar7
     )) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  lVar3 = *(longlong *)local_1f8._24_8_;
  if ((lVar3 == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ItemKey != PCGInvalidEntryKey",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                         ,0x24b,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  iVar9 = FPCGMetadataAttribute<int>::AddValue(pFVar12,local_res20);
  FPCGMetadataAttributeBase::SetValueFromValueKey
            ((FPCGMetadataAttributeBase *)pFVar12,lVar3,iVar9,false);
  local_1f8._8_4_ = 2;
  if (((int)local_1f8._40_4_ < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar7
     )) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  if ((int)(1 % (longlong)(int)local_1f8._36_4_) == 1) {
    plVar13 = (longlong *)((longlong)(int)local_1f8._32_4_ + local_1f8._24_8_);
  }
  else {
    plVar13 = (longlong *)(local_1f8 + 0x30);
  }
  lVar3 = *plVar13;
  if ((lVar3 == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ItemKey != PCGInvalidEntryKey",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                         ,0x24b,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  iVar9 = FPCGMetadataAttribute<int>::AddValue(pFVar12,(int *)(local_1f8 + 8));
  FPCGMetadataAttributeBase::SetValueFromValueKey
            ((FPCGMetadataAttributeBase *)pFVar12,lVar3,iVar9,false);
  if (local_108.InputData.TaggedData.ArrayNum == local_108.InputData.TaggedData.ArrayMax) {
    local_108.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_108.InputData,
                    &local_108.InputData.TaggedData.ArrayMax);
  }
  this_01 = (FPCGDataPtrWrapper *)
            (local_108.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_108.InputData.TaggedData.ArrayNum * 0x78);
  this_01[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this_01->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_01->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this_01[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_01[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_01[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_01[4].Data.field0_0x0 + 4) = 0;
  this_01[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_01[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_01[7].Data.field0_0x0 + 4) = 0xffffffff;
  local_108.InputData.TaggedData.ArrayNum = local_108.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_01,(UPCGData *)pUVar11);
  this_01[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_108.Settings,&local_148);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_108,(UPCGNode *)local_1f8);
  do {
    if ((local_148.Object == (IPCGElement *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    bVar7 = IPCGElement::Execute(local_148.Object,(FPCGContext *)local_1f8._0_8_);
  } while (!bVar7);
  iVar9 = (((FPCGDataCollection *)(local_1f8._0_8_ + 0x38))->TaggedData).ArrayNum;
  ::FString::FString(&local_198,"There is one output");
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_198.Data.ArrayNum != 0) {
    FVar16.Data = local_198.Data.AllocatorInstance.Data;
  }
  bVar7 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,iVar9,1)
  ;
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  uVar6 = local_1f8._0_8_;
  if (bVar7) {
    if (((((FPCGDataCollection *)(local_1f8._0_8_ + 0x38))->TaggedData).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    local_1f8._16_8_ =
         *(undefined8 *)(((FPCGDataCollection *)(uVar6 + 0x38))->TaggedData).AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149f783bc:
      if ((FPCGMetadataAttribute<int> *)local_1f8._16_8_ == (FPCGMetadataAttribute<int> *)0x0)
      goto LAB_149f783dc;
      pUVar14 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)(local_1f8 + 0x10),pUVar14);
      pFVar12 = (FPCGMetadataAttribute<int> *)local_1f8._16_8_;
      if (!bVar7) goto LAB_149f783dc;
    }
    else {
      if ((FPCGMetadataAttribute<int> *)local_1f8._16_8_ != (FPCGMetadataAttribute<int> *)0x0) {
        UE::GC::MarkAsReachable((UObject *)local_1f8._16_8_);
        goto LAB_149f783bc;
      }
LAB_149f783dc:
      pFVar12 = (FPCGMetadataAttribute<int> *)0x0;
    }
    ::FString::FString(&local_188,"Output is a point data");
    if (pFVar12 == (FPCGMetadataAttribute<int> *)0x0) {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_118,L"Expected \'%s\' to be not null.");
      (*pcVar4)(this,&local_118,0);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if (!bVar7) {
      iVar9 = (**(code **)(pFVar12->_padding_ + 0x488))(pFVar12);
      ::FString::FString(&local_178,"Output has 2 points");
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_178.Data.ArrayNum != 0) {
        FVar16.Data = local_178.Data.AllocatorInstance.Data;
      }
      bVar7 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,iVar9,2);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        (**(code **)(pFVar12->_padding_ + 0x508))(pFVar12,&local_1b8);
        if ((local_1a8 < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        fVar1 = *local_1b8;
        ::FString::FString(&local_168,"First point has the right value");
        fVar5 = __real_38d1b717;
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_168.Data.ArrayNum != 0) {
          FVar16.Data = local_168.Data.AllocatorInstance.Data;
        }
        bVar7 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,fVar1,__real_3f800000,
                           __real_38d1b717);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          if ((local_1a8 < 2) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          fVar1 = *(float *)((longlong)(int)(1 % (longlong)local_1ac) * (longlong)local_1b0 +
                            (longlong)local_1b8);
          ::FString::FString(&local_158,"Second point has the right value");
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_158.Data.ArrayNum != 0) {
            FVar16.Data = local_158.Data.AllocatorInstance.Data;
          }
          bVar7 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,fVar1,
                             __real_40000000,fVar5);
          if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.Data.AllocatorInstance.Data);
          }
          if (bVar7) {
            bVar7 = true;
            goto LAB_149f785f9;
          }
        }
      }
    }
  }
  bVar7 = false;
LAB_149f785f9:
  if ((FPCGContext *)local_1f8._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_1f8._0_8_)(local_1f8._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_108);
  return bVar7;
}

// GetBeautifiedTestName @ 149f78670

FString * __thiscall
FPCGAttributeCast_PointsIntToDoubleToDensity::GetBeautifiedTestName
          (FPCGAttributeCast_PointsIntToDoubleToDensity *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributeCast.PointsIntToDoubleToDensity");
  return __return_storage_ptr__;
}

