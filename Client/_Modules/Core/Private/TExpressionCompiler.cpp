// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// operator() @ 1418c0580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `TExpressionCompiler<char>::CompileGroup'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uchar *puVar8;
  uint uVar9;
  int *piVar10;
  uchar *puVar11;
  FExpressionNode *pFVar12;
  void *_Src;
  longlong lVar13;
  undefined1 auStack_188 [32];
  FExpressionNode *local_168;
  FExpressionNode *local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  int local_138 [2];
  void *local_130;
  FExpressionNode local_128;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  uchar local_c8;
  FExpressionNode local_b8;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  uchar local_58;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  plVar1 = *(longlong **)this;
  puVar11 = (uchar *)0x0;
  iVar6 = (int)plVar1[1];
  uVar9 = iVar6 - 1;
  uVar7 = 0;
  if ((int)uVar9 < iVar6) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  local_130 = this;
  if (uVar7 == 0) {
    local_168 = (FExpressionNode *)(longlong)(int)uVar9;
    local_160 = (FExpressionNode *)(longlong)iVar6;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *(longlong *)((longlong)this + 8);
  plVar3 = *(longlong **)this;
  uVar7 = *(uint *)((longlong)(int)plVar1[1] * 0x80 + -0xc + *plVar1);
  if ((int)plVar3[1] < 1) {
    local_168 = (FExpressionNode *)0x0;
    local_160 = (FExpressionNode *)(longlong)(int)plVar3[1];
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar13 = (longlong)(int)plVar3[1] * 0x80 + *plVar3;
  local_b8.TypeId.A = 0;
  local_b8.TypeId.B = 0;
  local_b8.TypeId.C = 0;
  local_b8.TypeId.D = 0;
  FExpressionNode::operator=(&local_b8,(FExpressionNode *)(lVar13 + -0x80));
  local_78 = *(undefined4 *)(lVar13 + -0x40);
  uStack_74 = *(undefined4 *)(lVar13 + -0x3c);
  uStack_70 = *(undefined4 *)(lVar13 + -0x38);
  uStack_6c = *(undefined4 *)(lVar13 + -0x34);
  local_68 = *(undefined8 *)(lVar13 + -0x30);
  local_60 = *(undefined4 *)(lVar13 + -0x28);
  local_58 = *(uchar *)(lVar13 + -0x20);
  if (local_58 != '\0') {
    local_5c = *(undefined4 *)(lVar13 + -0x24);
  }
  local_48 = *(undefined4 *)(lVar13 + -0x10);
  lVar13 = plVar3[1];
  _Src = (void *)((longlong)(int)lVar13 * 0x80 + *plVar3);
  puVar8 = (uchar *)((longlong)_Src + -0x70);
  if (((*(int *)((longlong)_Src + -0x74) == 0 && *(int *)((longlong)_Src + -0x78) == 0) &&
      *(int *)((longlong)_Src + -0x7c) == 0) && *(int *)((longlong)_Src + -0x80) == 0) {
    puVar8 = puVar11;
  }
  if (puVar8 != (uchar *)0x0) {
    (*(code *)**(undefined8 **)puVar8)(local_78,0);
  }
  iVar6 = (int)plVar3[1] - (int)lVar13;
  if (iVar6 != 0) {
    memmove((void *)((longlong)_Src + -0x80),_Src,(longlong)iVar6 << 7);
  }
  *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
  local_128.TypeId.A = 0;
  local_128.TypeId.B = 0;
  local_128.TypeId.C = 0;
  local_128.TypeId.D = 0;
  FExpressionNode::operator=(&local_128,&local_b8);
  local_e8 = CONCAT44(uStack_74,local_78);
  uStack_e0 = CONCAT44(uStack_6c,uStack_70);
  local_d0 = local_60;
  local_d8 = local_68;
  local_c8 = local_58;
  if (local_58 != '\0') {
    local_cc = local_5c;
  }
  pFVar12 = *(FExpressionNode **)(lVar2 + 8);
  if ((pFVar12 <= &local_128) &&
     (&local_128 < (FExpressionNode *)((longlong)pFVar12 + (longlong)*(int *)(lVar2 + 0x14) * 0x70))
     ) {
    local_150 = (longlong)*(int *)(lVar2 + 0x10);
    local_148 = 0x70;
    local_168 = &local_128;
    local_160 = pFVar12;
    local_158 = (longlong)*(int *)(lVar2 + 0x14);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)(lVar2 + 0x10);
  if (iVar6 == *(int *)(lVar2 + 0x14)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1070,(ForAnyElementType *)(lVar2 + 8),(int *)(lVar2 + 0x14));
  }
  *(int *)(lVar2 + 0x10) = iVar6 + 1;
  pFVar12 = (FExpressionNode *)(*(longlong *)(lVar2 + 8) + (longlong)iVar6 * 0x70);
  (pFVar12->TypeId).A = 0;
  (pFVar12->TypeId).B = 0;
  (pFVar12->TypeId).C = 0;
  (pFVar12->TypeId).D = 0;
  FExpressionNode::operator=(pFVar12,&local_128);
  pFVar12[1].TypeId.A = (uint)local_e8;
  pFVar12[1].TypeId.B = local_e8._4_4_;
  pFVar12[1].TypeId.C = (uint)uStack_e0;
  pFVar12[1].TypeId.D = uStack_e0._4_4_;
  *(undefined8 *)pFVar12[1].InlineBytes = local_d8;
  pFVar12[1].InlineBytes[0x10] = '\0';
  *(undefined4 *)(pFVar12[1].InlineBytes + 8) = local_d0;
  pFVar12[1].InlineBytes[0x10] = local_c8;
  if (local_c8 != '\0') {
    *(undefined4 *)(pFVar12[1].InlineBytes + 0xc) = local_cc;
  }
  puVar8 = local_128.InlineBytes;
  if (((local_128.TypeId.D == 0 && local_128.TypeId.C == 0) && local_128.TypeId.B == 0) &&
      local_128.TypeId.A == 0) {
    puVar8 = puVar11;
  }
  if (puVar8 != (uchar *)0x0) {
    (*(code *)**(undefined8 **)puVar8)((uint)local_e8,0);
  }
  puVar8 = local_b8.InlineBytes;
  if (((local_b8.TypeId.D == 0 && local_b8.TypeId.C == 0) && local_b8.TypeId.B == 0) &&
      local_b8.TypeId.A == 0) {
    puVar8 = puVar11;
  }
  if (puVar8 != (uchar *)0x0) {
    (*(code *)**(undefined8 **)puVar8)(puVar8,0);
  }
  if (uVar7 != 0xffffffff) {
    lVar2 = *(longlong *)((longlong)local_130 + 8);
    iVar6 = *(int *)(lVar2 + 0x10);
    local_160 = (FExpressionNode *)(longlong)iVar6;
    uVar9 = 0;
    if ((int)uVar7 < iVar6) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_168 = (FExpressionNode *)(longlong)(int)uVar7;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    piVar10 = (int *)(*(longlong *)(lVar2 + 8) + 0x5c + (longlong)(int)uVar7 * 0x70);
    if (local_138 != piVar10) {
      *piVar10 = iVar6 + -1;
      *(undefined1 *)(piVar10 + 1) = 1;
    }
  }
  return;
}

// operator() @ 1418c0920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`TExpressionCompiler<char8_t>::CompileGroup'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uchar *puVar8;
  uint uVar9;
  int *piVar10;
  uchar *puVar11;
  FExpressionNode *pFVar12;
  void *_Src;
  longlong lVar13;
  undefined1 auStack_188 [32];
  FExpressionNode *local_168;
  FExpressionNode *local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  int local_138 [2];
  void *local_130;
  FExpressionNode local_128;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  uchar local_c8;
  FExpressionNode local_b8;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  uchar local_58;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  plVar1 = *(longlong **)this;
  puVar11 = (uchar *)0x0;
  iVar6 = (int)plVar1[1];
  uVar9 = iVar6 - 1;
  uVar7 = 0;
  if ((int)uVar9 < iVar6) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  local_130 = this;
  if (uVar7 == 0) {
    local_168 = (FExpressionNode *)(longlong)(int)uVar9;
    local_160 = (FExpressionNode *)(longlong)iVar6;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *(longlong *)((longlong)this + 8);
  plVar3 = *(longlong **)this;
  uVar7 = *(uint *)((longlong)(int)plVar1[1] * 0x80 + -0xc + *plVar1);
  if ((int)plVar3[1] < 1) {
    local_168 = (FExpressionNode *)0x0;
    local_160 = (FExpressionNode *)(longlong)(int)plVar3[1];
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar13 = (longlong)(int)plVar3[1] * 0x80 + *plVar3;
  local_b8.TypeId.A = 0;
  local_b8.TypeId.B = 0;
  local_b8.TypeId.C = 0;
  local_b8.TypeId.D = 0;
  FExpressionNode::operator=(&local_b8,(FExpressionNode *)(lVar13 + -0x80));
  local_78 = *(undefined4 *)(lVar13 + -0x40);
  uStack_74 = *(undefined4 *)(lVar13 + -0x3c);
  uStack_70 = *(undefined4 *)(lVar13 + -0x38);
  uStack_6c = *(undefined4 *)(lVar13 + -0x34);
  local_68 = *(undefined8 *)(lVar13 + -0x30);
  local_60 = *(undefined4 *)(lVar13 + -0x28);
  local_58 = *(uchar *)(lVar13 + -0x20);
  if (local_58 != '\0') {
    local_5c = *(undefined4 *)(lVar13 + -0x24);
  }
  local_48 = *(undefined4 *)(lVar13 + -0x10);
  lVar13 = plVar3[1];
  _Src = (void *)((longlong)(int)lVar13 * 0x80 + *plVar3);
  puVar8 = (uchar *)((longlong)_Src + -0x70);
  if (((*(int *)((longlong)_Src + -0x74) == 0 && *(int *)((longlong)_Src + -0x78) == 0) &&
      *(int *)((longlong)_Src + -0x7c) == 0) && *(int *)((longlong)_Src + -0x80) == 0) {
    puVar8 = puVar11;
  }
  if (puVar8 != (uchar *)0x0) {
    (*(code *)**(undefined8 **)puVar8)(local_78,0);
  }
  iVar6 = (int)plVar3[1] - (int)lVar13;
  if (iVar6 != 0) {
    memmove((void *)((longlong)_Src + -0x80),_Src,(longlong)iVar6 << 7);
  }
  *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
  local_128.TypeId.A = 0;
  local_128.TypeId.B = 0;
  local_128.TypeId.C = 0;
  local_128.TypeId.D = 0;
  FExpressionNode::operator=(&local_128,&local_b8);
  local_e8 = CONCAT44(uStack_74,local_78);
  uStack_e0 = CONCAT44(uStack_6c,uStack_70);
  local_d0 = local_60;
  local_d8 = local_68;
  local_c8 = local_58;
  if (local_58 != '\0') {
    local_cc = local_5c;
  }
  pFVar12 = *(FExpressionNode **)(lVar2 + 8);
  if ((pFVar12 <= &local_128) &&
     (&local_128 < (FExpressionNode *)((longlong)pFVar12 + (longlong)*(int *)(lVar2 + 0x14) * 0x70))
     ) {
    local_150 = (longlong)*(int *)(lVar2 + 0x10);
    local_148 = 0x70;
    local_168 = &local_128;
    local_160 = pFVar12;
    local_158 = (longlong)*(int *)(lVar2 + 0x14);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)(lVar2 + 0x10);
  if (iVar6 == *(int *)(lVar2 + 0x14)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1070,(ForAnyElementType *)(lVar2 + 8),(int *)(lVar2 + 0x14));
  }
  *(int *)(lVar2 + 0x10) = iVar6 + 1;
  pFVar12 = (FExpressionNode *)(*(longlong *)(lVar2 + 8) + (longlong)iVar6 * 0x70);
  (pFVar12->TypeId).A = 0;
  (pFVar12->TypeId).B = 0;
  (pFVar12->TypeId).C = 0;
  (pFVar12->TypeId).D = 0;
  FExpressionNode::operator=(pFVar12,&local_128);
  pFVar12[1].TypeId.A = (uint)local_e8;
  pFVar12[1].TypeId.B = local_e8._4_4_;
  pFVar12[1].TypeId.C = (uint)uStack_e0;
  pFVar12[1].TypeId.D = uStack_e0._4_4_;
  *(undefined8 *)pFVar12[1].InlineBytes = local_d8;
  pFVar12[1].InlineBytes[0x10] = '\0';
  *(undefined4 *)(pFVar12[1].InlineBytes + 8) = local_d0;
  pFVar12[1].InlineBytes[0x10] = local_c8;
  if (local_c8 != '\0') {
    *(undefined4 *)(pFVar12[1].InlineBytes + 0xc) = local_cc;
  }
  puVar8 = local_128.InlineBytes;
  if (((local_128.TypeId.D == 0 && local_128.TypeId.C == 0) && local_128.TypeId.B == 0) &&
      local_128.TypeId.A == 0) {
    puVar8 = puVar11;
  }
  if (puVar8 != (uchar *)0x0) {
    (*(code *)**(undefined8 **)puVar8)((uint)local_e8,0);
  }
  puVar8 = local_b8.InlineBytes;
  if (((local_b8.TypeId.D == 0 && local_b8.TypeId.C == 0) && local_b8.TypeId.B == 0) &&
      local_b8.TypeId.A == 0) {
    puVar8 = puVar11;
  }
  if (puVar8 != (uchar *)0x0) {
    (*(code *)**(undefined8 **)puVar8)(puVar8,0);
  }
  if (uVar7 != 0xffffffff) {
    lVar2 = *(longlong *)((longlong)local_130 + 8);
    iVar6 = *(int *)(lVar2 + 0x10);
    local_160 = (FExpressionNode *)(longlong)iVar6;
    uVar9 = 0;
    if ((int)uVar7 < iVar6) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_168 = (FExpressionNode *)(longlong)(int)uVar7;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    piVar10 = (int *)(*(longlong *)(lVar2 + 8) + 0x5c + (longlong)(int)uVar7 * 0x70);
    if (local_138 != piVar10) {
      *piVar10 = iVar6 + -1;
      *(undefined1 *)(piVar10 + 1) = 1;
    }
  }
  return;
}

// operator() @ 1418c0cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`TExpressionCompiler<wchar_t>::CompileGroup'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uchar *puVar8;
  uint uVar9;
  int *piVar10;
  uchar *puVar11;
  FExpressionNode *pFVar12;
  void *_Src;
  longlong lVar13;
  undefined1 auStack_188 [32];
  FExpressionNode *local_168;
  FExpressionNode *local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  int local_138 [2];
  void *local_130;
  FExpressionNode local_128;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  uchar local_c8;
  FExpressionNode local_b8;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  uchar local_58;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  plVar1 = *(longlong **)this;
  puVar11 = (uchar *)0x0;
  iVar6 = (int)plVar1[1];
  uVar9 = iVar6 - 1;
  uVar7 = 0;
  if ((int)uVar9 < iVar6) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  local_130 = this;
  if (uVar7 == 0) {
    local_168 = (FExpressionNode *)(longlong)(int)uVar9;
    local_160 = (FExpressionNode *)(longlong)iVar6;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *(longlong *)((longlong)this + 8);
  plVar3 = *(longlong **)this;
  uVar7 = *(uint *)((longlong)(int)plVar1[1] * 0x80 + -0xc + *plVar1);
  if ((int)plVar3[1] < 1) {
    local_168 = (FExpressionNode *)0x0;
    local_160 = (FExpressionNode *)(longlong)(int)plVar3[1];
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar13 = (longlong)(int)plVar3[1] * 0x80 + *plVar3;
  local_b8.TypeId.A = 0;
  local_b8.TypeId.B = 0;
  local_b8.TypeId.C = 0;
  local_b8.TypeId.D = 0;
  FExpressionNode::operator=(&local_b8,(FExpressionNode *)(lVar13 + -0x80));
  local_78 = *(undefined4 *)(lVar13 + -0x40);
  uStack_74 = *(undefined4 *)(lVar13 + -0x3c);
  uStack_70 = *(undefined4 *)(lVar13 + -0x38);
  uStack_6c = *(undefined4 *)(lVar13 + -0x34);
  local_68 = *(undefined8 *)(lVar13 + -0x30);
  local_60 = *(undefined4 *)(lVar13 + -0x28);
  local_58 = *(uchar *)(lVar13 + -0x20);
  if (local_58 != '\0') {
    local_5c = *(undefined4 *)(lVar13 + -0x24);
  }
  local_48 = *(undefined4 *)(lVar13 + -0x10);
  lVar13 = plVar3[1];
  _Src = (void *)((longlong)(int)lVar13 * 0x80 + *plVar3);
  puVar8 = (uchar *)((longlong)_Src + -0x70);
  if (((*(int *)((longlong)_Src + -0x74) == 0 && *(int *)((longlong)_Src + -0x78) == 0) &&
      *(int *)((longlong)_Src + -0x7c) == 0) && *(int *)((longlong)_Src + -0x80) == 0) {
    puVar8 = puVar11;
  }
  if (puVar8 != (uchar *)0x0) {
    (*(code *)**(undefined8 **)puVar8)(local_78,0);
  }
  iVar6 = (int)plVar3[1] - (int)lVar13;
  if (iVar6 != 0) {
    memmove((void *)((longlong)_Src + -0x80),_Src,(longlong)iVar6 << 7);
  }
  *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
  local_128.TypeId.A = 0;
  local_128.TypeId.B = 0;
  local_128.TypeId.C = 0;
  local_128.TypeId.D = 0;
  FExpressionNode::operator=(&local_128,&local_b8);
  local_e8 = CONCAT44(uStack_74,local_78);
  uStack_e0 = CONCAT44(uStack_6c,uStack_70);
  local_d0 = local_60;
  local_d8 = local_68;
  local_c8 = local_58;
  if (local_58 != '\0') {
    local_cc = local_5c;
  }
  pFVar12 = *(FExpressionNode **)(lVar2 + 8);
  if ((pFVar12 <= &local_128) &&
     (&local_128 < (FExpressionNode *)((longlong)pFVar12 + (longlong)*(int *)(lVar2 + 0x14) * 0x70))
     ) {
    local_150 = (longlong)*(int *)(lVar2 + 0x10);
    local_148 = 0x70;
    local_168 = &local_128;
    local_160 = pFVar12;
    local_158 = (longlong)*(int *)(lVar2 + 0x14);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)(lVar2 + 0x10);
  if (iVar6 == *(int *)(lVar2 + 0x14)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1070,(ForAnyElementType *)(lVar2 + 8),(int *)(lVar2 + 0x14));
  }
  *(int *)(lVar2 + 0x10) = iVar6 + 1;
  pFVar12 = (FExpressionNode *)(*(longlong *)(lVar2 + 8) + (longlong)iVar6 * 0x70);
  (pFVar12->TypeId).A = 0;
  (pFVar12->TypeId).B = 0;
  (pFVar12->TypeId).C = 0;
  (pFVar12->TypeId).D = 0;
  FExpressionNode::operator=(pFVar12,&local_128);
  pFVar12[1].TypeId.A = (uint)local_e8;
  pFVar12[1].TypeId.B = local_e8._4_4_;
  pFVar12[1].TypeId.C = (uint)uStack_e0;
  pFVar12[1].TypeId.D = uStack_e0._4_4_;
  *(undefined8 *)pFVar12[1].InlineBytes = local_d8;
  pFVar12[1].InlineBytes[0x10] = '\0';
  *(undefined4 *)(pFVar12[1].InlineBytes + 8) = local_d0;
  pFVar12[1].InlineBytes[0x10] = local_c8;
  if (local_c8 != '\0') {
    *(undefined4 *)(pFVar12[1].InlineBytes + 0xc) = local_cc;
  }
  puVar8 = local_128.InlineBytes;
  if (((local_128.TypeId.D == 0 && local_128.TypeId.C == 0) && local_128.TypeId.B == 0) &&
      local_128.TypeId.A == 0) {
    puVar8 = puVar11;
  }
  if (puVar8 != (uchar *)0x0) {
    (*(code *)**(undefined8 **)puVar8)((uint)local_e8,0);
  }
  puVar8 = local_b8.InlineBytes;
  if (((local_b8.TypeId.D == 0 && local_b8.TypeId.C == 0) && local_b8.TypeId.B == 0) &&
      local_b8.TypeId.A == 0) {
    puVar8 = puVar11;
  }
  if (puVar8 != (uchar *)0x0) {
    (*(code *)**(undefined8 **)puVar8)(puVar8,0);
  }
  if (uVar7 != 0xffffffff) {
    lVar2 = *(longlong *)((longlong)local_130 + 8);
    iVar6 = *(int *)(lVar2 + 0x10);
    local_160 = (FExpressionNode *)(longlong)iVar6;
    uVar9 = 0;
    if ((int)uVar7 < iVar6) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_168 = (FExpressionNode *)(longlong)(int)uVar7;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    piVar10 = (int *)(*(longlong *)(lVar2 + 8) + 0x5c + (longlong)(int)uVar7 * 0x70);
    if (local_138 != piVar10) {
      *piVar10 = iVar6 + -1;
      *(undefined1 *)(piVar10 + 1) = 1;
    }
  }
  return;
}

// CompileGroup @ 1418cac40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FExpressionError> * __thiscall
TExpressionCompiler<char>::CompileGroup
          (TExpressionCompiler<char> *this,TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionToken<char> *param_1,FGuid *param_2)

{
  int *piVar1;
  FExpressionGrammar *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TOptional<FExpressionError> *pTVar9;
  ulong64 uVar10;
  longlong lVar11;
  FGuid *pFVar12;
  TExpressionToken<char> *pTVar13;
  FText *pFVar14;
  FText *pFVar15;
  FText *pFVar16;
  FText *pFVar17;
  FTextFormat *pFVar18;
  uchar *puVar19;
  FGuid *pFVar20;
  FWrappedOperator *pFVar21;
  FExpressionNode *pFVar22;
  TArray<TExpressionToken<char>,TSizedDefaultAllocator<32>_> *pTVar23;
  FGuid *pFVar24;
  uint uVar25;
  FGuid *pFVar26;
  TExpressionToken<char> *pTVar27;
  undefined1 auStackY_9a8 [32];
  ForAnyElementType local_958;
  undefined8 local_950;
  ForAnyElementType *local_948;
  TExpressionCompiler<char> *local_940;
  undefined1 local_938 [8];
  FGuid *local_930;
  TExpressionToken<char> *local_928;
  undefined1 local_920 [8];
  FText local_918;
  FText local_908;
  TOptional<FExpressionError> local_8f8;
  FAnsiString local_8e0;
  FAnsiString local_8d0;
  TSharedPtr<FCulture,1> local_8c0;
  TSharedPtr<FCulture,1> local_8b0;
  undefined1 local_898 [64];
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined1 local_838 [64];
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined1 local_7d8 [64];
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined1 local_778 [64];
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  FExpressionNode local_718;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined1 local_6b8 [64];
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  FExpressionNode local_658;
  FText local_618;
  FText local_608;
  FText local_5f8;
  FText local_5e8;
  TCompiledToken<char> local_5d8;
  TCompiledToken<char> local_568;
  TCompiledToken<char> local_4f8;
  TCompiledToken<char> local_488;
  FTextFormat local_418;
  FText local_408;
  FText local_3f8;
  FText local_3e8;
  FTextFormat local_3d8;
  FText local_3c8;
  TExpressionToken<char> local_3b8;
  FExpressionNode local_358;
  uint local_318;
  uint uStack_314;
  uint uStack_310;
  uint uStack_30c;
  undefined8 local_308;
  undefined4 local_300;
  int local_2fc;
  uchar local_2f8;
  undefined1 local_2e8 [64];
  uint local_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
  uint uStack_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  uchar local_288;
  undefined1 local_278 [64];
  uint local_238;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  uchar local_218;
  undefined1 local_208 [64];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  EType local_1b0;
  int local_1ac;
  char local_1a8;
  undefined1 local_198 [64];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  EType local_140;
  int local_13c;
  char local_138;
  undefined1 local_128 [64];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  EType local_d0;
  int local_cc;
  char local_c8;
  undefined1 local_b8 [64];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  EType local_60;
  int local_5c;
  char local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_9a8;
  pFVar12 = (FGuid *)0x0;
  local_958.Data = (FScriptContainerElement *)0x0;
  local_950 = 0;
  uVar25 = this->Tokens->ArrayNum - this->CurrentTokenIndex;
  local_930 = param_2;
  local_928 = param_1;
  if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
  }
  if (0 < (int)uVar25) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,uVar25,&local_958,0,(int *)((longlong)&local_950 + 4));
  }
  uVar25 = this->CurrentTokenIndex;
  local_948 = &local_958;
  pTVar23 = this->Tokens;
  local_940 = this;
  if ((int)uVar25 < pTVar23->ArrayNum) {
    do {
      uVar6 = 0;
      if ((int)uVar25 < pTVar23->ArrayNum) {
        uVar6 = ~uVar25 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TOptional<FExpressionError> *)(*pcVar4)();
        return pTVar9;
      }
      pFVar2 = this->Grammar;
      pTVar27 = (TExpressionToken<char> *)
                ((pTVar23->AllocatorInstance).Data + (longlong)(int)uVar25 * 0x60);
      uVar10 = CityHash64((char *)pTVar27,0x10);
      iVar7 = TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FGuid>
                        ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
                          *)pFVar2,(uint)uVar10,(FGuid *)pTVar27);
      pFVar24 = (FGuid *)0x0;
      pFVar20 = pFVar24;
      if (iVar7 != -1) {
        pFVar20 = (FGuid *)(*(longlong *)&pFVar2->Groupings + (longlong)iVar7 * 0x28);
      }
      pFVar26 = pFVar20 + 1;
      if (pFVar20 == (FGuid *)0x0) {
        pFVar26 = pFVar24;
      }
      if (pFVar26 == (FGuid *)0x0) {
        if ((param_2 != (FGuid *)0x0) &&
           ((((pTVar27->Node).TypeId.D == param_2->D && (pTVar27->Node).TypeId.C == param_2->C) &&
            (pTVar27->Node).TypeId.B == param_2->B) && (pTVar27->Node).TypeId.A == param_2->A))
        goto LAB_1418cc025;
        if ((int)pFVar12 == 0) {
          pFVar2 = this->Grammar;
          uVar10 = CityHash64((char *)pTVar27,0x10);
          iVar7 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                            (&pFVar2->PreUnaryOperators,(uint)uVar10,(FGuid *)pTVar27);
          if (iVar7 == -1) {
            pFVar2 = this->Grammar;
            uVar10 = CityHash64((char *)pTVar27,0x10);
            iVar7 = TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<FGuid>
                              ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
                                *)&pFVar2->BinaryOperators,(uint)uVar10,(FGuid *)pTVar27);
            if (iVar7 != -1) {
              lVar11 = (longlong)iVar7 * 0x20 + *(longlong *)&pFVar2->BinaryOperators;
              pFVar12 = (FGuid *)(lVar11 + 0x10);
              if (lVar11 == 0) {
                pFVar12 = pFVar24;
              }
              if (pFVar12 != (FGuid *)0x0) {
                FAnsiString::ConstructFromPtrSize
                          (&local_8e0,(pTVar27->Context).TokenStart,
                           *(int *)&(pTVar27->Context).TokenEnd -
                           *(int *)&(pTVar27->Context).TokenStart);
                pFVar14 = FText::FromString(&local_3c8,&local_8e0);
                pFVar15 = FText::AsLocalizable_Advanced_LocText
                                    (&local_608,L"ExpressionParser",L"SyntaxError_NoBinaryOperand",
                                     L"Syntax error: No operand specified for operator \'{0}\'");
                pFVar18 = FTextFormat::FTextFormat(&local_418,pFVar15,Default);
                pFVar14 = FText::Format<FText>(&local_618,pFVar18,pFVar14);
                local_918.TextData.Reference = (pFVar14->TextData).Reference;
                if (local_918.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_918.TextData.Reference + 8))
                            (local_918.TextData.Reference,local_920);
                }
                local_918.Flags = pFVar14->Flags;
                FText::FText((FText *)__return_storage_ptr__,&local_918);
                __return_storage_ptr__->bIsSet = true;
                if (local_918.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_918.TextData.Reference + 0x10))();
                }
                if (local_618.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_618.TextData.Reference + 0x10))();
                }
                if (local_608.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_608.TextData.Reference + 0x10))();
                }
                if (local_8e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_8e0.Data.AllocatorInstance.Data);
                }
                goto LAB_1418cc046;
              }
            }
            pFVar2 = this->Grammar;
            uVar10 = CityHash64((char *)pTVar27,0x10);
            iVar7 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
                    FindIndexByHash<FGuid>
                              (&pFVar2->PostUnaryOperators,(uint)uVar10,(FGuid *)pTVar27);
            if (iVar7 == -1) {
              local_898._0_4_ = 0;
              local_898._4_4_ = 0;
              local_898._8_4_ = 0;
              local_898._12_4_ = 0;
              FExpressionNode::operator=((FExpressionNode *)local_898,(FExpressionNode *)pTVar27);
              local_858 = (pTVar27->Context).TokenStart;
              uStack_850 = (pTVar27->Context).TokenEnd;
              local_2e8._0_4_ = 0;
              local_2e8._4_4_ = 0;
              local_848._0_4_ = (pTVar27->Context).LineNumber;
              local_848._4_4_ = (pTVar27->Context).CharacterIndex;
              local_2e8._8_4_ = 0;
              local_2e8._12_4_ = 0;
              FExpressionNode::operator=((FExpressionNode *)local_2e8,(FExpressionNode *)local_898);
              pFVar12 = (FGuid *)(local_898 + 0x10);
              if (((local_898._12_4_ == 0 && local_898._8_4_ == 0) && local_898._4_4_ == 0) &&
                  local_898._0_4_ == 0) {
                pFVar12 = pFVar24;
              }
              local_2a8 = (uint)local_858;
              uStack_2a4 = local_858._4_4_;
              uStack_2a0 = (uint)uStack_850;
              uStack_29c = uStack_850._4_4_;
              local_298 = local_848;
              local_290 = 0;
              local_288 = '\0';
              if (pFVar12 != (FGuid *)0x0) {
                (*(code *)**(undefined8 **)pFVar12)((uint)local_858,0);
              }
              pFVar3 = (this->Commands).AllocatorInstance.Data;
              if (((pFVar3 <= (FScriptContainerElement *)local_2e8) &&
                  ((FScriptContainerElement *)local_2e8 <
                   pFVar3 + (longlong)(this->Commands).ArrayMax * 0x70)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar4 = (code *)swi(3);
                pTVar9 = (TOptional<FExpressionError> *)(*pcVar4)();
                return pTVar9;
              }
              iVar7 = (this->Commands).ArrayNum;
              piVar1 = &(this->Commands).ArrayMax;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x1070,&(this->Commands).AllocatorInstance,piVar1);
              }
              pFVar3 = (this->Commands).AllocatorInstance.Data;
              (this->Commands).ArrayNum = iVar7 + 1;
              pFVar22 = (FExpressionNode *)(pFVar3 + (longlong)iVar7 * 0x70);
              (pFVar22->TypeId).A = 0;
              (pFVar22->TypeId).B = 0;
              (pFVar22->TypeId).C = 0;
              (pFVar22->TypeId).D = 0;
              FExpressionNode::operator=(pFVar22,(FExpressionNode *)local_2e8);
              pFVar22[1].TypeId.A = local_2a8;
              pFVar22[1].TypeId.B = uStack_2a4;
              pFVar22[1].TypeId.C = uStack_2a0;
              pFVar22[1].TypeId.D = uStack_29c;
              *(undefined8 *)pFVar22[1].InlineBytes = local_298;
              pFVar22[1].InlineBytes[0x10] = '\0';
              *(undefined4 *)(pFVar22[1].InlineBytes + 8) = local_290;
              pFVar22[1].InlineBytes[0x10] = local_288;
              if (local_288 != '\0') {
                *(undefined4 *)(pFVar22[1].InlineBytes + 0xc) = local_28c;
              }
              pFVar12 = (FGuid *)(local_2e8 + 0x10);
              if (((local_2e8._12_4_ == 0 && local_2e8._8_4_ == 0) && local_2e8._4_4_ == 0) &&
                  local_2e8._0_4_ == 0) {
                pFVar12 = pFVar24;
              }
              if (pFVar12 != (FGuid *)0x0) {
                (*(code *)**(undefined8 **)pFVar12)(local_2a8,0);
              }
              pFVar12 = (FGuid *)&DAT_00000001;
            }
            else {
              while (0 < (int)local_950) {
                uVar25 = 0;
                if ((int)((int)local_950 - 1U) < (int)local_950) {
                  uVar25 = ~((int)local_950 - 1U) >> 0x1f;
                }
                iVar7 = (int)local_950;
                if (uVar25 == 0) {
                  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar5) {
                    pcVar4 = (code *)swi(3);
                    pTVar9 = (TOptional<FExpressionError> *)(*pcVar4)();
                    return pTVar9;
                  }
                  iVar7 = (int)local_950;
                }
                if (0 < *(int *)(local_958.Data + (longlong)(iVar7 + -1) * 0x80 + 0x70)) break;
                `TExpressionCompiler<char>::CompileGroup'::__l2::<lambda_1>::operator()(&local_948);
              }
              local_7d8._0_4_ = 0;
              local_7d8._4_4_ = 0;
              local_7d8._8_4_ = 0;
              local_7d8._12_4_ = 0;
              FExpressionNode::operator=((FExpressionNode *)local_7d8,(FExpressionNode *)pTVar27);
              local_798 = (pTVar27->Context).TokenStart;
              uStack_790 = (pTVar27->Context).TokenEnd;
              local_198._0_4_ = 0;
              local_198._4_4_ = 0;
              local_788._0_4_ = (pTVar27->Context).LineNumber;
              local_788._4_4_ = (pTVar27->Context).CharacterIndex;
              local_198._8_4_ = 0;
              local_198._12_4_ = 0;
              FExpressionNode::operator=((FExpressionNode *)local_198,(FExpressionNode *)local_7d8);
              pFVar12 = (FGuid *)(local_7d8 + 0x10);
              if (((local_7d8._12_4_ == 0 && local_7d8._8_4_ == 0) && local_7d8._4_4_ == 0) &&
                  local_7d8._0_4_ == 0) {
                pFVar12 = pFVar24;
              }
              local_158 = (undefined4)local_798;
              uStack_154 = local_798._4_4_;
              uStack_150 = (undefined4)uStack_790;
              uStack_14c = uStack_790._4_4_;
              local_148 = local_788;
              local_140 = PostUnaryOperator;
              local_138 = '\0';
              if (pFVar12 != (FGuid *)0x0) {
                (*(code *)**(undefined8 **)pFVar12)((undefined4)local_798,0);
              }
              iVar7 = (int)local_950;
              if ((int)local_950 == local_950._4_4_) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x1080,&local_958,(int *)((longlong)&local_950 + 4));
              }
              local_950 = CONCAT44(local_950._4_4_,iVar7 + 1);
              pFVar21 = (FWrappedOperator *)(local_958.Data + (longlong)iVar7 * 0x80);
              local_4f8._0_8_ = 0;
              local_4f8._8_8_ = 0;
              FExpressionNode::operator=((FExpressionNode *)&local_4f8,(FExpressionNode *)local_198)
              ;
              local_4f8._68_4_ = uStack_154;
              local_4f8._64_4_ = local_158;
              local_4f8._76_4_ = uStack_14c;
              local_4f8._72_4_ = uStack_150;
              local_4f8.Type = local_140;
              local_4f8._80_8_ = local_148;
              local_4f8.ShortCircuitIndex.bIsSet = (bool)local_138;
              if (local_138 != '\0') {
                local_4f8.ShortCircuitIndex.TypedValue = local_13c;
              }
              FWrappedOperator::FWrappedOperator(pFVar21,&local_4f8,0,-1);
              pFVar20 = (FGuid *)(local_198 + 0x10);
              if (((local_198._12_4_ == 0 && local_198._8_4_ == 0) && local_198._4_4_ == 0) &&
                  local_198._0_4_ == 0) {
                pFVar20 = pFVar24;
              }
              pFVar12 = (FGuid *)&DAT_00000001;
              if (pFVar20 != (FGuid *)0x0) {
                (*(code *)**(undefined8 **)pFVar20)(pFVar20,0);
              }
            }
          }
          else {
            local_838._0_4_ = 0;
            local_838._4_4_ = 0;
            local_838._8_4_ = 0;
            local_838._12_4_ = 0;
            FExpressionNode::operator=((FExpressionNode *)local_838,(FExpressionNode *)pTVar27);
            local_7f8 = (pTVar27->Context).TokenStart;
            uStack_7f0 = (pTVar27->Context).TokenEnd;
            local_208._0_4_ = 0;
            local_208._4_4_ = 0;
            local_7e8._0_4_ = (pTVar27->Context).LineNumber;
            local_7e8._4_4_ = (pTVar27->Context).CharacterIndex;
            local_208._8_4_ = 0;
            local_208._12_4_ = 0;
            FExpressionNode::operator=((FExpressionNode *)local_208,(FExpressionNode *)local_838);
            pFVar20 = (FGuid *)(local_838 + 0x10);
            if (((local_838._12_4_ == 0 && local_838._8_4_ == 0) && local_838._4_4_ == 0) &&
                local_838._0_4_ == 0) {
              pFVar20 = pFVar24;
            }
            local_1c8 = (undefined4)local_7f8;
            uStack_1c4 = local_7f8._4_4_;
            uStack_1c0 = (undefined4)uStack_7f0;
            uStack_1bc = uStack_7f0._4_4_;
            local_1b8 = local_7e8;
            local_1b0 = PreUnaryOperator;
            local_1a8 = (char)pFVar12;
            if (pFVar20 != (FGuid *)0x0) {
              (*(code *)**(undefined8 **)pFVar20)((undefined4)local_7f8,0);
            }
            iVar7 = (int)local_950;
            if ((int)local_950 == local_950._4_4_) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x1080,&local_958,(int *)((longlong)&local_950 + 4));
            }
            local_950 = CONCAT44(local_950._4_4_,iVar7 + 1);
            pFVar21 = (FWrappedOperator *)(local_958.Data + (longlong)iVar7 * 0x80);
            local_568._0_8_ = 0;
            local_568._8_8_ = 0;
            FExpressionNode::operator=((FExpressionNode *)&local_568,(FExpressionNode *)local_208);
            local_568._68_4_ = uStack_1c4;
            local_568._64_4_ = local_1c8;
            local_568._76_4_ = uStack_1bc;
            local_568._72_4_ = uStack_1c0;
            local_568.Type = local_1b0;
            local_568._80_8_ = local_1b8;
            local_568.ShortCircuitIndex.bIsSet = (bool)local_1a8;
            if (local_1a8 != '\0') {
              local_568.ShortCircuitIndex.TypedValue = local_1ac;
            }
            FWrappedOperator::FWrappedOperator(pFVar21,&local_568,0,-1);
            pFVar20 = (FGuid *)(local_208 + 0x10);
            if (((local_208._12_4_ == 0 && local_208._8_4_ == 0) && local_208._4_4_ == 0) &&
                local_208._0_4_ == 0) {
              pFVar20 = pFVar24;
            }
            if (pFVar20 != (FGuid *)0x0) {
              (*(code *)**(undefined8 **)pFVar20)(pFVar20,0);
            }
          }
        }
        else if ((int)pFVar12 == 1) {
          pFVar2 = this->Grammar;
          uVar10 = CityHash64((char *)pTVar27,0x10);
          iVar7 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                            (&pFVar2->PostUnaryOperators,(uint)uVar10,(FGuid *)pTVar27);
          if (iVar7 == -1) {
            pFVar2 = this->Grammar;
            uVar10 = CityHash64((char *)pTVar27,0x10);
            iVar7 = TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<FGuid>
                              ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
                                *)&pFVar2->BinaryOperators,(uint)uVar10,(FGuid *)pTVar27);
            if (iVar7 != -1) {
              lVar11 = (longlong)iVar7 * 0x20 + *(longlong *)&pFVar2->BinaryOperators;
              pFVar12 = (FGuid *)(lVar11 + 0x10);
              if (lVar11 == 0) {
                pFVar12 = pFVar24;
              }
              if (pFVar12 != (FGuid *)0x0) {
                while (0 < (int)local_950) {
                  uVar25 = pFVar12->A;
                  uVar6 = 0;
                  if ((int)((int)local_950 - 1U) < (int)local_950) {
                    uVar6 = ~((int)local_950 - 1U) >> 0x1f;
                  }
                  iVar7 = (int)local_950;
                  if (uVar6 == 0) {
                    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar5) {
                      pcVar4 = (code *)swi(3);
                      pTVar9 = (TOptional<FExpressionError> *)(*pcVar4)();
                      return pTVar9;
                    }
                    iVar7 = (int)local_950;
                  }
                  if ((char)pFVar12->B == '\x01') {
                    bVar5 = *(int *)(local_958.Data + (longlong)(iVar7 + -1) * 0x80 + 0x70) <=
                            (int)uVar25;
                  }
                  else {
                    bVar5 = *(int *)(local_958.Data + (longlong)(iVar7 + -1) * 0x80 + 0x70) <
                            (int)uVar25;
                  }
                  if (!bVar5) break;
                  `TExpressionCompiler<char>::CompileGroup'::__l2::<lambda_1>::operator()
                            (&local_948);
                }
                iVar7 = -1;
                if (*(char *)((longlong)&pFVar12->B + 1) != '\0') {
                  puVar19 = (pTVar27->Node).InlineBytes;
                  iVar7 = (this->Commands).ArrayNum;
                  if ((((pTVar27->Node).TypeId.D == 0 && (pTVar27->Node).TypeId.C == 0) &&
                      (pTVar27->Node).TypeId.B == 0) && (pTVar27->Node).TypeId.A == 0) {
                    puVar19 = (uchar *)0x0;
                  }
                  if (puVar19 == (uchar *)0x0) {
                    local_658.TypeId.A = 0;
                    local_658.TypeId.B = 0;
                    local_658.InlineBytes[0] = '\0';
                    local_658.InlineBytes[1] = '\0';
                    local_658.InlineBytes[2] = '\0';
                    local_658.InlineBytes[3] = '\0';
                    local_658.InlineBytes[4] = '\0';
                    local_658.InlineBytes[5] = '\0';
                    local_658.InlineBytes[6] = '\0';
                    local_658.InlineBytes[7] = '\0';
                    local_658.InlineBytes[8] = '\0';
                    local_658.InlineBytes[9] = '\0';
                    local_658.InlineBytes[10] = '\0';
                    local_658.InlineBytes[0xb] = '\0';
                    local_658.InlineBytes[0xc] = '\0';
                    local_658.InlineBytes[0xd] = '\0';
                    local_658.InlineBytes[0xe] = '\0';
                    local_658.InlineBytes[0xf] = '\0';
                    local_658.InlineBytes[0x10] = '\0';
                    local_658.InlineBytes[0x11] = '\0';
                    local_658.InlineBytes[0x12] = '\0';
                    local_658.InlineBytes[0x13] = '\0';
                    local_658.InlineBytes[0x14] = '\0';
                    local_658.InlineBytes[0x15] = '\0';
                    local_658.InlineBytes[0x16] = '\0';
                    local_658.InlineBytes[0x17] = '\0';
                    local_658.InlineBytes[0x18] = '\0';
                    local_658.InlineBytes[0x19] = '\0';
                    local_658.InlineBytes[0x1a] = '\0';
                    local_658.InlineBytes[0x1b] = '\0';
                    local_658.InlineBytes[0x1c] = '\0';
                    local_658.InlineBytes[0x1d] = '\0';
                    local_658.InlineBytes[0x1e] = '\0';
                    local_658.InlineBytes[0x1f] = '\0';
                    local_658.InlineBytes[0x20] = '\0';
                    local_658.InlineBytes[0x21] = '\0';
                    local_658.InlineBytes[0x22] = '\0';
                    local_658.InlineBytes[0x23] = '\0';
                    local_658.InlineBytes[0x24] = '\0';
                    local_658.InlineBytes[0x25] = '\0';
                    local_658.InlineBytes[0x26] = '\0';
                    local_658.InlineBytes[0x27] = '\0';
                    local_658.InlineBytes[0x28] = '\0';
                    local_658.InlineBytes[0x29] = '\0';
                    local_658.InlineBytes[0x2a] = '\0';
                    local_658.InlineBytes[0x2b] = '\0';
                    local_658.InlineBytes[0x2c] = '\0';
                    local_658.InlineBytes[0x2d] = '\0';
                    local_658.InlineBytes[0x2e] = '\0';
                    local_658.InlineBytes[0x2f] = '\0';
                    local_658.TypeId.C = 0;
                    local_658.TypeId.D = 0;
                  }
                  else {
                    (**(code **)(*(longlong *)puVar19 + 0x18))(puVar19,&local_658);
                  }
                  pTVar13 = TExpressionToken<char>::TExpressionToken<char>
                                      (&local_3b8,&pTVar27->Context,&local_658);
                  local_358.TypeId.A = 0;
                  local_358.TypeId.B = 0;
                  local_358.TypeId.C = 0;
                  local_358.TypeId.D = 0;
                  FExpressionNode::operator=(&local_358,&pTVar13->Node);
                  local_318 = *(uint *)&(pTVar13->Context).TokenStart;
                  uStack_314 = *(uint *)((longlong)&(pTVar13->Context).TokenStart + 4);
                  uStack_310 = *(uint *)&(pTVar13->Context).TokenEnd;
                  uStack_30c = *(uint *)((longlong)&(pTVar13->Context).TokenEnd + 4);
                  puVar19 = (pTVar13->Node).InlineBytes;
                  local_308._0_4_ = (pTVar13->Context).LineNumber;
                  local_308._4_4_ = (pTVar13->Context).CharacterIndex;
                  local_300 = 4;
                  local_2f8 = '\x01';
                  if ((((pTVar13->Node).TypeId.D == 0 && (pTVar13->Node).TypeId.C == 0) &&
                      (pTVar13->Node).TypeId.B == 0) && (pTVar13->Node).TypeId.A == 0) {
                    puVar19 = (uchar *)0x0;
                  }
                  local_2fc = iVar7;
                  if (puVar19 != (uchar *)0x0) {
                    (*(code *)**(undefined8 **)puVar19)(local_318,0);
                  }
                  pFVar22 = (FExpressionNode *)(this->Commands).AllocatorInstance.Data;
                  if (((pFVar22 <= &local_358) &&
                      (&local_358 <
                       (FExpressionNode *)
                       ((longlong)pFVar22 + (longlong)(this->Commands).ArrayMax * 0x70))) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar5)) {
                    pcVar4 = (code *)swi(3);
                    pTVar9 = (TOptional<FExpressionError> *)(*pcVar4)();
                    return pTVar9;
                  }
                  iVar7 = (this->Commands).ArrayNum;
                  piVar1 = &(this->Commands).ArrayMax;
                  if (iVar7 == *piVar1) {
                    iVar7 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x1070,&(this->Commands).AllocatorInstance,piVar1);
                  }
                  (this->Commands).ArrayNum = iVar7 + 1;
                  pFVar22 = (FExpressionNode *)
                            ((this->Commands).AllocatorInstance.Data + (longlong)iVar7 * 0x70);
                  (pFVar22->TypeId).A = 0;
                  (pFVar22->TypeId).B = 0;
                  (pFVar22->TypeId).C = 0;
                  (pFVar22->TypeId).D = 0;
                  FExpressionNode::operator=(pFVar22,&local_358);
                  pFVar22[1].TypeId.A = local_318;
                  pFVar22[1].TypeId.B = uStack_314;
                  pFVar22[1].TypeId.C = uStack_310;
                  pFVar22[1].TypeId.D = uStack_30c;
                  *(undefined8 *)pFVar22[1].InlineBytes = local_308;
                  pFVar22[1].InlineBytes[0x10] = '\0';
                  *(undefined4 *)(pFVar22[1].InlineBytes + 8) = local_300;
                  pFVar22[1].InlineBytes[0x10] = local_2f8;
                  if (local_2f8 != '\0') {
                    *(int *)(pFVar22[1].InlineBytes + 0xc) = local_2fc;
                  }
                  puVar19 = local_358.InlineBytes;
                  if (((local_358.TypeId.D == 0 && local_358.TypeId.C == 0) &&
                      local_358.TypeId.B == 0) && local_358.TypeId.A == 0) {
                    puVar19 = (uchar *)0x0;
                  }
                  if (puVar19 != (uchar *)0x0) {
                    (*(code *)**(undefined8 **)puVar19)(local_318,0);
                  }
                  iVar7 = (this->Commands).ArrayNum + -1;
                  param_2 = local_930;
                }
                local_718.TypeId.A = 0;
                local_718.TypeId.B = 0;
                local_718.TypeId.C = 0;
                local_718.TypeId.D = 0;
                FExpressionNode::operator=(&local_718,(FExpressionNode *)pTVar27);
                local_6d8 = (pTVar27->Context).TokenStart;
                uStack_6d0 = (pTVar27->Context).TokenEnd;
                local_128._0_4_ = 0;
                local_128._4_4_ = 0;
                local_6c8._0_4_ = (pTVar27->Context).LineNumber;
                local_6c8._4_4_ = (pTVar27->Context).CharacterIndex;
                local_128._8_4_ = 0;
                local_128._12_4_ = 0;
                FExpressionNode::operator=((FExpressionNode *)local_128,&local_718);
                puVar19 = local_718.InlineBytes;
                if (((local_718.TypeId.D == 0 && local_718.TypeId.C == 0) && local_718.TypeId.B == 0
                    ) && local_718.TypeId.A == 0) {
                  puVar19 = (uchar *)0x0;
                }
                local_e8 = (undefined4)local_6d8;
                uStack_e4 = local_6d8._4_4_;
                uStack_e0 = (undefined4)uStack_6d0;
                uStack_dc = uStack_6d0._4_4_;
                local_d8 = local_6c8;
                local_d0 = BinaryOperator;
                local_c8 = '\0';
                if (puVar19 != (uchar *)0x0) {
                  (*(code *)**(undefined8 **)puVar19)((undefined4)local_6d8,0);
                }
                iVar8 = (int)local_950;
                if ((int)local_950 == local_950._4_4_) {
                  iVar8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x1080,&local_958,(int *)((longlong)&local_950 + 4));
                }
                local_950 = CONCAT44(local_950._4_4_,iVar8 + 1);
                uVar25 = pFVar12->A;
                pFVar12 = (FGuid *)0x0;
                pFVar21 = (FWrappedOperator *)(local_958.Data + (longlong)iVar8 * 0x80);
                local_5d8._0_8_ = 0;
                local_5d8._8_8_ = 0;
                FExpressionNode::operator=
                          ((FExpressionNode *)&local_5d8,(FExpressionNode *)local_128);
                local_5d8._68_4_ = uStack_e4;
                local_5d8._64_4_ = local_e8;
                local_5d8._76_4_ = uStack_dc;
                local_5d8._72_4_ = uStack_e0;
                local_5d8.Type = local_d0;
                local_5d8._80_8_ = local_d8;
                local_5d8.ShortCircuitIndex.bIsSet = (bool)local_c8;
                if (local_c8 != '\0') {
                  local_5d8.ShortCircuitIndex.TypedValue = local_cc;
                }
                FWrappedOperator::FWrappedOperator(pFVar21,&local_5d8,uVar25,iVar7);
                pFVar20 = (FGuid *)(local_128 + 0x10);
                if (((local_128._12_4_ == 0 && local_128._8_4_ == 0) && local_128._4_4_ == 0) &&
                    local_128._0_4_ == 0) {
                  pFVar20 = pFVar12;
                }
                if (pFVar20 != (FGuid *)0x0) {
                  (*(code *)**(undefined8 **)pFVar20)(pFVar20,0);
                }
                goto LAB_1418cbda4;
              }
            }
            local_6b8._0_4_ = 0;
            local_6b8._4_4_ = 0;
            local_6b8._8_4_ = 0;
            local_6b8._12_4_ = 0;
            FExpressionNode::operator=((FExpressionNode *)local_6b8,(FExpressionNode *)pTVar27);
            local_678 = (pTVar27->Context).TokenStart;
            uStack_670 = (pTVar27->Context).TokenEnd;
            local_278._0_4_ = 0;
            local_278._4_4_ = 0;
            local_668._0_4_ = (pTVar27->Context).LineNumber;
            local_668._4_4_ = (pTVar27->Context).CharacterIndex;
            local_278._8_4_ = 0;
            local_278._12_4_ = 0;
            FExpressionNode::operator=((FExpressionNode *)local_278,(FExpressionNode *)local_6b8);
            pFVar12 = (FGuid *)(local_6b8 + 0x10);
            if (((local_6b8._12_4_ == 0 && local_6b8._8_4_ == 0) && local_6b8._4_4_ == 0) &&
                local_6b8._0_4_ == 0) {
              pFVar12 = pFVar24;
            }
            local_238 = (uint)local_678;
            uStack_234 = local_678._4_4_;
            uStack_230 = (uint)uStack_670;
            uStack_22c = uStack_670._4_4_;
            local_228 = local_668;
            local_220 = 0;
            local_218 = '\0';
            if (pFVar12 != (FGuid *)0x0) {
              (*(code *)**(undefined8 **)pFVar12)((uint)local_678,0);
            }
            pFVar3 = (this->Commands).AllocatorInstance.Data;
            if (((pFVar3 <= (FScriptContainerElement *)local_278) &&
                ((FScriptContainerElement *)local_278 <
                 pFVar3 + (longlong)(this->Commands).ArrayMax * 0x70)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar9 = (TOptional<FExpressionError> *)(*pcVar4)();
              return pTVar9;
            }
            iVar7 = (this->Commands).ArrayNum;
            piVar1 = &(this->Commands).ArrayMax;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x1070,&(this->Commands).AllocatorInstance,piVar1);
            }
            pFVar3 = (this->Commands).AllocatorInstance.Data;
            (this->Commands).ArrayNum = iVar7 + 1;
            pFVar22 = (FExpressionNode *)(pFVar3 + (longlong)iVar7 * 0x70);
            (pFVar22->TypeId).A = 0;
            (pFVar22->TypeId).B = 0;
            (pFVar22->TypeId).C = 0;
            (pFVar22->TypeId).D = 0;
            FExpressionNode::operator=(pFVar22,(FExpressionNode *)local_278);
            pFVar22[1].TypeId.A = local_238;
            pFVar22[1].TypeId.B = uStack_234;
            pFVar22[1].TypeId.C = uStack_230;
            pFVar22[1].TypeId.D = uStack_22c;
            *(undefined8 *)pFVar22[1].InlineBytes = local_228;
            pFVar22[1].InlineBytes[0x10] = '\0';
            *(undefined4 *)(pFVar22[1].InlineBytes + 8) = local_220;
            pFVar22[1].InlineBytes[0x10] = local_218;
            if (local_218 != '\0') {
              *(undefined4 *)(pFVar22[1].InlineBytes + 0xc) = local_21c;
            }
            pFVar20 = (FGuid *)(local_278 + 0x10);
            if (((local_278._12_4_ == 0 && local_278._8_4_ == 0) && local_278._4_4_ == 0) &&
                local_278._0_4_ == 0) {
              pFVar20 = pFVar24;
            }
            pFVar12 = pFVar24;
            if (pFVar20 != (FGuid *)0x0) {
              (*(code *)**(undefined8 **)pFVar20)(local_238,0);
            }
          }
          else {
            while (0 < (int)local_950) {
              uVar25 = 0;
              if ((int)((int)local_950 - 1U) < (int)local_950) {
                uVar25 = ~((int)local_950 - 1U) >> 0x1f;
              }
              iVar7 = (int)local_950;
              if (uVar25 == 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pTVar9 = (TOptional<FExpressionError> *)(*pcVar4)();
                  return pTVar9;
                }
                iVar7 = (int)local_950;
              }
              if (0 < *(int *)(local_958.Data + (longlong)(iVar7 + -1) * 0x80 + 0x70)) break;
              `TExpressionCompiler<char>::CompileGroup'::__l2::<lambda_1>::operator()(&local_948);
            }
            local_778._0_4_ = 0;
            local_778._4_4_ = 0;
            local_778._8_4_ = 0;
            local_778._12_4_ = 0;
            FExpressionNode::operator=((FExpressionNode *)local_778,(FExpressionNode *)pTVar27);
            local_738 = (pTVar27->Context).TokenStart;
            uStack_730 = (pTVar27->Context).TokenEnd;
            local_b8._0_4_ = 0;
            local_b8._4_4_ = 0;
            local_728._0_4_ = (pTVar27->Context).LineNumber;
            local_728._4_4_ = (pTVar27->Context).CharacterIndex;
            local_b8._8_4_ = 0;
            local_b8._12_4_ = 0;
            FExpressionNode::operator=((FExpressionNode *)local_b8,(FExpressionNode *)local_778);
            pFVar20 = (FGuid *)(local_778 + 0x10);
            if (((local_778._12_4_ == 0 && local_778._8_4_ == 0) && local_778._4_4_ == 0) &&
                local_778._0_4_ == 0) {
              pFVar20 = pFVar24;
            }
            local_78 = (undefined4)local_738;
            uStack_74 = local_738._4_4_;
            uStack_70 = (undefined4)uStack_730;
            uStack_6c = uStack_730._4_4_;
            local_68 = local_728;
            local_60 = PostUnaryOperator;
            local_58 = '\0';
            if (pFVar20 != (FGuid *)0x0) {
              (*(code *)**(undefined8 **)pFVar20)((undefined4)local_738,0);
            }
            iVar7 = (int)local_950;
            if ((int)local_950 == local_950._4_4_) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x1080,&local_958,(int *)((longlong)&local_950 + 4));
            }
            local_950 = CONCAT44(local_950._4_4_,iVar7 + 1);
            pFVar21 = (FWrappedOperator *)(local_958.Data + (longlong)iVar7 * 0x80);
            local_488._0_8_ = 0;
            local_488._8_8_ = 0;
            FExpressionNode::operator=((FExpressionNode *)&local_488,(FExpressionNode *)local_b8);
            local_488._68_4_ = uStack_74;
            local_488._64_4_ = local_78;
            local_488._76_4_ = uStack_6c;
            local_488._72_4_ = uStack_70;
            local_488.Type = local_60;
            local_488._80_8_ = local_68;
            local_488.ShortCircuitIndex.bIsSet = (bool)local_58;
            if (local_58 != '\0') {
              local_488.ShortCircuitIndex.TypedValue = local_5c;
            }
            FWrappedOperator::FWrappedOperator(pFVar21,&local_488,0,-1);
            pFVar20 = (FGuid *)(local_b8 + 0x10);
            if (((local_b8._12_4_ == 0 && local_b8._8_4_ == 0) && local_b8._4_4_ == 0) &&
                local_b8._0_4_ == 0) {
              pFVar20 = pFVar24;
            }
            if (pFVar20 != (FGuid *)0x0) {
              (*(code *)**(undefined8 **)pFVar20)(pFVar20,0);
            }
          }
        }
      }
      else {
        this->CurrentTokenIndex = this->CurrentTokenIndex + 1;
        CompileGroup(this,&local_8f8,pTVar27,pFVar26);
        if (local_8f8.bIsSet != false) {
          __return_storage_ptr__->bIsSet = local_8f8.bIsSet;
          FText::FText((FText *)__return_storage_ptr__,(FText *)&local_8f8);
          if ((local_8f8.bIsSet != false) &&
             (local_8f8.TypedValue.Text.TextData.Reference != (ITextData *)0x0)) {
            (**(code **)((longlong)*local_8f8.TypedValue.Text.TextData.Reference + 0x10))();
          }
          goto LAB_1418cc046;
        }
        pFVar12 = (FGuid *)&DAT_00000001;
      }
LAB_1418cbda4:
      uVar25 = this->CurrentTokenIndex + 1;
      this->CurrentTokenIndex = uVar25;
      pTVar23 = this->Tokens;
      param_1 = local_928;
    } while ((int)uVar25 < pTVar23->ArrayNum);
  }
  if (param_2 == (FGuid *)0x0) {
LAB_1418cc025:
    while (0 < (int)local_950) {
      `TExpressionCompiler<char>::CompileGroup'::__l2::<lambda_1>::operator()(&local_948);
    }
    __return_storage_ptr__->bIsSet = false;
  }
  else {
    local_8b0.Object = (FCulture *)0x0;
    local_8b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar14 = FText::AsNumber(&local_408,(param_1->Context).CharacterIndex,
                              (FNumberFormattingOptions *)0x0,&local_8b0);
    local_8c0.Object = (FCulture *)0x0;
    local_8c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_3f8,(param_1->Context).LineNumber,
                              (FNumberFormattingOptions *)0x0,&local_8c0);
    FAnsiString::ConstructFromPtrSize
              (&local_8d0,(param_1->Context).TokenStart,
               *(int *)&(param_1->Context).TokenEnd - *(int *)&(param_1->Context).TokenStart);
    pFVar16 = FText::FromString(&local_3e8,&local_8d0);
    pFVar17 = FText::AsLocalizable_Advanced_LocText
                        (&local_5e8,L"ExpressionParser",L"SyntaxError_UnmatchedGroup",
                         L"Syntax error: Reached end of expression before matching end of group \'{0}\' at line {1}:{2}"
                        );
    pFVar18 = FTextFormat::FTextFormat(&local_3d8,pFVar17,Default);
    pFVar14 = FText::Format<FText,FText,FText>(&local_5f8,pFVar18,pFVar16,pFVar15,pFVar14);
    local_908.TextData.Reference = (pFVar14->TextData).Reference;
    if (local_908.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_908.TextData.Reference + 8))
                (local_908.TextData.Reference,local_938);
    }
    local_908.Flags = pFVar14->Flags;
    FText::FText((FText *)__return_storage_ptr__,&local_908);
    __return_storage_ptr__->bIsSet = true;
    if (local_908.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_908.TextData.Reference + 0x10))();
    }
    if (local_5f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5f8.TextData.Reference + 0x10))();
    }
    if (local_5e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5e8.TextData.Reference + 0x10))();
    }
    if (local_8d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8d0.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8c0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8b0.SharedReferenceCount.ReferenceController);
  }
LAB_1418cc046:
  DestructItems<TExpressionCompiler<char>::FWrappedOperator,int>
            ((FWrappedOperator *)local_958.Data,(int)local_950);
  if ((FWrappedOperator *)local_958.Data != (FWrappedOperator *)0x0) {
    FMemory::Free(local_958.Data);
  }
  return __return_storage_ptr__;
}

// CompileGroup @ 1418cc0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FExpressionError> * __thiscall
TExpressionCompiler<char8_t>::CompileGroup
          (TExpressionCompiler<char8_t> *this,TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionToken<char8_t> *param_1,FGuid *param_2)

{
  int *piVar1;
  FExpressionGrammar *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TOptional<FExpressionError> *pTVar9;
  ulong64 uVar10;
  longlong lVar11;
  FGuid *pFVar12;
  TExpressionToken<char8_t> *pTVar13;
  FText *pFVar14;
  FText *pFVar15;
  FText *pFVar16;
  FText *pFVar17;
  FTextFormat *pFVar18;
  uchar *puVar19;
  FGuid *pFVar20;
  FWrappedOperator *pFVar21;
  FExpressionNode *pFVar22;
  TArray<TExpressionToken<char8_t>,TSizedDefaultAllocator<32>_> *pTVar23;
  FGuid *pFVar24;
  uint uVar25;
  FGuid *pFVar26;
  TExpressionToken<char8_t> *pTVar27;
  undefined1 auStackY_9a8 [32];
  ForAnyElementType local_958;
  undefined8 local_950;
  ForAnyElementType *local_948;
  TExpressionCompiler<char8_t> *local_940;
  undefined1 local_938 [8];
  FGuid *local_930;
  TExpressionToken<char8_t> *local_928;
  undefined1 local_920 [8];
  FText local_918;
  FText local_908;
  TOptional<FExpressionError> local_8f8;
  FUtf8String local_8e0;
  FUtf8String local_8d0;
  TSharedPtr<FCulture,1> local_8c0;
  TSharedPtr<FCulture,1> local_8b0;
  undefined1 local_898 [64];
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined1 local_838 [64];
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined1 local_7d8 [64];
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined1 local_778 [64];
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  FExpressionNode local_718;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined1 local_6b8 [64];
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  FExpressionNode local_658;
  FText local_618;
  FText local_608;
  FText local_5f8;
  FText local_5e8;
  TCompiledToken<char8_t> local_5d8;
  TCompiledToken<char8_t> local_568;
  TCompiledToken<char8_t> local_4f8;
  TCompiledToken<char8_t> local_488;
  FTextFormat local_418;
  FText local_408;
  FText local_3f8;
  FText local_3e8;
  FTextFormat local_3d8;
  FText local_3c8;
  TExpressionToken<char8_t> local_3b8;
  FExpressionNode local_358;
  uint local_318;
  uint uStack_314;
  uint uStack_310;
  uint uStack_30c;
  undefined8 local_308;
  undefined4 local_300;
  int local_2fc;
  uchar local_2f8;
  undefined1 local_2e8 [64];
  uint local_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
  uint uStack_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  uchar local_288;
  undefined1 local_278 [64];
  uint local_238;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  uchar local_218;
  undefined1 local_208 [64];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  EType local_1b0;
  int local_1ac;
  char local_1a8;
  undefined1 local_198 [64];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  EType local_140;
  int local_13c;
  char local_138;
  undefined1 local_128 [64];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  EType local_d0;
  int local_cc;
  char local_c8;
  undefined1 local_b8 [64];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  EType local_60;
  int local_5c;
  char local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_9a8;
  pFVar12 = (FGuid *)0x0;
  local_958.Data = (FScriptContainerElement *)0x0;
  local_950 = 0;
  uVar25 = this->Tokens->ArrayNum - this->CurrentTokenIndex;
  local_930 = param_2;
  local_928 = param_1;
  if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
  }
  if (0 < (int)uVar25) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,uVar25,&local_958,0,(int *)((longlong)&local_950 + 4));
  }
  uVar25 = this->CurrentTokenIndex;
  local_948 = &local_958;
  pTVar23 = this->Tokens;
  local_940 = this;
  if ((int)uVar25 < pTVar23->ArrayNum) {
    do {
      uVar6 = 0;
      if ((int)uVar25 < pTVar23->ArrayNum) {
        uVar6 = ~uVar25 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TOptional<FExpressionError> *)(*pcVar4)();
        return pTVar9;
      }
      pFVar2 = this->Grammar;
      pTVar27 = (TExpressionToken<char8_t> *)
                ((pTVar23->AllocatorInstance).Data + (longlong)(int)uVar25 * 0x60);
      uVar10 = CityHash64((char *)pTVar27,0x10);
      iVar7 = TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FGuid>
                        ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
                          *)pFVar2,(uint)uVar10,(FGuid *)pTVar27);
      pFVar24 = (FGuid *)0x0;
      pFVar20 = pFVar24;
      if (iVar7 != -1) {
        pFVar20 = (FGuid *)(*(longlong *)&pFVar2->Groupings + (longlong)iVar7 * 0x28);
      }
      pFVar26 = pFVar20 + 1;
      if (pFVar20 == (FGuid *)0x0) {
        pFVar26 = pFVar24;
      }
      if (pFVar26 == (FGuid *)0x0) {
        if ((param_2 != (FGuid *)0x0) &&
           ((((pTVar27->Node).TypeId.D == param_2->D && (pTVar27->Node).TypeId.C == param_2->C) &&
            (pTVar27->Node).TypeId.B == param_2->B) && (pTVar27->Node).TypeId.A == param_2->A))
        goto LAB_1418cd495;
        if ((int)pFVar12 == 0) {
          pFVar2 = this->Grammar;
          uVar10 = CityHash64((char *)pTVar27,0x10);
          iVar7 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                            (&pFVar2->PreUnaryOperators,(uint)uVar10,(FGuid *)pTVar27);
          if (iVar7 == -1) {
            pFVar2 = this->Grammar;
            uVar10 = CityHash64((char *)pTVar27,0x10);
            iVar7 = TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<FGuid>
                              ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
                                *)&pFVar2->BinaryOperators,(uint)uVar10,(FGuid *)pTVar27);
            if (iVar7 != -1) {
              lVar11 = (longlong)iVar7 * 0x20 + *(longlong *)&pFVar2->BinaryOperators;
              pFVar12 = (FGuid *)(lVar11 + 0x10);
              if (lVar11 == 0) {
                pFVar12 = pFVar24;
              }
              if (pFVar12 != (FGuid *)0x0) {
                FUtf8String::ConstructFromPtrSize
                          (&local_8e0,(pTVar27->Context).TokenStart,
                           *(int *)&(pTVar27->Context).TokenEnd -
                           *(int *)&(pTVar27->Context).TokenStart);
                pFVar14 = FText::FromString(&local_3c8,&local_8e0);
                pFVar15 = FText::AsLocalizable_Advanced_LocText
                                    (&local_608,L"ExpressionParser",L"SyntaxError_NoBinaryOperand",
                                     L"Syntax error: No operand specified for operator \'{0}\'");
                pFVar18 = FTextFormat::FTextFormat(&local_418,pFVar15,Default);
                pFVar14 = FText::Format<FText>(&local_618,pFVar18,pFVar14);
                local_918.TextData.Reference = (pFVar14->TextData).Reference;
                if (local_918.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_918.TextData.Reference + 8))
                            (local_918.TextData.Reference,local_920);
                }
                local_918.Flags = pFVar14->Flags;
                FText::FText((FText *)__return_storage_ptr__,&local_918);
                __return_storage_ptr__->bIsSet = true;
                if (local_918.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_918.TextData.Reference + 0x10))();
                }
                if (local_618.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_618.TextData.Reference + 0x10))();
                }
                if (local_608.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_608.TextData.Reference + 0x10))();
                }
                if (local_8e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_8e0.Data.AllocatorInstance.Data);
                }
                goto LAB_1418cd4b6;
              }
            }
            pFVar2 = this->Grammar;
            uVar10 = CityHash64((char *)pTVar27,0x10);
            iVar7 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
                    FindIndexByHash<FGuid>
                              (&pFVar2->PostUnaryOperators,(uint)uVar10,(FGuid *)pTVar27);
            if (iVar7 == -1) {
              local_898._0_4_ = 0;
              local_898._4_4_ = 0;
              local_898._8_4_ = 0;
              local_898._12_4_ = 0;
              FExpressionNode::operator=((FExpressionNode *)local_898,(FExpressionNode *)pTVar27);
              local_858 = (pTVar27->Context).TokenStart;
              uStack_850 = (pTVar27->Context).TokenEnd;
              local_2e8._0_4_ = 0;
              local_2e8._4_4_ = 0;
              local_848._0_4_ = (pTVar27->Context).LineNumber;
              local_848._4_4_ = (pTVar27->Context).CharacterIndex;
              local_2e8._8_4_ = 0;
              local_2e8._12_4_ = 0;
              FExpressionNode::operator=((FExpressionNode *)local_2e8,(FExpressionNode *)local_898);
              pFVar12 = (FGuid *)(local_898 + 0x10);
              if (((local_898._12_4_ == 0 && local_898._8_4_ == 0) && local_898._4_4_ == 0) &&
                  local_898._0_4_ == 0) {
                pFVar12 = pFVar24;
              }
              local_2a8 = (uint)local_858;
              uStack_2a4 = local_858._4_4_;
              uStack_2a0 = (uint)uStack_850;
              uStack_29c = uStack_850._4_4_;
              local_298 = local_848;
              local_290 = 0;
              local_288 = '\0';
              if (pFVar12 != (FGuid *)0x0) {
                (*(code *)**(undefined8 **)pFVar12)((uint)local_858,0);
              }
              pFVar3 = (this->Commands).AllocatorInstance.Data;
              if (((pFVar3 <= (FScriptContainerElement *)local_2e8) &&
                  ((FScriptContainerElement *)local_2e8 <
                   pFVar3 + (longlong)(this->Commands).ArrayMax * 0x70)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar4 = (code *)swi(3);
                pTVar9 = (TOptional<FExpressionError> *)(*pcVar4)();
                return pTVar9;
              }
              iVar7 = (this->Commands).ArrayNum;
              piVar1 = &(this->Commands).ArrayMax;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x1070,&(this->Commands).AllocatorInstance,piVar1);
              }
              pFVar3 = (this->Commands).AllocatorInstance.Data;
              (this->Commands).ArrayNum = iVar7 + 1;
              pFVar22 = (FExpressionNode *)(pFVar3 + (longlong)iVar7 * 0x70);
              (pFVar22->TypeId).A = 0;
              (pFVar22->TypeId).B = 0;
              (pFVar22->TypeId).C = 0;
              (pFVar22->TypeId).D = 0;
              FExpressionNode::operator=(pFVar22,(FExpressionNode *)local_2e8);
              pFVar22[1].TypeId.A = local_2a8;
              pFVar22[1].TypeId.B = uStack_2a4;
              pFVar22[1].TypeId.C = uStack_2a0;
              pFVar22[1].TypeId.D = uStack_29c;
              *(undefined8 *)pFVar22[1].InlineBytes = local_298;
              pFVar22[1].InlineBytes[0x10] = '\0';
              *(undefined4 *)(pFVar22[1].InlineBytes + 8) = local_290;
              pFVar22[1].InlineBytes[0x10] = local_288;
              if (local_288 != '\0') {
                *(undefined4 *)(pFVar22[1].InlineBytes + 0xc) = local_28c;
              }
              pFVar12 = (FGuid *)(local_2e8 + 0x10);
              if (((local_2e8._12_4_ == 0 && local_2e8._8_4_ == 0) && local_2e8._4_4_ == 0) &&
                  local_2e8._0_4_ == 0) {
                pFVar12 = pFVar24;
              }
              if (pFVar12 != (FGuid *)0x0) {
                (*(code *)**(undefined8 **)pFVar12)(local_2a8,0);
              }
              pFVar12 = (FGuid *)&DAT_00000001;
            }
            else {
              while (0 < (int)local_950) {
                uVar25 = 0;
                if ((int)((int)local_950 - 1U) < (int)local_950) {
                  uVar25 = ~((int)local_950 - 1U) >> 0x1f;
                }
                iVar7 = (int)local_950;
                if (uVar25 == 0) {
                  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar5) {
                    pcVar4 = (code *)swi(3);
                    pTVar9 = (TOptional<FExpressionError> *)(*pcVar4)();
                    return pTVar9;
                  }
                  iVar7 = (int)local_950;
                }
                if (0 < *(int *)(local_958.Data + (longlong)(iVar7 + -1) * 0x80 + 0x70)) break;
                `TExpressionCompiler<char8_t>::CompileGroup'::__l2::<lambda_1>::operator()
                          (&local_948);
              }
              local_7d8._0_4_ = 0;
              local_7d8._4_4_ = 0;
              local_7d8._8_4_ = 0;
              local_7d8._12_4_ = 0;
              FExpressionNode::operator=((FExpressionNode *)local_7d8,(FExpressionNode *)pTVar27);
              local_798 = (pTVar27->Context).TokenStart;
              uStack_790 = (pTVar27->Context).TokenEnd;
              local_198._0_4_ = 0;
              local_198._4_4_ = 0;
              local_788._0_4_ = (pTVar27->Context).LineNumber;
              local_788._4_4_ = (pTVar27->Context).CharacterIndex;
              local_198._8_4_ = 0;
              local_198._12_4_ = 0;
              FExpressionNode::operator=((FExpressionNode *)local_198,(FExpressionNode *)local_7d8);
              pFVar12 = (FGuid *)(local_7d8 + 0x10);
              if (((local_7d8._12_4_ == 0 && local_7d8._8_4_ == 0) && local_7d8._4_4_ == 0) &&
                  local_7d8._0_4_ == 0) {
                pFVar12 = pFVar24;
              }
              local_158 = (undefined4)local_798;
              uStack_154 = local_798._4_4_;
              uStack_150 = (undefined4)uStack_790;
              uStack_14c = uStack_790._4_4_;
              local_148 = local_788;
              local_140 = PostUnaryOperator;
              local_138 = '\0';
              if (pFVar12 != (FGuid *)0x0) {
                (*(code *)**(undefined8 **)pFVar12)((undefined4)local_798,0);
              }
              iVar7 = (int)local_950;
              if ((int)local_950 == local_950._4_4_) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x1080,&local_958,(int *)((longlong)&local_950 + 4));
              }
              local_950 = CONCAT44(local_950._4_4_,iVar7 + 1);
              pFVar21 = (FWrappedOperator *)(local_958.Data + (longlong)iVar7 * 0x80);
              local_4f8._0_8_ = 0;
              local_4f8._8_8_ = 0;
              FExpressionNode::operator=((FExpressionNode *)&local_4f8,(FExpressionNode *)local_198)
              ;
              local_4f8._68_4_ = uStack_154;
              local_4f8._64_4_ = local_158;
              local_4f8._76_4_ = uStack_14c;
              local_4f8._72_4_ = uStack_150;
              local_4f8.Type = local_140;
              local_4f8._80_8_ = local_148;
              local_4f8.ShortCircuitIndex.bIsSet = (bool)local_138;
              if (local_138 != '\0') {
                local_4f8.ShortCircuitIndex.TypedValue = local_13c;
              }
              FWrappedOperator::FWrappedOperator(pFVar21,&local_4f8,0,-1);
              pFVar20 = (FGuid *)(local_198 + 0x10);
              if (((local_198._12_4_ == 0 && local_198._8_4_ == 0) && local_198._4_4_ == 0) &&
                  local_198._0_4_ == 0) {
                pFVar20 = pFVar24;
              }
              pFVar12 = (FGuid *)&DAT_00000001;
              if (pFVar20 != (FGuid *)0x0) {
                (*(code *)**(undefined8 **)pFVar20)(pFVar20,0);
              }
            }
          }
          else {
            local_838._0_4_ = 0;
            local_838._4_4_ = 0;
            local_838._8_4_ = 0;
            local_838._12_4_ = 0;
            FExpressionNode::operator=((FExpressionNode *)local_838,(FExpressionNode *)pTVar27);
            local_7f8 = (pTVar27->Context).TokenStart;
            uStack_7f0 = (pTVar27->Context).TokenEnd;
            local_208._0_4_ = 0;
            local_208._4_4_ = 0;
            local_7e8._0_4_ = (pTVar27->Context).LineNumber;
            local_7e8._4_4_ = (pTVar27->Context).CharacterIndex;
            local_208._8_4_ = 0;
            local_208._12_4_ = 0;
            FExpressionNode::operator=((FExpressionNode *)local_208,(FExpressionNode *)local_838);
            pFVar20 = (FGuid *)(local_838 + 0x10);
            if (((local_838._12_4_ == 0 && local_838._8_4_ == 0) && local_838._4_4_ == 0) &&
                local_838._0_4_ == 0) {
              pFVar20 = pFVar24;
            }
            local_1c8 = (undefined4)local_7f8;
            uStack_1c4 = local_7f8._4_4_;
            uStack_1c0 = (undefined4)uStack_7f0;
            uStack_1bc = uStack_7f0._4_4_;
            local_1b8 = local_7e8;
            local_1b0 = PreUnaryOperator;
            local_1a8 = (char)pFVar12;
            if (pFVar20 != (FGuid *)0x0) {
              (*(code *)**(undefined8 **)pFVar20)((undefined4)local_7f8,0);
            }
            iVar7 = (int)local_950;
            if ((int)local_950 == local_950._4_4_) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x1080,&local_958,(int *)((longlong)&local_950 + 4));
            }
            local_950 = CONCAT44(local_950._4_4_,iVar7 + 1);
            pFVar21 = (FWrappedOperator *)(local_958.Data + (longlong)iVar7 * 0x80);
            local_568._0_8_ = 0;
            local_568._8_8_ = 0;
            FExpressionNode::operator=((FExpressionNode *)&local_568,(FExpressionNode *)local_208);
            local_568._68_4_ = uStack_1c4;
            local_568._64_4_ = local_1c8;
            local_568._76_4_ = uStack_1bc;
            local_568._72_4_ = uStack_1c0;
            local_568.Type = local_1b0;
            local_568._80_8_ = local_1b8;
            local_568.ShortCircuitIndex.bIsSet = (bool)local_1a8;
            if (local_1a8 != '\0') {
              local_568.ShortCircuitIndex.TypedValue = local_1ac;
            }
            FWrappedOperator::FWrappedOperator(pFVar21,&local_568,0,-1);
            pFVar20 = (FGuid *)(local_208 + 0x10);
            if (((local_208._12_4_ == 0 && local_208._8_4_ == 0) && local_208._4_4_ == 0) &&
                local_208._0_4_ == 0) {
              pFVar20 = pFVar24;
            }
            if (pFVar20 != (FGuid *)0x0) {
              (*(code *)**(undefined8 **)pFVar20)(pFVar20,0);
            }
          }
        }
        else if ((int)pFVar12 == 1) {
          pFVar2 = this->Grammar;
          uVar10 = CityHash64((char *)pTVar27,0x10);
          iVar7 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                            (&pFVar2->PostUnaryOperators,(uint)uVar10,(FGuid *)pTVar27);
          if (iVar7 == -1) {
            pFVar2 = this->Grammar;
            uVar10 = CityHash64((char *)pTVar27,0x10);
            iVar7 = TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<FGuid>
                              ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
                                *)&pFVar2->BinaryOperators,(uint)uVar10,(FGuid *)pTVar27);
            if (iVar7 != -1) {
              lVar11 = (longlong)iVar7 * 0x20 + *(longlong *)&pFVar2->BinaryOperators;
              pFVar12 = (FGuid *)(lVar11 + 0x10);
              if (lVar11 == 0) {
                pFVar12 = pFVar24;
              }
              if (pFVar12 != (FGuid *)0x0) {
                while (0 < (int)local_950) {
                  uVar25 = pFVar12->A;
                  uVar6 = 0;
                  if ((int)((int)local_950 - 1U) < (int)local_950) {
                    uVar6 = ~((int)local_950 - 1U) >> 0x1f;
                  }
                  iVar7 = (int)local_950;
                  if (uVar6 == 0) {
                    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar5) {
                      pcVar4 = (code *)swi(3);
                      pTVar9 = (TOptional<FExpressionError> *)(*pcVar4)();
                      return pTVar9;
                    }
                    iVar7 = (int)local_950;
                  }
                  if ((char)pFVar12->B == '\x01') {
                    bVar5 = *(int *)(local_958.Data + (longlong)(iVar7 + -1) * 0x80 + 0x70) <=
                            (int)uVar25;
                  }
                  else {
                    bVar5 = *(int *)(local_958.Data + (longlong)(iVar7 + -1) * 0x80 + 0x70) <
                            (int)uVar25;
                  }
                  if (!bVar5) break;
                  `TExpressionCompiler<char8_t>::CompileGroup'::__l2::<lambda_1>::operator()
                            (&local_948);
                }
                iVar7 = -1;
                if (*(char *)((longlong)&pFVar12->B + 1) != '\0') {
                  puVar19 = (pTVar27->Node).InlineBytes;
                  iVar7 = (this->Commands).ArrayNum;
                  if ((((pTVar27->Node).TypeId.D == 0 && (pTVar27->Node).TypeId.C == 0) &&
                      (pTVar27->Node).TypeId.B == 0) && (pTVar27->Node).TypeId.A == 0) {
                    puVar19 = (uchar *)0x0;
                  }
                  if (puVar19 == (uchar *)0x0) {
                    local_658.TypeId.A = 0;
                    local_658.TypeId.B = 0;
                    local_658.InlineBytes[0] = '\0';
                    local_658.InlineBytes[1] = '\0';
                    local_658.InlineBytes[2] = '\0';
                    local_658.InlineBytes[3] = '\0';
                    local_658.InlineBytes[4] = '\0';
                    local_658.InlineBytes[5] = '\0';
                    local_658.InlineBytes[6] = '\0';
                    local_658.InlineBytes[7] = '\0';
                    local_658.InlineBytes[8] = '\0';
                    local_658.InlineBytes[9] = '\0';
                    local_658.InlineBytes[10] = '\0';
                    local_658.InlineBytes[0xb] = '\0';
                    local_658.InlineBytes[0xc] = '\0';
                    local_658.InlineBytes[0xd] = '\0';
                    local_658.InlineBytes[0xe] = '\0';
                    local_658.InlineBytes[0xf] = '\0';
                    local_658.InlineBytes[0x10] = '\0';
                    local_658.InlineBytes[0x11] = '\0';
                    local_658.InlineBytes[0x12] = '\0';
                    local_658.InlineBytes[0x13] = '\0';
                    local_658.InlineBytes[0x14] = '\0';
                    local_658.InlineBytes[0x15] = '\0';
                    local_658.InlineBytes[0x16] = '\0';
                    local_658.InlineBytes[0x17] = '\0';
                    local_658.InlineBytes[0x18] = '\0';
                    local_658.InlineBytes[0x19] = '\0';
                    local_658.InlineBytes[0x1a] = '\0';
                    local_658.InlineBytes[0x1b] = '\0';
                    local_658.InlineBytes[0x1c] = '\0';
                    local_658.InlineBytes[0x1d] = '\0';
                    local_658.InlineBytes[0x1e] = '\0';
                    local_658.InlineBytes[0x1f] = '\0';
                    local_658.InlineBytes[0x20] = '\0';
                    local_658.InlineBytes[0x21] = '\0';
                    local_658.InlineBytes[0x22] = '\0';
                    local_658.InlineBytes[0x23] = '\0';
                    local_658.InlineBytes[0x24] = '\0';
                    local_658.InlineBytes[0x25] = '\0';
                    local_658.InlineBytes[0x26] = '\0';
                    local_658.InlineBytes[0x27] = '\0';
                    local_658.InlineBytes[0x28] = '\0';
                    local_658.InlineBytes[0x29] = '\0';
                    local_658.InlineBytes[0x2a] = '\0';
                    local_658.InlineBytes[0x2b] = '\0';
                    local_658.InlineBytes[0x2c] = '\0';
                    local_658.InlineBytes[0x2d] = '\0';
                    local_658.InlineBytes[0x2e] = '\0';
                    local_658.InlineBytes[0x2f] = '\0';
                    local_658.TypeId.C = 0;
                    local_658.TypeId.D = 0;
                  }
                  else {
                    (**(code **)(*(longlong *)puVar19 + 0x18))(puVar19,&local_658);
                  }
                  pTVar13 = TExpressionToken<char8_t>::TExpressionToken<char8_t>
                                      (&local_3b8,&pTVar27->Context,&local_658);
                  local_358.TypeId.A = 0;
                  local_358.TypeId.B = 0;
                  local_358.TypeId.C = 0;
                  local_358.TypeId.D = 0;
                  FExpressionNode::operator=(&local_358,&pTVar13->Node);
                  local_318 = *(uint *)&(pTVar13->Context).TokenStart;
                  uStack_314 = *(uint *)((longlong)&(pTVar13->Context).TokenStart + 4);
                  uStack_310 = *(uint *)&(pTVar13->Context).TokenEnd;
                  uStack_30c = *(uint *)((longlong)&(pTVar13->Context).TokenEnd + 4);
                  puVar19 = (pTVar13->Node).InlineBytes;
                  local_308._0_4_ = (pTVar13->Context).LineNumber;
                  local_308._4_4_ = (pTVar13->Context).CharacterIndex;
                  local_300 = 4;
                  local_2f8 = '\x01';
                  if ((((pTVar13->Node).TypeId.D == 0 && (pTVar13->Node).TypeId.C == 0) &&
                      (pTVar13->Node).TypeId.B == 0) && (pTVar13->Node).TypeId.A == 0) {
                    puVar19 = (uchar *)0x0;
                  }
                  local_2fc = iVar7;
                  if (puVar19 != (uchar *)0x0) {
                    (*(code *)**(undefined8 **)puVar19)(local_318,0);
                  }
                  pFVar22 = (FExpressionNode *)(this->Commands).AllocatorInstance.Data;
                  if (((pFVar22 <= &local_358) &&
                      (&local_358 <
                       (FExpressionNode *)
                       ((longlong)pFVar22 + (longlong)(this->Commands).ArrayMax * 0x70))) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar5)) {
                    pcVar4 = (code *)swi(3);
                    pTVar9 = (TOptional<FExpressionError> *)(*pcVar4)();
                    return pTVar9;
                  }
                  iVar7 = (this->Commands).ArrayNum;
                  piVar1 = &(this->Commands).ArrayMax;
                  if (iVar7 == *piVar1) {
                    iVar7 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x1070,&(this->Commands).AllocatorInstance,piVar1);
                  }
                  (this->Commands).ArrayNum = iVar7 + 1;
                  pFVar22 = (FExpressionNode *)
                            ((this->Commands).AllocatorInstance.Data + (longlong)iVar7 * 0x70);
                  (pFVar22->TypeId).A = 0;
                  (pFVar22->TypeId).B = 0;
                  (pFVar22->TypeId).C = 0;
                  (pFVar22->TypeId).D = 0;
                  FExpressionNode::operator=(pFVar22,&local_358);
                  pFVar22[1].TypeId.A = local_318;
                  pFVar22[1].TypeId.B = uStack_314;
                  pFVar22[1].TypeId.C = uStack_310;
                  pFVar22[1].TypeId.D = uStack_30c;
                  *(undefined8 *)pFVar22[1].InlineBytes = local_308;
                  pFVar22[1].InlineBytes[0x10] = '\0';
                  *(undefined4 *)(pFVar22[1].InlineBytes + 8) = local_300;
                  pFVar22[1].InlineBytes[0x10] = local_2f8;
                  if (local_2f8 != '\0') {
                    *(int *)(pFVar22[1].InlineBytes + 0xc) = local_2fc;
                  }
                  puVar19 = local_358.InlineBytes;
                  if (((local_358.TypeId.D == 0 && local_358.TypeId.C == 0) &&
                      local_358.TypeId.B == 0) && local_358.TypeId.A == 0) {
                    puVar19 = (uchar *)0x0;
                  }
                  if (puVar19 != (uchar *)0x0) {
                    (*(code *)**(undefined8 **)puVar19)(local_318,0);
                  }
                  iVar7 = (this->Commands).ArrayNum + -1;
                  param_2 = local_930;
                }
                local_718.TypeId.A = 0;
                local_718.TypeId.B = 0;
                local_718.TypeId.C = 0;
                local_718.TypeId.D = 0;
                FExpressionNode::operator=(&local_718,(FExpressionNode *)pTVar27);
                local_6d8 = (pTVar27->Context).TokenStart;
                uStack_6d0 = (pTVar27->Context).TokenEnd;
                local_128._0_4_ = 0;
                local_128._4_4_ = 0;
                local_6c8._0_4_ = (pTVar27->Context).LineNumber;
                local_6c8._4_4_ = (pTVar27->Context).CharacterIndex;
                local_128._8_4_ = 0;
                local_128._12_4_ = 0;
                FExpressionNode::operator=((FExpressionNode *)local_128,&local_718);
                puVar19 = local_718.InlineBytes;
                if (((local_718.TypeId.D == 0 && local_718.TypeId.C == 0) && local_718.TypeId.B == 0
                    ) && local_718.TypeId.A == 0) {
                  puVar19 = (uchar *)0x0;
                }
                local_e8 = (undefined4)local_6d8;
                uStack_e4 = local_6d8._4_4_;
                uStack_e0 = (undefined4)uStack_6d0;
                uStack_dc = uStack_6d0._4_4_;
                local_d8 = local_6c8;
                local_d0 = BinaryOperator;
                local_c8 = '\0';
                if (puVar19 != (uchar *)0x0) {
                  (*(code *)**(undefined8 **)puVar19)((undefined4)local_6d8,0);
                }
                iVar8 = (int)local_950;
                if ((int)local_950 == local_950._4_4_) {
                  iVar8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x1080,&local_958,(int *)((longlong)&local_950 + 4));
                }
                local_950 = CONCAT44(local_950._4_4_,iVar8 + 1);
                uVar25 = pFVar12->A;
                pFVar12 = (FGuid *)0x0;
                pFVar21 = (FWrappedOperator *)(local_958.Data + (longlong)iVar8 * 0x80);
                local_5d8._0_8_ = 0;
                local_5d8._8_8_ = 0;
                FExpressionNode::operator=
                          ((FExpressionNode *)&local_5d8,(FExpressionNode *)local_128);
                local_5d8._68_4_ = uStack_e4;
                local_5d8._64_4_ = local_e8;
                local_5d8._76_4_ = uStack_dc;
                local_5d8._72_4_ = uStack_e0;
                local_5d8.Type = local_d0;
                local_5d8._80_8_ = local_d8;
                local_5d8.ShortCircuitIndex.bIsSet = (bool)local_c8;
                if (local_c8 != '\0') {
                  local_5d8.ShortCircuitIndex.TypedValue = local_cc;
                }
                FWrappedOperator::FWrappedOperator(pFVar21,&local_5d8,uVar25,iVar7);
                pFVar20 = (FGuid *)(local_128 + 0x10);
                if (((local_128._12_4_ == 0 && local_128._8_4_ == 0) && local_128._4_4_ == 0) &&
                    local_128._0_4_ == 0) {
                  pFVar20 = pFVar12;
                }
                if (pFVar20 != (FGuid *)0x0) {
                  (*(code *)**(undefined8 **)pFVar20)(pFVar20,0);
                }
                goto LAB_1418cd214;
              }
            }
            local_6b8._0_4_ = 0;
            local_6b8._4_4_ = 0;
            local_6b8._8_4_ = 0;
            local_6b8._12_4_ = 0;
            FExpressionNode::operator=((FExpressionNode *)local_6b8,(FExpressionNode *)pTVar27);
            local_678 = (pTVar27->Context).TokenStart;
            uStack_670 = (pTVar27->Context).TokenEnd;
            local_278._0_4_ = 0;
            local_278._4_4_ = 0;
            local_668._0_4_ = (pTVar27->Context).LineNumber;
            local_668._4_4_ = (pTVar27->Context).CharacterIndex;
            local_278._8_4_ = 0;
            local_278._12_4_ = 0;
            FExpressionNode::operator=((FExpressionNode *)local_278,(FExpressionNode *)local_6b8);
            pFVar12 = (FGuid *)(local_6b8 + 0x10);
            if (((local_6b8._12_4_ == 0 && local_6b8._8_4_ == 0) && local_6b8._4_4_ == 0) &&
                local_6b8._0_4_ == 0) {
              pFVar12 = pFVar24;
            }
            local_238 = (uint)local_678;
            uStack_234 = local_678._4_4_;
            uStack_230 = (uint)uStack_670;
            uStack_22c = uStack_670._4_4_;
            local_228 = local_668;
            local_220 = 0;
            local_218 = '\0';
            if (pFVar12 != (FGuid *)0x0) {
              (*(code *)**(undefined8 **)pFVar12)((uint)local_678,0);
            }
            pFVar3 = (this->Commands).AllocatorInstance.Data;
            if (((pFVar3 <= (FScriptContainerElement *)local_278) &&
                ((FScriptContainerElement *)local_278 <
                 pFVar3 + (longlong)(this->Commands).ArrayMax * 0x70)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar9 = (TOptional<FExpressionError> *)(*pcVar4)();
              return pTVar9;
            }
            iVar7 = (this->Commands).ArrayNum;
            piVar1 = &(this->Commands).ArrayMax;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x1070,&(this->Commands).AllocatorInstance,piVar1);
            }
            pFVar3 = (this->Commands).AllocatorInstance.Data;
            (this->Commands).ArrayNum = iVar7 + 1;
            pFVar22 = (FExpressionNode *)(pFVar3 + (longlong)iVar7 * 0x70);
            (pFVar22->TypeId).A = 0;
            (pFVar22->TypeId).B = 0;
            (pFVar22->TypeId).C = 0;
            (pFVar22->TypeId).D = 0;
            FExpressionNode::operator=(pFVar22,(FExpressionNode *)local_278);
            pFVar22[1].TypeId.A = local_238;
            pFVar22[1].TypeId.B = uStack_234;
            pFVar22[1].TypeId.C = uStack_230;
            pFVar22[1].TypeId.D = uStack_22c;
            *(undefined8 *)pFVar22[1].InlineBytes = local_228;
            pFVar22[1].InlineBytes[0x10] = '\0';
            *(undefined4 *)(pFVar22[1].InlineBytes + 8) = local_220;
            pFVar22[1].InlineBytes[0x10] = local_218;
            if (local_218 != '\0') {
              *(undefined4 *)(pFVar22[1].InlineBytes + 0xc) = local_21c;
            }
            pFVar20 = (FGuid *)(local_278 + 0x10);
            if (((local_278._12_4_ == 0 && local_278._8_4_ == 0) && local_278._4_4_ == 0) &&
                local_278._0_4_ == 0) {
              pFVar20 = pFVar24;
            }
            pFVar12 = pFVar24;
            if (pFVar20 != (FGuid *)0x0) {
              (*(code *)**(undefined8 **)pFVar20)(local_238,0);
            }
          }
          else {
            while (0 < (int)local_950) {
              uVar25 = 0;
              if ((int)((int)local_950 - 1U) < (int)local_950) {
                uVar25 = ~((int)local_950 - 1U) >> 0x1f;
              }
              iVar7 = (int)local_950;
              if (uVar25 == 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pTVar9 = (TOptional<FExpressionError> *)(*pcVar4)();
                  return pTVar9;
                }
                iVar7 = (int)local_950;
              }
              if (0 < *(int *)(local_958.Data + (longlong)(iVar7 + -1) * 0x80 + 0x70)) break;
              `TExpressionCompiler<char8_t>::CompileGroup'::__l2::<lambda_1>::operator()(&local_948)
              ;
            }
            local_778._0_4_ = 0;
            local_778._4_4_ = 0;
            local_778._8_4_ = 0;
            local_778._12_4_ = 0;
            FExpressionNode::operator=((FExpressionNode *)local_778,(FExpressionNode *)pTVar27);
            local_738 = (pTVar27->Context).TokenStart;
            uStack_730 = (pTVar27->Context).TokenEnd;
            local_b8._0_4_ = 0;
            local_b8._4_4_ = 0;
            local_728._0_4_ = (pTVar27->Context).LineNumber;
            local_728._4_4_ = (pTVar27->Context).CharacterIndex;
            local_b8._8_4_ = 0;
            local_b8._12_4_ = 0;
            FExpressionNode::operator=((FExpressionNode *)local_b8,(FExpressionNode *)local_778);
            pFVar20 = (FGuid *)(local_778 + 0x10);
            if (((local_778._12_4_ == 0 && local_778._8_4_ == 0) && local_778._4_4_ == 0) &&
                local_778._0_4_ == 0) {
              pFVar20 = pFVar24;
            }
            local_78 = (undefined4)local_738;
            uStack_74 = local_738._4_4_;
            uStack_70 = (undefined4)uStack_730;
            uStack_6c = uStack_730._4_4_;
            local_68 = local_728;
            local_60 = PostUnaryOperator;
            local_58 = '\0';
            if (pFVar20 != (FGuid *)0x0) {
              (*(code *)**(undefined8 **)pFVar20)((undefined4)local_738,0);
            }
            iVar7 = (int)local_950;
            if ((int)local_950 == local_950._4_4_) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x1080,&local_958,(int *)((longlong)&local_950 + 4));
            }
            local_950 = CONCAT44(local_950._4_4_,iVar7 + 1);
            pFVar21 = (FWrappedOperator *)(local_958.Data + (longlong)iVar7 * 0x80);
            local_488._0_8_ = 0;
            local_488._8_8_ = 0;
            FExpressionNode::operator=((FExpressionNode *)&local_488,(FExpressionNode *)local_b8);
            local_488._68_4_ = uStack_74;
            local_488._64_4_ = local_78;
            local_488._76_4_ = uStack_6c;
            local_488._72_4_ = uStack_70;
            local_488.Type = local_60;
            local_488._80_8_ = local_68;
            local_488.ShortCircuitIndex.bIsSet = (bool)local_58;
            if (local_58 != '\0') {
              local_488.ShortCircuitIndex.TypedValue = local_5c;
            }
            FWrappedOperator::FWrappedOperator(pFVar21,&local_488,0,-1);
            pFVar20 = (FGuid *)(local_b8 + 0x10);
            if (((local_b8._12_4_ == 0 && local_b8._8_4_ == 0) && local_b8._4_4_ == 0) &&
                local_b8._0_4_ == 0) {
              pFVar20 = pFVar24;
            }
            if (pFVar20 != (FGuid *)0x0) {
              (*(code *)**(undefined8 **)pFVar20)(pFVar20,0);
            }
          }
        }
      }
      else {
        this->CurrentTokenIndex = this->CurrentTokenIndex + 1;
        CompileGroup(this,&local_8f8,pTVar27,pFVar26);
        if (local_8f8.bIsSet != false) {
          __return_storage_ptr__->bIsSet = local_8f8.bIsSet;
          FText::FText((FText *)__return_storage_ptr__,(FText *)&local_8f8);
          if ((local_8f8.bIsSet != false) &&
             (local_8f8.TypedValue.Text.TextData.Reference != (ITextData *)0x0)) {
            (**(code **)((longlong)*local_8f8.TypedValue.Text.TextData.Reference + 0x10))();
          }
          goto LAB_1418cd4b6;
        }
        pFVar12 = (FGuid *)&DAT_00000001;
      }
LAB_1418cd214:
      uVar25 = this->CurrentTokenIndex + 1;
      this->CurrentTokenIndex = uVar25;
      pTVar23 = this->Tokens;
      param_1 = local_928;
    } while ((int)uVar25 < pTVar23->ArrayNum);
  }
  if (param_2 == (FGuid *)0x0) {
LAB_1418cd495:
    while (0 < (int)local_950) {
      `TExpressionCompiler<char8_t>::CompileGroup'::__l2::<lambda_1>::operator()(&local_948);
    }
    __return_storage_ptr__->bIsSet = false;
  }
  else {
    local_8b0.Object = (FCulture *)0x0;
    local_8b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar14 = FText::AsNumber(&local_408,(param_1->Context).CharacterIndex,
                              (FNumberFormattingOptions *)0x0,&local_8b0);
    local_8c0.Object = (FCulture *)0x0;
    local_8c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_3f8,(param_1->Context).LineNumber,
                              (FNumberFormattingOptions *)0x0,&local_8c0);
    FUtf8String::ConstructFromPtrSize
              (&local_8d0,(param_1->Context).TokenStart,
               *(int *)&(param_1->Context).TokenEnd - *(int *)&(param_1->Context).TokenStart);
    pFVar16 = FText::FromString(&local_3e8,&local_8d0);
    pFVar17 = FText::AsLocalizable_Advanced_LocText
                        (&local_5e8,L"ExpressionParser",L"SyntaxError_UnmatchedGroup",
                         L"Syntax error: Reached end of expression before matching end of group \'{0}\' at line {1}:{2}"
                        );
    pFVar18 = FTextFormat::FTextFormat(&local_3d8,pFVar17,Default);
    pFVar14 = FText::Format<FText,FText,FText>(&local_5f8,pFVar18,pFVar16,pFVar15,pFVar14);
    local_908.TextData.Reference = (pFVar14->TextData).Reference;
    if (local_908.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_908.TextData.Reference + 8))
                (local_908.TextData.Reference,local_938);
    }
    local_908.Flags = pFVar14->Flags;
    FText::FText((FText *)__return_storage_ptr__,&local_908);
    __return_storage_ptr__->bIsSet = true;
    if (local_908.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_908.TextData.Reference + 0x10))();
    }
    if (local_5f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5f8.TextData.Reference + 0x10))();
    }
    if (local_5e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5e8.TextData.Reference + 0x10))();
    }
    if (local_8d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8d0.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8c0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8b0.SharedReferenceCount.ReferenceController);
  }
LAB_1418cd4b6:
  DestructItems<TExpressionCompiler<char8_t>::FWrappedOperator,int>
            ((FWrappedOperator *)local_958.Data,(int)local_950);
  if ((FWrappedOperator *)local_958.Data != (FWrappedOperator *)0x0) {
    FMemory::Free(local_958.Data);
  }
  return __return_storage_ptr__;
}

// CompileGroup @ 1418cd520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FExpressionError> * __thiscall
TExpressionCompiler<wchar_t>::CompileGroup
          (TExpressionCompiler<wchar_t> *this,TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionToken<wchar_t> *param_1,FGuid *param_2)

{
  int *piVar1;
  FExpressionGrammar *pFVar2;
  FScriptContainerElement *pFVar3;
  wchar_t *pwVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  TOptional<FExpressionError> *pTVar10;
  ulong64 uVar11;
  longlong lVar12;
  FGuid *pFVar13;
  TExpressionToken<wchar_t> *pTVar14;
  FText *pFVar15;
  FText *pFVar16;
  FText *pFVar17;
  FText *pFVar18;
  FTextFormat *pFVar19;
  uchar *puVar20;
  FGuid *pFVar21;
  FWrappedOperator *pFVar22;
  FExpressionNode *pFVar23;
  TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_> *pTVar24;
  FGuid *pFVar25;
  uint uVar26;
  FGuid *pFVar27;
  TExpressionToken<wchar_t> *pTVar28;
  undefined1 auStackY_9a8 [32];
  ForAnyElementType local_958;
  undefined8 local_950;
  ForAnyElementType *local_948;
  TExpressionCompiler<wchar_t> *local_940;
  undefined1 local_938 [8];
  FGuid *local_930;
  TExpressionToken<wchar_t> *local_928;
  undefined1 local_920 [8];
  FText local_918;
  FText local_908;
  TOptional<FExpressionError> local_8f8;
  FString local_8e0;
  FString local_8d0;
  TSharedPtr<FCulture,1> local_8c0;
  TSharedPtr<FCulture,1> local_8b0;
  undefined1 local_898 [64];
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined1 local_838 [64];
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined1 local_7d8 [64];
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined1 local_778 [64];
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  FExpressionNode local_718;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined1 local_6b8 [64];
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  FExpressionNode local_658;
  FText local_618;
  FText local_608;
  FText local_5f8;
  FText local_5e8;
  TCompiledToken<wchar_t> local_5d8;
  TCompiledToken<wchar_t> local_568;
  TCompiledToken<wchar_t> local_4f8;
  TCompiledToken<wchar_t> local_488;
  FTextFormat local_418;
  FText local_408;
  FText local_3f8;
  FText local_3e8;
  FTextFormat local_3d8;
  FText local_3c8;
  TExpressionToken<wchar_t> local_3b8;
  FExpressionNode local_358;
  uint local_318;
  uint uStack_314;
  uint uStack_310;
  uint uStack_30c;
  undefined8 local_308;
  undefined4 local_300;
  int local_2fc;
  uchar local_2f8;
  undefined1 local_2e8 [64];
  uint local_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
  uint uStack_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  uchar local_288;
  undefined1 local_278 [64];
  uint local_238;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  uchar local_218;
  undefined1 local_208 [64];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  EType local_1b0;
  int local_1ac;
  char local_1a8;
  undefined1 local_198 [64];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  EType local_140;
  int local_13c;
  char local_138;
  undefined1 local_128 [64];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  EType local_d0;
  int local_cc;
  char local_c8;
  undefined1 local_b8 [64];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  EType local_60;
  int local_5c;
  char local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_9a8;
  pFVar13 = (FGuid *)0x0;
  local_958.Data = (FScriptContainerElement *)0x0;
  local_950 = 0;
  uVar26 = this->Tokens->ArrayNum - this->CurrentTokenIndex;
  local_930 = param_2;
  local_928 = param_1;
  if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
  }
  if (0 < (int)uVar26) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,uVar26,&local_958,0,(int *)((longlong)&local_950 + 4));
  }
  uVar26 = this->CurrentTokenIndex;
  local_948 = &local_958;
  pTVar24 = this->Tokens;
  local_940 = this;
  if ((int)uVar26 < pTVar24->ArrayNum) {
    do {
      uVar7 = 0;
      if ((int)uVar26 < pTVar24->ArrayNum) {
        uVar7 = ~uVar26 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TOptional<FExpressionError> *)(*pcVar5)();
        return pTVar10;
      }
      pFVar2 = this->Grammar;
      pTVar28 = (TExpressionToken<wchar_t> *)
                ((pTVar24->AllocatorInstance).Data + (longlong)(int)uVar26 * 0x60);
      uVar11 = CityHash64((char *)pTVar28,0x10);
      iVar8 = TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FGuid>
                        ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
                          *)pFVar2,(uint)uVar11,(FGuid *)pTVar28);
      pFVar25 = (FGuid *)0x0;
      pFVar21 = pFVar25;
      if (iVar8 != -1) {
        pFVar21 = (FGuid *)(*(longlong *)&pFVar2->Groupings + (longlong)iVar8 * 0x28);
      }
      pFVar27 = pFVar21 + 1;
      if (pFVar21 == (FGuid *)0x0) {
        pFVar27 = pFVar25;
      }
      if (pFVar27 == (FGuid *)0x0) {
        if ((param_2 != (FGuid *)0x0) &&
           ((((pTVar28->Node).TypeId.D == param_2->D && (pTVar28->Node).TypeId.C == param_2->C) &&
            (pTVar28->Node).TypeId.B == param_2->B) && (pTVar28->Node).TypeId.A == param_2->A))
        goto LAB_1418ce909;
        if ((int)pFVar13 == 0) {
          pFVar2 = this->Grammar;
          uVar11 = CityHash64((char *)pTVar28,0x10);
          iVar8 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                            (&pFVar2->PreUnaryOperators,(uint)uVar11,(FGuid *)pTVar28);
          if (iVar8 == -1) {
            pFVar2 = this->Grammar;
            uVar11 = CityHash64((char *)pTVar28,0x10);
            iVar8 = TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<FGuid>
                              ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
                                *)&pFVar2->BinaryOperators,(uint)uVar11,(FGuid *)pTVar28);
            if (iVar8 != -1) {
              lVar12 = (longlong)iVar8 * 0x20 + *(longlong *)&pFVar2->BinaryOperators;
              pFVar13 = (FGuid *)(lVar12 + 0x10);
              if (lVar12 == 0) {
                pFVar13 = pFVar25;
              }
              if (pFVar13 != (FGuid *)0x0) {
                pwVar4 = (pTVar28->Context).TokenStart;
                ::FString::ConstructFromPtrSize
                          (&local_8e0,pwVar4,
                           (int)((longlong)(pTVar28->Context).TokenEnd - (longlong)pwVar4 >> 1));
                pFVar15 = FText::FromString(&local_3c8,&local_8e0);
                pFVar16 = FText::AsLocalizable_Advanced_LocText
                                    (&local_608,L"ExpressionParser",L"SyntaxError_NoBinaryOperand",
                                     L"Syntax error: No operand specified for operator \'{0}\'");
                pFVar19 = FTextFormat::FTextFormat(&local_418,pFVar16,Default);
                pFVar15 = FText::Format<FText>(&local_618,pFVar19,pFVar15);
                local_918.TextData.Reference = (pFVar15->TextData).Reference;
                if (local_918.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_918.TextData.Reference + 8))
                            (local_918.TextData.Reference,local_920);
                }
                local_918.Flags = pFVar15->Flags;
                FText::FText((FText *)__return_storage_ptr__,&local_918);
                __return_storage_ptr__->bIsSet = true;
                if (local_918.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_918.TextData.Reference + 0x10))();
                }
                if (local_618.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_618.TextData.Reference + 0x10))();
                }
                if (local_608.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_608.TextData.Reference + 0x10))();
                }
                if (local_8e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_8e0.Data.AllocatorInstance.Data);
                }
                goto LAB_1418ce926;
              }
            }
            pFVar2 = this->Grammar;
            uVar11 = CityHash64((char *)pTVar28,0x10);
            iVar8 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
                    FindIndexByHash<FGuid>
                              (&pFVar2->PostUnaryOperators,(uint)uVar11,(FGuid *)pTVar28);
            if (iVar8 == -1) {
              local_898._0_4_ = 0;
              local_898._4_4_ = 0;
              local_898._8_4_ = 0;
              local_898._12_4_ = 0;
              FExpressionNode::operator=((FExpressionNode *)local_898,(FExpressionNode *)pTVar28);
              local_858 = (pTVar28->Context).TokenStart;
              uStack_850 = (pTVar28->Context).TokenEnd;
              local_2e8._0_4_ = 0;
              local_2e8._4_4_ = 0;
              local_848._0_4_ = (pTVar28->Context).LineNumber;
              local_848._4_4_ = (pTVar28->Context).CharacterIndex;
              local_2e8._8_4_ = 0;
              local_2e8._12_4_ = 0;
              FExpressionNode::operator=((FExpressionNode *)local_2e8,(FExpressionNode *)local_898);
              pFVar13 = (FGuid *)(local_898 + 0x10);
              if (((local_898._12_4_ == 0 && local_898._8_4_ == 0) && local_898._4_4_ == 0) &&
                  local_898._0_4_ == 0) {
                pFVar13 = pFVar25;
              }
              local_2a8 = (uint)local_858;
              uStack_2a4 = local_858._4_4_;
              uStack_2a0 = (uint)uStack_850;
              uStack_29c = uStack_850._4_4_;
              local_298 = local_848;
              local_290 = 0;
              local_288 = '\0';
              if (pFVar13 != (FGuid *)0x0) {
                (*(code *)**(undefined8 **)pFVar13)((uint)local_858,0);
              }
              pFVar3 = (this->Commands).AllocatorInstance.Data;
              if (((pFVar3 <= (FScriptContainerElement *)local_2e8) &&
                  ((FScriptContainerElement *)local_2e8 <
                   pFVar3 + (longlong)(this->Commands).ArrayMax * 0x70)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar5 = (code *)swi(3);
                pTVar10 = (TOptional<FExpressionError> *)(*pcVar5)();
                return pTVar10;
              }
              iVar8 = (this->Commands).ArrayNum;
              piVar1 = &(this->Commands).ArrayMax;
              if (iVar8 == *piVar1) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x1070,&(this->Commands).AllocatorInstance,piVar1);
              }
              pFVar3 = (this->Commands).AllocatorInstance.Data;
              (this->Commands).ArrayNum = iVar8 + 1;
              pFVar23 = (FExpressionNode *)(pFVar3 + (longlong)iVar8 * 0x70);
              (pFVar23->TypeId).A = 0;
              (pFVar23->TypeId).B = 0;
              (pFVar23->TypeId).C = 0;
              (pFVar23->TypeId).D = 0;
              FExpressionNode::operator=(pFVar23,(FExpressionNode *)local_2e8);
              pFVar23[1].TypeId.A = local_2a8;
              pFVar23[1].TypeId.B = uStack_2a4;
              pFVar23[1].TypeId.C = uStack_2a0;
              pFVar23[1].TypeId.D = uStack_29c;
              *(undefined8 *)pFVar23[1].InlineBytes = local_298;
              pFVar23[1].InlineBytes[0x10] = '\0';
              *(undefined4 *)(pFVar23[1].InlineBytes + 8) = local_290;
              pFVar23[1].InlineBytes[0x10] = local_288;
              if (local_288 != '\0') {
                *(undefined4 *)(pFVar23[1].InlineBytes + 0xc) = local_28c;
              }
              pFVar13 = (FGuid *)(local_2e8 + 0x10);
              if (((local_2e8._12_4_ == 0 && local_2e8._8_4_ == 0) && local_2e8._4_4_ == 0) &&
                  local_2e8._0_4_ == 0) {
                pFVar13 = pFVar25;
              }
              if (pFVar13 != (FGuid *)0x0) {
                (*(code *)**(undefined8 **)pFVar13)(local_2a8,0);
              }
              pFVar13 = (FGuid *)&DAT_00000001;
            }
            else {
              while (0 < (int)local_950) {
                uVar26 = 0;
                if ((int)((int)local_950 - 1U) < (int)local_950) {
                  uVar26 = ~((int)local_950 - 1U) >> 0x1f;
                }
                iVar8 = (int)local_950;
                if (uVar26 == 0) {
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar6) {
                    pcVar5 = (code *)swi(3);
                    pTVar10 = (TOptional<FExpressionError> *)(*pcVar5)();
                    return pTVar10;
                  }
                  iVar8 = (int)local_950;
                }
                if (0 < *(int *)(local_958.Data + (longlong)(iVar8 + -1) * 0x80 + 0x70)) break;
                `TExpressionCompiler<wchar_t>::CompileGroup'::__l2::<lambda_1>::operator()
                          (&local_948);
              }
              local_7d8._0_4_ = 0;
              local_7d8._4_4_ = 0;
              local_7d8._8_4_ = 0;
              local_7d8._12_4_ = 0;
              FExpressionNode::operator=((FExpressionNode *)local_7d8,(FExpressionNode *)pTVar28);
              local_798 = (pTVar28->Context).TokenStart;
              uStack_790 = (pTVar28->Context).TokenEnd;
              local_198._0_4_ = 0;
              local_198._4_4_ = 0;
              local_788._0_4_ = (pTVar28->Context).LineNumber;
              local_788._4_4_ = (pTVar28->Context).CharacterIndex;
              local_198._8_4_ = 0;
              local_198._12_4_ = 0;
              FExpressionNode::operator=((FExpressionNode *)local_198,(FExpressionNode *)local_7d8);
              pFVar13 = (FGuid *)(local_7d8 + 0x10);
              if (((local_7d8._12_4_ == 0 && local_7d8._8_4_ == 0) && local_7d8._4_4_ == 0) &&
                  local_7d8._0_4_ == 0) {
                pFVar13 = pFVar25;
              }
              local_158 = (undefined4)local_798;
              uStack_154 = local_798._4_4_;
              uStack_150 = (undefined4)uStack_790;
              uStack_14c = uStack_790._4_4_;
              local_148 = local_788;
              local_140 = PostUnaryOperator;
              local_138 = '\0';
              if (pFVar13 != (FGuid *)0x0) {
                (*(code *)**(undefined8 **)pFVar13)((undefined4)local_798,0);
              }
              iVar8 = (int)local_950;
              if ((int)local_950 == local_950._4_4_) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x1080,&local_958,(int *)((longlong)&local_950 + 4));
              }
              local_950 = CONCAT44(local_950._4_4_,iVar8 + 1);
              pFVar22 = (FWrappedOperator *)(local_958.Data + (longlong)iVar8 * 0x80);
              local_4f8._0_8_ = 0;
              local_4f8._8_8_ = 0;
              FExpressionNode::operator=((FExpressionNode *)&local_4f8,(FExpressionNode *)local_198)
              ;
              local_4f8._68_4_ = uStack_154;
              local_4f8._64_4_ = local_158;
              local_4f8._76_4_ = uStack_14c;
              local_4f8._72_4_ = uStack_150;
              local_4f8.Type = local_140;
              local_4f8._80_8_ = local_148;
              local_4f8.ShortCircuitIndex.bIsSet = (bool)local_138;
              if (local_138 != '\0') {
                local_4f8.ShortCircuitIndex.TypedValue = local_13c;
              }
              FWrappedOperator::FWrappedOperator(pFVar22,&local_4f8,0,-1);
              pFVar21 = (FGuid *)(local_198 + 0x10);
              if (((local_198._12_4_ == 0 && local_198._8_4_ == 0) && local_198._4_4_ == 0) &&
                  local_198._0_4_ == 0) {
                pFVar21 = pFVar25;
              }
              pFVar13 = (FGuid *)&DAT_00000001;
              if (pFVar21 != (FGuid *)0x0) {
                (*(code *)**(undefined8 **)pFVar21)(pFVar21,0);
              }
            }
          }
          else {
            local_838._0_4_ = 0;
            local_838._4_4_ = 0;
            local_838._8_4_ = 0;
            local_838._12_4_ = 0;
            FExpressionNode::operator=((FExpressionNode *)local_838,(FExpressionNode *)pTVar28);
            local_7f8 = (pTVar28->Context).TokenStart;
            uStack_7f0 = (pTVar28->Context).TokenEnd;
            local_208._0_4_ = 0;
            local_208._4_4_ = 0;
            local_7e8._0_4_ = (pTVar28->Context).LineNumber;
            local_7e8._4_4_ = (pTVar28->Context).CharacterIndex;
            local_208._8_4_ = 0;
            local_208._12_4_ = 0;
            FExpressionNode::operator=((FExpressionNode *)local_208,(FExpressionNode *)local_838);
            pFVar21 = (FGuid *)(local_838 + 0x10);
            if (((local_838._12_4_ == 0 && local_838._8_4_ == 0) && local_838._4_4_ == 0) &&
                local_838._0_4_ == 0) {
              pFVar21 = pFVar25;
            }
            local_1c8 = (undefined4)local_7f8;
            uStack_1c4 = local_7f8._4_4_;
            uStack_1c0 = (undefined4)uStack_7f0;
            uStack_1bc = uStack_7f0._4_4_;
            local_1b8 = local_7e8;
            local_1b0 = PreUnaryOperator;
            local_1a8 = (char)pFVar13;
            if (pFVar21 != (FGuid *)0x0) {
              (*(code *)**(undefined8 **)pFVar21)((undefined4)local_7f8,0);
            }
            iVar8 = (int)local_950;
            if ((int)local_950 == local_950._4_4_) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x1080,&local_958,(int *)((longlong)&local_950 + 4));
            }
            local_950 = CONCAT44(local_950._4_4_,iVar8 + 1);
            pFVar22 = (FWrappedOperator *)(local_958.Data + (longlong)iVar8 * 0x80);
            local_568._0_8_ = 0;
            local_568._8_8_ = 0;
            FExpressionNode::operator=((FExpressionNode *)&local_568,(FExpressionNode *)local_208);
            local_568._68_4_ = uStack_1c4;
            local_568._64_4_ = local_1c8;
            local_568._76_4_ = uStack_1bc;
            local_568._72_4_ = uStack_1c0;
            local_568.Type = local_1b0;
            local_568._80_8_ = local_1b8;
            local_568.ShortCircuitIndex.bIsSet = (bool)local_1a8;
            if (local_1a8 != '\0') {
              local_568.ShortCircuitIndex.TypedValue = local_1ac;
            }
            FWrappedOperator::FWrappedOperator(pFVar22,&local_568,0,-1);
            pFVar21 = (FGuid *)(local_208 + 0x10);
            if (((local_208._12_4_ == 0 && local_208._8_4_ == 0) && local_208._4_4_ == 0) &&
                local_208._0_4_ == 0) {
              pFVar21 = pFVar25;
            }
            if (pFVar21 != (FGuid *)0x0) {
              (*(code *)**(undefined8 **)pFVar21)(pFVar21,0);
            }
          }
        }
        else if ((int)pFVar13 == 1) {
          pFVar2 = this->Grammar;
          uVar11 = CityHash64((char *)pTVar28,0x10);
          iVar8 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                            (&pFVar2->PostUnaryOperators,(uint)uVar11,(FGuid *)pTVar28);
          if (iVar8 == -1) {
            pFVar2 = this->Grammar;
            uVar11 = CityHash64((char *)pTVar28,0x10);
            iVar8 = TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<FGuid>
                              ((TSet<TTuple<FGuid,FOpParameters>,TDefaultMapHashableKeyFuncs<FGuid,FOpParameters,0>,FDefaultSetAllocator>
                                *)&pFVar2->BinaryOperators,(uint)uVar11,(FGuid *)pTVar28);
            if (iVar8 != -1) {
              lVar12 = (longlong)iVar8 * 0x20 + *(longlong *)&pFVar2->BinaryOperators;
              pFVar13 = (FGuid *)(lVar12 + 0x10);
              if (lVar12 == 0) {
                pFVar13 = pFVar25;
              }
              if (pFVar13 != (FGuid *)0x0) {
                while (0 < (int)local_950) {
                  uVar26 = pFVar13->A;
                  uVar7 = 0;
                  if ((int)((int)local_950 - 1U) < (int)local_950) {
                    uVar7 = ~((int)local_950 - 1U) >> 0x1f;
                  }
                  iVar8 = (int)local_950;
                  if (uVar7 == 0) {
                    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar6) {
                      pcVar5 = (code *)swi(3);
                      pTVar10 = (TOptional<FExpressionError> *)(*pcVar5)();
                      return pTVar10;
                    }
                    iVar8 = (int)local_950;
                  }
                  if ((char)pFVar13->B == '\x01') {
                    bVar6 = *(int *)(local_958.Data + (longlong)(iVar8 + -1) * 0x80 + 0x70) <=
                            (int)uVar26;
                  }
                  else {
                    bVar6 = *(int *)(local_958.Data + (longlong)(iVar8 + -1) * 0x80 + 0x70) <
                            (int)uVar26;
                  }
                  if (!bVar6) break;
                  `TExpressionCompiler<wchar_t>::CompileGroup'::__l2::<lambda_1>::operator()
                            (&local_948);
                }
                iVar8 = -1;
                if (*(char *)((longlong)&pFVar13->B + 1) != '\0') {
                  puVar20 = (pTVar28->Node).InlineBytes;
                  iVar8 = (this->Commands).ArrayNum;
                  if ((((pTVar28->Node).TypeId.D == 0 && (pTVar28->Node).TypeId.C == 0) &&
                      (pTVar28->Node).TypeId.B == 0) && (pTVar28->Node).TypeId.A == 0) {
                    puVar20 = (uchar *)0x0;
                  }
                  if (puVar20 == (uchar *)0x0) {
                    local_658.TypeId.A = 0;
                    local_658.TypeId.B = 0;
                    local_658.InlineBytes[0] = '\0';
                    local_658.InlineBytes[1] = '\0';
                    local_658.InlineBytes[2] = '\0';
                    local_658.InlineBytes[3] = '\0';
                    local_658.InlineBytes[4] = '\0';
                    local_658.InlineBytes[5] = '\0';
                    local_658.InlineBytes[6] = '\0';
                    local_658.InlineBytes[7] = '\0';
                    local_658.InlineBytes[8] = '\0';
                    local_658.InlineBytes[9] = '\0';
                    local_658.InlineBytes[10] = '\0';
                    local_658.InlineBytes[0xb] = '\0';
                    local_658.InlineBytes[0xc] = '\0';
                    local_658.InlineBytes[0xd] = '\0';
                    local_658.InlineBytes[0xe] = '\0';
                    local_658.InlineBytes[0xf] = '\0';
                    local_658.InlineBytes[0x10] = '\0';
                    local_658.InlineBytes[0x11] = '\0';
                    local_658.InlineBytes[0x12] = '\0';
                    local_658.InlineBytes[0x13] = '\0';
                    local_658.InlineBytes[0x14] = '\0';
                    local_658.InlineBytes[0x15] = '\0';
                    local_658.InlineBytes[0x16] = '\0';
                    local_658.InlineBytes[0x17] = '\0';
                    local_658.InlineBytes[0x18] = '\0';
                    local_658.InlineBytes[0x19] = '\0';
                    local_658.InlineBytes[0x1a] = '\0';
                    local_658.InlineBytes[0x1b] = '\0';
                    local_658.InlineBytes[0x1c] = '\0';
                    local_658.InlineBytes[0x1d] = '\0';
                    local_658.InlineBytes[0x1e] = '\0';
                    local_658.InlineBytes[0x1f] = '\0';
                    local_658.InlineBytes[0x20] = '\0';
                    local_658.InlineBytes[0x21] = '\0';
                    local_658.InlineBytes[0x22] = '\0';
                    local_658.InlineBytes[0x23] = '\0';
                    local_658.InlineBytes[0x24] = '\0';
                    local_658.InlineBytes[0x25] = '\0';
                    local_658.InlineBytes[0x26] = '\0';
                    local_658.InlineBytes[0x27] = '\0';
                    local_658.InlineBytes[0x28] = '\0';
                    local_658.InlineBytes[0x29] = '\0';
                    local_658.InlineBytes[0x2a] = '\0';
                    local_658.InlineBytes[0x2b] = '\0';
                    local_658.InlineBytes[0x2c] = '\0';
                    local_658.InlineBytes[0x2d] = '\0';
                    local_658.InlineBytes[0x2e] = '\0';
                    local_658.InlineBytes[0x2f] = '\0';
                    local_658.TypeId.C = 0;
                    local_658.TypeId.D = 0;
                  }
                  else {
                    (**(code **)(*(longlong *)puVar20 + 0x18))(puVar20,&local_658);
                  }
                  pTVar14 = TExpressionToken<wchar_t>::TExpressionToken<wchar_t>
                                      (&local_3b8,&pTVar28->Context,&local_658);
                  local_358.TypeId.A = 0;
                  local_358.TypeId.B = 0;
                  local_358.TypeId.C = 0;
                  local_358.TypeId.D = 0;
                  FExpressionNode::operator=(&local_358,&pTVar14->Node);
                  local_318 = *(uint *)&(pTVar14->Context).TokenStart;
                  uStack_314 = *(uint *)((longlong)&(pTVar14->Context).TokenStart + 4);
                  uStack_310 = *(uint *)&(pTVar14->Context).TokenEnd;
                  uStack_30c = *(uint *)((longlong)&(pTVar14->Context).TokenEnd + 4);
                  puVar20 = (pTVar14->Node).InlineBytes;
                  local_308._0_4_ = (pTVar14->Context).LineNumber;
                  local_308._4_4_ = (pTVar14->Context).CharacterIndex;
                  local_300 = 4;
                  local_2f8 = '\x01';
                  if ((((pTVar14->Node).TypeId.D == 0 && (pTVar14->Node).TypeId.C == 0) &&
                      (pTVar14->Node).TypeId.B == 0) && (pTVar14->Node).TypeId.A == 0) {
                    puVar20 = (uchar *)0x0;
                  }
                  local_2fc = iVar8;
                  if (puVar20 != (uchar *)0x0) {
                    (*(code *)**(undefined8 **)puVar20)(local_318,0);
                  }
                  pFVar23 = (FExpressionNode *)(this->Commands).AllocatorInstance.Data;
                  if (((pFVar23 <= &local_358) &&
                      (&local_358 <
                       (FExpressionNode *)
                       ((longlong)pFVar23 + (longlong)(this->Commands).ArrayMax * 0x70))) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    pTVar10 = (TOptional<FExpressionError> *)(*pcVar5)();
                    return pTVar10;
                  }
                  iVar8 = (this->Commands).ArrayNum;
                  piVar1 = &(this->Commands).ArrayMax;
                  if (iVar8 == *piVar1) {
                    iVar8 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x1070,&(this->Commands).AllocatorInstance,piVar1);
                  }
                  (this->Commands).ArrayNum = iVar8 + 1;
                  pFVar23 = (FExpressionNode *)
                            ((this->Commands).AllocatorInstance.Data + (longlong)iVar8 * 0x70);
                  (pFVar23->TypeId).A = 0;
                  (pFVar23->TypeId).B = 0;
                  (pFVar23->TypeId).C = 0;
                  (pFVar23->TypeId).D = 0;
                  FExpressionNode::operator=(pFVar23,&local_358);
                  pFVar23[1].TypeId.A = local_318;
                  pFVar23[1].TypeId.B = uStack_314;
                  pFVar23[1].TypeId.C = uStack_310;
                  pFVar23[1].TypeId.D = uStack_30c;
                  *(undefined8 *)pFVar23[1].InlineBytes = local_308;
                  pFVar23[1].InlineBytes[0x10] = '\0';
                  *(undefined4 *)(pFVar23[1].InlineBytes + 8) = local_300;
                  pFVar23[1].InlineBytes[0x10] = local_2f8;
                  if (local_2f8 != '\0') {
                    *(int *)(pFVar23[1].InlineBytes + 0xc) = local_2fc;
                  }
                  puVar20 = local_358.InlineBytes;
                  if (((local_358.TypeId.D == 0 && local_358.TypeId.C == 0) &&
                      local_358.TypeId.B == 0) && local_358.TypeId.A == 0) {
                    puVar20 = (uchar *)0x0;
                  }
                  if (puVar20 != (uchar *)0x0) {
                    (*(code *)**(undefined8 **)puVar20)(local_318,0);
                  }
                  iVar8 = (this->Commands).ArrayNum + -1;
                  param_2 = local_930;
                }
                local_718.TypeId.A = 0;
                local_718.TypeId.B = 0;
                local_718.TypeId.C = 0;
                local_718.TypeId.D = 0;
                FExpressionNode::operator=(&local_718,(FExpressionNode *)pTVar28);
                local_6d8 = (pTVar28->Context).TokenStart;
                uStack_6d0 = (pTVar28->Context).TokenEnd;
                local_128._0_4_ = 0;
                local_128._4_4_ = 0;
                local_6c8._0_4_ = (pTVar28->Context).LineNumber;
                local_6c8._4_4_ = (pTVar28->Context).CharacterIndex;
                local_128._8_4_ = 0;
                local_128._12_4_ = 0;
                FExpressionNode::operator=((FExpressionNode *)local_128,&local_718);
                puVar20 = local_718.InlineBytes;
                if (((local_718.TypeId.D == 0 && local_718.TypeId.C == 0) && local_718.TypeId.B == 0
                    ) && local_718.TypeId.A == 0) {
                  puVar20 = (uchar *)0x0;
                }
                local_e8 = (undefined4)local_6d8;
                uStack_e4 = local_6d8._4_4_;
                uStack_e0 = (undefined4)uStack_6d0;
                uStack_dc = uStack_6d0._4_4_;
                local_d8 = local_6c8;
                local_d0 = BinaryOperator;
                local_c8 = '\0';
                if (puVar20 != (uchar *)0x0) {
                  (*(code *)**(undefined8 **)puVar20)((undefined4)local_6d8,0);
                }
                iVar9 = (int)local_950;
                if ((int)local_950 == local_950._4_4_) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x1080,&local_958,(int *)((longlong)&local_950 + 4));
                }
                local_950 = CONCAT44(local_950._4_4_,iVar9 + 1);
                uVar26 = pFVar13->A;
                pFVar13 = (FGuid *)0x0;
                pFVar22 = (FWrappedOperator *)(local_958.Data + (longlong)iVar9 * 0x80);
                local_5d8._0_8_ = 0;
                local_5d8._8_8_ = 0;
                FExpressionNode::operator=
                          ((FExpressionNode *)&local_5d8,(FExpressionNode *)local_128);
                local_5d8._68_4_ = uStack_e4;
                local_5d8._64_4_ = local_e8;
                local_5d8._76_4_ = uStack_dc;
                local_5d8._72_4_ = uStack_e0;
                local_5d8.Type = local_d0;
                local_5d8._80_8_ = local_d8;
                local_5d8.ShortCircuitIndex.bIsSet = (bool)local_c8;
                if (local_c8 != '\0') {
                  local_5d8.ShortCircuitIndex.TypedValue = local_cc;
                }
                FWrappedOperator::FWrappedOperator(pFVar22,&local_5d8,uVar26,iVar8);
                pFVar21 = (FGuid *)(local_128 + 0x10);
                if (((local_128._12_4_ == 0 && local_128._8_4_ == 0) && local_128._4_4_ == 0) &&
                    local_128._0_4_ == 0) {
                  pFVar21 = pFVar13;
                }
                if (pFVar21 != (FGuid *)0x0) {
                  (*(code *)**(undefined8 **)pFVar21)(pFVar21,0);
                }
                goto LAB_1418ce684;
              }
            }
            local_6b8._0_4_ = 0;
            local_6b8._4_4_ = 0;
            local_6b8._8_4_ = 0;
            local_6b8._12_4_ = 0;
            FExpressionNode::operator=((FExpressionNode *)local_6b8,(FExpressionNode *)pTVar28);
            local_678 = (pTVar28->Context).TokenStart;
            uStack_670 = (pTVar28->Context).TokenEnd;
            local_278._0_4_ = 0;
            local_278._4_4_ = 0;
            local_668._0_4_ = (pTVar28->Context).LineNumber;
            local_668._4_4_ = (pTVar28->Context).CharacterIndex;
            local_278._8_4_ = 0;
            local_278._12_4_ = 0;
            FExpressionNode::operator=((FExpressionNode *)local_278,(FExpressionNode *)local_6b8);
            pFVar13 = (FGuid *)(local_6b8 + 0x10);
            if (((local_6b8._12_4_ == 0 && local_6b8._8_4_ == 0) && local_6b8._4_4_ == 0) &&
                local_6b8._0_4_ == 0) {
              pFVar13 = pFVar25;
            }
            local_238 = (uint)local_678;
            uStack_234 = local_678._4_4_;
            uStack_230 = (uint)uStack_670;
            uStack_22c = uStack_670._4_4_;
            local_228 = local_668;
            local_220 = 0;
            local_218 = '\0';
            if (pFVar13 != (FGuid *)0x0) {
              (*(code *)**(undefined8 **)pFVar13)((uint)local_678,0);
            }
            pFVar3 = (this->Commands).AllocatorInstance.Data;
            if (((pFVar3 <= (FScriptContainerElement *)local_278) &&
                ((FScriptContainerElement *)local_278 <
                 pFVar3 + (longlong)(this->Commands).ArrayMax * 0x70)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar10 = (TOptional<FExpressionError> *)(*pcVar5)();
              return pTVar10;
            }
            iVar8 = (this->Commands).ArrayNum;
            piVar1 = &(this->Commands).ArrayMax;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x1070,&(this->Commands).AllocatorInstance,piVar1);
            }
            pFVar3 = (this->Commands).AllocatorInstance.Data;
            (this->Commands).ArrayNum = iVar8 + 1;
            pFVar23 = (FExpressionNode *)(pFVar3 + (longlong)iVar8 * 0x70);
            (pFVar23->TypeId).A = 0;
            (pFVar23->TypeId).B = 0;
            (pFVar23->TypeId).C = 0;
            (pFVar23->TypeId).D = 0;
            FExpressionNode::operator=(pFVar23,(FExpressionNode *)local_278);
            pFVar23[1].TypeId.A = local_238;
            pFVar23[1].TypeId.B = uStack_234;
            pFVar23[1].TypeId.C = uStack_230;
            pFVar23[1].TypeId.D = uStack_22c;
            *(undefined8 *)pFVar23[1].InlineBytes = local_228;
            pFVar23[1].InlineBytes[0x10] = '\0';
            *(undefined4 *)(pFVar23[1].InlineBytes + 8) = local_220;
            pFVar23[1].InlineBytes[0x10] = local_218;
            if (local_218 != '\0') {
              *(undefined4 *)(pFVar23[1].InlineBytes + 0xc) = local_21c;
            }
            pFVar21 = (FGuid *)(local_278 + 0x10);
            if (((local_278._12_4_ == 0 && local_278._8_4_ == 0) && local_278._4_4_ == 0) &&
                local_278._0_4_ == 0) {
              pFVar21 = pFVar25;
            }
            pFVar13 = pFVar25;
            if (pFVar21 != (FGuid *)0x0) {
              (*(code *)**(undefined8 **)pFVar21)(local_238,0);
            }
          }
          else {
            while (0 < (int)local_950) {
              uVar26 = 0;
              if ((int)((int)local_950 - 1U) < (int)local_950) {
                uVar26 = ~((int)local_950 - 1U) >> 0x1f;
              }
              iVar8 = (int)local_950;
              if (uVar26 == 0) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar5 = (code *)swi(3);
                  pTVar10 = (TOptional<FExpressionError> *)(*pcVar5)();
                  return pTVar10;
                }
                iVar8 = (int)local_950;
              }
              if (0 < *(int *)(local_958.Data + (longlong)(iVar8 + -1) * 0x80 + 0x70)) break;
              `TExpressionCompiler<wchar_t>::CompileGroup'::__l2::<lambda_1>::operator()(&local_948)
              ;
            }
            local_778._0_4_ = 0;
            local_778._4_4_ = 0;
            local_778._8_4_ = 0;
            local_778._12_4_ = 0;
            FExpressionNode::operator=((FExpressionNode *)local_778,(FExpressionNode *)pTVar28);
            local_738 = (pTVar28->Context).TokenStart;
            uStack_730 = (pTVar28->Context).TokenEnd;
            local_b8._0_4_ = 0;
            local_b8._4_4_ = 0;
            local_728._0_4_ = (pTVar28->Context).LineNumber;
            local_728._4_4_ = (pTVar28->Context).CharacterIndex;
            local_b8._8_4_ = 0;
            local_b8._12_4_ = 0;
            FExpressionNode::operator=((FExpressionNode *)local_b8,(FExpressionNode *)local_778);
            pFVar21 = (FGuid *)(local_778 + 0x10);
            if (((local_778._12_4_ == 0 && local_778._8_4_ == 0) && local_778._4_4_ == 0) &&
                local_778._0_4_ == 0) {
              pFVar21 = pFVar25;
            }
            local_78 = (undefined4)local_738;
            uStack_74 = local_738._4_4_;
            uStack_70 = (undefined4)uStack_730;
            uStack_6c = uStack_730._4_4_;
            local_68 = local_728;
            local_60 = PostUnaryOperator;
            local_58 = '\0';
            if (pFVar21 != (FGuid *)0x0) {
              (*(code *)**(undefined8 **)pFVar21)((undefined4)local_738,0);
            }
            iVar8 = (int)local_950;
            if ((int)local_950 == local_950._4_4_) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x1080,&local_958,(int *)((longlong)&local_950 + 4));
            }
            local_950 = CONCAT44(local_950._4_4_,iVar8 + 1);
            pFVar22 = (FWrappedOperator *)(local_958.Data + (longlong)iVar8 * 0x80);
            local_488._0_8_ = 0;
            local_488._8_8_ = 0;
            FExpressionNode::operator=((FExpressionNode *)&local_488,(FExpressionNode *)local_b8);
            local_488._68_4_ = uStack_74;
            local_488._64_4_ = local_78;
            local_488._76_4_ = uStack_6c;
            local_488._72_4_ = uStack_70;
            local_488.Type = local_60;
            local_488._80_8_ = local_68;
            local_488.ShortCircuitIndex.bIsSet = (bool)local_58;
            if (local_58 != '\0') {
              local_488.ShortCircuitIndex.TypedValue = local_5c;
            }
            FWrappedOperator::FWrappedOperator(pFVar22,&local_488,0,-1);
            pFVar21 = (FGuid *)(local_b8 + 0x10);
            if (((local_b8._12_4_ == 0 && local_b8._8_4_ == 0) && local_b8._4_4_ == 0) &&
                local_b8._0_4_ == 0) {
              pFVar21 = pFVar25;
            }
            if (pFVar21 != (FGuid *)0x0) {
              (*(code *)**(undefined8 **)pFVar21)(pFVar21,0);
            }
          }
        }
      }
      else {
        this->CurrentTokenIndex = this->CurrentTokenIndex + 1;
        CompileGroup(this,&local_8f8,pTVar28,pFVar27);
        if (local_8f8.bIsSet != false) {
          __return_storage_ptr__->bIsSet = local_8f8.bIsSet;
          FText::FText((FText *)__return_storage_ptr__,(FText *)&local_8f8);
          if ((local_8f8.bIsSet != false) &&
             (local_8f8.TypedValue.Text.TextData.Reference != (ITextData *)0x0)) {
            (**(code **)((longlong)*local_8f8.TypedValue.Text.TextData.Reference + 0x10))();
          }
          goto LAB_1418ce926;
        }
        pFVar13 = (FGuid *)&DAT_00000001;
      }
LAB_1418ce684:
      uVar26 = this->CurrentTokenIndex + 1;
      this->CurrentTokenIndex = uVar26;
      pTVar24 = this->Tokens;
      param_1 = local_928;
    } while ((int)uVar26 < pTVar24->ArrayNum);
  }
  if (param_2 == (FGuid *)0x0) {
LAB_1418ce909:
    while (0 < (int)local_950) {
      `TExpressionCompiler<wchar_t>::CompileGroup'::__l2::<lambda_1>::operator()(&local_948);
    }
    __return_storage_ptr__->bIsSet = false;
  }
  else {
    local_8b0.Object = (FCulture *)0x0;
    local_8b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_408,(param_1->Context).CharacterIndex,
                              (FNumberFormattingOptions *)0x0,&local_8b0);
    local_8c0.Object = (FCulture *)0x0;
    local_8c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar16 = FText::AsNumber(&local_3f8,(param_1->Context).LineNumber,
                              (FNumberFormattingOptions *)0x0,&local_8c0);
    pwVar4 = (param_1->Context).TokenStart;
    ::FString::ConstructFromPtrSize
              (&local_8d0,pwVar4,
               (int)((longlong)(param_1->Context).TokenEnd - (longlong)pwVar4 >> 1));
    pFVar17 = FText::FromString(&local_3e8,&local_8d0);
    pFVar18 = FText::AsLocalizable_Advanced_LocText
                        (&local_5e8,L"ExpressionParser",L"SyntaxError_UnmatchedGroup",
                         L"Syntax error: Reached end of expression before matching end of group \'{0}\' at line {1}:{2}"
                        );
    pFVar19 = FTextFormat::FTextFormat(&local_3d8,pFVar18,Default);
    pFVar15 = FText::Format<FText,FText,FText>(&local_5f8,pFVar19,pFVar17,pFVar16,pFVar15);
    local_908.TextData.Reference = (pFVar15->TextData).Reference;
    if (local_908.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_908.TextData.Reference + 8))
                (local_908.TextData.Reference,local_938);
    }
    local_908.Flags = pFVar15->Flags;
    FText::FText((FText *)__return_storage_ptr__,&local_908);
    __return_storage_ptr__->bIsSet = true;
    if (local_908.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_908.TextData.Reference + 0x10))();
    }
    if (local_5f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5f8.TextData.Reference + 0x10))();
    }
    if (local_5e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5e8.TextData.Reference + 0x10))();
    }
    if (local_8d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8d0.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8c0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8b0.SharedReferenceCount.ReferenceController);
  }
LAB_1418ce926:
  DestructItems<TExpressionCompiler<wchar_t>::FWrappedOperator,int>
            ((FWrappedOperator *)local_958.Data,(int)local_950);
  if ((FWrappedOperator *)local_958.Data != (FWrappedOperator *)0x0) {
    FMemory::Free(local_958.Data);
  }
  return __return_storage_ptr__;
}

