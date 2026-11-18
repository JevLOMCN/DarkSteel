// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetValidShaders @ 144779370

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<TShaderRefBase<FShader,FShaderMapPointerTable>,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
FMeshProcessorShaders::GetValidShaders
          (FMeshProcessorShaders *this,
          TArray<TShaderRefBase<FShader,FShaderMapPointerTable>,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  undefined8 *puVar1;
  ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> FVar2;
  code *pcVar3;
  FShaderMapBase *pFVar4;
  bool bVar5;
  int iVar6;
  TArray<TShaderRefBase<FShader,FShaderMapPointerTable>,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
  ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> FVar8;
  TShaderRefBase<FShader,FShaderMapPointerTable> *pTVar9;
  
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 3;
  if ((this->VertexShader).ShaderContent != (FShader *)0x0) {
    if (((__return_storage_ptr__ <= this) &&
        (this < &(__return_storage_ptr__->AllocatorInstance).SecondaryData)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<TShaderRefBase<FShader,FShaderMapPointerTable>,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar3)();
      return pTVar7;
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>_>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    pFVar4 = (this->VertexShader).ShaderMap;
    FVar8 = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)__return_storage_ptr__;
    if (FVar2 != (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
      FVar8 = FVar2;
    }
    puVar1 = (undefined8 *)((longlong)FVar8 + (longlong)iVar6 * 0x10);
    *puVar1 = (this->VertexShader).ShaderContent;
    puVar1[1] = pFVar4;
  }
  pTVar9 = &this->PixelShader;
  if ((this->PixelShader).ShaderContent != (FShader *)0x0) {
    FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    FVar8 = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)__return_storage_ptr__;
    if (FVar2 != (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
      FVar8 = FVar2;
    }
    if ((ulonglong)FVar8 <= pTVar9) {
      FVar8 = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)
              __return_storage_ptr__;
      if (FVar2 != (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
        FVar8 = FVar2;
      }
      if ((pTVar9 < (undefined1 *)
                    ((longlong)__return_storage_ptr__->ArrayMax * 0x10 + (longlong)FVar8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TShaderRefBase<FShader,FShaderMapPointerTable>,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar3)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>_>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    pFVar4 = (this->PixelShader).ShaderMap;
    FVar8 = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)__return_storage_ptr__;
    if (FVar2 != (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
      FVar8 = FVar2;
    }
    puVar1 = (undefined8 *)((longlong)FVar8 + (longlong)iVar6 * 0x10);
    *puVar1 = pTVar9->ShaderContent;
    puVar1[1] = pFVar4;
  }
  pTVar9 = &this->GeometryShader;
  if ((this->GeometryShader).ShaderContent != (FShader *)0x0) {
    FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    FVar8 = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)__return_storage_ptr__;
    if (FVar2 != (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
      FVar8 = FVar2;
    }
    if ((ulonglong)FVar8 <= pTVar9) {
      FVar8 = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)
              __return_storage_ptr__;
      if (FVar2 != (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
        FVar8 = FVar2;
      }
      if ((pTVar9 < (undefined1 *)
                    ((longlong)__return_storage_ptr__->ArrayMax * 0x10 + (longlong)FVar8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TShaderRefBase<FShader,FShaderMapPointerTable>,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar3)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>_>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    pFVar4 = (this->GeometryShader).ShaderMap;
    FVar8 = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)__return_storage_ptr__;
    if (FVar2 != (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
      FVar8 = FVar2;
    }
    puVar1 = (undefined8 *)((longlong)FVar8 + (longlong)iVar6 * 0x10);
    *puVar1 = pTVar9->ShaderContent;
    puVar1[1] = pFVar4;
  }
  pTVar9 = &this->ComputeShader;
  if ((this->ComputeShader).ShaderContent != (FShader *)0x0) {
    FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    FVar8 = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)__return_storage_ptr__;
    if (FVar2 != (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
      FVar8 = FVar2;
    }
    if ((ulonglong)FVar8 <= pTVar9) {
      FVar8 = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)
              __return_storage_ptr__;
      if (FVar2 != (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
        FVar8 = FVar2;
      }
      if ((pTVar9 < (undefined1 *)
                    ((longlong)__return_storage_ptr__->ArrayMax * 0x10 + (longlong)FVar8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TShaderRefBase<FShader,FShaderMapPointerTable>,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar3)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>_>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    pFVar4 = (this->ComputeShader).ShaderMap;
    FVar8 = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)__return_storage_ptr__;
    if (FVar2 != (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
      FVar8 = FVar2;
    }
    puVar1 = (undefined8 *)((longlong)FVar8 + (longlong)iVar6 * 0x10);
    *puVar1 = pTVar9->ShaderContent;
    puVar1[1] = pFVar4;
  }
  pTVar9 = &this->RayTracingShader;
  if (pTVar9->ShaderContent != (FShader *)0x0) {
    FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    FVar8 = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)__return_storage_ptr__;
    if (FVar2 != (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
      FVar8 = FVar2;
    }
    if ((ulonglong)FVar8 <= pTVar9) {
      FVar8 = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)
              __return_storage_ptr__;
      if (FVar2 != (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
        FVar8 = FVar2;
      }
      if ((pTVar9 < (undefined1 *)
                    ((longlong)__return_storage_ptr__->ArrayMax * 0x10 + (longlong)FVar8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TShaderRefBase<FShader,FShaderMapPointerTable>,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar3)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>_>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    pFVar4 = (this->RayTracingShader).ShaderMap;
    FVar8 = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)__return_storage_ptr__;
    if (FVar2 != (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
      FVar8 = FVar2;
    }
    puVar1 = (undefined8 *)((longlong)FVar8 + (longlong)iVar6 * 0x10);
    *puVar1 = pTVar9->ShaderContent;
    puVar1[1] = pFVar4;
  }
  return __return_storage_ptr__;
}

