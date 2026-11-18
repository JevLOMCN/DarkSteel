// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// GenerateTestDataRunAndValidate @ 14a01c0c0

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
FPCGSplitPointTestBase::GenerateTestDataRunAndValidate
          (FPCGSplitPointTestBase *this,FTestParameters *param_1)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  TConsoleVariableData<bool> *pTVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  UClass *pUVar14;
  FObjectPtr_u_0 FVar15;
  UPCGPointArrayData *pUVar16;
  UPCGBasePointData *pUVar17;
  FString *pFVar18;
  ForAnyElementType FVar19;
  FPCGDataPtrWrapper *this_00;
  wchar_t *pwVar20;
  wchar_t *pwVar21;
  FObjectPtr_u_0 local_668;
  undefined1 local_660 [16];
  longlong lStack_650;
  ForAnyElementType local_648;
  undefined8 local_640;
  undefined2 local_638;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_630;
  ForAnyElementType local_628;
  undefined8 local_620;
  ForAnyElementType local_618;
  undefined8 local_610;
  undefined2 local_608;
  void *local_600;
  ForAnyElementType local_5f8;
  undefined8 local_5f0;
  ForAnyElementType local_5e8;
  int local_5e0;
  int local_5dc;
  undefined4 local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  TSharedPtr<IPCGElement,1> local_538;
  FString local_528;
  FString local_518;
  TVector<double>_u_0 local_508;
  TVector<double>_u_0 local_4e8;
  TVector<double>_u_0 local_4c8;
  TVector<double>_u_0 local_4a8;
  TVector<double>_u_0 local_488;
  TVector<double>_u_0 local_468;
  TVector<double>_u_0 local_448;
  TVector<double>_u_0 local_428;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_3d8;
  FConstPCGPointValueRanges local_3a8;
  FConstPCGPointValueRanges local_218;
  
  pUVar14 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  local_648.Data = (FScriptContainerElement *)0x0;
  local_640 = 0;
  local_638 = 0;
  local_630.DebugPtr = (UPCGSettingsInterface *)0x0;
  local_628.Data = (FScriptContainerElement *)0x0;
  local_620._0_4_ = 0;
  local_620._4_4_ = 0;
  local_618.Data = (FScriptContainerElement *)0x0;
  local_610._0_4_ = 0;
  local_610._4_4_ = 0;
  local_608 = 0;
  local_600 = (void *)0x0;
  local_5f8.Data = (FScriptContainerElement *)0x0;
  local_5f0._0_4_ = 0;
  local_5f0._4_4_ = 0;
  local_660._8_8_ = 0;
  lStack_650 = 0;
  local_5e8.Data = (FScriptContainerElement *)0x0;
  local_3d8._0_8_ = 0;
  local_3d8._40_8_ = 0;
  local_5e0 = 0x2a;
  local_5dc = 0x2a;
  local_5d8 = 0x2a;
  PCGTestsCommon::GenerateSettings<UPCGSplitPointsSettings>((FTestData *)(local_660 + 8),&local_3d8)
  ;
  FVar19.Data = local_5e8.Data;
  if ((UPCGSettings *)local_5e8.Data == (UPCGSettings *)0x0) {
    pFVar18 = GetTypeName<UPCGSplitPointsSettings>(&local_408);
    if ((pFVar18->Data).ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar20);
  }
  pUVar14 = Z_Construct_UClass_UPCGSplitPointsSettings_NoRegister();
  iVar13 = (int)pUVar14->_padding_;
  if ((*(int *)(*(longlong *)(FVar19.Data + 0x10) + 0x38) < iVar13) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)(FVar19.Data + 0x10) + 0x30) + (longlong)iVar13 * 8) !=
      &pUVar14->_padding_)) {
    pFVar18 = GetTypeName<UPCGSplitPointsSettings>(&local_3f8);
    pwVar20 = L"";
    if ((pFVar18->Data).ArrayNum == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
    }
    pFVar18 = GetFullNameForCastLogError<UPCGSettings>(&local_3e8,(UPCGSettings *)FVar19.Data);
    if ((pFVar18->Data).ArrayNum != 0) {
      pwVar20 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar20,pwVar21);
  }
  *(float *)&((UPCGSettings *)(FVar19.Data + 200))->_padding_ = param_1->SplitPosition;
  *(EPCGSplitAxis *)(FVar19.Data + 0xcc) = param_1->SplitAxis;
  iVar13 = (int)local_640;
  if ((int)local_640 == local_640._4_4_) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x878,&local_648,(int *)((longlong)&local_640 + 4));
  }
  local_640 = CONCAT44(local_640._4_4_,iVar13 + 1);
  this_00 = (FPCGDataPtrWrapper *)(local_648.Data + (longlong)iVar13 * 0x78);
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
  pTVar9 = CVarPCGEnablePointArrayData.Ref;
  bVar11 = IsInParallelGameThread();
  if (bVar11) {
LAB_14a01c27d:
    FVar15.Handle = (UObject *)0x0;
  }
  else {
    bVar11 = IsInGameThread();
    FVar15 = (FObjectPtr_u_0)0x1;
    if (bVar11) goto LAB_14a01c27d;
  }
  if (pTVar9->ShadowedValue[(longlong)&(FVar15.Handle)->field_0x0] == false) {
    pUVar16 = (UPCGPointArrayData *)PCGTestsCommon::CreateEmptyPointData<UPCGPointData,0>();
  }
  else {
    pUVar16 = PCGTestsCommon::CreateEmptyPointData<UPCGPointArrayData,0>();
  }
  if ((pUVar16 == (UPCGPointArrayData *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SinglePointData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Tests\\PCGTestsCommon.h"
                          ,0x4e,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    uVar12 = (*pcVar3)();
    return (bool)uVar12;
  }
  (**(code **)(pUVar16->_padding_ + 0x490))(pUVar16,1,1);
  FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)pUVar16);
  UPCGSettings::GetElement((UPCGSettings *)local_5e8.Data,&local_538);
  PCGTestsCommon::FTestData::InitializeTestContext
            ((FTestData *)(local_660 + 8),(UPCGNode *)local_660);
  do {
    if ((local_538.Object == (IPCGElement *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      uVar12 = (*pcVar3)();
      return (bool)uVar12;
    }
    uVar10 = local_660._0_8_;
    bVar11 = IPCGElement::Execute(local_538.Object,(FPCGContext *)local_660._0_8_);
  } while (!bVar11);
  iVar13 = (((FPCGDataCollection *)(uVar10 + 0x38))->TaggedData).ArrayNum;
  ::FString::FString(&local_5c8,"Output count");
  FVar19.Data = (FScriptContainerElement *)L"";
  if (local_5c8.Data.ArrayNum != 0) {
    FVar19.Data = local_5c8.Data.AllocatorInstance.Data;
  }
  bVar11 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar19.Data,iVar13,2);
  if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
  }
  if (bVar11) {
    if (((((FPCGDataCollection *)(uVar10 + 0x38))->TaggedData).ArrayNum < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      uVar12 = (*pcVar3)();
      return (bool)uVar12;
    }
    local_668 = (FObjectPtr_u_0)
                ((FObjectPtr_u_0 *)
                (((FPCGDataCollection *)(uVar10 + 0x38))->TaggedData).AllocatorInstance.Data)->
                Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14a01c41a:
      if ((UPCGBasePointData *)local_668.Handle == (UPCGBasePointData *)0x0) goto LAB_14a01c43a;
      pUVar14 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar11 = FObjectPtr::IsA((FObjectPtr *)&local_668,pUVar14);
      FVar15 = local_668;
      if (!bVar11) goto LAB_14a01c43a;
    }
    else {
      if ((UPCGBasePointData *)local_668.Handle != (UPCGBasePointData *)0x0) {
        UE::GC::MarkAsReachable(local_668.Handle);
        goto LAB_14a01c41a;
      }
LAB_14a01c43a:
      FVar15.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_5b8,"OutputA point data");
    if ((UPCGBasePointData *)FVar15.Handle == (UPCGBasePointData *)0x0) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_528,L"Expected \'%s\' to be not null.");
      (*pcVar3)(this,&local_528,0);
      if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_528.Data.AllocatorInstance.Data);
      }
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
    }
    if (!bVar11) {
      iVar13 = (**(code **)(*(longlong *)FVar15.Handle + 0x488))(FVar15.Handle);
      ::FString::FString(&local_5a8,"OutputA point count");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_5a8.Data.ArrayNum != 0) {
        FVar19.Data = local_5a8.Data.AllocatorInstance.Data;
      }
      bVar11 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)FVar19.Data,iVar13,1);
      if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
      }
      if (bVar11) {
        FConstPCGPointValueRanges::FConstPCGPointValueRanges
                  (&local_3a8,(UPCGBasePointData *)FVar15.Handle);
        dVar1 = (param_1->ExpectedABoundsMin).field0_0x0._s_0.Z;
        dVar4 = (param_1->ExpectedABoundsMin).field0_0x0._s_0.X;
        dVar5 = (param_1->ExpectedABoundsMin).field0_0x0._s_0.Y;
        if ((local_3a8.BoundsMinRange.NumElements < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar11)) {
          pcVar3 = (code *)swi(3);
          uVar12 = (*pcVar3)();
          return (bool)uVar12;
        }
        dVar6 = ((local_3a8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.X;
        dVar7 = ((local_3a8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Y;
        dVar2 = ((local_3a8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Z;
        ::FString::FString(&local_598,"OutputA Bounds Min");
        fVar8 = __real_38d1b717;
        FVar19.Data = (FScriptContainerElement *)L"";
        if (local_598.Data.ArrayNum != 0) {
          FVar19.Data = local_598.Data.AllocatorInstance.Data;
        }
        local_508._s_0.X = dVar4;
        local_508._s_0.Y = dVar5;
        local_508._s_0.Z = dVar1;
        local_4e8._s_0.X = dVar6;
        local_4e8._s_0.Y = dVar7;
        local_4e8._s_0.Z = dVar2;
        bVar11 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar19.Data,
                            (TVector<double> *)&local_4e8._s_0,(TVector<double> *)&local_508._s_0,
                            __real_38d1b717);
        if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_598.Data.AllocatorInstance.Data);
        }
        if (bVar11) {
          dVar1 = (param_1->ExpectedABoundsMax).field0_0x0._s_0.Z;
          dVar4 = (param_1->ExpectedABoundsMax).field0_0x0._s_0.X;
          dVar5 = (param_1->ExpectedABoundsMax).field0_0x0._s_0.Y;
          if ((local_3a8.BoundsMaxRange.NumElements < 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar3 = (code *)swi(3);
            uVar12 = (*pcVar3)();
            return (bool)uVar12;
          }
          dVar6 = ((local_3a8.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.X;
          dVar7 = ((local_3a8.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Y;
          dVar2 = ((local_3a8.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Z;
          ::FString::FString(&local_588,"OutputA Bounds Max");
          FVar19.Data = (FScriptContainerElement *)L"";
          if (local_588.Data.ArrayNum != 0) {
            FVar19.Data = local_588.Data.AllocatorInstance.Data;
          }
          local_4c8._s_0.X = dVar4;
          local_4c8._s_0.Y = dVar5;
          local_4c8._s_0.Z = dVar1;
          local_4a8._s_0.X = dVar6;
          local_4a8._s_0.Y = dVar7;
          local_4a8._s_0.Z = dVar2;
          bVar11 = FAutomationTestBase::TestEqual
                             ((FAutomationTestBase *)this,(wchar_t *)FVar19.Data,
                              (TVector<double> *)&local_4a8._s_0,(TVector<double> *)&local_4c8._s_0,
                              fVar8);
          if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_588.Data.AllocatorInstance.Data);
          }
          if (bVar11) {
            if (((((FPCGDataCollection *)(uVar10 + 0x38))->TaggedData).ArrayNum < 2) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar3 = (code *)swi(3);
              uVar12 = (*pcVar3)();
              return (bool)uVar12;
            }
            pUVar17 = Cast<UPCGBasePointData>
                                ((FPCGDataPtrWrapper *)
                                 ((((FPCGDataCollection *)(uVar10 + 0x38))->TaggedData).
                                  AllocatorInstance.Data + 0x78));
            ::FString::FString(&local_578,"OutputB point data");
            if (pUVar17 == (UPCGBasePointData *)0x0) {
              pcVar3 = *(code **)(*(longlong *)this + 0x28);
              ::FString::PrintfImpl(&local_518,L"Expected \'%s\' to be not null.");
              (*pcVar3)(this,&local_518,0);
              if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_518.Data.AllocatorInstance.Data);
              }
              bVar11 = true;
            }
            else {
              bVar11 = false;
            }
            if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_578.Data.AllocatorInstance.Data);
            }
            if (!bVar11) {
              iVar13 = (**(code **)(pUVar17->_padding_ + 0x488))(pUVar17);
              ::FString::FString(&local_568,"OutputB point count");
              FVar19.Data = (FScriptContainerElement *)L"";
              if (local_568.Data.ArrayNum != 0) {
                FVar19.Data = local_568.Data.AllocatorInstance.Data;
              }
              bVar11 = FAutomationTestBase::TestEqual
                                 ((FAutomationTestBase *)this,(wchar_t *)FVar19.Data,iVar13,1);
              if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_568.Data.AllocatorInstance.Data);
              }
              if (bVar11) {
                FConstPCGPointValueRanges::FConstPCGPointValueRanges(&local_218,pUVar17);
                dVar1 = (param_1->ExpectedBBoundsMin).field0_0x0._s_0.Z;
                dVar4 = (param_1->ExpectedBBoundsMin).field0_0x0._s_0.X;
                dVar5 = (param_1->ExpectedBBoundsMin).field0_0x0._s_0.Y;
                if ((local_218.BoundsMinRange.NumElements < 1) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < NumElements)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                        ,0x8b,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar11)) {
                  pcVar3 = (code *)swi(3);
                  uVar12 = (*pcVar3)();
                  return (bool)uVar12;
                }
                dVar6 = ((local_218.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.X;
                dVar7 = ((local_218.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Y;
                dVar2 = ((local_218.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Z;
                ::FString::FString(&local_558,"OutputB Bounds Min");
                FVar19.Data = (FScriptContainerElement *)L"";
                if (local_558.Data.ArrayNum != 0) {
                  FVar19.Data = local_558.Data.AllocatorInstance.Data;
                }
                local_488._s_0.X = dVar4;
                local_488._s_0.Y = dVar5;
                local_488._s_0.Z = dVar1;
                local_468._s_0.X = dVar6;
                local_468._s_0.Y = dVar7;
                local_468._s_0.Z = dVar2;
                bVar11 = FAutomationTestBase::TestEqual
                                   ((FAutomationTestBase *)this,(wchar_t *)FVar19.Data,
                                    (TVector<double> *)&local_468._s_0,
                                    (TVector<double> *)&local_488._s_0,fVar8);
                if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_558.Data.AllocatorInstance.Data);
                }
                if (bVar11) {
                  dVar1 = (param_1->ExpectedBBoundsMax).field0_0x0._s_0.Z;
                  dVar4 = (param_1->ExpectedBBoundsMax).field0_0x0._s_0.X;
                  dVar5 = (param_1->ExpectedBBoundsMax).field0_0x0._s_0.Y;
                  if ((local_218.BoundsMaxRange.NumElements < 1) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < NumElements)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                          ,0x8b,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar11)) {
                    pcVar3 = (code *)swi(3);
                    uVar12 = (*pcVar3)();
                    return (bool)uVar12;
                  }
                  dVar6 = ((local_218.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.
                          X;
                  dVar7 = ((local_218.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.
                          Y;
                  dVar2 = ((local_218.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.
                          Z;
                  ::FString::FString(&local_548,"OutputB Bounds Max");
                  FVar19.Data = (FScriptContainerElement *)L"";
                  if (local_548.Data.ArrayNum != 0) {
                    FVar19.Data = local_548.Data.AllocatorInstance.Data;
                  }
                  local_448._s_0.X = dVar4;
                  local_448._s_0.Y = dVar5;
                  local_448._s_0.Z = dVar1;
                  local_428._s_0.X = dVar6;
                  local_428._s_0.Y = dVar7;
                  local_428._s_0.Z = dVar2;
                  bVar11 = FAutomationTestBase::TestEqual
                                     ((FAutomationTestBase *)this,(wchar_t *)FVar19.Data,
                                      (TVector<double> *)&local_428._s_0,
                                      (TVector<double> *)&local_448._s_0,fVar8);
                  if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_548.Data.AllocatorInstance.Data);
                  }
                  if (bVar11) {
                    bVar11 = true;
                    goto LAB_14a01c96c;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar11 = false;
LAB_14a01c96c:
  if ((FPCGContext *)local_660._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_660._0_8_)(local_660._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_538.SharedReferenceCount.ReferenceController);
  if (local_600 != (void *)0x0) {
    FMemory::Free(local_600);
  }
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_618.Data,(int)local_610);
  if ((FPCGTaggedData *)local_618.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_618.Data);
  }
  if (local_630.DebugPtr != (UPCGSettingsInterface *)0x0) {
    FMemory::Free(local_630.DebugPtr);
  }
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_648.Data,(int)local_640);
  if ((FPCGTaggedData *)local_648.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_648.Data);
  }
  return bVar11;
}

