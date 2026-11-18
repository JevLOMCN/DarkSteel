// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// ~FRenderingThreadTickableObjectsArray @ 145e84540

void __thiscall
FTickableObjectRenderThread::FRenderingThreadTickableObjectsArray::
~FRenderingThreadTickableObjectsArray(FRenderingThreadTickableObjectsArray *this)

{
  void *_Dst;
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  FRenderingThreadTickableObjectsArray *pFVar10;
  
  iVar7 = *(int *)&this->field_0x8;
  iVar4 = iVar7;
  while (0 < iVar7) {
    if (iVar4 < 1) goto LAB_145e84776;
    uVar8 = 0;
    if (iVar7 + -1 < iVar7) {
      uVar8 = (uint)-iVar7 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar1 = *(longlong *)(*(longlong *)this + -8 + (longlong)*(int *)&this->field_0x8 * 8);
    if ((lVar1 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\TickableObjectRenderThread.h"
                           ,0x1c,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)(lVar1 + 8) != '\0') {
      bVar5 = IsInRenderingThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInRenderingThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\TickableObjectRenderThread.h"
                             ,0x42,
                             L"Game thread attempted to unregister an object in the RenderingThreadTickableObjects array."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = &RenderingThreadTickableObjects;
      if (*(char *)(lVar1 + 9) != '\0') {
        pFVar10 = &RenderingThreadHighFrequencyTickableObjects;
      }
      plVar2 = *(longlong **)&pFVar10->field_0x0;
      for (plVar9 = plVar2; plVar9 != plVar2 + *(int *)&pFVar10->field_0x8; plVar9 = plVar9 + 1) {
        if (*plVar9 == lVar1) {
          uVar8 = (uint)((longlong)plVar9 - (longlong)plVar2 >> 3);
          if (uVar8 == 0xffffffff) goto LAB_145e84698;
          goto LAB_145e846d3;
        }
      }
      uVar8 = 0xffffffff;
LAB_145e84698:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pos!=INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\TickableObjectRenderThread.h"
                         ,0x46,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
LAB_145e846d3:
      uVar6 = 0;
      if ((int)uVar8 < *(int *)&pFVar10->field_0x8) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      _Dst = (void *)(*(longlong *)&pFVar10->field_0x0 + (longlong)(int)uVar8 * 8);
      iVar7 = *(int *)&pFVar10->field_0x8 + ~uVar8;
      if (iVar7 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar7 << 3);
      }
      *(int *)&pFVar10->field_0x8 = *(int *)&pFVar10->field_0x8 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(ForAnyElementType *)pFVar10,*(int *)&pFVar10->field_0x8,
                 (int *)&pFVar10->field_0xc);
      *(undefined1 *)(lVar1 + 8) = 0;
    }
    iVar4 = iVar4 + -1;
    iVar7 = *(int *)&this->field_0x8;
  }
  if (iVar7 != 0) {
LAB_145e84776:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\TickableObjectRenderThread.h"
                       ,0x20,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  FMemory::Free(*(void **)this);
  return;
}

