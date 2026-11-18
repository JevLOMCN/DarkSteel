// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FScopedCreateImportCounter @ 1420a2e80

FScopedCreateImportCounter * __thiscall
FScopedCreateImportCounter::FScopedCreateImportCounter
          (FScopedCreateImportCounter *this,FLinkerLoad *param_1,int param_2)

{
  FTlsAutoCleanup FVar1;
  uint *puVar2;
  FTlsAutoCleanup *pFVar3;
  undefined1 local_res18 [16];
  code *local_18;
  undefined1 *local_10;
  
  puVar2 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar3 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar2);
  FVar1 = pFVar3[0x2f];
  this->LoadContext = (FUObjectSerializeContext *)FVar1;
  this->PreviousLinker = *(FLinkerLoad **)((longlong)FVar1 + 0x48);
  this->PreviousIndex = *(int *)((longlong)FVar1 + 0x40);
  *(FLinkerLoad **)((longlong)FVar1 + 0x48) = param_1;
  this->LoadContext->SerializedImportIndex = param_2;
  return this;
}

// ~FScopedCreateImportCounter @ 1420a4d10

void __thiscall
FScopedCreateImportCounter::~FScopedCreateImportCounter(FScopedCreateImportCounter *this)

{
  this->LoadContext->SerializedImportLinker = this->PreviousLinker;
  this->LoadContext->SerializedImportIndex = this->PreviousIndex;
  return;
}

