// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetShaders @ 147f7c160

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

TArray<TShaderRefBase<FShader,FShaderMapPointerTable>,TSizedDefaultAllocator<32>_> * __thiscall
FShaderPipeline::GetShaders
          (FShaderPipeline *this,
          TArray<TShaderRefBase<FShader,FShaderMapPointerTable>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FShaderMapBase *param_1)

{
  TMemoryImagePtr<FShader>_u_0 *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<TShaderRefBase<FShader,FShaderMapPointerTable>,TSizedDefaultAllocator<32>_> *pTVar5;
  TMemoryImagePtr<FShader>_u_0 TVar6;
  uint uVar7;
  ulonglong uVar8;
  TMemoryImagePtr<FShader>_u_0 *pTVar9;
  TMemoryImagePtr<FShader>_u_0 local_38;
  FShader *pFStack_30;
  
  uVar8 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar9 = (TMemoryImagePtr<FShader>_u_0 *)this;
  do {
    pTVar9 = pTVar9 + 1;
    TVar6 = (TMemoryImagePtr<FShader>_u_0)pTVar9->Packed;
    if (TVar6 != 0) {
      if ((((ulonglong)TVar6 & 1) != 0) &&
         (TVar6.UnfrozenPtr =
               (FShader *)((longlong)&this->Shaders[uVar8].field0_0x0 + ((longlong)TVar6 >> 0x18)),
         TVar6.Packed == 0)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                           ,0x197,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<TShaderRefBase<FShader,FShaderMapPointerTable>,TSizedDefaultAllocator<32>_>
                    *)(*pcVar2)();
          return pTVar5;
        }
      }
      pTVar1 = (TMemoryImagePtr<FShader>_u_0 *)(__return_storage_ptr__->AllocatorInstance).Data;
      local_38 = TVar6;
      pFStack_30 = (FShader *)param_1;
      if ((pTVar1 <= &local_38) &&
         (&local_38 < pTVar1 + (longlong)__return_storage_ptr__->ArrayMax * 2)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<TShaderRefBase<FShader,FShaderMapPointerTable>,TSizedDefaultAllocator<32>_>
                    *)(*pcVar2)();
          return pTVar5;
        }
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      pTVar1 = (TMemoryImagePtr<FShader>_u_0 *)
               ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10);
      pTVar1->Packed = (ulong64)local_38;
      pTVar1[1].UnfrozenPtr = pFStack_30;
    }
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
  } while (uVar7 < 5);
  return __return_storage_ptr__;
}

