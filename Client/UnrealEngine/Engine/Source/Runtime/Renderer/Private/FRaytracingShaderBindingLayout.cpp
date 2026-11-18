// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FRaytracingShaderBindingLayout @ 1452fe7d0

FRaytracingShaderBindingLayout * __thiscall
RayTracing::FRaytracingShaderBindingLayout::FRaytracingShaderBindingLayout
          (FRaytracingShaderBindingLayout *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRaytracingShaderBindingLayout *pFVar5;
  FShaderParametersMetadata *local_58;
  FShaderParametersMetadata *local_50;
  FShaderParametersMetadata *local_48;
  FShaderParametersMetadata *local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<FShaderParametersMetadata_*_const,int> local_18;
  
  *(undefined4 *)this = 0;
  this->field_0x4 = 0;
  *(undefined4 *)&this->field_0x8 = 0;
  memset(&this->field_0x10,0,0xc0);
  _vector_constructor_iterator_
            (&this->field_0x10,0x18,8,
             FRHIUniformBufferShaderBindingLayout::FRHIUniformBufferShaderBindingLayout);
  *(undefined4 *)&this->field_0xd0 = 0;
  this->field_0xd4 = 0;
  *(undefined4 *)&this->field_0xd8 = 0;
  memset(&this->field_0xe0,0,0xc0);
  _vector_constructor_iterator_
            (&this->field_0xe0,0x18,8,
             FRHIUniformBufferShaderBindingLayout::FRHIUniformBufferShaderBindingLayout);
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  local_58 = FindUniformBufferStructByName(L"Scene");
  if (((local_38.Data <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 < local_38.Data + (longlong)local_30._4_4_ * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FRaytracingShaderBindingLayout *)(*pcVar2)();
    return pFVar5;
  }
  iVar4 = (int)local_30;
  if ((int)local_30 == local_30._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_38,(int *)((longlong)&local_30 + 4));
  }
  *(FShaderParametersMetadata **)(local_38.Data + (longlong)iVar4 * 8) = local_58;
  local_30._0_4_ = iVar4 + 1;
  local_50 = FindUniformBufferStructByName(L"View");
  if (((local_38.Data <= (FScriptContainerElement *)&local_50) &&
      ((FScriptContainerElement *)&local_50 < local_38.Data + (longlong)local_30._4_4_ * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FRaytracingShaderBindingLayout *)(*pcVar2)();
    return pFVar5;
  }
  if ((int)local_30 == local_30._4_4_) {
    local_30._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_38,(int *)((longlong)&local_30 + 4));
  }
  *(FShaderParametersMetadata **)(local_38.Data + (longlong)(int)local_30 * 8) = local_50;
  local_30._0_4_ = (int)local_30 + 1;
  local_48 = FindUniformBufferStructByName(L"NaniteRayTracing");
  if (((local_38.Data <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 < local_38.Data + (longlong)local_30._4_4_ * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FRaytracingShaderBindingLayout *)(*pcVar2)();
    return pFVar5;
  }
  if ((int)local_30 == local_30._4_4_) {
    local_30._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_38,(int *)((longlong)&local_30 + 4));
  }
  *(FShaderParametersMetadata **)(local_38.Data + (longlong)(int)local_30 * 8) = local_48;
  local_30._0_4_ = (int)local_30 + 1;
  local_40 = FindUniformBufferStructByName(L"LumenHardwareRayTracingUniformBuffer");
  if (((local_38.Data <= (FScriptContainerElement *)&local_40) &&
      ((FScriptContainerElement *)&local_40 < local_38.Data + (longlong)local_30._4_4_ * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FRaytracingShaderBindingLayout *)(*pcVar2)();
    return pFVar5;
  }
  iVar4 = (int)local_30;
  if ((int)local_30 == local_30._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_38,(int *)((longlong)&local_30 + 4));
  }
  iVar1 = iVar4 + 1;
  local_30 = CONCAT44(local_30._4_4_,iVar1);
  *(FShaderParametersMetadata **)(local_38.Data + (longlong)iVar4 * 8) = local_40;
  local_28 = local_38.Data;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FRaytracingShaderBindingLayout *)(*pcVar2)();
    return pFVar5;
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = (FShaderParametersMetadata **)local_28;
  iStack_20 = iVar1;
  BuildShaderBindingLayout(&local_18,None,(FShaderBindingLayoutContainer *)this);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return this;
}

