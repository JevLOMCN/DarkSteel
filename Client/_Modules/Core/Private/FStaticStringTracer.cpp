// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// TraceStringsOnConnection @ 1419afba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FStaticStringTracer::TraceStringsOnConnection(FStaticStringTracer *this)

{
  undefined1 *puVar1;
  wchar_t *pwVar2;
  longlong *plVar3;
  ulonglong uVar4;
  wchar_t wVar5;
  uint uVar6;
  wchar_t *_Str;
  char *_Str_00;
  code *pcVar7;
  FStaticStringTracer *pFVar8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  size_t sVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  int iVar21;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  undefined1 local_157 [7];
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_150;
  FStaticStringTracer *local_148;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_140;
  int iStack_138;
  uint uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  int local_108;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  undefined8 *local_50;
  longlong local_48;
  undefined8 *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_148 = this;
  if (this == (FStaticStringTracer *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  iVar18 = *(int *)&(this->TracedWideStrings).Elements.field_0x28;
  puVar1 = &(this->TracedWideStrings).Elements.field_0x10;
  iVar21 = 0;
  local_150 = &this->TracedWideStrings;
  iStack_138 = 0;
  uStack_134 = 1;
  local_120 = 0;
  iStack_124 = 0;
  if (iVar18 != 0) {
    puVar20 = *(uint **)&(this->TracedWideStrings).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar17 = *puVar20;
    local_120 = 0;
    while (uVar17 == 0) {
      lVar13 = (longlong)iStack_138;
      local_120 = local_120 + 0x20;
      iStack_138 = iStack_138 + 1;
      iStack_124 = iVar18;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138) goto LAB_1419afc7f;
      uVar17 = puVar20[lVar13 + 1];
    }
    uStack_134 = ~(uVar17 - 1) & uVar17;
    uVar4 = (ulonglong)uStack_134 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_110 = (int)lVar13;
    iStack_124 = local_120 + -1 + local_110;
    if (iVar18 < iStack_124) {
      iStack_124 = iVar18;
    }
  }
LAB_1419afc7f:
  uStack_11c = local_54;
  iStack_118 = *(int *)&(this->TracedWideStrings).Elements.field_0x8 -
               *(int *)&(this->TracedWideStrings).Elements.field_0x34;
  uVar17 = *(uint *)&(this->TracedWideStrings).Elements.field_0x28;
  uVar15 = uVar17 & 0xffffffe0;
  TStack_c8._padding_ = CONCAT44(uStack_134,iStack_138);
  uStack_128 = 0xffffffff;
  TStack_c8.CurrentBitIndex = iStack_124;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_c8._28_4_ = local_54;
  TStack_c8.BaseBitIndex = local_120;
  uStack_a8 = CONCAT44(uStack_114,iStack_118);
  local_140 = local_150;
  local_130 = puVar1;
  local_d0 = local_150;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar18 < (int)uVar17)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar16 = local_150;
  uVar6 = *(uint *)&(this->TracedWideStrings).Elements.field_0x28;
  if (uVar17 != uVar6) {
    puVar19 = *(undefined1 **)&(this->TracedWideStrings).Elements.field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1419afd8f;
      uVar17 = *(uint *)(puVar19 + lVar13 * 4 + 4);
    }
    uVar4 = (ulonglong)(~(uVar17 - 1) & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_10c = (int)lVar13;
    uVar17 = local_10c + -1 + uVar15;
    if ((int)uVar6 < (int)uVar17) {
      uVar17 = uVar6;
    }
  }
LAB_1419afd8f:
  plVar3 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  while( true ) {
    pTVar9 = local_d0;
    if (*(int *)&(local_d0->Elements).field_0x8 - *(int *)&(local_d0->Elements).field_0x34 !=
        (int)uStack_a8) {
      local_158 = 0;
      `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_158);
    }
    pFVar8 = local_148;
    if (((TStack_c8.CurrentBitIndex == uVar17) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar16))
    break;
    lVar13 = *plVar3;
    _Str = *(wchar_t **)
            (*(longlong *)&pTVar9->Elements + (longlong)TStack_c8.CurrentBitIndex * 0x10);
    if ((*(int *)(lVar13 + 0x9d4c) <
         `public:_static_unsigned_int___cdecl_FStringsStaticStringFields::GetUid(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::GetUid(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_unsigned_int___cdecl_FStringsStaticStringFields::GetUid(void)'::__l2::
       _thread_safe_static_guard_0__ == -1)) {
      `public:_static_unsigned_int___cdecl_FStringsStaticStringFields::GetUid(void)'::__l2::Uid =
           FStringsStaticStringFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    UE::Trace::Private::FLogScope::Enter<FStringsStaticStringFields>((TLogScope<1> *)&local_50);
    FStringsStaticStringFields::GetUid();
    *local_50 = _Str;
    sVar11 = wcslen(_Str);
    iVar18 = (int)sVar11;
    if (iVar18 < 0) {
      iVar18 = 0;
      wVar5 = *_Str;
      pwVar2 = _Str;
      while (wVar5 != L'\0') {
        pwVar2 = pwVar2 + 1;
        iVar18 = iVar18 + 1;
        wVar5 = *pwVar2;
      }
    }
    UE::Trace::Private::Field_WriteStringWide(0,_Str,iVar18);
    if (*(char *)(lVar13 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar13 = *(longlong *)(lVar13 + 0x20);
    **(undefined1 **)(lVar13 + 0x20) = 6;
    lVar12 = *(longlong *)(lVar13 + 0x20) + 1;
    *(longlong *)(lVar13 + 0x20) = lVar12;
    if (lVar13 != local_48) {
      *(longlong *)(lVar13 + 0x28) = lVar12;
    }
    *(undefined8 *)(local_48 + 0x28) = *(undefined8 *)(local_48 + 0x20);
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  uStack_f4 = 1;
  local_e0 = 0;
  puVar1 = &(local_148->TracedAnsiStrings).Elements.field_0x10;
  iVar18 = *(int *)&(local_148->TracedAnsiStrings).Elements.field_0x28;
  pTVar16 = &local_148->TracedAnsiStrings;
  iStack_e4 = 0;
  if (iVar18 != 0) {
    puVar20 = *(uint **)&(local_148->TracedAnsiStrings).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar17 = *puVar20;
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar21;
      local_e0 = local_e0 + 0x20;
      iVar21 = iVar21 + 1;
      iStack_e4 = iVar18;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_1419aff41;
      uVar17 = puVar20[lVar13 + 1];
    }
    uStack_f4 = ~(uVar17 - 1) & uVar17;
    uVar4 = (ulonglong)uStack_f4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_108 = (int)lVar13;
    iStack_e4 = local_e0 + -1 + local_108;
    if (iVar18 < iStack_e4) {
      iStack_e4 = iVar18;
    }
  }
LAB_1419aff41:
  iStack_dc = iStack_124;
  iStack_d8 = *(int *)&(local_148->TracedAnsiStrings).Elements.field_0x8 -
              *(int *)&(local_148->TracedAnsiStrings).Elements.field_0x34;
  uVar17 = *(uint *)&(local_148->TracedAnsiStrings).Elements.field_0x28;
  uStack_e8 = 0xffffffff;
  TStack_98._padding_ = CONCAT44(uStack_f4,iVar21);
  uVar15 = uVar17 & 0xffffffe0;
  TStack_98.CurrentBitIndex = iStack_e4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_98._28_4_ = iStack_124;
  TStack_98.BaseBitIndex = local_e0;
  uStack_78 = CONCAT44(uStack_d4,iStack_d8);
  local_150 = pTVar16;
  local_100 = pTVar16;
  iStack_f8 = iVar21;
  local_f0 = puVar1;
  local_a0 = pTVar16;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar18 < (int)uVar17)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar6 = *(uint *)&(pFVar8->TracedAnsiStrings).Elements.field_0x28;
  if (uVar17 != uVar6) {
    puVar19 = *(undefined1 **)&(pFVar8->TracedAnsiStrings).Elements.field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1419b003f;
      uVar17 = *(uint *)(puVar19 + lVar13 * 4 + 4);
    }
    uVar4 = (ulonglong)(~(uVar17 - 1) & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar17 = (int)lVar13 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar17) {
      uVar17 = uVar6;
    }
  }
LAB_1419b003f:
  plVar3 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  while( true ) {
    pTVar9 = local_a0;
    if (*(int *)&(local_a0->Elements).field_0x8 - *(int *)&(local_a0->Elements).field_0x34 !=
        (int)uStack_78) {
      `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_157);
    }
    if (((TStack_98.CurrentBitIndex == uVar17) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar16))
    break;
    lVar13 = *plVar3;
    _Str_00 = *(char **)(*(longlong *)&pTVar9->Elements + (longlong)TStack_98.CurrentBitIndex * 0x10
                        );
    if ((*(int *)(lVar13 + 0x9d4c) <
         `public:_static_unsigned_int___cdecl_FStringsStaticStringFields::GetUid(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::GetUid(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_unsigned_int___cdecl_FStringsStaticStringFields::GetUid(void)'::__l2::
       _thread_safe_static_guard_0__ == -1)) {
      `public:_static_unsigned_int___cdecl_FStringsStaticStringFields::GetUid(void)'::__l2::Uid =
           FStringsStaticStringFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    UE::Trace::Private::FLogScope::Enter<FStringsStaticStringFields>((TLogScope<1> *)&local_40);
    if ((*(int *)(lVar13 + 0x9d4c) <
         `public:_static_unsigned_int___cdecl_FStringsStaticStringFields::GetUid(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::GetUid(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_unsigned_int___cdecl_FStringsStaticStringFields::GetUid(void)'::__l2::
       _thread_safe_static_guard_0__ == -1)) {
      `public:_static_unsigned_int___cdecl_FStringsStaticStringFields::GetUid(void)'::__l2::Uid =
           FStringsStaticStringFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    *local_40 = _Str_00;
    sVar11 = strlen(_Str_00);
    iVar18 = (int)sVar11;
    if (iVar18 < 0) {
      sVar11 = strlen(_Str_00);
      iVar18 = (int)sVar11;
    }
    UE::Trace::Private::Field_WriteStringAnsi(1,_Str_00,iVar18);
    if (*(char *)(lVar13 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar13 = *(longlong *)(lVar13 + 0x20);
    **(undefined1 **)(lVar13 + 0x20) = 6;
    lVar12 = *(longlong *)(lVar13 + 0x20) + 1;
    *(longlong *)(lVar13 + 0x20) = lVar12;
    if (lVar13 != local_38) {
      *(longlong *)(lVar13 + 0x28) = lVar12;
    }
    *(undefined8 *)(local_38 + 0x28) = *(undefined8 *)(local_38 + 0x20);
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    pTVar16 = local_150;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)local_148);
  return;
}

