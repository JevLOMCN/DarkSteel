// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 4

// ~FImageResizeTask @ 14aa93a40

void __thiscall UE::Mutable::Private::FImageResizeTask::~FImageResizeTask(FImageResizeTask *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  if (*(longlong *)&this->ImagePixelFormatFunc != 0) {
    plVar3 = *(longlong **)&(this->ImagePixelFormatFunc).field_0x28;
    plVar5 = (longlong *)&(this->ImagePixelFormatFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Result).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Base).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FIssuedTask_CodeRunner_Private_Mutable_UE__6B_;
  puVar4 = (undefined8 *)this->_padding_;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014aa93aa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(puVar4,1);
      return;
    }
  }
  return;
}

// Complete @ 14aabf960

bool __thiscall
UE::Mutable::Private::FImageResizeTask::Complete(FImageResizeTask *this,CodeRunner *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  Private *pPVar2;
  atomic<int> *paVar3;
  FCacheAddress local_res8;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_18;
  
  FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,&this->Base);
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
    local_res8.At = (uint)this->_padding_;
    local_res8.ExecutionIndex = (ushort)this->_padding_;
    local_res8.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_res8.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
    pPVar2 = param_1->System;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar3 = (atomic<int>)((int)*paVar3 + 1);
      UNLOCK();
    }
    local_18.SharedReferenceCount.ReferenceController = pTVar1;
    FWorkingMemoryManager::StoreImage(&pPVar2->WorkingMemoryManager,&local_res8,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return true;
}

// DoWork @ 14aac69c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Mutable::Private::FImageResizeTask::DoWork(FImageResizeTask *this)

{
  FImage *pFVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_108 [32];
  FMipmapGenerationSettings local_e8 [2];
  undefined1 local_d8 [48];
  longlong local_a8;
  longlong local_98 [3];
  longlong *local_80;
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  longlong local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1593,"Mutable_FImageResizeTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x639);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1593);
  }
  FImageOperator::GetDefault((FImageOperator *)local_d8,&this->ImagePixelFormatFunc);
  FImageOperator::ImageResizeLinear
            ((FImageOperator *)local_d8,(this->Result).Object,this->ImageCompressionQuality,
             (this->Base).Object);
  if (((this->Result).Object == (FImage *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->Result).Object;
  bVar4 = (pFVar1->DataStorage).NumLODs;
  if (bVar4 == 0) {
    bVar4 = 1;
  }
  if (1 < bVar4) {
    local_e8[0].FilterType = SimpleAverage;
    local_e8[0].AddressMode = None;
    ImageMipmapInPlace(this->ImageCompressionQuality,pFVar1,local_e8);
  }
  if (local_48 != 0) {
    plVar5 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar5 = local_20;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_78 != 0) {
    plVar5 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar5 = local_50;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_a8 != 0) {
    plVar5 = local_98;
    if (local_80 != (longlong *)0x0) {
      plVar5 = local_80;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_d8._0_8_ != 0) {
    plVar5 = (longlong *)(local_d8 + 0x10);
    if ((longlong *)local_d8._40_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_d8._40_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Prepare @ 14aae34f0

bool __thiscall
UE::Mutable::Private::FImageResizeTask::Prepare
          (FImageResizeTask *this,CodeRunner *param_1,bool *param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  undefined1 uVar7;
  ushort uVar8;
  FImage *pFVar9;
  Private *pPVar10;
  atomic<int> *paVar11;
  FCacheAddress *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  FCacheAddress local_res10;
  uint local_res18;
  FCacheAddress local_res20;
  FCacheAddress local_b8;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_b0;
  FImage *local_98;
  FSharedReferencer<1> FStack_90;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_88;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_78;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_68 [2];
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1540,"Mutable_FImageResizeTask_Prepare",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x604);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1540);
  }
  *param_2 = false;
  local_res20.ExecutionOptions = *(byte *)((longlong)&this->_padding_ + 2);
  uVar2 = (this->Args).Size[0];
  uVar15 = 1;
  this->ImageCompressionQuality = (param_1->Settings).ImageCompressionQuality;
  uVar2 = uVar2 >> (local_res20.ExecutionOptions & 0x1f);
  uVar17 = (uint)uVar2;
  uVar8 = 1;
  if (1 < uVar17) {
    uVar8 = uVar2;
  }
  uVar2 = (this->Args).Size[1] >> (local_res20.ExecutionOptions & 0x1f);
  local_res18 = (uint)uVar2;
  uVar16 = 1;
  if (1 < local_res18) {
    uVar15 = (uint)uVar2;
  }
  local_res20.At = (this->Args).Source;
  local_res20.ExecutionIndex = (ushort)this->_padding_;
  local_res20.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
  local_res10.At = uVar15;
  FWorkingMemoryManager::LoadImage
            (&param_1->System->WorkingMemoryManager,&local_b0,&local_res20,false);
  pTVar14 = &this->Base;
  if (pTVar14 != &local_b0) {
    pTVar14->Object = local_b0.Object;
    local_b0.Object = (FImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Base).SharedReferenceCount,&local_b0.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.SharedReferenceCount.ReferenceController);
  pFVar9 = pTVar14->Object;
  if ((pFVar9 == (FImage *)0x0) ||
     (((pFVar9->DataStorage).ImageSize.field0_0x0._s_0.X == uVar8 &&
      ((pFVar9->DataStorage).ImageSize.field0_0x0._s_0.Y == (ushort)uVar15)))) {
    pTVar13 = (this->Base).SharedReferenceCount.ReferenceController;
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      paVar11 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar11 = &pTVar13->SharedReferenceCount;
      LOCK();
      *paVar11 = (atomic<int>)((int)*paVar11 + 1);
      UNLOCK();
    }
    local_b8.At = (uint)this->_padding_;
    local_b8.ExecutionIndex = (ushort)this->_padding_;
    local_b8.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_b8.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
    pPVar10 = param_1->System;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar11 = (atomic<int>)((int)*paVar11 + 1);
      UNLOCK();
    }
    pTVar14 = &local_78;
    pFVar12 = &local_b8;
    local_78.Object = pFVar9;
    local_78.SharedReferenceCount.ReferenceController = pTVar13;
  }
  else {
    bVar5 = (pFVar9->DataStorage).NumLODs;
    if (bVar5 == 0) {
      bVar5 = 1;
    }
    if (1 < bVar5) {
      uVar15 = 1;
      if (1 < uVar17) {
        uVar15 = uVar17;
      }
      if ((uVar15 == 0) || ((short)local_res10.At == 0)) {
        uVar16 = 0;
      }
      else {
        uVar16 = local_res10.At & 0xffff;
        if ((local_res10.At & 0xffff) < uVar15) {
          uVar16 = uVar15;
        }
        uVar15 = 1;
        if (uVar16 != 0) {
          uVar15 = uVar16;
        }
        uVar1 = (ulonglong)(uVar15 - 1) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        uVar16 = (int)lVar3 + 1;
      }
    }
    if ((pFVar9 == (FImage *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pFVar9 = pTVar14->Object;
    if ((pFVar9->Flags & 0x10) == 0) {
      pFVar9 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar14);
      uVar15 = 1;
      if (1 < local_res18) {
        uVar15 = local_res18;
      }
      uVar18 = 1;
      if (1 < uVar17) {
        uVar18 = uVar17;
      }
      FWorkingMemoryManager::CreateImage
                (&param_1->System->WorkingMemoryManager,local_68,uVar18,uVar15,uVar16,
                 (pFVar9->DataStorage).ImageFormat,NotInitialized);
      local_98 = local_68[0].Object;
      FStack_90.ReferenceController = local_68[0].SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (&this->Result != (TSharedPtr<UE::Mutable::Private::FImage,1> *)&local_98) {
        (this->Result).Object = local_68[0].Object;
        local_98 = (FImage *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Result).SharedReferenceCount,&FStack_90);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_90.ReferenceController);
      TFunction<void___cdecl(bool_&,int,UE::Mutable::Private::FImage_*,UE::Mutable::Private::FImage_const_*,int)>
      ::operator=(&this->ImagePixelFormatFunc,&param_1->System->ImagePixelFormatOverride);
      bVar6 = true;
      goto LAB_14aae382d;
    }
    pTVar13 = (this->Base).SharedReferenceCount.ReferenceController;
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      paVar11 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar11 = &pTVar13->SharedReferenceCount;
      LOCK();
      *paVar11 = (atomic<int>)((int)*paVar11 + 1);
      UNLOCK();
    }
    local_res10.At = (uint)this->_padding_;
    local_res10.ExecutionIndex = (ushort)this->_padding_;
    local_res10.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_res10.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
    pPVar10 = param_1->System;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar11 = (atomic<int>)((int)*paVar11 + 1);
      UNLOCK();
    }
    pTVar14 = &local_88;
    pFVar12 = &local_res10;
    local_88.Object = pFVar9;
    local_88.SharedReferenceCount.ReferenceController = pTVar13;
  }
  FWorkingMemoryManager::StoreImage(&pPVar10->WorkingMemoryManager,pFVar12,pTVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  bVar6 = false;
LAB_14aae382d:
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar6;
}

