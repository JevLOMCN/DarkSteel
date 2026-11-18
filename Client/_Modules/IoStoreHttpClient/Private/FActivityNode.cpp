// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 3

// FActivityNode @ 14456ab10

FActivityNode * __thiscall
UE::IoStore::HTTP::FActivityNode::FActivityNode(FActivityNode *this,FParams *param_1)

{
  FActivity::FActivity((FActivity *)this,(FParams *)param_1);
  this->Next = (FActivityNode *)0x0;
  this->Slot = -1;
  this->bFollow30x = param_1->bFollow30x;
  return this;
}

// Create @ 1445719a0

FActivityNode * __cdecl
UE::IoStore::HTTP::FActivityNode::Create
          (FParams *param_1,TStringView<char> *param_2,ulong64 param_3)

{
  ulong64 *_Dst;
  FActivityNode *pFVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  EHttpVersion EVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  FActivityNode *pFVar11;
  uint uVar12;
  uint uVar13;
  char *_Src;
  longlong lVar14;
  uint uVar15;
  char *pcVar16;
  uint uVar17;
  ulong64 uVar18;
  short sVar19;
  char *pcVar20;
  short local_res10;
  FUrlOffsets local_res20;
  char *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TStringView<char> local_78;
  char *local_68;
  undefined8 uStack_60;
  char *local_58;
  undefined8 uStack_50;
  
  if (((int)param_1->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Params.Method.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                         ,0x3e,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FActivityNode *)(*pcVar3)();
    return pFVar11;
  }
  uVar17 = param_2->Size;
  if (uVar17 == 0) {
    uVar2 = *(ushort *)((longlong)&param_1->_padding_ + 4);
    uVar17 = 0x80;
    if (0x7f < uVar2) {
      uVar17 = (uint)uVar2;
    }
    uVar17 = uVar17 + 0xf & 0xfffffff0;
    pFVar11 = FMemory::Malloc((ulonglong)(uVar17 + 0xb0),0x10);
    if ((param_1->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Params.Host != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0x49,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FActivityNode *)(*pcVar3)();
      return pFVar11;
    }
    if ((*(char *)(param_1->_padding_ + 0x29) == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Params.Host->IsPooled()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0x4a,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FActivityNode *)(*pcVar3)();
      return pFVar11;
    }
    *(short *)((longlong)&param_1->_padding_ + 4) = (short)uVar17;
    param_1->_padding_ = (longlong)(pFVar11 + 1);
    *(undefined1 *)((longlong)&param_1->_padding_ + 6) = 1;
    FActivity::FActivity((FActivity *)pFVar11,(FParams *)param_1);
    pFVar11->Slot = -1;
    pFVar11->Next = (FActivityNode *)0x0;
    pFVar11->bFollow30x = param_1->bFollow30x;
  }
  else {
    local_78.DataPtr = param_2->DataPtr;
    local_78.Size = param_2->Size;
    local_78._12_4_ = *(undefined4 *)&param_2->field_0xc;
    iVar8 = ParseUrl(&local_78,&local_res20);
    if (iVar8 < 0) {
      pFVar11 = (FActivityNode *)0x0;
    }
    else {
      local_68 = param_2->DataPtr;
      uStack_60 = *(undefined8 *)&param_2->Size;
      uVar9 = (uint)local_res20.HostName.Right - (uint)local_res20.HostName.Left;
      uVar13 = (uint)*(undefined8 *)&param_2->Size;
      uVar12 = (uint)local_res20.HostName.Left;
      if (local_res20.HostName.Left != uVar13 && (int)uVar13 <= (int)(uint)local_res20.HostName.Left
         ) {
        uVar12 = uVar13;
      }
      uVar15 = uVar13 - uVar12;
      if ((int)uVar9 < (int)(uVar13 - uVar12)) {
        uVar15 = uVar9;
      }
      uVar18 = 0;
      _Src = local_68 + (int)uVar12;
      sVar19 = 0;
      uVar12 = 0;
      if (0 < (int)uVar15) {
        uVar12 = uVar15;
      }
      if (local_res20.Port.Left != 0) {
        iVar8 = 0;
        sVar19 = 0;
        uVar13 = (uint)local_res20.Port.Left;
        uVar15 = (uint)*(undefined8 *)&param_2->Size;
        uVar9 = uVar13;
        if ((int)uVar15 < (int)uVar13) {
          uVar9 = uVar15;
        }
        iVar4 = uVar15 - uVar9;
        if ((int)(local_res20.Port.Right - uVar13) < (int)(uVar15 - uVar9)) {
          iVar4 = local_res20.Port.Right - uVar13;
        }
        pcVar20 = local_68 + (int)uVar9;
        iVar10 = 0;
        if (0 < iVar4) {
          iVar10 = iVar4;
        }
        pcVar16 = pcVar20 + iVar10;
        for (; local_58 = local_68, uStack_50 = uStack_60, pcVar20 != pcVar16; pcVar20 = pcVar20 + 1
            ) {
          sVar19 = (short)iVar8;
          if (9 < (int)*pcVar20 - 0x30U) break;
          iVar8 = ((int)*pcVar20 - 0x30U) + iVar8 * 10;
          sVar19 = (short)iVar8;
        }
      }
      local_88 = (char *)0x0;
      iStack_80 = 0;
      if (local_res20.Path != 0) {
        uVar9 = (uint)local_res20.Path;
        if ((int)uVar17 < (int)(uint)local_res20.Path) {
          uVar9 = uVar17;
        }
        local_88 = param_2->DataPtr + (int)uVar9;
        iStack_80 = 0;
        if (0 < (int)(uVar17 - uVar9)) {
          iStack_80 = uVar17 - uVar9;
        }
      }
      uVar2 = *(ushort *)((longlong)&param_1->_padding_ + 4);
      uVar17 = 0x80;
      if (0x7f < uVar2) {
        uVar17 = (uint)uVar2;
      }
      uVar17 = (uVar17 + 0x40 + uVar12 & 0xfffffff0) + 0xb0;
      pFVar11 = FMemory::Malloc((ulonglong)uVar17,0x10);
      if (local_res20.SchemeLength == '\x05') {
        uVar18 = 0xffffffffffffffff;
        if (param_3 != 0) {
          uVar18 = param_3;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("VerifyCert != ECertRootsRefType::None",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                               ,0x78,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FActivityNode *)(*pcVar3)();
          return pFVar11;
        }
      }
      pFVar1 = pFVar11 + 1;
      _Dst = (ulong64 *)&pFVar11[1].field_0x30;
      memcpy(_Dst,_Src,(ulonglong)uVar12);
      *(undefined1 *)((ulonglong)uVar12 + (longlong)_Dst) = 0;
      EVar6 = param_1->HttpVersion;
      *(ulong64 *)pFVar1 = uVar18;
      if (EVar6 != Two) {
        EVar6 = One;
      }
      *(ulong64 **)&pFVar11[1].field_0x8 = _Dst;
      *(undefined8 *)&pFVar11[1].field_0x10 = 0;
      *(undefined8 *)&pFVar11[1].field_0x18 = 0;
      *(EHttpVersion *)&pFVar11[1].field_0x28 = EVar6;
      *(uint *)&pFVar11[1].field_0x20 = 0xffffffff;
      *(short *)&pFVar11[1].field_0x24 = sVar19;
      *(undefined2 *)&pFVar11[1].field_0x26 = 0x101;
      pFVar11[1].field_0x29 = 0;
      if (sVar19 == 0) {
        uVar7 = 0x1bb;
        if (*(longlong *)pFVar1 == 0) {
          uVar7 = 0x50;
        }
        *(undefined2 *)&pFVar11[1].field_0x24 = uVar7;
      }
      if ((param_1->_padding_ != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Params.Host == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                             ,0x92,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FActivityNode *)(*pcVar3)();
        return pFVar11;
      }
      lVar14 = (ulonglong)(uVar12 + 8 & 0xfffffff8) + (longlong)_Dst;
      param_1->_padding_ = (longlong)pFVar1;
      param_1->_padding_ = lVar14;
      local_res10 = (short)uVar17;
      *(short *)((longlong)&param_1->_padding_ + 4) = ((short)pFVar11 - (short)lVar14) + local_res10
      ;
      param_1->_padding_ = (longlong)local_88;
      param_1->_padding_ = CONCAT44(uStack_7c,iStack_80);
      *(undefined1 *)((longlong)&param_1->_padding_ + 6) = 0;
      FActivity::FActivity((FActivity *)pFVar11,(FParams *)param_1);
      pFVar11->Next = (FActivityNode *)0x0;
      pFVar11->Slot = -1;
      pFVar11->bFollow30x = param_1->bFollow30x;
    }
  }
  return pFVar11;
}

// Destroy @ 144572390

void __cdecl UE::IoStore::HTTP::FActivityNode::Destroy(FActivityNode *param_1)

{
  longlong *plVar1;
  
  LaneEstate_Demolish(GActivityTraceEstate,(FLanePostcode)param_1);
  if ((*(void **)&param_1->field_0x88 != (void *)0x0) && (-1 < *(int *)&param_1->field_0x94)) {
    FMemory::Free(*(void **)&param_1->field_0x88);
  }
  FTransactRef::~FTransactRef((FTransactRef *)&param_1->field_0x80);
  if (*(longlong *)&param_1->field_0x50 != 0) {
    plVar1 = (longlong *)&param_1->field_0x60;
    if (*(longlong **)&param_1->field_0x78 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_1->field_0x78;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FMemory::Free(param_1);
  return;
}

