// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// operator() @ 149c509c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
`FPCGSurfaceSamplerElement::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,
          TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
          *param_1,FSurfaceSamplerExecutionState *param_2,FSurfaceSamplerIterationState *param_3,
          uint param_4)

{
  FScriptContainerElement FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UPCGBasePointData *pUVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  longlong lVar12;
  uint uVar13;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_f8;
  UPCGSpatialData *local_e8;
  FTextFormat local_e0;
  FText local_d0;
  FFormatArgumentValue local_b8;
  undefined4 local_98;
  longlong local_90;
  longlong *local_88;
  undefined4 local_80;
  FString local_78;
  FString local_68;
  FText local_58;
  FTextFormat local_48;
  
  lVar12 = (longlong)(int)param_4;
  if ((((int)param_4 < 0) || ((param_1->PerIterationStateResultArray).ArrayNum <= (int)param_4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < PerIterationStateResultArray.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGTimeSlicedElementBase.h"
                         ,0x48,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar13 = ~param_4 >> 0x1f;
  uVar7 = 0;
  if ((int)param_4 < (param_1->PerIterationStateResultArray).ArrayNum) {
    uVar7 = uVar13;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FVar1 = (param_1->PerIterationStateResultArray).AllocatorInstance.Data[lVar12];
  if (FVar1 == (FScriptContainerElement)0x2) {
    pUVar9 = FPCGContext::NewPointData_AnyThread((FPCGContext *)param_1);
    uVar7 = 0;
    if ((int)param_4 < (int)param_1->_padding_) {
      uVar7 = uVar13;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    FPCGDataPtrWrapper::operator=
              ((FPCGDataPtrWrapper *)(lVar12 * 0x78 + param_1->_padding_),(UPCGData *)pUVar9);
    bVar4 = true;
  }
  else {
    if ((FVar1 != (FScriptContainerElement)0x1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InitResult == EPCGTimeSliceInitResult::Success",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSurfaceSampler.cpp"
                           ,0x2cf,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    bVar4 = param_1->bTimeSliceIsEnabled;
    pUVar9 = param_3->OutputData;
    local_e8 = param_2->BoundingShape;
    uVar7 = 0;
    if ((int)param_4 < (param_2->GeneratingShapes).ArrayNum) {
      uVar7 = uVar13;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    bVar4 = PCGSurfaceSampler::SampleSurface
                      ((FPCGContext *)param_1,&param_3->SamplerData,
                       *(UPCGSurfaceData **)
                        ((param_2->GeneratingShapes).AllocatorInstance.Data + lVar12 * 8),local_e8,
                       pUVar9,bVar4);
    if ((bVar4) && (5 < (byte)LogPCG._0_1_)) {
      iVar2 = (param_3->SamplerData).CellCount;
      iVar8 = (**(code **)(param_3->OutputData->_padding_ + 0x488))();
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_58,L"PCGSurfaceSamplerElement",L"GenerationInfo",
                           L"Generated {0} points in {1} cells");
      pFVar11 = FTextFormat::FTextFormat(&local_48,pFVar10,Default);
      local_b8.Type = Int;
      local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(ITextData *)0x0;
      local_b8.TextValue.field0_0x0.TypedValue.Flags = 0;
      local_98 = 0;
      local_88 = (longlong *)0x0;
      local_80 = 0;
      local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.ArrayNum = 2;
      local_b8.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar8;
      local_90 = (longlong)iVar2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_f8.AllocatorInstance,2,&local_f8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_f8.AllocatorInstance.Data,&local_b8,2);
      local_e0.TextFormatData.Object = (pFVar11->TextFormatData).Object;
      local_e0.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar11->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_e0.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_e0.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_e0.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_d0,&local_e0,&local_f8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
      if ((FFormatArgumentValue *)local_f8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      if (local_88 != (longlong *)0x0) {
        (**(code **)(*local_88 + 0x10))();
      }
      if (local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar11->TextFormatData).SharedReferenceCount.ReferenceController);
      FText::ToString(&local_d0);
      FPCGContext::GetTaskName((FPCGContext *)param_1,&local_68);
      FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_78);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
      }
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
    }
  }
  return bVar4;
}

// operator() @ 149c52960

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

EPCGTimeSliceInitResult __thiscall
`FPCGSurfaceSamplerElement::PrepareDataInternal'::__l2::<lambda_1>::operator()
          (void *this,FSurfaceSamplerIterationState *param_1,FSurfaceSamplerExecutionState *param_2,
          uint param_3)

{
  int iVar1;
  longlong *plVar2;
  UPCGSpatialData *pUVar3;
  FPCGContext *pFVar4;
  longlong lVar5;
  ForAnyElementType *pFVar6;
  UPCGBasePointData *pUVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [12];
  double dVar20;
  bool bVar21;
  EPCGTimeSliceInitResult EVar22;
  char cVar23;
  int iVar24;
  UPCGPointData *pUVar25;
  UClass *pUVar26;
  TMatrix<double> *pTVar27;
  TBox<double> *pTVar28;
  double *pdVar29;
  FText *pFVar30;
  ForAnyElementType *pFVar31;
  uint uVar32;
  UPCGPointData *pUVar33;
  undefined1 *puVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar44;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar45;
  undefined1 auVar43 [16];
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar55;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar56;
  undefined1 auStackY_418 [32];
  double local_3a8;
  undefined8 uStack_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined8 uStack_380;
  undefined7 uStack_36f;
  double dStack_348;
  undefined7 uStack_337;
  FString local_330;
  FString local_320;
  FText local_310;
  FString local_300;
  FString local_2f0;
  FText local_2e0;
  void *local_2d0 [3];
  TMatrix<double> local_2b8;
  TVector<double>_u_0 local_238;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  double dStack_1d8;
  undefined8 local_1d0;
  double local_1c8;
  FWeakObjectPtr FStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  double dStack_1a0;
  double local_198;
  TBox<double> local_190;
  undefined1 local_158 [56];
  TBox<double> local_120;
  ulonglong local_e8;
  
  puVar34 = &stack0xffffffffffffffc8;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_418;
  plVar2 = *(longlong **)this;
  pUVar33 = (UPCGPointData *)0x0;
  uVar32 = 0;
  if ((int)param_3 < (int)plVar2[1]) {
    uVar32 = ~param_3 >> 0x1f;
  }
  if ((uVar32 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar8 = (code *)swi(3);
    EVar22 = (*pcVar8)();
    return EVar22;
  }
  pUVar3 = *(UPCGSpatialData **)(*plVar2 + (longlong)(int)param_3 * 8);
  if ((pUVar3 == (UPCGSpatialData *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("GeneratingShape",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSurfaceSampler.cpp"
                          ,0x24c,L""), bVar21)) {
    pcVar8 = (code *)swi(3);
    EVar22 = (*pcVar8)();
    return EVar22;
  }
  pUVar25 = (UPCGPointData *)
            FPCGContext::NewPointData_AnyThread
                      ((FPCGContext *)**(undefined8 **)((longlong)this + 0x18));
  param_1->OutputData = (UPCGBasePointData *)pUVar25;
  if (pUVar25 == (UPCGPointData *)0x0) {
LAB_149c52a5f:
    pUVar25 = pUVar33;
  }
  else {
    pUVar26 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar1 = (int)pUVar26->_padding_;
    if ((*(int *)(pUVar25->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar25->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar26->_padding_)) goto LAB_149c52a5f;
  }
  param_1->OutputPoints = pUVar25;
  UPCGSpatialData::InitializeFromData
            ((UPCGSpatialData *)param_1->OutputData,pUVar3,(UPCGMetadata *)0x0,true,true);
  local_238._s_0.X = (double)pUVar3[2]._padding_;
  local_238._s_0.Y = (double)pUVar3[2].TargetActor.WeakPtr;
  local_238._s_0.Z = (double)*(undefined8 *)&pUVar3[2].bKeepZeroDensityPoints;
  dStack_220 = *(double *)&pUVar3[2].CachedLastSelector;
  local_218 = *(double *)&pUVar3[2].CachedLastSelector.field_0x8;
  dStack_210 = *(double *)&pUVar3[2].CachedLastSelector.field_0x10;
  local_208 = *(double *)&pUVar3[2].CachedLastSelector.field_0x18;
  if (local_208._0_1_ == '\0') {
    cVar23 = (**(code **)(pUVar3->_padding_ + 0x390))(pUVar3);
    if (cVar23 == '\0') {
      local_238._s_0.X = (param_2->BoundingShapeBounds).Min.field0_0x0._s_0.X;
      local_238._s_0.Y = (param_2->BoundingShapeBounds).Min.field0_0x0._s_0.Y;
      local_238._s_0.Z = (param_2->BoundingShapeBounds).Min.field0_0x0._s_0.Z;
      dStack_220 = (param_2->BoundingShapeBounds).Max.field0_0x0._s_0.X;
      local_218 = (param_2->BoundingShapeBounds).Max.field0_0x0._s_0.Y;
      dStack_210 = (param_2->BoundingShapeBounds).Max.field0_0x0._s_0.Z;
      local_208 = *(double *)&(param_2->BoundingShapeBounds).IsValid;
      goto LAB_149c52e03;
    }
    pdVar29 = (double *)(**(code **)(pUVar3->_padding_ + 0x388))(pUVar3,local_158);
    local_238._s_0.X = *pdVar29;
    local_238._s_0.Y = (double)*(FWeakObjectPtr *)(pdVar29 + 1);
    local_238._s_0.Z = pdVar29[2];
    dStack_220 = pdVar29[3];
    local_218 = pdVar29[4];
    dStack_210 = pdVar29[5];
    local_208 = pdVar29[6];
    if ((param_2->BoundingShapeBounds).IsValid == '\0') goto LAB_149c52e03;
    pTVar28 = &local_120;
  }
  else {
    pTVar27 = UE::Math::TTransform<double>::ToMatrixWithScale
                        ((TTransform<double> *)&pUVar3[1].CachedLastSelector.field_0x20,&local_2b8);
    if (local_208._0_1_ == '\0') {
      local_200 = 0.0;
      dStack_1f8 = 0.0;
      local_1d0 = 0;
      local_1f0 = 0.0;
      uStack_1e8 = 0;
      local_1e0 = 0;
      dStack_1d8 = 0.0;
    }
    else {
      dVar17 = pTVar27->M[0][0];
      dVar18 = pTVar27->M[0][1];
      dVar35 = pTVar27->M[0][2];
      dVar14 = (dStack_220 + local_238._s_0.X) * ___xmm_3fe00000000000003fe0000000000000;
      dVar15 = (local_218 + local_238._s_0.Y) * _UNK_150689678;
      dVar11 = (dStack_220 - local_238._s_0.X) * ___xmm_3fe00000000000003fe0000000000000;
      dVar12 = (local_218 - local_238._s_0.Y) * _UNK_150689678;
      dVar55 = (dStack_210 + local_238._s_0.Z) * ___xmm_3fe00000000000003fe0000000000000;
      dVar13 = (dStack_210 - local_238._s_0.Z) * ___xmm_3fe00000000000003fe0000000000000;
      auVar48._8_4_ = SUB84(dVar55,0);
      auVar48._0_8_ = dVar55;
      auVar48._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
      dVar10 = dVar15 * pTVar27->M[1][0] + dVar17 * dVar14 + dVar55 * pTVar27->M[2][0] +
               pTVar27->M[3][0];
      dVar36 = dVar15 * pTVar27->M[1][1] + dVar18 * dVar14 + auVar48._8_8_ * pTVar27->M[2][1] +
               pTVar27->M[3][1];
      auVar49._8_4_ = SUB84(dVar13,0);
      auVar49._0_8_ = dVar13;
      auVar49._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      dVar46 = dVar13 * pTVar27->M[2][0];
      dVar47 = auVar49._8_8_ * pTVar27->M[2][1];
      dVar13 = dVar13 * pTVar27->M[2][2];
      dVar17 = dVar17 * dVar11;
      dVar18 = dVar18 * dVar11;
      dVar11 = dVar35 * dVar11;
      auVar37._8_4_ = SUB84(dVar12,0);
      auVar37._0_8_ = dVar12;
      auVar37._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      dVar45 = dVar12 * pTVar27->M[1][0];
      dVar44 = auVar37._8_8_ * pTVar27->M[1][1];
      dVar12 = dVar12 * pTVar27->M[1][2];
      dVar14 = dVar15 * pTVar27->M[1][2] + dVar35 * dVar14 + dVar55 * pTVar27->M[2][2] +
               pTVar27->M[3][2];
      auVar38._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar45,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar38._8_4_ = SUB84(dVar44,0) & _UNK_15061cc88;
      auVar38._12_4_ = (uint)((ulonglong)dVar44 >> 0x20) & _UNK_15061cc8c;
      auVar50._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar46,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar50._8_4_ = SUB84(dVar47,0) & _UNK_15061cc88;
      auVar50._12_4_ = (uint)((ulonglong)dVar47 >> 0x20) & _UNK_15061cc8c;
      dVar15 = (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
               auVar38._0_8_ + auVar50._0_8_;
      dVar17 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & _UNK_15061cc8c,
                                SUB84(dVar18,0) & _UNK_15061cc88) + auVar38._8_8_ + auVar50._8_8_;
      auVar39._8_4_ = SUB84(dVar36,0);
      auVar39._0_8_ = dVar10;
      auVar39._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      local_200 = dVar10 - dVar15;
      dStack_1f8 = auVar39._8_8_ - dVar17;
      dStack_1d8 = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                   + (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                     ) +
                   (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      local_1f0 = dVar14 - dStack_1d8;
      dVar15 = dVar15 + dVar10;
      dVar17 = dVar17 + dVar36;
      dStack_1d8 = dStack_1d8 + dVar14;
      auVar16._8_4_ = SUB84(dVar17,0);
      auVar16._0_8_ = dVar15;
      auVar16._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      local_388 = SUB84(dVar15,0);
      uStack_384 = (undefined4)((ulonglong)dVar15 >> 0x20);
      auVar19._4_8_ = dStack_1f8;
      auVar19._0_4_ = uStack_38c;
      auVar40._0_8_ = auVar19._0_8_ << 0x20;
      auVar40._8_4_ = local_388;
      auVar40._12_4_ = uStack_384;
      uStack_1e8 = auVar40._8_8_;
      uStack_380 = auVar16._8_8_;
      local_1d0 = CONCAT71(uStack_36f,1);
      local_1e0 = uStack_380;
    }
    pTVar28 = &local_190;
    puVar34 = (undefined1 *)register0x00000020;
  }
  pTVar28 = PCGHelpers::OverlapBounds
                      (pTVar28,(TBox<double> *)(puVar34 + -0x200),&param_2->BoundingShapeBounds);
  local_238._s_0.X = (pTVar28->Min).field0_0x0._s_0.X;
  local_238._s_0.Y = (pTVar28->Min).field0_0x0._s_0.Y;
  local_238._s_0.Z = (pTVar28->Min).field0_0x0._s_0.Z;
  dStack_220 = (pTVar28->Max).field0_0x0._s_0.X;
  local_218 = (pTVar28->Max).field0_0x0._s_0.Y;
  dStack_210 = (pTVar28->Max).field0_0x0._s_0.Z;
  local_208 = *(double *)&pTVar28->IsValid;
LAB_149c52e03:
  pFVar4 = (FPCGContext *)**(undefined8 **)((longlong)this + 0x18);
  lVar5 = **(longlong **)((longlong)this + 0x10);
  if ((lVar5 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSurfaceSampler.cpp"
                          ,0x1e,L""), bVar21)) {
    pcVar8 = (code *)swi(3);
    EVar22 = (*pcVar8)();
    return EVar22;
  }
  (param_1->SamplerData).Params.bUseLegacyGridCreationMethod = *(bool *)(lVar5 + 0xf4);
  (param_1->SamplerData).Params.PointsPerSquaredMeter = *(float *)(lVar5 + 200);
  dVar10 = *(double *)(lVar5 + 0xd8);
  (param_1->SamplerData).Params.PointExtents.field0_0x0._s_0.X = *(double *)(lVar5 + 0xd0);
  (param_1->SamplerData).Params.PointExtents.field0_0x0._s_0.Y = dVar10;
  (param_1->SamplerData).Params.PointExtents.field0_0x0._s_0.Z = *(double *)(lVar5 + 0xe0);
  (param_1->SamplerData).Params.Looseness = *(float *)(lVar5 + 0xe8);
  (param_1->SamplerData).Params.bApplyDensityToPoints = *(bool *)(lVar5 + 0xed);
  (param_1->SamplerData).Params.PointSteepness = *(float *)(lVar5 + 0xf0);
  bVar21 = PCGSurfaceSampler::FSurfaceSamplerData::Initialize
                     (&param_1->SamplerData,pFVar4,(TBox<double> *)&local_238._s_0,
                      (TTransform<double> *)&pUVar3[1].CachedLastSelector.field_0x20);
  if (!bVar21) {
    cVar23 = (**(code **)(pUVar3->_padding_ + 0x390))(pUVar3);
    if (cVar23 == '\0') {
      if ((byte)LogPCG._0_1_ < 3) {
        return NoOperation;
      }
      pFVar30 = FText::AsLocalizable_Advanced_LocText
                          (&local_310,L"PCGSurfaceSamplerElement",L"CouldNotObtainInputBounds",
                           L"Input data is not bounded, so bounds must be provided for sampling. Consider providing a Bounding Shape input."
                          );
      FText::ToString(pFVar30);
      if ((FPCGContext *)**(undefined8 **)((longlong)this + 0x18) != (FPCGContext *)0x0) {
        pUVar33 = (UPCGPointData *)&DAT_00000001;
        FPCGContext::GetTaskName((FPCGContext *)**(undefined8 **)((longlong)this + 0x18),&local_320)
        ;
      }
      if ((FPCGContext *)**(undefined8 **)((longlong)this + 0x18) != (FPCGContext *)0x0) {
        pUVar33 = (UPCGPointData *)(ulonglong)((uint)pUVar33 | 2);
        FPCGContext::GetExecutionSourceName
                  ((FPCGContext *)**(undefined8 **)((longlong)this + 0x18),&local_330);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pUVar33 & 2) != 0) &&
         (pUVar33 = (UPCGPointData *)(ulonglong)((uint)pUVar33 & 0xfffffffd),
         local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_330.Data.AllocatorInstance.Data);
      }
      local_2e0.TextData.Reference = local_310.TextData.Reference;
      if ((((ulonglong)pUVar33 & 1) != 0) &&
         (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_320.Data.AllocatorInstance.Data);
        local_2e0.TextData.Reference = local_310.TextData.Reference;
      }
    }
    else {
      if (local_208._0_1_ != '\0') {
        return NoOperation;
      }
      if ((byte)LogPCG._0_1_ < 6) {
        return NoOperation;
      }
      pFVar30 = FText::AsLocalizable_Advanced_LocText
                          (&local_2e0,L"PCGSurfaceSamplerElement",L"InvalidSamplingBounds",
                           L"Final sampling bounds is invalid/zero-sized.");
      FText::ToString(pFVar30);
      if ((FPCGContext *)**(undefined8 **)((longlong)this + 0x18) != (FPCGContext *)0x0) {
        pUVar33 = (UPCGPointData *)&DAT_00000004;
        FPCGContext::GetTaskName((FPCGContext *)**(undefined8 **)((longlong)this + 0x18),&local_2f0)
        ;
      }
      if ((FPCGContext *)**(undefined8 **)((longlong)this + 0x18) != (FPCGContext *)0x0) {
        pUVar33 = (UPCGPointData *)(ulonglong)((uint)pUVar33 | 8);
        FPCGContext::GetExecutionSourceName
                  ((FPCGContext *)**(undefined8 **)((longlong)this + 0x18),&local_300);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pUVar33 & 8) != 0) &&
         (pUVar33 = (UPCGPointData *)(ulonglong)((uint)pUVar33 & 0xfffffff7),
         local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_300.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)pUVar33 & 4) != 0) &&
         (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
      }
    }
    if (local_2e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2e0.TextData.Reference + 0x10))();
    }
    return NoOperation;
  }
  local_1c8 = local_238._s_0.X;
  FStack_1c0 = (FWeakObjectPtr)local_238._s_0.Y;
  local_1b8._8_8_ = dStack_220;
  local_1b8._0_8_ = local_238._s_0.Z;
  local_1a8 = local_218;
  dStack_1a0 = dStack_210;
  local_198 = local_208;
  if ((param_1->SamplerData).bNeedsLocalTransformation != false) {
    dVar36 = 0.0;
    dVar10 = 0.0;
    if (local_208._0_1_ == '\0') {
      local_1c8 = 0.0;
      FStack_1c0.ObjectIndex = 0;
      FStack_1c0.ObjectSerialNumber = 0;
      dStack_348 = 0.0;
      dStack_1a0 = 0.0;
      local_3a8 = 0.0;
    }
    else {
      dVar35 = (param_1->SamplerData).PreProjectionTransform.M[0][0];
      dVar45 = (param_1->SamplerData).PreProjectionTransform.M[0][1];
      dVar44 = (param_1->SamplerData).PreProjectionTransform.M[0][2];
      dVar14 = (param_1->SamplerData).PreProjectionTransform.M[1][0];
      dVar15 = (param_1->SamplerData).PreProjectionTransform.M[1][1];
      dVar46 = (param_1->SamplerData).PreProjectionTransform.M[1][2];
      dVar47 = (param_1->SamplerData).PreProjectionTransform.M[2][0];
      dVar55 = (param_1->SamplerData).PreProjectionTransform.M[2][1];
      dVar20 = (param_1->SamplerData).PreProjectionTransform.M[2][2];
      dVar10 = (dStack_220 + local_238._s_0.X) * ___xmm_3fe00000000000003fe0000000000000;
      dVar12 = (local_218 + local_238._s_0.Y) * _UNK_150689678;
      dVar36 = (dStack_220 - local_238._s_0.X) * ___xmm_3fe00000000000003fe0000000000000;
      dVar18 = (local_218 - local_238._s_0.Y) * _UNK_150689678;
      dVar56 = (dStack_210 + local_238._s_0.Z) * ___xmm_3fe00000000000003fe0000000000000;
      dVar17 = (dStack_210 - local_238._s_0.Z) * ___xmm_3fe00000000000003fe0000000000000;
      auVar41._8_4_ = SUB84(dVar12,0);
      auVar41._0_8_ = dVar12;
      auVar41._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      auVar51._8_4_ = SUB84(dVar56,0);
      auVar51._0_8_ = dVar56;
      auVar51._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
      auVar42._8_4_ = SUB84(dVar36,0);
      auVar42._0_8_ = dVar36;
      auVar42._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      dVar11 = dVar18 * dVar14;
      dVar13 = dVar18 * dVar15;
      dVar14 = dVar10 * dVar35 + dVar12 * dVar14 + dVar56 * dVar47 +
               (param_1->SamplerData).PreProjectionTransform.M[3][0];
      dVar15 = dVar10 * dVar45 + auVar41._8_8_ * dVar15 + auVar51._8_8_ * dVar55 +
               (param_1->SamplerData).PreProjectionTransform.M[3][1];
      dVar18 = dVar18 * dVar46;
      auVar52._8_4_ = SUB84(dVar17,0);
      auVar52._0_8_ = dVar17;
      auVar52._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      dVar12 = dVar10 * dVar44 + dVar12 * dVar46 + dVar56 * dVar20 +
               (param_1->SamplerData).PreProjectionTransform.M[3][2];
      dVar35 = dVar36 * dVar35;
      dVar45 = auVar42._8_8_ * dVar45;
      dVar36 = dVar36 * dVar44;
      auVar43._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar35,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar43._8_4_ = SUB84(dVar45,0) & _UNK_15061cc88;
      auVar43._12_4_ = (uint)((ulonglong)dVar45 >> 0x20) & _UNK_15061cc8c;
      dVar47 = dVar17 * dVar47;
      dVar55 = auVar52._8_8_ * dVar55;
      dVar17 = dVar17 * dVar20;
      auVar53._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar47,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar53._8_4_ = SUB84(dVar55,0) & _UNK_15061cc88;
      auVar53._12_4_ = (uint)((ulonglong)dVar55 >> 0x20) & _UNK_15061cc8c;
      dVar10 = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
               auVar43._0_8_ + auVar53._0_8_;
      dVar11 = (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & _UNK_15061cc8c,
                                SUB84(dVar13,0) & _UNK_15061cc88) + auVar43._8_8_ + auVar53._8_8_;
      auVar54._8_4_ = SUB84(dVar15,0);
      auVar54._0_8_ = dVar14;
      auVar54._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      dStack_1a0 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                   + (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar36,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                     ) +
                   (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      local_1c8 = dVar14 - dVar10;
      FStack_1c0 = (FWeakObjectPtr)(auVar54._8_8_ - dVar11);
      dVar36 = dVar12 - dStack_1a0;
      dVar10 = dVar10 + dVar14;
      dVar11 = dVar11 + dVar15;
      dStack_1a0 = dStack_1a0 + dVar12;
      auVar9._8_4_ = SUB84(dVar11,0);
      auVar9._0_8_ = dVar10;
      auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      dStack_348 = auVar9._8_8_;
      local_3a8 = (double)CONCAT71(uStack_337,1);
    }
    local_1b8._8_4_ = SUB84(dVar10,0);
    local_1b8._0_8_ = dVar36;
    local_1b8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    local_1a8 = dStack_348;
    local_198 = local_3a8;
  }
  pFVar6 = *(ForAnyElementType **)((longlong)this + 0x20);
  pFVar31 = (ForAnyElementType *)
            (**(code **)(pUVar3->_padding_ + 0x448))
                      (pUVar3,local_2d0,**(undefined8 **)((longlong)this + 0x18),&local_1c8);
  if ((pFVar6 == pFVar31) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x986,L""), bVar21)) {
    pcVar8 = (code *)swi(3);
    EVar22 = (*pcVar8)();
    return EVar22;
  }
  iVar1 = *(int *)&pFVar31[1].Data;
  if (iVar1 != 0) {
    iVar24 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,iVar1,pFVar6,(int *)(pFVar6 + 1),(int *)((longlong)&pFVar6[1].Data + 4))
    ;
    memmove(pFVar6->Data + (longlong)iVar24 * 8,pFVar31->Data,(longlong)iVar1 << 3);
    *(undefined4 *)&pFVar31[1].Data = 0;
  }
  if (local_2d0[0] != (void *)0x0) {
    FMemory::Free(local_2d0[0]);
  }
  plVar2 = *(longlong **)((longlong)this + 8);
  pUVar7 = param_1->OutputData;
  uVar32 = 0;
  if ((int)param_3 < (int)plVar2[1]) {
    uVar32 = ~param_3 >> 0x1f;
  }
  if ((uVar32 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar8 = (code *)swi(3);
    EVar22 = (*pcVar8)();
    return EVar22;
  }
  FPCGDataPtrWrapper::operator=
            ((FPCGDataPtrWrapper *)((longlong)(int)param_3 * 0x78 + *plVar2),(UPCGData *)pUVar7);
  return Success;
}

// ExecuteInternal @ 149c6f080

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
FPCGSurfaceSamplerElement::ExecuteInternal(FPCGSurfaceSamplerElement *this,FPCGContext *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  FObjectPtr_u_0 *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  FPCGTaggedData *this_00;
  UPCGBasePointData *this_01;
  UClass *pUVar10;
  FObjectPtr_u_0 FVar11;
  ForAnyElementType FVar12;
  FObjectPtr_u_0 *pFVar13;
  bool bVar14;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_68 [2];
  FObjectPtr_u_0 local_60;
  TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
  *local_58;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_50;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId673,"FPCGSurfaceSamplerElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSurfaceSampler.cpp"
               ,0x2a1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId673);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TimeSlicedContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSurfaceSampler.cpp"
                         ,0x2a3,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if (param_1->bIsPaused == false) {
    bVar6 = TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
            ::DataIsPreparedForExecution
                      ((TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
                        *)param_1);
    if (bVar6) {
      if (*(char *)((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1) == '\x02'
         ) {
        FPCGDataCollection::GetInputsByPin
                  (&param_1->InputData,&local_50,&PCGSurfaceSamplerConstants::SurfaceLabel);
        iVar2 = local_50.ArrayNum;
        pFVar13 = (FObjectPtr_u_0 *)
                  (local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 0x78);
        FVar12.Data = local_50.AllocatorInstance.Data;
        while( true ) {
          if (local_50.ArrayNum != iVar2) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res10);
          }
          if ((FObjectPtr_u_0 *)FVar12.Data == pFVar13) break;
          pFVar4 = (FObjectPtr_u_0 *)(param_1->OutputData).TaggedData.AllocatorInstance.Data;
          if (((pFVar4 <= FVar12.Data) &&
              (FVar12.Data < pFVar4 + (longlong)(param_1->OutputData).TaggedData.ArrayMax * 0xf)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          iVar8 = (param_1->OutputData).TaggedData.ArrayNum;
          piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
          }
          (param_1->OutputData).TaggedData.ArrayNum = iVar8 + 1;
          this_00 = FPCGTaggedData::FPCGTaggedData
                              ((FPCGTaggedData *)
                               ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                               (longlong)iVar8 * 0x78),(FPCGTaggedData *)FVar12.Data);
          this_01 = FPCGContext::NewPointData_AnyThread(param_1);
          local_60 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar12.Data;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c6f2a6:
            if ((UPCGSpatialData *)local_60.Handle == (UPCGSpatialData *)0x0) goto LAB_149c6f2c8;
            pUVar10 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
            bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_60,pUVar10);
            FVar11 = local_60;
            if (!bVar6) goto LAB_149c6f2c8;
          }
          else {
            if ((UPCGSpatialData *)local_60.Handle != (UPCGSpatialData *)0x0) {
              UE::GC::MarkAsReachable(local_60.Handle);
              goto LAB_149c6f2a6;
            }
LAB_149c6f2c8:
            FVar11.Handle = (UObject *)0x0;
          }
          UPCGSpatialData::InitializeFromData
                    ((UPCGSpatialData *)this_01,(UPCGSpatialData *)FVar11.Handle,(UPCGMetadata *)0x0
                     ,true,true);
          FPCGDataPtrWrapper::operator=(&this_00->Data,(UPCGData *)this_01);
          FVar12.Data = FVar12.Data + 0x78;
        }
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_50.AllocatorInstance.Data,local_50.ArrayNum);
        if ((FPCGTaggedData *)local_50.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_50.AllocatorInstance.Data);
          bVar6 = true;
          goto LAB_149c6f43b;
        }
      }
      else {
        *(int *)&param_1[1]._padding_ = (int)param_1[1]._padding_ + 1;
        bVar6 = TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
                ::DataIsPreparedForExecution
                          ((TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
                            *)param_1);
        if (((bVar6) ||
            (local_res18[0] = bVar6,
            bVar6 = `TPCGTimeSlicedElementBase<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
                    ::ExecuteSlice'::__l3::<lambda_1>::operator()(local_res18), bVar6)) &&
           (param_1[1].SourceComponent.WeakPtr.ObjectIndex != 0)) {
          do {
            uVar3 = *(uint *)((longlong)&param_1[1]._padding_ + 4);
            uVar9 = 0;
            if ((int)uVar3 < param_1[1].SourceComponent.WeakPtr.ObjectIndex) {
              uVar9 = ~uVar3 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            local_68[0] = uVar3;
            local_58 = (TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
                        *)param_1;
            bVar6 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FPCGSurfaceSamplerElement::ExecuteInternal'::__l2::<lambda_1>,bool,TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>_*,PCGSurfaceSampler::FSurfaceSamplerExecutionState_const_&,PCGSurfaceSampler::FSurfaceSamplerIterationState_&,unsigned_int>
                    ::Call(local_res20,&local_58,
                           (FSurfaceSamplerExecutionState *)&param_1[1].InputData.DataCrcs,
                           (FSurfaceSamplerIterationState *)
                           (param_1[1].ExecutionSource.InterfaceInstance +
                           (longlong)(int)uVar3 * 0x2a),local_68);
            if (!bVar6) goto LAB_149c6f438;
            piVar1 = (int *)((longlong)&param_1[1]._padding_ + 4);
            *piVar1 = *piVar1 + 1;
          } while ((*(int *)((longlong)&param_1[1]._padding_ + 4) <
                    param_1[1].SourceComponent.WeakPtr.ObjectIndex) &&
                  (bVar6 = FPCGAsyncState::ShouldStop(&param_1->AsyncState), !bVar6));
          bVar6 = *(int *)((longlong)&param_1[1]._padding_ + 4) ==
                  param_1[1].SourceComponent.WeakPtr.ObjectIndex;
          goto LAB_149c6f43b;
        }
      }
    }
    else {
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)(param_1->OutputData).TaggedData.AllocatorInstance.Data,
                 (param_1->OutputData).TaggedData.ArrayNum);
      iVar2 = (param_1->OutputData).TaggedData.ArrayMax;
      (param_1->OutputData).TaggedData.ArrayNum = 0;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x78,8,0,(ForAnyElementType *)&param_1->OutputData,0,
                   &(param_1->OutputData).TaggedData.ArrayMax);
        bVar6 = true;
        goto LAB_149c6f43b;
      }
    }
    bVar6 = true;
  }
  else {
LAB_149c6f438:
    bVar6 = false;
  }
LAB_149c6f43b:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar6;
}

// ExecutionLoopMode @ 149c75bb0

EPCGElementExecutionLoopMode __thiscall
FPCGSurfaceSamplerElement::ExecutionLoopMode(FPCGSurfaceSamplerElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// GetDependenciesCrc @ 149c76750

void __thiscall
FPCGSurfaceSamplerElement::GetDependenciesCrc
          (FPCGSurfaceSamplerElement *this,FPCGGetDependenciesCrcParams *param_1,FPCGCrc *param_2)

{
  int iVar1;
  UPCGSettings *pUVar2;
  UClass *pUVar3;
  FName *pFVar4;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong *plVar6;
  UPCGData *this_00;
  FPCGCrc FVar7;
  bool local_res10 [8];
  FPCGCrc local_res18;
  FName local_res20;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_28;
  
  local_res18.Value = 0;
  local_res18._4_4_ = local_res18._4_4_ & 0xffffff00;
  IPCGElement::GetDependenciesCrc((IPCGElement *)this,param_1,&local_res18);
  pUVar2 = param_1->Settings;
  if (pUVar2 != (UPCGSettings *)0x0) {
    pUVar3 = UPCGSurfaceSamplerSettings::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      pFVar4 = ::FName::FName(&local_res20,10,L"bUnbounded",FNAME_Add);
      PCGSettingsHelpers::GetOverrideValue<bool>
                (param_1->InputData,pUVar2,*pFVar4,(bool *)((longlong)&pUVar2[1]._padding_ + 4),
                 local_res10);
      pTVar5 = FPCGDataCollection::GetInputsByPin
                         (param_1->InputData,&local_28,
                          &PCGSurfaceSamplerConstants::BoundingShapeLabel);
      iVar1 = pTVar5->ArrayNum;
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      if ((FPCGTaggedData *)local_28.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      if (((local_res10[0] == false) && (iVar1 < 1)) &&
         (param_1->ExecutionSource != (IPCGGraphExecutionSource *)0x0)) {
        plVar6 = (longlong *)(**(code **)((longlong)*param_1->ExecutionSource + 0x18))();
        this_00 = (UPCGData *)(**(code **)(*plVar6 + 8))(plVar6);
        if (this_00 != (UPCGData *)0x0) {
          FVar7 = UPCGData::GetOrComputeCrc(this_00,SUB81(&local_res20,0));
          local_res18.Value =
               local_res18.Value ^
               *(int *)FVar7 + local_res18.Value * 0x40 + (local_res18.Value >> 2) + -0x61c88647;
        }
      }
    }
  }
  FVar7.bValid = local_res18.bValid;
  FVar7._5_3_ = local_res18._5_3_;
  FVar7.Value = local_res18.Value;
  *param_2 = FVar7;
  return;
}

// PrepareDataInternal @ 149c839c0

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
FPCGSurfaceSamplerElement::PrepareDataInternal(FPCGSurfaceSamplerElement *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
  *pTVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  EPCGTimeSliceInitResult EVar7;
  bool bVar8;
  FText *pFVar9;
  bool bVar10;
  TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
  *local_res10;
  UPCGSurfaceSamplerSettings *local_res18 [2];
  ulong64 *local_f8;
  undefined8 local_f0;
  code *local_e8;
  TArray<UPCGSurfaceData_const_*,TSizedDefaultAllocator<32>_> **local_e0;
  ulong64 *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TArray<UPCGSurfaceData_const_*,TSizedDefaultAllocator<32>_> *local_c8;
  longlong *local_c0;
  UPCGSurfaceSamplerSettings **local_b8;
  TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
  **local_b0;
  ulong64 **local_a8;
  FString local_a0;
  FString local_90;
  FText local_80;
  FString local_70;
  FString local_60;
  FText local_50;
  TArrayView<unsigned___int64_const_,int> local_38;
  
  bVar2 = false;
  bVar8 = false;
  local_res10 = (TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
                 *)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId564,"FPCGSurfaceSamplerElement::PrepareDataInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSurfaceSampler.cpp"
               ,0x234);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId564);
  }
  local_res10 = (TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
                 *)param_1;
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSurfaceSampler.cpp"
                         ,0x236,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  local_res18[0] =
       FPCGContext::GetInputSettings<UPCGSurfaceSamplerSettings>((FPCGContext *)local_res10);
  pTVar3 = local_res10;
  EVar7 = local_res10->ExecutionStateResult;
  if (EVar7 == Uninitialized) {
    EVar7 = PCGSurfaceSamplerHelpers::InitializePerExecutionData
                      (local_res10,&local_res10->PerExecutionStateData);
    pTVar3->ExecutionStateResult = EVar7;
  }
  if (EVar7 != AbortExecution) {
    local_c8 = &(local_res10->PerExecutionStateData).GeneratingShapes;
    local_f8 = (ulong64 *)0x0;
    local_c0 = &local_res10->_padding_;
    local_f0 = 0;
    local_b8 = local_res18;
    local_b0 = &local_res10;
    local_a8 = &local_f8;
    local_e0 = &local_c8;
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGSurfaceSamplerElement::PrepareDataInternal'::__l2::<lambda_1>,enum_EPCGTimeSliceInitResult,PCGSurfaceSampler::FSurfaceSamplerIterationState_&,PCGSurfaceSampler::FSurfaceSamplerExecutionState_const_&,unsigned_int>
               ::Call;
    TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
    ::InitializePerIterationStates
              (local_res10,(local_res10->PerExecutionStateData).GeneratingShapes.ArrayNum,
               (TFunctionRef<EPCGTimeSliceInitResult___cdecl(PCGSurfaceSampler::FSurfaceSamplerIterationState_&,PCGSurfaceSampler::FSurfaceSamplerExecutionState_const_&,unsigned_int)>
                *)&local_e8);
    bVar8 = TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
            ::DataIsPreparedForExecution(local_res10);
    if ((!bVar8) && (2 < (byte)LogPCG._0_1_)) {
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_50,L"PCGSurfaceSamplerElement",L"CouldNotInitializeIterationState",
                          L"Could not initialize per-iteration timeslice state data");
      FText::ToString(pFVar9);
      if (local_res10 ==
          (TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
           *)0x0) {
LAB_149c83c99:
        bVar8 = false;
      }
      else {
        FPCGContext::GetTaskName((FPCGContext *)local_res10,&local_60);
        bVar2 = true;
        if (local_res10 ==
            (TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
             *)0x0) goto LAB_149c83c99;
        bVar2 = true;
        bVar8 = true;
        FPCGContext::GetExecutionSourceName((FPCGContext *)local_res10,&local_70);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar8) && (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if ((bVar2) && (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (local_50.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
      }
    }
    pTVar3 = local_res10;
    iVar4 = (int)local_f0;
    if ((int)local_f0 != 0) {
      *(undefined1 *)&local_res10->_padding_ = 1;
      local_d8 = local_f8;
      if (((int)local_f0 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      iStack_d0 = iVar4;
      local_38._12_4_ = uStack_cc;
      local_38.ArrayNum = iVar4;
      local_38.DataPtr = local_d8;
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Append
                ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
                 &pTVar3->_padding_,&local_38);
    }
    if (local_f8 != (ulong64 *)0x0) {
      FMemory::Free(local_f8);
    }
    goto LAB_149c83d6c;
  }
  if ((byte)LogPCG._0_1_ < 3) goto LAB_149c83d6c;
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_80,L"PCGSurfaceSamplerElement",L"CouldNotInitializeExecutionState",
                      L"Could not initialize per-execution timeslice state data");
  FText::ToString(pFVar9);
  if (local_res10 ==
      (TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
       *)0x0) {
LAB_149c83b2e:
    bVar2 = false;
  }
  else {
    FPCGContext::GetTaskName((FPCGContext *)local_res10,&local_90);
    bVar8 = true;
    if (local_res10 ==
        (TPCGTimeSlicedContext<PCGSurfaceSampler::FSurfaceSamplerExecutionState,PCGSurfaceSampler::FSurfaceSamplerIterationState,FPCGContext>
         *)0x0) goto LAB_149c83b2e;
    bVar8 = true;
    bVar2 = true;
    FPCGContext::GetExecutionSourceName((FPCGContext *)local_res10,&local_a0);
  }
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  if ((bVar2) && (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if ((bVar8) && (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
  }
LAB_149c83d6c:
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ShouldComputeFullOutputDataCrc @ 149c8cab0

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
FPCGSurfaceSamplerElement::ShouldComputeFullOutputDataCrc
          (FPCGSurfaceSamplerElement *this,FPCGContext *param_1)

{
  return true;
}

// SupportsBasePointDataInputs @ 149c92910

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
FPCGSurfaceSamplerElement::SupportsBasePointDataInputs
          (FPCGSurfaceSamplerElement *this,FPCGContext *param_1)

{
  return true;
}

