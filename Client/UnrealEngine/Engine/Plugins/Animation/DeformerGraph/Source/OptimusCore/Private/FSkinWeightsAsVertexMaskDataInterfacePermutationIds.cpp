// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// FSkinWeightsAsVertexMaskDataInterfacePermutationIds @ 14e157980

FSkinWeightsAsVertexMaskDataInterfacePermutationIds * __thiscall
FSkinWeightsAsVertexMaskDataInterfacePermutationIds::
FSkinWeightsAsVertexMaskDataInterfacePermutationIds
          (FSkinWeightsAsVertexMaskDataInterfacePermutationIds *this,
          FComputeKernelPermutationVector *param_1)

{
  ForAnyElementType FVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  
  pvVar2 = ThreadLocalStoragePointer;
  uVar7 = (ulonglong)_tls_index;
  this->EnableDeformerBones = 0;
  this->UnlimitedBoneInfluence = 0;
  this->BoneIndexUint16 = 0;
  this->BoneWeightsUint16 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)pvVar2 + uVar7 * 8) + 0x9d4c);
  if ((*piVar6 < `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                 ::__l3::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l3::_thread_safe_static_guard_0__),
     `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l3::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                        ::__l3::Name,L"ENABLE_DEFORMER_BONES");
    atexit(`FSkinWeightsAsVertexMaskDataInterfacePermutationIds::
           FSkinWeightsAsVertexMaskDataInterfacePermutationIds'::__l3::
           _dynamic_atexit_destructor_for__Name__);
    _Init_thread_footer(&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l3::_thread_safe_static_guard_0__);
  }
  iVar4 = 0;
  if ((*piVar6 < `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                 ::__l3::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l3::_thread_safe_static_guard_1__),
     `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l3::_thread_safe_static_guard_1__ == -1)) {
    iVar5 = `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l3::Name.Data.ArrayNum + -1;
    FVar1 = `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l3::Name.Data.AllocatorInstance;
    if (`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
        ::__l3::Name.Data.ArrayNum == 0) {
      iVar5 = iVar4;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
    ::__l3::Hash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar1.Data);
    _Init_thread_footer(&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l3::_thread_safe_static_guard_1__);
  }
  uVar3 = FComputeKernelPermutationVector::GetPermutationBits
                    (param_1,&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                              ::__l3::Name,
                     `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                     ::__l3::Hash,1);
  this->EnableDeformerBones = uVar3;
  if ((*piVar6 < `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                 ::__l4::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l4::_thread_safe_static_guard_2__),
     `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l4::_thread_safe_static_guard_2__ == -1)) {
    ::FString::FString(&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                        ::__l4::Name,L"GPUSKIN_UNLIMITED_BONE_INFLUENCE");
    atexit(`FSkinWeightsAsVertexMaskDataInterfacePermutationIds::
           FSkinWeightsAsVertexMaskDataInterfacePermutationIds'::__l4::
           _dynamic_atexit_destructor_for__Name__);
    _Init_thread_footer(&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l4::_thread_safe_static_guard_2__);
  }
  if ((*piVar6 < `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                 ::__l4::_thread_safe_static_guard_3__) &&
     (_Init_thread_header(&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l4::_thread_safe_static_guard_3__),
     `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l4::_thread_safe_static_guard_3__ == -1)) {
    iVar5 = `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l4::Name.Data.ArrayNum + -1;
    FVar1 = `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l4::Name.Data.AllocatorInstance;
    if (`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
        ::__l4::Name.Data.ArrayNum == 0) {
      iVar5 = iVar4;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
    ::__l4::Hash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar1.Data);
    _Init_thread_footer(&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l4::_thread_safe_static_guard_3__);
  }
  uVar3 = FComputeKernelPermutationVector::GetPermutationBits
                    (param_1,&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                              ::__l4::Name,
                     `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                     ::__l4::Hash,1);
  this->UnlimitedBoneInfluence = uVar3;
  if ((*piVar6 < `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                 ::__l5::_thread_safe_static_guard_4__) &&
     (_Init_thread_header(&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l5::_thread_safe_static_guard_4__),
     `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l5::_thread_safe_static_guard_4__ == -1)) {
    ::FString::FString(&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                        ::__l5::Name,L"GPUSKIN_BONE_INDEX_UINT16");
    atexit(`FSkinWeightsAsVertexMaskDataInterfacePermutationIds::
           FSkinWeightsAsVertexMaskDataInterfacePermutationIds'::__l5::
           _dynamic_atexit_destructor_for__Name__);
    _Init_thread_footer(&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l5::_thread_safe_static_guard_4__);
  }
  if ((*piVar6 < `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                 ::__l5::_thread_safe_static_guard_5__) &&
     (_Init_thread_header(&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l5::_thread_safe_static_guard_5__),
     `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l5::_thread_safe_static_guard_5__ == -1)) {
    iVar5 = `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l5::Name.Data.ArrayNum + -1;
    FVar1 = `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l5::Name.Data.AllocatorInstance;
    if (`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
        ::__l5::Name.Data.ArrayNum == 0) {
      iVar5 = iVar4;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
    ::__l5::Hash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar1.Data);
    _Init_thread_footer(&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l5::_thread_safe_static_guard_5__);
  }
  uVar3 = FComputeKernelPermutationVector::GetPermutationBits
                    (param_1,&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                              ::__l5::Name,
                     `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                     ::__l5::Hash,1);
  this->BoneIndexUint16 = uVar3;
  if ((*piVar6 < `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                 ::__l6::_thread_safe_static_guard_6__) &&
     (_Init_thread_header(&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l6::_thread_safe_static_guard_6__),
     `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l6::_thread_safe_static_guard_6__ == -1)) {
    ::FString::FString(&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                        ::__l6::Name,L"GPUSKIN_BONE_WEIGHTS_UINT16");
    atexit(`FSkinWeightsAsVertexMaskDataInterfacePermutationIds::
           FSkinWeightsAsVertexMaskDataInterfacePermutationIds'::__l6::
           _dynamic_atexit_destructor_for__Name__);
    _Init_thread_footer(&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l6::_thread_safe_static_guard_6__);
  }
  if ((*piVar6 < `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                 ::__l6::_thread_safe_static_guard_7__) &&
     (_Init_thread_header(&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l6::_thread_safe_static_guard_7__),
     `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l6::_thread_safe_static_guard_7__ == -1)) {
    iVar5 = `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l6::Name.Data.ArrayNum + -1;
    FVar1 = `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l6::Name.Data.AllocatorInstance;
    if (`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
        ::__l6::Name.Data.ArrayNum == 0) {
      iVar5 = iVar4;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
    ::__l6::Hash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar1.Data);
    _Init_thread_footer(&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l6::_thread_safe_static_guard_7__);
  }
  uVar3 = FComputeKernelPermutationVector::GetPermutationBits
                    (param_1,&`public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                              ::__l6::Name,
                     `public:___cdecl_FSkinWeightsAsVertexMaskDataInterfacePermutationIds::FSkinWeightsAsVertexMaskDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                     ::__l6::Hash,1);
  this->BoneWeightsUint16 = uVar3;
  return this;
}

