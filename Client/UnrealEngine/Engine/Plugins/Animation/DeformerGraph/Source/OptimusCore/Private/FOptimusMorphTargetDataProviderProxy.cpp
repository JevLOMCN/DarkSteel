// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// FOptimusMorphTargetDataProviderProxy @ 14e152360

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FOptimusMorphTargetDataProviderProxy * __thiscall
FOptimusMorphTargetDataProviderProxy::FOptimusMorphTargetDataProviderProxy
          (FOptimusMorphTargetDataProviderProxy *this,USkinnedMeshComponent *param_1)

{
  int iVar1;
  FSceneInterface *pFVar2;
  
  this->_padding_ = (longlong)&___7FOptimusMorphTargetDataProviderProxy__6B_;
  this->SkeletalMeshObject = (FSkeletalMeshObject *)0x0;
  this->FrameNumber = 0;
  if (param_1 != (USkinnedMeshComponent *)0x0) {
    pFVar2 = UActorComponent::GetScene((UActorComponent *)param_1);
    if (pFVar2 != (FSceneInterface *)0x0) {
      this->SkeletalMeshObject = param_1->MeshObject;
      pFVar2 = UActorComponent::GetScene((UActorComponent *)param_1);
      iVar1 = (**(code **)(pFVar2->_padding_ + 0x4e8))(pFVar2);
      this->FrameNumber = iVar1 + 1;
    }
  }
  return this;
}

// GatherDispatchData @ 14e1b4550

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
FOptimusMorphTargetDataProviderProxy::GatherDispatchData
          (FOptimusMorphTargetDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  FRHIShaderResourceView *pFVar3;
  FSkeletalMeshRenderData *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FRHIShaderResourceView *pFVar9;
  FRHIShaderResourceView *pFVar10;
  uint uVar11;
  int iVar12;
  uchar *puVar13;
  
  pFVar3 = (GWhiteVertexBufferWithSRV->ShaderResourceViewRHI).Reference;
  uVar8 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  iVar12 = 0;
  pFVar4 = this->SkeletalMeshObject->SkeletalMeshRenderData;
  uVar11 = 0;
  if ((int)uVar8 < (pFVar4->LODRenderData).Array.ArrayNum) {
    uVar11 = ~uVar8 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar13 = param_1->ParameterBuffer + param_1->ParameterBufferOffset;
  iVar1 = param_1->ParameterBufferStride;
  iVar2 = param_1->NumInvocations;
  lVar5 = *(longlong *)
           ((pFVar4->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
  if ((iVar2 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((iVar1 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((((longlong)iVar1 & 0xfU) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (0 < iVar2) {
    do {
      pFVar9 = FSkeletalMeshDeformerHelpers::GetMorphTargetBufferForReading
                         (this->SkeletalMeshObject,uVar8,iVar12,this->FrameNumber,false);
      if ((iVar12 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined4 *)puVar13 = *(undefined4 *)(lVar5 + 300);
      pFVar10 = pFVar3;
      if (pFVar9 != (FRHIShaderResourceView *)0x0) {
        pFVar10 = pFVar9;
      }
      iVar12 = iVar12 + 1;
      *(FRHIShaderResourceView **)(puVar13 + 8) = pFVar10;
      puVar13 = puVar13 + iVar1;
    } while (iVar12 < iVar2);
  }
  return;
}

// GatherPermutations @ 14e1b6310

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
FOptimusMorphTargetDataProviderProxy::GatherPermutations
          (FOptimusMorphTargetDataProviderProxy *this,FPermutationData *param_1)

{
  FScriptContainerElement *pFVar1;
  FComputeKernelPermutationVector *this_00;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FRHIShaderResourceView *pFVar8;
  int *piVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  
  iVar5 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  this_00 = param_1->PermutationVector;
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar9 < `public:___cdecl_FMorphTargetDataInterfacePermutationIds::FMorphTargetDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                 ::__l3::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_FMorphTargetDataInterfacePermutationIds::FMorphTargetDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l3::_thread_safe_static_guard_0__),
     `public:___cdecl_FMorphTargetDataInterfacePermutationIds::FMorphTargetDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l3::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:___cdecl_FMorphTargetDataInterfacePermutationIds::FMorphTargetDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                        ::__l3::Name,L"ENABLE_DEFORMER_MORPHTARGET");
    atexit(`FMorphTargetDataInterfacePermutationIds::FMorphTargetDataInterfacePermutationIds'::__l3
           ::_dynamic_atexit_destructor_for__Name__);
    _Init_thread_footer(&`public:___cdecl_FMorphTargetDataInterfacePermutationIds::FMorphTargetDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l3::_thread_safe_static_guard_0__);
  }
  uVar10 = 0;
  if ((*piVar9 < `public:___cdecl_FMorphTargetDataInterfacePermutationIds::FMorphTargetDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                 ::__l3::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:___cdecl_FMorphTargetDataInterfacePermutationIds::FMorphTargetDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l3::_thread_safe_static_guard_1__),
     `public:___cdecl_FMorphTargetDataInterfacePermutationIds::FMorphTargetDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l3::_thread_safe_static_guard_1__ == -1)) {
    uVar6 = `public:___cdecl_FMorphTargetDataInterfacePermutationIds::FMorphTargetDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l3::Name.Data.ArrayNum - 1;
    FVar3 = `public:___cdecl_FMorphTargetDataInterfacePermutationIds::FMorphTargetDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l3::Name.Data.AllocatorInstance;
    if (`public:___cdecl_FMorphTargetDataInterfacePermutationIds::FMorphTargetDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
        ::__l3::Name.Data.ArrayNum == 0) {
      uVar6 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    `public:___cdecl_FMorphTargetDataInterfacePermutationIds::FMorphTargetDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
    ::__l3::Hash = FCrc::Strihash_DEPRECATED<wchar_t>(uVar6,(wchar_t *)FVar3.Data);
    _Init_thread_footer(&`public:___cdecl_FMorphTargetDataInterfacePermutationIds::FMorphTargetDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l3::_thread_safe_static_guard_1__);
  }
  uVar6 = FComputeKernelPermutationVector::GetPermutationBits
                    (this_00,&`public:___cdecl_FMorphTargetDataInterfacePermutationIds::FMorphTargetDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                              ::__l3::Name,
                     `public:___cdecl_FMorphTargetDataInterfacePermutationIds::FMorphTargetDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                     ::__l3::Hash,1);
  uVar12 = uVar10;
  if (0 < param_1->NumInvocations) {
    do {
      uVar11 = (uint)uVar12;
      pFVar8 = FSkeletalMeshDeformerHelpers::GetMorphTargetBufferForReading
                         (this->SkeletalMeshObject,iVar5,uVar11,this->FrameNumber,false);
      uVar13 = 0;
      if (pFVar8 != (FRHIShaderResourceView *)0x0) {
        uVar13 = uVar6;
      }
      uVar7 = 0;
      if ((int)uVar11 < (param_1->PermutationIds).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
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
      pFVar1 = (param_1->PermutationIds).AllocatorInstance.Data + uVar10;
      *(uint *)pFVar1 = *(uint *)pFVar1 | uVar13;
      uVar10 = uVar10 + 4;
      uVar12 = (ulonglong)(uVar11 + 1);
    } while ((int)(uVar11 + 1) < param_1->NumInvocations);
  }
  return;
}

// IsValid @ 14e1f0840

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
FOptimusMorphTargetDataProviderProxy::IsValid
          (FOptimusMorphTargetDataProviderProxy *this,FValidationData *param_1)

{
  FSkeletalMeshRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((param_1->ParameterStructSize == 0x10) &&
     (this->SkeletalMeshObject != (FSkeletalMeshObject *)0x0)) {
    uVar5 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
    pFVar1 = this->SkeletalMeshObject->SkeletalMeshRenderData;
    uVar6 = 0;
    if ((int)uVar5 < (pFVar1->LODRenderData).Array.ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    return *(int *)(*(longlong *)
                     ((pFVar1->LODRenderData).Array.AllocatorInstance.Data +
                     (longlong)(int)uVar5 * 8) + 0x18) == param_1->NumInvocations;
  }
  return false;
}

