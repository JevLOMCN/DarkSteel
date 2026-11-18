// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FHairStrandsInstanceParameters @ 14499e170

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FHairStrandsInstanceParameters * __thiscall
FHairStrandsInstanceParameters::FHairStrandsInstanceParameters(FHairStrandsInstanceParameters *this)

{
  *(undefined4 *)&(this->HairStrandsVF).Culling.CullingIndirectBufferArgs.field_0x8 = 4;
  (this->HairStrandsVF).Resources.PositionBuffer = (FRDGBufferSRV *)0x0;
  (this->HairStrandsVF).Resources.PositionOffsetBuffer = (FRDGBufferSRV *)0x0;
  (this->HairStrandsVF).Resources.CurveBuffer = (FRDGBufferSRV *)0x0;
  (this->HairStrandsVF).Resources.PointToCurveBuffer = (FRDGBufferSRV *)0x0;
  (this->HairStrandsVF).Resources.CurveAttributeBuffer = (FRDGBufferSRV *)0x0;
  (this->HairStrandsVF).Resources.PointAttributeBuffer = (FRDGBufferSRV *)0x0;
  (this->HairStrandsVF).Resources.CurveMappingBuffer = (FRDGBufferSRV *)0x0;
  (this->HairStrandsVF).Resources.PointMappingBuffer = (FRDGBufferSRV *)0x0;
  (this->HairStrandsVF).Culling.CullingIndirectBuffer = (FRDGBufferSRV *)0x0;
  (this->HairStrandsVF).Culling.CullingIndexBuffer = (FRDGBufferSRV *)0x0;
  *(undefined8 *)&(this->HairStrandsVF).Culling.CullingIndirectBufferArgs = 0;
  return this;
}

// zzAppendMemberGetPrev @ 144a0c470

void * __cdecl
FHairStrandsInstanceParameters::zzAppendMemberGetPrev
          (zzFirstMemberId param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  return (void *)0x0;
}

// zzAppendMemberGetPrev @ 144a0c480

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void * __cdecl
FHairStrandsInstanceParameters::zzAppendMemberGetPrev
          (zzNextMemberIdHairStrandsVF param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 local_res10;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_58;
  wchar_t *local_48;
  wchar_t *pwStack_40;
  undefined8 local_38;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined8 local_28;
  FShaderParametersMetadata *pFStack_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHairStrandsInstanceIntermediateParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHairStrandsInstanceIntermediateParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHairStrandsInstanceIntermediateParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar6 = FHairStrandsInstanceIntermediateParameters::zzAppendMemberGetPrev;
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      do {
        pcVar6 = (code *)(*pcVar6)(local_res10,&local_58);
      } while (pcVar6 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHairStrandsInstanceIntermediateParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FHairStrandsInstanceIntermediateParameters",
                 L"FHairStrandsInstanceIntermediateParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\HairStrandsInterface.h"
                 ,0x81,0x1b0,&local_58,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_58.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      atexit(`FHairStrandsInstanceIntermediateParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHairStrandsInstanceIntermediateParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_48 = L"HairStrandsVF";
  pwStack_40 = L"FHairStrandsInstanceIntermediateParameters";
  pFStack_20 = &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHairStrandsInstanceIntermediateParameters::FTypeInfo::GetStructMetadata(void)'
                ::__l2::StaticStructMetadata;
  local_38 = 0x88;
  uStack_30 = 0x14;
  uStack_2c = 1;
  local_28 = 1;
  if ((pFVar1 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar6 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar6)();
      return pvVar4;
    }
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar5 = (longlong)iVar3;
  param_2->ArrayNum = iVar3 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar5 * 0x30) = local_48;
  *(wchar_t **)(pFVar1 + lVar5 * 0x30 + 8) = pwStack_40;
  *(undefined8 *)(pFVar1 + lVar5 * 0x30 + 0x10) = local_38;
  *(ulonglong *)(pFVar1 + lVar5 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_2c,CONCAT22(uStack_2e,uStack_30));
  *(undefined8 *)(pFVar1 + lVar5 * 0x30 + 0x20) = local_28;
  *(FShaderParametersMetadata **)(pFVar1 + lVar5 * 0x30 + 0x20 + 8) = pFStack_20;
  return zzAppendMemberGetPrev;
}

