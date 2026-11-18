// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 11

// operator() @ 14456cb10

FOutcome __thiscall
`UE::IoStore::HTTP::DetailOne::FBody::Prologue'::__l2::<lambda_1>::operator()
          (void *this,char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 in_register_00000084;
  longlong lVar4;
  int in_R9D;
  longlong lVar5;
  
  lVar4 = CONCAT44(in_register_00000084,param_2);
  iVar3 = 0;
  if (0 < in_R9D) {
    lVar5 = 0;
    do {
      iVar1 = (int)*(char *)(lVar4 + lVar5);
      if (9 < iVar1 - 0x30U && (5 < iVar1 - 0x61U && 5 < iVar1 - 0x41U)) break;
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < in_R9D);
  }
  if (iVar3 < 0x1e) {
    if (iVar3 == 0) {
      pcVar2 = "Invalid chunk header";
    }
    else {
      if (in_R9D - iVar3 < 1) {
LAB_14456cc08:
        param_1[4] = '\0';
        param_1[5] = -0x80;
        param_1[6] = '\x01';
        param_1[7] = '\0';
        param_1[0] = '\0';
        param_1[1] = '\0';
        param_1[2] = '\0';
        param_1[3] = '\0';
        return (FOutcome)(FOutcome_u_0)param_1;
      }
      if (*(char *)(iVar3 + lVar4) == '\r') {
        if (in_R9D - iVar3 < 2) goto LAB_14456cc08;
        if (*(char *)((longlong)iVar3 + 1 + lVar4) == '\n') {
          param_1[4] = '\0';
          param_1[5] = -0x80;
          param_1[6] = '\0';
          param_1[7] = '\0';
          *(int *)param_1 = iVar3 + 2;
          return (FOutcome)(FOutcome_u_0)param_1;
        }
        pcVar2 = "Invalid chunk CRLF";
      }
      else {
        pcVar2 = "Chunk extensions are not supported (ERREXT)";
      }
    }
  }
  else {
    pcVar2 = "Chunk size too large";
  }
  *(ulonglong *)param_1 = *(ulonglong *)param_1 & 0xffff000000000000 ^ (ulonglong)pcVar2;
  param_1[6] = -1;
  param_1[7] = -1;
  return (FOutcome)(FOutcome_u_0)param_1;
}

// Chunk @ 144570020

FOutcome __thiscall
UE::IoStore::HTTP::DetailOne::FBody::Chunk(FBody *this,TMemoryView<void> *param_1,FTlsPeer *param_2)

{
  code *pcVar1;
  bool bVar2;
  FOutcome FVar3;
  undefined4 local_res8;
  int iStackX_c;
  FTlsPeer local_18;
  
  if (this->Remaining == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Remaining != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                       ,0x32c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.field0_0x0 = (FOutcome_u_0)(*pcVar1)();
      return (FOutcome)FVar3.field0_0x0;
    }
  }
  local_18._padding_ = param_2->_padding_;
  local_18.Ssl = (ssl_st *)this->Remaining;
  if (param_2->Ssl < (ssl_st *)this->Remaining) {
    local_18.Ssl = param_2->Ssl;
  }
  param_2->_padding_ = local_18._padding_;
  param_2->Ssl = local_18.Ssl;
  Recv(this,(TMemoryView<void> *)&local_res8,&local_18);
  if (iStackX_c == 0x8000) {
    if (this->Remaining != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Remaining == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                         ,0x335,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar3.field0_0x0 = (FOutcome_u_0)(*pcVar1)();
        return (FOutcome)FVar3.field0_0x0;
      }
    }
    *(undefined2 *)(this->Scratch).Data = 0;
    this->State = Epilogue;
    if ((CONCAT44(iStackX_c,local_res8) & 0xffffffffffff) < 0x800000000000) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsError()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                         ,0x59,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar3.field0_0x0 = (FOutcome_u_0)(*pcVar1)();
        return (FOutcome)FVar3.field0_0x0;
      }
    }
    *(undefined4 *)((longlong)&param_1->Data + 4) = 0x38000;
    *(undefined4 *)&param_1->Data = local_res8;
  }
  else {
    param_1->Data = (void *)CONCAT44(iStackX_c,local_res8);
  }
  return (FOutcome)(FOutcome_u_0)param_1;
}

// Epilogue @ 144572b30

FOutcome __thiscall
UE::IoStore::HTTP::DetailOne::FBody::Epilogue
          (FBody *this,TMemoryView<void> *param_1,FTlsPeer *param_2)

{
  char *pcVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FOutcome FVar5;
  long64 lVar6;
  undefined4 local_res8;
  int iStackX_c;
  char *local_58;
  ssl_st *psStack_50;
  FTlsPeer local_48;
  FTlsPeer local_38;
  
  pcVar1 = (this->Scratch).Data;
  lVar6 = 2;
  psStack_50 = (ssl_st *)&DAT_00000002;
  local_58 = pcVar1;
  if (*pcVar1 != '\0') {
    lVar6 = 1;
    psStack_50 = (ssl_st *)&DAT_00000001;
    local_58 = pcVar1 + 1;
  }
  if (0 < this->Remaining) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Remaining <= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                       ,0x348,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar5.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
      return (FOutcome)FVar5.field0_0x0;
    }
  }
  lVar2 = this->Remaining;
  local_48._padding_ = (longlong)local_58;
  local_48.Ssl = psStack_50;
  this->Remaining = lVar6;
  Recv(this,(TMemoryView<void> *)&local_res8,&local_48);
  if (iStackX_c == 0x8000) {
    if ((*pcVar1 == '\r') && (pcVar1[1] == '\n')) {
      if (lVar2 < 0) {
        *(undefined4 *)((longlong)&param_1->Data + 4) = 0x8000;
        *(undefined4 *)&param_1->Data = 0;
      }
      else {
        local_38._padding_ = param_2->_padding_;
        local_38.Ssl = param_2->Ssl;
        this->State = Prologue;
        Prologue(this,param_1,&local_38);
      }
    }
    else {
      param_1->Data = (void *)((ulonglong)param_1->Data & 0xffff000000000000 ^ 0x150d72a20);
      *(undefined2 *)((longlong)&param_1->Data + 6) = 0xffff;
    }
  }
  else {
    this->Remaining = lVar2;
    param_1->Data = (void *)CONCAT44(iStackX_c,local_res8);
  }
  return (FOutcome)(FOutcome_u_0)param_1;
}

// Gather @ 144573370

FOutcome __thiscall
UE::IoStore::HTTP::DetailOne::FBody::Gather
          (FBody *this,TMemoryView<void> *param_1,FTlsPeer *param_2)

{
  EState EVar1;
  ssl_st *psVar2;
  int iVar3;
  void *pvVar4;
  FOutcome_u_0 FVar5;
  ssl_st *psVar6;
  ssl_st *psVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 local_68 [16];
  FTlsPeer local_58;
  FTlsPeer local_48;
  FTlsPeer local_38;
  
  uVar9 = 0;
  uVar8 = 0x800000000000;
  do {
    EVar1 = this->State;
    if (EVar1 == Prologue) {
      local_38._padding_ = param_2->_padding_;
      local_38.Ssl = param_2->Ssl;
      FVar5._s_0 = (FOutcome_u_0_s_0)Prologue(this,(TMemoryView<void> *)(local_68 + 8),&local_38);
LAB_144573440:
      pvVar4 = *(void **)FVar5;
    }
    else {
      if (EVar1 == Chunk) {
        local_48._padding_ = param_2->_padding_;
        local_48.Ssl = param_2->Ssl;
        FVar5._s_0 = (FOutcome_u_0_s_0)Chunk(this,(TMemoryView<void> *)local_68,&local_48);
        goto LAB_144573440;
      }
      if (EVar1 == Epilogue) {
        local_58._padding_ = param_2->_padding_;
        local_58.Ssl = param_2->Ssl;
        FVar5._s_0 = (FOutcome_u_0_s_0)
                     Epilogue(this,(TMemoryView<void> *)&stack0x00000008,&local_58);
        goto LAB_144573440;
      }
      pvVar4 = (void *)0xffff000150d72890;
    }
    if (((ulonglong)pvVar4 & 0xffffffffffff) < 0x800000000000) {
      param_1->Data = pvVar4;
      return (FOutcome)(FOutcome_u_0)param_1;
    }
    iVar3 = (int)pvVar4;
    if (iVar3 == 0) break;
    uVar9 = uVar9 + iVar3;
    psVar2 = param_2->Ssl;
    psVar6 = (ssl_st *)(longlong)iVar3;
    if (psVar2 < (ssl_st *)(longlong)iVar3) {
      psVar6 = psVar2;
    }
    psVar7 = (ssl_st *)0xffffffffffffffff;
    if (psVar2 + -(longlong)psVar6 != (ssl_st *)0xffffffffffffffff) {
      psVar7 = psVar2 + -(longlong)psVar6;
    }
    param_2->_padding_ = (longlong)(psVar6 + param_2->_padding_);
    param_2->Ssl = psVar7;
  } while (psVar7 != (ssl_st *)0x0);
  if ((int)((ulonglong)pvVar4 >> 0x20) != 0x8000) {
    uVar8 = 0x1800000000000;
  }
  param_1->Data = (void *)(uVar8 | uVar9);
  return (FOutcome)(FOutcome_u_0)param_1;
}

// GetRemaining @ 144574530

long64 __thiscall UE::IoStore::HTTP::DetailOne::FBody::GetRemaining(FBody *this)

{
  if (this->State == Recv) {
    return this->Remaining;
  }
  return -1;
}

// GetRemaining @ 144574550

long64 __thiscall UE::IoStore::HTTP::DetailTwo::FBody::GetRemaining(FBody *this)

{
  return this->Remaining;
}

// Init @ 1445784c0

FOutcome __thiscall
UE::IoStore::HTTP::DetailOne::FBody::Init(FBody *this,TMemoryView<void> *param_1,FTlsPeer *param_2)

{
  code *pcVar1;
  bool bVar2;
  EState EVar3;
  FOutcome FVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  FTlsPeer local_18;
  
  pvVar5 = (void *)((longlong)*(short *)((longlong)&this->_padding_ + 6) + this->_padding_);
  uVar6 = *(uint *)((longlong)&this->_padding_ + 4) & 0x7fffffff;
  uVar7 = (uVar6 - (int)pvVar5) + (int)this->_padding_;
  if (uVar7 < 0x20) {
    uVar6 = uVar6 + 0x20;
    if ((uint)this->_padding_ < uVar6) {
      FBuffer::Extend((FBuffer *)this,uVar6,0x20);
    }
    pvVar5 = (void *)((longlong)*(short *)((longlong)&this->_padding_ + 6) + this->_padding_);
  }
  if (uVar7 != 0) {
    (this->Overspill).Data = pvVar5;
    (this->Overspill).Size = (ulonglong)uVar7;
  }
  (this->Scratch).Data = pvVar5;
  (this->Scratch).Size = 0x20;
  if (*(short *)((longlong)&this->_padding_ + 6) < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MessageRight > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                       ,0x155,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4.field0_0x0 = (FOutcome_u_0)(*pcVar1)();
      return (FOutcome)FVar4.field0_0x0;
    }
  }
  if ((this->_padding_ & 0x20000) == 0) {
    if (*(short *)((longlong)&this->_padding_ + 2) == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offsets.Headers > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                         ,0x14e,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar4.field0_0x0 = (FOutcome_u_0)(*pcVar1)();
        return (FOutcome)FVar4.field0_0x0;
      }
    }
    this->Remaining = this->_padding_;
    if (this->_padding_ < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Remaining > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                         ,0x280,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar4.field0_0x0 = (FOutcome_u_0)(*pcVar1)();
        return (FOutcome)FVar4.field0_0x0;
      }
    }
    EVar3 = Recv;
  }
  else {
    if (this->Remaining != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Remaining == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                         ,0x27a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar4.field0_0x0 = (FOutcome_u_0)(*pcVar1)();
        return (FOutcome)FVar4.field0_0x0;
      }
    }
    EVar3 = Prologue;
  }
  this->State = EVar3;
  local_18._padding_ = param_2->_padding_;
  local_18.Ssl = param_2->Ssl;
  TryRecv(this,param_1,&local_18);
  return (FOutcome)(FOutcome_u_0)param_1;
}

// Prologue @ 14457c5f0

FOutcome __thiscall
UE::IoStore::HTTP::DetailOne::FBody::Prologue
          (FBody *this,TMemoryView<void> *param_1,FTlsPeer *param_2)

{
  void *pvVar1;
  undefined2 *puVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  FOutcome FVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  char *pcVar12;
  int iVar13;
  FTlsPeer *in_R9;
  void *pvVar14;
  char *pcVar15;
  void *pvVar16;
  ulonglong uVar17;
  undefined1 local_res8 [8];
  char local_88 [8];
  char local_80 [8];
  char local_78 [16];
  void *local_68;
  ulong64 uStack_60;
  FTlsPeer local_58;
  FTlsPeer local_48;
  
  uVar11 = (uint)(this->Overspill).Size;
  uVar8 = (ulonglong)uVar11;
  if (uVar11 == 0) {
    local_68 = (this->Scratch).Data;
    uVar8 = (this->Scratch).Size;
    uStack_60 = (this->Scratch).Size;
LAB_14457c73d:
    uVar17 = 0;
    if (uVar8 != 0) {
      FVar6 = FTlsPeer::Recv(in_R9,local_80,(int)local_68);
      pvVar16 = *(void **)FVar6.field0_0x0;
      if ((int)((ulonglong)pvVar16 >> 0x20) != 0x8000) {
        param_1->Data = pvVar16;
        return (FOutcome)(FOutcome_u_0)param_1;
      }
      if ((((ulonglong)pvVar16 & 0xffffffffffff) < 0x800000000000) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsError()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                             ,0x59,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        FVar6.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
        return (FOutcome)FVar6.field0_0x0;
      }
      uVar8 = (this->Scratch).Size;
      uVar17 = (ulonglong)((int)pvVar16 + uVar11);
      local_68 = (this->Scratch).Data;
      uStack_60 = uVar17;
      if (uVar8 < uVar17) {
        uVar17 = uVar8;
        uStack_60 = uVar8;
      }
    }
    pvVar4 = local_68;
    FVar6 = `UE::IoStore::HTTP::DetailOne::FBody::Prologue'::__l2::<lambda_1>::operator()
                      (local_res8,local_78,(int)local_68);
    pvVar1 = *(void **)FVar6.field0_0x0;
    if ((int)((ulonglong)pvVar1 >> 0x20) != 0x8000) {
      param_1->Data = pvVar1;
      return (FOutcome)(FOutcome_u_0)param_1;
    }
    if ((pvVar4 != (this->Scratch).Data) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("View.GetData() == Scratch.GetData()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                           ,0x310,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      FVar6.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
      return (FOutcome)FVar6.field0_0x0;
    }
    pvVar16 = (this->Scratch).Data;
    if ((((ulonglong)pvVar1 & 0xffffffffffff) < 0x800000000000) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsError()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                           ,0x59,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      FVar6.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
      return (FOutcome)FVar6.field0_0x0;
    }
    pvVar14 = (void *)((ulonglong)pvVar1 & 0xffffffff);
    uVar8 = (longlong)(int)pvVar1;
    if (uVar17 < (ulonglong)(longlong)(int)pvVar1) {
      uVar8 = uVar17;
    }
    local_68 = (void *)((longlong)pvVar4 + uVar8);
    uStack_60 = 0xffffffffffffffff;
    if (uVar17 - uVar8 != 0xffffffffffffffff) {
      uStack_60 = uVar17 - uVar8;
    }
    (this->Overspill).Data = local_68;
    (this->Overspill).Size = uStack_60;
  }
  else {
    pvVar16 = (this->Overspill).Data;
    FVar6 = `UE::IoStore::HTTP::DetailOne::FBody::Prologue'::__l2::<lambda_1>::operator()
                      (local_res8,local_88,(int)pvVar16);
    pvVar14 = *(void **)FVar6.field0_0x0;
    if (((ulonglong)pvVar14 & 0xffffffffffff) < 0x800000000000) {
      param_1->Data = pvVar14;
      return (FOutcome)(FOutcome_u_0)param_1;
    }
    uVar17 = (this->Overspill).Size;
    iVar13 = (int)pvVar14;
    uVar9 = (longlong)iVar13;
    if (uVar17 < (ulonglong)(longlong)iVar13) {
      uVar9 = uVar17;
    }
    (this->Overspill).Data = (void *)((longlong)(this->Overspill).Data + uVar9);
    uVar7 = 0xffffffffffffffff;
    if (uVar17 - uVar9 != 0xffffffffffffffff) {
      uVar7 = uVar17 - uVar9;
    }
    (this->Overspill).Size = uVar7;
    if (iVar13 == 0) {
      pvVar16 = (this->Scratch).Data;
      uStack_60 = (this->Scratch).Size;
      uVar17 = (this->Scratch).Size;
      if ((uint)uVar17 < uVar11) {
        pcVar12 = "Unexpectedly large overspill";
        goto LAB_14457c9a1;
      }
      local_68 = pvVar16;
      memmove(pvVar16,(this->Overspill).Data,uVar8);
      if (uVar17 < uVar8) {
        uVar8 = uVar17;
      }
      uVar17 = uVar17 - uVar8;
      local_68 = (void *)((longlong)pvVar16 + uVar8);
      uVar8 = 0xffffffffffffffff;
      uStack_60 = 0xffffffffffffffff;
      if (uVar17 != 0xffffffffffffffff) {
        uVar8 = uVar17;
        uStack_60 = uVar17;
      }
      goto LAB_14457c73d;
    }
  }
  lVar10 = -0x8000000000000000;
  pcVar12 = (char *)(this->Remaining + (longlong)pvVar16);
  pcVar15 = pcVar12 + (int)pvVar14;
  if (pcVar12 != pcVar15) {
    do {
      uVar11 = (int)*pcVar12 - 0x30;
      if (9 < uVar11) {
        uVar11 = (int)*pcVar12 | 0x20;
        if (5 < uVar11 - 0x61) break;
        uVar11 = uVar11 - 0x57;
      }
      pcVar12 = pcVar12 + 1;
      lVar10 = lVar10 * 0x10 + (ulonglong)uVar11;
    } while (pcVar12 != pcVar15);
    if (-1 < lVar10) {
      if (lVar10 < 0x1000001) {
        local_58._padding_ = param_2->_padding_;
        local_58.Ssl = param_2->Ssl;
        if (lVar10 == 0) {
          puVar2 = (this->Scratch).Data;
          this->Remaining = -1;
          *puVar2 = 0;
          this->State = Epilogue;
          Epilogue(this,param_1,&local_58);
          return (FOutcome)(FOutcome_u_0)param_1;
        }
        this->Remaining = lVar10;
        this->State = Chunk;
        local_48._padding_ = local_58._padding_;
        local_48.Ssl = local_58.Ssl;
        Chunk(this,param_1,&local_48);
        return (FOutcome)(FOutcome_u_0)param_1;
      }
      pcVar12 = "Unacceptable chunk size";
      goto LAB_14457c9a1;
    }
  }
  pcVar12 = "Unparsable chunk size";
LAB_14457c9a1:
  param_1->Data = (void *)((ulonglong)param_1->Data & 0xffff000000000000 ^ (ulonglong)pcVar12);
  *(undefined2 *)((longlong)&param_1->Data + 6) = 0xffff;
  return (FOutcome)(FOutcome_u_0)param_1;
}

// Recv @ 14457d1b0

FOutcome __thiscall
UE::IoStore::HTTP::DetailOne::FBody::Recv(FBody *this,TMemoryView<void> *param_1,FTlsPeer *param_2)

{
  ssl_st *psVar1;
  ssl_st *psVar2;
  code *pcVar3;
  bool bVar4;
  ssl_st *psVar5;
  longlong lVar6;
  FOutcome FVar7;
  ssl_st *psVar8;
  ulonglong uVar9;
  ulong64 uVar10;
  FTlsPeer *in_R9;
  ssl_st *psVar11;
  int local_res8;
  uint uStackX_c;
  
  psVar1 = (ssl_st *)(this->Overspill).Size;
  if (psVar1 != (ssl_st *)0x0) {
    psVar11 = psVar1;
    if ((longlong)param_2->Ssl < (longlong)psVar1) {
      psVar11 = param_2->Ssl;
    }
    memcpy((void *)param_2->_padding_,(this->Overspill).Data,(size_t)psVar11);
    psVar2 = param_2->Ssl;
    psVar8 = psVar11;
    if (psVar2 < psVar11) {
      psVar8 = psVar2;
    }
    param_2->_padding_ = (longlong)(psVar8 + param_2->_padding_);
    psVar5 = (ssl_st *)0xffffffffffffffff;
    if (psVar2 + -(longlong)psVar8 != (ssl_st *)0xffffffffffffffff) {
      psVar5 = psVar2 + -(longlong)psVar8;
    }
    psVar2 = (ssl_st *)(this->Overspill).Size;
    param_2->Ssl = psVar5;
    psVar8 = psVar11;
    if (psVar2 < psVar11) {
      psVar8 = psVar2;
    }
    (this->Overspill).Data = psVar8 + (longlong)(this->Overspill).Data;
    uVar10 = 0xffffffffffffffff;
    if ((longlong)psVar2 - (longlong)psVar8 != 0xffffffffffffffff) {
      uVar10 = (longlong)psVar2 - (longlong)psVar8;
    }
    (this->Overspill).Size = uVar10;
    lVar6 = this->Remaining - (longlong)psVar11;
    this->Remaining = lVar6;
    if ((lVar6 == 0) || (param_2->Ssl == (ssl_st *)0x0)) {
      uVar9 = 0x3800000000000;
      if (lVar6 == 0) {
        uVar9 = 0x800000000000;
      }
      param_1->Data = (void *)(uVar9 | (ulonglong)psVar11 & 0xffffffff);
      return (FOutcome)(FOutcome_u_0)param_1;
    }
  }
  psVar11 = param_2->Ssl;
  FTlsPeer::Recv(in_R9,(char *)&local_res8,(int)param_2->_padding_);
  if ((CONCAT44(uStackX_c,local_res8) & 0xffffffffffff) < 0x800000000000) {
    param_1->Data = (void *)CONCAT44(uStackX_c,local_res8);
    return (FOutcome)(FOutcome_u_0)param_1;
  }
  if ((uStackX_c & 0x18000) == 0x18000) {
    if ((local_res8 != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Outcome.GetResult() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                           ,0x2a3,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      FVar7.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
      return (FOutcome)FVar7.field0_0x0;
    }
    *(int *)&param_1->Data = (int)psVar1;
  }
  else {
    lVar6 = this->Remaining - (longlong)local_res8;
    this->Remaining = lVar6;
    if (lVar6 < 0) {
      if ((0x1fffe < (int)lVar6 + 0xffffU) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Code <= 0xffff && Code >= -0xffff",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                             ,0x9a,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        FVar7.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
        return (FOutcome)FVar7.field0_0x0;
      }
      param_1->Data = (void *)((ulonglong)param_1->Data & 0xffff000000000000 ^ 0x150d728f0);
      *(short *)((longlong)&param_1->Data + 6) = (short)lVar6;
      return (FOutcome)(FOutcome_u_0)param_1;
    }
    local_res8 = local_res8 + (int)psVar1;
    *(int *)&param_1->Data = local_res8;
    if (lVar6 == 0) {
      *(undefined4 *)((longlong)&param_1->Data + 4) = 0x8000;
      return (FOutcome)(FOutcome_u_0)param_1;
    }
    if ((ssl_st *)(longlong)local_res8 == psVar11) {
      *(undefined4 *)((longlong)&param_1->Data + 4) = 0x38000;
      return (FOutcome)(FOutcome_u_0)param_1;
    }
  }
  *(undefined4 *)((longlong)&param_1->Data + 4) = 0x18000;
  return (FOutcome)(FOutcome_u_0)param_1;
}

// TryRecv @ 144583ee0

/* WARNING: Type propagation algorithm not settling */

FOutcome __thiscall
UE::IoStore::HTTP::DetailOne::FBody::TryRecv
          (FBody *this,TMemoryView<void> *param_1,FTlsPeer *param_2)

{
  uint uVar1;
  TMemoryView<void> TVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  EState EVar6;
  int iVar7;
  ssl_st *psVar8;
  FOutcome_u_0 FVar9;
  FOutcome FVar10;
  ssl_st *psVar11;
  void *pvVar12;
  ulonglong uVar13;
  ssl_st *psVar14;
  ssl_st *psVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  ssl_st *local_res18;
  TMemoryView<void> local_b8;
  undefined1 local_a8 [16];
  TMemoryView<void> local_98;
  FTlsPeer local_88;
  FTlsPeer local_78;
  FTlsPeer local_68;
  FTlsPeer local_58;
  FTlsPeer local_48 [2];
  
  if (param_2->Ssl == (ssl_st *)0x0) {
    param_1->Data = (void *)((ulonglong)param_1->Data & 0xffff000000000000 ^ 0x150d72860);
    *(undefined2 *)((longlong)&param_1->Data + 6) = 0xffff;
    return (FOutcome)param_1;
  }
  EVar6 = this->State;
  if (EVar6 == Init) {
    pvVar12 = (void *)((longlong)*(short *)((longlong)&this->_padding_ + 6) + this->_padding_);
    lVar4 = param_2->_padding_;
    psVar8 = param_2->Ssl;
    uVar16 = *(uint *)((longlong)&this->_padding_ + 4) & 0x7fffffff;
    uVar1 = ((int)this->_padding_ - (int)pvVar12) + uVar16;
    if (uVar1 < 0x20) {
      uVar16 = uVar16 + 0x20;
      if ((uint)this->_padding_ < uVar16) {
        FBuffer::Extend((FBuffer *)this,uVar16,0x20);
      }
      pvVar12 = (void *)((longlong)*(short *)((longlong)&this->_padding_ + 6) + this->_padding_);
    }
    if (uVar1 != 0) {
      (this->Overspill).Data = pvVar12;
      (this->Overspill).Size = (ulonglong)uVar1;
    }
    (this->Scratch).Data = pvVar12;
    (this->Scratch).Size = 0x20;
    if ((*(short *)((longlong)&this->_padding_ + 6) < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("MessageRight > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                           ,0x155,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      FVar10.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
      return (FOutcome)FVar10.field0_0x0;
    }
    if ((this->_padding_ & 0x20000) == 0) {
      if ((*(short *)((longlong)&this->_padding_ + 2) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offsets.Headers > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                             ,0x14e,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        FVar10.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
        return (FOutcome)FVar10.field0_0x0;
      }
      this->Remaining = this->_padding_;
      if ((this->_padding_ < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Remaining > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                             ,0x280,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        FVar10.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
        return (FOutcome)FVar10.field0_0x0;
      }
      EVar6 = Recv;
    }
    else {
      if ((this->Remaining != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Remaining == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                             ,0x27a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        FVar10.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
        return (FOutcome)FVar10.field0_0x0;
      }
      EVar6 = Prologue;
    }
    this->State = EVar6;
    local_48[0]._padding_ = lVar4;
    local_48[0].Ssl = psVar8;
    TryRecv(this,(TMemoryView<void> *)&local_res18,local_48);
    psVar8 = local_res18;
  }
  else if (EVar6 == Recv) {
    local_58._padding_ = param_2->_padding_;
    local_58.Ssl = param_2->Ssl;
    FVar10 = Recv(this,&local_b8,&local_58);
    psVar8 = *(void **)FVar10.field0_0x0;
  }
  else {
    if (EVar6 != Done) {
      TVar2.Data = (ssl_st *)param_2->_padding_;
      TVar2.Size = (ulong64)param_2->Ssl;
      uVar13 = 0x800000000000;
      psVar15 = param_2->Ssl;
      uVar16 = 0;
      uVar17 = (int)TVar2.Size;
      uVar18 = (int)(TVar2.Size >> 0x20);
      local_b8 = TVar2;
      do {
        EVar6 = this->State;
        local_res18 = TVar2.Data;
        if (EVar6 == Prologue) {
          local_68.Ssl._0_4_ = uVar17;
          local_68.Ssl._4_4_ = uVar18;
          local_68._padding_ = (longlong)TVar2.Data;
          FVar9._s_0 = (FOutcome_u_0_s_0)Prologue(this,&local_98,&local_68);
LAB_144584017:
          psVar8 = *(ssl_st **)FVar9;
          TVar2.Data = local_res18;
        }
        else {
          if (EVar6 == Chunk) {
            local_78.Ssl._0_4_ = uVar17;
            local_78.Ssl._4_4_ = uVar18;
            local_78._padding_ = (longlong)TVar2.Data;
            FVar9._s_0 = (FOutcome_u_0_s_0)Chunk(this,(TMemoryView<void> *)(local_a8 + 8),&local_78)
            ;
            goto LAB_144584017;
          }
          if (EVar6 == Epilogue) {
            local_88.Ssl._0_4_ = uVar17;
            local_88.Ssl._4_4_ = uVar18;
            local_88._padding_ = (longlong)TVar2.Data;
            FVar9._s_0 = (FOutcome_u_0_s_0)Epilogue(this,(TMemoryView<void> *)local_a8,&local_88);
            goto LAB_144584017;
          }
          psVar8 = (void *)0xffff000150d72890;
        }
        if (((ulonglong)psVar8 & 0xffffffffffff) < 0x800000000000) goto LAB_144584273;
        iVar7 = (int)psVar8;
        if (iVar7 == 0) goto LAB_144584083;
        uVar16 = uVar16 + iVar7;
        psVar11 = (ssl_st *)(longlong)iVar7;
        if (psVar15 < (ssl_st *)(longlong)iVar7) {
          psVar11 = psVar15;
        }
        psVar14 = psVar15 + -(longlong)psVar11;
        psVar15 = (ssl_st *)0xffffffffffffffff;
        if (psVar14 != (ssl_st *)0xffffffffffffffff) {
          psVar15 = psVar14;
        }
        TVar2.Data = TVar2.Data + (longlong)psVar11;
        local_b8.Size = (ulong64)psVar15;
        local_b8.Data = TVar2.Data;
        TVar2 = local_b8;
        if (psVar15 == (ssl_st *)0x0) goto LAB_144584083;
        local_b8.Size._0_4_ = SUB84(psVar15,0);
        local_b8.Size._4_4_ = (undefined4)((ulonglong)psVar15 >> 0x20);
        uVar17 = (undefined4)local_b8.Size;
        uVar18 = local_b8.Size._4_4_;
        local_b8 = TVar2;
      } while( true );
    }
    psVar8 = (void *)0xffff000150d72878;
  }
LAB_144584273:
  if ((int)((ulonglong)psVar8 >> 0x20) == 0x8000) {
    this->State = Done;
  }
  param_1->Data = psVar8;
  return (FOutcome)(FOutcome_u_0)param_1;
LAB_144584083:
  if ((int)((ulonglong)psVar8 >> 0x20) != 0x8000) {
    uVar13 = 0x1800000000000;
  }
  psVar8 = (ssl_st *)(uVar13 | uVar16);
  goto LAB_144584273;
}

// TryRecv @ 1445842b0

FOutcome __thiscall
UE::IoStore::HTTP::DetailTwo::FBody::TryRecv
          (FBody *this,TMemoryView<void> *param_1,FTlsPeer *param_2)

{
  long64 *plVar1;
  ssl_st *psVar2;
  TMemoryView<void> *in_R9;
  ssl_st *psVar3;
  
  plVar1 = &this->Remaining;
  psVar2 = (ssl_st *)this->_padding_;
  if (-1 < (longlong)psVar2) {
    psVar3 = (ssl_st *)*plVar1;
    if ((longlong)*plVar1 < 0) {
      *plVar1 = (long64)psVar2;
      psVar3 = psVar2;
    }
    if (param_2->Ssl < psVar3) {
      psVar3 = param_2->Ssl;
    }
    param_2->_padding_ = param_2->_padding_;
    param_2->Ssl = psVar3;
  }
  FDriverNg::RecvBody((FDriverNg *)this->_padding_,(FTlsPeer *)param_1,in_R9);
  if (0x7fffffffffff < ((ulonglong)param_1->Data & 0xffffffffffff)) {
    *plVar1 = *plVar1 - ((ulonglong)param_1->Data & 0xffffffff);
  }
  return (FOutcome)(FOutcome_u_0)param_1;
}

