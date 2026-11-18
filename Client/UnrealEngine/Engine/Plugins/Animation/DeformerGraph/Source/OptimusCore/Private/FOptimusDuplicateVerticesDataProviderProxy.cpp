// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// FOptimusDuplicateVerticesDataProviderProxy @ 14e151b30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FOptimusDuplicateVerticesDataProviderProxy * __thiscall
FOptimusDuplicateVerticesDataProviderProxy::FOptimusDuplicateVerticesDataProviderProxy
          (FOptimusDuplicateVerticesDataProviderProxy *this,USkinnedMeshComponent *param_1)

{
  this->_padding_ = (longlong)&___7FOptimusDuplicateVerticesDataProviderProxy__6B_;
  if (param_1 != (USkinnedMeshComponent *)0x0) {
    this->SkeletalMeshObject = param_1->MeshObject;
    return this;
  }
  this->SkeletalMeshObject = (FSkeletalMeshObject *)0x0;
  return this;
}

// GatherDispatchData @ 14e1b3d50

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
FOptimusDuplicateVerticesDataProviderProxy::GatherDispatchData
          (FOptimusDuplicateVerticesDataProviderProxy *this,FDispatchData *param_1)

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
  undefined4 uVar11;
  FRHIShaderResourceView *pFVar12;
  FRHIShaderResourceView *pFVar13;
  longlong lVar14;
  uchar *puVar15;
  uint uVar16;
  longlong lVar17;
  
  uVar10 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  pFVar4 = this->SkeletalMeshObject->SkeletalMeshRenderData;
  uVar16 = 0;
  if ((int)uVar10 < (pFVar4->LODRenderData).Array.ArrayNum) {
    uVar16 = ~uVar10 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar1 = param_1->NumInvocations;
  iVar2 = param_1->ParameterBufferStride;
  lVar5 = *(longlong *)
           ((pFVar4->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
  iVar3 = param_1->ParameterBufferOffset;
  puVar15 = param_1->ParameterBuffer;
  pFVar6 = (GWhiteVertexBufferWithSRV->ShaderResourceViewRHI).Reference;
  if ((iVar1 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((iVar2 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((((longlong)iVar2 & 0xfU) != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar16 = 0;
  if (0 < iVar1) {
    puVar15 = puVar15 + (longlong)iVar3 + 8;
    lVar17 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar16 < *(int *)(lVar5 + 0x18)) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar14 = *(longlong *)(lVar5 + 0x10) + lVar17;
      pFVar13 = *(FRHIShaderResourceView **)(lVar14 + 0xa8);
      pFVar7 = *(FRHIShaderResourceView **)(lVar14 + 0x90);
      if ((pFVar13 == (FRHIShaderResourceView *)0x0) || (pFVar7 == (FRHIShaderResourceView *)0x0)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      *(undefined4 *)(puVar15 + -8) = *(undefined4 *)(lVar5 + 300);
      if (bVar9) {
        uVar11 = *(undefined4 *)(lVar14 + 0xd0);
      }
      else {
        uVar11 = 0;
      }
      *(undefined4 *)(puVar15 + -4) = uVar11;
      *(undefined4 *)puVar15 = *(undefined4 *)(lVar14 + 0x10);
      pFVar12 = pFVar6;
      if (bVar9) {
        pFVar12 = pFVar13;
      }
      *(FRHIShaderResourceView **)(puVar15 + 8) = pFVar12;
      pFVar13 = pFVar6;
      if (bVar9) {
        pFVar13 = pFVar7;
      }
      uVar16 = uVar16 + 1;
      *(FRHIShaderResourceView **)(puVar15 + 0x10) = pFVar13;
      puVar15 = puVar15 + iVar2;
      lVar17 = lVar17 + 0x118;
    } while ((int)uVar16 < iVar1);
  }
  return;
}

// GatherPermutations @ 14e1b6070

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
FOptimusDuplicateVerticesDataProviderProxy::GatherPermutations
          (FOptimusDuplicateVerticesDataProviderProxy *this,FPermutationData *param_1)

{
  FScriptContainerElement *pFVar1;
  FSkeletalMeshRenderData *pFVar2;
  longlong lVar3;
  FComputeKernelPermutationVector *this_00;
  longlong lVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  
  uVar8 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  pFVar2 = this->SkeletalMeshObject->SkeletalMeshRenderData;
  uVar9 = 0;
  if ((int)uVar8 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = *(longlong *)
           ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
  this_00 = param_1->PermutationVector;
  piVar13 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar13 <
       `public:___cdecl_FDuplicateVerticesDataInterfacePermutationIds::FDuplicateVerticesDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
       ::__l3::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_FDuplicateVerticesDataInterfacePermutationIds::FDuplicateVerticesDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l3::_thread_safe_static_guard_0__),
     `public:___cdecl_FDuplicateVerticesDataInterfacePermutationIds::FDuplicateVerticesDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l3::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:___cdecl_FDuplicateVerticesDataInterfacePermutationIds::FDuplicateVerticesDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                        ::__l3::Name,L"ENABLE_DUPLICATED_VERTICES");
    atexit(`FDuplicateVerticesDataInterfacePermutationIds::
           FDuplicateVerticesDataInterfacePermutationIds'::__l3::
           _dynamic_atexit_destructor_for__Name__);
    _Init_thread_footer(&`public:___cdecl_FDuplicateVerticesDataInterfacePermutationIds::FDuplicateVerticesDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l3::_thread_safe_static_guard_0__);
  }
  if ((*piVar13 <
       `public:___cdecl_FDuplicateVerticesDataInterfacePermutationIds::FDuplicateVerticesDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
       ::__l3::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:___cdecl_FDuplicateVerticesDataInterfacePermutationIds::FDuplicateVerticesDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l3::_thread_safe_static_guard_1__),
     `public:___cdecl_FDuplicateVerticesDataInterfacePermutationIds::FDuplicateVerticesDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l3::_thread_safe_static_guard_1__ == -1)) {
    iVar12 = `public:___cdecl_FDuplicateVerticesDataInterfacePermutationIds::FDuplicateVerticesDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
             ::__l3::Name.Data.ArrayNum + -1;
    FVar6 = `public:___cdecl_FDuplicateVerticesDataInterfacePermutationIds::FDuplicateVerticesDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l3::Name.Data.AllocatorInstance;
    if (`public:___cdecl_FDuplicateVerticesDataInterfacePermutationIds::FDuplicateVerticesDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
        ::__l3::Name.Data.ArrayNum == 0) {
      iVar12 = 0;
      FVar6.Data = (FScriptContainerElement *)L"";
    }
    `public:___cdecl_FDuplicateVerticesDataInterfacePermutationIds::FDuplicateVerticesDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
    ::__l3::Hash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,(wchar_t *)FVar6.Data);
    _Init_thread_footer(&`public:___cdecl_FDuplicateVerticesDataInterfacePermutationIds::FDuplicateVerticesDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l3::_thread_safe_static_guard_1__);
  }
  uVar9 = FComputeKernelPermutationVector::GetPermutationBits
                    (this_00,&`public:___cdecl_FDuplicateVerticesDataInterfacePermutationIds::FDuplicateVerticesDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                              ::__l3::Name,
                     `public:___cdecl_FDuplicateVerticesDataInterfacePermutationIds::FDuplicateVerticesDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                     ::__l3::Hash,1);
  uVar8 = 0;
  if (0 < param_1->NumInvocations) {
    lVar14 = 0;
    lVar15 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar8 < *(int *)(lVar3 + 0x18)) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)(lVar3 + 0x10);
      if ((*(longlong *)(lVar15 + 0xa8 + lVar4) == 0) ||
         (bVar7 = true, *(longlong *)(lVar15 + 0x90 + lVar4) == 0)) {
        bVar7 = false;
      }
      uVar10 = 0;
      if (bVar7) {
        uVar10 = uVar9;
      }
      uVar11 = 0;
      if ((int)uVar8 < (param_1->PermutationIds).ArrayNum) {
        uVar11 = ~uVar8 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = uVar8 + 1;
      lVar15 = lVar15 + 0x118;
      pFVar1 = (param_1->PermutationIds).AllocatorInstance.Data + lVar14 * 4;
      *(uint *)pFVar1 = *(uint *)pFVar1 | uVar10;
      lVar14 = lVar14 + 1;
    } while ((int)uVar8 < param_1->NumInvocations);
  }
  return;
}

// IsValid @ 14e1f0620

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
FOptimusDuplicateVerticesDataProviderProxy::IsValid
          (FOptimusDuplicateVerticesDataProviderProxy *this,FValidationData *param_1)

{
  FSkeletalMeshObject *pFVar1;
  FSkeletalMeshRenderData *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((param_1->ParameterStructSize == 0x20) &&
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

