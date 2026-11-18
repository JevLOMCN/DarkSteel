// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 3

// Complete @ 14aabf330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Mutable::Private::FImageLayerTask::Complete(FImageLayerTask *this,CodeRunner *param_1)

{
  EImageFormat EVar1;
  ushort uVar2;
  FImage *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  Private *pPVar5;
  code *pcVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  undefined1 uVar9;
  longlong *plVar10;
  atomic<int> *paVar11;
  uint uVar12;
  undefined1 auStackY_178 [32];
  bool local_138 [4];
  FCacheAddress local_134;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_128;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_118;
  FImage *local_108;
  TReferenceControllerBase<1> *pTStack_100;
  undefined1 local_f8 [48];
  longlong local_c8;
  longlong local_b8 [3];
  longlong *local_a0;
  longlong local_98;
  longlong local_88 [3];
  longlong *local_70;
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,&this->Blended);
  FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,&this->Mask);
  pFVar3 = (this->Result).Object;
  if (pFVar3 != (FImage *)0x0) {
    EVar1 = this->InitialFormat;
    if (EVar1 != (pFVar3->DataStorage).ImageFormat) {
      uVar12 = (uint)(pFVar3->DataStorage).NumLODs;
      if (uVar12 == 0) {
        uVar12 = 1;
      }
      if (pFVar3 == (FImage *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      pFVar3 = (this->Result).Object;
      uVar2 = (pFVar3->DataStorage).ImageSize.field0_0x0._s_0.Y;
      if (pFVar3 == (FImage *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      FWorkingMemoryManager::CreateImage
                (&param_1->System->WorkingMemoryManager,&local_128,
                 (uint)(((this->Result).Object)->DataStorage).ImageSize.field0_0x0._s_0.X,
                 (uint)uVar2,uVar12,EVar1,NotInitialized);
      FVar7.ReferenceController = local_128.SharedReferenceCount.ReferenceController;
      pFVar3 = local_128.Object;
      local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_128.Object = (FImage *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_138[0] = false;
      MakeImageOperator((FImageOperator *)local_f8,param_1);
      FImageOperator::ImagePixelFormat
                ((FImageOperator *)local_f8,local_138,this->ImageCompressionQuality,pFVar3,
                 (this->Result).Object,-1);
      if (local_138[0] == false) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bSuccess",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                           ,0x323,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,&this->Result);
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar7.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_108 = (this->Result).Object;
      pTStack_100 = (this->Result).SharedReferenceCount.ReferenceController;
      (this->Result).Object = pFVar3;
      (this->Result).SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_100);
      if (local_68 != 0) {
        plVar10 = local_58;
        if (local_40 != (longlong *)0x0) {
          plVar10 = local_40;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      if (local_98 != 0) {
        plVar10 = local_88;
        if (local_70 != (longlong *)0x0) {
          plVar10 = local_70;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      if (local_c8 != 0) {
        plVar10 = local_b8;
        if (local_a0 != (longlong *)0x0) {
          plVar10 = local_a0;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      if (local_f8._0_8_ != 0) {
        plVar10 = (longlong *)(local_f8 + 0x10);
        if ((longlong *)local_f8._40_8_ != (longlong *)0x0) {
          plVar10 = (longlong *)local_f8._40_8_;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
    }
    pTVar4 = (this->Result).SharedReferenceCount.ReferenceController;
    local_118.Object = (this->Result).Object;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      paVar11 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar11 = &pTVar4->SharedReferenceCount;
      LOCK();
      *paVar11 = (atomic<int>)((int)*paVar11 + 1);
      UNLOCK();
    }
    local_134.At = (uint)this->_padding_;
    local_134.ExecutionIndex = (ushort)this->_padding_;
    local_134.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_134.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
    pPVar5 = param_1->System;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar11 = (atomic<int>)((int)*paVar11 + 1);
      UNLOCK();
    }
    local_118.SharedReferenceCount.ReferenceController = pTVar4;
    FWorkingMemoryManager::StoreImage(&pPVar5->WorkingMemoryManager,&local_134,&local_118);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return true;
}

// DoWork @ 14aac5630

void __thiscall UE::Mutable::Private::FImageLayerTask::DoWork(FImageLayerTask *this)

{
  uchar *puVar1;
  byte bVar2;
  EImageFormat EVar3;
  FImage *pFVar4;
  FImage *pFVar5;
  FImage *pFVar6;
  code *pcVar7;
  bool bVar8;
  char *pcVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  wchar_t *pwVar13;
  byte bVar14;
  byte bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  FMipmapGenerationSettings local_res8;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId648,"Mutable_FImageLayerTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x288);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId648);
  }
  if (((this->Blended).Object == (FImage *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar14 = (((this->Blended).Object)->DataStorage).NumLODs;
  if (bVar14 == 0) {
    bVar14 = 1;
  }
  if (((this->Result).Object == (FImage *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar15 = (((this->Result).Object)->DataStorage).NumLODs;
  if (bVar15 == 0) {
    bVar15 = 1;
  }
  bVar16 = bVar14 < bVar15;
  bVar8 = false;
  if (((((this->Mask).Object == (FImage *)0x0) && ((this->Args).flags == '\x04')) &&
      ((this->Args).blendType == '\a')) && ((this->Args).blendTypeAlpha == '\t')) {
    bVar18 = -1 < CpuChannel->Enabled;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId669,"Mutable_ImageLayerTask_Optimized",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                 ,0x29d);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId669);
    }
    bVar8 = true;
    BufferLayerComposite<&UE::Mutable::Private::BlendChannelMasked,&UE::Mutable::Private::LightenChannel,0>
              ((this->Result).Object,(this->Blended).Object,bVar16,
               (this->Args).BlendAlphaSourceChannel);
    if (bVar18) {
      FCpuProfilerTrace::OutputEndEvent();
      goto switchD_14aac61b5_caseD_0;
    }
  }
  bVar2 = (this->Args).flags;
  bVar10 = bVar2 >> 4;
  bVar18 = (bool)(bVar2 >> 1 & 1);
  bVar11 = bVar10 & 1;
  if (bVar8) goto switchD_14aac61b5_caseD_0;
  if ((this->Mask).Object != (FImage *)0x0) {
    if ((bVar11 != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bUseBlendSourceFromBlendAlpha",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                           ,0x2b4,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    switch((this->Args).blendType) {
    case '\0':
      break;
    case '\x01':
      pFVar4 = (this->Result).Object;
      pFVar5 = (this->Blended).Object;
      pFVar6 = (this->Mask).Object;
      EVar3 = (pFVar4->DataStorage).ImageFormat;
      if (EVar3 == RGB_UByte) {
        BufferLayerFormat<&UE::Mutable::Private::SoftLightChannelMasked,&UE::Mutable::Private::SoftLightChannel,1,3,3,3>
                  (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
        break;
      }
      if ((EVar3 != RGBA_UByte) && (EVar3 != BGRA_UByte)) {
        if (EVar3 == L_UByte) {
          BufferLayerFormat<&UE::Mutable::Private::SoftLightChannelMasked,&UE::Mutable::Private::SoftLightChannel,1,1,1,1>
                    (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
          break;
        }
LAB_14aac5dd9:
        pwVar13 = L"Unsupported format.";
        iVar12 = 0x6f1;
        pcVar9 = 
        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageLayer.cpp"
        ;
        goto LAB_14aac5fc2;
      }
      if (bVar18 != false) {
        BufferLayerFormat<&UE::Mutable::Private::SoftLightChannelMasked,&UE::Mutable::Private::SoftLightChannel,1,4,4,4>
                  (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
        goto switchD_14aac61b5_caseD_0;
      }
      BufferLayerFormat<&UE::Mutable::Private::SoftLightChannelMasked,&UE::Mutable::Private::SoftLightChannel,1,3,4,4>
                (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
      goto LAB_14aac619d;
    case '\x02':
      pFVar4 = (this->Result).Object;
      pFVar5 = (this->Blended).Object;
      pFVar6 = (this->Mask).Object;
      EVar3 = (pFVar4->DataStorage).ImageFormat;
      if (EVar3 == RGB_UByte) {
        BufferLayerFormat<&UE::Mutable::Private::HardLightChannelMasked,&UE::Mutable::Private::HardLightChannel,1,3,3,3>
                  (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
      }
      else {
        if ((EVar3 == RGBA_UByte) || (EVar3 == BGRA_UByte)) {
          if (bVar18 != false) {
            BufferLayerFormat<&UE::Mutable::Private::HardLightChannelMasked,&UE::Mutable::Private::HardLightChannel,1,4,4,4>
                      (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
            goto switchD_14aac61b5_caseD_0;
          }
          BufferLayerFormat<&UE::Mutable::Private::HardLightChannelMasked,&UE::Mutable::Private::HardLightChannel,1,3,4,4>
                    (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
          goto LAB_14aac619d;
        }
        if (EVar3 != L_UByte) goto LAB_14aac5dd9;
        BufferLayerFormat<&UE::Mutable::Private::HardLightChannelMasked,&UE::Mutable::Private::HardLightChannel,1,1,1,1>
                  (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
      }
      break;
    case '\x03':
      pFVar4 = (this->Result).Object;
      pFVar5 = (this->Blended).Object;
      pFVar6 = (this->Mask).Object;
      EVar3 = (pFVar4->DataStorage).ImageFormat;
      if (EVar3 == RGB_UByte) {
        BufferLayerFormat<&UE::Mutable::Private::BurnChannelMasked,&UE::Mutable::Private::BurnChannel,1,3,3,3>
                  (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
      }
      else {
        if ((EVar3 == RGBA_UByte) || (EVar3 == BGRA_UByte)) {
          if (bVar18 != false) {
            BufferLayerFormat<&UE::Mutable::Private::BurnChannelMasked,&UE::Mutable::Private::BurnChannel,1,4,4,4>
                      (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
            goto switchD_14aac61b5_caseD_0;
          }
          BufferLayerFormat<&UE::Mutable::Private::BurnChannelMasked,&UE::Mutable::Private::BurnChannel,1,3,4,4>
                    (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
          goto LAB_14aac619d;
        }
        if (EVar3 != L_UByte) goto LAB_14aac5dd9;
        BufferLayerFormat<&UE::Mutable::Private::BurnChannelMasked,&UE::Mutable::Private::BurnChannel,1,1,1,1>
                  (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
      }
      break;
    case '\x04':
      pFVar4 = (this->Result).Object;
      pFVar5 = (this->Blended).Object;
      pFVar6 = (this->Mask).Object;
      EVar3 = (pFVar4->DataStorage).ImageFormat;
      if (EVar3 == RGB_UByte) {
        BufferLayerFormat<&UE::Mutable::Private::DodgeChannelMasked,&UE::Mutable::Private::DodgeChannel,1,3,3,3>
                  (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
      }
      else {
        if ((EVar3 == RGBA_UByte) || (EVar3 == BGRA_UByte)) {
          if (bVar18 != false) {
            BufferLayerFormat<&UE::Mutable::Private::DodgeChannelMasked,&UE::Mutable::Private::DodgeChannel,1,4,4,4>
                      (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
            goto switchD_14aac61b5_caseD_0;
          }
          BufferLayerFormat<&UE::Mutable::Private::DodgeChannelMasked,&UE::Mutable::Private::DodgeChannel,1,3,4,4>
                    (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
          goto LAB_14aac619d;
        }
        if (EVar3 != L_UByte) goto LAB_14aac5dd9;
        BufferLayerFormat<&UE::Mutable::Private::DodgeChannelMasked,&UE::Mutable::Private::DodgeChannel,1,1,1,1>
                  (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
      }
      break;
    case '\x05':
      pFVar4 = (this->Result).Object;
      pFVar5 = (this->Blended).Object;
      pFVar6 = (this->Mask).Object;
      EVar3 = (pFVar4->DataStorage).ImageFormat;
      if (EVar3 == RGB_UByte) {
        BufferLayerFormat<&UE::Mutable::Private::ScreenChannelMasked,&UE::Mutable::Private::ScreenChannel,1,3,3,3>
                  (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
      }
      else {
        if ((EVar3 == RGBA_UByte) || (EVar3 == BGRA_UByte)) {
          if (bVar18 != false) {
            BufferLayerFormat<&UE::Mutable::Private::ScreenChannelMasked,&UE::Mutable::Private::ScreenChannel,1,4,4,4>
                      (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
            goto switchD_14aac61b5_caseD_0;
          }
          BufferLayerFormat<&UE::Mutable::Private::ScreenChannelMasked,&UE::Mutable::Private::ScreenChannel,1,3,4,4>
                    (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
          goto LAB_14aac619d;
        }
        if (EVar3 != L_UByte) goto LAB_14aac5dd9;
        BufferLayerFormat<&UE::Mutable::Private::ScreenChannelMasked,&UE::Mutable::Private::ScreenChannel,1,1,1,1>
                  (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
      }
      break;
    case '\x06':
      pFVar4 = (this->Result).Object;
      pFVar5 = (this->Blended).Object;
      pFVar6 = (this->Mask).Object;
      EVar3 = (pFVar4->DataStorage).ImageFormat;
      if (EVar3 == RGB_UByte) {
        BufferLayerFormat<&UE::Mutable::Private::OverlayChannelMasked,&UE::Mutable::Private::OverlayChannel,1,3,3,3>
                  (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
      }
      else {
        if ((EVar3 == RGBA_UByte) || (EVar3 == BGRA_UByte)) {
          if (bVar18 != false) {
            BufferLayerFormat<&UE::Mutable::Private::OverlayChannelMasked,&UE::Mutable::Private::OverlayChannel,1,4,4,4>
                      (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
            goto switchD_14aac61b5_caseD_0;
          }
          BufferLayerFormat<&UE::Mutable::Private::OverlayChannelMasked,&UE::Mutable::Private::OverlayChannel,1,3,4,4>
                    (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
          goto LAB_14aac619d;
        }
        if (EVar3 != L_UByte) goto LAB_14aac5dd9;
        BufferLayerFormat<&UE::Mutable::Private::OverlayChannelMasked,&UE::Mutable::Private::OverlayChannel,1,1,1,1>
                  (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
      }
      break;
    case '\a':
      pFVar4 = (this->Result).Object;
      pFVar5 = (this->Blended).Object;
      pFVar6 = (this->Mask).Object;
      EVar3 = (pFVar4->DataStorage).ImageFormat;
      if (EVar3 == RGB_UByte) {
        BufferLayerFormat<&UE::Mutable::Private::BlendChannelMasked,&UE::Mutable::Private::BlendChannel,1,3,3,3>
                  (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
      }
      else {
        if ((EVar3 == RGBA_UByte) || (EVar3 == BGRA_UByte)) {
          if (bVar18 != false) {
            BufferLayerFormat<&UE::Mutable::Private::BlendChannelMasked,&UE::Mutable::Private::BlendChannel,1,4,4,4>
                      (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
            goto switchD_14aac61b5_caseD_0;
          }
          BufferLayerFormat<&UE::Mutable::Private::BlendChannelMasked,&UE::Mutable::Private::BlendChannel,1,3,4,4>
                    (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
          goto LAB_14aac619d;
        }
        if (EVar3 != L_UByte) goto LAB_14aac5dd9;
        BufferLayerFormat<&UE::Mutable::Private::BlendChannelMasked,&UE::Mutable::Private::BlendChannel,1,1,1,1>
                  (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
      }
      break;
    case '\b':
      pFVar4 = (this->Result).Object;
      pFVar5 = (this->Blended).Object;
      pFVar6 = (this->Mask).Object;
      EVar3 = (pFVar4->DataStorage).ImageFormat;
      if (EVar3 == RGB_UByte) {
        BufferLayerFormat<&UE::Mutable::Private::MultiplyChannelMasked,&UE::Mutable::Private::MultiplyChannel,1,3,3,3>
                  (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
      }
      else {
        if ((EVar3 == RGBA_UByte) || (EVar3 == BGRA_UByte)) {
          if (bVar18 != false) {
            BufferLayerFormat<&UE::Mutable::Private::MultiplyChannelMasked,&UE::Mutable::Private::MultiplyChannel,1,4,4,4>
                      (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
            goto switchD_14aac61b5_caseD_0;
          }
          BufferLayerFormat<&UE::Mutable::Private::MultiplyChannelMasked,&UE::Mutable::Private::MultiplyChannel,1,3,4,4>
                    (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
          goto LAB_14aac619d;
        }
        if (EVar3 != L_UByte) goto LAB_14aac5dd9;
        BufferLayerFormat<&UE::Mutable::Private::MultiplyChannelMasked,&UE::Mutable::Private::MultiplyChannel,1,1,1,1>
                  (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
      }
      break;
    case '\t':
      pFVar4 = (this->Result).Object;
      pFVar5 = (this->Blended).Object;
      pFVar6 = (this->Mask).Object;
      EVar3 = (pFVar4->DataStorage).ImageFormat;
      if (EVar3 == RGB_UByte) {
        BufferLayerFormat<&UE::Mutable::Private::LightenChannelMasked,&UE::Mutable::Private::LightenChannel,1,3,3,3>
                  (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
      }
      else {
        if ((EVar3 == RGBA_UByte) || (EVar3 == BGRA_UByte)) {
          if (bVar18 != false) {
            BufferLayerFormat<&UE::Mutable::Private::LightenChannelMasked,&UE::Mutable::Private::LightenChannel,1,4,4,4>
                      (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
            goto switchD_14aac61b5_caseD_0;
          }
          BufferLayerFormat<&UE::Mutable::Private::LightenChannelMasked,&UE::Mutable::Private::LightenChannel,1,3,4,4>
                    (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
          goto LAB_14aac619d;
        }
        if (EVar3 != L_UByte) goto LAB_14aac5dd9;
        BufferLayerFormat<&UE::Mutable::Private::LightenChannelMasked,&UE::Mutable::Private::LightenChannel,1,1,1,1>
                  (pFVar4,pFVar4,pFVar6,pFVar5,0,0,0,bVar16);
      }
      break;
    case '\n':
      pFVar4 = (this->Result).Object;
      ImageLayerCombine<&UE::Mutable::Private::CombineNormal,&UE::Mutable::Private::CombineNormalMasked>
                (pFVar4,pFVar4,(this->Mask).Object,(this->Blended).Object,bVar16);
      break;
    default:
      iVar12 = 0x2c5;
      goto LAB_14aac5fb4;
    }
    goto switchD_14aac5811_caseD_0;
  }
  if ((bVar2 & 4) == 0) {
    switch((this->Args).blendType) {
    case '\0':
      break;
    case '\x01':
      pFVar4 = (this->Result).Object;
      BufferLayer<&UE::Mutable::Private::SoftLightChannel,1>
                (pFVar4,pFVar4,(this->Blended).Object,bVar18,bVar16,(bool)(bVar10 & 1));
      break;
    case '\x02':
      pFVar4 = (this->Result).Object;
      BufferLayer<&UE::Mutable::Private::HardLightChannel,1>
                (pFVar4,pFVar4,(this->Blended).Object,bVar18,bVar16,(bool)(bVar10 & 1));
      break;
    case '\x03':
      pFVar4 = (this->Result).Object;
      BufferLayer<&UE::Mutable::Private::BurnChannel,1>
                (pFVar4,pFVar4,(this->Blended).Object,bVar18,bVar16,(bool)(bVar10 & 1));
      break;
    case '\x04':
      pFVar4 = (this->Result).Object;
      BufferLayer<&UE::Mutable::Private::DodgeChannel,1>
                (pFVar4,pFVar4,(this->Blended).Object,bVar18,bVar16,(bool)(bVar10 & 1));
      break;
    case '\x05':
      pFVar4 = (this->Result).Object;
      BufferLayer<&UE::Mutable::Private::ScreenChannel,1>
                (pFVar4,pFVar4,(this->Blended).Object,bVar18,bVar16,(bool)(bVar10 & 1));
      break;
    case '\x06':
      pFVar4 = (this->Result).Object;
      BufferLayer<&UE::Mutable::Private::OverlayChannel,1>
                (pFVar4,pFVar4,(this->Blended).Object,bVar18,bVar16,(bool)(bVar10 & 1));
      break;
    case '\a':
      pFVar4 = (this->Result).Object;
      BufferLayer<&UE::Mutable::Private::BlendChannel,1>
                (pFVar4,pFVar4,(this->Blended).Object,bVar18,bVar16,(bool)(bVar10 & 1));
      break;
    case '\b':
      pFVar4 = (this->Result).Object;
      BufferLayer<&UE::Mutable::Private::MultiplyChannel,1>
                (pFVar4,pFVar4,(this->Blended).Object,bVar18,bVar16,(bool)(bVar10 & 1));
      break;
    case '\t':
      pFVar4 = (this->Result).Object;
      BufferLayer<&UE::Mutable::Private::LightenChannel,1>
                (pFVar4,pFVar4,(this->Blended).Object,bVar18,bVar16,(bool)(bVar10 & 1));
      break;
    case '\n':
      pFVar4 = (this->Result).Object;
      ImageLayerCombine<&UE::Mutable::Private::CombineNormal>
                (pFVar4,pFVar4,(this->Blended).Object,bVar16);
      if ((bVar11 != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bUseBlendSourceFromBlendAlpha",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                             ,0x2e4,L""), bVar8)) goto code_r0x00014aac6193;
      break;
    default:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                         ,0x2ef,L"");
      if (bVar8) goto code_r0x00014aac6193;
    }
    goto switchD_14aac5811_caseD_0;
  }
  if ((bVar11 != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bUseBlendSourceFromBlendAlpha",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                         ,0x2cc,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  switch((this->Args).blendType) {
  case '\0':
    break;
  case '\x01':
    pFVar4 = (this->Result).Object;
    BufferLayerEmbeddedMask<&UE::Mutable::Private::SoftLightChannelMasked,&UE::Mutable::Private::SoftLightChannel,0>
              (pFVar4,pFVar4,(this->Blended).Object,bVar18,bVar16);
    break;
  case '\x02':
    pFVar4 = (this->Result).Object;
    BufferLayerEmbeddedMask<&UE::Mutable::Private::HardLightChannelMasked,&UE::Mutable::Private::HardLightChannel,0>
              (pFVar4,pFVar4,(this->Blended).Object,bVar18,bVar16);
    break;
  case '\x03':
    pFVar4 = (this->Result).Object;
    BufferLayerEmbeddedMask<&UE::Mutable::Private::BurnChannelMasked,&UE::Mutable::Private::BurnChannel,0>
              (pFVar4,pFVar4,(this->Blended).Object,bVar18,bVar16);
    break;
  case '\x04':
    pFVar4 = (this->Result).Object;
    BufferLayerEmbeddedMask<&UE::Mutable::Private::DodgeChannelMasked,&UE::Mutable::Private::DodgeChannel,0>
              (pFVar4,pFVar4,(this->Blended).Object,bVar18,bVar16);
    break;
  case '\x05':
    pFVar4 = (this->Result).Object;
    BufferLayerEmbeddedMask<&UE::Mutable::Private::ScreenChannelMasked,&UE::Mutable::Private::ScreenChannel,0>
              (pFVar4,pFVar4,(this->Blended).Object,bVar18,bVar16);
    break;
  case '\x06':
    pFVar4 = (this->Result).Object;
    BufferLayerEmbeddedMask<&UE::Mutable::Private::OverlayChannelMasked,&UE::Mutable::Private::OverlayChannel,0>
              (pFVar4,pFVar4,(this->Blended).Object,bVar18,bVar16);
    break;
  case '\a':
    pFVar4 = (this->Result).Object;
    BufferLayerEmbeddedMask<&UE::Mutable::Private::BlendChannelMasked,&UE::Mutable::Private::BlendChannel,0>
              (pFVar4,pFVar4,(this->Blended).Object,bVar18,bVar16);
    break;
  case '\b':
    pFVar4 = (this->Result).Object;
    BufferLayerEmbeddedMask<&UE::Mutable::Private::MultiplyChannelMasked,&UE::Mutable::Private::MultiplyChannel,0>
              (pFVar4,pFVar4,(this->Blended).Object,bVar18,bVar16);
    break;
  case '\t':
    pFVar4 = (this->Result).Object;
    BufferLayerEmbeddedMask<&UE::Mutable::Private::LightenChannelMasked,&UE::Mutable::Private::LightenChannel,0>
              (pFVar4,pFVar4,(this->Blended).Object,bVar18,bVar16);
    break;
  case '\n':
    iVar12 = 0x2d1;
    goto LAB_14aac5fb4;
  default:
    iVar12 = 0x2dc;
LAB_14aac5fb4:
    pwVar13 = L"";
    pcVar9 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
    ;
LAB_14aac5fc2:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2("false",pcVar9,iVar12,pwVar13);
    if (bVar8) {
code_r0x00014aac6193:
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
switchD_14aac5811_caseD_0:
  if (bVar18 == false) {
LAB_14aac619d:
    switch((this->Args).blendTypeAlpha) {
    case '\0':
      break;
    case '\x01':
      BufferLayerInPlace<&UE::Mutable::Private::SoftLightChannel,0,1>
                ((this->Result).Object,(this->Blended).Object,bVar16,3,
                 (uint)(this->Args).BlendAlphaSourceChannel);
      break;
    case '\x02':
      BufferLayerInPlace<&UE::Mutable::Private::HardLightChannel,0,1>
                ((this->Result).Object,(this->Blended).Object,bVar16,3,
                 (uint)(this->Args).BlendAlphaSourceChannel);
      break;
    case '\x03':
      BufferLayerInPlace<&UE::Mutable::Private::BurnChannel,0,1>
                ((this->Result).Object,(this->Blended).Object,bVar16,3,
                 (uint)(this->Args).BlendAlphaSourceChannel);
      break;
    case '\x04':
      BufferLayerInPlace<&UE::Mutable::Private::DodgeChannel,0,1>
                ((this->Result).Object,(this->Blended).Object,bVar16,3,
                 (uint)(this->Args).BlendAlphaSourceChannel);
      break;
    case '\x05':
      BufferLayerInPlace<&UE::Mutable::Private::ScreenChannel,0,1>
                ((this->Result).Object,(this->Blended).Object,bVar16,3,
                 (uint)(this->Args).BlendAlphaSourceChannel);
      break;
    case '\x06':
      BufferLayerInPlace<&UE::Mutable::Private::OverlayChannel,0,1>
                ((this->Result).Object,(this->Blended).Object,bVar16,3,
                 (uint)(this->Args).BlendAlphaSourceChannel);
      break;
    case '\a':
      BufferLayerInPlace<&UE::Mutable::Private::BlendChannel,0,1>
                ((this->Result).Object,(this->Blended).Object,bVar16,3,
                 (uint)(this->Args).BlendAlphaSourceChannel);
      break;
    case '\b':
      BufferLayerInPlace<&UE::Mutable::Private::MultiplyChannel,0,1>
                ((this->Result).Object,(this->Blended).Object,bVar16,3,
                 (uint)(this->Args).BlendAlphaSourceChannel);
      break;
    case '\t':
      BufferLayerInPlace<&UE::Mutable::Private::LightenChannel,0,1>
                ((this->Result).Object,(this->Blended).Object,bVar16,3,
                 (uint)(this->Args).BlendAlphaSourceChannel);
      break;
    default:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                         ,0x303,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
switchD_14aac61b5_caseD_0:
  if (bVar14 < bVar15) {
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId777,"Mutable_ImageLayer_MipFix",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                 ,0x309);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId777);
    }
    local_res8.FilterType = SimpleAverage;
    local_res8.AddressMode = None;
    ImageMipmapInPlace(this->ImageCompressionQuality,(this->Result).Object,&local_res8);
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (((this->Result).Object == (FImage *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  puVar1 = &((this->Result).Object)->Flags;
  *puVar1 = *puVar1 & 0xf7;
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Prepare @ 14aae1970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Mutable::Private::FImageLayerTask::Prepare
          (FImageLayerTask *this,CodeRunner *param_1,bool *param_2)

{
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  EImageFormat EVar7;
  EImageFormat EVar8;
  byte bVar9;
  uint uVar10;
  FImage *pFVar11;
  FImage *pFVar12;
  Private *pPVar13;
  atomic<int> *paVar14;
  FCacheAddress *pFVar15;
  byte bVar16;
  FSharedReferencer<1> FVar17;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar18;
  bool bVar19;
  undefined1 auStackY_2b8 [32];
  bool local_278;
  bool local_277;
  EImageFormat local_276;
  bool local_275 [13];
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_268;
  FImage *local_258;
  uint local_250;
  FCacheAddress local_24c;
  FCacheAddress local_244;
  FCacheAddress local_23c;
  FCacheAddress local_234;
  FCacheAddress local_22c;
  FMipmapGenerationSettings local_220;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_218;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_208;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_1f8;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_1e8;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_1d8;
  FImage *local_1c8;
  FSharedReferencer<1> local_1c0;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_1b8;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_1a8;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_198;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_188;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_178;
  FImage *local_168;
  FSharedReferencer<1> FStack_160;
  undefined8 local_158;
  FSharedReferencer<1> local_150;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_148;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_138;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_128;
  FImageOperator local_118;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId535,"Mutable_FImageLayerTask_Prepare",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x217);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId535);
  }
  *param_2 = false;
  this->ImageCompressionQuality = (param_1->Settings).ImageCompressionQuality;
  local_24c.At = (this->Args).base;
  local_24c.ExecutionIndex = (ushort)this->_padding_;
  local_24c.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
  local_24c.Type = Full;
  FWorkingMemoryManager::LoadImage
            (&param_1->System->WorkingMemoryManager,&local_268,&local_24c,false);
  pFVar12 = local_268.Object;
  if (local_268.Object != (FImage *)0x0) {
    if ((local_268.Object == (FImage *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((ASTC_10x10_RG_LDR < (pFVar12->DataStorage).ImageFormat) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Base || Base->GetFormat() < EImageFormat::Count",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                           ,0x21d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_244.At = (this->Args).blended;
  local_244.ExecutionIndex = (ushort)this->_padding_;
  local_244.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
  local_244.Type = Full;
  FWorkingMemoryManager::LoadImage
            (&param_1->System->WorkingMemoryManager,&local_218,&local_244,false);
  bVar4 = false;
  pTVar18 = &this->Blended;
  if (pTVar18 != &local_218) {
    pTVar18->Object = local_218.Object;
    local_218.Object = (FImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Blended).SharedReferenceCount,&local_218.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_218.SharedReferenceCount.ReferenceController);
  uVar10 = (this->Args).mask;
  if (uVar10 != 0) {
    local_23c.ExecutionIndex = (ushort)this->_padding_;
    local_23c.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_23c.Type = Full;
    local_23c.At = uVar10;
    FWorkingMemoryManager::LoadImage
              (&param_1->System->WorkingMemoryManager,&local_208,&local_23c,false);
    pTVar1 = &this->Mask;
    if (pTVar1 != &local_208) {
      pTVar1->Object = local_208.Object;
      local_208.Object = (FImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Mask).SharedReferenceCount,&local_208.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_208.SharedReferenceCount.ReferenceController);
    if (((pTVar1->Object != (FImage *)0x0) &&
        (ASTC_10x10_RG_LDR < (pTVar1->Object->DataStorage).ImageFormat)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Mask || Mask->GetFormat() < EImageFormat::Count",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                           ,0x223,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (pFVar12 == (FImage *)0x0) {
    FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,pTVar18);
    FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,&this->Mask);
    if (local_268.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar14 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar14 = &(local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar14 = (atomic<int>)((int)*paVar14 + 1);
      UNLOCK();
    }
    local_234.At = (uint)this->_padding_;
    local_234.ExecutionIndex = (ushort)this->_padding_;
    local_234.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_234.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
    pPVar13 = param_1->System;
    local_148.Object = (FImage *)0x0;
    local_148.SharedReferenceCount.ReferenceController =
         local_268.SharedReferenceCount.ReferenceController;
    if (local_268.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar14 = (atomic<int>)((int)*paVar14 + 1);
      UNLOCK();
    }
    pTVar18 = &local_148;
    pFVar15 = &local_234;
    FVar17.ReferenceController = local_268.SharedReferenceCount.ReferenceController;
  }
  else {
    if ((pFVar12 == (FImage *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((((pFVar12->DataStorage).ImageSize.field0_0x0._s_0.X != 0) &&
        ((pFVar12->DataStorage).ImageSize.field0_0x0._s_0.Y != 0)) &&
       (pTVar18->Object != (FImage *)0x0)) {
      MakeImageOperator(&local_118,param_1);
      EVar8 = (pFVar12->DataStorage).ImageFormat;
      this->InitialFormat = EVar8;
      EVar7 = GetUncompressedFormat(EVar8);
      if (EVar8 != EVar7) {
        EVar8 = GetUncompressedFormat(this->InitialFormat);
        uVar10 = (uint)(pFVar12->DataStorage).NumLODs;
        if (uVar10 == 0) {
          uVar10 = 1;
        }
        FWorkingMemoryManager::CreateImage
                  (&param_1->System->WorkingMemoryManager,&local_1b8,
                   (uint)(pFVar12->DataStorage).ImageSize.field0_0x0._s_0.X,
                   (uint)(pFVar12->DataStorage).ImageSize.field0_0x0._s_0.Y,uVar10,EVar8,
                   NotInitialized);
        FVar17.ReferenceController = local_1b8.SharedReferenceCount.ReferenceController;
        pFVar11 = local_1b8.Object;
        local_1b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_1b8.Object = (FImage *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        local_278 = false;
        FImageOperator::ImagePixelFormat
                  (&local_118,&local_278,this->ImageCompressionQuality,pFVar11,pFVar12,-1);
        if ((local_278 == false) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("bSuccess",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                               ,0x243,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,&local_268);
        local_150.ReferenceController = FVar17.ReferenceController;
        if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar17.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_268.Object = pFVar11;
        local_158 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_268.SharedReferenceCount,&local_150);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_150.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar17.ReferenceController);
        pFVar12 = local_268.Object;
      }
      bVar16 = (this->Args).flags;
      if (((pTVar18->Object != (FImage *)0x0) &&
          (pFVar11 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar18),
          this->InitialFormat != (pFVar11->DataStorage).ImageFormat)) && ((bVar16 & 0x18) == 0)) {
        if ((pFVar12 == (FImage *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        local_276 = (pFVar12->DataStorage).ImageFormat;
        if ((pTVar18->Object == (FImage *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        bVar16 = (pTVar18->Object->DataStorage).NumLODs;
        pFVar11 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar18);
        uVar2 = (pFVar11->DataStorage).ImageSize.field0_0x0._s_0.Y;
        pFVar11 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar18);
        uVar10 = (uint)bVar16;
        if (uVar10 == 0) {
          uVar10 = 1;
        }
        FWorkingMemoryManager::CreateImage
                  (&param_1->System->WorkingMemoryManager,&local_1a8,
                   (uint)(pFVar11->DataStorage).ImageSize.field0_0x0._s_0.X,(uint)uVar2,uVar10,
                   local_276,NotInitialized);
        FVar17.ReferenceController = local_1a8.SharedReferenceCount.ReferenceController;
        pFVar11 = local_1a8.Object;
        local_1a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_1a8.Object = (FImage *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        local_277 = false;
        FImageOperator::ImagePixelFormat
                  (&local_118,&local_277,this->ImageCompressionQuality,pFVar11,pTVar18->Object,-1);
        if ((local_277 == false) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("bSuccess",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                               ,0x24e,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,pTVar18);
        local_1f8.Object = pFVar11;
        local_1f8.SharedReferenceCount.ReferenceController = FVar17.ReferenceController;
        if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar17.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar18 != &local_1f8) {
          pTVar18->Object = pFVar11;
          local_1f8.Object = (FImage *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->Blended).SharedReferenceCount,&local_1f8.SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1f8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar17.ReferenceController);
      }
      if ((pFVar12 == (FImage *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar11 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar18);
      if (((pFVar12->DataStorage).ImageSize.field0_0x0._s_0.X !=
           (pFVar11->DataStorage).ImageSize.field0_0x0._s_0.X) ||
         ((pFVar12->DataStorage).ImageSize.field0_0x0._s_0.Y !=
          (pFVar11->DataStorage).ImageSize.field0_0x0._s_0.Y)) {
        bVar4 = -1 < CpuChannel->Enabled;
        if (bVar4) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId597,"Mutable_ImageResize_EmergencyFix",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                     ,0x255);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId597);
        }
        pFVar11 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar18);
        EVar8 = (pFVar11->DataStorage).ImageFormat;
        if ((pFVar12 == (FImage *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FWorkingMemoryManager::CreateImage
                  (&param_1->System->WorkingMemoryManager,&local_198,
                   (uint)(pFVar12->DataStorage).ImageSize.field0_0x0._s_0.X,
                   (uint)(pFVar12->DataStorage).ImageSize.field0_0x0._s_0.Y,1,EVar8,NotInitialized);
        FVar17.ReferenceController = local_198.SharedReferenceCount.ReferenceController;
        local_258 = local_198.Object;
        local_198.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_198.Object = (FImage *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        FImageOperator::ImageResizeLinear
                  (&local_118,local_258,this->ImageCompressionQuality,pTVar18->Object);
        FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,pTVar18);
        local_1e8.Object = local_258;
        local_1e8.SharedReferenceCount.ReferenceController = FVar17.ReferenceController;
        if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar17.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar18 != &local_1e8) {
          pTVar18->Object = local_258;
          local_1e8.Object = (FImage *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->Blended).SharedReferenceCount,&local_1e8.SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1e8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar17.ReferenceController);
        if (bVar4) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      pTVar18 = &this->Mask;
      if ((this->Mask).Object != (FImage *)0x0) {
        if ((pFVar12 == (FImage *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if ((pTVar18->Object == (FImage *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (((pFVar12->DataStorage).ImageSize.field0_0x0._s_0.X !=
             (pTVar18->Object->DataStorage).ImageSize.field0_0x0._s_0.X) ||
           ((pFVar12->DataStorage).ImageSize.field0_0x0._s_0.Y !=
            (pTVar18->Object->DataStorage).ImageSize.field0_0x0._s_0.Y)) {
          bVar4 = -1 < CpuChannel->Enabled;
          if (bVar4) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId609,"Mutable_ImageResize_EmergencyFix",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                       ,0x261);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId609);
          }
          pFVar11 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar18);
          EVar8 = (pFVar11->DataStorage).ImageFormat;
          if ((pFVar12 == (FImage *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          FWorkingMemoryManager::CreateImage
                    (&param_1->System->WorkingMemoryManager,&local_188,
                     (uint)(pFVar12->DataStorage).ImageSize.field0_0x0._s_0.X,
                     (uint)(pFVar12->DataStorage).ImageSize.field0_0x0._s_0.Y,1,EVar8,NotInitialized
                    );
          FVar17.ReferenceController = local_188.SharedReferenceCount.ReferenceController;
          local_258 = local_188.Object;
          local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_188.Object = (FImage *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          FImageOperator::ImageResizeLinear
                    (&local_118,local_258,this->ImageCompressionQuality,pTVar18->Object);
          FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,pTVar18);
          local_1d8.Object = local_258;
          local_1d8.SharedReferenceCount.ReferenceController = FVar17.ReferenceController;
          if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar17.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (pTVar18 != &local_1d8) {
            pTVar18->Object = local_258;
            local_1d8.Object = (FImage *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->Mask).SharedReferenceCount,&local_1d8.SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1d8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar17.ReferenceController);
          if (bVar4) {
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
        pFVar11 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar18);
        bVar16 = (pFVar11->DataStorage).NumLODs;
        if (bVar16 == 0) {
          bVar16 = 1;
        }
        if ((pFVar12 == (FImage *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        bVar9 = (pFVar12->DataStorage).NumLODs;
        if (bVar9 == 0) {
          bVar9 = 1;
        }
        if (bVar16 < bVar9) {
          bVar4 = -1 < CpuChannel->Enabled;
          if (bVar4) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId619,"Mutable_ImageLayer_EmergencyFix",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                       ,0x26b);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId619);
          }
          pFVar11 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar18);
          uVar10 = (uint)(pFVar11->DataStorage).NumLODs;
          if (uVar10 == 0) {
            uVar10 = 1;
          }
          local_258 = (FImage *)CONCAT44(local_258._4_4_,uVar10 - 1);
          local_250 = (uint)(pFVar12->DataStorage).NumLODs;
          if (local_250 == 0) {
            local_250 = 1;
          }
          pFVar12 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar18);
          EVar8 = GetUncompressedFormat((pFVar12->DataStorage).ImageFormat);
          pFVar12 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar18);
          bVar16 = (pFVar12->DataStorage).NumLODs;
          pFVar12 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar18);
          uVar2 = (pFVar12->DataStorage).ImageSize.field0_0x0._s_0.Y;
          pFVar12 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(&this->Mask);
          uVar10 = (uint)bVar16;
          if (uVar10 == 0) {
            uVar10 = 1;
          }
          FWorkingMemoryManager::CreateImage
                    (&param_1->System->WorkingMemoryManager,&local_178,
                     (uint)(pFVar12->DataStorage).ImageSize.field0_0x0._s_0.X,(uint)uVar2,uVar10,
                     EVar8,NotInitialized);
          FVar17.ReferenceController = local_178.SharedReferenceCount.ReferenceController;
          pFVar12 = local_178.Object;
          local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_178.Object = (FImage *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          local_275[0] = false;
          FImageOperator::ImagePixelFormat
                    (&local_118,local_275,this->ImageCompressionQuality,pFVar12,(this->Mask).Object,
                     -1);
          if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar17.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pFVar12 == (FImage *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          FImageDataStorage::SetNumLODs(&pFVar12->DataStorage,local_250,NotInitialized);
          local_220.FilterType = SimpleAverage;
          local_220.AddressMode = None;
          FImageOperator::ImageMipmap
                    (&local_118,this->ImageCompressionQuality,pFVar12,pFVar12,(int)local_258,
                     local_250,&local_220,false);
          FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,&this->Mask);
          local_1c8 = pFVar12;
          local_1c0.ReferenceController = FVar17.ReferenceController;
          if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar17.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (&this->Mask != (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)&local_1c8) {
            (this->Mask).Object = pFVar12;
            local_1c8 = (FImage *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->Mask).SharedReferenceCount,&local_1c0);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1c0.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar17.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar17.ReferenceController);
          if (bVar4) {
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
      }
      FWorkingMemoryManager::CloneOrTakeOver
                (&param_1->System->WorkingMemoryManager,&local_138,&local_268);
      local_168 = local_138.Object;
      FStack_160.ReferenceController = local_138.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (&this->Result != (TSharedPtr<UE::Mutable::Private::FImage,1> *)&local_168) {
        (this->Result).Object = local_138.Object;
        local_168 = (FImage *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Result).SharedReferenceCount,&FStack_160);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_160.ReferenceController);
      bVar4 = true;
      FImageOperator::~FImageOperator(&local_118);
      goto LAB_14aae26c9;
    }
    FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,pTVar18);
    FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,&this->Mask);
    if (local_268.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar14 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar14 = &(local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar14 = (atomic<int>)((int)*paVar14 + 1);
      UNLOCK();
    }
    local_22c.At = (uint)this->_padding_;
    local_22c.ExecutionIndex = (ushort)this->_padding_;
    local_22c.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_22c.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
    pPVar13 = param_1->System;
    local_128.Object = local_268.Object;
    local_128.SharedReferenceCount.ReferenceController =
         local_268.SharedReferenceCount.ReferenceController;
    if (local_268.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar14 = (atomic<int>)((int)*paVar14 + 1);
      UNLOCK();
    }
    pTVar18 = &local_128;
    pFVar15 = &local_22c;
    FVar17.ReferenceController = local_268.SharedReferenceCount.ReferenceController;
  }
  FWorkingMemoryManager::StoreImage(&pPVar13->WorkingMemoryManager,pFVar15,pTVar18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  local_268.SharedReferenceCount.ReferenceController = FVar17.ReferenceController;
LAB_14aae26c9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.SharedReferenceCount.ReferenceController);
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

