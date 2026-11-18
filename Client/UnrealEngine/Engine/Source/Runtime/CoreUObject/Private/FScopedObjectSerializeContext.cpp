// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FScopedObjectSerializeContext @ 142294ad0

FScopedObjectSerializeContext * __thiscall
UE::FScopedObjectSerializeContext::FScopedObjectSerializeContext
          (FScopedObjectSerializeContext *this,UObject *param_1,FArchive *param_2)

{
  FTlsAutoCleanup *pFVar1;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar1 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,&::TlsSlot);
  this->SavedSerializedObject = *(UObject **)((longlong)pFVar1[0x2f] + 0x30);
  return this;
}

// ~FScopedObjectSerializeContext @ 142295d10

void __thiscall
UE::FScopedObjectSerializeContext::~FScopedObjectSerializeContext
          (FScopedObjectSerializeContext *this)

{
  FTlsAutoCleanup *pFVar1;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar1 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,&::TlsSlot);
  *(UObject **)((longlong)pFVar1[0x2f] + 0x30) = this->SavedSerializedObject;
  return;
}

