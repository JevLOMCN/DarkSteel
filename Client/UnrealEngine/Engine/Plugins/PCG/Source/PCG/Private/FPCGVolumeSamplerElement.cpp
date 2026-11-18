// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// operator() @ 149c50db0

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
`FPCGVolumeSamplerElement::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,
          TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
          *param_1,FVolumeSamplerExecutionState *param_2,FVolumeSamplerIterationState *param_3,
          uint param_4)

{
  FScriptContainerElement FVar1;
  UPCGSpatialData *pUVar2;
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
  FString local_80;
  FString local_70;
  FText local_60;
  FText local_50;
  FTextFormat local_40;
  
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
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGVolumeSampler.cpp"
                           ,0x1ac,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    bVar4 = param_1->bTimeSliceIsEnabled;
    pUVar9 = param_3->OutputPointData;
    pUVar2 = param_2->BoundingShape;
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
    bVar4 = PCGVolumeSampler::SampleVolume
                      ((FPCGContext *)param_1,&param_3->Settings,
                       *(UPCGSpatialData **)
                        ((param_2->GeneratingShapes).AllocatorInstance.Data + lVar12 * 8),pUVar2,
                       pUVar9,bVar4);
    if (5 < (byte)LogPCG._0_1_) {
      iVar8 = (**(code **)(param_3->OutputPointData->_padding_ + 0x488))();
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_50,L"PCGVolumeSamplerElement",L"GenerationInfo",
                           L"Generated {0} points in volume");
      pFVar11 = FTextFormat::FTextFormat(&local_40,pFVar10,Default);
      pFVar10 = FText::Format<int>(&local_60,pFVar11,iVar8);
      FText::ToString(pFVar10);
      FPCGContext::GetTaskName((FPCGContext *)param_1,&local_70);
      FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_80);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_60.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
      }
      if (local_50.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
      }
    }
  }
  return bVar4;
}

// operator() @ 149c53470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
`FPCGVolumeSamplerElement::PrepareDataInternal'::__l2::<lambda_1>::operator()
          (void *this,FVolumeSamplerIterationState *param_1,FVolumeSamplerExecutionState *param_2,
          uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  UPCGSpatialData *pUVar18;
  UPCGBasePointData *pUVar19;
  code *pcVar20;
  undefined4 uVar21;
  double dVar22;
  FVolumeSamplerExecutionState *pFVar23;
  bool bVar24;
  EPCGTimeSliceInitResult EVar25;
  char cVar26;
  UPCGPointData *pUVar27;
  UClass *pUVar28;
  double *pdVar29;
  TBox<double> *pTVar30;
  FText *pFVar31;
  FString *pFVar32;
  uint uVar33;
  UPCGPointData *pUVar34;
  FScriptContainerElement *pFVar35;
  wchar_t *pwVar36;
  undefined4 uVar37;
  undefined1 auStack_1a8 [32];
  FScriptContainerElement *local_188;
  longlong local_180;
  undefined4 local_178;
  FVolumeSamplerExecutionState *local_170;
  FString local_168;
  FString local_158;
  FText local_148;
  FString local_138;
  FString local_128;
  FText local_118;
  FPCGInitializeFromDataParams local_108;
  undefined1 local_c8 [56];
  TBox<double> local_90;
  ulonglong local_58;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined3 uVar7;
  undefined3 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  pUVar34 = (UPCGPointData *)0x0;
  pFVar35 = (FScriptContainerElement *)(longlong)(int)param_3;
  local_178 = 0;
  lVar16 = **(longlong **)((longlong)this + 8);
  dVar22 = *(double *)(lVar16 + 0xd0);
  (param_1->Settings).VoxelSize.field0_0x0._s_0.X = *(double *)(lVar16 + 200);
  (param_1->Settings).VoxelSize.field0_0x0._s_0.Y = dVar22;
  (param_1->Settings).VoxelSize.field0_0x0._s_0.Z = *(double *)(lVar16 + 0xd8);
  (param_1->Settings).PointSteepness = *(float *)(**(longlong **)((longlong)this + 8) + 0xe4);
  plVar17 = *(longlong **)this;
  iVar15 = (int)plVar17[1];
  uVar33 = 0;
  if ((int)param_3 < iVar15) {
    uVar33 = ~param_3 >> 0x1f;
  }
  local_170 = param_2;
  if ((uVar33 == 0) &&
     (local_188 = pFVar35, local_180 = (longlong)iVar15,
     bVar24 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar20 = (code *)swi(3);
    EVar25 = (*pcVar20)();
    return EVar25;
  }
  pUVar18 = *(UPCGSpatialData **)(*plVar17 + (longlong)pFVar35 * 8);
  if ((pUVar18 == (UPCGSpatialData *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("GeneratingShape",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGVolumeSampler.cpp"
                          ,0x144,L""), bVar24)) {
    pcVar20 = (code *)swi(3);
    EVar25 = (*pcVar20)();
    return EVar25;
  }
  param_1->Volume = pUVar18;
  pUVar27 = (UPCGPointData *)
            FPCGContext::NewPointData_AnyThread
                      ((FPCGContext *)**(undefined8 **)((longlong)this + 0x18));
  param_1->OutputPointData = (UPCGBasePointData *)pUVar27;
  if (pUVar27 == (UPCGPointData *)0x0) {
LAB_149c53595:
    pUVar27 = pUVar34;
  }
  else {
    pUVar28 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar15 = (int)pUVar28->_padding_;
    if ((*(int *)(pUVar27->_padding_ + 0x38) < iVar15) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar27->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar28->_padding_)) goto LAB_149c53595;
  }
  param_1->OutputData = pUVar27;
  FPCGInitializeFromDataParams::FPCGInitializeFromDataParams(&local_108,param_1->Volume);
  local_108.bInheritSpatialData = false;
  UPCGSpatialData::InitializeFromDataWithParams
            ((UPCGSpatialData *)param_1->OutputPointData,&local_108);
  plVar17 = *(longlong **)((longlong)this + 0x10);
  pUVar19 = param_1->OutputPointData;
  iVar15 = (int)plVar17[1];
  uVar33 = 0;
  if ((int)param_3 < iVar15) {
    uVar33 = ~param_3 >> 0x1f;
  }
  if ((uVar33 == 0) &&
     (local_188 = pFVar35, local_180 = (longlong)iVar15,
     bVar24 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar20 = (code *)swi(3);
    EVar25 = (*pcVar20)();
    return EVar25;
  }
  FPCGDataPtrWrapper::operator=
            ((FPCGDataPtrWrapper *)((longlong)pFVar35 * 0x78 + *plVar17),(UPCGData *)pUVar19);
  pFVar23 = local_170;
  cVar26 = (**(code **)(pUVar18->_padding_ + 0x390))(pUVar18);
  if (cVar26 == '\0') {
    dVar22 = (pFVar23->BoundingShapeBounds).Min.field0_0x0._s_0.Y;
    (param_1->Settings).Bounds.Min.field0_0x0._s_0.X =
         (pFVar23->BoundingShapeBounds).Min.field0_0x0._s_0.X;
    (param_1->Settings).Bounds.Min.field0_0x0._s_0.Y = dVar22;
    dVar22 = (pFVar23->BoundingShapeBounds).Max.field0_0x0._s_0.X;
    (param_1->Settings).Bounds.Min.field0_0x0._s_0.Z =
         (pFVar23->BoundingShapeBounds).Min.field0_0x0._s_0.Z;
    (param_1->Settings).Bounds.Max.field0_0x0._s_0.X = dVar22;
    uVar1._4_4_ = *(undefined4 *)((longlong)&(pFVar23->BoundingShapeBounds).Max.field0_0x0 + 0xc);
    uVar37 = *(undefined4 *)((longlong)&(pFVar23->BoundingShapeBounds).Max.field0_0x0 + 0x10);
    uVar21 = *(undefined4 *)((longlong)&(pFVar23->BoundingShapeBounds).Max.field0_0x0 + 0x14);
    *(undefined4 *)((longlong)&(param_1->Settings).Bounds.Max.field0_0x0 + 8) =
         *(undefined4 *)((longlong)&(pFVar23->BoundingShapeBounds).Max.field0_0x0 + 8);
    *(undefined4 *)((longlong)&(param_1->Settings).Bounds.Max.field0_0x0 + 0xc) = uVar1._4_4_;
    *(undefined4 *)((longlong)&(param_1->Settings).Bounds.Max.field0_0x0 + 0x10) = uVar37;
    *(undefined4 *)((longlong)&(param_1->Settings).Bounds.Max.field0_0x0 + 0x14) = uVar21;
    uVar2._0_1_ = (pFVar23->BoundingShapeBounds).IsValid;
    uVar2._1_1_ = (pFVar23->BoundingShapeBounds).Pad[0];
    uVar2._2_1_ = (pFVar23->BoundingShapeBounds).Pad[1];
    uVar2._3_1_ = (pFVar23->BoundingShapeBounds).Pad[2];
    uVar4 = (pFVar23->BoundingShapeBounds).Pad[3];
    uVar6 = (pFVar23->BoundingShapeBounds).Pad[4];
    uVar10 = (pFVar23->BoundingShapeBounds).Pad[5];
    uVar14 = (pFVar23->BoundingShapeBounds).Pad[6];
    uVar12 = CONCAT11(uVar14,uVar10);
    uVar8 = CONCAT21(uVar12,uVar6);
    uVar2._4_4_ = CONCAT31(uVar8,uVar4);
    uVar37 = (undefined4)uVar2;
    uVar1._4_4_ = uVar2._4_4_;
LAB_149c536d0:
    (param_1->Settings).Bounds.IsValid = (char)uVar37;
    (param_1->Settings).Bounds.Pad[0] = (char)((uint)uVar37 >> 8);
    (param_1->Settings).Bounds.Pad[1] = (char)((uint)uVar37 >> 0x10);
    (param_1->Settings).Bounds.Pad[2] = (char)((uint)uVar37 >> 0x18);
    (param_1->Settings).Bounds.Pad[3] = (char)uVar1._4_4_;
    (param_1->Settings).Bounds.Pad[4] = (char)((uint)uVar1._4_4_ >> 8);
    (param_1->Settings).Bounds.Pad[5] = (char)((uint)uVar1._4_4_ >> 0x10);
    (param_1->Settings).Bounds.Pad[6] = (char)((uint)uVar1._4_4_ >> 0x18);
  }
  else {
    pdVar29 = (double *)(**(code **)(pUVar18->_padding_ + 0x388))(pUVar18,local_c8);
    dVar22 = pdVar29[1];
    (param_1->Settings).Bounds.Min.field0_0x0._s_0.X = *pdVar29;
    (param_1->Settings).Bounds.Min.field0_0x0._s_0.Y = dVar22;
    dVar22 = pdVar29[3];
    (param_1->Settings).Bounds.Min.field0_0x0._s_0.Z = pdVar29[2];
    (param_1->Settings).Bounds.Max.field0_0x0._s_0.X = dVar22;
    uVar1._4_4_ = *(undefined4 *)((longlong)pdVar29 + 0x24);
    uVar37 = *(undefined4 *)(pdVar29 + 5);
    uVar21 = *(undefined4 *)((longlong)pdVar29 + 0x2c);
    *(undefined4 *)((longlong)&(param_1->Settings).Bounds.Max.field0_0x0 + 8) =
         *(undefined4 *)(pdVar29 + 4);
    *(undefined4 *)((longlong)&(param_1->Settings).Bounds.Max.field0_0x0 + 0xc) = uVar1._4_4_;
    *(undefined4 *)((longlong)&(param_1->Settings).Bounds.Max.field0_0x0 + 0x10) = uVar37;
    *(undefined4 *)((longlong)&(param_1->Settings).Bounds.Max.field0_0x0 + 0x14) = uVar21;
    *(double *)&(param_1->Settings).Bounds.IsValid = pdVar29[6];
    if ((pFVar23->BoundingShapeBounds).IsValid != '\0') {
      pTVar30 = PCGHelpers::OverlapBounds
                          (&local_90,&(param_1->Settings).Bounds,&pFVar23->BoundingShapeBounds);
      dVar22 = (pTVar30->Min).field0_0x0._s_0.Y;
      (param_1->Settings).Bounds.Min.field0_0x0._s_0.X = (pTVar30->Min).field0_0x0._s_0.X;
      (param_1->Settings).Bounds.Min.field0_0x0._s_0.Y = dVar22;
      dVar22 = (pTVar30->Max).field0_0x0._s_0.X;
      (param_1->Settings).Bounds.Min.field0_0x0._s_0.Z = (pTVar30->Min).field0_0x0._s_0.Z;
      (param_1->Settings).Bounds.Max.field0_0x0._s_0.X = dVar22;
      uVar1._4_4_ = *(undefined4 *)((longlong)&(pTVar30->Max).field0_0x0 + 0xc);
      uVar37 = *(undefined4 *)((longlong)&(pTVar30->Max).field0_0x0 + 0x10);
      uVar21 = *(undefined4 *)((longlong)&(pTVar30->Max).field0_0x0 + 0x14);
      *(undefined4 *)((longlong)&(param_1->Settings).Bounds.Max.field0_0x0 + 8) =
           *(undefined4 *)((longlong)&(pTVar30->Max).field0_0x0 + 8);
      *(undefined4 *)((longlong)&(param_1->Settings).Bounds.Max.field0_0x0 + 0xc) = uVar1._4_4_;
      *(undefined4 *)((longlong)&(param_1->Settings).Bounds.Max.field0_0x0 + 0x10) = uVar37;
      *(undefined4 *)((longlong)&(param_1->Settings).Bounds.Max.field0_0x0 + 0x14) = uVar21;
      uVar1._0_1_ = pTVar30->IsValid;
      uVar1._1_1_ = pTVar30->Pad[0];
      uVar1._2_1_ = pTVar30->Pad[1];
      uVar1._3_1_ = pTVar30->Pad[2];
      uVar3 = pTVar30->Pad[3];
      uVar5 = pTVar30->Pad[4];
      uVar9 = pTVar30->Pad[5];
      uVar13 = pTVar30->Pad[6];
      uVar11 = CONCAT11(uVar13,uVar9);
      uVar7 = CONCAT21(uVar11,uVar5);
      uVar1._4_4_ = CONCAT31(uVar7,uVar3);
      uVar37 = (undefined4)uVar1;
      goto LAB_149c536d0;
    }
  }
  if ((param_1->Settings).Bounds.IsValid != '\0') {
    EVar25 = Success;
    goto LAB_149c538ee;
  }
  cVar26 = (**(code **)(pUVar18->_padding_ + 0x390))(pUVar18);
  if (cVar26 == '\0') {
    if (2 < (byte)LogPCG._0_1_) {
      pFVar31 = FText::AsLocalizable_Advanced_LocText
                          (&local_148,L"PCGVolumeSamplerElement",L"CouldNotObtainInputBounds",
                           L"Input data is not bounded, so bounds must be provided for sampling. Consider providing a Bounding Shape input."
                          );
      pFVar32 = FText::ToString(pFVar31);
      if ((pFVar32->Data).ArrayNum == 0) {
        pwVar36 = L"";
      }
      else {
        pwVar36 = (wchar_t *)(pFVar32->Data).AllocatorInstance.Data;
      }
      if ((FPCGContext *)**(undefined8 **)((longlong)this + 0x18) != (FPCGContext *)0x0) {
        pUVar34 = (UPCGPointData *)&DAT_00000001;
        FPCGContext::GetTaskName((FPCGContext *)**(undefined8 **)((longlong)this + 0x18),&local_158)
        ;
      }
      if ((FPCGContext *)**(undefined8 **)((longlong)this + 0x18) != (FPCGContext *)0x0) {
        pUVar34 = (UPCGPointData *)(ulonglong)((uint)pUVar34 | 2);
        FPCGContext::GetExecutionSourceName
                  ((FPCGContext *)**(undefined8 **)((longlong)this + 0x18),&local_168);
      }
      local_188 = (FScriptContainerElement *)pwVar36;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pUVar34 & 2) != 0) &&
         (pUVar34 = (UPCGPointData *)(ulonglong)((uint)pUVar34 & 0xfffffffd),
         local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      local_118.TextData.Reference = local_148.TextData.Reference;
      if ((((ulonglong)pUVar34 & 1) != 0) &&
         (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
        local_118.TextData.Reference = local_148.TextData.Reference;
      }
LAB_149c538dd:
      if (local_118.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
      }
    }
  }
  else if (5 < (byte)LogPCG._0_1_) {
    pFVar31 = FText::AsLocalizable_Advanced_LocText
                        (&local_118,L"PCGVolumeSamplerElement",L"InvalidSamplingBounds",
                         L"Final sampling bounds is invalid/zero-sized.");
    pFVar32 = FText::ToString(pFVar31);
    if ((pFVar32->Data).ArrayNum == 0) {
      pwVar36 = L"";
    }
    else {
      pwVar36 = (wchar_t *)(pFVar32->Data).AllocatorInstance.Data;
    }
    if ((FPCGContext *)**(undefined8 **)((longlong)this + 0x18) != (FPCGContext *)0x0) {
      pUVar34 = (UPCGPointData *)&DAT_00000004;
      FPCGContext::GetTaskName((FPCGContext *)**(undefined8 **)((longlong)this + 0x18),&local_128);
    }
    if ((FPCGContext *)**(undefined8 **)((longlong)this + 0x18) != (FPCGContext *)0x0) {
      pUVar34 = (UPCGPointData *)(ulonglong)((uint)pUVar34 | 8);
      FPCGContext::GetExecutionSourceName
                ((FPCGContext *)**(undefined8 **)((longlong)this + 0x18),&local_138);
    }
    local_188 = (FScriptContainerElement *)pwVar36;
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((((ulonglong)pUVar34 & 8) != 0) &&
       (pUVar34 = (UPCGPointData *)(ulonglong)((uint)pUVar34 & 0xfffffff7),
       local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if ((((ulonglong)pUVar34 & 4) != 0) &&
       (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    goto LAB_149c538dd;
  }
  EVar25 = NoOperation;
LAB_149c538ee:
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
             local_108.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data,
             local_108.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
  if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
      local_108.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
      (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_108.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data);
  }
  if (local_108.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
  }
  return EVar25;
}

// ExecuteInternal @ 149c73820

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
FPCGVolumeSamplerElement::ExecuteInternal(FPCGVolumeSamplerElement *this,FPCGContext *param_1)

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
  FObjectPtr_u_0 *pFVar12;
  ForAnyElementType FVar13;
  bool bVar14;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_a8 [2];
  FObjectPtr_u_0 local_a0;
  TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
  *local_98;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_90;
  FPCGInitializeFromDataParams local_78;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId386,"FPCGVolumeSamplerElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGVolumeSampler.cpp"
               ,0x182);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId386);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TimeSlicedContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGVolumeSampler.cpp"
                         ,0x184,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  bVar6 = TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
          ::DataIsPreparedForExecution
                    ((TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
                      *)param_1);
  if (bVar6) {
    if (*(char *)((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 1) == '\x02')
    {
      FPCGDataCollection::GetInputsByPin
                (&param_1->InputData,&local_90,&PCGVolumeSamplerConstants::VolumeLabel);
      iVar2 = local_90.ArrayNum;
      pFVar12 = (FObjectPtr_u_0 *)
                (local_90.AllocatorInstance.Data + (longlong)local_90.ArrayNum * 0x78);
      FVar13.Data = local_90.AllocatorInstance.Data;
      while( true ) {
        if (local_90.ArrayNum != iVar2) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if ((FObjectPtr_u_0 *)FVar13.Data == pFVar12) break;
        pFVar4 = (FObjectPtr_u_0 *)(param_1->OutputData).TaggedData.AllocatorInstance.Data;
        if (((pFVar4 <= FVar13.Data) &&
            (FVar13.Data < pFVar4 + (longlong)(param_1->OutputData).TaggedData.ArrayMax * 0xf)) &&
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
                             (longlong)iVar8 * 0x78),(FPCGTaggedData *)FVar13.Data);
        this_01 = FPCGContext::NewPointData_AnyThread(param_1);
        local_a0 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar13.Data;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c73a31:
          if ((UPCGSpatialData *)local_a0.Handle == (UPCGSpatialData *)0x0) goto LAB_149c73a51;
          pUVar10 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
          bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_a0,pUVar10);
          FVar11 = local_a0;
          if (!bVar6) goto LAB_149c73a51;
        }
        else {
          if ((UPCGSpatialData *)local_a0.Handle != (UPCGSpatialData *)0x0) {
            UE::GC::MarkAsReachable(local_a0.Handle);
            goto LAB_149c73a31;
          }
LAB_149c73a51:
          FVar11.Handle = (UObject *)0x0;
        }
        FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                  (&local_78,(UPCGSpatialData *)FVar11.Handle);
        local_78.bInheritSpatialData = false;
        UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)this_01,&local_78);
        FPCGDataPtrWrapper::operator=(&this_00->Data,(UPCGData *)this_01);
        DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                  ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                   local_78.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data,
                   local_78.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
        if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
            local_78.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
            (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
          FMemory::Free(local_78.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.
                        Data);
        }
        if (local_78.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
        }
        FVar13.Data = FVar13.Data + 0x78;
      }
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_90.AllocatorInstance.Data,local_90.ArrayNum);
      if ((FPCGTaggedData *)local_90.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
        bVar6 = true;
        goto LAB_149c73be0;
      }
    }
    else {
      *(int *)&param_1[1]._padding_ = (int)param_1[1]._padding_ + 1;
      bVar6 = TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
              ::DataIsPreparedForExecution
                        ((TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
                          *)param_1);
      if (((bVar6) ||
          (local_res18[0] = bVar6,
          bVar6 = `TPCGTimeSlicedElementBase<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
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
          local_a8[0] = uVar3;
          local_98 = (TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
                      *)param_1;
          bVar6 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPCGVolumeSamplerElement::ExecuteInternal'::__l2::<lambda_1>,bool,TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>_*,PCGVolumeSampler::FVolumeSamplerExecutionState_const_&,PCGVolumeSampler::FVolumeSamplerIterationState_&,unsigned_int>
                  ::Call(local_res20,&local_98,
                         (FVolumeSamplerExecutionState *)&param_1[1].InputData.DataCrcs,
                         (FVolumeSamplerIterationState *)
                         (param_1[1].ExecutionSource.InterfaceInstance + (longlong)(int)uVar3 * 0xe)
                         ,local_a8);
          if (!bVar6) {
            bVar6 = false;
            goto LAB_149c73be0;
          }
          piVar1 = (int *)((longlong)&param_1[1]._padding_ + 4);
          *piVar1 = *piVar1 + 1;
        } while ((*(int *)((longlong)&param_1[1]._padding_ + 4) <
                  param_1[1].SourceComponent.WeakPtr.ObjectIndex) &&
                (bVar6 = FPCGAsyncState::ShouldStop(&param_1->AsyncState), !bVar6));
        bVar6 = *(int *)((longlong)&param_1[1]._padding_ + 4) ==
                param_1[1].SourceComponent.WeakPtr.ObjectIndex;
        goto LAB_149c73be0;
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
      goto LAB_149c73be0;
    }
  }
  bVar6 = true;
LAB_149c73be0:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar6;
}

// ExecutionLoopMode @ 149c75bd0

EPCGElementExecutionLoopMode __thiscall
FPCGVolumeSamplerElement::ExecutionLoopMode(FPCGVolumeSamplerElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// GetDependenciesCrc @ 149c769b0

void __thiscall
FPCGVolumeSamplerElement::GetDependenciesCrc
          (FPCGVolumeSamplerElement *this,FPCGGetDependenciesCrcParams *param_1,FPCGCrc *param_2)

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
    pUVar3 = UPCGVolumeSamplerSettings::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      pFVar4 = ::FName::FName(&local_res20,10,L"bUnbounded",FNAME_Add);
      PCGSettingsHelpers::GetOverrideValue<bool>
                (param_1->InputData,pUVar2,*pFVar4,(bool *)&pUVar2[1]._padding_,local_res10);
      pTVar5 = FPCGDataCollection::GetInputsByPin
                         (param_1->InputData,&local_28,
                          &PCGVolumeSamplerConstants::BoundingShapeLabel);
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

// PrepareDataInternal @ 149c84000

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
FPCGVolumeSamplerElement::PrepareDataInternal(FPCGVolumeSamplerElement *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
  *this_00;
  bool bVar3;
  undefined1 uVar4;
  EPCGTimeSliceInitResult EVar5;
  bool bVar6;
  FText *pFVar7;
  bool bVar8;
  TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
  *local_res10;
  UPCGVolumeSamplerSettings *local_res18 [2];
  code *local_b8;
  TArray<UPCGSpatialData_const_*,TSizedDefaultAllocator<32>_> **local_b0;
  TArray<UPCGSpatialData_const_*,TSizedDefaultAllocator<32>_> *local_a8;
  UPCGVolumeSamplerSettings **local_a0;
  longlong *local_98;
  TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
  **local_90;
  FString local_88;
  FString local_78;
  FText local_68;
  FString local_58;
  FString local_48;
  FText local_38;
  
  bVar2 = false;
  bVar6 = false;
  local_res18[0] = (UPCGVolumeSamplerSettings *)((ulonglong)local_res18[0] & 0xffffffff00000000);
  bVar8 = -1 < CpuChannel->Enabled;
  local_res10 = (TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
                 *)param_1;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId300,"FPCGVolumeSamplerElement::PrepareDataInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGVolumeSampler.cpp"
               ,300);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId300);
  }
  this_00 = local_res10;
  if ((local_res10 ==
       (TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
        *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TimeSlicedContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGVolumeSampler.cpp"
                         ,0x12e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  local_res18[0] = FPCGContext::GetInputSettings<UPCGVolumeSamplerSettings>((FPCGContext *)this_00);
  if ((local_res18[0] == (UPCGVolumeSamplerSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGVolumeSampler.cpp"
                         ,0x131,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  EVar5 = this_00->ExecutionStateResult;
  if (EVar5 == Uninitialized) {
    EVar5 = PCGVolumeSamplerHelpers::InitializePerExecutionData
                      (this_00,&this_00->PerExecutionStateData);
    this_00->ExecutionStateResult = EVar5;
  }
  if (EVar5 == AbortExecution) {
    if ((byte)LogPCG._0_1_ < 3) goto LAB_149c8432b;
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"PCGVolumeSamplerElement",L"CouldNotInitializeExecutionState",
                        L"Could not initialize per-execution timeslice state data");
    FText::ToString(pFVar7);
    if (local_res10 ==
        (TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
         *)0x0) {
LAB_149c8418d:
      bVar2 = false;
    }
    else {
      FPCGContext::GetTaskName((FPCGContext *)local_res10,&local_78);
      bVar6 = true;
      if (local_res10 ==
          (TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
           *)0x0) goto LAB_149c8418d;
      bVar6 = true;
      bVar2 = true;
      FPCGContext::GetExecutionSourceName((FPCGContext *)local_res10,&local_88);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((bVar2) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    local_38.TextData.Reference = local_68.TextData.Reference;
    if ((bVar6) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
      local_38.TextData.Reference = local_68.TextData.Reference;
    }
  }
  else {
    local_a8 = &(this_00->PerExecutionStateData).GeneratingShapes;
    local_a0 = local_res18;
    local_98 = &local_res10->_padding_;
    local_90 = &local_res10;
    local_b0 = &local_a8;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGVolumeSamplerElement::PrepareDataInternal'::__l2::<lambda_1>,enum_EPCGTimeSliceInitResult,PCGVolumeSampler::FVolumeSamplerIterationState_&,PCGVolumeSampler::FVolumeSamplerExecutionState_const_&,unsigned_int>
               ::Call;
    TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
    ::InitializePerIterationStates
              (this_00,(this_00->PerExecutionStateData).GeneratingShapes.ArrayNum,
               (TFunctionRef<EPCGTimeSliceInitResult___cdecl(PCGVolumeSampler::FVolumeSamplerIterationState_&,PCGVolumeSampler::FVolumeSamplerExecutionState_const_&,unsigned_int)>
                *)&local_b8);
    bVar6 = TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
            ::DataIsPreparedForExecution(this_00);
    if ((bVar6) || ((byte)LogPCG._0_1_ < 3)) goto LAB_149c8432b;
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"PCGVolumeSamplerElement",L"CouldNotInitializeStateData",
                        L"Could not initialize timeslice state data");
    FText::ToString(pFVar7);
    if (local_res10 ==
        (TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
         *)0x0) {
LAB_149c842cc:
      bVar6 = false;
    }
    else {
      FPCGContext::GetTaskName((FPCGContext *)local_res10,&local_48);
      bVar2 = true;
      if (local_res10 ==
          (TPCGTimeSlicedContext<PCGVolumeSampler::FVolumeSamplerExecutionState,PCGVolumeSampler::FVolumeSamplerIterationState,FPCGContext>
           *)0x0) goto LAB_149c842cc;
      bVar2 = true;
      bVar6 = true;
      FPCGContext::GetExecutionSourceName((FPCGContext *)local_res10,&local_58);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((bVar6) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
LAB_149c8432b:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ShouldComputeFullOutputDataCrc @ 149c8cac0

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
FPCGVolumeSamplerElement::ShouldComputeFullOutputDataCrc
          (FPCGVolumeSamplerElement *this,FPCGContext *param_1)

{
  return true;
}

// SupportsBasePointDataInputs @ 149c92960

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
FPCGVolumeSamplerElement::SupportsBasePointDataInputs
          (FPCGVolumeSamplerElement *this,FPCGContext *param_1)

{
  return true;
}

