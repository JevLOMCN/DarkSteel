// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// FSoftObjectPathSerializationScope @ 142ad75e0

FSoftObjectPathSerializationScope * __thiscall
FSoftObjectPathSerializationScope::FSoftObjectPathSerializationScope
          (FSoftObjectPathSerializationScope *this,FName param_1,FName param_2,
          ESoftObjectPathCollectType param_3,ESoftObjectPathSerializeType param_4)

{
  ForAnyElementType FVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  longlong lVar5;
  undefined1 local_res20 [8];
  code *local_28;
  undefined1 *local_20;
  
  puVar3 = TThreadSingleton<FSoftObjectPathThreadContext>::GetTlsSlot();
  local_20 = local_res20;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FSoftObjectPathThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,puVar3);
  iVar2 = *(int *)(pFVar4 + 3);
  if (iVar2 == *(int *)&pFVar4[3].field_0x4) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x414,(ForAnyElementType *)(pFVar4 + 2),(int *)&pFVar4[3].field_0x4);
  }
  lVar5 = (longlong)iVar2;
  *(int *)(pFVar4 + 3) = iVar2 + 1;
  FVar1.Data = *(FScriptContainerElement **)(pFVar4 + 2);
  *(FName *)(FVar1.Data + lVar5 * 0x14 + 8) = param_2;
  FVar1.Data[lVar5 * 0x14 + 0x10] = (FScriptContainerElement)param_3;
  *(ESoftObjectPathSerializeType *)
   ((longlong)&((FName *)(FVar1.Data + lVar5 * 0x14))[2].ComparisonIndex.Value + 1) = param_4;
  *(FName *)(FVar1.Data + lVar5 * 0x14) = param_1;
  return this;
}

