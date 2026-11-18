// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 2

// FScopedCompressionScratchBuffers @ 142a53cc0

FScopedCompressionScratchBuffers * __thiscall
FScopedCompressionScratchBuffers::FScopedCompressionScratchBuffers
          (FScopedCompressionScratchBuffers *this)

{
  FTlsAutoCleanup *pFVar1;
  FTlsAutoCleanup FVar2;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FCompressionScratchBuffersStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar1 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FCompressionScratchBuffersStack>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (*(char *)(pFVar1 + 2) != '\0') {
    FVar2 = (FTlsAutoCleanup)::operator_new(0x48);
    if (FVar2 != (FTlsAutoCleanup)0x0) {
      *(undefined8 *)((longlong)FVar2 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)FVar2 + 8) = 0;
      *(undefined8 *)((longlong)FVar2 + 0x18) = 0;
      *(undefined8 *)FVar2 = 0;
      *(undefined8 *)((longlong)FVar2 + 0x10) = 0;
      *(undefined8 *)((longlong)FVar2 + 0x28) = 0;
      *(undefined8 *)((longlong)FVar2 + 0x30) = 0;
      *(undefined4 *)((longlong)FVar2 + 0x38) = 0;
      *(undefined4 *)((longlong)FVar2 + 0x3c) = 0xffffffff;
      *(undefined8 *)((longlong)FVar2 + 0x40) = 0;
    }
    *(FTlsAutoCleanup *)((longlong)FVar2 + 0x40) = pFVar1[0xc];
    pFVar1[0xc] = FVar2;
    this->Inner = (FCompressionScratchBuffers *)FVar2;
    return this;
  }
  *(undefined1 *)(pFVar1 + 2) = 1;
  this->Inner = (FCompressionScratchBuffers *)(pFVar1 + 3);
  return this;
}

// ~FScopedCompressionScratchBuffers @ 142a57470

void __thiscall
FScopedCompressionScratchBuffers::~FScopedCompressionScratchBuffers
          (FScopedCompressionScratchBuffers *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  FTlsAutoCleanup *pFVar4;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FCompressionScratchBuffersStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FCompressionScratchBuffersStack>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  FVar1 = (FTlsAutoCleanup)this->Inner;
  if (*(char *)(pFVar4 + 2) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bFirstInUse",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x1003,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (pFVar4[0xc] == (FTlsAutoCleanup)0x0) {
    if (FVar1 != (FTlsAutoCleanup)(pFVar4 + 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Top == &First",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x1006,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined1 *)(pFVar4 + 2) = 0;
    return;
  }
  if (FVar1 != pFVar4[0xc]) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Top == RecursionList",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x100b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar4[0xc] = *(FTlsAutoCleanup *)((longlong)FVar1 + 0x40);
  operator_delete__(*(void **)((longlong)FVar1 + 0x18));
  operator_delete__(*(void **)((longlong)FVar1 + 8));
  ::operator_delete((void *)FVar1,0x48);
  return;
}

