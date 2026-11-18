// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 4

// FImageSaturateTask @ 14aa92d20

FImageSaturateTask * __thiscall
UE::Mutable::Private::FImageSaturateTask::FImageSaturateTask
          (FImageSaturateTask *this,FScheduledOp *param_1,ImageSaturateArgs *param_2)

{
  this->_padding_ = (longlong)&___7FIssuedTask_CodeRunner_Private_Mutable_UE__6B_;
  this->_padding_ = *(longlong *)param_1;
  *(undefined4 *)&this->_padding_ = *(undefined4 *)&param_1->ExecutionIndex;
  this->_padding_ = (longlong)&___7FImageSaturateTask_Private_Mutable_UE__6B_;
  this->_padding_ = 0;
  this->Args = *param_2;
  (this->Result).Object = (FImage *)0x0;
  (this->Result).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// Complete @ 14aabfa20

bool __thiscall
UE::Mutable::Private::FImageSaturateTask::Complete(FImageSaturateTask *this,CodeRunner *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  Private *pPVar2;
  atomic<int> *paVar3;
  FCacheAddress local_res8 [4];
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_18;
  
  local_18.Object = (this->Result).Object;
  if (local_18.Object != (FImage *)0x0) {
    pTVar1 = (this->Result).SharedReferenceCount.ReferenceController;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      paVar3 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar3 = &pTVar1->SharedReferenceCount;
      LOCK();
      *paVar3 = (atomic<int>)((int)*paVar3 + 1);
      UNLOCK();
    }
    local_res8[0].At = (uint)this->_padding_;
    local_res8[0].ExecutionIndex = (ushort)this->_padding_;
    local_res8[0].ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    pPVar2 = param_1->System;
    local_res8[0].Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar3 = (atomic<int>)((int)*paVar3 + 1);
      UNLOCK();
    }
    local_18.SharedReferenceCount.ReferenceController = pTVar1;
    FWorkingMemoryManager::StoreImage(&pPVar2->WorkingMemoryManager,local_res8,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return true;
}

// DoWork @ 14aac6b60

void __thiscall UE::Mutable::Private::FImageSaturateTask::DoWork(FImageSaturateTask *this)

{
  EImageFormat EVar1;
  ushort uVar2;
  FImage *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  code *local_48;
  FImage **local_40;
  FImage *local_38;
  undefined4 local_30;
  uint local_2c;
  undefined2 local_28;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1491,"Mutable_FImageSaturateTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x5d3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1491);
  }
  fVar9 = this->Factor;
  pFVar3 = (this->Result).Object;
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`void___cdecl_UE::Mutable::Private::ImageSaturate<1>(UE::Mutable::Private::FImage*___ptr64,float)'
                ::__l2::__CpuProfilerEventSpecId17,"Mutable_ImageSaturateInplace",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageSaturate.h"
               ,0x11);
    FCpuProfilerTrace::OutputBeginEvent
              (`void___cdecl_UE::Mutable::Private::ImageSaturate<1>(UE::Mutable::Private::FImage*___ptr64,float)'
               ::__l2::__CpuProfilerEventSpecId17);
  }
  if (pFVar3 != (FImage *)0x0) {
    EVar1 = (pFVar3->DataStorage).ImageFormat;
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    fVar9 = fVar9 * __real_437f0000;
    if ((ASTC_10x10_RG_LDR < EVar1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("format < EImageFormat::Count",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ImageTypes.cpp"
                           ,0x3f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar2 = s_imageFormatData[EVar1].BytesPerBlock;
    iVar6 = FImageDataStorage::GetNumBatchesLODRange
                      (&pFVar3->DataStorage,0x4000,(uint)uVar2,0,(uint)(pFVar3->DataStorage).NumLODs
                      );
    local_40 = &local_38;
    local_30 = 0x4000;
    local_48 = Core::Private::Function::
               TFunctionRefCaller<`UE::Mutable::Private::ImageSaturate<1>'::__l2::<lambda_1>,void,int>
               ::Call;
    local_28 = (undefined2)(int)fVar9;
    local_38 = pFVar3;
    local_2c = (uint)uVar2;
    ParallelExecutionUtils::InvokeBatchParallelFor
              (iVar6,(TFunctionRef<void___cdecl(int)> *)&local_48);
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!bVar7) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// Prepare @ 14aae3880

bool __thiscall
UE::Mutable::Private::FImageSaturateTask::Prepare
          (FImageSaturateTask *this,CodeRunner *param_1,bool *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FOpExecutionData *pFVar5;
  Private *pPVar6;
  atomic<int> *paVar7;
  FCacheAddress *pFVar8;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar9;
  bool bVar10;
  float fVar11;
  FCacheAddress local_res8;
  uint local_res10;
  undefined2 uStackX_14;
  undefined1 uStackX_16;
  EType EStackX_17;
  FCacheAddress local_res18;
  FCacheAddress local_res20;
  FCacheAddress local_a8 [2];
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_98;
  FImage *local_88;
  FSharedReferencer<1> FStack_80;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_78;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_68;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_58 [2];
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1464,"Mutable_FImageSaturateTask_Prepare",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x5b8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1464);
  }
  *param_2 = false;
  local_res8.At = (this->Args).Base;
  local_res8.ExecutionIndex = (ushort)this->_padding_;
  local_res8.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
  local_res8.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
  FWorkingMemoryManager::LoadImage
            (&param_1->System->WorkingMemoryManager,&local_98,&local_res8,false);
  uStackX_14 = (undefined2)this->_padding_;
  pPVar6 = param_1->System;
  uVar1 = (this->Args).Factor;
  EStackX_17 = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
  uStackX_16 = 0;
  local_res10 = uVar1;
  if (((pPVar6->WorkingMemoryManager).CurrentInstanceCache.Object == (FProgramCache *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_a8[0].ExecutionIndex = uStackX_14;
  local_a8[0].At = local_res10;
  local_a8[0].ExecutionOptions = uStackX_16;
  local_a8[0].Type = EStackX_17;
  if (uVar1 == 0) {
    fVar11 = 0.0;
  }
  else {
    pFVar5 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                       (&((pPVar6->WorkingMemoryManager).CurrentInstanceCache.Object)->
                         OpExecutionData,local_a8);
    if (pFVar5 == (FOpExecutionData *)0x0) {
      fVar11 = 0.0;
    }
    else {
      if ((pFVar5->DataType != Scalar) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data->DataType == EDataType::Scalar",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                             ,0x2bf,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      fVar11 = (pFVar5->field5_0x4).ScalarResult;
    }
  }
  this->Factor = fVar11;
  if (local_98.Object == (FImage *)0x0) {
    if (local_98.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar7 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar7 = &(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
    }
    local_res18.At = (uint)this->_padding_;
    local_res18.ExecutionIndex = (ushort)this->_padding_;
    local_res18.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_res18.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
    pPVar6 = param_1->System;
    local_78.Object = (FImage *)0x0;
    local_78.SharedReferenceCount.ReferenceController =
         local_98.SharedReferenceCount.ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
    }
    pTVar9 = &local_78;
    pFVar8 = &local_res18;
  }
  else {
    if (__real_322bcc77 <
        (float)((uint)(fVar11 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      FWorkingMemoryManager::CloneOrTakeOver
                (&param_1->System->WorkingMemoryManager,local_58,&local_98);
      local_88 = local_58[0].Object;
      FStack_80.ReferenceController = local_58[0].SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (&this->Result != (TSharedPtr<UE::Mutable::Private::FImage,1> *)&local_88) {
        (this->Result).Object = local_58[0].Object;
        local_88 = (FImage *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Result).SharedReferenceCount,&FStack_80);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_80.ReferenceController);
      bVar3 = true;
      goto LAB_14aae3b4c;
    }
    if (local_98.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar7 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar7 = &(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
    }
    local_res20.At = (uint)this->_padding_;
    local_res20.ExecutionIndex = (ushort)this->_padding_;
    local_res20.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_res20.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
    pPVar6 = param_1->System;
    local_68.Object = local_98.Object;
    local_68.SharedReferenceCount.ReferenceController =
         local_98.SharedReferenceCount.ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
    }
    pTVar9 = &local_68;
    pFVar8 = &local_res20;
  }
  FWorkingMemoryManager::StoreImage(&pPVar6->WorkingMemoryManager,pFVar8,pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  bVar3 = false;
LAB_14aae3b4c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

