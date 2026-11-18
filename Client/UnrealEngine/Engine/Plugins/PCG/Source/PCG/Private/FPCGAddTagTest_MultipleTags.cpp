// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f73df0

EAutomationTestFlags __thiscall
FPCGAddTagTest_MultipleTags::GetTestFlags(FPCGAddTagTest_MultipleTags *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f73e00

bool __thiscall FPCGAddTagTest_MultipleTags::IsStressTest(FPCGAddTagTest_MultipleTags *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f73e10

uint __thiscall FPCGAddTagTest_MultipleTags::GetRequiredDeviceNum(FPCGAddTagTest_MultipleTags *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f73e20

FString * __thiscall
FPCGAddTagTest_MultipleTags::GetTestSourceFileName
          (FPCGAddTagTest_MultipleTags *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAddTagTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f73e50

int __thiscall FPCGAddTagTest_MultipleTags::GetTestSourceFileLine(FPCGAddTagTest_MultipleTags *this)

{
  return 0x5f;
}

// GetTests @ 149f73e60

/* WARNING: Removing unreachable block (ram,0x000149f73f4d) */
/* WARNING: Removing unreachable block (ram,0x000149f74018) */

void __thiscall
FPCGAddTagTest_MultipleTags::GetTests
          (FPCGAddTagTest_MultipleTags *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.AddTag.MultipleTags");
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

// RunTest @ 149f74040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FPCGAddTagTest_MultipleTags::RunTest(FPCGAddTagTest_MultipleTags *this,FString *param_1)

{
  int *piVar1;
  ulonglong *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  UPCGAddTagSettings *pUVar13;
  UPCGBasePointData *pUVar14;
  TObjectPtr<UPCGSettingsInterface>_u_0 TVar15;
  wchar_t *pwVar16;
  ForAnyElementType FVar17;
  FString *pFVar18;
  FPCGDataPtrWrapper *this_00;
  longlong lVar19;
  ForElementType<FString> FVar20;
  ForElementType<FString> FVar21;
  ulonglong *puVar22;
  undefined1 auStackY_278 [32];
  undefined1 local_238 [8];
  undefined1 local_230 [16];
  undefined8 local_220;
  UClass *local_218;
  FString local_210;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_200;
  int local_1f8;
  FString local_1f0;
  FString local_1e0;
  TSharedPtr<IPCGElement,1> local_1d0;
  ForAnyElementType local_1b8;
  undefined8 local_190;
  FTestData local_188;
  ForElementType<FString> local_f8;
  int local_c0;
  int local_bc;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_b8;
  FString local_68;
  FString local_58;
  FString local_48;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_218 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_218 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_218);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_188,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_218);
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_190 = 0;
  PCGTestsCommon::GenerateSettings<UPCGAddTagSettings>
            (&local_188,(TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> *)&local_1b8);
  pUVar13 = CastChecked<UPCGAddTagSettings,UPCGSettings>(local_188.Settings);
  UPCGSettings::GetElement(local_188.Settings,&local_1d0);
  ::FString::FString((FString *)(local_230 + 8),"Feature, Cool, Purple");
  pFVar18 = &pUVar13->TagsToAdd;
  if (pFVar18 != (FString *)(local_230 + 8)) {
    pFVar3 = (pFVar18->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_230._8_8_;
    (pUVar13->TagsToAdd).Data.ArrayNum = (int)local_220;
    (pUVar13->TagsToAdd).Data.ArrayMax = local_220._4_4_;
    local_220 = 0;
    local_230._8_8_ = (FScriptContainerElement *)0x0;
  }
  if ((FScriptContainerElement *)local_230._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_230._8_8_);
  }
  PCGTestsCommon::FTestData::InitializeTestContext(&local_188,(UPCGNode *)local_230);
  uVar5 = local_230._0_8_;
  piVar1 = &(((FPCGDataCollection *)(local_230._0_8_ + 8))->TaggedData).ArrayMax;
  iVar10 = (((FPCGDataCollection *)(local_230._0_8_ + 8))->TaggedData).ArrayNum;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x878,(ForAnyElementType *)(local_230._0_8_ + 8),piVar1);
  }
  (((FPCGDataCollection *)(uVar5 + 8))->TaggedData).ArrayNum = iVar10 + 1;
  this_00 = (FPCGDataPtrWrapper *)
            ((((FPCGDataCollection *)(uVar5 + 8))->TaggedData).AllocatorInstance.Data +
            (longlong)iVar10 * 0x78);
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
  pUVar14 = PCGTestsCommon::CreateBasePointData();
  FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)pUVar14);
  this_00[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  do {
    if ((local_1d0.Object == (IPCGElement *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    bVar8 = IPCGElement::Execute(local_1d0.Object,(FPCGContext *)local_230._0_8_);
  } while (!bVar8);
  iVar10 = (((FPCGDataCollection *)(local_230._0_8_ + 8))->TaggedData).ArrayNum;
  ::FString::FString(&local_210,"Number of Inputs");
  FVar17.Data = (FScriptContainerElement *)L"";
  if (local_210.Data.ArrayNum != 0) {
    FVar17.Data = local_210.Data.AllocatorInstance.Data;
  }
  bVar8 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,(wchar_t *)FVar17.Data,iVar10,2);
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  uVar5 = local_230._0_8_;
  if (bVar8) {
    iVar10 = (((FPCGDataCollection *)(local_230._0_8_ + 0x38))->TaggedData).ArrayNum;
    ::FString::FString((FString *)&local_200.ObjectPtr,"Number of Outputs");
    TVar15 = (TObjectPtr<UPCGSettingsInterface>_u_0)L"";
    if (local_1f8 != 0) {
      TVar15 = local_200;
    }
    bVar8 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)TVar15.DebugPtr,iVar10,1);
    if (local_200.DebugPtr != (UPCGSettingsInterface *)0x0) {
      FMemory::Free(local_200.DebugPtr);
    }
    if (bVar8) {
      if (((((FPCGDataCollection *)(uVar5 + 0x38))->TaggedData).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      local_b8.Elements._0_8_ = 0;
      local_b8.Elements._8_8_ = 0;
      local_b8.Elements._32_8_ = 0;
      local_b8.Elements._40_4_ = 0;
      local_b8.Elements._44_4_ = 0x80;
      local_b8.Elements._48_4_ = 0xffffffff;
      local_b8.Elements._52_4_ = 0;
      local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_b8.HashSize = 0;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                (&local_b8,
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                 ((((FPCGDataCollection *)(uVar5 + 0x38))->TaggedData).AllocatorInstance.Data + 0x10
                 ));
      uVar7 = local_b8.Elements._52_4_;
      uVar6 = local_b8.Elements._8_4_;
      ::FString::FString(&local_1f0,"Tag count");
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_1f0.Data.ArrayNum != 0) {
        FVar17.Data = local_1f0.Data.AllocatorInstance.Data;
      }
      lVar19 = 3;
      bVar8 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar17.Data,uVar6 - uVar7,3);
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        ::FString::FString(&local_68,"Feature");
        ::FString::FString(&local_58,"Cool");
        ::FString::FString(&local_48,"Purple");
        local_f8.SecondaryData = (ForElementType<FString>)0x0;
        local_c0 = 3;
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                  (0x10,8,3,0,&local_f8,3,&local_bc);
        FVar20 = (ForElementType<FString>)&local_f8;
        if (local_f8.SecondaryData != (ForElementType<FString>)0x0) {
          FVar20 = local_f8.SecondaryData;
        }
        ConstructItems<FString,FString,int>((void *)FVar20,&local_68,3);
        puVar22 = local_38;
        do {
          puVar2 = puVar22 + -2;
          puVar22 = puVar22 + -2;
          lVar19 = lVar19 + -1;
          if ((void *)*puVar2 != (void *)0x0) {
            FMemory::Free((void *)*puVar2);
          }
          iVar10 = local_c0;
        } while (lVar19 != 0);
        FVar20 = (ForElementType<FString>)&local_f8;
        if (local_f8.SecondaryData != (ForElementType<FString>)0x0) {
          FVar20 = local_f8.SecondaryData;
        }
        FVar21 = (ForElementType<FString>)((longlong)local_c0 * 0x10 + (longlong)FVar20);
        while( true ) {
          if (local_c0 != iVar10) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_238);
          }
          if (FVar20 == FVar21) {
            bVar8 = true;
            goto LAB_149f74598;
          }
          if (*(int *)((longlong)FVar20 + 8) == 0) {
            pwVar16 = L"";
            iVar12 = 0;
          }
          else {
            pwVar16 = *(wchar_t **)FVar20;
            iVar12 = *(int *)((longlong)FVar20 + 8) + -1;
          }
          uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar16);
          iVar12 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                   FindIndexByHash<FString>(&local_b8,uVar11,(FString *)FVar20);
          ::FString::PrintfImpl(&local_1e0,L"Tags contains %s");
          FVar17.Data = (FScriptContainerElement *)L"";
          if (local_1e0.Data.ArrayNum != 0) {
            FVar17.Data = local_1e0.Data.AllocatorInstance.Data;
          }
          bVar8 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)this,(wchar_t *)FVar17.Data,iVar12 != -1);
          if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
          if (!bVar8) break;
          FVar20 = (ForElementType<FString>)((longlong)FVar20 + 0x10);
        }
        bVar8 = false;
LAB_149f74598:
        FVar20 = (ForElementType<FString>)&local_f8;
        if (local_f8.SecondaryData != (ForElementType<FString>)0x0) {
          FVar20 = local_f8.SecondaryData;
        }
        DestructItems<FString,int>((FString *)FVar20,local_c0);
        if (local_f8.SecondaryData != (ForElementType<FString>)0x0) {
          FMemory::Free((void *)local_f8.SecondaryData);
        }
      }
      else {
        bVar8 = false;
      }
      local_b8.HashSize = 0;
      if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_b8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_b8.Elements);
      goto LAB_149f74601;
    }
  }
  bVar8 = false;
LAB_149f74601:
  if ((FPCGContext *)local_230._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_230._0_8_)(local_230._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d0.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_188);
  return bVar8;
}

// GetBeautifiedTestName @ 149f74670

FString * __thiscall
FPCGAddTagTest_MultipleTags::GetBeautifiedTestName
          (FPCGAddTagTest_MultipleTags *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AddTag.MultipleTags");
  return __return_storage_ptr__;
}

