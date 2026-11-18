// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 4

// ~FPCGMeshSamplerContext @ 14cee46c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGMeshSamplerContext::~FPCGMeshSamplerContext(FPCGMeshSamplerContext *this)

{
  int iVar1;
  longlong *plVar2;
  FProgressCancel *pFVar3;
  ITextData *pIVar4;
  char cVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&_vftable__for__FPCGContext__;
  this->_padding_ = (longlong)&_vftable__for__IPCGAsyncLoadingContext__;
  LOCK();
  this->StopSampling = (atomic<bool>)0x1;
  UNLOCK();
  iVar1 = (this->SamplingFutures).ArrayNum;
  pFVar8 = (this->SamplingFutures).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->SamplingFutures).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TFuture<bool>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar7) break;
    if (((*(longlong *)pFVar8 != 0) && (*(char *)(*(longlong *)pFVar8 + 0x68) == '\0')) &&
       (*(longlong *)pFVar8 != 0)) {
      do {
        do {
        } while (*(longlong *)pFVar8 == 0);
        plVar2 = *(longlong **)(*(longlong *)pFVar8 + 0x60);
        cVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,0xffffffff,0);
      } while (cVar5 == '\0');
    }
    pFVar8 = pFVar8 + 0x10;
  }
  pFVar8 = (this->StartingIndices).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  pFVar3 = (this->SamplingProgess).Ptr;
  if (pFVar3 != (FProgressCancel *)0x0) {
    DestructItems<FProgressCancel::FMessageInfo,int>
              ((FMessageInfo *)(pFVar3->Warnings).AllocatorInstance.Data,(pFVar3->Warnings).ArrayNum
              );
    pFVar8 = (pFVar3->Warnings).AllocatorInstance.Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    if (*(longlong *)&pFVar3->CancelF != 0) {
      plVar2 = *(longlong **)&(pFVar3->CancelF).field_0x28;
      plVar6 = (longlong *)&(pFVar3->CancelF).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar6 = plVar2;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&pFVar3->MessageCS);
    pIVar4 = (pFVar3->ProgressMessage).TextData.Reference;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))();
    }
    pIVar4 = (pFVar3->Progress).Message.TextData.Reference;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))();
    }
    ::operator_delete(pFVar3,0xb0);
  }
  DestructItems<TFuture<bool>,int>
            ((TFuture<bool> *)(this->SamplingFutures).AllocatorInstance.Data,
             (this->SamplingFutures).ArrayNum);
  pFVar8 = (this->SamplingFutures).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  DestructItems<TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
             (this->AssetMaterialList).AllocatorInstance.Data,(this->AssetMaterialList).ArrayNum);
  pFVar8 = (this->AssetMaterialList).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  DestructItems<TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
             (this->ComponentMaterialList).AllocatorInstance.Data,
             (this->ComponentMaterialList).ArrayNum);
  pFVar8 = (this->ComponentMaterialList).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  pFVar8 = (this->MaterialAttributes).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  pFVar8 = (this->MaterialIdAttributes).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  pFVar8 = (this->TriangleIdAttributes).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  pFVar8 = (this->UVAttributes).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  pFVar8 = (this->OutputData).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  pFVar8 = (this->OutPointData).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  DestructItems<FGeometryScriptIndexList,int>
            ((FGeometryScriptIndexList *)(this->TriangleIds).AllocatorInstance.Data,
             (this->TriangleIds).ArrayNum);
  pFVar8 = (this->TriangleIds).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  DestructItems<FGeometryScriptVectorList,int>
            ((FGeometryScriptVectorList *)(this->Normals).AllocatorInstance.Data,
             (this->Normals).ArrayNum);
  pFVar8 = (this->Normals).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  DestructItems<FGeometryScriptColorList,int>
            ((FGeometryScriptColorList *)(this->Colors).AllocatorInstance.Data,
             (this->Colors).ArrayNum);
  pFVar8 = (this->Colors).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  DestructItems<FGeometryScriptVectorList,int>
            ((FGeometryScriptVectorList *)(this->Positions).AllocatorInstance.Data,
             (this->Positions).ArrayNum);
  pFVar8 = (this->Positions).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  pFVar8 = (this->DynamicMeshes).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  DestructItems<TTuple<FSoftObjectPath,int,int>,int>
            ((TTuple<FSoftObjectPath,int,int> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  IPCGAsyncLoadingContext::~IPCGAsyncLoadingContext((IPCGAsyncLoadingContext *)&this->_padding_);
  FPCGContext::~FPCGContext((FPCGContext *)this);
  return;
}

// AddExtraStructReferencedObjects @ 14cee8390

void __thiscall
FPCGMeshSamplerContext::AddExtraStructReferencedObjects
          (FPCGMeshSamplerContext *this,FReferenceCollector *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->DynamicMeshes).AllocatorInstance.Data;
  iVar2 = (this->DynamicMeshes).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->DynamicMeshes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDynamicMesh>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong *)pFVar3 != 0) {
      (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar3,0,0);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// SetAttributeValues @ 14cef8e00

void __thiscall
FPCGMeshSamplerContext::SetAttributeValues
          (FPCGMeshSamplerContext *this,int param_1,int param_2,TVector<double> *param_3,
          long64 *param_4,int param_5)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  bool local_res8 [8];
  int local_res10;
  int local_res18 [2];
  uint local_c8;
  uint local_b8 [2];
  double local_b0;
  FPCGMetadataAttribute<FSoftObjectPath> *local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  FSoftObjectPath local_88;
  TVector2<double>_u_0 local_68;
  TVector<double>_u_0 local_58;
  
  iVar3 = param_5;
  lVar12 = (longlong)param_5;
  uVar6 = 0;
  uVar11 = 0;
  local_res10 = param_1;
  local_res18[0] = param_2;
  local_a0 = lVar12;
  if ((param_5 < 0) || ((this->UVAttributes).ArrayNum <= param_5)) {
LAB_14cef90e2:
    local_a0 = lVar12;
    if (-1 < iVar3) goto LAB_14cef90f9;
LAB_14cef9675:
    local_c8 = (uint)~iVar3 >> 0x1f;
    local_b0 = (double)lVar12;
  }
  else {
    uVar8 = (uint)~param_5 >> 0x1f;
    uVar5 = uVar6;
    if (param_5 < (this->UVAttributes).ArrayNum) {
      uVar5 = uVar8;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar7 = local_res18[0];
    if (*(longlong *)((this->UVAttributes).AllocatorInstance.Data + lVar12 * 8) == 0)
    goto LAB_14cef90e2;
    local_b0 = (param_3->field0_0x0)._s_0.Z;
    local_68 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    uVar5 = uVar6;
    if (iVar3 < (this->DynamicMeshes).ArrayNum) {
      uVar5 = uVar8;
    }
    param_5 = param_5 & 0xffffff00;
    local_98 = *(longlong *)&param_3->field0_0x0;
    uStack_90 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
    uStack_8c = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
    local_58._0_4_ = *(undefined4 *)&param_3->field0_0x0;
    local_58._4_4_ = *(undefined4 *)((longlong)&param_3->field0_0x0 + 4);
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_58._0_4_ = (undefined4)local_98;
      local_58._4_4_ = local_98._4_4_;
    }
    local_58._s_0.Z = local_b0;
    local_58._8_4_ = uStack_90;
    local_58._12_4_ = uStack_8c;
    UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleUV
              (*(UDynamicMesh **)((this->DynamicMeshes).AllocatorInstance.Data + lVar12 * 8),
               local_res10,iVar7,(TVector<double> *)&local_58._s_0,(bool *)&param_5,
               (TVector2<double> *)&local_68._s_0);
    if ((char)param_5 == '\0') goto LAB_14cef90e2;
    if (iVar3 < (this->OutputData).ArrayNum) {
      uVar6 = uVar8;
    }
    local_b0 = (double)lVar12;
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(longlong *)((this->OutputData).AllocatorInstance.Data + lVar12 * 8) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutputData[DataIndex]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
                           ,0x12d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar6 = uVar11;
    if (iVar3 < (this->OutputData).ArrayNum) {
      uVar6 = uVar8;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UPCGMetadata::InitializeOnSet
              (*(UPCGMetadata **)
                (*(longlong *)((this->OutputData).AllocatorInstance.Data + lVar12 * 8) + 0x38),
               param_4,-1,(UPCGMetadata *)0x0,-1,(UPCGMetadata *)0x0);
    uVar6 = uVar11;
    if (iVar3 < (this->UVAttributes).ArrayNum) {
      uVar6 = uVar8;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FPCGMetadataAttribute<UE::Math::TVector2<double>_>::SetValue
              (*(FPCGMetadataAttribute<UE::Math::TVector2<double>_> **)
                ((this->UVAttributes).AllocatorInstance.Data + lVar12 * 8),*param_4,
               (TVector2<double> *)&local_68._s_0);
LAB_14cef90f9:
    if ((this->MaterialIdAttributes).ArrayNum <= iVar3) goto LAB_14cef9675;
    local_c8 = (uint)~iVar3 >> 0x1f;
    uVar6 = uVar11;
    if (iVar3 < (this->MaterialIdAttributes).ArrayNum) {
      uVar6 = local_c8;
    }
    local_b0 = (double)lVar12;
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar7 = local_res18[0];
    lVar13 = lVar12 * 8;
    if (*(longlong *)((this->MaterialIdAttributes).AllocatorInstance.Data + lVar13) != 0) {
      local_res8[0] = false;
      uVar6 = uVar11;
      if (iVar3 < (this->DynamicMeshes).ArrayNum) {
        uVar6 = local_c8;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_b8[0] = UGeometryScriptLibrary_MeshMaterialFunctions::GetTriangleMaterialID
                              (*(UDynamicMesh **)
                                ((this->DynamicMeshes).AllocatorInstance.Data + lVar13),iVar7,
                               local_res8);
      if (local_res8[0] != false) {
        uVar5 = 0;
        uVar6 = uVar5;
        if (iVar3 < (this->OutputData).ArrayNum) {
          uVar6 = local_c8;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((*(longlong *)((this->OutputData).AllocatorInstance.Data + lVar13) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("OutputData[DataIndex]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
                               ,0x13a,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = uVar5;
        if (iVar3 < (this->OutputData).ArrayNum) {
          uVar6 = local_c8;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UPCGMetadata::InitializeOnSet
                  (*(UPCGMetadata **)
                    (*(longlong *)((this->OutputData).AllocatorInstance.Data + lVar13) + 0x38),
                   param_4,-1,(UPCGMetadata *)0x0,-1,(UPCGMetadata *)0x0);
        uVar6 = uVar5;
        if (iVar3 < (this->MaterialIdAttributes).ArrayNum) {
          uVar6 = local_c8;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FPCGMetadataAttribute<int>::SetValue
                  (*(FPCGMetadataAttribute<int> **)
                    ((this->MaterialIdAttributes).AllocatorInstance.Data + lVar13),*param_4,
                   (int *)local_b8);
        if ((this->MaterialAttributes).ArrayNum <= iVar3) goto LAB_14cef9698;
        uVar6 = uVar5;
        if (iVar3 < (this->MaterialAttributes).ArrayNum) {
          uVar6 = local_c8;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(longlong *)((this->MaterialAttributes).AllocatorInstance.Data + lVar13) != 0) {
          if ((this->AssetMaterialList).ArrayNum <= iVar3) goto LAB_14cef9698;
          uVar6 = uVar5;
          if (iVar3 < (this->AssetMaterialList).ArrayNum) {
            uVar6 = local_c8;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (((int)local_b8[0] < 0) ||
             (lVar9 = lVar12 * 0x10, local_98 = lVar9,
             *(int *)((this->AssetMaterialList).AllocatorInstance.Data + lVar9 + 8) <=
             (int)local_b8[0])) goto LAB_14cef9698;
          uVar6 = uVar5;
          if (iVar3 < (this->AssetMaterialList).ArrayNum) {
            uVar6 = local_c8;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar6 = local_b8[0];
          local_a8 = (FPCGMetadataAttribute<FSoftObjectPath> *)
                     ((this->AssetMaterialList).AllocatorInstance.Data + lVar9);
          uVar8 = uVar5;
          if ((int)local_b8[0] < (int)local_a8->_padding_) {
            uVar8 = ~local_b8[0] >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(longlong *)(local_a8->_padding_ + (longlong)(int)uVar6 * 8) != 0) {
            if (iVar3 < (this->MaterialAttributes).ArrayNum) {
              uVar5 = local_c8;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_a8 = *(FPCGMetadataAttribute<FSoftObjectPath> **)
                        ((this->MaterialAttributes).AllocatorInstance.Data + lVar13);
            uVar6 = uVar11;
            if (iVar3 < (this->AssetMaterialList).ArrayNum) {
              uVar6 = local_c8;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            lVar13 = (longlong)(int)local_b8[0];
            pFVar10 = (this->AssetMaterialList).AllocatorInstance.Data + local_98;
            uVar6 = uVar11;
            if ((int)local_b8[0] < *(int *)(pFVar10 + 8)) {
              uVar6 = ~local_b8[0] >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            lVar9 = *(longlong *)pFVar10;
            lVar1 = *param_4;
            if ((lVar1 == -1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ItemKey != PCGInvalidEntryKey",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                                   ,0x25c,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_88.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_88.AssetPath.PackageName.Number = 0;
            local_88.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_88.AssetPath.AssetName.Number = 0;
            local_88.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_88.SubPathString.Data.ArrayNum = 0;
            local_88.SubPathString.Data.ArrayMax = 0;
            FSoftObjectPath::SetPath(&local_88,*(UObject **)(lVar9 + lVar13 * 8));
            iVar7 = FPCGMetadataAttribute<FSoftObjectPath>::AddValue(local_a8,&local_88);
            FPCGMetadataAttributeBase::SetValueFromValueKey
                      ((FPCGMetadataAttributeBase *)local_a8,lVar1,iVar7,false);
            if (local_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_88.SubPathString.Data.AllocatorInstance.Data);
              goto LAB_14cef9698;
            }
          }
        }
      }
    }
  }
  if (iVar3 < 0) {
    return;
  }
LAB_14cef9698:
  lVar12 = lVar12 * 8;
  if (iVar3 < (this->TriangleIdAttributes).ArrayNum) {
    uVar6 = uVar11;
    if (iVar3 < (this->TriangleIdAttributes).ArrayNum) {
      uVar6 = local_c8;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(longlong *)((this->TriangleIdAttributes).AllocatorInstance.Data + lVar12) != 0) {
      uVar6 = uVar11;
      if (iVar3 < (this->OutputData).ArrayNum) {
        uVar6 = local_c8;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(longlong *)((this->OutputData).AllocatorInstance.Data + lVar12) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutputData[DataIndex]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
                             ,0x147,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = uVar11;
      if (iVar3 < (this->OutputData).ArrayNum) {
        uVar6 = local_c8;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UPCGMetadata::InitializeOnSet
                (*(UPCGMetadata **)
                  (*(longlong *)((this->OutputData).AllocatorInstance.Data + lVar12) + 0x38),param_4
                 ,-1,(UPCGMetadata *)0x0,-1,(UPCGMetadata *)0x0);
      if (iVar3 < (this->TriangleIdAttributes).ArrayNum) {
        uVar11 = local_c8;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FPCGMetadataAttribute<int>::SetValue
                (*(FPCGMetadataAttribute<int> **)
                  ((this->TriangleIdAttributes).AllocatorInstance.Data + lVar12),*param_4,
                 local_res18);
    }
  }
  return;
}

// SetPointColorAndDensity @ 14cef99f0

void __thiscall
FPCGMeshSamplerContext::SetPointColorAndDensity
          (FPCGMeshSamplerContext *this,_func___cdecl_void_FLinearColor_ptr_FPCGPoint_ptr *param_1,
          int param_2,TVector<double> *param_3,FPCGPoint *param_4,int param_5)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  FLinearColor FVar5;
  bool bVar6;
  uint uVar7;
  bool local_res8 [8];
  FLinearColor_u_0 local_78;
  FLinearColor_u_0 local_68;
  TVector<double>_u_0 local_58 [3];
  
  FVar5.field0_0x0 = FLinearColor::White.field0_0x0;
  local_res8[0] = false;
  dVar3 = (param_3->field0_0x0)._s_0.X;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  uVar7 = 0;
  if (param_5 < (this->DynamicMeshes).ArrayNum) {
    uVar7 = (uint)~param_5 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_68 = FVar5.field0_0x0;
  local_58[0]._0_8_ = dVar3;
  local_58[0]._8_8_ = dVar4;
  local_58[0]._16_8_ = dVar1;
  UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleVertexColor
            (*(UDynamicMesh **)
              ((this->DynamicMeshes).AllocatorInstance.Data + (longlong)param_5 * 8),param_2,
             (TVector<double> *)&local_58[0]._s_0,(FLinearColor *)&local_68._s_0,local_res8,
             (FLinearColor *)&local_78._s_0);
  if (local_res8[0] == false) {
    param_4->Density = 1.0;
  }
  else {
    (param_4->Color).field0_0x0._s_0.X = (double)local_78._s_0.R;
    (param_4->Color).field0_0x0._s_0.Y = (double)local_78._s_0.G;
    (param_4->Color).field0_0x0._s_0.Z = (double)local_78._s_0.B;
    (param_4->Color).field0_0x0._s_0.W = (double)local_78._s_0.A;
    (*param_1)((FLinearColor *)&local_78._s_0,param_4);
  }
  return;
}

