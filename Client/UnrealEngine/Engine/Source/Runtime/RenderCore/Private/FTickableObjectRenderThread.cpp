// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// ~FTickableObjectRenderThread @ 145e85d90

void __thiscall
FTickableObjectRenderThread::~FTickableObjectRenderThread(FTickableObjectRenderThread *this)

{
  this->_padding_ = (longlong)&___7FTickableObjectRenderThread__6B_;
  Unregister(this);
  return;
}

// NeedsRenderingResumedForRenderingThreadTick @ 145ea7100

bool __thiscall
FTickableObjectRenderThread::NeedsRenderingResumedForRenderingThreadTick
          (FTickableObjectRenderThread *this)

{
  return false;
}

// Register @ 145eacbb0

void __thiscall FTickableObjectRenderThread::Register(FTickableObjectRenderThread *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  FTickableObjectRenderThread *local_18;
  FTickableObjectRenderThread *local_10;
  
  bVar2 = IsInRenderingThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\TickableObjectRenderThread.h"
                         ,0x52,
                         L"Game thread attempted to register an object in the RenderingThreadTickableObjects array."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  for (plVar3 = (longlong *)RenderingThreadTickableObjects._0_8_;
      plVar3 != (longlong *)
                (RenderingThreadTickableObjects._0_8_ +
                (longlong)(int)RenderingThreadTickableObjects._8_4_ * 8); plVar3 = plVar3 + 1) {
    if ((FTickableObjectRenderThread *)*plVar3 == this) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!RenderingThreadTickableObjects.Contains(this)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\TickableObjectRenderThread.h"
                         ,0x53,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      break;
    }
  }
  plVar3 = (longlong *)RenderingThreadHighFrequencyTickableObjects._0_8_;
  do {
    if (plVar3 == (longlong *)
                  (RenderingThreadHighFrequencyTickableObjects._0_8_ +
                  (longlong)(int)RenderingThreadHighFrequencyTickableObjects._8_4_ * 8)) {
LAB_145eacc86:
      if ((this->bRegistered != false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bRegistered",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\TickableObjectRenderThread.h"
                             ,0x55,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (this->bHighFrequency != false) {
        local_18 = this;
        if ((((ulonglong)RenderingThreadHighFrequencyTickableObjects._0_8_ <= &local_18) &&
            (&local_18 <
             (FTickableObjectRenderThread **)
             (RenderingThreadHighFrequencyTickableObjects._0_8_ +
             (longlong)(int)RenderingThreadHighFrequencyTickableObjects._12_4_ * 8))) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (RenderingThreadHighFrequencyTickableObjects._8_4_ ==
            RenderingThreadHighFrequencyTickableObjects._12_4_) {
          RenderingThreadHighFrequencyTickableObjects._8_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&RenderingThreadHighFrequencyTickableObjects,
                          (int *)&RenderingThreadHighFrequencyTickableObjects.field_0xc);
        }
        lVar4 = (longlong)(int)RenderingThreadHighFrequencyTickableObjects._8_4_;
        RenderingThreadHighFrequencyTickableObjects._8_4_ =
             RenderingThreadHighFrequencyTickableObjects._8_4_ + 1;
        *(FTickableObjectRenderThread **)
         (RenderingThreadHighFrequencyTickableObjects._0_8_ + lVar4 * 8) = local_18;
        this->bRegistered = true;
        return;
      }
      local_10 = this;
      if ((((ulonglong)RenderingThreadTickableObjects._0_8_ <= &local_10) &&
          (&local_10 <
           (FTickableObjectRenderThread **)
           (RenderingThreadTickableObjects._0_8_ +
           (longlong)(int)RenderingThreadTickableObjects._12_4_ * 8))) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (RenderingThreadTickableObjects._8_4_ == RenderingThreadTickableObjects._12_4_) {
        RenderingThreadTickableObjects._8_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&RenderingThreadTickableObjects,
                        (int *)&RenderingThreadTickableObjects.field_0xc);
      }
      lVar4 = (longlong)(int)RenderingThreadTickableObjects._8_4_;
      RenderingThreadTickableObjects._8_4_ = RenderingThreadTickableObjects._8_4_ + 1;
      *(FTickableObjectRenderThread **)(RenderingThreadTickableObjects._0_8_ + lVar4 * 8) = local_10
      ;
      this->bRegistered = true;
      return;
    }
    if ((FTickableObjectRenderThread *)*plVar3 == this) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!RenderingThreadHighFrequencyTickableObjects.Contains(this)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\TickableObjectRenderThread.h"
                         ,0x54,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto LAB_145eacc86;
    }
    plVar3 = plVar3 + 1;
  } while( true );
}

// Unregister @ 145ebc0f0

void __thiscall FTickableObjectRenderThread::Unregister(FTickableObjectRenderThread *this)

{
  void *_Dst;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  FRenderingThreadTickableObjectsArray *pFVar8;
  
  if (this->bRegistered != false) {
    bVar3 = IsInRenderingThread();
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\TickableObjectRenderThread.h"
                           ,0x42,
                           L"Game thread attempted to unregister an object in the RenderingThreadTickableObjects array."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar8 = &RenderingThreadTickableObjects;
    if (this->bHighFrequency != false) {
      pFVar8 = &RenderingThreadHighFrequencyTickableObjects;
    }
    plVar1 = *(longlong **)&pFVar8->field_0x0;
    for (plVar7 = plVar1; plVar7 != plVar1 + *(int *)&pFVar8->field_0x8; plVar7 = plVar7 + 1) {
      if ((FTickableObjectRenderThread *)*plVar7 == this) {
        uVar6 = (uint)((longlong)plVar7 - (longlong)plVar1 >> 3);
        if (uVar6 != 0xffffffff) goto LAB_145ebc1c3;
        goto LAB_145ebc188;
      }
    }
    uVar6 = 0xffffffff;
LAB_145ebc188:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pos!=INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\TickableObjectRenderThread.h"
                       ,0x46,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_145ebc1c3:
    uVar4 = 0;
    if ((int)uVar6 < *(int *)&pFVar8->field_0x8) {
      uVar4 = ~uVar6 >> 0x1f;
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
    iVar5 = *(int *)&pFVar8->field_0x8 + ~uVar6;
    _Dst = (void *)(*(longlong *)&pFVar8->field_0x0 + (longlong)(int)uVar6 * 8);
    if (iVar5 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar5 << 3);
    }
    *(int *)&pFVar8->field_0x8 = *(int *)&pFVar8->field_0x8 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(ForAnyElementType *)pFVar8,*(int *)&pFVar8->field_0x8,(int *)&pFVar8->field_0xc)
    ;
    this->bRegistered = false;
  }
  return;
}

