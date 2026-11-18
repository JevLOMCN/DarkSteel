// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// FNiagaraGrid2DLegacyTiled2DInfo @ 149169780

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraGrid2DLegacyTiled2DInfo * __thiscall
FNiagaraGrid2DLegacyTiled2DInfo::FNiagaraGrid2DLegacyTiled2DInfo
          (FNiagaraGrid2DLegacyTiled2DInfo *this,TIntPoint<int> *param_1,int param_2)

{
  TIntPoint<int>_u_0_s_0 TVar1;
  int iVar2;
  int iVar3;
  
  this->NumAttributes = param_2;
  this->bIsValid = false;
  TVar1 = (param_1->field0_0x0)._s_0;
  (this->NumCells).field0_0x0._s_0 = TVar1;
  (this->NumTiles).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->Size).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  iVar3 = GRHIGlobals.MaxTextureDimensions.Value / TVar1.X;
  if (param_2 <= (GRHIGlobals.MaxTextureDimensions.Value / TVar1.Y) * iVar3) {
    this->bIsValid = true;
    if (param_2 <= iVar3) {
      iVar3 = param_2;
    }
    (this->NumTiles).field0_0x0._s_0.X = iVar3;
    iVar2 = (param_2 + -1 + iVar3) / iVar3;
    (this->Size).field0_0x0._s_0.X = TVar1.X * iVar3;
    (this->NumTiles).field0_0x0._s_0.Y = iVar2;
    (this->Size).field0_0x0._s_0.Y = iVar2 * TVar1.Y;
  }
  return this;
}

// CopyTo2D @ 1491735e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraGrid2DLegacyTiled2DInfo::CopyTo2D
          (FNiagaraGrid2DLegacyTiled2DInfo *this,FRHICommandList *param_1,FRHITexture *param_2,
          FRHITexture *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  undefined1 local_res18 [8];
  longlong local_res20;
  TIntVector3<int>_u_0 local_178;
  undefined8 local_16c;
  int local_164;
  int local_160;
  int local_15c;
  undefined4 local_158;
  int local_154;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined4 local_140;
  FRHITransitionInfo local_138;
  undefined4 local_108;
  undefined2 local_104;
  FRHITexture *local_100;
  undefined1 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined1 local_e0;
  FRHITransitionInfo local_d8;
  undefined4 local_a8;
  undefined2 local_a4;
  FRHITexture *local_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined1 local_80;
  FRHITransitionInfo *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  FRHITransitionInfo *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  TArrayView<FRHITransitionInfo_const_,int> local_58;
  TArrayView<FRHITransitionInfo_const_,int> local_48;
  
  if (((param_2 == (FRHITexture *)0x0) || (param_3 == (FRHITexture *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src != nullptr && Dst != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollection.cpp"
                         ,0xf7,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar4 = (**(code **)(param_3->_padding_ + 0x20))(param_3);
  if ((*(char *)(lVar4 + 0x32) == '\0') &&
     (local_res20 = lVar4,
     local_138.Flags =
          `FNiagaraGrid2DLegacyTiled2DInfo::CopyTo2D'::__l10::<lambda_1>::operator()(&local_res20),
     !(bool)local_138.Flags)) {
    local_78 = &local_138;
    uStack_70 = 2;
    local_58._12_4_ = uStack_6c;
    local_58.ArrayNum = 2;
    local_138._padding_._0_4_ = 0xffffffff;
    local_138._padding_._4_2_ = 0xffff;
    local_138.Type = Texture;
    local_138.AccessBefore = SRVMask;
    local_138.AccessAfter = CopySrc;
    local_108 = 0xffffffff;
    local_104 = 0xffff;
    local_f8 = 1;
    local_f4 = 0x70;
    local_f0 = 0x2000;
    local_138.field1_0x8.Texture = param_2;
    local_138.CommitInfo.bIsSet = (bool)local_138.Flags;
    local_100 = param_3;
    local_ec = local_138.Flags;
    local_e0 = local_138.Flags;
    local_58.DataPtr = local_78;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_58,None);
    iVar5 = 0;
    if (0 < this->NumAttributes) {
      do {
        local_178._s_0.X = (this->NumCells).field0_0x0._s_0.X;
        local_178._s_0.Y = (this->NumCells).field0_0x0._s_0.Y;
        local_164 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
        local_16c = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
        iVar1 = (this->NumTiles).field0_0x0._s_0.X;
        local_150 = 0;
        local_160 = local_178._s_0.X * (iVar5 % iVar1);
        local_15c = local_178._s_0.Y * (iVar5 / iVar1);
        local_14c = 1;
        local_144 = 0;
        local_140 = 1;
        local_178._s_0.Z = 1;
        local_158 = 0;
        local_154 = iVar5;
        if (((local_160 + local_178._s_0.X <= *(int *)(lVar4 + 0x24)) &&
            (local_178._s_0.Y + local_15c <= *(int *)(lVar4 + 0x28))) ||
           (bVar3 = `FNiagaraGrid2DLegacyTiled2DInfo::CopyTo2D'::__l15::<lambda_2>::operator()
                              (local_res18), bVar3)) {
          FRHICommandList::CopyTexture
                    (param_1,param_2,param_3,(FRHICopyTextureInfo *)&local_178._s_0);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < this->NumAttributes);
    }
    local_68 = &local_d8;
    uStack_60 = 2;
    local_48._12_4_ = uStack_5c;
    local_48.ArrayNum = 2;
    local_d8._padding_._0_4_ = 0xffffffff;
    local_d8._padding_._4_2_ = 0xffff;
    local_d8.Type = Texture;
    local_d8.AccessBefore = CopySrc;
    local_d8.AccessAfter = SRVMask;
    local_d8.Flags = None;
    local_d8.CommitInfo.bIsSet = false;
    local_a8 = 0xffffffff;
    local_a4 = 0xffff;
    local_98 = 1;
    local_94 = 0x2000;
    local_90 = 0x70;
    local_8c = 0;
    local_80 = 0;
    local_d8.field1_0x8.Texture = param_2;
    local_a0 = param_3;
    local_48.DataPtr = local_68;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_48,None);
  }
  return;
}

// operator() @ 15053e410

bool __thiscall
`FNiagaraGrid2DLegacyTiled2DInfo::CopyTo2D'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8350456814826946343>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8350456814826946343>,
                       &`public:___cdecl_`public:_void___cdecl_FNiagaraGrid2DLegacyTiled2DInfo::CopyTo2D(FRDGBuilder&___ptr64,FRDGTexture*___ptr64,FRHITexture*___ptr64,wchar_t_const*___ptr64)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15053e460

bool __thiscall
`FNiagaraGrid2DLegacyTiled2DInfo::CopyTo2D'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8350456814826946310>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8350456814826946310>,
                       &`public:___cdecl_`public:_void___cdecl_FNiagaraGrid2DLegacyTiled2DInfo::CopyTo2D(FRHICommandList&___ptr64,FRHITexture*___ptr64,FRHITexture*___ptr64)const___ptr64'::`10'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15053e4b0

bool __thiscall
`FNiagaraGrid2DLegacyTiled2DInfo::CopyTo2D'::__l11::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8350456814826946322>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8350456814826946322>,
                       &`public:___cdecl_`public:_void___cdecl_FNiagaraGrid2DLegacyTiled2DInfo::CopyTo2D(FRDGBuilder&___ptr64,FRDGTexture*___ptr64,FRHITexture*___ptr64,wchar_t_const*___ptr64)const___ptr64'::`11'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15053e4f0

bool __thiscall
`FNiagaraGrid2DLegacyTiled2DInfo::CopyTo2D'::__l15::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8350456814826946289>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8350456814826946289>,
                       &`public:___cdecl_`public:_void___cdecl_FNiagaraGrid2DLegacyTiled2DInfo::CopyTo2D(FRHICommandList&___ptr64,FRHITexture*___ptr64,FRHITexture*___ptr64)const___ptr64'::`15'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

