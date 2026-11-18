// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 4

// ~FImageMipmapTask @ 14aa93810

void __thiscall UE::Mutable::Private::FImageMipmapTask::~FImageMipmapTask(FImageMipmapTask *this)

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
            ((this->Scratch).CompressedMips.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Scratch).UncompressedMips.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Scratch).Uncompressed.SharedReferenceCount.ReferenceController);
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
                    /* WARNING: Could not recover jumptable at 0x00014aa9389a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(puVar4,1);
      return;
    }
  }
  return;
}

// Complete @ 14aabf640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Mutable::Private::FImageMipmapTask::Complete(FImageMipmapTask *this,CodeRunner *param_1)

{
  FImage *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  Private *pPVar3;
  atomic<int> *paVar4;
  longlong *plVar5;
  undefined1 auStack_118 [32];
  FCacheAddress local_f8;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_f0;
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
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  MakeImageOperator((FImageOperator *)local_d8,param_1);
  FImageOperator::ImageMipmap_ReleaseScratch((FImageOperator *)local_d8,&this->Scratch);
  if ((this->Base).Object != (FImage *)0x0) {
    FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,&this->Base);
  }
  pFVar1 = (this->Result).Object;
  if (pFVar1 != (FImage *)0x0) {
    pTVar2 = (this->Result).SharedReferenceCount.ReferenceController;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar4 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar4 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar4 = (atomic<int>)((int)*paVar4 + 1);
      UNLOCK();
    }
    local_f8.At = (uint)this->_padding_;
    local_f8.ExecutionIndex = (ushort)this->_padding_;
    local_f8.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_f8.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
    pPVar3 = param_1->System;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar4 = (atomic<int>)((int)*paVar4 + 1);
      UNLOCK();
    }
    local_f0.Object = pFVar1;
    local_f0.SharedReferenceCount.ReferenceController = pTVar2;
    FWorkingMemoryManager::StoreImage(&pPVar3->WorkingMemoryManager,&local_f8,&local_f0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
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
  return true;
}

// DoWork @ 14aac64a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Mutable::Private::FImageMipmapTask::DoWork(FImageMipmapTask *this)

{
  FImage *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStackY_138 [32];
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
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_138;
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1257,"Mutable_FImageMipmapTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x4e9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1257);
  }
  if ((this->StartLevel < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartLevel >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                         ,0x4eb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_e8[0].FilterType = (this->Args).FilterType;
  local_e8[0].AddressMode = (this->Args).AddressMode;
  FImageOperator::GetDefault((FImageOperator *)local_d8,&this->ImagePixelFormatFunc);
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
  uVar4 = (uint)(pFVar1->DataStorage).NumLODs;
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  FImageOperator::ImageMipmap
            ((FImageOperator *)local_d8,&this->Scratch,this->ImageCompressionQuality,pFVar1,pFVar1,
             this->StartLevel,uVar4,local_e8,false);
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

// Prepare @ 14aae2730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Mutable::Private::FImageMipmapTask::Prepare
          (FImageMipmapTask *this,CodeRunner *param_1,bool *param_2)

{
  TSharedPtr<UE::Mutable::Private::FImage,1> *this_00;
  ulonglong uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  FImage *pFVar10;
  Private *pPVar11;
  atomic<int> *paVar12;
  FCacheAddress *pFVar13;
  uint uVar14;
  TReferenceControllerBase<1> *pTVar15;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar16;
  bool bVar17;
  undefined1 auStackY_1e8 [32];
  FCacheAddress local_1b8;
  FCacheAddress local_1b0;
  FCacheAddress local_1a8;
  FCacheAddress local_1a0;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_198;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_188;
  int local_178;
  undefined8 local_170;
  FSharedReferencer<1> FStack_168;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_160;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_150;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_140;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_128;
  FImageOperator local_118;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1194,"Mutable_FImageMipmapTask_Prepare",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x4aa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1194);
  }
  *param_2 = false;
  this->ImageCompressionQuality = (param_1->Settings).ImageCompressionQuality;
  local_1b8.At = (this->Args).source;
  local_1b8.ExecutionIndex = (ushort)this->_padding_;
  local_1b8.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
  local_1b8.Type = Full;
  FWorkingMemoryManager::LoadImage
            (&param_1->System->WorkingMemoryManager,&local_198,&local_1b8,false);
  pTVar16 = &this->Base;
  if (pTVar16 != &local_198) {
    pTVar16->Object = local_198.Object;
    local_198.Object = (FImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Base).SharedReferenceCount,&local_198.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  if (((pTVar16->Object != (FImage *)0x0) &&
      (ASTC_10x10_RG_LDR < (pTVar16->Object->DataStorage).ImageFormat)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Base || Base->GetFormat() < EImageFormat::Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                         ,0x4b0,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  pFVar10 = pTVar16->Object;
  if (pFVar10 == (FImage *)0x0) {
    pTVar15 = (this->Base).SharedReferenceCount.ReferenceController;
    if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
      paVar12 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar12 = &pTVar15->SharedReferenceCount;
      LOCK();
      *paVar12 = (atomic<int>)((int)*paVar12 + 1);
      UNLOCK();
    }
    local_1b0.At = (uint)this->_padding_;
    local_1b0.ExecutionIndex = (ushort)this->_padding_;
    local_1b0.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_1b0.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
    pPVar11 = param_1->System;
    local_160.Object = (FImage *)0x0;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar12 = (atomic<int>)((int)*paVar12 + 1);
      UNLOCK();
    }
    pTVar16 = &local_160;
    pFVar13 = &local_1b0;
    local_160.SharedReferenceCount.ReferenceController = pTVar15;
  }
  else if (((pFVar10->DataStorage).ImageSize.field0_0x0._s_0.X == 0) ||
          (pFVar10 = (this->Base).Object, (pFVar10->DataStorage).ImageSize.field0_0x0._s_0.Y == 0))
  {
    pTVar15 = (this->Base).SharedReferenceCount.ReferenceController;
    if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
      paVar12 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar12 = &pTVar15->SharedReferenceCount;
      LOCK();
      *paVar12 = (atomic<int>)((int)*paVar12 + 1);
      UNLOCK();
    }
    local_1a0.At = (uint)this->_padding_;
    local_1a0.ExecutionIndex = (ushort)this->_padding_;
    local_1a0.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_1a0.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
    pPVar11 = param_1->System;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar12 = (atomic<int>)((int)*paVar12 + 1);
      UNLOCK();
    }
    pTVar16 = &local_140;
    pFVar13 = &local_1a0;
    local_140.Object = pFVar10;
    local_140.SharedReferenceCount.ReferenceController = pTVar15;
  }
  else {
    bVar2 = (this->Args).levels;
    if ((pFVar10 == (FImage *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pFVar10 = (this->Base).Object;
    uVar3 = (pFVar10->DataStorage).ImageSize.field0_0x0._s_0.Y;
    if ((pFVar10 == (FImage *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pFVar10 = (this->Base).Object;
    uVar4 = (pFVar10->DataStorage).ImageSize.field0_0x0._s_0.X;
    if ((uVar4 == 0) || (uVar3 == 0)) {
      uVar14 = 0;
    }
    else {
      uVar14 = (uint)uVar3;
      if ((uint)uVar3 < (uint)uVar4) {
        uVar14 = (uint)uVar4;
      }
      uVar9 = 1;
      if (uVar14 != 0) {
        uVar9 = uVar14;
      }
      uVar1 = (ulonglong)(uVar9 - 1) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_178 = (int)lVar5;
      uVar14 = local_178 + 1;
    }
    uVar9 = uVar14;
    if ((bVar2 != 0) && (uVar9 = (uint)bVar2, (int)uVar14 < (int)(uint)bVar2)) {
      uVar9 = uVar14;
    }
    if ((pFVar10 == (FImage *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pFVar10 = (this->Base).Object;
    uVar14 = (uint)(pFVar10->DataStorage).NumLODs;
    if (uVar14 == 0) {
      uVar14 = 1;
    }
    if ((int)uVar9 < (int)uVar14) {
      uVar9 = uVar14;
    }
    if ((pFVar10 == (FImage *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pFVar10 = (this->Base).Object;
    uVar14 = (uint)(pFVar10->DataStorage).NumLODs;
    if (uVar14 == 0) {
      uVar14 = 1;
    }
    if (uVar9 != uVar14) {
      pFVar10 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(&this->Base);
      uVar14 = (uint)(pFVar10->DataStorage).NumLODs;
      if (uVar14 == 0) {
        uVar14 = 1;
      }
      this->StartLevel = uVar14 - 1;
      FWorkingMemoryManager::CloneOrTakeOver
                (&param_1->System->WorkingMemoryManager,&local_128,pTVar16);
      local_188.Object = local_128.Object;
      local_188.SharedReferenceCount.ReferenceController =
           local_128.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      this_00 = &this->Result;
      if (this_00 != &local_188) {
        this_00->Object = local_128.Object;
        local_188.Object = (FImage *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Result).SharedReferenceCount,&local_188.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.SharedReferenceCount.ReferenceController);
      local_170 = 0;
      FStack_168.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->Base != (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)&local_170) {
        (this->Base).Object = (FImage *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Base).SharedReferenceCount,&FStack_168);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_168.ReferenceController);
      pFVar10 = TSharedPtr<UE::Mutable::Private::FImage,1>::operator->(this_00);
      FImageDataStorage::SetNumLODs(&pFVar10->DataStorage,uVar9,NotInitialized);
      MakeImageOperator(&local_118,param_1);
      FImageOperator::ImageMipmap_PrepareScratch
                (&local_118,this_00->Object,this->StartLevel,uVar9,&this->Scratch);
      TFunction<void___cdecl(bool_&,int,UE::Mutable::Private::FImage_*,UE::Mutable::Private::FImage_const_*,int)>
      ::operator=(&this->ImagePixelFormatFunc,&param_1->System->ImagePixelFormatOverride);
      bVar7 = true;
      FImageOperator::~FImageOperator(&local_118);
      goto LAB_14aae2c00;
    }
    pTVar15 = (this->Base).SharedReferenceCount.ReferenceController;
    if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
      paVar12 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar12 = &pTVar15->SharedReferenceCount;
      LOCK();
      *paVar12 = (atomic<int>)((int)*paVar12 + 1);
      UNLOCK();
    }
    local_1a8.At = (uint)this->_padding_;
    local_1a8.ExecutionIndex = (ushort)this->_padding_;
    local_1a8.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
    local_1a8.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
    pPVar11 = param_1->System;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar12 = (atomic<int>)((int)*paVar12 + 1);
      UNLOCK();
    }
    pTVar16 = &local_150;
    pFVar13 = &local_1a8;
    local_150.Object = pFVar10;
    local_150.SharedReferenceCount.ReferenceController = pTVar15;
  }
  FWorkingMemoryManager::StoreImage(&pPVar11->WorkingMemoryManager,pFVar13,pTVar16);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  bVar7 = false;
LAB_14aae2c00:
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar7;
}

