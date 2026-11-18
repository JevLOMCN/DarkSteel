// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 10

// AddUniqueImpl<TObjectPtr<UDataflowEdNode_const_>_const_&> @ 1462c8030

int __thiscall
TArray<TObjectPtr<UDataflowEdNode_const_>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TObjectPtr<UDataflowEdNode_const_>_const_&>
          (TArray<TObjectPtr<UDataflowEdNode_const_>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UDataflowEdNode_const_> *param_1)

{
  FScriptContainerElement *pFVar1;
  UDataflowEdNode *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(UDataflowEdNode **)pFVar6 == (param_1->field0_0x0).DebugPtr) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  *(UDataflowEdNode **)(pFVar1 + (longlong)iVar5 * 8) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDataflowEdNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return iVar5;
}

// AddUniqueImpl<TObjectPtr<UDataflowSubGraph>_> @ 1462c8140

int __thiscall
TArray<TObjectPtr<UDataflowSubGraph>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TObjectPtr<UDataflowSubGraph>_>
          (TArray<TObjectPtr<UDataflowSubGraph>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UDataflowSubGraph> *param_1)

{
  FScriptContainerElement *pFVar1;
  UDataflowSubGraph *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(UDataflowSubGraph **)pFVar6 == (param_1->field0_0x0).DebugPtr) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  *(UDataflowSubGraph **)(pFVar1 + (longlong)iVar5 * 8) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDataflowSubGraph *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return iVar5;
}

// AddUniqueImpl<FGuid> @ 1462c8250

int __thiscall
TArray<FGuid,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGuid>
          (TArray<FGuid,TSizedDefaultAllocator<32>_> *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  FGuid *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  
  iVar6 = Find(this,param_1);
  if (iVar6 == -1) {
    pFVar2 = (FGuid *)(this->AllocatorInstance).Data;
    if ((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    iVar6 = this->ArrayNum;
    if (iVar6 == this->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar6 + 1;
    uVar4 = *(undefined8 *)&param_1->C;
    pFVar1 = (this->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar1 = *(undefined8 *)param_1;
    *(undefined8 *)(pFVar1 + 8) = uVar4;
  }
  return iVar6;
}

// Contains<FGuid> @ 1462c8960

bool __thiscall
TArray<FGuid,TSizedDefaultAllocator<32>_>::Contains<FGuid>
          (TArray<FGuid,TSizedDefaultAllocator<32>_> *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  pFVar2 = pFVar1 + (longlong)this->ArrayNum * 0x10;
  if (pFVar1 != pFVar2) {
    do {
      if (((param_1->D == *(uint *)(pFVar1 + 0xc) && param_1->C == *(uint *)(pFVar1 + 8)) &&
          param_1->B == *(uint *)(pFVar1 + 4)) && param_1->A == *(uint *)pFVar1) {
        return true;
      }
      pFVar1 = pFVar1 + 0x10;
    } while (pFVar1 != pFVar2);
  }
  return false;
}

// Empty @ 1462d8210

void __thiscall
TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Remove @ 1462e3650

int __thiscall
TArray<TObjectPtr<UDataflowEdNode_const_>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TObjectPtr<UDataflowEdNode_const_>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UDataflowEdNode_const_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(UDataflowEdNode **)pFVar1 != (param_1->field0_0x0).DebugPtr;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(UDataflowEdNode **)(pFVar1 + lVar6 * 8) != (param_1->field0_0x0).DebugPtr))
        break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// RemoveAtImpl @ 1462e3810

void __thiscall
TArray<FRichCurve,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FRichCurve,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FRichCurve *_Dst;
  
  _Dst = (FRichCurve *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x80);
  DestructItems<FRichCurve,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 7);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 1462e55b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FRichCurveEditInfoTemplate<FRealCurve_*>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
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
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x10,(longlong)iVar5 << 4);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 1462e5700

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FRichCurveEditInfoTemplate<FRealCurve_const_*>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
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
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x10,(longlong)iVar5 << 4);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 1462e5850

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FRichCurve,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FRichCurve,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FRichCurve,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x80,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

