// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f72e80

EAutomationTestFlags __thiscall FPCGAddTagTest_ZeroTags::GetTestFlags(FPCGAddTagTest_ZeroTags *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f72e90

bool __thiscall FPCGAddTagTest_ZeroTags::IsStressTest(FPCGAddTagTest_ZeroTags *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f72ea0

uint __thiscall FPCGAddTagTest_ZeroTags::GetRequiredDeviceNum(FPCGAddTagTest_ZeroTags *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f72eb0

FString * __thiscall
FPCGAddTagTest_ZeroTags::GetTestSourceFileName
          (FPCGAddTagTest_ZeroTags *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAddTagTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f72ee0

int __thiscall FPCGAddTagTest_ZeroTags::GetTestSourceFileLine(FPCGAddTagTest_ZeroTags *this)

{
  return 0xb;
}

// GetTests @ 149f72ef0

/* WARNING: Removing unreachable block (ram,0x000149f72fdd) */
/* WARNING: Removing unreachable block (ram,0x000149f730a8) */

void __thiscall
FPCGAddTagTest_ZeroTags::GetTests
          (FPCGAddTagTest_ZeroTags *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.AddTag.ZeroTags");
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

// RunTest @ 149f730d0

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

bool __thiscall FPCGAddTagTest_ZeroTags::RunTest(FPCGAddTagTest_ZeroTags *this,FString *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UPCGBasePointData *pUVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  FPCGDataPtrWrapper *this_00;
  TObjectPtr<UPCGSettingsInterface>_u_0 TVar11;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [24];
  int local_170;
  FString local_168;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_158;
  int local_150;
  TSharedPtr<IPCGElement,1> local_148;
  undefined1 local_138 [48];
  FTestData local_108;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  int local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_188._8_8_ = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_188._8_8_ != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_188._8_8_);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_108,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)((longlong)local_188 + 8));
  local_138._0_8_ = 0;
  local_138._40_8_ = (FScriptContainerElement *)0x0;
  PCGTestsCommon::GenerateSettings<UPCGAddTagSettings>
            (&local_108,(TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> *)local_138);
  UPCGSettings::GetElement(local_108.Settings,&local_148);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_108,(UPCGNode *)local_188);
  uVar3 = local_188._0_8_;
  piVar1 = &(((FPCGDataCollection *)(local_188._0_8_ + 8))->TaggedData).ArrayMax;
  iVar7 = (((FPCGDataCollection *)(local_188._0_8_ + 8))->TaggedData).ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)(local_188._0_8_ + 8),piVar1);
  }
  (((FPCGDataCollection *)(uVar3 + 8))->TaggedData).ArrayNum = iVar7 + 1;
  this_00 = (FPCGDataPtrWrapper *)
            ((((FPCGDataCollection *)(uVar3 + 8))->TaggedData).AllocatorInstance.Data +
            (longlong)iVar7 * 0x78);
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
  pUVar8 = PCGTestsCommon::CreateBasePointData();
  FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)pUVar8);
  this_00[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  do {
    if (local_148.Object == (IPCGElement *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    bVar5 = IPCGElement::Execute(local_148.Object,(FPCGContext *)local_188._0_8_);
  } while (!bVar5);
  iVar7 = (((FPCGDataCollection *)(local_188._0_8_ + 8))->TaggedData).ArrayNum;
  ::FString::FString((FString *)(local_188 + 0x10),"Number of Inputs");
  pwVar9 = L"";
  if (local_170 != 0) {
    pwVar9 = (wchar_t *)local_188._16_8_;
  }
  bVar5 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar9,iVar7,2);
  if ((wchar_t *)local_188._16_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_188._16_8_);
  }
  if (bVar5) {
    iVar7 = (((FPCGDataCollection *)(local_188._0_8_ + 0x38))->TaggedData).ArrayNum;
    ::FString::FString(&local_168,"Number of Outputs");
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_168.Data.ArrayNum != 0) {
      FVar10.Data = local_168.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar10.Data,iVar7,1);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    uVar3 = local_188._0_8_;
    if (bVar5) {
      if ((((FPCGDataCollection *)(local_188._0_8_ + 0x38))->TaggedData).ArrayNum < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
      }
      local_78._0_8_ = (FScriptContainerElement *)0x0;
      local_78._8_8_ = 0;
      local_58 = (void *)0x0;
      local_50 = 0;
      local_4c = 0x80;
      local_48 = 0xffffffff;
      local_44 = 0;
      local_38 = (ForElementType<FSetElementId>)0x0;
      local_30 = 0;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_78,
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                 ((((FPCGDataCollection *)(uVar3 + 0x38))->TaggedData).AllocatorInstance.Data + 0x10
                 ));
      iVar7 = local_44;
      uVar4 = local_78._8_4_;
      ::FString::FString((FString *)&local_158.ObjectPtr,"Tag count");
      TVar11 = (TObjectPtr<UPCGSettingsInterface>_u_0)L"";
      if (local_150 != 0) {
        TVar11 = local_158;
      }
      bVar5 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)TVar11.DebugPtr,uVar4 - iVar7,0);
      if (local_158.DebugPtr != (UPCGSettingsInterface *)0x0) {
        FMemory::Free(local_158.DebugPtr);
      }
      local_30 = 0;
      if (local_38 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_38);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_78,0,local_78._8_4_);
      iVar7 = SUB84(local_78._8_8_,4);
      local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
      if (iVar7 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
      }
      local_48 = 0xffffffff;
      local_44 = 0;
      local_50 = 0;
      if (0x80 < local_4c) {
        local_4c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
      }
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_78._0_8_);
      }
      goto LAB_149f7346c;
    }
  }
  bVar5 = false;
LAB_149f7346c:
  if ((FPCGContext *)local_188._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_188._0_8_)(local_188._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_108);
  return bVar5;
}

// GetBeautifiedTestName @ 149f734d0

FString * __thiscall
FPCGAddTagTest_ZeroTags::GetBeautifiedTestName
          (FPCGAddTagTest_ZeroTags *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AddTag.ZeroTags");
  return __return_storage_ptr__;
}

