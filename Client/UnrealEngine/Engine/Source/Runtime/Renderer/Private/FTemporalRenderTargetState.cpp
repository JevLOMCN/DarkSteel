// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// GetGPUSizeBytes @ 1454f6980

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FTemporalRenderTargetState::GetGPUSizeBytes(FTemporalRenderTargetState *this,bool param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  uint uVar4;
  TRefCountPtr<IPooledRenderTarget> *pTVar5;
  
  uVar3 = 0;
  pTVar5 = this->RenderTargets;
  uVar4 = 0;
  do {
    if (pTVar5->Reference == (IPooledRenderTarget *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar1 = (**(code **)(pTVar5->Reference->_padding_ + 0x18))();
      uVar2 = (ulonglong)uVar1;
    }
    if (((param_1) && ((int)uVar2 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
      (**(code **)(pTVar5->Reference->_padding_ + 0x10))();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
    uVar4 = uVar4 + 1;
    uVar3 = uVar3 + uVar2;
    pTVar5 = pTVar5 + 1;
  } while (uVar4 < 2);
  return uVar3;
}

// FTemporalRenderTargetState @ 145859220

FTemporalRenderTargetState * __thiscall
FTemporalRenderTargetState::FTemporalRenderTargetState(FTemporalRenderTargetState *this)

{
  this->CurrentRT = 1;
  this->FrameId = 0;
  this->bFirstTimeUsed = true;
  this->bHistoryValid = false;
  (this->Resolution).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  this->Format = PF_MAX;
  this->RenderTargets[0].Reference = (IPooledRenderTarget *)0x0;
  this->RenderTargets[1].Reference = (IPooledRenderTarget *)0x0;
  return this;
}

// ~FTemporalRenderTargetState @ 145859b20

void __thiscall
FTemporalRenderTargetState::~FTemporalRenderTargetState(FTemporalRenderTargetState *this)

{
  IPooledRenderTarget *pIVar1;
  longlong lVar2;
  FTemporalRenderTargetState *pFVar3;
  
  pFVar3 = this + 1;
  lVar2 = 2;
  do {
    pIVar1 = pFVar3[-1].RenderTargets[1].Reference;
    pFVar3 = (FTemporalRenderTargetState *)(pFVar3[-1].RenderTargets + 1);
    lVar2 = lVar2 + -1;
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar1->_padding_ + 0x38))();
    }
  } while (lVar2 != 0);
  return;
}

// ExtractCurrentRT @ 145870050

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTemporalRenderTargetState::ExtractCurrentRT
          (FTemporalRenderTargetState *this,FRDGBuilder *param_1,FRDGTexture *param_2)

{
  IPooledRenderTarget *pIVar1;
  IPooledRenderTarget *pIVar2;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<IPooledRenderTarget> *pTVar5;
  
  if (((this->Resolution).field0_0x0._s_0.X < 1) || ((this->Resolution).field0_0x0._s_0.Y < 1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resolution.X > 0 && Resolution.Y > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VolumetricRenderTarget.cpp"
                       ,0x553,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar5 = FRDGBuilder::ConvertToExternalTexture(param_1,param_2);
  pIVar1 = pTVar5->Reference;
  pIVar2 = this->RenderTargets[this->CurrentRT].Reference;
  if (pIVar2 != pIVar1) {
    this->RenderTargets[this->CurrentRT].Reference = pIVar1;
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar1->_padding_ + 0x30))();
    }
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x38))(pIVar2);
    }
  }
  return;
}

// GetOrCreateCurrentRT @ 1458717d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FTemporalRenderTargetState::GetOrCreateCurrentRT
          (FTemporalRenderTargetState *this,FRDGBuilder *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGTexture *pFVar3;
  undefined1 auStack_98 [32];
  int local_78;
  int iStack_74;
  undefined1 local_68 [44];
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  EPixelFormat local_35;
  undefined2 local_34;
  void *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if ((((this->Resolution).field0_0x0._s_0.X < 1) || ((this->Resolution).field0_0x0._s_0.Y < 1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resolution.X > 0 && Resolution.Y > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VolumetricRenderTarget.cpp"
                         ,0x545,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRDGTexture *)(*pcVar1)();
    return pFVar3;
  }
  if (this->RenderTargets[this->CurrentRT].Reference == (IPooledRenderTarget *)0x0) {
    local_68._36_8_ = (this->Resolution).field0_0x0._s_0;
    local_78 = (int)local_68._36_8_;
    iStack_74 = SUB84(local_68._36_8_,4);
    local_68._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_68._8_8_ = 1;
    local_35 = this->Format;
    local_68._32_4_ = 0;
    local_36 = 0;
    local_28 = (void *)0x0;
    local_20 = 0;
    local_1c = 1;
    local_68._0_8_ = 0x20009;
    local_68._16_8_ = 0;
    local_68._24_4_ = 0x3f800000;
    local_3c = 0x10001;
    local_38 = 0x101;
    local_34 = 0xff00;
    pFVar3 = FRDGBuilder::CreateTexture
                       (param_1,(FRDGTextureDesc *)local_68,
                        L"VolumetricRenderTarget.GeneralTemporalTexture",None);
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else {
    pFVar3 = FRDGBuilder::RegisterExternalTexture
                       (param_1,this->RenderTargets + this->CurrentRT,None);
  }
  return pFVar3;
}

// GetOrCreatePreviousRT @ 145871dd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FTemporalRenderTargetState::GetOrCreatePreviousRT
          (FTemporalRenderTargetState *this,FRDGBuilder *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRDGTexture *pFVar4;
  
  if (((this->Resolution).field0_0x0._s_0.X < 1) || ((this->Resolution).field0_0x0._s_0.Y < 1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resolution.X > 0 && Resolution.Y > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VolumetricRenderTarget.cpp"
                       ,0x55a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGTexture *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 1 - this->CurrentRT;
  if (this->RenderTargets[uVar3].Reference == (IPooledRenderTarget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderTargets[PreviousRT].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VolumetricRenderTarget.cpp"
                       ,0x55c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGTexture *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar4 = FRDGBuilder::RegisterExternalTexture(param_1,this->RenderTargets + uVar3,None);
  return pFVar4;
}

// Initialise @ 14587dba0

void __thiscall
FTemporalRenderTargetState::Initialise
          (FTemporalRenderTargetState *this,TIntPoint<int> *param_1,EPixelFormat param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  IPooledRenderTarget *pIVar4;
  longlong lVar5;
  
  if (this->bFirstTimeUsed != false) {
    this->bFirstTimeUsed = false;
    this->bHistoryValid = false;
    this->FrameId = 0;
  }
  uVar1 = this->CurrentRT;
  this->CurrentRT = 1 - uVar1;
  pIVar4 = this->RenderTargets[0].Reference;
  iVar2 = (param_1->field0_0x0)._s_0.X;
  iVar3 = (param_1->field0_0x0)._s_0.Y;
  if (pIVar4 != (IPooledRenderTarget *)0x0) {
    lVar5 = (**(code **)(pIVar4->_padding_ + 0x10))();
    if (((((*(int *)(lVar5 + 0x2c) != iVar2) || (*(int *)(lVar5 + 0x30) != iVar3)) ||
         (*(short *)(lVar5 + 0x34) != 0)) || (this->Format != param_2)) &&
       (pIVar4 = this->RenderTargets[0].Reference, pIVar4 != (IPooledRenderTarget *)0x0)) {
      this->RenderTargets[0].Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar4->_padding_ + 0x38))();
    }
  }
  pIVar4 = this->RenderTargets[1].Reference;
  if (pIVar4 != (IPooledRenderTarget *)0x0) {
    lVar5 = (**(code **)(pIVar4->_padding_ + 0x10))();
    if ((((*(int *)(lVar5 + 0x2c) != iVar2) || (*(int *)(lVar5 + 0x30) != iVar3)) ||
        ((*(short *)(lVar5 + 0x34) != 0 || (this->Format != param_2)))) &&
       (pIVar4 = this->RenderTargets[1].Reference, pIVar4 != (IPooledRenderTarget *)0x0)) {
      this->RenderTargets[1].Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar4->_padding_ + 0x38))();
    }
  }
  (this->Resolution).field0_0x0 = param_1->field0_0x0;
  this->Format = param_2;
  this->bHistoryValid = this->RenderTargets[uVar1].Reference != (IPooledRenderTarget *)0x0;
  return;
}

// Reset @ 145887960

void __thiscall FTemporalRenderTargetState::Reset(FTemporalRenderTargetState *this)

{
  IPooledRenderTarget *pIVar1;
  TRefCountPtr<IPooledRenderTarget> *pTVar2;
  longlong lVar3;
  
  this->bFirstTimeUsed = false;
  this->bHistoryValid = false;
  this->FrameId = 0;
  pTVar2 = this->RenderTargets;
  lVar3 = 2;
  do {
    pIVar1 = pTVar2->Reference;
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      pTVar2->Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar1->_padding_ + 0x38))();
    }
    pTVar2 = pTVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  (this->Resolution).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  this->Format = PF_MAX;
  return;
}

