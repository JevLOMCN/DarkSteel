// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 2

// Begin<TStringView<char>,TStringView<char>,TStringView<char>_> @ 1445699a0

void __thiscall
UE::IoStore::HTTP::FTransaction::Begin<TStringView<char>,TStringView<char>,TStringView<char>_>
          (FTransaction *this,TStringView<char> *param_1,TStringView<char> *param_2,
          TStringView<char> *param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  FTransaction FVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  char *pcVar18;
  undefined8 uVar19;
  char *pcVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  bool bVar23;
  size_t sVar24;
  FRequest *pFVar25;
  FDriverHeaders *this_00;
  char *_Str;
  undefined4 uStack_1cc;
  undefined4 uStack_1bc;
  undefined4 uStack_1ac;
  undefined4 uStack_19c;
  undefined4 uStack_18c;
  undefined4 uStack_17c;
  undefined4 uStack_16c;
  undefined4 uStack_15c;
  undefined4 uStack_14c;
  TStringView<char> local_148;
  TStringView<char> local_138;
  TStringView<char> local_128;
  TStringView<char> local_118;
  TStringView<char> local_108;
  TStringView<char> local_f8;
  TStringView<char> local_e8;
  TStringView<char> local_d8;
  TStringView<char> local_c8;
  undefined1 local_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  FTransaction FStack_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 local_a8 [9];
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  TStringView<char> local_98;
  TStringView<char> local_88;
  TStringView<char> local_78;
  TStringView<char> local_68;
  TStringView<char> local_58;
  TStringView<char> local_48 [4];
  
  pcVar18 = param_1->DataPtr;
  uVar19._0_4_ = param_1->Size;
  uVar19._4_4_ = *(undefined4 *)&param_1->field_0xc;
  if (((ulonglong)this & 1) == 0) {
    uVar2 = *(undefined1 *)&param_2->DataPtr;
    uVar3 = *(undefined1 *)((longlong)&param_2->DataPtr + 1);
    uVar4 = *(undefined1 *)((longlong)&param_2->DataPtr + 2);
    uVar5 = *(undefined1 *)((longlong)&param_2->DataPtr + 3);
    uVar6 = *(undefined1 *)((longlong)&param_2->DataPtr + 4);
    uVar7 = *(undefined1 *)((longlong)&param_2->DataPtr + 5);
    uVar8 = *(undefined1 *)((longlong)&param_2->DataPtr + 6);
    uVar9 = *(undefined1 *)((longlong)&param_2->DataPtr + 7);
    FVar10 = *(FTransaction *)&param_2->Size;
    uVar11 = *(undefined1 *)((longlong)&param_2->Size + 1);
    uVar12 = *(undefined1 *)((longlong)&param_2->Size + 2);
    uVar13 = *(undefined1 *)((longlong)&param_2->Size + 3);
    uVar14 = param_2->field_0xc;
    uVar15 = param_2->field_0xd;
    uVar16 = param_2->field_0xe;
    uVar17 = param_2->field_0xf;
    pcVar20 = param_3->DataPtr;
    uVar22._0_4_ = param_3->Size;
    uVar22._4_4_ = *(undefined4 *)&param_3->field_0xc;
    local_b8 = uVar2;
    uStack_b7 = uVar3;
    uStack_b6 = uVar4;
    uStack_b5 = uVar5;
    uStack_b4 = uVar6;
    uStack_b3 = uVar7;
    uStack_b2 = uVar8;
    uStack_b1 = uVar9;
    FStack_b0 = FVar10;
    uStack_af = uVar11;
    uStack_ae = uVar12;
    uStack_ad = uVar13;
    uStack_ac = uVar14;
    uStack_ab = uVar15;
    uStack_aa = uVar16;
    uStack_a9 = uVar17;
    if (-1 < (char)this[0x116]) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("MethodLength < 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                          ,0xd2,L"");
      if (bVar23) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined2 *)(this + 0x112) = *(undefined2 *)(this + 0xc);
    local_a8[0] = uVar2;
    local_a8[1] = uVar3;
    local_a8[2] = uVar4;
    local_a8[3] = uVar5;
    local_a8[4] = uVar6;
    local_a8[5] = uVar7;
    local_a8[6] = uVar8;
    local_a8[7] = uVar9;
    local_a8[8] = FVar10;
    uStack_9f = uVar11;
    uStack_9e = uVar12;
    uStack_9d = uVar13;
    uStack_9c = uVar14;
    uStack_9b = uVar15;
    uStack_9a = uVar16;
    uStack_99 = uVar17;
    pFVar25 = DetailOne::FRequest::operator<<((FRequest *)this,(TStringView<char> *)local_a8);
    local_98._12_4_ = uStack_18c;
    local_98.Size = 1;
    local_98.DataPtr = " ";
    pFVar25 = DetailOne::FRequest::operator<<(pFVar25,&local_98);
    local_88.DataPtr = pcVar20;
    local_88._8_8_ = uVar22;
    pFVar25 = DetailOne::FRequest::operator<<(pFVar25,&local_88);
    local_78._12_4_ = uStack_17c;
    local_78.Size = 0xb;
    local_78.DataPtr = " HTTP/1.1\r\n";
    DetailOne::FRequest::operator<<(pFVar25,&local_78);
    this[0x116] = FVar10;
    *(undefined2 *)(this + 0x110) = *(undefined2 *)(this + 0xc);
    if (-1 < *(short *)(this + 0x114)) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("HeaderRight < 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                          ,0xde,L"");
      if (bVar23) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_68._12_4_ = uStack_16c;
    local_68.Size = 4;
    local_68.DataPtr = "Host";
    pFVar25 = DetailOne::FRequest::operator<<((FRequest *)this,&local_68);
    local_58._12_4_ = uStack_15c;
    local_58.Size = 1;
    local_58.DataPtr = ":";
    pFVar25 = DetailOne::FRequest::operator<<(pFVar25,&local_58);
    local_48[0].DataPtr = pcVar18;
    local_48[0]._8_8_ = uVar19;
    pFVar25 = DetailOne::FRequest::operator<<(pFVar25,local_48);
    local_148._12_4_ = uStack_14c;
    local_148.Size = 2;
    local_148.DataPtr = "\r\n";
    DetailOne::FRequest::operator<<(pFVar25,&local_148);
  }
  else {
    pcVar20 = param_3->DataPtr;
    uVar21._0_4_ = param_3->Size;
    uVar21._4_4_ = *(undefined4 *)&param_3->field_0xc;
    _Str = "http";
    if (*(char *)(*(longlong *)((ulonglong)this ^ 1) + 0x24) != '\0') {
      _Str = "https";
    }
    sVar24 = strlen(_Str);
    local_138.DataPtr = param_2->DataPtr;
    local_138.Size = param_2->Size;
    local_138._12_4_ = *(undefined4 *)&param_2->field_0xc;
    this_00 = (FDriverHeaders *)((longlong *)((ulonglong)this ^ 1) + 1);
    local_128._12_4_ = uStack_1cc;
    local_128.Size = 7;
    local_128.DataPtr = ":method";
    DetailTwo::FDriverHeaders::Add(this_00,&local_128,&local_138);
    local_108._12_4_ = uStack_1bc;
    local_108.Size = 5;
    local_108.DataPtr = ":path";
    local_118.DataPtr = pcVar20;
    local_118._8_8_ = uVar21;
    DetailTwo::FDriverHeaders::Add(this_00,&local_108,&local_118);
    local_e8._12_4_ = uStack_1ac;
    local_e8.Size = 10;
    local_e8.DataPtr = ":authority";
    local_f8.DataPtr = pcVar18;
    local_f8._8_8_ = uVar19;
    DetailTwo::FDriverHeaders::Add(this_00,&local_e8,&local_f8);
    local_d8._12_4_ = local_148._12_4_;
    local_d8.Size = (int)sVar24;
    local_c8._12_4_ = uStack_19c;
    local_c8.Size = 7;
    local_c8.DataPtr = ":scheme";
    local_d8.DataPtr = _Str;
    DetailTwo::FDriverHeaders::Add(this_00,&local_c8,&local_d8);
  }
  return;
}

// ReadHeaders<TFunction<bool___cdecl(TStringView<char>,TStringView<char>)>_&> @ 14456a4a0

void __thiscall
UE::IoStore::HTTP::FTransaction::
ReadHeaders<TFunction<bool___cdecl(TStringView<char>,TStringView<char>)>_&>
          (FTransaction *this,TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 local_e8 [16];
  code *local_d8;
  longlong local_c8 [3];
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  code *local_68 [2];
  undefined1 local_58 [24];
  undefined8 local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  local_d8 = *(code **)param_1;
  if (((ulonglong)this & 1) == 0) {
    local_40 = 0;
    local_68[0] = local_d8;
    if (local_d8 != (code *)0x0) {
      puVar5 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar5 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar5)(puVar5,local_58);
    }
    DetailOne::FStatusHeaders::ReadHeaders
              ((FStatusHeaders *)this,
               (TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *)local_68);
  }
  else {
    uVar10 = (ulonglong)this ^ 1;
    local_b0 = (longlong *)0x0;
    if (local_d8 != (code *)0x0) {
      puVar5 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar5 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar5)(puVar5,local_c8);
    }
    iVar1 = *(int *)(uVar10 + 0x28);
    plVar8 = *(longlong **)(uVar10 + 0x20);
    plVar9 = plVar8 + (longlong)iVar1 * 2;
    while( true ) {
      if (*(int *)(uVar10 + 0x28) != iVar1) {
        local_e8[0] = 0;
        `TCheckedPointerIterator<UE::IoStore::HTTP::DetailTwo::FHeaderNg_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_e8);
      }
      if (plVar8 == plVar9) break;
      if (*plVar8 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Inner != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionTwo.inl"
                           ,0x79,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      puVar5 = (undefined8 *)nghttp2_rcbuf_get_buf(local_38,*plVar8);
      local_98 = *puVar5;
      uStack_90 = (undefined4)puVar5[1];
      if (plVar8[1] == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Inner != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionTwo.inl"
                           ,0x79,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      puVar5 = (undefined8 *)nghttp2_rcbuf_get_buf(local_28,plVar8[1]);
      uStack_70 = CONCAT44(uStack_8c,uStack_90);
      local_78 = local_98;
      local_a8 = *puVar5;
      uStack_a0 = (undefined4)puVar5[1];
      uStack_80 = CONCAT44(uStack_9c,uStack_a0);
      local_88 = local_a8;
      Core::Private::Function::CheckCallable(local_d8);
      pcVar2 = local_d8;
      plVar7 = local_c8;
      if (local_b0 != (longlong *)0x0) {
        plVar7 = local_b0;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      cVar4 = (*pcVar2)(uVar6,&local_78,&local_88);
      if (cVar4 == '\0') break;
      plVar8 = plVar8 + 2;
    }
    if (local_d8 != (code *)0x0) {
      plVar8 = local_c8;
      if (local_b0 != (longlong *)0x0) {
        plVar8 = local_b0;
      }
      (**(code **)(*plVar8 + 0x10))();
      return;
    }
  }
  return;
}

