// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 14a00c3a0

EAutomationTestFlags __thiscall
FPCGSpatialNoise_Perlin2D::GetTestFlags(FPCGSpatialNoise_Perlin2D *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a00c3b0

bool __thiscall FPCGSpatialNoise_Perlin2D::IsStressTest(FPCGSpatialNoise_Perlin2D *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a00c3c0

uint __thiscall FPCGSpatialNoise_Perlin2D::GetRequiredDeviceNum(FPCGSpatialNoise_Perlin2D *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a00c3d0

FString * __thiscall
FPCGSpatialNoise_Perlin2D::GetTestSourceFileName
          (FPCGSpatialNoise_Perlin2D *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGSpatialNoiseTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a00c400

int __thiscall FPCGSpatialNoise_Perlin2D::GetTestSourceFileLine(FPCGSpatialNoise_Perlin2D *this)

{
  return 0x2a;
}

// GetTests @ 14a00c410

/* WARNING: Removing unreachable block (ram,0x00014a00c4fd) */
/* WARNING: Removing unreachable block (ram,0x00014a00c5c8) */

void __thiscall
FPCGSpatialNoise_Perlin2D::GetTests
          (FPCGSpatialNoise_Perlin2D *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.Noise.Perlin2D");
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

// RunTest @ 14a00c5f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FPCGSpatialNoise_Perlin2D::RunTest(FPCGSpatialNoise_Perlin2D *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  UClass *pUVar5;
  UPCGSpatialNoiseSettings *pUVar6;
  FName *pFVar7;
  UPCGPointData *pUVar8;
  FObjectPtr_u_0 FVar9;
  ForAnyElementType FVar10;
  FPCGDataPtrWrapper *this_00;
  FPCGContext *local_res18;
  FObjectPtr_u_0 local_res20;
  undefined1 local_1a8 [16];
  FName local_198;
  FTestData local_188;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  TSharedPtr<IPCGElement,1> local_b8;
  FString local_a8;
  FName local_98 [2];
  FPCGAttributeIdentifier local_88;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_68;
  
  pUVar5 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  local_188.Seed = 0x2a;
  local_188.InputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.InputData.TaggedData.ArrayNum = 0;
  local_188.InputData.TaggedData.ArrayMax = 0;
  local_188.InputData.bCancelExecutionOnEmpty = false;
  local_188.InputData.bCancelExecution = false;
  local_188.InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.InputData.DataCrcs.ArrayNum = 0;
  local_188.InputData.DataCrcs.ArrayMax = 0;
  local_188.InputData.InactiveOutputPinBitmask = 0;
  local_188.OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.OutputData.TaggedData.ArrayNum = 0;
  local_188.OutputData.TaggedData.ArrayMax = 0;
  local_188.OutputData.bCancelExecutionOnEmpty = false;
  local_188.OutputData.bCancelExecution = false;
  local_188.OutputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.OutputData.DataCrcs.ArrayNum = 0;
  local_188.OutputData.DataCrcs.ArrayMax = 0;
  local_188.OutputData.InactiveOutputPinBitmask = 0;
  local_188.TestActor = (AActor *)0x0;
  local_188.TestPCGComponent = (UPCGComponent *)0x0;
  local_188.Settings = (UPCGSettings *)0x0;
  local_68._0_8_ = 0;
  local_68._40_8_ = 0;
  local_188.RandomStream.InitialSeed = 0x2a;
  local_188.RandomStream.Seed = 0x2a;
  PCGTestsCommon::GenerateSettings<UPCGSpatialNoiseSettings>(&local_188,&local_68);
  pUVar6 = CastChecked<UPCGSpatialNoiseSettings,UPCGSettings>(local_188.Settings);
  pUVar6->Mode = Perlin2D;
  pFVar7 = ::FName::FName(local_98,L"Noise");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar6->ValueTarget,*pFVar7,true);
  UPCGSettings::GetElement(local_188.Settings,&local_b8);
  iVar4 = local_188.InputData.TaggedData.ArrayNum;
  if (local_188.InputData.TaggedData.ArrayNum == local_188.InputData.TaggedData.ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)&local_188.InputData,
                       &local_188.InputData.TaggedData.ArrayMax);
  }
  local_188.InputData.TaggedData.ArrayNum = iVar4 + 1;
  this_00 = (FPCGDataPtrWrapper *)
            (local_188.InputData.TaggedData.AllocatorInstance.Data + (longlong)iVar4 * 0x78);
  this_00[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this_00->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_00->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this_00[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_00[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_00[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_00[4].Data.field0_0x0 + 4) = 0;
  this_00[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_00[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_00[7].Data.field0_0x0 + 4) = 0xffffffff;
  this_00[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  pUVar8 = PCGTestsCommon::CreateRandomPointData<UPCGPointData,0>(100,0x2a,false);
  FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)pUVar8);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_188,(UPCGNode *)&local_res18);
  do {
    if ((local_b8.Object == (IPCGElement *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = IPCGElement::Execute(local_b8.Object,local_res18);
  } while (!bVar2);
  iVar4 = (local_res18->OutputData).TaggedData.ArrayNum;
  ::FString::FString(&local_f8,"Output count");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_f8.Data.ArrayNum != 0) {
    FVar10.Data = local_f8.Data.AllocatorInstance.Data;
  }
  bVar2 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,iVar4,1)
  ;
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    if (((local_res18->OutputData).TaggedData.ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    local_res20 = (FObjectPtr_u_0)
                  ((FObjectPtr_u_0 *)(local_res18->OutputData).TaggedData.AllocatorInstance.Data)->
                  Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14a00c8a7:
      if ((FPCGMetadataAttributeBase *)local_res20.Handle == (FPCGMetadataAttributeBase *)0x0)
      goto LAB_14a00c8cb;
      pUVar5 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res20,pUVar5);
      FVar9 = local_res20;
      if (!bVar2) goto LAB_14a00c8cb;
    }
    else {
      if ((FPCGMetadataAttributeBase *)local_res20.Handle != (FPCGMetadataAttributeBase *)0x0) {
        UE::GC::MarkAsReachable(local_res20.Handle);
        goto LAB_14a00c8a7;
      }
LAB_14a00c8cb:
      FVar9.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_e8,"Output data");
    if ((FPCGMetadataAttributeBase *)FVar9.Handle == (FPCGMetadataAttributeBase *)0x0) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)local_1a8,L"Expected \'%s\' to be not null.");
      (*pcVar1)(this,local_1a8,0);
      if ((FName)local_1a8._0_8_ != (FName)0x0) {
        FMemory::Free((void *)local_1a8._0_8_);
      }
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (!bVar2) {
      iVar4 = (**(code **)(*(longlong *)FVar9.Handle + 0x488))(FVar9.Handle);
      ::FString::FString(&local_d8,"Output point data count");
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_d8.Data.ArrayNum != 0) {
        FVar10.Data = local_d8.Data.AllocatorInstance.Data;
      }
      bVar2 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,iVar4,100);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        local_1a8._0_4_ = *(uint *)&(pUVar6->ValueTarget).field_0x14;
        local_1a8._4_4_ = *(uint *)&(pUVar6->ValueTarget).field_0x18;
        local_1a8[8] = PCGMetadataDomainID::Default.Flag;
        local_1a8._9_3_ = PCGMetadataDomainID::Default._1_3_;
        local_1a8._12_4_ = PCGMetadataDomainID::Default.CustomFlag;
        local_198 = PCGMetadataDomainID::Default.DebugName;
        local_88.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
        local_88.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
        local_88.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
        local_88.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
        local_88.Name = (FName)local_1a8._0_8_;
        FVar9.Handle = (UObject *)
                       UPCGMetadata::GetConstAttribute
                                 (*(UPCGMetadata **)&FVar9.Handle[1].field_0x10,&local_88);
        if (((FPCGMetadataAttributeBase *)FVar9.Handle == (FPCGMetadataAttributeBase *)0x0) ||
           (*(short *)&FVar9.Handle[2].field_0x20 != 1)) {
          FVar9.Handle = (UObject *)0x0;
        }
        ::FString::FString(&local_c8,"Noise Attribute Created");
        if ((FPCGMetadataAttributeBase *)FVar9.Handle == (FPCGMetadataAttributeBase *)0x0) {
          pcVar1 = *(code **)(*(longlong *)this + 0x28);
          ::FString::PrintfImpl(&local_a8,L"Expected \'%s\' to be not null.");
          (*pcVar1)(this,&local_a8,0);
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (!bVar2) {
          bVar2 = true;
          goto LAB_14a00ca69;
        }
      }
    }
  }
  bVar2 = false;
LAB_14a00ca69:
  if (local_res18 != (FPCGContext *)0x0) {
    (**(code **)local_res18->_padding_)(local_res18,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  if (local_188.OutputData.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.OutputData.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_188.OutputData.TaggedData.AllocatorInstance.Data,
             local_188.OutputData.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_188.OutputData.TaggedData.AllocatorInstance.Data !=
      (FPCGTaggedData *)0x0) {
    FMemory::Free(local_188.OutputData.TaggedData.AllocatorInstance.Data);
  }
  if (local_188.InputData.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.InputData.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_188.InputData.TaggedData.AllocatorInstance.Data,
             local_188.InputData.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_188.InputData.TaggedData.AllocatorInstance.Data !=
      (FPCGTaggedData *)0x0) {
    FMemory::Free(local_188.InputData.TaggedData.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetBeautifiedTestName @ 14a00cb00

FString * __thiscall
FPCGSpatialNoise_Perlin2D::GetBeautifiedTestName
          (FPCGSpatialNoise_Perlin2D *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.Noise.Perlin2D");
  return __return_storage_ptr__;
}

