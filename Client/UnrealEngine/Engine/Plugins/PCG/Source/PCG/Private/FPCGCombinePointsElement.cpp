// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149b0da40

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
FPCGCombinePointsElement::ExecuteInternal(FPCGCombinePointsElement *this,FPCGContext *param_1)

{
  FPCGDataCollection *pFVar1;
  VectorRegister4Double *pVVar2;
  __m128d *p_Var3;
  TVector<double>_u_0 *pTVar4;
  double *pdVar5;
  double *pdVar6;
  float fVar7;
  undefined1 auVar8 [16];
  UPCGNode *this_00;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  FObjectPtr_u_0 FVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  UClass *pUVar17;
  UPCGSettings *pUVar18;
  TObjectPtr<UPCGSettings>_u_0 TVar19;
  FText *pFVar20;
  FString *pFVar21;
  int *piVar22;
  float *pfVar23;
  TTransform<double> *pTVar24;
  TVector<double> *pTVar25;
  TVector4<double> *pTVar26;
  long64 *plVar27;
  TMatrix<double> *this_01;
  FPCGTaggedData *pFVar28;
  UPCGBasePointData *this_02;
  TBox<double> *pTVar29;
  longlong lVar30;
  <lambda_1> <Var31;
  uint uVar32;
  wchar_t *pwVar33;
  uint uVar34;
  FPCGTaggedData *pFVar35;
  FPCGPoint *this_03;
  FPCGContext *this_04;
  uint uVar36;
  TVector<double>_u_0 *pTVar37;
  bool bVar38;
  double dVar39;
  undefined1 auVar40 [16];
  double dVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  double dVar44;
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined1 auStack_9f8 [32];
  FPCGTaggedData *local_9d8;
  FPCGTaggedData *local_9d0;
  longlong local_9c8;
  longlong local_9c0;
  undefined8 local_9b8;
  <lambda_1> local_9a8;
  TObjectPtr<UPCGSettings>_u_0 local_9a0;
  uint local_998;
  longlong local_990;
  undefined8 local_988;
  undefined8 uStack_980;
  double local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  double dStack_960;
  undefined8 local_958;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_950;
  TObjectPtr<UPCGSettings>_u_0 local_940;
  FObjectPtr_u_0 local_938;
  FPCGContext *local_930;
  UPCGBasePointData *local_928;
  double local_918;
  double dStack_910;
  TTransform<double> local_908;
  undefined8 local_8a8;
  TVector<double>_u_0 local_8a0;
  TVector<double>_u_0 local_888;
  undefined8 local_870;
  double local_868;
  double dStack_860;
  double local_858;
  double dStack_850;
  float local_848;
  int local_844;
  long64 local_840;
  FString local_838;
  FString local_828;
  FText local_818;
  FString local_808;
  FString local_7f8;
  FText local_7e8;
  TVector<double>_u_0 local_7d8;
  TVector<double>_u_0 local_7c0;
  FPCGInitializeFromDataParams local_7a8;
  double local_768;
  double dStack_760;
  undefined1 local_758 [16];
  TVector<double>_u_0 local_748;
  double local_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined1 local_718;
  undefined1 local_708 [16];
  double local_6f8;
  double dStack_6f0;
  undefined1 local_6e8 [16];
  double local_6d8;
  double dStack_6d0;
  undefined1 local_6c8 [16];
  double local_6b8;
  double dStack_6b0;
  double local_6a8;
  double dStack_6a0;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  FPCGPoint local_688;
  FConstPCGPointValueRanges local_5b8;
  FPCGPointValueRanges local_428;
  TBox<double> local_298;
  TMatrix<double> local_258;
  TMatrix<double> local_1d8;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_9f8;
  local_998 = 0;
  bVar38 = CpuChannel->Enabled < 0;
  local_930 = param_1;
  if (bVar38) {
    local_9a8 = (<lambda_1>)0x0;
  }
  else {
    local_9a8 = (<lambda_1>)0x1;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId21,"FPCGCombinePointsElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCombinePoints.cpp"
               ,0x15);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId21);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCombinePoints.cpp"
                          ,0x16,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar17 = UPCGCombinePointsSettings::StaticClass();
    bVar14 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar17);
    if (bVar14) {
      local_9a0 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar19 = local_9a0;
    }
    else {
      local_9a0.DebugPtr = (UPCGSettings *)0x0;
      TVar19.DebugPtr = local_9a0.DebugPtr;
    }
    goto LAB_149b0dba1;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar18 = UPCGNode::GetSettings(this_00), pUVar18 == (UPCGSettings *)0x0)) {
    pFVar28 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCombinePointsSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,local_9a8);
    if (pFVar28 != (FPCGTaggedData *)0x0) {
      local_940.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar28->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_940.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b0db9a;
        UE::GC::MarkAsReachable((UObject *)local_940.DebugPtr);
      }
      if (local_940.DebugPtr != (UPCGSettings *)0x0) {
        pUVar17 = UPCGCombinePointsSettings::StaticClass();
        bVar14 = FObjectPtr::IsA(&local_940.ObjectPtr,pUVar17);
        TVar19 = local_940;
        local_9a0 = local_940;
        if (bVar14) goto LAB_149b0dba1;
      }
    }
  }
  else {
    pUVar18 = UPCGNode::GetSettings(this_00);
    TVar19.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar18);
    if (TVar19.DebugPtr != (UPCGSettings *)0x0) {
      local_9a0.DebugPtr = TVar19.DebugPtr;
      pUVar17 = UPCGCombinePointsSettings::StaticClass();
      iVar16 = (int)pUVar17->_padding_;
      if ((iVar16 <= *(int *)((TVar19.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((TVar19.DebugPtr)->_padding_ + 0x30) + (longlong)iVar16 * 8) ==
          &pUVar17->_padding_)) goto LAB_149b0dba1;
    }
  }
LAB_149b0db9a:
  local_9a0.DebugPtr = (UPCGSettings *)0x0;
  TVar19.DebugPtr = local_9a0.DebugPtr;
LAB_149b0dba1:
  if ((TVar19.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCombinePoints.cpp"
                          ,0x19,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_950,&PCGPinConstants::DefaultInputLabel);
  local_998 = 0;
  <Var31 = (<lambda_1>)!bVar38;
  if (0 < local_950.ArrayNum) {
    pFVar1 = &param_1->OutputData;
    local_990 = 0;
    this_04 = param_1;
    dVar48 = ___xmm_3ff00000000000003ff0000000000000;
    dVar51 = _UNK_150689688;
    do {
      lVar30 = local_990;
      uVar36 = local_998;
      uVar32 = ~local_998;
      uVar34 = 0;
      if ((int)local_998 < local_950.ArrayNum) {
        uVar34 = uVar32 >> 0x1f;
      }
      if (uVar34 == 0) {
        local_9d8 = (FPCGTaggedData *)(longlong)(int)local_998;
        local_9d0 = (FPCGTaggedData *)(longlong)local_950.ArrayNum;
        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar38) {
          pcVar9 = (code *)swi(3);
          uVar15 = (*pcVar9)();
          return (bool)uVar15;
        }
      }
      local_938 = (FObjectPtr_u_0)
                  ((FObjectPtr_u_0 *)(local_950.AllocatorInstance.Data + lVar30))->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b0dce8:
        if ((UPCGBasePointData *)local_938.Handle == (UPCGBasePointData *)0x0) goto LAB_149b0ea12;
        pUVar17 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
        bVar38 = FObjectPtr::IsA((FObjectPtr *)&local_938,pUVar17);
        FVar13 = local_938;
        if ((!bVar38) ||
           (lVar30 = local_990, (UPCGBasePointData *)local_938.Handle == (UPCGBasePointData *)0x0))
        goto LAB_149b0ea12;
        iVar16 = (**(code **)(*(longlong *)local_938.Handle + 0x488))(local_938.Handle);
        if (iVar16 == 0) {
          lVar30 = local_990;
          if (2 < (byte)LogPCG._0_1_) {
            pFVar20 = FText::AsLocalizable_Advanced_LocText
                                (&local_818,L"PCGCombinePointsElement",L"NoPointsFound",
                                 L"No points were found in the input data, skipped.");
            pFVar21 = FText::ToString(pFVar20);
            if ((pFVar21->Data).ArrayNum == 0) {
              pwVar33 = L"";
            }
            else {
              pwVar33 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
            }
            FPCGContext::GetTaskName(this_04,&local_828);
            FPCGContext::GetExecutionSourceName(this_04,&local_838);
            local_9d8 = (FPCGTaggedData *)pwVar33;
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_838.Data.AllocatorInstance.Data);
            }
            if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_828.Data.AllocatorInstance.Data);
            }
            lVar30 = local_990;
            if (local_818.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_818.TextData.Reference + 0x10))();
              lVar30 = local_990;
            }
          }
        }
        else {
          FConstPCGPointValueRanges::FConstPCGPointValueRanges
                    (&local_5b8,(UPCGBasePointData *)FVar13.Handle);
          piVar22 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                              (&local_5b8.SeedRange,0);
          iVar16 = *piVar22;
          pfVar23 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_5b8.DensityRange,0);
          fVar7 = *pfVar23;
          pTVar24 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                    ::GetElement(&local_5b8.TransformRange,0);
          FPCGPoint::FPCGPoint(&local_688,pTVar24,fVar7,iVar16);
          pTVar25 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_5b8.BoundsMinRange,0);
          local_688.BoundsMin.field0_0x0._s_0.X = (pTVar25->field0_0x0)._s_0.X;
          local_688.BoundsMin.field0_0x0._s_0.Y = (pTVar25->field0_0x0)._s_0.Y;
          local_688.BoundsMin.field0_0x0._s_0.Z = (pTVar25->field0_0x0)._s_0.Z;
          pTVar25 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_5b8.BoundsMaxRange,0);
          local_688.BoundsMax.field0_0x0._s_0.X = (pTVar25->field0_0x0)._s_0.X;
          local_688.BoundsMax.field0_0x0._s_0.Y = (pTVar25->field0_0x0)._s_0.Y;
          local_688.BoundsMax.field0_0x0._s_0.Z = (pTVar25->field0_0x0)._s_0.Z;
          pfVar23 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_5b8.SteepnessRange,0);
          local_688.Steepness = *pfVar23;
          pTVar26 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                    ::GetElement(&local_5b8.ColorRange,0);
          local_688.Color.field0_0x0._s_0.X = (pTVar26->field0_0x0)._s_0.X;
          local_688.Color.field0_0x0._s_0.Y = (pTVar26->field0_0x0)._s_0.Y;
          local_688.Color.field0_0x0._s_0.Z = (pTVar26->field0_0x0)._s_0.Z;
          local_688.Color.field0_0x0._s_0.W = (pTVar26->field0_0x0)._s_0.W;
          plVar27 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                              (&local_5b8.MetadataEntryRange,0);
          local_688.MetadataEntry = *plVar27;
          PCGPointHelpers::ApplyScaleToBounds
                    (&local_688.Transform,&local_688.BoundsMin,&local_688.BoundsMax);
          this_03 = &local_688;
          if (*(char *)((longlong)&local_9a0.DebugPtr[1]._padding_ + 1) == '\0') {
            this_03 = (FPCGPoint *)&local_9a0.DebugPtr[1]._padding_;
          }
          this_01 = UE::Math::TTransform<double>::ToMatrixWithScale(&this_03->Transform,&local_158);
          UE::Math::TMatrix<double>::Inverse(this_01,&local_258);
          uVar34 = 0;
          if ((int)uVar36 < local_950.ArrayNum) {
            uVar34 = uVar32 >> 0x1f;
          }
          if (uVar34 == 0) {
            local_9d8 = (FPCGTaggedData *)(longlong)(int)uVar36;
            local_9d0 = (FPCGTaggedData *)(longlong)local_950.ArrayNum;
            bVar38 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar38) {
              pcVar9 = (code *)swi(3);
              uVar15 = (*pcVar9)();
              return (bool)uVar15;
            }
          }
          pFVar28 = (FPCGTaggedData *)(pFVar1->TaggedData).AllocatorInstance.Data;
          pFVar35 = (FPCGTaggedData *)
                    (local_950.AllocatorInstance.Data + (longlong)(int)uVar36 * 0x78);
          if ((pFVar28 <= pFVar35) &&
             (lVar30 = (longlong)(param_1->OutputData).TaggedData.ArrayMax,
             pFVar35 < pFVar28 + lVar30)) {
            local_9c0 = (longlong)(param_1->OutputData).TaggedData.ArrayNum;
            local_9b8 = 0x78;
            local_9d8 = pFVar35;
            local_9d0 = pFVar28;
            local_9c8 = lVar30;
            bVar38 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar38) {
              pcVar9 = (code *)swi(3);
              uVar15 = (*pcVar9)();
              return (bool)uVar15;
            }
          }
          iVar16 = (param_1->OutputData).TaggedData.ArrayNum;
          piVar22 = &(param_1->OutputData).TaggedData.ArrayMax;
          if (iVar16 == *piVar22) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x878,(ForAnyElementType *)pFVar1,piVar22);
          }
          (param_1->OutputData).TaggedData.ArrayNum = iVar16 + 1;
          pFVar28 = FPCGTaggedData::FPCGTaggedData
                              ((FPCGTaggedData *)
                               ((pFVar1->TaggedData).AllocatorInstance.Data +
                               (longlong)iVar16 * 0x78),pFVar35);
          this_02 = FPCGContext::NewPointData_AnyThread(local_930);
          local_928 = this_02;
          FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                    (&local_7a8,(UPCGSpatialData *)FVar13.Handle);
          local_7a8.bInheritSpatialData = false;
          UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)this_02,&local_7a8);
          (**(code **)(this_02->_padding_ + 0x490))(this_02,1);
          (**(code **)(this_02->_padding_ + 0x498))(this_02,0xff);
          FPCGDataPtrWrapper::operator=(&pFVar28->Data,(UPCGData *)this_02);
          uVar72 = 0;
          uVar73 = 0;
          uVar74 = 0;
          uVar75 = 0;
          local_908.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_908.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          uVar34 = 0;
          local_870 = 0;
          local_958 = 0;
          local_908.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_908.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_8a8 = 0x3f800000;
          local_848 = 0.5;
          local_840 = -1;
          local_908.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_908.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_908.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_908.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_908.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_908.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_908.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_908.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_908.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_908.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_978 = 0.0;
          uStack_970 = 0.0;
          local_988 = 0;
          uStack_980 = 0;
          local_968 = 0.0;
          dStack_960 = 0.0;
          local_868 = dVar48;
          dStack_860 = dVar51;
          local_858 = dVar48;
          dStack_850 = dVar51;
          iVar16 = (**(code **)(*(longlong *)FVar13.Handle + 0x488))(FVar13.Handle);
          if (0 < iVar16) {
            local_918 = 0.0;
            uVar42 = 0;
            uVar43 = 0;
            do {
              uVar32 = ~uVar34 >> 0x1f;
              uVar36 = 0;
              if ((int)uVar34 < local_5b8.BoundsMaxRange.NumElements) {
                uVar36 = uVar32;
              }
              if (uVar36 == 0) {
                local_9d8 = (FPCGTaggedData *)(longlong)(int)uVar34;
                local_9d0 = (FPCGTaggedData *)(longlong)local_5b8.BoundsMaxRange.NumElements;
                bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar38) {
                  pcVar9 = (code *)swi(3);
                  uVar15 = (*pcVar9)();
                  return (bool)uVar15;
                }
              }
              pTVar37 = (TVector<double>_u_0 *)
                        ((longlong)
                         &(local_5b8.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0 +
                        (longlong)((int)uVar34 % local_5b8.BoundsMaxRange.ElementView.NumElements) *
                        (longlong)local_5b8.BoundsMaxRange.ElementView.BytesBetweenElements);
              uVar36 = 0;
              if ((int)uVar34 < local_5b8.BoundsMinRange.NumElements) {
                uVar36 = uVar32;
              }
              if (uVar36 == 0) {
                local_9d8 = (FPCGTaggedData *)(longlong)(int)uVar34;
                local_9d0 = (FPCGTaggedData *)(longlong)local_5b8.BoundsMinRange.NumElements;
                bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar38) {
                  pcVar9 = (code *)swi(3);
                  uVar15 = (*pcVar9)();
                  return (bool)uVar15;
                }
              }
              local_718 = 1;
              lVar30 = (longlong)((int)uVar34 % local_5b8.BoundsMinRange.ElementView.NumElements) *
                       (longlong)local_5b8.BoundsMinRange.ElementView.BytesBetweenElements;
              pTVar4 = (TVector<double>_u_0 *)
                       ((longlong)
                        &(local_5b8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0 + lVar30
                       );
              local_748._s_0.X = (pTVar4->_s_0).X;
              local_748._s_0.Y = (double)*(undefined8 *)((longlong)pTVar4 + 8);
              local_748._s_0.Z =
                   *(double *)
                    ((longlong)&(local_5b8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0 +
                    lVar30 + 0x10);
              local_720 = *(undefined8 *)((longlong)pTVar37 + 0x10);
              uVar36 = 0;
              if ((int)uVar34 < local_5b8.TransformRange.NumElements) {
                uVar36 = uVar32;
              }
              local_730 = (pTVar37->_s_0).X;
              uStack_728 = *(undefined8 *)((longlong)pTVar37 + 8);
              if (uVar36 == 0) {
                local_9d8 = (FPCGTaggedData *)(longlong)(int)uVar34;
                local_9d0 = (FPCGTaggedData *)(longlong)local_5b8.TransformRange.NumElements;
                bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar38) {
                  pcVar9 = (code *)swi(3);
                  uVar15 = (*pcVar9)();
                  return (bool)uVar15;
                }
              }
              lVar30 = (longlong)((int)uVar34 % local_5b8.TransformRange.ElementView.NumElements) *
                       (longlong)local_5b8.TransformRange.ElementView.BytesBetweenElements;
              local_758 = *(undefined1 (*) [16])
                           ((longlong)
                            ((local_5b8.TransformRange.ElementView.FirstElementPtr)->Rotation).ZW.
                            m128d_f64 + lVar30);
              pdVar5 = (double *)
                       ((longlong)
                        ((local_5b8.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.
                        m128d_f64 + lVar30);
              dVar41 = *pdVar5;
              dVar12 = pdVar5[1];
              pdVar5 = (double *)
                       ((longlong)
                        ((local_5b8.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.
                        m128d_f64 + lVar30);
              local_768 = *pdVar5;
              dStack_760 = pdVar5[1];
              auVar8 = *(undefined1 (*) [16])
                        ((longlong)
                         ((local_5b8.TransformRange.ElementView.FirstElementPtr)->Scale3D).XY.
                         m128d_f64 + lVar30);
              dVar11 = dVar12 + dVar12;
              dVar46 = dVar41 * (dVar41 + dVar41);
              dVar48 = local_758._0_8_;
              dVar44 = dVar48 + dVar48;
              auVar45 = blendpd(auVar8,*(undefined1 (*) [16])
                                        ((longlong)
                                         ((local_5b8.TransformRange.ElementView.FirstElementPtr)->
                                         Scale3D).ZW.m128d_f64 + lVar30),2);
              pdVar5 = (double *)
                       ((longlong)
                        ((local_5b8.TransformRange.ElementView.FirstElementPtr)->Scale3D).XY.
                        m128d_f64 + lVar30);
              dVar10 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] -
                       (dVar48 * dVar44 + dVar46)) * pdVar5[1];
              dVar51 = local_758._8_8_;
              auVar40._8_4_ = local_758._8_4_;
              auVar40._0_8_ = dVar51;
              auVar40._12_4_ = local_758._12_4_;
              dVar39 = dVar51 * dVar44;
              dVar41 = auVar40._8_8_ * (dVar41 + dVar41);
              auVar49._8_4_ = SUB84(dVar41,0);
              auVar49._0_8_ = dVar39;
              auVar49._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
              pdVar6 = (double *)
                       ((longlong)
                        ((local_5b8.TransformRange.ElementView.FirstElementPtr)->Scale3D).XY.
                        m128d_f64 + lVar30);
              dVar47 = (dVar39 + dVar11 * local_768) * *pdVar6;
              dVar50 = (auVar49._8_8_ + dVar44 * dStack_760) * pdVar6[1];
              dVar41 = *(double *)
                        ((longlong)
                         ((local_5b8.TransformRange.ElementView.FirstElementPtr)->Scale3D).ZW.
                         m128d_f64 + lVar30) * (dVar44 * dStack_760 - dVar41);
              local_6f8 = auVar45._0_8_ * (local_768 * dVar44 - dVar11 * dVar51);
              auVar45._8_4_ = SUB84(dVar50,0);
              auVar45._0_8_ = dVar47;
              auVar45._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
              local_6b8 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] -
                          (dVar46 + dVar12 * dVar11)) *
                          *(double *)
                           ((longlong)
                            ((local_5b8.TransformRange.ElementView.FirstElementPtr)->Scale3D).ZW.
                            m128d_f64 + lVar30);
              local_6d8 = auVar45._8_8_;
              local_6e8._8_4_ = SUB84(dVar10,0);
              local_6e8._0_8_ = auVar8._8_8_ * (dVar11 * local_768 - dVar39);
              local_6e8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
              uStack_690 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
              uStack_68c = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
              local_708._8_4_ = SUB84(dVar47,0);
              local_708._0_8_ =
                   (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
                   (dVar48 * dVar44 + dVar12 * dVar11)) * *pdVar5;
              local_708._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
              dStack_6f0 = 0.0;
              dStack_6d0 = 0.0;
              dStack_6b0 = 0.0;
              local_6c8._8_4_ = SUB84(dVar41,0);
              local_6c8._0_8_ =
                   (dVar11 * dVar51 + local_768 * dVar44) *
                   *(double *)
                    ((longlong)
                     ((local_5b8.TransformRange.ElementView.FirstElementPtr)->Scale3D).ZW.m128d_f64
                    + lVar30);
              local_6c8._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
              pdVar5 = (double *)
                       ((longlong)
                        ((local_5b8.TransformRange.ElementView.FirstElementPtr)->Translation).ZW.
                        m128d_f64 + lVar30);
              local_698 = *(undefined4 *)pdVar5;
              uStack_694 = *(undefined4 *)((longlong)pdVar5 + 4);
              pdVar5 = (double *)
                       ((longlong)
                        ((local_5b8.TransformRange.ElementView.FirstElementPtr)->Translation).XY.
                        m128d_f64 + lVar30);
              local_6a8 = *pdVar5;
              dStack_6a0 = pdVar5[1];
              VectorMatrixMultiply(&local_1d8,(TMatrix<double> *)local_708,&local_258);
              pTVar29 = UE::Math::TBox<double>::TransformBy
                                  ((TBox<double> *)&local_748._s_0,&local_298,&local_1d8);
              if ((char)local_958 == '\0') {
                if (pTVar29->IsValid != '\0') {
                  local_978 = (pTVar29->Min).field0_0x0._s_0.Z;
                  uStack_970 = *(double *)&(pTVar29->Max).field0_0x0;
                  local_968 = (pTVar29->Max).field0_0x0._s_0.Y;
                  dStack_960 = (pTVar29->Max).field0_0x0._s_0.Z;
                  uVar72 = *(undefined4 *)&(pTVar29->Min).field0_0x0;
                  uVar73 = *(undefined4 *)((longlong)&(pTVar29->Min).field0_0x0 + 4);
                  local_918 = (pTVar29->Min).field0_0x0._s_0.X;
                  pdVar5 = &(pTVar29->Min).field0_0x0._s_0.Y;
                  uVar74 = *(undefined4 *)pdVar5;
                  uVar75 = *(undefined4 *)((longlong)&(pTVar29->Min).field0_0x0 + 0xc);
                  dStack_910 = *pdVar5;
                  local_958._0_1_ = pTVar29->IsValid;
                  local_958._1_1_ = pTVar29->Pad[0];
                  local_958._2_1_ = pTVar29->Pad[1];
                  local_958._3_1_ = pTVar29->Pad[2];
                  local_958._4_1_ = pTVar29->Pad[3];
                  local_958._5_1_ = pTVar29->Pad[4];
                  local_958._6_1_ = pTVar29->Pad[5];
                  local_958._7_1_ = pTVar29->Pad[6];
                  goto LAB_149b0e67f;
                }
              }
              else if (pTVar29->IsValid != '\0') {
                dVar48 = *(double *)((longlong)&(pTVar29->Min).field0_0x0 + 8);
                dVar51 = *(double *)&(pTVar29->Min).field0_0x0;
                uVar74 = SUB84(dVar48,0);
                uVar75 = (int)((ulonglong)dVar48 >> 0x20);
                if ((double)CONCAT44(uVar43,uVar42) <= dVar48) {
                  uVar74 = uVar42;
                  uVar75 = uVar43;
                }
                dVar48 = (pTVar29->Min).field0_0x0._s_0.Z;
                if (local_978 <= dVar48) {
                  dVar48 = local_978;
                }
                if (local_918 <= dVar51) {
                  dVar51 = local_918;
                }
                dVar44 = *(double *)&(pTVar29->Max).field0_0x0;
                uVar42 = SUB84(dVar44,0);
                uVar43 = (undefined4)((ulonglong)dVar44 >> 0x20);
                if (dVar44 <= uStack_970) {
                  uVar42 = SUB84(uStack_970,0);
                  uVar43 = (undefined4)((ulonglong)uStack_970 >> 0x20);
                }
                dVar44 = (pTVar29->Max).field0_0x0._s_0.Y;
                uVar72 = SUB84(dVar51,0);
                uVar73 = (undefined4)((ulonglong)dVar51 >> 0x20);
                if (dVar44 <= local_968) {
                  dVar44 = local_968;
                }
                dStack_910 = 0.0;
                uStack_970 = (double)CONCAT44(uVar43,uVar42);
                dVar46 = *(double *)((longlong)&(pTVar29->Max).field0_0x0 + 0x10);
                uVar42 = SUB84(dVar46,0);
                uVar43 = (undefined4)((ulonglong)dVar46 >> 0x20);
                if (dVar46 <= dStack_960) {
                  uVar42 = SUB84(dStack_960,0);
                  uVar43 = (undefined4)((ulonglong)dStack_960 >> 0x20);
                }
                dStack_960 = (double)CONCAT44(uVar43,uVar42);
                local_978 = dVar48;
                local_968 = dVar44;
                local_918 = dVar51;
LAB_149b0e67f:
                local_988 = CONCAT44(uVar73,uVar72);
                uStack_980 = CONCAT44(uVar75,uVar74);
                uVar42 = uVar74;
                uVar43 = uVar75;
              }
              uVar34 = uVar34 + 1;
              iVar16 = (**(code **)(*(longlong *)FVar13.Handle + 0x488))(FVar13.Handle);
              this_02 = local_928;
              uVar36 = local_998;
            } while ((int)uVar34 < iVar16);
          }
          pVVar2 = &(this_03->Transform).Translation;
          dVar44 = (pVVar2->XY).m128d_f64[0];
          dVar46 = (this_03->Transform).Translation.XY.m128d_f64[1];
          local_908.Translation.XY.m128d_f64 = *&(pVVar2->XY).m128d_f64;
          dVar48 = (this_03->Transform).Translation.ZW.m128d_f64[0];
          dVar51 = (this_03->Transform).Translation.ZW.m128d_f64[1];
          uVar42 = *(undefined4 *)(this_03->Transform).Rotation.XY.m128d_f64;
          uVar43 = *(undefined4 *)((longlong)(this_03->Transform).Rotation.XY.m128d_f64 + 4);
          local_908.Rotation.XY.m128d_f64[0] = (this_03->Transform).Rotation.XY.m128d_f64[0];
          pdVar5 = (this_03->Transform).Rotation.XY.m128d_f64 + 1;
          uVar52 = *(undefined4 *)pdVar5;
          uVar53 = *(undefined4 *)((longlong)(this_03->Transform).Rotation.XY.m128d_f64 + 0xc);
          local_908.Rotation.XY.m128d_f64[1] = *pdVar5;
          p_Var3 = &(this_03->Transform).Rotation.ZW;
          uVar54 = *(undefined4 *)p_Var3->m128d_f64;
          uVar55 = *(undefined4 *)((longlong)(this_03->Transform).Rotation.ZW.m128d_f64 + 4);
          local_908.Rotation.ZW.m128d_f64[0] = p_Var3->m128d_f64[0];
          pdVar5 = (this_03->Transform).Rotation.ZW.m128d_f64 + 1;
          uVar56 = *(undefined4 *)pdVar5;
          uVar57 = *(undefined4 *)((longlong)(this_03->Transform).Rotation.ZW.m128d_f64 + 0xc);
          local_908.Rotation.ZW.m128d_f64[1] = *pdVar5;
          pVVar2 = &(this_03->Transform).Scale3D;
          uVar58 = *(undefined4 *)(pVVar2->XY).m128d_f64;
          uVar59 = *(undefined4 *)((longlong)(this_03->Transform).Scale3D.XY.m128d_f64 + 4);
          uVar60 = *(undefined4 *)((this_03->Transform).Scale3D.XY.m128d_f64 + 1);
          uVar61 = *(undefined4 *)((longlong)(this_03->Transform).Scale3D.XY.m128d_f64 + 0xc);
          local_908.Scale3D.XY.m128d_f64 = *&(pVVar2->XY).m128d_f64;
          p_Var3 = &(this_03->Transform).Scale3D.ZW;
          uVar62 = *(undefined4 *)p_Var3->m128d_f64;
          uVar63 = *(undefined4 *)((longlong)(this_03->Transform).Scale3D.ZW.m128d_f64 + 4);
          local_908.Scale3D.ZW.m128d_f64[0] = p_Var3->m128d_f64[0];
          pdVar5 = (this_03->Transform).Scale3D.ZW.m128d_f64 + 1;
          uVar64 = *(undefined4 *)pdVar5;
          uVar65 = *(undefined4 *)((longlong)(this_03->Transform).Scale3D.ZW.m128d_f64 + 0xc);
          local_908.Scale3D.ZW.m128d_f64[1] = *pdVar5;
          uVar68 = (undefined4)uStack_970;
          uVar69 = uStack_970._4_4_;
          uVar70 = (undefined4)local_968;
          uVar71 = local_968._4_4_;
          uVar66 = SUB84(local_978,0);
          uVar67 = (undefined4)((ulonglong)local_978 >> 0x20);
          uVar76 = SUB84(dStack_960,0);
          uVar77 = (undefined4)((ulonglong)dStack_960 >> 0x20);
          local_888._0_4_ = (undefined4)uStack_970;
          local_888._4_4_ = uStack_970._4_4_;
          local_888._8_4_ = (undefined4)local_968;
          local_888._12_4_ = local_968._4_4_;
          local_8a0._s_0.Z = local_978;
          local_888._s_0.Z = dStack_960;
          local_908.Translation.ZW.m128d_f64[0] = dVar48;
          local_908.Translation.ZW.m128d_f64[1] = dVar51;
          local_8a0._0_4_ = uVar72;
          local_8a0._4_4_ = uVar73;
          local_8a0._8_4_ = uVar74;
          local_8a0._12_4_ = uVar75;
          local_7d8._s_0.X = dVar44;
          local_7d8._s_0.Y = dVar46;
          local_7d8._s_0.Z = dVar48;
          local_844 = PCGHelpers::ComputeSeedFromPosition((TVector<double> *)&local_7d8._s_0);
          if ((char)local_9a0.DebugPtr[1]._padding_ != '\0') {
            local_7c0._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
            local_7c0._s_0.Y = _UNK_150689678;
            local_7c0._s_0.Z = __real_3fe0000000000000;
            PCGPointHelpers::ResetPointCenter
                      ((TVector<double> *)&local_7c0._s_0,&local_908,
                       (TVector<double> *)&local_8a0._s_0,(TVector<double> *)&local_888._s_0);
            uVar76 = SUB84(local_888._s_0.Z,0);
            uVar77 = (undefined4)((ulonglong)local_888._16_8_ >> 0x20);
            uVar66 = SUB84(local_8a0._s_0.Z,0);
            uVar67 = (undefined4)((ulonglong)local_8a0._16_8_ >> 0x20);
            uVar42 = local_908.Rotation.XY.m128d_f64[0]._0_4_;
            uVar43 = local_908.Rotation.XY.m128d_f64[0]._4_4_;
            uVar52 = local_908.Rotation.XY.m128d_f64[1]._0_4_;
            uVar53 = local_908.Rotation.XY.m128d_f64[1]._4_4_;
            uVar54 = local_908.Rotation.ZW.m128d_f64[0]._0_4_;
            uVar55 = local_908.Rotation.ZW.m128d_f64[0]._4_4_;
            uVar56 = local_908.Rotation.ZW.m128d_f64[1]._0_4_;
            uVar57 = local_908.Rotation.ZW.m128d_f64[1]._4_4_;
            uVar58 = local_908.Scale3D.XY.m128d_f64[0]._0_4_;
            uVar59 = local_908.Scale3D.XY.m128d_f64[0]._4_4_;
            uVar60 = local_908.Scale3D.XY.m128d_f64[1]._0_4_;
            uVar61 = local_908.Scale3D.XY.m128d_f64[1]._4_4_;
            uVar62 = local_908.Scale3D.ZW.m128d_f64[0]._0_4_;
            uVar63 = local_908.Scale3D.ZW.m128d_f64[0]._4_4_;
            uVar64 = local_908.Scale3D.ZW.m128d_f64[1]._0_4_;
            uVar65 = local_908.Scale3D.ZW.m128d_f64[1]._4_4_;
            uVar68 = local_888._0_4_;
            uVar69 = local_888._4_4_;
            uVar70 = local_888._8_4_;
            uVar71 = local_888._12_4_;
            uVar72 = local_8a0._0_4_;
            uVar73 = local_8a0._4_4_;
            uVar74 = local_8a0._8_4_;
            uVar75 = local_8a0._12_4_;
            dVar48 = local_908.Translation.ZW.m128d_f64[0];
            dVar51 = local_908.Translation.ZW.m128d_f64[1];
            dVar44 = local_908.Translation.XY.m128d_f64[0];
            dVar46 = local_908.Translation.XY.m128d_f64[1];
          }
          iVar16 = local_844;
          FPCGPointValueRanges::FPCGPointValueRanges(&local_428,this_02,false);
          if (local_428.TransformRange.NumElements != 0) {
            pTVar24 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                      ::operator[](&local_428.TransformRange,0);
            *(undefined4 *)(pTVar24->Rotation).XY.m128d_f64 = uVar42;
            *(undefined4 *)((longlong)(pTVar24->Rotation).XY.m128d_f64 + 4) = uVar43;
            *(undefined4 *)((pTVar24->Rotation).XY.m128d_f64 + 1) = uVar52;
            *(undefined4 *)((longlong)(pTVar24->Rotation).XY.m128d_f64 + 0xc) = uVar53;
            *(undefined4 *)(pTVar24->Rotation).ZW.m128d_f64 = uVar54;
            *(undefined4 *)((longlong)(pTVar24->Rotation).ZW.m128d_f64 + 4) = uVar55;
            *(undefined4 *)((pTVar24->Rotation).ZW.m128d_f64 + 1) = uVar56;
            *(undefined4 *)((longlong)(pTVar24->Rotation).ZW.m128d_f64 + 0xc) = uVar57;
            (pTVar24->Translation).XY.m128d_f64[0] = dVar44;
            (pTVar24->Translation).XY.m128d_f64[1] = dVar46;
            (pTVar24->Translation).ZW.m128d_f64[0] = dVar48;
            (pTVar24->Translation).ZW.m128d_f64[1] = dVar51;
            *(undefined4 *)(pTVar24->Scale3D).XY.m128d_f64 = uVar58;
            *(undefined4 *)((longlong)(pTVar24->Scale3D).XY.m128d_f64 + 4) = uVar59;
            *(undefined4 *)((pTVar24->Scale3D).XY.m128d_f64 + 1) = uVar60;
            *(undefined4 *)((longlong)(pTVar24->Scale3D).XY.m128d_f64 + 0xc) = uVar61;
            *(undefined4 *)(pTVar24->Scale3D).ZW.m128d_f64 = uVar62;
            *(undefined4 *)((longlong)(pTVar24->Scale3D).ZW.m128d_f64 + 4) = uVar63;
            *(undefined4 *)((pTVar24->Scale3D).ZW.m128d_f64 + 1) = uVar64;
            *(undefined4 *)((longlong)(pTVar24->Scale3D).ZW.m128d_f64 + 0xc) = uVar65;
          }
          if (local_428.DensityRange.NumElements != 0) {
            pfVar23 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                                (&local_428.DensityRange,0);
            *pfVar23 = (float)local_8a8;
          }
          if (local_428.SteepnessRange.NumElements != 0) {
            pfVar23 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                                (&local_428.SteepnessRange,0);
            *pfVar23 = local_848;
          }
          if (local_428.BoundsMinRange.NumElements != 0) {
            pTVar25 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                      ::operator[](&local_428.BoundsMinRange,0);
            *(undefined4 *)&pTVar25->field0_0x0 = uVar72;
            *(undefined4 *)((longlong)&pTVar25->field0_0x0 + 4) = uVar73;
            *(undefined4 *)((longlong)&pTVar25->field0_0x0 + 8) = uVar74;
            *(undefined4 *)((longlong)&pTVar25->field0_0x0 + 0xc) = uVar75;
            (pTVar25->field0_0x0)._s_0.Z = (double)CONCAT44(uVar67,uVar66);
          }
          if (local_428.BoundsMaxRange.NumElements != 0) {
            pTVar25 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                      ::operator[](&local_428.BoundsMaxRange,0);
            *(undefined4 *)&pTVar25->field0_0x0 = uVar68;
            *(undefined4 *)((longlong)&pTVar25->field0_0x0 + 4) = uVar69;
            *(undefined4 *)((longlong)&pTVar25->field0_0x0 + 8) = uVar70;
            *(undefined4 *)((longlong)&pTVar25->field0_0x0 + 0xc) = uVar71;
            (pTVar25->field0_0x0)._s_0.Z = (double)CONCAT44(uVar77,uVar76);
          }
          if (local_428.ColorRange.NumElements != 0) {
            pTVar26 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                      ::operator[](&local_428.ColorRange,0);
            (pTVar26->field0_0x0)._s_0.X = local_868;
            (pTVar26->field0_0x0)._s_0.Y = dStack_860;
            (pTVar26->field0_0x0)._s_0.Z = local_858;
            (pTVar26->field0_0x0)._s_0.W = dStack_850;
          }
          if (local_428.SeedRange.NumElements != 0) {
            piVar22 = TPCGValueRange<int,TStridedView<int,int>_>::operator[](&local_428.SeedRange,0)
            ;
            *piVar22 = iVar16;
          }
          if (local_428.MetadataEntryRange.NumElements != 0) {
            plVar27 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                                (&local_428.MetadataEntryRange,0);
            *plVar27 = local_840;
          }
          DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                    ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                     local_7a8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.
                     Data,local_7a8.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
          if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
              local_7a8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
              (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
            FMemory::Free(local_7a8.MetadataInitializeParams.DomainInitializeParams.
                          AllocatorInstance.Data);
          }
          lVar30 = local_990;
          this_04 = local_930;
          dVar48 = ___xmm_3ff00000000000003ff0000000000000;
          dVar51 = _UNK_150689688;
          if (local_7a8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7a8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
            lVar30 = local_990;
            this_04 = local_930;
            dVar48 = ___xmm_3ff00000000000003ff0000000000000;
            dVar51 = _UNK_150689688;
          }
        }
      }
      else {
        if ((UPCGBasePointData *)local_938.Handle != (UPCGBasePointData *)0x0) {
          UE::GC::MarkAsReachable(local_938.Handle);
          goto LAB_149b0dce8;
        }
LAB_149b0ea12:
        if (2 < (byte)LogPCG._0_1_) {
          pFVar20 = FText::AsLocalizable_Advanced_LocText
                              (&local_7e8,L"PCGCombinePointsElement",L"InvalidInputPointData",
                               L"The input is not point data, skipped.");
          pFVar21 = FText::ToString(pFVar20);
          if ((pFVar21->Data).ArrayNum == 0) {
            pwVar33 = L"";
          }
          else {
            pwVar33 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
          }
          FPCGContext::GetTaskName(this_04,&local_7f8);
          FPCGContext::GetExecutionSourceName(this_04,&local_808);
          local_9d8 = (FPCGTaggedData *)pwVar33;
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_808.Data.AllocatorInstance.Data);
          }
          if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
          }
          if (local_7e8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_7e8.TextData.Reference + 0x10))();
          }
        }
      }
      local_998 = uVar36 + 1;
      local_990 = lVar30 + 0x78;
      <Var31 = local_9a8;
    } while ((int)local_998 < local_950.ArrayNum);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_950.AllocatorInstance.Data,local_950.ArrayNum);
  if ((FPCGTaggedData *)local_950.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_950.AllocatorInstance.Data);
  }
  if (<Var31 != (<lambda_1>)0x0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149b11b80

EPCGElementExecutionLoopMode __thiscall
FPCGCombinePointsElement::ExecutionLoopMode(FPCGCombinePointsElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149b2d1e0

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
FPCGCombinePointsElement::SupportsBasePointDataInputs
          (FPCGCombinePointsElement *this,FPCGContext *param_1)

{
  return true;
}

