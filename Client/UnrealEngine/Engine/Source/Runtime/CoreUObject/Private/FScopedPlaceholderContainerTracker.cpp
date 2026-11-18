// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// Pop @ 1420cb440

void __thiscall FScopedPlaceholderContainerTracker::Pop(FScopedPlaceholderContainerTracker *this)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  FTlsAutoCleanup *pFVar5;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FPlaceholderContainerTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FPlaceholderContainerTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (*(int *)(pFVar5 + 3) < 1) {
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
  uVar1 = *(int *)(pFVar5 + 3) - 1;
  _Dst = *(FScriptContainerElement **)(pFVar5 + 2) + (longlong)(int)uVar1 * 8;
  iVar2 = ~uVar1 + *(int *)(pFVar5 + 3);
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar2 << 3);
  }
  *(int *)(pFVar5 + 3) = *(int *)(pFVar5 + 3) + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,(ForAnyElementType *)(pFVar5 + 2),*(int *)(pFVar5 + 3),(int *)&pFVar5[3].field_0x4)
  ;
  return;
}

// Push @ 1420ce420

void __thiscall
FScopedPlaceholderContainerTracker::Push(FScopedPlaceholderContainerTracker *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTlsAutoCleanup *pFVar4;
  undefined1 local_res8 [8];
  UObject *local_res10 [3];
  code *local_18;
  undefined1 *local_10;
  
  this->PlaceholderReferencerCandidate = param_1;
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FPlaceholderContainerTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  local_res10[0] = param_1;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FPlaceholderContainerTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (((ulonglong)pFVar4[2] <= local_res10) &&
     (local_res10 < (UObject **)((longlong)pFVar4[2] + (longlong)*(int *)&pFVar4[3].field_0x4 * 8)))
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)(pFVar4 + 3);
  if (iVar3 == *(int *)&pFVar4[3].field_0x4) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(pFVar4 + 2),(int *)&pFVar4[3].field_0x4);
  }
  *(int *)(pFVar4 + 3) = iVar3 + 1;
  *(UObject **)(*(FScriptContainerElement **)(pFVar4 + 2) + (longlong)iVar3 * 8) = local_res10[0];
  return;
}

