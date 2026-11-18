// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 4

// ~FImageSwizzleTask @ 14aa93ac0

void __thiscall UE::Mutable::Private::FImageSwizzleTask::~FImageSwizzleTask(FImageSwizzleTask *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Result).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (this->Sources[3].SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (this->Sources[2].SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (this->Sources[1].SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (this->Sources[0].SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FIssuedTask_CodeRunner_Private_Mutable_UE__6B_;
  puVar3 = (undefined8 *)this->_padding_;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014aa93b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// Complete @ 14aabfac0

bool __thiscall
UE::Mutable::Private::FImageSwizzleTask::Complete(FImageSwizzleTask *this,CodeRunner *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  Private *pPVar2;
  atomic<int> *paVar3;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar4;
  longlong lVar5;
  FCacheAddress local_res8;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_18;
  
  pTVar4 = this->Sources;
  lVar5 = 4;
  do {
    FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,pTVar4);
    pTVar4 = pTVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
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

// DoWork @ 14aac6d20

void __thiscall UE::Mutable::Private::FImageSwizzleTask::DoWork(FImageSwizzleTask *this)

{
  if (CpuChannel->Enabled < 0) {
    ImageSwizzle((this->Result).Object,this->Sources,(this->Args).sourceChannels);
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId1406,"Mutable_FImageSwizzleTask",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
             ,0x57e);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1406);
  ImageSwizzle((this->Result).Object,this->Sources,(this->Args).sourceChannels);
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// Prepare @ 14aae3b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Mutable::Private::FImageSwizzleTask::Prepare
          (FImageSwizzleTask *this,CodeRunner *param_1,bool *param_2)

{
  EImageFormat EVar1;
  ushort uVar2;
  TIntVector2<unsigned_short>_u_0_s_0 TVar3;
  FImage *pFVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  undefined1 uVar8;
  EImageFormat EVar9;
  bool bVar10;
  uchar uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar19;
  ulonglong uVar20;
  FImageSwizzleTask *pFVar21;
  uint uVar22;
  bool bVar23;
  undefined1 auStackY_208 [32];
  bool local_1c7 [3];
  FCacheAddress local_1c4;
  TIntVector2<unsigned_short>_u_0_s_0 local_1bc;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_1b8;
  longlong local_1a8;
  CodeRunner *local_1a0;
  FCacheAddress local_198;
  FImageSwizzleTask *local_190;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_188;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_178;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_168;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_158;
  FImage *local_148;
  FSharedReferencer<1> FStack_140;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_138;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_128;
  undefined1 local_118 [48];
  longlong local_e8;
  longlong local_d8 [3];
  longlong *local_c0;
  longlong local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  longlong local_88;
  longlong local_78 [3];
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  bVar23 = -1 < CpuChannel->Enabled;
  local_1a0 = param_1;
  local_190 = this;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1314,"Mutable_FImageSwizzleTask_Prepare",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x522);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1314);
  }
  uVar15 = 0;
  *param_2 = false;
  puVar13 = (this->Args).sources;
  local_1bc.X = 0xffff;
  local_1bc.Y = 0xffff;
  uVar20 = uVar15;
  do {
    TVar3 = SUB84(uVar20,0);
    if (*puVar13 != 0) break;
    uVar20 = (ulonglong)((int)SUB84(uVar20,0) + 1);
    uVar15 = uVar15 + 1;
    puVar13 = puVar13 + 1;
    TVar3 = local_1bc;
  } while ((longlong)uVar15 < 4);
  local_1bc = TVar3;
  TVar3 = local_1bc;
  uVar22 = (this->Args).sources[0];
  if (uVar22 != 0) {
    local_1c4.ExecutionIndex = (ushort)this->_padding_;
    local_1c4.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_1c4.Type = Full;
    local_1c4.At = uVar22;
    FWorkingMemoryManager::LoadImage
              (&param_1->System->WorkingMemoryManager,&local_1b8,&local_1c4,false);
    if (this->Sources != &local_1b8) {
      this->Sources[0].Object = local_1b8.Object;
      local_1b8.Object = (FImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&this->Sources[0].SharedReferenceCount,&local_1b8.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.SharedReferenceCount.ReferenceController);
  }
  uVar22 = (this->Args).sources[1];
  if (uVar22 != 0) {
    local_1c4.ExecutionIndex = (ushort)this->_padding_;
    local_1c4.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_1c4.Type = Full;
    local_1c4.At = uVar22;
    FWorkingMemoryManager::LoadImage
              (&param_1->System->WorkingMemoryManager,&local_1b8,&local_1c4,false);
    if (this->Sources + 1 != &local_1b8) {
      this->Sources[1].Object = local_1b8.Object;
      local_1b8.Object = (FImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&this->Sources[1].SharedReferenceCount,&local_1b8.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.SharedReferenceCount.ReferenceController);
  }
  uVar22 = (this->Args).sources[2];
  if (uVar22 != 0) {
    local_1c4.ExecutionIndex = (ushort)this->_padding_;
    local_1c4.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_1c4.Type = Full;
    local_1c4.At = uVar22;
    FWorkingMemoryManager::LoadImage
              (&param_1->System->WorkingMemoryManager,&local_1b8,&local_1c4,false);
    if (this->Sources + 2 != &local_1b8) {
      this->Sources[2].Object = local_1b8.Object;
      local_1b8.Object = (FImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&this->Sources[2].SharedReferenceCount,&local_1b8.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.SharedReferenceCount.ReferenceController);
  }
  uVar22 = (this->Args).sources[3];
  if (uVar22 != 0) {
    local_1c4.ExecutionIndex = (ushort)this->_padding_;
    local_1c4.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_1c4.Type = Full;
    local_1c4.At = uVar22;
    FWorkingMemoryManager::LoadImage
              (&param_1->System->WorkingMemoryManager,&local_1b8,&local_1c4,false);
    if (this->Sources + 3 != &local_1b8) {
      this->Sources[3].Object = local_1b8.Object;
      local_1b8.Object = (FImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&this->Sources[3].SharedReferenceCount,&local_1b8.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.SharedReferenceCount.ReferenceController);
  }
  if (((int)TVar3 < 0) ||
     (lVar18 = (longlong)(int)TVar3, this->Sources[lVar18].Object == (FImage *)0x0)) {
    pTVar19 = this->Sources;
    lVar18 = 4;
    do {
      FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,pTVar19);
      pTVar19 = pTVar19 + 1;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    local_198.At = (uint)this->_padding_;
    local_198.ExecutionIndex = (ushort)this->_padding_;
    local_198.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_198.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
    local_128.Object = (FImage *)0x0;
    local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FWorkingMemoryManager::StoreImage(&param_1->System->WorkingMemoryManager,&local_198,&local_128);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar7 = false;
  }
  else {
    MakeImageOperator((FImageOperator *)local_118,param_1);
    if ((this->Sources[lVar18].Object == (FImage *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    pTVar19 = this->Sources;
    local_1a8 = 4;
    uVar22 = (uint)((this->Sources[lVar18].Object)->DataStorage).NumLODs;
    if (uVar22 == 0) {
      uVar22 = 1;
    }
    do {
      pFVar4 = pTVar19->Object;
      if (pFVar4 != (FImage *)0x0) {
        EVar9 = (pFVar4->DataStorage).ImageFormat;
        EVar1 = (pFVar4->DataStorage).ImageFormat;
        if ((ASTC_10x10_RG_LDR < EVar9) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Format < EImageFormat::Count",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\Image.h"
                               ,0x162,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        switch(EVar9) {
        case L_UByteRLE:
        case L_UBitRLE:
        case BC4:
          EVar9 = L_UByte;
          break;
        case RGB_UByteRLE:
        case BC5:
        case ASTC_4x4_RGB_LDR:
        case ASTC_4x4_RG_LDR:
        case ASTC_8x8_RGB_LDR:
        case ASTC_8x8_RG_LDR:
        case ASTC_12x12_RGB_LDR:
        case ASTC_12x12_RG_LDR:
        case ASTC_6x6_RGB_LDR:
        case ASTC_6x6_RG_LDR:
        case ASTC_10x10_RGB_LDR:
        case ASTC_10x10_RG_LDR:
          EVar9 = RGB_UByte;
          break;
        case RGBA_UByteRLE:
        case BC1:
        case BC2:
        case BC3:
        case ASTC_4x4_RGBA_LDR:
        case ASTC_8x8_RGBA_LDR:
        case ASTC_12x12_RGBA_LDR:
        case ASTC_6x6_RGBA_LDR:
        case ASTC_10x10_RGBA_LDR:
          EVar9 = RGBA_UByte;
          break;
        case BC6:
        case BC7:
        case BGRA_UByte:
          goto switchD_14aae3f2f_caseD_11;
        default:
          goto switchD_14aae3f2f_default;
        }
        if (EVar1 != EVar9) {
          bVar7 = -1 < CpuChannel->Enabled;
          if (bVar7) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId1359,"Mutable_ImageFormat_ForSwizzle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                       ,0x54f);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1359);
          }
          if ((pTVar19->Object == (FImage *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          EVar9 = (pTVar19->Object->DataStorage).ImageFormat;
          if ((ASTC_10x10_RG_LDR < EVar9) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Format < EImageFormat::Count",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\Image.h"
                                  ,0x162,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          switch(EVar9) {
          case L_UByteRLE:
          case L_UBitRLE:
          case BC4:
            EVar9 = L_UByte;
            break;
          case RGB_UByteRLE:
          case BC5:
          case ASTC_4x4_RGB_LDR:
          case ASTC_4x4_RG_LDR:
          case ASTC_8x8_RGB_LDR:
          case ASTC_8x8_RG_LDR:
          case ASTC_12x12_RGB_LDR:
          case ASTC_12x12_RG_LDR:
          case ASTC_6x6_RGB_LDR:
          case ASTC_6x6_RG_LDR:
          case ASTC_10x10_RGB_LDR:
          case ASTC_10x10_RG_LDR:
            EVar9 = RGB_UByte;
            break;
          case RGBA_UByteRLE:
          case BC1:
          case BC2:
          case BC3:
          case ASTC_4x4_RGBA_LDR:
          case ASTC_8x8_RGBA_LDR:
          case ASTC_12x12_RGBA_LDR:
          case ASTC_6x6_RGBA_LDR:
          case ASTC_10x10_RGBA_LDR:
            EVar9 = RGBA_UByte;
          }
          if ((pTVar19->Object == (FImage *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          uVar2 = (pTVar19->Object->DataStorage).ImageSize.field0_0x0._s_0.Y;
          if ((pTVar19->Object == (FImage *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          FWorkingMemoryManager::CreateImage
                    (&param_1->System->WorkingMemoryManager,&local_168,
                     (uint)(pTVar19->Object->DataStorage).ImageSize.field0_0x0._s_0.X,(uint)uVar2,1,
                     EVar9,NotInitialized);
          FVar6.ReferenceController = local_168.SharedReferenceCount.ReferenceController;
          pFVar4 = local_168.Object;
          local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_168.Object = (FImage *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          local_1c7[0] = false;
          FImageOperator::ImagePixelFormat
                    ((FImageOperator *)local_118,local_1c7,4,pFVar4,pTVar19->Object,-1);
          if ((local_1c7[0] == false) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("bSuccess",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                                  ,0x556,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,pTVar19);
          local_188.Object = pFVar4;
          local_188.SharedReferenceCount.ReferenceController = FVar6.ReferenceController;
          if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar6.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (pTVar19 != &local_188) {
            pTVar19->Object = pFVar4;
            local_188.Object = (FImage *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&pTVar19->SharedReferenceCount,&local_188.SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_188.SharedReferenceCount.ReferenceController);
          uVar22 = 1;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar6.ReferenceController);
          if (bVar7) {
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
switchD_14aae3f2f_caseD_11:
      }
switchD_14aae3f2f_default:
      pFVar21 = local_190;
      TVar3 = local_1bc;
      pTVar19 = pTVar19 + 1;
      local_1a8 = local_1a8 + -1;
    } while (local_1a8 != 0);
    lVar18 = (longlong)(int)local_1bc;
    if ((local_190->Sources[lVar18].Object == (FImage *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    iVar14 = (int)TVar3 + 1;
    TVar3 = ((pFVar21->Sources[lVar18].Object)->DataStorage).ImageSize.field0_0x0._s_0;
    local_1bc = TVar3;
    if (iVar14 < 4) {
      local_1bc.Y = TVar3.Y;
      uVar2 = local_1bc.Y;
      pTVar19 = pFVar21->Sources + iVar14;
      uVar20 = (ulonglong)(4 - iVar14);
      do {
        pFVar4 = pTVar19->Object;
        if ((pFVar4 != (FImage *)0x0) &&
           ((TVar3.X != (pFVar4->DataStorage).ImageSize.field0_0x0._s_0.X ||
            (uVar2 != (pFVar4->DataStorage).ImageSize.field0_0x0._s_0.Y)))) {
          bVar7 = -1 < CpuChannel->Enabled;
          if (bVar7) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId1380,"Mutable_ImageResize_ForSwizzle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                       ,0x564);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1380);
          }
          if ((pTVar19->Object == (FImage *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          FWorkingMemoryManager::CreateImage
                    (&local_1a0->System->WorkingMemoryManager,&local_158,(uint)TVar3 & 0xffff,
                     (uint)uVar2,1,(pTVar19->Object->DataStorage).ImageFormat,NotInitialized);
          FVar6.ReferenceController = local_158.SharedReferenceCount.ReferenceController;
          pFVar4 = local_158.Object;
          local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_158.Object = (FImage *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          FImageOperator::ImageResizeLinear((FImageOperator *)local_118,pFVar4,0,pTVar19->Object);
          FWorkingMemoryManager::Release(&local_1a0->System->WorkingMemoryManager,pTVar19);
          local_178.Object = pFVar4;
          local_178.SharedReferenceCount.ReferenceController = FVar6.ReferenceController;
          if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar6.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (pTVar19 != &local_178) {
            pTVar19->Object = pFVar4;
            local_178.Object = (FImage *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&pTVar19->SharedReferenceCount,&local_178.SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_178.SharedReferenceCount.ReferenceController);
          uVar22 = 1;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar6.ReferenceController);
          if (bVar7) {
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
        pTVar19 = pTVar19 + 1;
        uVar20 = uVar20 - 1;
        pFVar21 = local_190;
      } while (uVar20 != 0);
    }
    pFVar4 = pFVar21->Sources[0].Object;
    uVar17 = 1;
    if (pFVar4 != (FImage *)0x0) {
      uVar11 = (pFVar4->DataStorage).NumLODs;
      if (uVar11 == '\0') {
        uVar11 = '\x01';
      }
      if (uVar11 == '\x01') {
        uVar22 = uVar17;
      }
    }
    pFVar4 = pFVar21->Sources[1].Object;
    if (pFVar4 != (FImage *)0x0) {
      uVar12 = (uint)(pFVar4->DataStorage).NumLODs;
      if (uVar12 == 0) {
        uVar12 = uVar17;
      }
      if (uVar12 == 1) {
        uVar22 = uVar17;
      }
    }
    pFVar4 = pFVar21->Sources[2].Object;
    if (pFVar4 != (FImage *)0x0) {
      uVar12 = (uint)(pFVar4->DataStorage).NumLODs;
      if (uVar12 == 0) {
        uVar12 = uVar17;
      }
      if (uVar12 == 1) {
        uVar22 = uVar17;
      }
    }
    pFVar4 = pFVar21->Sources[3].Object;
    if (pFVar4 != (FImage *)0x0) {
      uVar12 = (uint)(pFVar4->DataStorage).NumLODs;
      if (uVar12 == 0) {
        uVar12 = uVar17;
      }
      if (uVar12 == 1) {
        uVar22 = uVar17;
      }
    }
    FWorkingMemoryManager::CreateImage
              (&local_1a0->System->WorkingMemoryManager,&local_138,(uint)TVar3 & 0xffff,
               (uint)local_1bc >> 0x10,uVar22,(pFVar21->Args).format,Black);
    local_148 = local_138.Object;
    FStack_140.ReferenceController = local_138.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (&pFVar21->Result != (TSharedPtr<UE::Mutable::Private::FImage,1> *)&local_148) {
      (pFVar21->Result).Object = local_138.Object;
      local_148 = (FImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar21->Result).SharedReferenceCount,&FStack_140);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_140.ReferenceController);
    bVar7 = true;
    if (local_88 != 0) {
      plVar16 = local_78;
      if (local_60 != (longlong *)0x0) {
        plVar16 = local_60;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if (local_b8 != 0) {
      plVar16 = local_a8;
      if (local_90 != (longlong *)0x0) {
        plVar16 = local_90;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if (local_e8 != 0) {
      plVar16 = local_d8;
      if (local_c0 != (longlong *)0x0) {
        plVar16 = local_c0;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if (local_118._0_8_ != 0) {
      plVar16 = (longlong *)(local_118 + 0x10);
      if ((longlong *)local_118._40_8_ != (longlong *)0x0) {
        plVar16 = (longlong *)local_118._40_8_;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar7;
}

