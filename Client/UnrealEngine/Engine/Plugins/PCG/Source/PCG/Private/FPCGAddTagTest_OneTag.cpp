// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f73540

EAutomationTestFlags __thiscall FPCGAddTagTest_OneTag::GetTestFlags(FPCGAddTagTest_OneTag *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f73550

bool __thiscall FPCGAddTagTest_OneTag::IsStressTest(FPCGAddTagTest_OneTag *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f73560

uint __thiscall FPCGAddTagTest_OneTag::GetRequiredDeviceNum(FPCGAddTagTest_OneTag *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f73570

FString * __thiscall
FPCGAddTagTest_OneTag::GetTestSourceFileName
          (FPCGAddTagTest_OneTag *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAddTagTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f735a0

int __thiscall FPCGAddTagTest_OneTag::GetTestSourceFileLine(FPCGAddTagTest_OneTag *this)

{
  return 0x30;
}

// GetTests @ 149f735b0

/* WARNING: Removing unreachable block (ram,0x000149f7369d) */
/* WARNING: Removing unreachable block (ram,0x000149f73768) */

void __thiscall
FPCGAddTagTest_OneTag::GetTests
          (FPCGAddTagTest_OneTag *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.AddTag.OneTag");
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

// RunTest @ 149f73790

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FPCGAddTagTest_OneTag::RunTest(FPCGAddTagTest_OneTag *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FPCGContext *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  UPCGAddTagSettings *pUVar10;
  UPCGBasePointData *pUVar11;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar12;
  ForAnyElementType FVar13;
  FString *pFVar14;
  FPCGDataPtrWrapper *this_00;
  FPCGContext *local_res18;
  UClass *local_res20;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  TArray<FString,TSizedDefaultAllocator<32>_> local_128;
  FString local_118;
  TSharedPtr<IPCGElement,1> local_108;
  FString local_f8;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_e8;
  FTestData local_b8;
  
  local_res20 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_b8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_res20);
  local_e8._0_8_ = 0;
  local_e8._40_8_ = 0;
  PCGTestsCommon::GenerateSettings<UPCGAddTagSettings>(&local_b8,&local_e8);
  pUVar10 = CastChecked<UPCGAddTagSettings,UPCGSettings>(local_b8.Settings);
  UPCGSettings::GetElement(local_b8.Settings,&local_108);
  ::FString::FString(&local_178,"Feature");
  pFVar14 = &pUVar10->TagsToAdd;
  if (pFVar14 != &local_178) {
    pFVar3 = (pFVar14->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar14->Data).AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
    (pUVar10->TagsToAdd).Data.ArrayNum = local_178.Data.ArrayNum;
    (pUVar10->TagsToAdd).Data.ArrayMax = local_178.Data.ArrayMax;
    local_178.Data.ArrayNum = 0;
    local_178.Data.ArrayMax = 0;
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  PCGTestsCommon::FTestData::InitializeTestContext(&local_b8,(UPCGNode *)&local_res18);
  pFVar5 = local_res18;
  piVar1 = &(local_res18->InputData).TaggedData.ArrayMax;
  iVar8 = (local_res18->InputData).TaggedData.ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)&local_res18->InputData,piVar1);
  }
  (pFVar5->InputData).TaggedData.ArrayNum = iVar8 + 1;
  this_00 = (FPCGDataPtrWrapper *)
            ((pFVar5->InputData).TaggedData.AllocatorInstance.Data + (longlong)iVar8 * 0x78);
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
  pUVar11 = PCGTestsCommon::CreateBasePointData();
  FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)pUVar11);
  this_00[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  do {
    if ((local_108.Object == (IPCGElement *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    bVar6 = IPCGElement::Execute(local_108.Object,local_res18);
  } while (!bVar6);
  iVar8 = (local_res18->InputData).TaggedData.ArrayNum;
  ::FString::FString(&local_158,"Number of Inputs");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_158.Data.ArrayNum != 0) {
    FVar13.Data = local_158.Data.AllocatorInstance.Data;
  }
  bVar6 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar8,2)
  ;
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  pFVar5 = local_res18;
  if (bVar6) {
    iVar8 = (local_res18->OutputData).TaggedData.ArrayNum;
    ::FString::FString(&local_148,"Number of Outputs");
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_148.Data.ArrayNum != 0) {
      FVar13.Data = local_148.Data.AllocatorInstance.Data;
    }
    bVar6 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar8,1);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      if (((pFVar5->OutputData).TaggedData.ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pFVar3 = (pFVar5->OutputData).TaggedData.AllocatorInstance.Data;
      iVar8 = *(int *)(pFVar3 + 0x18);
      iVar2 = *(int *)(pFVar3 + 0x44);
      ::FString::FString(&local_138,"Tag count");
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_138.Data.ArrayNum != 0) {
        FVar13.Data = local_138.Data.AllocatorInstance.Data;
      }
      bVar6 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar8 - iVar2,1);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        if (*(int *)(pFVar3 + 0x18) != *(int *)(pFVar3 + 0x44)) {
          pTVar12 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Array
                              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                               (pFVar3 + 0x10),&local_128);
          if ((pTVar12->ArrayNum < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          ::FString::FString(&local_f8,(FString *)(pTVar12->AllocatorInstance).Data);
          DestructItems<FString,int>((FString *)local_128.AllocatorInstance.Data,local_128.ArrayNum)
          ;
          if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.AllocatorInstance.Data);
          }
          ::FString::FString(&local_168,"Feature");
          iVar8 = local_168.Data.ArrayNum + -1;
          FVar13.Data = local_168.Data.AllocatorInstance.Data;
          if (local_168.Data.ArrayNum == 0) {
            iVar8 = 0;
            FVar13.Data = (FScriptContainerElement *)L"";
          }
          uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar13.Data);
          iVar8 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                  FindIndexByHash<FString>
                            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                             (pFVar3 + 0x10),uVar9,&local_168);
          ::FString::FString(&local_118,"Tags contains Feature");
          FVar13.Data = (FScriptContainerElement *)L"";
          if (local_118.Data.ArrayNum != 0) {
            FVar13.Data = local_118.Data.AllocatorInstance.Data;
          }
          bVar6 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar8 != -1);
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
          if (!bVar6) {
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
            goto LAB_149f73bcf;
          }
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
        }
        bVar6 = true;
        goto LAB_149f73bd1;
      }
    }
  }
LAB_149f73bcf:
  bVar6 = false;
LAB_149f73bd1:
  if (local_res18 != (FPCGContext *)0x0) {
    (**(code **)local_res18->_padding_)(local_res18,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_b8);
  return bVar6;
}

// GetBeautifiedTestName @ 149f73c40

FString * __thiscall
FPCGAddTagTest_OneTag::GetBeautifiedTestName
          (FPCGAddTagTest_OneTag *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AddTag.OneTag");
  return __return_storage_ptr__;
}

