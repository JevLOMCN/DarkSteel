// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FScopedPlaceholderRawContainerTracker @ 1420a2f00

FScopedPlaceholderRawContainerTracker * __thiscall
FScopedPlaceholderRawContainerTracker::FScopedPlaceholderRawContainerTracker
          (FScopedPlaceholderRawContainerTracker *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTlsAutoCleanup *pFVar4;
  FScopedPlaceholderRawContainerTracker *pFVar5;
  undefined1 local_res8 [8];
  void *local_res10;
  code *local_18;
  undefined1 *local_10;
  
  this->Data = param_1;
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FPlaceholderContainerTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  local_res10 = param_1;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FPlaceholderContainerTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (((ulonglong)pFVar4[4] <= &local_res10) &&
     (&local_res10 < (void **)((longlong)pFVar4[4] + (longlong)*(int *)&pFVar4[5].field_0x4 * 8))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FScopedPlaceholderRawContainerTracker *)(*pcVar1)();
      return pFVar5;
    }
  }
  iVar3 = *(int *)(pFVar4 + 5);
  if (iVar3 == *(int *)&pFVar4[5].field_0x4) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(pFVar4 + 4),(int *)&pFVar4[5].field_0x4);
  }
  *(int *)(pFVar4 + 5) = iVar3 + 1;
  *(void **)(*(FScriptContainerElement **)(pFVar4 + 4) + (longlong)iVar3 * 8) = local_res10;
  return this;
}

// ~FScopedPlaceholderRawContainerTracker @ 1420a4d30

void __thiscall
FScopedPlaceholderRawContainerTracker::~FScopedPlaceholderRawContainerTracker
          (FScopedPlaceholderRawContainerTracker *this)

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
  if (*(int *)(pFVar5 + 5) < 1) {
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
  uVar1 = *(int *)(pFVar5 + 5) - 1;
  _Dst = *(FScriptContainerElement **)(pFVar5 + 4) + (longlong)(int)uVar1 * 8;
  iVar2 = ~uVar1 + *(int *)(pFVar5 + 5);
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar2 << 3);
  }
  *(int *)(pFVar5 + 5) = *(int *)(pFVar5 + 5) + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,(ForAnyElementType *)(pFVar5 + 4),*(int *)(pFVar5 + 5),(int *)&pFVar5[5].field_0x4)
  ;
  return;
}

