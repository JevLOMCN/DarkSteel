// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// CreateExtensions @ 14549bb30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSparseArray<ISceneExtension_*,FDefaultSparseArrayAllocator> * __thiscall
FSceneExtensionRegistry::CreateExtensions
          (FSceneExtensionRegistry *this,
          TSparseArray<ISceneExtension_*,FDefaultSparseArrayAllocator> *__return_storage_ptr__,
          FScene *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  TSparseArray<ISceneExtension_*,FDefaultSparseArrayAllocator> *pTVar7;
  FSparseArrayAllocationInfo *pFVar8;
  longlong *plVar9;
  uint uVar10;
  undefined1 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  FSparseArrayAllocationInfo local_48;
  
  uVar10 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  TSparseArray<ISceneExtension_*,FDefaultSparseArrayAllocator>::Empty
            (__return_storage_ptr__,(this->Factories).ArrayNum);
  pFVar12 = (this->Factories).AllocatorInstance.Data;
  iVar2 = (this->Factories).ArrayNum;
  pFVar1 = pFVar12 + (longlong)iVar2 * 8;
  do {
    if ((this->Factories).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<ISceneExtensionFactory_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar12 == pFVar1) {
      return __return_storage_ptr__;
    }
    lVar6 = (**(code **)(**(longlong **)pFVar12 + 8))(*(longlong **)pFVar12,param_1);
    if (lVar6 != 0) {
      if (((int)uVar10 < 0) || (*(int *)&__return_storage_ptr__->field_0x28 <= (int)uVar10)) {
LAB_14549bc3b:
        pFVar8 = TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                           ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)
                            __return_storage_ptr__,&local_48,uVar10);
        plVar9 = pFVar8->Pointer;
      }
      else {
        if (*(int *)&__return_storage_ptr__->field_0x28 <= (int)uVar10) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TSparseArray<ISceneExtension_*,FDefaultSparseArrayAllocator> *)(*pcVar3)();
            return pTVar7;
          }
        }
        puVar11 = &__return_storage_ptr__->field_0x10;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x20 != (undefined1 *)0x0) {
          puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
        }
        uVar5 = uVar10;
        if ((int)uVar10 < 0) {
          uVar5 = uVar10 + 0x1f;
        }
        if ((*(uint *)(puVar11 + (longlong)((int)uVar5 >> 5) * 4) >> (uVar10 & 0x1f) & 1) == 0)
        goto LAB_14549bc3b;
        plVar9 = (longlong *)(*(longlong *)__return_storage_ptr__ + (longlong)(int)uVar10 * 8);
      }
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = lVar6;
      }
    }
    uVar10 = uVar10 + 1;
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// InitRegistry @ 1454ab710

void __cdecl FSceneExtensionRegistry::InitRegistry(void)

{
  if (GlobalRegistry == (FSceneExtensionRegistry *)0x0) {
    GlobalRegistry = ::operator_new(0x10);
    if (GlobalRegistry != (FSceneExtensionRegistry *)0x0) {
      (GlobalRegistry->Factories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (GlobalRegistry->Factories).ArrayNum = 0;
      (GlobalRegistry->Factories).ArrayMax = 0;
      return;
    }
    GlobalRegistry = (FSceneExtensionRegistry *)0x0;
  }
  return;
}

// Register @ 1454b47b0

void __thiscall
FSceneExtensionRegistry::Register(FSceneExtensionRegistry *this,ISceneExtensionFactory *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ISceneExtensionFactory *local_18 [2];
  
  param_1->ExtensionID = (this->Factories).ArrayNum;
  pFVar2 = (this->Factories).AllocatorInstance.Data;
  local_18[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Factories).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Factories).ArrayNum;
  piVar1 = &(this->Factories).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->Factories).ArrayNum = iVar5 + 1;
  *(ISceneExtensionFactory **)((this->Factories).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_18[0];
  return;
}

