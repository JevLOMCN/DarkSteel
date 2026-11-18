// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 1

// ExecuteInternal @ 14cef08d0

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
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

bool __thiscall
FPCGSplineToMeshElement::ExecuteInternal(FPCGSplineToMeshElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  undefined8 *puVar2;
  code *pcVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  FObjectPtr_u_0 FVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  UClass *pUVar13;
  UPCGSettings *pUVar14;
  TObjectPtr<UPCGSettings>_u_0 TVar15;
  FDynamicMesh3 *this_01;
  FDynamicMesh3 *pFVar16;
  UPCGDynamicMeshData *this_02;
  FPCGTaggedData *pFVar17;
  FText *pFVar18;
  ulonglong uVar19;
  FObjectPtr_u_0 *pFVar20;
  ForAnyElementType FVar21;
  undefined1 auStack_288 [32];
  char local_268;
  <lambda_1> local_267;
  undefined1 local_266 [2];
  uint local_264;
  TObjectPtr<UPCGSettings>_u_0 local_260;
  FObjectPtr_u_0 local_258;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_250;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_240;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_230;
  FScriptContainerElement *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  TArrayView<UE::Math::TVector<double>_const_,int> local_208;
  FText local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  longlong lStack_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  double local_1b0;
  double dStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  FTriangulateCurvesOp local_198;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_288;
  if (CpuChannel->Enabled < 0) {
    local_268 = '\0';
  }
  else {
    local_268 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId46,"FPCGSplineToMeshElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGSplineToMesh.cpp"
               ,0x2e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId46);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGSplineToMesh.cpp"
                          ,0x30,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    uVar11 = (*pcVar3)();
    return (bool)uVar11;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar14 = UPCGNode::GetSettings(this_00), pUVar14 == (UPCGSettings *)0x0)) {
      pFVar17 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSplineToMeshSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_267);
      if (pFVar17 != (FPCGTaggedData *)0x0) {
        local_260.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar17->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_260.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_260.DebugPtr);
        }
        if (local_260.DebugPtr != (UPCGSettings *)0x0) {
          pUVar13 = UPCGSplineToMeshSettings::StaticClass();
          bVar10 = FObjectPtr::IsA(&local_260.ObjectPtr,pUVar13);
          TVar15 = local_260;
          if (bVar10) goto LAB_14cef0a99;
        }
      }
    }
    else {
      pUVar14 = UPCGNode::GetSettings(this_00);
      TVar15.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar14);
      if (TVar15.DebugPtr != (UPCGSettings *)0x0) {
        pUVar13 = UPCGSplineToMeshSettings::StaticClass();
        iVar12 = (int)pUVar13->_padding_;
        if ((iVar12 <= *(int *)((TVar15.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar15.DebugPtr)->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
            &pUVar13->_padding_)) goto LAB_14cef0a99;
      }
    }
    TVar15.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar13 = UPCGSplineToMeshSettings::StaticClass();
    bVar10 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar13);
    TVar15.DebugPtr = (UPCGSettings *)0x0;
    if (bVar10) {
      TVar15.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
  }
LAB_14cef0a99:
  if ((TVar15.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGSplineToMesh.cpp"
                          ,0x33,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    uVar11 = (*pcVar3)();
    return (bool)uVar11;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_240,&PCGPinConstants::DefaultInputLabel);
  lVar6 = _UNK_15061cbc8;
  lVar5 = ___xmm_3ff00000000000000000000000000000;
  dVar4 = __real_3ff0000000000000;
  uVar19 = (ulonglong)local_240.ArrayNum;
  local_264 = local_240.ArrayNum;
  pFVar20 = (FObjectPtr_u_0 *)(local_240.AllocatorInstance.Data + uVar19 * 0x78);
  FVar21.Data = local_240.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_240.ArrayNum != (uint)uVar19) {
        local_266[0] = 0;
        `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_266);
      }
      if ((FObjectPtr_u_0 *)FVar21.Data == pFVar20) {
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_240.AllocatorInstance.Data,local_240.ArrayNum);
        cVar7 = local_268;
        if ((FPCGTaggedData *)local_240.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_240.AllocatorInstance.Data);
        }
        if (cVar7 != '\0') {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return true;
      }
      local_258 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar21.Data;
      if (UE::GC::GIsIncrementalReachabilityPending == false) break;
      if (local_258.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_258.Handle);
        break;
      }
LAB_14cef0fbd:
      PCGLog::InputOutput::LogTypedDataNotFoundWarning
                (Spline,PCGPinConstants::DefaultInputLabel,param_1);
LAB_14cef0fd1:
      uVar19 = (ulonglong)local_264;
      FVar21.Data = FVar21.Data + 0x78;
    }
    if (local_258.Handle == (UObject *)0x0) goto LAB_14cef0fbd;
    pUVar13 = Z_Construct_UClass_UPCGSplineData_NoRegister();
    bVar10 = FObjectPtr::IsA((FObjectPtr *)&local_258,pUVar13);
    FVar8 = local_258;
    if ((!bVar10) || (local_258.Handle == (UObject *)0x0)) goto LAB_14cef0fbd;
    local_198._padding_ = (longlong)&___7FDynamicMeshOperator_Geometry_UE__6B_;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = lVar5;
    local_198._padding_ = lVar6;
    local_198._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_198._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_198._padding_ =
         CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                  UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
    local_198._padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_198._padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_198._padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_._0_4_ = 0;
    this_01 = ::operator_new(0x230);
    pFVar16 = (FDynamicMesh3 *)0x0;
    if (this_01 != (FDynamicMesh3 *)0x0) {
      pFVar16 = UE::Geometry::FDynamicMesh3::FDynamicMesh3(this_01);
    }
    lVar9 = local_198._padding_;
    if ((undefined8 *)local_198._padding_ != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)local_198._padding_;
      local_198._padding_ = (longlong)pFVar16;
      (*(code *)*puVar2)(lVar9,1);
      pFVar16 = (FDynamicMesh3 *)local_198._padding_;
    }
    local_198._padding_ = (longlong)pFVar16;
    local_198.bWorldSpaceUVScale = false;
    local_198._padding_ = (longlong)&___7FTriangulateCurvesOp_Geometry_UE__6B_;
    local_198.FlattenMethod = (EFlattenCurveMethod)TVar15.DebugPtr[1]._padding_;
    local_198.OffsetOpenMethod =
         *(EOffsetOpenCurvesMethod *)((longlong)&TVar15.DebugPtr[1]._padding_ + 1);
    local_198.OffsetJoinMethod = *(EOffsetJoinMethod *)((longlong)&TVar15.DebugPtr[1]._padding_ + 2)
    ;
    local_198.OpenEndShape = *(EOpenCurveEndShapes *)((longlong)&TVar15.DebugPtr[1]._padding_ + 1);
    uStack_1a0 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0);
    uStack_19c = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20);
    dStack_1a8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_198.bFlipResult = SUB81(TVar15.DebugPtr[1]._padding_,0);
    local_198._padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_198._padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    uStack_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
    uStack_1b4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
    local_1b0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_198.CombineMethod = LeaveSeparate;
    local_198._padding_ =
         CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                  UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
    local_198._padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_198.Paths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.Paths.ArrayNum = 0;
    local_198.Paths.ArrayMax = 0;
    local_198.FirstPathTransform.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_198.FirstPathTransform.Rotation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_198.FirstPathTransform.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_198.FirstPathTransform.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_198.FirstPathTransform.Rotation.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_198.FirstPathTransform.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_198.FirstPathTransform.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_198.FirstPathTransform.Translation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_198.FirstPathTransform.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_198._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_198._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_198.FirstPathTransform.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_198.FirstPathTransform.Scale3D.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_198.FirstPathTransform.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_198.Thickness = (double)TVar15.DebugPtr[1]._padding_;
    local_198.FirstPathTransform.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_198.FirstPathTransform.Translation.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_198.FirstPathTransform.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_198.CurveOffset = (double)TVar15.DebugPtr[1]._padding_;
    local_198.FirstPathTransform.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_198.FirstPathTransform.Scale3D.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_198.FirstPathTransform.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_198.MiterLimit = (double)TVar15.DebugPtr[1]._padding_;
    local_198.UVScaleFactor = dVar4;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = lVar5;
    lStack_1d0 = lVar6;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = lVar5;
    local_198._padding_ = lVar6;
    if (local_198.CurveOffset == 0.0) {
      local_198.OffsetClosedMethod = DoNotOffset;
    }
    else {
      local_198.OffsetClosedMethod = (EOffsetClosedCurvesMethod)TVar15.DebugPtr[1]._padding_;
    }
    local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_250.ArrayNum = 0;
    local_250.ArrayMax = 0;
    FPCGSplineStruct::ConvertSplineToPolyLine
              ((FPCGSplineStruct *)&FVar8.Handle[6].field_0x20,World,
               (float)(double)TVar15.DebugPtr[1]._padding_,&local_250);
    local_267 = (<lambda_1>)(**(code **)(*(longlong *)FVar8.Handle + 0x510))(FVar8.Handle);
    iVar12 = local_250.ArrayNum;
    local_218 = local_250.AllocatorInstance.Data;
    if ((local_250.ArrayNum < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    iStack_210 = iVar12;
    local_208._12_4_ = uStack_20c;
    local_208.ArrayNum = iVar12;
    local_208.DataPtr = (TVector<double> *)local_218;
    UE::Geometry::FTriangulateCurvesOp::AddWorldCurve
              (&local_198,&local_208,(bool)local_267,
               (TTransform<double> *)&FVar8.Handle[6].field_0x20);
    UE::Geometry::FTriangulateCurvesOp::CalculateResult(&local_198,(FProgressCancel *)0x0);
    lVar9 = local_198._padding_;
    local_198._padding_ = 0;
    if (((FDynamicMesh3 *)lVar9 == (FDynamicMesh3 *)0x0) ||
       (((FRefCountVector *)(lVar9 + 0x140))->UsedCount == 0)) {
      pFVar18 = FText::AsLocalizable_Advanced_LocText
                          (&local_1f8,L"PCGSplineToMeshElement",L"TriangulationFailed",
                           L"Triangulation failed");
      PCGLog::LogErrorOnGraph(pFVar18,param_1);
      if (local_1f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
      }
      if ((FDynamicMesh3 *)lVar9 != (FDynamicMesh3 *)0x0) {
        (**(code **)*(longlong *)lVar9)(lVar9,1);
      }
    }
    else {
      this_02 = FPCGContext::NewObject_AnyThread<UPCGDynamicMeshData>(param_1);
      local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_230.ArrayNum = 0;
      local_230.ArrayMax = 0;
      UPCGDynamicMeshData::Initialize(this_02,(FDynamicMesh3 *)lVar9,&local_230);
      if (local_230.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.AllocatorInstance.Data);
      }
      iVar12 = (param_1->OutputData).TaggedData.ArrayNum;
      piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
      }
      (param_1->OutputData).TaggedData.ArrayNum = iVar12 + 1;
      pFVar17 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                           (longlong)iVar12 * 0x78),(FPCGTaggedData *)FVar21.Data);
      FPCGDataPtrWrapper::operator=(&pFVar17->Data,(UPCGData *)this_02);
    }
    if (local_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.AllocatorInstance.Data);
    }
    local_198._padding_ = (longlong)&___7FTriangulateCurvesOp_Geometry_UE__6B_;
    DestructItems<UE::Geometry::FTriangulateCurvesOp::FCurvePath,int>
              ((FCurvePath *)local_198.Paths.AllocatorInstance.Data,local_198.Paths.ArrayNum);
    if ((FCurvePath *)local_198.Paths.AllocatorInstance.Data != (FCurvePath *)0x0) {
      FMemory::Free(local_198.Paths.AllocatorInstance.Data);
    }
    local_198._padding_ = (longlong)&___7FDynamicMeshOperator_Geometry_UE__6B_;
    DestructItems<UE::Geometry::FGeometryWarning,int>
              ((FGeometryWarning *)local_198._padding_,(int)local_198._padding_);
    if ((FGeometryWarning *)local_198._padding_ != (FGeometryWarning *)0x0) {
      FMemory::Free((void *)local_198._padding_);
    }
    DestructItems<UE::Geometry::FGeometryError,int>
              ((FGeometryError *)local_198._padding_,(int)local_198._padding_);
    if ((FGeometryError *)local_198._padding_ != (FGeometryError *)0x0) {
      FMemory::Free((void *)local_198._padding_);
    }
    if ((undefined8 *)local_198._padding_ == (undefined8 *)0x0) goto LAB_14cef0fd1;
    (*(code *)**(undefined8 **)local_198._padding_)(local_198._padding_,1);
    uVar19 = (ulonglong)local_264;
    FVar21.Data = FVar21.Data + 0x78;
  } while( true );
}

