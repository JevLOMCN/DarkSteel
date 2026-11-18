// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 4

// ~FImagePixelFormatTask @ 14aa93940

void __thiscall
UE::Mutable::Private::FImagePixelFormatTask::~FImagePixelFormatTask(FImagePixelFormatTask *this)

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
                    /* WARNING: Could not recover jumptable at 0x00014aa939a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(puVar4,1);
      return;
    }
  }
  return;
}

// Complete @ 14aabf7e0

bool __thiscall
UE::Mutable::Private::FImagePixelFormatTask::Complete
          (FImagePixelFormatTask *this,CodeRunner *param_1)

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

// DoWork @ 14aac6690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Mutable::Private::FImagePixelFormatTask::DoWork(FImagePixelFormatTask *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 auStackY_118 [32];
  bool local_e8 [16];
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
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1144,"Mutable_FImagePixelFormatTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x478);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1144);
  }
  local_e8[0] = false;
  FImageOperator::GetDefault((FImageOperator *)local_d8,&this->ImagePixelFormatFunc);
  FImageOperator::ImagePixelFormat
            ((FImageOperator *)local_d8,local_e8,this->ImageCompressionQuality,(this->Result).Object
             ,(this->Base).Object,-1);
  if ((local_e8[0] == false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bSuccess",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                         ,0x47d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (local_48 != 0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_78 != 0) {
    plVar3 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar3 = local_50;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_a8 != 0) {
    plVar3 = local_98;
    if (local_80 != (longlong *)0x0) {
      plVar3 = local_80;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_d8._0_8_ != 0) {
    plVar3 = (longlong *)(local_d8 + 0x10);
    if ((longlong *)local_d8._40_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_d8._40_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Prepare @ 14aae2c60

bool __thiscall
UE::Mutable::Private::FImagePixelFormatTask::Prepare
          (FImagePixelFormatTask *this,CodeRunner *param_1,bool *param_2)

{
  EImageFormat EVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FImage *pFVar7;
  FImageFormatData *pFVar8;
  Private *pPVar9;
  atomic<int> *paVar10;
  FCacheAddress *pFVar11;
  uint uVar12;
  TReferenceControllerBase<1> *pTVar13;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar14;
  bool bVar15;
  FCacheAddress local_res8;
  FCacheAddress local_res10;
  FCacheAddress local_res18;
  FCacheAddress local_res20;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_b8;
  FImage *local_a8;
  FSharedReferencer<1> FStack_a0;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_98;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_88;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_78;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_68 [2];
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1097,"Mutable_FImageLayerPixelFormatTask_Prepare",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x449);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1097);
  }
  *param_2 = false;
  this->ImageCompressionQuality = (param_1->Settings).ImageCompressionQuality;
  local_res8.At = (this->Args).source;
  local_res8.ExecutionIndex = (ushort)this->_padding_;
  local_res8.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
  local_res8.Type = Full;
  FWorkingMemoryManager::LoadImage
            (&param_1->System->WorkingMemoryManager,&local_b8,&local_res8,false);
  pTVar14 = &this->Base;
  if (pTVar14 != &local_b8) {
    pTVar14->Object = local_b8.Object;
    local_b8.Object = (FImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Base).SharedReferenceCount,&local_b8.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  if (((pTVar14->Object != (FImage *)0x0) &&
      (ASTC_10x10_RG_LDR < (pTVar14->Object->DataStorage).ImageFormat)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Base || Base->GetFormat() < EImageFormat::Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                         ,0x44f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar7 = pTVar14->Object;
  if (pFVar7 == (FImage *)0x0) {
    pTVar13 = (this->Base).SharedReferenceCount.ReferenceController;
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      paVar10 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar10 = &pTVar13->SharedReferenceCount;
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    local_res10.At = (uint)this->_padding_;
    local_res10.ExecutionIndex = (ushort)this->_padding_;
    local_res10.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_res10.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
    pPVar9 = param_1->System;
    local_98.Object = (FImage *)0x0;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    pTVar14 = &local_98;
    pFVar11 = &local_res10;
    local_98.SharedReferenceCount.ReferenceController = pTVar13;
  }
  else if (((pFVar7->DataStorage).ImageSize.field0_0x0._s_0.X == 0) ||
          (pFVar7 = (this->Base).Object, (pFVar7->DataStorage).ImageSize.field0_0x0._s_0.Y == 0)) {
    pTVar13 = (this->Base).SharedReferenceCount.ReferenceController;
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      paVar10 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar10 = &pTVar13->SharedReferenceCount;
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    local_res20.At = (uint)this->_padding_;
    local_res20.ExecutionIndex = (ushort)this->_padding_;
    local_res20.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_res20.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
    pPVar9 = param_1->System;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    pTVar14 = &local_78;
    pFVar11 = &local_res20;
    local_78.Object = pFVar7;
    local_78.SharedReferenceCount.ReferenceController = pTVar13;
  }
  else {
    this->TargetFormat = (this->Args).format;
    if ((this->Args).formatIfAlpha != None) {
      pFVar7 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(&this->Base);
      pFVar8 = GetImageFormatData((pFVar7->DataStorage).ImageFormat);
      if (3 < pFVar8->Channels) {
        this->TargetFormat = (this->Args).formatIfAlpha;
      }
    }
    if ((this->TargetFormat != None) &&
       (pFVar7 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(&this->Base),
       this->TargetFormat != (pFVar7->DataStorage).ImageFormat)) {
      TFunction<void___cdecl(bool_&,int,UE::Mutable::Private::FImage_*,UE::Mutable::Private::FImage_const_*,int)>
      ::operator=(&this->ImagePixelFormatFunc,&param_1->System->ImagePixelFormatOverride);
      EVar1 = this->TargetFormat;
      pFVar7 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(&this->Base);
      bVar2 = (pFVar7->DataStorage).NumLODs;
      pFVar7 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(&this->Base);
      uVar3 = (pFVar7->DataStorage).ImageSize.field0_0x0._s_0.Y;
      pFVar7 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(&this->Base);
      uVar12 = (uint)bVar2;
      if (uVar12 == 0) {
        uVar12 = 1;
      }
      FWorkingMemoryManager::CreateImage
                (&param_1->System->WorkingMemoryManager,local_68,
                 (uint)(pFVar7->DataStorage).ImageSize.field0_0x0._s_0.X,(uint)uVar3,uVar12,EVar1,
                 NotInitialized);
      local_a8 = local_68[0].Object;
      FStack_a0.ReferenceController = local_68[0].SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (&this->Result != (TSharedPtr<UE::Mutable::Private::FImage,1> *)&local_a8) {
        (this->Result).Object = local_68[0].Object;
        local_a8 = (FImage *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Result).SharedReferenceCount,&FStack_a0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_a0.ReferenceController);
      bVar5 = true;
      goto LAB_14aae3000;
    }
    pTVar13 = (this->Base).SharedReferenceCount.ReferenceController;
    local_88.Object = (this->Base).Object;
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      paVar10 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar10 = &pTVar13->SharedReferenceCount;
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    local_res18.At = (uint)this->_padding_;
    local_res18.ExecutionIndex = (ushort)this->_padding_;
    local_res18.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_res18.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
    pPVar9 = param_1->System;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    pTVar14 = &local_88;
    pFVar11 = &local_res18;
    local_88.SharedReferenceCount.ReferenceController = pTVar13;
  }
  FWorkingMemoryManager::StoreImage(&pPVar9->WorkingMemoryManager,pFVar11,pTVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  bVar5 = false;
LAB_14aae3000:
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar5;
}

