// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fceb60

EAutomationTestFlags __thiscall
FPCGNormalToDensityTest_Multiply::GetTestFlags(FPCGNormalToDensityTest_Multiply *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fceb70

bool __thiscall
FPCGNormalToDensityTest_Multiply::IsStressTest(FPCGNormalToDensityTest_Multiply *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fceb80

uint __thiscall
FPCGNormalToDensityTest_Multiply::GetRequiredDeviceNum(FPCGNormalToDensityTest_Multiply *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fceb90

FString * __thiscall
FPCGNormalToDensityTest_Multiply::GetTestSourceFileName
          (FPCGNormalToDensityTest_Multiply *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGNormalToDensityTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fcebc0

int __thiscall
FPCGNormalToDensityTest_Multiply::GetTestSourceFileLine(FPCGNormalToDensityTest_Multiply *this)

{
  return 0x161;
}

// GetTests @ 149fcebd0

/* WARNING: Removing unreachable block (ram,0x000149fcecbd) */
/* WARNING: Removing unreachable block (ram,0x000149fced88) */

void __thiscall
FPCGNormalToDensityTest_Multiply::GetTests
          (FPCGNormalToDensityTest_Multiply *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.NormalToDensity.Multiply");
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

// RunTest @ 149fcedb0

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
FPCGNormalToDensityTest_Multiply::RunTest(FPCGNormalToDensityTest_Multiply *this,FString *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  UPCGNormalToDensitySettings *pUVar12;
  UPCGBasePointData *pUVar13;
  TQuat<double> *pTVar14;
  longlong lVar15;
  FPCGTaggedData *this_00;
  UClass *pUVar16;
  wchar_t *pwVar17;
  ForAnyElementType FVar18;
  UPCGSpatialData *this_01;
  undefined1 auStackY_368 [32];
  undefined1 local_338 [32];
  int local_318;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  TSharedPtr<IPCGElement,1> local_2d0;
  FString local_2c0;
  FString local_2b0;
  TVector<double>_u_0 local_2a0;
  undefined4 *local_288 [2];
  int local_278;
  float *local_270 [2];
  int local_260;
  FTestData local_258;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_1c8;
  TQuat<double> local_198;
  TObjectPtr<UPCGData_const_>_u_0 local_178;
  undefined8 local_170;
  undefined1 local_168 [24];
  undefined8 uStack_150;
  void *local_148;
  undefined4 local_140;
  uint local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  void *local_128;
  ulonglong local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  TVector<double>_u_0 local_f8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined4 local_c7;
  undefined2 local_c3;
  undefined1 local_c1;
  double *local_b8 [2];
  int local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_338._16_8_ = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_338._16_8_ != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_338._16_8_);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_258,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)((longlong)local_338 + 0x10));
  local_1c8._0_8_ = 0;
  local_1c8._40_8_ = 0;
  PCGTestsCommon::GenerateSettings<UPCGNormalToDensitySettings>(&local_258,&local_1c8);
  pUVar12 = CastChecked<UPCGNormalToDensitySettings,UPCGSettings>(local_258.Settings);
  UPCGSettings::GetElement(local_258.Settings,&local_2d0);
  pUVar12->DensityMode = Multiply;
  pUVar13 = PCGTestsCommon::CreateBasePointData();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UPCGBasePointData *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (**(code **)(pUVar13->_padding_ + 0x4c0))(pUVar13,local_b8,1);
  (**(code **)(pUVar13->_padding_ + 0x4c8))(pUVar13,local_288,1);
  if ((local_a8 < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar9
     )) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
  }
  local_2a0._s_0.X = ___xmm_00000000000000004046800000000000;
  local_2a0._s_0.Y = _UNK_1516fe2d8;
  local_2a0._s_0.Z = 0.0;
  pTVar14 = UE::Math::TQuat<double>::MakeFromEuler(&local_198,(TVector<double> *)&local_2a0._s_0);
  dVar7 = pTVar14->Y;
  uVar3 = *(undefined4 *)&pTVar14->Z;
  uVar4 = *(undefined4 *)((longlong)&pTVar14->Z + 4);
  uVar5 = *(undefined4 *)&pTVar14->W;
  uVar6 = *(undefined4 *)((longlong)&pTVar14->W + 4);
  *local_b8[0] = pTVar14->X;
  local_b8[0][1] = dVar7;
  *(undefined4 *)(local_b8[0] + 2) = uVar3;
  *(undefined4 *)((longlong)local_b8[0] + 0x14) = uVar4;
  *(undefined4 *)(local_b8[0] + 3) = uVar5;
  *(undefined4 *)((longlong)local_b8[0] + 0x1c) = uVar6;
  if ((local_278 < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar9
     )) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
  }
  local_168._16_8_ = 0;
  uStack_150 = 0;
  local_110 = 0x100;
  local_178.DebugPtr = (UPCGData *)0x0;
  *local_288[0] = 0x3f000000;
  local_130 = 0;
  local_120 = 0;
  local_170 = 0;
  local_168._0_8_ = (FScriptContainerElement *)0x0;
  local_168._8_8_ = 0;
  local_148 = (void *)0x0;
  local_140 = 0;
  local_13c = 0x80;
  local_138 = 0xffffffff;
  local_134 = 0;
  local_128 = (void *)0x0;
  local_118 = 0;
  local_10c = 0;
  local_104 = 0xffffffff;
  if (local_258.InputData.TaggedData.ArrayNum == local_258.InputData.TaggedData.ArrayMax) {
    local_258.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_258.InputData,
                    &local_258.InputData.TaggedData.ArrayMax);
  }
  lVar15 = (longlong)local_258.InputData.TaggedData.ArrayNum;
  local_258.InputData.TaggedData.ArrayNum = local_258.InputData.TaggedData.ArrayNum + 1;
  this_00 = FPCGTaggedData::FPCGTaggedData
                      ((FPCGTaggedData *)
                       (local_258.InputData.TaggedData.AllocatorInstance.Data + lVar15 * 0x78),
                       (FPCGTaggedData *)&local_178.ObjectPtr);
  local_120 = local_120 & 0xffffffff00000000;
  if (local_128 != (void *)0x0) {
    FMemory::Free(local_128);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_168,0,local_168._8_4_);
  iVar11 = SUB84(local_168._8_8_,4);
  local_168._8_8_ = local_168._8_8_ & 0xffffffff00000000;
  if (iVar11 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_168,0,(int *)(local_168 + 0xc));
  }
  local_138 = 0xffffffff;
  local_134 = 0;
  local_140 = 0;
  if (0x80 < local_13c) {
    local_13c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10),0);
  }
  if (local_148 != (void *)0x0) {
    FMemory::Free(local_148);
  }
  if ((FScriptContainerElement *)local_168._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_168._0_8_);
  }
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_178.ObjectPtr);
  FPCGDataPtrWrapper::operator=(&this_00->Data,(UPCGData *)pUVar13);
  this_00->Pin = PCGPinConstants::DefaultInputLabel;
  PCGTestsCommon::FTestData::InitializeTestContext(&local_258,(UPCGNode *)local_338);
  do {
    if ((local_2d0.Object == (IPCGElement *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
    bVar9 = IPCGElement::Execute(local_2d0.Object,(FPCGContext *)local_338._0_8_);
    uVar8 = local_338._0_8_;
  } while (!bVar9);
  iVar11 = (((FPCGDataCollection *)(local_338._0_8_ + 0x38))->TaggedData).ArrayNum;
  ::FString::FString((FString *)(local_338 + 0x18),"Output count");
  pwVar17 = L"";
  if (local_318 != 0) {
    pwVar17 = (wchar_t *)local_338._24_8_;
  }
  bVar9 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar17,iVar11,1);
  if ((wchar_t *)local_338._24_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_338._24_8_);
  }
  if (bVar9) {
    if (((((FPCGDataCollection *)(uVar8 + 0x38))->TaggedData).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
    local_338._8_8_ =
         *(undefined8 *)(((FPCGDataCollection *)(uVar8 + 0x38))->TaggedData).AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fcf210:
      if ((UPCGSpatialData *)local_338._8_8_ == (UPCGSpatialData *)0x0) goto LAB_149fcf230;
      pUVar16 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      bVar9 = FObjectPtr::IsA((FObjectPtr *)(local_338 + 8),pUVar16);
      this_01 = (UPCGSpatialData *)local_338._8_8_;
      if (!bVar9) goto LAB_149fcf230;
    }
    else {
      if ((UPCGSpatialData *)local_338._8_8_ != (UPCGSpatialData *)0x0) {
        UE::GC::MarkAsReachable((UObject *)local_338._8_8_);
        goto LAB_149fcf210;
      }
LAB_149fcf230:
      this_01 = (UPCGSpatialData *)0x0;
    }
    ::FString::FString(&local_310,"Output data");
    if (this_01 == (UPCGSpatialData *)0x0) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_2c0,L"Expected \'%s\' to be not null.");
      (*pcVar2)(this,&local_2c0,0);
      if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
      }
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if ((FName)local_310.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_310.Data.AllocatorInstance.Data);
    }
    if (!bVar9) {
      local_c8 = 0;
      local_c7 = 0;
      local_c3 = 0;
      local_c1 = 0;
      local_f8._s_0.X = 0.0;
      local_f8._s_0.Y = 0.0;
      local_f8._s_0.Z = 0.0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      pUVar13 = UPCGSpatialData::ToBasePointData
                          (this_01,(FPCGContext *)local_338._0_8_,(TBox<double> *)&local_f8._s_0);
      ::FString::FString(&local_300,"Output point data");
      if (pUVar13 == (UPCGBasePointData *)0x0) {
        pcVar2 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_2b0,L"Expected \'%s\' to be not null.");
        (*pcVar2)(this,&local_2b0,0);
        if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
        }
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_300.Data.AllocatorInstance.Data);
      }
      if (!bVar9) {
        iVar11 = (**(code **)(pUVar13->_padding_ + 0x488))(pUVar13);
        ::FString::FString(&local_2f0,"Output point count");
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_2f0.Data.ArrayNum != 0) {
          FVar18.Data = local_2f0.Data.AllocatorInstance.Data;
        }
        bVar9 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,iVar11,1);
        if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
        }
        if (bVar9) {
          (**(code **)(pUVar13->_padding_ + 0x508))(pUVar13,local_270);
          if ((local_260 < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar9)) {
            pcVar2 = (code *)swi(3);
            uVar10 = (*pcVar2)();
            return (bool)uVar10;
          }
          fVar1 = *local_270[0];
          ::FString::FString(&local_2e0,"Output point density");
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_2e0.Data.ArrayNum != 0) {
            FVar18.Data = local_2e0.Data.AllocatorInstance.Data;
          }
          bVar9 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,fVar1,
                             __real_3eb4fdf4,__real_3a83126f);
          if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
          }
          if (bVar9) {
            bVar9 = true;
            goto LAB_149fcf47a;
          }
        }
      }
    }
  }
  bVar9 = false;
LAB_149fcf47a:
  if ((FPCGContext *)local_338._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_338._0_8_)(local_338._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d0.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_258);
  return bVar9;
}

// GetBeautifiedTestName @ 149fcf4f0

FString * __thiscall
FPCGNormalToDensityTest_Multiply::GetBeautifiedTestName
          (FPCGNormalToDensityTest_Multiply *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.NormalToDensity.Multiply");
  return __return_storage_ptr__;
}

