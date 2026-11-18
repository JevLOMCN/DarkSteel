// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// GetTestFlags @ 149fa2290

EAutomationTestFlags __thiscall
FPCGAttributeNoiseDensityTest::GetTestFlags(FPCGAttributeNoiseDensityTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fa22a0

bool __thiscall FPCGAttributeNoiseDensityTest::IsStressTest(FPCGAttributeNoiseDensityTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fa22b0

uint __thiscall
FPCGAttributeNoiseDensityTest::GetRequiredDeviceNum(FPCGAttributeNoiseDensityTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fa22c0

FString * __thiscall
FPCGAttributeNoiseDensityTest::GetTestSourceFileName
          (FPCGAttributeNoiseDensityTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeNoiseTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fa22f0

int __thiscall
FPCGAttributeNoiseDensityTest::GetTestSourceFileLine(FPCGAttributeNoiseDensityTest *this)

{
  return 0xc;
}

// GetTests @ 149fa2300

/* WARNING: Removing unreachable block (ram,0x000149fa23ed) */
/* WARNING: Removing unreachable block (ram,0x000149fa24b8) */

void __thiscall
FPCGAttributeNoiseDensityTest::GetTests
          (FPCGAttributeNoiseDensityTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeNoise.Density");
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

// RunTest @ 149fa24e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FPCGAttributeNoiseDensityTest::RunTest(FPCGAttributeNoiseDensityTest *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  UPCGSettings *pUVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  byte bVar8;
  UClass *pUVar9;
  UPCGBasePointData *pUVar10;
  longlong lVar11;
  FPCGTaggedData *this_00;
  FString *pFVar12;
  float *pfVar13;
  int *piVar14;
  int iVar15;
  wchar_t *pwVar16;
  uint uVar17;
  wchar_t *pwVar18;
  undefined1 auStackY_398 [32];
  byte local_358 [8];
  undefined4 *local_350;
  int local_348;
  int local_344;
  int local_340;
  float local_33c;
  TArray<float,TSizedDefaultAllocator<32>_> local_338;
  TArray<float,TSizedDefaultAllocator<32>_> local_328;
  TArray<float,TSizedDefaultAllocator<32>_> local_318;
  TArray<float,TSizedDefaultAllocator<32>_> local_308;
  TArray<float,TSizedDefaultAllocator<32>_> local_2f8;
  FPCGAttributeNoiseDensityTest *local_2e8;
  byte *local_2e0;
  FPCGAttributeNoiseDensityTest *local_2d8;
  FTestData *local_2d0;
  IPCGElement *local_2c8;
  TReferenceControllerBase<1> *local_2c0;
  UPCGSettings *local_2b8;
  UPCGSettings *local_2b0;
  FPCGAttributeNoiseDensityTest *local_2a8;
  FTestData *local_2a0;
  IPCGElement *local_298;
  TReferenceControllerBase<1> *local_290;
  UPCGSettings *local_288;
  UClass *local_280;
  TSharedPtr<IPCGElement,1> local_278;
  longlong local_268;
  int local_260;
  int local_25c;
  int local_258;
  int local_254 [3];
  FTestData local_248;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_188;
  undefined4 local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  TObjectPtr<UPCGData_const_>_u_0 local_138;
  undefined8 local_130;
  undefined1 local_128 [24];
  undefined8 uStack_110;
  void *local_108;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  void *local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_280 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_280 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_280);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_248,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_280);
  iVar15 = 0;
  local_188._0_8_ = 0;
  local_188._40_8_ = 0;
  PCGTestsCommon::GenerateSettings<UPCGAttributeNoiseSettings>(&local_248,&local_188);
  pUVar4 = local_248.Settings;
  if (local_248.Settings == (UPCGSettings *)0x0) {
    pFVar12 = GetTypeName<UPCGAttributeNoiseSettings>(&local_1b8);
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar16);
  }
  pUVar9 = Z_Construct_UClass_UPCGAttributeNoiseSettings_NoRegister();
  iVar1 = (int)pUVar9->_padding_;
  if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar9->_padding_)) {
    pFVar12 = GetTypeName<UPCGAttributeNoiseSettings>(&local_1a8);
    pwVar16 = L"";
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    pFVar12 = GetFullNameForCastLogError<UPCGSettings>(&local_198,pUVar4);
    if ((pFVar12->Data).ArrayNum != 0) {
      pwVar16 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar16,pwVar18);
  }
  FPCGAttributePropertySelector::SetPointProperty
            ((FPCGAttributePropertySelector *)(pUVar4 + 1),Density,true);
  UPCGSettings::GetElement(local_248.Settings,&local_278);
  pUVar10 = PCGTestsCommon::CreateEmptyBasePointData();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UPCGBasePointData *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (**(code **)(pUVar10->_padding_ + 0x490))(pUVar10,5,1);
  (**(code **)(pUVar10->_padding_ + 0x4f0))(pUVar10,&local_268,1);
  (**(code **)(pUVar10->_padding_ + 0x4c8))(pUVar10,&local_350,1);
  fVar3 = __real_3f800000;
  uVar17 = local_248.Seed;
  do {
    uVar17 = uVar17 * 0xbb38435 + 0x3619636b;
    if ((local_340 <= iVar15) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < NumElements)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                           ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    if (iVar15 == iVar15 % local_344) {
      pfVar13 = (float *)((longlong)(iVar15 % local_344) * (longlong)local_348 + (longlong)local_350
                         );
    }
    else {
      pfVar13 = &local_33c;
    }
    *pfVar13 = (float)(uVar17 >> 9 | 0x3f800000) - fVar3;
    if ((local_258 <= iVar15) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < NumElements)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                           ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    if (iVar15 == iVar15 % local_25c) {
      piVar14 = (int *)((longlong)(iVar15 % local_25c) * (longlong)local_260 + local_268);
    }
    else {
      piVar14 = local_254;
    }
    *piVar14 = iVar15;
    iVar15 = iVar15 + 1;
  } while (iVar15 < 5);
  local_f0 = 0;
  local_e0 = 0;
  local_128._16_8_ = 0;
  uStack_110 = 0;
  local_d0 = 0x100;
  local_138.DebugPtr = (UPCGData *)0x0;
  local_130 = 0;
  local_128._0_8_ = (FScriptContainerElement *)0x0;
  local_128._8_8_ = 0;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = (void *)0x0;
  local_d8 = 0;
  local_cc = 0;
  local_c4 = 0xffffffff;
  if (local_248.InputData.TaggedData.ArrayNum == local_248.InputData.TaggedData.ArrayMax) {
    local_248.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_248.InputData,
                    &local_248.InputData.TaggedData.ArrayMax);
  }
  lVar11 = (longlong)local_248.InputData.TaggedData.ArrayNum;
  local_248.InputData.TaggedData.ArrayNum = local_248.InputData.TaggedData.ArrayNum + 1;
  this_00 = FPCGTaggedData::FPCGTaggedData
                      ((FPCGTaggedData *)
                       (local_248.InputData.TaggedData.AllocatorInstance.Data + lVar11 * 0x78),
                       (FPCGTaggedData *)&local_138.ObjectPtr);
  local_e0 = local_e0 & 0xffffffff00000000;
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_128,0,local_128._8_4_);
  iVar15 = SUB84(local_128._8_8_,4);
  local_128._8_8_ = local_128._8_8_ & 0xffffffff00000000;
  if (iVar15 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
  }
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_100 = 0;
  if (0x80 < local_fc) {
    local_fc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),0);
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_138.ObjectPtr);
  FPCGDataPtrWrapper::operator=(&this_00->Data,(UPCGData *)pUVar10);
  this_00->Pin = PCGPinConstants::DefaultInputLabel;
  local_2a0 = &local_248;
  local_298 = local_278.Object;
  local_290 = local_278.SharedReferenceCount.ReferenceController;
  if (local_278.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_288 = pUVar4;
  local_2e0 = local_358;
  local_2d0 = &local_248;
  local_358[0] = 1;
  local_2c8 = local_278.Object;
  local_2c0 = local_278.SharedReferenceCount.ReferenceController;
  if (local_278.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2b8 = pUVar4;
  local_2b0 = pUVar4;
  pUVar4[1].CacheLock.CriticalSection.Opaque2[1] = 0;
  *(undefined4 *)pUVar4[1].CacheLock.CriticalSection.Opaque3 = 0x3f800000;
  *(undefined1 *)((longlong)pUVar4[1].CacheLock.CriticalSection.Opaque3 + 4) = 0;
  local_2e8 = this;
  local_2d8 = this;
  local_2a8 = this;
  `FPCGAttributeNoiseDensityTest::RunTest'::__l2::<lambda_2>::operator()(&local_2e8);
  *(undefined1 *)((longlong)pUVar4[1].CacheLock.CriticalSection.Opaque3 + 4) = 1;
  `FPCGAttributeNoiseDensityTest::RunTest'::__l2::<lambda_2>::operator()(&local_2e8);
  pUVar4[1].CacheLock.CriticalSection.Opaque2[1] = 0;
  *(undefined4 *)pUVar4[1].CacheLock.CriticalSection.Opaque3 = 0x3f000000;
  *(undefined1 *)((longlong)pUVar4[1].CacheLock.CriticalSection.Opaque3 + 4) = 0;
  `FPCGAttributeNoiseDensityTest::RunTest'::__l2::<lambda_2>::operator()(&local_2e8);
  *(undefined1 *)((longlong)pUVar4[1].CacheLock.CriticalSection.Opaque3 + 4) = 1;
  `FPCGAttributeNoiseDensityTest::RunTest'::__l2::<lambda_2>::operator()(&local_2e8);
  pUVar4[1].CacheLock.CriticalSection.Opaque2[1] = 0x3f000000;
  *(undefined4 *)pUVar4[1].CacheLock.CriticalSection.Opaque3 = 0x3f800000;
  *(undefined1 *)((longlong)pUVar4[1].CacheLock.CriticalSection.Opaque3 + 4) = 0;
  `FPCGAttributeNoiseDensityTest::RunTest'::__l2::<lambda_2>::operator()(&local_2e8);
  *(undefined1 *)((longlong)pUVar4[1].CacheLock.CriticalSection.Opaque3 + 4) = 1;
  `FPCGAttributeNoiseDensityTest::RunTest'::__l2::<lambda_2>::operator()(&local_2e8);
  *(undefined8 *)(pUVar4[1].CacheLock.CriticalSection.Opaque2 + 1) = 0x3f800000;
  *(undefined1 *)((longlong)pUVar4[1].CacheLock.CriticalSection.Opaque3 + 4) = 0;
  `FPCGAttributeNoiseDensityTest::RunTest'::__l2::<lambda_2>::operator()(&local_2e8);
  *(undefined1 *)((longlong)pUVar4[1].CacheLock.CriticalSection.Opaque3 + 4) = 1;
  `FPCGAttributeNoiseDensityTest::RunTest'::__l2::<lambda_2>::operator()(&local_2e8);
  *(undefined8 *)(pUVar4[1].CacheLock.CriticalSection.Opaque2 + 1) = 0x3f000000;
  *(undefined1 *)((longlong)pUVar4[1].CacheLock.CriticalSection.Opaque3 + 4) = 0;
  `FPCGAttributeNoiseDensityTest::RunTest'::__l2::<lambda_2>::operator()(&local_2e8);
  *(undefined1 *)((longlong)pUVar4[1].CacheLock.CriticalSection.Opaque3 + 4) = 1;
  `FPCGAttributeNoiseDensityTest::RunTest'::__l2::<lambda_2>::operator()(&local_2e8);
  pUVar4[1].CacheLock.CriticalSection.Opaque2[1] = 0x3f800000;
  *(undefined4 *)pUVar4[1].CacheLock.CriticalSection.Opaque3 = 0x3f000000;
  *(undefined1 *)((longlong)pUVar4[1].CacheLock.CriticalSection.Opaque3 + 4) = 0;
  `FPCGAttributeNoiseDensityTest::RunTest'::__l2::<lambda_2>::operator()(&local_2e8);
  *(undefined1 *)((longlong)pUVar4[1].CacheLock.CriticalSection.Opaque3 + 4) = 1;
  `FPCGAttributeNoiseDensityTest::RunTest'::__l2::<lambda_2>::operator()(&local_2e8);
  bVar8 = local_358[0];
  uStack_b0 = _UNK_150689628;
  local_b8 = ___xmm_3f0000003f0000003f0000003f000000;
  *(undefined1 *)((longlong)pUVar4[1].CacheLock.CriticalSection.Opaque3 + 4) = 0;
  pUVar4[1].CacheLock.CriticalSection.Opaque2[1] = 0x3f000000;
  *(undefined4 *)pUVar4[1].CacheLock.CriticalSection.Opaque3 = 0x3f000000;
  *(undefined1 *)pUVar4[1].CacheLock.CriticalSection.Opaque2 = 0;
  local_a8 = 0x3f000000;
  local_338.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_338.ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,5,0,&local_338.AllocatorInstance,5,&local_338.ArrayMax);
  *(undefined8 *)local_338.AllocatorInstance.Data = local_b8;
  *(undefined8 *)(local_338.AllocatorInstance.Data + 8) = uStack_b0;
  *(undefined4 *)(local_338.AllocatorInstance.Data + 0x10) = local_a8;
  bVar5 = `FPCGAttributeNoiseDensityTest::RunTest'::__l2::<lambda_1>::operator()
                    (&local_2a8,&local_338);
  *(undefined8 *)(pUVar4[1].CacheLock.CriticalSection.Opaque2 + 1) = 0;
  *(undefined1 *)pUVar4[1].CacheLock.CriticalSection.Opaque2 = 1;
  local_90 = 0;
  local_328.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.ArrayNum = 5;
  local_a0 = 0;
  uStack_98 = 0;
  local_358[0] = bVar5 & bVar8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,5,0,&local_328.AllocatorInstance,5,&local_328.ArrayMax);
  *(undefined8 *)local_328.AllocatorInstance.Data = local_a0;
  *(undefined8 *)(local_328.AllocatorInstance.Data + 8) = uStack_98;
  *(undefined4 *)(local_328.AllocatorInstance.Data + 0x10) = local_90;
  bVar7 = `FPCGAttributeNoiseDensityTest::RunTest'::__l2::<lambda_1>::operator()
                    (&local_2a8,&local_328);
  uStack_80 = _UNK_15076b1f8;
  local_88 = ___xmm_3f8000003f8000003f8000003f800000;
  bVar8 = bVar7 & bVar5 & bVar8;
  pUVar4[1].CacheLock.CriticalSection.Opaque2[1] = 0x3f800000;
  *(undefined4 *)pUVar4[1].CacheLock.CriticalSection.Opaque3 = 0x3f800000;
  *(undefined1 *)pUVar4[1].CacheLock.CriticalSection.Opaque2 = 2;
  local_78 = 0x3f800000;
  local_318.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_318.ArrayNum = 5;
  local_358[0] = bVar8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,5,0,&local_318.AllocatorInstance,5,&local_318.ArrayMax);
  *(undefined8 *)local_318.AllocatorInstance.Data = local_88;
  *(undefined8 *)(local_318.AllocatorInstance.Data + 8) = uStack_80;
  *(undefined4 *)(local_318.AllocatorInstance.Data + 0x10) = local_78;
  bVar5 = `FPCGAttributeNoiseDensityTest::RunTest'::__l2::<lambda_1>::operator()
                    (&local_2a8,&local_318);
  bVar8 = bVar5 & bVar8;
  *(undefined8 *)(pUVar4[1].CacheLock.CriticalSection.Opaque2 + 1) = 0;
  *(undefined1 *)pUVar4[1].CacheLock.CriticalSection.Opaque2 = 3;
  local_358[0] = bVar8;
  if ((local_340 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar5
     )) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  local_158 = *local_350;
  if ((local_340 < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar5
     )) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if ((int)(1 % (longlong)local_344) == 1) {
    pfVar13 = (float *)((longlong)local_348 + (longlong)local_350);
  }
  else {
    pfVar13 = &local_33c;
  }
  fStack_154 = *pfVar13;
  if ((local_340 < 3) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar5
     )) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if ((int)(2 % (longlong)local_344) == 2) {
    pfVar13 = (float *)((longlong)local_350 + (longlong)local_348 * 2);
  }
  else {
    pfVar13 = &local_33c;
  }
  fStack_150 = *pfVar13;
  if ((local_340 < 4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar5
     )) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if ((int)(3 % (longlong)local_344) == 3) {
    pfVar13 = (float *)((longlong)local_350 + (longlong)local_348 * 3);
  }
  else {
    pfVar13 = &local_33c;
  }
  fStack_14c = *pfVar13;
  if ((local_340 < 5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar5
     )) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if ((int)(4 % (longlong)local_344) == 4) {
    pfVar13 = (float *)(local_350 + local_348);
  }
  else {
    pfVar13 = &local_33c;
  }
  local_148 = *pfVar13;
  local_308.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_308.ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,5,0,&local_308.AllocatorInstance,5,&local_308.ArrayMax);
  *(ulonglong *)local_308.AllocatorInstance.Data = CONCAT44(fStack_154,local_158);
  *(ulonglong *)(local_308.AllocatorInstance.Data + 8) = CONCAT44(fStack_14c,fStack_150);
  *(float *)(local_308.AllocatorInstance.Data + 0x10) = local_148;
  bVar5 = `FPCGAttributeNoiseDensityTest::RunTest'::__l2::<lambda_1>::operator()
                    (&local_2a8,&local_308);
  local_60 = 0;
  *(undefined8 *)(pUVar4[1].CacheLock.CriticalSection.Opaque2 + 1) = 0;
  *(undefined1 *)pUVar4[1].CacheLock.CriticalSection.Opaque2 = 4;
  local_70 = 0;
  uStack_68 = 0;
  local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f8.ArrayNum = 5;
  local_358[0] = bVar5 & bVar8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,5,0,&local_2f8.AllocatorInstance,5,&local_2f8.ArrayMax);
  *(undefined8 *)local_2f8.AllocatorInstance.Data = local_70;
  *(undefined8 *)(local_2f8.AllocatorInstance.Data + 8) = uStack_68;
  *(undefined4 *)(local_2f8.AllocatorInstance.Data + 0x10) = local_60;
  bVar7 = `FPCGAttributeNoiseDensityTest::RunTest'::__l2::<lambda_1>::operator()
                    (&local_2a8,&local_2f8);
  bVar7 = (bool)(bVar7 & bVar5 & bVar8);
  local_358[0] = bVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_290);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_278.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_248);
  return bVar7;
}

// GetBeautifiedTestName @ 149fa3060

FString * __thiscall
FPCGAttributeNoiseDensityTest::GetBeautifiedTestName
          (FPCGAttributeNoiseDensityTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributeNoise.Density");
  return __return_storage_ptr__;
}

// operator() @ 149ff2240

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
`FPCGAttributeNoiseDensityTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  float fVar1;
  float fVar2;
  FAutomationTestBase *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  UClass *pUVar15;
  UPCGBasePointData *pUVar16;
  UPCGBasePointData *pUVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  FObjectPtr_u_0 this_00;
  undefined1 auStackY_1f8 [32];
  bool local_1c8;
  undefined1 local_1c0 [24];
  int local_1a8;
  longlong local_1a0;
  undefined1 local_198 [16];
  ForAnyElementType local_188;
  FObjectPtr_u_0 local_180;
  ForAnyElementType local_178;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  longlong local_120;
  int local_118;
  int local_114;
  int local_110;
  FString local_108;
  FString local_f8;
  TVector<double>_u_0 local_e8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined4 local_b7;
  undefined2 local_b3;
  undefined1 local_b1;
  TVector<double>_u_0 local_b0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined4 local_7f;
  undefined2 local_7b;
  undefined1 local_79;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  PCGTestsCommon::FTestData::InitializeTestContext
            (*(FTestData **)((longlong)this + 8),(UPCGNode *)local_1c0);
  do {
    if ((*(longlong *)((longlong)this + 0x10) == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return (bool)uVar12;
    }
    bVar11 = IPCGElement::Execute
                       (*(IPCGElement **)((longlong)this + 0x10),(FPCGContext *)local_1c0._0_8_);
  } while (!bVar11);
  FPCGDataCollection::GetAllSpatialInputs
            ((FPCGDataCollection *)(local_1c0._0_8_ + 8),
             (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_1c0 + 0x10));
  FPCGDataCollection::GetAllSpatialInputs
            ((FPCGDataCollection *)(local_1c0._0_8_ + 0x38),
             (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)local_198);
  uVar8 = local_198._8_4_;
  iVar13 = local_1a8;
  pFVar3 = *(FAutomationTestBase **)this;
  ::FString::FString(&local_170,"Valid number of outputs");
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_170.Data.ArrayNum != 0) {
    FVar18.Data = local_170.Data.AllocatorInstance.Data;
  }
  bVar11 = FAutomationTestBase::TestEqual(pFVar3,(wchar_t *)FVar18.Data,uVar8,iVar13);
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  fVar7 = __real_38d1b717;
  if (bVar11) {
    local_1c0._8_4_ = 0;
    local_1c8 = true;
    bVar11 = true;
    if (0 < local_1a8) {
      local_1a0 = 0;
      local_178.Data = (FScriptContainerElement *)0x0;
      do {
        FVar18.Data = local_178.Data;
        uVar8 = local_1c0._8_4_;
        uVar19 = ~local_1c0._8_4_;
        uVar20 = 0;
        if ((int)local_1c0._8_4_ < local_1a8) {
          uVar20 = uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        uVar9 = local_1c0._16_8_;
        uVar20 = 0;
        if ((int)uVar8 < (int)local_198._8_4_) {
          uVar20 = uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        uVar10 = local_198._0_8_;
                    /* WARNING: Load size is inaccurate */
        local_188.Data =
             FVar18.Data
             [(longlong)
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(uVar9 + 0x10) + -1)
              + 0x40];
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149ff24b0:
          if ((UPCGSpatialData *)local_188.Data == (UPCGSpatialData *)0x0) goto LAB_149ff24d7;
          pUVar15 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
          bVar11 = FObjectPtr::IsA((FObjectPtr *)&local_188,pUVar15);
          if (!bVar11) goto LAB_149ff24d7;
          FVar18.Data = local_188.Data;
          if ((UPCGSpatialData *)local_188.Data == (UPCGSpatialData *)0x0) goto LAB_149ff24d9;
        }
        else {
          if ((UPCGSpatialData *)local_188.Data != (UPCGSpatialData *)0x0) {
            UE::GC::MarkAsReachable((UObject *)local_188.Data);
            goto LAB_149ff24b0;
          }
LAB_149ff24d7:
          FVar18.Data = (FScriptContainerElement *)(UPCGSpatialData *)0x0;
LAB_149ff24d9:
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InSpatialData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeNoiseTest.cpp"
                              ,0x41,L"");
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
        }
        local_b8 = 0;
        local_b7 = 0;
        local_b3 = 0;
        local_b1 = 0;
        local_e8._s_0.X = 0.0;
        local_e8._s_0.Y = 0.0;
        local_e8._s_0.Z = 0.0;
        uStack_d0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        pUVar16 = UPCGSpatialData::ToBasePointData
                            ((UPCGSpatialData *)FVar18.Data,(FPCGContext *)local_1c0._0_8_,
                             (TBox<double> *)&local_e8._s_0);
        if ((pUVar16 == (UPCGBasePointData *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InPointData",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeNoiseTest.cpp"
                                ,0x44,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        local_180 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)(local_178.Data + uVar10))->Handle;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149ff2588:
          if ((UPCGSpatialData *)local_180.Handle == (UPCGSpatialData *)0x0) goto LAB_149ff25aa;
          pUVar15 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
          bVar11 = FObjectPtr::IsA((FObjectPtr *)&local_180,pUVar15);
          this_00 = local_180;
          if (!bVar11) goto LAB_149ff25aa;
        }
        else {
          if ((UPCGSpatialData *)local_180.Handle != (UPCGSpatialData *)0x0) {
            UE::GC::MarkAsReachable(local_180.Handle);
            goto LAB_149ff2588;
          }
LAB_149ff25aa:
          this_00.Handle = (UObject *)0x0;
        }
        plVar5 = *(longlong **)this;
        ::FString::FString(&local_160,"Valid output SpatialData");
        if ((UPCGSpatialData *)this_00.Handle == (UPCGSpatialData *)0x0) {
          pcVar6 = *(code **)(*plVar5 + 0x28);
          ::FString::PrintfImpl(&local_108,L"Expected \'%s\' to be not null.");
          (*pcVar6)(plVar5,&local_108,0);
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          bVar11 = true;
        }
        else {
          bVar11 = false;
        }
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        if (bVar11) {
          local_1c8 = false;
        }
        else {
          local_80 = 0;
          local_7f = 0;
          local_7b = 0;
          local_79 = 0;
          local_b0._s_0.X = 0.0;
          local_b0._s_0.Y = 0.0;
          local_b0._s_0.Z = 0.0;
          uStack_98 = 0;
          local_90 = 0;
          uStack_88 = 0;
          pUVar17 = UPCGSpatialData::ToBasePointData
                              ((UPCGSpatialData *)this_00.Handle,(FPCGContext *)local_1c0._0_8_,
                               (TBox<double> *)&local_b0._s_0);
          plVar5 = *(longlong **)this;
          ::FString::FString(&local_150,"Valid output PointData");
          if (pUVar17 == (UPCGBasePointData *)0x0) {
            pcVar6 = *(code **)(*plVar5 + 0x28);
            ::FString::PrintfImpl(&local_f8,L"Expected \'%s\' to be not null.");
            (*pcVar6)(plVar5,&local_f8,0);
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
            bVar11 = true;
          }
          else {
            bVar11 = false;
          }
          if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Data.AllocatorInstance.Data);
          }
          if (bVar11) {
            local_1c8 = false;
          }
          else {
            pFVar3 = *(FAutomationTestBase **)this;
            iVar13 = (**(code **)(pUVar17->_padding_ + 0x488))(pUVar17);
            iVar14 = (**(code **)(pUVar16->_padding_ + 0x488))(pUVar16);
            ::FString::FString(&local_140,"Input and output point counts match");
            FVar18.Data = (FScriptContainerElement *)L"";
            if (local_140.Data.ArrayNum != 0) {
              FVar18.Data = local_140.Data.AllocatorInstance.Data;
            }
            bVar11 = FAutomationTestBase::TestEqual(pFVar3,(wchar_t *)FVar18.Data,iVar14,iVar13);
            if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_140.Data.AllocatorInstance.Data);
            }
            if (bVar11) {
              (**(code **)(pUVar17->_padding_ + 0x508))(pUVar17,&local_120);
              iVar13 = param_1->ArrayNum;
              uVar20 = 0;
              if (0 < iVar13) {
                lVar21 = 0;
                do {
                  pFVar3 = *(FAutomationTestBase **)this;
                  uVar19 = 0;
                  if ((int)uVar20 < iVar13) {
                    uVar19 = ~uVar20 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    uVar12 = (*pcVar6)();
                    return (bool)uVar12;
                  }
                  fVar1 = *(float *)((param_1->AllocatorInstance).Data + lVar21);
                  uVar19 = 0;
                  if ((int)uVar20 < local_110) {
                    uVar19 = ~uVar20 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < NumElements)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                          ,0x8b,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    uVar12 = (*pcVar6)();
                    return (bool)uVar12;
                  }
                  fVar2 = *(float *)((longlong)((int)uVar20 % local_114) * (longlong)local_118 +
                                    local_120);
                  ::FString::FString(&local_130,"Correct density");
                  FVar18.Data = (FScriptContainerElement *)L"";
                  if (local_130.Data.ArrayNum != 0) {
                    FVar18.Data = local_130.Data.AllocatorInstance.Data;
                  }
                  bVar11 = FAutomationTestBase::TestEqual
                                     (pFVar3,(wchar_t *)FVar18.Data,fVar2,fVar1,fVar7);
                  local_1c8 = (bool)(local_1c8 & bVar11);
                  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_130.Data.AllocatorInstance.Data);
                  }
                  iVar13 = param_1->ArrayNum;
                  uVar20 = uVar20 + 1;
                  lVar21 = lVar21 + 4;
                } while ((int)uVar20 < iVar13);
              }
            }
            else {
              local_1c8 = false;
            }
          }
        }
        local_1c0._8_4_ = local_1c0._8_4_ + 1;
        local_1a0 = local_1a0 + 1;
        local_178.Data = local_178.Data + 0x78;
        bVar11 = local_1c8;
      } while ((int)local_1c0._8_4_ < local_1a8);
    }
    DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_198._0_8_,local_198._8_4_);
    if ((FName)local_198._0_8_ != (FName)0x0) {
      FMemory::Free((void *)local_198._0_8_);
    }
    DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_1c0._16_8_,local_1a8);
    if ((FPCGTaggedData *)local_1c0._16_8_ != (FPCGTaggedData *)0x0) {
      FMemory::Free((void *)local_1c0._16_8_);
    }
    if ((FPCGContext *)local_1c0._0_8_ != (FPCGContext *)0x0) {
      (**(code **)*(longlong *)local_1c0._0_8_)(local_1c0._0_8_,1);
    }
    pFVar4 = (param_1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  else {
    DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_198._0_8_,local_198._8_4_);
    if ((FName)local_198._0_8_ != (FName)0x0) {
      FMemory::Free((void *)local_198._0_8_);
    }
    DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_1c0._16_8_,local_1a8);
    if ((FPCGTaggedData *)local_1c0._16_8_ != (FPCGTaggedData *)0x0) {
      FMemory::Free((void *)local_1c0._16_8_);
    }
    if ((FPCGContext *)local_1c0._0_8_ != (FPCGContext *)0x0) {
      (**(code **)*(longlong *)local_1c0._0_8_)(local_1c0._0_8_,1);
    }
    pFVar4 = (param_1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    bVar11 = false;
  }
  return bVar11;
}

// operator() @ 149ff4400

void __thiscall `FPCGAttributeNoiseDensityTest::RunTest'::__l2::<lambda_2>::operator()(void *this)

{
  byte bVar1;
  bool bVar2;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  *(undefined1 *)(*(longlong *)((longlong)this + 0x38) + 0x148) = 0;
  bVar1 = **(byte **)((longlong)this + 8);
  bVar2 = __l2::<lambda_1>::operator()((void *)((longlong)this + 0x10),&local_18);
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  **(byte **)((longlong)this + 8) = bVar2 & bVar1;
  *(undefined1 *)(*(longlong *)((longlong)this + 0x38) + 0x148) = 1;
  bVar1 = **(byte **)((longlong)this + 8);
  bVar2 = __l2::<lambda_1>::operator()((void *)((longlong)this + 0x10),&local_18);
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  **(byte **)((longlong)this + 8) = bVar2 & bVar1;
  *(undefined1 *)(*(longlong *)((longlong)this + 0x38) + 0x148) = 2;
  bVar1 = **(byte **)((longlong)this + 8);
  bVar2 = __l2::<lambda_1>::operator()((void *)((longlong)this + 0x10),&local_18);
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  **(byte **)((longlong)this + 8) = bVar2 & bVar1;
  *(undefined1 *)(*(longlong *)((longlong)this + 0x38) + 0x148) = 3;
  bVar1 = **(byte **)((longlong)this + 8);
  bVar2 = __l2::<lambda_1>::operator()((void *)((longlong)this + 0x10),&local_18);
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  **(byte **)((longlong)this + 8) = bVar2 & bVar1;
  *(undefined1 *)(*(longlong *)((longlong)this + 0x38) + 0x148) = 4;
  bVar1 = **(byte **)((longlong)this + 8);
  bVar2 = __l2::<lambda_1>::operator()((void *)((longlong)this + 0x10),&local_18);
  **(byte **)((longlong)this + 8) = bVar2 & bVar1;
  return;
}

