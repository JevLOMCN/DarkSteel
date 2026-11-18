// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 4

// ~FImageComposeTask @ 14aa93710

void __thiscall UE::Mutable::Private::FImageComposeTask::~FImageComposeTask(FImageComposeTask *this)

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
            ((this->Mask).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Block).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Layout).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FIssuedTask_CodeRunner_Private_Mutable_UE__6B_;
  puVar4 = (undefined8 *)this->_padding_;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014aa9378e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(puVar4,1);
      return;
    }
  }
  return;
}

// Complete @ 14aabf030

bool __thiscall
UE::Mutable::Private::FImageComposeTask::Complete(FImageComposeTask *this,CodeRunner *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  Private *pPVar2;
  atomic<int> *paVar3;
  FCacheAddress local_res8;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_18;
  
  FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,&this->Block);
  FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,&this->Mask);
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

// DoWork @ 14aac3830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Mutable::Private::FImageComposeTask::DoWork(FImageComposeTask *this)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  FSharedReferencer<1> FStack_e0;
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
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1942,"Mutable_FImageComposeTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x796);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1942);
  }
  iVar1 = CpuChannel->Enabled;
  if ((this->Args).mask == 0) {
    if (-1 < iVar1) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1947,"Mutable_ImageComposeWithoutMask",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                 ,0x79b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1947);
    }
    FImageOperator::GetDefault((FImageOperator *)local_d8,&this->ImagePixelFormatFunc);
    FImageOperator::ImageCompose
              ((FImageOperator *)local_d8,(this->Result).Object,(this->Block).Object,&this->Rect);
    if (local_48 != 0) {
      plVar2 = local_38;
      if (local_20 != (longlong *)0x0) {
        plVar2 = local_20;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    if (local_78 != 0) {
      plVar2 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar2 = local_50;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    if (local_a8 != 0) {
      plVar2 = local_98;
      if (local_80 != (longlong *)0x0) {
        plVar2 = local_80;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    if (local_d8._0_8_ != 0) {
      plVar2 = (longlong *)(local_d8 + 0x10);
      if ((longlong *)local_d8._40_8_ != (longlong *)0x0) {
        plVar2 = (longlong *)local_d8._40_8_;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  else {
    if (-1 < iVar1) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1956,"Mutable_ImageComposeWithMask",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                 ,0x7a4);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1956);
    }
    ImageLayerOnBaseNoAlpha<&UE::Mutable::Private::BlendChannel,0>
              ((this->Result).Object,(this->Mask).Object,(this->Block).Object,&this->Rect);
  }
  if (-1 < iVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  local_e8 = 0;
  FStack_e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Layout != (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)&local_e8) {
    (this->Layout).Object = (FLayout *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Layout).SharedReferenceCount,&FStack_e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_e0.ReferenceController);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Prepare @ 14aadff80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Mutable::Private::FImageComposeTask::Prepare
          (FImageComposeTask *this,CodeRunner *param_1,bool *param_2)

{
  TSharedPtr<UE::Mutable::Private::FImage,1> *this_00;
  EImageFormat EVar1;
  EImageFormat EVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  TIntVector2<unsigned_short>_u_0 TVar7;
  FLayout *pFVar8;
  ulong64 uVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FImage *pFVar16;
  FImageFormatData *pFVar17;
  FImageFormatData *pFVar18;
  Private *pPVar19;
  atomic<int> *paVar20;
  FCacheAddress *pFVar21;
  uint uVar22;
  FSharedReferencer<1> FVar23;
  int iVar24;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar25;
  EImageFormat EVar26;
  longlong lVar27;
  bool bVar28;
  bool bVar29;
  undefined1 auStackY_278 [32];
  bool local_237;
  bool local_236 [6];
  FImage *local_230;
  CodeRunner *local_228;
  FCacheAddress local_220;
  FCacheAddress local_218;
  FCacheAddress local_210;
  FCacheAddress local_208;
  FCacheAddress local_200;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_1f8;
  FImage *local_1e8;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_1e0;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_1d0;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_1c0;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_1b0;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_1a0;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_190;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_180;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_170;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_160;
  TIntVector2<int>_u_0 local_150;
  TIntVector2<int>_u_0 TStack_148;
  FImage *local_140;
  TReferenceControllerBase<1> *pTStack_138;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_128;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_118;
  FImageOperator local_108;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  bVar28 = -1 < CpuChannel->Enabled;
  local_228 = param_1;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1835,"Mutable_FImageComposeTask_Prepare",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x72b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1835);
  }
  *param_2 = false;
  this->ImageCompressionQuality = (param_1->Settings).ImageCompressionQuality;
  local_220.At = (this->Args).base;
  local_220.ExecutionIndex = (ushort)this->_padding_;
  local_220.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
  local_220.Type = Full;
  FWorkingMemoryManager::LoadImage
            (&param_1->System->WorkingMemoryManager,&local_1f8,&local_220,false);
  if (((this->Layout).Object == (FLayout *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  pFVar8 = (this->Layout).Object;
  uVar22 = 0;
  uVar9 = (this->Args).BlockId;
  if (0 < (pFVar8->Blocks).ArrayNum) {
    lVar27 = 0;
    do {
      uVar14 = 0;
      if ((int)uVar22 < (pFVar8->Blocks).ArrayNum) {
        uVar14 = ~uVar22 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      if (*(ulong64 *)((pFVar8->Blocks).AllocatorInstance.Data + lVar27 + 0x10) == uVar9) {
        if (-1 < (int)uVar22) {
          local_218.At = (this->Args).blockImage;
          local_218.ExecutionIndex = (ushort)this->_padding_;
          local_218.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
          local_218.Type = Full;
          FWorkingMemoryManager::LoadImage
                    (&param_1->System->WorkingMemoryManager,&local_1e0,&local_218,false);
          pTVar25 = &this->Block;
          if (pTVar25 != &local_1e0) {
            pTVar25->Object = local_1e0.Object;
            local_1e0.Object = (FImage *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->Block).SharedReferenceCount,&local_1e0.SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1e0.SharedReferenceCount.ReferenceController);
          uVar14 = (this->Args).mask;
          if (uVar14 != 0) {
            local_210.ExecutionIndex = (ushort)this->_padding_;
            local_210.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
            local_210.Type = Full;
            local_210.At = uVar14;
            FWorkingMemoryManager::LoadImage
                      (&param_1->System->WorkingMemoryManager,&local_1d0,&local_210,false);
            if (&this->Mask != &local_1d0) {
              (this->Mask).Object = local_1d0.Object;
              local_1d0.Object = (FImage *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&(this->Mask).SharedReferenceCount,&local_1d0.SharedReferenceCount);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1d0.SharedReferenceCount.ReferenceController);
          }
          if (((this->Layout).Object == (FLayout *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          local_230 = (FImage *)(this->Layout).Object;
          uVar14 = 0;
          if ((int)uVar22 < (((FLayout *)local_230)->Blocks).ArrayNum) {
            uVar14 = ~uVar22 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          local_150 = *(TIntVector2<int>_u_0 *)
                       ((((TArray<UE::Mutable::Private::FLayoutBlock,TSizedDefaultAllocator<32>_> *)
                         &local_230->DataStorage)->AllocatorInstance).Data +
                       (longlong)(int)uVar22 * 0x20);
          if (((this->Layout).Object == (FLayout *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          local_230 = (FImage *)(this->Layout).Object;
          uVar14 = 0;
          if ((int)uVar22 <
              *(int *)((longlong)(local_230->DataStorage).Buffers.AllocatorInstance.InlineData + 8))
          {
            uVar14 = ~uVar22 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          TStack_148 = *(TIntVector2<int>_u_0 *)
                        (*(FScriptContainerElement **)
                          (local_230->DataStorage).Buffers.AllocatorInstance.InlineData +
                        (longlong)(int)uVar22 * 0x20 + 8);
          if (((this->Layout).Object == (FLayout *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          pFVar16 = local_1f8.Object;
          pFVar8 = (this->Layout).Object;
          iVar15 = (pFVar8->Size).field0_0x0._s_0.X;
          iVar6 = (pFVar8->Size).field0_0x0._s_0.Y;
          if ((local_1f8.Object == (FImage *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          uVar4 = (pFVar16->DataStorage).ImageSize.field0_0x0._s_0.X;
          uVar5 = (pFVar16->DataStorage).ImageSize.field0_0x0._s_0.Y;
          (this->Rect).min.field0_0x0 = local_150;
          (this->Rect).size.field0_0x0 = TStack_148;
          iVar24 = (int)((longlong)(ulonglong)uVar4 / (longlong)iVar15);
          (this->Rect).min.field0_0x0._s_0.X = iVar24 * (this->Rect).min.field0_0x0._s_0.X;
          iVar15 = (int)((longlong)(ulonglong)uVar5 / (longlong)iVar6);
          (this->Rect).min.field0_0x0._s_0.Y = iVar15 * (this->Rect).min.field0_0x0._s_0.Y;
          iVar24 = iVar24 * (this->Rect).size.field0_0x0._s_0.X;
          (this->Rect).size.field0_0x0._s_0.X = iVar24;
          iVar15 = iVar15 * (this->Rect).size.field0_0x0._s_0.Y;
          (this->Rect).size.field0_0x0._s_0.Y = iVar15;
          if ((((pTVar25->Object == (FImage *)0x0) || (iVar24 == 0)) || (iVar15 == 0)) ||
             ((pFVar16 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar25),
              (pFVar16->DataStorage).ImageSize.field0_0x0._s_0.X == 0 ||
              (pFVar16 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar25),
              (pFVar16->DataStorage).ImageSize.field0_0x0._s_0.Y == 0)))) {
            FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,pTVar25);
            FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,&this->Mask);
            if (local_1f8.SharedReferenceCount.ReferenceController ==
                (TReferenceControllerBase<1> *)0x0) {
              paVar20 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar20 = &(local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
              LOCK();
              *paVar20 = (atomic<int>)((int)*paVar20 + 1);
              UNLOCK();
            }
            local_208.At = (uint)this->_padding_;
            local_208.ExecutionIndex = (ushort)this->_padding_;
            local_208.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
            local_208.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
            pPVar19 = param_1->System;
            local_128.Object = local_1f8.Object;
            local_128.SharedReferenceCount.ReferenceController =
                 local_1f8.SharedReferenceCount.ReferenceController;
            if (local_1f8.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar20 = (atomic<int>)((int)*paVar20 + 1);
              UNLOCK();
            }
            pTVar25 = &local_128;
            pFVar21 = &local_208;
            FVar23.ReferenceController = local_1f8.SharedReferenceCount.ReferenceController;
            goto LAB_14aae0af2;
          }
          FWorkingMemoryManager::CloneOrTakeOver
                    (&param_1->System->WorkingMemoryManager,&local_190,&local_1f8);
          FVar23.ReferenceController = local_190.SharedReferenceCount.ReferenceController;
          pFVar16 = local_190.Object;
          local_1c0.Object = local_190.Object;
          local_1c0.SharedReferenceCount.ReferenceController =
               local_190.SharedReferenceCount.ReferenceController;
          local_190.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_190.Object = (FImage *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          this_00 = &this->Result;
          if (this_00 != &local_1c0) {
            this_00->Object = pFVar16;
            local_1c0.Object = (FImage *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->Result).SharedReferenceCount,&local_1c0.SharedReferenceCount);
            FVar23.ReferenceController = local_1c0.SharedReferenceCount.ReferenceController;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar23.ReferenceController);
          pFVar16 = TSharedPtr<UE::Mutable::Private::FImage,1>::operator->(this_00);
          pFVar16->Flags = '\0';
          if ((this->Args).mask == 0) {
            bVar11 = -1 < CpuChannel->Enabled;
            if (bVar11) {
              FCpuProfilerTrace::GetOrCreateSpecId
                        (&__CpuProfilerEventSpecId1887,"Mutable_ImageComposeWithoutMask",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                         ,0x75f);
              FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1887);
            }
            MakeImageOperator(&local_108,local_228);
            pFVar16 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar25);
            EVar1 = (pFVar16->DataStorage).ImageFormat;
            pFVar16 = TSharedPtr<UE::Mutable::Private::FImage,1>::operator->(this_00);
            EVar2 = (pFVar16->DataStorage).ImageFormat;
            EVar26 = EVar2;
            if ((EVar2 != EVar1) && (EVar2 != None)) {
              if (EVar1 == None) {
                EVar26 = None;
              }
              else {
                pFVar17 = GetImageFormatData(EVar1);
                pFVar18 = GetImageFormatData(EVar2);
                if (pFVar18->Channels <= pFVar17->Channels) {
                  pFVar17 = GetImageFormatData(EVar1);
                  pFVar18 = GetImageFormatData(EVar2);
                  EVar26 = EVar1;
                  if (((pFVar17->Channels <= pFVar18->Channels) &&
                      (((ASTC_10x10_RGBA_LDR < EVar2 ||
                        (EVar26 = EVar2, (0x241206000U >> ((ulonglong)EVar2 & 0x3f) & 1) == 0)) &&
                       (EVar26 = EVar2, EVar1 < ASTC_10x10_RG_LDR)))) &&
                     ((0x241206000U >> ((ulonglong)EVar1 & 0x3f) & 1) != 0)) {
                    EVar26 = EVar1;
                  }
                }
              }
            }
            pFVar16 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar25);
            TVar7 = (pFVar16->DataStorage).ImageSize.field0_0x0;
            if ((((uint)TVar7 & 0xffff) != (this->Rect).size.field0_0x0._s_0.X) ||
               ((uint)TVar7 >> 0x10 != (this->Rect).size.field0_0x0._s_0.Y)) {
              bVar29 = -1 < CpuChannel->Enabled;
              if (bVar29) {
                FCpuProfilerTrace::GetOrCreateSpecId
                          (&__CpuProfilerEventSpecId1896,
                           "Mutable_ImageComposeWithoutMask_BlockResize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                           ,0x768);
                FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1896);
              }
              pFVar16 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar25);
              FWorkingMemoryManager::CreateImage
                        (&local_228->System->WorkingMemoryManager,&local_180,
                         (this->Rect).size.field0_0x0._s_0.X,(this->Rect).size.field0_0x0._s_0.Y,1,
                         (pFVar16->DataStorage).ImageFormat,NotInitialized);
              local_1e8 = local_180.Object;
              local_230 = (FImage *)local_180.SharedReferenceCount.ReferenceController;
              local_180.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              local_180.Object = (FImage *)0x0;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              FImageOperator::ImageResizeLinear
                        (&local_108,local_1e8,this->ImageCompressionQuality,pTVar25->Object);
              FWorkingMemoryManager::Release(&local_228->System->WorkingMemoryManager,pTVar25);
              local_1b0.Object = local_1e8;
              local_1b0.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)local_230;
              if (local_230 != (FImage *)0x0) {
                LOCK();
                (((TIntVector2<int> *)&local_230->Flags)->field0_0x0)._s_0.X =
                     (((TIntVector2<int> *)&local_230->Flags)->field0_0x0)._s_0.X + 1;
                UNLOCK();
              }
              if (pTVar25 != &local_1b0) {
                pTVar25->Object = local_1e8;
                local_1b0.Object = (FImage *)0x0;
                SharedPointerInternals::FSharedReferencer<1>::operator=
                          (&(this->Block).SharedReferenceCount,&local_1b0.SharedReferenceCount);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_1b0.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)local_230);
              if (bVar29) {
                FCpuProfilerTrace::OutputEndEvent();
              }
            }
            pFVar16 = TSharedPtr<UE::Mutable::Private::FImage,1>::operator->(this_00);
            EVar1 = (pFVar16->DataStorage).ImageFormat;
            pFVar16 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar25);
            if (EVar1 != (pFVar16->DataStorage).ImageFormat) {
              bVar29 = -1 < CpuChannel->Enabled;
              if (bVar29) {
                FCpuProfilerTrace::GetOrCreateSpecId
                          (&__CpuProfilerEventSpecId1910,"Mutable_ImageComposeReformat",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                           ,0x776);
                FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1910);
              }
              pFVar16 = TSharedPtr<UE::Mutable::Private::FImage,1>::operator->(this_00);
              if ((pFVar16->DataStorage).ImageFormat != EVar26) {
                pFVar16 = TSharedPtr<UE::Mutable::Private::FImage,1>::operator->(this_00);
                bVar3 = (pFVar16->DataStorage).NumLODs;
                pFVar16 = TSharedPtr<UE::Mutable::Private::FImage,1>::operator->(&this->Result);
                uVar4 = (pFVar16->DataStorage).ImageSize.field0_0x0._s_0.Y;
                pFVar16 = TSharedPtr<UE::Mutable::Private::FImage,1>::operator->(&this->Result);
                uVar22 = (uint)bVar3;
                if (uVar22 == 0) {
                  uVar22 = 1;
                }
                FWorkingMemoryManager::CreateImage
                          (&local_228->System->WorkingMemoryManager,&local_170,
                           (uint)(pFVar16->DataStorage).ImageSize.field0_0x0._s_0.X,(uint)uVar4,
                           uVar22,EVar26,NotInitialized);
                FVar23.ReferenceController = local_170.SharedReferenceCount.ReferenceController;
                local_230 = local_170.Object;
                local_170.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
                local_170.Object = (FImage *)0x0;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)0x0);
                local_237 = false;
                FImageOperator::ImagePixelFormat
                          (&local_108,&local_237,this->ImageCompressionQuality,local_230,
                           (this->Result).Object,-1);
                if ((local_237 == false) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("bSuccess",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                                        ,0x77d,L""), bVar13)) {
                  pcVar10 = (code *)swi(3);
                  uVar12 = (*pcVar10)();
                  return (bool)uVar12;
                }
                FWorkingMemoryManager::Release
                          (&local_228->System->WorkingMemoryManager,&this->Result);
                if (FVar23.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (FVar23.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)((int)(FVar23.ReferenceController)->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_140 = (this->Result).Object;
                pTStack_138 = (this->Result).SharedReferenceCount.ReferenceController;
                (this->Result).Object = local_230;
                (this->Result).SharedReferenceCount.ReferenceController = FVar23.ReferenceController
                ;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTStack_138);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar23.ReferenceController);
              }
              pTVar25 = &this->Block;
              pFVar16 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar25);
              if ((pFVar16->DataStorage).ImageFormat != EVar26) {
                pFVar16 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar25);
                bVar3 = (pFVar16->DataStorage).NumLODs;
                pFVar16 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar25);
                uVar4 = (pFVar16->DataStorage).ImageSize.field0_0x0._s_0.Y;
                pFVar16 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->
                                    (&this->Block);
                uVar22 = (uint)bVar3;
                if (uVar22 == 0) {
                  uVar22 = 1;
                }
                FWorkingMemoryManager::CreateImage
                          (&local_228->System->WorkingMemoryManager,&local_160,
                           (uint)(pFVar16->DataStorage).ImageSize.field0_0x0._s_0.X,(uint)uVar4,
                           uVar22,EVar26,NotInitialized);
                FVar23.ReferenceController = local_160.SharedReferenceCount.ReferenceController;
                pFVar16 = local_160.Object;
                local_160.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
                local_160.Object = (FImage *)0x0;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)0x0);
                pTVar25 = &this->Block;
                local_236[0] = false;
                FImageOperator::ImagePixelFormat
                          (&local_108,local_236,this->ImageCompressionQuality,pFVar16,
                           (this->Block).Object,-1);
                if ((local_236[0] == false) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("bSuccess",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                                        ,0x786,L""), bVar13)) {
                  pcVar10 = (code *)swi(3);
                  uVar12 = (*pcVar10)();
                  return (bool)uVar12;
                }
                FWorkingMemoryManager::Release(&local_228->System->WorkingMemoryManager,pTVar25);
                local_1a0.Object = pFVar16;
                local_1a0.SharedReferenceCount.ReferenceController = FVar23.ReferenceController;
                if (FVar23.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (FVar23.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)((int)(FVar23.ReferenceController)->SharedReferenceCount + 1);
                  UNLOCK();
                }
                if (pTVar25 != &local_1a0) {
                  pTVar25->Object = pFVar16;
                  local_1a0.Object = (FImage *)0x0;
                  SharedPointerInternals::FSharedReferencer<1>::operator=
                            (&(this->Block).SharedReferenceCount,&local_1a0.SharedReferenceCount);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_1a0.SharedReferenceCount.ReferenceController);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar23.ReferenceController);
              }
              if (bVar29) {
                FCpuProfilerTrace::OutputEndEvent();
              }
            }
            FImageOperator::~FImageOperator(&local_108);
            if (bVar11) {
              FCpuProfilerTrace::OutputEndEvent();
            }
          }
          TFunction<void___cdecl(bool_&,int,UE::Mutable::Private::FImage_*,UE::Mutable::Private::FImage_const_*,int)>
          ::operator=(&this->ImagePixelFormatFunc,&local_228->System->ImagePixelFormatOverride);
          bVar11 = true;
          goto LAB_14aae0b06;
        }
        break;
      }
      uVar22 = uVar22 + 1;
      lVar27 = lVar27 + 0x20;
    } while ((int)uVar22 < (pFVar8->Blocks).ArrayNum);
  }
  if (local_1f8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar20 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar20 = &(local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar20 = (atomic<int>)((int)*paVar20 + 1);
    UNLOCK();
  }
  local_200.At = (uint)this->_padding_;
  local_200.ExecutionIndex = (ushort)this->_padding_;
  local_200.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
  local_200.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
  pPVar19 = param_1->System;
  local_118.Object = local_1f8.Object;
  local_118.SharedReferenceCount.ReferenceController =
       local_1f8.SharedReferenceCount.ReferenceController;
  if (local_1f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar20 = (atomic<int>)((int)*paVar20 + 1);
    UNLOCK();
  }
  pTVar25 = &local_118;
  pFVar21 = &local_200;
  FVar23.ReferenceController = local_1f8.SharedReferenceCount.ReferenceController;
LAB_14aae0af2:
  FWorkingMemoryManager::StoreImage(&pPVar19->WorkingMemoryManager,pFVar21,pTVar25);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar23.ReferenceController);
  bVar11 = false;
  local_1f8.SharedReferenceCount.ReferenceController = FVar23.ReferenceController;
LAB_14aae0b06:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f8.SharedReferenceCount.ReferenceController);
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar11;
}

