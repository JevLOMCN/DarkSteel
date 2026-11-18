// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 18

// FDataflowColorCurveOwner @ 1462cd7f0

FDataflowColorCurveOwner * __thiscall
FDataflowColorCurveOwner::FDataflowColorCurveOwner
          (FDataflowColorCurveOwner *this,FDataflowColorCurveOwner *param_1)

{
  *(undefined8 *)&(this->OnColorCurveChangedDelegate).field_0x18 = 2;
  this->_padding_ = (longlong)&___7FDataflowColorCurveOwner__6B_;
  *(undefined8 *)&this->OnColorCurveChangedDelegate = 0;
  *(undefined8 *)&(this->OnColorCurveChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnColorCurveChangedDelegate).field_0x10 = 0;
  (this->ConstCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstCurves).ArrayNum = 0;
  (this->ConstCurves).ArrayMax = 0;
  (this->Curves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Curves).ArrayNum = 0;
  (this->Curves).ArrayMax = 0;
  (this->Owners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Owners).ArrayNum = 0;
  (this->Owners).ArrayMax = 0;
  (this->RichCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RichCurves).ArrayNum = 0;
  (this->RichCurves).ArrayMax = 0;
  operator=(this,param_1);
  return this;
}

// FDataflowColorCurveOwner @ 1462cd850

FDataflowColorCurveOwner * __thiscall
FDataflowColorCurveOwner::FDataflowColorCurveOwner(FDataflowColorCurveOwner *this)

{
  TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRichCurve,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FDataflowColorCurveOwner *pFVar11;
  FScriptContainerElement *pFVar12;
  
  *(undefined8 *)&(this->OnColorCurveChangedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnColorCurveChangedDelegate = 0;
  pTVar1 = &this->ConstCurves;
  *(undefined8 *)&(this->OnColorCurveChangedDelegate).field_0x8 = 0;
  pTVar2 = &this->Curves;
  *(undefined8 *)&(this->OnColorCurveChangedDelegate).field_0x10 = 0;
  this_00 = &this->RichCurves;
  (this->ConstCurves).ArrayNum = 0;
  (this->Owners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FDataflowColorCurveOwner__6B_;
  piVar3 = &(this->Curves).ArrayNum;
  (this->Owners).ArrayNum = 0;
  (this->Owners).ArrayMax = 0;
  piVar4 = &(this->ConstCurves).ArrayMax;
  *piVar3 = 0;
  piVar5 = &(this->Curves).ArrayMax;
  *piVar5 = 0;
  piVar6 = &(this->RichCurves).ArrayNum;
  *piVar6 = 0;
  (this->RichCurves).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar4 = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,4,&pTVar1->AllocatorInstance,&(this->ConstCurves).ArrayNum,piVar4);
  DefaultConstructItems<FRichCurveEditInfoTemplate<FRealCurve_const_*>,int>
            ((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x10,4);
  iVar9 = *piVar3;
  if (iVar9 < 4) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,4 - iVar9,&pTVar2->AllocatorInstance,piVar3,piVar5);
    DefaultConstructItems<FRichCurveEditInfoTemplate<FRealCurve_*>,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x10,4 - iVar9);
  }
  else if (4 < iVar9) {
    iVar9 = iVar9 + -4;
    if (iVar9 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FDataflowColorCurveOwner *)(*pcVar7)();
        return pFVar11;
      }
    }
    else if (iVar9 == 0) goto LAB_1462cd9e6;
    pFVar12 = (pTVar2->AllocatorInstance).Data + 0x40;
    iVar10 = (*piVar3 - iVar9) + -4;
    if (iVar10 != 0) {
      memmove(pFVar12,pFVar12 + (longlong)iVar9 * 0x10,(longlong)iVar10 << 4);
    }
    *piVar3 = *piVar3 - iVar9;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&pTVar2->AllocatorInstance,*piVar3,piVar5);
  }
LAB_1462cd9e6:
  iVar9 = *piVar6;
  if (iVar9 < 4) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x80,8,4 - iVar9,&this_00->AllocatorInstance,piVar6,
                        &(this->RichCurves).ArrayMax);
    DefaultConstructItems<FRichCurve,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar10 * 0x80,4 - iVar9);
  }
  else if (4 < iVar9) {
    iVar9 = iVar9 + -4;
    if (iVar9 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FDataflowColorCurveOwner *)(*pcVar7)();
        return pFVar11;
      }
    }
    else if (iVar9 == 0) goto LAB_1462cda91;
    TArray<FRichCurve,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,4,iVar9);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,&this_00->AllocatorInstance,*piVar6,&(this->RichCurves).ArrayMax);
  }
LAB_1462cda91:
  if ((*piVar6 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FDataflowColorCurveOwner *)(*pcVar7)();
    return pFVar11;
  }
  pFVar12 = (this_00->AllocatorInstance).Data;
  if ((*piVar3 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FDataflowColorCurveOwner *)(*pcVar7)();
    return pFVar11;
  }
  *(FScriptContainerElement **)((pTVar2->AllocatorInstance).Data + 8) = pFVar12;
  if ((*piVar6 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FDataflowColorCurveOwner *)(*pcVar7)();
    return pFVar11;
  }
  pFVar12 = (this_00->AllocatorInstance).Data;
  if (((this->ConstCurves).ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FDataflowColorCurveOwner *)(*pcVar7)();
    return pFVar11;
  }
  *(FScriptContainerElement **)((pTVar1->AllocatorInstance).Data + 8) = pFVar12;
  if ((*piVar6 < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FDataflowColorCurveOwner *)(*pcVar7)();
    return pFVar11;
  }
  pFVar12 = (this_00->AllocatorInstance).Data;
  if ((*piVar3 < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FDataflowColorCurveOwner *)(*pcVar7)();
    return pFVar11;
  }
  *(FScriptContainerElement **)((pTVar2->AllocatorInstance).Data + 0x18) = pFVar12 + 0x80;
  if ((*piVar6 < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FDataflowColorCurveOwner *)(*pcVar7)();
    return pFVar11;
  }
  pFVar12 = (this_00->AllocatorInstance).Data;
  if (((this->ConstCurves).ArrayNum < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FDataflowColorCurveOwner *)(*pcVar7)();
    return pFVar11;
  }
  *(FScriptContainerElement **)((pTVar1->AllocatorInstance).Data + 0x18) = pFVar12 + 0x80;
  if ((*piVar6 < 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FDataflowColorCurveOwner *)(*pcVar7)();
    return pFVar11;
  }
  pFVar12 = (this_00->AllocatorInstance).Data;
  if ((*piVar3 < 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FDataflowColorCurveOwner *)(*pcVar7)();
    return pFVar11;
  }
  *(FScriptContainerElement **)((pTVar2->AllocatorInstance).Data + 0x28) = pFVar12 + 0x100;
  if ((*piVar6 < 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FDataflowColorCurveOwner *)(*pcVar7)();
    return pFVar11;
  }
  pFVar12 = (this_00->AllocatorInstance).Data;
  if (((this->ConstCurves).ArrayNum < 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FDataflowColorCurveOwner *)(*pcVar7)();
    return pFVar11;
  }
  *(FScriptContainerElement **)((pTVar1->AllocatorInstance).Data + 0x28) = pFVar12 + 0x100;
  if ((*piVar6 < 4) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FDataflowColorCurveOwner *)(*pcVar7)();
    return pFVar11;
  }
  pFVar12 = (this_00->AllocatorInstance).Data;
  if ((*piVar3 < 4) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FDataflowColorCurveOwner *)(*pcVar7)();
    return pFVar11;
  }
  *(FScriptContainerElement **)((pTVar2->AllocatorInstance).Data + 0x38) = pFVar12 + 0x180;
  if ((*piVar6 < 4) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FDataflowColorCurveOwner *)(*pcVar7)();
    return pFVar11;
  }
  pFVar12 = (this_00->AllocatorInstance).Data;
  if (((this->ConstCurves).ArrayNum < 4) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FDataflowColorCurveOwner *)(*pcVar7)();
    return pFVar11;
  }
  *(FScriptContainerElement **)((pTVar1->AllocatorInstance).Data + 0x38) = pFVar12 + 0x180;
  return this;
}

// ~FDataflowColorCurveOwner @ 1462cfd90

void __thiscall FDataflowColorCurveOwner::~FDataflowColorCurveOwner(FDataflowColorCurveOwner *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FRichCurve,int>
            ((FRichCurve *)(this->RichCurves).AllocatorInstance.Data,(this->RichCurves).ArrayNum);
  pFVar1 = (this->RichCurves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Owners).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Curves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstCurves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnColorCurveChangedDelegate).field_0x8,
             *(int *)&(this->OnColorCurveChangedDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnColorCurveChangedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnColorCurveChangedDelegate);
  this->_padding_ = (longlong)&___7FCurveOwnerInterface__6B_;
  return;
}

// operator= @ 1462d0410

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FDataflowColorCurveOwner * __thiscall
FDataflowColorCurveOwner::operator=
          (FDataflowColorCurveOwner *this,FDataflowColorCurveOwner *param_1)

{
  TArray<FRichCurve,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  FDataflowColorCurveOwner *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  longlong lVar12;
  
  TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ConstCurves,4,Default);
  TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Curves,4,Default);
  this_00 = &this->RichCurves;
  TArray<FRichCurve,TSizedDefaultAllocator<32>_>::SetNum(this_00,4,Default);
  iVar8 = 0;
  lVar11 = 0;
  lVar12 = 0;
  while( true ) {
    if (iVar8 < (param_1->RichCurves).ArrayNum) {
      if (((param_1->RichCurves).ArrayNum <= iVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FDataflowColorCurveOwner *)(*pcVar4)();
        return pFVar6;
      }
      pFVar10 = (param_1->RichCurves).AllocatorInstance.Data;
      if (((this->RichCurves).ArrayNum <= iVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FDataflowColorCurveOwner *)(*pcVar4)();
        return pFVar6;
      }
      pFVar3 = (this_00->AllocatorInstance).Data;
      pFVar7 = pFVar10 + lVar12 + 0x70;
      *(undefined4 *)(pFVar3 + lVar12 + 0x68) = *(undefined4 *)(pFVar10 + lVar12 + 0x68);
      pFVar9 = pFVar3 + lVar12 + 0x70;
      pFVar3[lVar12 + 0x6c] = pFVar10[lVar12 + 0x6c];
      pFVar3[lVar12 + 0x6d] = pFVar10[lVar12 + 0x6d];
      if (pFVar9 != pFVar7) {
        iVar1 = *(int *)&pFVar7[8].field_0x0;
        pFVar10 = pFVar9 + 0xc;
        _Src = *(void **)&pFVar7->field_0x0;
        iVar2 = *(int *)pFVar10;
        *(int *)&pFVar9[8].field_0x0 = iVar1;
        if ((iVar1 == 0) && (iVar2 == 0)) {
          *(int *)pFVar10 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,iVar1,iVar2,(ForAnyElementType *)pFVar9,iVar1,(int *)pFVar10);
          if (iVar1 != 0) {
            memcpy(*(void **)&pFVar9->field_0x0,_Src,(longlong)iVar1 * 0x1c);
          }
        }
      }
    }
    if (((this->RichCurves).ArrayNum <= iVar8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FDataflowColorCurveOwner *)(*pcVar4)();
      return pFVar6;
    }
    pFVar10 = (this_00->AllocatorInstance).Data;
    if (((this->Curves).ArrayNum <= iVar8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    *(FScriptContainerElement **)((this->Curves).AllocatorInstance.Data + lVar11 + 8) =
         pFVar10 + lVar12;
    if (((this->RichCurves).ArrayNum <= iVar8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FDataflowColorCurveOwner *)(*pcVar4)();
      return pFVar6;
    }
    pFVar10 = (this_00->AllocatorInstance).Data + lVar12;
    if (((this->ConstCurves).ArrayNum <= iVar8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FDataflowColorCurveOwner *)(*pcVar4)();
      return pFVar6;
    }
    iVar8 = iVar8 + 1;
    lVar12 = lVar12 + 0x80;
    *(FScriptContainerElement **)((this->ConstCurves).AllocatorInstance.Data + lVar11 + 8) = pFVar10
    ;
    lVar11 = lVar11 + 0x10;
    if (3 < iVar8) {
      return this;
    }
  }
  pcVar4 = (code *)swi(3);
  pFVar6 = (FDataflowColorCurveOwner *)(*pcVar4)();
  return pFVar6;
}

// GetCurveColor @ 1462dc230

FLinearColor * __thiscall
FDataflowColorCurveOwner::GetCurveColor
          (FDataflowColorCurveOwner *this,FLinearColor *__return_storage_ptr__,
          FRichCurveEditInfoTemplate<FRealCurve_*> *param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  return __return_storage_ptr__;
}

// GetCurves @ 1462dc250

TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowColorCurveOwner::GetCurves
          (FDataflowColorCurveOwner *this,
          TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->Curves).ArrayNum;
  _Src = (this->Curves).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
  return __return_storage_ptr__;
}

// GetCurves @ 1462dc2e0

TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowColorCurveOwner::GetCurves
          (FDataflowColorCurveOwner *this,
          TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->ConstCurves).ArrayNum;
  _Src = (this->ConstCurves).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
  return __return_storage_ptr__;
}

// GetCurves @ 1462dc370

void __thiscall
FDataflowColorCurveOwner::GetCurves
          (FDataflowColorCurveOwner *this,
          TAdderReserverRef<FRichCurveEditInfoTemplate<FRealCurve_const_*>,int> *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar5 = (**(code **)(*(longlong *)param_1 + 0x10))(*(undefined8 *)&param_1->field_0x8);
  if (iVar5 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutCurves.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Engine\\Private\\Dataflow\\DataflowColorRamp.cpp"
                       ,0x47,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = *(undefined8 **)param_1;
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  (*(code *)puVar1[3])(uVar2,(this->ConstCurves).ArrayNum);
  iVar5 = (this->ConstCurves).ArrayNum;
  pFVar6 = (this->ConstCurves).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar5 * 0x10;
  while( true ) {
    if ((this->ConstCurves).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FRichCurveEditInfoTemplate<FRealCurve_const_*>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    (*(code *)*puVar1)(uVar2,pFVar6);
    pFVar6 = pFVar6 + 0x10;
  }
  return;
}

// GetLinearColorValue @ 1462dd3b0

FLinearColor * __thiscall
FDataflowColorCurveOwner::GetLinearColorValue
          (FDataflowColorCurveOwner *this,FLinearColor *__return_storage_ptr__,float param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FLinearColor *pFVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((this->Curves).ArrayNum < 4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FLinearColor *)(*pcVar2)();
      return pFVar4;
    }
  }
  plVar1 = *(longlong **)((this->Curves).AllocatorInstance.Data + 0x38);
  fVar5 = (float)(**(code **)(*plVar1 + 0x88))(plVar1,param_1,0);
  if ((this->Curves).ArrayNum < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FLinearColor *)(*pcVar2)();
      return pFVar4;
    }
  }
  plVar1 = *(longlong **)((this->Curves).AllocatorInstance.Data + 0x28);
  fVar6 = (float)(**(code **)(*plVar1 + 0x88))(plVar1,param_1,0);
  if ((this->Curves).ArrayNum < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FLinearColor *)(*pcVar2)();
      return pFVar4;
    }
  }
  plVar1 = *(longlong **)((this->Curves).AllocatorInstance.Data + 0x18);
  fVar7 = (float)(**(code **)(*plVar1 + 0x88))(plVar1,param_1,0);
  if ((this->Curves).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FLinearColor *)(*pcVar2)();
      return pFVar4;
    }
  }
  plVar1 = *(longlong **)((this->Curves).AllocatorInstance.Data + 8);
  fVar8 = (float)(**(code **)(*plVar1 + 0x88))(plVar1,param_1,0);
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar8;
  return __return_storage_ptr__;
}

// GetOwners @ 1462dd9a0

TArray<UObject_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowColorCurveOwner::GetOwners
          (FDataflowColorCurveOwner *this,
          TArray<UObject_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->Owners).ArrayNum;
  _Src = (this->Owners).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return __return_storage_ptr__;
}

// HasAnyAlphaKeys @ 1462df700

bool __thiscall FDataflowColorCurveOwner::HasAnyAlphaKeys(FDataflowColorCurveOwner *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  if ((this->Curves).ArrayNum < 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  iVar4 = (**(code **)(**(longlong **)((this->Curves).AllocatorInstance.Data + 0x38) + 8))();
  return iVar4 != 0;
}

// IsEmpty @ 1462dfcb0

bool __thiscall FDataflowColorCurveOwner::IsEmpty(FDataflowColorCurveOwner *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  iVar1 = (this->RichCurves).ArrayNum;
  if (iVar1 != 0) {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (*(int *)((this->RichCurves).AllocatorInstance.Data + 0x78) != 0) {
      return false;
    }
  }
  return true;
}

// IsLinearColorCurve @ 1462dfd50

bool __thiscall FDataflowColorCurveOwner::IsLinearColorCurve(FDataflowColorCurveOwner *this)

{
  return true;
}

// IsValidCurve @ 1462dfea0

bool __thiscall
FDataflowColorCurveOwner::IsValidCurve
          (FDataflowColorCurveOwner *this,FRichCurveEditInfoTemplate<FRealCurve_*> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->Curves).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->Curves).ArrayNum * 0x10;
  if (pFVar1 != pFVar2) {
    do {
      if ((((param_1->CurveName).ComparisonIndex.Value == *(uint *)pFVar1) &&
          ((param_1->CurveName).Number == *(uint *)(pFVar1 + 4))) &&
         (param_1->CurveToEdit == *(FRealCurve **)(pFVar1 + 8))) {
        return true;
      }
      pFVar1 = pFVar1 + 0x10;
    } while (pFVar1 != pFVar2);
  }
  return false;
}

// MakeTransactional @ 1462dffa0

void __thiscall FDataflowColorCurveOwner::MakeTransactional(FDataflowColorCurveOwner *this)

{
  return;
}

// ModifyOwner @ 1462e0020

void __thiscall FDataflowColorCurveOwner::ModifyOwner(FDataflowColorCurveOwner *this)

{
  return;
}

// OnCurveChanged @ 1462e0050

void __thiscall
FDataflowColorCurveOwner::OnCurveChanged
          (FDataflowColorCurveOwner *this,
          TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  undefined8 local_68;
  ForAnyElementType local_60;
  int local_58;
  int local_54;
  ForAnyElementType local_50;
  int local_48;
  int local_44;
  TArray<FRichCurve_*,TSizedDefaultAllocator<32>_> local_40;
  
  iVar1 = param_1->ArrayNum;
  pFVar8 = (param_1->AllocatorInstance).Data;
  pFVar7 = pFVar8 + (longlong)iVar1 * 0x10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  local_54 = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FRichCurveEditInfoTemplate<FRealCurve_*>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    iVar4 = local_58;
    FVar3.Data = local_60.Data;
    if (pFVar8 == pFVar7) break;
    local_68 = *(undefined8 *)(pFVar8 + 8);
    if (((local_60.Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 < local_60.Data + (longlong)local_54 * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_58 == local_54) {
      local_58 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_60,&local_54);
    }
    pFVar8 = pFVar8 + 0x10;
    *(undefined8 *)(local_60.Data + (longlong)local_58 * 8) = local_68;
    local_58 = local_58 + 1;
  }
  if (0 < local_58) {
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = local_58;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_58,0,&local_50,local_58,&local_44);
    memcpy(local_50.Data,FVar3.Data,(longlong)iVar4 << 3);
    FVar3.Data = local_50.Data;
    lVar6 = (longlong)local_48;
    local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ArrayNum = local_48;
    if (local_48 == 0) {
      local_40.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_48,0,&local_40.AllocatorInstance,local_48,&local_40.ArrayMax);
      memcpy(local_40.AllocatorInstance.Data,FVar3.Data,lVar6 << 3);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(TArray<FRichCurve_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>,TArray<FRichCurve_*,TSizedDefaultAllocator<32>_>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnColorCurveChangedDelegate,&local_40);
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  return;
}

// SetColorAtTime @ 1462e4ba0

void __thiscall
FDataflowColorCurveOwner::SetColorAtTime
          (FDataflowColorCurveOwner *this,float param_1,FLinearColor *param_2,bool param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FKeyHandle *pFVar4;
  FKeyHandle local_res8 [2];
  ulonglong in_stack_ffffffffffffffa8;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar5;
  undefined1 local_48 [4];
  FKeyHandle local_44;
  undefined1 local_40 [4];
  FKeyHandle local_3c;
  undefined1 local_38 [4];
  FKeyHandle local_34;
  undefined1 local_30 [24];
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  if ((this->Curves).ArrayNum == 4) {
    plVar1 = *(longlong **)((this->Curves).AllocatorInstance.Data + 8);
    pcVar2 = *(code **)(*plVar1 + 0x28);
    pFVar4 = FKeyHandle::FKeyHandle(local_res8);
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffffffffffff00;
    (*pcVar2)(plVar1,local_48,param_1,(param_2->field0_0x0)._s_0.R,in_stack_ffffffffffffffa8,
              CONCAT44(uVar5,pFVar4->Index));
    if ((this->Curves).ArrayNum < 2) {
      in_stack_ffffffffffffffa8 = 0;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    plVar1 = *(longlong **)((this->Curves).AllocatorInstance.Data + 0x18);
    pcVar2 = *(code **)(*plVar1 + 0x28);
    pFVar4 = FKeyHandle::FKeyHandle(&local_44);
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffffffffffff00;
    (*pcVar2)(plVar1,local_40,param_1,(param_2->field0_0x0)._s_0.G,in_stack_ffffffffffffffa8,
              pFVar4->Index);
    if ((this->Curves).ArrayNum < 3) {
      in_stack_ffffffffffffffa8 = 0;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    plVar1 = *(longlong **)((this->Curves).AllocatorInstance.Data + 0x28);
    pcVar2 = *(code **)(*plVar1 + 0x28);
    pFVar4 = FKeyHandle::FKeyHandle(&local_3c);
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffffffffffff00;
    (*pcVar2)(plVar1,local_38,param_1,(param_2->field0_0x0)._s_0.B,in_stack_ffffffffffffffa8,
              pFVar4->Index);
    if (!param_3) {
      if ((this->Curves).ArrayNum < 4) {
        in_stack_ffffffffffffffa8 = 0;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      plVar1 = *(longlong **)((this->Curves).AllocatorInstance.Data + 0x38);
      pcVar2 = *(code **)(*plVar1 + 0x28);
      pFVar4 = FKeyHandle::FKeyHandle(&local_34);
      (*pcVar2)(plVar1,local_30,param_1,(param_2->field0_0x0)._s_0.A,
                in_stack_ffffffffffffffa8 & 0xffffffffffffff00,pFVar4->Index);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2897679890465685556>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Engine\\Private\\Dataflow\\DataflowColorRamp.cpp"
                       ,0x34,"Curves.Num() == 4");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

