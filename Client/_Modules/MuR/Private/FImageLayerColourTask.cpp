// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 3

// Complete @ 14aabf270

bool __thiscall
UE::Mutable::Private::FImageLayerColourTask::Complete
          (FImageLayerColourTask *this,CodeRunner *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  Private *pPVar2;
  atomic<int> *paVar3;
  FCacheAddress local_res8;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_18;
  
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
    local_res8.At = *(uint *)&this->field_0x8;
    local_res8.ExecutionIndex = *(ushort *)&this->field_0x10;
    local_res8.ExecutionOptions = this->field_0x12;
    local_res8.Type = (byte)this->field_0x13 >> 7;
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

// DoWork @ 14aac3c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Mutable::Private::FImageLayerColourTask::DoWork(FImageLayerColourTask *this)

{
  uchar *puVar1;
  byte bVar2;
  uchar uVar3;
  FImage *pFVar4;
  FImage *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  int iVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStackY_6e8 [32];
  TVector4<float>_u_0 local_6b8;
  TVector4<float>_u_0 local_6a8;
  TVector4<float>_u_0 local_698;
  TVector4<float>_u_0 local_688;
  TVector4<float>_u_0 local_678;
  TVector4<float>_u_0 local_668;
  TVector4<float>_u_0 local_658;
  TVector4<float>_u_0 local_648;
  TVector4<float>_u_0 local_638;
  TVector4<float>_u_0 local_628;
  TVector4<float>_u_0 local_618;
  TVector4<float>_u_0 local_608;
  TVector4<float>_u_0 local_5f8;
  TVector4<float>_u_0 local_5e8;
  TVector4<float>_u_0 local_5d8;
  TVector4<float>_u_0 local_5c8;
  TVector4<float>_u_0 local_5b8;
  TVector4<float>_u_0 local_5a8;
  TVector4<float>_u_0 local_598;
  TVector4<float>_u_0 local_588;
  TVector4<float>_u_0 local_578;
  TVector4<float>_u_0 local_568;
  TVector4<float>_u_0 local_558;
  TVector4<float>_u_0 local_548;
  TVector4<float>_u_0 local_538;
  TVector4<float>_u_0 local_528;
  TVector4<float>_u_0 local_518;
  TVector4<float>_u_0 local_508;
  TVector4<float>_u_0 local_4f8;
  TVector4<float>_u_0 local_4e8;
  TVector4<float>_u_0 local_4d8;
  TVector4<float>_u_0 local_4c8;
  TVector4<float>_u_0 local_4b8;
  TVector4<float>_u_0 local_4a8;
  TVector4<float>_u_0 local_498;
  TVector4<float>_u_0 local_488;
  TVector4<float>_u_0 local_478;
  TVector4<float>_u_0 local_468;
  TVector4<float>_u_0 local_458;
  TVector4<float>_u_0 local_448;
  TVector4<float>_u_0 local_438;
  TVector4<float>_u_0 local_428;
  TVector4<float>_u_0 local_418;
  TVector4<float>_u_0 local_408;
  TVector4<float>_u_0 local_3f8;
  TVector4<float>_u_0 local_3e8;
  TVector4<float>_u_0 local_3d8;
  TVector4<float>_u_0 local_3c8;
  TVector4<float>_u_0 local_3b8;
  TVector4<float>_u_0 local_3a8;
  TVector4<float>_u_0 local_398;
  TVector4<float>_u_0 local_388;
  TVector4<float>_u_0 local_378;
  TVector4<float>_u_0 local_368;
  TVector4<float>_u_0 local_358;
  TVector4<float>_u_0 local_348;
  TVector4<float>_u_0 local_338;
  TVector4<float>_u_0 local_328;
  TVector4<float>_u_0 local_318;
  TVector4<float>_u_0 local_308;
  TVector4<float>_u_0 local_2f8;
  TVector4<float>_u_0 local_2e8;
  TVector4<float>_u_0 local_2d8;
  TVector4<float>_u_0 local_2c8;
  TVector4<float>_u_0 local_2b8;
  TVector4<float>_u_0 local_2a8;
  TVector4<float>_u_0 local_298;
  TVector4<float>_u_0 local_288;
  TVector4<float>_u_0 local_278;
  TVector4<float>_u_0 local_268;
  TVector4<float>_u_0 local_258;
  TVector4<float>_u_0 local_248;
  TVector4<float>_u_0 local_238;
  TVector4<float>_u_0 local_228;
  TVector4<float>_u_0 local_218;
  TVector4<float>_u_0 local_208;
  TVector4<float>_u_0 local_1f8;
  TVector4<float>_u_0 local_1e8;
  TVector4<float>_u_0 local_1d8;
  TVector4<float>_u_0 local_1c8;
  TVector4<float>_u_0 local_1b8;
  TVector4<float>_u_0 local_1a8;
  TVector4<float>_u_0 local_198;
  TVector4<float>_u_0 local_188;
  TVector4<float>_u_0 local_178;
  TVector4<float>_u_0 local_168;
  TVector4<float>_u_0 local_158;
  TVector4<float>_u_0 local_148;
  TVector4<float>_u_0 local_138;
  undefined1 local_128 [40];
  longlong *local_100;
  FImageOperator local_f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_6e8;
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId932,"Mutable_FImageLayerColourTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x3a4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId932);
  }
  fVar11 = __real_3f800000;
  bVar2 = (this->Args).blendType;
  if (bVar2 == 0) goto LAB_14aac4a34;
  if (((this->Args).mask != 0) && ((this->Mask).Object != (FImage *)0x0)) {
    if (((this->Args).flags != '\0') &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Args.flags==0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                            ,0x3af,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    switch((this->Args).blendType) {
    case '\x01':
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      pFVar5 = (this->Result).Object;
      pFVar4 = (this->Mask).Object;
      if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
        local_698._s_0.X = fVar7;
        local_698._s_0.Y = fVar8;
        local_698._s_0.Z = fVar9;
        local_698._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::SoftLightChannelMasked,&UE::Mutable::Private::SoftLightChannel,0>
                  (pFVar5,pFVar5,pFVar4,(TVector4<float> *)&local_698._s_0);
      }
      else {
        local_6a8._s_0.X = fVar7;
        local_6a8._s_0.Y = fVar8;
        local_6a8._s_0.Z = fVar9;
        local_6a8._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::SoftLightChannelMasked,&UE::Mutable::Private::SoftLightChannel,1>
                  (pFVar5,pFVar5,pFVar4,(TVector4<float> *)&local_6a8._s_0);
      }
      break;
    case '\x02':
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      pFVar5 = (this->Result).Object;
      pFVar4 = (this->Mask).Object;
      if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
        local_678._s_0.X = fVar7;
        local_678._s_0.Y = fVar8;
        local_678._s_0.Z = fVar9;
        local_678._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::HardLightChannelMasked,&UE::Mutable::Private::HardLightChannel,0>
                  (pFVar5,pFVar5,pFVar4,(TVector4<float> *)&local_678._s_0);
      }
      else {
        local_688._s_0.X = fVar7;
        local_688._s_0.Y = fVar8;
        local_688._s_0.Z = fVar9;
        local_688._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::HardLightChannelMasked,&UE::Mutable::Private::HardLightChannel,1>
                  (pFVar5,pFVar5,pFVar4,(TVector4<float> *)&local_688._s_0);
      }
      break;
    case '\x03':
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      pFVar5 = (this->Result).Object;
      pFVar4 = (this->Mask).Object;
      if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
        local_658._s_0.X = fVar7;
        local_658._s_0.Y = fVar8;
        local_658._s_0.Z = fVar9;
        local_658._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::BurnChannelMasked,&UE::Mutable::Private::BurnChannel,0>
                  (pFVar5,pFVar5,pFVar4,(TVector4<float> *)&local_658._s_0);
      }
      else {
        local_668._s_0.X = fVar7;
        local_668._s_0.Y = fVar8;
        local_668._s_0.Z = fVar9;
        local_668._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::BurnChannelMasked,&UE::Mutable::Private::BurnChannel,1>
                  (pFVar5,pFVar5,pFVar4,(TVector4<float> *)&local_668._s_0);
      }
      break;
    case '\x04':
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      pFVar5 = (this->Result).Object;
      pFVar4 = (this->Mask).Object;
      if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
        local_638._s_0.X = fVar7;
        local_638._s_0.Y = fVar8;
        local_638._s_0.Z = fVar9;
        local_638._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::DodgeChannelMasked,&UE::Mutable::Private::DodgeChannel,0>
                  (pFVar5,pFVar5,pFVar4,(TVector4<float> *)&local_638._s_0);
      }
      else {
        local_648._s_0.X = fVar7;
        local_648._s_0.Y = fVar8;
        local_648._s_0.Z = fVar9;
        local_648._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::DodgeChannelMasked,&UE::Mutable::Private::DodgeChannel,1>
                  (pFVar5,pFVar5,pFVar4,(TVector4<float> *)&local_648._s_0);
      }
      break;
    case '\x05':
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      pFVar5 = (this->Result).Object;
      pFVar4 = (this->Mask).Object;
      if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
        local_618._s_0.X = fVar7;
        local_618._s_0.Y = fVar8;
        local_618._s_0.Z = fVar9;
        local_618._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::ScreenChannelMasked,&UE::Mutable::Private::ScreenChannel,0>
                  (pFVar5,pFVar5,pFVar4,(TVector4<float> *)&local_618._s_0);
      }
      else {
        local_628._s_0.X = fVar7;
        local_628._s_0.Y = fVar8;
        local_628._s_0.Z = fVar9;
        local_628._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::ScreenChannelMasked,&UE::Mutable::Private::ScreenChannel,1>
                  (pFVar5,pFVar5,pFVar4,(TVector4<float> *)&local_628._s_0);
      }
      break;
    case '\x06':
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      pFVar5 = (this->Result).Object;
      pFVar4 = (this->Mask).Object;
      if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
        local_5f8._s_0.X = fVar7;
        local_5f8._s_0.Y = fVar8;
        local_5f8._s_0.Z = fVar9;
        local_5f8._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::OverlayChannelMasked,&UE::Mutable::Private::OverlayChannel,0>
                  (pFVar5,pFVar5,pFVar4,(TVector4<float> *)&local_5f8._s_0);
      }
      else {
        local_608._s_0.X = fVar7;
        local_608._s_0.Y = fVar8;
        local_608._s_0.Z = fVar9;
        local_608._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::OverlayChannelMasked,&UE::Mutable::Private::OverlayChannel,1>
                  (pFVar5,pFVar5,pFVar4,(TVector4<float> *)&local_608._s_0);
      }
      break;
    case '\a':
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      pFVar5 = (this->Result).Object;
      pFVar4 = (this->Mask).Object;
      if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
        local_598._s_0.X = fVar7;
        local_598._s_0.Y = fVar8;
        local_598._s_0.Z = fVar9;
        local_598._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::BlendChannelMasked,&UE::Mutable::Private::BlendChannel,0>
                  (pFVar5,pFVar5,pFVar4,(TVector4<float> *)&local_598._s_0);
      }
      else {
        local_5a8._s_0.X = fVar7;
        local_5a8._s_0.Y = fVar8;
        local_5a8._s_0.Z = fVar9;
        local_5a8._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::BlendChannelMasked,&UE::Mutable::Private::BlendChannel,1>
                  (pFVar5,pFVar5,pFVar4,(TVector4<float> *)&local_5a8._s_0);
      }
      break;
    case '\b':
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      pFVar5 = (this->Result).Object;
      pFVar4 = (this->Mask).Object;
      if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
        local_5b8._s_0.X = fVar7;
        local_5b8._s_0.Y = fVar8;
        local_5b8._s_0.Z = fVar9;
        local_5b8._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::MultiplyChannelMasked,&UE::Mutable::Private::MultiplyChannel,0>
                  (pFVar5,pFVar5,pFVar4,(TVector4<float> *)&local_5b8._s_0);
      }
      else {
        local_5c8._s_0.X = fVar7;
        local_5c8._s_0.Y = fVar8;
        local_5c8._s_0.Z = fVar9;
        local_5c8._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::MultiplyChannelMasked,&UE::Mutable::Private::MultiplyChannel,1>
                  (pFVar5,pFVar5,pFVar4,(TVector4<float> *)&local_5c8._s_0);
      }
      break;
    case '\t':
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      pFVar5 = (this->Result).Object;
      pFVar4 = (this->Mask).Object;
      if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
        local_5d8._s_0.X = fVar7;
        local_5d8._s_0.Y = fVar8;
        local_5d8._s_0.Z = fVar9;
        local_5d8._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::LightenChannelMasked,&UE::Mutable::Private::LightenChannel,0>
                  (pFVar5,pFVar5,pFVar4,(TVector4<float> *)&local_5d8._s_0);
      }
      else {
        local_5e8._s_0.X = fVar7;
        local_5e8._s_0.Y = fVar8;
        local_5e8._s_0.Z = fVar9;
        local_5e8._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::LightenChannelMasked,&UE::Mutable::Private::LightenChannel,1>
                  (pFVar5,pFVar5,pFVar4,(TVector4<float> *)&local_5e8._s_0);
      }
      break;
    case '\n':
      pFVar5 = (this->Result).Object;
      local_6b8._0_8_ = *(undefined8 *)&(this->Color).field0_0x0;
      local_6b8._8_8_ = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
      ImageLayerCombineColour<&UE::Mutable::Private::CombineNormal,&UE::Mutable::Private::CombineNormalMasked>
                (pFVar5,pFVar5,(this->Mask).Object,(TVector4<float> *)&local_6b8._s_0);
      break;
    default:
      iVar13 = 0x3be;
      goto LAB_14aac4552;
    }
    goto LAB_14aac4a34;
  }
  iVar13 = bVar2 - 1;
  if (((this->Args).flags & 8) == 0) {
    switch(iVar13) {
    case 0:
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      pFVar5 = (this->Result).Object;
      if (fVar10 <= __real_3f800000 &&
          (fVar9 <= __real_3f800000 && (fVar8 <= __real_3f800000 && fVar7 <= __real_3f800000))) {
        local_468._s_0.X = fVar7;
        local_468._s_0.Y = fVar8;
        local_468._s_0.Z = fVar9;
        local_468._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::SoftLightChannel,0>
                  (pFVar5,pFVar5,(TVector4<float> *)&local_468._s_0);
      }
      else {
        local_478._s_0.X = fVar7;
        local_478._s_0.Y = fVar8;
        local_478._s_0.Z = fVar9;
        local_478._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::SoftLightChannel,1>
                  (pFVar5,pFVar5,(TVector4<float> *)&local_478._s_0);
      }
      break;
    case 1:
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      pFVar5 = (this->Result).Object;
      if (fVar10 <= __real_3f800000 &&
          (fVar9 <= __real_3f800000 && (fVar8 <= __real_3f800000 && fVar7 <= __real_3f800000))) {
        local_448._s_0.X = fVar7;
        local_448._s_0.Y = fVar8;
        local_448._s_0.Z = fVar9;
        local_448._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::HardLightChannel,0>
                  (pFVar5,pFVar5,(TVector4<float> *)&local_448._s_0);
      }
      else {
        local_458._s_0.X = fVar7;
        local_458._s_0.Y = fVar8;
        local_458._s_0.Z = fVar9;
        local_458._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::HardLightChannel,1>
                  (pFVar5,pFVar5,(TVector4<float> *)&local_458._s_0);
      }
      break;
    case 2:
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      pFVar5 = (this->Result).Object;
      if (fVar10 <= __real_3f800000 &&
          (fVar9 <= __real_3f800000 && (fVar8 <= __real_3f800000 && fVar7 <= __real_3f800000))) {
        local_428._s_0.X = fVar7;
        local_428._s_0.Y = fVar8;
        local_428._s_0.Z = fVar9;
        local_428._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::BurnChannel,0>
                  (pFVar5,pFVar5,(TVector4<float> *)&local_428._s_0);
      }
      else {
        local_438._s_0.X = fVar7;
        local_438._s_0.Y = fVar8;
        local_438._s_0.Z = fVar9;
        local_438._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::BurnChannel,1>
                  (pFVar5,pFVar5,(TVector4<float> *)&local_438._s_0);
      }
      break;
    case 3:
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      pFVar5 = (this->Result).Object;
      if (fVar10 <= __real_3f800000 &&
          (fVar9 <= __real_3f800000 && (fVar8 <= __real_3f800000 && fVar7 <= __real_3f800000))) {
        local_408._s_0.X = fVar7;
        local_408._s_0.Y = fVar8;
        local_408._s_0.Z = fVar9;
        local_408._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::DodgeChannel,0>
                  (pFVar5,pFVar5,(TVector4<float> *)&local_408._s_0);
      }
      else {
        local_418._s_0.X = fVar7;
        local_418._s_0.Y = fVar8;
        local_418._s_0.Z = fVar9;
        local_418._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::DodgeChannel,1>
                  (pFVar5,pFVar5,(TVector4<float> *)&local_418._s_0);
      }
      break;
    case 4:
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      pFVar5 = (this->Result).Object;
      if (fVar10 <= __real_3f800000 &&
          (fVar9 <= __real_3f800000 && (fVar8 <= __real_3f800000 && fVar7 <= __real_3f800000))) {
        local_3e8._s_0.X = fVar7;
        local_3e8._s_0.Y = fVar8;
        local_3e8._s_0.Z = fVar9;
        local_3e8._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::ScreenChannel,0>
                  (pFVar5,pFVar5,(TVector4<float> *)&local_3e8._s_0);
      }
      else {
        local_3f8._s_0.X = fVar7;
        local_3f8._s_0.Y = fVar8;
        local_3f8._s_0.Z = fVar9;
        local_3f8._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::ScreenChannel,1>
                  (pFVar5,pFVar5,(TVector4<float> *)&local_3f8._s_0);
      }
      break;
    case 5:
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      pFVar5 = (this->Result).Object;
      if (fVar10 <= __real_3f800000 &&
          (fVar9 <= __real_3f800000 && (fVar8 <= __real_3f800000 && fVar7 <= __real_3f800000))) {
        local_3c8._s_0.X = fVar7;
        local_3c8._s_0.Y = fVar8;
        local_3c8._s_0.Z = fVar9;
        local_3c8._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::OverlayChannel,0>
                  (pFVar5,pFVar5,(TVector4<float> *)&local_3c8._s_0);
      }
      else {
        local_3d8._s_0.X = fVar7;
        local_3d8._s_0.Y = fVar8;
        local_3d8._s_0.Z = fVar9;
        local_3d8._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::OverlayChannel,1>
                  (pFVar5,pFVar5,(TVector4<float> *)&local_3d8._s_0);
      }
      break;
    case 6:
      local_128._0_8_ = 0;
      local_100 = (longlong *)0x0;
      FImageOperator::GetDefault
                (&local_f8,
                 (TFunction<void___cdecl(bool_&,int,UE::Mutable::Private::FImage_*,UE::Mutable::Private::FImage_const_*,int)>
                  *)local_128);
      if (local_128._0_8_ != 0) {
        plVar14 = (longlong *)(local_128 + 0x10);
        if (local_100 != (longlong *)0x0) {
          plVar14 = local_100;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      local_378._0_8_ = *(undefined8 *)&(this->Color).field0_0x0;
      local_378._8_8_ = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
      FImageOperator::FillColor(&local_f8,(this->Result).Object,(TVector4<float> *)&local_378._s_0);
      FImageOperator::~FImageOperator(&local_f8);
      break;
    case 7:
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      pFVar5 = (this->Result).Object;
      if (fVar10 <= __real_3f800000 &&
          (fVar9 <= __real_3f800000 && (fVar8 <= __real_3f800000 && fVar7 <= __real_3f800000))) {
        local_388._s_0.X = fVar7;
        local_388._s_0.Y = fVar8;
        local_388._s_0.Z = fVar9;
        local_388._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::MultiplyChannel,0>
                  (pFVar5,pFVar5,(TVector4<float> *)&local_388._s_0);
      }
      else {
        local_398._s_0.X = fVar7;
        local_398._s_0.Y = fVar8;
        local_398._s_0.Z = fVar9;
        local_398._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::MultiplyChannel,1>
                  (pFVar5,pFVar5,(TVector4<float> *)&local_398._s_0);
      }
      break;
    case 8:
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      pFVar5 = (this->Result).Object;
      if (fVar10 <= __real_3f800000 &&
          (fVar9 <= __real_3f800000 && (fVar8 <= __real_3f800000 && fVar7 <= __real_3f800000))) {
        local_3a8._s_0.X = fVar7;
        local_3a8._s_0.Y = fVar8;
        local_3a8._s_0.Z = fVar9;
        local_3a8._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::LightenChannel,0>
                  (pFVar5,pFVar5,(TVector4<float> *)&local_3a8._s_0);
      }
      else {
        local_3b8._s_0.X = fVar7;
        local_3b8._s_0.Y = fVar8;
        local_3b8._s_0.Z = fVar9;
        local_3b8._s_0.W = fVar10;
        BufferLayerColourImpl<&UE::Mutable::Private::LightenChannel,1>
                  (pFVar5,pFVar5,(TVector4<float> *)&local_3b8._s_0);
      }
      break;
    case 9:
      pFVar5 = (this->Result).Object;
      local_488._0_8_ = *(undefined8 *)&(this->Color).field0_0x0;
      local_488._8_8_ = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
      ImageLayerCombineColour<&UE::Mutable::Private::CombineNormal>
                (pFVar5,pFVar5,(TVector4<float> *)&local_488._s_0);
      break;
    default:
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                          ,0x3e9,L"");
      if (bVar12) goto code_r0x00014aac4a33;
    }
    goto LAB_14aac4a34;
  }
  switch(iVar13) {
  case 0:
    fVar7 = (this->Color).field0_0x0._s_0.X;
    fVar8 = (this->Color).field0_0x0._s_0.Y;
    fVar9 = (this->Color).field0_0x0._s_0.Z;
    fVar10 = (this->Color).field0_0x0._s_0.W;
    pFVar5 = (this->Result).Object;
    if (fVar10 <= __real_3f800000 &&
        (fVar9 <= __real_3f800000 && (fVar8 <= __real_3f800000 && fVar7 <= __real_3f800000))) {
      local_578._s_0.X = fVar7;
      local_578._s_0.Y = fVar8;
      local_578._s_0.Z = fVar9;
      local_578._s_0.W = fVar10;
      BufferLayerColourFromAlpha<&UE::Mutable::Private::SoftLightChannel,0>
                (pFVar5,pFVar5,(TVector4<float> *)&local_578._s_0);
    }
    else {
      local_588._s_0.X = fVar7;
      local_588._s_0.Y = fVar8;
      local_588._s_0.Z = fVar9;
      local_588._s_0.W = fVar10;
      BufferLayerColourFromAlpha<&UE::Mutable::Private::SoftLightChannel,1>
                (pFVar5,pFVar5,(TVector4<float> *)&local_588._s_0);
    }
    break;
  case 1:
    fVar7 = (this->Color).field0_0x0._s_0.X;
    fVar8 = (this->Color).field0_0x0._s_0.Y;
    fVar9 = (this->Color).field0_0x0._s_0.Z;
    fVar10 = (this->Color).field0_0x0._s_0.W;
    pFVar5 = (this->Result).Object;
    if (fVar10 <= __real_3f800000 &&
        (fVar9 <= __real_3f800000 && (fVar8 <= __real_3f800000 && fVar7 <= __real_3f800000))) {
      local_558._s_0.X = fVar7;
      local_558._s_0.Y = fVar8;
      local_558._s_0.Z = fVar9;
      local_558._s_0.W = fVar10;
      BufferLayerColourFromAlpha<&UE::Mutable::Private::HardLightChannel,0>
                (pFVar5,pFVar5,(TVector4<float> *)&local_558._s_0);
    }
    else {
      local_568._s_0.X = fVar7;
      local_568._s_0.Y = fVar8;
      local_568._s_0.Z = fVar9;
      local_568._s_0.W = fVar10;
      BufferLayerColourFromAlpha<&UE::Mutable::Private::HardLightChannel,1>
                (pFVar5,pFVar5,(TVector4<float> *)&local_568._s_0);
    }
    break;
  case 2:
    fVar7 = (this->Color).field0_0x0._s_0.X;
    fVar8 = (this->Color).field0_0x0._s_0.Y;
    fVar9 = (this->Color).field0_0x0._s_0.Z;
    fVar10 = (this->Color).field0_0x0._s_0.W;
    pFVar5 = (this->Result).Object;
    if (fVar10 <= __real_3f800000 &&
        (fVar9 <= __real_3f800000 && (fVar8 <= __real_3f800000 && fVar7 <= __real_3f800000))) {
      local_538._s_0.X = fVar7;
      local_538._s_0.Y = fVar8;
      local_538._s_0.Z = fVar9;
      local_538._s_0.W = fVar10;
      BufferLayerColourFromAlpha<&UE::Mutable::Private::BurnChannel,0>
                (pFVar5,pFVar5,(TVector4<float> *)&local_538._s_0);
    }
    else {
      local_548._s_0.X = fVar7;
      local_548._s_0.Y = fVar8;
      local_548._s_0.Z = fVar9;
      local_548._s_0.W = fVar10;
      BufferLayerColourFromAlpha<&UE::Mutable::Private::BurnChannel,1>
                (pFVar5,pFVar5,(TVector4<float> *)&local_548._s_0);
    }
    break;
  case 3:
    fVar7 = (this->Color).field0_0x0._s_0.X;
    fVar8 = (this->Color).field0_0x0._s_0.Y;
    fVar9 = (this->Color).field0_0x0._s_0.Z;
    fVar10 = (this->Color).field0_0x0._s_0.W;
    pFVar5 = (this->Result).Object;
    if (fVar10 <= __real_3f800000 &&
        (fVar9 <= __real_3f800000 && (fVar8 <= __real_3f800000 && fVar7 <= __real_3f800000))) {
      local_518._s_0.X = fVar7;
      local_518._s_0.Y = fVar8;
      local_518._s_0.Z = fVar9;
      local_518._s_0.W = fVar10;
      BufferLayerColourFromAlpha<&UE::Mutable::Private::DodgeChannel,0>
                (pFVar5,pFVar5,(TVector4<float> *)&local_518._s_0);
    }
    else {
      local_528._s_0.X = fVar7;
      local_528._s_0.Y = fVar8;
      local_528._s_0.Z = fVar9;
      local_528._s_0.W = fVar10;
      BufferLayerColourFromAlpha<&UE::Mutable::Private::DodgeChannel,1>
                (pFVar5,pFVar5,(TVector4<float> *)&local_528._s_0);
    }
    break;
  case 4:
    fVar7 = (this->Color).field0_0x0._s_0.X;
    fVar8 = (this->Color).field0_0x0._s_0.Y;
    fVar9 = (this->Color).field0_0x0._s_0.Z;
    fVar10 = (this->Color).field0_0x0._s_0.W;
    pFVar5 = (this->Result).Object;
    if (fVar10 <= __real_3f800000 &&
        (fVar9 <= __real_3f800000 && (fVar8 <= __real_3f800000 && fVar7 <= __real_3f800000))) {
      local_4f8._s_0.X = fVar7;
      local_4f8._s_0.Y = fVar8;
      local_4f8._s_0.Z = fVar9;
      local_4f8._s_0.W = fVar10;
      BufferLayerColourFromAlpha<&UE::Mutable::Private::ScreenChannel,0>
                (pFVar5,pFVar5,(TVector4<float> *)&local_4f8._s_0);
    }
    else {
      local_508._s_0.X = fVar7;
      local_508._s_0.Y = fVar8;
      local_508._s_0.Z = fVar9;
      local_508._s_0.W = fVar10;
      BufferLayerColourFromAlpha<&UE::Mutable::Private::ScreenChannel,1>
                (pFVar5,pFVar5,(TVector4<float> *)&local_508._s_0);
    }
    break;
  case 5:
    fVar7 = (this->Color).field0_0x0._s_0.X;
    fVar8 = (this->Color).field0_0x0._s_0.Y;
    fVar9 = (this->Color).field0_0x0._s_0.Z;
    fVar10 = (this->Color).field0_0x0._s_0.W;
    pFVar5 = (this->Result).Object;
    if (fVar10 <= __real_3f800000 &&
        (fVar9 <= __real_3f800000 && (fVar8 <= __real_3f800000 && fVar7 <= __real_3f800000))) {
      local_4d8._s_0.X = fVar7;
      local_4d8._s_0.Y = fVar8;
      local_4d8._s_0.Z = fVar9;
      local_4d8._s_0.W = fVar10;
      BufferLayerColourFromAlpha<&UE::Mutable::Private::OverlayChannel,0>
                (pFVar5,pFVar5,(TVector4<float> *)&local_4d8._s_0);
    }
    else {
      local_4e8._s_0.X = fVar7;
      local_4e8._s_0.Y = fVar8;
      local_4e8._s_0.Z = fVar9;
      local_4e8._s_0.W = fVar10;
      BufferLayerColourFromAlpha<&UE::Mutable::Private::OverlayChannel,1>
                (pFVar5,pFVar5,(TVector4<float> *)&local_4e8._s_0);
    }
    break;
  case 6:
    iVar13 = 0x3d1;
    goto LAB_14aac4552;
  case 7:
    fVar7 = (this->Color).field0_0x0._s_0.X;
    fVar8 = (this->Color).field0_0x0._s_0.Y;
    fVar9 = (this->Color).field0_0x0._s_0.Z;
    fVar10 = (this->Color).field0_0x0._s_0.W;
    pFVar5 = (this->Result).Object;
    if (fVar10 <= __real_3f800000 &&
        (fVar9 <= __real_3f800000 && (fVar8 <= __real_3f800000 && fVar7 <= __real_3f800000))) {
      local_498._s_0.X = fVar7;
      local_498._s_0.Y = fVar8;
      local_498._s_0.Z = fVar9;
      local_498._s_0.W = fVar10;
      BufferLayerColourFromAlpha<&UE::Mutable::Private::MultiplyChannel,0>
                (pFVar5,pFVar5,(TVector4<float> *)&local_498._s_0);
    }
    else {
      local_4a8._s_0.X = fVar7;
      local_4a8._s_0.Y = fVar8;
      local_4a8._s_0.Z = fVar9;
      local_4a8._s_0.W = fVar10;
      BufferLayerColourFromAlpha<&UE::Mutable::Private::MultiplyChannel,1>
                (pFVar5,pFVar5,(TVector4<float> *)&local_4a8._s_0);
    }
    break;
  case 8:
    fVar7 = (this->Color).field0_0x0._s_0.X;
    fVar8 = (this->Color).field0_0x0._s_0.Y;
    fVar9 = (this->Color).field0_0x0._s_0.Z;
    fVar10 = (this->Color).field0_0x0._s_0.W;
    pFVar5 = (this->Result).Object;
    if (fVar10 <= __real_3f800000 &&
        (fVar9 <= __real_3f800000 && (fVar8 <= __real_3f800000 && fVar7 <= __real_3f800000))) {
      local_4b8._s_0.X = fVar7;
      local_4b8._s_0.Y = fVar8;
      local_4b8._s_0.Z = fVar9;
      local_4b8._s_0.W = fVar10;
      BufferLayerColourFromAlpha<&UE::Mutable::Private::LightenChannel,0>
                (pFVar5,pFVar5,(TVector4<float> *)&local_4b8._s_0);
    }
    else {
      local_4c8._s_0.X = fVar7;
      local_4c8._s_0.Y = fVar8;
      local_4c8._s_0.Z = fVar9;
      local_4c8._s_0.W = fVar10;
      BufferLayerColourFromAlpha<&UE::Mutable::Private::LightenChannel,1>
                (pFVar5,pFVar5,(TVector4<float> *)&local_4c8._s_0);
    }
    break;
  case 9:
    iVar13 = 0x3c8;
    goto LAB_14aac4552;
  default:
    iVar13 = 0x3d2;
LAB_14aac4552:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                        ,iVar13,L"");
    if (bVar12) {
code_r0x00014aac4a33:
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
LAB_14aac4a34:
  uVar3 = (this->Args).blendTypeAlpha;
  if (uVar3 == '\0') goto LAB_14aac54f2;
  if (((this->Args).mask == 0) || (pFVar5 = (this->Mask).Object, pFVar5 == (FImage *)0x0)) {
    switch(uVar3) {
    case '\x01':
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      uVar3 = (this->Args).BlendAlphaSourceChannel;
      pFVar5 = (this->Result).Object;
      if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
        local_238._s_0.X = fVar7;
        local_238._s_0.Y = fVar8;
        local_238._s_0.Z = fVar9;
        local_238._s_0.W = fVar10;
        BufferLayerColourInPlaceImpl<&UE::Mutable::Private::SoftLightChannel,0,1>
                  (pFVar5,(TVector4<float> *)&local_238._s_0,false,3,uVar3);
      }
      else {
        local_248._s_0.X = fVar7;
        local_248._s_0.Y = fVar8;
        local_248._s_0.Z = fVar9;
        local_248._s_0.W = fVar10;
        BufferLayerColourInPlaceImpl<&UE::Mutable::Private::SoftLightChannel,1,1>
                  (pFVar5,(TVector4<float> *)&local_248._s_0,false,3,uVar3);
      }
      break;
    case '\x02':
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      uVar3 = (this->Args).BlendAlphaSourceChannel;
      pFVar5 = (this->Result).Object;
      if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
        local_218._s_0.X = fVar7;
        local_218._s_0.Y = fVar8;
        local_218._s_0.Z = fVar9;
        local_218._s_0.W = fVar10;
        BufferLayerColourInPlaceImpl<&UE::Mutable::Private::HardLightChannel,0,1>
                  (pFVar5,(TVector4<float> *)&local_218._s_0,false,3,uVar3);
      }
      else {
        local_228._s_0.X = fVar7;
        local_228._s_0.Y = fVar8;
        local_228._s_0.Z = fVar9;
        local_228._s_0.W = fVar10;
        BufferLayerColourInPlaceImpl<&UE::Mutable::Private::HardLightChannel,1,1>
                  (pFVar5,(TVector4<float> *)&local_228._s_0,false,3,uVar3);
      }
      break;
    case '\x03':
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      uVar3 = (this->Args).BlendAlphaSourceChannel;
      pFVar5 = (this->Result).Object;
      if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
        local_1f8._s_0.X = fVar7;
        local_1f8._s_0.Y = fVar8;
        local_1f8._s_0.Z = fVar9;
        local_1f8._s_0.W = fVar10;
        BufferLayerColourInPlaceImpl<&UE::Mutable::Private::BurnChannel,0,1>
                  (pFVar5,(TVector4<float> *)&local_1f8._s_0,false,3,uVar3);
      }
      else {
        local_208._s_0.X = fVar7;
        local_208._s_0.Y = fVar8;
        local_208._s_0.Z = fVar9;
        local_208._s_0.W = fVar10;
        BufferLayerColourInPlaceImpl<&UE::Mutable::Private::BurnChannel,1,1>
                  (pFVar5,(TVector4<float> *)&local_208._s_0,false,3,uVar3);
      }
      break;
    case '\x04':
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      uVar3 = (this->Args).BlendAlphaSourceChannel;
      pFVar5 = (this->Result).Object;
      if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
        local_1d8._s_0.X = fVar7;
        local_1d8._s_0.Y = fVar8;
        local_1d8._s_0.Z = fVar9;
        local_1d8._s_0.W = fVar10;
        BufferLayerColourInPlaceImpl<&UE::Mutable::Private::DodgeChannel,0,1>
                  (pFVar5,(TVector4<float> *)&local_1d8._s_0,false,3,uVar3);
      }
      else {
        local_1e8._s_0.X = fVar7;
        local_1e8._s_0.Y = fVar8;
        local_1e8._s_0.Z = fVar9;
        local_1e8._s_0.W = fVar10;
        BufferLayerColourInPlaceImpl<&UE::Mutable::Private::DodgeChannel,1,1>
                  (pFVar5,(TVector4<float> *)&local_1e8._s_0,false,3,uVar3);
      }
      break;
    case '\x05':
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      uVar3 = (this->Args).BlendAlphaSourceChannel;
      pFVar5 = (this->Result).Object;
      if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
        local_1b8._s_0.X = fVar7;
        local_1b8._s_0.Y = fVar8;
        local_1b8._s_0.Z = fVar9;
        local_1b8._s_0.W = fVar10;
        BufferLayerColourInPlaceImpl<&UE::Mutable::Private::ScreenChannel,0,1>
                  (pFVar5,(TVector4<float> *)&local_1b8._s_0,false,3,uVar3);
      }
      else {
        local_1c8._s_0.X = fVar7;
        local_1c8._s_0.Y = fVar8;
        local_1c8._s_0.Z = fVar9;
        local_1c8._s_0.W = fVar10;
        BufferLayerColourInPlaceImpl<&UE::Mutable::Private::ScreenChannel,1,1>
                  (pFVar5,(TVector4<float> *)&local_1c8._s_0,false,3,uVar3);
      }
      break;
    case '\x06':
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      uVar3 = (this->Args).BlendAlphaSourceChannel;
      pFVar5 = (this->Result).Object;
      if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
        local_198._s_0.X = fVar7;
        local_198._s_0.Y = fVar8;
        local_198._s_0.Z = fVar9;
        local_198._s_0.W = fVar10;
        BufferLayerColourInPlaceImpl<&UE::Mutable::Private::OverlayChannel,0,1>
                  (pFVar5,(TVector4<float> *)&local_198._s_0,false,3,uVar3);
      }
      else {
        local_1a8._s_0.X = fVar7;
        local_1a8._s_0.Y = fVar8;
        local_1a8._s_0.Z = fVar9;
        local_1a8._s_0.W = fVar10;
        BufferLayerColourInPlaceImpl<&UE::Mutable::Private::OverlayChannel,1,1>
                  (pFVar5,(TVector4<float> *)&local_1a8._s_0,false,3,uVar3);
      }
      break;
    case '\a':
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      uVar3 = (this->Args).BlendAlphaSourceChannel;
      pFVar5 = (this->Result).Object;
      if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
        local_138._s_0.X = fVar7;
        local_138._s_0.Y = fVar8;
        local_138._s_0.Z = fVar9;
        local_138._s_0.W = fVar10;
        BufferLayerColourInPlaceImpl<&UE::Mutable::Private::BlendChannel,0,1>
                  (pFVar5,(TVector4<float> *)&local_138._s_0,false,3,uVar3);
      }
      else {
        local_148._s_0.X = fVar7;
        local_148._s_0.Y = fVar8;
        local_148._s_0.Z = fVar9;
        local_148._s_0.W = fVar10;
        BufferLayerColourInPlaceImpl<&UE::Mutable::Private::BlendChannel,1,1>
                  (pFVar5,(TVector4<float> *)&local_148._s_0,false,3,uVar3);
      }
      break;
    case '\b':
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      uVar3 = (this->Args).BlendAlphaSourceChannel;
      pFVar5 = (this->Result).Object;
      if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
        local_158._s_0.X = fVar7;
        local_158._s_0.Y = fVar8;
        local_158._s_0.Z = fVar9;
        local_158._s_0.W = fVar10;
        BufferLayerColourInPlaceImpl<&UE::Mutable::Private::MultiplyChannel,0,1>
                  (pFVar5,(TVector4<float> *)&local_158._s_0,false,3,uVar3);
      }
      else {
        local_168._s_0.X = fVar7;
        local_168._s_0.Y = fVar8;
        local_168._s_0.Z = fVar9;
        local_168._s_0.W = fVar10;
        BufferLayerColourInPlaceImpl<&UE::Mutable::Private::MultiplyChannel,1,1>
                  (pFVar5,(TVector4<float> *)&local_168._s_0,false,3,uVar3);
      }
      break;
    case '\t':
      fVar7 = (this->Color).field0_0x0._s_0.X;
      fVar8 = (this->Color).field0_0x0._s_0.Y;
      fVar9 = (this->Color).field0_0x0._s_0.Z;
      fVar10 = (this->Color).field0_0x0._s_0.W;
      uVar3 = (this->Args).BlendAlphaSourceChannel;
      pFVar5 = (this->Result).Object;
      if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
        local_178._s_0.X = fVar7;
        local_178._s_0.Y = fVar8;
        local_178._s_0.Z = fVar9;
        local_178._s_0.W = fVar10;
        BufferLayerColourInPlaceImpl<&UE::Mutable::Private::LightenChannel,0,1>
                  (pFVar5,(TVector4<float> *)&local_178._s_0,false,3,uVar3);
      }
      else {
        local_188._s_0.X = fVar7;
        local_188._s_0.Y = fVar8;
        local_188._s_0.Z = fVar9;
        local_188._s_0.W = fVar10;
        BufferLayerColourInPlaceImpl<&UE::Mutable::Private::LightenChannel,1,1>
                  (pFVar5,(TVector4<float> *)&local_188._s_0,false,3,uVar3);
      }
      break;
    case '\n':
      iVar13 = 0x409;
      goto LAB_14aac4fbf;
    default:
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                          ,0x413,L"");
      if (!bVar12) break;
      goto code_r0x00014aac54f1;
    }
    goto LAB_14aac54f2;
  }
  switch(uVar3) {
  case '\x01':
    fVar7 = (this->Color).field0_0x0._s_0.X;
    fVar8 = (this->Color).field0_0x0._s_0.Y;
    fVar9 = (this->Color).field0_0x0._s_0.Z;
    fVar10 = (this->Color).field0_0x0._s_0.W;
    uVar3 = (this->Args).BlendAlphaSourceChannel;
    pFVar4 = (this->Result).Object;
    if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
      local_358._s_0.X = fVar7;
      local_358._s_0.Y = fVar8;
      local_358._s_0.Z = fVar9;
      local_358._s_0.W = fVar10;
      BufferLayerColourInPlaceImpl<&UE::Mutable::Private::SoftLightChannelMasked,&UE::Mutable::Private::SoftLightChannel,0,1>
                (pFVar4,pFVar5,(TVector4<float> *)&local_358._s_0,false,3,uVar3);
    }
    else {
      local_368._s_0.X = fVar7;
      local_368._s_0.Y = fVar8;
      local_368._s_0.Z = fVar9;
      local_368._s_0.W = fVar10;
      BufferLayerColourInPlaceImpl<&UE::Mutable::Private::SoftLightChannelMasked,&UE::Mutable::Private::SoftLightChannel,1,1>
                (pFVar4,pFVar5,(TVector4<float> *)&local_368._s_0,false,3,uVar3);
    }
    break;
  case '\x02':
    fVar7 = (this->Color).field0_0x0._s_0.X;
    fVar8 = (this->Color).field0_0x0._s_0.Y;
    fVar9 = (this->Color).field0_0x0._s_0.Z;
    fVar10 = (this->Color).field0_0x0._s_0.W;
    uVar3 = (this->Args).BlendAlphaSourceChannel;
    pFVar4 = (this->Result).Object;
    if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
      local_338._s_0.X = fVar7;
      local_338._s_0.Y = fVar8;
      local_338._s_0.Z = fVar9;
      local_338._s_0.W = fVar10;
      BufferLayerColourInPlaceImpl<&UE::Mutable::Private::HardLightChannelMasked,&UE::Mutable::Private::HardLightChannel,0,1>
                (pFVar4,pFVar5,(TVector4<float> *)&local_338._s_0,false,3,uVar3);
    }
    else {
      local_348._s_0.X = fVar7;
      local_348._s_0.Y = fVar8;
      local_348._s_0.Z = fVar9;
      local_348._s_0.W = fVar10;
      BufferLayerColourInPlaceImpl<&UE::Mutable::Private::HardLightChannelMasked,&UE::Mutable::Private::HardLightChannel,1,1>
                (pFVar4,pFVar5,(TVector4<float> *)&local_348._s_0,false,3,uVar3);
    }
    break;
  case '\x03':
    fVar7 = (this->Color).field0_0x0._s_0.X;
    fVar8 = (this->Color).field0_0x0._s_0.Y;
    fVar9 = (this->Color).field0_0x0._s_0.Z;
    fVar10 = (this->Color).field0_0x0._s_0.W;
    uVar3 = (this->Args).BlendAlphaSourceChannel;
    pFVar4 = (this->Result).Object;
    if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
      local_318._s_0.X = fVar7;
      local_318._s_0.Y = fVar8;
      local_318._s_0.Z = fVar9;
      local_318._s_0.W = fVar10;
      BufferLayerColourInPlaceImpl<&UE::Mutable::Private::BurnChannelMasked,&UE::Mutable::Private::BurnChannel,0,1>
                (pFVar4,pFVar5,(TVector4<float> *)&local_318._s_0,false,3,uVar3);
    }
    else {
      local_328._s_0.X = fVar7;
      local_328._s_0.Y = fVar8;
      local_328._s_0.Z = fVar9;
      local_328._s_0.W = fVar10;
      BufferLayerColourInPlaceImpl<&UE::Mutable::Private::BurnChannelMasked,&UE::Mutable::Private::BurnChannel,1,1>
                (pFVar4,pFVar5,(TVector4<float> *)&local_328._s_0,false,3,uVar3);
    }
    break;
  case '\x04':
    fVar7 = (this->Color).field0_0x0._s_0.X;
    fVar8 = (this->Color).field0_0x0._s_0.Y;
    fVar9 = (this->Color).field0_0x0._s_0.Z;
    fVar10 = (this->Color).field0_0x0._s_0.W;
    uVar3 = (this->Args).BlendAlphaSourceChannel;
    pFVar4 = (this->Result).Object;
    if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
      local_2f8._s_0.X = fVar7;
      local_2f8._s_0.Y = fVar8;
      local_2f8._s_0.Z = fVar9;
      local_2f8._s_0.W = fVar10;
      BufferLayerColourInPlaceImpl<&UE::Mutable::Private::DodgeChannelMasked,&UE::Mutable::Private::DodgeChannel,0,1>
                (pFVar4,pFVar5,(TVector4<float> *)&local_2f8._s_0,false,3,uVar3);
    }
    else {
      local_308._s_0.X = fVar7;
      local_308._s_0.Y = fVar8;
      local_308._s_0.Z = fVar9;
      local_308._s_0.W = fVar10;
      BufferLayerColourInPlaceImpl<&UE::Mutable::Private::DodgeChannelMasked,&UE::Mutable::Private::DodgeChannel,1,1>
                (pFVar4,pFVar5,(TVector4<float> *)&local_308._s_0,false,3,uVar3);
    }
    break;
  case '\x05':
    fVar7 = (this->Color).field0_0x0._s_0.X;
    fVar8 = (this->Color).field0_0x0._s_0.Y;
    fVar9 = (this->Color).field0_0x0._s_0.Z;
    fVar10 = (this->Color).field0_0x0._s_0.W;
    uVar3 = (this->Args).BlendAlphaSourceChannel;
    pFVar4 = (this->Result).Object;
    if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
      local_2d8._s_0.X = fVar7;
      local_2d8._s_0.Y = fVar8;
      local_2d8._s_0.Z = fVar9;
      local_2d8._s_0.W = fVar10;
      BufferLayerColourInPlaceImpl<&UE::Mutable::Private::ScreenChannelMasked,&UE::Mutable::Private::ScreenChannel,0,1>
                (pFVar4,pFVar5,(TVector4<float> *)&local_2d8._s_0,false,3,uVar3);
    }
    else {
      local_2e8._s_0.X = fVar7;
      local_2e8._s_0.Y = fVar8;
      local_2e8._s_0.Z = fVar9;
      local_2e8._s_0.W = fVar10;
      BufferLayerColourInPlaceImpl<&UE::Mutable::Private::ScreenChannelMasked,&UE::Mutable::Private::ScreenChannel,1,1>
                (pFVar4,pFVar5,(TVector4<float> *)&local_2e8._s_0,false,3,uVar3);
    }
    break;
  case '\x06':
    fVar7 = (this->Color).field0_0x0._s_0.X;
    fVar8 = (this->Color).field0_0x0._s_0.Y;
    fVar9 = (this->Color).field0_0x0._s_0.Z;
    fVar10 = (this->Color).field0_0x0._s_0.W;
    uVar3 = (this->Args).BlendAlphaSourceChannel;
    pFVar4 = (this->Result).Object;
    if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
      local_2b8._s_0.X = fVar7;
      local_2b8._s_0.Y = fVar8;
      local_2b8._s_0.Z = fVar9;
      local_2b8._s_0.W = fVar10;
      BufferLayerColourInPlaceImpl<&UE::Mutable::Private::OverlayChannelMasked,&UE::Mutable::Private::OverlayChannel,0,1>
                (pFVar4,pFVar5,(TVector4<float> *)&local_2b8._s_0,false,3,uVar3);
    }
    else {
      local_2c8._s_0.X = fVar7;
      local_2c8._s_0.Y = fVar8;
      local_2c8._s_0.Z = fVar9;
      local_2c8._s_0.W = fVar10;
      BufferLayerColourInPlaceImpl<&UE::Mutable::Private::OverlayChannelMasked,&UE::Mutable::Private::OverlayChannel,1,1>
                (pFVar4,pFVar5,(TVector4<float> *)&local_2c8._s_0,false,3,uVar3);
    }
    break;
  case '\a':
    fVar7 = (this->Color).field0_0x0._s_0.X;
    fVar8 = (this->Color).field0_0x0._s_0.Y;
    fVar9 = (this->Color).field0_0x0._s_0.Z;
    fVar10 = (this->Color).field0_0x0._s_0.W;
    uVar3 = (this->Args).BlendAlphaSourceChannel;
    pFVar4 = (this->Result).Object;
    if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
      local_258._s_0.X = fVar7;
      local_258._s_0.Y = fVar8;
      local_258._s_0.Z = fVar9;
      local_258._s_0.W = fVar10;
      BufferLayerColourInPlaceImpl<&UE::Mutable::Private::BlendChannelMasked,&UE::Mutable::Private::BlendChannel,0,1>
                (pFVar4,pFVar5,(TVector4<float> *)&local_258._s_0,false,3,uVar3);
    }
    else {
      local_268._s_0.X = fVar7;
      local_268._s_0.Y = fVar8;
      local_268._s_0.Z = fVar9;
      local_268._s_0.W = fVar10;
      BufferLayerColourInPlaceImpl<&UE::Mutable::Private::BlendChannelMasked,&UE::Mutable::Private::BlendChannel,1,1>
                (pFVar4,pFVar5,(TVector4<float> *)&local_268._s_0,false,3,uVar3);
    }
    break;
  case '\b':
    fVar7 = (this->Color).field0_0x0._s_0.X;
    fVar8 = (this->Color).field0_0x0._s_0.Y;
    fVar9 = (this->Color).field0_0x0._s_0.Z;
    fVar10 = (this->Color).field0_0x0._s_0.W;
    uVar3 = (this->Args).BlendAlphaSourceChannel;
    pFVar4 = (this->Result).Object;
    if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
      local_278._s_0.X = fVar7;
      local_278._s_0.Y = fVar8;
      local_278._s_0.Z = fVar9;
      local_278._s_0.W = fVar10;
      BufferLayerColourInPlaceImpl<&UE::Mutable::Private::MultiplyChannelMasked,&UE::Mutable::Private::MultiplyChannel,0,1>
                (pFVar4,pFVar5,(TVector4<float> *)&local_278._s_0,false,3,uVar3);
    }
    else {
      local_288._s_0.X = fVar7;
      local_288._s_0.Y = fVar8;
      local_288._s_0.Z = fVar9;
      local_288._s_0.W = fVar10;
      BufferLayerColourInPlaceImpl<&UE::Mutable::Private::MultiplyChannelMasked,&UE::Mutable::Private::MultiplyChannel,1,1>
                (pFVar4,pFVar5,(TVector4<float> *)&local_288._s_0,false,3,uVar3);
    }
    break;
  case '\t':
    fVar7 = (this->Color).field0_0x0._s_0.X;
    fVar8 = (this->Color).field0_0x0._s_0.Y;
    fVar9 = (this->Color).field0_0x0._s_0.Z;
    fVar10 = (this->Color).field0_0x0._s_0.W;
    uVar3 = (this->Args).BlendAlphaSourceChannel;
    pFVar4 = (this->Result).Object;
    if (fVar10 <= fVar11 && (fVar9 <= fVar11 && (fVar8 <= fVar11 && fVar7 <= fVar11))) {
      local_298._s_0.X = fVar7;
      local_298._s_0.Y = fVar8;
      local_298._s_0.Z = fVar9;
      local_298._s_0.W = fVar10;
      BufferLayerColourInPlaceImpl<&UE::Mutable::Private::LightenChannelMasked,&UE::Mutable::Private::LightenChannel,0,1>
                (pFVar4,pFVar5,(TVector4<float> *)&local_298._s_0,false,3,uVar3);
    }
    else {
      local_2a8._s_0.X = fVar7;
      local_2a8._s_0.Y = fVar8;
      local_2a8._s_0.Z = fVar9;
      local_2a8._s_0.W = fVar10;
      BufferLayerColourInPlaceImpl<&UE::Mutable::Private::LightenChannelMasked,&UE::Mutable::Private::LightenChannel,1,1>
                (pFVar4,pFVar5,(TVector4<float> *)&local_2a8._s_0,false,3,uVar3);
    }
    break;
  case '\n':
    iVar13 = 0x3f7;
    goto LAB_14aac4fbf;
  default:
    iVar13 = 0x401;
LAB_14aac4fbf:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                        ,iVar13,L"");
    if (bVar12) {
code_r0x00014aac54f1:
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
LAB_14aac54f2:
  if (((this->Result).Object == (FImage *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar1 = &((this->Result).Object)->Flags;
  *puVar1 = *puVar1 & 0xf7;
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Prepare @ 14aae0ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Mutable::Private::FImageLayerColourTask::Prepare
          (FImageLayerColourTask *this,CodeRunner *param_1,bool *param_2)

{
  undefined8 *puVar1;
  EImageFormat EVar2;
  ushort uVar3;
  FProgramCache *pFVar4;
  code *pcVar5;
  FImage *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  FOpExecutionData *pFVar13;
  FImage *pFVar14;
  Private *pPVar15;
  atomic<int> *paVar16;
  FCacheAddress *pFVar17;
  byte bVar18;
  FSharedReferencer<1> FVar19;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar20;
  bool bVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auStackY_268 [32];
  bool local_228 [8];
  FCacheAddress local_220;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_218;
  CodeRunner *local_208;
  FCacheAddress local_200;
  FCacheAddress local_1f8;
  FCacheAddress local_1f0;
  FCacheAddress local_1e8;
  FMipmapGenerationSettings local_1e0;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_1d8;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_1c8;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_1b8;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_1a8;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_198;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_188;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_178;
  FImage *local_168;
  FSharedReferencer<1> FStack_160;
  FCacheAddress local_158;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_150;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_138;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_128;
  FImageOperator local_118;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_268;
  bVar21 = -1 < CpuChannel->Enabled;
  local_208 = param_1;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId845,"Mutable_FImageLayerColourTask_Prepare",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x34d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId845);
  }
  *param_2 = false;
  this->ImageCompressionQuality = (param_1->Settings).ImageCompressionQuality;
  local_200.At = (this->Args).base;
  local_200.ExecutionIndex = *(ushort *)&this->field_0x10;
  local_200.ExecutionOptions = this->field_0x12;
  local_200.Type = Full;
  FWorkingMemoryManager::LoadImage
            (&param_1->System->WorkingMemoryManager,&local_218,&local_200,false);
  pFVar6 = local_218.Object;
  if (local_218.Object != (FImage *)0x0) {
    if ((local_218.Object == (FImage *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    if ((ASTC_10x10_RG_LDR < (pFVar6->DataStorage).ImageFormat) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Base || Base->GetFormat() < EImageFormat::Count",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                           ,0x353,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  pPVar15 = param_1->System;
  uVar12 = (this->Args).colour;
  local_220.ExecutionIndex = *(undefined2 *)&this->field_0x10;
  local_220.At = uVar12;
  local_220.ExecutionOptions = '\0';
  local_220.Type = Full;
  if (((pPVar15->WorkingMemoryManager).CurrentInstanceCache.Object == (FProgramCache *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  pFVar4 = (pPVar15->WorkingMemoryManager).CurrentInstanceCache.Object;
  local_158 = local_220;
  uVar22 = ___xmm_3f800000000000000000000000000000;
  uVar23 = _UNK_150689648;
  if ((uVar12 != 0) &&
     (pFVar13 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                          (&pFVar4->OpExecutionData,&local_158),
     uVar22 = ___xmm_3f800000000000000000000000000000, uVar23 = _UNK_150689648,
     pFVar13 != (FOpExecutionData *)0x0)) {
    if ((pFVar13->DataType != Color) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Data->DataType == EDataType::Color",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                           ,0x2d3,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    uVar12 = (pFVar13->field5_0x4).DataTypeIndex;
    uVar11 = 0;
    if ((int)uVar12 < (pFVar4->ColorResults).ArrayNum) {
      uVar11 = ~uVar12 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    puVar1 = (undefined8 *)
             ((pFVar4->ColorResults).AllocatorInstance._padding_ + (longlong)(int)uVar12 * 0x10);
    uVar22 = *puVar1;
    uVar23 = puVar1[1];
  }
  uVar12 = (this->Args).mask;
  *(undefined8 *)&(this->Color).field0_0x0 = uVar22;
  *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8) = uVar23;
  if (uVar12 != 0) {
    local_1f8.ExecutionIndex = *(ushort *)&this->field_0x10;
    local_1f8.ExecutionOptions = this->field_0x12;
    local_1f8.Type = Full;
    local_1f8.At = uVar12;
    FWorkingMemoryManager::LoadImage
              (&param_1->System->WorkingMemoryManager,&local_1d8,&local_1f8,false);
    pTVar20 = &this->Mask;
    if (pTVar20 != &local_1d8) {
      pTVar20->Object = local_1d8.Object;
      local_1d8.Object = (FImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Mask).SharedReferenceCount,&local_1d8.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d8.SharedReferenceCount.ReferenceController);
    if (((pTVar20->Object != (FImage *)0x0) &&
        (ASTC_10x10_RG_LDR < (pTVar20->Object->DataStorage).ImageFormat)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Mask || Mask->GetFormat() < EImageFormat::Count",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                           ,0x359,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  if (pFVar6 == (FImage *)0x0) {
    FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,&this->Mask);
    if (local_218.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar16 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar16 = &(local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar16 = (atomic<int>)((int)*paVar16 + 1);
      UNLOCK();
    }
    local_1f0.At = *(uint *)&this->field_0x8;
    local_1f0.ExecutionIndex = *(ushort *)&this->field_0x10;
    local_1f0.ExecutionOptions = this->field_0x12;
    local_1f0.Type = (byte)this->field_0x13 >> 7;
    pPVar15 = param_1->System;
    local_150.Object = (FImage *)0x0;
    local_150.SharedReferenceCount.ReferenceController =
         local_218.SharedReferenceCount.ReferenceController;
    if (local_218.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar16 = (atomic<int>)((int)*paVar16 + 1);
      UNLOCK();
    }
    pTVar20 = &local_150;
    pFVar17 = &local_1f0;
    FVar19.ReferenceController = local_218.SharedReferenceCount.ReferenceController;
  }
  else {
    if ((pFVar6 == (FImage *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    if (((pFVar6->DataStorage).ImageSize.field0_0x0._s_0.X != 0) &&
       ((pFVar6->DataStorage).ImageSize.field0_0x0._s_0.Y != 0)) {
      EVar2 = (pFVar6->DataStorage).ImageFormat;
      this->InitialFormat = EVar2;
      if ((ASTC_10x10_RG_LDR < EVar2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InitialFormat < EImageFormat::Count",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                             ,0x36e,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (((this->Args).mask != 0) && (pTVar20 = &this->Mask, (this->Mask).Object != (FImage *)0x0))
      {
        MakeImageOperator(&local_118,param_1);
        pFVar14 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar20);
        if (((pFVar14->DataStorage).ImageFormat != L_UByte) && ((this->Args).blendType == '\n')) {
          bVar7 = -1 < CpuChannel->Enabled;
          if (bVar7) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId887,"Mutable_EmergencyFix_Format",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                       ,0x377);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId887);
          }
          pFVar14 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar20);
          bVar18 = (pFVar14->DataStorage).NumLODs;
          pFVar14 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar20);
          uVar3 = (pFVar14->DataStorage).ImageSize.field0_0x0._s_0.Y;
          pFVar14 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar20);
          uVar12 = (uint)bVar18;
          if (uVar12 == 0) {
            uVar12 = 1;
          }
          FWorkingMemoryManager::CreateImage
                    (&local_208->System->WorkingMemoryManager,&local_198,
                     (uint)(pFVar14->DataStorage).ImageSize.field0_0x0._s_0.X,(uint)uVar3,uVar12,
                     L_UByte,NotInitialized);
          FVar19.ReferenceController = local_198.SharedReferenceCount.ReferenceController;
          pFVar14 = local_198.Object;
          local_198.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_198.Object = (FImage *)0x0;
          local_220 = (FCacheAddress)pFVar14;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          local_228[0] = false;
          FImageOperator::ImagePixelFormat
                    (&local_118,local_228,this->ImageCompressionQuality,pFVar14,pTVar20->Object,-1);
          if ((local_228[0] == false) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("bSuccess",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                                 ,0x37c,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          param_1 = local_208;
          FWorkingMemoryManager::Release(&local_208->System->WorkingMemoryManager,pTVar20);
          local_1c8.Object = (FImage *)local_220;
          local_1c8.SharedReferenceCount.ReferenceController = FVar19.ReferenceController;
          if (FVar19.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar19.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (pTVar20 != &local_1c8) {
            pTVar20->Object = (FImage *)local_220;
            local_1c8.Object = (FImage *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->Mask).SharedReferenceCount,&local_1c8.SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1c8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar19.ReferenceController);
          if (bVar7) {
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
        if ((pFVar6 == (FImage *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        pFVar14 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar20);
        if (((pFVar6->DataStorage).ImageSize.field0_0x0._s_0.X !=
             (pFVar14->DataStorage).ImageSize.field0_0x0._s_0.X) ||
           ((pFVar6->DataStorage).ImageSize.field0_0x0._s_0.Y !=
            (pFVar14->DataStorage).ImageSize.field0_0x0._s_0.Y)) {
          bVar7 = -1 < CpuChannel->Enabled;
          if (bVar7) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId900,"Mutable_EmergencyFix_Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                       ,900);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId900);
          }
          pFVar14 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar20);
          EVar2 = (pFVar14->DataStorage).ImageFormat;
          if ((pFVar6 == (FImage *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          FWorkingMemoryManager::CreateImage
                    (&param_1->System->WorkingMemoryManager,&local_188,
                     (uint)(pFVar6->DataStorage).ImageSize.field0_0x0._s_0.X,
                     (uint)(pFVar6->DataStorage).ImageSize.field0_0x0._s_0.Y,1,EVar2,NotInitialized)
          ;
          FVar19.ReferenceController = local_188.SharedReferenceCount.ReferenceController;
          local_220 = (FCacheAddress)local_188.Object;
          local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_188.Object = (FImage *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          FImageOperator::ImageResizeLinear
                    (&local_118,(FImage *)local_220,this->ImageCompressionQuality,pTVar20->Object);
          FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,pTVar20);
          local_1b8.Object = (FImage *)local_220;
          local_1b8.SharedReferenceCount.ReferenceController = FVar19.ReferenceController;
          if (FVar19.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar19.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (pTVar20 != &local_1b8) {
            pTVar20->Object = (FImage *)local_220;
            local_1b8.Object = (FImage *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->Mask).SharedReferenceCount,&local_1b8.SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1b8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar19.ReferenceController);
          if (bVar7) {
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
        pFVar14 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar20);
        bVar18 = (pFVar14->DataStorage).NumLODs;
        if (bVar18 == 0) {
          bVar18 = 1;
        }
        if ((pFVar6 == (FImage *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        bVar10 = (pFVar6->DataStorage).NumLODs;
        if (bVar10 == 0) {
          bVar10 = 1;
        }
        if (bVar18 < bVar10) {
          bVar7 = -1 < CpuChannel->Enabled;
          if (bVar7) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId909,"Mutable_EmergencyFix_LOD",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                       ,0x38d);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId909);
          }
          pFVar14 = TSharedPtr<UE::Mutable::Private::FImage_const_,1>::operator->(pTVar20);
          uVar12 = (uint)(pFVar14->DataStorage).NumLODs;
          if (uVar12 == 0) {
            uVar12 = 1;
          }
          local_220.At = uVar12 - 1;
          uVar12 = (uint)(pFVar6->DataStorage).NumLODs;
          if (uVar12 == 0) {
            uVar12 = 1;
          }
          local_208 = (CodeRunner *)CONCAT44(local_208._4_4_,uVar12);
          FWorkingMemoryManager::CloneOrTakeOver
                    (&param_1->System->WorkingMemoryManager,&local_178,pTVar20);
          FVar19.ReferenceController = local_178.SharedReferenceCount.ReferenceController;
          pFVar6 = local_178.Object;
          local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_178.Object = (FImage *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          if ((pFVar6 == (FImage *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          FImageDataStorage::SetNumLODs(&pFVar6->DataStorage,(int)local_208,NotInitialized);
          local_1e0.FilterType = SimpleAverage;
          local_1e0.AddressMode = None;
          FImageOperator::ImageMipmap
                    (&local_118,this->ImageCompressionQuality,pFVar6,pFVar6,local_220.At,
                     (int)local_208,&local_1e0,false);
          local_1a8.Object = pFVar6;
          local_1a8.SharedReferenceCount.ReferenceController = FVar19.ReferenceController;
          if (FVar19.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar19.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (pTVar20 != &local_1a8) {
            pTVar20->Object = pFVar6;
            local_1a8.Object = (FImage *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->Mask).SharedReferenceCount,&local_1a8.SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1a8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar19.ReferenceController);
          if (bVar7) {
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
        FImageOperator::~FImageOperator(&local_118);
      }
      FWorkingMemoryManager::CloneOrTakeOver
                (&param_1->System->WorkingMemoryManager,&local_138,&local_218);
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
      bVar7 = true;
      goto LAB_14aae1905;
    }
    FWorkingMemoryManager::Release(&param_1->System->WorkingMemoryManager,&this->Mask);
    if (local_218.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar16 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar16 = &(local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar16 = (atomic<int>)((int)*paVar16 + 1);
      UNLOCK();
    }
    local_1e8.At = *(uint *)&this->field_0x8;
    local_1e8.ExecutionIndex = *(ushort *)&this->field_0x10;
    local_1e8.ExecutionOptions = this->field_0x12;
    local_1e8.Type = (byte)this->field_0x13 >> 7;
    pPVar15 = param_1->System;
    local_128.Object = local_218.Object;
    local_128.SharedReferenceCount.ReferenceController =
         local_218.SharedReferenceCount.ReferenceController;
    if (local_218.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar16 = (atomic<int>)((int)*paVar16 + 1);
      UNLOCK();
    }
    pTVar20 = &local_128;
    pFVar17 = &local_1e8;
    FVar19.ReferenceController = local_218.SharedReferenceCount.ReferenceController;
  }
  FWorkingMemoryManager::StoreImage(&pPVar15->WorkingMemoryManager,pFVar17,pTVar20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
  bVar7 = false;
  local_218.SharedReferenceCount.ReferenceController = FVar19.ReferenceController;
LAB_14aae1905:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_218.SharedReferenceCount.ReferenceController);
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar7;
}

