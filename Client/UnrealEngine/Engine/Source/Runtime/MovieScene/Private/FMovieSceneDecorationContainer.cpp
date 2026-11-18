// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// StaticStruct @ 146063c40

UScriptStruct * __cdecl FMovieSceneDecorationContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDecorationContainer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneDecorationContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDecorationContainer,(UObject *)pUVar1,
                         L"MovieSceneDecorationContainer");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneDecorationContainer.OuterSingleton;
}

// AddDecoration @ 1460a68a0

void __thiscall
FMovieSceneDecorationContainer::AddDecoration
          (FMovieSceneDecorationContainer *this,UObject *param_1,UObject *param_2,
          TFunctionRef<void___cdecl(UObject_*)> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  UPackage *pUVar7;
  undefined1 local_res10 [8];
  undefined1 local_28 [8];
  UObject *local_20;
  TObjectPtr<UClass>_u_0 local_18;
  UObject *local_10;
  
  if (((param_1 == (UObject *)0x0) || (param_2 == (UObject *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDecoration && Outer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Decorations\\MovieSceneDecorationContainer.cpp"
                         ,0x1e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_18 = (TObjectPtr<UClass>_u_0)*(TObjectPtr<UClass>_u_0 *)&param_1->field_0x10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18.DebugPtr != (UClass *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_18.DebugPtr);
  }
  pUVar6 = FindDecoration(this,(TSubclassOf<UObject> *)&local_18.ObjectPtr);
  if (pUVar6 != (UObject *)0x0) {
    local_res10[0] = 0;
    bVar4 = `FMovieSceneDecorationContainer::AddDecoration'::__l10::<lambda_1>::operator()
                      (local_res10);
    if (!bVar4) {
      return;
    }
  }
  pUVar7 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_2);
  bVar4 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)param_1,pUVar7);
  if ((!bVar4) &&
     (local_28[0] = bVar4,
     bVar4 = `FMovieSceneDecorationContainer::AddDecoration'::__l13::<lambda_2>::operator()
                       (local_28), !bVar4)) {
    return;
  }
  local_20 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(param_1);
  }
  pFVar2 = (this->Decorations).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_20) &&
      ((FScriptContainerElement *)&local_20 < pFVar2 + (longlong)(this->Decorations).ArrayMax * 8))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->Decorations).ArrayNum;
  piVar1 = &(this->Decorations).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->Decorations).ArrayNum = iVar5 + 1;
  *(UObject **)((this->Decorations).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_20);
  }
  local_10 = param_1;
  (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_10);
  return;
}

// FindDecoration @ 1460c5100

UObject * __thiscall
FMovieSceneDecorationContainer::FindDecoration
          (FMovieSceneDecorationContainer *this,TSubclassOf<UObject> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UClass *pUVar4;
  longlong lVar5;
  bool bVar6;
  UClass *pUVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  pUVar4 = (param_1->Class).field0_0x0.DebugPtr;
  if ((pUVar4 != (UClass *)0x0) &&
     (pUVar7 = Z_Construct_UClass_UObject_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar2 = (int)pUVar7->_padding_;
    if (((int)pUVar4->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) != &pUVar7->_padding_)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) && (pUVar4 = (param_1->Class).field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0)) {
      pFVar8 = (this->Decorations).AllocatorInstance.Data;
      iVar2 = (this->Decorations).ArrayNum;
      pFVar1 = pFVar8 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->Decorations).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res10);
        }
        if (pFVar8 == pFVar1) break;
        iVar3 = (int)pUVar4->_padding_;
        lVar5 = *(longlong *)&(*(UObject **)pFVar8)->field_0x10;
        if ((iVar3 <= *(int *)(lVar5 + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar4->_padding_)) {
          return *(UObject **)pFVar8;
        }
        pFVar8 = pFVar8 + 8;
      }
    }
  }
  return (UObject *)0x0;
}

// GetDecorations @ 1460ca1d0

TArrayView<TObjectPtr<UObject>_const_,int> * __thiscall
FMovieSceneDecorationContainer::GetDecorations
          (FMovieSceneDecorationContainer *this,
          TArrayView<TObjectPtr<UObject>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TObjectPtr<UObject>_const_,int> *pTVar4;
  
  iVar1 = (this->Decorations).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TObjectPtr<UObject> *)(this->Decorations).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TObjectPtr<UObject>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetOrCreateDecoration @ 1460ce570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
FMovieSceneDecorationContainer::GetOrCreateDecoration
          (FMovieSceneDecorationContainer *this,TSubclassOf<UObject> *param_1,UObject *param_2,
          TFunctionRef<void___cdecl(UObject_*)> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  longlong *plVar10;
  longlong lVar11;
  UClass *pUVar12;
  undefined1 auStack_128 [32];
  UObject **local_108;
  FScriptContainerElement *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  UObject *local_d8;
  FName local_d0;
  UObject *local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_d0 = (FName)FindDecoration(this,param_1);
  if (local_d0 != (FName)0x0) {
    return (UObject *)local_d0;
  }
  pUVar12 = (param_1->Class).field0_0x0.DebugPtr;
  if ((pUVar12 != (UClass *)0x0) &&
     (pUVar8 = Z_Construct_UClass_UObject_NoRegister(), pUVar8 != (UClass *)0x0)) {
    iVar7 = (int)pUVar8->_padding_;
    if (((int)pUVar12->_padding_ < iVar7) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar7 * 8) != &pUVar8->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pUVar12 = (param_1->Class).field0_0x0.DebugPtr;
      goto LAB_1460ce5f3;
    }
  }
  pUVar12 = (UClass *)0x0;
LAB_1460ce5f3:
  FVar4 = local_d0;
  if (local_d0 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar8 = Z_Construct_UClass_UObject_NoRegister();
  CheckIsClassChildOf_Internal(pUVar8,pUVar12);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar12);
  FVar5 = local_d0;
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_d0.ComparisonIndex = FVar4.ComparisonIndex.Value;
  local_d0.Number = FVar4.Number;
  local_b8._16_4_ = local_d0.ComparisonIndex.Value;
  local_b8._20_4_ = local_d0.Number;
  local_b8._24_4_ = RF_Transactional;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_d0 = FVar5;
  local_b8._8_8_ = param_2;
  pUVar9 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar10 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  local_d8 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  pFVar2 = (this->Decorations).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_d8) &&
     (lVar11 = (longlong)(this->Decorations).ArrayMax,
     (FScriptContainerElement *)&local_d8 < pFVar2 + lVar11 * 8)) {
    local_f0 = (longlong)(this->Decorations).ArrayNum;
    local_e8 = 8;
    local_108 = &local_d8;
    local_100 = pFVar2;
    local_f8 = lVar11;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pUVar9 = (UObject *)(*pcVar3)();
      return pUVar9;
    }
  }
  iVar7 = (this->Decorations).ArrayNum;
  piVar1 = &(this->Decorations).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->Decorations).ArrayNum = iVar7 + 1;
  *(UObject **)((this->Decorations).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_d8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_d8);
  }
  local_c8[0] = pUVar9;
  (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_c8);
  return pUVar9;
}

// RemoveDecoration @ 1460e8430

void __thiscall
FMovieSceneDecorationContainer::RemoveDecoration
          (FMovieSceneDecorationContainer *this,TSubclassOf<UObject> *param_1,
          TFunctionRef<void___cdecl(UObject_*)> *param_2)

{
  int *piVar1;
  int iVar2;
  UClass *pUVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined8 local_res10;
  
  pUVar3 = (param_1->Class).field0_0x0.DebugPtr;
  if ((pUVar3 != (UClass *)0x0) &&
     (pUVar9 = Z_Construct_UClass_UObject_NoRegister(), pUVar9 != (UClass *)0x0)) {
    iVar11 = (int)pUVar9->_padding_;
    if (((int)pUVar3->_padding_ < iVar11) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar11 * 8) != &pUVar9->_padding_
       )) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (((bVar7) && (pUVar3 = (param_1->Class).field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) &&
       (iVar11 = (this->Decorations).ArrayNum + -1, -1 < iVar11)) {
      lVar10 = (longlong)iVar11;
      lVar12 = lVar10 * 8;
      do {
        if (((this->Decorations).ArrayNum <= iVar11) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar4 = *(longlong *)
                 (*(longlong *)((this->Decorations).AllocatorInstance.Data + lVar12) + 0x10);
        iVar2 = (int)pUVar3->_padding_;
        if ((iVar2 <= *(int *)(lVar4 + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar3->_padding_)) {
          if (((this->Decorations).ArrayNum <= iVar11) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_res10 = *(undefined8 *)((this->Decorations).AllocatorInstance.Data + lVar12);
          (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res10);
          if (((this->Decorations).ArrayNum <= iVar11) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar2 = (this->Decorations).ArrayNum;
          pFVar5 = (this->Decorations).AllocatorInstance.Data;
          iVar8 = (iVar2 - iVar11) + -1;
          if (1 < iVar8) {
            iVar8 = 1;
          }
          if (iVar8 != 0) {
            memmove(pFVar5 + lVar10 * 8,pFVar5 + (longlong)(iVar2 - iVar8) * 8,(longlong)iVar8 << 3)
            ;
          }
          piVar1 = &(this->Decorations).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)this,(this->Decorations).ArrayNum,
                     &(this->Decorations).ArrayMax);
        }
        lVar10 = lVar10 + -1;
        lVar12 = lVar12 + -8;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
    }
  }
  return;
}

// operator() @ 1504e2be0

bool __thiscall
`FMovieSceneDecorationContainer::AddDecoration'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7631215303606665248>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7631215303606665248>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e3020

bool __thiscall
`FMovieSceneDecorationContainer::AddDecoration'::__l13::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7631215303606665253>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7631215303606665253>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

