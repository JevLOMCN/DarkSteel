// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 4

// ~FImageResizeRelTask @ 14aa939c0

void __thiscall
UE::Mutable::Private::FImageResizeRelTask::~FImageResizeRelTask(FImageResizeRelTask *this)

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
                    /* WARNING: Could not recover jumptable at 0x00014aa93a26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(puVar4,1);
      return;
    }
  }
  return;
}

// Complete @ 14aabf8a0

bool __thiscall
UE::Mutable::Private::FImageResizeRelTask::Complete(FImageResizeRelTask *this,CodeRunner *param_1)

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

// DoWork @ 14aac6820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Mutable::Private::FImageResizeRelTask::DoWork(FImageResizeRelTask *this)

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
              (&__CpuProfilerEventSpecId1713,"Mutable_FImageResizeRelTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x6b1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1713);
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

// Prepare @ 14aae3040

bool __thiscall
UE::Mutable::Private::FImageResizeRelTask::Prepare
          (FImageResizeRelTask *this,CodeRunner *param_1,bool *param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  code *pcVar5;
  TIntVector2<unsigned_short>_u_0 TVar6;
  bool bVar7;
  undefined1 uVar8;
  byte bVar9;
  uint uVar10;
  Private *pPVar11;
  FImage *pFVar12;
  atomic<int> *paVar13;
  FCacheAddress *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar16;
  uint uVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  FCacheAddress local_res18;
  FCacheAddress local_res20;
  FCacheAddress local_c8;
  FCacheAddress local_c0;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_b8;
  FImage *local_a8;
  FSharedReferencer<1> FStack_a0;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_98;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_88;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_78;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_68 [2];
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1661,"Mutable_FImageResizeRelTask_Prepare",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x67d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1661);
  }
  *param_2 = false;
  this->ImageCompressionQuality = (param_1->Settings).ImageCompressionQuality;
  local_res18.At = (this->Args).Source;
  local_res18.ExecutionIndex = (ushort)this->_padding_;
  local_res18.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
  local_res18.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
  FWorkingMemoryManager::LoadImage
            (&param_1->System->WorkingMemoryManager,&local_b8,&local_res18,false);
  pTVar16 = &this->Base;
  if (pTVar16 != &local_b8) {
    pTVar16->Object = local_b8.Object;
    local_b8.Object = (FImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Base).SharedReferenceCount,&local_b8.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  if (pTVar16->Object == (FImage *)0x0) {
    pTVar15 = (this->Base).SharedReferenceCount.ReferenceController;
    if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
      paVar13 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar13 = &pTVar15->SharedReferenceCount;
      LOCK();
      *paVar13 = (atomic<int>)((int)*paVar13 + 1);
      UNLOCK();
    }
    local_res20.At = (uint)this->_padding_;
    local_res20.ExecutionIndex = (ushort)this->_padding_;
    local_res20.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_res20.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
    pPVar11 = param_1->System;
    local_98.Object = (FImage *)0x0;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar13 = (atomic<int>)((int)*paVar13 + 1);
      UNLOCK();
    }
    pTVar16 = &local_98;
    pFVar14 = &local_res20;
    local_98.SharedReferenceCount.ReferenceController = pTVar15;
  }
  else {
    dVar19 = (double)((float)(pTVar16->Object->DataStorage).ImageSize.field0_0x0._s_0.Y *
                      (this->Args).Factor[1] + __real_3f000000);
    if (dVar19 <= __real_3ff0000000000000) {
      dVar19 = __real_3ff0000000000000;
    }
    dVar20 = (double)((float)(pTVar16->Object->DataStorage).ImageSize.field0_0x0._s_0.X *
                      (this->Args).Factor[0] + __real_3f000000);
    if (dVar20 <= __real_3ff0000000000000) {
      dVar20 = __real_3ff0000000000000;
    }
    TVar6._s_0.Y = (short)(int)dVar19;
    TVar6._s_0.X = (short)(int)dVar20;
    (this->DestSize).field0_0x0 = TVar6;
    if ((pTVar16->Object == (FImage *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    pFVar12 = pTVar16->Object;
    if ((pFVar12->DataStorage).ImageSize.field0_0x0._s_0.X == (this->DestSize).field0_0x0._s_0.X) {
      if ((pFVar12 == (FImage *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pFVar12 = pTVar16->Object;
      if ((pFVar12->DataStorage).ImageSize.field0_0x0._s_0.Y == (this->DestSize).field0_0x0._s_0.Y)
      {
        pTVar15 = (this->Base).SharedReferenceCount.ReferenceController;
        if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
          paVar13 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar13 = &pTVar15->SharedReferenceCount;
          LOCK();
          *paVar13 = (atomic<int>)((int)*paVar13 + 1);
          UNLOCK();
        }
        local_c8.At = (uint)this->_padding_;
        local_c8.ExecutionIndex = (ushort)this->_padding_;
        local_c8.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
        local_c8.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
        pPVar11 = param_1->System;
        if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar13 = (atomic<int>)((int)*paVar13 + 1);
          UNLOCK();
        }
        pTVar16 = &local_88;
        pFVar14 = &local_c8;
        local_88.Object = pFVar12;
        local_88.SharedReferenceCount.ReferenceController = pTVar15;
        goto LAB_14aae33e4;
      }
    }
    if ((pFVar12 == (FImage *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    bVar9 = (pTVar16->Object->DataStorage).NumLODs;
    if (bVar9 == 0) {
      bVar9 = 1;
    }
    uVar10 = 1;
    if (1 < bVar9) {
      uVar2 = (this->DestSize).field0_0x0._s_0.X;
      uVar3 = (this->DestSize).field0_0x0._s_0.Y;
      uVar10 = 0;
      if ((uVar2 != 0) && (uVar3 != 0)) {
        uVar10 = (uint)uVar3;
        if ((uint)uVar3 < (uint)uVar2) {
          uVar10 = (uint)uVar2;
        }
        uVar17 = 1;
        if (uVar10 != 0) {
          uVar17 = uVar10;
        }
        uVar1 = (ulonglong)(uVar17 - 1) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar10 = (int)lVar4 + 1;
      }
    }
    if ((pTVar16->Object == (FImage *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    pFVar12 = (this->Base).Object;
    if ((pFVar12->Flags & 0x10) == 0) {
      pFVar12 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(&this->Base);
      FWorkingMemoryManager::CreateImage
                (&param_1->System->WorkingMemoryManager,local_68,
                 (uint)(this->DestSize).field0_0x0._s_0.X,(uint)(this->DestSize).field0_0x0._s_0.Y,
                 uVar10,(pFVar12->DataStorage).ImageFormat,NotInitialized);
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
      TFunction<void___cdecl(bool_&,int,UE::Mutable::Private::FImage_*,UE::Mutable::Private::FImage_const_*,int)>
      ::operator=(&this->ImagePixelFormatFunc,&param_1->System->ImagePixelFormatOverride);
      bVar7 = true;
      goto LAB_14aae3498;
    }
    pTVar15 = (this->Base).SharedReferenceCount.ReferenceController;
    if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
      paVar13 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar13 = &pTVar15->SharedReferenceCount;
      LOCK();
      *paVar13 = (atomic<int>)((int)*paVar13 + 1);
      UNLOCK();
    }
    local_c0.At = (uint)this->_padding_;
    local_c0.ExecutionIndex = (ushort)this->_padding_;
    local_c0.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_c0.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
    pPVar11 = param_1->System;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar13 = (atomic<int>)((int)*paVar13 + 1);
      UNLOCK();
    }
    pTVar16 = &local_78;
    pFVar14 = &local_c0;
    local_78.Object = pFVar12;
    local_78.SharedReferenceCount.ReferenceController = pTVar15;
  }
LAB_14aae33e4:
  FWorkingMemoryManager::StoreImage(&pPVar11->WorkingMemoryManager,pFVar14,pTVar16);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  bVar7 = false;
LAB_14aae3498:
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar7;
}

