// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineSettings
// Functions: 2

// Call @ 14ddb3240

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMoviePipelineWidgetRenderer::RenderSample_GameThreadImpl'::__l10::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  FImagePixelDataPayload *pFVar4;
  bool bVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 *puVar8;
  TImagePixelData<FColor> *this;
  TImagePixelData<FColor> *pTVar9;
  ForAnyElementType FVar10;
  TIntPoint<int>_u_0 TStackX_8;
  TImagePixelData<FColor> *pTStackX_18;
  undefined1 auStackX_20 [8];
  TArray<FColor,TSizedDefaultAllocator<32>_> TStack_f8;
  undefined8 uStack_e8;
  int iStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined2 uStack_c8;
  ushort uStack_c6;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  TSharedRef<FImagePixelDataPayload,1> TStack_b8;
  TArray<FColor,TSizedDefaultAllocator<64>_> TStack_a8;
  TIntRect<int>_u_0 TStack_90;
  FReadSurfaceDataFlags FStack_78;
  undefined1 auStack_58 [16];
  TSharedPtr<IImagePixelDataPayload,1> TStack_48;
  
  lVar6 = (**(code **)(**(longlong **)((longlong)param_1 + 0x2c0) + 0x28))
                    (*(longlong **)((longlong)param_1 + 0x2c0),auStackX_20);
  pTVar9 = (TImagePixelData<FColor> *)0x0;
  uStack_e8 = 0;
  iVar1 = *(int *)(lVar6 + 4);
  piVar7 = (int *)(**(code **)(**(longlong **)((longlong)param_1 + 0x2c0) + 0x28))
                            (*(longlong **)((longlong)param_1 + 0x2c0),auStack_58);
  iVar2 = *piVar7;
  TStack_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_f8.ArrayNum = 0;
  TStack_f8.ArrayMax = 0;
  iStack_e0 = iVar2;
  iStack_dc = iVar1;
  TArray<FColor,TSizedDefaultAllocator<32>_>::SetNum(&TStack_f8,iVar2 * iVar1,Default);
  TStack_90._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  TStack_90._12_4_ = iStack_dc;
  TStack_90._8_4_ = iStack_e0;
  uStack_d8 = 6;
  uStack_d4 = 3;
  uStack_cc = 0x467a0000;
  uStack_d0 = uStack_d0 & 0xffffff00;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  FStack_78._16_8_ = (ulonglong)uStack_c6 << 0x10;
  FStack_78.CubeFace = CubeFace_MAX;
  FStack_78.CompressionMode = RCM_MinMax;
  FStack_78._8_4_ = uStack_d0;
  FStack_78.MaxDepthRange = 16000.0;
  FStack_78.GPUIndex = 0;
  puVar8 = (undefined8 *)(**(code **)(**(longlong **)((longlong)param_1 + 0x2c0) + 0x10))();
  FRHICommandListImmediate::ReadSurfaceData
            (param_2,(FRHITexture *)*puVar8,(TIntRect<int> *)&TStack_90._s_0,&TStack_f8,&FStack_78);
  MakeShared<FImagePixelDataPayload,1>(&TStack_b8);
  pFVar4 = TStack_b8.Object;
  ::FString::operator=
            (&((TStack_b8.Object)->PassIdentifier).Name,(FString *)((longlong)param_1 + 0x298));
  ::FString::operator=(&(pFVar4->PassIdentifier).CameraName,(FString *)((longlong)param_1 + 0x2a8));
  FMoviePipelineRenderPassMetrics::operator=(&pFVar4->SampleState,param_1);
  FVar10.Data = TStack_f8.AllocatorInstance.Data;
  pFVar4->bRequireTransparentOutput = true;
  pFVar4->SortingOrder = 3;
  pFVar4->bCompositeToFinalImage = *(bool *)((longlong)param_1 + 0x2b8);
  TStack_a8.ArrayNum = (long64)TStack_f8.ArrayNum;
  TStack_a8.ArrayMax = (long64)TStack_f8.ArrayMax;
  TStack_a8.AllocatorInstance.Data = TStack_f8.AllocatorInstance.Data;
  TStack_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_f8.ArrayNum = 0;
  TStack_f8.ArrayMax = 0;
  TStackX_8._s_0.X = iVar2;
  TStackX_8._s_0.Y = iVar1;
  this = ::operator_new(0x40);
  if (this != (TImagePixelData<FColor> *)0x0) {
    TStack_48.Object = (IImagePixelDataPayload *)TStack_b8.Object;
    TStack_48.SharedReferenceCount.ReferenceController =
         TStack_b8.SharedReferenceCount.ReferenceController;
    if (TStack_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9 = TImagePixelData<FColor>::TImagePixelData<FColor>
                       (this,(TIntPoint<int> *)&TStackX_8._s_0,&TStack_a8,&TStack_48);
    FVar10.Data = TStack_a8.AllocatorInstance.Data;
  }
  pTStackX_18 = pTVar9;
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  if (*(longlong *)((longlong)param_1 + 0x2c8) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (**(code **)(**(longlong **)((longlong)param_1 + 0x2c8) + 8))
            (*(longlong **)((longlong)param_1 + 0x2c8),&pTStackX_18);
  if (pTStackX_18 != (TImagePixelData<FColor> *)0x0) {
    (**(code **)pTStackX_18->_padding_)(pTStackX_18,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_b8.SharedReferenceCount.ReferenceController);
  if (TStack_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_f8.AllocatorInstance.Data);
  }
  return;
}

// Call @ 14ddb3250

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMoviePipelineBurnInSetting::RenderSample_GameThreadImpl'::__l13::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  FImagePixelDataPayload *pFVar4;
  bool bVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 *puVar8;
  TImagePixelData<FColor> *this;
  TImagePixelData<FColor> *pTVar9;
  ForAnyElementType FVar10;
  TIntPoint<int>_u_0 TStackX_8;
  TImagePixelData<FColor> *pTStackX_18;
  undefined1 auStackX_20 [8];
  TArray<FColor,TSizedDefaultAllocator<32>_> TStack_f8;
  undefined8 uStack_e8;
  int iStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined2 uStack_c8;
  ushort uStack_c6;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  TSharedRef<FImagePixelDataPayload,1> TStack_b8;
  TArray<FColor,TSizedDefaultAllocator<64>_> TStack_a8;
  TIntRect<int>_u_0 TStack_90;
  FReadSurfaceDataFlags FStack_78;
  undefined1 auStack_58 [16];
  TSharedPtr<IImagePixelDataPayload,1> TStack_48;
  
  lVar6 = (**(code **)(**(longlong **)((longlong)param_1 + 0x2c0) + 0x28))
                    (*(longlong **)((longlong)param_1 + 0x2c0),auStackX_20);
  pTVar9 = (TImagePixelData<FColor> *)0x0;
  uStack_e8 = 0;
  iVar1 = *(int *)(lVar6 + 4);
  piVar7 = (int *)(**(code **)(**(longlong **)((longlong)param_1 + 0x2c0) + 0x28))
                            (*(longlong **)((longlong)param_1 + 0x2c0),auStack_58);
  iVar2 = *piVar7;
  TStack_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_f8.ArrayNum = 0;
  TStack_f8.ArrayMax = 0;
  iStack_e0 = iVar2;
  iStack_dc = iVar1;
  TArray<FColor,TSizedDefaultAllocator<32>_>::SetNum(&TStack_f8,iVar2 * iVar1,Default);
  TStack_90._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  TStack_90._12_4_ = iStack_dc;
  TStack_90._8_4_ = iStack_e0;
  uStack_d8 = 6;
  uStack_d4 = 3;
  uStack_cc = 0x467a0000;
  uStack_d0 = uStack_d0 & 0xffffff00;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  FStack_78._16_8_ = (ulonglong)uStack_c6 << 0x10;
  FStack_78.CubeFace = CubeFace_MAX;
  FStack_78.CompressionMode = RCM_MinMax;
  FStack_78._8_4_ = uStack_d0;
  FStack_78.MaxDepthRange = 16000.0;
  FStack_78.GPUIndex = 0;
  puVar8 = (undefined8 *)(**(code **)(**(longlong **)((longlong)param_1 + 0x2c0) + 0x10))();
  FRHICommandListImmediate::ReadSurfaceData
            (param_2,(FRHITexture *)*puVar8,(TIntRect<int> *)&TStack_90._s_0,&TStack_f8,&FStack_78);
  MakeShared<FImagePixelDataPayload,1>(&TStack_b8);
  pFVar4 = TStack_b8.Object;
  ::FString::operator=
            (&((TStack_b8.Object)->PassIdentifier).Name,(FString *)((longlong)param_1 + 0x298));
  ::FString::operator=(&(pFVar4->PassIdentifier).CameraName,(FString *)((longlong)param_1 + 0x2a8));
  FMoviePipelineRenderPassMetrics::operator=(&pFVar4->SampleState,param_1);
  FVar10.Data = TStack_f8.AllocatorInstance.Data;
  pFVar4->bRequireTransparentOutput = true;
  pFVar4->SortingOrder = 4;
  pFVar4->bCompositeToFinalImage = *(bool *)((longlong)param_1 + 0x2b8);
  TStack_a8.ArrayNum = (long64)TStack_f8.ArrayNum;
  TStack_a8.ArrayMax = (long64)TStack_f8.ArrayMax;
  TStack_a8.AllocatorInstance.Data = TStack_f8.AllocatorInstance.Data;
  TStack_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_f8.ArrayNum = 0;
  TStack_f8.ArrayMax = 0;
  TStackX_8._s_0.X = iVar2;
  TStackX_8._s_0.Y = iVar1;
  this = ::operator_new(0x40);
  if (this != (TImagePixelData<FColor> *)0x0) {
    TStack_48.Object = (IImagePixelDataPayload *)TStack_b8.Object;
    TStack_48.SharedReferenceCount.ReferenceController =
         TStack_b8.SharedReferenceCount.ReferenceController;
    if (TStack_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9 = TImagePixelData<FColor>::TImagePixelData<FColor>
                       (this,(TIntPoint<int> *)&TStackX_8._s_0,&TStack_a8,&TStack_48);
    FVar10.Data = TStack_a8.AllocatorInstance.Data;
  }
  pTStackX_18 = pTVar9;
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  if (*(longlong *)((longlong)param_1 + 0x2c8) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (**(code **)(**(longlong **)((longlong)param_1 + 0x2c8) + 8))
            (*(longlong **)((longlong)param_1 + 0x2c8),&pTStackX_18);
  if (pTStackX_18 != (TImagePixelData<FColor> *)0x0) {
    (**(code **)pTStackX_18->_padding_)(pTStackX_18,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_b8.SharedReferenceCount.ReferenceController);
  if (TStack_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_f8.AllocatorInstance.Data);
  }
  return;
}

