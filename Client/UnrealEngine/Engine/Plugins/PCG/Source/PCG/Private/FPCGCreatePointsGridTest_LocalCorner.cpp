// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fda340

EAutomationTestFlags __thiscall
FPCGCreatePointsGridTest_LocalCorner::GetTestFlags(FPCGCreatePointsGridTest_LocalCorner *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fda350

bool __thiscall
FPCGCreatePointsGridTest_LocalCorner::IsStressTest(FPCGCreatePointsGridTest_LocalCorner *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fda540

uint __thiscall
FPCGCreatePointsGridTest_LocalCorner::GetRequiredDeviceNum
          (FPCGCreatePointsGridTest_LocalCorner *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fda550

FString * __thiscall
FPCGCreatePointsGridTest_LocalCorner::GetTestSourceFileName
          (FPCGCreatePointsGridTest_LocalCorner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGCreatePointsGridTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fda700

int __thiscall
FPCGCreatePointsGridTest_LocalCorner::GetTestSourceFileLine
          (FPCGCreatePointsGridTest_LocalCorner *this)

{
  return 0x16e;
}

// GetTests @ 149fda740

/* WARNING: Removing unreachable block (ram,0x000149fda82d) */
/* WARNING: Removing unreachable block (ram,0x000149fda8f8) */

void __thiscall
FPCGCreatePointsGridTest_LocalCorner::GetTests
          (FPCGCreatePointsGridTest_LocalCorner *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.CreatePointsGrid.LocalCorner");
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

// RunTest @ 149fda920

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
FPCGCreatePointsGridTest_LocalCorner::RunTest
          (FPCGCreatePointsGridTest_LocalCorner *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  bool bVar25;
  undefined1 uVar26;
  uint uVar27;
  double *pdVar28;
  UClass *pUVar29;
  TQuat<double> *pTVar30;
  longlong lVar31;
  wchar_t *pwVar32;
  FName FVar33;
  ForAnyElementType FVar34;
  uint uVar35;
  FObjectPtr_u_0 FVar36;
  FObjectPtr_u_0 FVar37;
  undefined4 uVar38;
  undefined1 auStackY_7f8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_7b8;
  FObjectPtr_u_0 local_7a8;
  undefined8 local_7a0;
  undefined1 local_798 [16];
  int local_788;
  FString local_780;
  undefined1 local_770 [16];
  FString local_760;
  FString local_750;
  FString local_740;
  FString local_730;
  FString local_720;
  TSharedPtr<IPCGElement,1> local_710;
  FString local_700;
  TVector<double>_u_0 local_6e8;
  TVector<double>_u_0 local_6c8;
  double local_6a8;
  double dStack_6a0;
  double local_698;
  double dStack_690;
  double local_688;
  double dStack_680;
  double local_678;
  double dStack_670;
  double local_668;
  double dStack_660;
  double local_658;
  double dStack_650;
  double local_648;
  double dStack_640;
  double local_638;
  double dStack_630;
  FStringFormatArg local_628;
  double local_5f8;
  double local_5f0;
  double dStack_5e8;
  double local_5e0;
  double local_5d8;
  double dStack_5d0;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  double local_5c0;
  double dStack_5b8;
  undefined4 local_5b0;
  undefined4 uStack_5ac;
  double local_5a8;
  double dStack_5a0;
  undefined4 local_598;
  undefined4 uStack_594;
  TTransform<double> local_588;
  TTransform<double> local_528;
  TTransform<double> local_4c8;
  TTransform<double> local_468;
  TTransform<double> local_408;
  TTransform<double> local_3a8;
  TTransform<double> local_348;
  TTransform<double> local_2e8;
  FTestData local_288;
  TQuat<double> local_1f8;
  TQuat<double> local_1d8;
  TQuat<double> local_1b8;
  TQuat<double> local_198;
  longlong local_178;
  int local_170;
  int local_16c;
  int local_168;
  undefined1 local_f8 [56];
  ulonglong local_c0;
  
  local_c0 = __security_cookie.value ^ (ulonglong)auStackY_7f8;
  CreatePointsGridCommonTests::GenerateTestData(&local_288,CellCorners,LocalComponent);
  local_6e8._s_0.X = ___xmm_40490000000000004049000000000000;
  local_6e8._s_0.Y = _UNK_150b2d2e8;
  local_6e8._s_0.Z = __real_4049000000000000;
  AActor::SetActorScale3D(local_288.TestActor,(TVector<double> *)&local_6e8._s_0);
  local_6c8._s_0.X = ___xmm_40590000000000004059000000000000;
  local_6c8._s_0.Y = _UNK_1512468d8;
  local_7a0 = 0;
  local_6c8._s_0.Z = 0.0;
  AActor::SetActorRelativeLocation
            (local_288.TestActor,(TVector<double> *)&local_6c8._s_0,false,(FHitResult *)0x0,None);
  pdVar28 = (double *)
            (**(code **)((local_288.TestActor)->_padding_ + 0x670))
                      (local_288.TestActor,local_f8,0,0);
  dVar8 = *pdVar28 - __real_4069000000000000;
  dVar7 = pdVar28[1] - __real_4069000000000000;
  dVar3 = pdVar28[2] - __real_4069000000000000;
  dVar6 = pdVar28[3] + __real_4069000000000000;
  dVar4 = pdVar28[4] + __real_4069000000000000;
  dVar5 = pdVar28[5] + __real_4069000000000000;
  UPCGSettings::GetElement(local_288.Settings,&local_710);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_288,(UPCGNode *)local_798);
  do {
    if ((local_710.Object == (IPCGElement *)0x0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar25)) {
      pcVar2 = (code *)swi(3);
      uVar26 = (*pcVar2)();
      return (bool)uVar26;
    }
    bVar25 = IPCGElement::Execute(local_710.Object,(FPCGContext *)local_798._0_8_);
    uVar21 = local_798._0_8_;
  } while (!bVar25);
  iVar1 = (((FPCGDataCollection *)(local_798._0_8_ + 0x38))->TaggedData).ArrayNum;
  ::FString::FString((FString *)(local_798 + 8),"Output count");
  pwVar32 = L"";
  if (local_788 != 0) {
    pwVar32 = (wchar_t *)local_798._8_8_;
  }
  bVar25 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar32,iVar1,1);
  if ((wchar_t *)local_798._8_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_798._8_8_);
  }
  if (bVar25) {
    FVar36.Handle = (UObject *)0x0;
    if (((((FPCGDataCollection *)(uVar21 + 0x38))->TaggedData).ArrayNum < 1) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar2 = (code *)swi(3);
      uVar26 = (*pcVar2)();
      return (bool)uVar26;
    }
    local_7a8 = (FObjectPtr_u_0)
                ((FObjectPtr_u_0 *)
                (((FPCGDataCollection *)(uVar21 + 0x38))->TaggedData).AllocatorInstance.Data)->
                Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fdab85:
      if (local_7a8.Handle == (UObject *)0x0) goto LAB_149fdaba5;
      pUVar29 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar25 = FObjectPtr::IsA((FObjectPtr *)&local_7a8,pUVar29);
      FVar37 = local_7a8;
      if (!bVar25) goto LAB_149fdaba5;
    }
    else {
      if (local_7a8.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_7a8.Handle);
        goto LAB_149fdab85;
      }
LAB_149fdaba5:
      FVar37.Handle = FVar36.Handle;
    }
    ::FString::FString(&local_780,"Output point data");
    if (FVar37.Handle == (UObject *)0x0) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_700,L"Expected \'%s\' to be not null.");
      (*pcVar2)(this,&local_700,0);
      if (local_700.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_700.Data.AllocatorInstance.Data);
      }
      bVar25 = true;
    }
    else {
      bVar25 = false;
    }
    if (local_780.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_780.Data.AllocatorInstance.Data);
    }
    if (!bVar25) {
      (**(code **)(*(longlong *)FVar37.Handle + 0x500))(FVar37.Handle,&local_178);
      iVar1 = local_168;
      ::FString::FString((FString *)local_770,"Output point count");
      FVar33 = (FName)L"";
      if (local_770._8_4_ != 0) {
        FVar33 = (FName)local_770._0_8_;
      }
      bVar25 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)FVar33,iVar1,0x12);
      if ((FName)local_770._0_8_ != (FName)0x0) {
        FMemory::Free((void *)local_770._0_8_);
      }
      if (bVar25) {
        if (0 < local_168) {
          do {
            uVar35 = FVar36._0_4_;
            uVar27 = 0;
            if ((int)uVar35 < local_168) {
              uVar27 = ~uVar35 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar25)) {
              pcVar2 = (code *)swi(3);
              uVar26 = (*pcVar2)();
              return (bool)uVar26;
            }
            lVar31 = (longlong)((int)uVar35 % local_16c) * (longlong)local_170;
            pdVar28 = (double *)(lVar31 + 0x20 + local_178);
            dVar9 = *pdVar28;
            dVar10 = pdVar28[1];
            local_5f8 = *(double *)(lVar31 + 0x30 + local_178);
            if (((((dVar9 < dVar8) || (dVar6 < dVar9)) || (dVar10 < dVar7)) ||
                ((dVar4 < dVar10 || (local_5f8 < dVar3)))) || (dVar5 < local_5f8)) {
              bVar25 = false;
            }
            else {
              bVar25 = true;
            }
            FStringFormatArg::FStringFormatArg(&local_628,uVar35);
            local_7b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_7b8.ArrayNum = 1;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,&local_7b8.AllocatorInstance,1,&local_7b8.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_7b8.AllocatorInstance.Data,&local_628,1);
            ::FString::FormatImpl(&local_760,L"Point {0} is within the volume",&local_7b8);
            FVar34.Data = (FScriptContainerElement *)L"";
            if (local_760.Data.ArrayNum != 0) {
              FVar34.Data = local_760.Data.AllocatorInstance.Data;
            }
            bVar25 = FAutomationTestBase::TestTrue
                               ((FAutomationTestBase *)this,(wchar_t *)FVar34.Data,bVar25);
            if (local_760.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_760.Data.AllocatorInstance.Data);
            }
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_7b8.AllocatorInstance.Data,local_7b8.ArrayNum);
            if ((FStringFormatArg *)local_7b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_7b8.AllocatorInstance.Data);
            }
            if (local_628.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_628.StringValue.Data.AllocatorInstance.Data);
            }
            if (!bVar25) goto LAB_149fdb52f;
            FVar36._0_4_ = uVar35 + 1;
            FVar36._4_4_ = 0;
          } while ((int)FVar36._0_4_ < local_168);
        }
        uVar22 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        uVar21 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        dVar7 = (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._20_4_,
                                 UE::Math::TVector<double>::OneVector.field0_0x0._16_4_);
        local_5f0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        dStack_5e8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        pTVar30 = UE::Math::TRotator<double>::Quaternion
                            (&UE::Math::TRotator<double>::ZeroRotator,&local_1f8);
        dVar3 = pTVar30->X;
        dVar4 = pTVar30->Y;
        dVar5 = pTVar30->Z;
        dVar6 = pTVar30->W;
        local_6a8 = dVar3;
        dStack_6a0 = dVar4;
        local_698 = dVar5;
        dStack_690 = dVar6;
        local_5e0 = dVar7;
        if ((local_168 < 2) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar25)) {
          pcVar2 = (code *)swi(3);
          uVar26 = (*pcVar2)();
          return (bool)uVar26;
        }
        lVar31 = (longlong)(int)(1 % (longlong)local_16c) * (longlong)local_170;
        dVar8 = *(double *)(lVar31 + local_178);
        dVar9 = ((double *)(lVar31 + local_178))[1];
        pdVar28 = (double *)(lVar31 + 0x10 + local_178);
        dVar10 = *pdVar28;
        dVar11 = pdVar28[1];
        pdVar28 = (double *)(lVar31 + 0x20 + local_178);
        dVar12 = *pdVar28;
        dVar13 = pdVar28[1];
        pdVar28 = (double *)(lVar31 + 0x30 + local_178);
        dVar14 = *pdVar28;
        dVar15 = pdVar28[1];
        pdVar28 = (double *)(lVar31 + 0x40 + local_178);
        dVar16 = *pdVar28;
        dVar17 = pdVar28[1];
        pdVar28 = (double *)(lVar31 + 0x50 + local_178);
        dVar18 = *pdVar28;
        dVar19 = pdVar28[1];
        ::FString::FString(&local_750,"Point 1 has the correct transform,");
        FVar34.Data = (FScriptContainerElement *)L"";
        if (local_750.Data.ArrayNum != 0) {
          FVar34.Data = local_750.Data.AllocatorInstance.Data;
        }
        local_588.Translation.XY.m128d_f64[0] = ___xmm_00000000000000004059000000000000;
        local_588.Translation.XY.m128d_f64[1] = _UNK_150f34e18;
        local_588.Translation.ZW.m128d_f64[0] = ___xmm_0000000000000000c049000000000000;
        local_588.Translation.ZW.m128d_f64[1] = _UNK_15202fd38;
        local_588.Scale3D.XY.m128d_f64[0] = (double)uVar21;
        local_588.Scale3D.XY.m128d_f64[1] = (double)uVar22;
        local_588.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_588.Rotation.XY.m128d_f64[0] = dVar3;
        local_588.Rotation.XY.m128d_f64[1] = dVar4;
        local_588.Rotation.ZW.m128d_f64[0] = dVar5;
        local_588.Rotation.ZW.m128d_f64[1] = dVar6;
        local_588.Scale3D.ZW.m128d_f64[0] = dVar7;
        local_528.Rotation.XY.m128d_f64[0] = dVar8;
        local_528.Rotation.XY.m128d_f64[1] = dVar9;
        local_528.Rotation.ZW.m128d_f64[0] = dVar10;
        local_528.Rotation.ZW.m128d_f64[1] = dVar11;
        local_528.Translation.XY.m128d_f64[0] = dVar12;
        local_528.Translation.XY.m128d_f64[1] = dVar13;
        local_528.Translation.ZW.m128d_f64[0] = dVar14;
        local_528.Translation.ZW.m128d_f64[1] = dVar15;
        local_528.Scale3D.XY.m128d_f64[0] = dVar16;
        local_528.Scale3D.XY.m128d_f64[1] = dVar17;
        local_528.Scale3D.ZW.m128d_f64[0] = dVar18;
        local_528.Scale3D.ZW.m128d_f64[1] = dVar19;
        bVar25 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar34.Data,&local_528,&local_588
                            ,__real_38d1b717);
        if (local_750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_750.Data.AllocatorInstance.Data);
        }
        uVar24 = UE::Math::TVector<double>::OneVector.field0_0x0._20_4_;
        uVar23 = UE::Math::TVector<double>::OneVector.field0_0x0._16_4_;
        uVar22 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        uVar21 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        if (bVar25) {
          local_5d8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          dStack_5d0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
          pTVar30 = UE::Math::TRotator<double>::Quaternion
                              (&UE::Math::TRotator<double>::ZeroRotator,&local_1d8);
          local_5c8 = uVar23;
          uStack_5c4 = uVar24;
          dVar3 = pTVar30->X;
          dVar4 = pTVar30->Y;
          dVar5 = pTVar30->Z;
          dVar6 = pTVar30->W;
          uVar38 = (undefined4)local_7a0;
          uVar20 = (ulonglong)local_7a0 >> 0x20;
          local_688 = dVar3;
          dStack_680 = dVar4;
          local_678 = dVar5;
          dStack_670 = dVar6;
          if ((local_168 < 4) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar25)) {
            pcVar2 = (code *)swi(3);
            uVar26 = (*pcVar2)();
            return (bool)uVar26;
          }
          lVar31 = (longlong)(int)(3 % (longlong)local_16c) * (longlong)local_170;
          dVar7 = *(double *)(lVar31 + local_178);
          dVar8 = ((double *)(lVar31 + local_178))[1];
          pdVar28 = (double *)(lVar31 + 0x10 + local_178);
          dVar9 = *pdVar28;
          dVar10 = pdVar28[1];
          pdVar28 = (double *)(lVar31 + 0x20 + local_178);
          dVar11 = *pdVar28;
          dVar12 = pdVar28[1];
          pdVar28 = (double *)(lVar31 + 0x30 + local_178);
          dVar13 = *pdVar28;
          dVar14 = pdVar28[1];
          pdVar28 = (double *)(lVar31 + 0x40 + local_178);
          dVar15 = *pdVar28;
          dVar16 = pdVar28[1];
          pdVar28 = (double *)(lVar31 + 0x50 + local_178);
          dVar17 = *pdVar28;
          dVar18 = pdVar28[1];
          ::FString::FString(&local_740,"Point 3 has the correct transform,");
          local_4c8.Translation.XY.m128d_f64[0] = ___xmm_40590000000000000000000000000000;
          local_4c8.Translation.XY.m128d_f64[1] = _UNK_150f34e28;
          FVar34.Data = (FScriptContainerElement *)L"";
          if (local_740.Data.ArrayNum != 0) {
            FVar34.Data = local_740.Data.AllocatorInstance.Data;
          }
          local_4c8.Translation.ZW.m128d_f64[0] = ___xmm_0000000000000000c049000000000000;
          local_4c8.Translation.ZW.m128d_f64[1] = _UNK_15202fd38;
          local_4c8.Scale3D.XY.m128d_f64[0] = (double)uVar21;
          local_4c8.Scale3D.XY.m128d_f64[1] = (double)uVar22;
          local_4c8.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar23;
          local_4c8.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar24;
          local_4c8.Rotation.XY.m128d_f64[0] = dVar3;
          local_4c8.Rotation.XY.m128d_f64[1] = dVar4;
          local_4c8.Rotation.ZW.m128d_f64[0] = dVar5;
          local_4c8.Rotation.ZW.m128d_f64[1] = dVar6;
          local_4c8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar38;
          local_4c8.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)uVar20;
          local_468.Rotation.XY.m128d_f64[0] = dVar7;
          local_468.Rotation.XY.m128d_f64[1] = dVar8;
          local_468.Rotation.ZW.m128d_f64[0] = dVar9;
          local_468.Rotation.ZW.m128d_f64[1] = dVar10;
          local_468.Translation.XY.m128d_f64[0] = dVar11;
          local_468.Translation.XY.m128d_f64[1] = dVar12;
          local_468.Translation.ZW.m128d_f64[0] = dVar13;
          local_468.Translation.ZW.m128d_f64[1] = dVar14;
          local_468.Scale3D.XY.m128d_f64[0] = dVar15;
          local_468.Scale3D.XY.m128d_f64[1] = dVar16;
          local_468.Scale3D.ZW.m128d_f64[0] = dVar17;
          local_468.Scale3D.ZW.m128d_f64[1] = dVar18;
          bVar25 = FAutomationTestBase::TestEqual
                             ((FAutomationTestBase *)this,(wchar_t *)FVar34.Data,&local_468,
                              &local_4c8,__real_38d1b717);
          if (local_740.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_740.Data.AllocatorInstance.Data);
          }
          uVar24 = UE::Math::TVector<double>::OneVector.field0_0x0._20_4_;
          uVar23 = UE::Math::TVector<double>::OneVector.field0_0x0._16_4_;
          uVar22 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
          uVar21 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          if (bVar25) {
            local_5c0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
            dStack_5b8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
            pTVar30 = UE::Math::TRotator<double>::Quaternion
                                (&UE::Math::TRotator<double>::ZeroRotator,&local_1b8);
            local_5b0 = uVar23;
            uStack_5ac = uVar24;
            dVar3 = pTVar30->X;
            dVar4 = pTVar30->Y;
            dVar5 = pTVar30->Z;
            dVar6 = pTVar30->W;
            uVar38 = (undefined4)local_7a0;
            uVar20 = (ulonglong)local_7a0 >> 0x20;
            local_668 = dVar3;
            dStack_660 = dVar4;
            local_658 = dVar5;
            dStack_650 = dVar6;
            if ((local_168 < 6) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar25)) {
              pcVar2 = (code *)swi(3);
              uVar26 = (*pcVar2)();
              return (bool)uVar26;
            }
            lVar31 = (longlong)(int)(5 % (longlong)local_16c) * (longlong)local_170;
            dVar7 = *(double *)(lVar31 + local_178);
            dVar8 = ((double *)(lVar31 + local_178))[1];
            pdVar28 = (double *)(lVar31 + 0x10 + local_178);
            dVar9 = *pdVar28;
            dVar10 = pdVar28[1];
            pdVar28 = (double *)(lVar31 + 0x20 + local_178);
            dVar11 = *pdVar28;
            dVar12 = pdVar28[1];
            pdVar28 = (double *)(lVar31 + 0x30 + local_178);
            dVar13 = *pdVar28;
            dVar14 = pdVar28[1];
            pdVar28 = (double *)(lVar31 + 0x40 + local_178);
            dVar15 = *pdVar28;
            dVar16 = pdVar28[1];
            pdVar28 = (double *)(lVar31 + 0x50 + local_178);
            dVar17 = *pdVar28;
            dVar18 = pdVar28[1];
            ::FString::FString(&local_730,"Point 5 has the correct transform,");
            local_408.Translation.XY.m128d_f64[0] = ___xmm_40590000000000004069000000000000;
            local_408.Translation.XY.m128d_f64[1] = _UNK_1520300e8;
            FVar34.Data = (FScriptContainerElement *)L"";
            if (local_730.Data.ArrayNum != 0) {
              FVar34.Data = local_730.Data.AllocatorInstance.Data;
            }
            local_408.Translation.ZW.m128d_f64[0] = ___xmm_0000000000000000c049000000000000;
            local_408.Translation.ZW.m128d_f64[1] = _UNK_15202fd38;
            local_408.Scale3D.XY.m128d_f64[0] = (double)uVar21;
            local_408.Scale3D.XY.m128d_f64[1] = (double)uVar22;
            local_408.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar23;
            local_408.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar24;
            local_408.Rotation.XY.m128d_f64[0] = dVar3;
            local_408.Rotation.XY.m128d_f64[1] = dVar4;
            local_408.Rotation.ZW.m128d_f64[0] = dVar5;
            local_408.Rotation.ZW.m128d_f64[1] = dVar6;
            local_408.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar38;
            local_408.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)uVar20;
            local_3a8.Rotation.XY.m128d_f64[0] = dVar7;
            local_3a8.Rotation.XY.m128d_f64[1] = dVar8;
            local_3a8.Rotation.ZW.m128d_f64[0] = dVar9;
            local_3a8.Rotation.ZW.m128d_f64[1] = dVar10;
            local_3a8.Translation.XY.m128d_f64[0] = dVar11;
            local_3a8.Translation.XY.m128d_f64[1] = dVar12;
            local_3a8.Translation.ZW.m128d_f64[0] = dVar13;
            local_3a8.Translation.ZW.m128d_f64[1] = dVar14;
            local_3a8.Scale3D.XY.m128d_f64[0] = dVar15;
            local_3a8.Scale3D.XY.m128d_f64[1] = dVar16;
            local_3a8.Scale3D.ZW.m128d_f64[0] = dVar17;
            local_3a8.Scale3D.ZW.m128d_f64[1] = dVar18;
            bVar25 = FAutomationTestBase::TestEqual
                               ((FAutomationTestBase *)this,(wchar_t *)FVar34.Data,&local_3a8,
                                &local_408,__real_38d1b717);
            if (local_730.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_730.Data.AllocatorInstance.Data);
            }
            uVar24 = UE::Math::TVector<double>::OneVector.field0_0x0._20_4_;
            uVar23 = UE::Math::TVector<double>::OneVector.field0_0x0._16_4_;
            uVar22 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
            uVar21 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
            if (bVar25) {
              local_5a8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
              dStack_5a0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
              pTVar30 = UE::Math::TRotator<double>::Quaternion
                                  (&UE::Math::TRotator<double>::ZeroRotator,&local_198);
              local_598 = uVar23;
              uStack_594 = uVar24;
              dVar3 = pTVar30->X;
              dVar4 = pTVar30->Y;
              dVar5 = pTVar30->Z;
              dVar6 = pTVar30->W;
              uVar38 = (undefined4)local_7a0;
              uVar20 = (ulonglong)local_7a0 >> 0x20;
              local_648 = dVar3;
              dStack_640 = dVar4;
              local_638 = dVar5;
              dStack_630 = dVar6;
              if ((local_168 < 0xc) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < NumElements)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                      ,0x8b,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar25)) {
                pcVar2 = (code *)swi(3);
                uVar26 = (*pcVar2)();
                return (bool)uVar26;
              }
              lVar31 = (longlong)(int)(0xb % (longlong)local_16c) * (longlong)local_170;
              dVar7 = *(double *)(lVar31 + local_178);
              dVar8 = ((double *)(lVar31 + local_178))[1];
              pdVar28 = (double *)(lVar31 + 0x10 + local_178);
              dVar9 = *pdVar28;
              dVar10 = pdVar28[1];
              pdVar28 = (double *)(lVar31 + 0x20 + local_178);
              dVar11 = *pdVar28;
              dVar12 = pdVar28[1];
              pdVar28 = (double *)(lVar31 + 0x30 + local_178);
              dVar13 = *pdVar28;
              dVar14 = pdVar28[1];
              pdVar28 = (double *)(lVar31 + 0x40 + local_178);
              dVar15 = *pdVar28;
              dVar16 = pdVar28[1];
              pdVar28 = (double *)(lVar31 + 0x50 + local_178);
              dVar17 = *pdVar28;
              dVar18 = pdVar28[1];
              ::FString::FString(&local_720,"Point 11 has the correct transform,");
              FVar34.Data = (FScriptContainerElement *)L"";
              if (local_720.Data.ArrayNum != 0) {
                FVar34.Data = local_720.Data.AllocatorInstance.Data;
              }
              local_348.Translation.XY.m128d_f64[0] = ___xmm_00000000000000004069000000000000;
              local_348.Translation.XY.m128d_f64[1] = _UNK_15202fcf8;
              local_348.Translation.ZW.m128d_f64[0] = ___xmm_00000000000000004049000000000000;
              local_348.Translation.ZW.m128d_f64[1] = _UNK_15149cb08;
              local_348.Scale3D.XY.m128d_f64[0] = (double)uVar21;
              local_348.Scale3D.XY.m128d_f64[1] = (double)uVar22;
              local_348.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar23;
              local_348.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar24;
              local_348.Rotation.XY.m128d_f64[0] = dVar3;
              local_348.Rotation.XY.m128d_f64[1] = dVar4;
              local_348.Rotation.ZW.m128d_f64[0] = dVar5;
              local_348.Rotation.ZW.m128d_f64[1] = dVar6;
              local_348.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar38;
              local_348.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)uVar20;
              local_2e8.Rotation.XY.m128d_f64[0] = dVar7;
              local_2e8.Rotation.XY.m128d_f64[1] = dVar8;
              local_2e8.Rotation.ZW.m128d_f64[0] = dVar9;
              local_2e8.Rotation.ZW.m128d_f64[1] = dVar10;
              local_2e8.Translation.XY.m128d_f64[0] = dVar11;
              local_2e8.Translation.XY.m128d_f64[1] = dVar12;
              local_2e8.Translation.ZW.m128d_f64[0] = dVar13;
              local_2e8.Translation.ZW.m128d_f64[1] = dVar14;
              local_2e8.Scale3D.XY.m128d_f64[0] = dVar15;
              local_2e8.Scale3D.XY.m128d_f64[1] = dVar16;
              local_2e8.Scale3D.ZW.m128d_f64[0] = dVar17;
              local_2e8.Scale3D.ZW.m128d_f64[1] = dVar18;
              bVar25 = FAutomationTestBase::TestEqual
                                 ((FAutomationTestBase *)this,(wchar_t *)FVar34.Data,&local_2e8,
                                  &local_348,__real_38d1b717);
              if (local_720.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_720.Data.AllocatorInstance.Data);
              }
              if (bVar25) {
                bVar25 = true;
                goto LAB_149fdb531;
              }
            }
          }
        }
      }
    }
  }
LAB_149fdb52f:
  bVar25 = false;
LAB_149fdb531:
  if ((FPCGContext *)local_798._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_798._0_8_)(local_798._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_710.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_288);
  return bVar25;
}

// GetBeautifiedTestName @ 149fdb600

FString * __thiscall
FPCGCreatePointsGridTest_LocalCorner::GetBeautifiedTestName
          (FPCGCreatePointsGridTest_LocalCorner *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.CreatePointsGrid.LocalCorner");
  return __return_storage_ptr__;
}

