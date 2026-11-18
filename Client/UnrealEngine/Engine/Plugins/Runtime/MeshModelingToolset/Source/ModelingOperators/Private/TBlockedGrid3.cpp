// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 3

// ~TBlockedGrid3<bool,8> @ 14c948d50

void __thiscall
UE::Geometry::TBlockedGrid3<bool,8>::~TBlockedGrid3<bool,8>(TBlockedGrid3<bool,8> *this)

{
  DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<bool,8>::FBlock3,int>
            (*(FBlock3 **)&this->field_0x20,*(int *)&this->field_0x28);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
    return;
  }
  return;
}

// GetAllocatedBlocks @ 14c97e490

TArray<UE::Geometry::TBlockData3<float,8>_*,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::TBlockedGrid3<float,8>::GetAllocatedBlocks
          (TBlockedGrid3<float,8> *this,
          TArray<UE::Geometry::TBlockData3<float,8>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TArray<UE::Geometry::TBlockData3<float,8>_*,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_28 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  uVar7 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar4 = *(int *)&this->field_0x8 * *(int *)&this->field_0x4 * *(int *)this;
  lVar9 = (longlong)iVar4;
  if (0 < iVar4) {
    lVar8 = 0;
    do {
      if (*(longlong *)(lVar8 + *(longlong *)&this->field_0x20) != 0) {
        uVar5 = 0;
        if ((int)uVar7 < *(int *)&this->field_0x28) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TArray<UE::Geometry::TBlockData3<float,8>_*,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar6;
        }
        local_28[0] = *(undefined8 *)(lVar8 + *(longlong *)&this->field_0x20);
        pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 <
             pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TArray<UE::Geometry::TBlockData3<float,8>_*,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar6;
        }
        iVar4 = __return_storage_ptr__->ArrayNum;
        if (iVar4 == __return_storage_ptr__->ArrayMax) {
          iVar4 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar4 + 1;
        *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) =
             local_28[0];
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return __return_storage_ptr__;
}

// GetAllocatedBlocks @ 14c97e620

TArray<UE::Geometry::TBlockData3<bool,8>_*,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::TBlockedGrid3<bool,8>::GetAllocatedBlocks
          (TBlockedGrid3<bool,8> *this,
          TArray<UE::Geometry::TBlockData3<bool,8>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TArray<UE::Geometry::TBlockData3<bool,8>_*,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_28 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  uVar7 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar4 = *(int *)&this->field_0x8 * *(int *)&this->field_0x4 * *(int *)this;
  lVar9 = (longlong)iVar4;
  if (0 < iVar4) {
    lVar8 = 0;
    do {
      if (*(longlong *)(lVar8 + *(longlong *)&this->field_0x20) != 0) {
        uVar5 = 0;
        if ((int)uVar7 < *(int *)&this->field_0x28) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TArray<UE::Geometry::TBlockData3<bool,8>_*,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar6;
        }
        local_28[0] = *(undefined8 *)(lVar8 + *(longlong *)&this->field_0x20);
        pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 <
             pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TArray<UE::Geometry::TBlockData3<bool,8>_*,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar6;
        }
        iVar4 = __return_storage_ptr__->ArrayNum;
        if (iVar4 == __return_storage_ptr__->ArrayMax) {
          iVar4 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar4 + 1;
        *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) =
             local_28[0];
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return __return_storage_ptr__;
}

