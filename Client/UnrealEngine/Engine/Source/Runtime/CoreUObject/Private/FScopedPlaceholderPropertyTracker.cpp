// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// Pop @ 1420cb510

void __thiscall FScopedPlaceholderPropertyTracker::Pop(FScopedPlaceholderPropertyTracker *this)

{
  uint uVar1;
  FTlsAutoCleanup *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FTlsAutoCleanup *pFVar6;
  UObject *pUVar7;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FPlaceholderContainerTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FPlaceholderContainerTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (((this->IntermediateProperty).Container.Unknown & 0xfffffffffffffffe) != 0) {
    pFVar2 = pFVar6 + 6;
    if (*(int *)(pFVar6 + 7) < 1) {
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
    if ((((*(ulonglong *)
            (*(FScriptContainerElement **)pFVar2 + (longlong)*(int *)(pFVar6 + 7) * 8 + -8) & 1) !=
          0) && (pUVar7 = (UObject *)
                          (*(ulonglong *)
                            (*(FScriptContainerElement **)pFVar2 +
                            (longlong)*(int *)(pFVar6 + 7) * 8 + -8) & 0xfffffffffffffffe),
                pUVar7 != (UObject *)0x0)) && (UE::GC::GIsIncrementalReachabilityPending != false))
    {
      UE::GC::MarkAsReachable(pUVar7);
    }
    uVar1 = *(int *)(pFVar6 + 7) - 1;
    iVar3 = ~uVar1 + *(int *)(pFVar6 + 7);
    if (iVar3 != 0) {
      memmove(*(FScriptContainerElement **)pFVar2 + (longlong)(int)uVar1 * 8,
              *(FScriptContainerElement **)pFVar2 + (longlong)(int)uVar1 * 8 + 8,
              (longlong)iVar3 << 3);
    }
    *(int *)(pFVar6 + 7) = *(int *)(pFVar6 + 7) + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(ForAnyElementType *)pFVar2,*(int *)(pFVar6 + 7),(int *)&pFVar6[7].field_0x4);
  }
  return;
}

// Push @ 1420ce500

void __thiscall
FScopedPlaceholderPropertyTracker::Push
          (FScopedPlaceholderPropertyTracker *this,FFieldVariant param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FTlsAutoCleanup *pFVar5;
  UClass *pUVar6;
  FFieldClass *pFVar7;
  undefined1 local_res18 [16];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FPlaceholderContainerTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FPlaceholderContainerTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if ((0 < *(int *)(pFVar5 + 3)) || (0 < *(int *)(pFVar5 + 5))) {
    pUVar6 = Z_Construct_UClass_UStructProperty_NoRegister();
    bVar3 = FFieldVariant::IsA((FFieldVariant *)param_1.Container,pUVar6);
    if (!bVar3) {
      pFVar7 = FStructProperty::StaticClass();
      bVar3 = FFieldVariant::IsA((FFieldVariant *)param_1.Container,pFVar7);
      if (!bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InIntermediateProperty.IsA<UStructProperty>() || InIntermediateProperty.IsA<FStructProperty>()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerPlaceholderBase.cpp"
                           ,0x123,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    uVar1 = *(ulonglong *)param_1.Container;
    (this->IntermediateProperty).Container.Unknown = uVar1;
    if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if ((((FFieldObjectUnion *)(pFVar5 + 6))->Field <= (ulonglong)param_1.Container) &&
       ((ulonglong)param_1.Container <
        (FField *)
        (&((FFieldObjectUnion *)(pFVar5 + 6))->Field->_padding_ + *(int *)&pFVar5[7].field_0x4))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = *(int *)(pFVar5 + 7);
    if (iVar4 == *(int *)&pFVar5[7].field_0x4) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)(pFVar5 + 6),(int *)&pFVar5[7].field_0x4);
    }
    *(int *)(pFVar5 + 7) = iVar4 + 1;
    uVar1 = *(ulonglong *)param_1.Container;
    *(ulonglong *)((longlong)pFVar5[6] + (longlong)iVar4 * 8) = uVar1;
    if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
  }
  return;
}

