// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// GetTestFlags @ 149fcc010

EAutomationTestFlags __thiscall FPCGDensityRemapTest::GetTestFlags(FPCGDensityRemapTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fcc020

bool __thiscall FPCGDensityRemapTest::IsStressTest(FPCGDensityRemapTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fcc030

uint __thiscall FPCGDensityRemapTest::GetRequiredDeviceNum(FPCGDensityRemapTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fcc040

FString * __thiscall
FPCGDensityRemapTest::GetTestSourceFileName
          (FPCGDensityRemapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGDensityRemapTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fcc070

int __thiscall FPCGDensityRemapTest::GetTestSourceFileLine(FPCGDensityRemapTest *this)

{
  return 0xc;
}

// GetTests @ 149fcc080

/* WARNING: Removing unreachable block (ram,0x000149fcc16d) */
/* WARNING: Removing unreachable block (ram,0x000149fcc238) */

void __thiscall
FPCGDensityRemapTest::GetTests
          (FPCGDensityRemapTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.DensityRemap.Basic");
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

// RunTest @ 149fcc260

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

bool __thiscall FPCGDensityRemapTest::RunTest(FPCGDensityRemapTest *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  UPCGSettings *pUVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  UClass *pUVar17;
  UPCGBasePointData *pUVar18;
  longlong lVar19;
  FPCGTaggedData *this_00;
  FString *pFVar20;
  int *piVar21;
  float *pfVar22;
  ForAnyElementType FVar23;
  int iVar24;
  wchar_t *pwVar25;
  wchar_t *pwVar26;
  float fVar27;
  undefined1 auStackY_458 [32];
  TArray<float,TSizedDefaultAllocator<32>_> local_418;
  TArray<float,TSizedDefaultAllocator<32>_> local_408;
  TArray<float,TSizedDefaultAllocator<32>_> local_3f8;
  TArray<float,TSizedDefaultAllocator<32>_> local_3e8;
  TArray<float,TSizedDefaultAllocator<32>_> local_3d8;
  TArray<float,TSizedDefaultAllocator<32>_> local_3c8;
  TArray<float,TSizedDefaultAllocator<32>_> local_3b8;
  TArray<float,TSizedDefaultAllocator<32>_> local_3a8;
  TArray<float,TSizedDefaultAllocator<32>_> local_398;
  FPCGDensityRemapTest *local_388;
  FTestData *local_380;
  IPCGElement *local_378;
  TReferenceControllerBase<1> *local_370;
  UPCGSettings *local_368;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  TSharedPtr<IPCGElement,1> local_2d0;
  longlong local_2c0;
  int local_2b8;
  int local_2b4;
  int local_2b0;
  int local_2ac;
  longlong local_2a8;
  int local_2a0;
  int local_29c;
  int local_298;
  float local_294;
  UClass *local_290;
  FTestData local_288;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_1c8;
  TObjectPtr<UPCGData_const_>_u_0 local_198;
  undefined8 local_190;
  undefined1 local_188 [16];
  TBitArray<FDefaultBitArrayAllocator> local_178;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  void *local_148;
  ulonglong local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_458;
  local_290 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_290 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_290);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_288,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_290);
  iVar24 = 0;
  local_1c8._0_8_ = 0;
  local_1c8._40_8_ = 0;
  PCGTestsCommon::GenerateSettings<UPCGAttributeRemapSettings>(&local_288,&local_1c8);
  pUVar6 = local_288.Settings;
  if (local_288.Settings != (UPCGSettings *)0x0) {
    pUVar17 = Z_Construct_UClass_UPCGAttributeRemapSettings_NoRegister();
    iVar1 = (int)pUVar17->_padding_;
    if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar17->_padding_)) {
      UPCGSettings::GetElement(local_288.Settings,&local_2d0);
      FPCGAttributePropertySelector::SetPointProperty
                ((FPCGAttributePropertySelector *)&pUVar6[1].bHasAnyOverridableHardReferences,
                 Density,true);
      *(undefined1 *)&pUVar6[2].Seed = 1;
      pUVar18 = PCGTestsCommon::CreateEmptyBasePointData();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar18 != (UPCGBasePointData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar18);
      }
      (**(code **)(pUVar18->_padding_ + 0x490))(pUVar18,6,1);
      (**(code **)(pUVar18->_padding_ + 0x4f0))(pUVar18,&local_2c0,1);
      (**(code **)(pUVar18->_padding_ + 0x4c8))(pUVar18,&local_2a8,1);
      fVar3 = __real_3e4ccccd;
      do {
        if (local_2b0 <= iVar24) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
        }
        if (iVar24 == iVar24 % local_2b4) {
          piVar21 = (int *)((longlong)(iVar24 % local_2b4) * (longlong)local_2b8 + local_2c0);
        }
        else {
          piVar21 = &local_2ac;
        }
        *piVar21 = iVar24;
        if (local_298 <= iVar24) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
        }
        if (iVar24 == iVar24 % local_29c) {
          pfVar22 = (float *)((longlong)(iVar24 % local_29c) * (longlong)local_2a0 + local_2a8);
        }
        else {
          pfVar22 = &local_294;
        }
        fVar27 = (float)iVar24;
        iVar24 = iVar24 + 1;
        *pfVar22 = fVar27 * fVar3;
      } while (iVar24 < 6);
      local_130 = 0x100;
      local_150 = 0;
      local_178.AllocatorInstance.InlineData = (uchar  [16])ZEXT416(0);
      local_140 = 0;
      local_198.DebugPtr = (UPCGData *)0x0;
      local_190 = 0;
      local_188._0_8_ = (FScriptContainerElement *)0x0;
      local_188._8_8_ = 0;
      local_178.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_178.NumBits = 0;
      local_178.MaxBits = 0x80;
      local_158 = 0xffffffff;
      local_154 = 0;
      local_148 = (void *)0x0;
      local_138 = 0;
      local_12c = 0;
      local_124 = 0xffffffff;
      if (local_288.InputData.TaggedData.ArrayNum == local_288.InputData.TaggedData.ArrayMax) {
        local_288.InputData.TaggedData.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x878,(ForAnyElementType *)&local_288.InputData,
                        &local_288.InputData.TaggedData.ArrayMax);
      }
      lVar19 = (longlong)local_288.InputData.TaggedData.ArrayNum;
      local_288.InputData.TaggedData.ArrayNum = local_288.InputData.TaggedData.ArrayNum + 1;
      this_00 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           (local_288.InputData.TaggedData.AllocatorInstance.Data + lVar19 * 0x78),
                           (FPCGTaggedData *)&local_198.ObjectPtr);
      local_140 = local_140 & 0xffffffff00000000;
      if (local_148 != (void *)0x0) {
        FMemory::Free(local_148);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_188,0,local_188._8_4_);
      iVar24 = SUB84(local_188._8_8_,4);
      local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
      if (iVar24 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_188,0,(int *)(local_188 + 0xc));
      }
      local_158 = 0xffffffff;
      local_154 = 0;
      local_178.NumBits = 0;
      if (0x80 < (uint)local_178.MaxBits) {
        local_178.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_178,0);
      }
      if (local_178.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_178.AllocatorInstance.SecondaryData);
      }
      if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_188._0_8_);
      }
      FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_198.ObjectPtr);
      FPCGDataPtrWrapper::operator=(&this_00->Data,(UPCGData *)pUVar18);
      this_00->Pin = PCGPinConstants::DefaultInputLabel;
      local_380 = &local_288;
      local_378 = local_2d0.Object;
      local_370 = local_2d0.SharedReferenceCount.ReferenceController;
      if (local_2d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_2d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      uStack_110 = _UNK_15202fe08;
      local_118 = ___xmm_3f19999a3ecccccd3e4ccccd00000000;
      local_368 = pUVar6;
      pUVar6[2]._padding_ = 0;
      pUVar6[2]._padding_ = 0x3ff0000000000000;
      pUVar6[2]._padding_ = 0;
      pUVar6[2]._padding_ = 0x3ff0000000000000;
      *(undefined1 *)((longlong)&pUVar6[2].Seed + 1) = 1;
      local_108 = 0x3f4ccccd;
      uStack_104 = 0x3f800000;
      local_408.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_408.ArrayNum = 6;
      local_388 = this;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,6,0,&local_408.AllocatorInstance,6,&local_408.ArrayMax);
      *(undefined8 *)local_408.AllocatorInstance.Data = local_118;
      *(undefined8 *)(local_408.AllocatorInstance.Data + 8) = uStack_110;
      *(ulonglong *)(local_408.AllocatorInstance.Data + 0x10) = CONCAT44(uStack_104,local_108);
      bVar7 = `FPCGDensityRemapTest::RunTest'::__l2::<lambda_1>::operator()(&local_388,&local_408);
      ::FString::FString(&local_360,
                         "Input and Output are identical when InRange and OutRange are identical");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_360.Data.ArrayNum != 0) {
        FVar23.Data = local_360.Data.AllocatorInstance.Data;
      }
      bVar7 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar23.Data,bVar7);
      if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_360.Data.AllocatorInstance.Data);
      }
      uVar5 = _UNK_15202fe28;
      uVar4 = ___xmm_3f19999a3f8000003f00000000000000;
      pUVar6[2]._padding_ = 0x3fd99999a0000000;
      pUVar6[2]._padding_ = 0;
      pUVar6[2]._padding_ = 0;
      pUVar6[2]._padding_ = 0x3ff0000000000000;
      *(undefined1 *)((longlong)&pUVar6[2].Seed + 1) = 1;
      local_100 = uVar4;
      uStack_f8 = uVar5;
      local_f0 = 0x3f4ccccd;
      uStack_ec = 0x3f800000;
      local_3f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3f8.ArrayNum = 6;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,6,0,&local_3f8.AllocatorInstance,6,&local_3f8.ArrayMax);
      *(undefined8 *)local_3f8.AllocatorInstance.Data = local_100;
      *(undefined8 *)(local_3f8.AllocatorInstance.Data + 8) = uStack_f8;
      *(ulonglong *)(local_3f8.AllocatorInstance.Data + 0x10) = CONCAT44(uStack_ec,local_f0);
      bVar9 = `FPCGDensityRemapTest::RunTest'::__l2::<lambda_1>::operator()(&local_388,&local_3f8);
      ::FString::FString(&local_350,"Valid densities for partial InRange");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_350.Data.ArrayNum != 0) {
        FVar23.Data = local_350.Data.AllocatorInstance.Data;
      }
      bVar9 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar23.Data,bVar9);
      if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_350.Data.AllocatorInstance.Data);
      }
      pUVar6[2]._padding_ = 0;
      pUVar6[2]._padding_ = 0x3fd99999a0000000;
      pUVar6[2]._padding_ = 0x3ff0000000000000;
      pUVar6[2]._padding_ = 0;
      *(undefined1 *)((longlong)&pUVar6[2].Seed + 1) = 1;
      local_e8 = uVar4;
      uStack_e0 = uVar5;
      local_d8 = 0x3f4ccccd;
      uStack_d4 = 0x3f800000;
      local_3e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3e8.ArrayNum = 6;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,6,0,&local_3e8.AllocatorInstance,6,&local_3e8.ArrayMax);
      *(undefined8 *)local_3e8.AllocatorInstance.Data = local_e8;
      *(undefined8 *)(local_3e8.AllocatorInstance.Data + 8) = uStack_e0;
      *(ulonglong *)(local_3e8.AllocatorInstance.Data + 0x10) = CONCAT44(uStack_d4,local_d8);
      bVar10 = `FPCGDensityRemapTest::RunTest'::__l2::<lambda_1>::operator()(&local_388,&local_3e8);
      ::FString::FString(&local_340,"Inverting ranges does not effect output");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_340.Data.ArrayNum != 0) {
        FVar23.Data = local_340.Data.AllocatorInstance.Data;
      }
      bVar10 = FAutomationTestBase::TestTrue
                         ((FAutomationTestBase *)this,(wchar_t *)FVar23.Data,bVar10);
      if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_340.Data.AllocatorInstance.Data);
      }
      uVar5 = _UNK_15202fe38;
      uVar4 = ___xmm_3f2aaaab3f0000003e4ccccd00000000;
      pUVar6[2]._padding_ = 0x3fd99999a0000000;
      pUVar6[2]._padding_ = 0x3ff0000000000000;
      pUVar6[2]._padding_ = 0x3fe0000000000000;
      pUVar6[2]._padding_ = 0x3ff0000000000000;
      *(undefined1 *)((longlong)&pUVar6[2].Seed + 1) = 1;
      local_d0 = uVar4;
      uStack_c8 = uVar5;
      local_c0 = 0x3f555555;
      uStack_bc = 0x3f800000;
      local_3d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3d8.ArrayNum = 6;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,6,0,&local_3d8.AllocatorInstance,6,&local_3d8.ArrayMax);
      *(undefined8 *)local_3d8.AllocatorInstance.Data = local_d0;
      *(undefined8 *)(local_3d8.AllocatorInstance.Data + 8) = uStack_c8;
      *(ulonglong *)(local_3d8.AllocatorInstance.Data + 0x10) = CONCAT44(uStack_bc,local_c0);
      bVar11 = `FPCGDensityRemapTest::RunTest'::__l2::<lambda_1>::operator()(&local_388,&local_3d8);
      ::FString::FString(&local_330,"Valid densities for partial OutRange");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_330.Data.ArrayNum != 0) {
        FVar23.Data = local_330.Data.AllocatorInstance.Data;
      }
      bVar11 = FAutomationTestBase::TestTrue
                         ((FAutomationTestBase *)this,(wchar_t *)FVar23.Data,bVar11);
      if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_330.Data.AllocatorInstance.Data);
      }
      pUVar6[2]._padding_ = 0x3ff0000000000000;
      pUVar6[2]._padding_ = 0x3fd99999a0000000;
      pUVar6[2]._padding_ = 0x3ff0000000000000;
      pUVar6[2]._padding_ = 0x3fe0000000000000;
      *(undefined1 *)((longlong)&pUVar6[2].Seed + 1) = 1;
      local_b8 = uVar4;
      uStack_b0 = uVar5;
      local_a8 = 0x3f555555;
      uStack_a4 = 0x3f800000;
      local_3c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3c8.ArrayNum = 6;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,6,0,&local_3c8.AllocatorInstance,6,&local_3c8.ArrayMax);
      *(undefined8 *)local_3c8.AllocatorInstance.Data = local_b8;
      *(undefined8 *)(local_3c8.AllocatorInstance.Data + 8) = uStack_b0;
      *(ulonglong *)(local_3c8.AllocatorInstance.Data + 0x10) = CONCAT44(uStack_a4,local_a8);
      bVar12 = `FPCGDensityRemapTest::RunTest'::__l2::<lambda_1>::operator()(&local_388,&local_3c8);
      ::FString::FString(&local_320,"Inverting ranges does not effect output");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_320.Data.ArrayNum != 0) {
        FVar23.Data = local_320.Data.AllocatorInstance.Data;
      }
      bVar12 = FAutomationTestBase::TestTrue
                         ((FAutomationTestBase *)this,(wchar_t *)FVar23.Data,bVar12);
      if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_320.Data.AllocatorInstance.Data);
      }
      uStack_98 = _UNK_15202fe48;
      local_a0 = ___xmm_3f2aaaab3f0000003eaaaaab3e2aaaab;
      pUVar6[2]._padding_ = 0x3fd99999a0000000;
      pUVar6[2]._padding_ = 0x3ff0000000000000;
      pUVar6[2]._padding_ = 0x3fe0000000000000;
      pUVar6[2]._padding_ = 0x3ff0000000000000;
      *(undefined1 *)((longlong)&pUVar6[2].Seed + 1) = 0;
      local_90 = 0x3f555555;
      uStack_8c = 0x3f800000;
      local_3b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3b8.ArrayNum = 6;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,6,0,&local_3b8.AllocatorInstance,6,&local_3b8.ArrayMax);
      *(undefined8 *)local_3b8.AllocatorInstance.Data = local_a0;
      *(undefined8 *)(local_3b8.AllocatorInstance.Data + 8) = uStack_98;
      *(ulonglong *)(local_3b8.AllocatorInstance.Data + 0x10) = CONCAT44(uStack_8c,local_90);
      bVar13 = `FPCGDensityRemapTest::RunTest'::__l2::<lambda_1>::operator()(&local_388,&local_3b8);
      ::FString::FString(&local_310,"All values are remapped when Range Exclusion is disabled");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_310.Data.ArrayNum != 0) {
        FVar23.Data = local_310.Data.AllocatorInstance.Data;
      }
      bVar13 = FAutomationTestBase::TestTrue
                         ((FAutomationTestBase *)this,(wchar_t *)FVar23.Data,bVar13);
      if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_310.Data.AllocatorInstance.Data);
      }
      uVar5 = _UNK_15202fe18;
      uVar4 = ___xmm_3f19999a3ecccccd3f00000000000000;
      pUVar6[2]._padding_ = 0x3fc99999a0000000;
      pUVar6[2]._padding_ = 0x3fc99999a0000000;
      pUVar6[2]._padding_ = 0;
      pUVar6[2]._padding_ = 0x3ff0000000000000;
      *(undefined1 *)((longlong)&pUVar6[2].Seed + 1) = 1;
      local_88 = uVar4;
      uStack_80 = uVar5;
      local_78 = 0x3f4ccccd;
      uStack_74 = 0x3f800000;
      local_3a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3a8.ArrayNum = 6;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,6,0,&local_3a8.AllocatorInstance,6,&local_3a8.ArrayMax);
      *(undefined8 *)local_3a8.AllocatorInstance.Data = local_88;
      *(undefined8 *)(local_3a8.AllocatorInstance.Data + 8) = uStack_80;
      *(ulonglong *)(local_3a8.AllocatorInstance.Data + 0x10) = CONCAT44(uStack_74,local_78);
      bVar14 = `FPCGDensityRemapTest::RunTest'::__l2::<lambda_1>::operator()(&local_388,&local_3a8);
      ::FString::FString(&local_300,"Point input to Range output");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_300.Data.ArrayNum != 0) {
        FVar23.Data = local_300.Data.AllocatorInstance.Data;
      }
      bVar14 = FAutomationTestBase::TestTrue
                         ((FAutomationTestBase *)this,(wchar_t *)FVar23.Data,bVar14);
      if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_300.Data.AllocatorInstance.Data);
      }
      *(undefined1 *)((longlong)&pUVar6[2].Seed + 1) = 1;
      pUVar6[2]._padding_ = 0x3fc99999a0000000;
      pUVar6[2]._padding_ = 0x3fc99999a0000000;
      local_60 = 0x3f4ccccd;
      pUVar6[2]._padding_ = 0x3fe0000000000000;
      pUVar6[2]._padding_ = 0x3fe0000000000000;
      uStack_5c = 0x3f800000;
      local_70 = uVar4;
      uStack_68 = uVar5;
      local_398.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_398.ArrayNum = 6;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,6,0,&local_398.AllocatorInstance,6,&local_398.ArrayMax);
      *(undefined8 *)local_398.AllocatorInstance.Data = local_70;
      *(undefined8 *)(local_398.AllocatorInstance.Data + 8) = uStack_68;
      *(ulonglong *)(local_398.AllocatorInstance.Data + 0x10) = CONCAT44(uStack_5c,local_60);
      bVar15 = `FPCGDensityRemapTest::RunTest'::__l2::<lambda_1>::operator()(&local_388,&local_398);
      ::FString::FString(&local_2f0,"Point input to Point output");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_2f0.Data.ArrayNum != 0) {
        FVar23.Data = local_2f0.Data.AllocatorInstance.Data;
      }
      bVar15 = FAutomationTestBase::TestTrue
                         ((FAutomationTestBase *)this,(wchar_t *)FVar23.Data,bVar15);
      if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
      }
      uStack_50 = _UNK_15202fdf8;
      local_58 = ___xmm_3f0000003f0000003f00000000000000;
      pUVar6[2]._padding_ = 0x3fc99999a0000000;
      pUVar6[2]._padding_ = 0x3ff0000000000000;
      pUVar6[2]._padding_ = 0x3fe0000000000000;
      pUVar6[2]._padding_ = 0x3fe0000000000000;
      *(undefined1 *)((longlong)&pUVar6[2].Seed + 1) = 1;
      local_48 = 0x3f000000;
      uStack_44 = 0x3f000000;
      local_418.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_418.ArrayNum = 6;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,6,0,&local_418.AllocatorInstance,6,&local_418.ArrayMax);
      *(undefined8 *)local_418.AllocatorInstance.Data = local_58;
      *(undefined8 *)(local_418.AllocatorInstance.Data + 8) = uStack_50;
      *(ulonglong *)(local_418.AllocatorInstance.Data + 0x10) = CONCAT44(uStack_44,local_48);
      bVar16 = `FPCGDensityRemapTest::RunTest'::__l2::<lambda_1>::operator()(&local_388,&local_418);
      ::FString::FString(&local_2e0,"Range input to Point output");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_2e0.Data.ArrayNum != 0) {
        FVar23.Data = local_2e0.Data.AllocatorInstance.Data;
      }
      bVar16 = FAutomationTestBase::TestTrue
                         ((FAutomationTestBase *)this,(wchar_t *)FVar23.Data,bVar16);
      if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_370)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2d0.SharedReferenceCount.ReferenceController);
      PCGTestsCommon::FTestData::~FTestData(&local_288);
      return (((((((bVar7 && bVar9) && bVar10) && bVar11) && bVar12) && bVar13) && bVar14) && bVar15
             ) && bVar16;
    }
    pFVar20 = GetTypeName<UPCGAttributeRemapSettings>(&local_1e8);
    pwVar26 = L"";
    if ((pFVar20->Data).ArrayNum == 0) {
      pwVar25 = L"";
    }
    else {
      pwVar25 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
    }
    pFVar20 = GetFullNameForCastLogError<UPCGSettings>(&local_1d8,pUVar6);
    if ((pFVar20->Data).ArrayNum != 0) {
      pwVar26 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar26,pwVar25);
  }
  pFVar20 = GetTypeName<UPCGAttributeRemapSettings>(&local_1f8);
  if ((pFVar20->Data).ArrayNum == 0) {
    pwVar26 = L"";
  }
  else {
    pwVar26 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar26);
}

// GetBeautifiedTestName @ 149fcd050

FString * __thiscall
FPCGDensityRemapTest::GetBeautifiedTestName
          (FPCGDensityRemapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.DensityRemap.Basic");
  return __return_storage_ptr__;
}

// operator() @ 149ff3050

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
`FPCGDensityRemapTest::RunTest'::__l2::<lambda_1>::operator()
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
LAB_149ff32c2:
          if ((UPCGSpatialData *)local_188.Data == (UPCGSpatialData *)0x0) goto LAB_149ff32e9;
          pUVar15 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
          bVar11 = FObjectPtr::IsA((FObjectPtr *)&local_188,pUVar15);
          if (!bVar11) goto LAB_149ff32e9;
          FVar18.Data = local_188.Data;
          if ((UPCGSpatialData *)local_188.Data == (UPCGSpatialData *)0x0) goto LAB_149ff32eb;
        }
        else {
          if ((UPCGSpatialData *)local_188.Data != (UPCGSpatialData *)0x0) {
            UE::GC::MarkAsReachable((UObject *)local_188.Data);
            goto LAB_149ff32c2;
          }
LAB_149ff32e9:
          FVar18.Data = (FScriptContainerElement *)(UPCGSpatialData *)0x0;
LAB_149ff32eb:
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InSpatialData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGDensityRemapTest.cpp"
                              ,0x43,L"");
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
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGDensityRemapTest.cpp"
                                ,0x46,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        local_180 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)(local_178.Data + uVar10))->Handle;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149ff339a:
          if ((UPCGSpatialData *)local_180.Handle == (UPCGSpatialData *)0x0) goto LAB_149ff33bc;
          pUVar15 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
          bVar11 = FObjectPtr::IsA((FObjectPtr *)&local_180,pUVar15);
          this_00 = local_180;
          if (!bVar11) goto LAB_149ff33bc;
        }
        else {
          if ((UPCGSpatialData *)local_180.Handle != (UPCGSpatialData *)0x0) {
            UE::GC::MarkAsReachable(local_180.Handle);
            goto LAB_149ff339a;
          }
LAB_149ff33bc:
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
            iVar13 = (**(code **)(pUVar16->_padding_ + 0x488))(pUVar16);
            iVar14 = (**(code **)(pUVar17->_padding_ + 0x488))(pUVar17);
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
              uVar20 = 0;
              iVar13 = (**(code **)(pUVar16->_padding_ + 0x488))(pUVar16);
              if (0 < iVar13) {
                lVar21 = 0;
                do {
                  pFVar3 = *(FAutomationTestBase **)this;
                  uVar19 = 0;
                  if ((int)uVar20 < param_1->ArrayNum) {
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
                  uVar20 = uVar20 + 1;
                  lVar21 = lVar21 + 4;
                  iVar13 = (**(code **)(pUVar16->_padding_ + 0x488))(pUVar16);
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

