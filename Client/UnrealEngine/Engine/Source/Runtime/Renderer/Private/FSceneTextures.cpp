// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// EnumerateSceneTextures @ 1454ebb10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> * __thiscall
FSceneTextures::EnumerateSceneTextures
          (FSceneTextures *this,
          TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FRDGTextureMSAA *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong local_78;
  FRDGTexture *local_70;
  FRDGTexture *local_68;
  FRDGTexture *local_60;
  FRDGTexture *local_58;
  FRDGTexture *local_50;
  FRDGTexture *local_48;
  FRDGTexture *local_40;
  FRDGTexture *local_38;
  FRDGTexture *local_30;
  FRDGTexture *local_28;
  FRDGTexture *local_20;
  FRDGTexture *local_18;
  FRDGTexture *local_10;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,0x15,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  AddTextureIfNonNull((FRDGTextureMSAA *)&this->_padding_,__return_storage_ptr__);
  AddTextureIfNonNull((FRDGTextureMSAA *)&this->_padding_,__return_storage_ptr__);
  AddTextureIfNonNull((FRDGTextureMSAA *)&this->_padding_,__return_storage_ptr__);
  local_78 = this->_padding_;
  if (local_78 != 0) {
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_78) &&
       ((FScriptContainerElement *)&local_78 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_78
    ;
  }
  local_70 = this->SmallDepth;
  if (local_70 != (FRDGTexture *)0x0) {
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_70) &&
       ((FScriptContainerElement *)&local_70 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(FRDGTexture **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_70;
  }
  local_68 = this->GBufferA;
  if (local_68 != (FRDGTexture *)0x0) {
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(FRDGTexture **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_68;
  }
  local_60 = this->GBufferB;
  if (local_60 != (FRDGTexture *)0x0) {
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_60) &&
       ((FScriptContainerElement *)&local_60 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(FRDGTexture **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_60;
  }
  local_58 = this->GBufferC;
  if (local_58 != (FRDGTexture *)0x0) {
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_58) &&
       ((FScriptContainerElement *)&local_58 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(FRDGTexture **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_58;
  }
  local_50 = this->GBufferD;
  if (local_50 != (FRDGTexture *)0x0) {
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_50) &&
       ((FScriptContainerElement *)&local_50 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(FRDGTexture **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_50;
  }
  local_48 = this->GBufferE;
  if (local_48 != (FRDGTexture *)0x0) {
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(FRDGTexture **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_48;
  }
  local_40 = this->GBufferF;
  if (local_40 != (FRDGTexture *)0x0) {
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_40) &&
       ((FScriptContainerElement *)&local_40 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(FRDGTexture **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_40;
  }
  local_38 = this->GBufferSGGX;
  if (local_38 != (FRDGTexture *)0x0) {
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(FRDGTexture **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_38;
  }
  pFVar2 = &this->DepthAux;
  if (pFVar2->Target != (FRDGTexture *)0x0) {
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(FRDGTexture **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         pFVar2->Target;
  }
  local_30 = this->Velocity;
  if (local_30 != (FRDGTexture *)0x0) {
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_30) &&
       ((FScriptContainerElement *)&local_30 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(FRDGTexture **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_30;
  }
  local_28 = this->MobileLocalLightTextureA;
  if (local_28 != (FRDGTexture *)0x0) {
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(FRDGTexture **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_28;
  }
  local_20 = this->MobileLocalLightTextureB;
  if (local_20 != (FRDGTexture *)0x0) {
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_20) &&
       ((FScriptContainerElement *)&local_20 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(FRDGTexture **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_20;
  }
  local_18 = this->ScreenSpaceAO;
  if (local_18 != (FRDGTexture *)0x0) {
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_18) &&
       ((FScriptContainerElement *)&local_18 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(FRDGTexture **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_18;
  }
  local_10 = this->DebugAux;
  if (local_10 != (FRDGTexture *)0x0) {
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_10) &&
       ((FScriptContainerElement *)&local_10 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(FRDGTexture **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_10;
  }
  return __return_storage_ptr__;
}

// GetGBufferFFormatAndCreateFlags @ 1454f3650

EPixelFormat __cdecl FSceneTextures::GetGBufferFFormatAndCreateFlags(ETextureCreateFlags *param_1)

{
  int iVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  EPixelFormat EVar4;
  longlong lVar5;
  
  pTVar2 = CVarGBufferFormat.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      lVar5 = 4;
      goto LAB_1454f367f;
    }
  }
  lVar5 = 0;
LAB_1454f367f:
  iVar1 = *(int *)((longlong)pTVar2->ShadowedValue + lVar5);
  EVar4 = PF_B8G8R8A8;
  if (4 < iVar1) {
    EVar4 = PF_FloatRGBA;
  }
  if (iVar1 == 0) {
    EVar4 = PF_B8G8R8A8;
  }
  else if (iVar1 == 3) {
    EVar4 = PF_FloatRGBA;
  }
  *param_1 = GFastVRamConfig.GBufferF | (ShaderResource|RenderTargetable);
  return EVar4;
}

// GetGBufferRenderTargets @ 1454f36d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __thiscall
FSceneTextures::GetGBufferRenderTargets
          (FSceneTextures *this,TArrayView<FTextureRenderTargetBinding,int> *param_1,
          EGBufferLayout param_2)

{
  uint *puVar1;
  uint uVar2;
  FRDGTexture *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FTextureRenderTargetBinding *pFVar8;
  uint *puVar9;
  longlong lVar10;
  undefined5 uStack_cd;
  undefined5 uStack_bd;
  undefined5 uStack_ad;
  uint local_98 [2];
  wchar_t *local_90;
  FRDGTexture *local_88;
  undefined4 local_80;
  wchar_t *local_78;
  FRDGTexture *local_70;
  undefined4 local_68;
  wchar_t *local_60;
  FRDGTexture *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  FRDGTexture *local_40;
  undefined4 local_38;
  wchar_t *local_30;
  FRDGTexture *local_28;
  undefined4 local_20;
  
  pFVar3 = (FRDGTexture *)this->_padding_;
  lVar10 = (longlong)(int)param_2;
  pFVar8 = TArrayView<FTextureRenderTargetBinding,int>::operator[](param_1,0);
  uVar6 = 1;
  pFVar8->Texture = pFVar3;
  pFVar8->ArraySlice = (short)0xffff;
  pFVar8->bNeverClear = (bool)(char)(0xffff >> 0x10);
  *(undefined5 *)&pFVar8->field_0xb = uStack_cd;
  if ((this->_padding_ & 2) == 0) {
    bVar5 = IsUsingBasePassVelocity
                      ((FStaticShaderPlatform)*(EShaderPlatform *)((longlong)&this->_padding_ + 4));
    if (bVar5) {
      pFVar3 = this->Velocity;
      pFVar8 = TArrayView<FTextureRenderTargetBinding,int>::operator[](param_1,1);
      pFVar8->Texture = pFVar3;
      pFVar8->ArraySlice = (short)0xffff;
      pFVar8->bNeverClear = (bool)(char)(0xffff >> 0x10);
      *(undefined5 *)&pFVar8->field_0xb = uStack_ad;
      uVar6 = 2;
    }
  }
  else {
    local_98[0] = (uint)(&this->_padding_)[lVar10 * 0xc];
    local_90 = L"GBufferB";
    local_88 = this->GBufferB;
    local_80 = (int)(&this->_padding_)[lVar10 * 0xc];
    local_78 = L"GBufferC";
    local_70 = this->GBufferC;
    local_68 = (int)(&this->_padding_)[lVar10 * 0xc];
    local_60 = L"GBufferD";
    local_58 = this->GBufferD;
    local_50 = (int)(&this->_padding_)[lVar10 * 0xc];
    local_48 = L"GBufferE";
    local_40 = this->GBufferE;
    local_38 = (int)(&this->_padding_)[lVar10 * 0xc];
    local_30 = L"Velocity";
    local_28 = this->Velocity;
    local_20 = (int)(&this->_padding_)[lVar10 * 0xc];
    puVar9 = local_98;
    do {
      if (((0 < (int)*puVar9) && (*(longlong *)(puVar9 + -2) == 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Entry.Index <= 0 || Entry.Texture != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneTextures.cpp"
                             ,0x379,L"Texture \'%s\' was requested by FGBufferInfo, but it is null."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
      uVar2 = *puVar9;
      uVar7 = uVar6;
      if (0 < (int)uVar2) {
        pFVar3 = *(FRDGTexture **)(puVar9 + -2);
        uVar7 = 0;
        if ((int)uVar2 < param_1->ArrayNum) {
          uVar7 = ~uVar2 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return uVar6;
        }
        pFVar8 = param_1->DataPtr + (int)uVar2;
        pFVar8->Texture = pFVar3;
        pFVar8->ArraySlice = (short)0xffff;
        pFVar8->bNeverClear = (bool)(char)(0xffff >> 0x10);
        *(undefined5 *)&pFVar8->field_0xb = uStack_bd;
        uVar7 = *puVar9 + 1;
        if (*puVar9 + 1 < uVar6) {
          uVar7 = uVar6;
        }
      }
      uVar6 = uVar7;
      puVar1 = puVar9 + 2;
      puVar9 = puVar9 + 6;
    } while (puVar1 != (uint *)&stack0xffffffffffffffe8);
  }
  return uVar6;
}

// GetGBufferRenderTargets @ 1454f3930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
FSceneTextures::GetGBufferRenderTargets
          (FSceneTextures *this,ERenderTargetLoadAction param_1,FRenderTargetBindingSlots *param_2,
          EGBufferLayout param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  FTextureRenderTargetBinding *pFVar5;
  undefined1 auStack_128 [32];
  FRenderTargetBinding local_108;
  FTextureRenderTargetBinding *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  TArrayView<FTextureRenderTargetBinding,int> local_d8;
  FTextureRenderTargetBinding local_c8;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined8 local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined8 local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined8 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  uStack_e0 = 8;
  local_c8.Texture = (FRDGTexture *)0x0;
  local_e8 = &local_c8;
  local_c8.ArraySlice = -1;
  local_d8._12_4_ = uStack_dc;
  local_d8.ArrayNum = 8;
  local_c8.bNeverClear = false;
  local_b8 = 0;
  local_b0 = 0xffff;
  local_ae = 0;
  local_a8 = 0;
  local_a0 = 0xffff;
  local_9e = 0;
  local_98 = 0;
  local_90 = 0xffff;
  local_8e = 0;
  local_88 = 0;
  local_80 = 0xffff;
  local_7e = 0;
  local_78 = 0;
  local_70 = 0xffff;
  local_6e = 0;
  local_68 = 0;
  local_60 = 0xffff;
  local_5e = 0;
  local_58 = 0;
  local_50 = 0xffff;
  local_4e = 0;
  local_d8.DataPtr = local_e8;
  uVar3 = GetGBufferRenderTargets(this,&local_d8,param_3);
  if (uVar3 != 0) {
    uVar4 = (ulonglong)uVar3;
    pFVar5 = &local_c8;
    do {
      local_108.Texture = pFVar5->Texture;
      local_108.ResolveTexture = (FRDGTexture *)0x0;
      local_108.MipIndex = '\0';
      local_108.ArraySlice = -1;
      local_108.LoadAction = param_1;
      bVar2 = FRenderTargetBinding::Validate(&local_108);
      if ((!bVar2) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Validate()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                             ,0x216,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      pFVar5 = pFVar5 + 1;
      (param_2->Output).Elements[0].Texture = local_108.Texture;
      (param_2->Output).Elements[0].ResolveTexture = local_108.ResolveTexture;
      (param_2->Output).Elements[0].LoadAction = local_108.LoadAction;
      (param_2->Output).Elements[0].MipIndex = local_108.MipIndex;
      (param_2->Output).Elements[0].ArraySlice = local_108.ArraySlice;
      *(undefined4 *)&(param_2->Output).Elements[0].field_0x14 = local_108._20_4_;
      param_2 = (FRenderTargetBindingSlots *)((param_2->Output).Elements + 1);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return uVar3;
}

// InitializeViewFamily @ 1454fbcd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
FSceneTextures::InitializeViewFamily
          (FRDGBuilder *param_1,FViewFamilyInfo *param_2,TIntPoint<int> param_3)

{
  undefined1 *puVar1;
  int iVar2;
  TIntPoint<int>_u_0_s_0 TVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  FRHITexture *this;
  bool bVar8;
  char cVar9;
  Type TVar10;
  EDebugViewShaderMode EVar11;
  uint uVar12;
  uint uVar13;
  FRDGTexture *pFVar14;
  FRDGTextureDesc *pFVar15;
  ulonglong uVar16;
  FRDGTextureMSAA *pFVar17;
  IStereoRenderTargetManager *pIVar18;
  TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *pTVar19;
  FStaticShaderPlatform FVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  FSceneTextures *this_00;
  undefined1 auStackY_5a8 [32];
  TIntPoint<int>_u_0 local_568;
  int local_560 [2];
  FRHITexture *local_558;
  FRHITexture *local_550;
  FRDGTextureMSAA local_548 [2];
  int local_528;
  int iStack_524;
  int local_520;
  int iStack_51c;
  int local_518;
  int iStack_514;
  int local_510;
  int iStack_50c;
  int local_508;
  int iStack_504;
  int local_500;
  int iStack_4fc;
  int local_4f8;
  int iStack_4f4;
  int local_4f0;
  int iStack_4ec;
  int local_4e8;
  int iStack_4e4;
  int local_4e0;
  int iStack_4dc;
  int local_4d8;
  int iStack_4d4;
  int local_4d0;
  int iStack_4cc;
  int local_4c8;
  int iStack_4c4;
  undefined1 local_4c0 [8];
  int local_4b8;
  int iStack_4b4;
  int local_4b0;
  int iStack_4ac;
  uint local_4a8;
  int iStack_4a4;
  uint local_4a0;
  uint uStack_49c;
  FSceneTextures *local_498;
  undefined1 local_490 [44];
  undefined2 local_464;
  undefined2 local_462;
  undefined1 local_460;
  undefined1 local_45f;
  undefined1 local_45e;
  undefined1 local_45d;
  undefined2 local_45c;
  undefined1 local_458 [8];
  undefined8 local_450;
  undefined4 local_448;
  undefined4 local_444;
  FClearValueBinding local_438;
  TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> local_418;
  undefined1 local_408 [44];
  undefined4 local_3dc;
  undefined2 local_3d8;
  bool local_3d6;
  undefined1 local_3d5;
  undefined2 local_3d4;
  void *local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined1 local_3b8 [24];
  float local_3a0;
  int local_39c;
  undefined4 local_398;
  TIntPoint<int>_u_0_s_0 local_394;
  undefined4 local_38c;
  undefined2 local_388;
  bool local_386;
  EPixelFormat local_385;
  undefined2 local_384;
  void *local_378;
  undefined4 local_370;
  undefined4 local_36c;
  undefined1 local_368 [24];
  float local_350;
  int local_34c;
  undefined4 local_348;
  TIntPoint<int>_u_0_s_0 local_344;
  undefined4 local_33c;
  undefined2 local_338;
  bool local_336;
  EPixelFormat local_335;
  undefined2 local_334;
  void *local_328;
  undefined4 local_320;
  undefined4 local_31c;
  undefined1 local_318 [24];
  float local_300;
  int local_2fc;
  undefined4 local_2f8;
  TIntPoint<int>_u_0_s_0 local_2f4;
  undefined4 local_2ec;
  undefined2 local_2e8;
  bool local_2e6;
  EPixelFormat local_2e5;
  undefined2 local_2e4;
  void *local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined1 local_2c8 [24];
  float local_2b0;
  int local_2ac;
  undefined4 local_2a8;
  TIntPoint<int>_u_0_s_0 local_2a4;
  undefined4 local_29c;
  undefined2 local_298;
  bool local_296;
  EPixelFormat local_295;
  undefined2 local_294;
  void *local_288;
  undefined4 local_280;
  undefined4 local_27c;
  ulonglong local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined4 local_260;
  int local_25c;
  undefined4 local_258;
  TIntPoint<int>_u_0_s_0 local_254;
  undefined2 local_24c;
  undefined2 local_24a;
  undefined1 local_248;
  undefined1 local_247;
  bool local_246;
  undefined1 local_245;
  undefined2 local_244;
  TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_240;
  undefined1 local_228 [44];
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined2 local_1f4;
  void *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined1 local_1d8 [24];
  float local_1c0;
  int local_1bc;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined2 local_1a4;
  void *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined1 local_188 [24];
  float local_170;
  int local_16c;
  undefined4 local_168;
  TIntPoint<int>_u_0_s_0 local_164;
  undefined4 local_15c;
  undefined4 local_158;
  undefined2 local_154;
  void *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 local_138 [24];
  float local_120;
  int local_11c;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined4 local_108;
  undefined2 local_104;
  void *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [80];
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  this_00 = param_2->SceneTextures;
  local_498 = this_00;
  FMinimalSceneTextures::InitializeViewFamily(param_1,param_2);
  uVar21 = 0;
  if ((param_2->SceneTexturesConfig).ShadingPath == Deferred) {
    TVar3 = (param_2->SceneTexturesConfig).Extent.field0_0x0._s_0;
    TVar10 = FSceneViewFamily::GetFeatureLevel((FSceneViewFamily *)param_2);
    pFVar14 = CreateScreenSpaceAOTexture(param_1,TVar10,(TIntPoint<int>)TVar3);
    this_00->ScreenSpaceAO = pFVar14;
    local_4a0 = (param_2->SceneTexturesConfig).SmallDepthDownsampleFactor;
    TVar3 = (param_2->SceneTexturesConfig).Extent.field0_0x0._s_0;
    local_528 = (int)(TVar3.X + -1 + local_4a0) / (int)local_4a0;
    local_1d8._0_8_ = 0xc;
    local_1b8 = 0;
    local_1ac = 0x10001;
    local_1a8 = 0xb000101;
    iStack_524 = (int)((local_4a0 - 1) + TVar3.Y) / (int)local_4a0;
    local_1a4 = 0xff00;
    local_198 = (void *)0x0;
    if (local_528 < 1) {
      local_528 = 1;
    }
    local_190 = 0;
    local_18c = 1;
    if (iStack_524 < 1) {
      iStack_524 = 1;
    }
    local_1c0 = FClearValueBinding::None.Value.Color[3];
    local_1bc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_1b4._4_4_ = iStack_524;
    local_1b4._0_4_ = local_528;
    local_1d8._8_8_ = FClearValueBinding::None._0_8_;
    local_1d8._16_8_ = FClearValueBinding::None.Value._4_8_;
    uStack_49c = local_4a0;
    pFVar14 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_1d8,L"SmallDepthZ",None);
    this_00->SmallDepth = pFVar14;
    if (local_198 != (void *)0x0) {
      FMemory::Free(local_198);
    }
  }
  pFVar15 = FVelocityRendering::GetRenderTargetDesc
                      ((FRDGTextureDesc *)local_98,(param_2->SceneTexturesConfig).ShaderPlatform,
                       (TIntPoint<int>)(param_2->SceneTexturesConfig).Extent.field0_0x0._s_0,
                       (param_2->SceneTexturesConfig).bRequireMultiView);
  pFVar14 = FRDGBuilder::CreateTexture(param_1,pFVar15,L"SceneVelocity",None);
  this_00->Velocity = pFVar14;
  if ((void *)local_98._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._64_8_);
  }
  if ((param_2->SceneTexturesConfig).bIsUsingGBuffers != 0) {
    if (-1 < (param_2->SceneTexturesConfig).GBufferBindings[0].GBufferA.Index) {
      local_438.Value.Color[3] = FClearValueBinding::Transparent.Value.Color[3];
      local_438._0_8_ = FClearValueBinding::Transparent._0_8_;
      local_438.Value._4_8_ = FClearValueBinding::Transparent.Value._4_8_;
      FRDGTextureDesc::CreateRenderTargetTextureDesc
                ((FRDGTextureDesc *)local_e8,
                 (TIntPoint<int>)(param_2->SceneTexturesConfig).Extent.field0_0x0._s_0,
                 (param_2->SceneTexturesConfig).GBufferBindings[0].GBufferA.Format,&local_438,
                 (param_2->SceneTexturesConfig).GBufferBindings[0].GBufferA.Flags |
                 GFastVRamConfig.GBufferA,(param_2->SceneTexturesConfig).bRequireMultiView,
                 (ushort)(param_2->SceneTexturesConfig).MobileMultiViewRenderTargetNumLayers);
      pFVar14 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_e8,L"GBufferA",None);
      this_00->GBufferA = pFVar14;
      if ((void *)local_e8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_e8._64_8_);
      }
    }
    if (-1 < (param_2->SceneTexturesConfig).GBufferBindings[0].GBufferB.Index) {
      local_394 = (param_2->SceneTexturesConfig).Extent.field0_0x0._s_0;
      local_3b8._0_8_ =
           (param_2->SceneTexturesConfig).GBufferBindings[0].GBufferB.Flags |
           GFastVRamConfig.GBufferB;
      local_385 = (param_2->SceneTexturesConfig).GBufferBindings[0].GBufferB.Format;
      local_398 = 0;
      local_388 = 0x101;
      local_384 = 0xff00;
      local_378 = (void *)0x0;
      local_370 = 0;
      local_36c = 1;
      local_3b8._8_8_ = FClearValueBinding::Transparent._0_8_;
      local_3b8._16_8_ = FClearValueBinding::Transparent.Value._4_8_;
      local_386 = (param_2->SceneTexturesConfig).bRequireMultiView == 0;
      if (local_386) {
        local_38c = 0x10001;
        local_518 = local_394.X;
        iStack_514 = local_394.Y;
      }
      else {
        local_38c._2_2_ = (short)(param_2->SceneTexturesConfig).MobileMultiViewRenderTargetNumLayers
        ;
        local_38c._0_2_ = 1;
        local_520 = local_394.X;
        iStack_51c = local_394.Y;
      }
      local_39c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_386 = !local_386;
      local_3a0 = FClearValueBinding::Transparent.Value.Color[3];
      pFVar14 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_3b8,L"GBufferB",None);
      this_00->GBufferB = pFVar14;
      if (local_378 != (void *)0x0) {
        FMemory::Free(local_378);
      }
    }
    if (-1 < (param_2->SceneTexturesConfig).GBufferBindings[0].GBufferC.Index) {
      local_344 = (param_2->SceneTexturesConfig).Extent.field0_0x0._s_0;
      local_368._0_8_ =
           (param_2->SceneTexturesConfig).GBufferBindings[0].GBufferC.Flags |
           GFastVRamConfig.GBufferC;
      local_335 = (param_2->SceneTexturesConfig).GBufferBindings[0].GBufferC.Format;
      local_348 = 0;
      local_338 = 0x101;
      local_334 = 0xff00;
      local_328 = (void *)0x0;
      local_320 = 0;
      local_31c = 1;
      local_368._8_8_ = FClearValueBinding::Transparent._0_8_;
      local_368._16_8_ = FClearValueBinding::Transparent.Value._4_8_;
      local_336 = (param_2->SceneTexturesConfig).bRequireMultiView == 0;
      if (local_336) {
        local_33c = 0x10001;
        local_508 = local_344.X;
        iStack_504 = local_344.Y;
      }
      else {
        local_33c._2_2_ = (short)(param_2->SceneTexturesConfig).MobileMultiViewRenderTargetNumLayers
        ;
        local_33c._0_2_ = 1;
        local_510 = local_344.X;
        iStack_50c = local_344.Y;
      }
      local_34c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_336 = !local_336;
      local_350 = FClearValueBinding::Transparent.Value.Color[3];
      pFVar14 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_368,L"GBufferC",None);
      this_00->GBufferC = pFVar14;
      if (local_328 != (void *)0x0) {
        FMemory::Free(local_328);
      }
    }
    if (-1 < (param_2->SceneTexturesConfig).GBufferBindings[0].GBufferD.Index) {
      local_2f4 = (param_2->SceneTexturesConfig).Extent.field0_0x0._s_0;
      local_318._0_8_ =
           (param_2->SceneTexturesConfig).GBufferBindings[0].GBufferD.Flags |
           GFastVRamConfig.GBufferD;
      local_2e5 = (param_2->SceneTexturesConfig).GBufferBindings[0].GBufferD.Format;
      local_2f8 = 0;
      local_2e8 = 0x101;
      local_2e4 = 0xff00;
      local_2d8 = (void *)0x0;
      local_2d0 = 0;
      local_2cc = 1;
      local_318._8_8_ = FClearValueBinding::Transparent._0_8_;
      local_318._16_8_ = FClearValueBinding::Transparent.Value._4_8_;
      local_2e6 = (param_2->SceneTexturesConfig).bRequireMultiView == 0;
      if (local_2e6) {
        local_2ec = 0x10001;
        local_4f8 = local_2f4.X;
        iStack_4f4 = local_2f4.Y;
      }
      else {
        local_2ec._2_2_ = (short)(param_2->SceneTexturesConfig).MobileMultiViewRenderTargetNumLayers
        ;
        local_2ec._0_2_ = 1;
        local_500 = local_2f4.X;
        iStack_4fc = local_2f4.Y;
      }
      local_2fc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_2e6 = !local_2e6;
      local_300 = FClearValueBinding::Transparent.Value.Color[3];
      pFVar14 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_318,L"GBufferD",None);
      this_00->GBufferD = pFVar14;
      if (local_2d8 != (void *)0x0) {
        FMemory::Free(local_2d8);
      }
    }
    if (-1 < (param_2->SceneTexturesConfig).GBufferBindings[0].GBufferE.Index) {
      local_2a4 = (param_2->SceneTexturesConfig).Extent.field0_0x0._s_0;
      local_2c8._0_8_ =
           (param_2->SceneTexturesConfig).GBufferBindings[0].GBufferE.Flags |
           GFastVRamConfig.GBufferE;
      local_295 = (param_2->SceneTexturesConfig).GBufferBindings[0].GBufferE.Format;
      local_2a8 = 0;
      local_298 = 0x101;
      local_294 = 0xff00;
      local_288 = (void *)0x0;
      local_280 = 0;
      local_27c = 1;
      local_2c8._8_8_ = FClearValueBinding::Transparent._0_8_;
      local_2c8._16_8_ = FClearValueBinding::Transparent.Value._4_8_;
      local_296 = (param_2->SceneTexturesConfig).bRequireMultiView == 0;
      if (local_296) {
        local_29c = 0x10001;
        local_4e8 = local_2a4.X;
        iStack_4e4 = local_2a4.Y;
      }
      else {
        local_29c._2_2_ = (short)(param_2->SceneTexturesConfig).MobileMultiViewRenderTargetNumLayers
        ;
        local_29c._0_2_ = 1;
        local_4f0 = local_2a4.X;
        iStack_4ec = local_2a4.Y;
      }
      local_2ac = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_296 = !local_296;
      local_2b0 = FClearValueBinding::Transparent.Value.Color[3];
      pFVar14 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_2c8,L"GBufferE",None);
      this_00->GBufferE = pFVar14;
      if (local_288 != (void *)0x0) {
        FMemory::Free(local_288);
      }
    }
    pTVar7 = CVarGBufferFormat.Ref;
    if ((param_2->SceneTexturesConfig).ShadingPath == Deferred) {
      bVar8 = IsInParallelGameThread();
      if (bVar8) {
LAB_1454fc46f:
        uVar16 = uVar21;
      }
      else {
        bVar8 = IsInGameThread();
        uVar16 = 4;
        if (bVar8) goto LAB_1454fc46f;
      }
      iVar2 = *(int *)((longlong)pTVar7->ShadowedValue + uVar16);
      local_3d5 = 2;
      if (4 < iVar2) {
        local_3d5 = 10;
      }
      if (iVar2 == 0) {
        local_3d5 = 2;
      }
      else if (iVar2 == 3) {
        local_3d5 = 10;
      }
      local_408._36_8_ = (param_2->SceneTexturesConfig).Extent.field0_0x0._s_0;
      local_408._0_8_ = GFastVRamConfig.GBufferF | (ShaderResource|RenderTargetable);
      local_408._8_4_ = 1;
      local_408._12_4_ = 0x3f000000;
      local_408._16_4_ = 0x3f000000;
      local_408._20_4_ = 0x3f000000;
      local_408._24_4_ = 0x3f000000;
      local_408._32_4_ = 0;
      local_3d8 = 0x101;
      local_3d4 = 0xff00;
      local_3c8 = (void *)0x0;
      local_3c0 = 0;
      local_3bc = 1;
      local_3d6 = (param_2->SceneTexturesConfig).bRequireMultiView == 0;
      if (local_3d6) {
        local_3dc = 0x10001;
        local_4d8 = (int)local_408._36_8_;
        iStack_4d4 = SUB84(local_408._36_8_,4);
      }
      else {
        local_3dc._2_2_ = (short)(param_2->SceneTexturesConfig).MobileMultiViewRenderTargetNumLayers
        ;
        local_3dc._0_2_ = 1;
        local_4e0 = (int)local_408._36_8_;
        iStack_4dc = SUB84(local_408._36_8_,4);
      }
      local_408._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_3d6 = !local_3d6;
      pFVar14 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_408,L"GBufferF",None);
      this_00->GBufferF = pFVar14;
      if (local_3c8 != (void *)0x0) {
        FMemory::Free(local_3c8);
      }
    }
  }
  if ((param_2->SceneTexturesConfig).bRequiresDepthAux != 0) {
    if (((FReadOnlyCVARCache::bMobileDeferredShadingValue != false) &&
        (FReadOnlyCVARCache::bMobileHDR != false)) ||
       ((local_490._0_8_ = uVar21, 1 < (param_2->SceneTexturesConfig).NumSamples &&
        ((char)((param_2->SceneTexturesConfig).bMemorylessMSAA << 7) < '\0')))) {
      local_490._0_8_ = 0x1000;
    }
    local_548[0].Target = (FRDGTexture *)&DAT_00000001;
    local_548[0].Resolve = (FRDGTexture *)0x0;
    local_45d = 0x15;
    if ((param_2->SceneTexturesConfig).bPreciseDepthAux != 0) {
      local_45d = 0xd;
    }
    local_490._36_8_ = (param_2->SceneTexturesConfig).Extent.field0_0x0._s_0;
    local_490._0_8_ = local_490._0_8_ | 0x209;
    bVar8 = (param_2->SceneTexturesConfig).bRequireMultiView == 0;
    local_258 = 0;
    local_24c = 1;
    local_244 = 0xff00;
    local_240.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_240.ArrayNum = 0;
    local_240.ArrayMax = 1;
    local_260 = 0;
    local_270 = 1;
    uStack_268 = 0;
    if (bVar8) {
      local_462 = 1;
      local_4c8 = (int)local_490._36_8_;
      iStack_4c4 = SUB84(local_490._36_8_,4);
    }
    else {
      local_462 = *(undefined2 *)
                   &(param_2->SceneTexturesConfig).MobileMultiViewRenderTargetNumLayers;
      local_4d0 = (int)local_490._36_8_;
      iStack_4cc = SUB84(local_490._36_8_,4);
    }
    local_246 = !bVar8;
    local_248 = 1;
    local_490._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_45e = !bVar8;
    local_45f = *(undefined1 *)&(param_2->SceneTexturesConfig).NumSamples;
    local_450 = 0;
    local_448 = 0;
    local_444 = 1;
    local_45c = 0xff00;
    local_464 = 1;
    local_460 = 1;
    local_490._8_8_ = 1;
    local_490._16_8_ = 0;
    local_490._24_4_ = 0;
    local_490._32_4_ = 0;
    local_278 = local_490._0_8_;
    local_25c = local_490._28_4_;
    local_254 = (TIntPoint<int>_u_0_s_0)local_490._36_8_;
    local_24a = local_462;
    local_247 = local_45f;
    local_245 = local_45d;
    TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::operator=
              (local_458,&local_240);
    pFVar17 = CreateTextureMSAA(local_548,param_1,(FRDGTextureDesc *)local_490,L"SceneDepthAuxMS",
                                L"SceneDepthAux",None);
    pFVar14 = pFVar17->Resolve;
    (this_00->DepthAux).Target = pFVar17->Target;
    (this_00->DepthAux).Resolve = pFVar14;
    if (local_240.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_240.AllocatorInstance.SecondaryData);
    }
  }
  if ((param_2->_padding_ & 0x100000000) == 0) goto LAB_1454fc8f4;
  TVar10 = FSceneViewFamily::GetFeatureLevel((FSceneViewFamily *)param_2);
  if (TVar10 == Num) {
    FVar20.Platform = SP_NumPlatforms;
  }
  else {
    FVar20.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar10];
  }
  bVar8 = PlatformSupportsOpenXRMotionVectors(FVar20);
  if (!bVar8) goto LAB_1454fc8f4;
  local_550 = (FRHITexture *)0x0;
  local_558 = (FRHITexture *)0x0;
  pIVar18 = FindStereoRenderTargetManager();
  if (((pIVar18 == (IStereoRenderTargetManager *)0x0) ||
      (cVar9 = (**(code **)((longlong)*pIVar18 + 0x80))(pIVar18,local_4c0), cVar9 == '\0')) ||
     (cVar9 = (**(code **)((longlong)*pIVar18 + 0x88))(pIVar18,0,local_4c0), cVar9 == '\0')) {
    this = local_550;
    if (local_550 != (FRHITexture *)0x0) {
      local_550 = (FRHITexture *)0x0;
      FRHIResource::Release((FRHIResource *)this);
    }
    if (local_558 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_558);
      goto LAB_1454fc8d6;
    }
  }
  else {
    (**(code **)((longlong)*pIVar18 + 0x90))(pIVar18,0,local_4c0);
    pFVar14 = RegisterExternalTexture(param_1,local_550,L"ExternalStereoMotionVectors");
    this_00->StereoMotionVectors = pFVar14;
    if (local_558 != (FRHITexture *)0x0) {
      pFVar14 = RegisterExternalTexture(param_1,local_558,L"ExternalStereoMotionVectorDepth");
      this_00->StereoMotionVectorDepth = pFVar14;
LAB_1454fc8d6:
      if (local_558 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)local_558);
      }
    }
  }
  if (local_550 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_550);
  }
LAB_1454fc8f4:
  bVar8 = MobileMergeLocalLightsInPrepassEnabled
                    ((FStaticShaderPlatform)(param_2->SceneTexturesConfig).ShaderPlatform);
  if (bVar8) {
    local_164 = (param_2->SceneTexturesConfig).Extent.field0_0x0._s_0;
    local_4b8 = local_164.X;
    iStack_4b4 = local_164.Y;
    local_170 = FClearValueBinding::Transparent.Value.Color[3];
    local_16c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_188._0_8_ = 9;
    local_188._8_8_ = FClearValueBinding::Transparent._0_8_;
    local_188._16_8_ = FClearValueBinding::Transparent.Value._4_8_;
    local_168 = 0;
    local_15c = 0x10001;
    local_158 = 0x1a000101;
    local_154 = 0xff00;
    local_148 = (void *)0x0;
    local_140 = 0;
    local_13c = 1;
    pFVar14 = FRDGBuilder::CreateTexture
                        (param_1,(FRDGTextureDesc *)local_188,L"MobileLocalLightTextureA",None);
    this_00->MobileLocalLightTextureA = pFVar14;
    local_228._36_8_ = (param_2->SceneTexturesConfig).Extent.field0_0x0._s_0;
    local_4b0 = (int)local_228._36_8_;
    iStack_4ac = SUB84(local_228._36_8_,4);
    local_228._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_228._0_8_ = 9;
    local_228._8_4_ = 1;
    local_228._12_4_ = 0x3f000000;
    local_228._16_4_ = 0x3f000000;
    local_228._20_8_ = 0x3f000000;
    local_228._32_4_ = 0;
    local_1fc = 0x10001;
    local_1f8 = 0x2000101;
    local_1f4 = 0xff00;
    local_1e8 = (void *)0x0;
    local_1e0 = 0;
    local_1dc = 1;
    pFVar14 = FRDGBuilder::CreateTexture
                        (param_1,(FRDGTextureDesc *)local_228,L"MobileLocalLightTextureB",None);
    this_00->MobileLocalLightTextureB = pFVar14;
    if (local_1e8 != (void *)0x0) {
      FMemory::Free(local_1e8);
    }
    if (local_148 != (void *)0x0) {
      FMemory::Free(local_148);
    }
  }
  uVar12 = 1;
  local_568 = (TIntPoint<int>_u_0)&DAT_100000001;
  EVar11 = FSceneViewFamily::GetDebugViewShaderMode((FSceneViewFamily *)param_2);
  if ((EVar11 - DVSM_ShaderComplexityContainedQuadOverhead & 0xfffffffd) == 0) {
    uVar13 = ((param_2->SceneTexturesConfig).Extent.field0_0x0._s_0.X + 1) / 2;
    if (1 < uVar13) {
      uVar12 = uVar13;
    }
    uVar12 = uVar12 * 2;
    uVar13 = ((param_2->SceneTexturesConfig).Extent.field0_0x0._s_0.Y + 1) / 2;
    local_568._s_0.Y = 1;
    if (1 < uVar13) {
      local_568._s_0.Y = uVar13;
    }
    local_568._s_0.X = uVar12;
  }
  else if (EVar11 == DVSM_ShadowCasters) {
    local_568 = (TIntPoint<int>_u_0)
                *(TIntPoint<int>_u_0 *)&(param_2->SceneTexturesConfig).Extent.field0_0x0._s_0;
    uVar12 = local_568._s_0.X;
  }
  iStack_4a4 = local_568._s_0.Y;
  local_120 = FClearValueBinding::None.Value.Color[3];
  local_11c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_114._4_4_ = iStack_4a4;
  local_114._0_4_ = uVar12;
  local_138._0_8_ = 0x20009;
  local_138._8_8_ = FClearValueBinding::None._0_8_;
  local_138._16_8_ = FClearValueBinding::None.Value._4_8_;
  local_118 = 0;
  local_10c = 0x10001;
  local_108 = 0x1c000101;
  local_104 = 0xff00;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  local_ec = 1;
  local_4a8 = uVar12;
  pFVar14 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_138,L"DebugAuxTexture",None)
  ;
  this_00->DebugAux = pFVar14;
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  if (GVisualizeTexture._97_1_ != '\0') {
    if (((int)param_2->_padding_ < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    plVar4 = (longlong *)param_2->_padding_;
    if (((int)param_2->_padding_ < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*plVar4 == *(longlong *)param_2->_padding_) {
      uVar12 = (uint)param_2->_padding_;
      local_568 = (TIntPoint<int>_u_0)0x0;
      local_560[0] = 0;
      local_560[1] = 0;
      if ((int)uVar12 < 1) {
        if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
        }
      }
      else {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,uVar12,(ForAnyElementType *)&local_568._s_0,local_560,local_560 + 1);
      }
      uVar16 = uVar21;
      uVar22 = uVar21;
      if (0 < (int)param_2->_padding_) {
        do {
          uVar13 = (uint)uVar21;
          uVar12 = 0;
          if ((int)uVar13 < (int)param_2->_padding_) {
            uVar12 = ~uVar13 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar5 = *(longlong *)(param_2->_padding_ + uVar22);
          uVar12 = 0;
          if ((int)uVar13 < local_560[0]) {
            uVar12 = ~uVar13 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar21 = (ulonglong)(uVar13 + 1);
          *(undefined8 *)((longlong)local_568 + uVar16) = *(undefined8 *)(lVar5 + 0x390);
          *(undefined8 *)((longlong)local_568 + uVar16 + 8) = *(undefined8 *)(lVar5 + 0x398);
          uVar16 = uVar16 + 0x10;
          uVar22 = uVar22 + 8;
          this_00 = local_498;
        } while ((int)(uVar13 + 1) < (int)param_2->_padding_);
      }
      pTVar19 = EnumerateSceneTextures(this_00,&local_418);
      FVisualizeTexture::SetSceneTextures
                ((FVisualizeTexture *)&GVisualizeTexture,pTVar19,param_3,
                 (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)&local_568._s_0);
      if (local_418.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_418.AllocatorInstance.Data);
      }
      if (local_568 != (TIntPoint<int>_u_0)0x0) {
        FMemory::Free((void *)local_568);
      }
    }
  }
  return;
}

