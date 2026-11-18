// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// FViewIdentity @ 145cd2190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FViewIdentity * __thiscall
RHIValidation::FViewIdentity::FViewIdentity
          (FViewIdentity *this,FRHIViewableResource *param_1,FRHIViewDesc *param_2)

{
  EViewType EVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  FViewIdentity *pFVar8;
  FRHIViewableResource *pFVar9;
  undefined4 uVar10;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_77 [7];
  FViewInfo local_70;
  FViewInfo local_60;
  FViewInfo local_50;
  FViewInfo local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar10 = 0;
  this->Stride = 0;
  EVar1 = (param_2->field0_0x0).Common.ViewType;
  if ((EVar1 == BufferSRV) || (EVar1 == BufferUAV)) {
    pFVar9 = param_1 + 1;
    if (param_1 == (FRHIViewableResource *)0x0) {
      pFVar9 = (FRHIViewableResource *)0x0;
    }
    this->_padding_ = (longlong)pFVar9;
    EVar1 = (param_2->field0_0x0).Common.ViewType;
    if ((EVar1 == BufferSRV) || (EVar1 == TextureSRV)) {
      FRHIViewDesc::FBufferSRV::GetViewInfo((FBufferSRV *)param_2,&local_50,(FRHIBuffer *)param_1);
      if ((local_50._18_1_ != '\0') &&
         (bVar6 = `RHIValidation::FViewIdentity::FViewIdentity'::__l14::<lambda_2>::operator()
                            (local_77), !bVar6)) {
        return this;
      }
      puVar4 = (undefined4 *)this->_padding_;
      uVar10 = *puVar4;
      uVar2 = puVar4[1];
      uVar3 = puVar4[2];
      *(undefined4 *)&this->_padding_ = 0;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar10;
      *(undefined4 *)&this->_padding_ = 0;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar2;
      *(undefined4 *)&this->_padding_ = 0;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar3;
      local_38._padding_._4_4_ = local_50._4_4_;
    }
    else {
      FRHIViewDesc::FBufferUAV::GetViewInfo((FBufferUAV *)param_2,&local_38,(FRHIBuffer *)param_1);
      if ((local_38._padding_._2_1_ != '\0') &&
         (bVar6 = `RHIValidation::FViewIdentity::FViewIdentity'::__l9::<lambda_1>::operator()
                            (&local_78), !bVar6)) {
        return this;
      }
      puVar4 = (undefined4 *)this->_padding_;
      uVar10 = *puVar4;
      uVar2 = puVar4[1];
      uVar3 = puVar4[2];
      *(undefined4 *)&this->_padding_ = 0;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar10;
      *(undefined4 *)&this->_padding_ = 0;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar2;
      *(undefined4 *)&this->_padding_ = 0;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar3;
    }
  }
  else {
    lVar7 = (**(code **)(param_1[1]._padding_ + 8))(param_1 + 1);
    this->_padding_ = lVar7;
    EVar1 = (param_2->field0_0x0).Common.ViewType;
    if ((EVar1 != BufferSRV) && (EVar1 != TextureSRV)) {
      FRHIViewDesc::FTextureUAV::GetViewInfo
                ((FTextureUAV *)param_2,&local_70,(FRHITexture *)param_1);
      *(uint *)&this->_padding_ = (uint)local_70.MipLevel;
      *(uint *)&this->_padding_ = (uint)(ushort)local_70._0_2_;
      *(uint *)((longlong)&this->_padding_ + 4) = (uint)(ushort)local_70._2_2_;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
      switch(local_70._4_1_) {
      case (BADTYPE)0x0:
      case (BADTYPE)0x1:
      case (BADTYPE)0x2:
      case (BADTYPE)0x4:
      case (BADTYPE)0x5:
      case (BADTYPE)0x6:
        break;
      case (BADTYPE)0x3:
        uVar10 = 1;
        break;
      default:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                           ,0x108,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FViewIdentity *)(*pcVar5)();
          return pFVar8;
        }
      }
      *(undefined4 *)&this->_padding_ = uVar10;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
      this->Stride = GPixelFormats[(byte)local_70._5_1_].BlockBytes;
      return this;
    }
    FRHIViewDesc::FTextureSRV::GetViewInfo((FTextureSRV *)param_2,&local_60,(FRHITexture *)param_1);
    *(uint *)&this->_padding_ = (uint)local_60.MipRange.First;
    *(uint *)((longlong)&this->_padding_ + 4) = (uint)local_60.MipRange.Num;
    *(uint *)&this->_padding_ = (uint)(ushort)local_60._0_2_;
    *(uint *)((longlong)&this->_padding_ + 4) = (uint)(ushort)local_60._2_2_;
    switch(local_60._4_1_) {
    case (BADTYPE)0x0:
    case (BADTYPE)0x1:
    case (BADTYPE)0x2:
    case (BADTYPE)0x4:
    case (BADTYPE)0x5:
    case (BADTYPE)0x6:
      break;
    case (BADTYPE)0x3:
      uVar10 = 1;
      break;
    default:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                         ,0x108,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FViewIdentity *)(*pcVar5)();
        return pFVar8;
      }
    }
    *(undefined4 *)&this->_padding_ = uVar10;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
    local_38._padding_._4_4_ = GPixelFormats[(byte)local_60._5_1_].BlockBytes;
  }
  this->Stride = local_38._padding_._4_4_;
  return this;
}

// operator() @ 1504dafa0

bool __thiscall
`RHIValidation::FViewIdentity::FViewIdentity'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6018585595129889007>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6018585595129889007>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504db0c0

bool __thiscall
`RHIValidation::FViewIdentity::FViewIdentity'::__l14::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6018585595129889016>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6018585595129889016>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

