// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fdbff0

EAutomationTestFlags __thiscall
FPCGCreatePointsTest_Basic::GetTestFlags(FPCGCreatePointsTest_Basic *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fdc000

bool __thiscall FPCGCreatePointsTest_Basic::IsStressTest(FPCGCreatePointsTest_Basic *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fdc010

uint __thiscall FPCGCreatePointsTest_Basic::GetRequiredDeviceNum(FPCGCreatePointsTest_Basic *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fdc020

FString * __thiscall
FPCGCreatePointsTest_Basic::GetTestSourceFileName
          (FPCGCreatePointsTest_Basic *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGCreatePointsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fdc050

int __thiscall FPCGCreatePointsTest_Basic::GetTestSourceFileLine(FPCGCreatePointsTest_Basic *this)

{
  return 10;
}

// GetTests @ 149fdc060

/* WARNING: Removing unreachable block (ram,0x000149fdc14d) */
/* WARNING: Removing unreachable block (ram,0x000149fdc218) */

void __thiscall
FPCGCreatePointsTest_Basic::GetTests
          (FPCGCreatePointsTest_Basic *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.CreatePoints.Basic");
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

// RunTest @ 149fdc240

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
FPCGCreatePointsTest_Basic::RunTest(FPCGCreatePointsTest_Basic *this,FString *param_1)

{
  longlong *plVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  code *pcVar6;
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
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  UPCGSettings *pUVar29;
  bool bVar30;
  undefined1 uVar31;
  int iVar32;
  UClass *pUVar33;
  UPCGBasePointData *pUVar34;
  int *piVar35;
  float *pfVar36;
  TTransform<double> *pTVar37;
  TVector<double> *pTVar38;
  TVector4<double> *pTVar39;
  long64 *plVar40;
  FString *pFVar41;
  uint *puVar42;
  longlong lVar43;
  FScriptContainerElement *pFVar44;
  TReferenceControllerBase<1> *pTVar45;
  ForAnyElementType FVar46;
  uint uVar47;
  longlong lVar48;
  wchar_t *pwVar49;
  uint uVar50;
  uint uVar51;
  FObjectPtr_u_0 FVar52;
  UPCGSettings *pUVar53;
  wchar_t *pwVar54;
  float fVar55;
  undefined1 auStackY_858 [32];
  undefined1 local_808 [24];
  int local_7f0;
  int local_7ec;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_7e8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_7d8;
  FObjectPtr_u_0 local_7c8;
  FAutomationTestBase *local_7c0;
  undefined1 local_7b8 [40];
  FNameEntryId local_790;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_788 [2];
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  TSharedPtr<IPCGElement,1> local_738;
  longlong local_728;
  int local_720;
  int local_71c;
  int local_718;
  uint local_714;
  FString local_710;
  double local_700;
  double dStack_6f8;
  double local_6f0;
  double dStack_6e8;
  FStringFormatArg local_6e0;
  FStringFormatArg local_6c0;
  FStringFormatArg local_6a0;
  TTransform<double> local_678;
  TTransform<double> local_618;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_588;
  FTestData local_558;
  FConstPCGPointValueRanges local_4c8;
  FPCGPoint local_338;
  FConstPCGPointValueRanges local_268;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_858;
  local_7c0 = (FAutomationTestBase *)this;
  local_7b8._24_8_ = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_7b8._24_8_ != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_7b8._24_8_);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_558,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)((longlong)local_7b8 + 0x18));
  uVar50 = 0;
  local_588._0_8_ = 0;
  local_588._40_8_ = 0;
  PCGTestsCommon::GenerateSettings<UPCGCreatePointsSettings>(&local_558,&local_588);
  pUVar29 = local_558.Settings;
  local_7b8._8_8_ = local_558.Settings;
  if (local_558.Settings == (UPCGSettings *)0x0) {
    pFVar41 = GetTypeName<UPCGCreatePointsSettings>(&local_5b8);
    if ((pFVar41->Data).ArrayNum == 0) {
      pwVar54 = L"";
    }
    else {
      pwVar54 = (wchar_t *)(pFVar41->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar54);
  }
  pUVar33 = Z_Construct_UClass_UPCGCreatePointsSettings_NoRegister();
  iVar32 = (int)pUVar33->_padding_;
  if ((*(int *)(pUVar29->_padding_ + 0x38) < iVar32) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar29->_padding_ + 0x30) + (longlong)iVar32 * 8)
      != &pUVar33->_padding_)) {
    pFVar41 = GetTypeName<UPCGCreatePointsSettings>(&local_5a8);
    pwVar54 = L"";
    if ((pFVar41->Data).ArrayNum == 0) {
      pwVar49 = L"";
    }
    else {
      pwVar49 = (wchar_t *)(pFVar41->Data).AllocatorInstance.Data;
    }
    pFVar41 = GetFullNameForCastLogError<UPCGSettings>(&local_598,pUVar29);
    if ((pFVar41->Data).ArrayNum != 0) {
      pwVar54 = (wchar_t *)(pFVar41->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar54,pwVar49);
  }
  pUVar34 = PCGTestsCommon::CreateRandomBasePointData(100,0x2a,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar34 != (UPCGBasePointData *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar34);
  }
  (**(code **)(pUVar34->_padding_ + 0x4f0))(pUVar34,&local_728,1);
  iVar32 = (**(code **)(pUVar34->_padding_ + 0x488))(pUVar34);
  if (0 < iVar32) {
    local_7b8._8_8_ = pUVar29;
    uVar47 = uVar50;
    do {
      uVar51 = 0;
      if ((int)uVar47 < local_718) {
        uVar51 = ~uVar47 >> 0x1f;
      }
      if ((uVar51 == 0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar30)) {
        pcVar6 = (code *)swi(3);
        uVar31 = (*pcVar6)();
        return (bool)uVar31;
      }
      if (uVar47 == (int)uVar47 % local_71c) {
        puVar42 = (uint *)((longlong)((int)uVar47 % local_71c) * (longlong)local_720 + local_728);
      }
      else {
        puVar42 = &local_714;
      }
      *puVar42 = uVar47;
      uVar47 = uVar47 + 1;
      iVar32 = (**(code **)(pUVar34->_padding_ + 0x488))(pUVar34);
    } while ((int)uVar47 < iVar32);
  }
  FConstPCGPointValueRanges::FConstPCGPointValueRanges(&local_268,pUVar34);
  local_808._0_8_ = (FPCGPoint *)0x0;
  local_808._8_8_ = 0;
  uVar47 = (**(code **)(pUVar34->_padding_ + 0x488))(pUVar34);
  if ((int)uVar47 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar47);
  }
  if ((int)local_808._12_4_ < (int)uVar47) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,0x10,uVar47,(ForAnyElementType *)local_808,local_808._8_4_,
               (int *)(local_808 + 0xc));
  }
  iVar32 = (**(code **)(pUVar34->_padding_ + 0x488))(pUVar34);
  if (0 < iVar32) {
    do {
      piVar35 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                          (&local_268.SeedRange,uVar50);
      iVar32 = *piVar35;
      pfVar36 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                          (&local_268.DensityRange,uVar50);
      fVar55 = *pfVar36;
      pTVar37 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                ::GetElement(&local_268.TransformRange,uVar50);
      FPCGPoint::FPCGPoint(&local_338,pTVar37,fVar55,iVar32);
      pTVar38 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                ::GetElement(&local_268.BoundsMinRange,uVar50);
      local_338.BoundsMin.field0_0x0._s_0.X = (pTVar38->field0_0x0)._s_0.X;
      local_338.BoundsMin.field0_0x0._s_0.Y = (pTVar38->field0_0x0)._s_0.Y;
      local_338.BoundsMin.field0_0x0._s_0.Z = (pTVar38->field0_0x0)._s_0.Z;
      pTVar38 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                ::GetElement(&local_268.BoundsMaxRange,uVar50);
      local_338.BoundsMax.field0_0x0._s_0.X = (pTVar38->field0_0x0)._s_0.X;
      local_338.BoundsMax.field0_0x0._s_0.Y = (pTVar38->field0_0x0)._s_0.Y;
      local_338.BoundsMax.field0_0x0._s_0.Z = (pTVar38->field0_0x0)._s_0.Z;
      pfVar36 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                          (&local_268.SteepnessRange,uVar50);
      local_338.Steepness = *pfVar36;
      pTVar39 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                ::GetElement(&local_268.ColorRange,uVar50);
      local_338.Color.field0_0x0._s_0.X = (pTVar39->field0_0x0)._s_0.X;
      local_338.Color.field0_0x0._s_0.Y = (pTVar39->field0_0x0)._s_0.Y;
      local_338.Color.field0_0x0._s_0.Z = *(double *)((longlong)&pTVar39->field0_0x0 + 0x10);
      local_338.Color.field0_0x0._s_0.W = *(double *)((longlong)&pTVar39->field0_0x0 + 0x18);
      plVar40 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                          (&local_268.MetadataEntryRange,uVar50);
      local_338.MetadataEntry = *plVar40;
      if ((((ulonglong)local_808._0_8_ <= &local_338) &&
          (&local_338 < (FPCGPoint *)(local_808._0_8_ + (longlong)(int)local_808._12_4_ * 0xd0))) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar30)) {
        pcVar6 = (code *)swi(3);
        uVar31 = (*pcVar6)();
        return (bool)uVar31;
      }
      iVar32 = local_808._8_4_;
      if (local_808._8_4_ == local_808._12_4_) {
        iVar32 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10d0,(ForAnyElementType *)local_808,(int *)(local_808 + 0xc));
      }
      uVar50 = uVar50 + 1;
      local_808._8_4_ = iVar32 + 1;
      pFVar44 = (FScriptContainerElement *)(local_808._0_8_ + (longlong)iVar32 * 0xd0);
      *(double *)pFVar44 = local_338.Transform.Rotation.XY.m128d_f64[0];
      *(double *)(pFVar44 + 8) = local_338.Transform.Rotation.XY.m128d_f64[1];
      *(double *)(pFVar44 + 0x10) = local_338.Transform.Rotation.ZW.m128d_f64[0];
      *(double *)(pFVar44 + 0x18) = local_338.Transform.Rotation.ZW.m128d_f64[1];
      *(double *)(pFVar44 + 0x20) = local_338.Transform.Translation.XY.m128d_f64[0];
      *(double *)(pFVar44 + 0x28) = local_338.Transform.Translation.XY.m128d_f64[1];
      *(double *)(pFVar44 + 0x30) = local_338.Transform.Translation.ZW.m128d_f64[0];
      *(double *)(pFVar44 + 0x38) = local_338.Transform.Translation.ZW.m128d_f64[1];
      *(double *)(pFVar44 + 0x40) = local_338.Transform.Scale3D.XY.m128d_f64[0];
      *(double *)(pFVar44 + 0x48) = local_338.Transform.Scale3D.XY.m128d_f64[1];
      *(double *)(pFVar44 + 0x50) = local_338.Transform.Scale3D.ZW.m128d_f64[0];
      *(double *)(pFVar44 + 0x58) = local_338.Transform.Scale3D.ZW.m128d_f64[1];
      *(undefined8 *)(pFVar44 + 0x60) = local_338._96_8_;
      *(double *)(pFVar44 + 0x68) = local_338.BoundsMin.field0_0x0._s_0.X;
      *(double *)(pFVar44 + 0x70) = local_338.BoundsMin.field0_0x0._s_0.Y;
      *(double *)(pFVar44 + 0x78) = local_338.BoundsMin.field0_0x0._s_0.Z;
      *(double *)(pFVar44 + 0x80) = local_338.BoundsMax.field0_0x0._s_0.X;
      *(double *)(pFVar44 + 0x88) = local_338.BoundsMax.field0_0x0._s_0.Y;
      *(double *)(pFVar44 + 0x90) = local_338.BoundsMax.field0_0x0._s_0.Z;
      *(longlong *)(pFVar44 + 0x98) = local_338._padding_;
      *(double *)(pFVar44 + 0xa0) = local_338.Color.field0_0x0._s_0.X;
      *(double *)(pFVar44 + 0xa8) = local_338.Color.field0_0x0._s_0.Y;
      *(undefined4 *)(pFVar44 + 0xb0) = local_338.Color.field0_0x0._16_4_;
      *(undefined4 *)(pFVar44 + 0xb4) = local_338.Color.field0_0x0._20_4_;
      *(undefined4 *)(pFVar44 + 0xb8) = local_338.Color.field0_0x0._24_4_;
      *(undefined4 *)(pFVar44 + 0xbc) = local_338.Color.field0_0x0._28_4_;
      *(float *)(pFVar44 + 0xc0) = local_338.Steepness;
      *(int *)(pFVar44 + 0xc4) = local_338.Seed;
      *(undefined4 *)(pFVar44 + 200) = (undefined4)local_338.MetadataEntry;
      *(undefined4 *)(pFVar44 + 0xcc) = local_338.MetadataEntry._4_4_;
      iVar32 = (**(code **)(pUVar34->_padding_ + 0x488))(pUVar34);
    } while ((int)uVar50 < iVar32);
  }
  uVar27 = local_808._0_8_;
  pUVar53 = pUVar29 + 1;
  if (pUVar53 != (UPCGSettings *)local_808) {
    uVar28 = local_808._8_4_;
    lVar48 = (longlong)(int)local_808._8_4_;
    piVar35 = (int *)((longlong)&pUVar29[1]._padding_ + 4);
    iVar32 = *piVar35;
    *(undefined4 *)&pUVar29[1]._padding_ = local_808._8_4_;
    if ((local_808._8_4_ == 0) && (iVar32 == 0)) {
      *piVar35 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd0,0x10,local_808._8_4_,iVar32,(ForAnyElementType *)pUVar53,local_808._8_4_,
                 piVar35);
      if (uVar28 != 0) {
        memcpy((FScriptContainerElement *)pUVar53->_padding_,(void *)uVar27,lVar48 * 0xd0);
      }
    }
  }
  UPCGSettings::GetElement(local_558.Settings,&local_738);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_558,(UPCGNode *)local_7b8);
  do {
    if ((local_738.Object == (IPCGElement *)0x0) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar30)) {
      pcVar6 = (code *)swi(3);
      uVar31 = (*pcVar6)();
      return (bool)uVar31;
    }
    bVar30 = IPCGElement::Execute(local_738.Object,(FPCGContext *)local_7b8._0_8_);
    uVar27 = local_7b8._0_8_;
  } while (!bVar30);
  iVar32 = (((FPCGDataCollection *)(local_7b8._0_8_ + 0x38))->TaggedData).ArrayNum;
  ::FString::FString((FString *)(local_7b8 + 0x20),"Output count");
  pTVar45 = (TReferenceControllerBase<1> *)L"";
  if (local_790.Value != 0) {
    pTVar45 = (TReferenceControllerBase<1> *)local_7b8._32_8_;
  }
  bVar30 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)pTVar45,iVar32,1);
  if ((TReferenceControllerBase<1> *)local_7b8._32_8_ != (TReferenceControllerBase<1> *)0x0) {
    FMemory::Free((void *)local_7b8._32_8_);
  }
  if (bVar30) {
    if (((((FPCGDataCollection *)(uVar27 + 0x38))->TaggedData).ArrayNum < 1) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar30)) {
      pcVar6 = (code *)swi(3);
      uVar31 = (*pcVar6)();
      return (bool)uVar31;
    }
    local_7c8 = (FObjectPtr_u_0)
                ((FObjectPtr_u_0 *)
                (((FPCGDataCollection *)(uVar27 + 0x38))->TaggedData).AllocatorInstance.Data)->
                Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fdc890:
      if ((UPCGBasePointData *)local_7c8.Handle == (UPCGBasePointData *)0x0) goto LAB_149fdc8b0;
      pUVar33 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar30 = FObjectPtr::IsA((FObjectPtr *)&local_7c8,pUVar33);
      FVar52 = local_7c8;
      if (!bVar30) goto LAB_149fdc8b0;
    }
    else {
      if ((UPCGBasePointData *)local_7c8.Handle != (UPCGBasePointData *)0x0) {
        UE::GC::MarkAsReachable(local_7c8.Handle);
        goto LAB_149fdc890;
      }
LAB_149fdc8b0:
      FVar52.Handle = (UObject *)0x0;
    }
    local_7b8._16_8_ = FVar52;
    ::FString::FString((FString *)&local_788[0].ObjectPtr,"Output point data");
    if ((UPCGBasePointData *)FVar52.Handle == (UPCGBasePointData *)0x0) {
      pcVar6 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_710,L"Expected \'%s\' to be not null.");
      (*pcVar6)(this,&local_710,0);
      if (local_710.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_710.Data.AllocatorInstance.Data);
      }
      bVar30 = true;
    }
    else {
      bVar30 = false;
    }
    if ((long  [2])local_788[0].DebugPtr != (long  [2])0x0) {
      FMemory::Free(local_788[0].DebugPtr);
    }
    if (!bVar30) {
      FConstPCGPointValueRanges::FConstPCGPointValueRanges
                (&local_4c8,(UPCGBasePointData *)FVar52.Handle);
      iVar32 = (**(code **)(*(longlong *)FVar52.Handle + 0x488))(FVar52.Handle);
      ::FString::FString(&local_778,"Output point count");
      FVar46.Data = (FScriptContainerElement *)L"";
      if (local_778.Data.ArrayNum != 0) {
        FVar46.Data = local_778.Data.AllocatorInstance.Data;
      }
      bVar30 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)FVar46.Data,iVar32,100);
      if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_778.Data.AllocatorInstance.Data);
      }
      if (bVar30) {
        uVar50 = 0;
        iVar32 = (**(code **)(*(longlong *)FVar52.Handle + 0x488))(FVar52.Handle);
        if (0 < iVar32) {
          plVar1 = &pUVar29[1]._padding_;
          lVar48 = 0;
          fVar55 = __real_38d1b717;
          do {
            if (uVar50 == 0) {
              iVar32 = 0x36196377;
            }
            else {
              uVar47 = 0;
              if ((int)uVar50 < (int)*plVar1) {
                uVar47 = ~uVar50 >> 0x1f;
              }
              if ((uVar47 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar6 = (code *)swi(3);
                uVar31 = (*pcVar6)();
                return (bool)uVar31;
              }
              iVar32 = *(int *)((FScriptContainerElement *)pUVar53->_padding_ + lVar48 + 0xc4);
            }
            uVar51 = ~uVar50 >> 0x1f;
            uVar47 = 0;
            if ((int)uVar50 < local_4c8.SeedRange.NumElements) {
              uVar47 = uVar51;
            }
            if ((uVar47 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar30)) {
              pcVar6 = (code *)swi(3);
              uVar31 = (*pcVar6)();
              return (bool)uVar31;
            }
            iVar5 = *(int *)((longlong)((int)uVar50 % local_4c8.SeedRange.ElementView.NumElements) *
                             (longlong)local_4c8.SeedRange.ElementView.BytesBetweenElements +
                            (longlong)local_4c8.SeedRange.ElementView.FirstElementPtr);
            FStringFormatArg::FStringFormatArg(&local_6e0,uVar50);
            local_808._16_8_ = (FStringFormatArg *)0x0;
            local_7f0 = 1;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,(ForAnyElementType *)(local_808 + 0x10),1,&local_7ec);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      ((void *)local_808._16_8_,&local_6e0,1);
            ::FString::FormatImpl
                      (&local_768,L"InArray[{0}].Seed is equal to OutArray[{0}].Seed",
                       (TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> *)(local_808 + 0x10));
            FVar46.Data = (FScriptContainerElement *)L"";
            if (local_768.Data.ArrayNum != 0) {
              FVar46.Data = local_768.Data.AllocatorInstance.Data;
            }
            bVar30 = FAutomationTestBase::TestEqual(local_7c0,(wchar_t *)FVar46.Data,iVar5,iVar32);
            if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_768.Data.AllocatorInstance.Data);
            }
            DestructItems<FStringFormatArg,int>((FStringFormatArg *)local_808._16_8_,local_7f0);
            if ((FStringFormatArg *)local_808._16_8_ != (FStringFormatArg *)0x0) {
              FMemory::Free((void *)local_808._16_8_);
            }
            if (local_6e0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_6e0.StringValue.Data.AllocatorInstance.Data);
            }
            if (!bVar30) goto LAB_149fdcf7b;
            uVar47 = 0;
            if ((int)uVar50 < (int)*plVar1) {
              uVar47 = uVar51;
            }
            if ((uVar47 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar6 = (code *)swi(3);
              uVar31 = (*pcVar6)();
              return (bool)uVar31;
            }
            pUVar53 = (UPCGSettings *)(local_7b8._8_8_ + 200);
            fVar3 = *(float *)((FScriptContainerElement *)pUVar53->_padding_ + lVar48 + 0x60);
            uVar47 = 0;
            if ((int)uVar50 < local_4c8.DensityRange.NumElements) {
              uVar47 = uVar51;
            }
            if ((uVar47 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar30)) {
              pcVar6 = (code *)swi(3);
              uVar31 = (*pcVar6)();
              return (bool)uVar31;
            }
            fVar4 = *(float *)((longlong)
                               ((int)uVar50 % local_4c8.DensityRange.ElementView.NumElements) *
                               (longlong)local_4c8.DensityRange.ElementView.BytesBetweenElements +
                              (longlong)local_4c8.DensityRange.ElementView.FirstElementPtr);
            FStringFormatArg::FStringFormatArg(&local_6c0,uVar50);
            local_7e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_7e8.ArrayNum = 1;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,&local_7e8.AllocatorInstance,1,&local_7e8.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_7e8.AllocatorInstance.Data,&local_6c0,1);
            ::FString::FormatImpl
                      (&local_758,L"InArray[{0}].Density is equal to OutArray[{0}].Density",
                       &local_7e8);
            FVar46.Data = (FScriptContainerElement *)L"";
            if (local_758.Data.ArrayNum != 0) {
              FVar46.Data = local_758.Data.AllocatorInstance.Data;
            }
            bVar30 = FAutomationTestBase::TestEqual
                               (local_7c0,(wchar_t *)FVar46.Data,fVar4,fVar3,fVar55);
            if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_758.Data.AllocatorInstance.Data);
            }
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_7e8.AllocatorInstance.Data,local_7e8.ArrayNum);
            if ((FStringFormatArg *)local_7e8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_7e8.AllocatorInstance.Data);
            }
            if (local_6c0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_6c0.StringValue.Data.AllocatorInstance.Data);
            }
            if (!bVar30) goto LAB_149fdcf7b;
            uVar47 = 0;
            if ((int)uVar50 < (int)*plVar1) {
              uVar47 = uVar51;
            }
            if ((uVar47 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar6 = (code *)swi(3);
              uVar31 = (*pcVar6)();
              return (bool)uVar31;
            }
            pFVar44 = (FScriptContainerElement *)pUVar53->_padding_;
            local_6f0 = *(double *)(pFVar44 + lVar48 + 0x40);
            dStack_6e8 = *(double *)(pFVar44 + lVar48 + 0x40 + 8);
            dVar7 = *(double *)(pFVar44 + lVar48);
            dVar8 = *(double *)(pFVar44 + lVar48 + 8);
            dVar9 = *(double *)(pFVar44 + lVar48 + 0x10);
            dVar10 = *(double *)(pFVar44 + lVar48 + 0x10 + 8);
            dVar11 = *(double *)(pFVar44 + lVar48 + 0x20);
            dVar12 = *(double *)(pFVar44 + lVar48 + 0x20 + 8);
            dVar13 = *(double *)(pFVar44 + lVar48 + 0x30);
            dVar14 = *(double *)(pFVar44 + lVar48 + 0x30 + 8);
            local_700 = *(double *)(pFVar44 + lVar48 + 0x50);
            dStack_6f8 = *(double *)(pFVar44 + lVar48 + 0x50 + 8);
            uVar47 = 0;
            if ((int)uVar50 < local_4c8.TransformRange.NumElements) {
              uVar47 = uVar51;
            }
            if ((uVar47 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar30)) {
              pcVar6 = (code *)swi(3);
              uVar31 = (*pcVar6)();
              return (bool)uVar31;
            }
            lVar43 = (longlong)((int)uVar50 % local_4c8.TransformRange.ElementView.NumElements) *
                     (longlong)local_4c8.TransformRange.ElementView.BytesBetweenElements;
            pdVar2 = (double *)
                     ((longlong)
                      ((local_4c8.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.
                      m128d_f64 + lVar43);
            dVar15 = *pdVar2;
            dVar16 = pdVar2[1];
            pdVar2 = (double *)
                     ((longlong)
                      ((local_4c8.TransformRange.ElementView.FirstElementPtr)->Rotation).ZW.
                      m128d_f64 + lVar43);
            dVar17 = *pdVar2;
            dVar18 = pdVar2[1];
            pdVar2 = (double *)
                     ((longlong)
                      ((local_4c8.TransformRange.ElementView.FirstElementPtr)->Translation).XY.
                      m128d_f64 + lVar43);
            dVar19 = *pdVar2;
            dVar20 = pdVar2[1];
            pdVar2 = (double *)
                     ((longlong)
                      ((local_4c8.TransformRange.ElementView.FirstElementPtr)->Translation).ZW.
                      m128d_f64 + lVar43);
            dVar21 = *pdVar2;
            dVar22 = pdVar2[1];
            pdVar2 = (double *)
                     ((longlong)
                      ((local_4c8.TransformRange.ElementView.FirstElementPtr)->Scale3D).XY.m128d_f64
                     + lVar43);
            dVar23 = *pdVar2;
            dVar24 = pdVar2[1];
            pdVar2 = (double *)
                     ((longlong)
                      ((local_4c8.TransformRange.ElementView.FirstElementPtr)->Scale3D).ZW.m128d_f64
                     + lVar43);
            dVar25 = *pdVar2;
            dVar26 = pdVar2[1];
            FStringFormatArg::FStringFormatArg(&local_6a0,uVar50);
            local_7d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_7d8.ArrayNum = 1;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,&local_7d8.AllocatorInstance,1,&local_7d8.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_7d8.AllocatorInstance.Data,&local_6a0,1);
            ::FString::FormatImpl
                      (&local_748,L"InArray[{0}].Transform is equal to OutArray[{0}].Transform",
                       &local_7d8);
            fVar55 = __real_38d1b717;
            FVar46.Data = (FScriptContainerElement *)L"";
            if (local_748.Data.ArrayNum != 0) {
              FVar46.Data = local_748.Data.AllocatorInstance.Data;
            }
            local_678.Scale3D.XY.m128d_f64[0] = local_6f0;
            local_678.Scale3D.XY.m128d_f64[1] = dStack_6e8;
            local_678.Scale3D.ZW.m128d_f64[0] = local_700;
            local_678.Scale3D.ZW.m128d_f64[1] = dStack_6f8;
            local_678.Rotation.XY.m128d_f64[0] = dVar7;
            local_678.Rotation.XY.m128d_f64[1] = dVar8;
            local_678.Rotation.ZW.m128d_f64[0] = dVar9;
            local_678.Rotation.ZW.m128d_f64[1] = dVar10;
            local_678.Translation.XY.m128d_f64[0] = dVar11;
            local_678.Translation.XY.m128d_f64[1] = dVar12;
            local_678.Translation.ZW.m128d_f64[0] = dVar13;
            local_678.Translation.ZW.m128d_f64[1] = dVar14;
            local_618.Rotation.XY.m128d_f64[0] = dVar15;
            local_618.Rotation.XY.m128d_f64[1] = dVar16;
            local_618.Rotation.ZW.m128d_f64[0] = dVar17;
            local_618.Rotation.ZW.m128d_f64[1] = dVar18;
            local_618.Translation.XY.m128d_f64[0] = dVar19;
            local_618.Translation.XY.m128d_f64[1] = dVar20;
            local_618.Translation.ZW.m128d_f64[0] = dVar21;
            local_618.Translation.ZW.m128d_f64[1] = dVar22;
            local_618.Scale3D.XY.m128d_f64[0] = dVar23;
            local_618.Scale3D.XY.m128d_f64[1] = dVar24;
            local_618.Scale3D.ZW.m128d_f64[0] = dVar25;
            local_618.Scale3D.ZW.m128d_f64[1] = dVar26;
            bVar30 = FAutomationTestBase::TestEqual
                               (local_7c0,(wchar_t *)FVar46.Data,&local_618,&local_678,
                                __real_38d1b717);
            if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_748.Data.AllocatorInstance.Data);
            }
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_7d8.AllocatorInstance.Data,local_7d8.ArrayNum);
            if ((FStringFormatArg *)local_7d8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_7d8.AllocatorInstance.Data);
            }
            if (local_6a0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_6a0.StringValue.Data.AllocatorInstance.Data);
            }
            if (!bVar30) goto LAB_149fdcf7b;
            uVar50 = uVar50 + 1;
            lVar48 = lVar48 + 0xd0;
            iVar32 = (**(code **)(*(longlong *)local_7b8._16_8_ + 0x488))(local_7b8._16_8_);
          } while ((int)uVar50 < iVar32);
        }
        bVar30 = true;
        goto LAB_149fdcf7d;
      }
    }
  }
LAB_149fdcf7b:
  bVar30 = false;
LAB_149fdcf7d:
  if ((FPCGContext *)local_7b8._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_7b8._0_8_)(local_7b8._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_738.SharedReferenceCount.ReferenceController);
  if ((FPCGPoint *)local_808._0_8_ != (FPCGPoint *)0x0) {
    FMemory::Free((void *)local_808._0_8_);
  }
  PCGTestsCommon::FTestData::~FTestData(&local_558);
  return bVar30;
}

// GetBeautifiedTestName @ 149fdd0d0

FString * __thiscall
FPCGCreatePointsTest_Basic::GetBeautifiedTestName
          (FPCGCreatePointsTest_Basic *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.CreatePoints.Basic");
  return __return_storage_ptr__;
}

