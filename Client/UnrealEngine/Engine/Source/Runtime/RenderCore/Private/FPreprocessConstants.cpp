// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// FPreprocessConstants @ 145e80c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPreprocessConstants * __thiscall
FPreprocessConstants::FPreprocessConstants(FPreprocessConstants *this)

{
  char *pcVar1;
  code *pcVar2;
  TStringView<char> TVar3;
  TConsoleVariableData<bool> *pTVar4;
  bool bVar5;
  void *pvVar6;
  FPreprocessConstants *pFVar7;
  int iVar8;
  longlong lVar9;
  ulong64 uVar10;
  undefined1 auStack_f8 [32];
  uchar *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  TArrayView<unsigned_char_const_,int> local_b8;
  TStringView<char> local_a8;
  TStringView<char> local_98;
  TStringView<char> local_88;
  TStringView<char> local_78;
  TStringView<char> local_68;
  TStringView<char> local_58;
  uchar local_48 [32];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pcVar1 = (this->StrippedCodeHeaderBuilder).StringBuffer;
  lVar9 = 0;
  (this->StrippedCodeHeaderBuilder)._padding_ = (longlong)pcVar1;
  (this->StrippedCodeHeaderBuilder)._padding_ = (longlong)pcVar1;
  (this->StrippedCodeHeaderBuilder)._padding_ = (longlong)(this + 1);
  (this->StrippedCodeHeader).DataPtr = (char *)0x0;
  (this->StrippedCodeHeader).Size = 0;
  *(undefined2 *)&(this->StrippedCodeHeaderBuilder)._padding_ = 0;
  pTVar4 = CVarEnableDebugHashAssociation.Ref;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    if (!bVar5) {
      lVar9 = 1;
    }
  }
  TVar3 = DebugHashCommentStart;
  if (pTVar4->ShadowedValue[lVar9] != false) {
    pvVar6 = (void *)(this->StrippedCodeHeaderBuilder)._padding_;
    iVar8 = DebugHashCommentStart.Size;
    uVar10 = (ulong64)iVar8;
    local_a8 = DebugHashCommentStart;
    if ((ulonglong)(this->StrippedCodeHeaderBuilder)._padding_ < uVar10 + (longlong)pvVar6) {
      TStringBuilderBase<char>::Extend
                ((TStringBuilderBase<char> *)&this->StrippedCodeHeaderBuilder,uVar10);
      pvVar6 = (void *)(this->StrippedCodeHeaderBuilder)._padding_;
    }
    if (iVar8 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(pvVar6,TVar3.DataPtr,uVar10);
      pvVar6 = (void *)((longlong)pvVar6 + uVar10);
      (this->StrippedCodeHeaderBuilder)._padding_ = (longlong)pvVar6;
    }
    TVar3 = DebugHashPrefix;
    iVar8 = DebugHashPrefix.Size;
    uVar10 = (ulong64)iVar8;
    local_98 = DebugHashPrefix;
    if ((ulonglong)(this->StrippedCodeHeaderBuilder)._padding_ < (longlong)pvVar6 + uVar10) {
      TStringBuilderBase<char>::Extend
                ((TStringBuilderBase<char> *)&this->StrippedCodeHeaderBuilder,uVar10);
    }
    if (iVar8 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy
                         ((void *)(this->StrippedCodeHeaderBuilder)._padding_,TVar3.DataPtr,uVar10);
      (this->StrippedCodeHeaderBuilder)._padding_ = (longlong)pvVar6 + uVar10;
    }
    uStack_d0 = 0x20;
    local_d8 = local_48;
    local_48[0] = '\0';
    local_48[1] = '\0';
    local_48[2] = '\0';
    local_48[3] = '\0';
    local_48[4] = '\0';
    local_48[5] = '\0';
    local_48[6] = '\0';
    local_48[7] = '\0';
    local_48[8] = '\0';
    local_48[9] = '\0';
    local_48[10] = '\0';
    local_48[0xb] = '\0';
    local_48[0xc] = '\0';
    local_48[0xd] = '\0';
    local_48[0xe] = '\0';
    local_48[0xf] = '\0';
    local_48[0x10] = '\0';
    local_48[0x11] = '\0';
    local_48[0x12] = '\0';
    local_48[0x13] = '\0';
    local_48[0x14] = '\0';
    local_48[0x15] = '\0';
    local_48[0x16] = '\0';
    local_48[0x17] = '\0';
    local_48[0x18] = '\0';
    local_48[0x19] = '\0';
    local_48[0x1a] = '\0';
    local_48[0x1b] = '\0';
    local_48[0x1c] = '\0';
    local_48[0x1d] = '\0';
    local_48[0x1e] = '\0';
    local_48[0x1f] = '\0';
    local_b8._12_4_ = uStack_cc;
    local_b8.ArrayNum = 0x20;
    local_b8.DataPtr = local_d8;
    UE::String::BytesToHexLower
              (&local_b8,(TStringBuilderBase<char> *)&this->StrippedCodeHeaderBuilder);
    TVar3 = DebugHashCommentEnd;
    iVar8 = DebugHashCommentEnd.Size;
    uVar10 = (ulong64)iVar8;
    local_88 = DebugHashCommentEnd;
    if ((ulonglong)(this->StrippedCodeHeaderBuilder)._padding_ <
        (this->StrippedCodeHeaderBuilder)._padding_ + uVar10) {
      TStringBuilderBase<char>::Extend
                ((TStringBuilderBase<char> *)&this->StrippedCodeHeaderBuilder,uVar10);
    }
    if (iVar8 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy
                         ((void *)(this->StrippedCodeHeaderBuilder)._padding_,TVar3.DataPtr,uVar10);
      (this->StrippedCodeHeaderBuilder)._padding_ = (longlong)pvVar6 + uVar10;
    }
  }
  TVar3 = LineDirectiveStart;
  lVar9 = (this->StrippedCodeHeaderBuilder)._padding_;
  iVar8 = LineDirectiveStart.Size;
  uVar10 = (ulong64)iVar8;
  local_78 = LineDirectiveStart;
  if ((ulonglong)(this->StrippedCodeHeaderBuilder)._padding_ < lVar9 + uVar10) {
    TStringBuilderBase<char>::Extend
              ((TStringBuilderBase<char> *)&this->StrippedCodeHeaderBuilder,uVar10);
    lVar9 = (this->StrippedCodeHeaderBuilder)._padding_;
  }
  if (iVar8 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy
                       ((void *)(this->StrippedCodeHeaderBuilder)._padding_,TVar3.DataPtr,uVar10);
    lVar9 = (longlong)pvVar6 + uVar10;
    (this->StrippedCodeHeaderBuilder)._padding_ = lVar9;
  }
  TVar3 = FilenameSentinel;
  iVar8 = FilenameSentinel.Size;
  uVar10 = (ulong64)iVar8;
  local_68 = FilenameSentinel;
  if ((ulonglong)(this->StrippedCodeHeaderBuilder)._padding_ < lVar9 + uVar10) {
    TStringBuilderBase<char>::Extend
              ((TStringBuilderBase<char> *)&this->StrippedCodeHeaderBuilder,uVar10);
    lVar9 = (this->StrippedCodeHeaderBuilder)._padding_;
  }
  if (iVar8 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy
                       ((void *)(this->StrippedCodeHeaderBuilder)._padding_,TVar3.DataPtr,uVar10);
    lVar9 = (longlong)pvVar6 + uVar10;
    (this->StrippedCodeHeaderBuilder)._padding_ = lVar9;
  }
  TVar3 = LineDirectiveEnd;
  iVar8 = LineDirectiveEnd.Size;
  uVar10 = (ulong64)iVar8;
  local_58 = LineDirectiveEnd;
  if ((ulonglong)(this->StrippedCodeHeaderBuilder)._padding_ < lVar9 + uVar10) {
    TStringBuilderBase<char>::Extend
              ((TStringBuilderBase<char> *)&this->StrippedCodeHeaderBuilder,uVar10);
  }
  if (iVar8 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy
                       ((void *)(this->StrippedCodeHeaderBuilder)._padding_,TVar3.DataPtr,uVar10);
    (this->StrippedCodeHeaderBuilder)._padding_ = (longlong)pvVar6 + uVar10;
  }
  if (((char)(this->StrippedCodeHeaderBuilder)._padding_ != '\0') &&
     ((this->StrippedCodeHeaderBuilder)._padding_ != (this->StrippedCodeHeaderBuilder)._padding_)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("StrippedCodeHeaderBuilder.GetAllocatedSize() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPreprocessTypes.cpp"
                       ,0x21,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FPreprocessConstants *)(*pcVar2)();
      return pFVar7;
    }
  }
  pcVar1 = (char *)(this->StrippedCodeHeaderBuilder)._padding_;
  lVar9 = (this->StrippedCodeHeaderBuilder)._padding_;
  (this->StrippedCodeHeader).DataPtr = pcVar1;
  *(ulonglong *)&(this->StrippedCodeHeader).Size = CONCAT44(uStack_cc,(int)lVar9 - (int)pcVar1);
  return this;
}

