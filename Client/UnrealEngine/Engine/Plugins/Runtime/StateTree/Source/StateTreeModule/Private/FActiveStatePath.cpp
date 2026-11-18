// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 22

// FActiveStatePath @ 14d52c180

FActiveStatePath * __thiscall
UE::StateTree::FActiveStatePath::FActiveStatePath
          (FActiveStatePath *this,TNotNull<UStateTree_const_*> param_1,
          TArray<UE::StateTree::FActiveState,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FActiveStatePath *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  UStateTree *local_res10;
  
  if ((GC::GIsIncrementalReachabilityPending) && (param_1.Val != (UStateTree *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1.Val);
  }
  (this->StateTree).WeakPtr = (FWeakObjectPtr)0x0;
  local_res10 = param_1.Val;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1.Val != (UStateTree *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1.Val);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res10);
  (this->States).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->States).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->States).ArrayNum = param_2->ArrayNum;
  (this->States).ArrayMax = param_2->ArrayMax;
  pFVar1 = (param_2->AllocatorInstance).Data;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  pFVar5 = pFVar1;
  while( true ) {
    if (param_2->ArrayNum != 0) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::StateTree::FActiveState,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) goto LAB_14d52c262;
    if ((*(short *)(pFVar5 + 8) == -1) || ((ushort)(*(short *)(pFVar5 + 8) + 4U) < 3)) break;
    pFVar5 = pFVar5 + 0xc;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeStatePath.cpp"
                     ,0x2d,L"Contains an invalid handle.");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FActiveStatePath *)(*pcVar2)();
    return pFVar4;
  }
LAB_14d52c262:
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FActiveStatePath @ 14d52c290

FActiveStatePath * __thiscall
UE::StateTree::FActiveStatePath::FActiveStatePath
          (FActiveStatePath *this,TNotNull<UStateTree_const_*> param_1,
          TArrayView<UE::StateTree::FActiveState_const_,int> *param_2)

{
  TArray<UE::StateTree::FActiveState,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FActiveState *pFVar3;
  ushort uVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  FActiveStatePath *pFVar8;
  FActiveState *_Src;
  UStateTree *local_res8;
  
  if ((GC::GIsIncrementalReachabilityPending) && (param_1.Val != (UStateTree *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1.Val);
  }
  (this->StateTree).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1.Val;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1.Val != (UStateTree *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1.Val);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  iVar5 = param_2->ArrayNum;
  pTVar1 = &this->States;
  _Src = param_2->DataPtr;
  piVar2 = &(this->States).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->States).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar5 * 0xc);
  }
  pFVar3 = _Src + iVar5;
  while( true ) {
    if (_Src == pFVar3) {
      return this;
    }
    uVar4 = (_Src->StateHandle).Index;
    if ((uVar4 == 0xffff) || ((ushort)(uVar4 + 4) < 3)) break;
    _Src = _Src + 1;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeStatePath.cpp"
                     ,0x1b,L"Contains an invalid handle.");
  if (!bVar7) {
    return this;
  }
  pcVar6 = (code *)swi(3);
  pFVar8 = (FActiveStatePath *)(*pcVar6)();
  return pFVar8;
}

// Contains @ 14d52dbe0

bool __thiscall
UE::StateTree::FActiveStatePath::Contains(FActiveStatePath *this,FActiveState *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  FScriptContainerElement *pFVar9;
  int local_18;
  int iStack_14;
  short local_10;
  
  iVar4 = (this->States).ArrayNum;
  uVar2 = param_1->FrameID;
  uVar3 = param_1->StateID;
  uVar5 = *(undefined4 *)&param_1->StateHandle;
  pFVar9 = (this->States).AllocatorInstance.Data;
  if (iVar4 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  pFVar1 = pFVar9 + (longlong)iVar4 * 0xc;
  if (pFVar9 != pFVar1) {
    local_10 = (short)uVar5;
    do {
      if (((*(int *)pFVar9 == uVar2) && (*(int *)(pFVar9 + 4) == uVar3)) &&
         (*(short *)(pFVar9 + 8) == local_10)) {
        return true;
      }
      pFVar9 = pFVar9 + 0xc;
    } while (pFVar9 != pFVar1);
  }
  return false;
}

// Contains @ 14d52dc90

bool __thiscall
UE::StateTree::FActiveStatePath::Contains(FActiveStatePath *this,FActiveStateID param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FScriptContainerElement *pFVar6;
  
  iVar2 = (this->States).ArrayNum;
  pFVar6 = (this->States).AllocatorInstance.Data;
  if ((iVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (param_1.Value != 0) {
    pFVar1 = pFVar6 + (longlong)iVar2 * 0xc;
    for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 0xc) {
      if (*(uint *)(pFVar6 + 4) == param_1.Value) {
        return true;
      }
    }
  }
  return false;
}

// Contains @ 14d52dd20

bool __cdecl
UE::StateTree::FActiveStatePath::Contains
          (TArrayView<UE::StateTree::FActiveState_const_,int> *param_1,FActiveState *param_2)

{
  FActiveState *pFVar1;
  FActiveState *pFVar2;
  
  pFVar2 = param_1->DataPtr;
  pFVar1 = pFVar2 + param_1->ArrayNum;
  if (pFVar2 != pFVar1) {
    do {
      if ((((pFVar2->FrameID).Value == (param_2->FrameID).Value) &&
          ((pFVar2->StateID).Value == (param_2->StateID).Value)) &&
         ((pFVar2->StateHandle).Index == (param_2->StateHandle).Index)) {
        return true;
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar1);
  }
  return false;
}

// Contains @ 14d52dd70

bool __cdecl
UE::StateTree::FActiveStatePath::Contains
          (TArrayView<UE::StateTree::FActiveState_const_,int> *param_1,FActiveStateID param_2)

{
  FActiveState *pFVar1;
  FActiveState *pFVar2;
  
  if (param_2.Value != 0) {
    pFVar2 = param_1->DataPtr;
    pFVar1 = pFVar2 + param_1->ArrayNum;
    for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 1) {
      if ((pFVar2->StateID).Value == param_2.Value) {
        return true;
      }
    }
  }
  return false;
}

// Describe @ 14d52e310

TValueOrError<FString,void> * __thiscall
UE::StateTree::FActiveStatePath::Describe
          (FActiveStatePath *this,TValueOrError<FString,void> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TNotNull<UStateTree_const_*> TVar4;
  TValueOrError<FString,void> *pTVar5;
  TArrayView<UE::StateTree::FActiveState_const_,int> local_18;
  
  TVar4.Val = (UStateTree *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (TVar4.Val == (UStateTree *)0x0) {
    (__return_storage_ptr__->Value).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 0xc) = 0xffffffff;
    return __return_storage_ptr__;
  }
  local_18.DataPtr = (FActiveState *)(this->States).AllocatorInstance.Data;
  iVar1 = (this->States).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<FString,void> *)(*pcVar2)();
      return pTVar5;
    }
  }
  local_18.ArrayNum = iVar1;
  Describe(__return_storage_ptr__,TVar4,&local_18);
  return __return_storage_ptr__;
}

// Describe @ 14d52e3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FString,void> * __cdecl
UE::StateTree::FActiveStatePath::Describe
          (TValueOrError<FString,void> *__return_storage_ptr__,TNotNull<UStateTree_const_*> param_1,
          TArrayView<UE::StateTree::FActiveState_const_,int> *param_2)

{
  ushort uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  void *pvVar7;
  TValueOrError<FString,void> *pTVar8;
  longlong lVar9;
  FActiveState *pFVar10;
  undefined1 auStack_2a8 [32];
  ulonglong local_288;
  longlong local_280;
  FActiveState *local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_2a8;
  local_268.Base = local_248;
  pFVar10 = param_2->DataPtr;
  local_268.CurPos = local_248;
  local_268.End = (wchar_t *)local_48;
  local_278 = pFVar10 + param_2->ArrayNum;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  bVar6 = true;
  if (pFVar10 != local_278) {
    do {
      uVar1 = (pFVar10->StateHandle).Index;
      if ((uVar1 == 0xffff) || ((ushort)(uVar1 + 4) < 3)) {
LAB_14d52e68b:
        (__return_storage_ptr__->Value).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        *(undefined4 *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 8) = 0;
        *(undefined4 *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 0xc) = 0xffffffff;
        goto LAB_14d52e6f8;
      }
      if (0 < (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1)) {
        if (local_268.End < local_268.CurPos + 2) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,2);
        }
        pvVar7 = FGenericPlatformString::Memcpy(local_268.CurPos,L"; ",4);
        local_268.CurPos = (wchar_t *)((longlong)pvVar7 + 4);
      }
      if (bVar6) {
        if (local_268.End < local_268.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,1);
        }
        *local_268.CurPos = L'{';
        local_268.CurPos = local_268.CurPos + 1;
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1.Val,(UObject *)0x0,&local_268)
        ;
        if (local_268.End < local_268.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,1);
        }
        *local_268.CurPos = L'}';
        local_268.CurPos = local_268.CurPos + 1;
        bVar6 = false;
      }
      iVar2 = ((param_1.Val)->States).ArrayNum;
      if ((iVar2 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TValueOrError<FString,void> *)(*pcVar4)();
        return pTVar8;
      }
      if (iVar2 <= (int)(uint)(pFVar10->StateHandle).Index) goto LAB_14d52e68b;
      iVar2 = ((param_1.Val)->States).ArrayNum;
      pFVar3 = ((param_1.Val)->States).AllocatorInstance.Data;
      if ((iVar2 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TValueOrError<FString,void> *)(*pcVar4)();
        return pTVar8;
      }
      uVar1 = (pFVar10->StateHandle).Index;
      if ((iVar2 <= (int)(uint)uVar1) &&
         (local_288 = (ulonglong)uVar1, local_280 = (longlong)iVar2,
         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TValueOrError<FString,void> *)(*pcVar4)();
        return pTVar8;
      }
      lVar9 = (ulonglong)uVar1 * 0x78;
      ::FName::AppendString((FName *)(pFVar3 + lVar9 + 0x10),&local_268);
      if (local_268.End < local_268.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,1);
      }
      *local_268.CurPos = L'(';
      local_268.CurPos = local_268.CurPos + 1;
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_268,L"%u");
      if (local_268.End < local_268.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,1);
      }
      *local_268.CurPos = L')';
      local_268.CurPos = local_268.CurPos + 1;
      if ((pFVar3[lVar9 + 0x72] == (FScriptContainerElement)0x3) &&
         (param_1.Val = *(UStateTree **)(pFVar3 + lVar9 + 0x38), param_1.Val == (UStateTree *)0x0))
      goto LAB_14d52e68b;
      pFVar10 = pFVar10 + 1;
    } while (pFVar10 != local_278);
  }
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  *local_268.CurPos = L'\0';
  ::FString::FString((FString *)__return_storage_ptr__,local_268.Base);
  if ((*(int *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 0xc) == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TValueOrError<FString,void> *)(*pcVar4)();
    return pTVar8;
  }
LAB_14d52e6f8:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return __return_storage_ptr__;
}

// IndexOf @ 14d5316b0

int __thiscall
UE::StateTree::FActiveStatePath::IndexOf(FActiveStatePath *this,FActiveState *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  int local_18;
  int iStack_14;
  short local_10;
  
  iVar7 = (this->States).ArrayNum;
  uVar1 = param_1->FrameID;
  uVar2 = param_1->StateID;
  uVar3 = *(undefined4 *)&param_1->StateHandle;
  pFVar4 = (this->States).AllocatorInstance.Data;
  if (iVar7 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  if (pFVar4 != pFVar4 + (longlong)iVar7 * 0xc) {
    local_10 = (short)uVar3;
    pFVar8 = pFVar4;
    do {
      if (((*(int *)pFVar8 == uVar1) && (*(int *)(pFVar8 + 4) == uVar2)) &&
         (*(short *)(pFVar8 + 8) == local_10)) {
        return (int)(((longlong)pFVar8 - (longlong)pFVar4) / 0xc);
      }
      pFVar8 = pFVar8 + 0xc;
    } while (pFVar8 != pFVar4 + (longlong)iVar7 * 0xc);
  }
  return -1;
}

// IndexOf @ 14d531780

int __thiscall
UE::StateTree::FActiveStatePath::IndexOf(FActiveStatePath *this,FActiveStateID param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  iVar4 = (this->States).ArrayNum;
  pFVar1 = (this->States).AllocatorInstance.Data;
  if ((iVar4 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  if (param_1.Value == 0) {
    return -1;
  }
  pFVar5 = pFVar1;
  while( true ) {
    if (pFVar5 == pFVar1 + (longlong)iVar4 * 0xc) {
      return -1;
    }
    if (*(uint *)(pFVar5 + 4) == param_1.Value) break;
    pFVar5 = pFVar5 + 0xc;
  }
  return (int)(((longlong)pFVar5 - (longlong)pFVar1) / 0xc);
}

// IndexOf @ 14d531850

int __cdecl
UE::StateTree::FActiveStatePath::IndexOf
          (TArrayView<UE::StateTree::FActiveState_const_,int> *param_1,FActiveState *param_2)

{
  FActiveState *pFVar1;
  FActiveState *pFVar2;
  
  pFVar1 = param_1->DataPtr;
  if (pFVar1 != pFVar1 + param_1->ArrayNum) {
    pFVar2 = pFVar1;
    do {
      if ((((pFVar2->FrameID).Value == (param_2->FrameID).Value) &&
          ((pFVar2->StateID).Value == (param_2->StateID).Value)) &&
         ((pFVar2->StateHandle).Index == (param_2->StateHandle).Index)) {
        return (int)(((longlong)pFVar2 - (longlong)pFVar1) / 0xc);
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar1 + param_1->ArrayNum);
  }
  return -1;
}

// IndexOf @ 14d5318c0

int __cdecl
UE::StateTree::FActiveStatePath::IndexOf
          (TArrayView<UE::StateTree::FActiveState_const_,int> *param_1,FActiveStateID param_2)

{
  FActiveState *pFVar1;
  FActiveState *pFVar2;
  
  if (param_2.Value == 0) {
    return -1;
  }
  pFVar1 = param_1->DataPtr;
  pFVar2 = pFVar1;
  while( true ) {
    if (pFVar2 == pFVar1 + param_1->ArrayNum) {
      return -1;
    }
    if ((pFVar2->StateID).Value == param_2.Value) break;
    pFVar2 = pFVar2 + 1;
  }
  return (int)(((longlong)pFVar2 - (longlong)pFVar1) / 0xc);
}

// Intersect @ 14d531960

TArrayView<UE::StateTree::FActiveState_const_,int> * __thiscall
UE::StateTree::FActiveStatePath::Intersect
          (FActiveStatePath *this,
          TArrayView<UE::StateTree::FActiveState_const_,int> *__return_storage_ptr__,
          FActiveStatePath *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<UE::StateTree::FActiveState_const_,int> *pTVar5;
  TArrayView<UE::StateTree::FActiveState_const_,int> local_28;
  TArrayView<UE::StateTree::FActiveState_const_,int> local_18;
  
  local_28.DataPtr = (FActiveState *)(param_1->States).AllocatorInstance.Data;
  iVar1 = (param_1->States).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<UE::StateTree::FActiveState_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  local_18.DataPtr = (FActiveState *)(this->States).AllocatorInstance.Data;
  iVar2 = (this->States).ArrayNum;
  local_28.ArrayNum = iVar1;
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<UE::StateTree::FActiveState_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  local_18.ArrayNum = iVar2;
  Intersect(__return_storage_ptr__,&local_18,&local_28);
  return __return_storage_ptr__;
}

// Intersect @ 14d531a20

TArrayView<UE::StateTree::FActiveState_const_,int> * __cdecl
UE::StateTree::FActiveStatePath::Intersect
          (TArrayView<UE::StateTree::FActiveState_const_,int> *__return_storage_ptr__,
          TArrayView<UE::StateTree::FActiveState_const_,int> *param_1,
          TArrayView<UE::StateTree::FActiveState_const_,int> *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  FActiveState *pFVar5;
  FActiveState *pFVar6;
  TArrayView<UE::StateTree::FActiveState_const_,int> *pTVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  if ((param_1->ArrayNum == param_2->ArrayNum) && (0 < param_1->ArrayNum)) {
    pFVar5 = TArrayView<UE::StateTree::FActiveState_const_,int>::Last(param_1,0);
    pFVar6 = TArrayView<UE::StateTree::FActiveState_const_,int>::Last(param_2,0);
    if (((pFVar5->FrameID).Value == (pFVar6->FrameID).Value) &&
       (((pFVar5->StateID).Value == (pFVar6->StateID).Value &&
        ((pFVar5->StateHandle).Index == (pFVar6->StateHandle).Index)))) {
      iVar8 = param_1->ArrayNum;
      uVar2 = *(undefined4 *)&param_1->field_0xc;
      __return_storage_ptr__->DataPtr = param_1->DataPtr;
      __return_storage_ptr__->ArrayNum = iVar8;
      *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar2;
      return __return_storage_ptr__;
    }
  }
  uVar9 = 0;
  iVar8 = param_2->ArrayNum;
  if (param_1->ArrayNum < param_2->ArrayNum) {
    iVar8 = param_1->ArrayNum;
  }
  if (0 < iVar8) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TArrayView<UE::StateTree::FActiveState_const_,int> *)(*pcVar1)();
        return pTVar7;
      }
      pFVar5 = param_1->DataPtr;
      uVar4 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TArrayView<UE::StateTree::FActiveState_const_,int> *)(*pcVar1)();
        return pTVar7;
      }
      pFVar6 = param_2->DataPtr;
      if (((*(int *)((longlong)&(pFVar5->FrameID).Value + lVar11) !=
            *(int *)((longlong)&(pFVar6->FrameID).Value + lVar11)) ||
          (*(int *)((longlong)&(pFVar5->StateID).Value + lVar11) !=
           *(int *)((longlong)&(pFVar6->StateID).Value + lVar11))) ||
         (*(short *)((longlong)&(pFVar5->StateHandle).Index + lVar11) !=
          *(short *)((longlong)&(pFVar6->StateHandle).Index + lVar11))) break;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0xc;
    } while (lVar10 < iVar8);
  }
  __return_storage_ptr__->DataPtr = param_1->DataPtr;
  __return_storage_ptr__->ArrayNum = uVar9;
  if (((int)uVar9 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar7 = (TArrayView<UE::StateTree::FActiveState_const_,int> *)(*pcVar1)();
    return pTVar7;
  }
  return __return_storage_ptr__;
}

// Matches @ 14d532640

bool __thiscall
UE::StateTree::FActiveStatePath::Matches(FActiveStatePath *this,FActiveStatePath *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TArrayView<UE::StateTree::FActiveState_const_,int> *pTVar6;
  TArrayView<UE::StateTree::FActiveState_const_,int> local_38;
  TArrayView<UE::StateTree::FActiveState_const_,int> local_28;
  TArrayView<UE::StateTree::FActiveState_const_,int> local_18;
  
  local_38.DataPtr = (FActiveState *)(param_1->States).AllocatorInstance.Data;
  iVar1 = (param_1->States).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_28.DataPtr = (FActiveState *)(this->States).AllocatorInstance.Data;
  iVar2 = (this->States).ArrayNum;
  local_38.ArrayNum = iVar1;
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (iVar2 == iVar1) {
    local_28.ArrayNum = iVar2;
    pTVar6 = Intersect(&local_18,&local_28,&local_38);
    if (pTVar6->ArrayNum == iVar2) {
      return true;
    }
  }
  return false;
}

// Matches @ 14d532710

bool __thiscall
UE::StateTree::FActiveStatePath::Matches(FActiveStatePath *this,FActiveState *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FActiveState *pFVar8;
  uint local_28;
  uint uStack_24;
  TArrayView<UE::StateTree::FActiveState_const_,int> local_18;
  
  uVar1 = param_1->FrameID;
  uVar2 = param_1->StateID;
  local_18.DataPtr = (FActiveState *)(this->States).AllocatorInstance.Data;
  iVar3 = (this->States).ArrayNum;
  uVar4 = *(undefined4 *)&param_1->StateHandle;
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  if (0 < iVar3) {
    local_18.ArrayNum = iVar3;
    pFVar8 = TArrayView<UE::StateTree::FActiveState_const_,int>::Last(&local_18,0);
    if ((((pFVar8->FrameID).Value == uVar1) && ((pFVar8->StateID).Value == uVar2)) &&
       ((pFVar8->StateHandle).Index == (ushort)uVar4)) {
      return true;
    }
  }
  return false;
}

// Matches @ 14d5327b0

bool __thiscall
UE::StateTree::FActiveStatePath::Matches(FActiveStatePath *this,FActiveStateID param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  iVar1 = (this->States).ArrayNum;
  pFVar2 = (this->States).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  else if (0 < iVar1) {
    uVar6 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar6 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if (*(uint *)(pFVar2 + (longlong)iVar1 * 0xc + -8) == param_1.Value) {
      return true;
    }
  }
  return false;
}

// Matches @ 14d532880

bool __cdecl
UE::StateTree::FActiveStatePath::Matches
          (TArrayView<UE::StateTree::FActiveState_const_,int> *param_1,
          TArrayView<UE::StateTree::FActiveState_const_,int> *param_2)

{
  TArrayView<UE::StateTree::FActiveState_const_,int> *pTVar1;
  TArrayView<UE::StateTree::FActiveState_const_,int> local_18;
  
  if (param_1->ArrayNum == param_2->ArrayNum) {
    pTVar1 = Intersect(&local_18,param_1,param_2);
    if (pTVar1->ArrayNum == param_1->ArrayNum) {
      return true;
    }
  }
  return false;
}

// Matches @ 14d5328c0

bool __cdecl
UE::StateTree::FActiveStatePath::Matches
          (TArrayView<UE::StateTree::FActiveState_const_,int> *param_1,FActiveState *param_2)

{
  FActiveState *pFVar1;
  
  if (0 < param_1->ArrayNum) {
    pFVar1 = TArrayView<UE::StateTree::FActiveState_const_,int>::Last(param_1,0);
    if ((((pFVar1->FrameID).Value == (param_2->FrameID).Value) &&
        ((pFVar1->StateID).Value == (param_2->StateID).Value)) &&
       ((pFVar1->StateHandle).Index == (param_2->StateHandle).Index)) {
      return true;
    }
  }
  return false;
}

// Matches @ 14d532910

bool __cdecl
UE::StateTree::FActiveStatePath::Matches
          (TArrayView<UE::StateTree::FActiveState_const_,int> *param_1,FActiveStateID param_2)

{
  FActiveState *pFVar1;
  
  if (0 < param_1->ArrayNum) {
    pFVar1 = TArrayView<UE::StateTree::FActiveState_const_,int>::Last(param_1,0);
    if ((pFVar1->StateID).Value == param_2.Value) {
      return true;
    }
  }
  return false;
}

// StartsWith @ 14d533c70

bool __thiscall
UE::StateTree::FActiveStatePath::StartsWith(FActiveStatePath *this,FActiveStatePath *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FActiveState *pFVar8;
  FActiveState *pFVar9;
  FActiveState *pFVar10;
  uint local_38;
  uint uStack_34;
  TArrayView<UE::StateTree::FActiveState_const_,int> local_28;
  TArrayView<UE::StateTree::FActiveState_const_,int> local_18;
  
  local_28.DataPtr = (FActiveState *)(param_1->States).AllocatorInstance.Data;
  iVar3 = (param_1->States).ArrayNum;
  if ((iVar3 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pFVar9 = (FActiveState *)(this->States).AllocatorInstance.Data;
  iVar4 = (this->States).ArrayNum;
  local_28.ArrayNum = iVar3;
  local_18.DataPtr = pFVar9;
  if ((iVar4 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if (0 < iVar3) {
    local_18.ArrayNum = iVar4;
    pFVar8 = TArrayView<UE::StateTree::FActiveState_const_,int>::Last(&local_28,0);
    pFVar10 = pFVar9 + iVar4;
    uVar1 = pFVar8->FrameID;
    uVar2 = pFVar8->StateID;
    if (pFVar9 != pFVar10) {
      do {
        if ((((pFVar9->FrameID).Value == uVar1) && ((pFVar9->StateID).Value == uVar2)) &&
           ((pFVar9->StateHandle).Index == (ushort)*(undefined4 *)&pFVar8->StateHandle)) {
          pFVar9 = TArrayView<UE::StateTree::FActiveState_const_,int>::operator[](&local_18,0);
          pFVar10 = TArrayView<UE::StateTree::FActiveState_const_,int>::operator[](&local_28,0);
          if ((pFVar9->FrameID).Value != (pFVar10->FrameID).Value) {
            return false;
          }
          if ((pFVar9->StateID).Value != (pFVar10->StateID).Value) {
            return false;
          }
          if ((pFVar9->StateHandle).Index != (pFVar10->StateHandle).Index) {
            return false;
          }
          return true;
        }
        pFVar9 = pFVar9 + 1;
      } while (pFVar9 != pFVar10);
    }
  }
  return false;
}

// StartsWith @ 14d533db0

bool __cdecl
UE::StateTree::FActiveStatePath::StartsWith
          (TArrayView<UE::StateTree::FActiveState_const_,int> *param_1,
          TArrayView<UE::StateTree::FActiveState_const_,int> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FActiveState *pFVar3;
  FActiveState *pFVar4;
  FActiveState *pFVar5;
  uint local_18;
  uint uStack_14;
  ushort local_10;
  
  if (0 < param_2->ArrayNum) {
    pFVar3 = TArrayView<UE::StateTree::FActiveState_const_,int>::Last(param_2,0);
    uVar1 = pFVar3->FrameID;
    uVar2 = pFVar3->StateID;
    pFVar5 = param_1->DataPtr;
    pFVar4 = pFVar5 + param_1->ArrayNum;
    if (pFVar5 != pFVar4) {
      local_10 = (ushort)*(undefined4 *)&pFVar3->StateHandle;
      do {
        if ((((pFVar5->FrameID).Value == uVar1) && ((pFVar5->StateID).Value == uVar2)) &&
           ((pFVar5->StateHandle).Index == local_10)) {
          pFVar4 = TArrayView<UE::StateTree::FActiveState_const_,int>::operator[](param_1,0);
          pFVar5 = TArrayView<UE::StateTree::FActiveState_const_,int>::operator[](param_2,0);
          if ((pFVar4->FrameID).Value != (pFVar5->FrameID).Value) {
            return false;
          }
          if ((pFVar4->StateID).Value != (pFVar5->StateID).Value) {
            return false;
          }
          if ((pFVar4->StateHandle).Index != (pFVar5->StateHandle).Index) {
            return false;
          }
          return true;
        }
        pFVar5 = pFVar5 + 1;
      } while (pFVar5 != pFVar4);
    }
  }
  return false;
}

