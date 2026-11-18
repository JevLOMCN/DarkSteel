// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// ~FSoftObjectPathSerializationScope @ 141e87f00

void __thiscall
FSoftObjectPathSerializationScope::~FSoftObjectPathSerializationScope
          (FSoftObjectPathSerializationScope *this)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  puVar5 = TThreadSingleton<FSoftObjectPathThreadContext>::GetTlsSlot();
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FSoftObjectPathThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar5);
  if (*(int *)(pFVar6 + 3) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar1 = *(int *)(pFVar6 + 3) - 1;
  _Dst = *(FScriptContainerElement **)(pFVar6 + 2) + (longlong)(int)uVar1 * 0x14;
  iVar2 = ~uVar1 + *(int *)(pFVar6 + 3);
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + 0x14,(longlong)iVar2 * 0x14);
  }
  *(int *)(pFVar6 + 3) = *(int *)(pFVar6 + 3) + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,(ForAnyElementType *)(pFVar6 + 2),*(int *)(pFVar6 + 3),
             (int *)&pFVar6[3].field_0x4);
  return;
}

