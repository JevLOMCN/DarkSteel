// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// FDS_WindowLayerGroupInfo @ 14bb4c920

FDS_WindowLayerGroupInfo * __thiscall
FDS_WindowLayerGroupInfo::FDS_WindowLayerGroupInfo
          (FDS_WindowLayerGroupInfo *this,EDS_WindowLayerGroupType param_1)

{
  (this->WindowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowList).ArrayNum = 0;
  (this->WindowList).ArrayMax = 0;
  this->WindowLayerGroupZOrder = (uint)param_1 * 1000;
  return this;
}

// AddWindow @ 14bb4fae0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_WindowLayerGroupInfo::AddWindow
          (FDS_WindowLayerGroupInfo *this,TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  UDS_W_WindowFrame *this_00;
  FScriptContainerElement *this_01;
  FWeakObjectPtr local_res10;
  
  local_res10 = param_1.WeakPtr;
  bVar4 = TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar4) {
    ArrangeWindowLayer(this);
    iVar5 = this->WindowLayerGroupZOrder;
    iVar3 = (this->WindowList).ArrayNum;
    this_00 = (UDS_W_WindowFrame *)FWeakObjectPtr::Get(&local_res10);
    UDS_W_WindowFrame::SetZOrder(this_00,iVar5 + iVar3);
    this_01 = (this->WindowList).AllocatorInstance.Data;
    pFVar2 = this_01 + (longlong)(this->WindowList).ArrayNum * 8;
    for (; this_01 != pFVar2; this_01 = this_01 + 8) {
      bVar4 = TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>::UEOpEquals<UDS_W_WindowFrame,bool>
                        ((TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *)this_01,
                         (TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *)&local_res10);
      if (bVar4) {
        return;
      }
    }
    iVar5 = (this->WindowList).ArrayNum;
    piVar1 = &(this->WindowList).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)this,piVar1);
    }
    (this->WindowList).ArrayNum = iVar5 + 1;
    *(FWeakObjectPtr *)((this->WindowList).AllocatorInstance.Data + (longlong)iVar5 * 8) =
         local_res10;
  }
  return;
}

// ArrangeWindowLayer @ 14bb50f30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_WindowLayerGroupInfo::ArrangeWindowLayer(FDS_WindowLayerGroupInfo *this)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UDS_W_WindowFrame *this_00;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  FIdentityFunctor local_res8 [8];
  
  iVar6 = (this->WindowList).ArrayNum;
  uVar9 = 0;
  if (0 < iVar6) {
    do {
      uVar8 = ~uVar9 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar9 < (this->WindowList).ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *)
                         ((this->WindowList).AllocatorInstance.Data + (longlong)(int)uVar9 * 8),
                         (void *)0x0);
      if (bVar3) {
        uVar4 = 0;
        if ((int)uVar9 < (this->WindowList).ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        _Dst = (this->WindowList).AllocatorInstance.Data + (longlong)(int)uVar9 * 8;
        iVar5 = (this->WindowList).ArrayNum + ~uVar9;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar5 << 3);
        }
        piVar1 = &(this->WindowList).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,(ForAnyElementType *)this,(this->WindowList).ArrayNum,
                   &(this->WindowList).ArrayMax);
        uVar9 = uVar9 - 1;
        iVar6 = iVar6 + -1;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iVar6);
  }
  AlgoImpl::
  IntroSortInternal<TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>,int,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>,_FDS_WindowLayerGroupInfo::ArrangeWindowLayer_::__l2::<lambda_1>_>_>
            ((TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *)
             (this->WindowList).AllocatorInstance.Data,(this->WindowList).ArrayNum,local_res8[0],
             (<lambda_1> *)local_res8);
  iVar6 = (this->WindowList).ArrayNum;
  uVar9 = 0;
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar9 < (this->WindowList).ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *)
                         ((this->WindowList).AllocatorInstance.Data + lVar7 * 8),(void *)0x0);
      if (!bVar3) {
        uVar4 = 0;
        if ((int)uVar9 < (this->WindowList).ArrayNum) {
          uVar4 = ~uVar9 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (UDS_W_WindowFrame *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      ((this->WindowList).AllocatorInstance.Data + lVar7 * 8));
        UDS_W_WindowFrame::SetZOrder(this_00,this->WindowLayerGroupZOrder + uVar9);
      }
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 1;
    } while ((int)uVar9 < iVar6);
  }
  return;
}

// FocusWindow @ 14bb62d20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_WindowLayerGroupInfo::FocusWindow
          (FDS_WindowLayerGroupInfo *this,TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  UDS_W_WindowFrame *pUVar4;
  int iVar5;
  FScriptContainerElement *this_00;
  FWeakObjectPtr local_res10;
  
  local_res10 = param_1.WeakPtr;
  bVar2 = TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar2) {
    this_00 = (this->WindowList).AllocatorInstance.Data;
    pFVar1 = this_00 + (longlong)(this->WindowList).ArrayNum * 8;
    if (this_00 != pFVar1) {
      while (bVar2 = TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>::
                     UEOpEquals<UDS_W_WindowFrame,bool>
                               ((TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *)this_00,
                                (TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *)&local_res10),
            !bVar2) {
        this_00 = this_00 + 8;
        if (this_00 == pFVar1) {
          return;
        }
      }
      pUVar4 = (UDS_W_WindowFrame *)FWeakObjectPtr::Get(&local_res10);
      iVar3 = UDS_W_WindowFrame::GetZOrder(pUVar4);
      iVar5 = this->WindowLayerGroupZOrder + (this->WindowList).ArrayNum;
      if (iVar3 != iVar5 + -1) {
        pUVar4 = (UDS_W_WindowFrame *)FWeakObjectPtr::Get(&local_res10);
        UDS_W_WindowFrame::SetZOrder(pUVar4,iVar5);
        ArrangeWindowLayer(this);
      }
    }
  }
  return;
}

// RemoveWindow @ 14bb84220

void __thiscall
FDS_WindowLayerGroupInfo::RemoveWindow
          (FDS_WindowLayerGroupInfo *this,TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> param_1)

{
  int iVar1;
  FWeakObjectPtr *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *this_00;
  int iVar9;
  FWeakObjectPtr local_res10;
  
  local_res10 = param_1.WeakPtr;
  bVar6 = TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar6) {
    this_00 = (this->WindowList).AllocatorInstance.Data;
    pFVar3 = this_00 + (longlong)(this->WindowList).ArrayNum * 8;
    if (this_00 != pFVar3) {
      while (bVar6 = TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>::
                     UEOpEquals<UDS_W_WindowFrame,bool>
                               ((TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *)this_00,
                                (TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *)&local_res10),
            !bVar6) {
        this_00 = this_00 + 8;
        if (this_00 == pFVar3) {
          return;
        }
      }
      pFVar2 = (FWeakObjectPtr *)(this->WindowList).AllocatorInstance.Data;
      if (((pFVar2 <= &local_res10) && (&local_res10 < pFVar2 + (this->WindowList).ArrayMax)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar1 = (this->WindowList).ArrayNum;
      if (iVar1 != 0) {
        iVar9 = 0;
        pFVar3 = (this->WindowList).AllocatorInstance.Data;
        bVar6 = TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>::UEOpEquals<UDS_W_WindowFrame,bool>
                          ((TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *)pFVar3,
                           (TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *)&local_res10);
        bVar6 = !bVar6;
        iVar8 = 0;
        do {
          iVar5 = iVar8;
          do {
            iVar5 = iVar5 + 1;
            if (iVar1 <= iVar5) break;
            bVar7 = TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>::
                    UEOpEquals<UDS_W_WindowFrame,bool>
                              ((TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *)
                               (pFVar3 + (longlong)iVar5 * 8),
                               (TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *)&local_res10);
          } while (bVar6 == !bVar7);
          if (bVar6 != false) {
            if (iVar9 != iVar8) {
              memmove(pFVar3 + (longlong)iVar9 * 8,pFVar3 + (longlong)iVar8 * 8,
                      (longlong)(iVar5 - iVar8) << 3);
            }
            iVar9 = iVar9 + (iVar5 - iVar8);
          }
          bVar6 = (bool)(bVar6 ^ 1);
          iVar8 = iVar5;
        } while (iVar5 < iVar1);
        (this->WindowList).ArrayNum = iVar9;
      }
      ArrangeWindowLayer(this);
    }
  }
  return;
}

