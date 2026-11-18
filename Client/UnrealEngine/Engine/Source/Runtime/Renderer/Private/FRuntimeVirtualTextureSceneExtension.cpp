// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// FRuntimeVirtualTextureSceneExtension @ 1458cc0b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRuntimeVirtualTextureSceneExtension * __thiscall
FRuntimeVirtualTextureSceneExtension::FRuntimeVirtualTextureSceneExtension
          (FRuntimeVirtualTextureSceneExtension *this,FScene *param_1)

{
  FRuntimeVirtualTextureSceneExtensionData *pFVar1;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FRuntimeVirtualTextureSceneExtension__6B_;
  pFVar1 = ::operator_new(0x50);
  if (pFVar1 != (FRuntimeVirtualTextureSceneExtensionData *)0x0) {
    *(undefined8 *)&pFVar1->RuntimeVirtualTextureMap = 0;
    *(undefined8 *)&(pFVar1->RuntimeVirtualTextureMap).field_0x8 = 0;
    *(undefined8 *)&(pFVar1->RuntimeVirtualTextureMap).field_0x20 = 0;
    *(undefined4 *)&(pFVar1->RuntimeVirtualTextureMap).field_0x28 = 0;
    *(undefined4 *)&(pFVar1->RuntimeVirtualTextureMap).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar1->RuntimeVirtualTextureMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar1->RuntimeVirtualTextureMap).field_0x34 = 0;
    *(undefined8 *)&(pFVar1->RuntimeVirtualTextureMap).field_0x40 = 0;
    *(undefined4 *)&(pFVar1->RuntimeVirtualTextureMap).field_0x48 = 0;
    (this->Data).Ptr = pFVar1;
    return this;
  }
  (this->Data).Ptr = (FRuntimeVirtualTextureSceneExtensionData *)0x0;
  return this;
}

// CreateUpdater @ 1458e8820

ISceneExtensionUpdater * __thiscall
FRuntimeVirtualTextureSceneExtension::CreateUpdater(FRuntimeVirtualTextureSceneExtension *this)

{
  ISceneExtensionUpdater IVar1;
  ISceneExtensionUpdater *pIVar2;
  
  pIVar2 = ::operator_new(0x10);
  if (pIVar2 != (ISceneExtensionUpdater *)0x0) {
    IVar1 = (ISceneExtensionUpdater)(this->Data).Ptr;
    *pIVar2 = (ISceneExtensionUpdater)&___7FRuntimeVirtualTextureSceneExtensionUpdater__6B_;
    pIVar2[1] = IVar1;
    return pIVar2;
  }
  return (ISceneExtensionUpdater *)0x0;
}

// GetPrimitivesForRuntimeVirtualTexture @ 145902640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRuntimeVirtualTextureSceneExtension::GetPrimitivesForRuntimeVirtualTexture
          (FRuntimeVirtualTextureSceneExtension *this,FScene *param_1,int param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  uint uVar1;
  FRuntimeVirtualTextureSceneExtensionData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  undefined1 *puVar9;
  undefined4 local_18 [4];
  
  pFVar2 = (this->Data).Ptr;
  if (*(int *)&(pFVar2->RuntimeVirtualTextureMap).field_0x8 !=
      *(int *)&(pFVar2->RuntimeVirtualTextureMap).field_0x34) {
    puVar9 = *(undefined1 **)&(pFVar2->RuntimeVirtualTextureMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(pFVar2->RuntimeVirtualTextureMap).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(pFVar2->RuntimeVirtualTextureMap).field_0x48 - 1U & param_2
                              ) * 4);
    if (iVar6 != -1) {
      while (piVar8 = (int *)((longlong)iVar6 * 0x38 +
                             *(longlong *)&pFVar2->RuntimeVirtualTextureMap), *piVar8 != param_2) {
        iVar6 = piVar8[0xc];
        if (iVar6 == -1) {
          return;
        }
      }
      this_00 = (TBitArray<FDefaultBitArrayAllocator> *)(piVar8 + 2);
      if (piVar8 == (int *)0x0) {
        this_00 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
      }
      if (this_00 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        uVar1 = *(uint *)this_00[1].AllocatorInstance.InlineData;
        if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
        }
        piVar8 = &param_3->ArrayMax;
        if (*piVar8 < (int)uVar1) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar1,&param_3->AllocatorInstance,param_3->ArrayNum,piVar8);
        }
        for (iVar6 = TBitArray<FDefaultBitArrayAllocator>::FindFromImpl
                               (this_00,true,0,this_00->NumBits); iVar6 != -1;
            iVar6 = TBitArray<FDefaultBitArrayAllocator>::FindFromImpl
                              (this_00,true,iVar6 + 1,this_00->NumBits)) {
          if (iVar6 < (param_1->PersistentPrimitiveIdToIndexMap).ArrayNum) {
            if ((iVar6 < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_18[0] = *(undefined4 *)
                           ((param_1->PersistentPrimitiveIdToIndexMap).AllocatorInstance.Data +
                           (longlong)iVar6 * 4);
          }
          else {
            local_18[0] = 0xffffffff;
          }
          pFVar3 = (param_3->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
              ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)*piVar8 * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = param_3->ArrayNum;
          if (iVar7 == *piVar8) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_3->AllocatorInstance,piVar8);
            param_3->ArrayNum = iVar7;
          }
          param_3->ArrayNum = iVar7 + 1;
          *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_18[0];
        }
      }
    }
  }
  return;
}

// ShouldCreateExtension @ 14591d480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FRuntimeVirtualTextureSceneExtension::ShouldCreateExtension(FScene *param_1)

{
  bool bVar1;
  FStaticShaderPlatform FVar2;
  
  FVar2.Platform = FSceneInterface::GetShaderPlatform((FSceneInterface *)param_1);
  bVar1 = UseVirtualTexturing(FVar2);
  return bVar1;
}

