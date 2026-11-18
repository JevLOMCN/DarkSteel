// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fd0aa0

EAutomationTestFlags __thiscall
FPCGCreatePointsGridTest_LocalCenter::GetTestFlags(FPCGCreatePointsGridTest_LocalCenter *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fd0ab0

bool __thiscall
FPCGCreatePointsGridTest_LocalCenter::IsStressTest(FPCGCreatePointsGridTest_LocalCenter *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fd0ac0

uint __thiscall
FPCGCreatePointsGridTest_LocalCenter::GetRequiredDeviceNum
          (FPCGCreatePointsGridTest_LocalCenter *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fd0ad0

FString * __thiscall
FPCGCreatePointsGridTest_LocalCenter::GetTestSourceFileName
          (FPCGCreatePointsGridTest_LocalCenter *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGCreatePointsGridTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fd0b00

int __thiscall
FPCGCreatePointsGridTest_LocalCenter::GetTestSourceFileLine
          (FPCGCreatePointsGridTest_LocalCenter *this)

{
  return 0x141;
}

// GetTests @ 149fd0b10

/* WARNING: Removing unreachable block (ram,0x000149fd0bfd) */
/* WARNING: Removing unreachable block (ram,0x000149fd0cc8) */

void __thiscall
FPCGCreatePointsGridTest_LocalCenter::GetTests
          (FPCGCreatePointsGridTest_LocalCenter *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.CreatePointsGrid.LocalCenter");
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

// RunTest @ 149fd0cf0

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
FPCGCreatePointsGridTest_LocalCenter::RunTest
          (FPCGCreatePointsGridTest_LocalCenter *this,FString *param_1)

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
  ForAnyElementType FVar33;
  uint uVar34;
  FObjectPtr_u_0 FVar35;
  FObjectPtr_u_0 FVar36;
  undefined4 uVar37;
  undefined1 auStackY_808 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_7c8;
  FObjectPtr_u_0 local_7b8;
  undefined8 local_7b0;
  undefined1 local_7a8 [40];
  FNameEntryId local_780;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_778 [2];
  FString local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  TSharedPtr<IPCGElement,1> local_708;
  FString local_6f8;
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
  double local_608;
  double dStack_600;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  double local_5f0;
  double dStack_5e8;
  undefined4 local_5e0;
  undefined4 uStack_5dc;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  double local_5b0;
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
  double *local_178;
  int local_170;
  int local_16c;
  int local_168;
  undefined1 local_f8 [56];
  ulonglong local_c0;
  
  local_c0 = __security_cookie.value ^ (ulonglong)auStackY_808;
  CreatePointsGridCommonTests::GenerateTestData(&local_288,CellCenter,LocalComponent);
  local_6e8._s_0.X = ___xmm_40490000000000004049000000000000;
  local_6e8._s_0.Y = _UNK_150b2d2e8;
  local_6e8._s_0.Z = __real_4049000000000000;
  AActor::SetActorScale3D(local_288.TestActor,(TVector<double> *)&local_6e8._s_0);
  local_6c8._s_0.X = ___xmm_40590000000000004059000000000000;
  local_6c8._s_0.Y = _UNK_1512468d8;
  local_7b0 = 0;
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
  UPCGSettings::GetElement(local_288.Settings,&local_708);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_288,(UPCGNode *)local_7a8);
  do {
    if ((local_708.Object == (IPCGElement *)0x0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar25)) {
      pcVar2 = (code *)swi(3);
      uVar26 = (*pcVar2)();
      return (bool)uVar26;
    }
    bVar25 = IPCGElement::Execute(local_708.Object,(FPCGContext *)local_7a8._0_8_);
    uVar21 = local_7a8._0_8_;
  } while (!bVar25);
  iVar1 = (((FPCGDataCollection *)(local_7a8._0_8_ + 0x38))->TaggedData).ArrayNum;
  ::FString::FString((FString *)(local_7a8 + 0x20),"Output count");
  pwVar32 = L"";
  if (local_780.Value != 0) {
    pwVar32 = (wchar_t *)local_7a8._32_8_;
  }
  bVar25 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar32,iVar1,1);
  if ((wchar_t *)local_7a8._32_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_7a8._32_8_);
  }
  if (bVar25) {
    FVar35.Handle = (UObject *)0x0;
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
    local_7b8 = (FObjectPtr_u_0)
                ((FObjectPtr_u_0 *)
                (((FPCGDataCollection *)(uVar21 + 0x38))->TaggedData).AllocatorInstance.Data)->
                Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fd0f51:
      if (local_7b8.Handle == (UObject *)0x0) goto LAB_149fd0f71;
      pUVar29 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar25 = FObjectPtr::IsA((FObjectPtr *)&local_7b8,pUVar29);
      FVar36 = local_7b8;
      if (!bVar25) goto LAB_149fd0f71;
    }
    else {
      if (local_7b8.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_7b8.Handle);
        goto LAB_149fd0f51;
      }
LAB_149fd0f71:
      FVar36.Handle = FVar35.Handle;
    }
    ::FString::FString((FString *)&local_778[0].ObjectPtr,"Output point data");
    if (FVar36.Handle == (UObject *)0x0) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_6f8,L"Expected \'%s\' to be not null.");
      (*pcVar2)(this,&local_6f8,0);
      if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
      }
      bVar25 = true;
    }
    else {
      bVar25 = false;
    }
    if (local_778[0].DebugPtr != (UPCGSettingsInterface *)0x0) {
      FMemory::Free(local_778[0].DebugPtr);
    }
    if (!bVar25) {
      (**(code **)(*(longlong *)FVar36.Handle + 0x500))(FVar36.Handle,&local_178);
      iVar1 = local_168;
      ::FString::FString(&local_768,"Output point count");
      FVar33.Data = (FScriptContainerElement *)L"";
      if (local_768.Data.ArrayNum != 0) {
        FVar33.Data = local_768.Data.AllocatorInstance.Data;
      }
      bVar25 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)FVar33.Data,iVar1,4);
      if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_768.Data.AllocatorInstance.Data);
      }
      if (bVar25) {
        if (0 < local_168) {
          do {
            uVar34 = FVar35._0_4_;
            uVar27 = 0;
            if ((int)uVar34 < local_168) {
              uVar27 = ~uVar34 >> 0x1f;
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
            lVar31 = (longlong)((int)uVar34 % local_16c) * (longlong)local_170;
            pdVar28 = (double *)(lVar31 + 0x20 + (longlong)local_178);
            dVar9 = *pdVar28;
            dVar10 = pdVar28[1];
            local_5b0 = *(double *)(lVar31 + 0x30 + (longlong)local_178);
            if (((((dVar9 < dVar8) || (dVar6 < dVar9)) || (dVar10 < dVar7)) ||
                ((dVar4 < dVar10 || (local_5b0 < dVar3)))) || (dVar5 < local_5b0)) {
              bVar25 = false;
            }
            else {
              bVar25 = true;
            }
            FStringFormatArg::FStringFormatArg(&local_628,uVar34);
            local_7c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_7c8.ArrayNum = 1;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,&local_7c8.AllocatorInstance,1,&local_7c8.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_7c8.AllocatorInstance.Data,&local_628,1);
            ::FString::FormatImpl(&local_758,L"Point {0}, {1} is within the volume",&local_7c8);
            FVar33.Data = (FScriptContainerElement *)L"";
            if (local_758.Data.ArrayNum != 0) {
              FVar33.Data = local_758.Data.AllocatorInstance.Data;
            }
            bVar25 = FAutomationTestBase::TestTrue
                               ((FAutomationTestBase *)this,(wchar_t *)FVar33.Data,bVar25);
            if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_758.Data.AllocatorInstance.Data);
            }
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_7c8.AllocatorInstance.Data,local_7c8.ArrayNum);
            if ((FStringFormatArg *)local_7c8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_7c8.AllocatorInstance.Data);
            }
            if (local_628.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_628.StringValue.Data.AllocatorInstance.Data);
            }
            if (!bVar25) goto LAB_149fd18dc;
            FVar35._0_4_ = uVar34 + 1;
            FVar35._4_4_ = 0;
          } while ((int)FVar35._0_4_ < local_168);
        }
        uVar22 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        uVar21 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        dVar7 = (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._20_4_,
                                 UE::Math::TVector<double>::OneVector.field0_0x0._16_4_);
        local_5d8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        dStack_5d0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        pTVar30 = UE::Math::TRotator<double>::Quaternion
                            (&UE::Math::TRotator<double>::ZeroRotator,&local_1f8);
        local_7a8._16_8_ = 0.0;
        local_7a8._24_8_ = 0.0;
        dVar3 = pTVar30->X;
        dVar4 = pTVar30->Y;
        dVar5 = pTVar30->Z;
        dVar6 = pTVar30->W;
        local_648 = dVar3;
        dStack_640 = dVar4;
        local_638 = dVar5;
        dStack_630 = dVar6;
        local_5c8 = dVar7;
        if ((local_168 < 1) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar25)) {
          pcVar2 = (code *)swi(3);
          uVar26 = (*pcVar2)();
          return (bool)uVar26;
        }
        dVar8 = *local_178;
        dVar9 = local_178[1];
        dVar10 = local_178[2];
        dVar11 = local_178[3];
        dVar12 = local_178[4];
        dVar13 = local_178[5];
        dVar14 = local_178[6];
        dVar15 = local_178[7];
        dVar16 = local_178[8];
        dVar17 = local_178[9];
        dVar18 = local_178[10];
        dVar19 = local_178[0xb];
        ::FString::FString(&local_748,"Point 0 has the correct transform,");
        FVar33.Data = (FScriptContainerElement *)L"";
        if (local_748.Data.ArrayNum != 0) {
          FVar33.Data = local_748.Data.AllocatorInstance.Data;
        }
        local_528.Translation.XY.m128d_f64[0] = ___xmm_40490000000000004049000000000000;
        local_528.Translation.XY.m128d_f64[1] = _UNK_150b2d2e8;
        local_528.Translation.ZW.m128d_f64[0] = (double)local_7a8._16_8_;
        local_528.Translation.ZW.m128d_f64[1] = (double)local_7a8._24_8_;
        local_528.Scale3D.XY.m128d_f64[0] = (double)uVar21;
        local_528.Scale3D.XY.m128d_f64[1] = (double)uVar22;
        local_528.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_528.Rotation.XY.m128d_f64[0] = dVar3;
        local_528.Rotation.XY.m128d_f64[1] = dVar4;
        local_528.Rotation.ZW.m128d_f64[0] = dVar5;
        local_528.Rotation.ZW.m128d_f64[1] = dVar6;
        local_528.Scale3D.ZW.m128d_f64[0] = dVar7;
        local_4c8.Rotation.XY.m128d_f64[0] = dVar8;
        local_4c8.Rotation.XY.m128d_f64[1] = dVar9;
        local_4c8.Rotation.ZW.m128d_f64[0] = dVar10;
        local_4c8.Rotation.ZW.m128d_f64[1] = dVar11;
        local_4c8.Translation.XY.m128d_f64[0] = dVar12;
        local_4c8.Translation.XY.m128d_f64[1] = dVar13;
        local_4c8.Translation.ZW.m128d_f64[0] = dVar14;
        local_4c8.Translation.ZW.m128d_f64[1] = dVar15;
        local_4c8.Scale3D.XY.m128d_f64[0] = dVar16;
        local_4c8.Scale3D.XY.m128d_f64[1] = dVar17;
        local_4c8.Scale3D.ZW.m128d_f64[0] = dVar18;
        local_4c8.Scale3D.ZW.m128d_f64[1] = dVar19;
        bVar25 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar33.Data,&local_4c8,&local_528
                            ,__real_38d1b717);
        if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_748.Data.AllocatorInstance.Data);
        }
        uVar24 = UE::Math::TVector<double>::OneVector.field0_0x0._20_4_;
        uVar23 = UE::Math::TVector<double>::OneVector.field0_0x0._16_4_;
        uVar22 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        uVar21 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        if (bVar25) {
          local_5f0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          dStack_5e8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
          pTVar30 = UE::Math::TRotator<double>::Quaternion
                              (&UE::Math::TRotator<double>::ZeroRotator,&local_1d8);
          local_5e0 = uVar23;
          uStack_5dc = uVar24;
          dVar3 = pTVar30->X;
          dVar4 = pTVar30->Y;
          dVar5 = pTVar30->Z;
          dVar6 = pTVar30->W;
          uVar37 = (undefined4)local_7b0;
          uVar20 = (ulonglong)local_7b0 >> 0x20;
          local_668 = dVar3;
          dStack_660 = dVar4;
          local_658 = dVar5;
          dStack_650 = dVar6;
          if ((local_168 < 2) &&
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
          lVar31 = (longlong)(int)(1 % (longlong)local_16c) * (longlong)local_170;
          dVar7 = *(double *)(lVar31 + (longlong)local_178);
          dVar8 = ((double *)(lVar31 + (longlong)local_178))[1];
          pdVar28 = (double *)(lVar31 + 0x10 + (longlong)local_178);
          dVar9 = *pdVar28;
          dVar10 = pdVar28[1];
          pdVar28 = (double *)(lVar31 + 0x20 + (longlong)local_178);
          dVar11 = *pdVar28;
          dVar12 = pdVar28[1];
          pdVar28 = (double *)(lVar31 + 0x30 + (longlong)local_178);
          dVar13 = *pdVar28;
          dVar14 = pdVar28[1];
          pdVar28 = (double *)(lVar31 + 0x40 + (longlong)local_178);
          dVar15 = *pdVar28;
          dVar16 = pdVar28[1];
          pdVar28 = (double *)(lVar31 + 0x50 + (longlong)local_178);
          dVar17 = *pdVar28;
          dVar18 = pdVar28[1];
          ::FString::FString(&local_738,"Point 1 has the correct transform,");
          local_468.Translation.XY.m128d_f64[0] = ___xmm_40490000000000004062c00000000000;
          local_468.Translation.XY.m128d_f64[1] = _UNK_152030088;
          FVar33.Data = (FScriptContainerElement *)L"";
          if (local_738.Data.ArrayNum != 0) {
            FVar33.Data = local_738.Data.AllocatorInstance.Data;
          }
          local_468.Translation.ZW.m128d_f64[0] = (double)local_7a8._16_8_;
          local_468.Translation.ZW.m128d_f64[1] = (double)local_7a8._24_8_;
          local_468.Scale3D.XY.m128d_f64[0] = (double)uVar21;
          local_468.Scale3D.XY.m128d_f64[1] = (double)uVar22;
          local_468.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar23;
          local_468.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar24;
          local_468.Rotation.XY.m128d_f64[0] = dVar3;
          local_468.Rotation.XY.m128d_f64[1] = dVar4;
          local_468.Rotation.ZW.m128d_f64[0] = dVar5;
          local_468.Rotation.ZW.m128d_f64[1] = dVar6;
          local_468.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar37;
          local_468.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)uVar20;
          local_408.Rotation.XY.m128d_f64[0] = dVar7;
          local_408.Rotation.XY.m128d_f64[1] = dVar8;
          local_408.Rotation.ZW.m128d_f64[0] = dVar9;
          local_408.Rotation.ZW.m128d_f64[1] = dVar10;
          local_408.Translation.XY.m128d_f64[0] = dVar11;
          local_408.Translation.XY.m128d_f64[1] = dVar12;
          local_408.Translation.ZW.m128d_f64[0] = dVar13;
          local_408.Translation.ZW.m128d_f64[1] = dVar14;
          local_408.Scale3D.XY.m128d_f64[0] = dVar15;
          local_408.Scale3D.XY.m128d_f64[1] = dVar16;
          local_408.Scale3D.ZW.m128d_f64[0] = dVar17;
          local_408.Scale3D.ZW.m128d_f64[1] = dVar18;
          bVar25 = FAutomationTestBase::TestEqual
                             ((FAutomationTestBase *)this,(wchar_t *)FVar33.Data,&local_408,
                              &local_468,__real_38d1b717);
          if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_738.Data.AllocatorInstance.Data);
          }
          uVar24 = UE::Math::TVector<double>::OneVector.field0_0x0._20_4_;
          uVar23 = UE::Math::TVector<double>::OneVector.field0_0x0._16_4_;
          uVar22 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
          uVar21 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          if (bVar25) {
            local_608 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
            dStack_600 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
            pTVar30 = UE::Math::TRotator<double>::Quaternion
                                (&UE::Math::TRotator<double>::ZeroRotator,&local_1b8);
            local_5f8 = uVar23;
            uStack_5f4 = uVar24;
            dVar3 = pTVar30->X;
            dVar4 = pTVar30->Y;
            dVar5 = pTVar30->Z;
            dVar6 = pTVar30->W;
            uVar37 = (undefined4)local_7b0;
            uVar20 = (ulonglong)local_7b0 >> 0x20;
            local_688 = dVar3;
            dStack_680 = dVar4;
            local_678 = dVar5;
            dStack_670 = dVar6;
            if ((local_168 < 3) &&
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
            lVar31 = (longlong)(int)(2 % (longlong)local_16c) * (longlong)local_170;
            dVar7 = *(double *)(lVar31 + (longlong)local_178);
            dVar8 = ((double *)(lVar31 + (longlong)local_178))[1];
            pdVar28 = (double *)(lVar31 + 0x10 + (longlong)local_178);
            dVar9 = *pdVar28;
            dVar10 = pdVar28[1];
            pdVar28 = (double *)(lVar31 + 0x20 + (longlong)local_178);
            dVar11 = *pdVar28;
            dVar12 = pdVar28[1];
            pdVar28 = (double *)(lVar31 + 0x30 + (longlong)local_178);
            dVar13 = *pdVar28;
            dVar14 = pdVar28[1];
            pdVar28 = (double *)(lVar31 + 0x40 + (longlong)local_178);
            dVar15 = *pdVar28;
            dVar16 = pdVar28[1];
            pdVar28 = (double *)(lVar31 + 0x50 + (longlong)local_178);
            dVar17 = *pdVar28;
            dVar18 = pdVar28[1];
            ::FString::FString(&local_728,"Point 2 has the correct transform,");
            local_588.Translation.XY.m128d_f64[0] = ___xmm_4062c000000000004049000000000000;
            local_588.Translation.XY.m128d_f64[1] = _UNK_1520300f8;
            FVar33.Data = (FScriptContainerElement *)L"";
            if (local_728.Data.ArrayNum != 0) {
              FVar33.Data = local_728.Data.AllocatorInstance.Data;
            }
            local_588.Translation.ZW.m128d_f64[0] = (double)local_7a8._16_8_;
            local_588.Translation.ZW.m128d_f64[1] = (double)local_7a8._24_8_;
            local_588.Scale3D.XY.m128d_f64[0] = (double)uVar21;
            local_588.Scale3D.XY.m128d_f64[1] = (double)uVar22;
            local_588.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar23;
            local_588.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar24;
            local_588.Rotation.XY.m128d_f64[0] = dVar3;
            local_588.Rotation.XY.m128d_f64[1] = dVar4;
            local_588.Rotation.ZW.m128d_f64[0] = dVar5;
            local_588.Rotation.ZW.m128d_f64[1] = dVar6;
            local_588.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar37;
            local_588.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)uVar20;
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
                               ((FAutomationTestBase *)this,(wchar_t *)FVar33.Data,&local_3a8,
                                &local_588,__real_38d1b717);
            if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_728.Data.AllocatorInstance.Data);
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
              uVar37 = (undefined4)local_7b0;
              uVar20 = (ulonglong)local_7b0 >> 0x20;
              local_6a8 = dVar3;
              dStack_6a0 = dVar4;
              local_698 = dVar5;
              dStack_690 = dVar6;
              if ((local_168 < 4) &&
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
              lVar31 = (longlong)(int)(3 % (longlong)local_16c) * (longlong)local_170;
              dVar7 = *(double *)(lVar31 + (longlong)local_178);
              dVar8 = ((double *)(lVar31 + (longlong)local_178))[1];
              pdVar28 = (double *)(lVar31 + 0x10 + (longlong)local_178);
              dVar9 = *pdVar28;
              dVar10 = pdVar28[1];
              pdVar28 = (double *)(lVar31 + 0x20 + (longlong)local_178);
              dVar11 = *pdVar28;
              dVar12 = pdVar28[1];
              pdVar28 = (double *)(lVar31 + 0x30 + (longlong)local_178);
              dVar13 = *pdVar28;
              dVar14 = pdVar28[1];
              pdVar28 = (double *)(lVar31 + 0x40 + (longlong)local_178);
              dVar15 = *pdVar28;
              dVar16 = pdVar28[1];
              local_178 = (double *)(lVar31 + 0x50 + (longlong)local_178);
              dVar17 = *local_178;
              dVar18 = local_178[1];
              ::FString::FString(&local_718,"Point 3 has the correct transform,");
              local_348.Translation.XY.m128d_f64[0] = ___xmm_4062c000000000004062c00000000000;
              local_348.Translation.XY.m128d_f64[1] = _UNK_152030108;
              FVar33.Data = (FScriptContainerElement *)L"";
              if (local_718.Data.ArrayNum != 0) {
                FVar33.Data = local_718.Data.AllocatorInstance.Data;
              }
              local_348.Translation.ZW.m128d_f64[0] = (double)local_7a8._16_8_;
              local_348.Translation.ZW.m128d_f64[1] = (double)local_7a8._24_8_;
              local_348.Scale3D.XY.m128d_f64[0] = (double)uVar21;
              local_348.Scale3D.XY.m128d_f64[1] = (double)uVar22;
              local_348.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar23;
              local_348.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar24;
              local_348.Rotation.XY.m128d_f64[0] = dVar3;
              local_348.Rotation.XY.m128d_f64[1] = dVar4;
              local_348.Rotation.ZW.m128d_f64[0] = dVar5;
              local_348.Rotation.ZW.m128d_f64[1] = dVar6;
              local_348.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar37;
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
                                 ((FAutomationTestBase *)this,(wchar_t *)FVar33.Data,&local_2e8,
                                  &local_348,__real_38d1b717);
              if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_718.Data.AllocatorInstance.Data);
              }
              if (bVar25) {
                bVar25 = true;
                goto LAB_149fd18de;
              }
            }
          }
        }
      }
    }
  }
LAB_149fd18dc:
  bVar25 = false;
LAB_149fd18de:
  if ((FPCGContext *)local_7a8._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_7a8._0_8_)(local_7a8._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_708.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_288);
  return bVar25;
}

// GetBeautifiedTestName @ 149fd19b0

FString * __thiscall
FPCGCreatePointsGridTest_LocalCenter::GetBeautifiedTestName
          (FPCGCreatePointsGridTest_LocalCenter *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.CreatePointsGrid.LocalCenter");
  return __return_storage_ptr__;
}

