// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// ~TTokenEntry<int> @ 14629b720

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FMovieSceneAccumulatedBlendState::TTokenEntry<int>::~TTokenEntry<int>(TTokenEntry<int> *this)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  TBlendableToken<int> *pTVar3;
  
  puVar1 = &(this->Token).Value.field_0x8;
  uVar2 = *puVar1;
  if ((this->Token).Value.bIsValid) {
    if ((this->Token).Value.bInline) {
      pTVar3 = &this->Token;
    }
    else {
      pTVar3 = *(TBlendableToken<int> **)(this->Token).Value.Data.Pad;
    }
    (this->Token).Value.field_0x8 = uVar2 & 0xfe;
    (*(code *)**(undefined8 **)(pTVar3->Value).Data.Pad)(pTVar3,0);
    if (!(this->Token).Value.bInline) {
      FMemory::Free(*(void **)(this->Token).Value.Data.Pad);
    }
    this->_padding_ = (longlong)&___7FTokenEntry_FMovieSceneAccumulatedBlendState__6B_;
    return;
  }
  this->_padding_ = (longlong)&___7FTokenEntry_FMovieSceneAccumulatedBlendState__6B_;
  return;
}

// Consolidate @ 1462a86c0

void __thiscall
FMovieSceneAccumulatedBlendState::TTokenEntry<int>::Consolidate
          (TTokenEntry<int> *this,TInlineValue<IBlendableTokenStack,64,8> *param_1)

{
  uchar *puVar1;
  longlong lVar2;
  TBlendableToken<int> **ppTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMovieSceneAnimTypeID FVar7;
  TInlineValue<IBlendableTokenStack,64,8> *pTVar8;
  undefined1 local_res8 [16];
  TBlendableToken<int> *local_48;
  TBlendableTokenStack<int> local_40;
  
  if (!param_1->bIsValid) {
    FVar7 = GetBlendingDataType<int>();
    local_40.Tokens.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.Tokens.ArrayNum = 0;
    local_40.Tokens.ArrayMax = 0;
    local_40.CurrentBias = -0x80000000;
    local_40._padding_ = *(longlong *)FVar7.ID;
    local_40._padding_ = (longlong)&___7__TBlendableTokenStack_H__6B_;
    TInlineValue<IBlendableTokenStack,64,8>::operator=<TBlendableTokenStack<int>_>
              (param_1,&local_40);
    if (local_40.Tokens.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Tokens.AllocatorInstance.Data);
    }
    local_40._padding_ = (longlong)&___7IBlendableTokenStack__6B_;
  }
  lVar2 = this->_padding_;
  if ((!param_1->bIsValid) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar8 = param_1;
  if (!param_1->bInline) {
    pTVar8 = *(TInlineValue<IBlendableTokenStack,64,8> **)(param_1->Data).Pad;
  }
  if (*(longlong *)((pTVar8->Data).Pad + 8) != lVar2) {
    local_res8[0] = 0;
    bVar5 = `FMovieSceneAccumulatedBlendState::TTokenEntry<int>::Consolidate'::__l6::<lambda_1>::
            operator()(local_res8);
    if (!bVar5) {
      return;
    }
  }
  if ((!param_1->bIsValid) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (!param_1->bInline) {
    param_1 = *(TInlineValue<IBlendableTokenStack,64,8> **)(param_1->Data).Pad;
  }
  local_48 = &this->Token;
  if ((local_48 == (TBlendableToken<int> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TokenToAdd",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\BlendableTokenStack.h"
                         ,99,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)((param_1->Data).Pad + 0x20);
  if (iVar6 < local_48->HierarchicalBias) {
    iVar6 = *(int *)((param_1->Data).Pad + 0x1c);
    (param_1->Data).Pad[0x18] = '\0';
    (param_1->Data).Pad[0x19] = '\0';
    (param_1->Data).Pad[0x1a] = '\0';
    (param_1->Data).Pad[0x1b] = '\0';
    if (iVar6 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)((param_1->Data).Pad + 0x10),0,
                 (int *)((param_1->Data).Pad + 0x1c));
    }
    iVar6 = local_48->HierarchicalBias;
    *(int *)((param_1->Data).Pad + 0x20) = iVar6;
  }
  if (local_48->HierarchicalBias == iVar6) {
    ppTVar3 = *(TBlendableToken<int> ***)((param_1->Data).Pad + 0x10);
    if (((ppTVar3 <= &local_48) && (&local_48 < ppTVar3 + *(int *)((param_1->Data).Pad + 0x1c))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *(int *)((param_1->Data).Pad + 0x18);
    puVar1 = (param_1->Data).Pad + 0x1c;
    if (iVar6 == *(int *)puVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)((param_1->Data).Pad + 0x10),(int *)puVar1);
    }
    *(int *)((param_1->Data).Pad + 0x18) = iVar6 + 1;
    *(TBlendableToken<int> **)(*(longlong *)((param_1->Data).Pad + 0x10) + (longlong)iVar6 * 8) =
         local_48;
  }
  return;
}

// operator() @ 1504e7fd0

bool __thiscall
`FMovieSceneAccumulatedBlendState::TTokenEntry<int>::Consolidate'::__l6::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8213652073405743280>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8213652073405743280>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FMovieSceneAccumulatedBlendState::TTokenEntry<int>::Consolidate(TInlineValue<IBlendableTokenStack,64,8>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

