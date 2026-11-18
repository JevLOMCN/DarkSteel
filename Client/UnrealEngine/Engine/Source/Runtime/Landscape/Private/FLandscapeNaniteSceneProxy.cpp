// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// FLandscapeNaniteSceneProxy @ 145f7a110

FLandscapeNaniteSceneProxy * __thiscall
FLandscapeNaniteSceneProxy::FLandscapeNaniteSceneProxy
          (FLandscapeNaniteSceneProxy *this,FMaterialAudit *param_1,
          ULandscapeNaniteComponent *param_2)

{
  int *piVar1;
  TArray<FPrimitiveComponentId,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  UObject *pUVar7;
  ForElementType<FPrimitiveComponentId> FVar8;
  code *pcVar9;
  TConsoleVariableData<int> *pTVar10;
  bool bVar11;
  int iVar12;
  ForElementType<FPrimitiveComponentId> FVar13;
  FLandscapeNaniteSceneProxy *pFVar14;
  longlong lVar15;
  undefined1 *puVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  TSharedPtr<FInstanceDataSceneProxy,1> local_48;
  
  local_48.Object = (FInstanceDataSceneProxy *)0x0;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  Nanite::FSceneProxy::FSceneProxy
            ((FSceneProxy *)this,param_1,(UStaticMeshComponent *)param_2,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  lVar15 = 0;
  *(undefined ***)this = &___7FLandscapeNaniteSceneProxy__6B_;
  piVar1 = &(this->SourceComponentIds).ArrayMax;
  (this->SourceComponentIds).AllocatorInstance.SecondaryData =
       (ForElementType<FPrimitiveComponentId>)0x0;
  (this->SourceComponentIds).ArrayNum = 0;
  *piVar1 = 1;
  bVar4 = this->field_0x83;
  this->field_0x83 = bVar4 | 0x18;
  if (GDisableLandscapeNaniteGI != 0) {
    this->field_0x7c = this->field_0x7c & 0xfb;
    this->field_0x7d = this->field_0x7d & 0xd7;
    this->field_0x83 = bVar4 & 0xfe | 0x18;
    pTVar10 = CVarLumenSceneSurfaceCacheCaptureNaniteLandscape.Ref;
    bVar11 = IsInParallelGameThread();
    if ((!bVar11) && (bVar11 = IsInGameThread(), !bVar11)) {
      lVar15 = 4;
    }
    if (*(int *)((longlong)pTVar10->ShadowedValue + lVar15) != 0) {
      uVar5 = (param_2->SourceLandscapeComponents).ArrayNum;
      pTVar2 = &this->SourceComponentIds;
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      if ((this->SourceComponentIds).ArrayMax < (int)uVar5) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveComponentId>_>
                  (4,4,uVar5,&pTVar2->AllocatorInstance,(this->SourceComponentIds).ArrayNum,piVar1);
      }
      pFVar18 = (param_2->SourceLandscapeComponents).AllocatorInstance.Data;
      iVar6 = (param_2->SourceLandscapeComponents).ArrayNum;
      pFVar3 = pFVar18 + (longlong)iVar6 * 8;
      while( true ) {
        if ((param_2->SourceLandscapeComponents).ArrayNum != iVar6) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<ULandscapeComponent>_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res8);
        }
        if (pFVar18 == pFVar3) break;
        pUVar7 = *(UObject **)pFVar18;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_145f7a260;
        }
        else if (pUVar7 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar7);
LAB_145f7a260:
          FVar8 = (this->SourceComponentIds).AllocatorInstance.SecondaryData;
          puVar16 = &pUVar7[0x14].field_0x24;
          FVar13 = (ForElementType<FPrimitiveComponentId>)pTVar2;
          if (FVar8 != (ForElementType<FPrimitiveComponentId>)0x0) {
            FVar13 = FVar8;
          }
          if ((ulonglong)FVar13 <= puVar16) {
            FVar13 = (ForElementType<FPrimitiveComponentId>)pTVar2;
            if (FVar8 != (ForElementType<FPrimitiveComponentId>)0x0) {
              FVar13 = FVar8;
            }
            if ((puVar16 < (undefined1 *)
                           ((longlong)FVar13 + (longlong)(this->SourceComponentIds).ArrayMax * 4))
               && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar11)) {
              pcVar9 = (code *)swi(3);
              pFVar14 = (FLandscapeNaniteSceneProxy *)(*pcVar9)();
              return pFVar14;
            }
          }
          iVar12 = (this->SourceComponentIds).ArrayNum;
          if (iVar12 == (this->SourceComponentIds).ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveComponentId>_>
                               (0x404,&pTVar2->AllocatorInstance,
                                &(this->SourceComponentIds).ArrayMax);
          }
          (this->SourceComponentIds).ArrayNum = iVar12 + 1;
          FVar8 = (this->SourceComponentIds).AllocatorInstance.SecondaryData;
          FVar13 = (ForElementType<FPrimitiveComponentId>)pTVar2;
          if (FVar8 != (ForElementType<FPrimitiveComponentId>)0x0) {
            FVar13 = FVar8;
          }
          *(undefined4 *)((longlong)FVar13 + (longlong)iVar12 * 4) = *(undefined4 *)puVar16;
        }
        pFVar18 = pFVar18 + 8;
      }
    }
  }
  iVar6 = *(int *)&this->field_0x288;
  bVar11 = false;
  lVar15 = *(longlong *)&this->field_0x280;
  lVar17 = (longlong)iVar6 * 0x50 + lVar15;
  do {
    while( true ) {
      if (*(int *)&this->field_0x288 != iVar6) {
        `TCheckedPointerIterator<Nanite::FSceneProxyBase::FMaterialSection,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res20);
      }
      if (lVar15 == lVar17) {
        if (bVar11) {
          Nanite::FSceneProxyBase::OnMaterialsUpdated((FSceneProxyBase *)this,true);
        }
        if ((GLandscapeAllowNanitePerClusterDisplacementDisable != 0) &&
           (0.0 < *(float *)&this->field_0x29c)) {
          this->field_0x2a1 = this->field_0x2a1 | 0x20;
        }
        this->field_0x2a0 = 0x10;
        return this;
      }
      bVar4 = *(byte *)(lVar15 + 0x2c);
      *(byte *)(lVar15 + 0x2c) = bVar4 & 0xf7;
      if ((*(byte *)(lVar15 + 0x2e) & 1) == 0) break;
      *(byte *)(lVar15 + 0x2c) = ((bVar4 >> 3) << 3 ^ bVar4) & 8 ^ bVar4;
LAB_145f7a3a6:
      lVar15 = lVar15 + 0x50;
    }
    if ((bVar4 >> 3 & 1) == 0) goto LAB_145f7a3a6;
    bVar11 = true;
    lVar15 = lVar15 + 0x50;
  } while( true );
}

// GetSourceLandscapeComponentIds @ 145f944c0

TArrayView<FPrimitiveComponentId_const_,int> * __thiscall
FLandscapeNaniteSceneProxy::GetSourceLandscapeComponentIds
          (FLandscapeNaniteSceneProxy *this,
          TArrayView<FPrimitiveComponentId_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<FPrimitiveComponentId> FVar4;
  TArrayView<FPrimitiveComponentId_const_,int> *pTVar5;
  
  FVar4 = (this->SourceComponentIds).AllocatorInstance.SecondaryData;
  iVar1 = (this->SourceComponentIds).ArrayNum;
  if (FVar4 == (ForElementType<FPrimitiveComponentId>)0x0) {
    FVar4 = (ForElementType<FPrimitiveComponentId>)&this->SourceComponentIds;
  }
  __return_storage_ptr__->DataPtr = (FPrimitiveComponentId *)FVar4;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<FPrimitiveComponentId_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

