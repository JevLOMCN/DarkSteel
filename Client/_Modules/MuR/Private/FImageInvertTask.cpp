// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 3

// Complete @ 14aabf1d0

bool __thiscall
UE::Mutable::Private::FImageInvertTask::Complete(FImageInvertTask *this,CodeRunner *param_1)

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

// DoWork @ 14aac3a80

void __thiscall UE::Mutable::Private::FImageInvertTask::DoWork(FImageInvertTask *this)

{
  EImageFormat EVar1;
  ushort uVar2;
  FImage *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  FImage *local_28;
  undefined4 local_20;
  uint local_1c;
  code *local_18;
  FImage **local_10;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1786,"Mutable_FImageInvertTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x6fa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1786);
  }
  pFVar3 = (this->Result).Object;
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`void___cdecl_UE::Mutable::Private::ImageInvert<0>(UE::Mutable::Private::FImage*___ptr64)'
                ::__l2::__CpuProfilerEventSpecId17,"Mutable_ImageInvertInPlace",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageInvert.h"
               ,0x11);
    FCpuProfilerTrace::OutputBeginEvent
              (`void___cdecl_UE::Mutable::Private::ImageInvert<0>(UE::Mutable::Private::FImage*___ptr64)'
               ::__l2::__CpuProfilerEventSpecId17);
  }
  if (pFVar3 != (FImage *)0x0) {
    EVar1 = (pFVar3->DataStorage).ImageFormat;
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
    local_10 = &local_28;
    local_20 = 0x4000;
    local_18 = Core::Private::Function::
               TFunctionRefCaller<`UE::Mutable::Private::ImageInvert<0>'::__l2::<lambda_1>,void,int>
               ::Call;
    local_28 = pFVar3;
    local_1c = (uint)uVar2;
    ParallelExecutionUtils::InvokeBatchParallelFor
              (iVar6,(TFunctionRef<void___cdecl(int)> *)&local_18);
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

// Prepare @ 14aae0d50

bool __thiscall
UE::Mutable::Private::FImageInvertTask::Prepare
          (FImageInvertTask *this,CodeRunner *param_1,bool *param_2)

{
  bool bVar1;
  FCacheAddress local_res8;
  FImage *local_48;
  FSharedReferencer<1> FStack_40;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_38;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_28 [2];
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1768,"Mutable_FImageInvertTask_Prepare",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x6e8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1768);
  }
  *param_2 = false;
  local_res8.At = (this->Args).Base;
  local_res8.ExecutionIndex = (ushort)this->_padding_;
  local_res8.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
  local_res8.Type = Full;
  FWorkingMemoryManager::LoadImage
            (&param_1->System->WorkingMemoryManager,&local_38,&local_res8,false);
  if (local_38.Object != (FImage *)0x0) {
    FWorkingMemoryManager::CloneOrTakeOver
              (&param_1->System->WorkingMemoryManager,local_28,&local_38);
    local_48 = local_28[0].Object;
    FStack_40.ReferenceController = local_28[0].SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (&this->Result != (TSharedPtr<UE::Mutable::Private::FImage,1> *)&local_48) {
      (this->Result).Object = local_28[0].Object;
      local_48 = (FImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Result).SharedReferenceCount,&FStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_40.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

