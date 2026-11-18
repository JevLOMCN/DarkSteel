// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FStatUnitData @ 147c2ce20

FStatUnitData * __thiscall FStatUnitData::FStatUnitData(FStatUnitData *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  TMap<TArray<float,TSizedDefaultAllocator<32>_>_> *this_00;
  ForAnyElementType *pFVar9;
  longlong lVar10;
  uint uVar11;
  TLinkedList<DynamicRenderScaling::FBudget_*> *pTVar12;
  FBudget *pFVar13;
  ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
  FVar14;
  code *pcVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  TLinkedList<DynamicRenderScaling::FBudget_*> **ppTVar20;
  FStatUnitData *pFVar21;
  int *piVar22;
  ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
  FVar23;
  longlong lVar24;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar25;
  undefined4 local_88 [2];
  int *local_80;
  int *local_78;
  TArray<float,TSizedDefaultAllocator<32>_> *local_70;
  int *local_68;
  int *local_60;
  TArray<float,TSizedDefaultAllocator<32>_> *local_58;
  
  this->RenderThreadTime = 0.0;
  this->RenderThreadTimeCriticalPath = 0.0;
  this->GameThreadTime = 0.0;
  this->GameThreadTimeCriticalPath = 0.0;
  this->GPUFrameTime[0] = 0.0;
  this->GPUFrameTime[1] = 0.0;
  this->GPUFrameTime[2] = 0.0;
  this->GPUFrameTime[3] = 0.0;
  this->GPUFrameTime[4] = 0.0;
  this->GPUFrameTime[5] = 0.0;
  this->GPUFrameTime[6] = 0.0;
  pTVar25 = this->GPUFrameTimes;
  *(undefined8 *)(this->GPUFrameTime + 7) = 0;
  pTVar6 = &this->RenderThreadTimes;
  this->GPUClockFraction[1] = 0.0;
  this->GPUClockFraction[2] = 0.0;
  this->GPUClockFraction[3] = 0.0;
  this->GPUClockFraction[4] = 0.0;
  this->GPUClockFraction[5] = 0.0;
  this->GPUClockFraction[6] = 0.0;
  pTVar7 = &this->GameThreadTimes;
  *(undefined8 *)(this->GPUClockFraction + 7) = 0;
  piVar1 = &(this->RenderThreadTimes).ArrayNum;
  this->GPUUsageFraction[1] = 0.0;
  this->GPUUsageFraction[2] = 0.0;
  this->GPUUsageFraction[3] = 0.0;
  this->GPUUsageFraction[4] = 0.0;
  this->GPUUsageFraction[5] = 0.0;
  this->GPUUsageFraction[6] = 0.0;
  piVar2 = &(this->RenderThreadTimes).ArrayMax;
  this->GPUUsageFraction[7] = 0.0;
  piVar3 = &(this->GameThreadTimes).ArrayNum;
  this->GPUExternalUsageFraction[0] = 0.0;
  piVar4 = &(this->GameThreadTimes).ArrayMax;
  this->GPUExternalUsageFraction[1] = 0.0;
  this->GPUExternalUsageFraction[2] = 0.0;
  this->GPUExternalUsageFraction[3] = 0.0;
  this->GPUExternalUsageFraction[4] = 0.0;
  this->GPUExternalUsageFraction[5] = 0.0;
  this->GPUExternalUsageFraction[6] = 0.0;
  this->GPUExternalUsageFraction[7] = 0.0;
  this->FrameTime = 0.0;
  this->RHITTime = 0.0;
  this->InputLatencyTime = 0.0;
  this->RawRenderThreadTime = 0.0;
  this->RawRenderThreadTimeCriticalPath = 0.0;
  this->RawGameThreadTime = 0.0;
  this->RawGameThreadTimeCriticalPath = 0.0;
  this->RawGPUFrameTime[0] = 0.0;
  this->RawGPUFrameTime[1] = 0.0;
  this->RawGPUFrameTime[2] = 0.0;
  this->RawGPUFrameTime[3] = 0.0;
  this->RawGPUFrameTime[4] = 0.0;
  this->RawGPUFrameTime[5] = 0.0;
  this->RawGPUFrameTime[6] = 0.0;
  *(undefined8 *)(this->RawGPUFrameTime + 7) = 0;
  this->RawGPUClockFraction[1] = 0.0;
  this->RawGPUClockFraction[2] = 0.0;
  this->RawGPUClockFraction[3] = 0.0;
  this->RawGPUClockFraction[4] = 0.0;
  this->RawGPUClockFraction[5] = 0.0;
  this->RawGPUClockFraction[6] = 0.0;
  *(undefined8 *)(this->RawGPUClockFraction + 7) = 0;
  this->RawGPUUsageFraction[1] = 0.0;
  this->RawGPUUsageFraction[2] = 0.0;
  this->RawGPUUsageFraction[3] = 0.0;
  this->RawGPUUsageFraction[4] = 0.0;
  this->RawGPUUsageFraction[5] = 0.0;
  this->RawGPUUsageFraction[6] = 0.0;
  this->RawGPUUsageFraction[7] = 0.0;
  this->RawGPUExternalUsageFraction[0] = 0.0;
  this->RawGPUExternalUsageFraction[1] = 0.0;
  this->RawGPUExternalUsageFraction[2] = 0.0;
  this->RawGPUExternalUsageFraction[3] = 0.0;
  this->RawGPUExternalUsageFraction[4] = 0.0;
  this->RawGPUExternalUsageFraction[5] = 0.0;
  this->RawGPUExternalUsageFraction[6] = 0.0;
  this->RawGPUExternalUsageFraction[7] = 0.0;
  pTVar8 = &this->FrameTimes;
  this->RawFrameTime = 0.0;
  this->RawRHITTime = 0.0;
  piVar5 = &(this->FrameTimes).ArrayNum;
  this->RawInputLatencyTime = 0.0;
  this->LastTime = 0.0;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar3 = 0;
  *piVar4 = 0;
  (pTVar25->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->GPUFrameTimes[0].ArrayNum = 0;
  this->GPUFrameTimes[0].ArrayMax = 0;
  this->GPUFrameTimes[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->GPUFrameTimes[1].ArrayNum = 0;
  this->GPUFrameTimes[1].ArrayMax = 0;
  this->GPUFrameTimes[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->GPUFrameTimes[2].ArrayNum = 0;
  this->GPUFrameTimes[2].ArrayMax = 0;
  this->GPUFrameTimes[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->GPUFrameTimes[3].ArrayNum = 0;
  this->GPUFrameTimes[3].ArrayMax = 0;
  this->GPUFrameTimes[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->GPUFrameTimes[4].ArrayNum = 0;
  this->GPUFrameTimes[4].ArrayMax = 0;
  this->GPUFrameTimes[5].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->GPUFrameTimes[5].ArrayNum = 0;
  this->GPUFrameTimes[5].ArrayMax = 0;
  this->GPUFrameTimes[6].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->GPUFrameTimes[6].ArrayNum = 0;
  this->GPUFrameTimes[6].ArrayMax = 0;
  this->GPUFrameTimes[7].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->GPUFrameTimes[7].ArrayNum = 0;
  this->GPUFrameTimes[7].ArrayMax = 0;
  (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar22 = &(this->FrameTimes).ArrayMax;
  *piVar5 = 0;
  *piVar22 = 0;
  local_70 = &this->RHITTimes;
  (local_70->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_78 = &(this->RHITTimes).ArrayNum;
  (this->RHITTimes).ArrayMax = 0;
  local_80 = &(this->RHITTimes).ArrayMax;
  this_00 = &this->ResolutionFractions;
  local_58 = &this->InputLatencyTimes;
  *local_78 = 0;
  local_60 = &(this->InputLatencyTimes).ArrayNum;
  (local_58->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_68 = &(this->InputLatencyTimes).ArrayMax;
  *local_60 = 0;
  *local_68 = 0;
  DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::
  TMap<TArray<float,TSizedDefaultAllocator<32>_>_>(this_00);
  this->CurrentIndex = 0;
  iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,200,&pTVar6->AllocatorInstance,piVar1,piVar2);
  memset((pTVar6->AllocatorInstance).Data + (longlong)iVar17 * 4,0,800);
  iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,200,&pTVar7->AllocatorInstance,piVar3,piVar4);
  memset((pTVar7->AllocatorInstance).Data + (longlong)iVar17 * 4,0,800);
  for (; pTVar25 != &this->FrameTimes; pTVar25 = pTVar25 + 1) {
    iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,200,&pTVar25->AllocatorInstance,&pTVar25->ArrayNum,&pTVar25->ArrayMax);
    memset((pTVar25->AllocatorInstance).Data + (longlong)iVar17 * 4,0,800);
  }
  iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,200,&pTVar8->AllocatorInstance,piVar5,piVar22);
  memset((pTVar8->AllocatorInstance).Data + (longlong)iVar17 * 4,0,800);
  pTVar25 = local_70;
  iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,200,&local_70->AllocatorInstance,local_78,local_80);
  memset((pTVar25->AllocatorInstance).Data + (longlong)iVar17 * 4,0,800);
  pTVar25 = local_58;
  iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,200,&local_58->AllocatorInstance,local_60,local_68);
  memset((pTVar25->AllocatorInstance).Data + (longlong)iVar17 * 4,0,800);
  ppTVar20 = DynamicRenderScaling::FBudget::GetGlobalList();
  pTVar12 = *ppTVar20;
  do {
    if (pTVar12 == (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0) {
      return this;
    }
    pFVar13 = pTVar12->Element;
    iVar17 = (this->ResolutionFractions).Array.ArrayNum;
    iVar18 = DynamicRenderScaling::FBudget::GetGlobalListSize();
    if ((iVar17 != iVar18) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Array.Num() == FBudget::GetGlobalListSize()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                            ,0xd5,L""), bVar16)) {
      pcVar15 = (code *)swi(3);
      pFVar21 = (FStatUnitData *)(*pcVar15)();
      return pFVar21;
    }
    uVar11 = pFVar13->BudgetId;
    uVar19 = 0;
    if ((int)uVar11 < (this->ResolutionFractions).Array.ArrayNum) {
      uVar19 = ~uVar11 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar15 = (code *)swi(3);
      pFVar21 = (FStatUnitData *)(*pcVar15)();
      return pFVar21;
    }
    FVar14 = (this->ResolutionFractions).Array.AllocatorInstance.SecondaryData;
    FVar23 = (ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
              )this_00;
    if (FVar14 != (ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
                   )0x0) {
      FVar23 = FVar14;
    }
    pFVar9 = (ForAnyElementType *)((longlong)FVar23 + ((longlong)(int)uVar11 * 3 + 1) * 8);
    if (*(int *)((longlong)&pFVar9[1].Data + 4) < 200) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,200,pFVar9,*(int *)&pFVar9[1].Data,(int *)((longlong)&pFVar9[1].Data + 4));
    }
    lVar24 = 200;
    do {
      iVar17 = (this->ResolutionFractions).Array.ArrayNum;
      iVar18 = DynamicRenderScaling::FBudget::GetGlobalListSize();
      if ((iVar17 != iVar18) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Array.Num() == FBudget::GetGlobalListSize()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                              ,0xd5,L""), bVar16)) {
        pcVar15 = (code *)swi(3);
        pFVar21 = (FStatUnitData *)(*pcVar15)();
        return pFVar21;
      }
      uVar11 = pFVar13->BudgetId;
      uVar19 = 0;
      if ((int)uVar11 < (this->ResolutionFractions).Array.ArrayNum) {
        uVar19 = ~uVar11 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar15 = (code *)swi(3);
        pFVar21 = (FStatUnitData *)(*pcVar15)();
        return pFVar21;
      }
      FVar14 = (this->ResolutionFractions).Array.AllocatorInstance.SecondaryData;
      local_88[0] = 0xbf800000;
      FVar23 = (ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
                )this_00;
      if (FVar14 != (ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
                     )0x0) {
        FVar23 = FVar14;
      }
      lVar10 = (longlong)FVar23 + (longlong)(int)uVar11 * 0x18;
      if (((*(undefined4 **)((uchar *)((longlong)FVar23 + 8) + (longlong)(int)uVar11 * 0x18) <=
            local_88) &&
          (local_88 <
           *(undefined4 **)((uchar *)((longlong)FVar23 + 8) + (longlong)(int)uVar11 * 0x18) +
           *(int *)(lVar10 + 0x14))) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar15 = (code *)swi(3);
        pFVar21 = (FStatUnitData *)(*pcVar15)();
        return pFVar21;
      }
      iVar17 = *(int *)(lVar10 + 0x10);
      if (iVar17 == *(int *)(lVar10 + 0x14)) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)(lVar10 + 8),(int *)(lVar10 + 0x14));
      }
      *(int *)(lVar10 + 0x10) = iVar17 + 1;
      *(undefined4 *)(*(longlong *)(lVar10 + 8) + (longlong)iVar17 * 4) = local_88[0];
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    pTVar12 = (TLinkedList<DynamicRenderScaling::FBudget_*> *)pTVar12->_padding_;
  } while( true );
}

// operator() @ 148912c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3,FString *param_4,FColor *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FCanvas *this_00;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  size_t sVar8;
  FLinearColor_u_0 local_268;
  FScriptContainerElement *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  TVector2<double>_u_0 local_248;
  FCanvasTextItemBase local_238;
  longlong local_a0;
  TReferenceControllerBase<1> *local_60;
  char local_38;
  FScriptContainerElement *local_30;
  undefined8 uStack_28;
  
  if ((param_3 <= param_2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ColumnId < ColumnCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealClient.cpp"
                         ,0x2b4,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar1 = **(int **)((longlong)this + 8);
  iVar2 = **(int **)this;
  iVar3 = **(int **)((longlong)this + 0x18);
  iVar4 = **(int **)((longlong)this + 0x10);
  this_00 = (FCanvas *)**(undefined8 **)((longlong)this + 0x20);
  local_268._s_0.R = FLinearColor::sRGBToLinearTable[(param_5->field0_0x0)._s_0.R];
  local_268._s_0.G = FLinearColor::sRGBToLinearTable[(param_5->field0_0x0)._s_0.G];
  local_268._s_0.B = FLinearColor::sRGBToLinearTable[(param_5->field0_0x0)._s_0.B];
  lVar5 = **(longlong **)((longlong)this + 0x28);
  local_268._s_0.A = (float)(param_5->field0_0x0)._s_0.A * __real_3b808081;
  if ((param_4->Data).ArrayNum == 0) {
    local_258 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_258 = (param_4->Data).AllocatorInstance.Data;
    uStack_250 = 0;
    if (local_258 == (FScriptContainerElement *)0x0) goto LAB_148912d41;
  }
  sVar8 = wcslen((wchar_t *)local_258);
  uStack_250 = (undefined4)sVar8;
LAB_148912d41:
  local_248._s_0.X = (double)(iVar2 - ((param_3 - param_2) + -1) * iVar1);
  local_248._s_0.Y = (double)(param_1 * iVar3 + iVar4);
  FCanvasTextItemBase::FCanvasTextItemBase
            (&local_238,(TVector2<double> *)&local_248._s_0,(FLinearColor *)&local_268._s_0);
  local_38 = '\0';
  local_238._padding_._4_4_ = 2;
  local_238._padding_ = (longlong)&___7FCanvasTextStringViewItem__6B_;
  uStack_28 = CONCAT44(uStack_24c,uStack_250);
  local_30 = local_258;
  if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x110) & 1) == 0)) {
    local_238.FontRenderInfo._0_4_ = local_238.FontRenderInfo._0_4_ | 2;
    local_238.ShadowColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
    local_238.ShadowOffset.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
    local_238.ShadowOffset.field0_0x0._s_0.Y = _UNK_150689688;
  }
  else {
    local_238._padding_._4_4_ = 6;
  }
  local_a0 = lVar5;
  FCanvasTextItemBase::Draw(&local_238,this_00);
  if (this_00->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(this_00,false);
  }
  if (local_38 != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  }
  return;
}

// operator() @ 148913280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FStatUnitData::DrawStat'::__l82::<lambda_2>::operator()
          (void *this,int param_1,int param_2,wchar_t *param_3,FColor *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FCanvas *this_00;
  longlong lVar5;
  int iVar6;
  size_t sVar7;
  FColor *pFVar8;
  ForAnyElementType FVar9;
  FString local_278;
  FLinearColor_u_0 local_268;
  FScriptContainerElement *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  TVector2<double>_u_0 local_248;
  FCanvasTextItemBase local_238;
  longlong local_a0;
  TReferenceControllerBase<1> *local_60;
  char local_38;
  FScriptContainerElement *local_30;
  undefined8 uStack_28;
  
  ::FString::PrintfImpl(&local_278,L"%s:   ");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_278.Data.ArrayNum != 0) {
    FVar9.Data = local_278.Data.AllocatorInstance.Data;
  }
  iVar6 = UFont::GetStringSize((UFont *)**(undefined8 **)this,(wchar_t *)FVar9.Data);
  iVar1 = **(int **)((longlong)this + 0x10);
  this_00 = (FCanvas *)**(undefined8 **)((longlong)this + 0x28);
  iVar2 = **(int **)((longlong)this + 8);
  iVar3 = **(int **)((longlong)this + 0x20);
  iVar4 = **(int **)((longlong)this + 0x18);
  pFVar8 = &FColor::White;
  if (**(char **)((longlong)this + 0x30) != '\0') {
    pFVar8 = param_4;
  }
  local_268._s_0.R = FLinearColor::sRGBToLinearTable[(pFVar8->field0_0x0)._s_0.R];
  local_268._s_0.G = FLinearColor::sRGBToLinearTable[(pFVar8->field0_0x0)._s_0.G];
  local_268._s_0.B = FLinearColor::sRGBToLinearTable[(pFVar8->field0_0x0)._s_0.B];
  lVar5 = **(longlong **)this;
  local_268._s_0.A = (float)(pFVar8->field0_0x0)._s_0.A * __real_3b808081;
  if (local_278.Data.ArrayNum == 0) {
    local_258 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    uStack_250 = 0;
    local_258 = local_278.Data.AllocatorInstance.Data;
    if (local_278.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_1489133a1;
  }
  sVar7 = wcslen((wchar_t *)local_258);
  uStack_250 = (undefined4)sVar7;
LAB_1489133a1:
  local_248._s_0.Y = (double)(param_1 * iVar3 + iVar4);
  local_248._s_0.X = (double)((iVar2 - (param_2 + -1) * iVar1) - iVar6);
  FCanvasTextItemBase::FCanvasTextItemBase
            (&local_238,(TVector2<double> *)&local_248._s_0,(FLinearColor *)&local_268._s_0);
  local_38 = '\0';
  local_238._padding_._4_4_ = 2;
  local_238._padding_ = (longlong)&___7FCanvasTextStringViewItem__6B_;
  uStack_28 = CONCAT44(uStack_24c,uStack_250);
  local_30 = local_258;
  if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x110) & 1) == 0)) {
    local_238.FontRenderInfo._0_4_ = local_238.FontRenderInfo._0_4_ | 2;
    local_238.ShadowColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
    local_238.ShadowOffset.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
    local_238.ShadowOffset.field0_0x0._s_0.Y = _UNK_150689688;
  }
  else {
    local_238._padding_._4_4_ = 6;
  }
  local_a0 = lVar5;
  FCanvasTextItemBase::Draw(&local_238,this_00);
  if (this_00->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(this_00,false);
  }
  if (local_38 != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  }
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  return;
}

// DrawStat @ 148930490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148931920) */
/* WARNING: Removing unreachable block (ram,0x000148931002) */
/* WARNING: Removing unreachable block (ram,0x00014893085a) */
/* WARNING: Removing unreachable block (ram,0x000148931576) */
/* WARNING: Removing unreachable block (ram,0x0001489322b3) */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
FStatUnitData::DrawStat
          (FStatUnitData *this,FViewport *param_1,FCanvas *param_2,int param_3,int param_4)

{
  float fVar1;
  FViewportClient *pFVar2;
  code *pcVar3;
  TLinkedList<DynamicRenderScaling::FBudget_*> *pTVar4;
  FBudget *pFVar5;
  ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
  FVar6;
  FCanvas *pFVar7;
  HHitProxy *pHVar8;
  double dVar9;
  int iVar10;
  atomic<double> aVar11;
  ulonglong uVar12;
  TIntPoint<int>_u_0 TVar13;
  double dVar14;
  double dVar15;
  TConsoleVariableData<float> *pTVar16;
  TConsoleVariableData<int> *pTVar17;
  FColor_u_0 FVar18;
  byte bVar19;
  char cVar20;
  FColor_u_0 FVar21;
  FColor_u_0 FVar22;
  char cVar23;
  bool bVar24;
  bool bVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  undefined4 uVar29;
  FRHIGPUUsageFractions *pFVar30;
  TStatId TVar31;
  FStatUnitData *pFVar32;
  TLinkedList<DynamicRenderScaling::FBudget_*> **ppTVar33;
  size_t sVar34;
  ulong64 uVar35;
  IDynamicResolutionState *pIVar36;
  UFont *pUVar37;
  FBatchedElements *this_00;
  float *pfVar38;
  longlong lVar39;
  ForAnyElementType FVar40;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar41;
  wchar_t *pwVar42;
  byte bVar43;
  int iVar44;
  FString *__return_storage_ptr__;
  uint uVar45;
  ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
  FVar46;
  FViewport *pFVar47;
  FHitProxyId FVar48;
  ulonglong uVar49;
  FViewport *pFVar50;
  int iVar51;
  FColor_u_0 FVar52;
  uint uVar53;
  ulonglong uVar54;
  float fVar55;
  float fVar56;
  double dVar57;
  float fVar58;
  atomic<double> aVar59;
  undefined1 auVar60 [16];
  float fVar61;
  FLinearColor_u_0 FVar62;
  FLinearColor_u_0 FVar63;
  FLinearColor_u_0 FVar64;
  float fVar65;
  double dVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  float fVar69;
  float fVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  float fVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined1 auStackY_19b8 [32];
  char local_1974;
  FColor_u_0 local_1970;
  byte local_196c;
  char local_196b;
  FColor_u_0 local_1968;
  char local_1964;
  int local_1960;
  uint local_195c;
  int local_1958;
  float local_1954;
  float local_1950;
  char local_194c [4];
  FColor_u_0 local_1948;
  float local_1944;
  FViewport *local_1940;
  char local_1938;
  float local_1934;
  int local_1930;
  int local_192c;
  FCanvas *local_1928;
  TIntPoint<int>_u_0 local_1920;
  FHitProxyId local_1918;
  float local_1914;
  FColor_u_0 local_1910;
  FColor_u_0 local_190c;
  FColor_u_0 local_1908;
  FColor_u_0 local_1904;
  FColor_u_0 local_1900;
  FColor_u_0 local_18fc;
  FColor_u_0 local_18f8;
  FColor_u_0 local_18f4;
  FColor_u_0 local_18f0 [2];
  int *local_18e8;
  int *local_18e0;
  float *local_18d8;
  int *local_18d0;
  FCanvas **local_18c8;
  UFont **local_18c0;
  int local_18b8;
  int local_18b4;
  FColor_u_0 local_18b0 [2];
  UFont *local_18a8;
  FColor local_18a0;
  FColor local_189c;
  FColor local_1898;
  FColor local_1894;
  FColor local_1890;
  FColor local_188c;
  FColor local_1888;
  FColor_u_0 local_1884;
  FColor_u_0 local_1880;
  FColor_u_0 local_187c;
  FColor local_1878;
  FColor_u_0 local_1874;
  FColor local_1870;
  FColor local_186c;
  FColor_u_0 local_1868;
  FColor_u_0 local_1864;
  FColor local_1860 [2];
  FStatUnitData *local_1858;
  FColor local_1850;
  FColor local_184c;
  FColor local_1848;
  FColor_u_0 local_1844;
  FLinearColor_u_0 local_1840;
  UFont **local_1830;
  int *local_1828;
  int *local_1820;
  int *local_1818;
  int *local_1810;
  FCanvas **local_1808;
  char *local_1800;
  FColor_u_0 local_17f8 [2];
  FString local_17f0;
  FLinearColor_u_0 local_17e0;
  uint local_17d0;
  undefined4 local_17cc;
  uint local_17c8;
  uint local_17c4;
  undefined4 local_17c0;
  uint local_17bc;
  uint local_17b8;
  undefined4 local_17b4;
  uint local_17b0;
  uint local_17ac;
  undefined4 local_17a8;
  uint local_17a4;
  uint local_17a0;
  undefined4 local_179c;
  uint local_1798;
  FScriptContainerElement *local_1790;
  undefined4 uStack_1788;
  undefined4 uStack_1784;
  LARGE_INTEGER local_1780;
  FBatchedElements *local_1778;
  UFont *local_1770;
  FString local_1768;
  TVector<double>_u_0 local_1758;
  TVector<double>_u_0 local_1740;
  TVector<double>_u_0 local_1728;
  TVector<double>_u_0 local_1710;
  FScriptContainerElement *local_16f8;
  undefined4 uStack_16f0;
  undefined4 uStack_16ec;
  FLinearColor_u_0 local_16e8;
  FScriptContainerElement *local_16d8;
  undefined4 uStack_16d0;
  undefined4 uStack_16cc;
  FString local_16c8;
  FScriptContainerElement *local_16b8;
  undefined4 uStack_16b0;
  undefined4 uStack_16ac;
  FString local_16a8;
  FScriptContainerElement *local_1698;
  undefined4 uStack_1690;
  undefined4 uStack_168c;
  FString local_1688;
  TVector<double>_u_0 local_1678;
  FString local_1660;
  TVector2<double>_u_0 local_1650;
  FString local_1640;
  FString local_1630;
  FString local_1620;
  FString local_1610;
  FString local_1600;
  FString local_15f0;
  FString local_15e0;
  FString local_15d0;
  FString local_15c0;
  FString local_15b0;
  FString local_15a0;
  FString local_1590;
  FString local_1580;
  FString local_1570;
  FString local_1560;
  FString local_1550;
  FString local_1540;
  FString local_1530;
  TVector2<double>_u_0 local_1520;
  FString local_1510;
  FString local_1500;
  FString local_14f0;
  FString local_14e0;
  FString local_14d0;
  FString local_14c0;
  FString local_14b0;
  FString local_14a0;
  FString local_1490;
  FString local_1480;
  FString local_1470;
  FString local_1460;
  FString local_1450;
  FString local_1440;
  FString local_1430;
  FString local_1420;
  FString local_1410;
  FString local_1400;
  FString local_13f0;
  FString local_13e0;
  FString local_13d0;
  FString local_13c0;
  FString local_13b0;
  FString local_13a0;
  TVector2<double>_u_0 local_1390;
  wchar_t *local_1380;
  undefined4 uStack_1378;
  undefined4 uStack_1374;
  FLinearColor_u_0 local_1370;
  TVector2<double>_u_0 local_1360;
  FLinearColor_u_0 local_1350;
  TVector2<double>_u_0 local_1340;
  wchar_t *local_1328;
  undefined4 uStack_1320;
  undefined4 uStack_131c;
  FLinearColor_u_0 local_1318;
  FLinearColor_u_0 local_1308;
  TVector2<double>_u_0 local_12f8;
  FString local_12e8;
  TVector<double>_u_0 local_12d8;
  TVector<double>_u_0 local_12c0;
  TVector<double>_u_0 local_12a8;
  TVector<double>_u_0 local_1290;
  TVector<double>_u_0 local_1278;
  TVector<double>_u_0 local_1260;
  TVector<double>_u_0 local_1248;
  TVector<double>_u_0 local_1230;
  TVector<double>_u_0 local_1218 [2];
  TStringView<wchar_t> local_11d8;
  FString local_11c8;
  FString local_11b8;
  undefined1 local_11a8 [16];
  FCanvasTileItem local_1198;
  FDepthFieldGlowInfo local_10e8;
  FPlatformMemoryStats local_10a8;
  FRHIGPUUsageFractions local_1018;
  FCanvasTextItemBase local_ff8;
  UFont *local_e60;
  TReferenceControllerBase<1> *local_e20;
  char local_df8;
  FScriptContainerElement *local_df0;
  undefined8 uStack_de8;
  FCanvasTextItemBase local_dd8;
  UFont *local_c40;
  TReferenceControllerBase<1> *local_c00;
  char local_bd8;
  wchar_t *local_bd0;
  undefined8 uStack_bc8;
  FCanvasTextItemBase local_bb8;
  UFont *local_a20;
  TReferenceControllerBase<1> *local_9e0;
  char local_9b8;
  FScriptContainerElement *local_9b0;
  undefined8 uStack_9a8;
  FCanvasTextItemBase local_998;
  UFont *local_800;
  TReferenceControllerBase<1> *local_7c0;
  char local_798;
  FScriptContainerElement *local_790;
  undefined8 uStack_788;
  FCanvasTextItemBase local_778;
  UFont *local_5e0;
  TReferenceControllerBase<1> *local_5a0;
  char local_578;
  FScriptContainerElement *local_570;
  undefined8 uStack_568;
  FCanvasTextItemBase local_558;
  UFont *local_3c0;
  TReferenceControllerBase<1> *local_380;
  char local_358;
  FScriptContainerElement *local_350;
  undefined8 uStack_348;
  FDynamicResolutionStateInfos local_338;
  float local_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined8 local_fc;
  undefined4 local_f4;
  FName local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_19b8;
  local_1940 = param_1;
  local_1934 = (float)param_3;
  local_1928 = param_2;
  local_1858 = this;
  if ((FApp::bIsBenchmarking) ||
     (aVar11 = FApp::LastTime, aVar59 = FApp::CurrentTime, FApp::bUseFixedTimeStep)) {
    QueryPerformanceCounter(&local_1780);
    aVar59 = (atomic<double>)
             ((double)local_1780.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000);
    aVar11 = (atomic<double>)this->LastTime;
    if (this->LastTime == 0.0) {
      aVar11 = aVar59;
    }
    this->LastTime = (double)aVar59;
  }
  dVar66 = __real_3feccccccccccccd;
  dVar15 = __real_3fb999999999999a;
  dVar14 = __real_408f400000000000;
  fVar55 = (float)((double)aVar59 - (double)aVar11) * __real_447a0000;
  this->RawFrameTime = fVar55;
  this->FrameTime = (float)((double)this->FrameTime * dVar66 + (double)fVar55 * dVar15);
  fVar55 = (float)(FGenericPlatformTime::SecondsPerCycle * dVar14 * (double)GGameThreadTime);
  this->RawGameThreadTime = fVar55;
  this->GameThreadTime = (float)((double)this->GameThreadTime * dVar66 + (double)fVar55 * dVar15);
  fVar55 = (float)(FGenericPlatformTime::SecondsPerCycle * dVar14 *
                  (double)GGameThreadTimeCriticalPath);
  this->RawGameThreadTimeCriticalPath = fVar55;
  this->GameThreadTimeCriticalPath =
       (float)((double)fVar55 * dVar15 + (double)this->GameThreadTimeCriticalPath * dVar66);
  fVar55 = (float)(FGenericPlatformTime::SecondsPerCycle * dVar14 * (double)GRenderThreadTime);
  this->RawRenderThreadTime = fVar55;
  this->RenderThreadTime =
       (float)((double)this->RenderThreadTime * dVar66 + (double)fVar55 * dVar15);
  fVar55 = (float)(FGenericPlatformTime::SecondsPerCycle * dVar14 *
                  (double)GRenderThreadTimeCriticalPath);
  this->RawRenderThreadTimeCriticalPath = fVar55;
  this->RenderThreadTimeCriticalPath =
       (float)((double)this->RenderThreadTimeCriticalPath * dVar66 + (double)fVar55 * dVar15);
  fVar55 = (float)(FGenericPlatformTime::SecondsPerCycle * dVar14 * (double)GRHIThreadTime);
  this->RawRHITTime = fVar55;
  this->RHITTime = (float)((double)this->RHITTime * dVar66 + (double)fVar55 * dVar15);
  fVar55 = (float)((double)GInputLatencyTime * FGenericPlatformTime::SecondsPerCycle64 * dVar14);
  this->RawInputLatencyTime = fVar55;
  this->InputLatencyTime =
       (float)((double)this->InputLatencyTime * dVar66 + (double)fVar55 * dVar15);
  DynamicRenderScaling::TMap<float>::TMap<float>(&local_338.ResolutionFractionApproximations);
  DynamicRenderScaling::TMap<float>::TMap<float>(&local_338.ResolutionFractionUpperBounds);
  UEngine::GetDynamicResolutionCurrentStateInfos(GEngine,&local_338);
  dVar9 = __real_43e0000000000000;
  uVar45 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_17d0 = 0;
  if (uVar45 != 0) {
    for (; (uVar45 >> local_17d0 & 1) == 0; local_17d0 = local_17d0 + 1) {
    }
  }
  uVar49 = 0x20;
  if (uVar45 != 0) {
    uVar49 = (ulonglong)local_17d0;
  }
  local_17cc = 0;
  if (uVar45 != 0) {
    while( true ) {
      uVar26 = RHIGetGPUFrameCycles((uint)uVar49);
      fVar55 = (float)(FGenericPlatformTime::SecondsPerCycle * dVar14 * (double)uVar26);
      this->RawGPUFrameTime[uVar49] = fVar55;
      this->GPUFrameTime[uVar49] =
           (float)((double)this->GPUFrameTime[uVar49] * dVar66 + (double)fVar55 * dVar15);
      if (GRHIGlobals.SupportsGPUUsage != false) {
        pFVar30 = (*RHIGetGPUUsage)(&local_1018,(uint)uVar49);
        fVar55 = pFVar30->ClockScaling;
        fVar65 = pFVar30->CurrentProcessMHz;
        fVar69 = pFVar30->ExternalProcessesMHz;
        uVar54 = pFVar30->CurrentProcessMemoryUsage;
        uVar12 = pFVar30->ExternalProcessMemoryUsage;
        this->RawGPUClockFraction[uVar49] = fVar55;
        this->GPUClockFraction[uVar49] =
             (float)((double)this->GPUClockFraction[uVar49] * dVar66 + (double)fVar55 * dVar15);
        this->RawGPUUsageFraction[uVar49] = fVar65;
        this->GPUUsageFraction[uVar49] =
             (float)((double)fVar65 * dVar15 + (double)this->GPUUsageFraction[uVar49] * dVar66);
        this->RawGPUMemoryUsage[uVar49] = uVar54;
        lVar39 = 0;
        dVar57 = (double)this->GPUMemoryUsage[uVar49] * dVar66 + (double)uVar54 * dVar15;
        if ((dVar9 <= dVar57) && (dVar57 = dVar57 - dVar9, dVar57 < dVar9)) {
          lVar39 = -0x8000000000000000;
        }
        this->GPUMemoryUsage[uVar49] = (longlong)dVar57 + lVar39;
        this->RawGPUExternalUsageFraction[uVar49] = fVar69;
        fVar55 = (float)((double)fVar69 * dVar15 +
                        (double)this->GPUExternalUsageFraction[uVar49] * dVar66);
        this->GPUExternalUsageFraction[uVar49] = fVar55;
        this->RawGPUExternalMemoryUsage[uVar49] = uVar12;
        lVar39 = 0;
        dVar57 = (double)fVar55 * dVar66 + (double)uVar12 * dVar15;
        if ((dVar9 <= dVar57) && (dVar57 = dVar57 - dVar9, dVar57 < dVar9)) {
          lVar39 = -0x8000000000000000;
        }
        this->GPUExternalMemoryUsage[uVar49] = (longlong)dVar57 + lVar39;
      }
      uVar45 = uVar45 & ~(1 << ((byte)uVar49 & 0x1f));
      local_17c8 = 0;
      if (uVar45 != 0) {
        for (; (uVar45 >> local_17c8 & 1) == 0; local_17c8 = local_17c8 + 1) {
        }
      }
      if (uVar45 == 0) break;
      uVar49 = (ulonglong)local_17c8;
    }
  }
  if (FThreadStats::bPrimaryEnable != false) {
    TVar31 = FThreadSafeStaticStatInner<FStat_STAT_UnitFrame,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_UnitFrame,1> *)
                        &StatPtr_STAT_UnitFrame);
    local_f0 = *(FName *)(TVar31.StatIdPtr)->Name;
    FThreadStats::AddMessage<double>(local_f0,Set,(double)this->FrameTime,false);
    if (FThreadStats::bPrimaryEnable != false) {
      TVar31 = FThreadSafeStaticStatInner<FStat_STAT_UnitRender,1>::GetStatId
                         ((FThreadSafeStaticStatInner<FStat_STAT_UnitRender,1> *)
                          &StatPtr_STAT_UnitRender);
      local_f0 = *(FName *)(TVar31.StatIdPtr)->Name;
      FThreadStats::AddMessage<double>(local_f0,Set,(double)this->RenderThreadTime,false);
      if (FThreadStats::bPrimaryEnable != false) {
        TVar31 = FThreadSafeStaticStatInner<FStat_STAT_UnitRHIT,1>::GetStatId
                           ((FThreadSafeStaticStatInner<FStat_STAT_UnitRHIT,1> *)
                            &StatPtr_STAT_UnitRHIT);
        local_f0 = *(FName *)(TVar31.StatIdPtr)->Name;
        FThreadStats::AddMessage<double>(local_f0,Set,(double)this->RHITTime,false);
        if (FThreadStats::bPrimaryEnable != false) {
          TVar31 = FThreadSafeStaticStatInner<FStat_STAT_UnitGame,1>::GetStatId
                             ((FThreadSafeStaticStatInner<FStat_STAT_UnitGame,1> *)
                              &StatPtr_STAT_UnitGame);
          local_f0 = *(FName *)(TVar31.StatIdPtr)->Name;
          FThreadStats::AddMessage<double>(local_f0,Set,(double)this->GameThreadTime,false);
          if (FThreadStats::bPrimaryEnable != false) {
            TVar31 = FThreadSafeStaticStatInner<FStat_STAT_UnitGPU,1>::GetStatId
                               ((FThreadSafeStaticStatInner<FStat_STAT_UnitGPU,1> *)
                                &StatPtr_STAT_UnitGPU);
            local_f0 = *(FName *)(TVar31.StatIdPtr)->Name;
            FThreadStats::AddMessage<double>(local_f0,Set,(double)this->GPUFrameTime[0],false);
            if (FThreadStats::bPrimaryEnable != false) {
              TVar31 = FThreadSafeStaticStatInner<FStat_STAT_InputLatencyTime,1>::GetStatId
                                 ((FThreadSafeStaticStatInner<FStat_STAT_InputLatencyTime,1> *)
                                  &StatPtr_STAT_InputLatencyTime);
              local_f0 = *(FName *)(TVar31.StatIdPtr)->Name;
              FThreadStats::AddMessage<double>(local_f0,Set,(double)this->InputLatencyTime,false);
            }
          }
        }
      }
    }
  }
  UEngine::SetAverageUnitTimes
            (GEngine,this->FrameTime,this->RenderThreadTime,this->GameThreadTime,
             this->GPUFrameTime[0],this->RHITTime);
  local_110 = 0.0;
  fVar78 = 0.0;
  local_fc = 0;
  local_1914 = 0.0;
  pFVar2 = local_1940->ViewportClient;
  fVar55 = 0.0;
  local_f4 = 0;
  fVar65 = 0.0;
  fVar69 = 0.0;
  fVar76 = 0.0;
  local_10c = 0;
  uStack_104 = 0;
  if (pFVar2 == (FViewportClient *)0x0) {
    local_196c = '\0';
  }
  else {
    pcVar3 = *(code **)((longlong)*pFVar2 + 0x180);
    ::FString::FString(&local_1640,L"UnitCriticalPath");
    local_196c = (*pcVar3)(pFVar2,&local_1640);
    if (local_1640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1640.Data.AllocatorInstance.Data);
    }
  }
  pFVar2 = local_1940->ViewportClient;
  if (pFVar2 == (FViewportClient *)0x0) {
    local_1974 = '\0';
  }
  else {
    pcVar3 = *(code **)((longlong)*pFVar2 + 0x180);
    ::FString::FString(&local_1630,L"UnitMax");
    local_1974 = (*pcVar3)(pFVar2,&local_1630);
    if (local_1630.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1630.Data.AllocatorInstance.Data);
    }
  }
  pFVar2 = local_1940->ViewportClient;
  if (pFVar2 == (FViewportClient *)0x0) {
    local_196b = '\0';
  }
  else {
    pcVar3 = *(code **)((longlong)*pFVar2 + 0x180);
    ::FString::FString(&local_1620,L"TSR");
    local_196b = (*pcVar3)(pFVar2,&local_1620);
    if (local_1620.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1620.Data.AllocatorInstance.Data);
    }
  }
  pFVar2 = local_1940->ViewportClient;
  cVar23 = '\0';
  local_1964 = cVar23;
  if (pFVar2 != (FViewportClient *)0x0) {
    pcVar3 = *(code **)((longlong)*pFVar2 + 0x180);
    ::FString::FString(&local_1610,L"Raw");
    cVar23 = (*pcVar3)(pFVar2,&local_1610);
    local_1964 = cVar23;
    if (local_1610.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1610.Data.AllocatorInstance.Data);
    }
  }
  uVar45 = this->CurrentIndex;
  pFVar32 = this;
  if (cVar23 != '\0') {
    pFVar32 = (FStatUnitData *)&this->RawRenderThreadTime;
  }
  fVar79 = pFVar32->RenderThreadTime;
  uVar26 = 0;
  if ((int)uVar45 < (this->RenderThreadTimes).ArrayNum) {
    uVar26 = ~uVar45 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar3 = (code *)swi(3);
    iVar27 = (*pcVar3)();
    return iVar27;
  }
  *(float *)((this->RenderThreadTimes).AllocatorInstance.Data + (longlong)(int)uVar45 * 4) = fVar79;
  uVar45 = this->CurrentIndex;
  pfVar38 = &this->GameThreadTime;
  if (cVar23 != '\0') {
    pfVar38 = &this->RawGameThreadTime;
  }
  fVar79 = *pfVar38;
  uVar26 = 0;
  if ((int)uVar45 < (this->GameThreadTimes).ArrayNum) {
    uVar26 = ~uVar45 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar3 = (code *)swi(3);
    iVar27 = (*pcVar3)();
    return iVar27;
  }
  cVar20 = local_1964;
  *(float *)((this->GameThreadTimes).AllocatorInstance.Data + (longlong)(int)uVar45 * 4) = fVar79;
  uVar45 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_17c4 = 0;
  if (uVar45 != 0) {
    for (; (uVar45 >> local_17c4 & 1) == 0; local_17c4 = local_17c4 + 1) {
    }
  }
  uVar49 = 0x20;
  if (uVar45 != 0) {
    uVar49 = (ulonglong)local_17c4;
  }
  local_17c0 = 0;
  if (uVar45 != 0) {
    while( true ) {
      pfVar38 = this->RawGPUFrameTime;
      if (cVar20 == '\0') {
        pfVar38 = this->GPUFrameTime;
      }
      uVar26 = this->CurrentIndex;
      fVar79 = pfVar38[uVar49];
      uVar53 = 0;
      if ((int)uVar26 < this->GPUFrameTimes[uVar49].ArrayNum) {
        uVar53 = ~uVar26 >> 0x1f;
      }
      if ((uVar53 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar3 = (code *)swi(3);
        iVar27 = (*pcVar3)();
        return iVar27;
      }
      *(float *)(this->GPUFrameTimes[uVar49].AllocatorInstance.Data + (longlong)(int)uVar26 * 4) =
           fVar79;
      uVar45 = uVar45 & ~(1 << ((byte)uVar49 & 0x1f));
      local_17bc = 0;
      if (uVar45 != 0) {
        for (; (uVar45 >> local_17bc & 1) == 0; local_17bc = local_17bc + 1) {
        }
      }
      cVar23 = local_1964;
      if (uVar45 == 0) break;
      uVar49 = (ulonglong)local_17bc;
    }
  }
  uVar45 = this->CurrentIndex;
  pfVar38 = &this->FrameTime;
  if (cVar23 != '\0') {
    pfVar38 = &this->RawFrameTime;
  }
  uVar53 = 0;
  fVar79 = *pfVar38;
  uVar26 = uVar53;
  if ((int)uVar45 < (this->FrameTimes).ArrayNum) {
    uVar26 = ~uVar45 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar3 = (code *)swi(3);
    iVar27 = (*pcVar3)();
    return iVar27;
  }
  *(float *)((this->FrameTimes).AllocatorInstance.Data + (longlong)(int)uVar45 * 4) = fVar79;
  uVar45 = this->CurrentIndex;
  pfVar38 = &this->RHITTime;
  if (cVar23 != '\0') {
    pfVar38 = &this->RawRHITTime;
  }
  fVar79 = *pfVar38;
  uVar26 = uVar53;
  if ((int)uVar45 < (this->RHITTimes).ArrayNum) {
    uVar26 = ~uVar45 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar3 = (code *)swi(3);
    iVar27 = (*pcVar3)();
    return iVar27;
  }
  *(float *)((this->RHITTimes).AllocatorInstance.Data + (longlong)(int)uVar45 * 4) = fVar79;
  uVar45 = this->CurrentIndex;
  pfVar38 = &this->InputLatencyTime;
  if (cVar23 != '\0') {
    pfVar38 = &this->RawInputLatencyTime;
  }
  fVar79 = *pfVar38;
  if ((int)uVar45 < (this->InputLatencyTimes).ArrayNum) {
    uVar53 = ~uVar45 >> 0x1f;
  }
  if ((uVar53 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar3 = (code *)swi(3);
    iVar27 = (*pcVar3)();
    return iVar27;
  }
  *(float *)((this->InputLatencyTimes).AllocatorInstance.Data + (longlong)(int)uVar45 * 4) = fVar79;
  ppTVar33 = DynamicRenderScaling::FBudget::GetGlobalList();
  for (pTVar4 = *ppTVar33; pTVar4 != (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0;
      pTVar4 = (TLinkedList<DynamicRenderScaling::FBudget_*> *)pTVar4->_padding_) {
    pFVar5 = pTVar4->Element;
    iVar27 = DynamicRenderScaling::FBudget::GetGlobalListSize();
    iVar28 = local_338.ResolutionFractionApproximations.Array.ArrayNum;
    if (iVar28 != iVar27) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Array.Num() == FBudget::GetGlobalListSize()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                          ,0xd5,L"");
      if (bVar24) {
        pcVar3 = (code *)swi(3);
        iVar27 = (*pcVar3)();
        return iVar27;
      }
      iVar28 = local_338.ResolutionFractionApproximations.Array.ArrayNum;
    }
    uVar45 = pFVar5->BudgetId;
    uVar26 = 0;
    if ((int)uVar45 < iVar28) {
      uVar26 = ~uVar45 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar3 = (code *)swi(3);
      iVar27 = (*pcVar3)();
      return iVar27;
    }
    FVar41 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)
             &local_338.ResolutionFractionApproximations;
    if (local_338.ResolutionFractionApproximations.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
      FVar41 = local_338.ResolutionFractionApproximations.Array.AllocatorInstance.SecondaryData;
    }
    iVar27 = (this->ResolutionFractions).Array.ArrayNum;
    uVar29 = *(undefined4 *)((uchar *)((longlong)FVar41 + 8) + (longlong)(int)uVar45 * 0x10);
    iVar28 = DynamicRenderScaling::FBudget::GetGlobalListSize();
    if ((iVar27 != iVar28) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("Array.Num() == FBudget::GetGlobalListSize()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                            ,0xd5,L""), bVar24)) {
      pcVar3 = (code *)swi(3);
      iVar27 = (*pcVar3)();
      return iVar27;
    }
    uVar45 = pFVar5->BudgetId;
    uVar26 = 0;
    if ((int)uVar45 < (this->ResolutionFractions).Array.ArrayNum) {
      uVar26 = ~uVar45 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar3 = (code *)swi(3);
      iVar27 = (*pcVar3)();
      return iVar27;
    }
    FVar6 = (this->ResolutionFractions).Array.AllocatorInstance.SecondaryData;
    uVar26 = this->CurrentIndex;
    FVar46 = (ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
              )&this->ResolutionFractions;
    if (FVar6 != (ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
                  )0x0) {
      FVar46 = FVar6;
    }
    uVar53 = 0;
    if ((int)uVar26 < *(int *)((longlong)FVar46 + 0x10 + (longlong)(int)uVar45 * 0x18)) {
      uVar53 = ~uVar26 >> 0x1f;
    }
    if ((uVar53 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar3 = (code *)swi(3);
      iVar27 = (*pcVar3)();
      return iVar27;
    }
    *(undefined4 *)
     (*(longlong *)((longlong)FVar46 + 8 + (longlong)(int)uVar45 * 0x18) + (longlong)(int)uVar26 * 4
     ) = uVar29;
  }
  uVar49 = 0;
  this->CurrentIndex = this->CurrentIndex + 1;
  if (this->CurrentIndex == 200) {
    this->CurrentIndex = 0;
  }
  fVar79 = local_1914;
  if (local_1974 != '\0') {
    local_1920 = (TIntPoint<int>_u_0)0x0;
    uVar54 = uVar49;
    do {
      TVar13 = local_1920;
      iVar27 = (int)uVar49;
      if (((this->RenderThreadTimes).ArrayNum <= iVar27) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar3 = (code *)swi(3);
        iVar27 = (*pcVar3)();
        return iVar27;
      }
      if (fVar55 < *(float *)((this->RenderThreadTimes).AllocatorInstance.Data + uVar54)) {
        if (((this->RenderThreadTimes).ArrayNum <= iVar27) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar3 = (code *)swi(3);
          iVar27 = (*pcVar3)();
          return iVar27;
        }
        fVar55 = *(float *)((this->RenderThreadTimes).AllocatorInstance.Data + uVar54);
      }
      if (((this->GameThreadTimes).ArrayNum <= iVar27) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar3 = (code *)swi(3);
        iVar27 = (*pcVar3)();
        return iVar27;
      }
      if (fVar65 < *(float *)((this->GameThreadTimes).AllocatorInstance.Data + uVar54)) {
        if (((this->GameThreadTimes).ArrayNum <= iVar27) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar3 = (code *)swi(3);
          iVar27 = (*pcVar3)();
          return iVar27;
        }
        fVar65 = *(float *)((this->GameThreadTimes).AllocatorInstance.Data + uVar54);
      }
      uVar45 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
      local_17b8 = 0;
      if (uVar45 != 0) {
        for (; (uVar45 >> local_17b8 & 1) == 0; local_17b8 = local_17b8 + 1) {
        }
      }
      uVar26 = 0x20;
      if (uVar45 != 0) {
        uVar26 = local_17b8;
      }
      local_17b4 = 0;
      bVar24 = uVar45 != 0;
      while (bVar24) {
        if ((this->GPUFrameTimes[uVar26].ArrayNum <= iVar27) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar3 = (code *)swi(3);
          iVar27 = (*pcVar3)();
          return iVar27;
        }
        fVar79 = *(float *)(this->GPUFrameTimes[uVar26].AllocatorInstance.Data + uVar54);
        if ((&local_110)[uVar26] <= fVar79 && fVar79 != (&local_110)[uVar26]) {
          if ((this->GPUFrameTimes[uVar26].ArrayNum <= iVar27) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar3 = (code *)swi(3);
            iVar27 = (*pcVar3)();
            return iVar27;
          }
          (&local_110)[uVar26] =
               *(float *)(this->GPUFrameTimes[uVar26].AllocatorInstance.Data + uVar54);
        }
        uVar45 = uVar45 & ~(1 << ((byte)uVar26 & 0x1f));
        uVar26 = 0;
        bVar24 = uVar45 != 0;
        TVar13 = local_1920;
        local_17b0 = uVar26;
        if (bVar24) {
          for (; local_17b0 = uVar26, (uVar45 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
          }
        }
      }
      if (((this->FrameTimes).ArrayNum <= iVar27) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar3 = (code *)swi(3);
        iVar27 = (*pcVar3)();
        return iVar27;
      }
      if (fVar69 < *(float *)((this->FrameTimes).AllocatorInstance.Data + uVar54)) {
        if (((this->FrameTimes).ArrayNum <= iVar27) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar3 = (code *)swi(3);
          iVar27 = (*pcVar3)();
          return iVar27;
        }
        fVar69 = *(float *)((this->FrameTimes).AllocatorInstance.Data + uVar54);
      }
      if (((this->RHITTimes).ArrayNum <= iVar27) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar3 = (code *)swi(3);
        iVar27 = (*pcVar3)();
        return iVar27;
      }
      if (fVar76 < *(float *)((this->RHITTimes).AllocatorInstance.Data + uVar54)) {
        if (((this->RHITTimes).ArrayNum <= iVar27) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar3 = (code *)swi(3);
          iVar27 = (*pcVar3)();
          return iVar27;
        }
        fVar76 = *(float *)((this->RHITTimes).AllocatorInstance.Data + uVar54);
      }
      if (((this->InputLatencyTimes).ArrayNum <= iVar27) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar3 = (code *)swi(3);
        iVar27 = (*pcVar3)();
        return iVar27;
      }
      if (fVar78 < *(float *)((this->InputLatencyTimes).AllocatorInstance.Data + uVar54)) {
        if (((this->InputLatencyTimes).ArrayNum <= iVar27) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar3 = (code *)swi(3);
          iVar27 = (*pcVar3)();
          return iVar27;
        }
        fVar78 = *(float *)((this->InputLatencyTimes).AllocatorInstance.Data + uVar54);
      }
      local_1920._s_0 = TVar13._s_0 + 1;
      uVar49 = (ulonglong)(iVar27 + 1U);
      uVar54 = uVar54 + 4;
      fVar79 = fVar78;
    } while ((int)(iVar27 + 1U) < 200);
  }
  local_1914 = fVar79;
  pFVar47 = local_1940;
  local_1948.Bits = 0xffe96d63;
  local_1970.Bits = 0xff7fca9f;
  local_18f4.Bits = 0xfff4ba70;
  local_18f0[0].Bits = 0xffcc99cc;
  bVar24 = UEngine::IsStereoscopic3D(GEngine,local_1940);
  local_18a8 = UEngine::GetSmallFont();
  pFVar2 = pFVar47->ViewportClient;
  if (pFVar2 == (FViewportClient *)0x0) {
    local_194c[0] = '\0';
  }
  else {
    pcVar3 = *(code **)((longlong)*pFVar2 + 0x180);
    ::FString::FString(&local_1600,L"UnitGraph");
    local_194c[0] = (*pcVar3)(pFVar2,&local_1600);
    if (local_1600.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1600.Data.AllocatorInstance.Data);
    }
  }
  bVar19 = local_196c;
  bVar43 = 0;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  uVar45 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_17ac = 0;
  if (uVar45 != 0) {
    for (; (uVar45 >> local_17ac & 1) == 0; local_17ac = local_17ac + 1) {
    }
  }
  uVar49 = 0x20;
  if (uVar45 != 0) {
    uVar49 = (ulonglong)local_17ac;
  }
  local_17a8 = 0;
  if (uVar45 != 0) {
    while( true ) {
      *(bool *)((longlong)&local_f0.ComparisonIndex.Value + uVar49) =
           0.0 < this->RawGPUFrameTime[uVar49];
      uVar45 = uVar45 & ~(1 << ((byte)uVar49 & 0x1f));
      local_17a4 = 0;
      if (uVar45 != 0) {
        for (; (uVar45 >> local_17a4 & 1) == 0; local_17a4 = local_17a4 + 1) {
        }
      }
      if (uVar45 == 0) break;
      uVar49 = (ulonglong)local_17a4;
    }
  }
  local_1938 = 0.0 < this->InputLatencyTime;
  local_1968.Bits = 0xffdcdcdc;
  iVar28 = (local_196c != '\0') + 1;
  local_192c = iVar28;
  local_18b4 = UFont::GetStringSize(local_18a8,L" 0000.00 ms ");
  fVar65 = __real_3f000000;
  fVar55 = __real_3f800000;
  iVar27 = (bVar19 != '\0') + 2;
  if (local_1974 == '\0') {
    iVar27 = (bVar19 != '\0') + 1;
  }
  fVar69 = __real_3f800000;
  if (bVar24) {
    fVar69 = __real_3f000000;
  }
  auVar60 = ZEXT416((uint)fVar69);
  local_18b8 = (int)((float)(int)local_1934 * fVar69);
  local_1930 = iVar27;
  fVar69 = UFont::GetMaxCharHeight(local_18a8);
  local_1960 = (int)(fVar69 * __real_3f8ccccd);
  local_18e0 = &local_18b4;
  local_18d8 = (float *)&param_4;
  local_18d0 = &local_1960;
  local_18c8 = &local_1928;
  local_18c0 = &local_18a8;
  local_1830 = &local_18a8;
  local_1820 = &local_18b4;
  local_1818 = &param_4;
  local_1810 = &local_1960;
  local_1808 = &local_1928;
  local_1800 = local_194c;
  local_18e8 = &local_18b8;
  local_1828 = &local_18b8;
  if ((bVar19 != '\0') || (local_1974 != '\0')) {
    ::FString::FString(&local_15f0,L"Avg");
    `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
              (&local_18e8,0,0,iVar27,&local_15f0,&FColor::White);
    if (local_15f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_15f0.Data.AllocatorInstance.Data);
    }
    if (bVar19 != '\0') {
      ::FString::FString(&local_15e0,L"Critical");
      `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
                (&local_18e8,0,1,iVar27,&local_15e0,&FColor::White);
      if (local_15e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_15e0.Data.AllocatorInstance.Data);
      }
    }
    if (local_1974 != '\0') {
      ::FString::FString(&local_15d0,L"Max");
      `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
                (&local_18e8,0,iVar28,iVar27,&local_15d0,&FColor::White);
      if (local_15d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_15d0.Data.AllocatorInstance.Data);
      }
    }
    param_4 = param_4 + local_1960;
  }
  local_1900.Bits = 0xff64ff64;
  `FStatUnitData::DrawStat'::__l82::<lambda_2>::operator()
            (&local_1830,0,iVar27,L"Frame",(FColor *)&local_1900._s_0);
  UEngine::GetFrameTimeDisplayColor(GEngine,auVar60._0_4_);
  ::FString::PrintfImpl(&local_15c0,L"%3.2f ms");
  `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
            (&local_18e8,0,0,iVar27,&local_15c0,&local_1878);
  if (local_15c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_15c0.Data.AllocatorInstance.Data);
  }
  if (local_1974 != '\0') {
    UEngine::GetFrameTimeDisplayColor(GEngine,auVar60._0_4_);
    ::FString::PrintfImpl(&local_1660,L"%4.2f ms");
    `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
              (&local_18e8,0,iVar28,iVar27,&local_1660,local_1860);
    if (local_1660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1660.Data.AllocatorInstance.Data);
    }
  }
  param_4 = param_4 + local_1960;
  local_1910.Bits = 0xffff6464;
  `FStatUnitData::DrawStat'::__l82::<lambda_2>::operator()
            (&local_1830,0,iVar27,L"Game",(FColor *)&local_1910._s_0);
  UEngine::GetFrameTimeDisplayColor(GEngine,auVar60._0_4_);
  ::FString::PrintfImpl(&local_15a0,L"%3.2f ms");
  `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
            (&local_18e8,0,0,iVar27,&local_15a0,&local_1850);
  if (local_15a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_15a0.Data.AllocatorInstance.Data);
  }
  if (bVar19 != '\0') {
    UEngine::GetFrameTimeDisplayColor(GEngine,auVar60._0_4_);
    ::FString::PrintfImpl(&local_1590,L"%3.2f ms");
    `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
              (&local_18e8,0,1,iVar27,&local_1590,&local_184c);
    if (local_1590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1590.Data.AllocatorInstance.Data);
    }
  }
  if (local_1974 != '\0') {
    UEngine::GetFrameTimeDisplayColor(GEngine,auVar60._0_4_);
    ::FString::PrintfImpl(&local_1580,L"%4.2f ms");
    `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
              (&local_18e8,0,iVar28,iVar27,&local_1580,&local_1848);
    if (local_1580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1580.Data.AllocatorInstance.Data);
    }
  }
  param_4 = param_4 + local_1960;
  local_190c.Bits = 0xff6464ff;
  `FStatUnitData::DrawStat'::__l82::<lambda_2>::operator()
            (&local_1830,0,iVar27,L"Draw",(FColor *)&local_190c._s_0);
  UEngine::GetFrameTimeDisplayColor(GEngine,auVar60._0_4_);
  ::FString::PrintfImpl(&local_1570,L"%3.2f ms");
  `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
            (&local_18e8,0,0,iVar27,&local_1570,&local_18a0);
  if (local_1570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1570.Data.AllocatorInstance.Data);
  }
  if (bVar19 != '\0') {
    UEngine::GetFrameTimeDisplayColor(GEngine,auVar60._0_4_);
    ::FString::PrintfImpl(&local_1560,L"%3.2f ms");
    `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
              (&local_18e8,0,1,iVar27,&local_1560,&local_189c);
    if (local_1560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1560.Data.AllocatorInstance.Data);
    }
  }
  if (local_1974 != '\0') {
    UEngine::GetFrameTimeDisplayColor(GEngine,auVar60._0_4_);
    ::FString::PrintfImpl(&local_1550,L"%4.2f ms");
    `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
              (&local_18e8,0,iVar28,iVar27,&local_1550,&local_1898);
    if (local_1550.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1550.Data.AllocatorInstance.Data);
    }
  }
  param_4 = param_4 + local_1960;
  if (GIsRunningRHIInSeparateThread_InternalUseOnly != false) {
    local_1908.Bits = 0xffff64ff;
    `FStatUnitData::DrawStat'::__l82::<lambda_2>::operator()
              (&local_1830,0,iVar27,L"RHIT",(FColor *)&local_1908._s_0);
    UEngine::GetFrameTimeDisplayColor(GEngine,auVar60._0_4_);
    ::FString::PrintfImpl(&local_1540,L"%3.2f ms");
    `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
              (&local_18e8,0,0,iVar27,&local_1540,&local_1894);
    if (local_1540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1540.Data.AllocatorInstance.Data);
    }
    if (local_1974 != '\0') {
      UEngine::GetFrameTimeDisplayColor(GEngine,auVar60._0_4_);
      ::FString::PrintfImpl(&local_1530,L"%4.2f ms");
      `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
                (&local_18e8,0,iVar28,iVar27,&local_1530,&local_1890);
      if (local_1530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1530.Data.AllocatorInstance.Data);
      }
    }
    param_4 = param_4 + local_1960;
  }
  if ((GNumExplicitGPUsForRendering < 2) && (GVirtualMGPU == 0)) {
    local_196c = 0;
  }
  else {
    local_196c = 1;
  }
  local_1958 = 1;
  local_1904.Bits = 0xffffff64;
  if (GRHIGlobals.SupportsGPUUsage != false) {
    local_1958 = 6;
  }
  fVar69 = (float)(iVar27 * GNumExplicitGPUsForRendering);
  uVar45 = (uint)local_196c;
  iVar28 = uVar45 + 1;
  local_1958 = local_1958 + (uint)local_196c;
  local_1954 = fVar69;
  `FStatUnitData::DrawStat'::__l82::<lambda_2>::operator()
            (&local_1830,(uint)local_196c,(int)fVar69,L"GPU Time",(FColor *)&local_1904._s_0);
  if (GRHIGlobals.SupportsGPUUsage != false) {
    `FStatUnitData::DrawStat'::__l82::<lambda_2>::operator()
              (&local_1830,iVar28,(int)fVar69,L"GPU Clock",(FColor *)&local_1968._s_0);
    `FStatUnitData::DrawStat'::__l82::<lambda_2>::operator()
              (&local_1830,uVar45 + 2,(int)fVar69,L"GPU Usage",(FColor *)&local_1968._s_0);
    `FStatUnitData::DrawStat'::__l82::<lambda_2>::operator()
              (&local_1830,uVar45 + 3,(int)fVar69,L"GPU Mem",(FColor *)&local_1968._s_0);
    `FStatUnitData::DrawStat'::__l82::<lambda_2>::operator()
              (&local_1830,uVar45 + 4,(int)fVar69,L"GPUExt Usage",(FColor *)&local_1968._s_0);
    iVar28 = uVar45 + 6;
    `FStatUnitData::DrawStat'::__l82::<lambda_2>::operator()
              (&local_1830,uVar45 + 5,(int)fVar69,L"GPUExt Mem",(FColor *)&local_1968._s_0);
  }
  if ((iVar28 != local_1958) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("GPURowId == GPURowCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealClient.cpp"
                          ,0x348,L""), bVar24)) {
    pcVar3 = (code *)swi(3);
    iVar27 = (*pcVar3)();
    return iVar27;
  }
  FVar22 = local_18f4;
  FVar21 = local_1948;
  fVar76 = __real_4f400000;
  dVar15 = __real_41d0000000000000;
  fVar69 = __real_4f000000;
  dVar9 = __real_4130000000000000;
  dVar14 = __real_4090000000000000;
  local_1944 = __real_3f400000;
  local_1918.Index = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_17a0 = 0;
  if (local_1918.Index != 0U) {
    for (; ((uint)local_1918.Index >> local_17a0 & 1) == 0; local_17a0 = local_17a0 + 1) {
    }
  }
  uVar49 = 0x20;
  if (local_1918.Index != 0U) {
    uVar49 = (ulonglong)local_17a0;
  }
  local_195c = (uint)uVar49;
  local_179c = 0;
  fVar78 = __real_3e800000;
  if (local_1918.Index != 0) {
    do {
      iVar28 = 0;
      if (local_196c != 0) {
        if (GVirtualMGPU == 0) {
          bVar43 = bVar43 | 0x40;
          __return_storage_ptr__ = &local_11c8;
          pwVar42 = L"GPU%d";
        }
        else {
          bVar43 = bVar43 | 0x20;
          __return_storage_ptr__ = &local_11b8;
          pwVar42 = L"VGPU%d";
        }
        ::FString::PrintfImpl(__return_storage_ptr__,pwVar42);
        fVar55 = local_1954;
        iVar27 = (int)uVar49 * iVar27;
        iVar28 = 1;
        if (((int)local_1954 <= iVar27) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("ColumnId < ColumnCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealClient.cpp"
                                ,0x2b4,L""), bVar24)) {
          pcVar3 = (code *)swi(3);
          iVar27 = (*pcVar3)();
          return iVar27;
        }
        local_1934 = (float)(*local_18e8 - (((int)fVar55 - iVar27) + -1) * *local_18e0);
        local_1950 = *local_18d8;
        pFVar7 = *local_18c8;
        local_17e0._s_0.R = FLinearColor::sRGBToLinearTable[local_1968._s_0.R];
        local_17e0._s_0.G = FLinearColor::sRGBToLinearTable[local_1968._s_0.G];
        local_17e0._s_0.B = FLinearColor::sRGBToLinearTable[local_1968._s_0.B];
        pUVar37 = *local_18c0;
        local_17e0._s_0.A = (float)(local_1968.Bits >> 0x18) * __real_3b808081;
        if ((__return_storage_ptr__->Data).ArrayNum == 0) {
          local_16f8 = (FScriptContainerElement *)0x15060d16c;
LAB_14893242d:
          sVar34 = wcslen((wchar_t *)local_16f8);
          uVar29 = (undefined4)sVar34;
        }
        else {
          local_16f8 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
          uVar29 = 0;
          if (local_16f8 != (FScriptContainerElement *)0x0) goto LAB_14893242d;
        }
        local_1520._s_0.X = (double)(int)local_1934;
        auVar60._0_8_ = (double)(int)local_1950;
        auVar60._8_8_ = 0;
        uStack_16f0 = uVar29;
        local_1520._s_0.Y = auVar60._0_8_;
        FCanvasTextItemBase::FCanvasTextItemBase
                  (&local_ff8,(TVector2<double> *)&local_1520._s_0,(FLinearColor *)&local_17e0._s_0)
        ;
        local_df8 = '\0';
        local_ff8._padding_._4_4_ = 2;
        local_ff8._padding_ = (longlong)&___7FCanvasTextStringViewItem__6B_;
        uStack_de8 = CONCAT44(uStack_16ec,uStack_16f0);
        local_df0 = local_16f8;
        if ((pUVar37 == (UFont *)0x0) || ((pUVar37->ImportOptions).bUseDistanceFieldAlpha == 0)) {
          local_ff8.ShadowOffset.field0_0x0._s_0.X =
               (double)CONCAT44(_UNK_150689684,___xmm_3ff00000000000003ff0000000000000);
          local_ff8.ShadowOffset.field0_0x0._s_0.Y = (double)CONCAT44(_UNK_15068968c,_UNK_150689688)
          ;
          local_ff8.FontRenderInfo._0_4_ = local_ff8.FontRenderInfo._0_4_ | 2;
          local_ff8.ShadowColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
        }
        else {
          local_ff8._padding_._4_4_ = 6;
        }
        local_e60 = pUVar37;
        FCanvasTextItemBase::Draw(&local_ff8,pFVar7);
        if (pFVar7->DrawMode == CDM_ImmediateDrawing) {
          FCanvas::Flush_GameThread(pFVar7,false);
        }
        if (local_df8 != '\0') {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e20);
        }
        local_ff8.TileItem._padding_ = (longlong)&___7FCanvasItem__6B_;
        local_ff8._padding_ = (longlong)&___7FCanvasItem__6B_;
        if (((bVar43 & 0x40) != 0) &&
           (bVar43 = bVar43 & 0xbf,
           local_11c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_11c8.Data.AllocatorInstance.Data);
        }
        if (((bVar43 & 0x20) != 0) &&
           (bVar43 = bVar43 & 0xdf,
           local_11b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_11b8.Data.AllocatorInstance.Data);
        }
        uVar49 = (ulonglong)local_195c;
        iVar27 = local_1930;
      }
      if (*(char *)((longlong)&local_f0.ComparisonIndex.Value + uVar49) != '\0') {
        UEngine::GetFrameTimeDisplayColor(GEngine,auVar60._0_4_);
        ::FString::PrintfImpl(&local_1510,L"%3.2f ms");
        fVar55 = (float)(local_195c * iVar27);
        local_1950 = fVar55;
        `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
                  (&local_18e8,iVar28,(int)fVar55,(int)local_1954,&local_1510,&local_188c);
        if (local_1510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1510.Data.AllocatorInstance.Data);
        }
        if (local_1974 != '\0') {
          UEngine::GetFrameTimeDisplayColor(GEngine,auVar60._0_4_);
          ::FString::PrintfImpl(&local_15b0,L"%4.2f ms");
          `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
                    (&local_18e8,iVar28,local_192c + (int)fVar55,(int)local_1954,&local_15b0,
                     &local_1888);
          fVar78 = __real_3e800000;
          if (local_15b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_15b0.Data.AllocatorInstance.Data);
            fVar78 = __real_3e800000;
          }
        }
        iVar51 = iVar28 + 1;
        if (GRHIGlobals.SupportsGPUUsage != false) {
          if ((local_195c != 0) && (GVirtualMGPU != 0)) goto LAB_148932a85;
          local_1884 = FVar21;
          if ((fVar65 <= this->GPUClockFraction[uVar49]) &&
             (local_1884 = local_1970, this->GPUClockFraction[uVar49] < local_1944)) {
            local_1884 = FVar22;
          }
          ::FString::PrintfImpl(&local_14f0,L"%3.2f %%");
          `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
                    (&local_18e8,iVar51,(int)local_1950,(int)local_1954,&local_14f0,
                     (FColor *)&local_1884._s_0);
          if (local_14f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_14f0.Data.AllocatorInstance.Data);
          }
          local_1880 = FVar21;
          if ((fVar65 <= this->GPUUsageFraction[uVar49]) &&
             (local_1880 = local_1970, this->GPUUsageFraction[uVar49] < local_1944)) {
            local_1880 = FVar22;
          }
          ::FString::PrintfImpl(&local_14e0,L"%3.2f %%");
          `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
                    (&local_18e8,iVar28 + 2,(int)local_1950,(int)local_1954,&local_14e0,
                     (FColor *)&local_1880._s_0);
          if (local_14e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_14e0.Data.AllocatorInstance.Data);
          }
          fVar55 = (float)this->GPUMemoryUsage[uVar49];
          local_187c = FVar21;
          if ((fVar55 <= fVar76) && (local_187c = local_1970, fVar69 < fVar55)) {
            local_187c = FVar22;
          }
          dVar66 = (double)this->GPUMemoryUsage[uVar49];
          if (dVar66 <= dVar15) {
            if (dVar66 <= dVar9) {
              if (dVar66 <= dVar14) {
                pwVar42 = L"%.2f B";
              }
              else {
                pwVar42 = L"%.2f KB";
              }
            }
            else {
              pwVar42 = L"%.2f MB";
            }
          }
          else {
            pwVar42 = L"%.2f GB";
          }
          ::FString::PrintfImpl(&local_14d0,pwVar42);
          `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
                    (&local_18e8,iVar28 + 3,(int)local_1950,(int)local_1954,&local_14d0,
                     (FColor *)&local_187c._s_0);
          if (local_14d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_14d0.Data.AllocatorInstance.Data);
          }
          local_17f8[0] = FVar21;
          if ((this->GPUExternalUsageFraction[uVar49] <= fVar65) &&
             (local_17f8[0] = local_1970, fVar78 < this->GPUExternalUsageFraction[uVar49])) {
            local_17f8[0] = FVar22;
          }
          ::FString::PrintfImpl(&local_14c0,L"%3.2f %%");
          `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
                    (&local_18e8,iVar28 + 4,(int)local_1950,(int)local_1954,&local_14c0,
                     (FColor *)&local_17f8[0]._s_0);
          if (local_14c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_14c0.Data.AllocatorInstance.Data);
          }
          fVar55 = (float)this->GPUExternalMemoryUsage[uVar49];
          local_1874 = FVar21;
          if ((fVar55 <= fVar76) && (local_1874 = local_1970, fVar69 < fVar55)) {
            local_1874 = FVar22;
          }
          iVar51 = iVar28 + 6;
          dVar66 = (double)this->GPUExternalMemoryUsage[uVar49];
          if (dVar66 <= dVar15) {
            if (dVar66 <= dVar9) {
              if (dVar66 <= dVar14) {
                pwVar42 = L"%.2f B";
              }
              else {
                pwVar42 = L"%.2f KB";
              }
            }
            else {
              pwVar42 = L"%.2f MB";
            }
          }
          else {
            pwVar42 = L"%.2f GB";
          }
          ::FString::PrintfImpl(&local_14b0,pwVar42);
          `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
                    (&local_18e8,iVar28 + 5,(int)local_1950,(int)local_1954,&local_14b0,
                     (FColor *)&local_1874._s_0);
          if (local_14b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_14b0.Data.AllocatorInstance.Data);
          }
        }
        if ((iVar51 != local_1958) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("GPURowId == GPURowCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealClient.cpp"
                                ,0x399,L""), bVar24)) {
          pcVar3 = (code *)swi(3);
          iVar27 = (*pcVar3)();
          return iVar27;
        }
      }
LAB_148932a85:
      local_1918.Index = local_1918.Index & ~(1 << ((byte)local_195c & 0x1f));
      local_1798 = 0;
      if (local_1918.Index != 0U) {
        for (; ((uint)local_1918.Index >> local_1798 & 1) == 0; local_1798 = local_1798 + 1) {
        }
      }
      local_195c = 0x20;
      fVar55 = __real_3f800000;
      if (local_1918.Index == 0U) break;
      uVar49 = (ulonglong)local_1798;
      local_195c = local_1798;
    } while( true );
  }
  FVar52 = local_1970;
  local_1918.Index = 0;
  param_4 = param_4 + local_1958 * local_1960;
  if (local_1938 != '\0') {
    local_18fc.Bits = 0xffffff64;
    `FStatUnitData::DrawStat'::__l82::<lambda_2>::operator()
              (&local_1830,0,iVar27,L"Input",(FColor *)&local_18fc._s_0);
    UEngine::GetFrameTimeDisplayColor(GEngine,auVar60._0_4_);
    ::FString::PrintfImpl(&local_14a0,L"%3.2f ms");
    `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
              (&local_18e8,0,0,iVar27,&local_14a0,&local_1870);
    fVar65 = auVar60._0_4_;
    if (local_14a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_14a0.Data.AllocatorInstance.Data);
      fVar65 = auVar60._0_4_;
    }
    if (local_1974 != '\0') {
      UEngine::GetFrameTimeDisplayColor(GEngine,fVar65);
      ::FString::PrintfImpl(&local_1490,L"%4.2f ms");
      `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
                (&local_18e8,0,local_192c,iVar27,&local_1490,&local_186c);
      if (local_1490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1490.Data.AllocatorInstance.Data);
      }
    }
    param_4 = param_4 + local_1960;
  }
  if (local_1974 == '\0') {
    uVar35 = FGenericPlatformMemory::GetMemoryUsedFast();
    if (uVar35 != 0) {
      `FStatUnitData::DrawStat'::__l82::<lambda_2>::operator()
                (&local_1830,0,iVar27,L"Mem",(FColor *)&local_1968._s_0);
      dVar66 = (double)uVar35;
      if (dVar66 <= dVar15) {
        if (dVar66 <= dVar9) {
          if (dVar66 <= dVar14) {
            pwVar42 = L"%.2f B";
          }
          else {
            pwVar42 = L"%.2f KB";
          }
        }
        else {
          pwVar42 = L"%.2f MB";
        }
      }
      else {
        pwVar42 = L"%.2f GB";
      }
      ::FString::PrintfImpl(&local_1440,pwVar42);
      `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
                (&local_18e8,0,0,iVar27,&local_1440,(FColor *)&local_1970._s_0);
      local_1450.Data.AllocatorInstance.Data = local_1440.Data.AllocatorInstance.Data;
      goto LAB_14893305f;
    }
  }
  else {
    FWindowsPlatformMemory::GetStats(&local_10a8);
    `FStatUnitData::DrawStat'::__l82::<lambda_2>::operator()
              (&local_1830,0,iVar27,L"Mem",(FColor *)&local_1968._s_0);
    dVar66 = (double)(ulonglong)local_10a8._padding_;
    if (dVar66 <= dVar15) {
      if (dVar66 <= dVar9) {
        if (dVar66 <= dVar14) {
          pwVar42 = L"%.2f B";
        }
        else {
          pwVar42 = L"%.2f KB";
        }
      }
      else {
        pwVar42 = L"%.2f MB";
      }
    }
    else {
      pwVar42 = L"%.2f GB";
    }
    ::FString::PrintfImpl(&local_1480,pwVar42);
    `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
              (&local_18e8,0,0,iVar27,&local_1480,(FColor *)&local_1970._s_0);
    if (local_1480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1480.Data.AllocatorInstance.Data);
    }
    dVar66 = (double)(ulonglong)local_10a8._padding_;
    if (dVar66 <= dVar15) {
      if (dVar66 <= dVar9) {
        if (dVar66 <= dVar14) {
          pwVar42 = L"%.2f B";
        }
        else {
          pwVar42 = L"%.2f KB";
        }
      }
      else {
        pwVar42 = L"%.2f MB";
      }
    }
    else {
      pwVar42 = L"%.2f GB";
    }
    ::FString::PrintfImpl(&local_1470,pwVar42);
    iVar28 = local_192c;
    `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
              (&local_18e8,0,local_192c,iVar27,&local_1470,(FColor *)&local_1970._s_0);
    if (local_1470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1470.Data.AllocatorInstance.Data);
    }
    param_4 = param_4 + local_1960;
    `FStatUnitData::DrawStat'::__l82::<lambda_2>::operator()
              (&local_1830,0,iVar27,L"VMem",(FColor *)&local_1968._s_0);
    dVar66 = (double)(ulonglong)local_10a8._padding_;
    if (dVar66 <= dVar15) {
      if (dVar66 <= dVar9) {
        if (dVar66 <= dVar14) {
          pwVar42 = L"%.2f B";
        }
        else {
          pwVar42 = L"%.2f KB";
        }
      }
      else {
        pwVar42 = L"%.2f MB";
      }
    }
    else {
      pwVar42 = L"%.2f GB";
    }
    ::FString::PrintfImpl(&local_1460,pwVar42);
    `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
              (&local_18e8,0,0,iVar27,&local_1460,(FColor *)&local_1970._s_0);
    if (local_1460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1460.Data.AllocatorInstance.Data);
    }
    dVar66 = (double)(ulonglong)local_10a8._padding_;
    if (dVar66 <= dVar15) {
      if (dVar66 <= dVar9) {
        if (dVar66 <= dVar14) {
          pwVar42 = L"%.2f B";
        }
        else {
          pwVar42 = L"%.2f KB";
        }
      }
      else {
        pwVar42 = L"%.2f MB";
      }
    }
    else {
      pwVar42 = L"%.2f GB";
    }
    ::FString::PrintfImpl(&local_1450,pwVar42);
    `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
              (&local_18e8,0,iVar28,iVar27,&local_1450,(FColor *)&local_1970._s_0);
LAB_14893305f:
    if (local_1450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1450.Data.AllocatorInstance.Data);
    }
    param_4 = param_4 + local_1960;
  }
  fVar65 = __real_3f333333;
  local_1920 = GPixelRenderCounters.RenderResolution.field0_0x0;
  if (local_338.Status - Enabled < 2) {
    iVar28 = DynamicRenderScaling::FBudget::GetGlobalListSize();
    if ((local_338.ResolutionFractionApproximations.Array.ArrayNum != iVar28) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("Array.Num() == FBudget::GetGlobalListSize()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                            ,0xd5,L""), bVar24)) {
      pcVar3 = (code *)swi(3);
      iVar27 = (*pcVar3)();
      return iVar27;
    }
    lVar39 = (longlong)GDynamicPrimaryResolutionFraction.BudgetId;
    uVar45 = 0;
    if (GDynamicPrimaryResolutionFraction.BudgetId <
        local_338.ResolutionFractionApproximations.Array.ArrayNum) {
      uVar45 = (uint)~GDynamicPrimaryResolutionFraction.BudgetId >> 0x1f;
    }
    if ((uVar45 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar3 = (code *)swi(3);
      iVar27 = (*pcVar3)();
      return iVar27;
    }
    local_18f8.Bits = 0xffffa064;
    FVar41 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)
             &local_338.ResolutionFractionApproximations;
    if (local_338.ResolutionFractionApproximations.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
      FVar41 = local_338.ResolutionFractionApproximations.Array.AllocatorInstance.SecondaryData;
    }
    fVar69 = *(float *)((uchar *)((longlong)FVar41 + 8) + lVar39 * 0x10);
    `FStatUnitData::DrawStat'::__l82::<lambda_2>::operator()
              (&local_1830,0,iVar27,L"DynRes",(FColor *)&local_18f8._s_0);
    fVar76 = __real_3f7851ec;
    if (local_338.Status == Enabled) {
      local_1868 = FVar21;
      if (fVar65 <= fVar69) {
        fVar78 = fVar69 * __real_3f7851ec;
        if (fVar55 <= fVar69 * __real_3f7851ec) {
          fVar78 = fVar55;
        }
        local_1868 = FVar52;
        if (fVar69 < fVar78) {
          local_1868 = FVar22;
        }
      }
      ::FString::PrintfImpl(&local_1420,L"%3.1f%% (%dx%d)");
      `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
                (&local_18e8,0,0,iVar27,&local_1420,(FColor *)&local_1868._s_0);
    }
    else {
      pIVar36 = UEngine::GetDynamicResolutionState(GEngine);
      if (pIVar36 != (IDynamicResolutionState *)0x0) {
        pIVar36 = UEngine::GetDynamicResolutionState(GEngine);
        cVar23 = (**(code **)((longlong)*pIVar36 + 0x10))(pIVar36);
        if (cVar23 != '\0') {
          ::FString::PrintfImpl(&local_1410,L"%3.1f%% (%dx%d) (Forced)");
          `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
                    (&local_18e8,0,0,iVar27,&local_1410,(FColor *)&local_18f0[0]._s_0);
          local_1420.Data.AllocatorInstance.Data = local_1410.Data.AllocatorInstance.Data;
          goto LAB_148933382;
        }
      }
      ::FString::PrintfImpl(&local_1400,L"%3.1f%% (%dx%d) (Forced, Unsupported)");
      `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
                (&local_18e8,0,0,iVar27,&local_1400,(FColor *)&local_1948._s_0);
      local_1420.Data.AllocatorInstance.Data = local_1400.Data.AllocatorInstance.Data;
    }
LAB_148933382:
    if (local_1420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1420.Data.AllocatorInstance.Data);
    }
    param_4 = param_4 + local_1960;
    if (local_338.Status == Enabled) {
      bVar24 = DynamicRenderScaling::IsSupported();
      if (bVar24) {
        ppTVar33 = DynamicRenderScaling::FBudget::GetGlobalList();
        FVar18 = local_1970;
        for (pTVar4 = *ppTVar33; pTVar4 != (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0;
            pTVar4 = (TLinkedList<DynamicRenderScaling::FBudget_*> *)pTVar4->_padding_) {
          pFVar5 = pTVar4->Element;
          if ((pFVar5->BudgetId != GDynamicPrimaryResolutionFraction.BudgetId) &&
             (bVar24 = DynamicRenderScaling::FHeuristicSettings::IsEnabled(&pFVar5->CachedSettings),
             bVar24)) {
            ::FString::FString(&local_17f0,pFVar5->Name);
            ::FString::ReplaceInline(&local_17f0,L"Dynamic",L"Dyn",IgnoreCase);
            ::FString::ReplaceInline(&local_17f0,L"Resolution",L"Res",IgnoreCase);
            local_18b0[0] = FVar21;
            if (fVar65 <= fVar69) {
              fVar78 = fVar69 * fVar76;
              if (fVar55 <= fVar69 * fVar76) {
                fVar78 = fVar55;
              }
              local_18b0[0] = FVar18;
              if (fVar69 < fVar78) {
                local_18b0[0] = FVar22;
              }
            }
            FVar40.Data = (FScriptContainerElement *)L"";
            if (local_17f0.Data.ArrayNum != 0) {
              FVar40.Data = local_17f0.Data.AllocatorInstance.Data;
            }
            `FStatUnitData::DrawStat'::__l82::<lambda_2>::operator()
                      (&local_1830,0,iVar27,(wchar_t *)FVar40.Data,&FColor::White);
            if ((pFVar5->CachedSettings).Model == Quadratic) {
              ::FString::PrintfImpl(&local_13f0,L"%3.1f%% x %3.1f%%");
              `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
                        (&local_18e8,0,0,iVar27,&local_13f0,(FColor *)&local_18b0[0]._s_0);
              FVar40.Data = local_13f0.Data.AllocatorInstance.Data;
            }
            else {
              ::FString::PrintfImpl(&local_13e0,L"%3.1f%%");
              `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
                        (&local_18e8,0,0,iVar27,&local_13e0,(FColor *)&local_18b0[0]._s_0);
              FVar40.Data = local_13e0.Data.AllocatorInstance.Data;
            }
            if (FVar40.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar40.Data);
            }
            param_4 = param_4 + local_1960;
            if (local_17f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_17f0.Data.AllocatorInstance.Data);
            }
          }
          this = local_1858;
          FVar52 = local_1970;
        }
      }
    }
  }
  else {
    `FStatUnitData::DrawStat'::__l82::<lambda_2>::operator()
              (&local_1830,0,iVar27,L"RenderRes",(FColor *)&local_1968._s_0);
    ::FString::PrintfImpl(&local_1430,L"%3.1f%% (%dx%d)");
    `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
              (&local_18e8,0,0,iVar27,&local_1430,(FColor *)&local_1970._s_0);
    if (local_1430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1430.Data.AllocatorInstance.Data);
    }
    param_4 = param_4 + local_1960;
  }
  `FStatUnitData::DrawStat'::__l82::<lambda_2>::operator()
            (&local_1830,0,iVar27,L"Draws",(FColor *)&local_1968._s_0);
  ::FString::PrintfImpl(&local_13d0,L"%d");
  `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
            (&local_18e8,0,0,iVar27,&local_13d0,(FColor *)&local_1970._s_0);
  if (local_13d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_13d0.Data.AllocatorInstance.Data);
  }
  iVar28 = GNumPrimitivesDrawnRHI[0];
  param_4 = param_4 + local_1960;
  `FStatUnitData::DrawStat'::__l82::<lambda_2>::operator()
            (&local_1830,0,iVar27,L"Prims",(FColor *)&local_1968._s_0);
  if (iVar28 < 10000) {
    ::FString::PrintfImpl(&local_1500,L"%d");
    `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
              (&local_18e8,0,0,iVar27,&local_1500,(FColor *)&local_1970._s_0);
  }
  else {
    ::FString::PrintfImpl(&local_13c0,L"%.1fK");
    `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
              (&local_18e8,0,0,iVar27,&local_13c0,(FColor *)&local_1970._s_0);
    local_1500.Data.AllocatorInstance.Data = local_13c0.Data.AllocatorInstance.Data;
  }
  if (local_1500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1500.Data.AllocatorInstance.Data);
  }
  param_4 = param_4 + local_1960;
  if ((local_196b != '\0') &&
     (uVar49 = (ulonglong)GPixelRenderCounters.PrevPixelDisplayCount,
     GPixelRenderCounters.PrevPixelDisplayCount != 0)) {
    uVar54 = (ulonglong)GPixelRenderCounters.PrevPixelRenderCount;
    local_1864 = FVar21;
    if ((0xe0fff < GPixelRenderCounters.PrevPixelRenderCount) &&
       (local_1864 = FVar52, GPixelRenderCounters.PrevPixelRenderCount < 0x1fa400)) {
      local_1864 = FVar22;
    }
    `FStatUnitData::DrawStat'::__l82::<lambda_2>::operator()
              (&local_1830,0,iVar27,L"TSR feed",(FColor *)&local_1968._s_0);
    ::FString::PrintfImpl(&local_13b0,L"%.2f MP/s");
    `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
              (&local_18e8,0,0,iVar27,&local_13b0,(FColor *)&local_1864._s_0);
    if (local_13b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13b0.Data.AllocatorInstance.Data);
    }
    param_4 = param_4 + local_1960;
    fVar65 = fVar55 / ((float)uVar54 / (float)uVar49);
    if (fVar65 <= fVar55) {
      fVar65 = fVar55;
    }
    fVar65 = fVar65 * this->FrameTime;
    local_1844 = FVar52;
    if ((___real_42855555 < fVar65) && (local_1844 = FVar21, fVar65 < ___real_43055555)) {
      local_1844 = FVar22;
    }
    `FStatUnitData::DrawStat'::__l82::<lambda_2>::operator()
              (&local_1830,0,iVar27,L"TSR 1spp",(FColor *)&local_1968._s_0);
    ::FString::PrintfImpl(&local_13a0,L"%3.2f ms");
    `FStatUnitData::DrawStat'::__l82::<lambda_1>::operator()
              (&local_18e8,0,0,iVar27,&local_13a0,(FColor *)&local_1844._s_0);
    if (local_13a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13a0.Data.AllocatorInstance.Data);
    }
    param_4 = param_4 + local_1960;
  }
  pTVar17 = CVarFullSizeUnitGraph.Ref;
  if (local_194c[0] == '\0') goto LAB_14893508e;
  bVar24 = IsInParallelGameThread();
  if (((!bVar24) && (bVar24 = IsInGameThread(), !bVar24)) &&
     (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar24)) {
    pcVar3 = (code *)swi(3);
    iVar27 = (*pcVar3)();
    return iVar27;
  }
  iVar27 = pTVar17->ShadowedValue[0];
  pUVar37 = UEngine::GetSmallFont();
  local_1770 = pUVar37;
  if ((pUVar37 == (UFont *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("SmallFont",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealClient.cpp"
                          ,0x45c,L""), bVar24)) {
    pcVar3 = (code *)swi(3);
    iVar27 = (*pcVar3)();
    return iVar27;
  }
  local_192c = UFont::GetStringSize(pUVar37,L"000.0");
  uVar29 = UFont::GetStringHeightSize(pUVar37,L"000.0");
  pTVar16 = GTargetFrameTimeThresholdCVar.Ref;
  local_1920._s_0.X = uVar29;
  bVar24 = IsInParallelGameThread();
  if (((!bVar24) && (bVar24 = IsInGameThread(), !bVar24)) &&
     (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar24)) {
    pcVar3 = (code *)swi(3);
    iVar27 = (*pcVar3)();
    return iVar27;
  }
  fVar65 = pTVar16->ShadowedValue[0];
  fVar69 = __real_4394c000;
  if (iVar27 == 0) {
    fVar69 = __real_42cc0000;
  }
  if (local_1928->bStereoRendering == false) {
    fVar55 = local_1928->DPIScale;
  }
  local_1950 = fVar65;
  lVar39 = (**(code **)(local_1928->RenderTarget->_padding_ + 0x28))
                     (local_1928->RenderTarget,local_11a8);
  fVar76 = __real_40000000;
  fVar55 = (float)*(int *)(lVar39 + 4) / fVar55 - __real_42480000;
  local_1914 = __real_40000000;
  if (iVar27 == 0) {
    local_1914 = __real_3f800000;
  }
  local_1954 = (float)(int)uVar29;
  iVar28 = 3;
  if (iVar27 == 0) {
    iVar28 = 1;
  }
  fVar78 = local_1914 * __real_43480000;
  local_1934 = fVar69 / fVar65;
  fVar79 = ((float)iVar28 + __real_40a00000) * local_1954 + fVar69;
  local_1858 = (FStatUnitData *)CONCAT44(local_1858._4_4_,fVar79);
  iVar27 = DynamicRenderScaling::FBudget::GetGlobalListSize();
  if ((local_338.ResolutionFractionUpperBounds.Array.ArrayNum != iVar27) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Array.Num() == FBudget::GetGlobalListSize()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                          ,0xd5,L""), bVar24)) {
    pcVar3 = (code *)swi(3);
    iVar27 = (*pcVar3)();
    return iVar27;
  }
  lVar39 = (longlong)GDynamicPrimaryResolutionFraction.BudgetId;
  uVar45 = 0;
  if (GDynamicPrimaryResolutionFraction.BudgetId <
      local_338.ResolutionFractionUpperBounds.Array.ArrayNum) {
    uVar45 = (uint)~GDynamicPrimaryResolutionFraction.BudgetId >> 0x1f;
  }
  if ((uVar45 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar3 = (code *)swi(3);
    iVar27 = (*pcVar3)();
    return iVar27;
  }
  FVar41 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)
           &local_338.ResolutionFractionUpperBounds;
  if (local_338.ResolutionFractionUpperBounds.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
    FVar41 = local_338.ResolutionFractionUpperBounds.Array.AllocatorInstance.SecondaryData;
  }
  fVar56 = DynamicRenderScaling::FHeuristicSettings::EstimateCostScale
                     (&GDynamicPrimaryResolutionFraction.CachedSettings,
                      *(float *)((uchar *)((longlong)FVar41 + 8) + lVar39 * 0x10));
  pFVar7 = local_1928;
  dVar14 = __real_4052000000000000;
  local_1198._padding_ = (longlong)&___7FCanvasTileItem__6B_;
  local_1198._padding_._0_4_ = 0;
  local_1198._padding_._0_1_ = 0;
  local_1198._padding_ = 0;
  local_1198.Z = 1.0;
  local_1198.Texture = GWhiteTexture;
  local_1198.MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
  local_1198._padding_._4_4_ = 0xb;
  local_1198._padding_ = (longlong)__real_4052000000000000;
  fVar70 = (fVar55 - fVar79) - __real_41000000;
  local_1944 = (local_1944 / fVar56) * fVar69;
  local_1198.UV0.field0_0x0._s_0.X = 0.0;
  local_1198.Size.field0_0x0._s_0.X = (double)(fVar78 + __real_41800000);
  if (__real_42c80000 <= local_1944) {
    local_1944 = __real_42c80000;
  }
  dVar9 = (double)fVar70;
  local_1198.Rotation.Pitch = 0.0;
  local_1198.Size.field0_0x0._s_0.Y = (double)(fVar79 + __real_41800000);
  local_1198.UV0.field0_0x0._s_0.Y = ___xmm_3ff00000000000000000000000000000;
  local_1198.UV1.field0_0x0._s_0.X = _UNK_15061cbc8;
  local_1198.UV1.field0_0x0._s_0.Y = __real_3ff0000000000000;
  local_1198.Rotation.Yaw = 0.0;
  local_1198.Rotation.Roll = 0.0;
  local_1198._padding_ = ___xmm_3f333333000000000000000000000000;
  local_1198._padding_ = _UNK_15104e498;
  local_1198.PivotPoint.field0_0x0._s_0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_1198._padding_ = (longlong)dVar9;
  FCanvasTileItem::Draw(&local_1198,local_1928);
  if (pFVar7->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(pFVar7,false);
  }
  local_10e8.bEnableGlow = 0;
  local_1198._padding_ = (longlong)&___7FCanvasItem__6B_;
  local_10e8.GlowColor.field0_0x0._0_8_ = 0;
  local_10e8.GlowColor.field0_0x0._8_8_ = 0;
  local_10e8.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_10e8.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_10e8.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
  local_10e8.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
  this_00 = FCanvas::GetBatchedElements
                      (local_1928,ET_Line,(FBatchedElementParameters *)0x0,(FTexture *)0x0,
                       SE_BLEND_MAX,&local_10e8,true);
  pHVar8 = (local_1928->CurrentHitProxy).Reference;
  if (pHVar8 == (HHitProxy *)0x0) {
    FVar48.Index = -1;
  }
  else {
    FVar48.Index = (pHVar8->Id).Index;
  }
  local_1918.Index = FVar48.Index;
  local_1778 = this_00;
  FBatchedElements::AddReserveLines(this_00,0x4b6,false,false);
  dVar15 = __real_4053c00000000000;
  local_16e8._0_8_ = ___xmm_3f8000003dcccccd3dcccccd3dcccccd;
  local_16e8._8_8_ = _UNK_1509252c8;
  local_12d8._s_0.X = __real_4053c00000000000;
  local_12c0._s_0.X = __real_4053c00000000000;
  dVar66 = (double)(fVar55 - __real_3f800000);
  local_12d8._s_0.Z = 0.0;
  local_12c0._s_0.Z = 0.0;
  local_12d8._s_0.Y = dVar66;
  local_12c0._s_0.Y = dVar9;
  FBatchedElements::AddLine
            (this_00,(TVector<double> *)&local_12c0._s_0,(TVector<double> *)&local_12d8._s_0,
             (FLinearColor *)&local_16e8._s_0,FVar48,0.0,0.0,false);
  local_12a8._s_0.Z = 0.0;
  local_1290._s_0.X = dVar15;
  dVar9 = (double)(fVar78 + __real_42b00000);
  local_1290._s_0.Z = 0.0;
  local_12a8._s_0.X = dVar9;
  local_12a8._s_0.Y = dVar66;
  local_1290._s_0.Y = dVar66;
  FBatchedElements::AddLine
            (this_00,(TVector<double> *)&local_1290._s_0,(TVector<double> *)&local_12a8._s_0,
             (FLinearColor *)&local_16e8._s_0,FVar48,0.0,0.0,false);
  local_1380 = L"(Filtered timings)";
  if (local_1964 != '\0') {
    local_1380 = L"(Raw timings)";
  }
  sVar34 = wcslen(local_1380);
  pFVar7 = local_1928;
  local_1390._s_0.X = dVar14;
  uStack_1378 = (undefined4)sVar34;
  local_1390._s_0.Y = (double)((fVar70 - local_1954) - fVar76);
  FCanvasTextItemBase::FCanvasTextItemBase
            (&local_dd8,(TVector2<double> *)&local_1390._s_0,(FLinearColor *)&local_16e8._s_0);
  local_bd8 = '\0';
  local_dd8._padding_._4_4_ = 2;
  local_dd8._padding_ = (longlong)&___7FCanvasTextStringViewItem__6B_;
  uStack_bc8 = CONCAT44(uStack_1374,uStack_1378);
  local_bd0 = local_1380;
  if ((pUVar37 == (UFont *)0x0) || ((pUVar37->ImportOptions).bUseDistanceFieldAlpha == 0)) {
    local_dd8.FontRenderInfo._0_4_ = local_dd8.FontRenderInfo._0_4_ | 2;
    local_dd8.ShadowColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
    local_dd8.ShadowOffset.field0_0x0._0_4_ = ___xmm_3ff00000000000003ff0000000000000;
    local_dd8.ShadowOffset.field0_0x0._4_4_ = _UNK_150689684;
    local_dd8.ShadowOffset.field0_0x0._8_4_ = _UNK_150689688;
    local_dd8.ShadowOffset.field0_0x0._12_4_ = _UNK_15068968c;
    uVar71 = ___xmm_3ff00000000000003ff0000000000000;
    uVar72 = _UNK_150689684;
  }
  else {
    local_dd8._padding_._4_4_ = 6;
    uVar71 = SUB84(__real_3ff0000000000000,0);
    uVar72 = (int)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  local_c40 = pUVar37;
  FCanvasTextItemBase::Draw(&local_dd8,pFVar7);
  if (pFVar7->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(pFVar7,false);
  }
  if (local_bd8 != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c00);
  }
  fVar69 = local_1934;
  local_dd8.TileItem._padding_ = (longlong)&___7FCanvasItem__6B_;
  local_1370._0_8_ = ___xmm_3f8000003d75c28f3d75c28f3e4ccccd;
  local_1370._8_8_ = _UNK_151be7c08;
  local_dd8._padding_ = (longlong)&___7FCanvasItem__6B_;
  fVar76 = fVar55 - local_1934 * fVar65;
  local_1278._s_0.X = dVar15;
  local_1278._s_0.Z = 0.0;
  local_1758._s_0.Z = 0.0;
  local_1758._s_0.Y = (double)fVar76;
  local_1758._s_0.X = dVar9;
  local_1278._s_0.Y = local_1758._s_0.Y;
  FBatchedElements::AddLine
            (this_00,(TVector<double> *)&local_1278._s_0,(TVector<double> *)&local_1758._s_0,
             (FLinearColor *)&local_1370._s_0,FVar48,0.0,0.0,false);
  ::FString::PrintfImpl(&local_16c8,L"%3.1f ms (budget)");
  if (local_16c8.Data.ArrayNum == 0) {
    local_16d8 = (FScriptContainerElement *)0x15060d16c;
LAB_148933ff4:
    sVar34 = wcslen((wchar_t *)local_16d8);
    uStack_16d0 = (undefined4)sVar34;
  }
  else {
    uStack_16d0 = 0;
    local_16d8 = local_16c8.Data.AllocatorInstance.Data;
    if (local_16c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    goto LAB_148933ff4;
  }
  pFVar7 = local_1928;
  dVar14 = __real_4010000000000000;
  local_1360._s_0.X = local_1758._s_0.X + __real_4010000000000000;
  dVar66 = (double)((int)uVar29 / 2);
  local_1360._s_0.Y = local_1758._s_0.Y - dVar66;
  FCanvasTextItemBase::FCanvasTextItemBase
            (&local_bb8,(TVector2<double> *)&local_1360._s_0,(FLinearColor *)&local_1370._s_0);
  local_9b8 = '\0';
  local_bb8._padding_._4_4_ = 2;
  local_bb8._padding_ = (longlong)&___7FCanvasTextStringViewItem__6B_;
  uStack_9a8 = CONCAT44(uStack_16cc,uStack_16d0);
  local_9b0 = local_16d8;
  if ((pUVar37 == (UFont *)0x0) || ((pUVar37->ImportOptions).bUseDistanceFieldAlpha == 0)) {
    local_bb8.FontRenderInfo._0_4_ = local_bb8.FontRenderInfo._0_4_ | 2;
    local_bb8.ShadowColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
    local_bb8.ShadowOffset.field0_0x0._0_4_ = uVar71;
    local_bb8.ShadowOffset.field0_0x0._4_4_ = uVar72;
    local_bb8.ShadowOffset.field0_0x0._8_4_ = uVar71;
    local_bb8.ShadowOffset.field0_0x0._12_4_ = uVar72;
  }
  else {
    local_bb8._padding_._4_4_ = 6;
  }
  local_a20 = pUVar37;
  FCanvasTextItemBase::Draw(&local_bb8,pFVar7);
  if (pFVar7->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(pFVar7,false);
  }
  if (local_9b8 != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_9e0);
  }
  local_bb8.TileItem._padding_ = (longlong)&___7FCanvasItem__6B_;
  local_bb8._padding_ = (longlong)&___7FCanvasItem__6B_;
  if (local_16c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_16c8.Data.AllocatorInstance.Data);
  }
  local_1350._0_8_ = ___xmm_3f8000003ca3d70a3dcccccd3e4ccccd;
  local_1350._8_8_ = _UNK_151be7bf8;
  iVar27 = DynamicRenderScaling::FBudget::GetGlobalListSize();
  if ((local_338.ResolutionFractionUpperBounds.Array.ArrayNum != iVar27) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Array.Num() == FBudget::GetGlobalListSize()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                          ,0xd5,L""), bVar24)) {
    pcVar3 = (code *)swi(3);
    iVar27 = (*pcVar3)();
    return iVar27;
  }
  lVar39 = (longlong)GDynamicPrimaryResolutionFraction.BudgetId;
  uVar45 = 0;
  if (GDynamicPrimaryResolutionFraction.BudgetId <
      local_338.ResolutionFractionUpperBounds.Array.ArrayNum) {
    uVar45 = (uint)~GDynamicPrimaryResolutionFraction.BudgetId >> 0x1f;
  }
  if ((uVar45 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar3 = (code *)swi(3);
    iVar27 = (*pcVar3)();
    return iVar27;
  }
  FVar41 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)
           &local_338.ResolutionFractionUpperBounds;
  if (local_338.ResolutionFractionUpperBounds.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
    FVar41 = local_338.ResolutionFractionUpperBounds.Array.AllocatorInstance.SecondaryData;
  }
  fVar78 = DynamicRenderScaling::FHeuristicSettings::EstimateCostScale
                     (&GDynamicPrimaryResolutionFraction.CachedSettings,
                      *(float *)((uchar *)((longlong)FVar41 + 8) + lVar39 * 0x10));
  local_1260._s_0.X = dVar15;
  local_1260._s_0.Z = 0.0;
  local_1740._s_0.Y = (double)(fVar55 - fVar78 * local_1944);
  local_1740._s_0.Z = 0.0;
  local_1740._s_0.X = dVar9;
  local_1260._s_0.Y = local_1740._s_0.Y;
  FBatchedElements::AddLine
            (this_00,(TVector<double> *)&local_1260._s_0,(TVector<double> *)&local_1740._s_0,
             (FLinearColor *)&local_1350._s_0,FVar48,0.0,0.0,false);
  iVar27 = DynamicRenderScaling::FBudget::GetGlobalListSize();
  if ((local_338.ResolutionFractionUpperBounds.Array.ArrayNum != iVar27) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Array.Num() == FBudget::GetGlobalListSize()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                          ,0xd5,L""), bVar24)) {
    pcVar3 = (code *)swi(3);
    iVar27 = (*pcVar3)();
    return iVar27;
  }
  uVar45 = 0;
  if (GDynamicPrimaryResolutionFraction.BudgetId <
      local_338.ResolutionFractionUpperBounds.Array.ArrayNum) {
    uVar45 = (uint)~GDynamicPrimaryResolutionFraction.BudgetId >> 0x1f;
  }
  if ((uVar45 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar3 = (code *)swi(3);
    iVar27 = (*pcVar3)();
    return iVar27;
  }
  ::FString::PrintfImpl(&local_16a8,L"%3.1f%% x %3.1f%% (max)");
  if (local_16a8.Data.ArrayNum == 0) {
    local_16b8 = (FScriptContainerElement *)0x15060d16c;
LAB_148934362:
    sVar34 = wcslen((wchar_t *)local_16b8);
    uStack_16b0 = (undefined4)sVar34;
  }
  else {
    uStack_16b0 = 0;
    local_16b8 = local_16a8.Data.AllocatorInstance.Data;
    if (local_16a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    goto LAB_148934362;
  }
  pFVar7 = local_1928;
  local_1340._s_0.X = local_1740._s_0.X + dVar14;
  local_1340._s_0.Y = local_1740._s_0.Y - dVar66;
  FCanvasTextItemBase::FCanvasTextItemBase
            (&local_998,(TVector2<double> *)&local_1340._s_0,(FLinearColor *)&local_1350._s_0);
  local_798 = '\0';
  local_998._padding_._4_4_ = 2;
  local_998._padding_ = (longlong)&___7FCanvasTextStringViewItem__6B_;
  uStack_788 = CONCAT44(uStack_16ac,uStack_16b0);
  local_790 = local_16b8;
  if ((pUVar37 == (UFont *)0x0) || ((pUVar37->ImportOptions).bUseDistanceFieldAlpha == 0)) {
    local_998.FontRenderInfo._0_4_ = local_998.FontRenderInfo._0_4_ | 2;
    local_998.ShadowColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
    local_998.ShadowOffset.field0_0x0._0_4_ = uVar71;
    local_998.ShadowOffset.field0_0x0._4_4_ = uVar72;
    local_998.ShadowOffset.field0_0x0._8_4_ = uVar71;
    local_998.ShadowOffset.field0_0x0._12_4_ = uVar72;
  }
  else {
    local_998._padding_._4_4_ = 6;
  }
  local_800 = pUVar37;
  FCanvasTextItemBase::Draw(&local_998,pFVar7);
  if (pFVar7->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(pFVar7,false);
  }
  if (local_798 != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7c0);
  }
  local_998.TileItem._padding_ = (longlong)&___7FCanvasItem__6B_;
  local_998._padding_ = (longlong)&___7FCanvasItem__6B_;
  if (local_16a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_16a8.Data.AllocatorInstance.Data);
  }
  iVar27 = DynamicRenderScaling::FBudget::GetGlobalListSize();
  if ((local_338.ResolutionFractionUpperBounds.Array.ArrayNum != iVar27) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Array.Num() == FBudget::GetGlobalListSize()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                          ,0xd5,L""), bVar24)) {
    pcVar3 = (code *)swi(3);
    iVar27 = (*pcVar3)();
    return iVar27;
  }
  lVar39 = (longlong)GDynamicPrimaryResolutionFraction.BudgetId;
  uVar45 = 0;
  if (GDynamicPrimaryResolutionFraction.BudgetId <
      local_338.ResolutionFractionUpperBounds.Array.ArrayNum) {
    uVar45 = (uint)~GDynamicPrimaryResolutionFraction.BudgetId >> 0x1f;
  }
  if ((uVar45 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar3 = (code *)swi(3);
    iVar27 = (*pcVar3)();
    return iVar27;
  }
  fVar78 = __real_3f800000;
  FVar41 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)
           &local_338.ResolutionFractionUpperBounds;
  if (local_338.ResolutionFractionUpperBounds.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
    FVar41 = local_338.ResolutionFractionUpperBounds.Array.AllocatorInstance.SecondaryData;
  }
  if (__real_3f800000 < *(float *)((uchar *)((longlong)FVar41 + 8) + lVar39 * 0x10)) {
    local_1318._0_8_ = ___xmm_3f8000003ca3d70a3dcccccd3e4ccccd;
    local_1318._8_8_ = _UNK_151be7bf8;
    local_1248._s_0.X = dVar15;
    local_1728._s_0.Y = (double)(fVar55 - local_1944);
    local_1248._s_0.Z = 0.0;
    local_1728._s_0.Z = 0.0;
    local_1728._s_0.X = dVar9;
    local_1248._s_0.Y = local_1728._s_0.Y;
    FBatchedElements::AddLine
              (this_00,(TVector<double> *)&local_1248._s_0,(TVector<double> *)&local_1728._s_0,
               (FLinearColor *)&local_1318._s_0,FVar48,0.0,0.0,false);
    pfVar38 = DynamicRenderScaling::TMap<float>::operator[]
                        (&local_338.ResolutionFractionUpperBounds,&GDynamicPrimaryResolutionFraction
                        );
    fVar79 = DynamicRenderScaling::FHeuristicSettings::EstimateCostScale
                       (&GDynamicPrimaryResolutionFraction.CachedSettings,*pfVar38);
    if (local_1954 <= (fVar79 - fVar78) * local_1944) {
      local_1328 = L"100.0% x 100.0% (native)";
      uStack_1320 = 0x18;
      local_11d8._12_4_ = uStack_131c;
      local_11d8.Size = 0x18;
      local_11d8.DataPtr = L"100.0% x 100.0% (native)";
      FCanvas::DrawShadowedString
                (local_1928,local_1728._s_0.X + dVar14,local_1728._s_0.Y - dVar66,&local_11d8,
                 pUVar37,(FLinearColor *)&local_1318._s_0,&FLinearColor::Black);
    }
  }
  fVar79 = local_1944;
  fVar78 = __real_3efae147;
  local_1308._0_8_ = ___xmm_3f8000003ca3d70a3dcccccd3e4ccccd;
  local_1308._8_8_ = _UNK_151be7bf8;
  local_1230._s_0.X = dVar15;
  local_1710._s_0.Y = (double)(fVar55 - local_1944 * __real_3efae147);
  local_1230._s_0.Z = 0.0;
  local_1710._s_0.Z = 0.0;
  local_1710._s_0.X = dVar9;
  local_1230._s_0.Y = local_1710._s_0.Y;
  FBatchedElements::AddLine
            (this_00,(TVector<double> *)&local_1230._s_0,(TVector<double> *)&local_1710._s_0,
             (FLinearColor *)&local_1308._s_0,FVar48,0.0,0.0,false);
  ::FString::PrintfImpl(&local_1688,L"%3.1f%% x %3.1f%% (alert)");
  if (local_1688.Data.ArrayNum == 0) {
    local_1698 = (FScriptContainerElement *)0x15060d16c;
LAB_14893473f:
    sVar34 = wcslen((wchar_t *)local_1698);
    uStack_1690 = (undefined4)sVar34;
  }
  else {
    uStack_1690 = 0;
    local_1698 = local_1688.Data.AllocatorInstance.Data;
    if (local_1688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    goto LAB_14893473f;
  }
  pFVar7 = local_1928;
  local_12f8._s_0.X = local_1710._s_0.X + dVar14;
  local_12f8._s_0.Y = local_1710._s_0.Y - dVar66;
  FCanvasTextItemBase::FCanvasTextItemBase
            (&local_778,(TVector2<double> *)&local_12f8._s_0,(FLinearColor *)&local_1308._s_0);
  local_578 = '\0';
  local_778._padding_._4_4_ = 2;
  local_778._padding_ = (longlong)&___7FCanvasTextStringViewItem__6B_;
  uStack_568 = CONCAT44(uStack_168c,uStack_1690);
  local_570 = local_1698;
  if ((pUVar37 == (UFont *)0x0) || ((pUVar37->ImportOptions).bUseDistanceFieldAlpha == 0)) {
    local_778.ShadowOffset.field0_0x0._s_0.X =
         (double)CONCAT44(_UNK_150689684,___xmm_3ff00000000000003ff0000000000000);
    local_778.ShadowOffset.field0_0x0._s_0.Y = (double)CONCAT44(_UNK_15068968c,_UNK_150689688);
    local_778.FontRenderInfo._0_4_ = local_778.FontRenderInfo._0_4_ | 2;
    local_778.ShadowColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  }
  else {
    local_778._padding_._4_4_ = 6;
  }
  local_5e0 = pUVar37;
  FCanvasTextItemBase::Draw(&local_778,pFVar7);
  if (pFVar7->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(pFVar7,false);
  }
  if (local_578 != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5a0);
  }
  local_778.TileItem._padding_ = (longlong)&___7FCanvasItem__6B_;
  local_778._padding_ = (longlong)&___7FCanvasItem__6B_;
  if (local_1688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1688.Data.AllocatorInstance.Data);
  }
  pFVar2 = local_1940->ViewportClient;
  local_1958 = (int)(fVar76 - local_1954 * (float)iVar28);
  cVar23 = '\0';
  if (pFVar2 != (FViewportClient *)0x0) {
    pcVar3 = *(code **)((longlong)*pFVar2 + 0x180);
    ::FString::FString(&local_12e8,L"UnitTime");
    bVar43 = bVar43 | 0x80;
    cVar23 = (*pcVar3)(pFVar2,&local_12e8);
  }
  iVar27 = local_1958;
  local_196b = cVar23;
  if (((char)bVar43 < '\0') &&
     (local_12e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_12e8.Data.AllocatorInstance.Data);
  }
  local_195c = 0;
  FVar62 = ___xmm_3f8000003dcccccd3f8000003dcccccd;
  FVar63 = ___xmm_3f8000003f8000003dcccccd3dcccccd;
  FVar64 = ___xmm_3f8000003dcccccd3f8000003f800000;
  local_1958 = iVar27;
  fVar76 = __real_bf800000;
  fVar56 = __real_42a00000;
  uVar67 = ___xmm_3f8000003dcccccd3dcccccd3f800000;
  uVar68 = _UNK_15174b778;
  uVar74 = ___xmm_3f8000003f8000003dcccccd3f800000;
  uVar75 = _UNK_151be7c38;
  fVar70 = __real_3d4ccccd;
LAB_148934940:
  do {
    fVar77 = __real_3f333333;
    fVar80 = __real_3f800000;
    pFVar47 = (FViewport *)0x0;
    local_1958 = local_1958 - uVar29;
    iVar27 = -1;
    if (local_195c == 2) {
      if ((char)local_f0.ComparisonIndex.Value != '\0') {
        local_1940 = (FViewport *)this->GPUFrameTimes[0].AllocatorInstance.Data;
        pFVar50 = local_1940;
        fVar77 = fVar65;
        fVar80 = fVar69;
        local_1840 = FVar64;
        bVar24 = false;
        cVar23 = '\x01';
        goto LAB_148934c0f;
      }
    }
    else {
      if (local_195c == 3) {
        if (cVar23 != '\0') goto LAB_1489349e8;
        if ((char)local_f0.ComparisonIndex.Value != '\0') goto LAB_148935071;
LAB_148934a66:
        local_1940 = (FViewport *)(this->FrameTimes).AllocatorInstance.Data;
        pFVar50 = local_1940;
        fVar77 = local_1950;
        fVar80 = fVar69;
        local_1840 = FVar62;
        bVar24 = false;
        cVar23 = '\x01';
      }
      else {
        if ((local_195c == 4) && (GIsRunningRHIInSeparateThread_InternalUseOnly == false)) {
          local_195c = 5;
          goto LAB_148934940;
        }
LAB_1489349e8:
        bVar24 = false;
        cVar23 = '\x01';
        if (local_195c == 0) {
          local_1940 = (FViewport *)(this->RenderThreadTimes).AllocatorInstance.Data;
          pFVar50 = local_1940;
          fVar77 = local_1950;
          fVar80 = fVar69;
          local_1840 = FVar63;
          bVar24 = false;
          cVar23 = '\x01';
        }
        else if (local_195c == 1) {
          local_1940 = (FViewport *)(this->GameThreadTimes).AllocatorInstance.Data;
          local_1840._8_8_ = uVar68;
          local_1840._0_8_ = uVar67;
          pFVar50 = local_1940;
          fVar77 = local_1950;
          fVar80 = fVar69;
          bVar24 = false;
        }
        else {
          if (local_195c == 3) goto LAB_148934a66;
          if (local_195c == 4) {
            local_1940 = (FViewport *)(this->RHITTimes).AllocatorInstance.Data;
            local_1840._8_8_ = uVar75;
            local_1840._0_8_ = uVar74;
            pFVar50 = local_1940;
            fVar77 = local_1950;
            fVar80 = fVar69;
            cVar23 = '\x01';
          }
          else if (local_195c == 5) {
            iVar28 = (this->ResolutionFractions).Array.ArrayNum;
            iVar51 = DynamicRenderScaling::FBudget::GetGlobalListSize();
            if ((iVar28 != iVar51) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Array.Num() == FBudget::GetGlobalListSize()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                                    ,0xd5,L""), bVar24)) {
              pcVar3 = (code *)swi(3);
              iVar27 = (*pcVar3)();
              return iVar27;
            }
            lVar39 = (longlong)GDynamicPrimaryResolutionFraction.BudgetId;
            uVar45 = 0;
            if (GDynamicPrimaryResolutionFraction.BudgetId <
                (this->ResolutionFractions).Array.ArrayNum) {
              uVar45 = (uint)~GDynamicPrimaryResolutionFraction.BudgetId >> 0x1f;
            }
            if ((uVar45 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar3 = (code *)swi(3);
              iVar27 = (*pcVar3)();
              return iVar27;
            }
            FVar6 = (this->ResolutionFractions).Array.AllocatorInstance.SecondaryData;
            FVar46 = (ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
                      )&this->ResolutionFractions;
            if (FVar6 != (ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
                          )0x0) {
              FVar46 = FVar6;
            }
            bVar24 = true;
            local_1940 = *(FViewport **)((uchar *)((longlong)FVar46 + 8) + lVar39 * 0x18);
            cVar23 = (GDynamicPrimaryResolutionFraction.CachedSettings.Model == Quadratic) + '\x01';
            local_1840._8_8_ = _UNK_15174b788;
            local_1840._0_8_ = ___xmm_3f8000003dcccccd3f0000003f800000;
            local_1958 = (int)(local_1954 + (fVar55 - fVar79 * fVar78));
            pFVar50 = local_1940;
            fVar76 = fVar70;
            fVar56 = __real_42a00000;
            fVar80 = local_1944;
          }
          else {
            local_1940 = (FViewport *)0x0;
            bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Unimplemented function called\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealClient.cpp"
                                ,0x56c,L"");
            pFVar50 = pFVar47;
            fVar77 = fVar76;
            fVar56 = __real_42a00000;
            if (bVar25) {
              pcVar3 = (code *)swi(3);
              iVar27 = (*pcVar3)();
              return iVar27;
            }
          }
        }
      }
LAB_148934c0f:
      local_1930 = 1;
      do {
        fVar65 = __real_3f800000;
        iVar28 = this->CurrentIndex;
        iVar51 = (int)pFVar47;
        iVar44 = iVar51 + 1;
        iVar10 = local_1930 + -2;
        if (local_1930 + -2 < 0) {
          iVar10 = 0;
        }
        if (199 < iVar44) {
          iVar44 = 199;
        }
        iVar44 = (iVar44 + iVar28) % 200;
        fVar69 = *(float *)((longlong)&pFVar50->_padding_ + (longlong)((iVar10 + iVar28) % 200) * 4)
        ;
        fVar70 = *(float *)((longlong)&pFVar50->_padding_ + (longlong)((iVar51 + iVar28) % 200) * 4)
        ;
        fVar1 = *(float *)((longlong)&pFVar50->_padding_ + (longlong)iVar44 * 4);
        if ((0.0 <= fVar70) && (0.0 <= fVar69)) {
          fVar61 = local_1858._0_4_ - (float)(int)(local_195c * 2);
          fVar58 = __real_3f800000;
          if (cVar23 == '\x02') {
            fVar58 = fVar69;
          }
          fVar58 = fVar69 * fVar58 * fVar80;
          if (fVar61 <= fVar58) {
            fVar58 = fVar61;
          }
          fVar73 = (float)iVar10 * local_1914 + fVar56;
          local_1218[0]._0_8_ = (undefined8)fVar73;
          local_1218[0]._s_0.Z = 0.0;
          local_1218[0]._8_8_ = (undefined8)(fVar55 - fVar58);
          fVar58 = __real_3f800000;
          if (cVar23 == '\x02') {
            fVar58 = fVar70;
          }
          fVar58 = fVar70 * fVar58 * fVar80;
          local_1678._s_0.X = (double)((float)iVar51 * local_1914 + fVar56);
          if (fVar61 <= fVar58) {
            fVar58 = fVar61;
          }
          local_1678._s_0.Y = (double)(fVar55 - fVar58);
          local_1678._s_0.Z = 0.0;
          FBatchedElements::AddLine
                    (local_1778,(TVector<double> *)&local_1218[0]._s_0,
                     (TVector<double> *)&local_1678._s_0,(FLinearColor *)&local_1840._s_0,local_1918
                     ,0.0,0.0,false);
          if (0.0 <= fVar77) {
            fVar56 = fVar77;
            if (bVar24) {
              if ((fVar77 <= fVar70) || ((iVar51 != 0 && (fVar69 < fVar77)))) goto LAB_148934de4;
            }
            else if ((fVar70 <= fVar77) || ((iVar51 != 0 && (fVar77 < fVar69)))) {
LAB_148934de4:
              if ((0.0 < fVar76) && (fVar56 = (fVar65 - fVar76) * fVar69, 0 < iVar44)) {
                if (bVar24) {
                  if ((fVar70 < fVar56) && (fVar70 <= fVar1)) goto LAB_148934e42;
                }
                else if ((fVar56 < fVar70) && (fVar1 <= fVar70)) goto LAB_148934e42;
              }
              goto LAB_148934fea;
            }
LAB_148934e42:
            iVar28 = (int)(fVar73 - (float)local_192c);
            pFVar50 = local_1940;
            if (iVar27 < iVar28) {
              ::FString::PrintfImpl(&local_1768,L"%3.1f");
              if (local_1768.Data.ArrayNum == 0) {
                local_1790 = (FScriptContainerElement *)0x15060d16c;
LAB_148934eab:
                sVar34 = wcslen((wchar_t *)local_1790);
                uVar29 = (undefined4)sVar34;
              }
              else {
                uVar29 = 0;
                local_1790 = local_1768.Data.AllocatorInstance.Data;
                if (local_1768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                goto LAB_148934eab;
              }
              pFVar7 = local_1928;
              local_1650._s_0.Y = local_1678._s_0.Y;
              if (fVar56 == fVar77) {
                local_1650._s_0.Y = (double)local_1958;
              }
              local_1650._s_0.X = (double)iVar28;
              uStack_1788 = uVar29;
              FCanvasTextItemBase::FCanvasTextItemBase
                        (&local_558,(TVector2<double> *)&local_1650._s_0,
                         (FLinearColor *)&local_1840._s_0);
              local_3c0 = local_1770;
              local_358 = '\0';
              local_558._padding_._4_4_ = 2;
              local_558._padding_ = (longlong)&___7FCanvasTextStringViewItem__6B_;
              uStack_348 = CONCAT44(uStack_1784,uStack_1788);
              local_350 = local_1790;
              if ((local_1770 == (UFont *)0x0) ||
                 ((local_1770->ImportOptions).bUseDistanceFieldAlpha == 0)) {
                local_558.ShadowOffset.field0_0x0._s_0.X =
                     (double)CONCAT44(_UNK_150689684,___xmm_3ff00000000000003ff0000000000000);
                local_558.ShadowOffset.field0_0x0._s_0.Y =
                     (double)CONCAT44(_UNK_15068968c,_UNK_150689688);
                local_558.FontRenderInfo._0_4_ = local_558.FontRenderInfo._0_4_ | 2;
                local_558.ShadowColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
              }
              else {
                local_558._padding_._4_4_ = 6;
              }
              FCanvasTextItemBase::Draw(&local_558,pFVar7);
              if (pFVar7->DrawMode == CDM_ImmediateDrawing) {
                FCanvas::Flush_GameThread(pFVar7,false);
              }
              if (local_358 != '\0') {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_380);
              }
              local_558.TileItem._padding_ = (longlong)&___7FCanvasItem__6B_;
              local_558._padding_ = (longlong)&___7FCanvasItem__6B_;
              if (local_1768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1768.Data.AllocatorInstance.Data);
              }
              iVar27 = local_192c + 1 + iVar28;
              pFVar50 = local_1940;
            }
          }
        }
LAB_148934fea:
        pFVar47 = (FViewport *)(ulonglong)(iVar51 + 1U);
        local_1930 = local_1930 + 1;
        fVar56 = __real_42a00000;
      } while ((int)(iVar51 + 1U) < 200);
      FVar62 = ___xmm_3f8000003dcccccd3f8000003dcccccd;
      FVar63 = ___xmm_3f8000003f8000003dcccccd3dcccccd;
      FVar64 = ___xmm_3f8000003dcccccd3f8000003f800000;
      fVar69 = local_1934;
      fVar65 = local_1950;
      uVar29 = local_1920._0_4_;
      fVar76 = __real_bf800000;
      uVar67 = ___xmm_3f8000003dcccccd3dcccccd3f800000;
      uVar68 = _UNK_15174b778;
      uVar74 = ___xmm_3f8000003f8000003dcccccd3f800000;
      uVar75 = _UNK_151be7c38;
      fVar70 = __real_3d4ccccd;
    }
LAB_148935071:
    local_195c = local_195c + 1;
    cVar23 = local_196b;
  } while ((int)local_195c < 6);
LAB_14893508e:
  iVar27 = param_4;
  if (local_338.ResolutionFractionUpperBounds.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
    FMemory::Free((void *)local_338.ResolutionFractionUpperBounds.Array.AllocatorInstance.
                          SecondaryData);
  }
  if (local_338.ResolutionFractionApproximations.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
    FMemory::Free((void *)local_338.ResolutionFractionApproximations.Array.AllocatorInstance.
                          SecondaryData);
  }
  return iVar27;
}

