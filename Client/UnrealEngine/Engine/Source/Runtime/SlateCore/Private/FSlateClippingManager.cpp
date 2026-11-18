// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 11

// FSlateClippingManager @ 1424ea320

FSlateClippingManager * __thiscall
FSlateClippingManager::FSlateClippingManager(FSlateClippingManager *this)

{
  (this->ClippingStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClippingStack).ArrayNum = 0;
  (this->ClippingStack).ArrayMax = 0;
  (this->ClippingStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClippingStates).ArrayNum = 0;
  (this->ClippingStates).ArrayMax = 0;
  return this;
}

// CreateClippingState @ 142505a80

FSlateClippingState * __thiscall
FSlateClippingManager::CreateClippingState
          (FSlateClippingManager *this,FSlateClippingState *__return_storage_ptr__,
          FSlateClippingZone *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TVector2<float>_u_0 TVar5;
  bool bVar6;
  int iVar7;
  FSlateClippingState *pFVar8;
  FSlateClippingZone *pFVar9;
  longlong lVar10;
  FSlateClippingZone local_48;
  
  pFVar8 = GetPreviousClippingState(this,param_1->bIntersect);
  piVar1 = &(__return_storage_ptr__->StencilQuads).ArrayMax;
  (__return_storage_ptr__->StencilQuads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->StencilQuads).ArrayNum = 0;
  *piVar1 = 0;
  (__return_storage_ptr__->ScissorRect).bIsSet = false;
  __return_storage_ptr__->Flags = param_1->bAlwaysClip;
  __return_storage_ptr__->Debugging_StateIndex = -1;
  __return_storage_ptr__->Debugging_StateIndexFromFrame = -1;
  if (pFVar8 == (FSlateClippingState *)0x0) {
    if (param_1->bIsAxisAligned != 0) {
      if ((TOptional<FSlateClippingZone> *)param_1 == &__return_storage_ptr__->ScissorRect) {
        return __return_storage_ptr__;
      }
      TVar5 = (param_1->TopRight).field0_0x0;
      (__return_storage_ptr__->ScissorRect).TypedValue.TopLeft.field0_0x0 =
           (param_1->TopLeft).field0_0x0;
      (__return_storage_ptr__->ScissorRect).TypedValue.TopRight.field0_0x0 = TVar5;
      TVar5 = (param_1->BottomRight).field0_0x0;
      (__return_storage_ptr__->ScissorRect).TypedValue.BottomLeft.field0_0x0 =
           (param_1->BottomLeft).field0_0x0;
      (__return_storage_ptr__->ScissorRect).TypedValue.BottomRight.field0_0x0 = TVar5;
      *(undefined4 *)&(__return_storage_ptr__->ScissorRect).TypedValue.field_0x20 =
           *(undefined4 *)&param_1->field_0x20;
      (__return_storage_ptr__->ScissorRect).bIsSet = true;
      return __return_storage_ptr__;
    }
  }
  else {
    if ((pFVar8->ScissorRect).bIsSet == false) {
      if (((pFVar8->StencilQuads).ArrayNum < 1) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3114265294382563032>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Layout\\Clipping.cpp"
                             ,0x128,"PreviousClippingState->StencilQuads.Num() > 0"), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FSlateClippingState *)(*pcVar4)();
        return pFVar8;
      }
      if (__return_storage_ptr__ != pFVar8) {
        iVar7 = (pFVar8->StencilQuads).ArrayNum;
        pFVar3 = (pFVar8->StencilQuads).AllocatorInstance.Data;
        (__return_storage_ptr__->StencilQuads).ArrayNum = iVar7;
        if ((iVar7 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x24,4,iVar7,*piVar1,(ForAnyElementType *)__return_storage_ptr__,iVar7,piVar1);
          if (iVar7 != 0) {
            memcpy((__return_storage_ptr__->StencilQuads).AllocatorInstance.Data,pFVar3,
                   (longlong)iVar7 * 0x24);
          }
        }
      }
      pFVar9 = (FSlateClippingZone *)(__return_storage_ptr__->StencilQuads).AllocatorInstance.Data;
      if (pFVar9 <= param_1) {
        pFVar9 = pFVar9 + *piVar1;
        goto joined_r0x000142505cbc;
      }
    }
    else {
      if (param_1->bIsAxisAligned != 0) {
        if (((pFVar8->ScissorRect).bIsSet == false) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FSlateClippingState *)(*pcVar4)();
          return pFVar8;
        }
        pFVar9 = FSlateClippingZone::Intersect(&(pFVar8->ScissorRect).TypedValue,&local_48,param_1);
        if ((TOptional<FSlateClippingZone> *)pFVar9 == &__return_storage_ptr__->ScissorRect) {
          return __return_storage_ptr__;
        }
        TVar5 = (pFVar9->TopRight).field0_0x0;
        (__return_storage_ptr__->ScissorRect).TypedValue.TopLeft.field0_0x0 =
             (pFVar9->TopLeft).field0_0x0;
        (__return_storage_ptr__->ScissorRect).TypedValue.TopRight.field0_0x0 = TVar5;
        TVar5 = (pFVar9->BottomRight).field0_0x0;
        (__return_storage_ptr__->ScissorRect).TypedValue.BottomLeft.field0_0x0 =
             (pFVar9->BottomLeft).field0_0x0;
        (__return_storage_ptr__->ScissorRect).TypedValue.BottomRight.field0_0x0 = TVar5;
        *(undefined4 *)&(__return_storage_ptr__->ScissorRect).TypedValue.field_0x20 =
             *(undefined4 *)&pFVar9->field_0x20;
        (__return_storage_ptr__->ScissorRect).bIsSet = true;
        return __return_storage_ptr__;
      }
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x424,(ForAnyElementType *)__return_storage_ptr__,piVar1);
      lVar10 = (longlong)iVar7;
      (__return_storage_ptr__->StencilQuads).ArrayNum = iVar7 + 1;
      TVar5 = (pFVar8->ScissorRect).TypedValue.TopRight.field0_0x0;
      pFVar3 = (__return_storage_ptr__->StencilQuads).AllocatorInstance.Data;
      *(TVector2<float>_u_0 *)(pFVar3 + lVar10 * 0x24) =
           (pFVar8->ScissorRect).TypedValue.TopLeft.field0_0x0;
      ((TVector2<float>_u_0 *)(pFVar3 + lVar10 * 0x24))[1] = TVar5;
      TVar5 = (pFVar8->ScissorRect).TypedValue.BottomRight.field0_0x0;
      *(TVector2<float>_u_0 *)(pFVar3 + lVar10 * 0x24 + 0x10) =
           (pFVar8->ScissorRect).TypedValue.BottomLeft.field0_0x0;
      *(TVector2<float>_u_0 *)(pFVar3 + lVar10 * 0x24 + 0x18) = TVar5;
      *(undefined4 *)(pFVar3 + lVar10 * 0x24 + 0x20) =
           *(undefined4 *)&(pFVar8->ScissorRect).TypedValue.field_0x20;
      pFVar9 = (FSlateClippingZone *)(__return_storage_ptr__->StencilQuads).AllocatorInstance.Data;
      if (pFVar9 <= param_1) {
        pFVar9 = pFVar9 + *piVar1;
joined_r0x000142505cbc:
        if ((param_1 < pFVar9) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FSlateClippingState *)(*pcVar4)();
          return pFVar8;
        }
      }
    }
    iVar7 = (__return_storage_ptr__->StencilQuads).ArrayNum;
    if (iVar7 != *piVar1) goto LAB_142505d1c;
  }
  iVar7 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x424,(ForAnyElementType *)__return_storage_ptr__,piVar1);
LAB_142505d1c:
  lVar10 = (longlong)iVar7;
  (__return_storage_ptr__->StencilQuads).ArrayNum = iVar7 + 1;
  TVar5 = (param_1->TopRight).field0_0x0;
  pFVar3 = (__return_storage_ptr__->StencilQuads).AllocatorInstance.Data;
  *(TVector2<float>_u_0 *)(pFVar3 + lVar10 * 0x24) = (param_1->TopLeft).field0_0x0;
  ((TVector2<float>_u_0 *)(pFVar3 + lVar10 * 0x24))[1] = TVar5;
  TVar5 = (param_1->BottomRight).field0_0x0;
  *(TVector2<float>_u_0 *)(pFVar3 + lVar10 * 0x24 + 0x10) = (param_1->BottomLeft).field0_0x0;
  *(TVector2<float>_u_0 *)(pFVar3 + lVar10 * 0x24 + 0x18) = TVar5;
  *(undefined4 *)(pFVar3 + lVar10 * 0x24 + 0x20) = *(undefined4 *)&param_1->field_0x20;
  return __return_storage_ptr__;
}

// GetActiveClippingState @ 14250ba20

TOptional<FSlateClippingState> * __thiscall
FSlateClippingManager::GetActiveClippingState
          (FSlateClippingManager *this,TOptional<FSlateClippingState> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TOptional<FSlateClippingState> *pTVar4;
  uint uVar5;
  
  uVar3 = GetClippingIndex(this);
  if (uVar3 == 0xffffffff) {
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->ClippingStates).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TOptional<FSlateClippingState> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FSlateClippingState::FSlateClippingState
            (&__return_storage_ptr__->TypedValue,
             (FSlateClippingState *)
             ((this->ClippingStates).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x48));
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// GetClippingIndex @ 14250cab0

int __thiscall FSlateClippingManager::GetClippingIndex(FSlateClippingManager *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (this->ClippingStack).ArrayNum;
  if (iVar4 < 1) {
    return -1;
  }
  uVar3 = 0;
  if ((int)(iVar4 - 1U) < iVar4) {
    uVar3 = ~(iVar4 - 1U) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->ClippingStack).AllocatorInstance.Data +
                 (longlong)(this->ClippingStack).ArrayNum * 4 + -4);
}

// GetClippingStates @ 14250cc20

TArray<FSlateClippingState,TSizedDefaultAllocator<32>_> * __thiscall
FSlateClippingManager::GetClippingStates(FSlateClippingManager *this)

{
  return &this->ClippingStates;
}

// GetPreviousClippingState @ 14250e9c0

FSlateClippingState * __thiscall
FSlateClippingManager::GetPreviousClippingState(FSlateClippingManager *this,bool param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FSlateClippingState *pFVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar1 = (this->ClippingStack).ArrayNum;
  if (param_1) {
    if (0 < iVar1) {
      uVar8 = 0;
      if ((int)(iVar1 - 1U) < iVar1) {
        uVar8 = ~(iVar1 - 1U) >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FSlateClippingState *)(*pcVar3)();
        return pFVar7;
      }
      uVar8 = *(uint *)((this->ClippingStack).AllocatorInstance.Data +
                       (longlong)(this->ClippingStack).ArrayNum * 4 + -4);
      uVar5 = 0;
      if ((int)uVar8 < (this->ClippingStates).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FSlateClippingState *)(*pcVar3)();
        return pFVar7;
      }
      return (FSlateClippingState *)
             ((this->ClippingStates).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x48);
    }
  }
  else {
    uVar8 = iVar1 - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 * 4;
      do {
        uVar5 = 0;
        if ((int)uVar8 < (this->ClippingStack).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FSlateClippingState *)(*pcVar3)();
          return pFVar7;
        }
        uVar5 = *(uint *)((this->ClippingStack).AllocatorInstance.Data + lVar9);
        uVar6 = 0;
        if ((int)uVar5 < (this->ClippingStates).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FSlateClippingState *)(*pcVar3)();
          return pFVar7;
        }
        pFVar2 = (this->ClippingStates).AllocatorInstance.Data;
        if (((byte)pFVar2[(longlong)(int)uVar5 * 0x48 + 0x38] & 1) != 0) {
          return (FSlateClippingState *)(pFVar2 + (longlong)(int)uVar5 * 0x48);
        }
        lVar9 = lVar9 + -4;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
      return (FSlateClippingState *)0x0;
    }
  }
  return (FSlateClippingState *)0x0;
}

// PopClip @ 142517dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateClippingManager::PopClip(FSlateClippingManager *this)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  
  iVar3 = (this->ClippingStack).ArrayNum;
  if (iVar3 == 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3114265294382562982>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Layout\\Clipping.cpp"
                       ,0x15a,"ClippingStack.Num() != 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (1 < (byte)LogSlate._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      return;
    }
  }
  else {
    if (iVar3 < 1) {
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
    iVar3 = (this->ClippingStack).ArrayNum;
    uVar1 = iVar3 - 1;
    _Dst = (this->ClippingStack).AllocatorInstance.Data + (longlong)(int)uVar1 * 4;
    iVar3 = ~uVar1 + iVar3;
    if (iVar3 != 0) {
      memmove(_Dst,_Dst + 4,(longlong)iVar3 << 2);
    }
    piVar2 = &(this->ClippingStack).ArrayNum;
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(ForAnyElementType *)this,(this->ClippingStack).ArrayNum,
               &(this->ClippingStack).ArrayMax);
  }
  return;
}

// PopToStackIndex @ 142518330

void __thiscall FSlateClippingManager::PopToStackIndex(FSlateClippingManager *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_1 + 1;
  iVar4 = (this->ClippingStack).ArrayNum;
  if ((int)uVar6 < iVar4) {
    uVar5 = iVar4 - uVar6;
    if (((int)(uVar5 | uVar6) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->ClippingStack).AllocatorInstance.Data + (longlong)(int)uVar6 * 4;
      iVar4 = ((this->ClippingStack).ArrayNum - uVar5) - uVar6;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 4,(longlong)iVar4 << 2);
      }
      piVar1 = &(this->ClippingStack).ArrayNum;
      *piVar1 = *piVar1 - uVar5;
    }
  }
  return;
}

// PushClip @ 142519c80

int __thiscall
FSlateClippingManager::PushClip(FSlateClippingManager *this,FSlateClippingZone *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSlateClippingState *pFVar6;
  int local_58 [2];
  FSlateClippingState local_50;
  
  pFVar6 = CreateClippingState(this,&local_50,param_1);
  local_58[0] = TArray<FSlateClippingState,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<FSlateClippingState_const_&>(&this->ClippingStates,pFVar6);
  pFVar6->Debugging_StateIndex = local_58[0];
  pFVar6->Debugging_StateIndexFromFrame = GFrameNumber;
  pFVar2 = (this->ClippingStack).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_58) &&
     ((FScriptContainerElement *)local_58 < pFVar2 + (longlong)(this->ClippingStack).ArrayMax * 4))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = (this->ClippingStack).ArrayNum;
  piVar1 = &(this->ClippingStack).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)this,piVar1);
  }
  (this->ClippingStack).ArrayNum = iVar5 + 1;
  *(int *)((this->ClippingStack).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_58[0];
  if (local_50.StencilQuads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.StencilQuads.AllocatorInstance.Data);
  }
  return local_58[0];
}

// PushClippingState @ 142519e90

int __thiscall
FSlateClippingManager::PushClippingState(FSlateClippingManager *this,FSlateClippingState *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_18 [4];
  
  local_18[0] = TArray<FSlateClippingState,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<FSlateClippingState_const_&>(&this->ClippingStates,param_1);
  param_1->Debugging_StateIndex = local_18[0];
  param_1->Debugging_StateIndexFromFrame = GFrameNumber;
  pFVar2 = (this->ClippingStack).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->ClippingStack).ArrayMax * 4))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = (this->ClippingStack).ArrayNum;
  piVar1 = &(this->ClippingStack).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)this,piVar1);
  }
  (this->ClippingStack).ArrayNum = iVar5 + 1;
  *(int *)((this->ClippingStack).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_18[0];
  return local_18[0];
}

// ResetClippingState @ 14251cc60

void __thiscall FSlateClippingManager::ResetClippingState(FSlateClippingManager *this)

{
  int *piVar1;
  int iVar2;
  FSlateClippingState *pFVar3;
  
  piVar1 = &(this->ClippingStates).ArrayMax;
  pFVar3 = (FSlateClippingState *)(this->ClippingStates).AllocatorInstance.Data;
  iVar2 = (this->ClippingStates).ArrayNum;
  if ((this->ClippingStates).ArrayMax < 0) {
    DestructItems<FSlateClippingState,int>(pFVar3,iVar2);
    (this->ClippingStates).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,&(this->ClippingStates).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FSlateClippingState,int>(pFVar3,iVar2);
    (this->ClippingStates).ArrayNum = 0;
  }
  (this->ClippingStack).ArrayNum = 0;
  if ((this->ClippingStack).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,&(this->ClippingStack).ArrayMax);
  }
  return;
}

