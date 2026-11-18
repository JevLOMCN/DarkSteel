// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 2

// FD3D11BoundShaderState @ 14596b300

/* WARNING: Enum "Type": Some values do not have unique names */

FD3D11BoundShaderState * __thiscall
FD3D11BoundShaderState::FD3D11BoundShaderState
          (FD3D11BoundShaderState *this,FRHIVertexDeclaration *param_1,FRHIVertexShader *param_2,
          FRHIPixelShader *param_3,FRHIGeometryShader *param_4,ID3D11Device *param_5)

{
  TRefCountPtr<ID3D11InputLayout> *pTVar1;
  TRefCountPtr<ID3D11PixelShader> *pTVar2;
  TRefCountPtr<ID3D11GeometryShader> *pTVar3;
  uint uVar4;
  FName FVar5;
  ID3D11InputLayout *pIVar6;
  ID3D11VertexShader *pIVar7;
  ID3D11VertexShader *pIVar8;
  ID3D11PixelShader *pIVar9;
  ID3D11GeometryShader *pIVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  FRHIVertexShader *pFVar21;
  FRHIPixelShader *pFVar22;
  bool bVar23;
  undefined1 uVar24;
  uint uVar25;
  int iVar26;
  FName *pFVar27;
  FThreadSafeStaticStat<FStat_STAT_D3D11NumBoundShaderState> FVar28;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FD3D11BoundShaderState *pFVar29;
  ID3D11PixelShader *pIVar30;
  ID3D11GeometryShader *pIVar31;
  FRHIVertexDeclaration *pFVar32;
  ID3D11PixelShader **ppIVar33;
  ID3D11GeometryShader **ppIVar34;
  ID3D11PixelShader *pIVar35;
  ID3D11GeometryShader *pIVar36;
  FName local_res8;
  ulonglong local_res10;
  FRHIVertexShader *local_res18;
  FRHIPixelShader *local_res20;
  ID3D11PixelShader *local_d8;
  ID3D11PixelShader *local_d0;
  ID3D11GeometryShader *local_c8;
  ID3D11GeometryShader *local_c0;
  uchar *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  code *local_a8;
  FStatMessage local_a0;
  FShaderCodeReader local_88;
  FName local_78;
  FRHIVertexDeclaration local_70;
  undefined8 uStack_58;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  local_res18 = param_2;
  local_res20 = param_3;
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_BoundShaderState);
  this->_padding_ = (longlong)&___7FD3D11BoundShaderState__6B_;
  FCachedBoundShaderStateLink::FCachedBoundShaderStateLink
            (&this->CacheLink,param_1,param_2,param_3,param_4,(FRHIBoundShaderState *)this,true);
  pTVar1 = &this->InputLayout;
  (this->VertexShader).Reference = (ID3D11VertexShader *)0x0;
  pTVar1->Reference = (ID3D11InputLayout *)0x0;
  (this->PixelShader).Reference = (ID3D11PixelShader *)0x0;
  (this->GeometryShader).Reference = (ID3D11GeometryShader *)0x0;
  FVar28 = StatPtr_STAT_D3D11NumBoundShaderState;
  if (StatPtr_STAT_D3D11NumBoundShaderState ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11NumBoundShaderState>)0x0) {
    pFVar27 = ::FName::FName(&local_78,"STAT_D3D11NumBoundShaderState");
    FVar28 = (FThreadSafeStaticStat<FStat_STAT_D3D11NumBoundShaderState>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11NumBoundShaderState,*pFVar27
                        ,L"Num Bound Shader State","STATGROUP_D3D11RHI","STATCAT_Advanced",
                        L"D3D11RHI",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar5 = *(FName *)FVar28;
  bVar13 = true;
  bVar12 = false;
  local_res8 = FVar5;
  if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_a0.NameAndInfo.Number = FVar5.Number & 0xffffafff | 0xa000;
    local_a0.StatData.Pad[0] = '\x01';
    local_a0.StatData.Pad[1] = '\0';
    local_a0.StatData.Pad[2] = '\0';
    local_a0.StatData.Pad[3] = '\0';
    local_a0.StatData.Pad[4] = '\0';
    local_a0.StatData.Pad[5] = '\0';
    local_a0.StatData.Pad[6] = '\0';
    local_a0.StatData.Pad[7] = '\0';
    local_res8 = FVar5;
    local_a0.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_a0);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  pFVar21 = local_res18;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_70._16_8_ = 0;
  uStack_58 = 0;
  local_b8 = *(uchar **)&local_res18[1].field_0x20;
  iVar26 = *(int *)&local_res18[1].field_0x28;
  if ((iVar26 < 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar23)) {
    pcVar11 = (code *)swi(3);
    pFVar29 = (FD3D11BoundShaderState *)(*pcVar11)();
    return pFVar29;
  }
  local_88.ShaderCode._12_4_ = uStack_ac;
  local_88.ShaderCode.ArrayNum = iVar26;
  local_88.ShaderCode.DataPtr = local_b8;
  iStack_b0 = iVar26;
  if ((iVar26 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("ShaderCode.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                          ,0x3de,L""), bVar23)) {
    pcVar11 = (code *)swi(3);
    pFVar29 = (FD3D11BoundShaderState *)(*pcVar11)();
    return pFVar29;
  }
  if (param_1 == (FRHIVertexDeclaration *)0x0) {
    pIVar6 = pTVar1->Reference;
    if (pIVar6 != (ID3D11InputLayout *)0x0) {
      pTVar1->Reference = (ID3D11InputLayout *)0x0;
      (**(code **)((longlong)*pIVar6 + 0x10))();
    }
  }
  else {
    uVar14 = *(undefined2 *)&param_1[0x18].field_0x2;
    uVar15 = *(undefined2 *)&param_1[0x18].field_0x4;
    uVar16 = *(undefined2 *)&param_1[0x18].field_0x6;
    uVar17 = *(undefined2 *)&param_1[0x18].field_0x8;
    uVar18 = *(undefined2 *)&param_1[0x18].field_0xa;
    uVar19 = *(undefined2 *)&param_1[0x18].field_0xc;
    uVar20 = *(undefined2 *)&param_1[0x18].field_0xe;
    this->StreamStrides[0] = *(undefined2 *)&param_1[0x18].field_0x0;
    this->StreamStrides[1] = uVar14;
    this->StreamStrides[2] = uVar15;
    this->StreamStrides[3] = uVar16;
    this->StreamStrides[4] = uVar17;
    this->StreamStrides[5] = uVar18;
    this->StreamStrides[6] = uVar19;
    this->StreamStrides[7] = uVar20;
    uVar14 = *(undefined2 *)&param_1[0x18].field_0x12;
    uVar15 = *(undefined2 *)&param_1[0x18].field_0x14;
    uVar16 = *(undefined2 *)&param_1[0x18].field_0x16;
    uVar17 = *(undefined2 *)&param_1[0x19].field_0x0;
    uVar18 = *(undefined2 *)&param_1[0x19].field_0x2;
    uVar19 = *(undefined2 *)&param_1[0x19].field_0x4;
    uVar20 = *(undefined2 *)&param_1[0x19].field_0x6;
    this->StreamStrides[8] = *(undefined2 *)&param_1[0x18].field_0x10;
    this->StreamStrides[9] = uVar14;
    this->StreamStrides[10] = uVar15;
    this->StreamStrides[0xb] = uVar16;
    this->StreamStrides[0xc] = uVar17;
    this->StreamStrides[0xd] = uVar18;
    this->StreamStrides[0xe] = uVar19;
    this->StreamStrides[0xf] = uVar20;
    this->StreamStrides[0x10] = *(ushort *)&param_1[0x19].field_0x8;
    pIVar6 = pTVar1->Reference;
    local_a8 = *(code **)((longlong)*param_5 + 0x58);
    if (pIVar6 != (ID3D11InputLayout *)0x0) {
      pTVar1->Reference = (ID3D11InputLayout *)0x0;
      (**(code **)((longlong)*pIVar6 + 0x10))();
    }
    uVar25 = FShaderCodeReader::GetActualShaderCodeSize(&local_88);
    uVar4 = *(uint *)&pFVar21[1].field_0x30;
    local_res10 = (ulonglong)(uVar25 - uVar4);
    uVar25 = 0;
    if ((int)uVar4 < *(int *)&pFVar21[1].field_0x28) {
      uVar25 = ~uVar4 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar11 = (code *)swi(3);
      pFVar29 = (FD3D11BoundShaderState *)(*pcVar11)();
      return pFVar29;
    }
    pFVar32 = &local_70;
    if (*(int *)&param_1[0x17].field_0x10 != 0) {
      pFVar32 = param_1 + 1;
    }
    iVar26 = (*local_a8)(param_5,pFVar32,*(undefined4 *)&param_1[0x17].field_0x10,
                         (longlong)(int)uVar4 + *(longlong *)&pFVar21[1].field_0x20,local_res10,
                         pTVar1);
    if (iVar26 < 0) {
      VerifyD3D11Result(iVar26,
                        "Direct3DDevice->CreateInputLayout( InVertexDeclaration && InVertexDeclaration->VertexElements.Num() ? InVertexDeclaration->VertexElements.GetData() : &NullInputElement, InVertexDeclaration ? InVertexDeclaration->VertexElements.Num() : 0, &InVertexShader->Code[ InVertexShader->Offset ], VertexShaderCode.GetActualShaderCodeSize() - InVertexShader->Offset, InputLayout.GetInitReference() )"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Shaders.cpp"
                        ,0x11c,param_5);
    }
  }
  pIVar7 = *(ID3D11VertexShader **)&pFVar21[1].field_0x18;
  pIVar8 = (this->VertexShader).Reference;
  if (pIVar8 != pIVar7) {
    (this->VertexShader).Reference = pIVar7;
    if (pIVar7 != (ID3D11VertexShader *)0x0) {
      (**(code **)((longlong)*pIVar7 + 8))();
    }
    if (pIVar8 != (ID3D11VertexShader *)0x0) {
      (**(code **)((longlong)*pIVar8 + 0x10))();
    }
  }
  pFVar22 = local_res20;
  if (local_res20 == (FRHIPixelShader *)0x0) {
    ppIVar33 = &local_d0;
    bVar13 = false;
    bVar12 = true;
    local_d0 = (ID3D11PixelShader *)0x0;
    pIVar30 = (ID3D11PixelShader *)0x0;
    pIVar35 = local_d8;
  }
  else {
    pIVar30 = *(ID3D11PixelShader **)&local_res20[1].field_0x18;
    local_d8 = pIVar30;
    if (pIVar30 != (ID3D11PixelShader *)0x0) {
      (**(code **)((longlong)*pIVar30 + 8))(pIVar30);
    }
    ppIVar33 = &local_d8;
    pIVar35 = pIVar30;
  }
  pTVar2 = &this->PixelShader;
  if (pTVar2 != (TRefCountPtr<ID3D11PixelShader> *)ppIVar33) {
    pIVar9 = pTVar2->Reference;
    pTVar2->Reference = pIVar30;
    *ppIVar33 = (ID3D11PixelShader *)0x0;
    pIVar35 = local_d8;
    if (pIVar9 != (ID3D11PixelShader *)0x0) {
      (**(code **)((longlong)*pIVar9 + 0x10))();
      pIVar35 = local_d8;
    }
  }
  if ((bVar12) && (local_d0 != (ID3D11PixelShader *)0x0)) {
    (**(code **)((longlong)*local_d0 + 0x10))();
  }
  if ((bVar13) && (pIVar35 != (ID3D11PixelShader *)0x0)) {
    (**(code **)((longlong)*pIVar35 + 0x10))();
  }
  if (param_4 == (FRHIGeometryShader *)0x0) {
    ppIVar34 = &local_c0;
    bVar13 = false;
    bVar12 = true;
    local_c0 = (ID3D11GeometryShader *)0x0;
    pIVar31 = (ID3D11GeometryShader *)0x0;
    pIVar36 = local_c8;
  }
  else {
    pIVar31 = *(ID3D11GeometryShader **)&param_4[1].field_0x18;
    bVar13 = true;
    bVar12 = false;
    local_c8 = pIVar31;
    if (pIVar31 != (ID3D11GeometryShader *)0x0) {
      (**(code **)((longlong)*pIVar31 + 8))(pIVar31);
    }
    ppIVar34 = &local_c8;
    pIVar36 = pIVar31;
  }
  pTVar3 = &this->GeometryShader;
  if (pTVar3 != (TRefCountPtr<ID3D11GeometryShader> *)ppIVar34) {
    pIVar10 = pTVar3->Reference;
    pTVar3->Reference = pIVar31;
    *ppIVar34 = (ID3D11GeometryShader *)0x0;
    pIVar36 = local_c8;
    if (pIVar10 != (ID3D11GeometryShader *)0x0) {
      (**(code **)((longlong)*pIVar10 + 0x10))();
      pIVar36 = local_c8;
    }
  }
  if ((bVar12) && (local_c0 != (ID3D11GeometryShader *)0x0)) {
    (**(code **)((longlong)*local_c0 + 0x10))();
  }
  if ((bVar13) && (pIVar36 != (ID3D11GeometryShader *)0x0)) {
    (**(code **)((longlong)*pIVar36 + 0x10))(pIVar36);
  }
  this->bShaderNeedsGlobalConstantBuffer[0] = false;
  this->bShaderNeedsGlobalConstantBuffer[1] = false;
  this->bShaderNeedsGlobalConstantBuffer[2] = false;
  this->bShaderNeedsGlobalConstantBuffer[3] = false;
  this->bShaderNeedsGlobalConstantBuffer[4] = false;
  this->bShaderNeedsGlobalConstantBuffer[5] = false;
  this->bShaderNeedsGlobalConstantBuffer[0] = (bool)local_res18[1].field_0x10;
  if (pFVar22 == (FRHIPixelShader *)0x0) {
    uVar24 = false;
  }
  else {
    uVar24 = pFVar22[1].field_0x10;
  }
  this->bShaderNeedsGlobalConstantBuffer[3] = (bool)uVar24;
  if (param_4 == (FRHIGeometryShader *)0x0) {
    this->bShaderNeedsGlobalConstantBuffer[4] = false;
  }
  else {
    this->bShaderNeedsGlobalConstantBuffer[4] = (bool)param_4[1].field_0x10;
  }
  return this;
}

// ~FD3D11BoundShaderState @ 14596e9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D11BoundShaderState::~FD3D11BoundShaderState(FD3D11BoundShaderState *this)

{
  FName FVar1;
  ID3D11GeometryShader *pIVar2;
  ID3D11PixelShader *pIVar3;
  ID3D11VertexShader *pIVar4;
  ID3D11InputLayout *pIVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_D3D11NumBoundShaderState> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_18;
  
  this->_padding_ = (longlong)&___7FD3D11BoundShaderState__6B_;
  FVar7 = StatPtr_STAT_D3D11NumBoundShaderState;
  if (StatPtr_STAT_D3D11NumBoundShaderState ==
      (FThreadSafeStaticStat<FStat_STAT_D3D11NumBoundShaderState>)0x0) {
    pFVar6 = ::FName::FName(&local_res8,"STAT_D3D11NumBoundShaderState");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_D3D11NumBoundShaderState>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11NumBoundShaderState,*pFVar6,
                       L"Num Bound Shader State","STATGROUP_D3D11RHI","STATCAT_Advanced",L"D3D11RHI"
                       ,true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar7;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_18.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_18.StatData.Pad[0] = '\x01';
    local_18.StatData.Pad[1] = '\0';
    local_18.StatData.Pad[2] = '\0';
    local_18.StatData.Pad[3] = '\0';
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_18);
    FStatsTrace::Add(&local_res8,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  pIVar2 = (this->GeometryShader).Reference;
  if (pIVar2 != (ID3D11GeometryShader *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar3 = (this->PixelShader).Reference;
  if (pIVar3 != (ID3D11PixelShader *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar4 = (this->VertexShader).Reference;
  if (pIVar4 != (ID3D11VertexShader *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar5 = (this->InputLayout).Reference;
  if (pIVar5 != (ID3D11InputLayout *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  FCachedBoundShaderStateLink::~FCachedBoundShaderStateLink(&this->CacheLink);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

