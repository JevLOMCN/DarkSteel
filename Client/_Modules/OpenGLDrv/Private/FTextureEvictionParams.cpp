// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 7

// FTextureEvictionParams @ 145be7f60

FTextureEvictionParams * __thiscall
FTextureEvictionParams::FTextureEvictionParams(FTextureEvictionParams *this,uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FTextureEvictionParams *pFVar7;
  uint uVar8;
  
  this->bHasRestored = 0;
  piVar1 = &(this->MipImageData).ArrayNum;
  (this->MipImageData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->MipImageData).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->LRUNode).Index = -1;
  this->FrameLastRendered = 0;
  (this->TextureDebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureDebugName).Data.ArrayNum = 0;
  (this->TextureDebugName).Data.ArrayMax = 0;
  if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
  }
  if (0 < (int)param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,param_1,(ForAnyElementType *)this,0,piVar2);
  }
  iVar3 = *piVar1;
  if (iVar3 < (int)param_1) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar3,(ForAnyElementType *)this,piVar1,piVar2);
    memset((this->MipImageData).AllocatorInstance.Data + (longlong)iVar6 * 0x10,0,
           (longlong)(int)(param_1 - iVar3) << 4);
  }
  else if ((int)param_1 < iVar3) {
    uVar8 = iVar3 - param_1;
    if (((int)(uVar8 | param_1) < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FTextureEvictionParams *)(*pcVar4)();
      return pFVar7;
    }
    if (uVar8 != 0) {
      TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
      RemoveAtImpl(&this->MipImageData,param_1,uVar8);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(ForAnyElementType *)this,*piVar1,piVar2);
    }
  }
  return this;
}

// ~FTextureEvictionParams @ 145beabf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTextureEvictionParams::~FTextureEvictionParams(FTextureEvictionParams *this)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  HGLRC pHVar7;
  longlong lVar8;
  
  pHVar7 = wglGetCurrentContext();
  if (pHVar7 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (this->bHasRestored != 0) {
    uVar5 = GetTotalAllocated(this);
    GTotalEvictedMipMemDuplicated = GTotalEvictedMipMemDuplicated - uVar5;
  }
  uVar5 = (this->MipImageData).ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar8 = (longlong)(int)uVar5 << 4;
    do {
      uVar6 = 0;
      if ((int)uVar5 < (this->MipImageData).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar1 = lVar8 + 8;
      lVar8 = lVar8 + -0x10;
      GTotalEvictedMipMemStored =
           GTotalEvictedMipMemStored - *(int *)((this->MipImageData).AllocatorInstance.Data + lVar1)
      ;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  GTotalMipStoredCount = GTotalMipStoredCount - (this->MipImageData).ArrayNum;
  pFVar2 = (this->TextureDebugName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             (this->MipImageData).AllocatorInstance.Data,(this->MipImageData).ArrayNum);
  pFVar2 = (this->MipImageData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// AreAllMipsPresent @ 145bf2090

bool __thiscall FTextureEvictionParams::AreAllMipsPresent(FTextureEvictionParams *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->MipImageData).ArrayNum;
  pFVar2 = (this->MipImageData).AllocatorInstance.Data;
  bVar4 = 0 < iVar1;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->MipImageData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if ((bVar4 == false) || (*(int *)(pFVar2 + 8) < 1)) {
      bVar4 = false;
      pFVar2 = pFVar2 + 0x10;
    }
    else {
      bVar4 = true;
      pFVar2 = pFVar2 + 0x10;
    }
  }
  return bVar4;
}

// CloneMipData @ 145bf5f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTextureEvictionParams::CloneMipData
          (FTextureEvictionParams *this,FTextureEvictionParams *param_1,uint param_2,int param_3,
          int param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  HGLRC pHVar9;
  longlong lVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  
  pHVar9 = wglGetCurrentContext();
  if (pHVar9 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar7 = (param_1->MipImageData).ArrayNum - param_3;
  if ((int)param_2 < (int)uVar7) {
    uVar7 = param_2;
  }
  if (0 < (int)uVar7) {
    uVar14 = (ulonglong)param_4;
    lVar16 = 0;
    lVar10 = (longlong)param_3 - uVar14;
    lVar17 = uVar14 << 4;
    do {
      uVar13 = (uint)uVar14;
      uVar18 = ~uVar13 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar13 < (this->MipImageData).ArrayNum) {
        uVar8 = uVar18;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(int *)((this->MipImageData).AllocatorInstance.Data + lVar17 + 8) == 0) {
        GTotalMipStoredCount = GTotalMipStoredCount + 1;
      }
      else {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                           ,0x8b1,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar11 = (param_3 - param_4) + uVar13;
      uVar8 = 0;
      if ((int)uVar11 < (param_1->MipImageData).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar15 = (param_1->MipImageData).AllocatorInstance.Data + lVar10 * 0x10 + lVar17;
      uVar8 = 0;
      if ((int)uVar13 < (this->MipImageData).ArrayNum) {
        uVar8 = uVar18;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar12 = (this->MipImageData).AllocatorInstance.Data + lVar17;
      if (pFVar12 != pFVar15) {
        iVar2 = *(int *)&pFVar15[8].field_0x0;
        pFVar5 = pFVar12 + 0xc;
        _Src = *(void **)&pFVar15->field_0x0;
        iVar3 = *(int *)pFVar5;
        *(int *)&pFVar12[8].field_0x0 = iVar2;
        if ((iVar2 == 0) && (iVar3 == 0)) {
          *(int *)pFVar5 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar2,iVar3,(ForAnyElementType *)pFVar12,iVar2,(int *)pFVar5);
          if (iVar2 != 0) {
            memcpy(*(void **)&pFVar12->field_0x0,_Src,(longlong)iVar2);
          }
        }
      }
      uVar8 = 0;
      if ((int)uVar13 < (this->MipImageData).ArrayNum) {
        uVar8 = uVar18;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar14 = (ulonglong)(uVar13 + 1);
      lVar16 = lVar16 + 1;
      lVar1 = lVar17 + 8;
      lVar17 = lVar17 + 0x10;
      GTotalEvictedMipMemStored =
           GTotalEvictedMipMemStored + *(int *)((this->MipImageData).AllocatorInstance.Data + lVar1)
      ;
    } while (lVar16 < (int)uVar7);
  }
  return;
}

// GetTotalAllocated @ 145c047c0

uint __thiscall FTextureEvictionParams::GetTotalAllocated(FTextureEvictionParams *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->MipImageData).ArrayNum;
  uVar4 = 0;
  pFVar2 = (this->MipImageData).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->MipImageData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    uVar4 = uVar4 + *(int *)(pFVar2 + 8);
    pFVar2 = pFVar2 + 0x10;
  }
  return uVar4;
}

// ReleaseMipData @ 145c28610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTextureEvictionParams::ReleaseMipData(FTextureEvictionParams *this,uint param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  HGLRC pHVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  pHVar5 = wglGetCurrentContext();
  if (pHVar5 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar6 = ~param_1 + (this->MipImageData).ArrayNum;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 << 4;
    do {
      uVar8 = ~uVar6 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar6 < (this->MipImageData).ArrayNum) {
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
      GTotalEvictedMipMemStored =
           GTotalEvictedMipMemStored -
           *(int *)((this->MipImageData).AllocatorInstance.Data + lVar7 + 8);
      uVar4 = 0;
      if ((int)uVar6 < (this->MipImageData).ArrayNum) {
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
      GTotalMipStoredCount =
           GTotalMipStoredCount -
           (*(int *)((this->MipImageData).AllocatorInstance.Data + lVar7 + 8) != 0);
      uVar4 = 0;
      if ((int)uVar6 < (this->MipImageData).ArrayNum) {
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
      pFVar9 = (this->MipImageData).AllocatorInstance.Data + lVar7;
      *(undefined4 *)&pFVar9[8].field_0x0 = 0;
      if (*(int *)(pFVar9 + 0xc) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,(ForAnyElementType *)pFVar9,0,(int *)(pFVar9 + 0xc));
      }
      lVar7 = lVar7 + -0x10;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  if (param_1 == 0) {
    DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
               (this->MipImageData).AllocatorInstance.Data,(this->MipImageData).ArrayNum);
    piVar1 = &(this->MipImageData).ArrayMax;
    (this->MipImageData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  return;
}

// SetMipData @ 145c2d7b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FTextureEvictionParams::SetMipData
          (FTextureEvictionParams *this,uint param_1,void *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  HGLRC pHVar4;
  longlong lVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  if (param_3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Bytes",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                       ,0x897,L"FTextureEvictionParams::SetMipData: MipIndex %d, Data %p, Bytes %d)"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((uint)(this->MipImageData).ArrayNum <= param_1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_594873122482550632>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                       ,0x898,"MipIndex < (uint32)MipImageData.Num()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pHVar4 = wglGetCurrentContext();
  if (pHVar4 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar6 = ~param_1 >> 0x1f;
  uVar3 = 0;
  if ((int)param_1 < (this->MipImageData).ArrayNum) {
    uVar3 = uVar6;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar5 = (longlong)(int)param_1 * 0x10;
  if (*(int *)((this->MipImageData).AllocatorInstance.Data + lVar5 + 8) == 0) {
    GTotalMipStoredCount = GTotalMipStoredCount + 1;
  }
  uVar3 = 0;
  if ((int)param_1 < (this->MipImageData).ArrayNum) {
    uVar3 = uVar6;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar7 = (this->MipImageData).AllocatorInstance.Data + lVar5;
  if (-1 < (int)param_3) {
    if (*(int *)(pFVar7 + 0xc) < (int)param_3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_3,(ForAnyElementType *)pFVar7,*(int *)&pFVar7[8].field_0x0,
                 (int *)(pFVar7 + 0xc));
    }
    uVar3 = 0;
    if ((int)param_1 < (this->MipImageData).ArrayNum) {
      uVar3 = uVar6;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
               ((this->MipImageData).AllocatorInstance.Data + lVar5),param_3,Default);
    if (param_2 != (void *)0x0) {
      uVar3 = 0;
      if ((int)param_1 < (this->MipImageData).ArrayNum) {
        uVar3 = uVar6;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      memcpy(*(void **)((this->MipImageData).AllocatorInstance.Data + lVar5),param_2,
             (ulonglong)param_3);
    }
    GTotalEvictedMipMemStored = GTotalEvictedMipMemStored + param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_3);
}

