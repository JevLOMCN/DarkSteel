// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 12

// ~TTokenEntry<FControlRigTrackTokenFloat> @ 14a3bc3d0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenFloat>::
~TTokenEntry<FControlRigTrackTokenFloat>(TTokenEntry<FControlRigTrackTokenFloat> *this)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  TBlendableToken<FControlRigTrackTokenFloat> *pTVar3;
  
  puVar1 = &(this->Token).Value.field_0x8;
  uVar2 = *puVar1;
  if ((this->Token).Value.bIsValid) {
    if ((this->Token).Value.bInline) {
      pTVar3 = &this->Token;
    }
    else {
      pTVar3 = *(TBlendableToken<FControlRigTrackTokenFloat> **)(this->Token).Value.Data.Pad;
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

// ~TTokenEntry<FControlRigTrackTokenTransform> @ 14a3bc440

void __thiscall
FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenTransform>::
~TTokenEntry<FControlRigTrackTokenTransform>(TTokenEntry<FControlRigTrackTokenTransform> *this)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  TBlendableToken<FControlRigTrackTokenTransform> *pTVar3;
  
  puVar1 = &(this->Token).Value.field_0x48;
  uVar2 = *puVar1;
  if ((this->Token).Value.bIsValid) {
    if ((this->Token).Value.bInline) {
      pTVar3 = &this->Token;
    }
    else {
      pTVar3 = *(TBlendableToken<FControlRigTrackTokenTransform> **)(this->Token).Value.Data.Pad;
    }
    (this->Token).Value.field_0x48 = uVar2 & 0xfe;
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

// ~TTokenEntry<FControlRigTrackTokenVector2D> @ 14a3bc4b0

void __thiscall
FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenVector2D>::
~TTokenEntry<FControlRigTrackTokenVector2D>(TTokenEntry<FControlRigTrackTokenVector2D> *this)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  TBlendableToken<FControlRigTrackTokenVector2D> *pTVar3;
  
  puVar1 = &(this->Token).Value.field_0x10;
  uVar2 = *puVar1;
  if ((this->Token).Value.bIsValid) {
    if ((this->Token).Value.bInline) {
      pTVar3 = &this->Token;
    }
    else {
      pTVar3 = *(TBlendableToken<FControlRigTrackTokenVector2D> **)(this->Token).Value.Data.Pad;
    }
    (this->Token).Value.field_0x10 = uVar2 & 0xfe;
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

// ~TTokenEntry<FControlRigTrackTokenVector> @ 14a3bc520

void __thiscall
FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenVector>::
~TTokenEntry<FControlRigTrackTokenVector>(TTokenEntry<FControlRigTrackTokenVector> *this)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  TBlendableToken<FControlRigTrackTokenVector> *pTVar3;
  
  puVar1 = &(this->Token).Value.field_0x18;
  uVar2 = *puVar1;
  if ((this->Token).Value.bIsValid) {
    if ((this->Token).Value.bInline) {
      pTVar3 = &this->Token;
    }
    else {
      pTVar3 = *(TBlendableToken<FControlRigTrackTokenVector> **)(this->Token).Value.Data.Pad;
    }
    (this->Token).Value.field_0x18 = uVar2 & 0xfe;
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

// Consolidate @ 14a3f4740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenFloat>::Consolidate
          (TTokenEntry<FControlRigTrackTokenFloat> *this,
          TInlineValue<IBlendableTokenStack,64,8> *param_1)

{
  uchar *puVar1;
  longlong lVar2;
  TBlendableToken<FControlRigTrackTokenFloat> **ppTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TInlineValue<IBlendableTokenStack,64,8> *pTVar7;
  TInlineValue<IBlendableTokenStack,64,8> *pTVar8;
  undefined1 auStackY_c8 [32];
  undefined1 local_78 [8];
  TBlendableToken<FControlRigTrackTokenFloat> *local_70;
  TInlineValue<IBlendableTokenStack,64,8> *local_68;
  ulong64 local_60;
  uchar local_58 [48];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (!param_1->bIsValid) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FMovieSceneAnimTypeID::Unique();
      _Init_thread_footer(&::_TSS0);
    }
    local_28 = local_28 | 3;
    local_60 = ::TypeId.ID;
    local_68 = (TInlineValue<IBlendableTokenStack,64,8> *)
               &___7__TBlendableTokenStack_UFControlRigTrackTokenFloat____6B_;
    local_58[0] = '\0';
    local_58[1] = '\0';
    local_58[2] = '\0';
    local_58[3] = '\0';
    local_58[4] = '\0';
    local_58[5] = '\0';
    local_58[6] = '\0';
    local_58[7] = '\0';
    local_58[8] = '\0';
    local_58[9] = '\0';
    local_58[10] = '\0';
    local_58[0xb] = '\0';
    local_58[0xc] = '\0';
    local_58[0xd] = '\0';
    local_58[0xe] = '\0';
    local_58[0xf] = '\0';
    local_58[0x10] = '\0';
    local_58[0x11] = '\0';
    local_58[0x12] = '\0';
    local_58[0x13] = 0x80;
    if (((local_28 & 1) == 0) &&
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
    pTVar8 = (TInlineValue<IBlendableTokenStack,64,8> *)&local_68;
    if ((local_28 & 2) == 0) {
      pTVar8 = local_68;
    }
    if (((local_28 & 1) == 0) &&
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
    pTVar7 = (TInlineValue<IBlendableTokenStack,64,8> *)&local_68;
    if ((local_28 & 2) == 0) {
      pTVar7 = local_68;
    }
    if ((pTVar8 != pTVar7) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TInlineValue<IBlendableTokenStack,64,8>::operator=
              (param_1,(TInlineValue<IBlendableTokenStack,64,8> *)&local_68);
    if ((local_28 & 1) != 0) {
      pTVar8 = (TInlineValue<IBlendableTokenStack,64,8> *)&local_68;
      if ((local_28 & 2) == 0) {
        pTVar8 = local_68;
      }
      local_28 = local_28 & 0xfe;
      (**(code **)((*(TInlineValue<IBlendableTokenStack,64,8> **)(pTVar8->Data).Pad)->Data).Pad)
                (pTVar8,0);
      if ((local_28 & 2) == 0) {
        FMemory::Free(local_68);
      }
    }
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
    local_78[0] = 0;
    bVar5 = `FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenFloat>::Consolidate'
            ::__l6::<lambda_1>::operator()(local_78);
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
  local_70 = &this->Token;
  if ((local_70 == (TBlendableToken<FControlRigTrackTokenFloat> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TokenToAdd",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\BlendableTokenStack.h"
                         ,99,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)((param_1->Data).Pad + 0x20);
  if (iVar6 < local_70->HierarchicalBias) {
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
    iVar6 = local_70->HierarchicalBias;
    *(int *)((param_1->Data).Pad + 0x20) = iVar6;
  }
  if (local_70->HierarchicalBias == iVar6) {
    ppTVar3 = *(TBlendableToken<FControlRigTrackTokenFloat> ***)((param_1->Data).Pad + 0x10);
    if (((ppTVar3 <= &local_70) && (&local_70 < ppTVar3 + *(int *)((param_1->Data).Pad + 0x1c))) &&
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
    *(TBlendableToken<FControlRigTrackTokenFloat> **)
     (*(longlong *)((param_1->Data).Pad + 0x10) + (longlong)iVar6 * 8) = local_70;
  }
  return;
}

// Consolidate @ 14a3f4ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenTransform>::Consolidate
          (TTokenEntry<FControlRigTrackTokenTransform> *this,
          TInlineValue<IBlendableTokenStack,64,8> *param_1)

{
  uchar *puVar1;
  longlong lVar2;
  TBlendableToken<FControlRigTrackTokenTransform> **ppTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TInlineValue<IBlendableTokenStack,64,8> *pTVar7;
  TInlineValue<IBlendableTokenStack,64,8> *pTVar8;
  undefined1 auStackY_c8 [32];
  undefined1 local_78 [8];
  TBlendableToken<FControlRigTrackTokenTransform> *local_70;
  TInlineValue<IBlendableTokenStack,64,8> *local_68;
  ulong64 local_60;
  uchar local_58 [48];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (!param_1->bIsValid) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FMovieSceneAnimTypeID::Unique();
      _Init_thread_footer(&::_TSS0);
    }
    local_28 = local_28 | 3;
    local_60 = ::TypeId.ID;
    local_68 = (TInlineValue<IBlendableTokenStack,64,8> *)
               &___7__TBlendableTokenStack_UFControlRigTrackTokenTransform____6B_;
    local_58[0] = '\0';
    local_58[1] = '\0';
    local_58[2] = '\0';
    local_58[3] = '\0';
    local_58[4] = '\0';
    local_58[5] = '\0';
    local_58[6] = '\0';
    local_58[7] = '\0';
    local_58[8] = '\0';
    local_58[9] = '\0';
    local_58[10] = '\0';
    local_58[0xb] = '\0';
    local_58[0xc] = '\0';
    local_58[0xd] = '\0';
    local_58[0xe] = '\0';
    local_58[0xf] = '\0';
    local_58[0x10] = '\0';
    local_58[0x11] = '\0';
    local_58[0x12] = '\0';
    local_58[0x13] = 0x80;
    if (((local_28 & 1) == 0) &&
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
    pTVar8 = (TInlineValue<IBlendableTokenStack,64,8> *)&local_68;
    if ((local_28 & 2) == 0) {
      pTVar8 = local_68;
    }
    if (((local_28 & 1) == 0) &&
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
    pTVar7 = (TInlineValue<IBlendableTokenStack,64,8> *)&local_68;
    if ((local_28 & 2) == 0) {
      pTVar7 = local_68;
    }
    if ((pTVar8 != pTVar7) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TInlineValue<IBlendableTokenStack,64,8>::operator=
              (param_1,(TInlineValue<IBlendableTokenStack,64,8> *)&local_68);
    if ((local_28 & 1) != 0) {
      pTVar8 = (TInlineValue<IBlendableTokenStack,64,8> *)&local_68;
      if ((local_28 & 2) == 0) {
        pTVar8 = local_68;
      }
      local_28 = local_28 & 0xfe;
      (**(code **)((*(TInlineValue<IBlendableTokenStack,64,8> **)(pTVar8->Data).Pad)->Data).Pad)
                (pTVar8,0);
      if ((local_28 & 2) == 0) {
        FMemory::Free(local_68);
      }
    }
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
    local_78[0] = 0;
    bVar5 = `FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenTransform>::
            Consolidate'::__l6::<lambda_1>::operator()(local_78);
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
  local_70 = &this->Token;
  if ((local_70 == (TBlendableToken<FControlRigTrackTokenTransform> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TokenToAdd",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\BlendableTokenStack.h"
                         ,99,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)((param_1->Data).Pad + 0x20);
  if (iVar6 < local_70->HierarchicalBias) {
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
    iVar6 = local_70->HierarchicalBias;
    *(int *)((param_1->Data).Pad + 0x20) = iVar6;
  }
  if (local_70->HierarchicalBias == iVar6) {
    ppTVar3 = *(TBlendableToken<FControlRigTrackTokenTransform> ***)((param_1->Data).Pad + 0x10);
    if (((ppTVar3 <= &local_70) && (&local_70 < ppTVar3 + *(int *)((param_1->Data).Pad + 0x1c))) &&
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
    *(TBlendableToken<FControlRigTrackTokenTransform> **)
     (*(longlong *)((param_1->Data).Pad + 0x10) + (longlong)iVar6 * 8) = local_70;
  }
  return;
}

// Consolidate @ 14a3f4e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenVector2D>::Consolidate
          (TTokenEntry<FControlRigTrackTokenVector2D> *this,
          TInlineValue<IBlendableTokenStack,64,8> *param_1)

{
  uchar *puVar1;
  longlong lVar2;
  TBlendableToken<FControlRigTrackTokenVector2D> **ppTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TInlineValue<IBlendableTokenStack,64,8> *pTVar7;
  TInlineValue<IBlendableTokenStack,64,8> *pTVar8;
  undefined1 auStackY_c8 [32];
  undefined1 local_78 [8];
  TBlendableToken<FControlRigTrackTokenVector2D> *local_70;
  TInlineValue<IBlendableTokenStack,64,8> *local_68;
  ulong64 local_60;
  uchar local_58 [48];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (!param_1->bIsValid) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FMovieSceneAnimTypeID::Unique();
      _Init_thread_footer(&::_TSS0);
    }
    local_28 = local_28 | 3;
    local_60 = ::TypeId.ID;
    local_68 = (TInlineValue<IBlendableTokenStack,64,8> *)
               &___7__TBlendableTokenStack_UFControlRigTrackTokenVector2D____6B_;
    local_58[0] = '\0';
    local_58[1] = '\0';
    local_58[2] = '\0';
    local_58[3] = '\0';
    local_58[4] = '\0';
    local_58[5] = '\0';
    local_58[6] = '\0';
    local_58[7] = '\0';
    local_58[8] = '\0';
    local_58[9] = '\0';
    local_58[10] = '\0';
    local_58[0xb] = '\0';
    local_58[0xc] = '\0';
    local_58[0xd] = '\0';
    local_58[0xe] = '\0';
    local_58[0xf] = '\0';
    local_58[0x10] = '\0';
    local_58[0x11] = '\0';
    local_58[0x12] = '\0';
    local_58[0x13] = 0x80;
    if (((local_28 & 1) == 0) &&
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
    pTVar8 = (TInlineValue<IBlendableTokenStack,64,8> *)&local_68;
    if ((local_28 & 2) == 0) {
      pTVar8 = local_68;
    }
    if (((local_28 & 1) == 0) &&
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
    pTVar7 = (TInlineValue<IBlendableTokenStack,64,8> *)&local_68;
    if ((local_28 & 2) == 0) {
      pTVar7 = local_68;
    }
    if ((pTVar8 != pTVar7) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TInlineValue<IBlendableTokenStack,64,8>::operator=
              (param_1,(TInlineValue<IBlendableTokenStack,64,8> *)&local_68);
    if ((local_28 & 1) != 0) {
      pTVar8 = (TInlineValue<IBlendableTokenStack,64,8> *)&local_68;
      if ((local_28 & 2) == 0) {
        pTVar8 = local_68;
      }
      local_28 = local_28 & 0xfe;
      (**(code **)((*(TInlineValue<IBlendableTokenStack,64,8> **)(pTVar8->Data).Pad)->Data).Pad)
                (pTVar8,0);
      if ((local_28 & 2) == 0) {
        FMemory::Free(local_68);
      }
    }
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
    local_78[0] = 0;
    bVar5 = `FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenVector2D>::
            Consolidate'::__l6::<lambda_1>::operator()(local_78);
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
  local_70 = &this->Token;
  if ((local_70 == (TBlendableToken<FControlRigTrackTokenVector2D> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TokenToAdd",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\BlendableTokenStack.h"
                         ,99,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)((param_1->Data).Pad + 0x20);
  if (iVar6 < local_70->HierarchicalBias) {
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
    iVar6 = local_70->HierarchicalBias;
    *(int *)((param_1->Data).Pad + 0x20) = iVar6;
  }
  if (local_70->HierarchicalBias == iVar6) {
    ppTVar3 = *(TBlendableToken<FControlRigTrackTokenVector2D> ***)((param_1->Data).Pad + 0x10);
    if (((ppTVar3 <= &local_70) && (&local_70 < ppTVar3 + *(int *)((param_1->Data).Pad + 0x1c))) &&
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
    *(TBlendableToken<FControlRigTrackTokenVector2D> **)
     (*(longlong *)((param_1->Data).Pad + 0x10) + (longlong)iVar6 * 8) = local_70;
  }
  return;
}

// Consolidate @ 14a3f5190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenVector>::Consolidate
          (TTokenEntry<FControlRigTrackTokenVector> *this,
          TInlineValue<IBlendableTokenStack,64,8> *param_1)

{
  uchar *puVar1;
  longlong lVar2;
  TBlendableToken<FControlRigTrackTokenVector> **ppTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TInlineValue<IBlendableTokenStack,64,8> *pTVar7;
  TInlineValue<IBlendableTokenStack,64,8> *pTVar8;
  undefined1 auStackY_c8 [32];
  undefined1 local_78 [8];
  TBlendableToken<FControlRigTrackTokenVector> *local_70;
  TInlineValue<IBlendableTokenStack,64,8> *local_68;
  ulong64 local_60;
  uchar local_58 [48];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (!param_1->bIsValid) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FMovieSceneAnimTypeID::Unique();
      _Init_thread_footer(&::_TSS0);
    }
    local_28 = local_28 | 3;
    local_60 = ::TypeId.ID;
    local_68 = (TInlineValue<IBlendableTokenStack,64,8> *)
               &___7__TBlendableTokenStack_UFControlRigTrackTokenVector____6B_;
    local_58[0] = '\0';
    local_58[1] = '\0';
    local_58[2] = '\0';
    local_58[3] = '\0';
    local_58[4] = '\0';
    local_58[5] = '\0';
    local_58[6] = '\0';
    local_58[7] = '\0';
    local_58[8] = '\0';
    local_58[9] = '\0';
    local_58[10] = '\0';
    local_58[0xb] = '\0';
    local_58[0xc] = '\0';
    local_58[0xd] = '\0';
    local_58[0xe] = '\0';
    local_58[0xf] = '\0';
    local_58[0x10] = '\0';
    local_58[0x11] = '\0';
    local_58[0x12] = '\0';
    local_58[0x13] = 0x80;
    if (((local_28 & 1) == 0) &&
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
    pTVar8 = (TInlineValue<IBlendableTokenStack,64,8> *)&local_68;
    if ((local_28 & 2) == 0) {
      pTVar8 = local_68;
    }
    if (((local_28 & 1) == 0) &&
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
    pTVar7 = (TInlineValue<IBlendableTokenStack,64,8> *)&local_68;
    if ((local_28 & 2) == 0) {
      pTVar7 = local_68;
    }
    if ((pTVar8 != pTVar7) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TInlineValue<IBlendableTokenStack,64,8>::operator=
              (param_1,(TInlineValue<IBlendableTokenStack,64,8> *)&local_68);
    if ((local_28 & 1) != 0) {
      pTVar8 = (TInlineValue<IBlendableTokenStack,64,8> *)&local_68;
      if ((local_28 & 2) == 0) {
        pTVar8 = local_68;
      }
      local_28 = local_28 & 0xfe;
      (**(code **)((*(TInlineValue<IBlendableTokenStack,64,8> **)(pTVar8->Data).Pad)->Data).Pad)
                (pTVar8,0);
      if ((local_28 & 2) == 0) {
        FMemory::Free(local_68);
      }
    }
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
    local_78[0] = 0;
    bVar5 = `FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenVector>::
            Consolidate'::__l6::<lambda_1>::operator()(local_78);
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
  local_70 = &this->Token;
  if ((local_70 == (TBlendableToken<FControlRigTrackTokenVector> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TokenToAdd",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\BlendableTokenStack.h"
                         ,99,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)((param_1->Data).Pad + 0x20);
  if (iVar6 < local_70->HierarchicalBias) {
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
    iVar6 = local_70->HierarchicalBias;
    *(int *)((param_1->Data).Pad + 0x20) = iVar6;
  }
  if (local_70->HierarchicalBias == iVar6) {
    ppTVar3 = *(TBlendableToken<FControlRigTrackTokenVector> ***)((param_1->Data).Pad + 0x10);
    if (((ppTVar3 <= &local_70) && (&local_70 < ppTVar3 + *(int *)((param_1->Data).Pad + 0x1c))) &&
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
    *(TBlendableToken<FControlRigTrackTokenVector> **)
     (*(longlong *)((param_1->Data).Pad + 0x10) + (longlong)iVar6 * 8) = local_70;
  }
  return;
}

// operator() @ 15054ee50

bool __thiscall
`FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenFloat>::Consolidate'::__l6::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8213652073405743280>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8213652073405743280>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenFloat>::Consolidate(TInlineValue<IBlendableTokenStack,64,8>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15054ee90

bool __thiscall
`FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenTransform>::Consolidate'::__l6::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8213652073405743280>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8213652073405743280>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenTransform>::Consolidate(TInlineValue<IBlendableTokenStack,64,8>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15054eed0

bool __thiscall
`FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenVector2D>::Consolidate'::__l6::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8213652073405743280>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8213652073405743280>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenVector2D>::Consolidate(TInlineValue<IBlendableTokenStack,64,8>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15054ef10

bool __thiscall
`FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenVector>::Consolidate'::__l6::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8213652073405743280>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8213652073405743280>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FMovieSceneAccumulatedBlendState::TTokenEntry<FControlRigTrackTokenVector>::Consolidate(TInlineValue<IBlendableTokenStack,64,8>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

