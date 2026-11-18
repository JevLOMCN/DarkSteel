// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// operator() @ 149c510c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

bool __thiscall
`FPCGWorldRaycastElement::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,
          TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
          *param_1,FExecutionState *param_2,FIterationState *param_3,uint param_4)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  undefined8 uVar3;
  UPCGMetadata *pUVar4;
  UWorld *this_00;
  TVector<double> *pTVar5;
  code *pcVar6;
  double adVar7 [2];
  double adVar8 [2];
  double adVar9 [2];
  double adVar10 [2];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
  *pTVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  __m128d _Var28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long64 lVar32;
  bool bVar33;
  undefined1 uVar34;
  int iVar35;
  undefined4 uVar36;
  UPCGWorldRaycastElementSettings *pUVar37;
  UClass *pUVar38;
  UPCGBasePointData *this_01;
  FPCGTaggedData *this_02;
  FText *pFVar39;
  FCollisionShape *pFVar40;
  TQuat<double> *pTVar41;
  UObject *pUVar42;
  FScriptContainerElement *pFVar43;
  int *piVar44;
  float *pfVar45;
  TTransform<double> *pTVar46;
  TVector<double> *pTVar47;
  TVector4<double> *pTVar48;
  long64 *plVar49;
  FPCGPoint *pFVar50;
  double *pdVar51;
  ulonglong uVar52;
  uint uVar53;
  TOptional<FHitResult> *this_03;
  ulonglong uVar54;
  FObjectPtr_u_0 *pFVar55;
  longlong lVar56;
  FHitResult *pFVar57;
  uint uVar58;
  FObjectPtr_u_0 FVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined1 auVar68 [16];
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined1 auStackY_fd8 [32];
  byte local_f88;
  ForAnyElementType local_f80;
  undefined8 local_f78;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_f70;
  FObjectPtr_u_0 local_f60;
  FObjectPtr_u_0 local_f58;
  FWeakObjectPtr local_f50;
  FWeakObjectPtr local_f48;
  FExecutionState *local_f40;
  undefined8 *local_f38;
  UPCGMetadata *local_f30;
  TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
  *local_f28;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_f20;
  UObject *local_f10;
  longlong local_f08;
  UPCGBasePointData *local_f00;
  UObject *local_ef8;
  TVector<double>_u_0 local_ef0;
  FText local_ed8;
  FText local_ec8;
  TVector<double>_u_0 local_eb8;
  undefined1 local_e98 [16];
  undefined1 local_e88 [16];
  undefined4 local_e78;
  undefined4 uStack_e74;
  undefined4 uStack_e70;
  undefined4 uStack_e6c;
  double local_e68;
  undefined8 uStack_e60;
  undefined1 local_e58 [16];
  undefined1 local_e48 [16];
  FPCGInitializeFromDataParams local_e38;
  FPCGPoint local_df8;
  TQuat<double> local_d28;
  FCollisionShape local_d08;
  TOptional<FHitResult> local_cf8;
  FScriptContainerElement *local_bf0;
  FScriptContainerElement *local_be8;
  TOptional<FHitResult> local_be0;
  FScriptContainerElement *local_ad8;
  FScriptContainerElement *local_ad0;
  TQuat<double> local_ac8;
  TOptional<FHitResult> local_aa8;
  double local_998;
  double dStack_990;
  double local_988;
  double dStack_980;
  double local_978;
  double dStack_970;
  double local_968;
  double dStack_960;
  double local_958;
  double dStack_950;
  double local_948;
  double dStack_940;
  undefined8 local_938;
  double dStack_930;
  double local_928;
  double dStack_920;
  double local_918;
  double dStack_910;
  double local_908;
  longlong lStack_900;
  double local_8f8;
  double dStack_8f0;
  double local_8e8;
  double dStack_8e0;
  undefined8 local_8d8;
  double dStack_8d0;
  TOptional<FHitResult> local_8c8;
  FConstPCGPointValueRanges local_7b8;
  FPCGPointValueRanges local_628;
  TTransform<double> local_498;
  undefined8 local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  longlong lStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  undefined8 local_3d8;
  double dStack_3d0;
  FPCGPoint local_3c8;
  undefined1 local_2f8 [184];
  void *local_240;
  undefined4 local_238;
  FPCGPoint local_218;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_fd8;
  local_f40 = param_2;
  local_f38 = this;
  local_f28 = param_1;
  if ((((int)param_4 < 0) || ((param_1->PerIterationStateResultArray).ArrayNum <= (int)param_4)) &&
     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < PerIterationStateResultArray.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                          ,0x48,L""), bVar33)) {
    pcVar6 = (code *)swi(3);
    uVar34 = (*pcVar6)();
    return (bool)uVar34;
  }
  FVar59.Handle = (UObject *)0x0;
  uVar60 = 0;
  if ((int)param_4 < (param_1->PerIterationStateResultArray).ArrayNum) {
    uVar60 = ~param_4 >> 0x1f;
  }
  if ((uVar60 == 0) &&
     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar33)) {
    pcVar6 = (code *)swi(3);
    uVar34 = (*pcVar6)();
    return (bool)uVar34;
  }
  if ((param_1->PerIterationStateResultArray).AllocatorInstance.Data[(int)param_4] ==
      (FScriptContainerElement)0x2) {
    return true;
  }
  pUVar37 = FPCGContext::GetInputSettings<UPCGWorldRaycastElementSettings>((FPCGContext *)param_1);
  if ((pUVar37 == (UPCGWorldRaycastElementSettings *)0x0) &&
     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGWorldRaycast.cpp"
                          ,0x1a3,L""), bVar33)) {
    pcVar6 = (code *)swi(3);
    uVar34 = (*pcVar6)();
    return (bool)uVar34;
  }
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)&param_1->_padding_,&local_f20,
             &PCGWorldRaycastElement::Constants::Labels::OriginsInput);
  uVar60 = 0;
  if ((int)param_4 < local_f20.ArrayNum) {
    uVar60 = ~param_4 >> 0x1f;
  }
  if ((uVar60 == 0) &&
     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar33)) {
    pcVar6 = (code *)swi(3);
    uVar34 = (*pcVar6)();
    return (bool)uVar34;
  }
  pFVar55 = (FObjectPtr_u_0 *)(local_f20.AllocatorInstance.Data + (longlong)(int)param_4 * 0x78);
  local_f58 = (FObjectPtr_u_0)pFVar55->Handle;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if ((UPCGBasePointData *)local_f58.Handle == (UPCGBasePointData *)0x0) goto LAB_149c51273;
    UE::GC::MarkAsReachable(local_f58.Handle);
  }
  if ((UPCGBasePointData *)local_f58.Handle != (UPCGBasePointData *)0x0) {
    pUVar38 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
    bVar33 = FObjectPtr::IsA((FObjectPtr *)&local_f58,pUVar38);
    if (bVar33) {
      FVar59 = local_f58;
    }
  }
LAB_149c51273:
  local_f60 = FVar59;
  this_01 = FPCGContext::NewPointData_AnyThread((FPCGContext *)param_1);
  local_f00 = this_01;
  FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
            (&local_e38,(UPCGSpatialData *)FVar59.Handle);
  local_e38.bInheritSpatialData = false;
  UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)this_01,&local_e38);
  iVar35 = (int)param_1->_padding_;
  piVar44 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar35 == *piVar44) {
    iVar35 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x878,(ForAnyElementType *)&param_1->_padding_,piVar44);
  }
  *(int *)&param_1->_padding_ = iVar35 + 1;
  this_02 = FPCGTaggedData::FPCGTaggedData
                      ((FPCGTaggedData *)((longlong)iVar35 * 0x78 + param_1->_padding_),
                       (FPCGTaggedData *)pFVar55);
  FPCGDataPtrWrapper::operator=(&this_02->Data,(UPCGData *)this_01);
  pUVar4 = (UPCGMetadata *)this_01->_padding_;
  local_f30 = pUVar4;
  FPCGWorldRaycastQueryParams::FPCGWorldRaycastQueryParams
            ((FPCGWorldRaycastQueryParams *)local_2f8,&pUVar37->WorldQueryParams);
  FPCGWorldRaycastQueryParams::Initialize((FPCGWorldRaycastQueryParams *)local_2f8);
  bVar33 = PCGWorldQueryHelpers::CreateRayHitAttributes
                     ((FPCGWorldRaycastQueryParams *)local_2f8,pUVar4);
  if (!bVar33) {
    pFVar39 = FText::AsLocalizable_Advanced_LocText
                        (&local_ed8,L"PCGWorldRaycastElement",L"UnableToCreateAllAttributes",
                         L"One or more attributes were unable to be created.");
    PCGLog::LogWarningOnGraph(pFVar39,(FPCGContext *)param_1);
    if (local_ed8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_ed8.TextData.Reference + 0x10))();
    }
  }
  uVar60 = (param_3->CachedRayVectors).ArrayNum;
  local_f88 = 1;
  if ((int)uVar60 < (param_3->CachedRayOrigins).ArrayNum) {
    uVar60 = (param_3->CachedRayOrigins).ArrayNum;
  }
  lVar56 = 0;
  local_f80.Data = (FScriptContainerElement *)0x0;
  local_f78 = 0;
  if ((int)uVar60 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar60);
  }
  if (0 < (int)uVar60) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x118,8,uVar60,&local_f80,0,(int *)((longlong)&local_f78 + 4));
  }
  dVar21 = __real_3f1a36e2e0000000;
  auVar68 = ___xmm_7fffffffffffffff7fffffffffffffff;
  local_f08 = (longlong)(int)uVar60;
  local_f70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f70.ArrayNum = 0;
  local_f70.ArrayMax = 0;
  if (0 < (int)uVar60) {
    uVar73 = (undefined4)__real_3ff0000000000000;
    uVar54 = (ulonglong)__real_3ff0000000000000 >> 0x20;
    uVar36 = (undefined4)__real_42a0000000000000;
    uVar52 = (ulonglong)__real_42a0000000000000 >> 0x20;
    do {
      uVar62 = 0;
      iVar35 = (param_3->CachedRayOrigins).ArrayNum;
      uVar60 = (uint)lVar56;
      uVar61 = uVar60;
      if (iVar35 == 1) {
        uVar61 = uVar62;
      }
      uVar63 = 0;
      if ((int)uVar61 < iVar35) {
        uVar63 = ~uVar61 >> 0x1f;
      }
      if ((uVar63 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar6 = (code *)swi(3);
        uVar34 = (*pcVar6)();
        return (bool)uVar34;
      }
      uVar63 = uVar60;
      if ((param_3->CachedRayVectors).ArrayNum == 1) {
        uVar63 = uVar62;
      }
      pFVar43 = (param_3->CachedRayOrigins).AllocatorInstance.Data + (longlong)(int)uVar61 * 0x18;
      uVar61 = 0;
      if ((int)uVar63 < (param_3->CachedRayVectors).ArrayNum) {
        uVar61 = ~uVar63 >> 0x1f;
      }
      if ((uVar61 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar6 = (code *)swi(3);
        uVar34 = (*pcVar6)();
        return (bool)uVar34;
      }
      pFVar1 = (param_3->CachedRayVectors).AllocatorInstance.Data + (longlong)(int)uVar63 * 0x18;
      uVar64 = uVar36;
      uVar65 = (int)uVar52;
      if ((pUVar37->RaycastMode != Infinite) &&
         (uVar64 = uVar73, uVar65 = (int)uVar54, pUVar37->RaycastMode == NormalizedWithLength)) {
        if ((param_3->CachedRayLengths).ArrayNum == 1) {
          uVar60 = uVar62;
        }
        uVar61 = 0;
        if ((int)uVar60 < (param_3->CachedRayLengths).ArrayNum) {
          uVar61 = ~uVar60 >> 0x1f;
        }
        if ((uVar61 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar6 = (code *)swi(3);
          uVar34 = (*pcVar6)();
          return (bool)uVar34;
        }
        uVar3 = *(undefined8 *)
                 ((param_3->CachedRayLengths).AllocatorInstance.Data + (longlong)(int)uVar60 * 8);
        uVar64 = (int)uVar3;
        uVar65 = (int)((ulonglong)uVar3 >> 0x20);
      }
      dVar11 = (double)CONCAT44(uVar65,uVar64) * *(double *)pFVar1;
      dVar12 = (double)CONCAT44(uVar65,uVar64) * *(double *)(pFVar1 + 0x10);
      dVar14 = (double)CONCAT44(uVar65,uVar64) * *(double *)(pFVar1 + 8);
      uVar61 = auVar68._0_4_;
      uVar60 = SUB84(dVar11,0) & uVar61;
      uVar63 = auVar68._4_4_;
      uVar62 = (uint)((ulonglong)dVar11 >> 0x20) & uVar63;
      if (((dVar21 <= (double)CONCAT44(uVar62,uVar60) && (double)CONCAT44(uVar62,uVar60) != dVar21)
          || (uVar60 = SUB84(dVar14,0) & uVar61, uVar62 = (uint)((ulonglong)dVar14 >> 0x20) & uVar63
             , dVar21 <= (double)CONCAT44(uVar62,uVar60) &&
               (double)CONCAT44(uVar62,uVar60) != dVar21)) ||
         (uVar61 = SUB84(dVar12,0) & uVar61, uVar63 = (uint)((ulonglong)dVar12 >> 0x20) & uVar63,
         dVar21 <= (double)CONCAT44(uVar63,uVar61) && (double)CONCAT44(uVar63,uVar61) != dVar21)) {
        bVar33 = (longlong)local_f70._8_8_ < 0;
        local_f70._8_8_ = local_f70._8_8_ & 0xffffffff00000000;
        if (bVar33) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x100,8,0,&local_f70.AllocatorInstance,0,&local_f70.ArrayMax);
        }
        this_00 = (UWorld *)*local_f38;
        pFVar40 = FPCGCollisionShape::ToCollisionShape
                            (&pUVar37->CollisionShape,&local_d08,(FPCGContext *)0x0);
        pTVar41 = UE::Math::TRotator<double>::Quaternion
                            (&(pUVar37->CollisionShape).ShapeRotation,&local_ac8);
        local_ef0._s_0.X = dVar11 + (((TVector<double>_u_0 *)&pFVar43->field_0x0)->_s_0).X;
        local_ef0._s_0.Y = dVar14 + *(double *)(pFVar43 + 8);
        local_d28.X = pTVar41->X;
        local_d28.Y = pTVar41->Y;
        local_ef0._s_0.Z = dVar12 + *(double *)(pFVar43 + 0x10);
        local_d28.Z = pTVar41->Z;
        local_d28.W = pTVar41->W;
        UWorld::SweepMultiByObjectType
                  (this_00,&local_f70,(TVector<double> *)pFVar43,(TVector<double> *)&local_ef0._s_0,
                   &local_d28,&local_f40->CollisionObjectQueryParams,pFVar40,
                   &local_f40->CollisionQueryParams);
        pTVar22 = local_f28;
        if (((local_f28->_padding_ == 0) ||
            (bVar33 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_f28->_padding_), !bVar33)) ||
           (((longlong *)pTVar22->_padding_ == (longlong *)0x0 ||
            (pUVar42 = (UObject *)(**(code **)(*(longlong *)pTVar22->_padding_ + 8))(),
            pUVar42 == (UObject *)0x0)))) {
LAB_149c516db:
          pUVar42 = (UObject *)0x0;
        }
        else {
          pUVar38 = Z_Construct_UClass_UPCGComponent_NoRegister();
          iVar35 = (int)pUVar38->_padding_;
          if ((*(int *)(*(longlong *)&pUVar42->field_0x10 + 0x38) < iVar35) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar42->field_0x10 + 0x30) + (longlong)iVar35 * 8) !=
              &pUVar38->_padding_)) goto LAB_149c516db;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar42 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar42);
        }
        local_f50.ObjectIndex = 0;
        local_f50.ObjectSerialNumber = 0;
        local_f10 = pUVar42;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar42 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar42);
        }
        FWeakObjectPtr::operator=(&local_f50,(FObjectPtr)&local_f10);
        PCGWorldQueryHelpers::FilterRayHitResults
                  (&local_aa8,(FPCGWorldRaycastQueryParams *)local_2f8,
                   (TWeakObjectPtr<UPCGComponent,FWeakObjectPtr>)local_f50,&local_f70,
                   &param_3->CachedFilterActors);
        if ((local_aa8.bIsSet == false) ||
           ((pUVar37->bUnbounded == false &&
            (bVar33 = PCGHelpers::IsInsideBounds
                                (&local_f40->Bounds,
                                 (TVector<double> *)&local_aa8.TypedValue.ImpactPoint), !bVar33))))
        {
          if (pUVar37->bKeepOriginalPointOnMiss == false) goto LAB_149c519a4;
          local_8c8.bIsSet = false;
          TOptional<FHitResult>::TOptional<FHitResult>(&local_be0,&local_8c8);
          local_ad8 = pFVar43;
          local_ad0 = pFVar1;
          if (((local_f80.Data <= &local_be0) &&
              (&local_be0 <
               (TOptional<FHitResult> *)(local_f80.Data + (longlong)local_f78._4_4_ * 0x118))) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar33)) {
            pcVar6 = (code *)swi(3);
            uVar34 = (*pcVar6)();
            return (bool)uVar34;
          }
          iVar35 = (int)local_f78;
          if ((int)local_f78 == local_f78._4_4_) {
            iVar35 = UE::Core::Private::
                     ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x118,8,&local_f80,(int *)((longlong)&local_f78 + 4));
          }
          local_f78 = CONCAT44(local_f78._4_4_,iVar35 + 1);
          this_03 = (TOptional<FHitResult> *)(local_f80.Data + (longlong)iVar35 * 0x118);
          TOptional<FHitResult>::TOptional<FHitResult>(this_03,&local_be0);
          *(FScriptContainerElement **)&this_03[1].TypedValue = local_ad8;
          pFVar43 = local_ad0;
        }
        else {
          TOptional<FHitResult>::TOptional<FHitResult>(&local_cf8,&local_aa8);
          local_bf0 = pFVar43;
          local_be8 = pFVar1;
          if (((local_f80.Data <= &local_cf8) &&
              (&local_cf8 <
               (TOptional<FHitResult> *)(local_f80.Data + (longlong)local_f78._4_4_ * 0x118))) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar33)) {
            pcVar6 = (code *)swi(3);
            uVar34 = (*pcVar6)();
            return (bool)uVar34;
          }
          iVar35 = (int)local_f78;
          if ((int)local_f78 == local_f78._4_4_) {
            iVar35 = UE::Core::Private::
                     ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x118,8,&local_f80,(int *)((longlong)&local_f78 + 4));
          }
          local_f78 = CONCAT44(local_f78._4_4_,iVar35 + 1);
          this_03 = (TOptional<FHitResult> *)(local_f80.Data + (longlong)iVar35 * 0x118);
          TOptional<FHitResult>::TOptional<FHitResult>(this_03,&local_cf8);
          *(FScriptContainerElement **)&this_03[1].TypedValue = local_bf0;
          pFVar43 = local_be8;
        }
        *(FScriptContainerElement **)&this_03[1].TypedValue.Distance = pFVar43;
      }
LAB_149c519a4:
      lVar56 = lVar56 + 1;
      this_01 = local_f00;
      FVar59 = local_f60;
    } while (lVar56 < local_f08);
  }
  uVar54 = 0;
  (**(code **)(this_01->_padding_ + 0x490))(this_01,local_f78 & 0xffffffff);
  if ((UPCGBasePointData *)FVar59.Handle != (UPCGBasePointData *)0x0) {
    pcVar6 = *(code **)(this_01->_padding_ + 0x498);
    uVar36 = (**(code **)(*(longlong *)FVar59.Handle + 0x640))(FVar59.Handle,1);
    (*pcVar6)(this_01,uVar36);
    (**(code **)(this_01->_padding_ + 0x4b0))(this_01,FVar59.Handle);
  }
  (**(code **)(this_01->_padding_ + 0x498))(this_01,0xc1);
  if (pUVar37->bKeepOriginalPointOnMiss == false) {
    (**(code **)(this_01->_padding_ + 0x548))(this_01);
  }
  else {
    (**(code **)(this_01->_padding_ + 0x498))(this_01,2);
  }
  if ((UPCGBasePointData *)FVar59.Handle == (UPCGBasePointData *)0x0) {
    local_7b8.BoundsMinRange._20_8_ = 0;
    local_7b8.BoundsMinRange.StubValue.field0_0x0._4_8_ = 0;
    local_7b8.TransformRange._20_8_ = 0;
    local_7b8.BoundsMaxRange._20_8_ = 0;
    local_7b8.BoundsMaxRange.StubValue.field0_0x0._4_8_ = 0;
    local_7b8.TransformRange._padding_._4_4_ = 0;
    local_7b8.MetadataEntryRange._20_8_ = 0;
    local_7b8._388_8_ = 0;
    local_7b8.DensityRange.NumElements = 0;
    local_7b8.DensityRange.StubValue = 0.0;
    local_7b8.SteepnessRange.NumElements = 0;
    local_7b8.SteepnessRange.StubValue = 0.0;
    local_7b8.BoundsMinRange.StubValue.field0_0x0._12_8_ = 0;
    local_7b8.BoundsMinRange.StubValue.field0_0x0._20_4_ = 0;
    local_7b8.BoundsMaxRange.StubValue.field0_0x0._12_8_ = 0;
    local_7b8.BoundsMaxRange.StubValue.field0_0x0._20_4_ = 0;
    local_7b8.TransformRange.StubValue.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_7b8.TransformRange.StubValue.Rotation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_7b8.TransformRange.StubValue.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_7b8.ColorRange._20_8_ = 0;
    local_7b8.ColorRange._padding_._4_4_ = 0;
    local_7b8.SeedRange.NumElements = 0;
    local_7b8.SeedRange.StubValue = 0;
    local_7b8._396_4_ = 0;
    local_7b8.TransformRange.ElementView.FirstElementPtr = (TTransform<double> *)0x0;
    local_7b8.TransformRange.StubValue.Translation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_7b8.TransformRange.StubValue.Translation.XY.m128d_f64[1] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_7b8.TransformRange.ElementView.BytesBetweenElements = 0;
    local_7b8.TransformRange.ElementView.NumElements = 0;
    local_7b8.TransformRange.NumElements = 0;
    local_7b8.DensityRange.ElementView.FirstElementPtr = (float *)0x0;
    local_7b8.DensityRange.ElementView.BytesBetweenElements = 0;
    local_7b8.DensityRange.ElementView.NumElements = 0;
    local_7b8.SteepnessRange.ElementView.FirstElementPtr = (float *)0x0;
    local_7b8.TransformRange.StubValue.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_7b8.TransformRange.StubValue.Rotation.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_7b8.TransformRange.StubValue.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_7b8.TransformRange.StubValue.Scale3D.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_7b8.TransformRange.StubValue.Scale3D.XY.m128d_f64[1] =
         (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_7b8.SteepnessRange.ElementView.BytesBetweenElements = 0;
    local_7b8.SteepnessRange.ElementView.NumElements = 0;
    local_7b8.BoundsMinRange.ElementView.FirstElementPtr = (TVector<double> *)0x0;
    local_7b8.BoundsMinRange.ElementView.BytesBetweenElements = 0;
    local_7b8.BoundsMinRange.ElementView.NumElements = 0;
    local_7b8.BoundsMinRange.NumElements = 0;
    local_7b8.BoundsMaxRange.ElementView.FirstElementPtr = (TVector<double> *)0x0;
    local_7b8.BoundsMaxRange.ElementView.BytesBetweenElements = 0;
    local_7b8.BoundsMaxRange.ElementView.NumElements = 0;
    local_7b8.BoundsMaxRange.NumElements = 0;
    local_7b8.ColorRange.ElementView.FirstElementPtr = (TVector4<double> *)0x0;
    local_7b8.ColorRange.ElementView.BytesBetweenElements = 0;
    local_7b8.ColorRange.ElementView.NumElements = 0;
    local_7b8.ColorRange.NumElements = 0;
    local_7b8.TransformRange.StubValue.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_7b8.TransformRange.StubValue.Translation.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_7b8.TransformRange.StubValue.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_7b8.SeedRange.ElementView.FirstElementPtr = (int *)0x0;
    local_7b8.SeedRange.ElementView.BytesBetweenElements = 0;
    local_7b8.SeedRange.ElementView.NumElements = 0;
    local_7b8.MetadataEntryRange.ElementView.FirstElementPtr = (long64 *)0x0;
    local_7b8.MetadataEntryRange.ElementView.BytesBetweenElements = 0;
    local_7b8.MetadataEntryRange.ElementView.NumElements = 0;
    local_7b8.MetadataEntryRange.NumElements = 0;
    local_7b8.TransformRange.StubValue.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_7b8.TransformRange.StubValue.Scale3D.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_7b8.TransformRange.StubValue.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_7b8.ColorRange.StubValue.field0_0x0._s_0.X = 0.0;
    local_7b8.ColorRange.StubValue.field0_0x0._s_0.Y = 0.0;
    local_7b8.ColorRange.StubValue.field0_0x0._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_7b8.ColorRange.StubValue.field0_0x0._s_0.W = _UNK_15061cbc8;
  }
  else {
    FConstPCGPointValueRanges::FConstPCGPointValueRanges
              (&local_7b8,(UPCGBasePointData *)FVar59.Handle);
  }
  FPCGPointValueRanges::FPCGPointValueRanges(&local_628,this_01,false);
  dVar11 = _UNK_150689688;
  dVar21 = ___xmm_3ff00000000000003ff0000000000000;
  uVar52 = local_f78 & 0xffffffff;
  if (0 < (int)local_f78) {
    uVar60 = (uint)__xmm_80000000000000008000000000000000;
    uVar61 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    do {
      uVar63 = (uint)uVar54;
      uVar58 = ~uVar63 >> 0x1f;
      uVar62 = 0;
      if ((int)uVar63 < (int)uVar52) {
        uVar62 = uVar58;
      }
      iVar35 = (int)uVar52;
      if (uVar62 == 0) {
        bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar33) {
          pcVar6 = (code *)swi(3);
          uVar34 = (*pcVar6)();
          return (bool)uVar34;
        }
        iVar35 = (int)local_f78;
      }
      lVar56 = (longlong)(int)uVar63 * 0x118;
      pFVar57 = (FHitResult *)(local_f80.Data + lVar56);
      uVar62 = 0;
      if ((int)uVar63 < iVar35) {
        uVar62 = uVar58;
      }
      if (uVar62 == 0) {
        bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar33) {
          pcVar6 = (code *)swi(3);
          uVar34 = (*pcVar6)();
          return (bool)uVar34;
        }
        iVar35 = (int)local_f78;
      }
      pTVar47 = *(TVector<double> **)(local_f80.Data + lVar56 + 0x108);
      uVar62 = 0;
      if ((int)uVar63 < iVar35) {
        uVar62 = uVar58;
      }
      if ((uVar62 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar6 = (code *)swi(3);
        uVar34 = (*pcVar6)();
        return (bool)uVar34;
      }
      pTVar5 = *(TVector<double> **)(local_f80.Data + lVar56 + 0x110);
      if ((char)pFVar57[1].FaceIndex == '\0') {
        uVar62 = (int)uVar63 >> 0x1f;
        if ((UPCGBasePointData *)local_f60.Handle == (UPCGBasePointData *)0x0) {
          uVar36 = *(undefined4 *)&pTVar47->field0_0x0;
          uVar73 = *(undefined4 *)((longlong)&pTVar47->field0_0x0 + 4);
          dVar12 = (pTVar47->field0_0x0)._s_0.Z;
          dVar14 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          dVar15 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          uVar64 = SUB84(dVar15,0);
          uVar65 = (undefined4)((ulonglong)dVar15 >> 0x20);
          uVar53 = 0;
          if ((int)uVar63 < local_628.TransformRange.NumElements) {
            uVar53 = uVar58;
          }
          local_e98._8_4_ = uVar64;
          local_e98._0_8_ = dVar14;
          local_e98._12_4_ = uVar65;
          auVar68._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          auVar68._8_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          uVar3 = *(undefined8 *)((longlong)&pTVar47->field0_0x0 + 8);
          uVar66 = (undefined4)uVar3;
          uVar67 = (undefined4)((ulonglong)uVar3 >> 0x20);
          uStack_e60 = 0;
          dVar15 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          dVar17 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          uVar69 = SUB84(dVar17,0);
          uVar70 = (undefined4)((ulonglong)dVar17 >> 0x20);
          local_e58._8_4_ = uVar69;
          local_e58._0_8_ = dVar15;
          local_e58._12_4_ = uVar70;
          dVar17 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          dVar19 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          uVar71 = SUB84(dVar19,0);
          uVar72 = (undefined4)((ulonglong)dVar19 >> 0x20);
          local_e48._8_4_ = uVar71;
          local_e48._0_8_ = dVar17;
          local_e48._12_4_ = uVar72;
          local_e88 = auVar68;
          local_e78 = uVar36;
          uStack_e74 = uVar73;
          uStack_e70 = uVar66;
          uStack_e6c = uVar67;
          local_e68 = dVar12;
          if ((uVar53 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar33)) {
            pcVar6 = (code *)swi(3);
            uVar34 = (*pcVar6)();
            return (bool)uVar34;
          }
          uVar53 = (uint)((longlong)((ulonglong)uVar62 << 0x20 | uVar54 & 0xffffffff) %
                         (longlong)local_628.TransformRange.ElementView.NumElements);
          if (uVar63 == uVar53) {
            pTVar46 = (TTransform<double> *)
                      ((longlong)
                       ((local_628.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.
                       m128d_f64 +
                      (longlong)(int)uVar53 *
                      (longlong)local_628.TransformRange.ElementView.BytesBetweenElements);
          }
          else {
            pTVar46 = &local_628.TransformRange.StubValue;
          }
          auVar13._8_4_ = uVar64;
          auVar13._0_8_ = dVar14;
          auVar13._12_4_ = uVar65;
          *(undefined1 (*) [16])(pTVar46->Rotation).XY.m128d_f64 = auVar13;
          *(undefined1 (*) [16])(pTVar46->Rotation).ZW.m128d_f64 = auVar68;
          *(undefined4 *)(pTVar46->Translation).XY.m128d_f64 = uVar36;
          *(undefined4 *)((longlong)(pTVar46->Translation).XY.m128d_f64 + 4) = uVar73;
          *(undefined4 *)((pTVar46->Translation).XY.m128d_f64 + 1) = uVar66;
          *(undefined4 *)((longlong)(pTVar46->Translation).XY.m128d_f64 + 0xc) = uVar67;
          (pTVar46->Translation).ZW.m128d_f64[0] = dVar12;
          (pTVar46->Translation).ZW.m128d_f64[1] = 0.0;
          auVar16._8_4_ = uVar69;
          auVar16._0_8_ = dVar15;
          auVar16._12_4_ = uVar70;
          *(undefined1 (*) [16])(pTVar46->Scale3D).XY.m128d_f64 = auVar16;
          auVar18._8_4_ = uVar71;
          auVar18._0_8_ = dVar17;
          auVar18._12_4_ = uVar72;
          *(undefined1 (*) [16])(pTVar46->Scale3D).ZW.m128d_f64 = auVar18;
          iVar35 = PCGHelpers::ComputeSeedFromPosition(pTVar47);
          uVar53 = 0;
          if ((int)uVar63 < local_628.SeedRange.NumElements) {
            uVar53 = uVar58;
          }
          if ((uVar53 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar33)) {
            pcVar6 = (code *)swi(3);
            uVar34 = (*pcVar6)();
            return (bool)uVar34;
          }
          uVar53 = (uint)((longlong)((ulonglong)uVar62 << 0x20 | uVar54 & 0xffffffff) %
                         (longlong)local_628.SeedRange.ElementView.NumElements);
          if (uVar63 == uVar53) {
            piVar44 = (int *)((longlong)(int)uVar53 *
                              (longlong)local_628.SeedRange.ElementView.BytesBetweenElements +
                             (longlong)local_628.SeedRange.ElementView.FirstElementPtr);
          }
          else {
            piVar44 = &local_628.SeedRange.StubValue;
          }
          *piVar44 = iVar35;
        }
        else {
          iVar35 = (**(code **)(*(longlong *)local_f60.Handle + 0x488))();
          uVar53 = uVar63;
          if (iVar35 == 1) {
            uVar53 = 0;
          }
          piVar44 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                              (&local_7b8.SeedRange,uVar53);
          iVar35 = *piVar44;
          pfVar45 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_7b8.DensityRange,uVar53);
          fVar2 = *pfVar45;
          pTVar46 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                    ::GetElement(&local_7b8.TransformRange,uVar53);
          FPCGPoint::FPCGPoint(&local_3c8,pTVar46,fVar2,iVar35);
          pTVar47 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_7b8.BoundsMinRange,uVar53);
          local_3c8.BoundsMin.field0_0x0._s_0.X = (pTVar47->field0_0x0)._s_0.X;
          local_3c8.BoundsMin.field0_0x0._s_0.Y = (pTVar47->field0_0x0)._s_0.Y;
          local_3c8.BoundsMin.field0_0x0._s_0.Z = (pTVar47->field0_0x0)._s_0.Z;
          pTVar47 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_7b8.BoundsMaxRange,uVar53);
          local_3c8.BoundsMax.field0_0x0._s_0.X = (pTVar47->field0_0x0)._s_0.X;
          local_3c8.BoundsMax.field0_0x0._s_0.Y = (pTVar47->field0_0x0)._s_0.Y;
          local_3c8.BoundsMax.field0_0x0._s_0.Z = (pTVar47->field0_0x0)._s_0.Z;
          pfVar45 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_7b8.SteepnessRange,uVar53);
          local_3c8.Steepness = *pfVar45;
          pTVar48 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                    ::GetElement(&local_7b8.ColorRange,uVar53);
          local_3c8.Color.field0_0x0._s_0.X = (pTVar48->field0_0x0)._s_0.X;
          local_3c8.Color.field0_0x0._s_0.Y = (pTVar48->field0_0x0)._s_0.Y;
          local_3c8.Color.field0_0x0._s_0.Z = (pTVar48->field0_0x0)._s_0.Z;
          local_3c8.Color.field0_0x0._s_0.W = (pTVar48->field0_0x0)._s_0.W;
          plVar49 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                              (&local_7b8.MetadataEntryRange,uVar53);
          dVar27 = local_3c8.Transform.Scale3D.ZW.m128d_f64[1];
          dVar26 = local_3c8.Transform.Scale3D.ZW.m128d_f64[0];
          dVar25 = local_3c8.Transform.Scale3D.XY.m128d_f64[1];
          dVar24 = local_3c8.Transform.Scale3D.XY.m128d_f64[0];
          _Var28.m128d_f64 = local_3c8.Transform.Translation.ZW.m128d_f64;
          dVar23 = local_3c8.Transform.Translation.XY.m128d_f64[1];
          dVar19 = local_3c8.Transform.Translation.XY.m128d_f64[0];
          dVar17 = local_3c8.Transform.Rotation.ZW.m128d_f64[1];
          dVar15 = local_3c8.Transform.Rotation.ZW.m128d_f64[0];
          dVar14 = local_3c8.Transform.Rotation.XY.m128d_f64[1];
          dVar12 = local_3c8.Transform.Rotation.XY.m128d_f64[0];
          local_3c8.MetadataEntry = *plVar49;
          if (local_628.TransformRange.NumElements != 0) {
            pTVar46 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                      ::operator[](&local_628.TransformRange,uVar63);
            (pTVar46->Rotation).XY.m128d_f64[0] = dVar12;
            (pTVar46->Rotation).XY.m128d_f64[1] = dVar14;
            (pTVar46->Rotation).ZW.m128d_f64[0] = dVar15;
            (pTVar46->Rotation).ZW.m128d_f64[1] = dVar17;
            (pTVar46->Translation).XY.m128d_f64[0] = dVar19;
            (pTVar46->Translation).XY.m128d_f64[1] = dVar23;
            *&(pTVar46->Translation).ZW.m128d_f64 = _Var28.m128d_f64;
            (pTVar46->Scale3D).XY.m128d_f64[0] = dVar24;
            (pTVar46->Scale3D).XY.m128d_f64[1] = dVar25;
            (pTVar46->Scale3D).ZW.m128d_f64[0] = dVar26;
            (pTVar46->Scale3D).ZW.m128d_f64[1] = dVar27;
          }
          fVar2 = local_3c8.Density;
          if (local_628.DensityRange.NumElements != 0) {
            pfVar45 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                                (&local_628.DensityRange,uVar63);
            *pfVar45 = fVar2;
          }
          fVar2 = local_3c8.Steepness;
          if (local_628.SteepnessRange.NumElements != 0) {
            pfVar45 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                                (&local_628.SteepnessRange,uVar63);
            *pfVar45 = fVar2;
          }
          uVar30 = local_3c8.BoundsMin.field0_0x0._s_0.Z;
          uVar29 = local_3c8.BoundsMin.field0_0x0._s_0.Y;
          uVar3 = local_3c8.BoundsMin.field0_0x0._s_0.X;
          if (local_628.BoundsMinRange.NumElements != 0) {
            pTVar47 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                      ::operator[](&local_628.BoundsMinRange,uVar63);
            (pTVar47->field0_0x0)._s_0.X = (double)uVar3;
            (pTVar47->field0_0x0)._s_0.Y = (double)uVar29;
            (pTVar47->field0_0x0)._s_0.Z = (double)uVar30;
          }
          uVar30 = local_3c8.BoundsMax.field0_0x0._s_0.Z;
          uVar29 = local_3c8.BoundsMax.field0_0x0._s_0.Y;
          uVar3 = local_3c8.BoundsMax.field0_0x0._s_0.X;
          if (local_628.BoundsMaxRange.NumElements != 0) {
            pTVar47 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                      ::operator[](&local_628.BoundsMaxRange,uVar63);
            (pTVar47->field0_0x0)._s_0.X = (double)uVar3;
            (pTVar47->field0_0x0)._s_0.Y = (double)uVar29;
            (pTVar47->field0_0x0)._s_0.Z = (double)uVar30;
          }
          uVar31 = local_3c8.Color.field0_0x0._s_0.W;
          uVar30 = local_3c8.Color.field0_0x0._s_0.Z;
          uVar29 = local_3c8.Color.field0_0x0._s_0.Y;
          uVar3 = local_3c8.Color.field0_0x0._s_0.X;
          if (local_628.ColorRange.NumElements != 0) {
            pTVar48 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                      ::operator[](&local_628.ColorRange,uVar63);
            (pTVar48->field0_0x0)._s_0.X = (double)uVar3;
            (pTVar48->field0_0x0)._s_0.Y = (double)uVar29;
            (pTVar48->field0_0x0)._s_0.Z = (double)uVar30;
            (pTVar48->field0_0x0)._s_0.W = (double)uVar31;
          }
          iVar35 = local_3c8.Seed;
          if (local_628.SeedRange.NumElements != 0) {
            piVar44 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                                (&local_628.SeedRange,uVar63);
            *piVar44 = iVar35;
          }
          lVar32 = local_3c8.MetadataEntry;
          if (local_628.MetadataEntryRange.NumElements != 0) {
            plVar49 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                                (&local_628.MetadataEntryRange,uVar63);
            *plVar49 = lVar32;
          }
        }
        uVar53 = 0;
        if ((int)uVar63 < local_628.DensityRange.NumElements) {
          uVar53 = uVar58;
        }
        if ((uVar53 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar33)) {
          pcVar6 = (code *)swi(3);
          uVar34 = (*pcVar6)();
          return (bool)uVar34;
        }
        uVar53 = (uint)((longlong)((ulonglong)uVar62 << 0x20 | uVar54 & 0xffffffff) %
                       (longlong)local_628.DensityRange.ElementView.NumElements);
        if (uVar63 == uVar53) {
          pfVar45 = (float *)((longlong)local_628.DensityRange.ElementView.BytesBetweenElements *
                              (longlong)(int)uVar53 +
                             (longlong)local_628.DensityRange.ElementView.FirstElementPtr);
        }
        else {
          pfVar45 = &local_628.DensityRange.StubValue;
        }
        *pfVar45 = 0.0;
        uVar53 = 0;
        if ((int)uVar63 < local_628.MetadataEntryRange.NumElements) {
          uVar53 = uVar58;
        }
        if ((uVar53 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar33)) {
          pcVar6 = (code *)swi(3);
          uVar34 = (*pcVar6)();
          return (bool)uVar34;
        }
        uVar62 = (uint)((longlong)((ulonglong)uVar62 << 0x20 | uVar54 & 0xffffffff) %
                       (longlong)local_628.MetadataEntryRange.ElementView.NumElements);
        if (uVar63 == uVar62) {
          plVar49 = (long64 *)
                    ((longlong)(int)uVar62 *
                     (longlong)local_628.MetadataEntryRange.ElementView.BytesBetweenElements +
                    (longlong)local_628.MetadataEntryRange.ElementView.FirstElementPtr);
        }
        else {
          plVar49 = &local_628.MetadataEntryRange.StubValue;
        }
        bVar33 = PCGWorldQueryHelpers::ApplyRayMissMetadata
                           ((FPCGWorldRaycastQueryParams *)local_2f8,plVar49,local_f30);
        local_f88 = local_f88 & bVar33;
      }
      else {
        if ((UPCGBasePointData *)local_f60.Handle == (UPCGBasePointData *)0x0) {
          local_df8.Transform.Rotation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::Float0001.m128_f32[0];
          dVar12 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_df8._padding_ = 0;
          pFVar50 = &local_df8;
          local_df8.Density = 1.0;
          local_df8._100_4_ = 0;
          local_df8.Steepness = 0.5;
          local_df8.Seed = 0;
          local_df8.MetadataEntry = -1;
          adVar7[1]._0_4_ = SUB84(dVar12,0);
          adVar7[0] = local_df8.Transform.Rotation.XY.m128d_f64[0];
          adVar7[1]._4_4_ = (int)((ulonglong)dVar12 >> 0x20);
          local_df8.Transform.Rotation.XY.m128d_f64[1] = adVar7[1];
          local_df8.Transform.Rotation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::Float0001.m128_f32[2];
          dVar12 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          adVar8[1]._0_4_ = SUB84(dVar12,0);
          adVar8[0] = local_df8.Transform.Rotation.ZW.m128d_f64[0];
          adVar8[1]._4_4_ = (int)((ulonglong)dVar12 >> 0x20);
          local_df8.Transform.Rotation.ZW.m128d_f64[1] = adVar8[1];
          local_df8.Transform.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_df8.Transform.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_df8.Transform.Scale3D.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_df8.Transform.Scale3D.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::Float1110.m128_f32[1];
          adVar9[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          adVar9[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          adVar9[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_df8.Transform.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_df8.Transform.Translation.ZW.m128d_f64[1] = adVar9[1];
          local_df8.Transform.Scale3D.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::Float1110.m128_f32[2];
          dVar12 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          adVar10[1]._0_4_ = SUB84(dVar12,0);
          adVar10[0] = local_df8.Transform.Scale3D.ZW.m128d_f64[0];
          adVar10[1]._4_4_ = (int)((ulonglong)dVar12 >> 0x20);
          local_df8.Transform.Scale3D.ZW.m128d_f64[1] = adVar10[1];
          local_df8.BoundsMin.field0_0x0._s_0.Y =
               (double)CONCAT44((uint)((ulonglong)
                                       UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20
                                      ) ^ uVar61,
                                SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^
                                uVar60);
          local_df8.BoundsMin.field0_0x0._s_0.X =
               (double)CONCAT44((uint)((ulonglong)
                                       UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >> 0x20
                                      ) ^ uVar61,
                                SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^
                                uVar60);
          local_df8.BoundsMin.field0_0x0._s_0.Z =
               (double)CONCAT44((uint)((ulonglong)
                                       UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                                      0x20) ^ uVar61,
                                SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^
                                uVar60);
          local_df8.BoundsMax.field0_0x0._s_0.X =
               UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          local_df8.BoundsMax.field0_0x0._s_0.Y =
               UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
          local_df8.BoundsMax.field0_0x0._s_0.Z =
               UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
          local_df8.Color.field0_0x0._s_0.X = dVar21;
          local_df8.Color.field0_0x0._s_0.Y = dVar11;
          local_df8.Color.field0_0x0._s_0.Z = dVar21;
          local_df8.Color.field0_0x0._s_0.W = dVar11;
        }
        else {
          iVar35 = (**(code **)(*(longlong *)local_f60.Handle + 0x488))(local_f60.Handle);
          uVar62 = uVar63;
          if (iVar35 == 1) {
            uVar62 = 0;
          }
          piVar44 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                              (&local_7b8.SeedRange,uVar62);
          iVar35 = *piVar44;
          pfVar45 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_7b8.DensityRange,uVar62);
          fVar2 = *pfVar45;
          pTVar46 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                    ::GetElement(&local_7b8.TransformRange,uVar62);
          FPCGPoint::FPCGPoint(&local_218,pTVar46,fVar2,iVar35);
          pTVar47 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_7b8.BoundsMinRange,uVar62);
          local_218.BoundsMin.field0_0x0._s_0.X = (pTVar47->field0_0x0)._s_0.X;
          local_218.BoundsMin.field0_0x0._s_0.Y = (pTVar47->field0_0x0)._s_0.Y;
          local_218.BoundsMin.field0_0x0._s_0.Z = (pTVar47->field0_0x0)._s_0.Z;
          pTVar47 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_7b8.BoundsMaxRange,uVar62);
          local_218.BoundsMax.field0_0x0._s_0.X = (pTVar47->field0_0x0)._s_0.X;
          local_218.BoundsMax.field0_0x0._s_0.Y = (pTVar47->field0_0x0)._s_0.Y;
          local_218.BoundsMax.field0_0x0._s_0.Z = (pTVar47->field0_0x0)._s_0.Z;
          pfVar45 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_7b8.SteepnessRange,uVar62);
          local_218.Steepness = *pfVar45;
          pTVar48 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                    ::GetElement(&local_7b8.ColorRange,uVar62);
          local_218.Color.field0_0x0._s_0.X = (pTVar48->field0_0x0)._s_0.X;
          local_218.Color.field0_0x0._s_0.Y = (pTVar48->field0_0x0)._s_0.Y;
          local_218.Color.field0_0x0._s_0.Z = (pTVar48->field0_0x0)._s_0.Z;
          local_218.Color.field0_0x0._s_0.W = (pTVar48->field0_0x0)._s_0.W;
          plVar49 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                              (&local_7b8.MetadataEntryRange,uVar62);
          pFVar50 = &local_218;
          local_218.MetadataEntry = *plVar49;
        }
        local_498.Rotation.XY.m128d_f64[0] = (pFVar50->Transform).Rotation.XY.m128d_f64[0];
        local_498.Rotation.XY.m128d_f64[1] = (pFVar50->Transform).Rotation.XY.m128d_f64[1];
        local_498.Rotation.ZW.m128d_f64[0] = (pFVar50->Transform).Rotation.ZW.m128d_f64[0];
        local_498.Rotation.ZW.m128d_f64[1] = (pFVar50->Transform).Rotation.ZW.m128d_f64[1];
        local_998 = local_498.Rotation.XY.m128d_f64[0];
        dStack_990 = local_498.Rotation.XY.m128d_f64[1];
        local_498.Translation.XY.m128d_f64[0] = (pFVar50->Transform).Translation.XY.m128d_f64[0];
        local_498.Translation.XY.m128d_f64[1] = (pFVar50->Transform).Translation.XY.m128d_f64[1];
        local_988 = local_498.Rotation.ZW.m128d_f64[0];
        dStack_980 = local_498.Rotation.ZW.m128d_f64[1];
        local_498.Translation.ZW.m128d_f64[0] = (pFVar50->Transform).Translation.ZW.m128d_f64[0];
        local_498.Translation.ZW.m128d_f64[1] = (pFVar50->Transform).Translation.ZW.m128d_f64[1];
        local_978 = local_498.Translation.XY.m128d_f64[0];
        dStack_970 = local_498.Translation.XY.m128d_f64[1];
        local_498.Scale3D.XY.m128d_f64[0] = (pFVar50->Transform).Scale3D.XY.m128d_f64[0];
        local_498.Scale3D.XY.m128d_f64[1] = (pFVar50->Transform).Scale3D.XY.m128d_f64[1];
        local_968 = local_498.Translation.ZW.m128d_f64[0];
        dStack_960 = local_498.Translation.ZW.m128d_f64[1];
        local_498.Scale3D.ZW.m128d_f64[0] = (pFVar50->Transform).Scale3D.ZW.m128d_f64[0];
        local_498.Scale3D.ZW.m128d_f64[1] = (pFVar50->Transform).Scale3D.ZW.m128d_f64[1];
        local_958 = local_498.Scale3D.XY.m128d_f64[0];
        dStack_950 = local_498.Scale3D.XY.m128d_f64[1];
        local_438 = *(undefined8 *)&pFVar50->Density;
        dStack_430 = (pFVar50->BoundsMin).field0_0x0._s_0.X;
        local_948 = local_498.Scale3D.ZW.m128d_f64[0];
        dStack_940 = local_498.Scale3D.ZW.m128d_f64[1];
        local_428 = (pFVar50->BoundsMin).field0_0x0._s_0.Y;
        dStack_420 = (pFVar50->BoundsMin).field0_0x0._s_0.Z;
        local_938 = local_438;
        dStack_930 = dStack_430;
        local_418 = (pFVar50->BoundsMax).field0_0x0._s_0.X;
        dStack_410 = (pFVar50->BoundsMax).field0_0x0._s_0.Y;
        local_928 = local_428;
        dStack_920 = dStack_420;
        local_408 = (pFVar50->BoundsMax).field0_0x0._s_0.Z;
        lStack_400 = pFVar50->_padding_;
        local_918 = local_418;
        dStack_910 = dStack_410;
        local_3f8 = (pFVar50->Color).field0_0x0._s_0.X;
        dStack_3f0 = (pFVar50->Color).field0_0x0._s_0.Y;
        local_908 = local_408;
        lStack_900 = lStack_400;
        local_8e8 = (pFVar50->Color).field0_0x0._s_0.Z;
        dStack_8e0 = (pFVar50->Color).field0_0x0._s_0.W;
        local_8f8 = local_3f8;
        dStack_8f0 = dStack_3f0;
        local_8d8._0_4_ = pFVar50->Steepness;
        local_8d8._4_4_ = pFVar50->Seed;
        dStack_8d0 = (double)pFVar50->MetadataEntry;
        local_3e8 = local_8e8;
        dStack_3e0 = dStack_8e0;
        local_3d8 = local_8d8;
        dStack_3d0 = dStack_8d0;
        pTVar46 = PCGWorldQueryHelpers::GetOrthonormalImpactTransform(&local_148,pFVar57);
        local_498.Rotation.XY.m128d_f64[0] = (pTVar46->Rotation).XY.m128d_f64[0];
        local_498.Rotation.XY.m128d_f64[1] = (pTVar46->Rotation).XY.m128d_f64[1];
        local_498.Rotation.ZW.m128d_f64[0] = (pTVar46->Rotation).ZW.m128d_f64[0];
        local_498.Rotation.ZW.m128d_f64[1] = (pTVar46->Rotation).ZW.m128d_f64[1];
        local_eb8._s_0.X = (pTVar46->Translation).XY.m128d_f64[0];
        local_eb8._s_0.Y = (pTVar46->Translation).XY.m128d_f64[1];
        local_eb8._s_0.Z = (pTVar46->Translation).ZW.m128d_f64[0];
        local_498.Translation.ZW.m128d_f64[1] = (pTVar46->Translation).ZW.m128d_f64[1];
        local_498.Scale3D.XY.m128d_f64[0] = (pTVar46->Scale3D).XY.m128d_f64[0];
        local_498.Scale3D.XY.m128d_f64[1] = (pTVar46->Scale3D).XY.m128d_f64[1];
        local_498.Scale3D.ZW.m128d_f64[0] = (pTVar46->Scale3D).ZW.m128d_f64[0];
        local_498.Scale3D.ZW.m128d_f64[1] = (pTVar46->Scale3D).ZW.m128d_f64[1];
        local_438 = CONCAT44(local_438._4_4_,0x3f800000);
        local_498.Translation.XY.m128d_f64[0] = local_eb8._s_0.X;
        local_498.Translation.XY.m128d_f64[1] = local_eb8._s_0.Y;
        local_498.Translation.ZW.m128d_f64[0] = local_eb8._s_0.Z;
        iVar35 = PCGHelpers::ComputeSeedFromPosition((TVector<double> *)&local_eb8._s_0);
        local_3d8 = CONCAT44(iVar35,(float)local_3d8);
        pUVar42 = (UObject *)*local_f38;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar42 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar42);
        }
        local_f48.ObjectIndex = 0;
        local_f48.ObjectSerialNumber = 0;
        local_ef8 = pUVar42;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar42 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar42);
        }
        FWeakObjectPtr::operator=(&local_f48,(FObjectPtr)&local_ef8);
        bVar33 = PCGWorldQueryHelpers::ApplyRayHitMetadata
                           (pFVar57,(FPCGWorldRaycastQueryParams *)local_2f8,pTVar5,&local_498,
                            (long64 *)&dStack_3d0,local_f30,
                            (TWeakObjectPtr<UWorld,FWeakObjectPtr>)local_f48);
        dVar27 = local_498.Scale3D.ZW.m128d_f64[1];
        dVar26 = local_498.Scale3D.ZW.m128d_f64[0];
        dVar25 = local_498.Scale3D.XY.m128d_f64[1];
        dVar24 = local_498.Scale3D.XY.m128d_f64[0];
        dVar23 = local_498.Translation.XY.m128d_f64[1];
        dVar19 = local_498.Translation.XY.m128d_f64[0];
        dVar17 = local_498.Rotation.ZW.m128d_f64[1];
        dVar15 = local_498.Rotation.ZW.m128d_f64[0];
        dVar14 = local_498.Rotation.XY.m128d_f64[1];
        dVar12 = local_498.Rotation.XY.m128d_f64[0];
        local_f88 = local_f88 & bVar33;
        if (local_628.TransformRange.NumElements != 0) {
          auVar20._8_8_ = local_498.Translation.ZW.m128d_f64[1];
          auVar20._0_8_ = local_498.Translation.ZW.m128d_f64[0];
          pTVar46 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                    ::operator[](&local_628.TransformRange,uVar63);
          (pTVar46->Rotation).XY.m128d_f64[0] = dVar12;
          (pTVar46->Rotation).XY.m128d_f64[1] = dVar14;
          (pTVar46->Rotation).ZW.m128d_f64[0] = dVar15;
          (pTVar46->Rotation).ZW.m128d_f64[1] = dVar17;
          (pTVar46->Translation).XY.m128d_f64[0] = dVar19;
          (pTVar46->Translation).XY.m128d_f64[1] = dVar23;
          *(undefined1 (*) [16])(pTVar46->Translation).ZW.m128d_f64 = auVar20;
          (pTVar46->Scale3D).XY.m128d_f64[0] = dVar24;
          (pTVar46->Scale3D).XY.m128d_f64[1] = dVar25;
          (pTVar46->Scale3D).ZW.m128d_f64[0] = dVar26;
          (pTVar46->Scale3D).ZW.m128d_f64[1] = dVar27;
        }
        if (local_628.DensityRange.NumElements != 0) {
          fVar2 = (float)local_438;
          pfVar45 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_628.DensityRange,uVar63);
          *pfVar45 = fVar2;
        }
        if (local_628.SteepnessRange.NumElements != 0) {
          fVar2 = (float)local_3d8;
          pfVar45 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_628.SteepnessRange,uVar63);
          *pfVar45 = fVar2;
        }
        dVar15 = dStack_420;
        dVar14 = local_428;
        dVar12 = dStack_430;
        if (local_628.BoundsMinRange.NumElements != 0) {
          pTVar47 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_628.BoundsMinRange,uVar63);
          (pTVar47->field0_0x0)._s_0.X = dVar12;
          (pTVar47->field0_0x0)._s_0.Y = dVar14;
          (pTVar47->field0_0x0)._s_0.Z = dVar15;
        }
        dVar15 = local_408;
        dVar14 = dStack_410;
        dVar12 = local_418;
        if (local_628.BoundsMaxRange.NumElements != 0) {
          pTVar47 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_628.BoundsMaxRange,uVar63);
          (pTVar47->field0_0x0)._s_0.X = dVar12;
          (pTVar47->field0_0x0)._s_0.Y = dVar14;
          (pTVar47->field0_0x0)._s_0.Z = dVar15;
        }
        dVar17 = dStack_3e0;
        dVar15 = local_3e8;
        dVar14 = dStack_3f0;
        dVar12 = local_3f8;
        if (local_628.ColorRange.NumElements != 0) {
          pTVar48 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                    ::operator[](&local_628.ColorRange,uVar63);
          (pTVar48->field0_0x0)._s_0.X = dVar12;
          (pTVar48->field0_0x0)._s_0.Y = dVar14;
          (pTVar48->field0_0x0)._s_0.Z = dVar15;
          (pTVar48->field0_0x0)._s_0.W = dVar17;
        }
        if (local_628.SeedRange.NumElements != 0) {
          iVar35 = local_3d8._4_4_;
          piVar44 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                              (&local_628.SeedRange,uVar63);
          *piVar44 = iVar35;
        }
        dVar12 = dStack_3d0;
        if (local_628.MetadataEntryRange.NumElements != 0) {
          pdVar51 = (double *)
                    TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                              (&local_628.MetadataEntryRange,uVar63);
          *pdVar51 = dVar12;
        }
      }
      uVar52 = (ulonglong)(int)local_f78;
      uVar54 = uVar54 + 1;
    } while ((longlong)uVar54 < (longlong)uVar52);
    if (local_f88 == 0) {
      pFVar39 = FText::AsLocalizable_Advanced_LocText
                          (&local_ec8,L"PCGWorldRaycastElement",L"UnableToApplyAllAttributes",
                           L"One or more attributes were unable to be applied.");
      PCGLog::LogWarningOnGraph(pFVar39,(FPCGContext *)local_f28);
      if (local_ec8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_ec8.TextData.Reference + 0x10))();
      }
    }
  }
  if (local_f70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f70.AllocatorInstance.Data);
  }
  if ((TOptional<FHitResult> *)local_f80.Data != (TOptional<FHitResult> *)0x0) {
    FMemory::Free(local_f80.Data);
  }
  local_238 = 0;
  if (local_240 != (void *)0x0) {
    FMemory::Free(local_240);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_2f8 + 0x78));
  DestructItems<FString,int>((FString *)local_2f8._88_8_,local_2f8._96_4_);
  if ((FString *)local_2f8._88_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_2f8._88_8_);
  }
  if ((void *)local_2f8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2f8._8_8_);
  }
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
             local_e38.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data,
             local_e38.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
  if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
      local_e38.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
      (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_e38.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data);
  }
  if (local_e38.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e38.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_f20.AllocatorInstance.Data,local_f20.ArrayNum);
  if ((FPCGTaggedData *)local_f20.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_f20.AllocatorInstance.Data);
  }
  return true;
}

// operator() @ 149c53960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
`FPCGWorldRaycastElement::PrepareDataInternal'::__l2::<lambda_1>::operator()
          (void *this,
          TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
          *param_1,FExecutionState *param_2)

{
  TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<unsigned_int> FVar5;
  double dVar6;
  UPCGSpatialData *pUVar7;
  double *pdVar8;
  FText *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined1 auStack_128 [32];
  bool local_108 [8];
  FText local_100;
  FCollisionQueryParams local_e8;
  double local_58 [6];
  undefined1 local_28;
  undefined4 uStack_27;
  undefined2 uStack_23;
  undefined1 uStack_21;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_128;
  if (*(int *)(*(longlong *)this + 8) != 0) {
    if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x321) == '\0') {
      pUVar7 = PCGSettingsHelpers::ComputeBoundingShape
                         ((FPCGContext *)param_1,
                          PCGWorldRaycastElement::Constants::Labels::BoundingShape,local_108);
      if (pUVar7 == (UPCGSpatialData *)0x0) {
        local_28 = 0;
        uStack_27 = 0;
        uStack_23 = 0;
        uStack_21 = 0;
        pdVar8 = local_58;
        local_58[0] = 0.0;
        local_58[1] = 0.0;
        local_58[2] = 0.0;
        local_58[3] = 0.0;
        local_58[4] = 0.0;
        local_58[5] = 0.0;
      }
      else {
        pdVar8 = (double *)(**(code **)(pUVar7->_padding_ + 0x388))(pUVar7,local_58);
      }
      dVar6 = pdVar8[1];
      (param_2->Bounds).Min.field0_0x0._s_0.X = *pdVar8;
      (param_2->Bounds).Min.field0_0x0._s_0.Y = dVar6;
      dVar6 = pdVar8[3];
      (param_2->Bounds).Min.field0_0x0._s_0.Z = pdVar8[2];
      (param_2->Bounds).Max.field0_0x0._s_0.X = dVar6;
      dVar6 = pdVar8[5];
      (param_2->Bounds).Max.field0_0x0._s_0.Y = pdVar8[4];
      (param_2->Bounds).Max.field0_0x0._s_0.Z = dVar6;
      *(double *)&(param_2->Bounds).IsValid = pdVar8[6];
      if ((param_2->Bounds).IsValid == '\0') {
        return NoOperation;
      }
    }
    lVar4 = *(longlong *)((longlong)this + 0x18);
    if ((*(char *)(lVar4 + 0x110) == '\x03') &&
       (*(int *)(*(longlong *)((longlong)this + 8) + 8) != *(int *)(*(longlong *)this + 8))) {
      pwVar11 = L"End point input data count must match the Origins input data count.";
      pwVar10 = L"InvalidEndPointDataCount";
    }
    else {
      iVar3 = *(int *)(*(longlong *)((longlong)this + 0x10) + 8);
      if ((iVar3 < 2) || (iVar3 == *(int *)(*(longlong *)this + 8))) {
        FCollisionQueryParams::FCollisionQueryParams(&local_e8);
        local_e8.bTraceComplex = *(bool *)(lVar4 + 0x24b);
        local_e8.bReturnPhysicalMaterial = *(bool *)(lVar4 + 0x2ba);
        if ((((*(byte *)(lVar4 + 0x311) & 0x16) == 0) && ((*(byte *)(lVar4 + 0x318) & 1) == 0)) &&
           (-1 < *(char *)(lVar4 + 0x310))) {
          local_e8.bReturnFaceIndex = false;
        }
        else {
          local_e8.bReturnFaceIndex = true;
        }
        pTVar1 = &(param_2->CollisionQueryParams).IgnoreComponents;
        (param_2->CollisionQueryParams).TraceTag = local_e8.TraceTag;
        (param_2->CollisionQueryParams).OwnerTag = local_e8.OwnerTag;
        (param_2->CollisionQueryParams).bFindInitialOverlaps = local_e8.bFindInitialOverlaps;
        (param_2->CollisionQueryParams).bIgnoreBlocks = local_e8.bIgnoreBlocks;
        (param_2->CollisionQueryParams).bIgnoreTouches = local_e8.bIgnoreTouches;
        (param_2->CollisionQueryParams).bSkipNarrowPhase = local_e8.bSkipNarrowPhase;
        (param_2->CollisionQueryParams).bTraceIntoSubComponents = local_e8.bTraceIntoSubComponents;
        (param_2->CollisionQueryParams).bReplaceHitWithSubComponents =
             local_e8.bReplaceHitWithSubComponents;
        (param_2->CollisionQueryParams).MobilityType = local_e8.MobilityType;
        (param_2->CollisionQueryParams).IgnoreMask = local_e8.IgnoreMask;
        (param_2->CollisionQueryParams).StatId.StatIdPtr = local_e8.StatId.StatIdPtr;
        (param_2->CollisionQueryParams).bDebugQuery = local_e8.bDebugQuery;
        (param_2->CollisionQueryParams).bComponentListUnique = local_e8.bComponentListUnique;
        (param_2->CollisionQueryParams).bTraceComplex = local_e8.bTraceComplex;
        (param_2->CollisionQueryParams).bReturnFaceIndex = local_e8.bReturnFaceIndex;
        (param_2->CollisionQueryParams).bReturnPhysicalMaterial = local_e8.bReturnPhysicalMaterial;
        if (pTVar1 != &local_e8.IgnoreComponents) {
          if (local_e8.IgnoreComponents.AllocatorInstance.SecondaryData ==
              (ForElementType<unsigned_int>)0x0) {
            *(undefined8 *)(pTVar1->AllocatorInstance).InlineData =
                 local_e8.IgnoreComponents.AllocatorInstance.InlineData._0_8_;
            *(undefined8 *)
             ((param_2->CollisionQueryParams).IgnoreComponents.AllocatorInstance.InlineData + 8) =
                 local_e8.IgnoreComponents.AllocatorInstance.InlineData._8_8_;
            *(undefined8 *)
             ((param_2->CollisionQueryParams).IgnoreComponents.AllocatorInstance.InlineData + 0x10)
                 = local_e8.IgnoreComponents.AllocatorInstance.InlineData._16_8_;
            *(undefined8 *)
             ((param_2->CollisionQueryParams).IgnoreComponents.AllocatorInstance.InlineData + 0x18)
                 = local_e8.IgnoreComponents.AllocatorInstance.InlineData._24_8_;
          }
          FVar5 = (param_2->CollisionQueryParams).IgnoreComponents.AllocatorInstance.SecondaryData;
          if (FVar5 != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)FVar5);
          }
          (param_2->CollisionQueryParams).IgnoreComponents.AllocatorInstance.SecondaryData =
               local_e8.IgnoreComponents.AllocatorInstance.SecondaryData;
          (param_2->CollisionQueryParams).IgnoreComponents.ArrayNum =
               local_e8.IgnoreComponents.ArrayNum;
          (param_2->CollisionQueryParams).IgnoreComponents.ArrayMax =
               local_e8.IgnoreComponents.ArrayMax;
          local_e8.IgnoreComponents.ArrayMax = 8;
          local_e8.IgnoreComponents.AllocatorInstance.SecondaryData =
               (ForElementType<unsigned_int>)0x0;
          local_e8.IgnoreComponents.ArrayNum = 0;
        }
        pTVar2 = &(param_2->CollisionQueryParams).IgnoreSourceObjects;
        if (pTVar2 != &local_e8.IgnoreSourceObjects) {
          if (local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData ==
              (ForElementType<unsigned_int>)0x0) {
            *(undefined8 *)(pTVar2->AllocatorInstance).InlineData =
                 local_e8.IgnoreSourceObjects.AllocatorInstance.InlineData._0_8_;
            *(undefined8 *)
             ((param_2->CollisionQueryParams).IgnoreSourceObjects.AllocatorInstance.InlineData + 8)
                 = local_e8.IgnoreSourceObjects.AllocatorInstance.InlineData._8_8_;
          }
          FVar5 = (param_2->CollisionQueryParams).IgnoreSourceObjects.AllocatorInstance.
                  SecondaryData;
          if (FVar5 != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)FVar5);
          }
          (param_2->CollisionQueryParams).IgnoreSourceObjects.AllocatorInstance.SecondaryData =
               local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData;
          (param_2->CollisionQueryParams).IgnoreSourceObjects.ArrayNum =
               local_e8.IgnoreSourceObjects.ArrayNum;
          (param_2->CollisionQueryParams).IgnoreSourceObjects.ArrayMax =
               local_e8.IgnoreSourceObjects.ArrayMax;
          local_e8.IgnoreSourceObjects.ArrayMax = 4;
          local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData =
               (ForElementType<unsigned_int>)0x0;
          local_e8.IgnoreSourceObjects.ArrayNum = 0;
        }
        if (local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
        }
        if (local_e8.IgnoreComponents.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_e8.IgnoreComponents.AllocatorInstance.SecondaryData);
        }
        param_2->CollisionObjectQueryParams =
             (FCollisionObjectQueryParams)
             (CONCAT44(local_100.TextData.Reference._4_4_,
                       1 << (*(byte *)(*(longlong *)((longlong)this + 0x18) + 0x24a) & 0x1f)) &
             0xffffff00ffffffff);
        return Success;
      }
      pwVar11 = L"Filter Actor input data count must be 1 or match the Origins input data count.";
      pwVar10 = L"InvalidFilterActorInputCount";
    }
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_100,L"PCGWorldRaycastElement",pwVar10,pwVar11);
    PCGLog::LogErrorOnGraph(pFVar9,(FPCGContext *)param_1);
    if ((longlong *)CONCAT44(local_100.TextData.Reference._4_4_,local_100.TextData.Reference._0_4_)
        != (longlong *)0x0) {
      (**(code **)(*(longlong *)
                    CONCAT44(local_100.TextData.Reference._4_4_,local_100.TextData.Reference._0_4_)
                  + 0x10))();
    }
  }
  return NoOperation;
}

// operator() @ 149c57270

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

EPCGTimeSliceInitResult __thiscall
`FPCGWorldRaycastElement::PrepareDataInternal'::__l2::<lambda_2>::operator()
          (void *this,FIterationState *param_1,FExecutionState *param_2,int param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  FPCGContext *pFVar13;
  FScriptContainerElement *pFVar14;
  code *pcVar15;
  undefined1 auVar16 [16];
  uint uVar17;
  undefined8 uVar18;
  UPCGData *pUVar19;
  bool bVar20;
  EPCGTimeSliceInitResult EVar21;
  int iVar22;
  FPCGDataPtrWrapper *pFVar23;
  UClass *pUVar24;
  FText *pFVar25;
  FTextFormat *pFVar26;
  FPCGDataPtrWrapper *this_00;
  ForAnyElementType FVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  FScriptContainerElement *pFVar31;
  UPCGData *pUVar32;
  uint uVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 local_res20 [8];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_148;
  UPCGData *local_138;
  FPCGDataPtrWrapper local_128;
  FPCGDataPtrWrapper local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  undefined1 local_d8 [16];
  double local_c8;
  undefined1 local_b8 [48];
  int local_88;
  FTextFormat local_78 [4];
  
  plVar10 = *(longlong **)((longlong)this + 0x10);
  uVar33 = 0;
  if (param_3 < (int)plVar10[1]) {
    uVar33 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar33 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar15 = (code *)swi(3);
    EVar21 = (*pcVar15)();
    return EVar21;
  }
  plVar11 = *(longlong **)((longlong)this + 0x20);
  iVar22 = (int)plVar11[1];
  local_138 = *(UPCGData **)((longlong)param_3 * 0x78 + *plVar10);
  if (iVar22 == 0) {
    pFVar23 = FPCGDataPtrWrapper::FPCGDataPtrWrapper(&local_118,(UPCGData *)0x0);
    this_00 = &local_118;
  }
  else {
    uVar28 = param_3 % iVar22;
    uVar33 = 0;
    if ((int)uVar28 < iVar22) {
      uVar33 = ~uVar28 >> 0x1f;
    }
    if ((uVar33 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar15 = (code *)swi(3);
      EVar21 = (*pcVar15)();
      return EVar21;
    }
    pFVar23 = FPCGDataPtrWrapper::FPCGDataPtrWrapper
                        (&local_128,(FPCGDataPtrWrapper *)((longlong)(int)uVar28 * 0x78 + *plVar11))
    ;
    this_00 = &local_128;
  }
  pUVar32 = (pFVar23->Data).field0_0x0.DebugPtr;
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper(this_00);
  pUVar19 = local_138;
  if (local_138 == (UPCGData *)0x0) {
LAB_149c57ac5:
    PCGLog::InputOutput::LogTypedDataNotFoundWarning
              (PointOrParam,PCGWorldRaycastElement::Constants::Labels::OriginsInput,
               *(FPCGContext **)this);
    return NoOperation;
  }
  pUVar24 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
  lVar12 = pUVar19->_padding_;
  iVar22 = (int)pUVar24->_padding_;
  if ((*(int *)(lVar12 + 0x38) < iVar22) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar22 * 8) !=
      &pUVar24->_padding_)) {
    pUVar24 = Z_Construct_UClass_UPCGParamData_NoRegister();
    lVar12 = pUVar19->_padding_;
    iVar22 = (int)pUVar24->_padding_;
    if ((*(int *)(lVar12 + 0x38) < iVar22) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar22 * 8) !=
        &pUVar24->_padding_)) goto LAB_149c57ac5;
  }
  if (pUVar32 != (UPCGData *)0x0) {
    pUVar24 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
    iVar22 = (int)pUVar24->_padding_;
    if (((*(int *)(pUVar32->_padding_ + 0x38) < iVar22) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(pUVar32->_padding_ + 0x30) + (longlong)iVar22 * 8) !=
         &pUVar24->_padding_)) &&
       (bVar20 = UObjectBaseUtility::IsA<UPCGParamData>((UObjectBaseUtility *)pUVar32), !bVar20)) {
      PCGLog::InputOutput::LogTypedDataNotFoundWarning
                (PointOrParam,PCGWorldRayHitConstants::FilterActorPinLabel,*(FPCGContext **)this);
      return NoOperation;
    }
  }
  bVar20 = FPCGWorldCommonQueryParams::ExtractLoadedActorFiltersIfNeeded
                     ((FPCGWorldCommonQueryParams *)(*(longlong *)((longlong)this + 8) + 0x248),
                      pUVar32,&param_1->CachedFilterActors,*(FPCGContext **)this);
  if (!bVar20) {
    return NoOperation;
  }
  bVar20 = PCGAttributeAccessorHelpers::
           ExtractAllValues<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
                     (local_138,
                      (FPCGAttributePropertyInputSelector *)
                      (*(longlong *)((longlong)this + 8) + 0x118),&param_1->CachedRayOrigins,
                      *(FPCGContext **)this,AllowBroadcastAndConstructible,false);
  pUVar32 = local_138;
  if (!bVar20) {
    return NoOperation;
  }
  if ((param_1->CachedRayOrigins).ArrayNum == 0) {
    return NoOperation;
  }
  lVar12 = *(longlong *)((longlong)this + 8);
  if (*(char *)(lVar12 + 0x110) == '\x03') {
    plVar10 = *(longlong **)((longlong)this + 0x18);
    uVar33 = 0;
    if (param_3 < (int)plVar10[1]) {
      uVar33 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar33 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar15 = (code *)swi(3);
      EVar21 = (*pcVar15)();
      return EVar21;
    }
    pUVar32 = *(UPCGData **)((longlong)param_3 * 0x78 + *plVar10);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar32 == (UPCGData *)0x0) goto LAB_149c57608;
    }
    else {
      if (pUVar32 == (UPCGData *)0x0) {
LAB_149c57608:
        pFVar13 = *(FPCGContext **)this;
        pFVar25 = FText::AsLocalizable_Advanced_LocText
                            (&local_f8,L"PCGWorldRaycastElement",L"NoDataFoundOnEndPointsInput",
                             L"No valid data found on End Points input {0}");
        pFVar26 = FTextFormat::FTextFormat(local_78,pFVar25,Default);
        pFVar25 = FText::Format<int>(&local_108,pFVar26,param_3);
        PCGLog::LogErrorOnGraph(pFVar25,pFVar13);
        if (local_108.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
        }
        if (local_f8.TextData.Reference == (ITextData *)0x0) {
          return NoOperation;
        }
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
        return NoOperation;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar32);
    }
    uVar33 = 0;
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.ArrayNum = 0;
    local_148.ArrayMax = 0;
    bVar20 = PCGAttributeAccessorHelpers::
             ExtractAllValues<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
                       (pUVar32,(FPCGAttributePropertyInputSelector *)
                                (*(longlong *)((longlong)this + 8) + 0x1b8),&local_148,
                        *(FPCGContext **)this,AllowBroadcastAndConstructible,false);
    FVar27.Data = local_148.AllocatorInstance.Data;
    if (!bVar20) goto LAB_149c575c8;
    uVar28 = (param_1->CachedRayOrigins).ArrayNum;
    if (((uVar28 != 1) && (local_148.ArrayNum != 1)) && (local_148.ArrayNum != uVar28)) {
      pFVar13 = *(FPCGContext **)this;
      pFVar25 = FText::AsLocalizable_Advanced_LocText
                          (&local_e8,L"PCGWorldRaycastElement",L"InvalidEndPointCount",
                           L"The End Points input count must be 1 or directly match the Origins input count."
                          );
      PCGLog::LogErrorOnGraph(pFVar25,pFVar13);
      FVar27.Data = local_148.AllocatorInstance.Data;
      if (local_e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
        FVar27.Data = local_148.AllocatorInstance.Data;
      }
      goto LAB_149c575c8;
    }
    (param_1->CachedRayVectors).ArrayNum = 0;
    pTVar3 = &param_1->CachedRayVectors;
    piVar1 = &(param_1->CachedRayVectors).ArrayMax;
    uVar17 = local_148.ArrayNum;
    if (local_148.ArrayNum < (int)uVar28) {
      uVar17 = uVar28;
    }
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&pTVar3->AllocatorInstance,0,piVar1);
    }
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    uVar28 = local_148.ArrayNum;
    if (*piVar1 < (int)uVar17) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar17,&pTVar3->AllocatorInstance,(param_1->CachedRayVectors).ArrayNum,
                 piVar1);
      uVar28 = local_148.ArrayNum;
    }
    if (0 < (int)uVar17) {
      while( true ) {
        iVar22 = (param_1->CachedRayOrigins).ArrayNum;
        uVar29 = (ulonglong)uVar33;
        if (iVar22 == 1) {
          uVar29 = 0;
        }
        if (iVar22 <= (int)uVar29) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar20) {
            pcVar15 = (code *)swi(3);
            EVar21 = (*pcVar15)();
            return EVar21;
          }
          uVar28 = local_148.ArrayNum;
        }
        pFVar31 = (param_1->CachedRayOrigins).AllocatorInstance.Data;
        uVar30 = (ulonglong)uVar33;
        if (uVar28 == 1) {
          uVar30 = 0;
        }
        if (((int)uVar28 <= (int)uVar30) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar15 = (code *)swi(3);
          EVar21 = (*pcVar15)();
          return EVar21;
        }
        dVar4 = *(double *)(local_148.AllocatorInstance.Data + uVar30 * 0x18);
        local_c8 = *(double *)(local_148.AllocatorInstance.Data + uVar30 * 0x18 + 0x10) -
                   *(double *)(pFVar31 + uVar29 * 0x18 + 0x10);
        iVar22 = (param_1->CachedRayVectors).ArrayNum;
        dVar5 = *(double *)(pFVar31 + uVar29 * 0x18);
        uVar35 = SUB84(*(double *)(local_148.AllocatorInstance.Data + uVar30 * 0x18 + 8) -
                       *(double *)(pFVar31 + uVar29 * 0x18 + 8),0);
        uVar36 = (undefined4)
                 ((ulonglong)
                  (*(double *)(local_148.AllocatorInstance.Data + uVar30 * 0x18 + 8) -
                  *(double *)(pFVar31 + uVar29 * 0x18 + 8)) >> 0x20);
        if (iVar22 == (param_1->CachedRayVectors).ArrayMax) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&pTVar3->AllocatorInstance,&(param_1->CachedRayVectors).ArrayMax
                             );
        }
        (param_1->CachedRayVectors).ArrayNum = iVar22 + 1;
        uVar33 = uVar33 + 1;
        local_d8._8_4_ = uVar35;
        local_d8._0_8_ = dVar4 - dVar5;
        local_d8._12_4_ = uVar36;
        pFVar31 = (pTVar3->AllocatorInstance).Data;
        auVar16._8_4_ = uVar35;
        auVar16._0_8_ = dVar4 - dVar5;
        auVar16._12_4_ = uVar36;
        *(undefined1 (*) [16])(pFVar31 + (longlong)iVar22 * 0x18) = auVar16;
        *(double *)(pFVar31 + (longlong)iVar22 * 0x18 + 0x10) = local_c8;
        if ((int)uVar17 <= (int)uVar33) break;
        uVar28 = local_148.ArrayNum;
      }
    }
    pUVar32 = local_138;
    if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.AllocatorInstance.Data);
      pUVar32 = local_138;
    }
  }
  else {
    pTVar3 = &param_1->CachedRayVectors;
    if (*(char *)(lVar12 + 0x158) == '\0') {
      piVar1 = &(param_1->CachedRayVectors).ArrayMax;
      (param_1->CachedRayVectors).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&pTVar3->AllocatorInstance,0,piVar1);
      }
      iVar22 = (param_1->CachedRayVectors).ArrayNum;
      lVar12 = *(longlong *)((longlong)this + 8);
      if (iVar22 == *piVar1) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar3->AllocatorInstance,piVar1);
      }
      (param_1->CachedRayVectors).ArrayNum = iVar22 + 1;
      uVar18 = *(undefined8 *)(lVar12 + 0x168);
      pFVar14 = (pTVar3->AllocatorInstance).Data;
      pFVar31 = pFVar14 + (longlong)iVar22 * 0x18;
      *(undefined8 *)pFVar31 = *(undefined8 *)(lVar12 + 0x160);
      *(undefined8 *)(pFVar31 + 8) = uVar18;
      *(undefined8 *)(pFVar14 + (longlong)iVar22 * 0x18 + 0x10) = *(undefined8 *)(lVar12 + 0x170);
      pUVar32 = local_138;
    }
    else {
      bVar20 = PCGAttributeAccessorHelpers::
               ExtractAllValues<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
                         (local_138,(FPCGAttributePropertyInputSelector *)(lVar12 + 0x178),pTVar3,
                          *(FPCGContext **)this,AllowBroadcastAndConstructible,false);
      if (!bVar20) {
        return NoOperation;
      }
    }
  }
  dVar5 = __real_3e45798ee0000000;
  dVar4 = __real_3ff0000000000000;
  cVar9 = *(char *)(*(longlong *)((longlong)this + 8) + 0x110);
  if ((cVar9 != '\0') && (cVar9 != '\x02')) {
    return Success;
  }
  pFVar14 = (param_1->CachedRayVectors).AllocatorInstance.Data;
  iVar22 = (param_1->CachedRayVectors).ArrayNum;
  pFVar31 = pFVar14 + 0x10;
  while( true ) {
    if ((param_1->CachedRayVectors).ArrayNum != iVar22) {
      `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    pFVar2 = pFVar31 + -0x10;
    if (pFVar2 == pFVar14 + (longlong)iVar22 * 0x18) break;
    dVar6 = *(double *)(pFVar31 + -8);
    dVar7 = *(double *)pFVar2;
    dVar8 = *(double *)pFVar31;
    dVar34 = dVar7 * dVar7 + dVar6 * dVar6 + dVar8 * dVar8;
    if (dVar5 < dVar34) {
      dVar34 = dVar4 / SQRT(dVar34);
      *(double *)pFVar2 = dVar34 * dVar7;
      *(double *)(pFVar31 + -8) = dVar34 * dVar6;
      *(double *)pFVar31 = dVar34 * dVar8;
    }
    pFVar31 = pFVar31 + 0x18;
  }
  lVar12 = *(longlong *)((longlong)this + 8);
  if (*(char *)(lVar12 + 0x110) == '\0') {
    return Success;
  }
  if (*(char *)(lVar12 + 0x1f8) == '\0') {
    piVar1 = &(param_1->CachedRayLengths).ArrayMax;
    (param_1->CachedRayLengths).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(param_1->CachedRayLengths).AllocatorInstance,0,piVar1);
    }
    iVar22 = (param_1->CachedRayLengths).ArrayNum;
    lVar12 = *(longlong *)((longlong)this + 8);
    if (iVar22 == *piVar1) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(param_1->CachedRayLengths).AllocatorInstance,piVar1);
    }
    (param_1->CachedRayLengths).ArrayNum = iVar22 + 1;
    *(undefined8 *)((param_1->CachedRayLengths).AllocatorInstance.Data + (longlong)iVar22 * 8) =
         *(undefined8 *)(lVar12 + 0x200);
    return Success;
  }
  FPCGAttributePropertyInputSelector::CopyAndFixLast
            ((FPCGAttributePropertyInputSelector *)(lVar12 + 0x208),
             (FPCGAttributePropertyInputSelector *)local_b8,pUVar32);
  bVar20 = PCGAttributeAccessorHelpers::ExtractAllValues<double,TSizedDefaultAllocator<32>_>
                     (pUVar32,(FPCGAttributePropertyInputSelector *)local_b8,
                      &param_1->CachedRayLengths,*(FPCGContext **)this,
                      AllowBroadcastAndConstructible,false);
  if (bVar20) {
    DestructItems<FString,int>((FString *)local_b8._40_8_,local_88);
    if ((FScriptContainerElement *)local_b8._40_8_ == (FScriptContainerElement *)0x0) {
      return Success;
    }
    FMemory::Free((void *)local_b8._40_8_);
    return Success;
  }
  DestructItems<FString,int>((FString *)local_b8._40_8_,local_88);
  FVar27.Data = (FScriptContainerElement *)local_b8._40_8_;
LAB_149c575c8:
  if (FVar27.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar27.Data);
  }
  return NoOperation;
}

// CanExecuteOnlyOnMainThread @ 149c5d6f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGWorldRaycastElement::CanExecuteOnlyOnMainThread
          (FPCGWorldRaycastElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149c74d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGWorldRaycastElement::ExecuteInternal(FPCGWorldRaycastElement *this,FPCGContext *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  FText *pFVar9;
  bool bVar10;
  undefined1 local_res10 [8];
  longlong local_res18 [2];
  FText local_28;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId395,"FPCGWorldRaycastElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGWorldRaycast.cpp"
               ,0x18b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId395);
  }
  bVar4 = TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
          ::DataIsPreparedForExecution
                    ((TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
                      *)param_1);
  if (bVar4) {
    if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
       (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar4)) {
      if ((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
          (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                             ,0x8d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      plVar7 = (longlong *)
               (**(code **)((longlong)*(param_1->ExecutionSource).InterfaceInstance + 0x18))();
      lVar8 = (**(code **)(*plVar7 + 0x20))(plVar7);
      if (lVar8 != 0) {
        *(int *)&param_1[1]._padding_ = (int)param_1[1]._padding_ + 1;
        local_res18[0] = lVar8;
        bVar4 = TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
                ::DataIsPreparedForExecution
                          ((TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
                            *)param_1);
        if (((bVar4) ||
            (local_res10[0] = bVar4,
            bVar4 = `TPCGTimeSlicedElementBase<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
                    ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res10), bVar4)) &&
           (*(int *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x30 != 0)) {
          do {
            uVar2 = *(uint *)((longlong)&param_1[1]._padding_ + 4);
            uVar6 = 0;
            if ((int)uVar2 < *(int *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x30)
            {
              uVar6 = ~uVar2 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            bVar4 = `FPCGWorldRaycastElement::ExecuteInternal'::__l2::<lambda_1>::operator()
                              (local_res18,
                               (TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
                                *)param_1,(FExecutionState *)&param_1[1].InputData.DataCrcs,
                               (FIterationState *)
                               ((longlong)(int)uVar2 * 0x80 +
                               *(longlong *)
                                &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x28),
                               uVar2);
            if (!bVar4) {
              bVar4 = false;
              goto LAB_149c74f70;
            }
            piVar1 = (int *)((longlong)&param_1[1]._padding_ + 4);
            *piVar1 = *piVar1 + 1;
          } while ((*(int *)((longlong)&param_1[1]._padding_ + 4) <
                    *(int *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x30) &&
                  (bVar4 = FPCGAsyncState::ShouldStop(&param_1->AsyncState), !bVar4));
          bVar4 = *(int *)((longlong)&param_1[1]._padding_ + 4) ==
                  *(int *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x30;
          goto LAB_149c74f70;
        }
        goto LAB_149c74f6d;
      }
    }
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"PCGWorldRaycastElement",L"NoWorldFound",
                        L"Execution source does not belong to a world.");
    PCGLog::LogErrorOnGraph(pFVar9,param_1);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
LAB_149c74f6d:
  bVar4 = true;
LAB_149c74f70:
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// IsCacheable @ 149c806c0

bool __thiscall
FPCGWorldRaycastElement::IsCacheable(FPCGWorldRaycastElement *this,UPCGSettings *param_1)

{
  return false;
}

// PrepareDataInternal @ 149c84370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGWorldRaycastElement::PrepareDataInternal(FPCGWorldRaycastElement *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EPCGTimeSliceInitResult EVar4;
  UPCGWorldRaycastElementSettings *pUVar5;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_98;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_88;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_78;
  code *local_68;
  FPCGContext **local_60;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_58;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_50;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_48;
  UPCGWorldRaycastElementSettings *local_40;
  FPCGContext *local_38;
  UPCGWorldRaycastElementSettings *local_30;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_28;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_20;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_18;
  
  pUVar5 = FPCGContext::GetInputSettings<UPCGWorldRaycastElementSettings>(param_1);
  if (pUVar5 == (UPCGWorldRaycastElementSettings *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Settings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGWorldRaycast.cpp"
                       ,0xdf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_98,&PCGWorldRaycastElement::Constants::Labels::OriginsInput)
  ;
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_78,
             &PCGWorldRaycastElement::Constants::Labels::EndPointsInput);
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_88,&PCGWorldRayHitConstants::FilterActorPinLabel);
  local_58 = &local_98;
  local_50 = &local_78;
  local_48 = &local_88;
  EVar4 = *(EPCGTimeSliceInitResult *)
           ((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1);
  local_40 = pUVar5;
  if (EVar4 == Uninitialized) {
    EVar4 = `FPCGWorldRaycastElement::PrepareDataInternal'::__l2::<lambda_1>::operator()
                      (&local_58,
                       (TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
                        *)param_1,(FExecutionState *)&param_1[1].InputData.DataCrcs);
    *(EPCGTimeSliceInitResult *)
     ((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1) = EVar4;
  }
  if (EVar4 == Success) {
    local_28 = &local_98;
    local_20 = &local_78;
    local_18 = &local_88;
    local_60 = &local_38;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGWorldRaycastElement::PrepareDataInternal'::__l2::<lambda_2>,enum_EPCGTimeSliceInitResult,FPCGWorldRaycast::FIterationState_&,FPCGWorldRaycast::FExecutionState_const_&,unsigned_int>
               ::Call;
    local_38 = param_1;
    local_30 = pUVar5;
    TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
    ::InitializePerIterationStates
              ((TPCGTimeSlicedContext<FPCGWorldRaycast::FExecutionState,FPCGWorldRaycast::FIterationState,FPCGContext>
                *)param_1,local_98.ArrayNum,
               (TFunctionRef<EPCGTimeSliceInitResult___cdecl(FPCGWorldRaycast::FIterationState_&,FPCGWorldRaycast::FExecutionState_const_&,unsigned_int)>
                *)&local_68);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((FPCGTaggedData *)local_88.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FPCGTaggedData *)local_78.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if ((FPCGTaggedData *)local_98.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  return true;
}

// SupportsBasePointDataInputs @ 149c92970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGWorldRaycastElement::SupportsBasePointDataInputs
          (FPCGWorldRaycastElement *this,FPCGContext *param_1)

{
  return true;
}

