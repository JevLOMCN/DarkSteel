// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// FOptimusClothDataProviderProxy @ 14e1507e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FOptimusClothDataProviderProxy * __thiscall
FOptimusClothDataProviderProxy::FOptimusClothDataProviderProxy
          (FOptimusClothDataProviderProxy *this,USkinnedMeshComponent *param_1)

{
  double dVar1;
  int iVar2;
  FSceneInterface *pFVar3;
  UClass *pUVar4;
  
  this->_padding_ = (longlong)&___7FOptimusClothDataProviderProxy__6B_;
  this->SkeletalMeshObject = (FSkeletalMeshObject *)0x0;
  this->ClothBlendWeight = 1.0;
  *(undefined8 *)&(this->MeshScale).field0_0x0 =
       UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  (this->MeshScale).field0_0x0._s_0.Z = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  this->FrameNumber = 0;
  if (param_1 != (USkinnedMeshComponent *)0x0) {
    pFVar3 = UActorComponent::GetScene((UActorComponent *)param_1);
    if (pFVar3 != (FSceneInterface *)0x0) {
      this->SkeletalMeshObject = param_1->MeshObject;
      pFVar3 = UActorComponent::GetScene((UActorComponent *)param_1);
      iVar2 = (**(code **)(pFVar3->_padding_ + 0x4e8))(pFVar3);
      this->FrameNumber = iVar2 + 1;
      pUVar4 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar4->_padding_)) {
        this->ClothBlendWeight = *(float *)&param_1[1]._padding_;
        dVar1 = (double)param_1->_padding_;
        *(ulonglong *)&(this->MeshScale).field0_0x0 =
             CONCAT44((float)(double)param_1->_padding_,(float)(double)param_1->_padding_);
        (this->MeshScale).field0_0x0._s_0.Z = (float)dVar1;
      }
    }
  }
  return this;
}

// GatherDispatchData @ 14e1b3350

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
FOptimusClothDataProviderProxy::GatherDispatchData
          (FOptimusClothDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FSkeletalMeshRenderData *pFVar4;
  longlong lVar5;
  FRHIShaderResourceView *pFVar6;
  longlong lVar7;
  FRHIShaderResourceView *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  FClothBuffers *pFVar23;
  TVector<float> *pTVar24;
  FRHIShaderResourceView *pFVar25;
  FRHIShaderResourceView *pFVar26;
  uchar *puVar27;
  uint uVar28;
  longlong lVar29;
  undefined4 uVar30;
  FClothBuffers local_a8;
  
  uVar20 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  pFVar4 = this->SkeletalMeshObject->SkeletalMeshRenderData;
  uVar28 = 0;
  if ((int)uVar20 < (pFVar4->LODRenderData).Array.ArrayNum) {
    uVar28 = ~uVar20 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar1 = param_1->ParameterBufferOffset;
  puVar27 = param_1->ParameterBuffer;
  iVar2 = param_1->ParameterBufferStride;
  iVar3 = param_1->NumInvocations;
  lVar5 = *(longlong *)
           ((pFVar4->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar20 * 8);
  pFVar6 = (GWhiteVertexBufferWithSRV->ShaderResourceViewRHI).Reference;
  if ((iVar3 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumElements >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                          ,0x3f,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((iVar2 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("BytesBetweenElements >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                          ,0x40,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((((longlong)iVar2 & 0xfU) != 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("BytesBetweenElements % alignof(ElementType) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                          ,0x41,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar28 = 0;
  if (0 < iVar3) {
    lVar29 = 0;
    puVar27 = puVar27 + (longlong)iVar1 + 8;
    do {
      uVar21 = 0;
      if ((int)uVar28 < *(int *)(lVar5 + 0x18)) {
        uVar21 = ~uVar28 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar7 = *(longlong *)(lVar5 + 0x10);
      if (*(int *)(lVar29 + 0x30 + lVar7) < 1) {
        uVar21 = 0;
      }
      else {
        uVar21 = *(uint *)(*(longlong *)(lVar29 + 0x28 + lVar7) + 8);
      }
      uVar30 = 1;
      if (*(uint *)(lVar29 + 0x48 + lVar7) < uVar21) {
        uVar30 = 5;
      }
      pFVar23 = FSkeletalMeshDeformerHelpers::GetClothBuffersForReading
                          (&local_a8,this->SkeletalMeshObject,uVar20,uVar28,this->FrameNumber,false)
      ;
      uVar10 = *(undefined8 *)pFVar23;
      pFVar26 = pFVar23->ClothInfluenceBuffer;
      uVar11 = *(undefined8 *)(pFVar23->ClothToLocal).M[0];
      uVar12 = *(undefined8 *)((pFVar23->ClothToLocal).M[0] + 2);
      uVar13 = *(undefined8 *)(pFVar23->ClothToLocal).M[1];
      uVar14 = *(undefined8 *)((pFVar23->ClothToLocal).M[1] + 2);
      uVar15 = *(undefined8 *)(pFVar23->ClothToLocal).M[2];
      uVar16 = *(undefined8 *)((pFVar23->ClothToLocal).M[2] + 2);
      uVar17 = *(undefined8 *)(pFVar23->ClothToLocal).M[3];
      uVar18 = *(undefined8 *)((pFVar23->ClothToLocal).M[3] + 2);
      pFVar8 = pFVar23->ClothSimulatedPositionAndNormalBuffer;
      if ((pFVar26 == (FRHIShaderResourceView *)0x0) || (pFVar8 == (FRHIShaderResourceView *)0x0)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      *(undefined4 *)(puVar27 + -8) = *(undefined4 *)(lVar5 + 300);
      *(undefined4 *)(puVar27 + -4) = *(undefined4 *)(lVar29 + 0x10 + lVar7);
      *(int *)puVar27 = (int)uVar10;
      if (bVar19) {
        *(float *)(puVar27 + 8) = this->ClothBlendWeight;
        pTVar24 = &this->MeshScale;
      }
      else {
        puVar27[8] = '\0';
        puVar27[9] = '\0';
        puVar27[10] = '\0';
        puVar27[0xb] = '\0';
        pTVar24 = &UE::Math::TVector<float>::OneVector;
      }
      *(undefined8 *)(puVar27 + 0x18) = *(undefined8 *)&pTVar24->field0_0x0;
      *(float *)(puVar27 + 0x20) = (pTVar24->field0_0x0)._s_0.Z;
      *(undefined8 *)(puVar27 + 0x28) = uVar11;
      *(undefined8 *)(puVar27 + 0x30) = uVar12;
      uVar22 = 0;
      if (bVar19) {
        uVar22 = uVar30;
      }
      *(undefined4 *)(puVar27 + 4) = uVar22;
      pFVar25 = pFVar6;
      if (bVar19) {
        pFVar25 = pFVar26;
      }
      *(FRHIShaderResourceView **)(puVar27 + 0x68) = pFVar25;
      pFVar26 = pFVar6;
      if (bVar19) {
        pFVar26 = pFVar8;
      }
      uVar28 = uVar28 + 1;
      *(undefined8 *)(puVar27 + 0x38) = uVar13;
      *(undefined8 *)(puVar27 + 0x40) = uVar14;
      *(FRHIShaderResourceView **)(puVar27 + 0x70) = pFVar26;
      *(undefined8 *)(puVar27 + 0x48) = uVar15;
      *(undefined8 *)(puVar27 + 0x50) = uVar16;
      lVar29 = lVar29 + 0x118;
      *(undefined8 *)(puVar27 + 0x58) = uVar17;
      *(undefined8 *)(puVar27 + 0x60) = uVar18;
      puVar27 = puVar27 + iVar2;
    } while ((int)uVar28 < iVar3);
  }
  return;
}

// GatherPermutations @ 14e1b5dc0

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
FOptimusClothDataProviderProxy::GatherPermutations
          (FOptimusClothDataProviderProxy *this,FPermutationData *param_1)

{
  FScriptContainerElement *pFVar1;
  FComputeKernelPermutationVector *this_00;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FClothBuffers *pFVar8;
  uint uVar9;
  int *piVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  FClothBuffers local_88;
  
  uVar5 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  uVar11 = 0;
  uVar9 = 0;
  if ((int)uVar5 < (this->SkeletalMeshObject->SkeletalMeshRenderData->LODRenderData).Array.ArrayNum)
  {
    uVar9 = ~uVar5 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = param_1->PermutationVector;
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar10 <
       `public:___cdecl_FClothDataInterfacePermutationIds::FClothDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
       ::__l3::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_FClothDataInterfacePermutationIds::FClothDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l3::_thread_safe_static_guard_0__),
     `public:___cdecl_FClothDataInterfacePermutationIds::FClothDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l3::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:___cdecl_FClothDataInterfacePermutationIds::FClothDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                        ::__l3::Name,L"ENABLE_DEFORMER_CLOTH");
    atexit(`FClothDataInterfacePermutationIds::FClothDataInterfacePermutationIds'::__l3::
           _dynamic_atexit_destructor_for__Name__);
    _Init_thread_footer(&`public:___cdecl_FClothDataInterfacePermutationIds::FClothDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l3::_thread_safe_static_guard_0__);
  }
  uVar9 = 0;
  if ((*piVar10 <
       `public:___cdecl_FClothDataInterfacePermutationIds::FClothDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
       ::__l3::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:___cdecl_FClothDataInterfacePermutationIds::FClothDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l3::_thread_safe_static_guard_1__),
     `public:___cdecl_FClothDataInterfacePermutationIds::FClothDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l3::_thread_safe_static_guard_1__ == -1)) {
    uVar6 = `public:___cdecl_FClothDataInterfacePermutationIds::FClothDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l3::Name.Data.ArrayNum - 1;
    FVar3 = `public:___cdecl_FClothDataInterfacePermutationIds::FClothDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l3::Name.Data.AllocatorInstance;
    if (`public:___cdecl_FClothDataInterfacePermutationIds::FClothDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
        ::__l3::Name.Data.ArrayNum == 0) {
      uVar6 = uVar9;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    `public:___cdecl_FClothDataInterfacePermutationIds::FClothDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
    ::__l3::Hash = FCrc::Strihash_DEPRECATED<wchar_t>(uVar6,(wchar_t *)FVar3.Data);
    _Init_thread_footer(&`public:___cdecl_FClothDataInterfacePermutationIds::FClothDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l3::_thread_safe_static_guard_1__);
  }
  uVar6 = FComputeKernelPermutationVector::GetPermutationBits
                    (this_00,&`public:___cdecl_FClothDataInterfacePermutationIds::FClothDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                              ::__l3::Name,
                     `public:___cdecl_FClothDataInterfacePermutationIds::FClothDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                     ::__l3::Hash,1);
  uVar14 = uVar11;
  if (0 < param_1->NumInvocations) {
    do {
      uVar13 = (uint)uVar14;
      pFVar8 = FSkeletalMeshDeformerHelpers::GetClothBuffersForReading
                         (&local_88,this->SkeletalMeshObject,uVar5,uVar13,this->FrameNumber,false);
      if ((pFVar8->ClothInfluenceBuffer == (FRHIShaderResourceView *)0x0) ||
         (uVar7 = 1, pFVar8->ClothSimulatedPositionAndNormalBuffer == (FRHIShaderResourceView *)0x0)
         ) {
        uVar7 = uVar9;
      }
      uVar12 = uVar9;
      if (uVar7 != 0) {
        uVar12 = uVar6;
      }
      uVar7 = uVar9;
      if ((int)uVar13 < (param_1->PermutationIds).ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->PermutationIds).AllocatorInstance.Data + uVar11;
      *(uint *)pFVar1 = *(uint *)pFVar1 | uVar12;
      uVar11 = uVar11 + 4;
      uVar14 = (ulonglong)(uVar13 + 1);
    } while ((int)(uVar13 + 1) < param_1->NumInvocations);
  }
  return;
}

// IsValid @ 14e1f04e0

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
FOptimusClothDataProviderProxy::IsValid
          (FOptimusClothDataProviderProxy *this,FValidationData *param_1)

{
  FSkeletalMeshObject *pFVar1;
  FSkeletalMeshRenderData *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((param_1->ParameterStructSize == 0x80) &&
     (pFVar1 = this->SkeletalMeshObject, pFVar1 != (FSkeletalMeshObject *)0x0)) {
    pFVar2 = pFVar1->SkeletalMeshRenderData;
    uVar6 = (**(code **)(pFVar1->_padding_ + 0xa0))();
    uVar7 = 0;
    if ((int)uVar6 < (pFVar2->LODRenderData).Array.ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    return *(int *)(*(longlong *)
                     ((pFVar2->LODRenderData).Array.AllocatorInstance.Data +
                     (longlong)(int)uVar6 * 8) + 0x18) == param_1->NumInvocations;
  }
  return false;
}

