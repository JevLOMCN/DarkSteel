// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149b72b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGCreatePointsSphereElement::ExecuteInternal
          (FPCGCreatePointsSphereElement *this,FPCGContext *param_1)

{
  int *piVar1;
  double dVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  char cVar5;
  int iVar6;
  UPCGNode *this_00;
  FScriptContainerElement *pFVar7;
  IPCGGraphExecutionSource *pIVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  double dVar24;
  ForAnyElementType FVar25;
  bool bVar26;
  undefined1 uVar27;
  bool bVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  UClass *pUVar32;
  UPCGSettings *pUVar33;
  TObjectPtr<UPCGSettings>_u_0 TVar34;
  FPCGTaggedData *pFVar35;
  longlong *plVar36;
  FText *pFVar37;
  TVector<double> *pTVar38;
  UPCGBasePointData *pUVar39;
  double *pdVar40;
  UPCGComponent *pUVar41;
  UPCGComponent *pUVar42;
  TTransform<double> *pTVar43;
  TMatrix<double> *this_01;
  TRotator<double> *pTVar44;
  TQuat<double> *pTVar45;
  longlong lVar46;
  undefined8 *puVar47;
  undefined4 *puVar48;
  ulonglong uVar49;
  uint uVar50;
  FPCGDataPtrWrapper *this_02;
  longlong *plVar51;
  longlong *plVar52;
  longlong *plVar53;
  <lambda_1> <Var54;
  float fVar55;
  uint uVar56;
  uint uVar57;
  undefined4 uVar58;
  undefined1 auStackY_628 [32];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_5d0;
  ForAnyElementType local_5c0;
  undefined8 local_5b8;
  int local_5b0;
  TObjectPtr<UPCGSettings>_u_0 local_5a8;
  longlong *local_5a0;
  FRandomStream local_598;
  TRotator<double> local_590;
  FPCGContext *local_578;
  longlong local_570;
  int local_568;
  int local_564;
  int local_560;
  undefined4 local_55c;
  FCommonParams local_558;
  TVector<double>_u_0 local_508;
  TVector<double>_u_0 local_4f0;
  FText local_4d8;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined8 local_4b8;
  double local_4b0;
  double dStack_4a8;
  double local_4a0;
  double local_498 [2];
  double local_488 [2];
  double local_478 [2];
  double local_468 [2];
  double local_458 [2];
  double local_448 [2];
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  TVector<double> local_418;
  TRotator<double> local_400;
  TRotator<double> local_3e8;
  TQuat<double> local_3c8;
  TTransform<double> local_3a8;
  TTransform<double> local_348;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  int local_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  longlong local_278;
  int local_270;
  int local_26c;
  int local_268;
  undefined8 local_258 [12];
  undefined1 local_1f8 [96];
  TMatrix<double> local_198;
  TMatrix<double> local_118;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_628;
  <Var54 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  local_578 = param_1;
  if ((bool)<Var54) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId395,"FPCGCreatePointsSphereElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreatePointsSphere.cpp"
               ,0x18b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId395);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar33 = UPCGNode::GetSettings(this_00), pUVar33 == (UPCGSettings *)0x0)) {
      pFVar35 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreatePointsSphereSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,<Var54);
      if (pFVar35 != (FPCGTaggedData *)0x0) {
        local_5a8.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar35->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_5a8.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_5a8.DebugPtr);
        }
        if (local_5a8.DebugPtr != (UPCGSettings *)0x0) {
          pUVar32 = UPCGCreatePointsSphereSettings::StaticClass();
          bVar26 = FObjectPtr::IsA(&local_5a8.ObjectPtr,pUVar32);
          TVar34 = local_5a8;
          if (bVar26) goto LAB_149b72c7a;
        }
      }
    }
    else {
      pUVar33 = UPCGNode::GetSettings(this_00);
      TVar34.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar33);
      if (TVar34.DebugPtr != (UPCGSettings *)0x0) {
        pUVar32 = UPCGCreatePointsSphereSettings::StaticClass();
        iVar31 = (int)pUVar32->_padding_;
        if ((iVar31 <= *(int *)((TVar34.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar34.DebugPtr)->_padding_ + 0x30) + (longlong)iVar31 * 8) ==
            &pUVar32->_padding_)) goto LAB_149b72c7a;
      }
    }
LAB_149b72c77:
    TVar34.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar32 = UPCGCreatePointsSphereSettings::StaticClass();
    bVar26 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar32);
    if (!bVar26) goto LAB_149b72c77;
    TVar34.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
  }
LAB_149b72c7a:
  plVar51 = (longlong *)0x0;
  if (*(char *)((longlong)TVar34.DebugPtr[1].CacheLock.CriticalSection.Opaque3 + 4) == '\0') {
    local_5a0 = (longlong *)0x0;
LAB_149b72dcc:
    if (*(char *)((longlong)TVar34.DebugPtr[1].CacheLock.CriticalSection.Opaque3 + 4) != '\0') {
      pFVar37 = FText::AsLocalizable_Advanced_LocText
                          (&local_4d8,L"PCGCreatePointsSphereElement",L"CannotCullWithoutAShape",
                           L"Unable to cull since the supporting actor has no data.");
      PCGLog::LogErrorOnGraph(pFVar37,(FPCGContext *)0x0);
      if (local_4d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_4d8.TextData.Reference + 0x10))();
      }
      goto LAB_149b73c43;
    }
  }
  else {
    if ((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
        (bVar26 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar26)) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                            ,0x8d,L""), bVar26)) {
      pcVar9 = (code *)swi(3);
      uVar27 = (*pcVar9)();
      return (bool)uVar27;
    }
    plVar36 = (longlong *)
              (**(code **)((longlong)*(param_1->ExecutionSource).InterfaceInstance + 0x18))();
    plVar36 = (longlong *)(**(code **)(*plVar36 + 8))(plVar36);
    if (plVar36 == (longlong *)0x0) {
LAB_149b72d4b:
      local_5a0 = (longlong *)0x0;
      plVar36 = plVar51;
    }
    else {
      local_5a0 = plVar36;
      pUVar32 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      iVar31 = (int)pUVar32->_padding_;
      if ((*(int *)(plVar36[2] + 0x38) < iVar31) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar36[2] + 0x30) + (longlong)iVar31 * 8) !=
          &pUVar32->_padding_)) goto LAB_149b72d4b;
    }
    if (plVar36 == (longlong *)0x0) goto LAB_149b72dcc;
  }
  iVar31 = *(int *)(TVar34.DebugPtr[1].CacheLock.CriticalSection.Opaque3 + 1);
  local_5b0 = iVar31;
  uVar29 = FPCGContext::GetSeed(param_1);
  dVar10 = __real_4056800000000000;
  uVar50 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar30 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_558.LatitudinalStartAngle = *(double *)&TVar34.DebugPtr[1].bUseSeed;
  dVar2 = (double)TVar34.DebugPtr[1]._padding_;
  pvVar3 = TVar34.DebugPtr[1].CacheLock.CriticalSection.Opaque1[0];
  pTVar4 = TVar34.DebugPtr[1].CachedElement.SharedReferenceCount.ReferenceController;
  local_558.LatitudinalEndAngle = (double)TVar34.DebugPtr[1].CachedElement.Object;
  if (__real_4056800000000000 <
      (double)CONCAT44((uint)((ulonglong)local_558.LatitudinalStartAngle >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_558.LatitudinalStartAngle,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    local_558.LatitudinalStartAngle =
         FGenericPlatformMath::Fmod(local_558.LatitudinalStartAngle,__real_4056800000000000);
  }
  if (dVar10 < (double)CONCAT44((uint)((ulonglong)local_558.LatitudinalEndAngle >> 0x20) & uVar50,
                                SUB84(local_558.LatitudinalEndAngle,0) & uVar30)) {
    local_558.LatitudinalEndAngle = FGenericPlatformMath::Fmod(local_558.LatitudinalEndAngle,dVar10)
    ;
  }
  dVar10 = __real_4066800000000000;
  local_558.LongitudinalStartAngle = (double)pTVar4;
  if (__real_4066800000000000 <
      (double)CONCAT44((uint)((ulonglong)pTVar4 >> 0x20) & uVar50,(uint)pTVar4 & uVar30)) {
    local_558.LongitudinalStartAngle =
         FGenericPlatformMath::Fmod((double)pTVar4,__real_4066800000000000);
  }
  uVar56 = (uint)pvVar3 & uVar30;
  uVar57 = (uint)((ulonglong)pvVar3 >> 0x20) & uVar50;
  local_558.LongitudinalEndAngle = (double)pvVar3;
  if (dVar10 <= (double)CONCAT44(uVar57,uVar56) && (double)CONCAT44(uVar57,uVar56) != dVar10) {
    local_558.LongitudinalEndAngle = FGenericPlatformMath::Fmod((double)pvVar3,dVar10);
  }
  local_558.Origin.field0_0x0._s_0.X = (double)TVar34.DebugPtr[1]._padding_;
  local_558.Origin.field0_0x0._s_0.Y = (double)TVar34.DebugPtr[1]._padding_;
  local_558.Origin.field0_0x0._s_0.Z = (double)TVar34.DebugPtr[1]._padding_;
  local_5d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5d0.ArrayNum = 0;
  local_5d0.ArrayMax = 0;
  cVar5 = (char)TVar34.DebugPtr[1]._padding_;
  uVar56 = 0;
  local_558.Radius = dVar2;
  local_558.Seed = uVar29;
  local_558.PointLimit = iVar31;
  local_558.Context = param_1;
  if (cVar5 == '\0') {
    PCGCreatePointsSphere::GenerateGeodesicSpherePointLocations
              (&local_558,(int)TVar34.DebugPtr[1]._padding_,&local_5d0);
LAB_149b73176:
    iVar31 = (param_1->OutputData).TaggedData.ArrayNum;
    piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
    if (iVar31 == *piVar1) {
      iVar31 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
    }
    pFVar7 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
    (param_1->OutputData).TaggedData.ArrayNum = iVar31 + 1;
    this_02 = (FPCGDataPtrWrapper *)(pFVar7 + (longlong)iVar31 * 0x78);
    this_02[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_02[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_02[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_02[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_02[6].WeakData.WeakPtr.ObjectIndex = 0x100;
    (this_02->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
    (this_02->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
    this_02[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_02[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_02[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_02[3].WeakData.WeakPtr.ObjectIndex = 0;
    this_02[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
    *(undefined4 *)&this_02[4].Data.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this_02[4].Data.field0_0x0 + 4) = 0;
    this_02[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_02[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    *(undefined8 *)&this_02[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
    *(undefined4 *)((longlong)&this_02[7].Data.field0_0x0 + 4) = 0xffffffff;
    pUVar39 = FPCGContext::NewPointData_AnyThread(param_1);
    FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)pUVar39);
    if (*(char *)((longlong)&TVar34.DebugPtr[1]._padding_ + 1) == '\0') {
      pdVar40 = local_498;
      local_498[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
      local_498[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      local_488[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      local_488[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      local_478[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
      local_478[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
      local_468[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
      local_468[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
      local_458[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      local_458[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      local_448[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      local_448[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    }
    else {
      if ((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
          (bVar26 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar26))
         && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                                 ,0x8d,L""), bVar26)) {
        pcVar9 = (code *)swi(3);
        uVar27 = (*pcVar9)();
        return (bool)uVar27;
      }
      plVar36 = (longlong *)
                (**(code **)((longlong)*(param_1->ExecutionSource).InterfaceInstance + 0x18))();
      pdVar40 = (double *)(**(code **)(*plVar36 + 0x30))(plVar36,local_1f8);
    }
    local_348.Rotation.XY.m128d_f64[0] = *pdVar40;
    local_348.Rotation.XY.m128d_f64[1] = pdVar40[1];
    local_348.Rotation.ZW.m128d_f64[0] = pdVar40[2];
    local_348.Rotation.ZW.m128d_f64[1] = pdVar40[3];
    local_348.Translation.XY.m128d_f64[0] = pdVar40[4];
    local_348.Translation.XY.m128d_f64[1] = pdVar40[5];
    local_348.Translation.ZW.m128d_f64[0] = pdVar40[6];
    local_348.Translation.ZW.m128d_f64[1] = pdVar40[7];
    local_348.Scale3D.XY.m128d_f64[0] = pdVar40[8];
    local_348.Scale3D.XY.m128d_f64[1] = pdVar40[9];
    local_348.Scale3D.ZW.m128d_f64[0] = pdVar40[10];
    local_348.Scale3D.ZW.m128d_f64[1] = pdVar40[0xb];
    if (((*(char *)((longlong)&TVar34.DebugPtr[1]._padding_ + 1) == '\x01') &&
        ((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0)) &&
       ((bVar26 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar26 &&
        ((pIVar8 = (param_1->ExecutionSource).InterfaceInstance,
         pIVar8 != (IPCGGraphExecutionSource *)0x0 &&
         (pUVar41 = (UPCGComponent *)(**(code **)((longlong)*pIVar8 + 8))(),
         pUVar41 != (UPCGComponent *)0x0)))))) {
      pUVar32 = Z_Construct_UClass_UPCGComponent_NoRegister();
      iVar31 = (int)pUVar32->_padding_;
      if ((iVar31 <= *(int *)(pUVar41->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar41->_padding_ + 0x30) + (longlong)iVar31 * 8) ==
          &pUVar32->_padding_)) {
        pUVar42 = UPCGComponent::GetOriginalComponent(pUVar41);
        if (((pUVar42 == (UPCGComponent *)0x0) ||
            (pUVar42 = UPCGComponent::GetOriginalComponent(pUVar41), pUVar42->_padding_ == 0)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("SourceComponent->GetOriginalComponent() && SourceComponent->GetOriginalComponent()->GetOwner()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreatePointsSphere.cpp"
                                ,0x1d8,L""), bVar26)) {
          pcVar9 = (code *)swi(3);
          uVar27 = (*pcVar9)();
          return (bool)uVar27;
        }
        pUVar41 = UPCGComponent::GetOriginalComponent(pUVar41);
        lVar46 = *(longlong *)(pUVar41->_padding_ + 0x1b8);
        if (lVar46 == 0) {
          pTVar43 = &UE::Math::TTransform<double>::Identity;
        }
        else {
          pTVar43 = (TTransform<double> *)(lVar46 + 0x1f0);
        }
        local_348.Rotation.XY.m128d_f64[0] = (pTVar43->Rotation).XY.m128d_f64[0];
        local_348.Rotation.XY.m128d_f64[1] = (pTVar43->Rotation).XY.m128d_f64[1];
        local_348.Rotation.ZW.m128d_f64[0] = (pTVar43->Rotation).ZW.m128d_f64[0];
        local_348.Rotation.ZW.m128d_f64[1] = (pTVar43->Rotation).ZW.m128d_f64[1];
        local_348.Translation.XY.m128d_f64[0] = (pTVar43->Translation).XY.m128d_f64[0];
        local_348.Translation.XY.m128d_f64[1] = (pTVar43->Translation).XY.m128d_f64[1];
        local_348.Translation.ZW.m128d_f64[0] = (pTVar43->Translation).ZW.m128d_f64[0];
        local_348.Translation.ZW.m128d_f64[1] = (pTVar43->Translation).ZW.m128d_f64[1];
      }
    }
    uVar49 = local_5d0._8_8_ & 0xffffffff;
    local_348.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_348.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_348.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_348.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_4a0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_5c0.Data = (FScriptContainerElement *)0x0;
    local_5b8 = 0;
    local_4b0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    dStack_4a8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    if (local_5d0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar49);
    }
    if (0 < local_5d0.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,0x10,local_5d0.ArrayNum,&local_5c0,0,(int *)((longlong)&local_5b8 + 4));
      uVar49 = local_5d0._8_8_ & 0xffffffff;
    }
    plVar36 = local_5a0;
    dVar24 = _UNK_150689688;
    dVar11 = ___xmm_3ff00000000000003ff0000000000000;
    dVar10 = _UNK_150689518;
    dVar2 = ___xmm_00000000000000003ff0000000000000;
    plVar52 = plVar51;
    plVar53 = plVar51;
    if (0 < (int)uVar49) {
      do {
        cVar5 = *(char *)((longlong)&TVar34.DebugPtr[1]._padding_ + 2);
        local_590.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        local_590.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        local_590.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
        uVar30 = (uint)plVar53;
        iVar31 = (int)uVar49;
        if (cVar5 == '\0') {
          uVar50 = uVar56;
          if ((int)uVar30 < iVar31) {
            uVar50 = ~uVar30 >> 0x1f;
          }
          if ((uVar50 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar9 = (code *)swi(3);
            uVar27 = (*pcVar9)();
            return (bool)uVar27;
          }
          local_4f0._s_0.X =
               *(double *)((longlong)plVar52 + local_5d0.AllocatorInstance.Data) -
               (double)TVar34.DebugPtr[1]._padding_;
          local_4f0._s_0.Y =
               *(double *)((longlong)(plVar52 + 1) + local_5d0.AllocatorInstance.Data) -
               (double)TVar34.DebugPtr[1]._padding_;
          local_4f0._s_0.Z =
               *(double *)((longlong)(plVar52 + 2) + local_5d0.AllocatorInstance.Data) -
               (double)TVar34.DebugPtr[1]._padding_;
          this_01 = UE::Math::TRotationMatrix<double>::MakeFromZ
                              (&local_118,(TVector<double> *)&local_4f0._s_0);
          pTVar44 = &local_3e8;
LAB_149b73692:
          pTVar44 = UE::Math::TMatrix<double>::Rotator(this_01,pTVar44);
          local_590.Pitch = pTVar44->Pitch;
          local_590.Yaw = pTVar44->Yaw;
          local_590.Roll = pTVar44->Roll;
LAB_149b736ab:
          iVar31 = local_5d0.ArrayNum;
        }
        else {
          if (cVar5 == '\x01') {
            uVar50 = uVar56;
            if ((int)uVar30 < iVar31) {
              uVar50 = ~uVar30 >> 0x1f;
            }
            if ((uVar50 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar9 = (code *)swi(3);
              uVar27 = (*pcVar9)();
              return (bool)uVar27;
            }
            local_508._s_0.X =
                 (double)TVar34.DebugPtr[1]._padding_ -
                 *(double *)((longlong)plVar52 + local_5d0.AllocatorInstance.Data);
            local_508._s_0.Y =
                 (double)TVar34.DebugPtr[1]._padding_ -
                 *(double *)((longlong)(plVar52 + 1) + local_5d0.AllocatorInstance.Data);
            local_508._s_0.Z =
                 (double)TVar34.DebugPtr[1]._padding_ -
                 *(double *)((longlong)(plVar52 + 2) + local_5d0.AllocatorInstance.Data);
            this_01 = UE::Math::TRotationMatrix<double>::MakeFromZ
                                (&local_198,(TVector<double> *)&local_508._s_0);
            pTVar44 = &local_400;
            goto LAB_149b73692;
          }
          if (cVar5 != '\x02') {
            bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Enclosing block should never be called\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreatePointsSphere.cpp"
                                ,0x1f7,L"");
            if (bVar26) {
              pcVar9 = (code *)swi(3);
              uVar27 = (*pcVar9)();
              return (bool)uVar27;
            }
            goto LAB_149b736ab;
          }
        }
        uVar50 = uVar56;
        if ((int)uVar30 < iVar31) {
          uVar50 = ~uVar30 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar9 = (code *)swi(3);
          uVar27 = (*pcVar9)();
          return (bool)uVar27;
        }
        FVar25.Data = local_5d0.AllocatorInstance.Data;
        pTVar45 = UE::Math::TRotator<double>::Quaternion(&local_590,&local_3c8);
        local_438 = pTVar45->X;
        dStack_430 = pTVar45->Y;
        local_428 = pTVar45->Z;
        dStack_420 = pTVar45->W;
        cVar5 = *(char *)((longlong)&TVar34.DebugPtr[1]._padding_ + 1);
        local_3a8.Translation.ZW.m128d_f64[0] = *(double *)((longlong)(plVar52 + 2) + FVar25.Data);
        local_3a8.Translation.XY.m128d_f64[0]._0_4_ =
             *(undefined4 *)((longlong)plVar52 + FVar25.Data);
        local_3a8.Translation.XY.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)plVar52 + FVar25.Data + 4);
        local_3a8.Translation.XY.m128d_f64[1]._0_4_ =
             (undefined4)*(undefined8 *)((longlong)(plVar52 + 1) + FVar25.Data);
        local_3a8.Translation.XY.m128d_f64[1]._4_4_ =
             (undefined4)((ulonglong)*(undefined8 *)((longlong)(plVar52 + 1) + FVar25.Data) >> 0x20)
        ;
        local_3a8.Translation.ZW.m128d_f64[1] = 0.0;
        local_3a8.Scale3D.XY.m128d_f64[0] = dVar11;
        local_3a8.Scale3D.XY.m128d_f64[1] = dVar24;
        local_3a8.Scale3D.ZW.m128d_f64[0] = dVar2;
        local_3a8.Scale3D.ZW.m128d_f64[1] = dVar10;
        local_3a8.Rotation.XY.m128d_f64[0] = local_438;
        local_3a8.Rotation.XY.m128d_f64[1] = dStack_430;
        local_3a8.Rotation.ZW.m128d_f64[0] = local_428;
        local_3a8.Rotation.ZW.m128d_f64[1] = dStack_420;
        if ((cVar5 == '\x02') ||
           (uVar58 = (int)((ulonglong)local_3a8.Translation.ZW.m128d_f64[0] >> 0x20),
           cVar5 == '\x01')) {
          UE::Math::TTransform<double>::Multiply(&local_3a8,&local_3a8,&local_348);
          uVar58 = local_3a8.Translation.ZW.m128d_f64[0]._4_4_;
        }
        if (plVar36 == (longlong *)0x0) {
LAB_149b737cd:
          uVar50 = uVar56;
          if ((int)uVar30 < local_5d0.ArrayNum) {
            uVar50 = ~uVar30 >> 0x1f;
          }
          if ((uVar50 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar9 = (code *)swi(3);
            uVar27 = (*pcVar9)();
            return (bool)uVar27;
          }
          local_288 = PCGHelpers::ComputeSeedFromPosition
                                ((TVector<double> *)
                                 (local_5d0.AllocatorInstance.Data + (longlong)(int)uVar30 * 0x18));
          local_2e8 = local_3a8.Rotation.XY.m128d_f64[0];
          dStack_2e0 = local_3a8.Rotation.XY.m128d_f64[1];
          local_2c8 = CONCAT44(local_3a8.Translation.XY.m128d_f64[0]._4_4_,
                               local_3a8.Translation.XY.m128d_f64[0]._0_4_);
          uStack_2c0 = CONCAT44(local_3a8.Translation.XY.m128d_f64[1]._4_4_,
                                local_3a8.Translation.XY.m128d_f64[1]._0_4_);
          local_2d8 = local_3a8.Rotation.ZW.m128d_f64[0];
          dStack_2d0 = local_3a8.Rotation.ZW.m128d_f64[1];
          local_2b8 = local_3a8.Translation.ZW.m128d_f64[0];
          dStack_2b0 = local_3a8.Translation.ZW.m128d_f64[1];
          local_2a8 = local_3a8.Scale3D.XY.m128d_f64[0];
          dStack_2a0 = local_3a8.Scale3D.XY.m128d_f64[1];
          local_298 = local_3a8.Scale3D.ZW.m128d_f64[0];
          dStack_290 = local_3a8.Scale3D.ZW.m128d_f64[1];
          if (((local_5c0.Data <= (FScriptContainerElement *)&local_2e8) &&
              ((FScriptContainerElement *)&local_2e8 <
               local_5c0.Data + (longlong)local_5b8._4_4_ * 0x70)) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar26)) {
            pcVar9 = (code *)swi(3);
            uVar27 = (*pcVar9)();
            return (bool)uVar27;
          }
          iVar31 = (int)local_5b8;
          if ((int)local_5b8 == local_5b8._4_4_) {
            iVar31 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1070,&local_5c0,(int *)((longlong)&local_5b8 + 4));
          }
          local_5b8 = CONCAT44(local_5b8._4_4_,iVar31 + 1);
          lVar46 = (longlong)iVar31 * 0x70;
          *(double *)(local_5c0.Data + lVar46) = local_2e8;
          *(double *)(local_5c0.Data + lVar46 + 8) = dStack_2e0;
          *(double *)(local_5c0.Data + lVar46 + 0x10) = local_2d8;
          *(double *)(local_5c0.Data + lVar46 + 0x10 + 8) = dStack_2d0;
          *(undefined8 *)(local_5c0.Data + lVar46 + 0x20) = local_2c8;
          *(undefined8 *)(local_5c0.Data + lVar46 + 0x20 + 8) = uStack_2c0;
          *(double *)(local_5c0.Data + lVar46 + 0x30) = local_2b8;
          *(double *)(local_5c0.Data + lVar46 + 0x30 + 8) = dStack_2b0;
          *(double *)(local_5c0.Data + lVar46 + 0x40) = local_2a8;
          *(double *)(local_5c0.Data + lVar46 + 0x40 + 8) = dStack_2a0;
          *(double *)(local_5c0.Data + lVar46 + 0x50) = local_298;
          *(double *)(local_5c0.Data + lVar46 + 0x50 + 8) = dStack_290;
          *(ulonglong *)(local_5c0.Data + lVar46 + 0x60) = CONCAT44(uStack_284,local_288);
          *(undefined8 *)(local_5c0.Data + lVar46 + 0x60 + 8) = uStack_280;
        }
        else {
          local_4b8 = CONCAT44(uVar58,local_3a8.Translation.ZW.m128d_f64[0]._0_4_);
          local_4c8 = local_3a8.Translation.XY.m128d_f64[0]._0_4_;
          uStack_4c4 = local_3a8.Translation.XY.m128d_f64[0]._4_4_;
          uStack_4c0 = local_3a8.Translation.XY.m128d_f64[1]._0_4_;
          uStack_4bc = local_3a8.Translation.XY.m128d_f64[1]._4_4_;
          fVar55 = (float)(**(code **)(*plVar36 + 0x3a8))(plVar36,&local_4c8);
          if (0.0 < fVar55) goto LAB_149b737cd;
        }
        uVar49 = local_5d0._8_8_ & 0xffffffff;
        plVar52 = plVar52 + 3;
        plVar53 = (longlong *)(ulonglong)(uVar30 + 1);
      } while ((int)(uVar30 + 1) < local_5d0.ArrayNum);
    }
    (**(code **)(pUVar39->_padding_ + 0x490))(pUVar39,local_5b8 & 0xffffffff,1);
    (**(code **)(pUVar39->_padding_ + 0x548))(pUVar39,__real_3f800000);
    (**(code **)(pUVar39->_padding_ + 0x568))
              (pUVar39,*(undefined4 *)TVar34.DebugPtr[1].CacheLock.CriticalSection.Opaque3);
    (**(code **)(pUVar39->_padding_ + 0x498))(pUVar39,0x41);
    (**(code **)(pUVar39->_padding_ + 0x4c0))(pUVar39,&local_278,0);
    (**(code **)(pUVar39->_padding_ + 0x4f0))(pUVar39,&local_570,0);
    iVar31 = (**(code **)(pUVar39->_padding_ + 0x488))(pUVar39);
    plVar36 = plVar51;
    if (0 < iVar31) {
      do {
        uVar50 = (uint)plVar51;
        uVar30 = uVar56;
        if ((int)uVar50 < (int)local_5b8) {
          uVar30 = ~uVar50 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar9 = (code *)swi(3);
          uVar27 = (*pcVar9)();
          return (bool)uVar27;
        }
        uVar12 = *(undefined8 *)((longlong)plVar36 + local_5c0.Data);
        uVar13 = *(undefined8 *)((longlong)plVar36 + local_5c0.Data + 8);
        uVar14 = *(undefined8 *)((longlong)(plVar36 + 2) + local_5c0.Data);
        uVar15 = *(undefined8 *)((longlong)(plVar36 + 2) + local_5c0.Data + 8);
        uVar16 = *(undefined8 *)((longlong)(plVar36 + 4) + local_5c0.Data);
        uVar17 = *(undefined8 *)((longlong)(plVar36 + 4) + local_5c0.Data + 8);
        uVar18 = *(undefined8 *)((longlong)(plVar36 + 6) + local_5c0.Data);
        uVar19 = *(undefined8 *)((longlong)(plVar36 + 6) + local_5c0.Data + 8);
        uVar20 = *(undefined8 *)((longlong)(plVar36 + 8) + local_5c0.Data);
        uVar21 = *(undefined8 *)((longlong)(plVar36 + 8) + local_5c0.Data + 8);
        uVar22 = *(undefined8 *)((longlong)(plVar36 + 10) + local_5c0.Data);
        uVar23 = *(undefined8 *)((longlong)(plVar36 + 10) + local_5c0.Data + 8);
        uVar30 = uVar56;
        if ((int)uVar50 < local_268) {
          uVar30 = ~uVar50 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar26)) {
          pcVar9 = (code *)swi(3);
          uVar27 = (*pcVar9)();
          return (bool)uVar27;
        }
        if (uVar50 == (int)uVar50 % local_26c) {
          puVar47 = (undefined8 *)
                    ((longlong)((int)uVar50 % local_26c) * (longlong)local_270 + local_278);
        }
        else {
          puVar47 = local_258;
        }
        *puVar47 = uVar12;
        puVar47[1] = uVar13;
        puVar47[2] = uVar14;
        puVar47[3] = uVar15;
        puVar47[4] = uVar16;
        puVar47[5] = uVar17;
        puVar47[6] = uVar18;
        puVar47[7] = uVar19;
        puVar47[8] = uVar20;
        puVar47[9] = uVar21;
        puVar47[10] = uVar22;
        puVar47[0xb] = uVar23;
        uVar30 = uVar56;
        if ((int)uVar50 < (int)local_5b8) {
          uVar30 = ~uVar50 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar9 = (code *)swi(3);
          uVar27 = (*pcVar9)();
          return (bool)uVar27;
        }
        uVar58 = *(undefined4 *)((longlong)(plVar36 + 0xc) + local_5c0.Data);
        uVar30 = uVar56;
        if ((int)uVar50 < local_560) {
          uVar30 = ~uVar50 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar26)) {
          pcVar9 = (code *)swi(3);
          uVar27 = (*pcVar9)();
          return (bool)uVar27;
        }
        if (uVar50 == (int)uVar50 % local_564) {
          puVar48 = (undefined4 *)
                    ((longlong)((int)uVar50 % local_564) * (longlong)local_568 + local_570);
        }
        else {
          puVar48 = &local_55c;
        }
        *puVar48 = uVar58;
        plVar51 = (longlong *)(ulonglong)(uVar50 + 1);
        iVar31 = (**(code **)(pUVar39->_padding_ + 0x488))(pUVar39);
        plVar36 = plVar36 + 0xe;
      } while ((int)(uVar50 + 1) < iVar31);
    }
    if (local_5c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c0.Data);
    }
  }
  else {
    if (cVar5 == '\x01') {
      PCGCreatePointsSphere::GenerateStandardSpherePointLocations
                (&local_558,(double)TVar34.DebugPtr[1]._padding_,
                 (double)TVar34.DebugPtr[1]._padding_,
                 *(double *)TVar34.DebugPtr[1].CacheLock.CriticalSection.Opaque2,&local_5d0);
      goto LAB_149b73176;
    }
    if (cVar5 != '\x02') {
      if (cVar5 == '\x03') {
        iVar31 = (int)TVar34.DebugPtr[1]._padding_;
        lVar46 = (longlong)iVar31;
        bVar26 = -1 < CpuChannel->Enabled;
        if (bVar26) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId314,"FPCGCreatePointsSphereElement::RandomSampling",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreatePointsSphere.cpp"
                     ,0x13a);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId314);
        }
        if (local_5d0.ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,&local_5d0.AllocatorInstance,0,&local_5d0.ArrayMax);
        }
        bVar28 = PCGCreatePointsSphere::GenerationWouldOverflow(iVar31,local_5b0,param_1);
        if ((!bVar28) &&
           (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                      (&local_5d0,iVar31,Default), plVar36 = plVar51, plVar52 = plVar51,
           local_598.InitialSeed = uVar29, local_598.Seed = uVar29, 0 < lVar46)) {
          do {
            pTVar38 = PCGCreatePointsSphere::GeneratePointInWindow(&local_418,&local_558,&local_598)
            ;
            uVar50 = (uint)plVar52;
            dVar10 = (pTVar38->field0_0x0)._s_0.X;
            dVar11 = (pTVar38->field0_0x0)._s_0.Y;
            dVar2 = (pTVar38->field0_0x0)._s_0.Z;
            uVar30 = uVar56;
            if ((int)uVar50 < local_5d0.ArrayNum) {
              uVar30 = ~uVar50 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar9 = (code *)swi(3);
              uVar27 = (*pcVar9)();
              return (bool)uVar27;
            }
            *(double *)((longlong)plVar36 + local_5d0.AllocatorInstance.Data) = dVar10;
            *(double *)((longlong)plVar36 + local_5d0.AllocatorInstance.Data + 8) = dVar11;
            *(double *)((longlong)(plVar36 + 2) + local_5d0.AllocatorInstance.Data) = dVar2;
            lVar46 = lVar46 + -1;
            plVar36 = plVar36 + 3;
            plVar52 = (longlong *)(ulonglong)(uVar50 + 1);
            param_1 = local_578;
          } while (lVar46 != 0);
        }
        if (bVar26) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      else if (cVar5 == '\x04') {
        PCGCreatePointsSphere::GeneratePoissonSamplingPointLocations
                  (&local_558,*(double *)&TVar34.DebugPtr[1].Seed,(int)TVar34.DebugPtr[1]._padding_,
                   *(int *)&TVar34.DebugPtr[1].OriginalSettings,&local_5d0);
      }
      else {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreatePointsSphere.cpp"
                            ,0x1c7,L"");
        if (bVar26) {
          pcVar9 = (code *)swi(3);
          uVar27 = (*pcVar9)();
          return (bool)uVar27;
        }
      }
      goto LAB_149b73176;
    }
    iVar31 = (int)TVar34.DebugPtr[1]._padding_;
    if ((0 < iVar31) && (iVar6 = *(int *)((longlong)&TVar34.DebugPtr[1]._padding_ + 4), 0 < iVar6))
    {
      dVar10 = (double)TVar34.DebugPtr[1].CachedElement.SharedReferenceCount.ReferenceController -
               (double)TVar34.DebugPtr[1].CacheLock.CriticalSection.Opaque1[0];
      dVar2 = *(double *)&TVar34.DebugPtr[1].bUseSeed -
              (double)TVar34.DebugPtr[1].CachedElement.Object;
      PCGCreatePointsSphere::GenerateStandardSpherePointLocations
                (&local_558,
                 (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar50,SUB84(dVar2,0) & uVar30)
                 / (double)iVar31,
                 (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar50,
                                  SUB84(dVar10,0) & uVar30) / (double)iVar6,
                 *(double *)TVar34.DebugPtr[1].CacheLock.CriticalSection.Opaque2,&local_5d0);
      goto LAB_149b73176;
    }
  }
  if (local_5d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d0.AllocatorInstance.Data);
  }
LAB_149b73c43:
  if ((bool)<Var54) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// GetDependenciesCrc @ 149b8e830

void __thiscall
FPCGCreatePointsSphereElement::GetDependenciesCrc
          (FPCGCreatePointsSphereElement *this,FPCGGetDependenciesCrcParams *param_1,
          FPCGCrc *param_2)

{
  int iVar1;
  UPCGSettings *pUVar2;
  FPCGSettingsOverridableParam *pFVar3;
  FName FVar4;
  IPCGGraphExecutionSource *pIVar5;
  FPCGCrc FVar6;
  UClass *pUVar7;
  FName *pFVar8;
  TArray<FPCGSettingsOverridableParam,TSizedDefaultAllocator<32>_> *this_00;
  UPCGComponent *this_01;
  UPCGData *this_02;
  longlong *plVar9;
  FPCGCrc FVar10;
  bool local_res10 [8];
  FName local_res18;
  uint local_res20 [2];
  FPCGCrc local_c8;
  undefined1 local_c0 [8];
  FName local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  FName local_a0;
  FPCGSettingsOverridableParam *local_98;
  undefined8 *local_90;
  FPCGSettingsOverridableParam **ppFStack_88;
  FName *local_80;
  FName *pFStack_78;
  uint *local_70;
  undefined8 *local_68;
  FPCGSettingsOverridableParam **ppFStack_60;
  FName *local_58;
  FName *pFStack_50;
  uint *local_48;
  
  local_c8.Value = 0;
  local_c8._4_4_ = local_c8._4_4_ & 0xffffff00;
  IPCGElement::GetDependenciesCrc((IPCGElement *)this,param_1,&local_c8);
  pUVar2 = param_1->Settings;
  if (pUVar2 == (UPCGSettings *)0x0) {
LAB_149b8ea97:
    FVar10.bValid = local_c8.bValid;
    FVar10._5_3_ = local_c8._5_3_;
    FVar10.Value = local_c8.Value;
    *param_2 = FVar10;
    return;
  }
  pUVar7 = UPCGCreatePointsSphereSettings::StaticClass();
  iVar1 = (int)pUVar7->_padding_;
  if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar7->_padding_)) goto LAB_149b8ea97;
  local_res18.ComparisonIndex.Value = (uint)*(byte *)((longlong)&pUVar2[1]._padding_ + 1);
  local_res10[0] = false;
  pFVar8 = ::FName::FName(&local_a0,0xf,L"CoordinateSpace",FNAME_Add);
  pFVar3 = (FPCGSettingsOverridableParam *)param_1->InputData;
  FVar4 = *pFVar8;
  this_00 = (TArray<FPCGSettingsOverridableParam,TSizedDefaultAllocator<32>_> *)
            (**(code **)(pUVar2->_padding_ + 0x480))(pUVar2);
  local_98 = TArray<FPCGSettingsOverridableParam,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_PCGSettingsHelpers::GetOverrideValue<int>_::__l2::<lambda_1>_>
                       (this_00,(<lambda_1>)FVar4);
  local_res20[0] = local_res18.ComparisonIndex.Value;
  if (local_98 != (FPCGSettingsOverridableParam *)0x0) {
    local_b8.ComparisonIndex.Value = 0;
    local_b8.Number = 0;
    local_b0._0_1_ = false;
    local_b0._1_1_ = false;
    local_b0._2_6_ = 0;
    local_a8 = 0;
    PCGAttributeAccessorHelpers::CreateConstAccessorForOverrideParamWithResult
              ((FPCGDataCollection *)local_c0,pFVar3,(AccessorParamResult *)local_98);
    local_a0 = local_b8;
    if (local_c0 != (undefined1  [8])0x0) {
      local_90 = (undefined8 *)local_c0;
      ppFStack_88 = &local_98;
      local_80 = &local_a0;
      pFStack_78 = &local_res18;
      local_70 = local_res20;
      local_68 = local_90;
      ppFStack_60 = ppFStack_88;
      local_58 = local_80;
      pFStack_50 = pFStack_78;
      local_48 = local_70;
      `PCGSettingsHelpers::GetOverrideValue<int>'::__l2::<lambda_2>::operator()<int>(&local_68,0);
      if (local_c0 != (undefined1  [8])0x0) {
        (*(code *)**(undefined8 **)local_c0)(local_c0,1);
      }
    }
  }
  pFVar8 = ::FName::FName(&local_res18,0x18,L"bCullPointsOutsideVolume",FNAME_Add);
  PCGSettingsHelpers::GetOverrideValue<bool>
            (param_1->InputData,pUVar2,*pFVar8,
             (bool *)((longlong)pUVar2[1].CacheLock.CriticalSection.Opaque3 + 4),local_res10);
  pIVar5 = param_1->ExecutionSource;
  if (pIVar5 == (IPCGGraphExecutionSource *)0x0) goto LAB_149b8ea79;
  if ((local_res10[0] != false) || ((char)local_res20[0] == '\x02')) goto LAB_149b8ea2d;
  if ((char)local_res20[0] != '\x01') goto LAB_149b8ea79;
  this_01 = (UPCGComponent *)(**(code **)((longlong)*pIVar5 + 8))(pIVar5);
  if (this_01 == (UPCGComponent *)0x0) {
LAB_149b8ea2d:
    plVar9 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x18))(pIVar5);
    this_02 = (UPCGData *)(**(code **)(*plVar9 + 8))(plVar9);
  }
  else {
    pUVar7 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_149b8ea2d;
    this_02 = UPCGComponent::GetOriginalActorPCGData(this_01);
  }
  if (this_02 != (UPCGData *)0x0) {
    FVar10 = UPCGData::GetOrComputeCrc(this_02,SUB81(&local_res18,0));
    local_c8.Value =
         local_c8.Value ^
         *(int *)FVar10 + local_c8.Value * 0x40 + (local_c8.Value >> 2) + -0x61c88647;
  }
LAB_149b8ea79:
  FVar6.bValid = local_c8.bValid;
  FVar6._5_3_ = local_c8._5_3_;
  FVar6.Value = local_c8.Value;
  *param_2 = FVar6;
  return;
}

