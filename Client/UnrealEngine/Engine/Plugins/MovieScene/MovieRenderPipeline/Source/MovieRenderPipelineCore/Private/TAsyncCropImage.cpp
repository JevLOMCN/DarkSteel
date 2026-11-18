// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 3

// operator() @ 14dd10340

void __thiscall
TAsyncCropImage<FColor>::operator()(TAsyncCropImage<FColor> *this,FImagePixelData *param_1)

{
  TIntPoint<int>_u_0_s_0 TVar1;
  IImagePixelDataPayload *pIVar2;
  FImagePixelData *pFVar3;
  bool bVar4;
  int iVar5;
  long64 lVar6;
  TImagePixelData<FColor> *pTVar7;
  TImagePixelData<FColor> *pTVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *pTVar12;
  int local_res8;
  int local_resc;
  FImagePixelData *local_res10;
  TIntPoint<int>_u_0 local_res18;
  int local_res20;
  int local_res24;
  int local_d8;
  int local_d4;
  undefined1 local_d0 [16];
  TArray<FColor,TSizedDefaultAllocator<64>_> local_c0;
  TSharedPtr<IImagePixelDataPayload,1> local_a8;
  TImagePixelData<FColor> *local_98;
  FImagePixelData *local_90;
  longlong local_88 [2];
  IImagePixelDataPayload *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  undefined1 local_68 [16];
  int *local_58;
  FImagePixelData **local_50;
  int *local_48;
  
  local_res10 = param_1;
  if ((((*(int *)((longlong)&(this->CropRect).field0_0x0 + 8) < 1) ||
       (*(int *)((longlong)&(this->CropRect).field0_0x0 + 0xc) < 1)) ||
      (TVar1 = (param_1->Size).field0_0x0._s_0, TVar1.X <= *(int *)&(this->CropRect).field0_0x0)) ||
     (TVar1.Y <= *(int *)((longlong)&(this->CropRect).field0_0x0 + 4))) {
    local_d0._8_8_ = &local_res10;
    local_d0._0_8_ = this;
    bVar4 = `TAsyncCropImage<FColor>::operator()'::__l3::<lambda_1>::operator()(local_d0);
    if (!bVar4) {
      return;
    }
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_TAsyncCropImage<FColor>::operator()(FImagePixelData*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1750,"MoviePipeline::TAsyncCropImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MovieRenderPipelineDataTypes.h"
               ,0x6d6);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_TAsyncCropImage<FColor>::operator()(FImagePixelData*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1750);
  }
  iVar5 = *(int *)((longlong)&(this->CropRect).field0_0x0 + 4);
  iVar10 = *(int *)&(this->CropRect).field0_0x0;
  local_c0.ArrayMax = 0;
  local_res8 = 0;
  if (0 < iVar10) {
    local_res8 = iVar10;
  }
  local_res24 = 0;
  local_resc = local_res24;
  if (0 < iVar5) {
    local_resc = iVar5;
  }
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_res20 = local_res24;
  if (0 < -iVar10) {
    local_res20 = -iVar10;
  }
  if (0 < -iVar5) {
    local_res24 = -iVar5;
  }
  lVar11 = (longlong)
           ((*(int *)((longlong)&(this->CropRect).field0_0x0 + 8) - iVar10) *
           (*(int *)((longlong)&(this->CropRect).field0_0x0 + 0xc) - iVar5));
  lVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (4,4,lVar11,&local_c0.AllocatorInstance,&local_c0.ArrayNum,&local_c0.ArrayMax);
  memset(local_c0.AllocatorInstance.Data + lVar6 * 4,0,lVar11 * 4);
  pIVar2 = (local_res10->Payload).Object;
  (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_78);
  local_res18._s_0.X =
       *(int *)((longlong)&(this->CropRect).field0_0x0 + 8) - *(int *)&(this->CropRect).field0_0x0;
  local_res18._s_0.Y =
       *(int *)((longlong)&(this->CropRect).field0_0x0 + 0xc) -
       *(int *)((longlong)&(this->CropRect).field0_0x0 + 4);
  pTVar7 = ::operator_new(0x40);
  pTVar8 = (TImagePixelData<FColor> *)0x0;
  if (pTVar7 != (TImagePixelData<FColor> *)0x0) {
    local_a8.Object = local_78;
    local_a8.SharedReferenceCount.ReferenceController = pTStack_70;
    if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_70->SharedReferenceCount = (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = TImagePixelData<FColor>::TImagePixelData<FColor>
                       (pTVar7,(TIntPoint<int> *)&local_res18._s_0,&local_c0,&local_a8);
  }
  iVar10 = *(int *)((longlong)&(this->CropRect).field0_0x0 + 0xc) - local_resc;
  local_90 = local_res10;
  TVar1 = (local_res10->Size).field0_0x0._s_0;
  iVar5 = *(int *)((longlong)&(this->CropRect).field0_0x0 + 8) - local_res8;
  local_d8 = TVar1.X;
  local_d0._0_8_ = (void **)0x0;
  local_d0._8_8_ = local_d0._8_8_ & 0xffffffff00000000;
  if (iVar5 < local_d8) {
    local_d8 = iVar5;
  }
  local_d4 = TVar1.Y;
  local_68._0_8_ = &local_res20;
  if (iVar10 < local_d4) {
    local_d4 = iVar10;
  }
  local_68._8_8_ = &local_98;
  local_58 = &local_res8;
  local_50 = &local_90;
  local_48 = &local_d8;
  local_a8.Object =
       (IImagePixelDataPayload *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`TAsyncCropImage<FColor>::operator()'::__l2::<lambda_2>,void,int>::Call;
  local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_68;
  local_98 = pTVar8;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_d4,1,(TFunctionRef<void___cdecl(int)> *)&local_a8,
             local_res8._0_1_,None,(TArrayView<std::nullptr_t,int> *)local_d0);
  pTVar7 = pTVar8;
  if (this->ParentWriteTask == (FImageWriteTask *)0x0) {
    pTVar12 = &this->OutCroppedImage;
    if (pTVar12 == (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)local_88)
    goto LAB_14dd105f5;
    pTVar7 = (TImagePixelData<FColor> *)pTVar12->Ptr;
    pTVar12->Ptr = (FImagePixelData *)pTVar8;
    if (pTVar7 == (TImagePixelData<FColor> *)0x0) goto LAB_14dd10607;
    puVar9 = (undefined8 *)pTVar7->_padding_;
  }
  else {
    pTVar12 = &this->ParentWriteTask->PixelData;
    if (pTVar12 != (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)local_88) {
      pFVar3 = pTVar12->Ptr;
      pTVar12->Ptr = (FImagePixelData *)pTVar8;
      if (pFVar3 == (FImagePixelData *)0x0) goto LAB_14dd10607;
      (**(code **)pFVar3->_padding_)(pFVar3,1);
      pTVar7 = (TImagePixelData<FColor> *)0x0;
    }
LAB_14dd105f5:
    if (pTVar7 == (TImagePixelData<FColor> *)0x0) goto LAB_14dd10607;
    puVar9 = (undefined8 *)pTVar7->_padding_;
  }
  (*(code *)*puVar9)(pTVar7,1);
LAB_14dd10607:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14dd10670

void __thiscall
TAsyncCropImage<FLinearColor>::operator()
          (TAsyncCropImage<FLinearColor> *this,FImagePixelData *param_1)

{
  TIntPoint<int>_u_0_s_0 TVar1;
  IImagePixelDataPayload *pIVar2;
  FImagePixelData *pFVar3;
  bool bVar4;
  int iVar5;
  long64 lVar6;
  TImagePixelData<FLinearColor> *pTVar7;
  TImagePixelData<FLinearColor> *pTVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *pTVar12;
  int local_res8;
  int local_resc;
  FImagePixelData *local_res10;
  TIntPoint<int>_u_0 local_res18;
  int local_res20;
  int local_res24;
  int local_d8;
  int local_d4;
  undefined1 local_d0 [16];
  TArray<FLinearColor,TSizedDefaultAllocator<64>_> local_c0;
  TSharedPtr<IImagePixelDataPayload,1> local_a8;
  TImagePixelData<FLinearColor> *local_98;
  FImagePixelData *local_90;
  longlong local_88 [2];
  IImagePixelDataPayload *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  undefined1 local_68 [16];
  int *local_58;
  FImagePixelData **local_50;
  int *local_48;
  
  local_res10 = param_1;
  if ((((*(int *)((longlong)&(this->CropRect).field0_0x0 + 8) < 1) ||
       (*(int *)((longlong)&(this->CropRect).field0_0x0 + 0xc) < 1)) ||
      (TVar1 = (param_1->Size).field0_0x0._s_0, TVar1.X <= *(int *)&(this->CropRect).field0_0x0)) ||
     (TVar1.Y <= *(int *)((longlong)&(this->CropRect).field0_0x0 + 4))) {
    local_d0._8_8_ = &local_res10;
    local_d0._0_8_ = this;
    bVar4 = `TAsyncCropImage<FLinearColor>::operator()'::__l3::<lambda_1>::operator()(local_d0);
    if (!bVar4) {
      return;
    }
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_TAsyncCropImage<FLinearColor>::operator()(FImagePixelData*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1750,"MoviePipeline::TAsyncCropImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MovieRenderPipelineDataTypes.h"
               ,0x6d6);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_TAsyncCropImage<FLinearColor>::operator()(FImagePixelData*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1750);
  }
  iVar5 = *(int *)((longlong)&(this->CropRect).field0_0x0 + 4);
  iVar10 = *(int *)&(this->CropRect).field0_0x0;
  local_c0.ArrayMax = 0;
  local_res8 = 0;
  if (0 < iVar10) {
    local_res8 = iVar10;
  }
  local_res24 = 0;
  local_resc = local_res24;
  if (0 < iVar5) {
    local_resc = iVar5;
  }
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_res20 = local_res24;
  if (0 < -iVar10) {
    local_res20 = -iVar10;
  }
  if (0 < -iVar5) {
    local_res24 = -iVar5;
  }
  lVar11 = (longlong)
           ((*(int *)((longlong)&(this->CropRect).field0_0x0 + 8) - iVar10) *
           (*(int *)((longlong)&(this->CropRect).field0_0x0 + 0xc) - iVar5));
  lVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (0x10,4,lVar11,&local_c0.AllocatorInstance,&local_c0.ArrayNum,&local_c0.ArrayMax
                    );
  memset(local_c0.AllocatorInstance.Data + lVar6 * 0x10,0,lVar11 << 4);
  pIVar2 = (local_res10->Payload).Object;
  (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_78);
  local_res18._s_0.X =
       *(int *)((longlong)&(this->CropRect).field0_0x0 + 8) - *(int *)&(this->CropRect).field0_0x0;
  local_res18._s_0.Y =
       *(int *)((longlong)&(this->CropRect).field0_0x0 + 0xc) -
       *(int *)((longlong)&(this->CropRect).field0_0x0 + 4);
  pTVar7 = ::operator_new(0x40);
  pTVar8 = (TImagePixelData<FLinearColor> *)0x0;
  if (pTVar7 != (TImagePixelData<FLinearColor> *)0x0) {
    local_a8.Object = local_78;
    local_a8.SharedReferenceCount.ReferenceController = pTStack_70;
    if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_70->SharedReferenceCount = (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = TImagePixelData<FLinearColor>::TImagePixelData<FLinearColor>
                       (pTVar7,(TIntPoint<int> *)&local_res18._s_0,&local_c0,&local_a8);
  }
  iVar10 = *(int *)((longlong)&(this->CropRect).field0_0x0 + 0xc) - local_resc;
  local_90 = local_res10;
  TVar1 = (local_res10->Size).field0_0x0._s_0;
  iVar5 = *(int *)((longlong)&(this->CropRect).field0_0x0 + 8) - local_res8;
  local_d8 = TVar1.X;
  local_d0._0_8_ = (void **)0x0;
  local_d0._8_8_ = local_d0._8_8_ & 0xffffffff00000000;
  if (iVar5 < local_d8) {
    local_d8 = iVar5;
  }
  local_d4 = TVar1.Y;
  local_68._0_8_ = &local_res20;
  if (iVar10 < local_d4) {
    local_d4 = iVar10;
  }
  local_68._8_8_ = &local_98;
  local_58 = &local_res8;
  local_50 = &local_90;
  local_48 = &local_d8;
  local_a8.Object =
       (IImagePixelDataPayload *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`TAsyncCropImage<FLinearColor>::operator()'::__l2::<lambda_2>,void,int>::
       Call;
  local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_68;
  local_98 = pTVar8;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_d4,1,(TFunctionRef<void___cdecl(int)> *)&local_a8,
             local_res8._0_1_,None,(TArrayView<std::nullptr_t,int> *)local_d0);
  pTVar7 = pTVar8;
  if (this->ParentWriteTask == (FImageWriteTask *)0x0) {
    pTVar12 = &this->OutCroppedImage;
    if (pTVar12 == (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)local_88)
    goto LAB_14dd1092a;
    pTVar7 = (TImagePixelData<FLinearColor> *)pTVar12->Ptr;
    pTVar12->Ptr = (FImagePixelData *)pTVar8;
    if (pTVar7 == (TImagePixelData<FLinearColor> *)0x0) goto LAB_14dd1093c;
    puVar9 = (undefined8 *)pTVar7->_padding_;
  }
  else {
    pTVar12 = &this->ParentWriteTask->PixelData;
    if (pTVar12 != (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)local_88) {
      pFVar3 = pTVar12->Ptr;
      pTVar12->Ptr = (FImagePixelData *)pTVar8;
      if (pFVar3 == (FImagePixelData *)0x0) goto LAB_14dd1093c;
      (**(code **)pFVar3->_padding_)(pFVar3,1);
      pTVar7 = (TImagePixelData<FLinearColor> *)0x0;
    }
LAB_14dd1092a:
    if (pTVar7 == (TImagePixelData<FLinearColor> *)0x0) goto LAB_14dd1093c;
    puVar9 = (undefined8 *)pTVar7->_padding_;
  }
  (*(code *)*puVar9)(pTVar7,1);
LAB_14dd1093c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14dd109a0

void __thiscall
TAsyncCropImage<FFloat16Color>::operator()
          (TAsyncCropImage<FFloat16Color> *this,FImagePixelData *param_1)

{
  TIntPoint<int>_u_0_s_0 TVar1;
  IImagePixelDataPayload *pIVar2;
  FImagePixelData *pFVar3;
  bool bVar4;
  int iVar5;
  long64 lVar6;
  TImagePixelData<FFloat16Color> *pTVar7;
  TImagePixelData<FFloat16Color> *pTVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *pTVar12;
  int local_res8;
  int local_resc;
  FImagePixelData *local_res10;
  TIntPoint<int>_u_0 local_res18;
  int local_res20;
  int local_res24;
  int local_d8;
  int local_d4;
  undefined1 local_d0 [16];
  TArray<FFloat16Color,TSizedDefaultAllocator<64>_> local_c0;
  TSharedPtr<IImagePixelDataPayload,1> local_a8;
  TImagePixelData<FFloat16Color> *local_98;
  FImagePixelData *local_90;
  longlong local_88 [2];
  IImagePixelDataPayload *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  undefined1 local_68 [16];
  int *local_58;
  FImagePixelData **local_50;
  int *local_48;
  
  local_res10 = param_1;
  if ((((*(int *)((longlong)&(this->CropRect).field0_0x0 + 8) < 1) ||
       (*(int *)((longlong)&(this->CropRect).field0_0x0 + 0xc) < 1)) ||
      (TVar1 = (param_1->Size).field0_0x0._s_0, TVar1.X <= *(int *)&(this->CropRect).field0_0x0)) ||
     (TVar1.Y <= *(int *)((longlong)&(this->CropRect).field0_0x0 + 4))) {
    local_d0._8_8_ = &local_res10;
    local_d0._0_8_ = this;
    bVar4 = `TAsyncCropImage<FFloat16Color>::operator()'::__l3::<lambda_1>::operator()(local_d0);
    if (!bVar4) {
      return;
    }
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_TAsyncCropImage<FFloat16Color>::operator()(FImagePixelData*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1750,"MoviePipeline::TAsyncCropImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MovieRenderPipelineDataTypes.h"
               ,0x6d6);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_TAsyncCropImage<FFloat16Color>::operator()(FImagePixelData*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1750);
  }
  iVar5 = *(int *)((longlong)&(this->CropRect).field0_0x0 + 4);
  iVar10 = *(int *)&(this->CropRect).field0_0x0;
  local_c0.ArrayMax = 0;
  local_res8 = 0;
  if (0 < iVar10) {
    local_res8 = iVar10;
  }
  local_res24 = 0;
  local_resc = local_res24;
  if (0 < iVar5) {
    local_resc = iVar5;
  }
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_res20 = local_res24;
  if (0 < -iVar10) {
    local_res20 = -iVar10;
  }
  if (0 < -iVar5) {
    local_res24 = -iVar5;
  }
  lVar11 = (longlong)
           ((*(int *)((longlong)&(this->CropRect).field0_0x0 + 8) - iVar10) *
           (*(int *)((longlong)&(this->CropRect).field0_0x0 + 0xc) - iVar5));
  lVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (8,2,lVar11,&local_c0.AllocatorInstance,&local_c0.ArrayNum,&local_c0.ArrayMax);
  memset(local_c0.AllocatorInstance.Data + lVar6 * 8,0,lVar11 * 8);
  pIVar2 = (local_res10->Payload).Object;
  (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_78);
  local_res18._s_0.X =
       *(int *)((longlong)&(this->CropRect).field0_0x0 + 8) - *(int *)&(this->CropRect).field0_0x0;
  local_res18._s_0.Y =
       *(int *)((longlong)&(this->CropRect).field0_0x0 + 0xc) -
       *(int *)((longlong)&(this->CropRect).field0_0x0 + 4);
  pTVar7 = ::operator_new(0x40);
  pTVar8 = (TImagePixelData<FFloat16Color> *)0x0;
  if (pTVar7 != (TImagePixelData<FFloat16Color> *)0x0) {
    local_a8.Object = local_78;
    local_a8.SharedReferenceCount.ReferenceController = pTStack_70;
    if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_70->SharedReferenceCount = (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = TImagePixelData<FFloat16Color>::TImagePixelData<FFloat16Color>
                       (pTVar7,(TIntPoint<int> *)&local_res18._s_0,&local_c0,&local_a8);
  }
  iVar10 = *(int *)((longlong)&(this->CropRect).field0_0x0 + 0xc) - local_resc;
  local_90 = local_res10;
  TVar1 = (local_res10->Size).field0_0x0._s_0;
  iVar5 = *(int *)((longlong)&(this->CropRect).field0_0x0 + 8) - local_res8;
  local_d8 = TVar1.X;
  local_d0._0_8_ = (void **)0x0;
  local_d0._8_8_ = local_d0._8_8_ & 0xffffffff00000000;
  if (iVar5 < local_d8) {
    local_d8 = iVar5;
  }
  local_d4 = TVar1.Y;
  local_68._0_8_ = &local_res20;
  if (iVar10 < local_d4) {
    local_d4 = iVar10;
  }
  local_68._8_8_ = &local_98;
  local_58 = &local_res8;
  local_50 = &local_90;
  local_48 = &local_d8;
  local_a8.Object =
       (IImagePixelDataPayload *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`TAsyncCropImage<FFloat16Color>::operator()'::__l2::<lambda_2>,void,int>::
       Call;
  local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_68;
  local_98 = pTVar8;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_d4,1,(TFunctionRef<void___cdecl(int)> *)&local_a8,
             local_res8._0_1_,None,(TArrayView<std::nullptr_t,int> *)local_d0);
  pTVar7 = pTVar8;
  if (this->ParentWriteTask == (FImageWriteTask *)0x0) {
    pTVar12 = &this->OutCroppedImage;
    if (pTVar12 == (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)local_88)
    goto LAB_14dd10c58;
    pTVar7 = (TImagePixelData<FFloat16Color> *)pTVar12->Ptr;
    pTVar12->Ptr = (FImagePixelData *)pTVar8;
    if (pTVar7 == (TImagePixelData<FFloat16Color> *)0x0) goto LAB_14dd10c6a;
    puVar9 = (undefined8 *)pTVar7->_padding_;
  }
  else {
    pTVar12 = &this->ParentWriteTask->PixelData;
    if (pTVar12 != (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)local_88) {
      pFVar3 = pTVar12->Ptr;
      pTVar12->Ptr = (FImagePixelData *)pTVar8;
      if (pFVar3 == (FImagePixelData *)0x0) goto LAB_14dd10c6a;
      (**(code **)pFVar3->_padding_)(pFVar3,1);
      pTVar7 = (TImagePixelData<FFloat16Color> *)0x0;
    }
LAB_14dd10c58:
    if (pTVar7 == (TImagePixelData<FFloat16Color> *)0x0) goto LAB_14dd10c6a;
    puVar9 = (undefined8 *)pTVar7->_padding_;
  }
  (*(code *)*puVar9)(pTVar7,1);
LAB_14dd10c6a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

