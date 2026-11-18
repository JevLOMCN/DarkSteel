// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// InitVertexFactories @ 148657db0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectGPUSkin::FVertexFactoryData::InitVertexFactories
          (FVertexFactoryData *this,FRHICommandList *param_1,FVertexFactoryBuffers *param_2,
          TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *param_3,Type param_4,
          EVertexAttributeFlags param_5,ESkeletalMeshGPUSkinTechnique param_6)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  FGPUSkinPassthroughVertexFactory *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  Type TVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  EShaderPlatform EVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  EVertexAttributeFlags EVar14;
  TUniquePtr<FGPUSkinPassthroughVertexFactory,TDefaultDelete<FGPUSkinPassthroughVertexFactory>_>
  *pTVar15;
  uint uVar16;
  TUniquePtr<FGPUSkinPassthroughVertexFactory,TDefaultDelete<FGPUSkinPassthroughVertexFactory>_>
  *pTVar17;
  uint uVar18;
  undefined8 local_60;
  FScriptContainerElement *local_58;
  
  TVar7 = param_4;
  if (param_4 == Num) {
    EVar11 = SP_NumPlatforms;
  }
  else {
    EVar11 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_4];
  }
  bVar8 = FGPUBaseSkinAPEXClothVertexFactory::IsClothEnabled(EVar11);
  param_6 = param_6 != Inline;
  uVar2 = param_3->ArrayNum;
  pTVar15 = (TUniquePtr<FGPUSkinPassthroughVertexFactory,TDefaultDelete<FGPUSkinPassthroughVertexFactory>_>
             *)0x0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  DestructItems<TUniquePtr<FGPUBaseSkinVertexFactory,TDefaultDelete<FGPUBaseSkinVertexFactory>_>,int>
            ((TUniquePtr<FGPUBaseSkinVertexFactory,TDefaultDelete<FGPUBaseSkinVertexFactory>_> *)
             (this->VertexFactories).AllocatorInstance.Data,(this->VertexFactories).ArrayNum);
  piVar1 = &(this->VertexFactories).ArrayMax;
  (this->VertexFactories).ArrayNum = 0;
  if (*piVar1 != uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,(ForAnyElementType *)this,0,piVar1);
  }
  EVar14 = param_5;
  pTVar17 = pTVar15;
  if (param_5 != None) {
    pFVar4 = (this->PassthroughVertexFactory).Ptr;
    pTVar17 = &this->PassthroughVertexFactory;
    pTVar17->Ptr = (FGPUSkinPassthroughVertexFactory *)0x0;
    if (pFVar4 != (FGPUSkinPassthroughVertexFactory *)0x0) {
      (**(code **)pFVar4->_padding_)();
    }
  }
  uVar2 = param_3->ArrayNum;
  uVar12 = (ulonglong)(int)uVar2;
  pFVar13 = (param_3->AllocatorInstance).Data;
  local_58 = pFVar13 + uVar12 * 0x118;
  do {
    if (param_3->ArrayNum != (int)uVar12) {
      param_4 = param_4 & 0xffffff00;
      `TCheckedPointerIterator<FSkelMeshRenderSection_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&param_4);
    }
    if (pFVar13 == local_58) {
      return;
    }
    uVar18 = (uint)pTVar15;
    if ((*(int *)(pFVar13 + 8) == 0) || (pFVar13[0x110] != (FScriptContainerElement)0x0)) {
      pFVar5 = (this->VertexFactories).AllocatorInstance.Data;
      local_60 = 0;
      if ((pFVar5 <= (FScriptContainerElement *)&local_60) &&
         ((FScriptContainerElement *)&local_60 < pFVar5 + (longlong)*piVar1 * 8)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar10 = (this->VertexFactories).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->VertexFactories).ArrayNum = iVar10 + 1;
      *(undefined8 *)((this->VertexFactories).AllocatorInstance.Data + (longlong)iVar10 * 8) =
           local_60;
      local_60 = 0;
    }
    else {
      if (*(int *)(pFVar13 + 0x30) != 0) {
        if (*(int *)(pFVar13 + 0x30) < 1) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if ((*(int *)(*(longlong *)(pFVar13 + 0x28) + 8) != 0) && (bVar8)) {
          if (*(int *)(pFVar13 + 0x30) == 0) {
            uVar16 = 0;
          }
          else {
            if (*(int *)(pFVar13 + 0x30) < 1) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            uVar16 = *(uint *)(*(longlong *)(pFVar13 + 0x28) + 8);
          }
          uVar3 = *(uint *)(pFVar13 + 0x48);
          if (uVar16 % uVar3 != 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumClothWeights % NumPositionVertices == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                               ,0x978,L"");
            if (bVar9) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          EVar14 = param_5;
          CreateVertexFactoryCloth
                    (param_1,&this->VertexFactories,pTVar17,param_2,TVar7,param_5,
                     *(uint *)(pFVar13 + 0x40),uVar18,*(uint *)(pFVar13 + 0x10),uVar16 / uVar3,
                     (bool)param_6);
          goto LAB_148658116;
        }
      }
      CreateVertexFactory(param_1,&this->VertexFactories,pTVar17,param_2,TVar7,EVar14,
                          *(uint *)(pFVar13 + 0x40),uVar18,*(uint *)(pFVar13 + 0x10),(bool)param_6);
    }
LAB_148658116:
    pTVar15 = (TUniquePtr<FGPUSkinPassthroughVertexFactory,TDefaultDelete<FGPUSkinPassthroughVertexFactory>_>
               *)(ulonglong)(uVar18 + *(int *)(pFVar13 + 0x40));
    pFVar13 = pFVar13 + 0x118;
    uVar12 = (ulonglong)uVar2;
  } while( true );
}

// ReleaseVertexFactories @ 1486601a0

void __thiscall
FSkeletalMeshObjectGPUSkin::FVertexFactoryData::ReleaseVertexFactories(FVertexFactoryData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FGPUSkinPassthroughVertexFactory *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->VertexFactories).AllocatorInstance.Data;
  iVar2 = (this->VertexFactories).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->VertexFactories).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGPUBaseSkinVertexFactory,TDefaultDelete<FGPUBaseSkinVertexFactory>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(longlong **)pFVar4 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar4 + 0x20))();
    }
    pFVar4 = pFVar4 + 8;
  }
  pFVar3 = (this->PassthroughVertexFactory).Ptr;
  if (pFVar3 != (FGPUSkinPassthroughVertexFactory *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x20))();
  }
  return;
}

// UpdateVertexFactoryData @ 148673cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSkeletalMeshObjectGPUSkin::FVertexFactoryData::UpdateVertexFactoryData
          (FVertexFactoryData *this,FVertexFactoryBuffers *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code **ppcVar3;
  FScriptContainerElement *pFVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  FStaticMeshVertexBuffers *pFStack_a0;
  FSkinWeightVertexBuffer *pFStack_98;
  FColorVertexBuffer *pFStack_90;
  FMorphVertexBufferPool *pFStack_88;
  FSkeletalMeshVertexClothBuffer *local_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar4 = (this->VertexFactories).AllocatorInstance.Data;
  iVar2 = (this->VertexFactories).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->VertexFactories).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FGPUBaseSkinVertexFactory,TDefaultDelete<FGPUBaseSkinVertexFactory>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(code **)pFVar4 != (code *)0x0) {
      pFStack_a0 = param_1->StaticVertexBuffers;
      pFStack_98 = param_1->SkinWeightVertexBuffer;
      pFStack_90 = param_1->ColorVertexBuffer;
      pFStack_88 = param_1->MorphVertexBufferPool;
      local_68[0] = (code *)0x0;
      local_80 = param_1->APEXClothVertexBuffer;
      uStack_78 = param_1->VertexOffsetVertexBuffers;
      local_40 = (code **)0x0;
      local_b0 = *(undefined8 *)&param_1->NumVertices;
      local_a8 = *(code **)pFVar4;
      local_40 = FMemory::Malloc(0x48,8);
      local_40[1] = local_a8;
      local_40[2] = (code *)pFStack_a0;
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`UpdateVertexFactory'::`9'::<lambda_1>,1,1>::
                           _vftable_;
      local_40[3] = (code *)pFStack_98;
      local_40[4] = (code *)pFStack_90;
      local_40[5] = (code *)pFStack_88;
      local_40[6] = (code *)local_80;
      uStack_70 = (undefined4)local_b0;
      uStack_6c = (undefined4)((ulonglong)local_b0 >> 0x20);
      *(undefined4 *)(local_40 + 7) = (undefined4)uStack_78;
      *(undefined4 *)((longlong)local_40 + 0x3c) = uStack_78._4_4_;
      *(undefined4 *)(local_40 + 8) = uStack_70;
      *(undefined4 *)((longlong)local_40 + 0x44) = uStack_6c;
      if (local_40 + 1 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UpdateVertexFactory'::__l9::<lambda_1>,void,FRHICommandList_&>
                      ::Call;
      }
      FRenderCommandDispatcher::
      Enqueue<TRenderCommandTag<_UpdateVertexFactory_::__l9::TSTR_UpdateGPUSkinVertexFactory2210>_>
                (&UE::RenderCommandPipe::SkeletalMesh,
                 (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_68);
      if (local_68[0] != (code *)0x0) {
        ppcVar3 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar3 = local_40;
        }
        (**(code **)(*ppcVar3 + 0x10))();
      }
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

