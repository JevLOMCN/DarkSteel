// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FRayTracingLODInfo @ 148777a20

FRayTracingLODInfo * __thiscall
FStaticMeshSceneProxy::FRayTracingLODInfo::FRayTracingLODInfo
          (FRayTracingLODInfo *this,FStaticMeshSceneProxyDesc *param_1,int param_2)

{
  int *piVar1;
  FStaticMeshRayTracingProxy *pFVar2;
  longlong lVar3;
  ForElementType<FStaticMeshSceneProxy::FRayTracingLODInfo::FSectionInfo> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FRayTracingLODInfo *pFVar8;
  FStaticMeshRenderData *pFVar9;
  TObjectPtr<UMaterialInterface>_u_0 *pTVar10;
  TObjectPtr<UMaterialInterface> *pTVar11;
  TObjectPtr<UMaterialInterface>_u_0 this_00;
  TObjectPtr<UMaterialInterface>_u_0 TVar12;
  ForElementType<FStaticMeshSceneProxy::FRayTracingLODInfo::FSectionInfo> FVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  byte local_res18;
  TObjectPtr<UMaterialInterface>_u_0 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar16 = 0;
  (this->Sections).AllocatorInstance.SecondaryData =
       (ForElementType<FStaticMeshSceneProxy::FRayTracingLODInfo::FSectionInfo>)0x0;
  piVar1 = &(this->Sections).ArrayMax;
  (this->Sections).ArrayNum = 0;
  *piVar1 = 1;
  if ((param_1->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\PrimitiveSceneProxyDesc.h"
                         ,0x10e,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FRayTracingLODInfo *)(*pcVar5)();
    return pFVar8;
  }
  pFVar9 = UStaticMesh::GetRenderData(param_1->StaticMesh);
  pFVar2 = pFVar9->RayTracingProxy;
  uVar14 = 0;
  if (param_2 < (pFVar2->LODs).Array.ArrayNum) {
    uVar14 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FRayTracingLODInfo *)(*pcVar5)();
    return pFVar8;
  }
  local_res18 = (byte)((uint)*(undefined4 *)((longlong)&param_1->_padding_ + 4) >> 0x1b) & 1;
  lVar3 = *(longlong *)((pFVar2->LODs).Array.AllocatorInstance.Data + (longlong)param_2 * 8);
  uVar14 = *(uint *)(*(longlong *)(lVar3 + 0x10) + 0x28);
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  (this->Sections).ArrayNum = 0;
  if (*piVar1 != uVar14) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FStaticMeshSceneProxy::FRayTracingLODInfo::FSectionInfo>_>
              (8,8,uVar14,
               (ForElementType<FStaticMeshSceneProxy::FRayTracingLODInfo::FSectionInfo> *)this,0,
               piVar1);
  }
  lVar15 = *(longlong *)(lVar3 + 0x10);
  uVar18 = uVar16;
  if (0 < *(int *)(lVar15 + 0x28)) {
    do {
      this_00.DebugPtr = (UMaterialInterface *)0x0;
      uVar17 = (uint)uVar16;
      uVar14 = 0;
      if ((int)uVar17 < *(int *)(lVar15 + 0x28)) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FRayTracingLODInfo *)(*pcVar5)();
        return pFVar8;
      }
      local_58.DebugPtr = (UMaterialInterface *)0x0;
      if (*(longlong *)(lVar15 + 0x20) != 0) {
        lVar15 = *(longlong *)(lVar15 + 0x20);
      }
      iVar7 = *(int *)(lVar15 + uVar18);
      if (((iVar7 < 0) || ((param_1->OverrideMaterials).ArrayNum <= iVar7)) ||
         (pTVar10 = &TArrayView<TObjectPtr<UMaterialInterface>,int>::operator[]
                               (&param_1->OverrideMaterials,iVar7)->field0_0x0,
         pTVar10->DebugPtr == (UMaterialInterface *)0x0)) {
        if (param_1->StaticMesh != (UStaticMesh *)0x0) {
          this_00.DebugPtr = UStaticMesh::GetMaterial(param_1->StaticMesh,iVar7);
          goto LAB_148777bec;
        }
      }
      else {
        pTVar11 = TArrayView<TObjectPtr<UMaterialInterface>,int>::operator[]
                            (&param_1->OverrideMaterials,iVar7);
        this_00.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar11->field0_0x0).DebugPtr;
LAB_148777bec:
        if ((UMaterial *)this_00.DebugPtr != (UMaterial *)0x0) {
          UObject::ConditionalPostLoad((UObject *)this_00.DebugPtr);
          bVar6 = Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<FStaticMeshSceneProxyDesc>
                            (param_1,(FMaterialAudit *)0x0);
          if ((bVar6) && (Nanite::GEnableNaniteMaterialOverrides != 0)) {
            local_50 = 0;
            uStack_48 = 0;
            TVar12.DebugPtr =
                 (UMaterialInterface *)
                 (**(code **)((this_00.DebugPtr)->_padding_ + 0x3a8))(this_00.DebugPtr,&local_50);
            if ((UMaterial *)TVar12.DebugPtr != (UMaterial *)0x0) {
              this_00.DebugPtr = TVar12.DebugPtr;
            }
          }
        }
      }
      local_58 = this_00;
      if (local_res18 == 0) {
        if (GForceDefaultMaterial == false) goto LAB_148777c66;
        if ((UMaterial *)this_00.DebugPtr != (UMaterial *)0x0) {
          bVar6 = IsTranslucentBlendMode(this_00.DebugPtr);
          if (!bVar6) goto LAB_148777c5a;
          goto LAB_148777c66;
        }
LAB_148777c6e:
        local_58.DebugPtr = (UMaterialInterface *)UMaterial::GetDefaultMaterial(MD_Surface);
      }
      else {
LAB_148777c5a:
        local_58.DebugPtr = (UMaterialInterface *)UMaterial::GetDefaultMaterial(MD_Surface);
LAB_148777c66:
        if ((UMaterial *)local_58.DebugPtr == (UMaterial *)0x0) goto LAB_148777c6e;
      }
      FVar4 = (this->Sections).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<FStaticMeshSceneProxy::FRayTracingLODInfo::FSectionInfo>)this;
      if (FVar4 != (ForElementType<FStaticMeshSceneProxy::FRayTracingLODInfo::FSectionInfo>)0x0) {
        FVar13 = FVar4;
      }
      if ((ulonglong)FVar13 <= &local_58) {
        FVar13 = (ForElementType<FStaticMeshSceneProxy::FRayTracingLODInfo::FSectionInfo>)this;
        if (FVar4 != (ForElementType<FStaticMeshSceneProxy::FRayTracingLODInfo::FSectionInfo>)0x0) {
          FVar13 = FVar4;
        }
        if ((&local_58 <
             (TObjectPtr<UMaterialInterface>_u_0 *)((longlong)FVar13 + (longlong)*piVar1 * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FRayTracingLODInfo *)(*pcVar5)();
          return pFVar8;
        }
      }
      iVar7 = (this->Sections).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FStaticMeshSceneProxy::FRayTracingLODInfo::FSectionInfo>_>
                          (0x808,(ForElementType<FStaticMeshSceneProxy::FRayTracingLODInfo::FSectionInfo>
                                  *)this,piVar1);
      }
      (this->Sections).ArrayNum = iVar7 + 1;
      FVar4 = (this->Sections).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<FStaticMeshSceneProxy::FRayTracingLODInfo::FSectionInfo>)this;
      if (FVar4 != (ForElementType<FStaticMeshSceneProxy::FRayTracingLODInfo::FSectionInfo>)0x0) {
        FVar13 = FVar4;
      }
      uVar16 = (ulonglong)(uVar17 + 1);
      ((TObjectPtr<UMaterialInterface>_u_0 *)((longlong)FVar13 + (longlong)iVar7 * 8))->DebugPtr =
           (UMaterialInterface *)local_58;
      lVar15 = *(longlong *)(lVar3 + 0x10);
      uVar18 = uVar18 + 0x1c;
    } while ((int)(uVar17 + 1) < *(int *)(lVar15 + 0x28));
  }
  return this;
}

