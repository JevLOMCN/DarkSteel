// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 5

// FWindingFingerprint @ 142477430

FWindingFingerprint * __thiscall
UE::Slate::FPreprocessedGlyphGeometry::FWindingFingerprint::FWindingFingerprint
          (FWindingFingerprint *this,Shape *param_1)

{
  int *piVar1;
  Contour *pCVar2;
  EdgeHolder *pEVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  FWindingFingerprint *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  Contour *pCVar11;
  undefined8 uVar12;
  EdgeSegment *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  piVar1 = &(this->Contours).ArrayMax;
  (this->Contours).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Contours).ArrayNum = 0;
  *piVar1 = 0;
  uVar5 = ((longlong)(param_1->contours)._Mypair._Myval2._Mylast -
          (longlong)(param_1->contours)._Mypair._Myval2._Myfirst) / 0x18;
  iVar7 = (int)uVar5;
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar5 & 0xffffffff);
  }
  if (0 < iVar7) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar7,(ForAnyElementType *)this,0,piVar1);
  }
  pCVar2 = (param_1->contours)._Mypair._Myval2._Mylast;
  pCVar11 = (param_1->contours)._Mypair._Myval2._Myfirst;
  do {
    if (pCVar11 == pCVar2) {
      return this;
    }
    pEVar3 = (pCVar11->edges)._Mypair._Myval2._Myfirst;
    if (pEVar3 == (pCVar11->edges)._Mypair._Myval2._Mylast) {
      pFVar10 = (this->Contours).AllocatorInstance.Data;
      local_20 = 0;
      uStack_18 = 0;
      uStack_10 = 0;
      if (((pFVar10 <= (FScriptContainerElement *)&local_20) &&
          ((FScriptContainerElement *)&local_20 < pFVar10 + (longlong)*piVar1 * 0x18)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FWindingFingerprint *)(*pcVar4)();
        return pFVar8;
      }
      iVar7 = (this->Contours).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)this,piVar1);
      }
      lVar9 = (longlong)iVar7;
      (this->Contours).ArrayNum = iVar7 + 1;
      pFVar10 = (this->Contours).AllocatorInstance.Data;
      *(undefined8 *)(pFVar10 + lVar9 * 0x18) = local_20;
      *(undefined8 *)(pFVar10 + lVar9 * 0x18 + 8) = uStack_18;
      uVar12 = uStack_10;
    }
    else {
      local_38 = pEVar3->edgeSegment;
      lVar9 = (**(code **)(pEVar3->edgeSegment->_padding_ + 0x18))();
      pFVar10 = (this->Contours).AllocatorInstance.Data;
      uStack_30 = *(undefined8 *)(lVar9 + 0x10);
      local_28 = *(undefined8 *)(lVar9 + 0x18);
      if (((pFVar10 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < pFVar10 + (longlong)*piVar1 * 0x18)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FWindingFingerprint *)(*pcVar4)();
        return pFVar8;
      }
      iVar7 = (this->Contours).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)this,piVar1);
      }
      lVar9 = (longlong)iVar7;
      (this->Contours).ArrayNum = iVar7 + 1;
      pFVar10 = (this->Contours).AllocatorInstance.Data;
      *(EdgeSegment **)(pFVar10 + lVar9 * 0x18) = local_38;
      *(undefined8 *)(pFVar10 + lVar9 * 0x18 + 8) = uStack_30;
      uVar12 = local_28;
    }
    pCVar11 = pCVar11 + 1;
    *(undefined8 *)(pFVar10 + lVar9 * 0x18 + 0x10) = uVar12;
  } while( true );
}

// ~FWindingFingerprint @ 142479e10

void __thiscall
UE::Slate::FPreprocessedGlyphGeometry::FWindingFingerprint::~FWindingFingerprint
          (FWindingFingerprint *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Contours).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// operator== @ 14247a620

bool __thiscall
UE::Slate::FPreprocessedGlyphGeometry::FWindingFingerprint::operator==
          (FWindingFingerprint *this,FWindingFingerprint *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  iVar3 = (this->Contours).ArrayNum;
  if (iVar3 == (param_1->Contours).ArrayNum) {
    uVar9 = 0;
    if (0 < iVar3) {
      lVar11 = 0;
      do {
        uVar10 = ~uVar9 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar9 < (param_1->Contours).ArrayNum) {
          uVar8 = uVar10;
        }
        if (uVar8 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        pFVar4 = (param_1->Contours).AllocatorInstance.Data;
        uVar8 = 0;
        if ((int)uVar9 < (this->Contours).ArrayNum) {
          uVar8 = uVar10;
        }
        if (uVar8 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        if (*(longlong *)((this->Contours).AllocatorInstance.Data + lVar11) !=
            *(longlong *)(pFVar4 + lVar11)) goto LAB_14247a7d6;
        uVar8 = 0;
        if ((int)uVar9 < (param_1->Contours).ArrayNum) {
          uVar8 = uVar10;
        }
        if (uVar8 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        pFVar4 = (param_1->Contours).AllocatorInstance.Data;
        dVar1 = *(double *)(pFVar4 + lVar11 + 8);
        dVar2 = *(double *)(pFVar4 + lVar11 + 0x10);
        uVar8 = 0;
        if ((int)uVar9 < (this->Contours).ArrayNum) {
          uVar8 = uVar10;
        }
        if (uVar8 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        pFVar4 = (this->Contours).AllocatorInstance.Data;
        if ((dVar1 != *(double *)(pFVar4 + lVar11 + 8)) ||
           (*(double *)(pFVar4 + lVar11 + 0x10) != dVar2)) goto LAB_14247a7d6;
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 0x18;
      } while ((int)uVar9 < (this->Contours).ArrayNum);
    }
    bVar6 = true;
  }
  else {
LAB_14247a7d6:
    bVar6 = false;
  }
  return bVar6;
}

// operator!= @ 14247a880

bool __thiscall
UE::Slate::FPreprocessedGlyphGeometry::FWindingFingerprint::operator!=
          (FWindingFingerprint *this,FWindingFingerprint *param_1)

{
  bool bVar1;
  
  bVar1 = operator==(this,param_1);
  return !bVar1;
}

// Diff @ 142485590

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
UE::Slate::FPreprocessedGlyphGeometry::FWindingFingerprint::Diff
          (bool *param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
          FWindingFingerprint *param_3,FWindingFingerprint *param_4)

{
  double dVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  if ((param_3->Contours).ArrayNum != (param_4->Contours).ArrayNum) {
    return false;
  }
  *param_1 = true;
  iVar7 = (param_3->Contours).ArrayNum + 7;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (param_2,(int)((iVar7 >> 0x1f & 7U) + iVar7) >> 3,Default);
  uVar9 = 0;
  if (0 < (param_3->Contours).ArrayNum) {
    lVar10 = 0;
    do {
      uVar11 = ~uVar9 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar9 < (param_4->Contours).ArrayNum) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar3 = (param_4->Contours).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar9 < (param_3->Contours).ArrayNum) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (*(longlong *)((param_3->Contours).AllocatorInstance.Data + lVar10) ==
          *(longlong *)(pFVar3 + lVar10)) {
        uVar8 = 0;
        if ((int)uVar9 < (param_4->Contours).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar3 = (param_4->Contours).AllocatorInstance.Data;
        dVar1 = *(double *)(pFVar3 + lVar10 + 8);
        dVar2 = *(double *)(pFVar3 + lVar10 + 0x10);
        uVar8 = 0;
        if ((int)uVar9 < (param_3->Contours).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar3 = (param_3->Contours).AllocatorInstance.Data;
        if ((dVar1 != *(double *)(pFVar3 + lVar10 + 8)) ||
           (*(double *)(pFVar3 + lVar10 + 0x10) != dVar2)) goto LAB_14248577c;
        *param_1 = false;
      }
      else {
LAB_14248577c:
        uVar11 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 7U)) >> 3;
        uVar8 = 0;
        if ((int)uVar11 < param_2->ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        uVar8 = uVar9 & 0x80000007;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xfffffff8) + 1;
        }
        pFVar3[(int)uVar11] =
             (FScriptContainerElement)((byte)pFVar3[(int)uVar11] | (byte)(1 << (uVar8 & 0x1f)));
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x18;
    } while ((int)uVar9 < (param_3->Contours).ArrayNum);
  }
  return true;
}

