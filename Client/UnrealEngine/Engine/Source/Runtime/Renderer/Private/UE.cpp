// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 603

// ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_> @ 144724620

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<unsigned_char> *param_5,
          int param_6,int *param_7)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      uVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      uVar1 = (uint)(uVar2 / uVar3);
      if ((int)uVar1 < param_3) {
        uVar1 = 0x7fffffff;
      }
    }
  }
  if ((int)uVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  uVar4 = uVar1;
  if (uVar1 < 9) {
    if (param_5->SecondaryData == (ForElementType<unsigned_char>)0x0) goto LAB_14472468e;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_5->SecondaryData,0,uVar4,uVar3);
LAB_14472468e:
  *param_7 = uVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIUniformBuffer_*>_> @ 1447246d0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIUniformBuffer_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FRHIUniformBuffer_*> *param_5,int param_6,int *param_7)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      uVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      uVar1 = (uint)(uVar2 / uVar3);
      if ((int)uVar1 < param_3) {
        uVar1 = 0x7fffffff;
      }
    }
  }
  if ((int)uVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  uVar4 = uVar1;
  if (uVar1 < 9) {
    if (param_5->SecondaryData == (ForElementType<FRHIUniformBuffer_*>)0x0) goto LAB_14472473e;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_5->SecondaryData,0,uVar4,uVar3);
LAB_14472473e:
  *param_7 = uVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInputStream>_> @ 144724780

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInputStream>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FVertexInputStream> *param_5,int param_6,int *param_7)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 8) {
      uVar1 = 7;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      uVar1 = (uint)(uVar2 / uVar3);
      if ((int)uVar1 < param_3) {
        uVar1 = 0x7fffffff;
      }
    }
  }
  if ((int)uVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  uVar4 = uVar1;
  if (uVar1 < 8) {
    if (param_5->SecondaryData == (ForElementType<FVertexInputStream>)0x0) goto LAB_1447247ee;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_5->SecondaryData,0,uVar4,uVar3);
LAB_1447247ee:
  *param_7 = uVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRenderTargetBinding>_> @ 144724830

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRenderTargetBinding>_>
          (ushort param_1,ForElementType<FRenderTargetBinding> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRenderTargetBinding>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>_> @ 144724900

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>_>
          (ushort param_1,ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 4) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ELightMapPolicyType>_> @ 1447249d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ELightMapPolicyType>_>
          (ushort param_1,ForElementType<ELightMapPolicyType> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_ELightMapPolicyType>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_> @ 144724aa0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
          (ushort param_1,ForElementType<EPixelFormat> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_*>_> @ 144724b70

/* WARNING: Removing unreachable block (ram,0x000144724bb7) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_*>_>
          (ushort param_1,ForElementType<FPrimitiveSceneInfo_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FPrimitiveSceneInfo_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_> @ 144724c00

/* WARNING: Removing unreachable block (ram,0x000144724c47) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
          (ushort param_1,ForElementType<FRDGBuffer_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGDispatchPass_*>_> @ 144724c90

/* WARNING: Removing unreachable block (ram,0x000144724cd7) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGDispatchPass_*>_>
          (ushort param_1,ForElementType<FRDGDispatchPass_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGDispatchPass_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_> @ 144724d20

/* WARNING: Removing unreachable block (ram,0x000144724d67) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
          (ushort param_1,ForElementType<FRDGPass_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTexture_*>_> @ 144724db0

/* WARNING: Removing unreachable block (ram,0x000144724df7) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTexture_*>_>
          (ushort param_1,ForElementType<FRDGTexture_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGTexture_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGUniformBuffer_*>_> @ 144724e40

/* WARNING: Removing unreachable block (ram,0x000144724e87) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGUniformBuffer_*>_>
          (ushort param_1,ForElementType<FRDGUniformBuffer_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGUniformBuffer_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_> @ 144724ed0

/* WARNING: Removing unreachable block (ram,0x000144724f17) */

int __cdecl
UE::Core::Private::ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
          (ushort param_1,ForElementType<FRDGView_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGView_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FAsyncSetupOp>_> @ 144724f60

/* WARNING: Removing unreachable block (ram,0x000144724fa7) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FAsyncSetupOp>_>
          (ushort param_1,ForElementType<FRDGBuilder::FAsyncSetupOp> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FAsyncSetupOp>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FExtractedTexture>_> @ 144724ff0

/* WARNING: Removing unreachable block (ram,0x000144725037) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FExtractedTexture>_>
          (ushort param_1,ForElementType<FRDGBuilder::FExtractedTexture> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FExtractedTexture>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleMeshDrawCommand>_> @ 144725080

/* WARNING: Removing unreachable block (ram,0x0001447250c7) */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleMeshDrawCommand>_>
          (ushort param_1,ForElementType<FVisibleMeshDrawCommand> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FVisibleMeshDrawCommand>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FCompositionLighting::FAOConfig>_> @ 144725110

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FCompositionLighting::FAOConfig>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FCompositionLighting::FAOConfig> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 9) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FCompositionLighting::FAOConfig>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>_> @ 1447251f0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 4) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FInstanceDraw>_> @ 1447252d0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FInstanceDraw>_>
          (uint param_1,uint param_2,int param_3,ForElementType<Nanite::FInstanceDraw> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  FInstanceDraw *_Src;
  FInstanceDraw *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_5;
  iVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar4 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = (ulonglong)param_1;
    uVar3 = (ulonglong)(int)uVar1;
    if (iVar4 == 0) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = (uVar3 * 3 >> 3) + 0x10 + uVar3;
    }
    iVar4 = (int)uVar5;
    if (iVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
    else if (iVar4 < 0) goto LAB_1447253dc;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_1447253dc:
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (FInstanceDraw *)0x0;
    _Src = param_4->Data;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar6,4);
      if ((_Src != (FInstanceDraw *)0x0) && (uVar3 = (ulonglong)_Src[-1].ViewId, uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FPackedView>_> @ 144725400

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FPackedView>_>
          (uint param_1,uint param_2,int param_3,ForElementType<Nanite::FPackedView> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  FPackedView *_Src;
  FPackedView *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_5;
  iVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar4 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = (ulonglong)param_1;
    uVar3 = (ulonglong)(int)uVar1;
    if (iVar4 == 0) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = (uVar3 * 3 >> 3) + 0x10 + uVar3;
    }
    iVar4 = (int)uVar5;
    if (iVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
    else if (iVar4 < 0) goto LAB_14472550c;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_14472550c:
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (FPackedView *)0x0;
    _Src = param_4->Data;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar6,0x10);
      if ((_Src != (FPackedView *)0x0) &&
         (uVar3 = (ulonglong)(uint)_Src[-1].SceneRendererPrimaryViewId, uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FCompositionLighting::FAOConfig>_> @ 1447255d0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FCompositionLighting::FAOConfig>_>
          (uint param_1,uint param_2,ForElementType<FCompositionLighting::FAOConfig> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 9) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FCompositionLighting::FAOConfig>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 144725700

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<int> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_> @ 144725780

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
          (uint param_1,uint param_2,int param_3,ForElementType<EPixelFormat> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType> @ 1447f0db0

void __cdecl
UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
          (uint param_1,uint param_2,int param_3,int param_4,ForAnyElementType *param_5,int param_6,
          int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  
  iVar1 = 0;
  if (param_3 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_3 * (longlong)(int)param_1,param_2);
    iVar1 = (int)(uVar2 / (ulonglong)(longlong)(int)param_1);
    if (iVar1 < param_3) {
      iVar1 = 0x7fffffff;
    }
  }
  if (param_4 < iVar1) {
    FMemoryImageAllocatorBase::ResizeAllocation
              ((FMemoryImageAllocatorBase *)param_5,0,iVar1,(ulonglong)param_1,param_2);
    *param_7 = iVar1;
  }
  else {
    *param_7 = param_4;
  }
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_> @ 1447f0e50

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Math::TPlane<double>_> *param_5,int param_6,int *param_7)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 7) {
      uVar1 = 6;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      uVar1 = (uint)(uVar2 / uVar3);
      if ((int)uVar1 < param_3) {
        uVar1 = 0x7fffffff;
      }
    }
  }
  if ((int)uVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  uVar4 = uVar1;
  if (uVar1 < 7) {
    if (param_5->SecondaryData == (ForElementType<UE::Math::TPlane<double>_>)0x0)
    goto LAB_1447f0ec1;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_5->SecondaryData,0,uVar4,uVar3);
LAB_1447f0ec1:
  *param_7 = uVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_> @ 1447f0f00

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Math::TPlane<double>_> *param_5,int param_6,int *param_7)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      uVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      uVar1 = (uint)(uVar2 / uVar3);
      if ((int)uVar1 < param_3) {
        uVar1 = 0x7fffffff;
      }
    }
  }
  if ((int)uVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  uVar4 = uVar1;
  if (uVar1 < 9) {
    if (param_5->SecondaryData == (ForElementType<UE::Math::TPlane<double>_>)0x0)
    goto LAB_1447f0f71;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_5->SecondaryData,0,uVar4,uVar3);
LAB_1447f0f71:
  *param_7 = uVar1;
  return;
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveResource_*>_> @ 1447f0fb0

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveResource_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FDynamicPrimitiveResource_*> *param_5,int param_6,int *param_7)

{
  if (param_4 < param_3) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FDynamicPrimitiveResource_*>::ResizeAllocation
              (param_5,0,param_3,(ulonglong)param_1);
    *param_7 = param_3;
    return;
  }
  *param_7 = param_4;
  return;
}

// ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FConvexVolume>_> @ 1447f0ff0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FConvexVolume>_>
          (uint param_1,uint param_2,ForElementType<FConvexVolume> *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_4;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FConvexVolume>::
    ResizeAllocation(param_3,uVar2,iVar8,uVar7);
    *param_4 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FPackedView>_> @ 1447f10c0

/* WARNING: Removing unreachable block (ram,0x0001447f1102) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FPackedView>_>
          (uint param_1,uint param_2,ForElementType<Nanite::FPackedView> *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_4;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<Nanite::FPackedView>::ResizeAllocation(param_3,iVar2,iVar3,(ulonglong)param_1);
    *param_4 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_> @ 1447f1140

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_>
          (ushort param_1,ForElementType<FRDGTexture_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<9,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_> @ 1447f1210

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<9,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
          (ushort param_1,ForElementType<UE::Math::TVector<double>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 10) {
      iVar8 = 9;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 10) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<9,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector<double>_>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskHandle>_> @ 1447f12e0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskHandle>_>
          (ushort param_1,ForElementType<UE::Tasks::Private::FTaskHandle> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Tasks::Private::FTaskHandle>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleDecal_const_*>_> @ 1447f13b0

/* WARNING: Removing unreachable block (ram,0x0001447f13f7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleDecal_const_*>_>
          (ushort param_1,ForElementType<FVisibleDecal_const_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FVisibleDecal_const_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleDecal>_> @ 1447f1440

/* WARNING: Removing unreachable block (ram,0x0001447f1487) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleDecal>_>
          (ushort param_1,ForElementType<FVisibleDecal> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleDecal>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FDecalVisibilityViewPacket>_> @ 1447f14d0

/* WARNING: Removing unreachable block (ram,0x0001447f1517) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FDecalVisibilityViewPacket>_>
          (ushort param_1,ForElementType<FDecalVisibilityViewPacket> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FDecalVisibilityViewPacket>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<UE::Tasks::Private::FTaskHandle>_> @ 1447f1560

/* WARNING: Removing unreachable block (ram,0x0001447f15a7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<UE::Tasks::Private::FTaskHandle>_>
          (ushort param_1,ForElementType<UE::Tasks::Private::FTaskHandle> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<UE::Tasks::Private::FTaskHandle>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FRasterResults>_> @ 1447f15f0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FRasterResults>_>
          (uint param_1,uint param_2,int param_3,ForElementType<Nanite::FRasterResults> *param_4,
          int *param_5,int *param_6)

{
  ForElementType<Nanite::FRasterResults> *this;
  int iVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  ForElementType<Nanite::FRasterResults> _Src;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  iVar1 = *param_5;
  uVar6 = *param_6;
  uVar8 = iVar1 + param_3;
  *param_5 = uVar8;
  if ((uint)param_3 <= uVar6 - iVar1) {
    return iVar1;
  }
  if ((int)uVar8 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar8);
  }
  uVar7 = (ulonglong)param_1;
  if (uVar8 < 3) {
    _Src = param_4->SecondaryData;
    uVar8 = 2;
LAB_1447f16ab:
    uVar6 = uVar8;
    if (_Src == (ForElementType<Nanite::FRasterResults>)0x0) goto LAB_1447f16ff;
    memmove(param_4,(void *)_Src,(longlong)iVar1 * 0x3a0);
    uVar6 = 0;
    iVar5 = 0;
  }
  else {
    uVar4 = (ulonglong)(int)uVar8;
    if (uVar6 < 3) {
      uVar6 = 0;
    }
    if (uVar6 == 0) {
      uVar2 = 4;
      if (4 < uVar4) {
        uVar2 = uVar4;
      }
    }
    else {
      uVar2 = (uVar4 * 3 >> 3) + 0x10 + uVar4;
    }
    uVar3 = FMemory::QuantizeSize(uVar7 * uVar2,0);
    uVar6 = (uint)(uVar3 / uVar7);
    this = &param_4->SecondaryData;
    _Src = *this;
    if ((int)uVar6 < (int)uVar8) {
      uVar6 = 0x7fffffff;
    }
    uVar8 = uVar6;
    if (uVar6 < 3) goto LAB_1447f16ab;
    iVar5 = iVar1;
    if (_Src == (ForElementType<Nanite::FRasterResults>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this,0,uVar6,uVar7);
      memmove((void *)*this,param_4,(longlong)iVar1 * 0x3a0);
      goto LAB_1447f16ff;
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_4->SecondaryData,iVar5,uVar6,uVar7);
  uVar6 = uVar8;
LAB_1447f16ff:
  *param_6 = uVar6;
  return iVar1;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FScreenPassTexture>_> @ 1447f1730

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FScreenPassTexture>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FScreenPassTexture> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar3 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FScreenPassTexture>::
    ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TPipelineState<FDeferredShadingSceneRenderer::FPerViewPipelineState>_>_> @ 1447f1800

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TPipelineState<FDeferredShadingSceneRenderer::FPerViewPipelineState>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TPipelineState<FDeferredShadingSceneRenderer::FPerViewPipelineState>_>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 2) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TPipelineState<FDeferredShadingSceneRenderer::FPerViewPipelineState>_>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<0,TRDGArrayAllocator<0>::ForElementType<FRDGBlackboard::FStruct_*>_> @ 1447f18e0

int __cdecl
UE::Core::Private::ReallocGrow<0,TRDGArrayAllocator<0>::ForElementType<FRDGBlackboard::FStruct_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGBlackboard::FStruct_*> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGBlackboard::FStruct_*>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingLocalShaderBindingWriter_*>_> @ 1447f1980

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingLocalShaderBindingWriter_*>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FRayTracingLocalShaderBindingWriter_*> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRayTracingLocalShaderBindingWriter_*>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FScreenPassTexture>_> @ 1447f1a20

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FScreenPassTexture>_>
          (uint param_1,uint param_2,ForElementType<FScreenPassTexture> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FScreenPassTexture>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TPipelineState<FDeferredShadingSceneRenderer::FPerViewPipelineState>_>_> @ 1447f1ae0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TPipelineState<FDeferredShadingSceneRenderer::FPerViewPipelineState>_>_>
          (uint param_1,uint param_2,
          ForElementType<TPipelineState<FDeferredShadingSceneRenderer::FPerViewPipelineState>_>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 2) {
    iVar2 = 1;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TPipelineState<FDeferredShadingSceneRenderer::FPerViewPipelineState>_>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<0,TRDGArrayAllocator<0>::ForElementType<FRDGBlackboard::FStruct_*>_> @ 1447f1ba0

void __cdecl
UE::Core::Private::
ReallocShrink<0,TRDGArrayAllocator<0>::ForElementType<FRDGBlackboard::FStruct_*>_>
          (uint param_1,uint param_2,ForElementType<FRDGBlackboard::FStruct_*> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TRDGArrayAllocator<0>::ForElementType<FRDGBlackboard::FStruct_*>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingLocalShaderBindingWriter_*>_> @ 1447f1c10

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingLocalShaderBindingWriter_*>_>
          (uint param_1,uint param_2,ForElementType<FRayTracingLocalShaderBindingWriter_*> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRayTracingLocalShaderBindingWriter_*>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<9,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_> @ 1447f1c80

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<9,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector<double>_> *param_4
          ,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 10) {
      iVar1 = 9;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<9,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector<double>_>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleDecal_const_*>_> @ 1447f1d00

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleDecal_const_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FVisibleDecal_const_*> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FVisibleDecal_const_*>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleDecal>_> @ 1447f1d30

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleDecal>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FVisibleDecal> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleDecal>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FDecalVisibilityViewPacket>_> @ 1447f1d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FDecalVisibilityViewPacket>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FDecalVisibilityViewPacket> *param_4
          ,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<FDecalVisibilityViewPacket>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FDistanceFieldAssetMipState>_> @ 144859510

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FDistanceFieldAssetMipState>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FDistanceFieldAssetMipState> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 4) {
      iVar1 = 3;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FDistanceFieldAssetMipState>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 1448595b0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (ushort param_1,ForElementType<int> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfo_*>_> @ 144859680

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfo_*>_>
          (ushort param_1,ForElementType<FLightSceneInfo_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfo_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FTextureLayout3d::FTextureLayoutNode3d>_> @ 144859820

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FTextureLayout3d::FTextureLayoutNode3d>_>
          (ushort param_1,ForElementType<FTextureLayout3d::FTextureLayoutNode3d> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 6) {
      iVar8 = 5;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 6) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FTextureLayout3d::FTextureLayoutNode3d>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FDistanceFieldAssetMipState>_> @ 1448598f0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FDistanceFieldAssetMipState>_>
          (ushort param_1,ForElementType<FDistanceFieldAssetMipState> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 4) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FDistanceFieldAssetMipState>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_> @ 1448599c0

/* WARNING: Removing unreachable block (ram,0x000144859a07) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
          (ushort param_1,ForElementType<int> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_> @ 144859a50

/* WARNING: Removing unreachable block (ram,0x000144859a97) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
          (ushort param_1,ForElementType<FRDGExternalAccessQueue::FResource> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_> @ 144859ae0

int __cdecl
UE::Core::Private::ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
          (ushort param_1,ForElementType<FVertexElement> *param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_3;
  uVar1 = iVar4 + 1;
  if ((int)uVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0x11 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *param_3 = 0x11;
  return iVar4;
}

// ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FDistanceFieldAssetMipState>_> @ 144859c10

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FDistanceFieldAssetMipState>_>
          (uint param_1,uint param_2,ForElementType<FDistanceFieldAssetMipState> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 4) {
    iVar2 = 3;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FDistanceFieldAssetMipState>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfo_*>_> @ 144859cd0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfo_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FLightSceneInfo_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfo_*>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_> @ 144859d50

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<int> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// GetTraceIds<TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_> @ 1448e5130

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __cdecl
UE::Tasks::Private::GetTraceIds<TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> *param_1)

{
  int *piVar1;
  FTaskHandle *pFVar2;
  uint uVar3;
  FTaskBase *pFVar4;
  atomic<unsigned___int64> *paVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar9;
  FTaskHandle *pFVar10;
  atomic<unsigned___int64> local_18 [2];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar3 = param_1->ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  pFVar10 = param_1->DataPtr;
  pFVar2 = pFVar10 + param_1->ArrayNum;
  do {
    if (pFVar10 == pFVar2) {
      return __return_storage_ptr__;
    }
    pFVar4 = (pFVar10->Pimpl).Reference;
    if (pFVar4 != (FTaskBase *)0x0) {
      local_18[0] = pFVar4->TraceId;
      paVar5 = (atomic<unsigned___int64> *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((paVar5 <= local_18) && (local_18 < paVar5 + *piVar1)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar9;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      *(atomic<unsigned___int64> *)
       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_18[0];
    }
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// Prerequisites<TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_> @ 1448e7b50

TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> * __cdecl
UE::Tasks::Prerequisites<TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>
          (TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> *param_1)

{
  return param_1;
}

// ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_> @ 1448e7b60

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FMeshBatchElement> *param_5,int param_6,int *param_7)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      uVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      uVar1 = (uint)(uVar2 / uVar3);
      if ((int)uVar1 < param_3) {
        uVar1 = 0x7fffffff;
      }
    }
  }
  if ((int)uVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  uVar4 = uVar1;
  if (uVar1 < 2) {
    if (param_5->SecondaryData == (ForElementType<FMeshBatchElement>)0x0) goto LAB_1448e7bd1;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_5->SecondaryData,0,uVar4,uVar3);
LAB_1448e7bd1:
  *param_7 = uVar1;
  return;
}

// ReallocForCopy<0,TFixedAllocator<17>::ForElementType<FVertexElement>_> @ 1448e7c10

void __cdecl
UE::Core::Private::ReallocForCopy<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<FVertexElement> *param_5
          ,int param_6,int *param_7)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    if ((0x11 < (uint)param_3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewMax <= NumInlineElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                           ,0x52a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = 0x11;
  }
  if ((int)uVar3 <= param_4) {
    *param_7 = param_4;
    return;
  }
  if ((0x11 < uVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax >= 0 && NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x524,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_7 = uVar3;
  return;
}

// ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FGlobalDistanceFieldPackedClipmap>_> @ 1448e7cc0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FGlobalDistanceFieldPackedClipmap>_>
          (uint param_1,uint param_2,ForElementType<FGlobalDistanceFieldPackedClipmap> *param_3,
          int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_4;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 7) {
      iVar8 = 6;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 7) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FGlobalDistanceFieldPackedClipmap>::ResizeAllocation(param_3,uVar2,iVar8,uVar7);
    *param_4 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FGPUScenePrimitiveCollector::FUploadData_*>_> @ 1448e7d90

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FGPUScenePrimitiveCollector::FUploadData_*>_>
          (ushort param_1,ForElementType<FGPUScenePrimitiveCollector::FUploadData_*> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar3 = 0x80;
    if (0x80 < uVar1) {
      uVar3 = uVar2;
      if (uVar2 < 0x81) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
    ForElementType<FGPUScenePrimitiveCollector::FUploadData_*>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FInstanceUploadBatch>_> @ 1448e7e30

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FInstanceUploadBatch>_>
          (ushort param_1,ForElementType<FInstanceUploadBatch> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 2) {
      uVar3 = 1;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
    ForElementType<FInstanceUploadBatch>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FInstanceUploadBatch::FItem>_> @ 1448e7ee0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FInstanceUploadBatch::FItem>_>
          (ushort param_1,ForElementType<FInstanceUploadBatch::FItem> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar3 = 0x100;
    if (0x100 < uVar1) {
      uVar3 = uVar2;
      if (uVar2 < 0x101) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<256,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
    ForElementType<FInstanceUploadBatch::FItem>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_> @ 1448e7f80

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_>
          (ushort param_1,ForElementType<FSpanAllocator::FLinearAllocation> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0xb) {
      iVar8 = 10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0xb) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSpanAllocator::FLinearAllocation>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>_> @ 1448e8050

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>_>
          (ushort param_1,ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FClipmapUpdateBounds>_> @ 1448e8120

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FClipmapUpdateBounds>_>
          (ushort param_1,ForElementType<FClipmapUpdateBounds> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x41) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FClipmapUpdateBounds>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_> @ 1448e81f0

/* WARNING: Removing unreachable block (ram,0x0001448e8237) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
          (ushort param_1,ForElementType<unsigned_int> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveResource_*>_> @ 1448e8280

/* WARNING: Removing unreachable block (ram,0x0001448e82c7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveResource_*>_>
          (ushort param_1,ForElementType<FDynamicPrimitiveResource_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FDynamicPrimitiveResource_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<void_*>_> @ 1448e8310

/* WARNING: Removing unreachable block (ram,0x0001448e8357) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<void_*>_>
          (ushort param_1,ForElementType<void_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<void_*>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingLoadBalancerBase::FPackedBatch>_> @ 1448e83a0

/* WARNING: Removing unreachable block (ram,0x0001448e83e7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingLoadBalancerBase::FPackedBatch>_>
          (ushort param_1,ForElementType<FInstanceCullingLoadBalancerBase::FPackedBatch> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceCullingLoadBalancerBase::FPackedBatch>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingLoadBalancerBase::FPackedItem>_> @ 1448e8430

/* WARNING: Removing unreachable block (ram,0x0001448e8477) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingLoadBalancerBase::FPackedItem>_>
          (ushort param_1,ForElementType<FInstanceCullingLoadBalancerBase::FPackedItem> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceCullingLoadBalancerBase::FPackedItem>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_> @ 1448e84c0

/* WARNING: Removing unreachable block (ram,0x0001448e8507) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_>
          (ushort param_1,ForElementType<FRDGBuilder::FUploadedBuffer> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FClipmapUpdateBounds>_> @ 1448e8550

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FClipmapUpdateBounds>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FClipmapUpdateBounds> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x41) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FClipmapUpdateBounds>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_> @ 1448e8630

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>::
    ResizeAllocation(param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceBatcher::FPrimitiveItemInfo>_> @ 1448e86d0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceBatcher::FPrimitiveItemInfo>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FInstanceBatcher::FPrimitiveItemInfo> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceBatcher::FPrimitiveItemInfo>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveUploadInfoHeader>_> @ 1448e8770

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveUploadInfoHeader>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPrimitiveUploadInfoHeader> *param_4
          ,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FPrimitiveUploadInfoHeader>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_> @ 1448e8cd0

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,ForElementType<unsigned_int> *param_3,int param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>::
    ResizeAllocation(param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceBatcher::FPrimitiveItemInfo>_> @ 1448e8d40

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceBatcher::FPrimitiveItemInfo>_>
          (uint param_1,uint param_2,ForElementType<FInstanceBatcher::FPrimitiveItemInfo> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceBatcher::FPrimitiveItemInfo>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveUploadInfoHeader>_> @ 1448e8db0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveUploadInfoHeader>_>
          (uint param_1,uint param_2,ForElementType<FPrimitiveUploadInfoHeader> *param_3,int param_4
          ,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FPrimitiveUploadInfoHeader>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FGPUScenePrimitiveCollector::FUploadData_*>_> @ 1448e8e20

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FGPUScenePrimitiveCollector::FUploadData_*>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FGPUScenePrimitiveCollector::FUploadData_*> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 0x80, 0x80 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
  ForElementType<FGPUScenePrimitiveCollector::FUploadData_*>::ResizeAllocation
            (param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<256,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FInstanceUploadBatch::FItem>_> @ 1448e8e60

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<256,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FInstanceUploadBatch::FItem>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FInstanceUploadBatch::FItem> *param_4,int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 0x100, 0x100 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<256,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
  ForElementType<FInstanceUploadBatch::FItem>::ResizeAllocation
            (param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FClipmapUpdateBounds>_> @ 1448e8ea0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FClipmapUpdateBounds>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FClipmapUpdateBounds> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x41) {
      iVar1 = 0x40;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FClipmapUpdateBounds>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_> @ 1448e8f20

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// Wait<TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_> @ 1448ebe80

bool __cdecl
UE::Tasks::Wait<TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>
          (TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> *param_1,FTimespan param_2)

{
  atomic<unsigned_int> *paVar1;
  FTaskHandle *pFVar2;
  atomic<unsigned_int> aVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  FTaskBase *pFVar10;
  FTask *pFVar11;
  longlong lVar12;
  FTaskBase *pFVar13;
  FTaskHandle *pFVar14;
  bool bVar15;
  FTaskBase *pFVar16;
  double dVar17;
  FWaitingScope local_res18 [8];
  LARGE_INTEGER local_res20;
  atomic<unsigned___int64> local_68;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_60;
  LARGE_INTEGER local_48;
  FTaskBase *local_40;
  
  uVar4 = param_1->ArrayNum;
  pFVar16 = (FTaskBase *)0x0;
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (0 < (int)uVar4) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&local_60.AllocatorInstance,0,&local_60.ArrayMax);
  }
  pFVar14 = param_1->DataPtr;
  pFVar2 = pFVar14 + param_1->ArrayNum;
  for (; pFVar14 != pFVar2; pFVar14 = pFVar14 + 1) {
    pFVar10 = (pFVar14->Pimpl).Reference;
    if (pFVar10 != (FTaskBase *)0x0) {
      local_68 = pFVar10->TraceId;
      if (((local_60.AllocatorInstance.Data <= &local_68) &&
          (&local_68 <
           (atomic<unsigned___int64> *)
           ((longlong)local_60.AllocatorInstance.Data + (longlong)local_60.ArrayMax * 8))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar9 = local_60.ArrayNum;
      if (local_60.ArrayNum == local_60.ArrayMax) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_60.AllocatorInstance,&local_60.ArrayMax);
      }
      local_60.ArrayNum = iVar9 + 1;
      *(atomic<unsigned___int64> *)(local_60.AllocatorInstance.Data + (longlong)iVar9 * 8) =
           local_68;
    }
  }
  TaskTrace::FWaitingScope::FWaitingScope(local_res18,&local_60);
  if ((atomic<unsigned___int64> *)local_60.AllocatorInstance.Data != (atomic<unsigned___int64> *)0x0
     ) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`bool___cdecl_UE::Tasks::Wait<TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>(TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_const&___ptr64,FTimespan)'
                ::__l2::__CpuProfilerEventSpecId384,"Tasks::Wait",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h",
               0x180);
    FCpuProfilerTrace::OutputBeginEvent
              (`bool___cdecl_UE::Tasks::Wait<TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>(TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_const&___ptr64,FTimespan)'
               ::__l2::__CpuProfilerEventSpecId384);
  }
  pFVar10 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Private::SmallTaskAllocator);
  if (pFVar10 == (FTaskBase *)0x0) {
    Private::FTaskBase::AddPrerequisites<TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>,0>
              ((FTaskBase *)0x0,param_1,true);
    Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
LAB_1448ec1e4:
    bVar15 = true;
    bVar8 = true;
    if (pFVar16 == (FTaskBase *)0x0) goto LAB_1448ec20b;
  }
  else {
    Private::FTaskBase::FTaskBase(pFVar10,2,true);
    pFVar10->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____Wait_V__TArrayView___CBVFTaskHandle_Private_Tasks_UE__H___Tasks_UE__YA_NAEBV__TArrayView___CBVFTaskHandle_Private_Tasks_UE__H__UFTimespan___Z_XX_Private_Tasks_UE__6B_
    ;
    if (((*(ulonglong *)&(pFVar10->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    (**(code **)(*(longlong *)&(pFVar10->LowLevelTask).field_0x28 + 0x18))
              (&(pFVar10->LowLevelTask).field_0x28,&pFVar10->LowLevelTask);
    *(FTaskBase **)&pFVar10->LowLevelTask = pFVar10;
    *(undefined ***)&(pFVar10->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(pFVar10->LowLevelTask).field_0x8 = pFVar10;
    pFVar11 = LowLevelTasks::FTask::GetActiveTask();
    pFVar13 = pFVar16;
    if (pFVar11 != (FTask *)0x0) {
      pFVar13 = *(FTaskBase **)&pFVar11->field_0x30;
    }
    *(FTaskBase **)&(pFVar10->LowLevelTask).field_0x30 = pFVar13;
    *(undefined8 *)&(pFVar10->LowLevelTask).field_0x38 = 0xc80000541abc4c00;
    pFVar10->ExtendedPriority = Inline;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar10->_padding_);
    pFVar10->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____Wait_V__TArrayView___CBVFTaskHandle_Private_Tasks_UE__H___Tasks_UE__YA_NAEBV__TArrayView___CBVFTaskHandle_Private_Tasks_UE__H__UFTimespan___Z__Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::AddPrerequisites<TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>,0>
              (pFVar10,param_1,true);
    Private::FTaskBase::TryLaunch(pFVar10,0x100);
    QueryPerformanceCounter(&local_res20);
    if (param_2.Ticks == 0x7fffffffffffffff) {
      pFVar16 = (FTaskBase *)0xffffffffffffffff;
    }
    else if (0.0 < (double)param_2.Ticks * __real_3e7ad7f29abcaf48) {
      dVar17 = ((double)param_2.Ticks * __real_3e7ad7f29abcaf48) /
               FGenericPlatformTime::SecondsPerCycle64;
      lVar12 = 0;
      if ((__real_43e0000000000000 <= dVar17) &&
         (dVar17 = dVar17 - __real_43e0000000000000, dVar17 < __real_43e0000000000000)) {
        lVar12 = -0x8000000000000000;
      }
      pFVar16 = (FTaskBase *)((longlong)dVar17 + lVar12);
    }
    local_48 = local_res20;
    local_40 = pFVar16;
    bVar8 = Private::FTaskBase::Wait(pFVar10,(FTimeout *)&local_48.s);
    pFVar16 = pFVar10;
    if (bVar8) goto LAB_1448ec1e4;
    bVar8 = false;
  }
  bVar15 = bVar8;
  LOCK();
  paVar1 = &pFVar16->RefCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar3 == (atomic<unsigned_int>)0x1) {
    (**(code **)pFVar16->_padding_)(pFVar16,1);
  }
LAB_1448ec20b:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  TaskTrace::FWaitingScope::~FWaitingScope(local_res18);
  return bVar15;
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FHairStrandsDeepShadowData>_> @ 144992d60

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FHairStrandsDeepShadowData>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FHairStrandsDeepShadowData> *param_5,int param_6,int *param_7)

{
  if (param_4 < param_3) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FHairStrandsDeepShadowData>::ResizeAllocation
              (param_5,0,param_3,(ulonglong)param_1);
    *param_7 = param_3;
    return;
  }
  *param_7 = param_4;
  return;
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FHairStrandsMacroGroupData>_> @ 144992da0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FHairStrandsMacroGroupData>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FHairStrandsMacroGroupData> *param_5,int param_6,int *param_7)

{
  if (param_4 < param_3) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FHairStrandsMacroGroupData>::ResizeAllocation
              (param_5,0,param_3,(ulonglong)param_1);
    *param_7 = param_3;
    return;
  }
  *param_7 = param_4;
  return;
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FHairStrandsMacroGroupData::PrimitiveInfo>_> @ 144992de0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FHairStrandsMacroGroupData::PrimitiveInfo>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FHairStrandsMacroGroupData::PrimitiveInfo> *param_5,int param_6,
          int *param_7)

{
  if (param_4 < param_3) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FHairStrandsMacroGroupData::PrimitiveInfo>::ResizeAllocation
              (param_5,0,param_3,(ulonglong)param_1);
    *param_7 = param_3;
    return;
  }
  *param_7 = param_4;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLightSceneInfo_const_*>_> @ 144992e20

/* WARNING: Removing unreachable block (ram,0x000144992e67) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLightSceneInfo_const_*>_>
          (ushort param_1,ForElementType<FLightSceneInfo_const_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FLightSceneInfo_const_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FHairStrandsDeepShadowData>_> @ 144992eb0

/* WARNING: Removing unreachable block (ram,0x000144992ef7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FHairStrandsDeepShadowData>_>
          (ushort param_1,ForElementType<FHairStrandsDeepShadowData> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FHairStrandsDeepShadowData>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FHairStrandsMacroGroupData>_> @ 144992f40

/* WARNING: Removing unreachable block (ram,0x000144992f87) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FHairStrandsMacroGroupData>_>
          (ushort param_1,ForElementType<FHairStrandsMacroGroupData> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FHairStrandsMacroGroupData>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FHairStrandsMacroGroupData::PrimitiveInfo>_> @ 144992fd0

/* WARNING: Removing unreachable block (ram,0x000144993017) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FHairStrandsMacroGroupData::PrimitiveInfo>_>
          (ushort param_1,ForElementType<FHairStrandsMacroGroupData::PrimitiveInfo> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FHairStrandsMacroGroupData::PrimitiveInfo>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_> @ 144993060

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TPlane<double>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 7) {
      iVar8 = 6;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 7) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TPlane<double>_>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_> @ 144993140

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TPlane<double>_> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 7) {
    iVar2 = 6;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TPlane<double>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FHairStrandsDeepShadowData>_> @ 144993200

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FHairStrandsDeepShadowData>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FHairStrandsDeepShadowData> *param_4
          ,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FHairStrandsDeepShadowData>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVolumetricMeshBatch>_> @ 144a576f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVolumetricMeshBatch>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FVolumetricMeshBatch> *param_5,int param_6,int *param_7)

{
  FVolumetricMeshBatch *_Src;
  FVolumetricMeshBatch *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if (param_3 <= param_4) {
    *param_7 = param_4;
    return;
  }
  if ((-1 < param_3) && (param_1 - 1 < 0x7fffffff)) {
    _Dst = (FVolumetricMeshBatch *)0x0;
    uVar1 = (ulonglong)param_1 * (longlong)param_3;
    _Src = param_5->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FVolumetricMeshBatch *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].Proxy + 4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_5->Data = _Dst;
    *param_7 = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidConcurrentLinearArrayAllocatorNum(param_3,(ulonglong)param_1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfoCompact>_> @ 144a577c0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfoCompact>_>
          (ushort param_1,ForElementType<FLightSceneInfoCompact> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x41) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfoCompact>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TVector4<float>_>_> @ 144a57890

/* WARNING: Removing unreachable block (ram,0x000144a578d7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TVector4<float>_>_>
          (ushort param_1,ForElementType<UE::Math::TVector4<float>_> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::Math::TVector4<float>_>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FExtractedBuffer>_> @ 144a57920

/* WARNING: Removing unreachable block (ram,0x000144a57967) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FExtractedBuffer>_>
          (ushort param_1,ForElementType<FRDGBuilder::FExtractedBuffer> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FExtractedBuffer>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TRefCountPtr<FRHIRayTracingGeometry>_>_> @ 144a579b0

/* WARNING: Removing unreachable block (ram,0x000144a579f7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TRefCountPtr<FRHIRayTracingGeometry>_>_>
          (ushort param_1,ForElementType<TRefCountPtr<FRHIRayTracingGeometry>_> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TRefCountPtr<FRHIRayTracingGeometry>_>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TVector4<float>_>_> @ 144a57a40

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TVector4<float>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector4<float>_> *param_4
          ,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::Math::TVector4<float>_>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_*>_> @ 144af81d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FProjectedShadowInfo_*> *param_5,int param_6,int *param_7)

{
  FProjectedShadowInfo **_Src;
  FProjectedShadowInfo **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if (param_3 <= param_4) {
    *param_7 = param_4;
    return;
  }
  if ((-1 < param_3) && (param_1 - 1 < 0x7fffffff)) {
    _Dst = (FProjectedShadowInfo **)0x0;
    uVar1 = (ulonglong)param_1 * (longlong)param_3;
    _Src = param_5->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FProjectedShadowInfo **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_5->Data = _Dst;
    *param_7 = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidConcurrentLinearArrayAllocatorNum(param_3,(ulonglong)param_1);
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TRefCountPtr<FProjectedShadowInfo>_>_> @ 144af82a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TRefCountPtr<FProjectedShadowInfo>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<TRefCountPtr<FProjectedShadowInfo>_> *param_5,int param_6,int *param_7)

{
  TRefCountPtr<FProjectedShadowInfo> *_Src;
  TRefCountPtr<FProjectedShadowInfo> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if (param_3 <= param_4) {
    *param_7 = param_4;
    return;
  }
  if ((-1 < param_3) && (param_1 - 1 < 0x7fffffff)) {
    _Dst = (TRefCountPtr<FProjectedShadowInfo> *)0x0;
    uVar1 = (ulonglong)param_1 * (longlong)param_3;
    _Src = param_5->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TRefCountPtr<FProjectedShadowInfo> *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].Reference + 4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_5->Data = _Dst;
    *param_7 = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidConcurrentLinearArrayAllocatorNum(param_3,(ulonglong)param_1);
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TRefCountPtr<FRHIRayTracingGeometry>_>_> @ 144af8370

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TRefCountPtr<FRHIRayTracingGeometry>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<TRefCountPtr<FRHIRayTracingGeometry>_> *param_5,int param_6,int *param_7)

{
  TRefCountPtr<FRHIRayTracingGeometry> *_Src;
  TRefCountPtr<FRHIRayTracingGeometry> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if (param_3 <= param_4) {
    *param_7 = param_4;
    return;
  }
  if ((-1 < param_3) && (param_1 - 1 < 0x7fffffff)) {
    _Dst = (TRefCountPtr<FRHIRayTracingGeometry> *)0x0;
    uVar1 = (ulonglong)param_1 * (longlong)param_3;
    _Src = param_5->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TRefCountPtr<FRHIRayTracingGeometry> *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].Reference + 4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_5->Data = _Dst;
    *param_7 = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidConcurrentLinearArrayAllocatorNum(param_3,(ulonglong)param_1);
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSharedPtr<FVirtualShadowMapClipmap,1>_>_> @ 144af8440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSharedPtr<FVirtualShadowMapClipmap,1>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<TSharedPtr<FVirtualShadowMapClipmap,1>_> *param_5,int param_6,int *param_7)

{
  TSharedPtr<FVirtualShadowMapClipmap,1> *_Src;
  TSharedPtr<FVirtualShadowMapClipmap,1> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if (param_3 <= param_4) {
    *param_7 = param_4;
    return;
  }
  if ((-1 < param_3) && (param_1 - 1 < 0x7fffffff)) {
    _Dst = (TSharedPtr<FVirtualShadowMapClipmap,1> *)0x0;
    uVar1 = (ulonglong)param_1 * (longlong)param_3;
    _Src = param_5->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TSharedPtr<FVirtualShadowMapClipmap,1> *)0x0) &&
         (_Size = (ulonglong)
                  *(uint *)((longlong)&_Src[-1].SharedReferenceCount.ReferenceController + 4),
         _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_5->Data = _Dst;
    *param_7 = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidConcurrentLinearArrayAllocatorNum(param_3,(ulonglong)param_1);
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleLightInfo>_> @ 144af8510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleLightInfo>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FVisibleLightInfo> *param_5,int param_6,int *param_7)

{
  FVisibleLightInfo *_Src;
  FVisibleLightInfo *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if (param_3 <= param_4) {
    *param_7 = param_4;
    return;
  }
  if ((-1 < param_3) && (param_1 - 1 < 0x7fffffff)) {
    _Dst = (FVisibleLightInfo *)0x0;
    uVar1 = (ulonglong)param_1 * (longlong)param_3;
    _Src = param_5->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FVisibleLightInfo *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].VirtualShadowMapClipmaps.ArrayMax, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_5->Data = _Dst;
    *param_7 = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidConcurrentLinearArrayAllocatorNum(param_3,(ulonglong)param_1);
}

// ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAsyncLumenIndirectLightingOutputs::FViewOutputs>_> @ 144af85e0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAsyncLumenIndirectLightingOutputs::FViewOutputs>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FAsyncLumenIndirectLightingOutputs::FViewOutputs> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 2) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FAsyncLumenIndirectLightingOutputs::FViewOutputs>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAsyncLumenIndirectLightingOutputs::FViewOutputs>_> @ 144af86c0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FAsyncLumenIndirectLightingOutputs::FViewOutputs>_>
          (uint param_1,uint param_2,
          ForElementType<FAsyncLumenIndirectLightingOutputs::FViewOutputs> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 2) {
    iVar2 = 1;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FAsyncLumenIndirectLightingOutputs::FViewOutputs>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// SetupComputeBindings<FHeterogeneousVolumesBakeMaterialCS,FMeshMaterialShaderElementData> @ 144af93f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
UE::MeshPassUtils::
SetupComputeBindings<FHeterogeneousVolumesBakeMaterialCS,FMeshMaterialShaderElementData>
          (TShaderRefBase<FHeterogeneousVolumesBakeMaterialCS,FShaderMapPointerTable> *param_1,
          FScene *param_2,Type param_3,FPrimitiveSceneProxy *param_4,FMaterialRenderProxy *param_5,
          FMaterial *param_6,FMeshMaterialShaderElementData *param_7,
          FMeshDrawShaderBindings *param_8)

{
  int iVar1;
  int iVar2;
  FHeterogeneousVolumesBakeMaterialCS *pFVar3;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar12;
  byte bVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 local_d8 [4];
  int local_d4;
  int local_d0;
  uint local_cc;
  FMeshDrawSingleShaderBindings local_c8;
  longlong local_b8;
  FMeshProcessorShaders local_a8;
  
  pFVar3 = param_1->ShaderContent;
  local_a8.VertexShader.ShaderContent = (FShader *)0x0;
  local_a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.PixelShader.ShaderContent = (FShader *)0x0;
  local_a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.GeometryShader.ShaderContent = (FShader *)0x0;
  local_a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.ComputeShader.ShaderContent = (FShader *)0x0;
  local_a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.WorkGraphShader.ShaderContent = (FShader *)0x0;
  local_a8.WorkGraphShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.RayTracingShader.ShaderContent = (FShader *)0x0;
  local_a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  bVar13 = pFVar3->field_0xd0 & 0xf;
  if (bVar13 == 5) {
    local_a8.ComputeShader.ShaderMap = param_1->ShaderMap;
    local_a8.ComputeShader.ShaderContent = (FShader *)pFVar3;
  }
  else if (bVar13 == 0xb) {
    local_a8.WorkGraphShader.ShaderMap = param_1->ShaderMap;
    local_a8.WorkGraphShader.ShaderContent = (FShader *)pFVar3;
  }
  FMeshDrawShaderBindings::Initialize(param_8,&local_a8);
  if (param_1->ShaderContent != (FHeterogeneousVolumesBakeMaterialCS *)0x0) {
    uVar15 = 0;
    uVar11 = (longlong)((1 << bVar13 + 1) + -1) & (ulonglong)param_8->ShaderFrequencyBits;
    local_d4 = 0;
    uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
    local_cc = (uint)(byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           );
    lVar10 = (ulonglong)local_cc - 1;
    local_cc = local_cc - 1;
    uVar11 = uVar15;
    local_b8 = lVar10;
    if (0 < lVar10) {
      do {
        iVar16 = 0;
        uVar18 = (uint)uVar15;
        uVar8 = 0;
        if ((int)uVar18 < (param_8->ShaderLayouts).ArrayNum) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar4 = (param_8->ShaderLayouts).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FMeshDrawShaderBindingsLayout>)param_8;
        if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
          FVar12 = FVar4;
        }
        lVar5 = *(longlong *)((longlong)FVar12 + uVar11 * 8);
        iVar1 = *(int *)(lVar5 + 0x28);
        iVar9 = iVar1 + 7;
        if (iVar9 < 0) {
          iVar9 = iVar1 + 0xe;
        }
        uVar15 = *(ulonglong *)(lVar5 + 0x30);
        iVar2 = *(int *)(lVar5 + 0x38);
        local_d0 = (iVar9 >> 3) + (*(int *)(lVar5 + 0x18) + *(int *)(lVar5 + 8) + iVar1) * 8;
        lVar10 = (longlong)uVar15 >> 0x18;
        uVar17 = uVar15;
        if ((uVar15 & 1) != 0) {
          uVar15 = lVar10 + 0x30 + lVar5;
          uVar17 = lVar10 + 0x30 + lVar5;
        }
        while( true ) {
          if (*(int *)(lVar5 + 0x38) != iVar2) {
            local_d8[0] = 0;
            `TCheckedPointerIterator<FShaderLooseParameterBufferInfo_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_d8);
          }
          lVar10 = local_b8;
          if (uVar15 == uVar17 + (longlong)iVar2 * 0x18) break;
          iVar16 = iVar16 + (uint)*(ushort *)(uVar15 + 2);
          uVar15 = uVar15 + 0x18;
        }
        uVar15 = (ulonglong)(uVar18 + 1);
        uVar11 = uVar11 + 1;
        local_d4 = local_d4 + (local_d0 + 7 + iVar16 & 0xfffffff8U);
      } while ((longlong)uVar11 < local_b8);
      if ((local_d4 != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CheckedDataOffset == DataOffset",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                             ,0x3dc,
                             L"GetSingleShaderBindings was not called in the order of ShaderFrequencies"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar8 = local_cc;
    if ((int)local_cc < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                         ,0x3e5,L"Invalid shader binding frequency requested");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x1a,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_c8._padding_ = 0x58;
      local_c8.Data = (uchar *)0x0;
    }
    else {
      uVar14 = ~local_cc;
      uVar18 = 0;
      if ((int)local_cc < (param_8->ShaderLayouts).ArrayNum) {
        uVar18 = uVar14 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar4 = (param_8->ShaderLayouts).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FMeshDrawShaderBindingsLayout>)param_8;
      if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar12 = FVar4;
      }
      FMeshDrawShaderBindingsLayout::GetDataSizeBytes
                ((FMeshDrawShaderBindingsLayout *)((longlong)FVar12 + lVar10 * 8));
      local_c8.Data = (uchar *)&param_8->Data;
      if (0x50 < param_8->Size) {
        local_c8.Data = ((FData *)local_c8.Data)->InlineStorage[0];
      }
      uVar18 = 0;
      if ((int)uVar8 < (param_8->ShaderLayouts).ArrayNum) {
        uVar18 = uVar14 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar4 = (param_8->ShaderLayouts).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FMeshDrawShaderBindingsLayout>)param_8;
      if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar12 = FVar4;
      }
      local_c8._padding_ = *(longlong *)((longlong)FVar12 + lVar10 * 8);
    }
    FMeshMaterialShader::GetShaderBindings
              ((FMeshMaterialShader *)param_1->ShaderContent,param_2,param_3,param_4,param_5,param_6
               ,param_7,&local_c8);
  }
  FMeshDrawShaderBindings::Finalize(param_8,&local_a8);
  return;
}

// SetupComputeBindings<FRasterizeBottomLevelFrustumGridCS,FMeshMaterialShaderElementData> @ 144af9870

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
UE::MeshPassUtils::
SetupComputeBindings<FRasterizeBottomLevelFrustumGridCS,FMeshMaterialShaderElementData>
          (TShaderRefBase<FRasterizeBottomLevelFrustumGridCS,FShaderMapPointerTable> *param_1,
          FScene *param_2,Type param_3,FPrimitiveSceneProxy *param_4,FMaterialRenderProxy *param_5,
          FMaterial *param_6,FMeshMaterialShaderElementData *param_7,
          FMeshDrawShaderBindings *param_8)

{
  int iVar1;
  int iVar2;
  FRasterizeBottomLevelFrustumGridCS *pFVar3;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar12;
  byte bVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 local_d8 [4];
  int local_d4;
  int local_d0;
  uint local_cc;
  FMeshDrawSingleShaderBindings local_c8;
  longlong local_b8;
  FMeshProcessorShaders local_a8;
  
  pFVar3 = param_1->ShaderContent;
  local_a8.VertexShader.ShaderContent = (FShader *)0x0;
  local_a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.PixelShader.ShaderContent = (FShader *)0x0;
  local_a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.GeometryShader.ShaderContent = (FShader *)0x0;
  local_a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.ComputeShader.ShaderContent = (FShader *)0x0;
  local_a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.WorkGraphShader.ShaderContent = (FShader *)0x0;
  local_a8.WorkGraphShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.RayTracingShader.ShaderContent = (FShader *)0x0;
  local_a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  bVar13 = pFVar3->field_0xd0 & 0xf;
  if (bVar13 == 5) {
    local_a8.ComputeShader.ShaderMap = param_1->ShaderMap;
    local_a8.ComputeShader.ShaderContent = (FShader *)pFVar3;
  }
  else if (bVar13 == 0xb) {
    local_a8.WorkGraphShader.ShaderMap = param_1->ShaderMap;
    local_a8.WorkGraphShader.ShaderContent = (FShader *)pFVar3;
  }
  FMeshDrawShaderBindings::Initialize(param_8,&local_a8);
  if (param_1->ShaderContent != (FRasterizeBottomLevelFrustumGridCS *)0x0) {
    uVar15 = 0;
    uVar11 = (longlong)((1 << bVar13 + 1) + -1) & (ulonglong)param_8->ShaderFrequencyBits;
    local_d4 = 0;
    uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
    local_cc = (uint)(byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           );
    lVar10 = (ulonglong)local_cc - 1;
    local_cc = local_cc - 1;
    uVar11 = uVar15;
    local_b8 = lVar10;
    if (0 < lVar10) {
      do {
        iVar16 = 0;
        uVar18 = (uint)uVar15;
        uVar8 = 0;
        if ((int)uVar18 < (param_8->ShaderLayouts).ArrayNum) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar4 = (param_8->ShaderLayouts).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FMeshDrawShaderBindingsLayout>)param_8;
        if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
          FVar12 = FVar4;
        }
        lVar5 = *(longlong *)((longlong)FVar12 + uVar11 * 8);
        iVar1 = *(int *)(lVar5 + 0x28);
        iVar9 = iVar1 + 7;
        if (iVar9 < 0) {
          iVar9 = iVar1 + 0xe;
        }
        uVar15 = *(ulonglong *)(lVar5 + 0x30);
        iVar2 = *(int *)(lVar5 + 0x38);
        local_d0 = (iVar9 >> 3) + (*(int *)(lVar5 + 0x18) + *(int *)(lVar5 + 8) + iVar1) * 8;
        lVar10 = (longlong)uVar15 >> 0x18;
        uVar17 = uVar15;
        if ((uVar15 & 1) != 0) {
          uVar15 = lVar10 + 0x30 + lVar5;
          uVar17 = lVar10 + 0x30 + lVar5;
        }
        while( true ) {
          if (*(int *)(lVar5 + 0x38) != iVar2) {
            local_d8[0] = 0;
            `TCheckedPointerIterator<FShaderLooseParameterBufferInfo_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_d8);
          }
          lVar10 = local_b8;
          if (uVar15 == uVar17 + (longlong)iVar2 * 0x18) break;
          iVar16 = iVar16 + (uint)*(ushort *)(uVar15 + 2);
          uVar15 = uVar15 + 0x18;
        }
        uVar15 = (ulonglong)(uVar18 + 1);
        uVar11 = uVar11 + 1;
        local_d4 = local_d4 + (local_d0 + 7 + iVar16 & 0xfffffff8U);
      } while ((longlong)uVar11 < local_b8);
      if ((local_d4 != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CheckedDataOffset == DataOffset",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                             ,0x3dc,
                             L"GetSingleShaderBindings was not called in the order of ShaderFrequencies"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar8 = local_cc;
    if ((int)local_cc < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                         ,0x3e5,L"Invalid shader binding frequency requested");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x1a,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_c8._padding_ = 0x58;
      local_c8.Data = (uchar *)0x0;
    }
    else {
      uVar14 = ~local_cc;
      uVar18 = 0;
      if ((int)local_cc < (param_8->ShaderLayouts).ArrayNum) {
        uVar18 = uVar14 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar4 = (param_8->ShaderLayouts).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FMeshDrawShaderBindingsLayout>)param_8;
      if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar12 = FVar4;
      }
      FMeshDrawShaderBindingsLayout::GetDataSizeBytes
                ((FMeshDrawShaderBindingsLayout *)((longlong)FVar12 + lVar10 * 8));
      local_c8.Data = (uchar *)&param_8->Data;
      if (0x50 < param_8->Size) {
        local_c8.Data = ((FData *)local_c8.Data)->InlineStorage[0];
      }
      uVar18 = 0;
      if ((int)uVar8 < (param_8->ShaderLayouts).ArrayNum) {
        uVar18 = uVar14 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar4 = (param_8->ShaderLayouts).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FMeshDrawShaderBindingsLayout>)param_8;
      if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar12 = FVar4;
      }
      local_c8._padding_ = *(longlong *)((longlong)FVar12 + lVar10 * 8);
    }
    FMeshMaterialShader::GetShaderBindings
              ((FMeshMaterialShader *)param_1->ShaderContent,param_2,param_3,param_4,param_5,param_6
               ,param_7,&local_c8);
  }
  FMeshDrawShaderBindings::Finalize(param_8,&local_a8);
  return;
}

// SetupComputeBindings<FRasterizeBottomLevelOrthoGridCS,FMeshMaterialShaderElementData> @ 144af9cf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
UE::MeshPassUtils::
SetupComputeBindings<FRasterizeBottomLevelOrthoGridCS,FMeshMaterialShaderElementData>
          (TShaderRefBase<FRasterizeBottomLevelOrthoGridCS,FShaderMapPointerTable> *param_1,
          FScene *param_2,Type param_3,FPrimitiveSceneProxy *param_4,FMaterialRenderProxy *param_5,
          FMaterial *param_6,FMeshMaterialShaderElementData *param_7,
          FMeshDrawShaderBindings *param_8)

{
  int iVar1;
  int iVar2;
  FRasterizeBottomLevelOrthoGridCS *pFVar3;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar12;
  byte bVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 local_d8 [4];
  int local_d4;
  int local_d0;
  uint local_cc;
  FMeshDrawSingleShaderBindings local_c8;
  longlong local_b8;
  FMeshProcessorShaders local_a8;
  
  pFVar3 = param_1->ShaderContent;
  local_a8.VertexShader.ShaderContent = (FShader *)0x0;
  local_a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.PixelShader.ShaderContent = (FShader *)0x0;
  local_a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.GeometryShader.ShaderContent = (FShader *)0x0;
  local_a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.ComputeShader.ShaderContent = (FShader *)0x0;
  local_a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.WorkGraphShader.ShaderContent = (FShader *)0x0;
  local_a8.WorkGraphShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.RayTracingShader.ShaderContent = (FShader *)0x0;
  local_a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  bVar13 = pFVar3->field_0xd0 & 0xf;
  if (bVar13 == 5) {
    local_a8.ComputeShader.ShaderMap = param_1->ShaderMap;
    local_a8.ComputeShader.ShaderContent = (FShader *)pFVar3;
  }
  else if (bVar13 == 0xb) {
    local_a8.WorkGraphShader.ShaderMap = param_1->ShaderMap;
    local_a8.WorkGraphShader.ShaderContent = (FShader *)pFVar3;
  }
  FMeshDrawShaderBindings::Initialize(param_8,&local_a8);
  if (param_1->ShaderContent != (FRasterizeBottomLevelOrthoGridCS *)0x0) {
    uVar15 = 0;
    uVar11 = (longlong)((1 << bVar13 + 1) + -1) & (ulonglong)param_8->ShaderFrequencyBits;
    local_d4 = 0;
    uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
    local_cc = (uint)(byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           );
    lVar10 = (ulonglong)local_cc - 1;
    local_cc = local_cc - 1;
    uVar11 = uVar15;
    local_b8 = lVar10;
    if (0 < lVar10) {
      do {
        iVar16 = 0;
        uVar18 = (uint)uVar15;
        uVar8 = 0;
        if ((int)uVar18 < (param_8->ShaderLayouts).ArrayNum) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar4 = (param_8->ShaderLayouts).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FMeshDrawShaderBindingsLayout>)param_8;
        if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
          FVar12 = FVar4;
        }
        lVar5 = *(longlong *)((longlong)FVar12 + uVar11 * 8);
        iVar1 = *(int *)(lVar5 + 0x28);
        iVar9 = iVar1 + 7;
        if (iVar9 < 0) {
          iVar9 = iVar1 + 0xe;
        }
        uVar15 = *(ulonglong *)(lVar5 + 0x30);
        iVar2 = *(int *)(lVar5 + 0x38);
        local_d0 = (iVar9 >> 3) + (*(int *)(lVar5 + 0x18) + *(int *)(lVar5 + 8) + iVar1) * 8;
        lVar10 = (longlong)uVar15 >> 0x18;
        uVar17 = uVar15;
        if ((uVar15 & 1) != 0) {
          uVar15 = lVar10 + 0x30 + lVar5;
          uVar17 = lVar10 + 0x30 + lVar5;
        }
        while( true ) {
          if (*(int *)(lVar5 + 0x38) != iVar2) {
            local_d8[0] = 0;
            `TCheckedPointerIterator<FShaderLooseParameterBufferInfo_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_d8);
          }
          lVar10 = local_b8;
          if (uVar15 == uVar17 + (longlong)iVar2 * 0x18) break;
          iVar16 = iVar16 + (uint)*(ushort *)(uVar15 + 2);
          uVar15 = uVar15 + 0x18;
        }
        uVar15 = (ulonglong)(uVar18 + 1);
        uVar11 = uVar11 + 1;
        local_d4 = local_d4 + (local_d0 + 7 + iVar16 & 0xfffffff8U);
      } while ((longlong)uVar11 < local_b8);
      if ((local_d4 != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CheckedDataOffset == DataOffset",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                             ,0x3dc,
                             L"GetSingleShaderBindings was not called in the order of ShaderFrequencies"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar8 = local_cc;
    if ((int)local_cc < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                         ,0x3e5,L"Invalid shader binding frequency requested");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x1a,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_c8._padding_ = 0x58;
      local_c8.Data = (uchar *)0x0;
    }
    else {
      uVar14 = ~local_cc;
      uVar18 = 0;
      if ((int)local_cc < (param_8->ShaderLayouts).ArrayNum) {
        uVar18 = uVar14 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar4 = (param_8->ShaderLayouts).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FMeshDrawShaderBindingsLayout>)param_8;
      if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar12 = FVar4;
      }
      FMeshDrawShaderBindingsLayout::GetDataSizeBytes
                ((FMeshDrawShaderBindingsLayout *)((longlong)FVar12 + lVar10 * 8));
      local_c8.Data = (uchar *)&param_8->Data;
      if (0x50 < param_8->Size) {
        local_c8.Data = ((FData *)local_c8.Data)->InlineStorage[0];
      }
      uVar18 = 0;
      if ((int)uVar8 < (param_8->ShaderLayouts).ArrayNum) {
        uVar18 = uVar14 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar4 = (param_8->ShaderLayouts).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FMeshDrawShaderBindingsLayout>)param_8;
      if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar12 = FVar4;
      }
      local_c8._padding_ = *(longlong *)((longlong)FVar12 + lVar10 * 8);
    }
    FMeshMaterialShader::GetShaderBindings
              ((FMeshMaterialShader *)param_1->ShaderContent,param_2,param_3,param_4,param_5,param_6
               ,param_7,&local_c8);
  }
  FMeshDrawShaderBindings::Finalize(param_8,&local_a8);
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<int>_> @ 144b928e0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<int> *param_5,
          int param_6,int *param_7)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = param_3;
  if ((param_3 != 0) && (uVar2 = 6, 6 < (uint)param_3)) {
    uVar2 = param_3;
  }
  if (param_4 < (int)uVar2) {
    piVar1 = (param_5->SecondaryData).Data;
    if (6 < uVar2) {
      TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>::
      ResizeAllocation(&param_5->SecondaryData,0,uVar2,(ulonglong)param_1);
      *param_7 = uVar2;
      return;
    }
    param_4 = uVar2;
    if (piVar1 != (int *)0x0) {
      if (0x7ffffffe < param_1 - 1) {
                    /* WARNING: Subroutine does not return */
        OnInvalidConcurrentLinearArrayAllocatorNum(0,(ulonglong)param_1);
      }
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(piVar1);
      (param_5->SecondaryData).Data = (int *)0x0;
      *param_7 = uVar2;
      return;
    }
  }
  *param_7 = param_4;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FForwardLightUniformParameters_*>_> @ 144b92990

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FForwardLightUniformParameters_*>_>
          (ushort param_1,ForElementType<FForwardLightUniformParameters_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FForwardLightUniformParameters_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_> @ 144b92a60

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
          (ushort param_1,ForElementType<UE::Math::TPlane<double>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TPlane<double>_>::ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>_> @ 144b92b20

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>_>
          (ushort param_1,ForElementType<UE::Math::TVector4<float>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 6) {
      iVar8 = 5;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 6) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector4<float>_>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>_> @ 144b92bf0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>_>
          (ushort param_1,ForElementType<UE::Math::TVector4<float>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0xe) {
      iVar8 = 0xd;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0xe) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector4<float>_>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_> @ 144b92cc0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
          (ushort param_1,ForElementType<UE::Math::TVector<float>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0xe) {
      iVar8 = 0xd;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0xe) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector<float>_>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_const_*>_> @ 144b92d90

/* WARNING: Removing unreachable block (ram,0x000144b92dd7) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_const_*>_>
          (ushort param_1,ForElementType<FPrimitiveSceneInfo_const_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FPrimitiveSceneInfo_const_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<unsigned_int>_>_> @ 144b92e20

/* WARNING: Removing unreachable block (ram,0x000144b92e67) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<unsigned_int>_>_>
          (ushort param_1,ForElementType<UE::Math::TIntVector2<unsigned_int>_> *param_2,int *param_3
          )

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::Math::TIntVector2<unsigned_int>_>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingMergedContext::FBatchItem>_> @ 144b92eb0

/* WARNING: Removing unreachable block (ram,0x000144b92ef7) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingMergedContext::FBatchItem>_>
          (ushort param_1,ForElementType<FInstanceCullingMergedContext::FBatchItem> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceCullingMergedContext::FBatchItem>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FCompactionData>_> @ 144b92f40

/* WARNING: Removing unreachable block (ram,0x000144b92f87) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FCompactionData>_>
          (ushort param_1,ForElementType<FInstanceCullingContext::FCompactionData> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceCullingContext::FCompactionData>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingMergedContext::FContextBatchInfoPacked>_> @ 144b92fd0

/* WARNING: Removing unreachable block (ram,0x000144b93017) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingMergedContext::FContextBatchInfoPacked>_>
          (ushort param_1,
          ForElementType<FInstanceCullingMergedContext::FContextBatchInfoPacked> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceCullingMergedContext::FContextBatchInfoPacked>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FMeshDrawCommandInfo>_> @ 144b93060

/* WARNING: Removing unreachable block (ram,0x000144b930a7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FMeshDrawCommandInfo>_>
          (ushort param_1,ForElementType<FInstanceCullingContext::FMeshDrawCommandInfo> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceCullingContext::FMeshDrawCommandInfo>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FPayloadData>_> @ 144b930f0

/* WARNING: Removing unreachable block (ram,0x000144b93137) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FPayloadData>_>
          (ushort param_1,ForElementType<FInstanceCullingContext::FPayloadData> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceCullingContext::FPayloadData>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIDrawIndexedIndirectParameters>_> @ 144b93180

/* WARNING: Removing unreachable block (ram,0x000144b931c7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIDrawIndexedIndirectParameters>_>
          (ushort param_1,ForElementType<FRHIDrawIndexedIndirectParameters> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRHIDrawIndexedIndirectParameters>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSortedLightSceneInfo>_> @ 144b93210

/* WARNING: Removing unreachable block (ram,0x000144b93257) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSortedLightSceneInfo>_>
          (ushort param_1,ForElementType<FSortedLightSceneInfo> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FSortedLightSceneInfo>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_> @ 144b932a0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<int> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>::
    ResizeAllocation(param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGTexture_*>_> @ 144b93340

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGTexture_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGTexture_*> *param_4,int *param_5
          ,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGTexture_*>::
    ResizeAllocation(param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<unsigned_int>_>_> @ 144b933e0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<unsigned_int>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TIntVector2<unsigned_int>_> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::Math::TIntVector2<unsigned_int>_>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TVector4<float>_>_> @ 144b93480

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TVector4<float>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector4<float>_> *param_4
          ,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::Math::TVector4<float>_>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingLoadBalancerBase::FPackedBatch>_> @ 144b93520

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingLoadBalancerBase::FPackedBatch>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FInstanceCullingLoadBalancerBase::FPackedBatch> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceCullingLoadBalancerBase::FPackedBatch>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingLoadBalancerBase::FPackedItem>_> @ 144b935c0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingLoadBalancerBase::FPackedItem>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FInstanceCullingLoadBalancerBase::FPackedItem> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceCullingLoadBalancerBase::FPackedItem>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FPayloadData>_> @ 144b93660

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FPayloadData>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FInstanceCullingContext::FPayloadData> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceCullingContext::FPayloadData>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIDrawIndexedIndirectParameters>_> @ 144b93700

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIDrawIndexedIndirectParameters>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FRHIDrawIndexedIndirectParameters> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRHIDrawIndexedIndirectParameters>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_> @ 144b937a0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::ResizeAllocation(param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_> @ 144b93840

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::ResizeAllocation(param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FForwardLightData>_> @ 144b938e0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FForwardLightData>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FForwardLightData> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FForwardLightData>::ResizeAllocation(param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleMeshDrawCommand>_> @ 144b93980

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleMeshDrawCommand>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FVisibleMeshDrawCommand> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FVisibleMeshDrawCommand>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGTexture_*>_> @ 144b93a20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGTexture_*>_>
          (uint param_1,uint param_2,ForElementType<FRDGTexture_*> *param_3,int param_4,int *param_5
          )

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGTexture_*>::
    ResizeAllocation(param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_> @ 144b93a90

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
          (uint param_1,uint param_2,
          ForElementType<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::ResizeAllocation(param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_> @ 144b93b00

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
          (uint param_1,uint param_2,
          ForElementType<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::ResizeAllocation(param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleMeshDrawCommand>_> @ 144b93b70

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleMeshDrawCommand>_>
          (uint param_1,uint param_2,ForElementType<FVisibleMeshDrawCommand> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FVisibleMeshDrawCommand>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FForwardLightUniformParameters_*>_> @ 144b93be0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FForwardLightUniformParameters_*>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FForwardLightUniformParameters_*> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FForwardLightUniformParameters_*>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>_> @ 144b93c60

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector4<float>_> *param_4
          ,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 6) {
      iVar1 = 5;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector4<float>_>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>_> @ 144b93ce0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector4<float>_> *param_4
          ,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0xe) {
      iVar1 = 0xd;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector4<float>_>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_> @ 144b93d60

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector<float>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0xe) {
      iVar1 = 0xd;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector<float>_>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<unsigned_int>_>_> @ 144b93de0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<unsigned_int>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TIntVector2<unsigned_int>_> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::Math::TIntVector2<unsigned_int>_>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingMergedContext::FBatchItem>_> @ 144b93e10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingMergedContext::FBatchItem>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FInstanceCullingMergedContext::FBatchItem> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceCullingMergedContext::FBatchItem>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FCompactionData>_> @ 144b93e40

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FCompactionData>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FInstanceCullingContext::FCompactionData> *param_4,int param_5,int *param_6
          )

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceCullingContext::FCompactionData>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingMergedContext::FContextBatchInfoPacked>_> @ 144b93e70

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingMergedContext::FContextBatchInfoPacked>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FInstanceCullingMergedContext::FContextBatchInfoPacked> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceCullingMergedContext::FContextBatchInfoPacked>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FMeshDrawCommandInfo>_> @ 144b93ea0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FMeshDrawCommandInfo>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FInstanceCullingContext::FMeshDrawCommandInfo> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceCullingContext::FMeshDrawCommandInfo>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingLoadBalancerBase::FPackedBatch>_> @ 144b93ed0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingLoadBalancerBase::FPackedBatch>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FInstanceCullingLoadBalancerBase::FPackedBatch> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceCullingLoadBalancerBase::FPackedBatch>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingLoadBalancerBase::FPackedItem>_> @ 144b93f00

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingLoadBalancerBase::FPackedItem>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FInstanceCullingLoadBalancerBase::FPackedItem> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceCullingLoadBalancerBase::FPackedItem>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FPayloadData>_> @ 144b93f30

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FPayloadData>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FInstanceCullingContext::FPayloadData> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FInstanceCullingContext::FPayloadData>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIDrawIndexedIndirectParameters>_> @ 144b93f60

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIDrawIndexedIndirectParameters>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FRHIDrawIndexedIndirectParameters> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRHIDrawIndexedIndirectParameters>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSortedLightSceneInfo>_> @ 144b93f90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSortedLightSceneInfo>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSortedLightSceneInfo> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FSortedLightSceneInfo>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FForwardLightData>_> @ 144b93fc0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FForwardLightData>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FForwardLightData> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FForwardLightData>::ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// IsCompleted<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0> @ 144c1ccb0

bool __cdecl
UE::RDG::IsCompleted<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
          (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Tasks::Private::FTaskHandle_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if ((*(longlong *)pFVar3 != 0) && (*(char *)(*(longlong *)pFVar3 + 0xd0) == '\0')) {
      return false;
    }
    pFVar3 = pFVar3 + 8;
  }
  return true;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>::ForElementType<FLightSceneInfoCompact>_> @ 144c1cd30

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>::ForElementType<FLightSceneInfoCompact>_>
          (ushort param_1,ForElementType<FLightSceneInfoCompact> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0x10);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>::ForElementType<FLightSceneInfoCompact>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<LumenRadianceCache::FUpdateInputs>_> @ 144c1ce00

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<LumenRadianceCache::FUpdateInputs>_>
          (ushort param_1,ForElementType<LumenRadianceCache::FUpdateInputs> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<LumenRadianceCache::FUpdateInputs>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<LumenRadianceCache::FUpdateOutputs>_> @ 144c1cec0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<LumenRadianceCache::FUpdateOutputs>_>
          (ushort param_1,ForElementType<LumenRadianceCache::FUpdateOutputs> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<LumenRadianceCache::FUpdateOutputs>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGScatterUploadBuilder::FPass>_> @ 144c1cf80

/* WARNING: Removing unreachable block (ram,0x000144c1cfc7) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGScatterUploadBuilder::FPass>_>
          (ushort param_1,ForElementType<FRDGScatterUploadBuilder::FPass> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRDGScatterUploadBuilder::FPass>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGBuffer_*>_> @ 144c1d010

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGBuffer_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGBuffer_*> *param_4,int *param_5,
          int *param_6)

{
  ForElementType<FRDGBuffer_*> *this;
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong64 uVar4;
  ForElementType<FRDGBuffer_*> _Src;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  iVar1 = *param_5;
  uVar8 = *param_6;
  uVar9 = iVar1 + param_3;
  *param_5 = uVar9;
  if ((uint)param_3 <= uVar8 - iVar1) {
    return iVar1;
  }
  if ((int)uVar9 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar9);
  }
  uVar7 = 4;
  uVar10 = CONCAT44(0,param_1);
  if (uVar9 < 5) {
    _Src = param_4->SecondaryData;
LAB_144c1d0c6:
    uVar8 = (uint)uVar7;
    if (_Src == (ForElementType<FRDGBuffer_*>)0x0) goto LAB_144c1d11a;
    memmove(param_4,(void *)_Src,(longlong)iVar1 << 3);
    uVar8 = 0;
    iVar6 = 0;
    uVar9 = (uint)uVar7;
  }
  else {
    uVar5 = (ulonglong)(int)uVar9;
    if (uVar8 < 5) {
      uVar8 = 0;
    }
    if (uVar8 == 0) {
      if (4 < uVar5) {
        uVar7 = uVar5;
      }
    }
    else {
      uVar7 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
    }
    uVar4 = FMemory::QuantizeSize(uVar10 * uVar7,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar10;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar4;
    this = &param_4->SecondaryData;
    uVar7 = SUB168(auVar3 / auVar2,0) & 0xffffffff;
    if (SUB164(auVar3 / auVar2,0) < (int)uVar9) {
      uVar7 = 0x7fffffff;
    }
    _Src = *this;
    uVar8 = (uint)uVar7;
    if (uVar8 < 5) goto LAB_144c1d0c6;
    iVar6 = iVar1;
    uVar9 = uVar8;
    if (_Src == (ForElementType<FRDGBuffer_*>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this,0,uVar8,uVar10);
      memmove((void *)*this,param_4,(longlong)iVar1 << 3);
      goto LAB_144c1d11a;
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_4->SecondaryData,iVar6,uVar8,uVar10);
  uVar8 = uVar9;
LAB_144c1d11a:
  *param_6 = uVar8;
  return iVar1;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_> @ 144c1d150

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGTexture_*> *param_4,int *param_5
          ,int *param_6)

{
  ForElementType<FRDGTexture_*> *this;
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong64 uVar4;
  ForElementType<FRDGTexture_*> _Src;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  iVar1 = *param_5;
  uVar8 = *param_6;
  uVar9 = iVar1 + param_3;
  *param_5 = uVar9;
  if ((uint)param_3 <= uVar8 - iVar1) {
    return iVar1;
  }
  if ((int)uVar9 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar9);
  }
  uVar7 = 4;
  uVar10 = CONCAT44(0,param_1);
  if (uVar9 < 5) {
    _Src = param_4->SecondaryData;
LAB_144c1d206:
    uVar8 = (uint)uVar7;
    if (_Src == (ForElementType<FRDGTexture_*>)0x0) goto LAB_144c1d25a;
    memmove(param_4,(void *)_Src,(longlong)iVar1 << 3);
    uVar8 = 0;
    iVar6 = 0;
    uVar9 = (uint)uVar7;
  }
  else {
    uVar5 = (ulonglong)(int)uVar9;
    if (uVar8 < 5) {
      uVar8 = 0;
    }
    if (uVar8 == 0) {
      if (4 < uVar5) {
        uVar7 = uVar5;
      }
    }
    else {
      uVar7 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
    }
    uVar4 = FMemory::QuantizeSize(uVar10 * uVar7,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar10;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar4;
    this = &param_4->SecondaryData;
    uVar7 = SUB168(auVar3 / auVar2,0) & 0xffffffff;
    if (SUB164(auVar3 / auVar2,0) < (int)uVar9) {
      uVar7 = 0x7fffffff;
    }
    _Src = *this;
    uVar8 = (uint)uVar7;
    if (uVar8 < 5) goto LAB_144c1d206;
    iVar6 = iVar1;
    uVar9 = uVar8;
    if (_Src == (ForElementType<FRDGTexture_*>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this,0,uVar8,uVar10);
      memmove((void *)*this,param_4,(longlong)iVar1 << 3);
      goto LAB_144c1d25a;
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_4->SecondaryData,iVar6,uVar8,uVar10);
  uVar8 = uVar9;
LAB_144c1d25a:
  *param_6 = uVar8;
  return iVar1;
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>::ForElementType<FLightSceneInfoCompact>_> @ 144c1d290

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>::ForElementType<FLightSceneInfoCompact>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FLightSceneInfoCompact> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x11) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0x10);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>::ForElementType<FLightSceneInfoCompact>
    ::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<LumenRadianceCache::FRadianceCacheSetup>_> @ 144c1d370

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<LumenRadianceCache::FRadianceCacheSetup>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<LumenRadianceCache::FRadianceCacheSetup> *param_4,int *param_5,int *param_6
          )

{
  ForElementType<LumenRadianceCache::FRadianceCacheSetup> *this;
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong64 uVar4;
  ulonglong uVar5;
  ForElementType<LumenRadianceCache::FRadianceCacheSetup> _Src;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  iVar1 = *param_5;
  uVar8 = *param_6;
  uVar9 = iVar1 + param_3;
  *param_5 = uVar9;
  if ((uint)param_3 <= uVar8 - iVar1) {
    return iVar1;
  }
  if ((int)uVar9 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar9);
  }
  uVar7 = 4;
  uVar10 = CONCAT44(0,param_1);
  if (uVar9 < 5) {
    _Src = param_4->SecondaryData;
LAB_144c1d42b:
    uVar8 = (uint)uVar7;
    if (_Src == (ForElementType<LumenRadianceCache::FRadianceCacheSetup>)0x0) goto LAB_144c1d481;
    memmove(param_4,(void *)_Src,(longlong)iVar1 * 0x50);
    uVar8 = 0;
    iVar6 = 0;
    uVar9 = (uint)uVar7;
  }
  else {
    uVar5 = (ulonglong)(int)uVar9;
    if (uVar8 < 5) {
      uVar8 = 0;
    }
    if (uVar8 == 0) {
      if (4 < uVar5) {
        uVar7 = uVar5;
      }
    }
    else {
      uVar7 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
    }
    uVar4 = FMemory::QuantizeSize(uVar10 * uVar7,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar10;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar4;
    this = &param_4->SecondaryData;
    _Src = *this;
    uVar7 = SUB168(auVar3 / auVar2,0) & 0xffffffff;
    if (SUB164(auVar3 / auVar2,0) < (int)uVar9) {
      uVar7 = 0x7fffffff;
    }
    uVar8 = (uint)uVar7;
    if (uVar8 < 5) goto LAB_144c1d42b;
    iVar6 = iVar1;
    uVar9 = uVar8;
    if (_Src == (ForElementType<LumenRadianceCache::FRadianceCacheSetup>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this,0,uVar8,uVar10);
      memmove((void *)*this,param_4,(longlong)iVar1 * 0x50);
      goto LAB_144c1d481;
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_4->SecondaryData,iVar6,uVar8,uVar10);
  uVar8 = uVar9;
LAB_144c1d481:
  *param_6 = uVar8;
  return iVar1;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>::ForElementType<FLightSceneInfoCompact>_> @ 144c1d4c0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>::ForElementType<FLightSceneInfoCompact>_>
          (uint param_1,uint param_2,ForElementType<FLightSceneInfoCompact> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0x10);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>::ForElementType<FLightSceneInfoCompact>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>::ForElementType<FLightSceneInfoCompact>_> @ 144c1d580

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>::ForElementType<FLightSceneInfoCompact>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FLightSceneInfoCompact> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0x10);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>::ForElementType<FLightSceneInfoCompact>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// CopyFunc<FNaniteLumenCardData> @ 144d37aa0

void * __cdecl UE::Core::Private::PimplPtr::CopyFunc<FNaniteLumenCardData>(void *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = ::operator_new(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = DeleterFunc<FNaniteLumenCardData>;
    puVar2[1] = CopyFunc<FNaniteLumenCardData>;
    uVar1 = *(undefined8 *)((longlong)param_1 + 8);
    puVar2[2] = *(undefined8 *)param_1;
    puVar2[3] = uVar1;
    return puVar2 + 2;
  }
  return &DAT_00000010;
}

// CopyFunc<FMeshDrawShaderBindings> @ 144d37af0

void * __cdecl UE::Core::Private::PimplPtr::CopyFunc<FMeshDrawShaderBindings>(void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x90);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    *puVar1 = DeleterFunc<FMeshDrawShaderBindings>;
    puVar1[1] = CopyFunc<FMeshDrawShaderBindings>;
    *(undefined4 *)(puVar1 + 5) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 2;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    FMeshDrawShaderBindings::CopyFrom((FMeshDrawShaderBindings *)(puVar1 + 2),param_1);
    return puVar1 + 2;
  }
  return &DAT_00000010;
}

// DeleterFunc<FNaniteLumenCardData> @ 144d38060

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<FNaniteLumenCardData>(void *param_1)

{
  ::operator_delete(param_1,0x20);
  return;
}

// DeleterFunc<FMeshDrawShaderBindings> @ 144d38070

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<FMeshDrawShaderBindings>(void *param_1)

{
  FMeshDrawShaderBindings::~FMeshDrawShaderBindings
            ((FMeshDrawShaderBindings *)((longlong)param_1 + 0x10));
  ::operator_delete(param_1,0x90);
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 144d3b890

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<int> *param_5,
          int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveSceneInfo_*>_> @ 144d3b930

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveSceneInfo_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FPrimitiveSceneInfo_*> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveSceneInfo_*>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_> @ 144d3b9d0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Math::TVector<double>_> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<UE::Math::TVector<double>_>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_> @ 144d3ba70

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FSpanAllocator::FLinearAllocation> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0xb) {
      iVar1 = 10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FSpanAllocator::FLinearAllocation>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>_> @ 144d3bb10

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
          *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
  ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
  ::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>_> @ 144d3bbb0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_> *param_5,int param_6,
          int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
  ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_> @ 144d3bc50

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<int> *param_5,
          int param_6,int *param_7)

{
  if (param_4 < param_3) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>::
    ResizeAllocation(param_5,0,param_3,(ulonglong)param_1);
    *param_7 = param_3;
    return;
  }
  *param_7 = param_4;
  return;
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_> @ 144d3bc90

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<unsigned_int> *param_5,
          int param_6,int *param_7)

{
  if (param_4 < param_3) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>::
    ResizeAllocation(param_5,0,param_3,(ulonglong)param_1);
    *param_7 = param_3;
    return;
  }
  *param_7 = param_4;
  return;
}

// ReallocForCopy<0,TFixedAllocator<9>::ForElementType<FRDGTexture_*>_> @ 144d3bcd0

void __cdecl
UE::Core::Private::ReallocForCopy<0,TFixedAllocator<9>::ForElementType<FRDGTexture_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<FRDGTexture_*> *param_5,
          int param_6,int *param_7)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    if ((9 < (uint)param_3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewMax <= NumInlineElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                           ,0x52a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = 9;
  }
  if ((int)uVar3 <= param_4) {
    *param_7 = param_4;
    return;
  }
  if ((9 < uVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax >= 0 && NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x524,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_7 = uVar3;
  return;
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FNaniteShadingBin>_> @ 144d3bd80

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FNaniteShadingBin>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FNaniteShadingBin> *param_5,int param_6,int *param_7)

{
  if (param_4 < param_3) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FNaniteShadingBin>::ResizeAllocation(param_5,0,param_3,(ulonglong)param_1);
    *param_7 = param_3;
    return;
  }
  *param_7 = param_4;
  return;
}

// ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FCardPageRenderData>_> @ 144d3bdc0

/* WARNING: Removing unreachable block (ram,0x000144d3be02) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FCardPageRenderData>_>
          (uint param_1,uint param_2,ForElementType<FCardPageRenderData> *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_4;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FCardPageRenderData>::ResizeAllocation(param_3,iVar2,iVar3,(ulonglong)param_1);
    *param_4 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveSceneInfo_*>_> @ 144d3be40

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveSceneInfo_*>_>
          (ushort param_1,ForElementType<FPrimitiveSceneInfo_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveSceneInfo_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_> @ 144d3bf10

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
          (ushort param_1,ForElementType<UE::Math::TVector<double>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector<double>_>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>_> @ 144d3bfe0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>_>
          (ushort param_1,ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FLumenGatheredLight>_> @ 144d3c0b0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FLumenGatheredLight>_>
          (ushort param_1,ForElementType<FLumenGatheredLight> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x41) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FLumenGatheredLight>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<9>::ForElementType<FRDGTexture_*>_> @ 144d3c180

int __cdecl
UE::Core::Private::ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<9>::ForElementType<FRDGTexture_*>_>
          (ushort param_1,ForElementType<FRDGTexture_*> *param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_3;
  uVar1 = iVar4 + 1;
  if ((int)uVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (9 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *param_3 = 9;
  return iVar4;
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVirtualPageIndex>_> @ 144d3c1f0

/* WARNING: Removing unreachable block (ram,0x000144d3c237) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVirtualPageIndex>_>
          (ushort param_1,ForElementType<FVirtualPageIndex> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FVirtualPageIndex>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FInstanceDraw>_> @ 144d3c280

/* WARNING: Removing unreachable block (ram,0x000144d3c2c7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FInstanceDraw>_>
          (ushort param_1,ForElementType<Nanite::FInstanceDraw> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<Nanite::FInstanceDraw>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceRange>_> @ 144d3c310

/* WARNING: Removing unreachable block (ram,0x000144d3c357) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceRange>_>
          (ushort param_1,ForElementType<FInstanceRange> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceRange>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLumenSurfaceCacheCullInstancesTask>_> @ 144d3c3a0

/* WARNING: Removing unreachable block (ram,0x000144d3c3e7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLumenSurfaceCacheCullInstancesTask>_>
          (ushort param_1,ForElementType<FLumenSurfaceCacheCullInstancesTask> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FLumenSurfaceCacheCullInstancesTask>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLumenSurfaceCacheCullPrimitivesTask>_> @ 144d3c430

/* WARNING: Removing unreachable block (ram,0x000144d3c477) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLumenSurfaceCacheCullPrimitivesTask>_>
          (ushort param_1,ForElementType<FLumenSurfaceCacheCullPrimitivesTask> *param_2,int *param_3
          )

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FLumenSurfaceCacheCullPrimitivesTask>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLumenSurfaceCacheUpdateMeshCardsTask>_> @ 144d3c4c0

/* WARNING: Removing unreachable block (ram,0x000144d3c507) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLumenSurfaceCacheUpdateMeshCardsTask>_>
          (ushort param_1,ForElementType<FLumenSurfaceCacheUpdateMeshCardsTask> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FLumenSurfaceCacheUpdateMeshCardsTask>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshCardsAdd>_> @ 144d3c550

/* WARNING: Removing unreachable block (ram,0x000144d3c597) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshCardsAdd>_>
          (ushort param_1,ForElementType<FMeshCardsAdd> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshCardsAdd>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FNaniteShadingBin>_> @ 144d3c5e0

/* WARNING: Removing unreachable block (ram,0x000144d3c627) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FNaniteShadingBin>_>
          (ushort param_1,ForElementType<FNaniteShadingBin> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FNaniteShadingBin>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TUniqueFunction<void___cdecl(void)>_>_> @ 144d3c670

/* WARNING: Removing unreachable block (ram,0x000144d3c6b7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TUniqueFunction<void___cdecl(void)>_>_>
          (ushort param_1,ForElementType<TUniqueFunction<void___cdecl(void)>_> *param_2,int *param_3
          )

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<TUniqueFunction<void___cdecl(void)>_>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSurfaceCacheRequest>_> @ 144d3c700

/* WARNING: Removing unreachable block (ram,0x000144d3c747) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSurfaceCacheRequest>_>
          (ushort param_1,ForElementType<FSurfaceCacheRequest> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FSurfaceCacheRequest>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FLumenPackedLight>_> @ 144d3c790

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FLumenPackedLight>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FLumenPackedLight> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x11) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FLumenPackedLight>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FViewBatchedLightParameters>_> @ 144d3c870

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FViewBatchedLightParameters>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FViewBatchedLightParameters> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 2) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FViewBatchedLightParameters>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>_> @ 144d3c950

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar3 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>::ResizeAllocation
              (param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<0,TFixedAllocator<2>::ForElementType<FLumenViewOrigin>_> @ 144d3ca20

int __cdecl
UE::Core::Private::ReallocGrow<0,TFixedAllocator<2>::ForElementType<FLumenViewOrigin>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FLumenViewOrigin> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (2 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 2;
  }
  return iVar5;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshCardsAdd>_> @ 144d3caa0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshCardsAdd>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FMeshCardsAdd> *param_4,int *param_5
          ,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshCardsAdd>::
    ResizeAllocation(param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveSceneInfo_*>_> @ 144d3cb40

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveSceneInfo_*>_>
          (uint param_1,uint param_2,ForElementType<FPrimitiveSceneInfo_*> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 2) {
    iVar2 = 1;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveSceneInfo_*>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FLumenPackedLight>_> @ 144d3cc00

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FLumenPackedLight>_>
          (uint param_1,uint param_2,ForElementType<FLumenPackedLight> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FLumenPackedLight>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>_> @ 144d3ccc0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>_>
          (uint param_1,uint param_2,
          ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FViewBatchedLightParameters>_> @ 144d3cd80

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FViewBatchedLightParameters>_>
          (uint param_1,uint param_2,ForElementType<FViewBatchedLightParameters> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 2) {
    iVar2 = 1;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FViewBatchedLightParameters>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>_> @ 144d3ce40

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>_>
          (uint param_1,uint param_2,
          ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<0,TFixedAllocator<2>::ForElementType<FLumenViewOrigin>_> @ 144d3cf00

void __cdecl
UE::Core::Private::ReallocShrink<0,TFixedAllocator<2>::ForElementType<FLumenViewOrigin>_>
          (uint param_1,uint param_2,ForElementType<FLumenViewOrigin> *param_3,int param_4,
          int *param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *param_5;
  if ((2 < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x530,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 != 2) {
    *param_5 = 2;
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveSceneInfo_*>_> @ 144d3cf60

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveSceneInfo_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPrimitiveSceneInfo_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveSceneInfo_*>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceRange>_> @ 144d3cfe0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceRange>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FInstanceRange> *param_4,int param_5
          ,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceRange>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLumenSurfaceCacheCullInstancesTask>_> @ 144d3d010

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLumenSurfaceCacheCullInstancesTask>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FLumenSurfaceCacheCullInstancesTask> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FLumenSurfaceCacheCullInstancesTask>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLumenSurfaceCacheCullPrimitivesTask>_> @ 144d3d040

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLumenSurfaceCacheCullPrimitivesTask>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FLumenSurfaceCacheCullPrimitivesTask> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FLumenSurfaceCacheCullPrimitivesTask>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLumenSurfaceCacheUpdateMeshCardsTask>_> @ 144d3d070

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLumenSurfaceCacheUpdateMeshCardsTask>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FLumenSurfaceCacheUpdateMeshCardsTask> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FLumenSurfaceCacheUpdateMeshCardsTask>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshCardsAdd>_> @ 144d3d0a0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshCardsAdd>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FMeshCardsAdd> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshCardsAdd>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FCardPageRenderData>_> @ 144d3d0d0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FCardPageRenderData>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FCardPageRenderData> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FCardPageRenderData>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSurfaceCacheRequest>_> @ 144d3d100

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSurfaceCacheRequest>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSurfaceCacheRequest> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FSurfaceCacheRequest>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleMeshDrawCommand>_> @ 144d3d130

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleMeshDrawCommand>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FVisibleMeshDrawCommand> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FVisibleMeshDrawCommand>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ShouldCompileWithWaveSize @ 144d9bef0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::ShaderPermutationUtils::ShouldCompileWithWaveSize
          (FShaderPermutationParameters *param_1,int param_2)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (param_2 == 0) {
    return true;
  }
  bVar3 = RHISupportsWaveOperations((FStaticShaderPlatform)param_1->Platform);
  if (bVar3) {
    EVar1 = param_1->Platform;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x1d8,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if ((int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MinimumWaveSize <= param_2) {
      EVar1 = param_1->Platform;
      if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x1de,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      return param_2 <= (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaximumWaveSize;
    }
  }
  return false;
}

// CopyFunc<FNaniteMaterialCacheData> @ 144e6ae30

void * __cdecl UE::Core::Private::PimplPtr::CopyFunc<FNaniteMaterialCacheData>(void *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = ::operator_new(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = DeleterFunc<FNaniteMaterialCacheData>;
    puVar2[1] = CopyFunc<FNaniteMaterialCacheData>;
    uVar1 = *(undefined8 *)((longlong)param_1 + 8);
    puVar2[2] = *(undefined8 *)param_1;
    puVar2[3] = uVar1;
    return puVar2 + 2;
  }
  return &DAT_00000010;
}

// CopyFunc<FMeshDrawShaderBindings> @ 144e6ae80

void * __cdecl UE::Core::Private::PimplPtr::CopyFunc<FMeshDrawShaderBindings>(void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x90);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    *puVar1 = DeleterFunc<FMeshDrawShaderBindings>;
    puVar1[1] = CopyFunc<FMeshDrawShaderBindings>;
    *(undefined4 *)(puVar1 + 5) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 2;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    FMeshDrawShaderBindings::CopyFrom((FMeshDrawShaderBindings *)(puVar1 + 2),param_1);
    return puVar1 + 2;
  }
  return &DAT_00000010;
}

// DeleterFunc<FNaniteMaterialCacheData> @ 144e6bcf0

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<FNaniteMaterialCacheData>(void *param_1)

{
  ::operator_delete(param_1,0x20);
  return;
}

// GetSafeBreadcrumbPath<FRHICommandList_&> @ 144e6dbb0

FString * __cdecl
UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FRHICommandList_&>
          (FString *__return_storage_ptr__,FRHICommandList *param_1)

{
  FString *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  bVar2 = *(FRHIBreadcrumbNode **)&param_1->field_0x2f8 == (FRHIBreadcrumbNode *)0x0;
  if (bVar2) {
    pFVar1 = ::FString::FString(&local_28,L"NoBreadcrumb");
  }
  else {
    pFVar1 = FRHIBreadcrumbNode::GetFullPath
                       (*(FRHIBreadcrumbNode **)&param_1->field_0x2f8,&local_18);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<IPooledRenderTarget_*>_> @ 144e6ee00

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<IPooledRenderTarget_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<IPooledRenderTarget_*> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<IPooledRenderTarget_*>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_> @ 144e6eea0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<FRDGTexture_*> *param_5,
          int param_6,int *param_7)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      uVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      uVar1 = (uint)(uVar2 / uVar3);
      if ((int)uVar1 < param_3) {
        uVar1 = 0x7fffffff;
      }
    }
  }
  if ((int)uVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  uVar4 = uVar1;
  if (uVar1 < 3) {
    if (param_5->SecondaryData == (ForElementType<FRDGTexture_*>)0x0) goto LAB_144e6ef0e;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_5->SecondaryData,0,uVar4,uVar3);
LAB_144e6ef0e:
  *param_7 = uVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_const_*>_> @ 144e6ef50

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_const_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FMaterialRenderProxy_const_*> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FMaterialRenderProxy_const_*>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialCacheLayer>_> @ 144e6eff0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialCacheLayer>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FMaterialCacheLayer> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialCacheLayer>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVTProduceTargetLayer>_> @ 144e6f090

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVTProduceTargetLayer>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FVTProduceTargetLayer> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVTProduceTargetLayer>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMegaLightsViewContext>_> @ 144e6f130

/* WARNING: Removing unreachable block (ram,0x000144e6f172) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMegaLightsViewContext>_>
          (uint param_1,uint param_2,ForElementType<FMegaLightsViewContext> *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_4;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FMegaLightsViewContext>::ResizeAllocation(param_3,iVar2,iVar3,(ulonglong)param_1)
    ;
    *param_4 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<IPooledRenderTarget_*>_> @ 144e6f1b0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<IPooledRenderTarget_*>_>
          (ushort param_1,ForElementType<IPooledRenderTarget_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<IPooledRenderTarget_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_> @ 144e6f280

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_>
          (ushort param_1,ForElementType<FRDGTexture_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIShaderResourceView_*>_> @ 144e6f350

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIShaderResourceView_*>_>
          (ushort param_1,ForElementType<FRHIShaderResourceView_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FRHIShaderResourceView_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_const_*>_> @ 144e6f420

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_const_*>_>
          (ushort param_1,ForElementType<FMaterialRenderProxy_const_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FMaterialRenderProxy_const_*>::ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialCacheLayer>_> @ 144e6f4e0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialCacheLayer>_>
          (ushort param_1,ForElementType<FMaterialCacheLayer> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialCacheLayer>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialCacheStackEntry>_> @ 144e6f5b0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialCacheStackEntry>_>
          (ushort param_1,ForElementType<FMaterialCacheStackEntry> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FMaterialCacheStackEntry>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVTProduceTargetLayer>_> @ 144e6f680

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVTProduceTargetLayer>_>
          (ushort param_1,ForElementType<FVTProduceTargetLayer> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVTProduceTargetLayer>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCacheGenericCSMaterialBatch>_> @ 144e6f750

/* WARNING: Removing unreachable block (ram,0x000144e6f797) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCacheGenericCSMaterialBatch>_>
          (ushort param_1,ForElementType<FMaterialCacheGenericCSMaterialBatch> *param_2,int *param_3
          )

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FMaterialCacheGenericCSMaterialBatch>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCacheGenericCSPrimitiveBatch>_> @ 144e6f7e0

/* WARNING: Removing unreachable block (ram,0x000144e6f827) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCacheGenericCSPrimitiveBatch>_>
          (ushort param_1,ForElementType<FMaterialCacheGenericCSPrimitiveBatch> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FMaterialCacheGenericCSPrimitiveBatch>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCachePageEntry>_> @ 144e6f870

/* WARNING: Removing unreachable block (ram,0x000144e6f8b7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCachePageEntry>_>
          (ushort param_1,ForElementType<FMaterialCachePageEntry> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FMaterialCachePageEntry>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCachePageInfo>_> @ 144e6f900

/* WARNING: Removing unreachable block (ram,0x000144e6f947) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCachePageInfo>_>
          (ushort param_1,ForElementType<FMaterialCachePageInfo> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FMaterialCachePageInfo>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCachePendingEntry>_> @ 144e6f990

/* WARNING: Removing unreachable block (ram,0x000144e6f9d7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCachePendingEntry>_>
          (ushort param_1,ForElementType<FMaterialCachePendingEntry> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FMaterialCachePendingEntry>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCacheStaticMeshCommand>_> @ 144e6fa20

/* WARNING: Removing unreachable block (ram,0x000144e6fa67) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCacheStaticMeshCommand>_>
          (ushort param_1,ForElementType<FMaterialCacheStaticMeshCommand> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FMaterialCacheStaticMeshCommand>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCacheTagProvider::FTagSceneListener>_> @ 144e6fab0

/* WARNING: Removing unreachable block (ram,0x000144e6faf7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCacheTagProvider::FTagSceneListener>_>
          (ushort param_1,ForElementType<FMaterialCacheTagProvider::FTagSceneListener> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FMaterialCacheTagProvider::FTagSceneListener>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntPoint<int>_>_> @ 144e6fb40

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntPoint<int>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TIntPoint<int>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::Math::TIntPoint<int>_>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCacheLayerRenderData>_> @ 144e6fbe0

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCacheLayerRenderData>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FMaterialCacheLayerRenderData> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FMaterialCacheLayerRenderData>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCachePendingPageEntry>_> @ 144e6fc80

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCachePendingPageEntry>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FMaterialCachePendingPageEntry> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FMaterialCachePendingPageEntry>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntPoint<int>_>_> @ 144e6fd20

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntPoint<int>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TIntPoint<int>_> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::Math::TIntPoint<int>_>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCacheLayerRenderData>_> @ 144e6fd90

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCacheLayerRenderData>_>
          (uint param_1,uint param_2,ForElementType<FMaterialCacheLayerRenderData> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FMaterialCacheLayerRenderData>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCachePendingPageEntry>_> @ 144e6fe00

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCachePendingPageEntry>_>
          (uint param_1,uint param_2,ForElementType<FMaterialCachePendingPageEntry> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FMaterialCachePendingPageEntry>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_const_*>_> @ 144e6fe70

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_const_*>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FMaterialRenderProxy_const_*> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FMaterialRenderProxy_const_*>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// DereferenceIfNecessary<FMeshDrawCommandStatsManager,FMeshDrawCommandStatsManager_*_&> @ 144ee2820

FMeshDrawCommandStatsManager * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FMeshDrawCommandStatsManager,FMeshDrawCommandStatsManager_*_&>
          (FMeshDrawCommandStatsManager **param_1)

{
  return *param_1;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshDrawShaderBindingsLayout>_> @ 144eeb520

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshDrawShaderBindingsLayout>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FMeshDrawShaderBindingsLayout> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FMeshDrawShaderBindingsLayout>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<unsigned_int>_>_> @ 144eeb5c0

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<unsigned_int>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Math::TIntVector2<unsigned_int>_> *param_5,int param_6,int *param_7)

{
  TIntVector2<unsigned_int> *_Src;
  TIntVector2<unsigned_int> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if (param_3 <= param_4) {
    *param_7 = param_4;
    return;
  }
  if ((-1 < param_3) && (param_1 - 1 < 0x7fffffff)) {
    _Dst = (TIntVector2<unsigned_int> *)0x0;
    uVar1 = (ulonglong)param_1 * (longlong)param_3;
    _Src = param_5->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (TIntVector2<unsigned_int> *)0x0) &&
         (_Size = (ulonglong)_Src[-1].field0_0x0._s_0.Y, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_5->Data = _Dst;
    *param_7 = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidConcurrentLinearArrayAllocatorNum(param_3,(ulonglong)param_1);
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FCompactionData>_> @ 144eeb690

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FCompactionData>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FInstanceCullingContext::FCompactionData> *param_5,int param_6,int *param_7
          )

{
  FCompactionData *_Src;
  FCompactionData *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if (param_3 <= param_4) {
    *param_7 = param_4;
    return;
  }
  if ((-1 < param_3) && (param_1 - 1 < 0x7fffffff)) {
    _Dst = (FCompactionData *)0x0;
    uVar1 = (ulonglong)param_1 * (longlong)param_3;
    _Src = param_5->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FCompactionData *)0x0) &&
         (_Size = (ulonglong)_Src[-1].DestInstanceIdOffset, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_5->Data = _Dst;
    *param_7 = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidConcurrentLinearArrayAllocatorNum(param_3,(ulonglong)param_1);
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FMeshDrawCommandInfo>_> @ 144eeb760

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FMeshDrawCommandInfo>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FInstanceCullingContext::FMeshDrawCommandInfo> *param_5,int param_6,
          int *param_7)

{
  undefined4 uVar1;
  FMeshDrawCommandInfo *_Src;
  FMeshDrawCommandInfo *_Dst;
  ulonglong uVar2;
  ulonglong _Size;
  
  if (param_3 <= param_4) {
    *param_7 = param_4;
    return;
  }
  if ((-1 < param_3) && (param_1 - 1 < 0x7fffffff)) {
    _Dst = (FMeshDrawCommandInfo *)0x0;
    uVar2 = (ulonglong)param_1 * (longlong)param_3;
    _Src = param_5->Data;
    if (uVar2 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar2,4);
      if ((_Src != (FMeshDrawCommandInfo *)0x0) &&
         (uVar1 = *(undefined4 *)&_Src[-1].field_0x8,
         ZPULL(uVar1,0,0xf) != 0 || _Src[-1].BatchDataStride != 0)) {
        _Size = (ulonglong)(uint)uVar1;
        if (uVar2 < (uint)uVar1) {
          _Size = uVar2;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_5->Data = _Dst;
    *param_7 = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidConcurrentLinearArrayAllocatorNum(param_3,(ulonglong)param_1);
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FPayloadData>_> @ 144eeb830

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FPayloadData>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FInstanceCullingContext::FPayloadData> *param_5,int param_6,int *param_7)

{
  FPayloadData *_Src;
  FPayloadData *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if (param_3 <= param_4) {
    *param_7 = param_4;
    return;
  }
  if ((-1 < param_3) && (param_1 - 1 < 0x7fffffff)) {
    _Dst = (FPayloadData *)0x0;
    uVar1 = (ulonglong)param_1 * (longlong)param_3;
    _Src = param_5->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FPayloadData *)0x0) &&
         (_Size = (ulonglong)_Src[-1].CompactionDataIndex, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_5->Data = _Dst;
    *param_7 = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidConcurrentLinearArrayAllocatorNum(param_3,(ulonglong)param_1);
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIDrawIndexedIndirectParameters>_> @ 144eeb900

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIDrawIndexedIndirectParameters>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FRHIDrawIndexedIndirectParameters> *param_5,int param_6,int *param_7)

{
  FRHIDrawIndexedIndirectParameters *_Src;
  FRHIDrawIndexedIndirectParameters *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if (param_3 <= param_4) {
    *param_7 = param_4;
    return;
  }
  if ((-1 < param_3) && (param_1 - 1 < 0x7fffffff)) {
    _Dst = (FRHIDrawIndexedIndirectParameters *)0x0;
    uVar1 = (ulonglong)param_1 * (longlong)param_3;
    _Src = param_5->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FRHIDrawIndexedIndirectParameters *)0x0) &&
         (_Size = (ulonglong)_Src[-1].StartInstanceLocation, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_5->Data = _Dst;
    *param_7 = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidConcurrentLinearArrayAllocatorNum(param_3,(ulonglong)param_1);
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>_> @ 144eeb9d0

/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<EMeshDrawCommandCullingPayloadFlags> *param_5,int param_6,int *param_7)

{
  EMeshDrawCommandCullingPayloadFlags *_Src;
  EMeshDrawCommandCullingPayloadFlags *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if (param_3 <= param_4) {
    *param_7 = param_4;
    return;
  }
  if ((-1 < param_3) && (param_1 - 1 < 0x7fffffff)) {
    _Dst = (EMeshDrawCommandCullingPayloadFlags *)0x0;
    uVar1 = (ulonglong)param_1 * (longlong)param_3;
    _Src = param_5->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,1);
      if ((_Src != (EMeshDrawCommandCullingPayloadFlags *)0x0) &&
         (_Size = (ulonglong)(uint)*(undefined4 *)(_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_5->Data = _Dst;
    *param_7 = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidConcurrentLinearArrayAllocatorNum(param_3,(ulonglong)param_1);
}

// ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType> @ 144eebaa0

/* WARNING: Removing unreachable block (ram,0x000144eebaff) */

int __cdecl
UE::Core::Private::ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
          (ushort param_1,ForAnyElementType *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  int iVar7;
  
  iVar2 = *param_3;
  uVar3 = (uint)(byte)(param_1 >> 8);
  uVar6 = (ulonglong)param_1 & 0xff;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    lVar4 = 4;
    if (iVar2 != 0) {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar5 = FMemory::QuantizeSize(uVar6 * lVar4,uVar3);
    iVar7 = (int)(uVar5 / uVar6);
    if (iVar7 < (int)uVar1) {
      iVar7 = 0x7fffffff;
    }
    FMemoryImageAllocatorBase::ResizeAllocation
              ((FMemoryImageAllocatorBase *)param_2,iVar2,iVar7,uVar6,uVar3);
    *param_3 = iVar7;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_> @ 144eebb70

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
          (ushort param_1,ForElementType<FMeshBatchElement> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshDrawShaderBindingsLayout>_> @ 144eebc40

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshDrawShaderBindingsLayout>_>
          (ushort param_1,ForElementType<FMeshDrawShaderBindingsLayout> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FMeshDrawShaderBindingsLayout>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ELightMapPolicyType>_> @ 144eebd10

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ELightMapPolicyType>_>
          (ushort param_1,ForElementType<ELightMapPolicyType> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_ELightMapPolicyType>::ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_> @ 144eebdd0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGTexture_*> *param_4,int *param_5
          ,int *param_6)

{
  ForElementType<FRDGTexture_*> *this;
  int iVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ForElementType<FRDGTexture_*> _Src;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  iVar1 = *param_5;
  uVar6 = *param_6;
  uVar8 = iVar1 + param_3;
  *param_5 = uVar8;
  if ((uint)param_3 <= uVar6 - iVar1) {
    return iVar1;
  }
  if ((int)uVar8 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar8);
  }
  uVar7 = (ulonglong)param_1;
  if (uVar8 < 3) {
    _Src = param_4->SecondaryData;
    uVar8 = 2;
LAB_144eebe86:
    uVar6 = uVar8;
    if (_Src == (ForElementType<FRDGTexture_*>)0x0) goto LAB_144eebeda;
    memmove(param_4,(void *)_Src,(longlong)iVar1 << 3);
    uVar6 = 0;
    iVar5 = 0;
  }
  else {
    uVar4 = (ulonglong)(int)uVar8;
    if (uVar6 < 3) {
      uVar6 = 0;
    }
    if (uVar6 == 0) {
      uVar2 = 4;
      if (4 < uVar4) {
        uVar2 = uVar4;
      }
    }
    else {
      uVar2 = (uVar4 * 3 >> 3) + 0x10 + uVar4;
    }
    uVar3 = FMemory::QuantizeSize(uVar7 * uVar2,0);
    uVar6 = (uint)(uVar3 / uVar7);
    this = &param_4->SecondaryData;
    if ((int)uVar6 < (int)uVar8) {
      uVar6 = 0x7fffffff;
    }
    _Src = *this;
    uVar8 = uVar6;
    if (uVar6 < 3) goto LAB_144eebe86;
    iVar5 = iVar1;
    if (_Src == (ForElementType<FRDGTexture_*>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this,0,uVar6,uVar7);
      memmove((void *)*this,param_4,(longlong)iVar1 << 3);
      goto LAB_144eebeda;
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_4->SecondaryData,iVar5,uVar6,uVar7);
  uVar6 = uVar8;
LAB_144eebeda:
  *param_6 = uVar6;
  return iVar1;
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshDrawShaderBindingsLayout>_> @ 144eebf10

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshDrawShaderBindingsLayout>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FMeshDrawShaderBindingsLayout> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FMeshDrawShaderBindingsLayout>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FStaticMeshBatch_const_*>_> @ 144eebf90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FStaticMeshBatch_const_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FStaticMeshBatch_const_*> *param_4,
          int param_5,int *param_6)

{
  FStaticMeshBatch **_Src;
  FStaticMeshBatch **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if (param_3 != *param_6) {
    *param_6 = param_3;
    if ((param_3 < 0) || (0x7ffffffe < param_1 - 1)) {
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(param_3,(ulonglong)param_1);
    }
    _Src = param_4->Data;
    _Dst = (FStaticMeshBatch **)0x0;
    uVar1 = (ulonglong)param_1 * (longlong)param_3;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FStaticMeshBatch **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
  }
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_> @ 144f64e30

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_>
          (ushort param_1,ForElementType<FRDGTexture_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 7) {
      iVar8 = 6;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 7) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTextureUAV_*>_> @ 144f64f00

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTextureUAV_*>_>
          (ushort param_1,ForElementType<FRDGTextureUAV_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 4) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTextureUAV_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FRenderViewContext>_> @ 144f64fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FRenderViewContext>_>
          (ushort param_1,ForElementType<FRenderViewContext> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 3) {
      uVar3 = 2;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
    ForElementType<FRenderViewContext>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FRasterizerPass>_> @ 144f65080

/* WARNING: Removing unreachable block (ram,0x000144f650c7) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FRasterizerPass>_>
          (ushort param_1,ForElementType<Nanite::FRasterizerPass> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<Nanite::FRasterizerPass>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FNaniteRasterBinMeta>_> @ 144f65110

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FNaniteRasterBinMeta>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FNaniteRasterBinMeta> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FNaniteRasterBinMeta>::ResizeAllocation(param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FNaniteRasterBinMeta>_> @ 144f651b0

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FNaniteRasterBinMeta>_>
          (uint param_1,uint param_2,ForElementType<FNaniteRasterBinMeta> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FNaniteRasterBinMeta>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FRasterizerPass>_> @ 144f65220

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FRasterizerPass>_>
          (uint param_1,uint param_2,int param_3,ForElementType<Nanite::FRasterizerPass> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<Nanite::FRasterizerPass>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// CopyFunc<FNaniteBasePassData> @ 14502df30

void * __cdecl UE::Core::Private::PimplPtr::CopyFunc<FNaniteBasePassData>(void *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = ::operator_new(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = DeleterFunc<FNaniteBasePassData>;
    puVar2[1] = CopyFunc<FNaniteBasePassData>;
    uVar1 = *(undefined8 *)((longlong)param_1 + 8);
    puVar2[2] = *(undefined8 *)param_1;
    puVar2[3] = uVar1;
    return puVar2 + 2;
  }
  return &DAT_00000010;
}

// CopyFunc<FMeshDrawShaderBindings> @ 14502df80

void * __cdecl UE::Core::Private::PimplPtr::CopyFunc<FMeshDrawShaderBindings>(void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x90);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    *puVar1 = DeleterFunc<FMeshDrawShaderBindings>;
    puVar1[1] = CopyFunc<FMeshDrawShaderBindings>;
    *(undefined4 *)(puVar1 + 5) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 2;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    FMeshDrawShaderBindings::CopyFrom((FMeshDrawShaderBindings *)(puVar1 + 2),param_1);
    return puVar1 + 2;
  }
  return &DAT_00000010;
}

// DeleterFunc<FNaniteBasePassData> @ 14502e9a0

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<FNaniteBasePassData>(void *param_1)

{
  ::operator_delete(param_1,0x20);
  return;
}

// GetTraceIds<TArray<UE::Tasks::Private::FTaskHandle,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_> @ 145031b90

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __cdecl
UE::Tasks::Private::
GetTraceIds<TArray<UE::Tasks::Private::FTaskHandle,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<UE::Tasks::Private::FTaskHandle,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_1)

{
  int *piVar1;
  FTaskHandle *pFVar2;
  uint uVar3;
  int iVar4;
  FTaskBase *pFVar5;
  atomic<unsigned___int64> *paVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar10;
  FTaskHandle *pFVar11;
  undefined1 local_res8 [8];
  atomic<unsigned___int64> local_28 [2];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar3 = param_1->ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  pFVar11 = (param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum;
  pFVar2 = pFVar11 + iVar4;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Tasks::Private::FTaskHandle_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar2) break;
    pFVar5 = (pFVar11->Pimpl).Reference;
    if (pFVar5 != (FTaskBase *)0x0) {
      local_28[0] = pFVar5->TraceId;
      paVar6 = (atomic<unsigned___int64> *)(__return_storage_ptr__->AllocatorInstance).Data;
      if ((paVar6 <= local_28) && (local_28 < paVar6 + *piVar1)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          pTVar10 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
          return pTVar10;
        }
      }
      iVar9 = __return_storage_ptr__->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
      *(atomic<unsigned___int64> *)
       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_28[0];
    }
    pFVar11 = pFVar11 + 1;
  }
  return __return_storage_ptr__;
}

// GetTraceIds<TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295>_> @ 145031d00

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __cdecl
UE::Tasks::Private::GetTraceIds<TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295>_>
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295> *param_1)

{
  int *piVar1;
  TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295> *pTVar2;
  FTaskBase *pFVar3;
  atomic<unsigned___int64> *paVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar8;
  atomic<unsigned___int64> local_18 [2];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,6,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  pTVar2 = param_1 + 1;
  do {
    if (param_1 == pTVar2) {
      return __return_storage_ptr__;
    }
    pFVar3 = (((FTaskHandle *)&param_1->Elements[0].Pimpl)->Pimpl).Reference;
    if (pFVar3 != (FTaskBase *)0x0) {
      local_18[0] = pFVar3->TraceId;
      paVar4 = (atomic<unsigned___int64> *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((paVar4 <= local_18) && (local_18 < paVar4 + *piVar1)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(atomic<unsigned___int64> *)
       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_18[0];
    }
    param_1 = (TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295> *)((longlong)param_1 + 8);
  } while( true );
}

// Prerequisites<TArray<UE::Tasks::Private::FTaskHandle,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_> @ 145034260

TArray<UE::Tasks::Private::FTaskHandle,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
* __cdecl UE::Tasks::
          Prerequisites<TArray<UE::Tasks::Private::FTaskHandle,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                    (TArray<UE::Tasks::Private::FTaskHandle,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                     *param_1)

{
  return param_1;
}

// Prerequisites<TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295>_> @ 145034270

TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295> * __cdecl
UE::Tasks::Prerequisites<TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295>_>
          (TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295> *param_1)

{
  return param_1;
}

// ReallocForCopy<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_> @ 145034280

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<unsigned_short> *param_5
          ,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x41) {
      iVar1 = 0x40;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FConvexVolume>_> @ 145034320

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FConvexVolume>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<FConvexVolume> *param_5,
          int param_6,int *param_7)

{
  if (param_4 < param_3) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FConvexVolume>::
    ResizeAllocation(param_5,0,param_3,(ulonglong)param_1);
    *param_7 = param_3;
    return;
  }
  *param_7 = param_4;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteVisibilityQuery_*>_> @ 145034360

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteVisibilityQuery_*>_>
          (ushort param_1,ForElementType<FNaniteVisibilityQuery_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FNaniteVisibilityQuery_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>_> @ 145034430

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>_>
          (ushort param_1,ForElementType<FNaniteRasterPipelines::FFixedFunctionBin> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 7) {
      iVar8 = 6;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 7) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteVisibility::FRasterBin>_> @ 145034500

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteVisibility::FRasterBin>_>
          (ushort param_1,ForElementType<FNaniteVisibility::FRasterBin> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FNaniteVisibility::FRasterBin>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteVisibility::FShadingBin>_> @ 1450345d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteVisibility::FShadingBin>_>
          (ushort param_1,ForElementType<FNaniteVisibility::FShadingBin> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FNaniteVisibility::FShadingBin>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FVisualizeResult>_> @ 1450346a0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FVisualizeResult>_>
          (ushort param_1,ForElementType<Nanite::FVisualizeResult> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<Nanite::FVisualizeResult>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Tasks::Private::FTaskHandle>_> @ 145034800

/* WARNING: Removing unreachable block (ram,0x000145034847) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Tasks::Private::FTaskHandle>_>
          (ushort param_1,ForElementType<UE::Tasks::Private::FTaskHandle> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::Tasks::Private::FTaskHandle>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_> @ 145034890

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_char> *param_4,int *param_5
          ,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 9) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIBatchedShaderParametersAllocator_*>_> @ 145034a50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIBatchedShaderParametersAllocator_*>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FRHIBatchedShaderParametersAllocator_*> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRHIBatchedShaderParametersAllocator_*>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_> @ 145034af0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector4<unsigned_int>_>_> @ 145034b90

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector4<unsigned_int>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TIntVector4<unsigned_int>_> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::Math::TIntVector4<unsigned_int>_>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TAtomic<bool>_>_> @ 145034d60

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TAtomic<bool>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<TAtomic<bool>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TAtomic<bool>_>::
    ResizeAllocation(param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_> @ 145034e00

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
          (uint param_1,uint param_2,ForElementType<unsigned_char> *param_3,int param_4,int *param_5
          )

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 9) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector4<unsigned_int>_>_> @ 145034ec0

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector4<unsigned_int>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TIntVector4<unsigned_int>_> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::Math::TIntVector4<unsigned_int>_>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TAtomic<bool>_>_> @ 145034f30

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TAtomic<bool>_>_>
          (uint param_1,uint param_2,ForElementType<TAtomic<bool>_> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TAtomic<bool>_>::
    ResizeAllocation(param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteVisibilityQuery_*>_> @ 145034fa0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteVisibilityQuery_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FNaniteVisibilityQuery_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FNaniteVisibilityQuery_*>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>_> @ 145035020

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FNaniteRasterPipelines::FFixedFunctionBin> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 7) {
      iVar1 = 6;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FNaniteRasterPipelines::FFixedFunctionBin>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FVisualizeResult>_> @ 145035120

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::FVisualizeResult>_>
          (uint param_1,uint param_2,int param_3,ForElementType<Nanite::FVisualizeResult> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<Nanite::FVisualizeResult>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIBatchedShaderParametersAllocator_*>_> @ 1450351a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIBatchedShaderParametersAllocator_*>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FRHIBatchedShaderParametersAllocator_*> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRHIBatchedShaderParametersAllocator_*>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_> @ 1450351d0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FConvexVolume>_> @ 145035200

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FConvexVolume>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FConvexVolume> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FConvexVolume>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FPackedView>_> @ 145035260

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FPackedView>_>
          (uint param_1,uint param_2,int param_3,ForElementType<Nanite::FPackedView> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<Nanite::FPackedView>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TAtomic<bool>_>_> @ 145035290

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TAtomic<bool>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<TAtomic<bool>_> *param_4,int param_5
          ,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TAtomic<bool>_>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Tasks::Private::FTaskHandle>_> @ 1450352c0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Tasks::Private::FTaskHandle>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Tasks::Private::FTaskHandle> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::Tasks::Private::FTaskHandle>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// Rehash<TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>::ForElementType<FSetElementId>_> @ 1450352f0

void __cdecl
UE::Core::Private::
Rehash<TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>::ForElementType<FSetElementId>_>
          (ForElementType<FSetElementId> *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  uchar *puVar2;
  ForElementType<FSetElementId> *pFVar3;
  ForElementType<FSetElementId> *pFVar4;
  ForElementType<FSetElementId> *pFVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  pFVar1 = &param_1->SecondaryData;
  uVar6 = (ulonglong)(uint)param_2;
  pFVar3 = (ForElementType<FSetElementId> *)(param_1->SecondaryData).SecondaryData.Data;
  pFVar4 = pFVar3;
  if (pFVar3 == (ForElementType<FSetElementId> *)0x0) {
    pFVar4 = pFVar1;
  }
  if ((pFVar4 != (ForElementType<FSetElementId> *)0x0) &&
     (pFVar3 != (ForElementType<FSetElementId> *)0x0)) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar3);
    (param_1->SecondaryData).SecondaryData.Data = (FSetElementId *)0x0;
  }
  if (param_2 != 0) {
    TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::ForElementType<FSetElementId>::ResizeAllocation(param_1,0,param_2,4);
    if (0 < param_2) {
      uVar7 = 0;
      do {
        pFVar5 = (ForElementType<FSetElementId> *)(param_1->SecondaryData).SecondaryData.Data;
        if ((pFVar5 == (ForElementType<FSetElementId> *)0x0) &&
           (pFVar5 = (ForElementType<FSetElementId> *)pFVar1,
           pFVar1 == (ForElementType<FSetElementId> *)0x0)) {
          pFVar5 = param_1;
        }
        puVar2 = pFVar5->InlineData + (uVar7 & (longlong)param_2 - 1U) * 4;
        puVar2[0] = 0xff;
        puVar2[1] = 0xff;
        puVar2[2] = 0xff;
        puVar2[3] = 0xff;
        uVar6 = uVar6 - 1;
        uVar7 = uVar7 + 1;
      } while (uVar6 != 0);
    }
  }
  return;
}

// Wait<TArray<UE::Tasks::Private::FTaskHandle,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_> @ 1450354f0

bool __cdecl
UE::Tasks::
Wait<TArray<UE::Tasks::Private::FTaskHandle,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          (TArray<UE::Tasks::Private::FTaskHandle,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *param_1,FTimespan param_2)

{
  atomic<unsigned_int> *paVar1;
  FTaskHandle *pFVar2;
  atomic<unsigned_int> aVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  FTaskBase *pFVar11;
  FTask *pFVar12;
  longlong lVar13;
  FTaskBase *pFVar14;
  FTaskHandle *pFVar15;
  bool bVar16;
  FTaskBase *pFVar17;
  double dVar18;
  undefined1 local_res18 [8];
  FWaitingScope local_res20 [8];
  atomic<unsigned___int64> local_68;
  LARGE_INTEGER local_60;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_58;
  LARGE_INTEGER local_48;
  FTaskBase *local_40;
  
  uVar4 = param_1->ArrayNum;
  pFVar17 = (FTaskBase *)0x0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (0 < (int)uVar4) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
  }
  pFVar15 = (param_1->AllocatorInstance).Data;
  iVar5 = param_1->ArrayNum;
  pFVar2 = pFVar15 + iVar5;
  while( true ) {
    if (param_1->ArrayNum != iVar5) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Tasks::Private::FTaskHandle_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar15 == pFVar2) break;
    pFVar11 = (pFVar15->Pimpl).Reference;
    if (pFVar11 != (FTaskBase *)0x0) {
      local_68 = pFVar11->TraceId;
      if (((local_58.AllocatorInstance.Data <= &local_68) &&
          (&local_68 <
           (atomic<unsigned___int64> *)
           (local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 8))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      iVar10 = local_58.ArrayNum;
      if (local_58.ArrayNum == local_58.ArrayMax) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_58.AllocatorInstance,&local_58.ArrayMax);
      }
      local_58.ArrayNum = iVar10 + 1;
      *(atomic<unsigned___int64> *)(local_58.AllocatorInstance.Data + (longlong)iVar10 * 8) =
           local_68;
    }
    pFVar15 = pFVar15 + 1;
  }
  TaskTrace::FWaitingScope::FWaitingScope(local_res20,&local_58);
  if ((atomic<unsigned___int64> *)local_58.AllocatorInstance.Data != (atomic<unsigned___int64> *)0x0
     ) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`bool___cdecl_UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>(TArray<UE::Tasks::Private::FTaskHandle,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const&___ptr64,FTimespan)'
                ::__l2::__CpuProfilerEventSpecId384,"Tasks::Wait",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h",
               0x180);
    FCpuProfilerTrace::OutputBeginEvent
              (`bool___cdecl_UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>(TArray<UE::Tasks::Private::FTaskHandle,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const&___ptr64,FTimespan)'
               ::__l2::__CpuProfilerEventSpecId384);
  }
  pFVar11 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Private::SmallTaskAllocator);
  if (pFVar11 == (FTaskBase *)0x0) {
    Private::FTaskBase::
    AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,0>
              ((FTaskBase *)0x0,param_1,true);
    Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
LAB_14503585f:
    bVar16 = true;
    bVar9 = true;
    if (pFVar17 == (FTaskBase *)0x0) goto LAB_145035886;
  }
  else {
    Private::FTaskBase::FTaskBase(pFVar11,2,true);
    pFVar11->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____Wait_V__TArray_VFTaskHandle_Private_Tasks_UE__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A______Tasks_UE__YA_NAEBV__TArray_VFTaskHandle_Private_Tasks_UE__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_____UFTimespan___Z_XX_Private_Tasks_UE__6B_
    ;
    if (((*(ulonglong *)&(pFVar11->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    (**(code **)(*(longlong *)&(pFVar11->LowLevelTask).field_0x28 + 0x18))
              (&(pFVar11->LowLevelTask).field_0x28,&pFVar11->LowLevelTask);
    *(FTaskBase **)&pFVar11->LowLevelTask = pFVar11;
    *(undefined ***)&(pFVar11->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(pFVar11->LowLevelTask).field_0x8 = pFVar11;
    pFVar12 = LowLevelTasks::FTask::GetActiveTask();
    pFVar14 = pFVar17;
    if (pFVar12 != (FTask *)0x0) {
      pFVar14 = *(FTaskBase **)&pFVar12->field_0x30;
    }
    *(FTaskBase **)&(pFVar11->LowLevelTask).field_0x30 = pFVar14;
    *(undefined8 *)&(pFVar11->LowLevelTask).field_0x38 = 0xc80000541abc4c00;
    pFVar11->ExtendedPriority = Inline;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar11->_padding_);
    pFVar11->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____Wait_V__TArray_VFTaskHandle_Private_Tasks_UE__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A______Tasks_UE__YA_NAEBV__TArray_VFTaskHandle_Private_Tasks_UE__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_____UFTimespan___Z__Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::
    AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,0>
              (pFVar11,param_1,true);
    Private::FTaskBase::TryLaunch(pFVar11,0x100);
    QueryPerformanceCounter(&local_60);
    if (param_2.Ticks == 0x7fffffffffffffff) {
      pFVar17 = (FTaskBase *)0xffffffffffffffff;
    }
    else if (0.0 < (double)param_2.Ticks * __real_3e7ad7f29abcaf48) {
      dVar18 = ((double)param_2.Ticks * __real_3e7ad7f29abcaf48) /
               FGenericPlatformTime::SecondsPerCycle64;
      lVar13 = 0;
      if ((__real_43e0000000000000 <= dVar18) &&
         (dVar18 = dVar18 - __real_43e0000000000000, dVar18 < __real_43e0000000000000)) {
        lVar13 = -0x8000000000000000;
      }
      pFVar17 = (FTaskBase *)((longlong)dVar18 + lVar13);
    }
    local_48 = local_60;
    local_40 = pFVar17;
    bVar9 = Private::FTaskBase::Wait(pFVar11,(FTimeout *)&local_48.s);
    pFVar17 = pFVar11;
    if (bVar9) goto LAB_14503585f;
    bVar9 = false;
  }
  bVar16 = bVar9;
  LOCK();
  paVar1 = &pFVar17->RefCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar3 == (atomic<unsigned_int>)0x1) {
    (**(code **)pFVar17->_padding_)(pFVar17,1);
  }
LAB_145035886:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  TaskTrace::FWaitingScope::~FWaitingScope(local_res20);
  return bVar16;
}

// Wait<TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295>_> @ 1450358e0

bool __cdecl
UE::Tasks::Wait<TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295>_>
          (TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295> *param_1,FTimespan param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  FTaskBase *pFVar8;
  FTask *pFVar9;
  longlong lVar10;
  FTaskBase *pFVar11;
  FTaskHandle *pFVar12;
  bool bVar13;
  FTaskBase *pFVar14;
  double dVar15;
  FWaitingScope local_res18 [8];
  LARGE_INTEGER local_res20;
  atomic<unsigned___int64> local_68;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_60;
  LARGE_INTEGER local_48;
  FTaskBase *local_40;
  
  pFVar14 = (FTaskBase *)0x0;
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,6,&local_60.AllocatorInstance,0,&local_60.ArrayMax);
  for (pFVar12 = param_1->Elements;
      (TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295> *)pFVar12 != param_1 + 1;
      pFVar12 = pFVar12 + 1) {
    pFVar8 = (((FTaskHandle *)&pFVar12->Pimpl)->Pimpl).Reference;
    if (pFVar8 != (FTaskBase *)0x0) {
      local_68 = pFVar8->TraceId;
      if (((local_60.AllocatorInstance.Data <= &local_68) &&
          (&local_68 <
           (atomic<unsigned___int64> *)
           ((longlong)local_60.AllocatorInstance.Data + (longlong)local_60.ArrayMax * 8))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar7 = local_60.ArrayNum;
      if (local_60.ArrayNum == local_60.ArrayMax) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_60.AllocatorInstance,&local_60.ArrayMax);
      }
      local_60.ArrayNum = iVar7 + 1;
      *(atomic<unsigned___int64> *)(local_60.AllocatorInstance.Data + (longlong)iVar7 * 8) =
           local_68;
    }
  }
  TaskTrace::FWaitingScope::FWaitingScope(local_res18,&local_60);
  if ((atomic<unsigned___int64> *)local_60.AllocatorInstance.Data != (atomic<unsigned___int64> *)0x0
     ) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`bool___cdecl_UE::Tasks::Wait<TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295>_>(TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295>_const&___ptr64,FTimespan)'
                ::__l2::__CpuProfilerEventSpecId384,"Tasks::Wait",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h",
               0x180);
    FCpuProfilerTrace::OutputBeginEvent
              (`bool___cdecl_UE::Tasks::Wait<TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295>_>(TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295>_const&___ptr64,FTimespan)'
               ::__l2::__CpuProfilerEventSpecId384);
  }
  pFVar8 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&Private::SmallTaskAllocator);
  if (pFVar8 == (FTaskBase *)0x0) {
    Private::FTaskBase::
    AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295>,0>
              ((FTaskBase *)0x0,param_1,true);
    Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
LAB_145035c34:
    bVar13 = true;
    bVar6 = true;
    if (pFVar14 == (FTaskBase *)0x0) goto LAB_145035c5b;
  }
  else {
    Private::FTaskBase::FTaskBase(pFVar8,2,true);
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____Wait_V__TStaticArray_VFTaskHandle_Private_Tasks_UE___05_0PPPPPPPP____Tasks_UE__YA_NAEBV__TStaticArray_VFTaskHandle_Private_Tasks_UE___05_0PPPPPPPP___UFTimespan___Z_XX_Private_Tasks_UE__6B_
    ;
    if (((*(ulonglong *)&(pFVar8->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    (**(code **)(*(longlong *)&(pFVar8->LowLevelTask).field_0x28 + 0x18))
              (&(pFVar8->LowLevelTask).field_0x28,&pFVar8->LowLevelTask);
    *(FTaskBase **)&pFVar8->LowLevelTask = pFVar8;
    *(undefined ***)&(pFVar8->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(pFVar8->LowLevelTask).field_0x8 = pFVar8;
    pFVar9 = LowLevelTasks::FTask::GetActiveTask();
    pFVar11 = pFVar14;
    if (pFVar9 != (FTask *)0x0) {
      pFVar11 = *(FTaskBase **)&pFVar9->field_0x30;
    }
    *(FTaskBase **)&(pFVar8->LowLevelTask).field_0x30 = pFVar11;
    *(undefined8 *)&(pFVar8->LowLevelTask).field_0x38 = 0xc80000541abc4c00;
    pFVar8->ExtendedPriority = Inline;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar8->_padding_);
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____Wait_V__TStaticArray_VFTaskHandle_Private_Tasks_UE___05_0PPPPPPPP____Tasks_UE__YA_NAEBV__TStaticArray_VFTaskHandle_Private_Tasks_UE___05_0PPPPPPPP___UFTimespan___Z__Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::
    AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295>,0>
              (pFVar8,param_1,true);
    Private::FTaskBase::TryLaunch(pFVar8,0x100);
    QueryPerformanceCounter(&local_res20);
    if (param_2.Ticks == 0x7fffffffffffffff) {
      pFVar14 = (FTaskBase *)0xffffffffffffffff;
    }
    else if (0.0 < (double)param_2.Ticks * __real_3e7ad7f29abcaf48) {
      dVar15 = ((double)param_2.Ticks * __real_3e7ad7f29abcaf48) /
               FGenericPlatformTime::SecondsPerCycle64;
      lVar10 = 0;
      if ((__real_43e0000000000000 <= dVar15) &&
         (dVar15 = dVar15 - __real_43e0000000000000, dVar15 < __real_43e0000000000000)) {
        lVar10 = -0x8000000000000000;
      }
      pFVar14 = (FTaskBase *)((longlong)dVar15 + lVar10);
    }
    local_48 = local_res20;
    local_40 = pFVar14;
    bVar6 = Private::FTaskBase::Wait(pFVar8,(FTimeout *)&local_48.s);
    pFVar14 = pFVar8;
    if (bVar6) goto LAB_145035c34;
    bVar6 = false;
  }
  bVar13 = bVar6;
  LOCK();
  paVar1 = &pFVar14->RefCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<unsigned_int>)0x1) {
    (**(code **)pFVar14->_padding_)(pFVar14,1);
  }
LAB_145035c5b:
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  TaskTrace::FWaitingScope::~FWaitingScope(local_res18);
  return bVar13;
}

// DeleterFunc<FPathTracingState> @ 1450aa9c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<FPathTracingState>(void *param_1)

{
  FPathTracingState::~FPathTracingState((FPathTracingState *)((longlong)param_1 + 0x10));
  ::operator_delete(param_1,0x4f0);
  return;
}

// ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneCaptureViewInfo>_> @ 1450ae2c0

/* WARNING: Removing unreachable block (ram,0x0001450ae302) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneCaptureViewInfo>_>
          (uint param_1,uint param_2,ForElementType<FSceneCaptureViewInfo> *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_4;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneCaptureViewInfo>::
    ResizeAllocation(param_3,iVar2,iVar3,(ulonglong)param_1);
    *param_4 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBufferAccess>_> @ 1450ae340

/* WARNING: Removing unreachable block (ram,0x0001450ae387) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBufferAccess>_>
          (ushort param_1,ForElementType<FRDGBufferAccess> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGBufferAccess>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// SetupComputeBindings<FPathTracingBuildCloudAccelerationMapCS,FMeshMaterialShaderElementData> @ 1450ae710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
UE::MeshPassUtils::
SetupComputeBindings<FPathTracingBuildCloudAccelerationMapCS,FMeshMaterialShaderElementData>
          (TShaderRefBase<FPathTracingBuildCloudAccelerationMapCS,FShaderMapPointerTable> *param_1,
          FScene *param_2,Type param_3,FPrimitiveSceneProxy *param_4,FMaterialRenderProxy *param_5,
          FMaterial *param_6,FMeshMaterialShaderElementData *param_7,
          FMeshDrawShaderBindings *param_8)

{
  int iVar1;
  int iVar2;
  FPathTracingBuildCloudAccelerationMapCS *pFVar3;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar12;
  byte bVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 local_d8 [4];
  int local_d4;
  int local_d0;
  uint local_cc;
  FMeshDrawSingleShaderBindings local_c8;
  longlong local_b8;
  FMeshProcessorShaders local_a8;
  
  pFVar3 = param_1->ShaderContent;
  local_a8.VertexShader.ShaderContent = (FShader *)0x0;
  local_a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.PixelShader.ShaderContent = (FShader *)0x0;
  local_a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.GeometryShader.ShaderContent = (FShader *)0x0;
  local_a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.ComputeShader.ShaderContent = (FShader *)0x0;
  local_a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.WorkGraphShader.ShaderContent = (FShader *)0x0;
  local_a8.WorkGraphShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.RayTracingShader.ShaderContent = (FShader *)0x0;
  local_a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  bVar13 = pFVar3->field_0xd0 & 0xf;
  if (bVar13 == 5) {
    local_a8.ComputeShader.ShaderMap = param_1->ShaderMap;
    local_a8.ComputeShader.ShaderContent = (FShader *)pFVar3;
  }
  else if (bVar13 == 0xb) {
    local_a8.WorkGraphShader.ShaderMap = param_1->ShaderMap;
    local_a8.WorkGraphShader.ShaderContent = (FShader *)pFVar3;
  }
  FMeshDrawShaderBindings::Initialize(param_8,&local_a8);
  if (param_1->ShaderContent != (FPathTracingBuildCloudAccelerationMapCS *)0x0) {
    uVar15 = 0;
    uVar11 = (longlong)((1 << bVar13 + 1) + -1) & (ulonglong)param_8->ShaderFrequencyBits;
    local_d4 = 0;
    uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
    local_cc = (uint)(byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           );
    lVar10 = (ulonglong)local_cc - 1;
    local_cc = local_cc - 1;
    uVar11 = uVar15;
    local_b8 = lVar10;
    if (0 < lVar10) {
      do {
        iVar16 = 0;
        uVar18 = (uint)uVar15;
        uVar8 = 0;
        if ((int)uVar18 < (param_8->ShaderLayouts).ArrayNum) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar4 = (param_8->ShaderLayouts).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FMeshDrawShaderBindingsLayout>)param_8;
        if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
          FVar12 = FVar4;
        }
        lVar5 = *(longlong *)((longlong)FVar12 + uVar11 * 8);
        iVar1 = *(int *)(lVar5 + 0x28);
        iVar9 = iVar1 + 7;
        if (iVar9 < 0) {
          iVar9 = iVar1 + 0xe;
        }
        uVar15 = *(ulonglong *)(lVar5 + 0x30);
        iVar2 = *(int *)(lVar5 + 0x38);
        local_d0 = (iVar9 >> 3) + (*(int *)(lVar5 + 0x18) + *(int *)(lVar5 + 8) + iVar1) * 8;
        lVar10 = (longlong)uVar15 >> 0x18;
        uVar17 = uVar15;
        if ((uVar15 & 1) != 0) {
          uVar15 = lVar10 + 0x30 + lVar5;
          uVar17 = lVar10 + 0x30 + lVar5;
        }
        while( true ) {
          if (*(int *)(lVar5 + 0x38) != iVar2) {
            local_d8[0] = 0;
            `TCheckedPointerIterator<FShaderLooseParameterBufferInfo_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_d8);
          }
          lVar10 = local_b8;
          if (uVar15 == uVar17 + (longlong)iVar2 * 0x18) break;
          iVar16 = iVar16 + (uint)*(ushort *)(uVar15 + 2);
          uVar15 = uVar15 + 0x18;
        }
        uVar15 = (ulonglong)(uVar18 + 1);
        uVar11 = uVar11 + 1;
        local_d4 = local_d4 + (local_d0 + 7 + iVar16 & 0xfffffff8U);
      } while ((longlong)uVar11 < local_b8);
      if ((local_d4 != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CheckedDataOffset == DataOffset",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                             ,0x3dc,
                             L"GetSingleShaderBindings was not called in the order of ShaderFrequencies"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar8 = local_cc;
    if ((int)local_cc < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                         ,0x3e5,L"Invalid shader binding frequency requested");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x1a,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_c8._padding_ = 0x58;
      local_c8.Data = (uchar *)0x0;
    }
    else {
      uVar14 = ~local_cc;
      uVar18 = 0;
      if ((int)local_cc < (param_8->ShaderLayouts).ArrayNum) {
        uVar18 = uVar14 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar4 = (param_8->ShaderLayouts).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FMeshDrawShaderBindingsLayout>)param_8;
      if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar12 = FVar4;
      }
      FMeshDrawShaderBindingsLayout::GetDataSizeBytes
                ((FMeshDrawShaderBindingsLayout *)((longlong)FVar12 + lVar10 * 8));
      local_c8.Data = (uchar *)&param_8->Data;
      if (0x50 < param_8->Size) {
        local_c8.Data = ((FData *)local_c8.Data)->InlineStorage[0];
      }
      uVar18 = 0;
      if ((int)uVar8 < (param_8->ShaderLayouts).ArrayNum) {
        uVar18 = uVar14 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar4 = (param_8->ShaderLayouts).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FMeshDrawShaderBindingsLayout>)param_8;
      if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar12 = FVar4;
      }
      local_c8._padding_ = *(longlong *)((longlong)FVar12 + lVar10 * 8);
    }
    FMeshMaterialShader::GetShaderBindings
              ((FMeshMaterialShader *)param_1->ShaderContent,param_2,param_3,param_4,param_5,param_6
               ,param_7,&local_c8);
  }
  FMeshDrawShaderBindings::Finalize(param_8,&local_a8);
  return;
}

// DeleterFunc<DiaphragmDOF::FDOFViewState> @ 145124210

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<DiaphragmDOF::FDOFViewState>(void *param_1)

{
  if (*(longlong **)((longlong)param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x20) + 0x38))();
  }
  if (*(longlong **)((longlong)param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x38))();
  }
  if (*(longlong **)((longlong)param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x10) + 0x38))();
  }
  ::operator_delete(param_1,0x50);
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<UMaterialInterface_const_*>_> @ 1451942b0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<UMaterialInterface_const_*>_>
          (ushort param_1,ForElementType<UMaterialInterface_const_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0xb) {
      iVar8 = 10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0xb) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UMaterialInterface_const_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FPostProcessMaterialNode>_> @ 145194380

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FPostProcessMaterialNode>_>
          (ushort param_1,ForElementType<FPostProcessMaterialNode> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0xb) {
      iVar8 = 10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0xb) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FPostProcessMaterialNode>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<UMaterialInterface_const_*>_> @ 145194450

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<UMaterialInterface_const_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UMaterialInterface_const_*> *param_4
          ,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0xb) {
      iVar1 = 10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UMaterialInterface_const_*>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// AddSceneViewExtensionPassChain @ 1451be390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EPostProcessMaterialInput": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FScreenPassTexture * __cdecl
UE::Renderer::PostProcess::AddSceneViewExtensionPassChain
          (FScreenPassTexture *__return_storage_ptr__,FRDGBuilder *param_1,FViewInfo *param_2,
          FPostProcessMaterialInputs *param_3,
          TArray<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_4,EPostProcessMaterialInput param_5)

{
  code *pcVar1;
  FRDGTextureSRV *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  FScreenPassTexture *pFVar8;
  FScreenPassTextureSlice *pFVar9;
  atomic<unsigned___int64> aVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  ulonglong uVar14;
  undefined1 auStack_318 [32];
  undefined1 *local_2f8;
  longlong local_2f0;
  FScreenPassTextureSlice local_2e8;
  undefined8 *local_2d0;
  TIntPoint<int>_u_0 *local_2c8;
  FViewInfo *local_2c0;
  FRDGBuilder *local_2b8;
  FPostProcessMaterialInputs *local_2b0;
  FRDGTexture *local_2a8;
  TIntPoint<int>_u_0 local_2a0;
  TIntPoint<int>_u_0 local_298;
  FScreenPassTexture local_290;
  FReadAccessScope local_278;
  FScreenPassTextureSlice local_260;
  FScreenPassTexture local_248;
  undefined1 local_228 [464];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_318;
  uVar14 = (ulonglong)param_5;
  lVar11 = uVar14 * 0x18;
  lVar7 = 0x98;
  if ((param_3->bUserSceneTexturesSet).Elements[uVar14] == false) {
    lVar7 = 0x20;
  }
  uVar13 = 0;
  local_2e8.TextureSRV =
       *(FRDGTextureSRV **)((longlong)(param_3->Textures).Elements + lVar11 + lVar7 + -0x20);
  local_2e8.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)
       *(TIntPoint<int>_u_0 *)
        ((longlong)&(param_3->Textures).Elements[uVar14 - 1].TextureSRV + lVar7);
  local_2e8.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)
       *(TIntPoint<int>_u_0 *)((longlong)(param_3->Textures).Elements + lVar11 + lVar7 + -0x10);
  __return_storage_ptr__->Texture = (FRDGTexture *)0x0;
  (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  local_2c0 = param_2;
  local_2b8 = param_1;
  local_2b0 = param_3;
  if (0 < param_4->ArrayNum) {
    local_2d0 = (undefined8 *)(local_228 + lVar11 + 0x20);
    local_2c8 = (TIntPoint<int>_u_0 *)(local_228 + lVar11 + 0x28);
    uVar14 = uVar13;
    do {
      FPostProcessMaterialInputs::FPostProcessMaterialInputs
                ((FPostProcessMaterialInputs *)local_228,local_2b0);
      uVar4 = local_2e8.ViewRect.field0_0x0._s_0.Max.field0_0x0;
      uVar3 = local_2e8.ViewRect.field0_0x0._s_0.Min.field0_0x0;
      pFVar2 = local_2e8.TextureSRV;
      if ((Velocity < param_5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)Input < kPostProcessMaterialInputCountMax",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\PostProcess\\PostProcessMaterialInputs.h"
                             ,0x3a,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        pFVar8 = (FScreenPassTexture *)(*pcVar1)();
        return pFVar8;
      }
      uVar12 = (uint)uVar13;
      *local_2d0 = pFVar2;
      *local_2c8 = (TIntPoint<int>_u_0)uVar3;
      aVar10 = (atomic<unsigned___int64>)0x0;
      local_2c8[1] = (TIntPoint<int>_u_0)uVar4;
      uVar6 = 0;
      if ((int)uVar12 < param_4->ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if (uVar6 == 0) {
        local_2f8 = (undefined1 *)(longlong)(int)uVar12;
        local_2f0 = (longlong)param_4->ArrayNum;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          pFVar8 = (FScreenPassTexture *)(*pcVar1)();
          return pFVar8;
        }
      }
      this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             (&((param_4->AllocatorInstance).Data)->field_0x0 + uVar14);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_278);
      param_1 = local_2b8;
      if (*(int *)&this[2].AccessDetector.State != 0) {
        aVar10 = this[1].AccessDetector.State;
      }
      local_2f8 = local_228;
      (**(code **)(*(longlong *)aVar10 + 0x60))(aVar10,&local_2a8,local_2b8,local_2c0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_278);
      __return_storage_ptr__->Texture = local_2a8;
      (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Min.field0_0x0 = local_2a0;
      (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Max.field0_0x0 = local_298;
      pFVar9 = FScreenPassTextureSlice::CreateFromScreenPassTexture
                         (&local_260,param_1,__return_storage_ptr__);
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar14 = uVar14 + 0x18;
      local_2e8.TextureSRV = pFVar9->TextureSRV;
      local_2e8.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
           (TIntPoint<int>)(pFVar9->ViewRect).field0_0x0._s_0.Min.field0_0x0;
      local_2e8.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
           (TIntPoint<int>)(pFVar9->ViewRect).field0_0x0._s_0.Max.field0_0x0;
    } while ((int)(uVar12 + 1) < param_4->ArrayNum);
  }
  if ((__return_storage_ptr__->Texture == (FRDGTexture *)0x0) ||
     ((*(int *)((longlong)&(__return_storage_ptr__->ViewRect).field0_0x0 + 8) ==
       *(int *)&(__return_storage_ptr__->ViewRect).field0_0x0 &&
      (*(int *)((longlong)&(__return_storage_ptr__->ViewRect).field0_0x0 + 0xc) ==
       *(int *)((longlong)&(__return_storage_ptr__->ViewRect).field0_0x0 + 4))))) {
    local_290.Texture = (FRDGTexture *)0x0;
    local_290.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    local_290.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    pFVar8 = FScreenPassTexture::CopyFromSlice(&local_248,param_1,&local_2e8,&local_290);
    __return_storage_ptr__->Texture = pFVar8->Texture;
    (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
         (pFVar8->ViewRect).field0_0x0._s_0.Min.field0_0x0;
    (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
         (pFVar8->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  }
  return __return_storage_ptr__;
}

// ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>_> @ 1452928e0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FPrimitiveSceneInfo::FRayTracingLODData> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteRasterPipeline>_> @ 145292980

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteRasterPipeline>_>
          (ushort param_1,ForElementType<FNaniteRasterPipeline> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteRasterPipeline>::
    ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteShadingPipeline>_> @ 145292a40

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteShadingPipeline>_>
          (ushort param_1,ForElementType<FNaniteShadingPipeline> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteShadingPipeline>
    ::ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteMaterialListContext>_> @ 145292b00

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteMaterialListContext>_>
          (ushort param_1,ForElementType<FNaniteMaterialListContext> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FNaniteMaterialListContext>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>_> @ 145292c60

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 2) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteMaterialListContext>_> @ 145292d40

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteMaterialListContext>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FNaniteMaterialListContext> *param_4
          ,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 9) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FNaniteMaterialListContext>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>_> @ 1452932e0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>_>
          (uint param_1,uint param_2,
          ForElementType<TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 2) {
    iVar2 = 1;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>_> @ 1452933a0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FPrimitiveSceneInfo::FRayTracingLODData> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FPrimitiveSceneInfo::FRayTracingLODData>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteMaterialListContext>_> @ 145293420

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteMaterialListContext>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FNaniteMaterialListContext> *param_4
          ,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FNaniteMaterialListContext>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// DrawPostProcessPass @ 1452bba40

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Renderer::PostProcess::DrawPostProcessPass
          (FRHICommandList *param_1,TShaderRefBase<FShader,FShaderMapPointerTable> *param_2,
          float param_3,float param_4,float param_5,float param_6,float param_7,float param_8,
          float param_9,float param_10,TIntPoint<int> param_11,TIntPoint<int> param_12,int param_13,
          bool param_14,EDrawRectangleFlags param_15)

{
  code *pcVar1;
  UEngine *pUVar2;
  bool bVar3;
  FRHIBatchedShaderParameters *pFVar4;
  FRHIVertexShader *pFVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if ((param_14) && (param_13 != -1)) {
    pFVar4 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
    SetDrawRectangleParameters
              (pFVar4,param_2->ShaderContent,param_3,param_4,param_5,param_6,param_7,param_8,param_9
               ,param_10,param_11,param_12);
    pFVar5 = TShaderRefBase<FShader,FShaderMapPointerTable>::GetVertexShader(param_2,true);
    FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)pFVar5,pFVar4);
    pUVar2 = GEngine;
    if (((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar6 = (**(code **)((longlong)*(pUVar2->XRSystem).Object + 0x118))();
    pUVar2 = GEngine;
    if (lVar6 != 0) {
      if (((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar7 = (longlong *)(**(code **)((longlong)*(pUVar2->XRSystem).Object + 0x118))();
      (**(code **)(*plVar7 + 0x128))(plVar7,param_1,param_13,1);
    }
  }
  else {
    ::DrawRectangle(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_2,param_15,1);
  }
  return;
}

// DrawRectangle @ 1452bbe70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UE::Renderer::PostProcess::DrawRectangle
          (FRHICommandList *param_1,TShaderRefBase<FShader,FShaderMapPointerTable> *param_2,
          FSceneView *param_3,EDrawRectangleFlags param_4,uint param_5)

{
  code *pcVar1;
  bool bVar2;
  TIntPoint<int> TVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_3->bIsViewInfo == false) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5181955768647155346>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\SceneFilterRendering.cpp"
                       ,0x16e,"InView.bIsViewInfo");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    TVar3.field0_0x0._s_0.Y =
         *(int *)((longlong)&(param_3->UnconstrainedViewRect).field0_0x0 + 0xc) -
         *(int *)((longlong)&(param_3->UnconstrainedViewRect).field0_0x0 + 4);
    TVar3.field0_0x0._s_0.X =
         *(int *)((longlong)&(param_3->UnconstrainedViewRect).field0_0x0 + 8) -
         *(int *)&(param_3->UnconstrainedViewRect).field0_0x0;
    fVar6 = (float)*(int *)&param_3[1].field_0x4;
    fVar4 = (float)(*(int *)((longlong)&param_3[1].Family + 4) - *(int *)&param_3[1].field_0x4);
    fVar7 = (float)(*(int *)&param_3[1].Family - *(int *)(param_3 + 1));
    fVar5 = (float)*(int *)(param_3 + 1);
    ::DrawRectangle(param_1,fVar5,fVar6,fVar7,fVar4,fVar5,fVar6,fVar7,fVar4,TVar3,TVar3,param_2,
                    param_4,param_5);
  }
  return;
}

// DrawRectangle @ 1452bbf70

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UE::Renderer::PostProcess::DrawRectangle
          (FRHICommandList *param_1,TShaderRefBase<FShader,FShaderMapPointerTable> *param_2,
          float param_3,float param_4,float param_5,float param_6,float param_7,float param_8,
          float param_9,float param_10,TIntPoint<int> param_11,TIntPoint<int> param_12,
          EDrawRectangleFlags param_13,uint param_14)

{
  ::DrawRectangle(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                  param_12,param_2,param_13,param_14);
  return;
}

// SetDrawRectangleParameters @ 1452d3100

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Renderer::PostProcess::SetDrawRectangleParameters
          (FRHIBatchedShaderParameters *param_1,FShader *param_2,TIntPoint<int> *param_3)

{
  TIntPoint<int>_u_0_s_0 TVar1;
  
  TVar1 = (param_3->field0_0x0)._s_0;
  SetDrawRectangleParameters
            (param_1,param_2,0.0,0.0,(float)TVar1.X,(float)TVar1.Y,0.0,0.0,__real_3f800000,
             __real_3f800000,(TIntPoint<int>)TVar1,(TIntPoint<int>)0x100000001);
  return;
}

// SetDrawRectangleParameters @ 1452d3180

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Renderer::PostProcess::SetDrawRectangleParameters
          (FRHIBatchedShaderParameters *param_1,FShader *param_2,FSceneView *param_3)

{
  int iVar1;
  TIntPoint<int> TVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)&(param_3->UnconstrainedViewRect).field0_0x0 + 0xc) -
          *(int *)((longlong)&(param_3->UnconstrainedViewRect).field0_0x0 + 4);
  iVar3 = *(int *)((longlong)&(param_3->UnconstrainedViewRect).field0_0x0 + 8) -
          *(int *)&(param_3->UnconstrainedViewRect).field0_0x0;
  TVar2.field0_0x0._s_0.Y = iVar1;
  TVar2.field0_0x0._s_0.X = iVar3;
  SetDrawRectangleParameters
            (param_1,param_2,0.0,0.0,(float)iVar3,(float)iVar1,0.0,0.0,__real_3f800000,
             __real_3f800000,TVar2,(TIntPoint<int>)0x100000001);
  return;
}

// SetDrawRectangleParameters @ 1452d3210

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Renderer::PostProcess::SetDrawRectangleParameters
          (FRHIBatchedShaderParameters *param_1,FShader *param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7,float param_8,float param_9,float param_10,
          TIntPoint<int> param_11,TIntPoint<int> param_12)

{
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  FHashedName FVar4;
  FShaderUniformBufferParameter *pFVar5;
  FHashedName local_48 [2];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_38 = param_5;
  local_28 = param_9;
  local_20 = param_7;
  local_34 = param_6;
  local_24 = param_10;
  local_1c = param_8;
  local_18 = __real_3f800000 / (float)param_11.field0_0x0._0_4_;
  local_14 = __real_3f800000 / (float)param_11.field0_0x0._4_4_;
  local_10 = __real_3f800000 / (float)param_12.field0_0x0._0_4_;
  local_c = __real_3f800000 / (float)param_12.field0_0x0._4_4_;
  local_30 = param_3;
  local_2c = param_4;
  pFVar3 = FDrawRectangleParameters::GetStructMetadata();
  FHashedName::FHashedName((FHashedName *)&param_12,&pFVar3->ShaderVariableHashedName);
  FVar4.Hash = (ulong64)FHashedName::FHashedName(local_48,(FHashedName *)&param_12);
  pFVar5 = FShader::GetUniformBufferParameter(param_2,FVar4);
  if (pFVar5->BaseIndex != 0xffff) {
    pFVar3 = FDrawRectangleParameters::GetStructMetadata();
    if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x177,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    RHICreateUniformBuffer
              (&param_11,(FRHIUniformBufferLayout *)&local_38,
               (EUniformBufferUsage)(pFVar3->Layout).Reference,None);
    SetUniformBufferParameter(param_1,pFVar5,(FRHIUniformBuffer *)param_11.field0_0x0);
    if (param_11.field0_0x0 != (TIntPoint<int>_u_0)0x0) {
      FRHIResource::Release((FRHIResource *)param_11.field0_0x0);
    }
  }
  return;
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingShaderBindingData>_> @ 1452fc510

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingShaderBindingData>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FRayTracingShaderBindingData> *param_5,int param_6,int *param_7)

{
  if (param_4 < param_3) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRayTracingShaderBindingData>::ResizeAllocation
              (param_5,0,param_3,(ulonglong)param_1);
    *param_7 = param_3;
    return;
  }
  *param_7 = param_4;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*>_> @ 1452fc550

/* WARNING: Removing unreachable block (ram,0x0001452fc597) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*>_>
          (ushort param_1,
          ForElementType<TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*>
          *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*>
    ::ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>_*>_> @ 1452fc5e0

/* WARNING: Removing unreachable block (ram,0x0001452fc627) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>_*>_>
          (ushort param_1,
          ForElementType<TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>_*>
          *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>_*>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<FRHIUnorderedAccessView_*>_> @ 1452fc670

/* WARNING: Removing unreachable block (ram,0x0001452fc6b7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<FRHIUnorderedAccessView_*>_>
          (ushort param_1,ForElementType<FRHIUnorderedAccessView_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TMemStackAllocator<0>::ForElementType<FRHIUnorderedAccessView_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<FRHITransitionInfo>_> @ 1452fc700

/* WARNING: Removing unreachable block (ram,0x0001452fc747) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<FRHITransitionInfo>_>
          (ushort param_1,ForElementType<FRHITransitionInfo> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TMemStackAllocator<0>::ForElementType<FRHITransitionInfo>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FRayTracingDecal>_> @ 1452fc790

/* WARNING: Removing unreachable block (ram,0x0001452fc7d7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FRayTracingDecal>_>
          (ushort param_1,ForElementType<UE::HLSL::FRayTracingDecal> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::HLSL::FRayTracingDecal>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<RayTracing::FRayTracingMeshBatchTaskData>_> @ 1452fc820

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<RayTracing::FRayTracingMeshBatchTaskData>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<RayTracing::FRayTracingMeshBatchTaskData> *param_4,int *param_5,
          int *param_6)

{
  ForElementType<RayTracing::FRayTracingMeshBatchTaskData> *this;
  int iVar1;
  FRayTracingMeshBatchTaskData *_Src;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  iVar1 = *param_5;
  uVar4 = *param_6;
  uVar2 = iVar1 + param_3;
  *param_5 = uVar2;
  if ((uint)param_3 <= uVar4 - iVar1) {
    return iVar1;
  }
  if ((int)uVar2 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar2);
  }
  uVar3 = (ulonglong)param_1;
  if (uVar2 < 3) {
    _Src = (param_4->SecondaryData).Data;
    uVar4 = 2;
  }
  else {
    if (uVar4 < 3) {
      uVar4 = 0;
    }
    if (uVar4 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar2) {
        uVar4 = uVar2;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + 0x10 + uVar2;
    }
    _Src = (param_4->SecondaryData).Data;
    this = &param_4->SecondaryData;
    if ((int)uVar4 < (int)uVar2) {
      uVar4 = 0x7fffffff;
    }
    if (2 < uVar4) {
      if (_Src == (FRayTracingMeshBatchTaskData *)0x0) {
        TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
        ForElementType<RayTracing::FRayTracingMeshBatchTaskData>::ResizeAllocation
                  (this,0,uVar4,uVar3);
        memmove(this->Data,param_4,(longlong)iVar1 * 0x18);
      }
      else {
        TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
        ForElementType<RayTracing::FRayTracingMeshBatchTaskData>::ResizeAllocation
                  (this,iVar1,uVar4,uVar3);
      }
      goto LAB_1452fc92c;
    }
  }
  if (_Src != (FRayTracingMeshBatchTaskData *)0x0) {
    memmove(param_4,_Src,(longlong)iVar1 * 0x18);
    if (0x7ffffffe < uVar3 - 1) {
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(0,uVar3);
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free((param_4->SecondaryData).Data);
    (param_4->SecondaryData).Data = (FRayTracingMeshBatchTaskData *)0x0;
  }
LAB_1452fc92c:
  *param_6 = uVar4;
  return iVar1;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingShaderBindingData>_> @ 1452fcbd0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingShaderBindingData>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FRayTracingShaderBindingData> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRayTracingShaderBindingData>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*>_> @ 1452fcc70

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*>
          *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*>
    ::ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TMemStackAllocator<0>::ForElementType<FRHIUnorderedAccessView_*>_> @ 1452fcca0

void __cdecl
UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<FRHIUnorderedAccessView_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRHIUnorderedAccessView_*> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TMemStackAllocator<0>::ForElementType<FRHIUnorderedAccessView_*>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TMemStackAllocator<0>::ForElementType<FRHITransitionInfo>_> @ 1452fccd0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<FRHITransitionInfo>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRHITransitionInfo> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TMemStackAllocator<0>::ForElementType<FRHITransitionInfo>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FRayTracingDecal>_> @ 1452fcd00

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FRayTracingDecal>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::HLSL::FRayTracingDecal> *param_4
          ,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::HLSL::FRayTracingDecal>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingInstanceCollector::FRayTracingDynamicGeometryUpdateRequest>_> @ 1452fcd30

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingInstanceCollector::FRayTracingDynamicGeometryUpdateRequest>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FRayTracingInstanceCollector::FRayTracingDynamicGeometryUpdateRequest>
          *param_4,int param_5,int *param_6)

{
  FRayTracingDynamicGeometryUpdateRequest *_Src;
  FRayTracingDynamicGeometryUpdateRequest *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if (param_3 != *param_6) {
    *param_6 = param_3;
    if ((param_3 < 0) || (0x7ffffffe < param_1 - 1)) {
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(param_3,(ulonglong)param_1);
    }
    _Src = param_4->Data;
    _Dst = (FRayTracingDynamicGeometryUpdateRequest *)0x0;
    uVar1 = (ulonglong)param_1 * (longlong)param_3;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,0x10);
      if ((_Src != (FRayTracingDynamicGeometryUpdateRequest *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x9c, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingInstanceCollector::FRayTracingInstanceAndViewIndex>_> @ 1452fcde0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingInstanceCollector::FRayTracingInstanceAndViewIndex>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FRayTracingInstanceCollector::FRayTracingInstanceAndViewIndex> *param_4,
          int param_5,int *param_6)

{
  FRayTracingInstanceAndViewIndex *_Src;
  FRayTracingInstanceAndViewIndex *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if (param_3 != *param_6) {
    *param_6 = param_3;
    if ((param_3 < 0) || (0x7ffffffe < param_1 - 1)) {
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(param_3,(ulonglong)param_1);
    }
    _Src = param_4->Data;
    _Dst = (FRayTracingInstanceAndViewIndex *)0x0;
    uVar1 = (ulonglong)param_1 * (longlong)param_3;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FRayTracingInstanceAndViewIndex *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x74, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingShaderBindingData>_> @ 1452fce90

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingShaderBindingData>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FRayTracingShaderBindingData> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRayTracingShaderBindingData>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// MurmurFinalize32 @ 145330230

uint __cdecl UE::Private::MurmurFinalize32(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 >> 0x10 ^ param_1) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingShaderBindingData>_> @ 145362060

/* WARNING: Removing unreachable block (ram,0x0001453620a7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingShaderBindingData>_>
          (ushort param_1,ForElementType<FRayTracingShaderBindingData> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRayTracingShaderBindingData>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_*>_> @ 1453f2530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FPrimitiveSceneInfo_*> *param_5,int param_6,int *param_7)

{
  if (param_4 < param_3) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FPrimitiveSceneInfo_*>::ResizeAllocation(param_5,0,param_3,(ulonglong)param_1);
    *param_7 = param_3;
    return;
  }
  *param_7 = param_4;
  return;
}

// ReallocGrow1_DoAlloc<2,TAlignedHeapAllocator<16>::ForAnyElementType> @ 1453f2570

/* WARNING: Removing unreachable block (ram,0x0001453f25be) */

int __cdecl
UE::Core::Private::ReallocGrow1_DoAlloc<2,TAlignedHeapAllocator<16>::ForAnyElementType>
          (uint param_1,uint param_2,ForAnyElementType *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulong64 uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  ulonglong uVar7;
  
  iVar2 = *param_4;
  uVar1 = iVar2 + 1;
  if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  lVar3 = 4;
  uVar7 = (ulonglong)param_1;
  if (iVar2 != 0) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar4 = FMemory::QuantizeSize(uVar7 * lVar3,0x10);
  iVar6 = (int)(uVar4 / uVar7);
  if (iVar6 < (int)uVar1) {
    iVar6 = 0x7fffffff;
  }
  if ((param_3->Data != (FScriptContainerElement *)0x0) || (iVar6 != 0)) {
    if ((iVar6 < 0) || (0x7ffffffe < uVar7 - 1)) {
                    /* WARNING: Subroutine does not return */
      OnInvalidAlignedHeapAllocatorNum(iVar6,uVar7);
    }
    pFVar5 = FMemory::Realloc(param_3->Data,(longlong)iVar6 * uVar7,0x10);
    param_3->Data = pFVar5;
  }
  *param_4 = iVar6;
  return iVar2;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfo_*>_> @ 1453f2750

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfo_*>_>
          (ushort param_1,ForElementType<FLightSceneInfo_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfo_*>::
    ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_> @ 1453f2810

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
          (ushort param_1,ForElementType<USceneComponent_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FTextureLayout::FTextureLayoutNode>_> @ 1453f28e0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FTextureLayout::FTextureLayoutNode>_>
          (ushort param_1,ForElementType<FTextureLayout::FTextureLayoutNode> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 6) {
      iVar8 = 5;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 6) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FTextureLayout::FTextureLayoutNode>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TAlignedHeapAllocator<8>::ForAnyElementType> @ 1453f29b0

/* WARNING: Removing unreachable block (ram,0x0001453f2a02) */

int __cdecl
UE::Core::Private::ReallocGrow1_DoAlloc_Tiny<2,TAlignedHeapAllocator<8>::ForAnyElementType>
          (ushort param_1,ForAnyElementType *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulong64 uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  ulonglong uVar7;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  uVar7 = (ulonglong)(byte)param_1;
  lVar3 = 4;
  if (iVar2 != 0) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar4 = FMemory::QuantizeSize(uVar7 * lVar3,8);
  iVar6 = (int)(uVar4 / uVar7);
  if (iVar6 < (int)uVar1) {
    iVar6 = 0x7fffffff;
  }
  if ((param_2->Data != (FScriptContainerElement *)0x0) || (iVar6 != 0)) {
    if ((iVar6 < 0) || (uVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
      OnInvalidAlignedHeapAllocatorNum(iVar6,uVar7);
    }
    pFVar5 = FMemory::Realloc(param_2->Data,(longlong)iVar6 * uVar7,8);
    param_2->Data = pFVar5;
  }
  *param_3 = iVar6;
  return iVar2;
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneProxy_*>_> @ 1453f2a90

/* WARNING: Removing unreachable block (ram,0x0001453f2ad7) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneProxy_*>_>
          (ushort param_1,ForElementType<FPrimitiveSceneProxy_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FPrimitiveSceneProxy_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGTexture_*>_> @ 1453f2b20

/* WARNING: Removing unreachable block (ram,0x0001453f2b67) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGTexture_*>_>
          (ushort param_1,ForElementType<FRDGTexture_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGTexture_*>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPersistentPrimitiveIndex>_> @ 1453f2cd0

/* WARNING: Removing unreachable block (ram,0x0001453f2d17) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPersistentPrimitiveIndex>_>
          (ushort param_1,ForElementType<FPersistentPrimitiveIndex> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FPersistentPrimitiveIndex>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPersistentViewId>_> @ 1453f2d60

/* WARNING: Removing unreachable block (ram,0x0001453f2da7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPersistentViewId>_>
          (ushort param_1,ForElementType<FPersistentViewId> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FPersistentViewId>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIRenderQuery_*>_> @ 1453f2df0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIRenderQuery_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRHIRenderQuery_*> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar3 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIRenderQuery_*>::
    ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_> @ 1453f2ec0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<USceneComponent_*> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 2) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>_> @ 1453f2fa0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar3 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
    ::ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveComponentId>_> @ 1453f3070

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveComponentId>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPrimitiveComponentId> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 2) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveComponentId>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_*>_> @ 1453f3150

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPrimitiveSceneInfo_*> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FPrimitiveSceneInfo_*>::ResizeAllocation(param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_> @ 1453f31f0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_> @ 1453f3290

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIRenderQuery_*>_> @ 1453f33b0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIRenderQuery_*>_>
          (uint param_1,uint param_2,ForElementType<FRHIRenderQuery_*> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIRenderQuery_*>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_> @ 1453f3470

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
          (uint param_1,uint param_2,ForElementType<USceneComponent_*> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 2) {
    iVar2 = 1;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveComponentId>_> @ 1453f3530

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveComponentId>_>
          (uint param_1,uint param_2,ForElementType<FPrimitiveComponentId> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 2) {
    iVar2 = 1;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveComponentId>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_*>_> @ 1453f35f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_*>_>
          (uint param_1,uint param_2,ForElementType<FPrimitiveSceneInfo_*> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FPrimitiveSceneInfo_*>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>_> @ 1453f3660

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
          *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<IPooledRenderTarget>_>_> @ 1453f36e0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<IPooledRenderTarget>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TRefCountPtr<IPooledRenderTarget>_> *param_4,int param_5,int *param_6)

{
  ForElementType<TRefCountPtr<IPooledRenderTarget>_> _Src;
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      uVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      uVar1 = (uint)(uVar2 / uVar3);
      if ((int)uVar1 < param_3) {
        uVar1 = 0x7fffffff;
      }
    }
  }
  if (uVar1 != *param_6) {
    *param_6 = uVar1;
    _Src = param_4->SecondaryData;
    if (uVar1 < 5) {
      if (_Src == (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0) {
        return;
      }
      memmove(param_4,(void *)_Src,(longlong)param_5 << 3);
      uVar1 = 0;
      param_5 = 0;
    }
    else if (_Src == (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&param_4->SecondaryData,0,uVar1,uVar3);
      memmove((void *)param_4->SecondaryData,param_4,(longlong)param_5 << 3);
      return;
    }
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&param_4->SecondaryData,param_5,uVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TAlignedHeapAllocator<8>::ForAnyElementType> @ 1453f37c0

void __cdecl
UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<8>::ForAnyElementType>
          (uint param_1,uint param_2,int param_3,ForAnyElementType *param_4,int param_5,int *param_6
          )

{
  int iVar1;
  ulong64 uVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar4,8);
    iVar1 = (int)(uVar2 / uVar4);
    if (iVar1 < param_3) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    if ((param_4->Data != (FScriptContainerElement *)0x0) || (iVar1 != 0)) {
      if ((iVar1 < 0) || (0x7ffffffe < uVar4 - 1)) {
                    /* WARNING: Subroutine does not return */
        OnInvalidAlignedHeapAllocatorNum(iVar1,uVar4);
      }
      pFVar3 = FMemory::Realloc(param_4->Data,(longlong)iVar1 * uVar4,8);
      param_4->Data = pFVar3;
    }
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_*>_> @ 1453f3860

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPrimitiveSceneInfo_*> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FPrimitiveSceneInfo_*>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGTexture_*>_> @ 1453f3890

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGTexture_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGTexture_*> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGTexture_*>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_>_>_> @ 1453f38c0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_>_> *param_4,
          int param_5,int *param_6)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_> *_Src;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if (param_3 != *param_6) {
    *param_6 = param_3;
    if ((param_3 < 0) || (0x7ffffffe < param_1 - 1)) {
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(param_3,(ulonglong)param_1);
    }
    _Src = param_4->Data;
    _Dst = (TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_> *)0x0;
    uVar1 = (ulonglong)param_1 * (longlong)param_3;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_> *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_> @ 1453f3970

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_> @ 1453f39a0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPersistentPrimitiveIndex>_> @ 1453f3a30

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPersistentPrimitiveIndex>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPersistentPrimitiveIndex> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FPersistentPrimitiveIndex>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPersistentViewId>_> @ 1453f3a60

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPersistentViewId>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPersistentViewId> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FPersistentViewId>::ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// DeleterFunc<FSceneCullingBuilder> @ 1454712b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<FSceneCullingBuilder>(void *param_1)

{
  FSceneCullingBuilder::~FSceneCullingBuilder((FSceneCullingBuilder *)((longlong)param_1 + 0x10));
  ::operator_delete(param_1,0x1f0);
  return;
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHICopyTextureInfo>_> @ 1454744d0

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHICopyTextureInfo>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FRHICopyTextureInfo> *param_5,int param_6,int *param_7)

{
  FRHICopyTextureInfo *_Src;
  FRHICopyTextureInfo *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if (param_3 <= param_4) {
    *param_7 = param_4;
    return;
  }
  if ((-1 < param_3) && (param_1 - 1 < 0x7fffffff)) {
    _Dst = (FRHICopyTextureInfo *)0x0;
    uVar1 = (ulonglong)param_1 * (longlong)param_3;
    _Src = param_5->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FRHICopyTextureInfo *)0x0) && (_Size = (ulonglong)_Src[-1].NumMips, _Size != 0))
      {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(_Src);
    param_5->Data = _Dst;
    *param_7 = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidConcurrentLinearArrayAllocatorNum(param_3,(ulonglong)param_1);
}

// ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSceneInstanceCullingQuery::FCullingJob>_> @ 1454745a0

/* WARNING: Removing unreachable block (ram,0x0001454745e2) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSceneInstanceCullingQuery::FCullingJob>_>
          (uint param_1,uint param_2,
          ForElementType<FSceneInstanceCullingQuery::FCullingJob> *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_4;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FSceneInstanceCullingQuery::FCullingJob>::ResizeAllocation
              (param_3,iVar2,iVar3,(ulonglong)param_1);
    *param_4 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSceneCullingBuilder::FTempCell>_> @ 145474620

/* WARNING: Removing unreachable block (ram,0x000145474662) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSceneCullingBuilder::FTempCell>_>
          (uint param_1,uint param_2,ForElementType<FSceneCullingBuilder::FTempCell> *param_3,
          int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_4;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FSceneCullingBuilder::FTempCell>::ResizeAllocation
              (param_3,iVar2,iVar3,(ulonglong)param_1);
    *param_4 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 1454746a0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (ushort param_1,ForElementType<unsigned_int> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 4) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<unsigned_int>_> @ 145474770

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
          (ushort param_1,ForElementType<unsigned_int> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 0x21) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
    ForElementType<unsigned_int>::ResizeAllocation(param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FOcclusionFeedback::FOcclusionBatch>_> @ 145474820

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FOcclusionFeedback::FOcclusionBatch>_>
          (ushort param_1,ForElementType<FOcclusionFeedback::FOcclusionBatch> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 4) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FOcclusionFeedback::FOcclusionBatch>::ResizeAllocation(param_2,uVar2,iVar8,uVar7)
    ;
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<FSceneView_const_*_*>_> @ 1454748f0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<FSceneView_const_*_*>_>
          (ushort param_1,ForElementType<FSceneView_const_*_*> *param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_3;
  uVar1 = iVar4 + 1;
  if ((int)uVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (2 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *param_3 = 2;
  return iVar4;
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIRenderQuery_*>_> @ 145474960

/* WARNING: Removing unreachable block (ram,0x0001454749a7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIRenderQuery_*>_>
          (ushort param_1,ForElementType<FRHIRenderQuery_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRHIRenderQuery_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderer_*>_> @ 1454749f0

/* WARNING: Removing unreachable block (ram,0x000145474a37) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderer_*>_>
          (ushort param_1,ForElementType<FSceneRenderer_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderer_*>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<FSceneViewFamily_*>_> @ 145474a80

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<FSceneViewFamily_*>_>
          (ushort param_1,ForElementType<FSceneViewFamily_*> *param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_3;
  uVar1 = iVar4 + 1;
  if ((int)uVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (2 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *param_3 = 2;
  return iVar4;
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FViewFamilyInfo_*>_> @ 145474af0

/* WARNING: Removing unreachable block (ram,0x000145474b37) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FViewFamilyInfo_*>_>
          (ushort param_1,ForElementType<FViewFamilyInfo_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FViewFamilyInfo_*>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FViewInfo_*>_> @ 145474b80

/* WARNING: Removing unreachable block (ram,0x000145474bc7) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FViewInfo_*>_>
          (ushort param_1,ForElementType<FViewInfo_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FViewInfo_*>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPlanarReflectionSceneProxy_const_*>_> @ 145474c10

/* WARNING: Removing unreachable block (ram,0x000145474c57) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPlanarReflectionSceneProxy_const_*>_>
          (ushort param_1,ForElementType<FPlanarReflectionSceneProxy_const_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FPlanarReflectionSceneProxy_const_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_const_*>_> @ 145474ca0

/* WARNING: Removing unreachable block (ram,0x000145474ce7) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_const_*>_>
          (ushort param_1,ForElementType<FProjectedShadowInfo_const_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FProjectedShadowInfo_const_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<int>_>_> @ 145474d30

/* WARNING: Removing unreachable block (ram,0x000145474d77) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<int>_>_>
          (ushort param_1,ForElementType<UE::Math::TIntVector2<int>_> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::Math::TIntVector2<int>_>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FCellChunkDraw>_> @ 145474dc0

/* WARNING: Removing unreachable block (ram,0x000145474e07) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FCellChunkDraw>_>
          (ushort param_1,ForElementType<UE::HLSL::FCellChunkDraw> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::HLSL::FCellChunkDraw>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FOcclusionQueryBatcher::FOcclusionBatch>_> @ 145474e50

/* WARNING: Removing unreachable block (ram,0x000145474e97) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FOcclusionQueryBatcher::FOcclusionBatch>_>
          (ushort param_1,ForElementType<FOcclusionQueryBatcher::FOcclusionBatch> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FOcclusionQueryBatcher::FOcclusionBatch>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FOcclusionPrimitive>_> @ 145474ee0

/* WARNING: Removing unreachable block (ram,0x000145474f27) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FOcclusionPrimitive>_>
          (ushort param_1,ForElementType<FOcclusionPrimitive> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FOcclusionPrimitive>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderProcessor::FOp>_> @ 145474f70

/* WARNING: Removing unreachable block (ram,0x000145474fb7) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderProcessor::FOp>_>
          (ushort param_1,ForElementType<FSceneRenderProcessor::FOp> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<FSceneRenderProcessor::FOp>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGPUWorkGroupLoadBalancer::FPackedItem>_> @ 145475000

/* WARNING: Removing unreachable block (ram,0x000145475047) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGPUWorkGroupLoadBalancer::FPackedItem>_>
          (ushort param_1,ForElementType<FGPUWorkGroupLoadBalancer::FPackedItem> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FGPUWorkGroupLoadBalancer::FPackedItem>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FViewDrawGroup>_> @ 145475090

/* WARNING: Removing unreachable block (ram,0x0001454750d7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FViewDrawGroup>_>
          (ushort param_1,ForElementType<UE::HLSL::FViewDrawGroup> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::HLSL::FViewDrawGroup>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGPUWorkGroupLoadBalancer::FWorkGroupInfo>_> @ 145475120

/* WARNING: Removing unreachable block (ram,0x000145475167) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGPUWorkGroupLoadBalancer::FWorkGroupInfo>_>
          (ushort param_1,ForElementType<FGPUWorkGroupLoadBalancer::FWorkGroupInfo> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FGPUWorkGroupLoadBalancer::FWorkGroupInfo>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<unsigned_int>_> @ 1454751b0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (uVar1 < 0x21) {
      uVar3 = 0x20;
    }
    else {
      if (uVar3 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
    ForElementType<unsigned_int>::ResizeAllocation(param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FViewOcclusionQueries>_> @ 145475260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FViewOcclusionQueries>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FViewOcclusionQueries> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (uVar1 < 2) {
      uVar3 = 1;
    }
    else {
      if (uVar3 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
    ForElementType<FViewOcclusionQueries>::ResizeAllocation(param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderer_*>_> @ 145475310

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderer_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSceneRenderer_*> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderer_*>::
    ResizeAllocation(param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_>_>_> @ 1454753b0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_>_>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderer_*>_> @ 145475450

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderer_*>_>
          (uint param_1,uint param_2,ForElementType<FSceneRenderer_*> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderer_*>::
    ResizeAllocation(param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FOcclusionFeedback::FOcclusionBatch>_> @ 1454754c0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FOcclusionFeedback::FOcclusionBatch>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FOcclusionFeedback::FOcclusionBatch> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 4) {
      iVar1 = 3;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FOcclusionFeedback::FOcclusionBatch>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FViewOcclusionQueries>_> @ 145475540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FViewOcclusionQueries>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FViewOcclusionQueries> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 1, 1 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
  ForElementType<FViewOcclusionQueries>::ResizeAllocation(param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderer_*>_> @ 145475580

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderer_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSceneRenderer_*> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderer_*>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FViewInfo_*>_> @ 1454755b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FViewInfo_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FViewInfo_*> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FViewInfo_*>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<int>_>_> @ 1454755e0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<int>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TIntVector2<int>_> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::Math::TIntVector2<int>_>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FOcclusionQueryBatcher::FOcclusionBatch>_> @ 145475610

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FOcclusionQueryBatcher::FOcclusionBatch>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FOcclusionQueryBatcher::FOcclusionBatch> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FOcclusionQueryBatcher::FOcclusionBatch>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSceneCullingBuilder::FTempCell>_> @ 145475640

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSceneCullingBuilder::FTempCell>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FSceneCullingBuilder::FTempCell> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FSceneCullingBuilder::FTempCell>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<float>::FItem>_> @ 1454cf5b0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<float>::FItem>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<DynamicRenderScaling::TMap<float>::FItem> *param_5,int param_6,int *param_7
          )

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
  ForElementType<DynamicRenderScaling::TMap<float>::FItem>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_> @ 1454cf650

/* WARNING: Removing unreachable block (ram,0x0001454cf697) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_>
          (ushort param_1,ForElementType<FRHICommandListImmediate::FQueuedCommandList> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRHICommandListImmediate::FQueuedCommandList>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTextureAccess>_> @ 1454cf6e0

/* WARNING: Removing unreachable block (ram,0x0001454cf727) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTextureAccess>_>
          (ushort param_1,ForElementType<FRDGTextureAccess> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGTextureAccess>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<float>::FItem>_> @ 1454cf770

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<float>::FItem>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<DynamicRenderScaling::TMap<float>::FItem> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x11) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<DynamicRenderScaling::TMap<float>::FItem>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<float>::FItem>_> @ 1454cf850

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<float>::FItem>_>
          (uint param_1,uint param_2,
          ForElementType<DynamicRenderScaling::TMap<float>::FItem> *param_3,int param_4,int *param_5
          )

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<DynamicRenderScaling::TMap<float>::FItem>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_> @ 1454cf910

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector<double>_> *param_4
          ,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector<double>_>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<void_*>_> @ 1454cf990

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<void_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<void_*> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<void_*>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_> @ 1454cf9c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FRHICommandListImmediate::FQueuedCommandList> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRHICommandListImmediate::FQueuedCommandList>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGTextureAccess>_> @ 1454cf9f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGTextureAccess>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGTextureAccess> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<FRDGTextureAccess>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// CopyHash<TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>::ForElementType<FSetElementId>_> @ 145514dd0

void __cdecl
UE::Core::Private::
CopyHash<TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>::ForElementType<FSetElementId>_>
          (ForElementType<FSetElementId> *param_1,int *param_2,
          ForElementType<FSetElementId> *param_3,int param_4)

{
  ForElementType<FSetElementId> *pFVar1;
  ForElementType<FSetElementId> *pFVar2;
  
  TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  ::ForElementType<FSetElementId>::ResizeAllocation(param_1,0,param_4,4);
  pFVar1 = (ForElementType<FSetElementId> *)(param_3->SecondaryData).SecondaryData.Data;
  pFVar2 = (ForElementType<FSetElementId> *)(param_1->SecondaryData).SecondaryData.Data;
  if (pFVar1 == (ForElementType<FSetElementId> *)0x0) {
    pFVar1 = (ForElementType<FSetElementId> *)&param_3->SecondaryData;
  }
  if (pFVar1 != (ForElementType<FSetElementId> *)0x0) {
    param_3 = pFVar1;
  }
  if (pFVar2 == (ForElementType<FSetElementId> *)0x0) {
    pFVar2 = (ForElementType<FSetElementId> *)&param_1->SecondaryData;
  }
  if (pFVar2 != (ForElementType<FSetElementId> *)0x0) {
    param_1 = pFVar2;
  }
  if (param_4 != 0) {
    memcpy(param_1,param_3,(longlong)param_4 << 2);
  }
  *param_2 = param_4;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TIntRect<int>_>_> @ 14551a480

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TIntRect<int>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Math::TIntRect<int>_> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TIntRect<int>_>
  ::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveIndex>_> @ 14551a520

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveIndex>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FDynamicPrimitiveIndex> *param_5,int param_6,int *param_7)

{
  if (param_4 < param_3) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FDynamicPrimitiveIndex>::ResizeAllocation(param_5,0,param_3,(ulonglong)param_1);
    *param_7 = param_3;
    return;
  }
  *param_7 = param_4;
  return;
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLODMask>_> @ 14551a560

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLODMask>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<FLODMask> *param_5,
          int param_6,int *param_7)

{
  if (param_4 < param_3) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLODMask>::
    ResizeAllocation(param_5,0,param_3,(ulonglong)param_1);
    *param_7 = param_3;
    return;
  }
  *param_7 = param_4;
  return;
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveViewRelevance>_> @ 14551a5a0

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveViewRelevance>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FPrimitiveViewRelevance> *param_5,int param_6,int *param_7)

{
  if (param_4 < param_3) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FPrimitiveViewRelevance>::ResizeAllocation(param_5,0,param_3,(ulonglong)param_1);
    *param_7 = param_3;
    return;
  }
  *param_7 = param_4;
  return;
}

// ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibilityViewPacket>_> @ 14551a5e0

/* WARNING: Removing unreachable block (ram,0x00014551a622) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibilityViewPacket>_>
          (uint param_1,uint param_2,ForElementType<FVisibilityViewPacket> *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_4;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FVisibilityViewPacket>::ResizeAllocation(param_3,iVar2,iVar3,(ulonglong)param_1);
    *param_4 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneViewFamily_const_*>_> @ 14551a660

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneViewFamily_const_*>_>
          (ushort param_1,ForElementType<FSceneViewFamily_const_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSceneViewFamily_const_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicMeshElementContext::FViewFamilyGroup>_> @ 14551a730

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicMeshElementContext::FViewFamilyGroup>_>
          (ushort param_1,ForElementType<FDynamicMeshElementContext::FViewFamilyGroup> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FDynamicMeshElementContext::FViewFamilyGroup>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FThrottledOcclusionQuery_*>_> @ 14551a800

/* WARNING: Removing unreachable block (ram,0x00014551a847) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FThrottledOcclusionQuery_*>_>
          (ushort param_1,ForElementType<FThrottledOcclusionQuery_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FThrottledOcclusionQuery_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGPUOcclusionParallelPacket_*>_> @ 14551a890

/* WARNING: Removing unreachable block (ram,0x00014551a8d7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGPUOcclusionParallelPacket_*>_>
          (ushort param_1,ForElementType<FGPUOcclusionParallelPacket_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FGPUOcclusionParallelPacket_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRelevancePacket_*>_> @ 14551a920

/* WARNING: Removing unreachable block (ram,0x00014551a967) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRelevancePacket_*>_>
          (ushort param_1,ForElementType<FRelevancePacket_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRelevancePacket_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLightSceneProxy_const_*>_> @ 14551a9b0

/* WARNING: Removing unreachable block (ram,0x00014551a9f7) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLightSceneProxy_const_*>_>
          (ushort param_1,ForElementType<FLightSceneProxy_const_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FLightSceneProxy_const_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TTuple<UE::Math::TBox<double>,FColor>_>_> @ 14551aa40

/* WARNING: Removing unreachable block (ram,0x00014551aa87) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TTuple<UE::Math::TBox<double>,FColor>_>_>
          (ushort param_1,ForElementType<TTuple<UE::Math::TBox<double>,FColor>_> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TTuple<UE::Math::TBox<double>,FColor>_>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitive>_> @ 14551aad0

/* WARNING: Removing unreachable block (ram,0x00014551ab17) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitive>_>
          (ushort param_1,ForElementType<FDynamicPrimitive> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FDynamicPrimitive>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveIndex>_> @ 14551ab60

/* WARNING: Removing unreachable block (ram,0x00014551aba7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveIndex>_>
          (ushort param_1,ForElementType<FDynamicPrimitiveIndex> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FDynamicPrimitiveIndex>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveIndexList>_> @ 14551abf0

/* WARNING: Removing unreachable block (ram,0x00014551ac37) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveIndexList>_>
          (ushort param_1,ForElementType<FDynamicPrimitiveIndexList> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FDynamicPrimitiveIndexList>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FHZBBound>_> @ 14551ac80

/* WARNING: Removing unreachable block (ram,0x00014551acc7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FHZBBound>_>
          (ushort param_1,ForElementType<FHZBBound> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FHZBBound>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLODMask>_> @ 14551ad10

/* WARNING: Removing unreachable block (ram,0x00014551ad57) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLODMask>_>
          (ushort param_1,ForElementType<FLODMask> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLODMask>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FOcclusionFeedbackEntry>_> @ 14551ada0

/* WARNING: Removing unreachable block (ram,0x00014551ade7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FOcclusionFeedbackEntry>_>
          (ushort param_1,ForElementType<FOcclusionFeedbackEntry> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FOcclusionFeedbackEntry>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FOcclusionQuery>_> @ 14551ae30

/* WARNING: Removing unreachable block (ram,0x00014551ae77) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FOcclusionQuery>_>
          (ushort param_1,ForElementType<FOcclusionQuery> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FOcclusionQuery>
    ::ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveInstanceRange>_> @ 14551aec0

/* WARNING: Removing unreachable block (ram,0x00014551af07) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveInstanceRange>_>
          (ushort param_1,ForElementType<FPrimitiveInstanceRange> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FPrimitiveInstanceRange>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRelevancePacket::FPrimitiveLODMask>_> @ 14551af50

/* WARNING: Removing unreachable block (ram,0x00014551af97) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRelevancePacket::FPrimitiveLODMask>_>
          (ushort param_1,ForElementType<FRelevancePacket::FPrimitiveLODMask> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRelevancePacket::FPrimitiveLODMask>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveRange>_> @ 14551afe0

/* WARNING: Removing unreachable block (ram,0x00014551b027) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveRange>_>
          (ushort param_1,ForElementType<FPrimitiveRange> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveRange>
    ::ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_> @ 14551b070

/* WARNING: Removing unreachable block (ram,0x00014551b0b7) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_>
          (ushort param_1,ForElementType<FRHICommandListImmediate::FQueuedCommandList> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<FRHICommandListImmediate::FQueuedCommandList>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FThrottledOcclusionQuery>_> @ 14551b100

/* WARNING: Removing unreachable block (ram,0x00014551b147) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FThrottledOcclusionQuery>_>
          (ushort param_1,ForElementType<FThrottledOcclusionQuery> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FThrottledOcclusionQuery>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_> @ 14551b190

/* WARNING: Removing unreachable block (ram,0x00014551b1d7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
          (ushort param_1,
          ForElementType<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleLightViewInfo>_> @ 14551b220

/* WARNING: Removing unreachable block (ram,0x00014551b267) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleLightViewInfo>_>
          (ushort param_1,ForElementType<FVisibleLightViewInfo> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FVisibleLightViewInfo>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TIntRect<int>_>_> @ 14551b2b0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TIntRect<int>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TIntRect<int>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 2) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TIntRect<int>_>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FSSDConstantPixelDensityViewSettings>_> @ 14551b390

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FSSDConstantPixelDensityViewSettings>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FSSDConstantPixelDensityViewSettings> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 7) {
      iVar8 = 6;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 7) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSSDConstantPixelDensityViewSettings>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FVisibilityTaskConfig::FOcclusionCull::FView>_> @ 14551b470

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FVisibilityTaskConfig::FOcclusionCull::FView>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FVisibilityTaskConfig::FOcclusionCull::FView> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (uVar1 < 3) {
      uVar3 = 2;
    }
    else {
      if (uVar3 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
    ForElementType<FVisibilityTaskConfig::FOcclusionCull::FView>::ResizeAllocation
              (param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicMeshElementContext::FViewMeshArrays>_> @ 14551b660

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicMeshElementContext::FViewMeshArrays>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FDynamicMeshElementContext::FViewMeshArrays> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 3) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FDynamicMeshElementContext::FViewMeshArrays>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FViewCommands>_> @ 14551b900

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FViewCommands>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FViewCommands> *param_4,int *param_5
          ,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar3 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FViewCommands>::
    ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_char>_> @ 14551b9d0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_char>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_char> *param_4,int *param_5
          ,int *param_6)

{
  uint uVar1;
  int iVar2;
  uchar *_Src;
  uchar *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_5;
  iVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar4 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = (ulonglong)param_1;
    uVar3 = (ulonglong)(int)uVar1;
    if (iVar4 == 0) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = (uVar3 * 3 >> 3) + 0x10 + uVar3;
    }
    iVar4 = (int)uVar5;
    if (iVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
    else if (iVar4 < 0) goto LAB_14551badc;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_14551badc:
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (uchar *)0x0;
    _Src = param_4->Data;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar6,1);
      if ((_Src != (uchar *)0x0) && (uVar3 = (ulonglong)*(uint *)(_Src + -4), uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIUniformBuffer_*>_> @ 14551bb00

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIUniformBuffer_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRHIUniformBuffer_*> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  FRHIUniformBuffer **_Src;
  FRHIUniformBuffer **_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_5;
  iVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar4 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = (ulonglong)param_1;
    uVar3 = (ulonglong)(int)uVar1;
    if (iVar4 == 0) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = (uVar3 * 3 >> 3) + 0x10 + uVar3;
    }
    iVar4 = (int)uVar5;
    if (iVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
    else if (iVar4 < 0) goto LAB_14551bc0c;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_14551bc0c:
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (FRHIUniformBuffer **)0x0;
    _Src = param_4->Data;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar6,8);
      if ((_Src != (FRHIUniformBuffer **)0x0) &&
         (uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4), uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FStaticMeshBatch_const_*>_> @ 14551bc30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FStaticMeshBatch_const_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FStaticMeshBatch_const_*> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FStaticMeshBatch_const_*>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<int>_>_> @ 14551bcd0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<int>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TIntVector2<int>_> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::Math::TIntVector2<int>_>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshBatchAndRelevance>_> @ 14551bd70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshBatchAndRelevance>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FMeshBatchAndRelevance> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FMeshBatchAndRelevance>::ResizeAllocation(param_4,iVar2,uVar4,(ulonglong)param_1)
    ;
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveInstanceRange>_> @ 14551be10

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveInstanceRange>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPrimitiveInstanceRange> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FPrimitiveInstanceRange>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveViewRelevance>_> @ 14551beb0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveViewRelevance>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPrimitiveViewRelevance> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FPrimitiveViewRelevance>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSkyMeshBatch>_> @ 14551bf50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSkyMeshBatch>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSkyMeshBatch> *param_4,int *param_5
          ,int *param_6)

{
  uint uVar1;
  int iVar2;
  FSkyMeshBatch *_Src;
  FSkyMeshBatch *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_5;
  iVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar4 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = (ulonglong)param_1;
    uVar3 = (ulonglong)(int)uVar1;
    if (iVar4 == 0) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = (uVar3 * 3 >> 3) + 0x10 + uVar3;
    }
    iVar4 = (int)uVar5;
    if (iVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
    else if (iVar4 < 0) goto LAB_14551c05c;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_14551c05c:
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (FSkyMeshBatch *)0x0;
    _Src = param_4->Data;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar6,8);
      if ((_Src != (FSkyMeshBatch *)0x0) &&
         (uVar3 = (ulonglong)*(uint *)&_Src[-1].field_0x14, uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSortedTrianglesMeshBatch>_> @ 14551c080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSortedTrianglesMeshBatch>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSortedTrianglesMeshBatch> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  FSortedTrianglesMeshBatch *_Src;
  FSortedTrianglesMeshBatch *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_5;
  iVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar4 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = (ulonglong)param_1;
    uVar3 = (ulonglong)(int)uVar1;
    if (iVar4 == 0) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = (uVar3 * 3 >> 3) + 0x10 + uVar3;
    }
    iVar4 = (int)uVar5;
    if (iVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
    else if (iVar4 < 0) goto LAB_14551c18c;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_14551c18c:
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (FSortedTrianglesMeshBatch *)0x0;
    _Src = param_4->Data;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar6,8);
      if ((_Src != (FSortedTrianglesMeshBatch *)0x0) &&
         (uVar3 = (ulonglong)*(uint *)((longlong)&_Src[-1].Proxy + 4), uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVolumetricMeshBatch>_> @ 14551c1b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVolumetricMeshBatch>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FVolumetricMeshBatch> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  FVolumetricMeshBatch *_Src;
  FVolumetricMeshBatch *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_5;
  iVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar4 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = (ulonglong)param_1;
    uVar3 = (ulonglong)(int)uVar1;
    if (iVar4 == 0) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = (uVar3 * 3 >> 3) + 0x10 + uVar3;
    }
    iVar4 = (int)uVar5;
    if (iVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
    else if (iVar4 < 0) goto LAB_14551c2bc;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_14551c2bc:
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (FVolumetricMeshBatch *)0x0;
    _Src = param_4->Data;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar6,8);
      if ((_Src != (FVolumetricMeshBatch *)0x0) &&
         (uVar3 = (ulonglong)*(uint *)((longlong)&_Src[-1].Proxy + 4), uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshPassMask>_> @ 14551c2e0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshPassMask>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FMeshPassMask> *param_4,int *param_5
          ,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshPassMask>::
    ResizeAllocation(param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleLightInfo>_> @ 14551c380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleLightInfo>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FVisibleLightInfo> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  FVisibleLightInfo *_Src;
  FVisibleLightInfo *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_5;
  iVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar4 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = (ulonglong)param_1;
    uVar3 = (ulonglong)(int)uVar1;
    if (iVar4 == 0) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = (uVar3 * 3 >> 3) + 0x10 + uVar3;
    }
    iVar4 = (int)uVar5;
    if (iVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
    else if (iVar4 < 0) goto LAB_14551c48c;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_14551c48c:
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (FVisibleLightInfo *)0x0;
    _Src = param_4->Data;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar6,8);
      if ((_Src != (FVisibleLightInfo *)0x0) &&
         (uVar3 = (ulonglong)(uint)_Src[-1].VirtualShadowMapClipmaps.ArrayMax, uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>_> @ 14551c4b0

/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<EMeshDrawCommandCullingPayloadFlags> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TIntRect<int>_>_> @ 14551c550

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TIntRect<int>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TIntRect<int>_> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 2) {
    iVar2 = 1;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TIntRect<int>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FSSDConstantPixelDensityViewSettings>_> @ 14551c610

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FSSDConstantPixelDensityViewSettings>_>
          (uint param_1,uint param_2,ForElementType<FSSDConstantPixelDensityViewSettings> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 7) {
    iVar2 = 6;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSSDConstantPixelDensityViewSettings>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FVisibilityTaskConfig::FOcclusionCull::FView>_> @ 14551c6d0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FVisibilityTaskConfig::FOcclusionCull::FView>_>
          (uint param_1,uint param_2,
          ForElementType<FVisibilityTaskConfig::FOcclusionCull::FView> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_5;
  if ((uint)param_4 < 3) {
    iVar2 = 2;
  }
  else if ((((longlong)(iVar1 - param_4) * (ulonglong)param_1 < 0x4000) &&
           (iVar1 * 2 <= param_4 * 3)) ||
          ((iVar2 = param_4, iVar1 - param_4 < 0x41 && (param_4 != 0)))) {
    iVar2 = iVar1;
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
    ForElementType<FVisibilityTaskConfig::FOcclusionCull::FView>::ResizeAllocation
              (param_3,param_4,iVar2,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicMeshElementContext::FViewMeshArrays>_> @ 14551c760

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicMeshElementContext::FViewMeshArrays>_>
          (uint param_1,uint param_2,
          ForElementType<FDynamicMeshElementContext::FViewMeshArrays> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 3) {
    iVar2 = 2;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FDynamicMeshElementContext::FViewMeshArrays>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FViewCommands>_> @ 14551c8e0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FViewCommands>_>
          (uint param_1,uint param_2,ForElementType<FViewCommands> *param_3,int param_4,int *param_5
          )

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FViewCommands>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<int>_>_> @ 14551c9a0

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<int>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TIntVector2<int>_> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::Math::TIntVector2<int>_>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveIndex>_> @ 14551ca10

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveIndex>_>
          (uint param_1,uint param_2,ForElementType<FDynamicPrimitiveIndex> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FDynamicPrimitiveIndex>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshPassMask>_> @ 14551ca80

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshPassMask>_>
          (uint param_1,uint param_2,ForElementType<FMeshPassMask> *param_3,int param_4,int *param_5
          )

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshPassMask>::
    ResizeAllocation(param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicMeshElementContext::FViewMeshArrays>_> @ 14551caf0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicMeshElementContext::FViewMeshArrays>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FDynamicMeshElementContext::FViewMeshArrays> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FDynamicMeshElementContext::FViewMeshArrays>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FThrottledOcclusionQuery_*>_> @ 14551cb70

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FThrottledOcclusionQuery_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FThrottledOcclusionQuery_*> *param_4
          ,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FThrottledOcclusionQuery_*>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGPUOcclusionParallelPacket_*>_> @ 14551cba0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGPUOcclusionParallelPacket_*>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FGPUOcclusionParallelPacket_*> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FGPUOcclusionParallelPacket_*>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRelevancePacket_*>_> @ 14551cbd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRelevancePacket_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRelevancePacket_*> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRelevancePacket_*>::ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1)
    ;
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLightSceneProxy_const_*>_> @ 14551cc00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLightSceneProxy_const_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FLightSceneProxy_const_*> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FLightSceneProxy_const_*>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitive>_> @ 14551cc30

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitive>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FDynamicPrimitive> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FDynamicPrimitive>::ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveIndex>_> @ 14551cc60

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveIndex>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FDynamicPrimitiveIndex> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FDynamicPrimitiveIndex>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLODMask>_> @ 14551cc90

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLODMask>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FLODMask> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLODMask>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshBatchAndRelevance>_> @ 14551ccc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshBatchAndRelevance>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FMeshBatchAndRelevance> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FMeshBatchAndRelevance>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveInstanceRange>_> @ 14551ccf0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveInstanceRange>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPrimitiveInstanceRange> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FPrimitiveInstanceRange>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRelevancePacket::FPrimitiveLODMask>_> @ 14551cd20

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRelevancePacket::FPrimitiveLODMask>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FRelevancePacket::FPrimitiveLODMask> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRelevancePacket::FPrimitiveLODMask>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveViewRelevance>_> @ 14551cd50

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveViewRelevance>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPrimitiveViewRelevance> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FPrimitiveViewRelevance>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_> @ 14551cd80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FRHICommandListImmediate::FQueuedCommandList> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<FRHICommandListImmediate::FQueuedCommandList>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibilityViewPacket>_> @ 14551cdb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibilityViewPacket>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FVisibilityViewPacket> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FVisibilityViewPacket>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleLightViewInfo>_> @ 14551cde0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleLightViewInfo>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FVisibleLightViewInfo> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FVisibleLightViewInfo>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>_> @ 14551ce10

/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<EMeshDrawCommandCullingPayloadFlags> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_*>_> @ 145570130

/* WARNING: Removing unreachable block (ram,0x000145570177) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_*>_>
          (ushort param_1,ForElementType<FProjectedShadowInfo_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FProjectedShadowInfo_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<8>::ForElementType<FTransferResourceParams>_> @ 1455701c0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<8>::ForElementType<FTransferResourceParams>_>
          (ushort param_1,ForElementType<FTransferResourceParams> *param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_3;
  uVar1 = iVar4 + 1;
  if ((int)uVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (8 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *param_3 = 8;
  return iVar4;
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>_> @ 145570230

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector4<float>_> *param_4
          ,int *param_5,int *param_6)

{
  ForElementType<UE::Math::TVector4<float>_> *this;
  int iVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ForElementType<UE::Math::TVector4<float>_> _Src;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  iVar1 = *param_5;
  uVar6 = *param_6;
  uVar8 = iVar1 + param_3;
  *param_5 = uVar8;
  if ((uint)param_3 <= uVar6 - iVar1) {
    return iVar1;
  }
  if ((int)uVar8 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar8);
  }
  uVar7 = (ulonglong)param_1;
  if (uVar8 < 9) {
    _Src = param_4->SecondaryData;
    uVar8 = 8;
LAB_1455702eb:
    uVar6 = uVar8;
    if (_Src == (ForElementType<UE::Math::TVector4<float>_>)0x0) goto LAB_14557033f;
    memmove(param_4,(void *)_Src,(longlong)iVar1 << 4);
    uVar6 = 0;
    iVar5 = 0;
  }
  else {
    uVar4 = (ulonglong)(int)uVar8;
    if (uVar6 < 9) {
      uVar6 = 0;
    }
    if (uVar6 == 0) {
      uVar2 = 4;
      if (4 < uVar4) {
        uVar2 = uVar4;
      }
    }
    else {
      uVar2 = (uVar4 * 3 >> 3) + 0x10 + uVar4;
    }
    uVar3 = FMemory::QuantizeSize(uVar7 * uVar2,0);
    uVar6 = (uint)(uVar3 / uVar7);
    this = &param_4->SecondaryData;
    if ((int)uVar6 < (int)uVar8) {
      uVar6 = 0x7fffffff;
    }
    _Src = *this;
    uVar8 = uVar6;
    if (uVar6 < 9) goto LAB_1455702eb;
    iVar5 = iVar1;
    if (_Src == (ForElementType<UE::Math::TVector4<float>_>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this,0,uVar6,uVar7);
      memmove((void *)*this,param_4,(longlong)iVar1 << 4);
      goto LAB_14557033f;
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_4->SecondaryData,iVar5,uVar6,uVar7);
  uVar6 = uVar8;
LAB_14557033f:
  *param_6 = uVar6;
  return iVar1;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TMatrix<float>_>_> @ 145570370

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TMatrix<float>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TMatrix<float>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  TMatrix<float> *_Src;
  TMatrix<float> *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_5;
  iVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar4 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = (ulonglong)param_1;
    uVar3 = (ulonglong)(int)uVar1;
    if (iVar4 == 0) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = (uVar3 * 3 >> 3) + 0x10 + uVar3;
    }
    iVar4 = (int)uVar5;
    if (iVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
    else if (iVar4 < 0) goto LAB_14557047c;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_14557047c:
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (TMatrix<float> *)0x0;
    _Src = param_4->Data;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar6,0x10);
      if ((_Src != (TMatrix<float> *)0x0) && (uVar3 = (ulonglong)(uint)_Src[-1].M[3][3], uVar3 != 0)
         ) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_> @ 145606ed0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<float> *param_5,
          int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<float>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<IPooledRenderTarget>_>_> @ 145606f70

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<IPooledRenderTarget>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<TRefCountPtr<IPooledRenderTarget>_> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
  ForElementType<TRefCountPtr<IPooledRenderTarget>_>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FInstanceCullingGroupWork>_> @ 145607010

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FInstanceCullingGroupWork>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::HLSL::FInstanceCullingGroupWork> *param_5,int param_6,int *param_7)

{
  if (param_4 < param_3) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::HLSL::FInstanceCullingGroupWork>::ResizeAllocation
              (param_5,0,param_3,(ulonglong)param_1);
    *param_7 = param_3;
    return;
  }
  *param_7 = param_4;
  return;
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FNextVirtualShadowMapData>_> @ 145607050

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FNextVirtualShadowMapData>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::HLSL::FNextVirtualShadowMapData> *param_5,int param_6,int *param_7)

{
  FNextVirtualShadowMapData *_Src;
  FNextVirtualShadowMapData *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if (param_3 <= param_4) {
    *param_7 = param_4;
    return;
  }
  if ((-1 < param_3) && (param_1 - 1 < 0x7fffffff)) {
    _Dst = (FNextVirtualShadowMapData *)0x0;
    uVar1 = (ulonglong)param_1 * (longlong)param_3;
    _Src = param_5->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FNextVirtualShadowMapData *)0x0) &&
         (_Size = (ulonglong)(uint)_Src[-1].PageAddressOffset.field0_0x0._s_0.Y, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_5->Data = _Dst;
    *param_7 = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidConcurrentLinearArrayAllocatorNum(param_3,(ulonglong)param_1);
}

// ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FConvexVolume>_> @ 145607120

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FConvexVolume>_>
          (uint param_1,uint param_2,ForElementType<FConvexVolume> *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_4;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FConvexVolume>::
    ResizeAllocation(param_3,uVar2,iVar8,uVar7);
    *param_4 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FConvexVolume>_> @ 1456071f0

/* WARNING: Removing unreachable block (ram,0x000145607232) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FConvexVolume>_>
          (uint param_1,uint param_2,ForElementType<FConvexVolume> *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_4;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FConvexVolume>::
    ResizeAllocation(param_3,iVar2,iVar3,(ulonglong)param_1);
    *param_4 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_> @ 145607270

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
          (ushort param_1,ForElementType<float> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<float>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FProjectedShadowInfo_*>_> @ 145607340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FProjectedShadowInfo_*>_>
          (ushort param_1,ForElementType<FProjectedShadowInfo_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 3) {
      uVar3 = 2;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
    ForElementType<FProjectedShadowInfo_*>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FShadowMeshCollector_*>_> @ 1456073f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FShadowMeshCollector_*>_>
          (ushort param_1,ForElementType<FShadowMeshCollector_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 2) {
      uVar3 = 1;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
    ForElementType<FShadowMeshCollector_*>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSimpleMeshDrawCommandPass_*>_> @ 1456074a0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSimpleMeshDrawCommandPass_*>_>
          (ushort param_1,ForElementType<FSimpleMeshDrawCommandPass_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSimpleMeshDrawCommandPass_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_> @ 145607570

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
          (ushort param_1,ForElementType<UE::Math::TPlane<double>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 7) {
      iVar8 = 6;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 7) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TPlane<double>_>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FFirstPersonSelfShadowInputs::FDownsampledTextures>_> @ 145607640

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FFirstPersonSelfShadowInputs::FDownsampledTextures>_>
          (ushort param_1,
          ForElementType<FFirstPersonSelfShadowInputs::FDownsampledTextures> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FFirstPersonSelfShadowInputs::FDownsampledTextures>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGatherShadowPrimitivesPacket_*>_> @ 145607700

/* WARNING: Removing unreachable block (ram,0x000145607747) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGatherShadowPrimitivesPacket_*>_>
          (ushort param_1,ForElementType<FGatherShadowPrimitivesPacket_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FGatherShadowPrimitivesPacket_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FParallelMeshDrawCommandPass_*>_> @ 145607790

/* WARNING: Removing unreachable block (ram,0x0001456077d7) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FParallelMeshDrawCommandPass_*>_>
          (ushort param_1,ForElementType<FParallelMeshDrawCommandPass_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FParallelMeshDrawCommandPass_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FStaticMeshBatch_const_*>_> @ 145607820

/* WARNING: Removing unreachable block (ram,0x000145607867) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FStaticMeshBatch_const_*>_>
          (ushort param_1,ForElementType<FStaticMeshBatch_const_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FStaticMeshBatch_const_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FShadowSceneRenderer::FDirectionalLightShadowFrameSetup>_> @ 1456078b0

/* WARNING: Removing unreachable block (ram,0x0001456078f7) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FShadowSceneRenderer::FDirectionalLightShadowFrameSetup>_>
          (ushort param_1,
          ForElementType<FShadowSceneRenderer::FDirectionalLightShadowFrameSetup> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FShadowSceneRenderer::FDirectionalLightShadowFrameSetup>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDrawDebugShadowFrustumOp>_> @ 145607940

/* WARNING: Removing unreachable block (ram,0x000145607987) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDrawDebugShadowFrustumOp>_>
          (ushort param_1,ForElementType<FDrawDebugShadowFrustumOp> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FDrawDebugShadowFrustumOp>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FInstanceCullingGroupWork>_> @ 1456079d0

/* WARNING: Removing unreachable block (ram,0x000145607a17) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FInstanceCullingGroupWork>_>
          (ushort param_1,ForElementType<UE::HLSL::FInstanceCullingGroupWork> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::HLSL::FInstanceCullingGroupWork>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLayoutAndAssignedShadows>_> @ 145607a60

/* WARNING: Removing unreachable block (ram,0x000145607aa7) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLayoutAndAssignedShadows>_>
          (ushort param_1,ForElementType<FLayoutAndAssignedShadows> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FLayoutAndAssignedShadows>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FShadowSceneRenderer::FLocalLightShadowFrameSetup>_> @ 145607af0

/* WARNING: Removing unreachable block (ram,0x000145607b37) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FShadowSceneRenderer::FLocalLightShadowFrameSetup>_>
          (ushort param_1,ForElementType<FShadowSceneRenderer::FLocalLightShadowFrameSetup> *param_2
          ,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FShadowSceneRenderer::FLocalLightShadowFrameSetup>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshBatchAndRelevance>_> @ 145607b80

/* WARNING: Removing unreachable block (ram,0x000145607bc7) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshBatchAndRelevance>_>
          (ushort param_1,ForElementType<FMeshBatchAndRelevance> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FMeshBatchAndRelevance>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FNaniteVirtualShadowMapRenderPass>_> @ 145607c10

/* WARNING: Removing unreachable block (ram,0x000145607c57) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FNaniteVirtualShadowMapRenderPass>_>
          (ushort param_1,ForElementType<FNaniteVirtualShadowMapRenderPass> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FNaniteVirtualShadowMapRenderPass>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSortedShadowMapAtlas>_> @ 145607ca0

/* WARNING: Removing unreachable block (ram,0x000145607ce7) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSortedShadowMapAtlas>_>
          (ushort param_1,ForElementType<FSortedShadowMapAtlas> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FSortedShadowMapAtlas>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FShadowSceneRenderer::FViewData>_> @ 145607d30

/* WARNING: Removing unreachable block (ram,0x000145607d77) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FShadowSceneRenderer::FViewData>_>
          (ushort param_1,ForElementType<FShadowSceneRenderer::FViewData> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FShadowSceneRenderer::FViewData>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TRefCountPtr<FProjectedShadowInfo>_>_> @ 145607dc0

/* WARNING: Removing unreachable block (ram,0x000145607e07) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TRefCountPtr<FProjectedShadowInfo>_>_>
          (ushort param_1,ForElementType<TRefCountPtr<FProjectedShadowInfo>_> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TRefCountPtr<FProjectedShadowInfo>_>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSharedPtr<FVirtualShadowMapClipmap,1>_>_> @ 145607e50

/* WARNING: Removing unreachable block (ram,0x000145607e97) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSharedPtr<FVirtualShadowMapClipmap,1>_>_>
          (ushort param_1,ForElementType<TSharedPtr<FVirtualShadowMapClipmap,1>_> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TSharedPtr<FVirtualShadowMapClipmap,1>_>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FString>_> @ 145607ee0

/* WARNING: Removing unreachable block (ram,0x000145607f27) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FString>_>
          (ushort param_1,ForElementType<FString> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FString>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>_> @ 145607f70

/* WARNING: Removing unreachable block (ram,0x000145607fb7) */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>_>
          (ushort param_1,ForElementType<EMeshDrawCommandCullingPayloadFlags> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 145608000

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<int> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 7) {
      iVar8 = 6;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 7) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_> @ 1456080e0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector<double>_> *param_4
          ,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 9) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector<double>_>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<FBoxEdge>_> @ 1456081c0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<FBoxEdge>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FBoxEdge> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0xd) {
      iVar8 = 0xc;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0xd) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<FBoxEdge>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<IPooledRenderTarget>_>_> @ 1456082a0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<IPooledRenderTarget>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TRefCountPtr<IPooledRenderTarget>_> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar3 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TRefCountPtr<IPooledRenderTarget>_>::ResizeAllocation
              (param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<IPooledRenderTarget_*>_> @ 145608370

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<IPooledRenderTarget_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<IPooledRenderTarget_*> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<IPooledRenderTarget_*>::ResizeAllocation(param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_*>_> @ 145608410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FProjectedShadowInfo_*> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FProjectedShadowInfo_*>::ResizeAllocation(param_4,iVar2,uVar4,(ulonglong)param_1)
    ;
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FShadowSceneRenderer::FLightCommonFrameSetup>_> @ 1456084b0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FShadowSceneRenderer::FLightCommonFrameSetup>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FShadowSceneRenderer::FLightCommonFrameSetup> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FShadowSceneRenderer::FLightCommonFrameSetup>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FTextureLayout::FTextureLayoutNode>_> @ 145608680

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FTextureLayout::FTextureLayoutNode>_>
          (uint param_1,uint param_2,ForElementType<FTextureLayout::FTextureLayoutNode> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 6) {
    iVar2 = 5;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FTextureLayout::FTextureLayoutNode>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_*>_> @ 145608740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_*>_>
          (uint param_1,uint param_2,ForElementType<FProjectedShadowInfo_*> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FProjectedShadowInfo_*>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FShadowSceneRenderer::FLightCommonFrameSetup>_> @ 1456087b0

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FShadowSceneRenderer::FLightCommonFrameSetup>_>
          (uint param_1,uint param_2,
          ForElementType<FShadowSceneRenderer::FLightCommonFrameSetup> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FShadowSceneRenderer::FLightCommonFrameSetup>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 145608820

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<int> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 7) {
      iVar1 = 6;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FShadowMeshCollector_*>_> @ 1456088a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FShadowMeshCollector_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FShadowMeshCollector_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 1, 1 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
  ForElementType<FShadowMeshCollector_*>::ResizeAllocation(param_4,param_5,iVar1,(ulonglong)param_1)
  ;
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSimpleMeshDrawCommandPass_*>_> @ 1456088e0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSimpleMeshDrawCommandPass_*>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FSimpleMeshDrawCommandPass_*> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSimpleMeshDrawCommandPass_*>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_> @ 145608960

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TPlane<double>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TPlane<double>_>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_> @ 1456089e0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TPlane<double>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 7) {
      iVar1 = 6;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TPlane<double>_>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_> @ 145608a60

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector<double>_> *param_4
          ,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector<double>_>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<FBoxEdge>_> @ 145608ae0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<FBoxEdge>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FBoxEdge> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0xd) {
      iVar1 = 0xc;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<FBoxEdge>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FConvexVolume>_> @ 145608b60

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FConvexVolume>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FConvexVolume> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FConvexVolume>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGatherShadowPrimitivesPacket_*>_> @ 145608be0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGatherShadowPrimitivesPacket_*>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FGatherShadowPrimitivesPacket_*> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FGatherShadowPrimitivesPacket_*>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<IPooledRenderTarget_*>_> @ 145608c10

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<IPooledRenderTarget_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<IPooledRenderTarget_*> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<IPooledRenderTarget_*>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_*>_> @ 145608c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FProjectedShadowInfo_*> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FProjectedShadowInfo_*>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_const_*>_> @ 145608c70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_const_*>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FPrimitiveSceneInfo_const_*> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FPrimitiveSceneInfo_const_*>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FShadowSceneRenderer::FDirectionalLightShadowFrameSetup>_> @ 145608ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FShadowSceneRenderer::FDirectionalLightShadowFrameSetup>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FShadowSceneRenderer::FDirectionalLightShadowFrameSetup> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FShadowSceneRenderer::FDirectionalLightShadowFrameSetup>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FShadowSceneRenderer::FViewData>_> @ 145608cd0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FShadowSceneRenderer::FViewData>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FShadowSceneRenderer::FViewData> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FShadowSceneRenderer::FViewData>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// DereferenceIfNecessary<FAnimBankTransformProvider,FAnimBankTransformProvider_*_&> @ 14565fd30

FAnimBankTransformProvider * __cdecl
UE::Core::Private::DereferenceIfNecessary<FAnimBankTransformProvider,FAnimBankTransformProvider_*_&>
          (FAnimBankTransformProvider **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FSkinnedMeshDebugViewExtension,FSkinnedMeshDebugViewExtension_*_&> @ 14565fd50

FSkinnedMeshDebugViewExtension * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FSkinnedMeshDebugViewExtension,FSkinnedMeshDebugViewExtension_*_&>
          (FSkinnedMeshDebugViewExtension **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FSkinningSceneExtension,FSkinningSceneExtension_*_&> @ 14565fd70

FSkinningSceneExtension * __cdecl
UE::Core::Private::DereferenceIfNecessary<FSkinningSceneExtension,FSkinningSceneExtension_*_&>
          (FSkinningSceneExtension **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSkinningTransformProvider::FProviderRange>_> @ 145663a10

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSkinningTransformProvider::FProviderRange>_>
          (ushort param_1,ForElementType<FSkinningTransformProvider::FProviderRange> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSkinningTransformProvider::FProviderRange>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>_>_> @ 145663ae0

/* WARNING: Removing unreachable block (ram,0x000145663b27) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>_>_>
          (ushort param_1,
          ForElementType<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>_>
          *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>_>
    ::ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources>_> @ 145663b70

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources> *param_4,int *param_5
          ,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar3 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources>::ResizeAllocation
              (param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<unsigned_char>_> @ 145663c40

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<unsigned_char>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_char> *param_4,int *param_5
          ,int *param_6)

{
  uint uVar1;
  int iVar2;
  uchar *_Src;
  uchar *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_5;
  iVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar4 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = (ulonglong)param_1;
    uVar3 = (ulonglong)(int)uVar1;
    if (iVar4 == 0) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = (uVar3 * 3 >> 3) + 0x10 + uVar3;
    }
    iVar4 = (int)uVar5;
    if (iVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
    else if (iVar4 < 0) goto LAB_145663d4c;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_145663d4c:
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (uchar *)0x0;
    _Src = param_4->Data;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar6,1);
      if ((_Src != (uchar *)0x0) && (uVar3 = (ulonglong)*(uint *)(_Src + -4), uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources>_> @ 145663d70

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources>_>
          (uint param_1,uint param_2,
          ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSkinningTransformProvider::FProviderRange>_> @ 145663e30

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSkinningTransformProvider::FProviderRange>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FSkinningTransformProvider::FProviderRange> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSkinningTransformProvider::FProviderRange>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicEmitterDataBase_*>_> @ 1456d8620

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicEmitterDataBase_*>_>
          (ushort param_1,ForElementType<FDynamicEmitterDataBase_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0xd) {
      iVar8 = 0xc;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0xd) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FDynamicEmitterDataBase_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicEmitterDataBase_*>_> @ 1456d86f0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicEmitterDataBase_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FDynamicEmitterDataBase_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0xd) {
      iVar1 = 0xc;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FDynamicEmitterDataBase_*>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FTranslucentLightInjectionCollector::FInjectionData>_> @ 14574d7a0

/* WARNING: Removing unreachable block (ram,0x00014574d7e7) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FTranslucentLightInjectionCollector::FInjectionData>_>
          (ushort param_1,
          ForElementType<FTranslucentLightInjectionCollector::FInjectionData> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FTranslucentLightInjectionCollector::FInjectionData>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSimpleLightEntry>_> @ 14574d830

/* WARNING: Removing unreachable block (ram,0x00014574d877) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSimpleLightEntry>_>
          (ushort param_1,ForElementType<FSimpleLightEntry> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FSimpleLightEntry>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSimpleLightPerViewEntry>_> @ 14574d8c0

/* WARNING: Removing unreachable block (ram,0x00014574d907) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSimpleLightPerViewEntry>_>
          (ushort param_1,ForElementType<FSimpleLightPerViewEntry> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FSimpleLightPerViewEntry>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>_> @ 14574d950

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar3 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>::ResizeAllocation
              (param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FTranslucentLightInjectionCollector::FPerViewData>_> @ 14574da20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FTranslucentLightInjectionCollector::FPerViewData>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FTranslucentLightInjectionCollector::FPerViewData> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FTranslucentLightInjectionCollector::FPerViewData>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSimpleLightArray>_> @ 14574dac0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSimpleLightArray>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSimpleLightArray> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FSimpleLightArray>::ResizeAllocation(param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_> @ 14574db60

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_>
          (uint param_1,uint param_2,ForElementType<FRDGTexture_*> *param_3,int param_4,int *param_5
          )

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 3) {
    iVar2 = 2;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>_> @ 14574dc20

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>_>
          (uint param_1,uint param_2,
          ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FTranslucentLightInjectionCollector::FPerViewData>_> @ 14574dce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FTranslucentLightInjectionCollector::FPerViewData>_>
          (uint param_1,uint param_2,
          ForElementType<FTranslucentLightInjectionCollector::FPerViewData> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FTranslucentLightInjectionCollector::FPerViewData>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSimpleLightArray>_> @ 14574dd50

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSimpleLightArray>_>
          (uint param_1,uint param_2,ForElementType<FSimpleLightArray> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FSimpleLightArray>::ResizeAllocation(param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// DoesDimensionContainValue<FVirtualShadowMapProjectionCS::FSMRTStaticSampleCount> @ 1457bdb00

bool __cdecl
UE::ShaderPermutationUtils::
DoesDimensionContainValue<FVirtualShadowMapProjectionCS::FSMRTStaticSampleCount>(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *param_1;
  iVar6 = 0;
  while( true ) {
    if (iVar6 == 2) {
      iVar5 = -1;
    }
    else if (iVar6 == 1) {
      iVar5 = 2;
    }
    else if (iVar6 == 0) {
      iVar5 = 4;
    }
    else {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x97,L"Invalid shader permutation dimension id %i.");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar4 = *param_1;
      iVar5 = 0;
    }
    if (iVar4 == iVar5) break;
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      return false;
    }
  }
  return true;
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisualizationDataLegendEntry>_> @ 1457c0120

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisualizationDataLegendEntry>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FVisualizationDataLegendEntry> *param_5,int param_6,int *param_7)

{
  if (param_4 < param_3) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FVisualizationDataLegendEntry>::ResizeAllocation
              (param_5,0,param_3,(ulonglong)param_1);
    *param_7 = param_3;
    return;
  }
  *param_7 = param_4;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_> @ 1457c0160

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
          (ushort param_1,ForElementType<float> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<float>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FRDGBuffer_*>_> @ 1457c0220

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FRDGBuffer_*>_>
          (ushort param_1,ForElementType<FRDGBuffer_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 0x11) {
      uVar3 = 0x10;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
    ForElementType<FRDGBuffer_*>::ResizeAllocation(param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVirtualShadowDepthPassParameters_*>_> @ 1457c02d0

/* WARNING: Removing unreachable block (ram,0x0001457c0317) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVirtualShadowDepthPassParameters_*>_>
          (ushort param_1,ForElementType<FVirtualShadowDepthPassParameters_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FVirtualShadowDepthPassParameters_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVirtualShadowMapPerLightCacheEntry_const_*>_> @ 1457c0360

/* WARNING: Removing unreachable block (ram,0x0001457c03a7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVirtualShadowMapPerLightCacheEntry_const_*>_>
          (ushort param_1,ForElementType<FVirtualShadowMapPerLightCacheEntry_const_*> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FVirtualShadowMapPerLightCacheEntry_const_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPerPageShaderDispatcher::FBuilder::FIdBinIndex>_> @ 1457c03f0

/* WARNING: Removing unreachable block (ram,0x0001457c0437) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPerPageShaderDispatcher::FBuilder::FIdBinIndex>_>
          (ushort param_1,ForElementType<FPerPageShaderDispatcher::FBuilder::FIdBinIndex> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FPerPageShaderDispatcher::FBuilder::FIdBinIndex>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FVSMCullingBatchInfo>_> @ 1457c0480

/* WARNING: Removing unreachable block (ram,0x0001457c04c7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FVSMCullingBatchInfo>_>
          (ushort param_1,ForElementType<UE::HLSL::FVSMCullingBatchInfo> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::HLSL::FVSMCullingBatchInfo>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisualizationDataLegendEntry>_> @ 1457c0510

/* WARNING: Removing unreachable block (ram,0x0001457c0557) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisualizationDataLegendEntry>_>
          (ushort param_1,ForElementType<FVisualizationDataLegendEntry> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FVisualizationDataLegendEntry>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FVirtualShadowMapClipmap::FLevelData>_> @ 1457c05a0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FVirtualShadowMapClipmap::FLevelData>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FVirtualShadowMapClipmap::FLevelData> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x21) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FVirtualShadowMapClipmap::FLevelData>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FNextVirtualShadowMapData>_> @ 1457c0680

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FNextVirtualShadowMapData>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::HLSL::FNextVirtualShadowMapData> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::HLSL::FNextVirtualShadowMapData>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FNextVirtualShadowMapData>_> @ 1457c0720

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FNextVirtualShadowMapData>_>
          (uint param_1,uint param_2,ForElementType<UE::HLSL::FNextVirtualShadowMapData> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::HLSL::FNextVirtualShadowMapData>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_> @ 1457c0790

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
          (uint param_1,uint param_2,int param_3,ForElementType<float> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<float>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FRDGBuffer_*>_> @ 1457c0810

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FRDGBuffer_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGBuffer_*> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 0x10, 0x10 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
  ForElementType<FRDGBuffer_*>::ResizeAllocation(param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FVirtualShadowMapClipmap::FLevelData>_> @ 1457c0850

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FVirtualShadowMapClipmap::FLevelData>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FVirtualShadowMapClipmap::FLevelData> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FVirtualShadowMapClipmap::FLevelData>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVirtualShadowDepthPassParameters_*>_> @ 1457c08d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVirtualShadowDepthPassParameters_*>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FVirtualShadowDepthPassParameters_*> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FVirtualShadowDepthPassParameters_*>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FVSMCullingBatchInfo>_> @ 1457c0900

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FVSMCullingBatchInfo>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::HLSL::FVSMCullingBatchInfo> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<UE::HLSL::FVSMCullingBatchInfo>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>_> @ 1458542f0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Math::TVector4<float>_> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
  ForElementType<UE::Math::TVector4<float>_>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_> @ 145854390

void __cdecl
UE::Core::Private::ReallocForCopy<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FVertexStreamComponent> *param_5,int param_6,int *param_7)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    if ((4 < (uint)param_3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewMax <= NumInlineElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                           ,0x52a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = 4;
  }
  if ((int)uVar3 <= param_4) {
    *param_7 = param_4;
    return;
  }
  if ((4 < uVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax >= 0 && NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x524,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_7 = uVar3;
  return;
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>_> @ 145854510

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector4<float>_> *param_4
          ,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x11) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector4<float>_>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>_> @ 1458546d0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector4<float>_> *param_4
          ,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector4<float>_>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// SetupComputeBindings<FRenderVolumetricCloudEmptySpaceSkippingCS,FMeshMaterialShaderElementData> @ 145854750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
UE::MeshPassUtils::
SetupComputeBindings<FRenderVolumetricCloudEmptySpaceSkippingCS,FMeshMaterialShaderElementData>
          (TShaderRefBase<FRenderVolumetricCloudEmptySpaceSkippingCS,FShaderMapPointerTable>
           *param_1,FScene *param_2,Type param_3,FPrimitiveSceneProxy *param_4,
          FMaterialRenderProxy *param_5,FMaterial *param_6,FMeshMaterialShaderElementData *param_7,
          FMeshDrawShaderBindings *param_8)

{
  int iVar1;
  int iVar2;
  FRenderVolumetricCloudEmptySpaceSkippingCS *pFVar3;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar12;
  byte bVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 local_d8 [4];
  int local_d4;
  int local_d0;
  uint local_cc;
  FMeshDrawSingleShaderBindings local_c8;
  longlong local_b8;
  FMeshProcessorShaders local_a8;
  
  pFVar3 = param_1->ShaderContent;
  local_a8.VertexShader.ShaderContent = (FShader *)0x0;
  local_a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.PixelShader.ShaderContent = (FShader *)0x0;
  local_a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.GeometryShader.ShaderContent = (FShader *)0x0;
  local_a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.ComputeShader.ShaderContent = (FShader *)0x0;
  local_a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.WorkGraphShader.ShaderContent = (FShader *)0x0;
  local_a8.WorkGraphShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.RayTracingShader.ShaderContent = (FShader *)0x0;
  local_a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  bVar13 = pFVar3->field_0xd0 & 0xf;
  if (bVar13 == 5) {
    local_a8.ComputeShader.ShaderMap = param_1->ShaderMap;
    local_a8.ComputeShader.ShaderContent = (FShader *)pFVar3;
  }
  else if (bVar13 == 0xb) {
    local_a8.WorkGraphShader.ShaderMap = param_1->ShaderMap;
    local_a8.WorkGraphShader.ShaderContent = (FShader *)pFVar3;
  }
  FMeshDrawShaderBindings::Initialize(param_8,&local_a8);
  if (param_1->ShaderContent != (FRenderVolumetricCloudEmptySpaceSkippingCS *)0x0) {
    uVar15 = 0;
    uVar11 = (longlong)((1 << bVar13 + 1) + -1) & (ulonglong)param_8->ShaderFrequencyBits;
    local_d4 = 0;
    uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
    local_cc = (uint)(byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           );
    lVar10 = (ulonglong)local_cc - 1;
    local_cc = local_cc - 1;
    uVar11 = uVar15;
    local_b8 = lVar10;
    if (0 < lVar10) {
      do {
        iVar16 = 0;
        uVar18 = (uint)uVar15;
        uVar8 = 0;
        if ((int)uVar18 < (param_8->ShaderLayouts).ArrayNum) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar4 = (param_8->ShaderLayouts).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FMeshDrawShaderBindingsLayout>)param_8;
        if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
          FVar12 = FVar4;
        }
        lVar5 = *(longlong *)((longlong)FVar12 + uVar11 * 8);
        iVar1 = *(int *)(lVar5 + 0x28);
        iVar9 = iVar1 + 7;
        if (iVar9 < 0) {
          iVar9 = iVar1 + 0xe;
        }
        uVar15 = *(ulonglong *)(lVar5 + 0x30);
        iVar2 = *(int *)(lVar5 + 0x38);
        local_d0 = (iVar9 >> 3) + (*(int *)(lVar5 + 0x18) + *(int *)(lVar5 + 8) + iVar1) * 8;
        lVar10 = (longlong)uVar15 >> 0x18;
        uVar17 = uVar15;
        if ((uVar15 & 1) != 0) {
          uVar15 = lVar10 + 0x30 + lVar5;
          uVar17 = lVar10 + 0x30 + lVar5;
        }
        while( true ) {
          if (*(int *)(lVar5 + 0x38) != iVar2) {
            local_d8[0] = 0;
            `TCheckedPointerIterator<FShaderLooseParameterBufferInfo_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_d8);
          }
          lVar10 = local_b8;
          if (uVar15 == uVar17 + (longlong)iVar2 * 0x18) break;
          iVar16 = iVar16 + (uint)*(ushort *)(uVar15 + 2);
          uVar15 = uVar15 + 0x18;
        }
        uVar15 = (ulonglong)(uVar18 + 1);
        uVar11 = uVar11 + 1;
        local_d4 = local_d4 + (local_d0 + 7 + iVar16 & 0xfffffff8U);
      } while ((longlong)uVar11 < local_b8);
      if ((local_d4 != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CheckedDataOffset == DataOffset",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                             ,0x3dc,
                             L"GetSingleShaderBindings was not called in the order of ShaderFrequencies"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar8 = local_cc;
    if ((int)local_cc < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                         ,0x3e5,L"Invalid shader binding frequency requested");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x1a,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_c8._padding_ = 0x58;
      local_c8.Data = (uchar *)0x0;
    }
    else {
      uVar14 = ~local_cc;
      uVar18 = 0;
      if ((int)local_cc < (param_8->ShaderLayouts).ArrayNum) {
        uVar18 = uVar14 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar4 = (param_8->ShaderLayouts).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FMeshDrawShaderBindingsLayout>)param_8;
      if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar12 = FVar4;
      }
      FMeshDrawShaderBindingsLayout::GetDataSizeBytes
                ((FMeshDrawShaderBindingsLayout *)((longlong)FVar12 + lVar10 * 8));
      local_c8.Data = (uchar *)&param_8->Data;
      if (0x50 < param_8->Size) {
        local_c8.Data = ((FData *)local_c8.Data)->InlineStorage[0];
      }
      uVar18 = 0;
      if ((int)uVar8 < (param_8->ShaderLayouts).ArrayNum) {
        uVar18 = uVar14 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar4 = (param_8->ShaderLayouts).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FMeshDrawShaderBindingsLayout>)param_8;
      if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar12 = FVar4;
      }
      local_c8._padding_ = *(longlong *)((longlong)FVar12 + lVar10 * 8);
    }
    FMeshMaterialShader::GetShaderBindings
              ((FMeshMaterialShader *)param_1->ShaderContent,param_2,param_3,param_4,param_5,param_6
               ,param_7,&local_c8);
  }
  FMeshDrawShaderBindings::Finalize(param_8,&local_a8);
  return;
}

// SetupComputeBindings<FRenderVolumetricCloudRenderViewCS,FMeshMaterialShaderElementData> @ 145854bd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
UE::MeshPassUtils::
SetupComputeBindings<FRenderVolumetricCloudRenderViewCS,FMeshMaterialShaderElementData>
          (TShaderRefBase<FRenderVolumetricCloudRenderViewCS,FShaderMapPointerTable> *param_1,
          FScene *param_2,Type param_3,FPrimitiveSceneProxy *param_4,FMaterialRenderProxy *param_5,
          FMaterial *param_6,FMeshMaterialShaderElementData *param_7,
          FMeshDrawShaderBindings *param_8)

{
  int iVar1;
  int iVar2;
  FRenderVolumetricCloudRenderViewCS *pFVar3;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar12;
  byte bVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 local_d8 [4];
  int local_d4;
  int local_d0;
  uint local_cc;
  FMeshDrawSingleShaderBindings local_c8;
  longlong local_b8;
  FMeshProcessorShaders local_a8;
  
  pFVar3 = param_1->ShaderContent;
  local_a8.VertexShader.ShaderContent = (FShader *)0x0;
  local_a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.PixelShader.ShaderContent = (FShader *)0x0;
  local_a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.GeometryShader.ShaderContent = (FShader *)0x0;
  local_a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.ComputeShader.ShaderContent = (FShader *)0x0;
  local_a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.WorkGraphShader.ShaderContent = (FShader *)0x0;
  local_a8.WorkGraphShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.RayTracingShader.ShaderContent = (FShader *)0x0;
  local_a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  bVar13 = pFVar3->field_0xd0 & 0xf;
  if (bVar13 == 5) {
    local_a8.ComputeShader.ShaderMap = param_1->ShaderMap;
    local_a8.ComputeShader.ShaderContent = (FShader *)pFVar3;
  }
  else if (bVar13 == 0xb) {
    local_a8.WorkGraphShader.ShaderMap = param_1->ShaderMap;
    local_a8.WorkGraphShader.ShaderContent = (FShader *)pFVar3;
  }
  FMeshDrawShaderBindings::Initialize(param_8,&local_a8);
  if (param_1->ShaderContent != (FRenderVolumetricCloudRenderViewCS *)0x0) {
    uVar15 = 0;
    uVar11 = (longlong)((1 << bVar13 + 1) + -1) & (ulonglong)param_8->ShaderFrequencyBits;
    local_d4 = 0;
    uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
    local_cc = (uint)(byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           );
    lVar10 = (ulonglong)local_cc - 1;
    local_cc = local_cc - 1;
    uVar11 = uVar15;
    local_b8 = lVar10;
    if (0 < lVar10) {
      do {
        iVar16 = 0;
        uVar18 = (uint)uVar15;
        uVar8 = 0;
        if ((int)uVar18 < (param_8->ShaderLayouts).ArrayNum) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar4 = (param_8->ShaderLayouts).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FMeshDrawShaderBindingsLayout>)param_8;
        if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
          FVar12 = FVar4;
        }
        lVar5 = *(longlong *)((longlong)FVar12 + uVar11 * 8);
        iVar1 = *(int *)(lVar5 + 0x28);
        iVar9 = iVar1 + 7;
        if (iVar9 < 0) {
          iVar9 = iVar1 + 0xe;
        }
        uVar15 = *(ulonglong *)(lVar5 + 0x30);
        iVar2 = *(int *)(lVar5 + 0x38);
        local_d0 = (iVar9 >> 3) + (*(int *)(lVar5 + 0x18) + *(int *)(lVar5 + 8) + iVar1) * 8;
        lVar10 = (longlong)uVar15 >> 0x18;
        uVar17 = uVar15;
        if ((uVar15 & 1) != 0) {
          uVar15 = lVar10 + 0x30 + lVar5;
          uVar17 = lVar10 + 0x30 + lVar5;
        }
        while( true ) {
          if (*(int *)(lVar5 + 0x38) != iVar2) {
            local_d8[0] = 0;
            `TCheckedPointerIterator<FShaderLooseParameterBufferInfo_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_d8);
          }
          lVar10 = local_b8;
          if (uVar15 == uVar17 + (longlong)iVar2 * 0x18) break;
          iVar16 = iVar16 + (uint)*(ushort *)(uVar15 + 2);
          uVar15 = uVar15 + 0x18;
        }
        uVar15 = (ulonglong)(uVar18 + 1);
        uVar11 = uVar11 + 1;
        local_d4 = local_d4 + (local_d0 + 7 + iVar16 & 0xfffffff8U);
      } while ((longlong)uVar11 < local_b8);
      if ((local_d4 != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CheckedDataOffset == DataOffset",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                             ,0x3dc,
                             L"GetSingleShaderBindings was not called in the order of ShaderFrequencies"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar8 = local_cc;
    if ((int)local_cc < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                         ,0x3e5,L"Invalid shader binding frequency requested");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x1a,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_c8._padding_ = 0x58;
      local_c8.Data = (uchar *)0x0;
    }
    else {
      uVar14 = ~local_cc;
      uVar18 = 0;
      if ((int)local_cc < (param_8->ShaderLayouts).ArrayNum) {
        uVar18 = uVar14 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar4 = (param_8->ShaderLayouts).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FMeshDrawShaderBindingsLayout>)param_8;
      if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar12 = FVar4;
      }
      FMeshDrawShaderBindingsLayout::GetDataSizeBytes
                ((FMeshDrawShaderBindingsLayout *)((longlong)FVar12 + lVar10 * 8));
      local_c8.Data = (uchar *)&param_8->Data;
      if (0x50 < param_8->Size) {
        local_c8.Data = ((FData *)local_c8.Data)->InlineStorage[0];
      }
      uVar18 = 0;
      if ((int)uVar8 < (param_8->ShaderLayouts).ArrayNum) {
        uVar18 = uVar14 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar4 = (param_8->ShaderLayouts).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FMeshDrawShaderBindingsLayout>)param_8;
      if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar12 = FVar4;
      }
      local_c8._padding_ = *(longlong *)((longlong)FVar12 + lVar10 * 8);
    }
    FMeshMaterialShader::GetShaderBindings
              ((FMeshMaterialShader *)param_1->ShaderContent,param_2,param_3,param_4,param_5,param_6
               ,param_7,&local_c8);
  }
  FMeshDrawShaderBindings::Finalize(param_8,&local_a8);
  return;
}

// DereferenceIfNecessary<FRuntimeVirtualTextureSceneProxy,FRuntimeVirtualTextureSceneProxy_*_&> @ 1458c5480

FRuntimeVirtualTextureSceneProxy * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FRuntimeVirtualTextureSceneProxy,FRuntimeVirtualTextureSceneProxy_*_&>
          (FRuntimeVirtualTextureSceneProxy **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FVirtualTextureSystem,FVirtualTextureSystem_*_&> @ 1458c54a0

FVirtualTextureSystem * __cdecl
UE::Core::Private::DereferenceIfNecessary<FVirtualTextureSystem,FVirtualTextureSystem_*_&>
          (FVirtualTextureSystem **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGViewableResource_*>_> @ 14592fe80

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGViewableResource_*>_>
          (ushort param_1,ForElementType<FRDGViewableResource_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGViewableResource_*>
    ::ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t_const_*>_> @ 14592ff40

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t_const_*>_>
          (ushort param_1,ForElementType<wchar_t_const_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t_const_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 145930010

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 4) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 1459300f0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,ForElementType<unsigned_int> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 4) {
    iVar2 = 3;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

