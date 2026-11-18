// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 5

// FCompileRayTracingPipelineStateTask @ 145c85c30

/* WARNING: Type propagation algorithm not settling */

FCompileRayTracingPipelineStateTask * __thiscall
FCompileRayTracingPipelineStateTask::FCompileRayTracingPipelineStateTask
          (FCompileRayTracingPipelineStateTask *this,FPipelineStateSync *param_1,
          FRayTracingPipelineStateInitializer *param_2,bool param_3)

{
  TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  FRHIRayTracingShader **ppFVar6;
  int iVar7;
  FRHIShaderBindingLayout *pFVar8;
  code *pcVar9;
  TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> *pTVar10;
  FRHIUniformBufferShaderBindingLayout *pFVar11;
  bool bVar12;
  TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> *pTVar13;
  FCompileRayTracingPipelineStateTask *pFVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  FRHIRayTracingShader **ppFVar18;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> local_68;
  TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> local_58;
  TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> local_48;
  TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> local_38;
  
  this->Pipeline = param_1;
  FRayTracingPipelineStateInitializer::FRayTracingPipelineStateInitializer
            (&this->Initializer,param_2);
  this->bBackgroundTask = param_3;
  pTVar1 = &this->RayGenTable;
  (this->ShaderBindingLayout).Hash = 0;
  pTVar2 = &this->MissTable;
  (this->ShaderBindingLayout).Flags = None;
  pTVar3 = &this->HitGroupTable;
  (this->ShaderBindingLayout).NumUniformBufferEntries = 0;
  pTVar4 = &this->CallableTable;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->RayGenTable).ArrayNum = 0;
  (this->RayGenTable).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MissTable).ArrayNum = 0;
  (this->MissTable).ArrayMax = 0;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->HitGroupTable).ArrayNum = 0;
  (this->HitGroupTable).ArrayMax = 0;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->CallableTable).ArrayNum = 0;
  (this->CallableTable).ArrayMax = 0;
  *(undefined4 *)&(this->ShaderBindingLayout).UniformBufferEntries.Elements[0].field_0x14 = 0;
  *(undefined4 *)&(this->ShaderBindingLayout).UniformBufferEntries.Elements[1].field_0x14 = 0;
  *(undefined4 *)&(this->ShaderBindingLayout).UniformBufferEntries.Elements[2].field_0x14 = 0;
  *(undefined4 *)&(this->ShaderBindingLayout).UniformBufferEntries.Elements[3].field_0x14 = 0;
  *(undefined4 *)&(this->ShaderBindingLayout).UniformBufferEntries.Elements[4].field_0x14 = 0;
  *(undefined4 *)&(this->ShaderBindingLayout).UniformBufferEntries.Elements[5].field_0x14 = 0;
  *(undefined4 *)&(this->ShaderBindingLayout).UniformBufferEntries.Elements[6].field_0x14 = 0;
  *(undefined4 *)&(this->ShaderBindingLayout).UniformBufferEntries.Elements[7].field_0x14 = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[0].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pTVar10 = &(this->ShaderBindingLayout).UniformBufferEntries;
  pTVar10->Elements[0].LayoutName.Data.ArrayNum = 0;
  pTVar10->Elements[0].LayoutName.Data.ArrayMax = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[0].field1_0x10.Flags = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[1].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar11 = (this->ShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar11[1].LayoutName.Data.ArrayNum = 0;
  pFVar11[1].LayoutName.Data.ArrayMax = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[1].field1_0x10.Flags = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[2].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar11 = (this->ShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar11[2].LayoutName.Data.ArrayNum = 0;
  pFVar11[2].LayoutName.Data.ArrayMax = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[2].field1_0x10.Flags = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[3].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar11 = (this->ShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar11[3].LayoutName.Data.ArrayNum = 0;
  pFVar11[3].LayoutName.Data.ArrayMax = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[3].field1_0x10.Flags = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[4].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar11 = (this->ShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar11[4].LayoutName.Data.ArrayNum = 0;
  pFVar11[4].LayoutName.Data.ArrayMax = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[4].field1_0x10.Flags = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[5].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar11 = (this->ShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar11[5].LayoutName.Data.ArrayNum = 0;
  pFVar11[5].LayoutName.Data.ArrayMax = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[5].field1_0x10.Flags = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[6].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar11 = (this->ShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar11[6].LayoutName.Data.ArrayNum = 0;
  pFVar11[6].LayoutName.Data.ArrayMax = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[6].field1_0x10.Flags = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[7].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar11 = (this->ShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar11[7].LayoutName.Data.ArrayNum = 0;
  pFVar11[7].LayoutName.Data.ArrayMax = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[7].field1_0x10.Flags = 0;
  (this->Initializer).bBackgroundCompilation = this->bBackgroundTask;
  pTVar13 = CopyShaderTable(this,&local_68,&param_2->RayGenTable);
  if (pTVar1 != pTVar13) {
    pFVar16 = (pTVar1->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->RayGenTable).ArrayNum = pTVar13->ArrayNum;
    (this->RayGenTable).ArrayMax = pTVar13->ArrayMax;
    pTVar13->ArrayNum = 0;
    pTVar13->ArrayMax = 0;
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  pTVar13 = CopyShaderTable(this,&local_58,&param_2->MissTable);
  if (pTVar2 != pTVar13) {
    pFVar16 = (pTVar2->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->MissTable).ArrayNum = pTVar13->ArrayNum;
    (this->MissTable).ArrayMax = pTVar13->ArrayMax;
    pTVar13->ArrayNum = 0;
    pTVar13->ArrayMax = 0;
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  pTVar13 = CopyShaderTable(this,&local_48,&param_2->HitGroupTable);
  if (pTVar3 != pTVar13) {
    pFVar16 = (pTVar3->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->HitGroupTable).ArrayNum = pTVar13->ArrayNum;
    (this->HitGroupTable).ArrayMax = pTVar13->ArrayMax;
    pTVar13->ArrayNum = 0;
    pTVar13->ArrayMax = 0;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  pTVar13 = CopyShaderTable(this,&local_38,&param_2->CallableTable);
  if (pTVar4 != pTVar13) {
    pFVar16 = (pTVar4->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CallableTable).ArrayNum = pTVar13->ArrayNum;
    (this->CallableTable).ArrayMax = pTVar13->ArrayMax;
    pTVar13->ArrayNum = 0;
    pTVar13->ArrayMax = 0;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  pFVar16 = (pTVar1->AllocatorInstance).Data;
  iVar7 = (this->RayGenTable).ArrayNum;
  uVar17 = param_2->_padding_;
  if ((iVar7 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    pFVar14 = (FCompileRayTracingPipelineStateTask *)(*pcVar9)();
    return pFVar14;
  }
  (this->Initializer).RayGenTable.DataPtr = (FRHIRayTracingShader **)pFVar16;
  *(ulonglong *)&(this->Initializer).RayGenTable.ArrayNum = CONCAT44(uStack_8c,iVar7);
  if (uVar17 == 0) {
    pFVar5 = pFVar16 + (longlong)iVar7 * 8;
    uVar17 = 0x4f1a08f64cae0c3d;
    for (; pFVar16 != pFVar5; pFVar16 = pFVar16 + 8) {
      lVar15 = 0;
      if (*(longlong *)pFVar16 != 0) {
        lVar15 = *(longlong *)(*(longlong *)pFVar16 + 0xf0);
      }
      uVar17 = uVar17 ^ lVar15 + uVar17 * 0x40 + (uVar17 >> 2) + 0x9e3779b9;
    }
  }
  (this->Initializer)._padding_ = uVar17;
  iVar7 = (this->MissTable).ArrayNum;
  pFVar16 = (pTVar2->AllocatorInstance).Data;
  uVar17 = param_2->_padding_;
  if ((iVar7 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    pFVar14 = (FCompileRayTracingPipelineStateTask *)(*pcVar9)();
    return pFVar14;
  }
  (this->Initializer).MissTable.DataPtr = (FRHIRayTracingShader **)pFVar16;
  *(ulonglong *)&(this->Initializer).MissTable.ArrayNum = CONCAT44(uStack_7c,iVar7);
  if (uVar17 == 0) {
    pFVar5 = pFVar16 + (longlong)iVar7 * 8;
    uVar17 = 0x4f1a08f64cae0c3d;
    for (; pFVar16 != pFVar5; pFVar16 = pFVar16 + 8) {
      lVar15 = 0;
      if (*(longlong *)pFVar16 != 0) {
        lVar15 = *(longlong *)(*(longlong *)pFVar16 + 0xf0);
      }
      uVar17 = uVar17 ^ lVar15 + uVar17 * 0x40 + (uVar17 >> 2) + 0x9e3779b9;
    }
  }
  (this->Initializer)._padding_ = uVar17;
  pFVar16 = (pTVar3->AllocatorInstance).Data;
  iVar7 = (this->HitGroupTable).ArrayNum;
  uVar17 = param_2->_padding_;
  if ((iVar7 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    pFVar14 = (FCompileRayTracingPipelineStateTask *)(*pcVar9)();
    return pFVar14;
  }
  (this->Initializer).HitGroupTable.DataPtr = (FRHIRayTracingShader **)pFVar16;
  *(ulonglong *)&(this->Initializer).HitGroupTable.ArrayNum = CONCAT44(uStack_6c,iVar7);
  if (uVar17 == 0) {
    ppFVar18 = (this->Initializer).HitGroupTable.DataPtr;
    uVar17 = 0x4f1a08f64cae0c3d;
    ppFVar6 = ppFVar18 + (this->Initializer).HitGroupTable.ArrayNum;
    for (; ppFVar18 != ppFVar6; ppFVar18 = ppFVar18 + 1) {
      lVar15 = 0;
      if (*ppFVar18 != (FRHIRayTracingShader *)0x0) {
        lVar15 = (*ppFVar18)->_padding_;
      }
      uVar17 = uVar17 ^ lVar15 + uVar17 * 0x40 + (uVar17 >> 2) + 0x9e3779b9;
    }
  }
  (this->Initializer)._padding_ = uVar17;
  pFVar16 = (this->CallableTable).AllocatorInstance.Data;
  iVar7 = (this->CallableTable).ArrayNum;
  uVar17 = param_2->_padding_;
  if ((iVar7 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    pFVar14 = (FCompileRayTracingPipelineStateTask *)(*pcVar9)();
    return pFVar14;
  }
  (this->Initializer).CallableTable.DataPtr = (FRHIRayTracingShader **)pFVar16;
  *(ulonglong *)&(this->Initializer).CallableTable.ArrayNum = CONCAT44(uStack_6c,iVar7);
  if (uVar17 == 0) {
    ppFVar18 = (this->Initializer).CallableTable.DataPtr;
    ppFVar6 = ppFVar18 + (this->Initializer).CallableTable.ArrayNum;
    uVar17 = 0x4f1a08f64cae0c3d;
    for (; ppFVar18 != ppFVar6; ppFVar18 = ppFVar18 + 1) {
      lVar15 = 0;
      if (*ppFVar18 != (FRHIRayTracingShader *)0x0) {
        lVar15 = (*ppFVar18)->_padding_;
      }
      uVar17 = uVar17 ^ lVar15 + uVar17 * 0x40 + (uVar17 >> 2) + 0x9e3779b9;
    }
  }
  (this->Initializer)._padding_ = uVar17;
  pFVar8 = param_2->ShaderBindingLayout;
  if (pFVar8 != (FRHIShaderBindingLayout *)0x0) {
    (this->ShaderBindingLayout).Hash = pFVar8->Hash;
    (this->ShaderBindingLayout).Flags = pFVar8->Flags;
    (this->ShaderBindingLayout).NumUniformBufferEntries = pFVar8->NumUniformBufferEntries;
    TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>::operator=
              (&(this->ShaderBindingLayout).UniformBufferEntries,&pFVar8->UniformBufferEntries);
    (this->Initializer).ShaderBindingLayout = &this->ShaderBindingLayout;
  }
  return this;
}

// ~FCompileRayTracingPipelineStateTask @ 145c8a730

void __thiscall
FCompileRayTracingPipelineStateTask::~FCompileRayTracingPipelineStateTask
          (FCompileRayTracingPipelineStateTask *this)

{
  FScriptContainerElement *pFVar1;
  FRHIRayTracingPipelineState *this_00;
  longlong lVar2;
  FCompileRayTracingPipelineStateTask *pFVar3;
  
  pFVar3 = this + 1;
  lVar2 = 8;
  do {
    pFVar1 = pFVar3[-1].ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data.
             AllocatorInstance.Data;
    pFVar3 = (FCompileRayTracingPipelineStateTask *)
             (pFVar3[-1].ShaderBindingLayout.UniformBufferEntries.Elements + 7);
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  pFVar1 = (this->CallableTable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HitGroupTable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MissTable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RayGenTable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->Initializer).BasePipeline.Reference;
  if (this_00 != (FRHIRayTracingPipelineState *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  return;
}

// CopyShaderTable @ 145c98b90

TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> * __thiscall
FCompileRayTracingPipelineStateTask::CopyShaderTable
          (FCompileRayTracingPipelineStateTask *this,
          TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<FRHIRayTracingShader_*,int> *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  FRHIRayTracingShader **_Src;
  code *pcVar5;
  bool bVar6;
  TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  uVar3 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if ((_Src == (FRHIRayTracingShader **)0x0) && (uVar3 != 0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x2d3,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->ArrayNum = uVar3;
  if (uVar3 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,0,&__return_storage_ptr__->AllocatorInstance,uVar3,
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)(int)uVar3 << 3);
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  iVar4 = __return_storage_ptr__->ArrayNum;
  pFVar2 = pFVar8 + (longlong)iVar4 * 8;
  while( true ) {
    if (__return_storage_ptr__->ArrayNum != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FRHIRayTracingShader_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar8 == pFVar2) break;
    LOCK();
    puVar1 = (uint *)(*(longlong *)pFVar8 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((int)uVar3 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(OldPacked & DeletingBit) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x99,L"Resource is being deleted.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar7;
      }
    }
    if (0x3ffffffe < (uVar3 & 0x3fffffff) + 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRefs < NumRefsMask",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x9b,L"Reference count has overflowed.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar7;
      }
    }
    pFVar8 = pFVar8 + 8;
  }
  return __return_storage_ptr__;
}

// DoTask @ 145c9b3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCompileRayTracingPipelineStateTask::DoTask
          (FCompileRayTracingPipelineStateTask *this,Type param_1,
          TRefCountPtr<FBaseGraphTask> *param_2)

{
  TRefCountPtr<FRHIRayTracingPipelineState> *pTVar1;
  FRHIResource *this_00;
  FRHIRayTracingPipelineState *this_01;
  code *pcVar2;
  bool bVar3;
  FPipelineStateSync *pFVar4;
  FPipelineStateSync local_98;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60 [2];
  FRHIRayTracingShader **local_50;
  undefined8 uStack_48;
  FRHIRayTracingShader **local_40;
  undefined8 uStack_38;
  FRHIRayTracingShader **local_30;
  undefined8 uStack_28;
  FRHIRayTracingShader **local_20;
  undefined8 uStack_18;
  
  pFVar4 = this->Pipeline + 1;
  if (pFVar4->_padding_ != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!RayTracingPipeline->RHIPipeline.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0xf36,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x4a8))(GDynamicRHI,&local_98,&this->Initializer);
  if (pFVar4 != &local_98) {
    this_00 = (FRHIResource *)pFVar4->_padding_;
    pFVar4->_padding_ = local_98._padding_;
    local_98._padding_ = 0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_145c9b441;
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_98._padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_98._padding_);
  }
LAB_145c9b441:
  ReleaseShaders(this,&this->CallableTable);
  ReleaseShaders(this,&this->HitGroupTable);
  ReleaseShaders(this,&this->MissTable);
  ReleaseShaders(this,&this->RayGenTable);
  local_98._padding_._0_4_ = 8;
  local_98._padding_._4_4_ = 0x18;
  local_98.CompletionEvent.Reference = (FBaseGraphTask *)0x0;
  local_98.PrecompileTask.Ptr = (FPSOPrecacheAsyncTask *)0x0;
  uStack_78 = 0;
  uStack_48 = 0;
  (this->Initializer)._padding_ = 0x1800000008;
  (this->Initializer)._padding_ = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_18 = 0;
  (this->Initializer).bPartial = false;
  (this->Initializer).bBackgroundCompilation = false;
  pTVar1 = &(this->Initializer).BasePipeline;
  local_70 = 0;
  local_50 = (FRHIRayTracingShader **)0x0;
  local_40 = (FRHIRayTracingShader **)0x0;
  local_30 = (FRHIRayTracingShader **)0x0;
  local_20 = (FRHIRayTracingShader **)0x0;
  (this->Initializer)._padding_ = 0;
  (this->Initializer)._padding_ = 0;
  (this->Initializer)._padding_ = 0;
  if (pTVar1 != (TRefCountPtr<FRHIRayTracingPipelineState> *)local_60) {
    this_01 = pTVar1->Reference;
    pTVar1->Reference = (FRHIRayTracingPipelineState *)0x0;
    if (this_01 != (FRHIRayTracingPipelineState *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  (this->Initializer).ShaderBindingLayout = (FRHIShaderBindingLayout *)0x0;
  (this->Initializer).RayGenTable.DataPtr = local_50;
  *(undefined8 *)&(this->Initializer).RayGenTable.ArrayNum = uStack_48;
  (this->Initializer).MissTable.DataPtr = local_40;
  *(undefined8 *)&(this->Initializer).MissTable.ArrayNum = uStack_38;
  (this->Initializer).HitGroupTable.DataPtr = local_30;
  *(undefined8 *)&(this->Initializer).HitGroupTable.ArrayNum = uStack_28;
  (this->Initializer).CallableTable.DataPtr = local_20;
  *(undefined8 *)&(this->Initializer).CallableTable.ArrayNum = uStack_18;
  return;
}

// ReleaseShaders @ 145cbcf80

void __thiscall
FCompileRayTracingPipelineStateTask::ReleaseShaders
          (FCompileRayTracingPipelineStateTask *this,
          TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *paVar2;
  uint uVar3;
  int iVar4;
  atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> aVar5;
  code *pcVar6;
  TConsumeAllMpmcQueue<FRHIResource_*,FMemory> TVar7;
  bool bVar8;
  atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> aVar9;
  TConsumeAllMpmcQueue<FRHIResource_*,FMemory> TVar10;
  atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *paVar11;
  uint uVar12;
  undefined1 local_res10 [8];
  
  paVar11 = (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)
            (param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum;
  paVar2 = paVar11 + iVar4;
  do {
    while( true ) {
      if (param_1->ArrayNum != iVar4) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FRHIRayTracingShader_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (paVar11 == paVar2) {
        return;
      }
      aVar5 = *paVar11;
      LOCK();
      puVar1 = (uint *)((longlong)aVar5 + 8);
      uVar12 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (((int)uVar12 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(OldPacked & DeletingBit) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0xa2,L"Resource is being deleted."), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar12 = uVar12 & 0x3fffffff;
      if (uVar12 != 0) break;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRefs >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xa4,L"Reference count has underflowed.");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewValue >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x53,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
LAB_145cbd11e:
      paVar11 = paVar11 + 1;
    }
    if (uVar12 != 1) goto LAB_145cbd11e;
    uVar12 = *(uint *)((longlong)aVar5 + 8);
    do {
      LOCK();
      uVar3 = *(uint *)((longlong)aVar5 + 8);
      bVar8 = uVar12 == uVar3;
      if (bVar8) {
        *(uint *)((longlong)aVar5 + 8) = uVar12 | 0x40000000;
        uVar3 = uVar12;
      }
      uVar12 = uVar3;
      UNLOCK();
    } while (!bVar8);
    if (((int)uVar12 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(OldPacked & DeletingBit) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xab,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((uVar12 >> 0x1e & 1) != 0) goto LAB_145cbd11e;
    if ((*(byte *)((longlong)aVar5 + 0xd) & 2) == 0) {
      aVar9 = (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)
              FMemory::Malloc(0x10,8);
      *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)aVar9 =
           (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)0x0;
      *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)((longlong)aVar9 + 8) =
           aVar5;
      TVar10 = PendingDeletes;
      do {
        *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)aVar9 = TVar10.Head;
        LOCK();
        bVar8 = TVar10.Head != PendingDeletes.Head;
        TVar7.Head = aVar9;
        if (bVar8) {
          TVar10 = PendingDeletes;
          TVar7 = PendingDeletes;
        }
        PendingDeletes.Head = TVar7.Head;
        UNLOCK();
      } while (bVar8);
      goto LAB_145cbd11e;
    }
    aVar9 = (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)
            FMemory::Malloc(0x10,8);
    *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)aVar9 =
         (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)0x0;
    *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)((longlong)aVar9 + 8) =
         aVar5;
    TVar10 = PendingDeletesWithLifetimeExtension;
    do {
      *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)aVar9 = TVar10.Head;
      LOCK();
      bVar8 = TVar10.Head != PendingDeletesWithLifetimeExtension.Head;
      TVar7.Head = aVar9;
      if (bVar8) {
        TVar10 = PendingDeletesWithLifetimeExtension;
        TVar7 = PendingDeletesWithLifetimeExtension;
      }
      PendingDeletesWithLifetimeExtension.Head = TVar7.Head;
      UNLOCK();
    } while (bVar8);
    paVar11 = paVar11 + 1;
  } while( true );
}

