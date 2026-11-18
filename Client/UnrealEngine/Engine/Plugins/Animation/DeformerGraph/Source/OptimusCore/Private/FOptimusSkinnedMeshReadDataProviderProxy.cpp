// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 5

// FOptimusSkinnedMeshReadDataProviderProxy @ 14e156830

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FOptimusSkinnedMeshReadDataProviderProxy * __thiscall
FOptimusSkinnedMeshReadDataProviderProxy::FOptimusSkinnedMeshReadDataProviderProxy
          (FOptimusSkinnedMeshReadDataProviderProxy *this,USkinnedMeshComponent *param_1,
          ulong64 param_2,EMeshDeformerOutputBuffer param_3,int *param_4)

{
  code *pcVar1;
  bool bVar2;
  FSkeletalMeshObject *pFVar3;
  FOptimusSkinnedMeshReadDataProviderProxy *pFVar4;
  
  this->_padding_ = (longlong)&___7FOptimusSkinnedMeshReadDataProviderProxy__6B_;
  pFVar3 = (FSkeletalMeshObject *)0x0;
  this->SkeletalMeshObject = (FSkeletalMeshObject *)0x0;
  this->InputMask = 0;
  this->LastLodIndexPtr = (int *)0x0;
  (this->TangentsSRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->ColorsSRV).Reference = (FRHIShaderResourceView *)0x0;
  this->PositionBufferSRV = (FRDGBufferSRV *)0x0;
  this->TangentBufferSRV = (FRDGBufferSRV *)0x0;
  this->ColorBufferSRV = (FRDGBufferSRV *)0x0;
  if (param_1 != (USkinnedMeshComponent *)0x0) {
    pFVar3 = param_1->MeshObject;
  }
  this->SkeletalMeshObject = pFVar3;
  this->InputMask = param_2;
  this->OutputBuffersFromPreviousInstances = param_3;
  this->LastLodIndexPtr = param_4;
  if (param_4 == (int *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LastLodIndexPtr != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceSkinnedMeshRead.cpp"
                       ,0xba,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FOptimusSkinnedMeshReadDataProviderProxy *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

// AllocateResources @ 14e17da10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FOptimusSkinnedMeshReadDataProviderProxy::AllocateResources
          (FOptimusSkinnedMeshReadDataProviderProxy *this,FRDGBuilder *param_1,
          FAllocationData *param_2)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  FSkeletalMeshRenderData *pFVar2;
  longlong lVar3;
  FRHIShaderResourceView *pFVar4;
  FRHIShaderResourceView *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TRefCountPtr<FRHIShaderResourceView> TVar9;
  FRDGBufferSRV *pFVar10;
  FRDGBufferSRVDesc *pFVar11;
  undefined1 uVar12;
  ulonglong uVar13;
  bool bVar14;
  FRHIResource *local_res8;
  FRDGBufferSRVDesc local_e8;
  FRDGBufferSRVDesc local_c8;
  FRDGBufferSRVDesc local_a8;
  FRDGBufferSRVDesc local_88;
  FRDGBufferSRVDesc local_68;
  FRDGBufferSRVDesc local_48;
  
  uVar7 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  bVar14 = uVar7 != *this->LastLodIndexPtr;
  if (bVar14) {
    *this->LastLodIndexPtr = uVar7;
  }
  pFVar2 = this->SkeletalMeshObject->SkeletalMeshRenderData;
  uVar8 = 0;
  if ((int)uVar7 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar3 = *(longlong *)
           ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
  TVar9 = FStaticMeshVertexBuffer::GetOrCreateTangentsSRV
                    ((FStaticMeshVertexBuffer *)(lVar3 + 0x30),(FRHICommandListBase *)&local_res8);
  pTVar1 = &this->TangentsSRV;
  if ((FRHIShaderResourceView *)pTVar1 != TVar9.Reference) {
    pFVar4 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar1->Reference = *TVar9.Reference;
    *(undefined8 *)TVar9.Reference = 0;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  pFVar4 = *(FRHIShaderResourceView **)(lVar3 + 0x168);
  this_00 = (this->ColorsSRV).Reference;
  if (this_00 != pFVar4) {
    (this->ColorsSRV).Reference = pFVar4;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar4);
    }
    if (this_00 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if ((this->InputMask & 2) == 0) {
    local_c8._padding_._0_1_ = 0xd;
    local_c8._padding_._4_4_ = 0;
    local_c8._padding_._0_4_ = 0xffffffff;
    local_c8._padding_ = 0;
    local_c8.Buffer =
         FRDGBuilder::RegisterExternalBuffer(param_1,&GWhiteVertexBufferWithRDG->Buffer,None);
    pFVar11 = &local_c8;
  }
  else {
    local_e8._padding_._0_1_ = 0xd;
    local_e8._padding_._4_4_ = 0;
    local_e8._padding_._0_4_ = 0xffffffff;
    local_e8._padding_ = 0;
    local_e8.Buffer =
         FSkeletalMeshDeformerHelpers::AllocateVertexFactoryPositionBuffer
                   (param_1,param_2->ExternalAccessQueue,this->SkeletalMeshObject,uVar7,
                    L"OptimusSkinnedMeshPosition");
    pFVar11 = &local_e8;
  }
  pFVar10 = FRDGBuilder::CreateSRV(param_1,pFVar11);
  this->PositionBufferSRV = pFVar10;
  uVar13 = (ulonglong)GMaxRHIShaderPlatform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar13].bContainsValidPlatformInfo == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xc1,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar12 = 0x3f;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar13].Language == LANGUAGE_OpenGL) {
    uVar12 = 0x23;
  }
  if ((this->InputMask & 0xc) == 0) {
    local_a8._padding_._4_4_ = 0;
    local_a8._padding_._0_4_ = 0xffffffff;
    local_a8._padding_ = 0;
    local_a8._padding_._0_1_ = uVar12;
    local_a8.Buffer =
         FRDGBuilder::RegisterExternalBuffer(param_1,&GWhiteVertexBufferWithRDG->Buffer,None);
    pFVar11 = &local_a8;
  }
  else {
    local_88._padding_._4_4_ = 0;
    local_88._padding_._0_4_ = 0xffffffff;
    local_88._padding_ = 0;
    local_88._padding_._0_1_ = uVar12;
    local_88.Buffer =
         FSkeletalMeshDeformerHelpers::AllocateVertexFactoryTangentBuffer
                   (param_1,param_2->ExternalAccessQueue,this->SkeletalMeshObject,uVar7,
                    L"OptimusSkinnedMeshTangent");
    pFVar11 = &local_88;
  }
  pFVar10 = FRDGBuilder::CreateSRV(param_1,pFVar11);
  this->TangentBufferSRV = pFVar10;
  if ((this->InputMask & 0x10) == 0) {
    local_48._padding_._4_4_ = 0;
    local_48._padding_._0_4_ = 0xffffffff;
    local_48._padding_ = 0;
    local_48._padding_._0_1_ = uVar12;
    local_48.Buffer =
         FRDGBuilder::RegisterExternalBuffer(param_1,&GWhiteVertexBufferWithRDG->Buffer,None);
    pFVar11 = &local_48;
  }
  else {
    local_68._padding_._0_1_ = 0x25;
    local_68._padding_._4_4_ = 0;
    local_68._padding_._0_4_ = 0xffffffff;
    local_68._padding_ = 0;
    local_68.Buffer =
         FSkeletalMeshDeformerHelpers::AllocateVertexFactoryColorBuffer
                   (param_1,param_2->ExternalAccessQueue,this->SkeletalMeshObject,uVar7,
                    L"OptimusSkinnedMeshColor");
    pFVar11 = &local_68;
  }
  pFVar10 = FRDGBuilder::CreateSRV(param_1,pFVar11);
  this->ColorBufferSRV = pFVar10;
  FSkeletalMeshDeformerHelpers::UpdateVertexFactoryBufferOverrides
            (param_1,this->SkeletalMeshObject,uVar7,bVar14);
  return;
}

// GatherDispatchData @ 14e1b52d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FOptimusSkinnedMeshReadDataProviderProxy::GatherDispatchData
          (FOptimusSkinnedMeshReadDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FSkeletalMeshRenderData *pFVar4;
  longlong lVar5;
  FRHIShaderResourceView *pFVar6;
  FRHIShaderResourceView *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  FRHIShaderResourceView *pFVar11;
  FRHIShaderResourceView *pFVar12;
  uchar *puVar13;
  uint uVar14;
  
  uVar10 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  pFVar4 = this->SkeletalMeshObject->SkeletalMeshRenderData;
  uVar14 = 0;
  if ((int)uVar10 < (pFVar4->LODRenderData).Array.ArrayNum) {
    uVar14 = ~uVar10 >> 0x1f;
  }
  if (uVar14 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar1 = param_1->ParameterBufferOffset;
  puVar13 = param_1->ParameterBuffer;
  iVar2 = param_1->NumInvocations;
  lVar5 = *(longlong *)
           ((pFVar4->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
  iVar3 = param_1->ParameterBufferStride;
  pFVar6 = (GWhiteVertexBufferWithSRV->ShaderResourceViewRHI).Reference;
  if (iVar2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (iVar3 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (((longlong)iVar3 & 0xfU) != 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar14 = 0;
  if (0 < iVar2) {
    puVar13 = puVar13 + (longlong)iVar1 + 0x10;
    do {
      uVar10 = 0;
      if ((int)uVar14 < *(int *)(lVar5 + 0x18)) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      *(undefined4 *)(puVar13 + -0x10) = *(undefined4 *)(lVar5 + 300);
      *(FRDGBufferSRV **)(puVar13 + -8) = this->PositionBufferSRV;
      *(FRDGBufferSRV **)puVar13 = this->TangentBufferSRV;
      *(FRDGBufferSRV **)(puVar13 + 8) = this->ColorBufferSRV;
      pFVar7 = (this->ColorsSRV).Reference;
      pFVar12 = (this->TangentsSRV).Reference;
      pFVar11 = pFVar6;
      if (*(FRHIShaderResourceView **)(lVar5 + 0x110) != (FRHIShaderResourceView *)0x0) {
        pFVar11 = *(FRHIShaderResourceView **)(lVar5 + 0x110);
      }
      *(FRHIShaderResourceView **)(puVar13 + 0x10) = pFVar11;
      pFVar11 = pFVar6;
      if (pFVar12 != (FRHIShaderResourceView *)0x0) {
        pFVar11 = pFVar12;
      }
      *(FRHIShaderResourceView **)(puVar13 + 0x18) = pFVar11;
      pFVar12 = pFVar6;
      if (pFVar7 != (FRHIShaderResourceView *)0x0) {
        pFVar12 = pFVar7;
      }
      *(FRHIShaderResourceView **)(puVar13 + 0x20) = pFVar12;
      uVar14 = uVar14 + 1;
      *(uint *)(puVar13 + 0x28) = -(uint)(pFVar7 != (FRHIShaderResourceView *)0x0);
      puVar13 = puVar13 + iVar3;
    } while ((int)uVar14 < iVar2);
  }
  return;
}

// GatherPermutations @ 14e1b6bf0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FOptimusSkinnedMeshReadDataProviderProxy::GatherPermutations
          (FOptimusSkinnedMeshReadDataProviderProxy *this,FPermutationData *param_1)

{
  FScriptContainerElement *pFVar1;
  EMeshDeformerOutputBuffer EVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  int *piVar10;
  longlong lVar11;
  
  EVar2 = this->OutputBuffersFromPreviousInstances;
  uVar5 = EVar2 & 1 | 2;
  if ((EVar2 & SkinnedMeshTangents) == None) {
    uVar5 = EVar2 & 1;
  }
  uVar9 = uVar5 | 4;
  if ((EVar2 & SkinnedMeshVertexColor) == None) {
    uVar9 = uVar5;
  }
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if (*piVar10 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&::Name,UOptimusSkinnedMeshReadDataInterface::
                                 ReadableOutputBufferPermutationName);
      atexit(`FOptimusSkinnedMeshReadDataProviderProxy::GatherPermutations'::__l2::
             _dynamic_atexit_destructor_for__Name__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar10 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      if (::Name.Data.ArrayNum == 0) {
        iVar7 = 0;
        FVar8.Data = (FScriptContainerElement *)L"";
      }
      else {
        iVar7 = ::Name.Data.ArrayNum + -1;
        FVar8 = ::Name.Data.AllocatorInstance;
      }
      ::Hash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar8.Data);
      _Init_thread_footer(&::_TSS1);
    }
  }
  uVar5 = FComputeKernelPermutationVector::GetPermutationBits
                    (param_1->PermutationVector,&::Name,::Hash,uVar9);
  uVar9 = 0;
  if (0 < param_1->NumInvocations) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (param_1->PermutationIds).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar9 = uVar9 + 1;
      pFVar1 = (param_1->PermutationIds).AllocatorInstance.Data + lVar11;
      *(uint *)pFVar1 = *(uint *)pFVar1 | uVar5;
      lVar11 = lVar11 + 4;
    } while ((int)uVar9 < param_1->NumInvocations);
  }
  return;
}

// IsValid @ 14e1f0b50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FOptimusSkinnedMeshReadDataProviderProxy::IsValid
          (FOptimusSkinnedMeshReadDataProviderProxy *this,FValidationData *param_1)

{
  FSkeletalMeshRenderData *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if ((param_1->ParameterStructSize == 0x40) &&
     (this->SkeletalMeshObject != (FSkeletalMeshObject *)0x0)) {
    cVar3 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0x40))();
    if (cVar3 == '\0') {
      iVar6 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
      iVar6 = FSkeletalMeshDeformerHelpers::GetIndexOfFirstAvailableSection
                        (this->SkeletalMeshObject,iVar6);
      if (iVar6 != -1) {
        uVar7 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
        pFVar1 = this->SkeletalMeshObject->SkeletalMeshRenderData;
        uVar8 = 0;
        if ((int)uVar7 < (pFVar1->LODRenderData).Array.ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
        }
        return *(int *)(*(longlong *)
                         ((pFVar1->LODRenderData).Array.AllocatorInstance.Data +
                         (longlong)(int)uVar7 * 8) + 0x18) == param_1->NumInvocations;
      }
    }
  }
  return false;
}

