// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 8

// ConvertToRenderTargetsInfo @ 145c989f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIRenderPassInfo::ConvertToRenderTargetsInfo
          (FRHIRenderPassInfo *this,FRHISetRenderTargetsInfo *param_1)

{
  undefined8 uVar1;
  ERenderTargetActions EVar2;
  ERenderTargetStoreAction EVar3;
  Type TVar4;
  FRHITexture *pFVar5;
  undefined8 uVar6;
  ERenderTargetLoadAction EVar7;
  ERenderTargetStoreAction EVar8;
  FExclusiveDepthStencil FVar9;
  ERenderTargetActions *pEVar10;
  ERenderTargetLoadAction EVar11;
  int iVar12;
  
  iVar12 = 0;
  pEVar10 = &(this->ColorRenderTargets).Elements[0].Action;
  do {
    if (((FColorEntry *)(pEVar10 + -0x15))->RenderTarget == (FRHITexture *)0x0) break;
    *(FRHITexture **)(pEVar10 + (longlong)param_1 + (-0x15 - (longlong)this)) =
         ((FColorEntry *)(pEVar10 + -0x15))->RenderTarget;
    EVar2 = *pEVar10;
    pEVar10[(longlong)param_1 + (-5 - (longlong)this)] = EVar2 >> 2;
    pEVar10[(longlong)param_1 + (-4 - (longlong)this)] = *pEVar10 & (LoadOpMask|DontLoad_Store);
    *(int *)(pEVar10 + (longlong)param_1 + (-9 - (longlong)this)) = *(int *)(pEVar10 + -5);
    *(uint *)(pEVar10 + (longlong)param_1 + (-0xd - (longlong)this)) = (uint)pEVar10[-1];
    param_1->NumColorRenderTargets = param_1->NumColorRenderTargets + 1;
    param_1->bClearColor = (bool)(param_1->bClearColor | EVar2 >> 2 == LoadOpMask);
    if (*(FRHITexture **)(pEVar10 + -0xd) != (FRHITexture *)0x0) {
      param_1->bHasResolveAttachments = true;
      uVar6 = *(undefined8 *)(pEVar10 + (longlong)param_1 + (-0x15 - (longlong)this) + 8);
      uVar1 = *(undefined8 *)(pEVar10 + (longlong)param_1 + (-5 - (longlong)this));
      *(undefined8 *)(pEVar10 + (longlong)param_1 + (0xb3 - (longlong)this)) =
           *(undefined8 *)(pEVar10 + (longlong)param_1 + (-0x15 - (longlong)this));
      *(undefined8 *)(pEVar10 + (longlong)param_1 + (0xb3 - (longlong)this) + 8) = uVar6;
      *(undefined8 *)(pEVar10 + (longlong)param_1 + (0xc3 - (longlong)this)) = uVar1;
      *(FRHITexture **)(pEVar10 + (longlong)param_1 + (0xb3 - (longlong)this)) =
           *(FRHITexture **)(pEVar10 + -0xd);
    }
    iVar12 = iVar12 + 1;
    pEVar10 = pEVar10 + 0x18;
  } while (iVar12 < 8);
  EVar3 = (this->DepthStencilRenderTarget).Action;
  TVar4 = (this->DepthStencilRenderTarget).ExclusiveDepthStencil.Value;
  (param_1->DepthStencilRenderTarget).Texture = (this->DepthStencilRenderTarget).DepthStencilTarget;
  EVar11 = (EVar3 & 0xf) >> 2;
  (param_1->DepthStencilRenderTarget).DepthLoadAction = EVar3 >> 6;
  (param_1->DepthStencilRenderTarget).DepthStoreAction = EVar3 >> 4 & Num;
  (param_1->DepthStencilRenderTarget).StencilLoadAction = EVar11;
  (param_1->DepthStencilRenderTarget).StencilStoreAction = EVar3 & Num;
  (param_1->DepthStencilRenderTarget).DepthStencilAccess.Value = TVar4;
  param_1->bClearDepth = EVar3 >> 6 == EClear;
  param_1->bClearStencil = EVar11 == EClear;
  pFVar5 = (this->DepthStencilRenderTarget).ResolveTarget;
  if ((pFVar5 != (FRHITexture *)0x0) &&
     (pFVar5 != (this->DepthStencilRenderTarget).DepthStencilTarget)) {
    EVar11 = (param_1->DepthStencilRenderTarget).DepthLoadAction;
    EVar3 = (param_1->DepthStencilRenderTarget).DepthStoreAction;
    EVar7 = (param_1->DepthStencilRenderTarget).StencilLoadAction;
    EVar8 = (param_1->DepthStencilRenderTarget).StencilStoreAction;
    FVar9.Value = (param_1->DepthStencilRenderTarget).DepthStencilAccess.Value;
    (param_1->DepthStencilResolveRenderTarget).Texture = (param_1->DepthStencilRenderTarget).Texture
    ;
    (param_1->DepthStencilResolveRenderTarget).DepthLoadAction = EVar11;
    (param_1->DepthStencilResolveRenderTarget).DepthStoreAction = EVar3;
    (param_1->DepthStencilResolveRenderTarget).StencilLoadAction = EVar7;
    (param_1->DepthStencilResolveRenderTarget).StencilStoreAction = EVar8;
    (param_1->DepthStencilResolveRenderTarget).DepthStencilAccess =
         (FExclusiveDepthStencil)FVar9.Value;
    (param_1->DepthStencilResolveRenderTarget).Texture =
         (this->DepthStencilRenderTarget).ResolveTarget;
  }
  param_1->ShadingRateTexture = (this->ShadingRateTexture).Reference;
  param_1->ShadingRateTextureCombiner = this->ShadingRateTextureCombiner;
  param_1->MultiViewCount = this->MultiViewCount;
  return;
}

// Validate @ 145cc9b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FRHIRenderPassInfo::Validate(FRHIRenderPassInfo *this)

{
  FColorEntry *pFVar1;
  EDepthStencilTargetActions EVar2;
  char cVar3;
  FRHITexture *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_48;
  uint local_44;
  uint *local_40;
  uint *local_38;
  FColorEntry *local_30;
  
  uVar11 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  do {
    pFVar1 = (this->ColorRenderTargets).Elements + uVar11;
    pFVar4 = (this->ColorRenderTargets).Elements[uVar11].RenderTarget;
    if (pFVar4 == (FRHITexture *)0x0) goto LAB_145cc9c60;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x20);
    if (local_48 == 0xffffffff) {
      lVar8 = (*pcVar5)();
      local_48 = (uint)*(byte *)(lVar8 + 0x31);
    }
    else {
      lVar8 = (*pcVar5)();
      if ((*(byte *)(lVar8 + 0x31) != local_48) && (this->SubpassHint != CustomResolveSubpass)) {
        local_38 = &local_48;
        local_30 = pFVar1;
        `FRHIRenderPassInfo::Validate'::__l12::<lambda_1>::operator()(&local_38);
      }
    }
    if ((pFVar1->Action & (LoadOpMask|DontLoad_Store)) == LoadOpMask) {
      lVar8 = (**(code **)(pFVar1->RenderTarget->_padding_ + 0x20))();
      if ((*(byte *)(lVar8 + 0x31) < 2) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3527994116707187193>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                             ,0x607,
                             "Store != ERenderTargetStoreAction::EMultisampleResolve || Entry.RenderTarget->GetNumSamples() > 1"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((pFVar1->ResolveTarget == (FRHITexture *)0x0) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3527994116707187191>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                             ,0x609,
                             "Store != ERenderTargetStoreAction::EMultisampleResolve || Entry.ResolveTarget"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_44 = local_44 + 1;
    uVar11 = (ulonglong)local_44;
  } while ((int)local_44 < 8);
LAB_145cc9c90:
  pFVar4 = (this->DepthStencilRenderTarget).DepthStencilTarget;
  if (pFVar4 == (FRHITexture *)0x0) {
    if (((this->DepthStencilRenderTarget).Action != DontLoad_DontStore) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3527994116707187107>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                           ,0x65d,
                           "DepthStencilRenderTarget.Action == EDepthStencilTargetActions::DontLoad_DontStore"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((this->DepthStencilRenderTarget).ExclusiveDepthStencil.Value != DepthNop) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3527994116707187106>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                           ,0x65e,
                           "DepthStencilRenderTarget.ExclusiveDepthStencil == FExclusiveDepthStencil::DepthNop_StencilNop"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((this->SubpassHint == DepthReadSubpass) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3527994116707187105>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                           ,0x65f,"SubpassHint != ESubpassHint::DepthReadSubpass"), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((this->SubpassHint == CustomResolveSubpass) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3527994116707187104>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                           ,0x660,"SubpassHint != ESubpassHint::CustomResolveSubpass"), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if (((local_48 != 0xffffffff) &&
        (lVar8 = (**(code **)(pFVar4->_padding_ + 0x20))(), *(byte *)(lVar8 + 0x31) != local_48)) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3527994116707187166>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                           ,0x622,
                           "DepthStencilRenderTarget.DepthStencilTarget->GetNumSamples() == NumSamples"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar2 = (this->DepthStencilRenderTarget).Action;
    if (((EVar2 & 0x30) == 0x20) || ((EVar2 & 3) == 2)) {
      bVar6 = true;
      lVar8 = (**(code **)(((this->DepthStencilRenderTarget).DepthStencilTarget)->_padding_ + 0x20))
                        ();
      if ((*(byte *)(lVar8 + 0x31) < 2) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3527994116707187160>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                             ,0x628,
                             "!bIsMSAAResolve || DepthStencilRenderTarget.DepthStencilTarget->GetNumSamples() > 1"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      bVar6 = false;
    }
    (**(code **)(((this->DepthStencilRenderTarget).DepthStencilTarget)->_padding_ + 0x20))();
    if (((this->SubpassHint == DepthReadSubpass) || (this->SubpassHint == CustomResolveSubpass)) &&
       ((puVar9 = (uint *)(**(code **)(((this->DepthStencilRenderTarget).DepthStencilTarget)->
                                       _padding_ + 0x20))(), (*puVar9 >> 9 & 1) == 0 &&
        (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3527994116707187126>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                            ,0x64a,
                            "EnumHasAnyFlags(DepthStencilRenderTarget.DepthStencilTarget->GetFlags(), ETextureCreateFlags::InputAttachmentRead)"
                           ), bVar7)))) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (this->DepthStencilRenderTarget).ResolveTarget;
    if ((pFVar4 != (FRHITexture *)0x0) &&
       (pFVar4 != (this->DepthStencilRenderTarget).DepthStencilTarget)) {
      if (GRHIGlobals.SupportsDepthStencilResolve == false) {
        `FRHIRenderPassInfo::Validate'::__l40::<lambda_3>::operator()(local_res8);
      }
      if (!bVar6) {
        `FRHIRenderPassInfo::Validate'::__l40::<lambda_4>::operator()(local_res10);
      }
      lVar8 = (**(code **)(((this->DepthStencilRenderTarget).ResolveTarget)->_padding_ + 0x20))();
      if (*(char *)(lVar8 + 0x31) != '\x01') {
        `FRHIRenderPassInfo::Validate'::__l40::<lambda_5>::operator()(local_res18);
      }
      lVar8 = (**(code **)(((this->DepthStencilRenderTarget).ResolveTarget)->_padding_ + 0x20))();
      cVar3 = *(char *)(lVar8 + 0x33);
      lVar8 = (**(code **)(((this->DepthStencilRenderTarget).DepthStencilTarget)->_padding_ + 0x20))
                        ();
      if (cVar3 != *(char *)(lVar8 + 0x33)) {
        `FRHIRenderPassInfo::Validate'::__l40::<lambda_6>::operator()(local_res20);
        return;
      }
    }
  }
  return;
LAB_145cc9c60:
  do {
    uVar10 = (uint)uVar11;
    if ((this->ColorRenderTargets).Elements[uVar11].RenderTarget != (FRHITexture *)0x0) {
      local_40 = &local_44;
      `FRHIRenderPassInfo::Validate'::__l19::<lambda_2>::operator()(&local_40);
      uVar10 = local_44;
    }
    local_44 = uVar10 + 1;
    uVar11 = (ulonglong)local_44;
  } while ((int)local_44 < 8);
  goto LAB_145cc9c90;
}

// operator() @ 1504da830

bool __thiscall `FRHIRenderPassInfo::Validate'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3527994116707187198>);
  if (bVar2) {
    (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x20))();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3527994116707187198>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504da890

bool __thiscall `FRHIRenderPassInfo::Validate'::__l19::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3527994116707187174>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3527994116707187174>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504daa40

bool __thiscall `FRHIRenderPassInfo::Validate'::__l40::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3527994116707187116>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3527994116707187116>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504daa80

bool __thiscall `FRHIRenderPassInfo::Validate'::__l40::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3527994116707187115>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3527994116707187115>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504daac0

bool __thiscall `FRHIRenderPassInfo::Validate'::__l40::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3527994116707187114>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3527994116707187114>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504dab00

bool __thiscall `FRHIRenderPassInfo::Validate'::__l40::<lambda_6>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3527994116707187112>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3527994116707187112>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

