// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 49

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransientAllocationStats::FAllocation>_> @ 1446cdba0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransientAllocationStats::FAllocation>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FRHITransientAllocationStats::FAllocation> *param_5,int param_6,
          int *param_7)

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
  ForElementType<FRHITransientAllocationStats::FAllocation>::ResizeAllocation(param_5,0,iVar1,uVar3)
  ;
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransientPagePoolAllocation>_> @ 1446cdc40

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransientPagePoolAllocation>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FRHITransientPagePoolAllocation> *param_5,int param_6,int *param_7)

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
    if (param_5->SecondaryData == (ForElementType<FRHITransientPagePoolAllocation>)0x0)
    goto LAB_1446cdcb1;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_5->SecondaryData,0,uVar4,uVar3);
LAB_1446cdcb1:
  *param_7 = uVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_> @ 1446cdcf0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
          (ushort param_1,ForElementType<unsigned_short> *param_2,int *param_3)

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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransientPagePool_*>_> @ 1446cddc0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransientPagePool_*>_>
          (ushort param_1,ForElementType<FRHITransientPagePool_*> *param_2,int *param_3)

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
    ForElementType<FRHITransientPagePool_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransientAllocationStats::FAllocation>_> @ 1446cde90

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransientAllocationStats::FAllocation>_>
          (ushort param_1,ForElementType<FRHITransientAllocationStats::FAllocation> *param_2,
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
    ForElementType<FRHITransientAllocationStats::FAllocation>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientHeap_*>_> @ 1446cdf60

/* WARNING: Removing unreachable block (ram,0x0001446cdfa7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientHeap_*>_>
          (ushort param_1,ForElementType<FRHITransientHeap_*> *param_2,int *param_3)

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
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientHeap_*>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientPagePool_*>_> @ 1446cdff0

/* WARNING: Removing unreachable block (ram,0x0001446ce037) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientPagePool_*>_>
          (ushort param_1,ForElementType<FRHITransientPagePool_*> *param_2,int *param_3)

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
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientPagePool_*>
    ::ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_> @ 1446ce080

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_short> *param_4,int param_5
          ,int *param_6)

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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientHeap_*>_> @ 1446ce100

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientHeap_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRHITransientHeap_*> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientHeap_*>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientPagePool_*>_> @ 1446ce130

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientPagePool_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRHITransientPagePool_*> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientPagePool_*>
    ::ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// operator() @ 1446cfe90

void __thiscall
`UE::RHICore::ResolveRenderPassTargets'::__l2::<lambda_1>::operator()
          (void *this,FResolveTextureInfo *param_1)

{
  FRHITexture *pFVar1;
  FRHITexture *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  FRHITexture *local_38;
  FRHITexture *pFStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  pFVar1 = param_1->SourceTexture;
  if (((pFVar1 != (FRHITexture *)0x0) &&
      (pFVar2 = param_1->DestTexture, pFVar2 != (FRHITexture *)0x0)) && (pFVar1 != pFVar2)) {
    lVar6 = (**(code **)(pFVar1->_padding_ + 0x20))();
    lVar7 = (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2);
    if ((*(char *)(lVar6 + 0x33) != *(char *)(lVar7 + 0x33)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SourceDesc.Format == DestDesc.Format",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICore.cpp"
                           ,0x1a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((*(int *)(lVar6 + 0x24) != *(int *)(lVar7 + 0x24)) ||
        (*(int *)(lVar6 + 0x28) != *(int *)(lVar7 + 0x28))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SourceDesc.Extent == DestDesc.Extent",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICore.cpp"
                           ,0x1b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((*(byte *)(lVar6 + 0x31) < 2) || (1 < *(byte *)(lVar7 + 0x31))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SourceDesc.IsMultisample() && !DestDesc.IsMultisample()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICore.cpp"
                           ,0x1c,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(char *)(lVar6 + 0x33) == '\v') &&
       ((((*(char *)(lVar6 + 0x32) != '\0' && (*(char *)(lVar6 + 0x32) != '\x01')) ||
         ((*(char *)(lVar7 + 0x32) != '\0' && (*(char *)(lVar7 + 0x32) != '\x01')))) &&
        (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("SourceDesc.Format != PF_DepthStencil || (SourceDesc.IsTexture2D() && DestDesc.IsTexture2D())"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICore.cpp"
                            ,0x1d,L""), bVar5)))) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((*(char *)(lVar6 + 0x32) == '\x02') || (*(char *)(lVar7 + 0x32) == '\x02')) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!SourceDesc.IsTexture3D() && !DestDesc.IsTexture3D()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICore.cpp"
                           ,0x1e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_38 = param_1->SourceTexture;
    pFStack_30 = param_1->DestTexture;
    puVar3 = *(undefined8 **)this;
    local_28._0_1_ = param_1->MipLevel;
    local_28._1_3_ = *(undefined3 *)&param_1->field_0x11;
    local_28._4_4_ = param_1->ArraySlice;
    uStack_20._0_4_ = (param_1->ResolveRect).X1;
    uStack_20._4_4_ = (param_1->ResolveRect).Y1;
    local_18._0_4_ = (param_1->ResolveRect).X2;
    local_18._4_4_ = (param_1->ResolveRect).Y2;
    UE::Core::Private::Function::CheckCallable((void *)*puVar3);
    pcVar4 = (code *)*puVar3;
    plVar9 = puVar3 + 2;
    if ((longlong *)puVar3[5] != (longlong *)0x0) {
      plVar9 = (longlong *)puVar3[5];
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    (*pcVar4)(uVar8,&local_38);
  }
  return;
}

// AdjustViewInfoDimensionForNarrowing @ 1446d1520

/* WARNING: Enum "ERHITexturePlane": Some values do not have unique names */
/* WARNING: Enum "EDimension": Some values do not have unique names */

EDimension __cdecl
UE::RHICore::AdjustViewInfoDimensionForNarrowing(FViewInfo *param_1,FRHITextureDesc *param_2)

{
  ETextureDimension EVar1;
  EDimension EVar2;
  undefined1 local_res8 [32];
  
  EVar2 = param_1->Dimension;
  if ((EVar2 == Texture2D) &&
     (((EVar1 = param_2->Dimension, EVar1 == TextureCube || (EVar1 == TextureCubeArray)) ||
      (EVar1 == Texture2DArray)))) {
    if (((param_1->ArrayRange).Num != 1) && (param_2->ArraySize != 1)) {
      `UE::RHICore::AdjustViewInfoDimensionForNarrowing'::__l5::<lambda_1>::operator()(local_res8);
    }
    EVar2 = Texture2DArray;
  }
  return EVar2;
}

// AllowVendorDevice @ 1446d3140

bool __cdecl UE::RHICore::AllowVendorDevice(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pwVar2 = FCommandLine::Get();
      bVar1 = FParse::Param(pwVar2,L"novendordevice");
      bAllowVendorDevice = !bVar1;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return bAllowVendorDevice;
}

// AppendGpuCrashShaderBinaryInfo @ 1446d31c0

/* WARNING: Enum "GFSDK_Aftermath_ShaderType": Some values do not have unique names */

void __cdecl
UE::RHICore::Nvidia::Aftermath::AppendGpuCrashShaderBinaryInfo
          (GFSDK_Aftermath_GpuCrashDump_Decoder__ *param_1,
          GFSDK_Aftermath_GpuCrashDump_ShaderInfo *param_2,FCrashResult *param_3)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  int iVar4;
  longlong lVar5;
  ulonglong local_res20;
  FString local_18;
  
  iVar1 = GFSDK_Aftermath_GetShaderHashForShaderInfo(param_1,param_2,&local_res20);
  if (iVar1 == 1) {
    ::FString::PrintfImpl(&local_18,L"\n\t\t\tAftermath Binary Hash = %llu");
    iVar1 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    ::FString::AppendChars
              (&param_3->OutputLog,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (ShaderRegistration.ShaderBinaryToDebugHash._8_4_ !=
        ShaderRegistration.ShaderBinaryToDebugHash._52_4_) {
      lVar5 = 0x155082340;
      if (ShaderRegistration.ShaderBinaryToDebugHash._64_8_ != 0) {
        lVar5 = ShaderRegistration.ShaderBinaryToDebugHash._64_8_;
      }
      iVar1 = *(int *)(lVar5 + ((local_res20 >> 0x20) * 0x17 + local_res20 &
                               (ulonglong)(ShaderRegistration.ShaderBinaryToDebugHash._72_4_ - 1)) *
                               4);
      while (iVar1 != -1) {
        puVar2 = (ulonglong *)
                 ((longlong)iVar1 * 0x50 + ShaderRegistration.ShaderBinaryToDebugHash._0_8_);
        if (*puVar2 == local_res20) {
          puVar3 = puVar2 + 1;
          if (puVar2 == (ulonglong *)0x0) {
            puVar3 = (ulonglong *)0x0;
          }
          if (puVar3 != (ulonglong *)0x0) {
            iVar1 = 0;
            if (1 < (int)puVar3[1]) {
              ::FString::PrintfImpl(&local_18,L"\n\t\t\tDebugName = \'%s\'");
              iVar4 = local_18.Data.ArrayNum + -1;
              if (local_18.Data.ArrayNum == 0) {
                iVar4 = iVar1;
              }
              ::FString::AppendChars
                        (&param_3->OutputLog,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
              if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_18.Data.AllocatorInstance.Data);
              }
            }
            if (1 < (int)puVar3[3]) {
              ::FString::PrintfImpl(&local_18,L"\n\t\t\tFunction = %s");
              iVar4 = local_18.Data.ArrayNum + -1;
              if (local_18.Data.ArrayNum == 0) {
                iVar4 = iVar1;
              }
              ::FString::AppendChars
                        (&param_3->OutputLog,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
              if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_18.Data.AllocatorInstance.Data);
              }
            }
            if (1 < (int)puVar3[5]) {
              ::FString::PrintfImpl(&local_18,L"\n\t\t\tShader PDB = %s");
              iVar4 = local_18.Data.ArrayNum + -1;
              if (local_18.Data.ArrayNum == 0) {
                iVar4 = iVar1;
              }
              ::FString::AppendChars
                        (&param_3->OutputLog,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
              if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_18.Data.AllocatorInstance.Data);
              }
            }
            if ((int)puVar3[7] < 2) {
              return;
            }
            ::FString::PrintfImpl(&local_18,L"\n\t\t\tShader Hash = %s");
            iVar4 = local_18.Data.ArrayNum + -1;
            if (local_18.Data.ArrayNum == 0) {
              iVar4 = iVar1;
            }
            ::FString::AppendChars
                      (&param_3->OutputLog,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
            if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return;
            }
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
            return;
          }
          break;
        }
        iVar1 = (int)puVar2[9];
      }
    }
    ::FString::AppendChars(&param_3->OutputLog,L"\n\t\t\t! Failed to associate Aftermath hash",0x28)
    ;
  }
  else {
    ::FString::PrintfImpl(&local_18,L"\n\t\t\t! Failed to get binary hash (%u)");
    iVar1 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    ::FString::AppendChars
              (&param_3->OutputLog,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// AppendGpuCrashShaderInfo @ 1446d3450

/* WARNING: Enum "GFSDK_Aftermath_ShaderType": Some values do not have unique names */

void __cdecl
UE::RHICore::Nvidia::Aftermath::AppendGpuCrashShaderInfo
          (GFSDK_Aftermath_GpuCrashDump_Decoder__ *param_1,FCrashResult *param_2)

{
  GFSDK_Aftermath_GpuCrashDump_ShaderInfo *pGVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint local_res18 [4];
  ForAnyElementType local_98;
  int local_90 [2];
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  uVar7 = 0;
  local_res18[0] = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&ShaderRegistration);
  iVar4 = GFSDK_Aftermath_GpuCrashDump_GetActiveShadersInfoCount(param_1,local_res18);
  iVar8 = 0;
  if (iVar4 == 1) {
    uVar6 = (ulonglong)local_res18[0];
    if (local_res18[0] == 0) {
      ::FString::AppendChars(&param_2->OutputLog,L"\n\t\tNo Shaders.",0xe);
      goto LAB_1446d37fc;
    }
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90[0] = 0;
    local_90[1] = 0;
    if ((int)local_res18[0] < 1) {
      if ((int)local_res18[0] < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar6);
      }
    }
    else {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_res18[0],&local_98,local_90,local_90 + 1);
      uVar6 = (ulonglong)local_res18[0];
    }
    iVar4 = GFSDK_Aftermath_GpuCrashDump_GetActiveShadersInfo(param_1,uVar6,local_98.Data);
    if (iVar4 == 1) {
      ::FString::PrintfImpl(&local_68,L"\n\t\t%u total.");
      iVar4 = local_68.Data.ArrayNum + -1;
      if (local_68.Data.ArrayNum == 0) {
        iVar4 = iVar8;
      }
      ::FString::AppendChars
                (&param_2->OutputLog,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar4);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_88.Data.AllocatorInstance.Data = local_98.Data;
      if (local_res18[0] != 0) {
        do {
          ::FString::PrintfImpl(&local_58,L"\n\t\t[%u]:");
          iVar4 = local_58.Data.ArrayNum + -1;
          if (local_58.Data.ArrayNum == 0) {
            iVar4 = iVar8;
          }
          ::FString::AppendChars
                    (&param_2->OutputLog,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar4);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          uVar5 = 0;
          if ((int)uVar7 < local_90[0]) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pGVar1 = (GFSDK_Aftermath_GpuCrashDump_ShaderInfo *)
                   (local_98.Data + (longlong)(int)uVar7 * 0x18);
          if (local_98.Data[(longlong)(int)uVar7 * 0x18 + 0x10] != (FScriptContainerElement)0x0) {
            ::FString::AppendChars(&param_2->OutputLog,L"\n\t\t\t! Internal",0xe);
          }
          switch(pGVar1->shaderType) {
          default:
            break;
          case GFSDK_Aftermath_ShaderType_Vertex:
            break;
          case GFSDK_Aftermath_ShaderType_Hull:
            break;
          case GFSDK_Aftermath_ShaderType_Domain:
            break;
          case GFSDK_Aftermath_ShaderType_Geometry:
            break;
          case GFSDK_Aftermath_ShaderType_Fragment:
            break;
          case GFSDK_Aftermath_ShaderType_Compute:
            break;
          case GFSDK_Aftermath_ShaderType_RayTracing_RayGeneration:
            break;
          case GFSDK_Aftermath_ShaderType_RayTracing_Miss:
            break;
          case GFSDK_Aftermath_ShaderType_RayTracing_Intersection:
            break;
          case GFSDK_Aftermath_ShaderType_RayTracing_AnyHit:
            break;
          case GFSDK_Aftermath_ShaderType_RayTracing_ClosestHit:
            break;
          case GFSDK_Aftermath_ShaderType_RayTracing_Callable:
            break;
          case GFSDK_Aftermath_ShaderType_RayTracing_Internal:
            break;
          case GFSDK_Aftermath_ShaderType_Mesh:
            break;
          case GFSDK_Aftermath_ShaderType_Task:
          }
          ::FString::PrintfImpl(&local_48,L"\n\t\t\tType = %s");
          iVar4 = local_48.Data.ArrayNum + -1;
          if (local_48.Data.ArrayNum == 0) {
            iVar4 = iVar8;
          }
          ::FString::AppendChars
                    (&param_2->OutputLog,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_38,L"\n\t\t\tAftermath Hash = %llu");
          iVar4 = local_38.Data.ArrayNum + -1;
          if (local_38.Data.ArrayNum == 0) {
            iVar4 = iVar8;
          }
          ::FString::AppendChars
                    (&param_2->OutputLog,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          AppendGpuCrashShaderBinaryInfo(param_1,pGVar1,param_2);
          uVar7 = uVar7 + 1;
          local_88.Data.AllocatorInstance.Data = local_98.Data;
        } while (uVar7 < local_res18[0]);
      }
    }
    else {
      ::FString::PrintfImpl(&local_78,L"\n\t\tFailed to get shaders (%u).");
      iVar4 = local_78.Data.ArrayNum + -1;
      if (local_78.Data.ArrayNum == 0) {
        iVar4 = iVar8;
      }
      ::FString::AppendChars
                (&param_2->OutputLog,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar4);
      local_88.Data.AllocatorInstance.Data = local_98.Data;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
        local_88.Data.AllocatorInstance.Data = local_98.Data;
      }
    }
  }
  else {
    ::FString::PrintfImpl(&local_88,L"\n\t\tFailed to get shader count (%u).");
    iVar4 = local_88.Data.ArrayNum + -1;
    if (local_88.Data.ArrayNum == 0) {
      iVar4 = iVar8;
    }
    ::FString::AppendChars
              (&param_2->OutputLog,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar4);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
LAB_1446d37fc:
  LeaveCriticalSection((LPCRITICAL_SECTION)&ShaderRegistration);
  return;
}

// AreMarkersEnabled @ 1446d3870

bool __cdecl UE::RHICore::Nvidia::Aftermath::AreMarkersEnabled(void)

{
  if ((bEnabled) && (((byte)Flags & 1) != 0)) {
    return true;
  }
  return false;
}

// Callback_GpuCrashDump @ 1446d3890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::RHICore::Nvidia::Aftermath::Callback_GpuCrashDump(void *param_1,uint param_2,void *param_3)

{
  FRHIBreadcrumbNode *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  FDateTime this;
  longlong *plVar8;
  FString *pFVar9;
  IFileManager *pIVar10;
  undefined8 uVar11;
  size_t sVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  undefined1 auStackY_5a8 [32];
  undefined1 local_518 [8];
  FString local_510;
  FCrashResult local_500;
  GFSDK_Aftermath_GpuCrashDump_Decoder__ *local_4d0;
  FString local_4c8;
  FString local_4b8;
  int local_4a8;
  FString local_4a0;
  FString local_490;
  ForAnyElementType local_480;
  undefined8 local_478;
  ForAnyElementType local_470;
  int local_468;
  int local_464;
  FString local_460;
  ForAnyElementType local_450;
  undefined8 local_448;
  int local_440 [2];
  undefined4 local_438 [2];
  undefined4 local_430 [2];
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  TStringView<wchar_t> local_2e8;
  FScriptContainerElement *local_2d8;
  int local_2d0;
  FString local_2c0;
  FString local_2b0;
  ulonglong local_2a0;
  undefined4 local_298;
  ulong64 local_290;
  int local_288;
  int local_284;
  undefined4 local_280;
  undefined4 local_27c;
  uint local_278;
  FScriptContainerElement local_268 [256];
  ForAnyElementType local_168;
  FScriptContainerElement *local_160;
  int local_158;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  uVar18 = 0;
  local_500.OutputLog.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_500.OutputLog.Data.ArrayNum = 0;
  local_500.OutputLog.Data.ArrayMax = 0;
  local_500.DumpPath.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_500.GPUFaultAddress.bIsSet = false;
  this = FDateTime::Now();
  FDateTime::ToString((FDateTime *)this.Ticks,&local_2b0);
  LOCK();
  CrashIntermediates.Counter = (atomic<unsigned_int>)((int)CrashIntermediates.Counter + 1);
  UNLOCK();
  plVar8 = (longlong *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
  (**(code **)(*plVar8 + 0x20))(plVar8);
  ::FString::PrintfImpl(&local_3c8,L"%s.%u.%s.nv-gpudmp");
  pFVar9 = FPaths::ProjectLogDir(&local_2c0);
  local_2e8.DataPtr = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  iVar7 = (pFVar9->Data).ArrayNum;
  local_2e8.Size = iVar7 + -1;
  if (iVar7 == 0) {
    local_2e8.Size = 0;
  }
  local_2d8 = local_3c8.Data.AllocatorInstance.Data;
  iVar7 = 0;
  local_2d0 = local_3c8.Data.ArrayNum + -1;
  if (local_3c8.Data.ArrayNum == 0) {
    local_2d0 = iVar7;
  }
  FPaths::CombineInternal(&local_460,&local_2e8,2);
  if (local_500.DumpPath.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_500.DumpPath.field0_0x0.TypedValue.Data.AllocatorInstance.Data);
  }
  local_500.DumpPath.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(ForAnyElementType)local_460.Data.AllocatorInstance.Data;
  iVar5 = local_460.Data.ArrayMax;
  local_460.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_500.DumpPath.field0_0x0.TypedValue.Data.ArrayNum = local_460.Data.ArrayNum;
  local_500.DumpPath.field0_0x0.TypedValue.Data.ArrayMax = local_460.Data.ArrayMax;
  local_460.Data.ArrayNum = 0;
  local_460.Data.ArrayMax = 0;
  if ((iVar5 == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_460.Data.AllocatorInstance.Data);
  }
  if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
  }
  if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
  }
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  if ((local_500.DumpPath.field0_0x0.TypedValue.Data.ArrayMax == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FGenericCrashContext::AddFile((FString *)&local_500.DumpPath);
  if ((local_500.DumpPath.field0_0x0.TypedValue.Data.ArrayMax == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::PrintfImpl(&local_3b8,L"\n\nWriting Aftermath dump to: %s");
  iVar5 = local_3b8.Data.ArrayNum + -1;
  if (local_3b8.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars
            (&local_500.OutputLog,(wchar_t *)local_3b8.Data.AllocatorInstance.Data,iVar5);
  if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
  }
  pIVar10 = IFileManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar10 + 0x20);
  if ((local_500.DumpPath.field0_0x0.TypedValue.Data.ArrayMax == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar16 = L"";
  if (local_500.DumpPath.field0_0x0.TypedValue.Data.ArrayNum != 0) {
    uVar16 = local_500.DumpPath.field0_0x0.TypedValue.Data.AllocatorInstance.Data;
  }
  plVar8 = (longlong *)(*pcVar2)(pIVar10,uVar16,0);
  if (plVar8 == (longlong *)0x0) {
    if ((local_500.DumpPath.field0_0x0.TypedValue.Data.ArrayMax == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ::FString::PrintfImpl(&local_3a8,L"\n\tFailed to create dump file: %s");
    iVar5 = local_3a8.Data.ArrayNum + -1;
    if (local_3a8.Data.ArrayNum == 0) {
      iVar5 = iVar7;
    }
    ::FString::AppendChars
              (&local_500.OutputLog,(wchar_t *)local_3a8.Data.AllocatorInstance.Data,iVar5);
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
    }
    if (local_500.DumpPath.field0_0x0.TypedValue.Data.ArrayMax != -1) {
      if (local_500.DumpPath.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_500.DumpPath.field0_0x0.TypedValue.Data.AllocatorInstance.Data);
      }
      local_500.DumpPath.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(FScriptContainerElement *)0x0;
      local_500.DumpPath.field0_0x0.TypedValue.Data.ArrayNum = 0;
      local_500.DumpPath.field0_0x0.TypedValue.Data.ArrayMax = -1;
    }
  }
  else {
    (**(code **)(*plVar8 + 0x188))(plVar8,param_1,param_2);
    (**(code **)(*plVar8 + 0x210))(plVar8);
    ::FString::AppendChars
              (&local_500.OutputLog,L"\n\tSucceeded in writing Aftermath dump file.",0x2b);
  }
  ::FString::AppendChars(&local_500.OutputLog,L"\n\nDecoding Aftermath GPU Crash:",0x1f);
  iVar5 = GFSDK_Aftermath_GpuCrashDump_CreateDecoder(0x217,param_1,param_2,&local_4d0);
  if (iVar5 != 1) {
    ::FString::PrintfImpl
              (&local_398,
               L"\n\n\tFailed to create a GPU crash dump decoder object: 0x%08x. No further GPU crash dump information available."
              );
    uVar19 = local_398.Data.ArrayNum - 1;
    if (local_398.Data.ArrayNum == 0) {
      uVar19 = uVar18;
    }
    ::FString::AppendChars
              (&local_500.OutputLog,(wchar_t *)local_398.Data.AllocatorInstance.Data,uVar19);
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
    goto LAB_1446d4db7;
  }
  ::FString::AppendChars(&local_500.OutputLog,L"\n\n\tDevice Info:",0xf);
  local_2a0 = 0;
  local_298 = 0;
  iVar5 = GFSDK_Aftermath_GpuCrashDump_GetDeviceInfo(local_4d0,&local_2a0);
  if (iVar5 == 1) {
    local_4c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4c8.Data.ArrayNum = 0;
    local_4c8.Data.ArrayMax = 0;
    switch(local_2a0 & 0xffffffff) {
    case 0:
      ::FString::operator=(&local_4c8,L"Active");
      break;
    case 1:
      ::FString::operator=(&local_4c8,L"Timeout");
      break;
    case 2:
      ::FString::operator=(&local_4c8,L"OutOfMemory");
      break;
    case 3:
      ::FString::operator=(&local_4c8,L"PageFault");
      break;
    case 4:
      ::FString::operator=(&local_4c8,L"Stopped");
      break;
    case 5:
      ::FString::operator=(&local_4c8,L"Reset");
      break;
    case 6:
      ::FString::operator=(&local_4c8,L"Unknown");
      break;
    case 7:
      ::FString::operator=(&local_4c8,L"DmaFault");
      break;
    default:
      ::FString::PrintfImpl(&local_408,L"Unknown (0x%08x)");
      if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
      }
      local_4c8.Data.AllocatorInstance.Data = local_408.Data.AllocatorInstance.Data;
      local_4c8.Data.ArrayNum = local_408.Data.ArrayNum;
      local_4c8.Data.ArrayMax = local_408.Data.ArrayMax;
      local_408.Data.ArrayNum = 0;
      local_408.Data.ArrayMax = 0;
      local_408.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    ::FString::PrintfImpl
              (&local_378,L"\n\t\tStatus       : %s\n\t\tAdapter Reset: %s\n\t\tEngine Reset : %s");
    iVar5 = local_378.Data.ArrayNum + -1;
    if (local_378.Data.ArrayNum == 0) {
      iVar5 = iVar7;
    }
    ::FString::AppendChars
              (&local_500.OutputLog,(wchar_t *)local_378.Data.AllocatorInstance.Data,iVar5);
    local_388.Data.AllocatorInstance.Data = local_4c8.Data.AllocatorInstance.Data;
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
      local_388.Data.AllocatorInstance.Data = local_4c8.Data.AllocatorInstance.Data;
    }
  }
  else {
    ::FString::PrintfImpl(&local_388,L"\n\t\tFailed to retrieve device info: 0x%08x");
    iVar5 = local_388.Data.ArrayNum + -1;
    if (local_388.Data.ArrayNum == 0) {
      iVar5 = iVar7;
    }
    ::FString::AppendChars
              (&local_500.OutputLog,(wchar_t *)local_388.Data.AllocatorInstance.Data,iVar5);
  }
  if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_388.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChars(&local_500.OutputLog,L"\n\n\t Page Fault Info:",0x14);
  iVar5 = GFSDK_Aftermath_GpuCrashDump_GetPageFaultInfo(local_4d0,&local_290);
  uVar19 = 0;
  if (iVar5 == 2) {
    ::FString::AppendChars(&local_500.OutputLog,L"\n\t\tNo information on faulting address.",0x26);
  }
  else {
    if (iVar5 == 1) {
      local_490.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_490.Data.ArrayNum = 0;
      local_490.Data.ArrayMax = 0;
      if (local_288 == 1) {
        pwVar13 = L"AddressTranslationError";
LAB_1446d3fdc:
        ::FString::operator=(&local_490,pwVar13);
      }
      else {
        if (local_288 == 2) {
          pwVar13 = L"IllegalAccessError";
          goto LAB_1446d3fdc;
        }
        ::FString::PrintfImpl(&local_3f8,L"Unknown (0x%08x)");
        if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_490.Data.AllocatorInstance.Data);
        }
        local_490.Data.AllocatorInstance.Data = local_3f8.Data.AllocatorInstance.Data;
        local_490.Data.ArrayNum = local_3f8.Data.ArrayNum;
        local_490.Data.ArrayMax = local_3f8.Data.ArrayMax;
        local_3f8.Data.ArrayNum = 0;
        local_3f8.Data.ArrayMax = 0;
        local_3f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      local_4a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4a0.Data.ArrayNum = 0;
      local_4a0.Data.ArrayMax = 0;
      if (local_284 == 0) {
        pwVar13 = L"Unknown";
LAB_1446d407b:
        ::FString::operator=(&local_4a0,pwVar13);
      }
      else {
        if (local_284 == 1) {
          pwVar13 = L"Read";
          goto LAB_1446d407b;
        }
        if (local_284 == 2) {
          pwVar13 = L"Write";
          goto LAB_1446d407b;
        }
        if (local_284 == 3) {
          pwVar13 = L"Atomic";
          goto LAB_1446d407b;
        }
        ::FString::PrintfImpl(&local_3e8,L"Unknown (0x%08x)");
        if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
        }
        local_4a0.Data.AllocatorInstance.Data = local_3e8.Data.AllocatorInstance.Data;
        local_4a0.Data.ArrayNum = local_3e8.Data.ArrayNum;
        local_4a0.Data.ArrayMax = local_3e8.Data.ArrayMax;
        local_3e8.Data.ArrayNum = 0;
        local_3e8.Data.ArrayMax = 0;
        local_3e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      local_4b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4b8.Data.ArrayNum = 0;
      local_4b8.Data.ArrayMax = 0;
      switch(local_280) {
      case 0:
        ::FString::operator=(&local_4b8,L"Unknown");
        break;
      case 1:
        ::FString::operator=(&local_4b8,L"Graphics");
        break;
      case 2:
        ::FString::operator=(&local_4b8,L"GraphicsCompute");
        break;
      case 3:
        ::FString::operator=(&local_4b8,L"Display");
        break;
      case 4:
        ::FString::operator=(&local_4b8,L"CopyEngine");
        break;
      case 5:
        ::FString::operator=(&local_4b8,L"VideoDecoder");
        break;
      case 6:
        ::FString::operator=(&local_4b8,L"VideoEncoder");
        break;
      case 7:
        ::FString::operator=(&local_4b8,L"Other");
        break;
      default:
        ::FString::PrintfImpl(&local_3d8,L"Unknown (0x%08x)");
        if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
        }
        local_4b8.Data.AllocatorInstance.Data = local_3d8.Data.AllocatorInstance.Data;
        local_4b8.Data.ArrayNum = local_3d8.Data.ArrayNum;
        local_4b8.Data.ArrayMax = local_3d8.Data.ArrayMax;
        local_3d8.Data.ArrayNum = 0;
        local_3d8.Data.ArrayMax = 0;
        local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      local_510.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_510.Data.ArrayNum = 0;
      local_510.Data.ArrayMax = 0;
      switch(local_27c) {
      case 0:
        ::FString::operator=(&local_510,L"Unknown");
        break;
      case 1:
        ::FString::operator=(&local_510,L"HostInterface");
        break;
      case 2:
        ::FString::operator=(&local_510,L"FrontEnd");
        break;
      case 3:
        ::FString::operator=(&local_510,L"PrimitiveDistributor");
        break;
      case 4:
        ::FString::operator=(&local_510,L"GraphicsProcessingCluster");
        break;
      case 5:
        ::FString::operator=(&local_510,L"PolymorphEngine");
        break;
      case 6:
        ::FString::operator=(&local_510,L"RasterEngine");
        break;
      case 7:
        ::FString::operator=(&local_510,L"Rasterizer2D");
        break;
      case 8:
        ::FString::operator=(&local_510,L"RenderOutputUnit");
        break;
      case 9:
        ::FString::operator=(&local_510,L"TextureProcessingCluster");
        break;
      case 10:
        ::FString::operator=(&local_510,L"CopyEngine");
        break;
      case 0xb:
        ::FString::operator=(&local_510,L"VideoDecoder");
        break;
      case 0xc:
        ::FString::operator=(&local_510,L"VideoEncoder");
        break;
      case 0xd:
        ::FString::operator=(&local_510,L"Other");
        break;
      default:
        ::FString::PrintfImpl(&local_418,L"Unknown (0x%08x)");
        if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_510.Data.AllocatorInstance.Data);
        }
        local_510.Data.AllocatorInstance.Data = local_418.Data.AllocatorInstance.Data;
        local_510.Data.ArrayNum = local_418.Data.ArrayNum;
        local_510.Data.ArrayMax = local_418.Data.ArrayMax;
        local_418.Data.ArrayNum = 0;
        local_418.Data.ArrayMax = 0;
        local_418.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      ::FString::PrintfImpl
                (&local_358,
                 L"\n\t\tGPU VA  : 0x%016llx\n\t\tType    : %s\n\t\tAccess  : %s\n\t\tEngine  : %s\n\t\tClient  : %s"
                );
      iVar5 = local_358.Data.ArrayNum + -1;
      if (local_358.Data.ArrayNum == 0) {
        iVar5 = iVar7;
      }
      ::FString::AppendChars
                (&local_500.OutputLog,(wchar_t *)local_358.Data.AllocatorInstance.Data,iVar5);
      if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_358.Data.AllocatorInstance.Data);
      }
      if (local_278 == 0) {
        ::FString::AppendChars(&local_500.OutputLog,L"\n\tResource: <no info>",0x15);
      }
      else {
        local_470.Data = (FScriptContainerElement *)0x0;
        local_468 = 0;
        local_464 = 0;
        if ((int)local_278 < 1) {
          if ((int)local_278 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)local_278);
          }
LAB_1446d4400:
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else {
          Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (200,8,local_278,&local_470,&local_468,&local_464);
          if (local_468 < 1) goto LAB_1446d4400;
        }
        GFSDK_Aftermath_GpuCrashDump_GetPageFaultResourceInfo(local_4d0,local_278,local_470.Data);
        if (local_278 != 0) {
          do {
            uVar6 = uVar19;
            if ((int)uVar18 < local_468) {
              uVar6 = ~uVar18 >> 0x1f;
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
            ::FString::PrintfImpl
                      (&local_348,
                       L"\n\t\tResource %d/%d:\n\t\t\tName                : \'%hs\'\n\t\t\tGPU VA              : 0x%016llx\n\t\t\tSize                : 0x%016llx\n\t\t\tWidth               : %d\n\t\t\tHeight              : %d\n\t\t\tDepth               : %d\n\t\t\tMipLevels           : %d\n\t\t\tFormat              : %d\n\t\t\tIs Buffer           : %s\n\t\t\tIs Texture Heap     : %s\n\t\t\tIs RTV/DSV Heap     : %s\n\t\t\tPlaced Resource     : %s\n\t\t\tWas Destroyed       : %s\n\t\t\tCreate/Destroy Count: %d"
                      );
            uVar6 = local_348.Data.ArrayNum - 1;
            if (local_348.Data.ArrayNum == 0) {
              uVar6 = uVar19;
            }
            ::FString::AppendChars
                      (&local_500.OutputLog,(wchar_t *)local_348.Data.AllocatorInstance.Data,uVar6);
            if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_348.Data.AllocatorInstance.Data);
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < local_278);
        }
        if (local_470.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_470.Data);
        }
      }
      if (local_290 != 0) {
        local_500.GPUFaultAddress.TypedValue = local_290;
        local_500.GPUFaultAddress.bIsSet = true;
      }
      if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_510.Data.AllocatorInstance.Data);
      }
      if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
      }
      local_368.Data.AllocatorInstance.Data = local_490.Data.AllocatorInstance.Data;
      if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
        local_368.Data.AllocatorInstance.Data = local_490.Data.AllocatorInstance.Data;
      }
    }
    else {
      ::FString::PrintfImpl(&local_368,L"\n\t\tFailed to retrieve page fault info (Result: 0x%08x)")
      ;
      iVar5 = local_368.Data.ArrayNum + -1;
      if (local_368.Data.ArrayNum == 0) {
        iVar5 = iVar7;
      }
      ::FString::AppendChars
                (&local_500.OutputLog,(wchar_t *)local_368.Data.AllocatorInstance.Data,iVar5);
    }
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
  }
  ::FString::AppendChars(&local_500.OutputLog,L"\n\n\tMarker Data:",0xf);
  iVar7 = GFSDK_Aftermath_GpuCrashDump_GetEventMarkersInfoCount(local_4d0,local_440);
  if ((iVar7 == 1) && (local_440[0] != 0)) {
    local_480.Data = (FScriptContainerElement *)0x0;
    local_478 = 0;
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,local_440[0],&local_480,(int *)&local_478,(int *)((longlong)&local_478 + 4));
    iVar7 = GFSDK_Aftermath_GpuCrashDump_GetEventMarkersInfo
                      (local_4d0,local_478 & 0xffffffff,local_480.Data);
    if (iVar7 == 1) {
      iVar7 = (int)local_478;
      uVar15 = (ulonglong)(int)local_478;
      pFVar20 = local_480.Data + uVar15 * 0x20;
      pFVar17 = local_480.Data + 0xc;
      while( true ) {
        if ((int)uVar15 != iVar7) {
          local_518[0] = 0;
          `TCheckedPointerIterator<GFSDK_Aftermath_GpuCrashDump_EventMarkerInfo,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_518);
        }
        if (pFVar17 + -0xc == pFVar20) break;
        local_428.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_428.Data.ArrayNum = 0;
        local_428.Data.ArrayMax = 0;
        if (*(int *)(pFVar17 + 0xc) == 0) {
          pFVar1 = *(FRHIBreadcrumbNode **)(pFVar17 + 4);
          if (pFVar1 == FRHIBreadcrumbNode::Sentinel) {
            pwVar13 = L"<root>";
          }
          else {
            pwVar13 = (wchar_t *)(**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,local_148);
          }
LAB_1446d483d:
          ::FString::operator=(&local_428,pwVar13);
        }
        else if (*(int *)(pFVar17 + 0xc) == 1) {
          pwVar13 = *(wchar_t **)(pFVar17 + 4);
          goto LAB_1446d483d;
        }
        ::FString::PrintfImpl(&local_328,L"\n\t\t[0x%016llx, %s]: [%s] %s");
        iVar5 = local_328.Data.ArrayNum + -1;
        if (local_328.Data.ArrayNum == 0) {
          iVar5 = 0;
        }
        ::FString::AppendChars
                  (&local_500.OutputLog,(wchar_t *)local_328.Data.AllocatorInstance.Data,iVar5);
        if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
        if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_428.Data.AllocatorInstance.Data);
        }
        uVar15 = local_478 & 0xffffffff;
        pFVar17 = pFVar17 + 0x20;
      }
    }
    else {
      ::FString::PrintfImpl(&local_338,L"\n\t\tFailed to retrieve marker info array (0x%08x).");
      uVar18 = local_338.Data.ArrayNum - 1;
      if (local_338.Data.ArrayNum == 0) {
        uVar18 = uVar19;
      }
      ::FString::AppendChars
                (&local_500.OutputLog,(wchar_t *)local_338.Data.AllocatorInstance.Data,uVar18);
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
      }
    }
    if (local_480.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_480.Data);
    }
  }
  else {
    ::FString::AppendChars(&local_500.OutputLog,L"\n\t\tNo marker info.",0x12);
  }
  ::FString::AppendChars(&local_500.OutputLog,L"\n\n\tActive Shaders:",0x12);
  if (GLateShaderAssociateFunc._0_8_ != 0) {
    local_438[0] = (**(code **)(*(longlong *)
                                 CVarAftermath_LateShaderAssociationsFrameLimit._padding_ + 200))();
    local_430[0] = (**(code **)(*(longlong *)CVarAftermath_LateShaderAssociationsTimeLimit._padding_
                               + 0xd0))();
    Core::Private::Function::CheckCallable((void *)GLateShaderAssociateFunc._0_8_);
    uVar16 = GLateShaderAssociateFunc._0_8_;
    plVar8 = (longlong *)&GLateShaderAssociateFunc.field_0x10;
    if (GLateShaderAssociateFunc._40_8_ != 0) {
      plVar8 = (longlong *)GLateShaderAssociateFunc._40_8_;
    }
    uVar11 = (**(code **)(*plVar8 + 8))();
    (*(code *)uVar16)(uVar11,local_430,local_438);
  }
  AppendGpuCrashShaderInfo(local_4d0,&local_500);
  ::FString::AppendChars(&local_500.OutputLog,L"\n\n\tJSON Data:",0xd);
  local_4a8 = 0;
  iVar7 = GFSDK_Aftermath_GpuCrashDump_GenerateJSON
                    (local_4d0,0x3fff,2,Callback_ShaderDebugInfoLookup);
  bVar4 = 1 < (int)CrashIntermediates.ShaderDebugLookup._72_4_;
  if (!bVar4) {
    TSet<TTuple<unsigned___int64,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&CrashIntermediates.ShaderDebugLookup);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&CrashIntermediates.ShaderDebugLookup,0,
                    CrashIntermediates.ShaderDebugLookup._8_4_);
  CrashIntermediates.ShaderDebugLookup._8_4_ = 0;
  if (CrashIntermediates.ShaderDebugLookup._12_4_ != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&CrashIntermediates.ShaderDebugLookup,0,
               (int *)&CrashIntermediates.ShaderDebugLookup.field_0xc);
  }
  CrashIntermediates.ShaderDebugLookup._48_4_ = 0xffffffff;
  CrashIntermediates.ShaderDebugLookup._52_4_ = 0;
  CrashIntermediates.ShaderDebugLookup._40_4_ = 0;
  if (0x80 < (uint)CrashIntermediates.ShaderDebugLookup._44_4_) {
    CrashIntermediates.ShaderDebugLookup._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &CrashIntermediates.ShaderDebugLookup.field_0x10,0);
  }
  if (bVar4) {
    CrashIntermediates.ShaderDebugLookup._72_4_ = 1;
    TSet<TTuple<unsigned___int64,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned___int64,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&CrashIntermediates.ShaderDebugLookup);
  }
  if (iVar7 == 1) {
    local_450.Data = (FScriptContainerElement *)0x0;
    local_448 = 0;
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_4a8,&local_450,(int *)&local_448,(int *)((longlong)&local_448 + 4));
    iVar7 = GFSDK_Aftermath_GpuCrashDump_GetJSON(local_4d0,local_4a8,local_450.Data);
    FVar3.Data = local_450.Data;
    if (iVar7 == 1) {
      local_168.Data = (FScriptContainerElement *)0x0;
      if (local_450.Data == (FScriptContainerElement *)0x0) {
        local_160 = (FScriptContainerElement *)0x0;
        local_158 = 0;
      }
      else {
        sVar12 = strlen((char *)local_450.Data);
        local_158 = Core::Private::GetConvertedLength
                              ((wchar_t *)0x0,(uchar *)FVar3.Data,(int)sVar12);
        uVar18 = local_158 + 1;
        uVar19 = uVar18;
        if (uVar18 < 0x81) {
          if (local_168.Data != (FScriptContainerElement *)0x0) {
            uVar19 = 0;
            goto LAB_1446d4bcb;
          }
        }
        else {
LAB_1446d4bcb:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_168,0,uVar19,2);
        }
        local_160 = local_268;
        if (local_168.Data != (FScriptContainerElement *)0x0) {
          local_160 = local_168.Data;
        }
        pwVar13 = Core::Private::Convert
                            ((wchar_t *)local_160,uVar18,(uchar *)FVar3.Data,(int)sVar12 + 1);
        if ((pwVar13 == (wchar_t *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      ::FString::PrintfImpl(&local_2f8,L"\n\n%s\n\n");
      iVar7 = local_2f8.Data.ArrayNum + -1;
      if (local_2f8.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      ::FString::AppendChars
                (&local_500.OutputLog,(wchar_t *)local_2f8.Data.AllocatorInstance.Data,iVar7);
      local_308.Data.AllocatorInstance.Data = local_168.Data;
      if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
        local_308.Data.AllocatorInstance.Data = local_168.Data;
      }
    }
    else {
      ::FString::PrintfImpl
                (&local_308,L"\n\t\tFailed to get JSON string from GPU crash decoder: 0x%08x");
      iVar7 = local_308.Data.ArrayNum + -1;
      if (local_308.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      ::FString::AppendChars
                (&local_500.OutputLog,(wchar_t *)local_308.Data.AllocatorInstance.Data,iVar7);
    }
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
    if (local_450.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_450.Data);
    }
    if (1 < (byte)LogNvidiaAftermath._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNvidiaAftermath);
    }
    AcquireSRWLockExclusive((PSRWLOCK)&CrashIntermediates);
    if (CrashIntermediates.Results.ArrayNum == CrashIntermediates.Results.ArrayMax) {
      CrashIntermediates.Results.ArrayNum =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x830,&CrashIntermediates.Results.AllocatorInstance,
                      &CrashIntermediates.Results.ArrayMax);
    }
    FVar3.Data = CrashIntermediates.Results.AllocatorInstance.Data;
    lVar14 = (longlong)CrashIntermediates.Results.ArrayNum;
    CrashIntermediates.Results.ArrayNum = CrashIntermediates.Results.ArrayNum + 1;
    *(undefined8 *)(CrashIntermediates.Results.AllocatorInstance.Data + lVar14 * 0x30) = 0;
    *(FScriptContainerElement **)(FVar3.Data + lVar14 * 0x30) =
         local_500.OutputLog.Data.AllocatorInstance.Data;
    local_500.OutputLog.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(FVar3.Data + lVar14 * 0x30 + 8) = local_500.OutputLog.Data.ArrayNum;
    *(int *)(FVar3.Data + lVar14 * 0x30 + 0xc) = local_500.OutputLog.Data.ArrayMax;
    local_500.OutputLog.Data.ArrayNum = 0;
    local_500.OutputLog.Data.ArrayMax = 0;
    *(undefined8 *)(FVar3.Data + lVar14 * 0x30 + 0x10) = 0;
    *(undefined4 *)(FVar3.Data + lVar14 * 0x30 + 0x18) = 0;
    *(undefined4 *)(FVar3.Data + lVar14 * 0x30 + 0x1c) = 0xffffffff;
    if (local_500.DumpPath.field0_0x0.TypedValue.Data.ArrayMax != -1) {
      *(ForAnyElementType *)(FVar3.Data + lVar14 * 0x30 + 0x10) =
           local_500.DumpPath.field0_0x0.TypedValue.Data.AllocatorInstance.Data;
      local_500.DumpPath.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(FScriptContainerElement *)0x0;
      *(int *)(FVar3.Data + lVar14 * 0x30 + 0x18) =
           local_500.DumpPath.field0_0x0.TypedValue.Data.ArrayNum;
      *(int *)(FVar3.Data + lVar14 * 0x30 + 0x1c) =
           local_500.DumpPath.field0_0x0.TypedValue.Data.ArrayMax;
      local_500.DumpPath.field0_0x0.TypedValue.Data.ArrayNum = 0;
      local_500.DumpPath.field0_0x0.TypedValue.Data.ArrayMax = 0;
    }
    FVar3.Data[lVar14 * 0x30 + 0x28] = (FScriptContainerElement)0x0;
    FVar3.Data[lVar14 * 0x30 + 0x28] = (FScriptContainerElement)local_500.GPUFaultAddress.bIsSet;
    if ((FScriptContainerElement)local_500.GPUFaultAddress.bIsSet != (FScriptContainerElement)0x0) {
      *(ulong64 *)(FVar3.Data + lVar14 * 0x30 + 0x20) = local_500.GPUFaultAddress.TypedValue;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&CrashIntermediates);
  }
  else {
    ::FString::PrintfImpl(&local_318,L"\n\t\tFailed to generate JSON from GPU crash dump: 0x%08x");
    iVar7 = local_318.Data.ArrayNum + -1;
    if (local_318.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars
              (&local_500.OutputLog,(wchar_t *)local_318.Data.AllocatorInstance.Data,iVar7);
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
  }
  GFSDK_Aftermath_GpuCrashDump_DestroyDecoder(local_4d0);
LAB_1446d4db7:
  if ((local_500.DumpPath.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_500.DumpPath.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_500.DumpPath.field0_0x0.TypedValue.Data.AllocatorInstance.Data);
  }
  FVar3.Data = NameStorage.Array.AllocatorInstance.Data;
  iVar7 = NameStorage.Array.ArrayNum;
  if (local_500.OutputLog.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_500.OutputLog.Data.AllocatorInstance.Data);
    FVar3 = NameStorage.Array.AllocatorInstance;
    iVar7 = NameStorage.Array.ArrayNum;
  }
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    ::operator_delete(*(void **)FVar3.Data,0x100);
    FVar3.Data = FVar3.Data + 8;
  }
  NameStorage.Array.ArrayNum = 0;
  if (NameStorage.Array.ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&NameStorage,0,&NameStorage.Array.ArrayMax);
  }
  return;
}

// Callback_GpuCrashDumpDesc @ 1446d4ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::RHICore::Nvidia::Aftermath::Callback_GpuCrashDumpDesc
          (_func___cdecl_void_uint_char_ptr *param_1,void *param_2)

{
  FString *pFVar1;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar2;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  undefined1 auStack_158 [32];
  FString local_138;
  FGenericCrashContext local_128;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  pFVar1 = FGenericCrashContext::GetCrashGameName(&local_138);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  pTVar2 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
           TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>(&local_b8,pwVar3)
  ;
  (*param_1)(1,pTVar2->Ptr);
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  pwVar3 = FApp::GetBuildVersion();
  pTVar2 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
           TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>(&local_b8,pwVar3)
  ;
  (*param_1)(2,pTVar2->Ptr);
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  FGenericCrashContext::FGenericCrashContext(&local_128,GPUCrash,L"Aftermath crash dump");
  local_128._padding_ = (longlong)&___7FWindowsPlatformCrashContext__6B_;
  FGenericCrashContext::SerializeContentToBuffer(&local_128);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_128.CommonBuffer.Data.ArrayNum != 0) {
    FVar4.Data = local_128.CommonBuffer.Data.AllocatorInstance.Data;
  }
  pTVar2 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
           TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                     (&local_b8,(wchar_t *)FVar4.Data);
  (*param_1)(0x10000,pTVar2->Ptr);
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  local_128._padding_ = (longlong)&___7FGenericCrashContext__6B_;
  if (local_128.CommonBuffer.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.CommonBuffer.Data.AllocatorInstance.Data);
  }
  if (local_128.ModulesInfo.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.ModulesInfo.AllocatorInstance.Data);
  }
  DestructItems<FThreadStackFrames,int>
            ((FThreadStackFrames *)local_128.ThreadCallStacks.AllocatorInstance.Data,
             local_128.ThreadCallStacks.ArrayNum);
  if ((FThreadStackFrames *)local_128.ThreadCallStacks.AllocatorInstance.Data !=
      (FThreadStackFrames *)0x0) {
    FMemory::Free(local_128.ThreadCallStacks.AllocatorInstance.Data);
  }
  DestructItems<FCrashStackFrame,int>
            ((FCrashStackFrame *)local_128.CallStack.AllocatorInstance.Data,
             local_128.CallStack.ArrayNum);
  if ((FCrashStackFrame *)local_128.CallStack.AllocatorInstance.Data != (FCrashStackFrame *)0x0) {
    FMemory::Free(local_128.CallStack.AllocatorInstance.Data);
  }
  return;
}

// Callback_ResolveMarker @ 1446d50a0

void __cdecl
UE::RHICore::Nvidia::Aftermath::Callback_ResolveMarker
          (void *param_1,uint param_2,void *param_3,void **param_4,uint *param_5)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  wchar_t *_Str;
  size_t sVar4;
  longlong lVar5;
  void *local_18 [2];
  
  if (param_1 == FRHIBreadcrumbNode::Sentinel) {
    *param_4 = L"<root>";
    *param_5 = 0xe;
    return;
  }
  pvVar3 = ::operator_new(0x100);
  local_18[0] = pvVar3;
  if ((NameStorage.Array.AllocatorInstance.Data <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      NameStorage.Array.AllocatorInstance.Data + (longlong)NameStorage.Array.ArrayMax * 8)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (NameStorage.Array.ArrayNum == NameStorage.Array.ArrayMax) {
    NameStorage.Array.ArrayNum =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,(ForAnyElementType *)&NameStorage,&NameStorage.Array.ArrayMax);
  }
  lVar5 = (longlong)NameStorage.Array.ArrayNum;
  NameStorage.Array.ArrayNum = NameStorage.Array.ArrayNum + 1;
  *(void **)(NameStorage.Array.AllocatorInstance.Data + lVar5 * 8) = local_18[0];
  _Str = (wchar_t *)(**(code **)(*(longlong *)param_1 + 0x10))(param_1,pvVar3);
  *param_4 = _Str;
  sVar4 = wcslen(_Str);
  *param_5 = (int)sVar4 * 2 + 2;
  return;
}

// Callback_ShaderDebugInfo @ 1446d51f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::RHICore::Nvidia::Aftermath::Callback_ShaderDebugInfo(void *param_1,uint param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar4;
  size_t sVar5;
  IFileManager *pIVar6;
  longlong *plVar7;
  int iVar8;
  ForAnyElementType FVar9;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *_Str;
  undefined1 auStackY_d8 [32];
  ForAnyElementType local_98;
  uint local_90;
  int local_8c;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_88;
  undefined1 local_78 [16];
  int local_68;
  undefined8 *local_60;
  ForAnyElementType *local_58;
  FString local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_40 = 0;
  uStack_38 = 0;
  iVar3 = GFSDK_Aftermath_GetShaderDebugInfoIdentifier(0x217,param_1,param_2,&local_40);
  if (iVar3 == 1) {
    ::FString::PrintfImpl((FString *)(local_78 + 8),L"%016llX-%016llX.nvdbg");
    _Str = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)L"";
    if (local_68 != 0) {
      _Str = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_78._8_8_;
    }
    pTVar4 = &FPaths::ProjectLogDir(&local_50)->Data;
    sVar5 = wcslen((wchar_t *)_Str);
    iVar3 = (int)sVar5 + 1;
    if ((pTVar4->ArrayNum == 0) && (iVar3 != 0)) {
      iVar8 = 1;
    }
    else {
      iVar8 = 0;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_88,pTVar4,iVar8 + iVar3);
    ::FString::PathAppend((FString *)&local_88,(wchar_t *)_Str,(int)sVar5);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_78._8_8_ !=
        (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free((void *)local_78._8_8_);
    }
    pIVar6 = IFileManager::Get();
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_88.ArrayNum != 0) {
      FVar9.Data = local_88.AllocatorInstance.Data;
    }
    plVar7 = (longlong *)(**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,FVar9.Data,0);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x188))(plVar7,param_1,param_2);
      (**(code **)(*plVar7 + 0x210))(plVar7);
    }
    FGenericCrashContext::AddFile((FString *)&local_88);
    AcquireSRWLockExclusive((PSRWLOCK)&CrashIntermediates);
    local_98.Data = (FScriptContainerElement *)0x0;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)param_2);
    }
    if ((param_1 == (void *)0x0) && (param_2 != 0)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x2d3,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_90 = param_2;
    if (param_2 == 0) {
      local_8c = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_2,0,&local_98,param_2,&local_8c);
      memcpy(local_98.Data,param_1,(longlong)(int)param_2);
    }
    local_60 = &local_40;
    local_58 = &local_98;
    TSet<TTuple<unsigned___int64,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<unsigned___int64_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&&>_>
              ((TSet<TTuple<unsigned___int64,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&CrashIntermediates.ShaderDebugLookup,
               (TPairInitializer<unsigned___int64_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&&>
                *)local_78,(bool *)&local_60);
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&CrashIntermediates);
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
  }
  return;
}

// Callback_ShaderDebugInfoLookup @ 1446d5470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::RHICore::Nvidia::Aftermath::Callback_ShaderDebugInfoLookup
          (GFSDK_Aftermath_ShaderDebugInfoIdentifier *param_1,
          _func___cdecl_void_void_ptr_uint *param_2,void *param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  
  AcquireSRWLockShared((PSRWLOCK)&CrashIntermediates);
  uVar2 = param_1->id[0];
  if (CrashIntermediates.ShaderDebugLookup._8_4_ != CrashIntermediates.ShaderDebugLookup._52_4_) {
    lVar5 = 0x154bc1100;
    if (CrashIntermediates.ShaderDebugLookup._64_8_ != 0) {
      lVar5 = CrashIntermediates.ShaderDebugLookup._64_8_;
    }
    iVar1 = *(int *)(lVar5 + ((uVar2 >> 0x20) * 0x17 + uVar2 &
                             (ulonglong)(CrashIntermediates.ShaderDebugLookup._72_4_ - 1)) * 4);
    while (iVar1 != -1) {
      puVar4 = (ulonglong *)((longlong)iVar1 * 0x20 + CrashIntermediates.ShaderDebugLookup._0_8_);
      if (*puVar4 == uVar2) {
        puVar3 = puVar4 + 1;
        if (puVar4 == (ulonglong *)0x0) {
          puVar3 = (ulonglong *)0x0;
        }
        if (puVar3 != (ulonglong *)0x0) {
          (*param_2)((void *)*puVar3,(uint)puVar3[1]);
          goto LAB_1446d5516;
        }
        break;
      }
      iVar1 = (int)puVar4[3];
    }
  }
  if (1 < (byte)LogRHICore._0_1_) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHICore);
  }
LAB_1446d5516:
                    /* WARNING: Could not recover jumptable at 0x0001446d5527. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&CrashIntermediates);
  return;
}

// CollectBreadcrumbNodes @ 1446d5550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl UE::RHICore::Intel::GPUCrashDumps::CollectBreadcrumbNodes(void)

{
  FString *pFVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  FBreadcrumbNode *pFVar4;
  FBreadcrumbNode *pFVar5;
  undefined8 *puVar6;
  void *pvVar7;
  longlong lVar8;
  char *pcVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  bool bVar12;
  int iVar13;
  size_t sVar14;
  longlong lVar15;
  FQueueData *pFVar16;
  int iVar17;
  ulonglong uVar18;
  wchar_t *pwVar19;
  FBreadcrumbNode *pFVar20;
  uint uVar21;
  int *piVar23;
  ERHIPipeline EVar24;
  INTC_CRASHDUMP_SECTION *pIVar25;
  undefined1 auStackY_338 [32];
  ForAnyElementType local_2e8;
  int local_2e0;
  int local_2dc;
  undefined1 local_2d8;
  undefined1 local_2d7;
  undefined1 local_2d6;
  char local_2d5;
  byte local_2d4 [4];
  uint local_2d0;
  undefined1 *local_2c8;
  FString local_2c0;
  <lambda_1> local_2b0;
  undefined1 local_2a8;
  undefined1 local_2a7;
  void *local_2a0;
  undefined8 local_298;
  FBreadcrumbNode *local_290;
  ulonglong local_288;
  FString local_280;
  undefined1 local_270 [8];
  undefined8 local_268;
  wchar_t *pwStack_260;
  FString *local_258;
  FQueueData *local_250;
  FString local_240 [3];
  undefined8 local_210;
  undefined1 local_208 [64];
  ForElementType<FSetElementId> local_1c8;
  int local_1c0;
  FString local_1b8;
  FString local_1a8;
  FSerializer local_198;
  FQueueData local_68;
  ulonglong local_30;
  ulonglong uVar22;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_338;
  uVar18 = 0;
  local_2a7 = 0;
  local_2a0 = (void *)0x0;
  local_298 = 0;
  local_290 = (FBreadcrumbNode *)0x0;
  local_288 = 0;
  local_2e8.Data = (FScriptContainerElement *)0x0;
  local_2e0 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_2e8,1,&local_2dc);
  *(undefined1 **)local_2e8.Data = &local_2a8;
  local_208._0_8_ = 0;
  local_208._8_8_ = 0;
  local_208._32_8_ = 0;
  local_208._40_4_ = 0;
  local_208._44_4_ = 0x80;
  local_208._48_4_ = 0xffffffff;
  local_208._52_4_ = 0;
  local_1c8 = (ForElementType<FSetElementId>)0x0;
  local_1c0 = 0;
  ::FString::FString(&local_1b8,L"Intel Breadcrumbs");
  ::FString::FString(&local_1a8,L"526BDA74-7A81-44C3-B0FD-9DBF80973C25");
  if (CrashDumpInfo != (INTC_CRASHDUMP_INFO *)0x0) {
    local_2d0 = 0;
    if (CrashDumpInfo->crashDumpSectionCount != 0) {
      do {
        uVar22 = 0;
        pIVar25 = CrashDumpInfo->pCrashDumpSections + uVar18;
        if (pIVar25->sectionType == 2) {
          pwVar19 = pIVar25->pSectionInfo;
          sVar14 = wcslen(pwVar19);
          if (0 < (int)sVar14) {
            iVar13 = wcscmp(pwVar19,L"3D Queue");
            if (iVar13 == 0) {
              EVar24 = Graphics;
            }
            else {
              iVar13 = wcscmp(pwVar19,L"Compute Queue");
              if (iVar13 != 0) goto LAB_1446d5d4e;
              EVar24 = AsyncCompute;
            }
            if (pIVar25->dataEntryCount != 0) {
              do {
                pvVar7 = pIVar25->pDataEntry;
                puVar6 = (undefined8 *)((longlong)pvVar7 + uVar22 * 0x28 + 0x10);
                local_268 = *puVar6;
                pwStack_260 = (wchar_t *)puVar6[1];
                local_210 = *(undefined8 *)((longlong)pvVar7 + uVar22 * 0x28 + 0x20);
                uVar21 = *(uint *)((longlong)pvVar7 + uVar22 * 0x28);
                if ((uVar21 & 2) == 0) {
                  if ((uVar21 & 4) != 0) goto LAB_1446d58d6;
LAB_1446d59b1:
                  uVar21 = 0;
                  if ((int)(local_2e0 - 1U) < local_2e0) {
                    uVar21 = ~(local_2e0 - 1U) >> 0x1f;
                  }
                  if ((uVar21 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  lVar8 = *(longlong *)(local_2e8.Data + (longlong)(local_2e0 + -1) * 8);
                  iVar13 = *(int *)(lVar8 + 0x20);
                  if (iVar13 == *(int *)(lVar8 + 0x24)) {
                    iVar13 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x828,(ForAnyElementType *)(lVar8 + 0x18),
                                        (int *)(lVar8 + 0x24));
                  }
                  lVar15 = (longlong)iVar13;
                  *(int *)(lVar8 + 0x20) = iVar13 + 1;
                  lVar8 = *(longlong *)(lVar8 + 0x18);
                  *(undefined2 *)(lVar8 + lVar15 * 0x28) = 0;
                  *(undefined4 *)(lVar8 + 2 + lVar15 * 0x28) = 0;
                  *(undefined2 *)(lVar8 + 6 + lVar15 * 0x28) = 0;
                  pbVar3 = (byte *)(lVar8 + lVar15 * 0x28);
                  pFVar1 = (FString *)(pbVar3 + 8);
                  pbVar3[0x10] = 0;
                  pbVar3[0x11] = 0;
                  pbVar3[0x12] = 0;
                  pbVar3[0x13] = 0;
                  pbVar3[0x14] = 0;
                  pbVar3[0x15] = 0;
                  pbVar3[0x16] = 0;
                  pbVar3[0x17] = 0;
                  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  pbVar3[0x18] = 0;
                  pbVar3[0x19] = 0;
                  pbVar3[0x1a] = 0;
                  pbVar3[0x1b] = 0;
                  pbVar3[0x1c] = 0;
                  pbVar3[0x1d] = 0;
                  pbVar3[0x1e] = 0;
                  pbVar3[0x1f] = 0;
                  pbVar3[0x20] = 0;
                  pbVar3[0x21] = 0;
                  pbVar3[0x22] = 0;
                  pbVar3[0x23] = 0;
                  pbVar3[0x24] = 0;
                  pbVar3[0x25] = 0;
                  pbVar3[0x26] = 0;
                  pbVar3[0x27] = 0;
                  ::FString::PrintfImpl(&local_2c0,L"[%s]");
                  if (pFVar1 != &local_2c0) {
                    pFVar10 = (pFVar1->Data).AllocatorInstance.Data;
                    if (pFVar10 != (FScriptContainerElement *)0x0) {
                      FMemory::Free(pFVar10);
                    }
                    (pFVar1->Data).AllocatorInstance.Data = local_2c0.Data.AllocatorInstance.Data;
                    *(int *)(pbVar3 + 0x10) = local_2c0.Data.ArrayNum;
                    *(int *)(pbVar3 + 0x14) = local_2c0.Data.ArrayMax;
                    local_2c0.Data.ArrayNum = 0;
                    local_2c0.Data.ArrayMax = 0;
                    local_2c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  }
                  if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
                  }
                  if (local_2d4 != pbVar3) {
                    *pbVar3 = -((char)local_210 != '\0') & 2;
                    pbVar3[1] = 1;
                  }
                }
                else if ((uVar21 & 4) == 0) {
                  uVar21 = 0;
                  if ((int)(local_2e0 - 1U) < local_2e0) {
                    uVar21 = ~(local_2e0 - 1U) >> 0x1f;
                  }
                  if ((uVar21 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  lVar8 = *(longlong *)(local_2e8.Data + (longlong)(local_2e0 + -1) * 8);
                  iVar13 = *(int *)(lVar8 + 0x20);
                  if (iVar13 == *(int *)(lVar8 + 0x24)) {
                    iVar13 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x828,(ForAnyElementType *)(lVar8 + 0x18),
                                        (int *)(lVar8 + 0x24));
                  }
                  lVar15 = (longlong)iVar13;
                  *(int *)(lVar8 + 0x20) = iVar13 + 1;
                  lVar8 = *(longlong *)(lVar8 + 0x18);
                  *(undefined2 *)(lVar8 + lVar15 * 0x28) = 0;
                  *(undefined4 *)(lVar8 + 2 + lVar15 * 0x28) = 0;
                  *(undefined2 *)(lVar8 + 6 + lVar15 * 0x28) = 0;
                  puVar2 = (undefined1 *)(lVar8 + lVar15 * 0x28);
                  *(undefined8 *)(puVar2 + 0x10) = 0;
                  (((FString *)(puVar2 + 8))->Data).AllocatorInstance.Data =
                       (FScriptContainerElement *)0x0;
                  *(undefined8 *)(puVar2 + 0x18) = 0;
                  *(undefined8 *)(puVar2 + 0x20) = 0;
                  pwVar19 = L"Unknown event";
                  if (pwStack_260 != (wchar_t *)0x0) {
                    pwVar19 = pwStack_260;
                  }
                  ::FString::operator=((FString *)(puVar2 + 8),pwVar19);
                  if (&local_2d6 != puVar2) {
                    *puVar2 = (char)local_210 != '\0';
                    puVar2[1] = 1;
                  }
                  local_2c8 = puVar2;
                  if (((local_2e8.Data <= (FScriptContainerElement *)&local_2c8) &&
                      ((FScriptContainerElement *)&local_2c8 <
                       local_2e8.Data + (longlong)local_2dc * 8)) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar12)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  if (local_2e0 == local_2dc) {
                    local_2e0 = Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x808,&local_2e8,&local_2dc);
                  }
                  *(undefined1 **)(local_2e8.Data + (longlong)local_2e0 * 8) = local_2c8;
                  local_2e0 = local_2e0 + 1;
                }
                else {
LAB_1446d58d6:
                  if ((uVar21 & 2) != 0) goto LAB_1446d59b1;
                  if ((local_2e0 < 1) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  iVar17 = local_2e0 + -1;
                  pcVar9 = *(char **)(local_2e8.Data + (longlong)iVar17 * 8);
                  iVar13 = (local_2e0 - iVar17) + -1;
                  if (iVar13 != 0) {
                    memmove(local_2e8.Data + (longlong)iVar17 * 8,
                            local_2e8.Data + (longlong)iVar17 * 8 + 8,(longlong)iVar13 << 3);
                  }
                  local_2e0 = local_2e0 + -1;
                  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,&local_2e8,local_2e0,&local_2dc);
                  if (pcVar9[1] == '\0') goto LAB_1446d5da1;
                  if (((((char)local_210 != '\0') && (pcVar9[1] == '\x01')) && (*pcVar9 == '\x01'))
                     && (&local_2d5 != pcVar9)) {
                    pcVar9[0] = '\x02';
                    pcVar9[1] = '\x01';
                  }
                }
                uVar21 = (int)uVar22 + 1;
                uVar22 = (ulonglong)uVar21;
              } while (uVar21 < pIVar25->dataEntryCount);
            }
            if ((int)local_288 != 0) {
              local_198.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_198.String.Data.ArrayNum = 0;
              local_198.String.Data.ArrayMax = 0;
              FSHA1::FSHA1(&local_198.FullHash);
              FSHA1::FSHA1(&local_198.ActiveHash);
              iVar13 = (int)local_288;
              uVar18 = (ulonglong)(int)local_288;
              local_198.ChildStack.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_198.ChildStack.ArrayNum = 0;
              local_198.ChildStack.ArrayMax = 0;
              pFVar4 = local_290 + uVar18;
              piVar23 = &(local_290->Children).ArrayNum;
              while( true ) {
                if ((int)uVar18 != iVar13) {
                  local_2d8 = 0;
                  `TCheckedPointerIterator<`UE::RHICore::Intel::GPUCrashDumps::CollectBreadcrumbNodes'::__l2::FBreadcrumbNode,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_2d8);
                }
                if ((FBreadcrumbNode *)(piVar23 + -8) == pFVar4) break;
                local_2b0.Serializer = &local_198;
                if ((*(char *)((longlong)piVar23 + -0x1f) == '\0') &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsSet()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                        ,0x1bd,
                                        L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                       ), bVar12)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                FGPUBreadcrumbCrashData::FSerializer::BeginNode
                          (&local_198,(FString *)(piVar23 + -6),
                           (((FBreadcrumbNode *)(piVar23 + -8))->State).TypedValue);
                iVar17 = *piVar23;
                pFVar20 = (FBreadcrumbNode *)
                          (((TArray<_void___cdecl_UE::RHICore::Intel::GPUCrashDumps::CollectBreadcrumbNodes(void)_::_2_::FBreadcrumbNode,TSizedDefaultAllocator<32>_>
                             *)(piVar23 + -2))->AllocatorInstance).Data;
                pFVar5 = pFVar20 + iVar17;
                while( true ) {
                  if (*piVar23 != iVar17) {
                    local_2d7 = 0;
                    `TCheckedPointerIterator<`UE::RHICore::Intel::GPUCrashDumps::CollectBreadcrumbNodes'::__l2::FBreadcrumbNode_const_,int,0>
                    ::operator!='::__l2::<lambda_1>::operator()(&local_2d7);
                  }
                  if (pFVar20 == pFVar5) break;
                  `UE::RHICore::Intel::GPUCrashDumps::CollectBreadcrumbNodes'::__l48::<lambda_1>::
                  operator()<_UE::RHICore::Intel::GPUCrashDumps::CollectBreadcrumbNodes_::__l48::<lambda_1>_>
                            (&local_2b0,pFVar20,&local_2b0);
                  pFVar20 = pFVar20 + 1;
                }
                FGPUBreadcrumbCrashData::FSerializer::EndNode(local_2b0.Serializer);
                uVar18 = local_288 & 0xffffffff;
                piVar23 = piVar23 + 10;
              }
              pFVar16 = FGPUBreadcrumbCrashData::FSerializer::GetResult(&local_198,&local_68);
              GetRHIPipelineName(local_240,EVar24);
              ::FString::PrintfImpl(&local_280,L"%s Queue 0");
              iVar13 = 0;
              if (local_280.Data.ArrayNum == 0) {
                pwVar19 = L"";
              }
              else {
                iVar13 = local_280.Data.ArrayNum + -1;
                pwVar19 = (wchar_t *)local_280.Data.AllocatorInstance.Data;
              }
              uVar21 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar19);
              iVar13 = TSet<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>,TDefaultMapHashableKeyFuncs<FString,FGPUBreadcrumbCrashData::FQueueData,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<FString>
                                 ((TSet<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>,TDefaultMapHashableKeyFuncs<FString,FGPUBreadcrumbCrashData::FQueueData,0>,FDefaultSetAllocator>
                                   *)local_208,uVar21,&local_280);
              if ((iVar13 == -1) || ((longlong)iVar13 * 0x50 + local_208._0_8_ == 0)) {
                local_258 = &local_280;
                local_250 = pFVar16;
                TSet<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>,TDefaultMapHashableKeyFuncs<FString,FGPUBreadcrumbCrashData::FQueueData,0>,FDefaultSetAllocator>
                ::
                EmplaceByHash<TPairInitializer<FString_&&,FGPUBreadcrumbCrashData::FQueueData_&&>_>
                          ((TSet<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>,TDefaultMapHashableKeyFuncs<FString,FGPUBreadcrumbCrashData::FQueueData,0>,FDefaultSetAllocator>
                            *)local_208,(uint)local_270,
                           (TPairInitializer<FString_&&,FGPUBreadcrumbCrashData::FQueueData_&&> *)
                           (ulonglong)uVar21,(bool *)&local_258);
              }
              if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_280.Data.AllocatorInstance.Data);
              }
              if (local_240[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_240[0].Data.AllocatorInstance.Data);
              }
              if (local_68.BreadcrumbString.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.BreadcrumbString.Data.AllocatorInstance.Data);
              }
              if (local_198.ChildStack.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.ChildStack.AllocatorInstance.Data);
              }
              FSHA1::~FSHA1(&local_198.ActiveHash);
              FSHA1::~FSHA1(&local_198.FullHash);
              if (local_198.String.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.String.Data.AllocatorInstance.Data);
              }
            }
          }
        }
LAB_1446d5d4e:
        local_2d0 = local_2d0 + 1;
        uVar18 = (ulonglong)local_2d0;
      } while (local_2d0 < CrashDumpInfo->crashDumpSectionCount);
    }
    if (local_208._8_4_ != local_208._52_4_) {
      FGenericCrashContext::SetGPUBreadcrumbs((FGPUBreadcrumbCrashData *)local_208);
    }
  }
LAB_1446d5da1:
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  local_1c0 = 0;
  if (local_1c8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1c8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_208);
  if (local_2e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data);
  }
  DestructItems<_UE::RHICore::Intel::GPUCrashDumps::CollectBreadcrumbNodes_::__l2::FBreadcrumbNode,int>
            (local_290,(int)local_288);
  if (local_290 != (FBreadcrumbNode *)0x0) {
    FMemory::Free(local_290);
  }
  if (local_2a0 != (void *)0x0) {
    FMemory::Free(local_2a0);
  }
  return;
}

// DeregisterShaderBinary @ 1446d8270

void __cdecl UE::RHICore::Nvidia::Aftermath::DeregisterShaderBinary(ulong64 param_1)

{
  ulong64 local_res10 [3];
  
  EnterCriticalSection((LPCRITICAL_SECTION)&ShaderRegistration);
  local_res10[0] = param_1;
  if (ShaderRegistration.ShaderBinaryToDebugHash._8_4_ !=
      ShaderRegistration.ShaderBinaryToDebugHash._52_4_) {
    TSet<TTuple<unsigned___int64,UE::RHICore::Nvidia::Aftermath::FShaderDebugInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::RHICore::Nvidia::Aftermath::FShaderDebugInfo,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,UE::RHICore::Nvidia::Aftermath::FShaderDebugInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::RHICore::Nvidia::Aftermath::FShaderDebugInfo,0>,FDefaultSetAllocator>
                *)&ShaderRegistration.ShaderBinaryToDebugHash,
               (int)(param_1 >> 0x20) * 0x17 + (int)param_1,local_res10);
  }
                    /* WARNING: Could not recover jumptable at 0x0001446d82c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&ShaderRegistration);
  return;
}

// DispatchShaderBundleEmulation @ 1446d87a0

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UE::RHICore::DispatchShaderBundleEmulation
          (FRHICommandList *param_1,FRHIShaderBundle *param_2,FRHIBuffer *param_3,
          FRHIShaderBundleGraphicsState *param_4,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_5,
          TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int> *param_6)

{
  float fVar1;
  float fVar2;
  FRHIGraphicsShader *pFVar3;
  FRHIPixelShader *pFVar4;
  FRHIShaderParameterResource *pFVar5;
  FRHIShaderParameterResource *pFVar6;
  FRHIShaderParameter *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  IRHICommandContext *pIVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  FRHIShaderBundleGraphicsDispatch *pFVar15;
  int iVar16;
  int iVar17;
  FRHIShaderBundleGraphicsDispatch *pFVar18;
  float fVar19;
  float fVar20;
  uint uStack_25c;
  uint uStack_24c;
  uint uStack_23c;
  undefined4 uStack_22c;
  undefined4 uStack_21c;
  undefined4 uStack_20c;
  undefined4 uStack_1fc;
  uint uStack_1ec;
  uint uStack_1dc;
  uint uStack_1cc;
  undefined4 uStack_1bc;
  undefined4 uStack_1ac;
  undefined4 uStack_19c;
  undefined4 uStack_18c;
  TArrayView<FRHIShaderParameterResource_const_,int> local_188;
  TArrayView<FRHIShaderParameterResource_const_,int> local_178;
  TArrayView<FRHIShaderParameter_const_,int> local_168;
  TArrayView<unsigned_char_const_,int> local_158;
  TArrayView<FRHIShaderParameterResource_const_,int> local_148;
  TArrayView<FRHIShaderParameterResource_const_,int> local_138;
  TArrayView<FRHIShaderParameter_const_,int> local_128;
  TArrayView<unsigned_char_const_,int> local_118;
  TArrayView<FRHIShaderParameterResource_const_,int> local_108;
  TArrayView<FRHIShaderParameterResource_const_,int> local_f8;
  TArrayView<FRHIShaderParameter_const_,int> local_e8;
  TArrayView<unsigned_char_const_,int> local_d8;
  TArrayView<FRHIShaderParameterResource_const_,int> local_c8;
  TArrayView<FRHIShaderParameterResource_const_,int> local_b8;
  TArrayView<FRHIShaderParameter_const_,int> local_a8;
  TArrayView<unsigned_char_const_,int> local_98 [7];
  
  iVar16 = param_6->ArrayNum;
  if (iVar16 != 0) {
    fVar1 = param_4->DepthMax;
    fVar2 = param_4->DepthMin;
    iVar10 = 0x7fff;
    if (*(int *)((longlong)&(param_4->ViewRect).field0_0x0 + 0xc) < 0x7fff) {
      iVar10 = *(int *)((longlong)&(param_4->ViewRect).field0_0x0 + 0xc);
    }
    iVar17 = 0x7fff;
    if (*(int *)((longlong)&(param_4->ViewRect).field0_0x0 + 8) < 0x7fff) {
      iVar17 = *(int *)((longlong)&(param_4->ViewRect).field0_0x0 + 8);
    }
    fVar19 = (float)*(int *)((longlong)&(param_4->ViewRect).field0_0x0 + 4);
    fVar20 = (float)*(int *)&(param_4->ViewRect).field0_0x0;
    if ((GRHICommandList.bLatchedBypass) && ((param_1->field_0x29b & 0x20) != 0)) {
      pIVar11 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
      (**(code **)(pIVar11->_padding_ + 0x1a0))
                (pIVar11,fVar20,fVar19,fVar2,(float)iVar17,(float)iVar10,fVar1);
    }
    else {
      puVar13 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar13;
      *(undefined8 **)&param_1->field_0x30 = puVar13 + 1;
      puVar13[1] = 0;
      *puVar13 = &___7FRHICommandSetViewport__6B_;
      *(float *)(puVar13 + 2) = fVar20;
      *(float *)((longlong)puVar13 + 0x14) = fVar19;
      *(float *)(puVar13 + 3) = fVar2;
      *(float *)((longlong)puVar13 + 0x1c) = (float)iVar17;
      *(float *)(puVar13 + 4) = (float)iVar10;
      *(float *)((longlong)puVar13 + 0x24) = fVar1;
    }
    pFVar15 = param_6->DataPtr;
    pFVar18 = pFVar15 + iVar16;
    for (; pFVar15 != pFVar18; pFVar15 = pFVar15 + 1) {
      if (pFVar15->RecordIndex != 0xffffffff) {
        lVar12 = 0x30;
        if (param_2->Mode != MSPS) {
          lVar12 = 0x20;
        }
        pFVar3 = *(FRHIGraphicsShader **)
                  ((longlong)
                   (pFVar15->PipelineInitializer).ImmutableSamplerState.ImmutableSamplers.Elements +
                  lVar12 + -0x68);
        pFVar4 = (pFVar15->PipelineInitializer).BoundShaderState.PixelShaderRHI;
        if ((pFVar4 != (FRHIPixelShader *)0x0) && (pFVar3 != (FRHIGraphicsShader *)0x0)) {
          if (((pFVar4->field_0x105 & 2) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ShaderState.GetPixelShader()->HasShaderBundleUsage()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreShader.cpp"
                                 ,0xa9,L"All shaders in a bundle must specify CFLAG_ShaderBundle"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (((pFVar3->field_0x105 & 2) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("MSVSShader->HasShaderBundleUsage()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreShader.cpp"
                                 ,0xaa,L"All shaders in a bundle must specify CFLAG_ShaderBundle"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          SetGraphicsPipelineState
                    (param_1,&pFVar15->PipelineInitializer,(uint)param_4->StencilRef,CheckApply,true
                    );
          if (param_5->ArrayNum != 0) {
            local_188.DataPtr = param_5->DataPtr;
            local_188.ArrayNum = param_5->ArrayNum;
            local_188._12_4_ = *(undefined4 *)&param_5->field_0xc;
            local_178._8_8_ = (ulonglong)uStack_25c << 0x20;
            local_178.DataPtr = (FRHIShaderParameterResource *)0x0;
            local_158._8_8_ = (ulonglong)uStack_23c << 0x20;
            local_168._8_8_ = (ulonglong)uStack_24c << 0x20;
            local_158.DataPtr = (uchar *)0x0;
            local_168.DataPtr = (FRHIShaderParameter *)0x0;
            FRHICommandList::SetShaderParameters
                      (param_1,pFVar3,&local_158,&local_168,&local_178,&local_188);
          }
          if (((pFVar15->Parameters_MSVS).bIsSet == false) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (0 < (pFVar15->Parameters_MSVS).TypedValue.Parameters.ArrayNum +
                  (pFVar15->Parameters_MSVS).TypedValue.ResourceParameters.ArrayNum +
                  (pFVar15->Parameters_MSVS).TypedValue.BindlessParameters.ArrayNum) {
            if (((pFVar15->Parameters_MSVS).bIsSet == false) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar5 = (pFVar15->Parameters_MSVS).TypedValue.BindlessParameters.DataPtr;
            iVar16 = (pFVar15->Parameters_MSVS).TypedValue.BindlessParameters.ArrayNum;
            if (((pFVar15->Parameters_MSVS).bIsSet == false) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar6 = (pFVar15->Parameters_MSVS).TypedValue.ResourceParameters.DataPtr;
            iVar10 = (pFVar15->Parameters_MSVS).TypedValue.ResourceParameters.ArrayNum;
            if (((pFVar15->Parameters_MSVS).bIsSet == false) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar7 = (pFVar15->Parameters_MSVS).TypedValue.Parameters.DataPtr;
            iVar17 = (pFVar15->Parameters_MSVS).TypedValue.Parameters.ArrayNum;
            if (((pFVar15->Parameters_MSVS).bIsSet == false) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_118.DataPtr = (pFVar15->Parameters_MSVS).TypedValue.ParametersData.DataPtr;
            local_148._12_4_ = uStack_22c;
            local_148.ArrayNum = iVar16;
            local_138._12_4_ = uStack_21c;
            local_138.ArrayNum = iVar10;
            local_128._12_4_ = uStack_20c;
            local_128.ArrayNum = iVar17;
            local_118._12_4_ = uStack_1fc;
            local_118.ArrayNum = (pFVar15->Parameters_MSVS).TypedValue.ParametersData.ArrayNum;
            local_148.DataPtr = pFVar5;
            local_138.DataPtr = pFVar6;
            local_128.DataPtr = pFVar7;
            FRHICommandList::SetShaderParameters
                      (param_1,pFVar3,&local_118,&local_128,&local_138,&local_148);
          }
          if (param_5->ArrayNum != 0) {
            local_108.DataPtr = param_5->DataPtr;
            local_108.ArrayNum = param_5->ArrayNum;
            local_108._12_4_ = *(undefined4 *)&param_5->field_0xc;
            local_f8._8_8_ = (ulonglong)uStack_1ec << 0x20;
            local_f8.DataPtr = (FRHIShaderParameterResource *)0x0;
            local_d8._8_8_ = (ulonglong)uStack_1cc << 0x20;
            local_e8._8_8_ = (ulonglong)uStack_1dc << 0x20;
            local_d8.DataPtr = (uchar *)0x0;
            local_e8.DataPtr = (FRHIShaderParameter *)0x0;
            FRHICommandList::SetShaderParameters
                      (param_1,(FRHIGraphicsShader *)
                               (pFVar15->PipelineInitializer).BoundShaderState.PixelShaderRHI,
                       &local_d8,&local_e8,&local_f8,&local_108);
          }
          if (((pFVar15->Parameters_PS).bIsSet == false) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (0 < (pFVar15->Parameters_PS).TypedValue.ResourceParameters.ArrayNum +
                  (pFVar15->Parameters_PS).TypedValue.BindlessParameters.ArrayNum +
                  (pFVar15->Parameters_PS).TypedValue.Parameters.ArrayNum) {
            if (((pFVar15->Parameters_PS).bIsSet == false) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar5 = (pFVar15->Parameters_PS).TypedValue.BindlessParameters.DataPtr;
            iVar16 = (pFVar15->Parameters_PS).TypedValue.BindlessParameters.ArrayNum;
            if (((pFVar15->Parameters_PS).bIsSet == false) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar6 = (pFVar15->Parameters_PS).TypedValue.ResourceParameters.DataPtr;
            iVar10 = (pFVar15->Parameters_PS).TypedValue.ResourceParameters.ArrayNum;
            if (((pFVar15->Parameters_PS).bIsSet == false) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar7 = (pFVar15->Parameters_PS).TypedValue.Parameters.DataPtr;
            iVar17 = (pFVar15->Parameters_PS).TypedValue.Parameters.ArrayNum;
            if (((pFVar15->Parameters_PS).bIsSet == false) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_98[0].DataPtr = (pFVar15->Parameters_PS).TypedValue.ParametersData.DataPtr;
            local_c8._12_4_ = uStack_1bc;
            local_c8.ArrayNum = iVar16;
            local_b8._12_4_ = uStack_1ac;
            local_b8.ArrayNum = iVar10;
            local_a8._12_4_ = uStack_19c;
            local_a8.ArrayNum = iVar17;
            local_98[0]._12_4_ = uStack_18c;
            local_98[0].ArrayNum = (pFVar15->Parameters_PS).TypedValue.ParametersData.ArrayNum;
            local_c8.DataPtr = pFVar5;
            local_b8.DataPtr = pFVar6;
            local_a8.DataPtr = pFVar7;
            FRHICommandList::SetShaderParameters
                      (param_1,(FRHIGraphicsShader *)
                               (pFVar15->PipelineInitializer).BoundShaderState.PixelShaderRHI,
                       local_98,&local_a8,&local_b8,&local_c8);
          }
          if (GRHIGlobals.SupportsShaderRootConstants != false) {
            FRHIComputeCommandList::SetShaderRootConstants
                      ((FRHIComputeCommandList *)param_1,&pFVar15->Constants);
          }
          iVar16 = param_2->ArgStride * pFVar15->RecordIndex + param_2->ArgOffset;
          if (param_2->Mode == MSPS) {
            if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
              puVar13 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
              *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
              **(undefined8 **)&param_1->field_0x30 = puVar13;
              *(undefined8 **)&param_1->field_0x30 = puVar13 + 1;
              puVar13[1] = 0;
              ppuVar14 = &___7FRHICommandDispatchIndirectMeshShader__6B_;
LAB_1446d8f4a:
              *(int *)(puVar13 + 3) = iVar16;
              puVar13[2] = param_3;
              *puVar13 = ppuVar14;
            }
            else {
              pIVar11 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
              (**(code **)(pIVar11->_padding_ + 0x218))(pIVar11,param_3,iVar16);
            }
          }
          else {
            if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
              puVar13 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
              *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
              **(undefined8 **)&param_1->field_0x30 = puVar13;
              *(undefined8 **)&param_1->field_0x30 = puVar13 + 1;
              puVar13[1] = 0;
              ppuVar14 = &___7FRHICommandDrawPrimitiveIndirect__6B_;
              goto LAB_1446d8f4a;
            }
            pIVar11 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
            (**(code **)(pIVar11->_padding_ + 0x1e8))(pIVar11,param_3,iVar16);
          }
        }
      }
    }
  }
  return;
}

// DispatchShaderBundleEmulation @ 1446d8fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UE::RHICore::DispatchShaderBundleEmulation
          (FRHIComputeCommandList *param_1,FRHIShaderBundle *param_2,FRHIBuffer *param_3,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_4,
          TArrayView<FRHIShaderBundleComputeDispatch_const_,int> *param_5)

{
  int iVar1;
  int iVar2;
  FRHIShaderParameterResource *pFVar3;
  FRHIShaderParameterResource *pFVar4;
  FRHIShaderParameter *pFVar5;
  code *pcVar6;
  bool bVar7;
  IRHIComputeContext *pIVar8;
  undefined8 *puVar9;
  FRHIShaderBundleComputeDispatch *pFVar10;
  FRHIShaderBundleComputeDispatch *pFVar11;
  int iVar12;
  uint uStack_10c;
  uint uStack_fc;
  uint uStack_ec;
  undefined4 uStack_dc;
  undefined4 uStack_cc;
  undefined4 uStack_bc;
  undefined4 uStack_ac;
  TArrayView<FRHIShaderParameterResource_const_,int> local_a8;
  TArrayView<FRHIShaderParameterResource_const_,int> local_98;
  TArrayView<FRHIShaderParameter_const_,int> local_88;
  TArrayView<unsigned_char_const_,int> local_78;
  TArrayView<FRHIShaderParameterResource_const_,int> local_68;
  TArrayView<FRHIShaderParameterResource_const_,int> local_58;
  TArrayView<FRHIShaderParameter_const_,int> local_48;
  TArrayView<unsigned_char_const_,int> local_38;
  
  pFVar10 = param_5->DataPtr;
  pFVar11 = pFVar10 + param_5->ArrayNum;
  do {
    if (pFVar10 == pFVar11) {
      return;
    }
    if ((pFVar10->RecordIndex != 0xffffffff) && (pFVar10->Shader != (FRHIComputeShader *)0x0)) {
      if (((pFVar10->Shader->_padding_ & 0x20000000000) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Dispatch.Shader->HasShaderBundleUsage()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreShader.cpp"
                             ,0x60,L"All shaders in a bundle must specify CFLAG_ShaderBundle"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      SetComputePipelineState(param_1,pFVar10->Shader);
      if (param_4->ArrayNum != 0) {
        local_a8.DataPtr = param_4->DataPtr;
        local_a8.ArrayNum = param_4->ArrayNum;
        local_a8._12_4_ = *(undefined4 *)&param_4->field_0xc;
        local_98._8_8_ = (ulonglong)uStack_10c << 0x20;
        local_98.DataPtr = (FRHIShaderParameterResource *)0x0;
        local_88._8_8_ = (ulonglong)uStack_fc << 0x20;
        local_78._8_8_ = (ulonglong)uStack_ec << 0x20;
        local_88.DataPtr = (FRHIShaderParameter *)0x0;
        local_78.DataPtr = (uchar *)0x0;
        FRHIComputeCommandList::SetShaderParameters
                  (param_1,pFVar10->Shader,&local_78,&local_88,&local_98,&local_a8);
      }
      if (((pFVar10->Parameters).bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (0 < (pFVar10->Parameters).TypedValue.BindlessParameters.ArrayNum +
              (pFVar10->Parameters).TypedValue.Parameters.ArrayNum +
              (pFVar10->Parameters).TypedValue.ResourceParameters.ArrayNum) {
        if (((pFVar10->Parameters).bIsSet == false) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar3 = (pFVar10->Parameters).TypedValue.BindlessParameters.DataPtr;
        iVar12 = (pFVar10->Parameters).TypedValue.BindlessParameters.ArrayNum;
        if (((pFVar10->Parameters).bIsSet == false) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (pFVar10->Parameters).TypedValue.ResourceParameters.DataPtr;
        iVar1 = (pFVar10->Parameters).TypedValue.ResourceParameters.ArrayNum;
        if (((pFVar10->Parameters).bIsSet == false) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pFVar10->Parameters).TypedValue.Parameters.DataPtr;
        iVar2 = (pFVar10->Parameters).TypedValue.Parameters.ArrayNum;
        if (((pFVar10->Parameters).bIsSet == false) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_38.DataPtr = (pFVar10->Parameters).TypedValue.ParametersData.DataPtr;
        local_68._12_4_ = uStack_dc;
        local_68.ArrayNum = iVar12;
        local_58._12_4_ = uStack_cc;
        local_58.ArrayNum = iVar1;
        local_48._12_4_ = uStack_bc;
        local_48.ArrayNum = iVar2;
        local_38._12_4_ = uStack_ac;
        local_38.ArrayNum = (pFVar10->Parameters).TypedValue.ParametersData.ArrayNum;
        local_68.DataPtr = pFVar3;
        local_58.DataPtr = pFVar4;
        local_48.DataPtr = pFVar5;
        FRHIComputeCommandList::SetShaderParameters
                  (param_1,pFVar10->Shader,&local_38,&local_48,&local_58,&local_68);
      }
      if (GRHIGlobals.SupportsShaderRootConstants != false) {
        FRHIComputeCommandList::SetShaderRootConstants(param_1,&pFVar10->Constants);
      }
      iVar12 = param_2->ArgStride * pFVar10->RecordIndex + param_2->ArgOffset;
      if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
        puVar9 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
        *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
        **(undefined8 **)&param_1->field_0x30 = puVar9;
        *(undefined8 **)&param_1->field_0x30 = puVar9 + 1;
        puVar9[1] = 0;
        *puVar9 = &___7FRHICommandDispatchIndirectComputeShader__6B_;
        puVar9[2] = param_3;
        *(int *)(puVar9 + 3) = iVar12;
      }
      else {
        pIVar8 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
        (**(code **)(pIVar8->_padding_ + 0x30))(pIVar8,param_3,iVar12);
      }
    }
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// GetD3DMemoryStats @ 1446ddce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl UE::DXGIUtilities::GetD3DMemoryStats(IDXGIAdapter *param_1,FD3DMemoryStats *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_D3DUpdateVideoMemoryStats> FVar6;
  ulong64 uVar7;
  FColor_u_0 FVar8;
  FName FVar9;
  ulong64 uVar10;
  uint uVar11;
  undefined1 auStackY_138 [32];
  FColor_u_0 local_d8;
  uint uStack_d4;
  longlong *local_d0;
  FName local_c8;
  FName local_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  ulonglong uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  ulonglong uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar10 = 0;
  FVar6 = StatPtr_STAT_D3DUpdateVideoMemoryStats;
  if (StatPtr_STAT_D3DUpdateVideoMemoryStats ==
      (FThreadSafeStaticStat<FStat_STAT_D3DUpdateVideoMemoryStats>)0x0) {
    pFVar5 = ::FName::FName(&local_b8,"STAT_D3DUpdateVideoMemoryStats");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_D3DUpdateVideoMemoryStats>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3DUpdateVideoMemoryStats,*pFVar5,
                       L"Video Memory stats update time","STATGROUP_D3DMemory","STATCAT_Advanced",
                       L"D3D Video Memory",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar1 = false;
  bVar3 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  FVar8.Bits = (uint)FVar9.ComparisonIndex.Value;
  uVar11 = FVar9.Number;
  if ((FVar8.Bits != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_d8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d8._s_0,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar1 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.Bits = FVar8.Bits;
        uStack_d4 = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_d8._s_0,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\DXGIUtilities.cpp"
                   ,0x3a);
        bVar1 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_d8.Bits = FVar8.Bits;
      uStack_d4 = uVar11;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar2 = true;
      goto LAB_1446dde33;
    }
  }
  bVar2 = false;
  FVar9 = local_c8;
LAB_1446dde33:
  local_d0 = (longlong *)0x0;
  iVar4 = (**(code **)*param_1)(param_1,&_GUID_645967a4_1392_4310_a798_8053ce3e93fd,&local_d0);
  if (((-1 < iVar4) && (iVar4 = (**(code **)(*local_d0 + 0x70))(local_d0,0,0,&local_b0), -1 < iVar4)
      ) && (iVar4 = (**(code **)(*local_d0 + 0x70))(local_d0,0,1,&local_90), -1 < iVar4)) {
    if ((GVirtualMGPU == 0) && (uVar11 = 1, 1 < GNumExplicitGPUsForRendering)) {
      do {
        iVar4 = (**(code **)(*local_d0 + 0x70))(local_d0,uVar11,0,&local_70);
        if ((iVar4 < 0) ||
           (iVar4 = (**(code **)(*local_d0 + 0x70))(local_d0,uVar11,1,&local_50), iVar4 < 0))
        goto LAB_1446ddf9b;
        if (local_b0 < local_70) {
          local_a0 = local_60;
          uStack_98 = uStack_58;
          local_b0 = local_70;
          uStack_a8 = uStack_68;
          local_80 = local_40;
          uStack_7c = uStack_3c;
          uStack_78 = uStack_38;
          uStack_74 = uStack_34;
          local_90 = local_50;
          uStack_88 = uStack_48;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < GNumExplicitGPUsForRendering);
    }
    param_2->BudgetLocal = local_b0;
    uVar7 = uVar10;
    if (uStack_a8 <= local_b0) {
      uVar7 = local_b0 - uStack_a8;
    }
    param_2->BudgetSystem = local_90;
    param_2->UsedLocal = uStack_a8;
    param_2->UsedSystem = uStack_88;
    param_2->AvailableLocal = uVar7;
    uVar7 = uStack_a8 - local_b0;
    if (uStack_a8 <= local_b0) {
      uVar7 = uVar10;
    }
    param_2->DemotedLocal = uVar7;
    uVar7 = uVar10;
    if (uStack_88 <= local_90) {
      uVar7 = local_90 - uStack_88;
    }
    param_2->AvailableSystem = uVar7;
    uVar7 = uStack_88 - local_90;
    if (uStack_88 <= local_90) {
      uVar7 = uVar10;
    }
    param_2->DemotedSystem = uVar7;
    iVar4 = 0;
  }
LAB_1446ddf9b:
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FThreadStats::AddMessage(FVar9,CycleScopeEnd);
  }
  return iVar4;
}

// GetDiagnosticMessage @ 1446de100

FString * __cdecl UE::RHICore::GetDiagnosticMessage(uint param_1)

{
  ForAnyElementType FVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GShaderDiagnosticDatasCS);
  for (FVar1 = GShaderDiagnosticDatas.AllocatorInstance;
      (pFVar2 = (FScriptContainerElement *)0x0,
      FVar1.Data !=
      GShaderDiagnosticDatas.AllocatorInstance.Data +
      (longlong)GShaderDiagnosticDatas.ArrayNum * 0x18 &&
      (pFVar2 = FVar1.Data, *(uint *)FVar1.Data != param_1)); FVar1.Data = FVar1.Data + 0x18) {
  }
  pFVar3 = pFVar2 + 8;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar3 = (FScriptContainerElement *)0x0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GShaderDiagnosticDatasCS);
  return (FString *)pFVar3;
}

// GetFormatString @ 1446de2b0

wchar_t * __cdecl UE::DXGIUtilities::GetFormatString(DXGI_FORMAT_conflict param_1)

{
  switch(param_1) {
  case DXGI_FORMAT_UNKNOWN:
    return L"DXGI_FORMAT_UNKNOWN";
  default:
    return L"";
  case DXGI_FORMAT_R32G32B32A32_FLOAT:
    return L"DXGI_FORMAT_R32G32B32A32_FLOAT";
  case DXGI_FORMAT_R16G16B16A16_FLOAT:
    return L"DXGI_FORMAT_R16G16B16A16_FLOAT";
  case DXGI_FORMAT_R16G16B16A16_UINT:
    return L"DXGI_FORMAT_R16G16B16A16_UINT";
  case DXGI_FORMAT_R32G32_FLOAT:
    return L"DXGI_FORMAT_R32G32_FLOAT";
  case DXGI_FORMAT_R32G8X24_TYPELESS:
    return L"DXGI_FORMAT_R32G8X24_TYPELESS";
  case DXGI_FORMAT_D32_FLOAT_S8X24_UINT:
    return L"DXGI_FORMAT_D32_FLOAT_S8X24_UINT";
  case DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS:
    return L"DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS";
  case DXGI_FORMAT_R10G10B10A2_UNORM:
    return L"DXGI_FORMAT_R10G10B10A2_UNORM";
  case DXGI_FORMAT_R8G8B8A8_TYPELESS:
    return L"DXGI_FORMAT_R8G8B8A8_TYPELESS";
  case DXGI_FORMAT_R8G8B8A8_UNORM:
    return L"DXGI_FORMAT_R8G8B8A8_UNORM";
  case DXGI_FORMAT_R16G16_FLOAT:
    return L"DXGI_FORMAT_R16G16_FLOAT";
  case DXGI_FORMAT_R16G16_UNORM:
    return L"DXGI_FORMAT_R16G16_UNORM";
  case DXGI_FORMAT_R16G16_UINT:
    return L"DXGI_FORMAT_R16G16_UINT";
  case DXGI_FORMAT_R16G16_SNORM:
    return L"DXGI_FORMAT_R16G16_SNORM";
  case DXGI_FORMAT_R32_FLOAT:
    return L"DXGI_FORMAT_R32_FLOAT";
  case DXGI_FORMAT_D24_UNORM_S8_UINT:
    return L"DXGI_FORMAT_D24_UNORM_S8_UINT";
  case DXGI_FORMAT_R24_UNORM_X8_TYPELESS:
    return L"DXGI_FORMAT_R24_UNORM_X8_TYPELESS";
  case DXGI_FORMAT_R8G8_SNORM:
    return L"DXGI_FORMAT_R8G8_SNORM";
  case DXGI_FORMAT_R8_UNORM:
    return L"DXGI_FORMAT_R8_UNORM";
  case DXGI_FORMAT_R1_UNORM:
    return L"DXGI_FORMAT_R1_UNORM";
  case DXGI_FORMAT_BC1_UNORM:
    return L"DXGI_FORMAT_BC1_UNORM";
  case DXGI_FORMAT_BC2_UNORM:
    return L"DXGI_FORMAT_BC2_UNORM";
  case DXGI_FORMAT_BC3_UNORM:
    return L"DXGI_FORMAT_BC3_UNORM";
  case DXGI_FORMAT_BC4_UNORM:
    return L"DXGI_FORMAT_BC4_UNORM";
  case DXGI_FORMAT_BC5_UNORM:
    return L"DXGI_FORMAT_BC5_UNORM";
  case DXGI_FORMAT_B8G8R8A8_UNORM:
    return L"DXGI_FORMAT_B8G8R8A8_UNORM";
  case DXGI_FORMAT_B8G8R8X8_UNORM:
    return L"DXGI_FORMAT_B8G8R8X8_UNORM";
  case DXGI_FORMAT_B8G8R8A8_TYPELESS:
    return L"DXGI_FORMAT_B8G8R8A8_TYPELESS";
  case DXGI_FORMAT_BC6H_UF16:
    return L"DXGI_FORMAT_BC6H_UF16";
  case DXGI_FORMAT_BC7_UNORM:
    return L"DXGI_FORMAT_BC7_UNORM";
  }
}

// GetShaderBinaryDebugHashDXBC @ 1446de530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::ShaderBinaryUtilities::GetShaderBinaryDebugHashDXBC
          (void *param_1,uint param_2,FShaderDebugData *param_3)

{
  FString *pFVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FString *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  FString local_f8;
  FShaderDebugData local_e8;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  FString local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_2 < 0x20) {
    if (1 < (byte)LogRHICore._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHICore);
      return;
    }
  }
  else {
    uVar13 = 0;
    uVar15 = (ulonglong)param_2;
    local_e8.PDBName.Data.ArrayNum = 0;
    local_e8.PDBName.Data.ArrayMax = 0;
    if (uVar15 < 0x20) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\ShaderBinaryUtilities.h"
                         ,0x56,L"Parsing beyond EOS");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      local_70 = 0;
      uStack_68 = 0;
      uVar10 = uVar13;
    }
    else {
      local_70 = *(undefined8 *)param_1;
      uStack_68 = *(undefined8 *)((longlong)param_1 + 8);
      uVar10 = 0x20;
      local_e8.PDBName.Data.ArrayNum = 0x20;
      local_e8.PDBName.Data.ArrayMax = 0;
      local_60 = *(undefined4 *)((longlong)param_1 + 0x10);
      uStack_5c = *(undefined4 *)((longlong)param_1 + 0x14);
      uStack_58 = *(undefined4 *)((longlong)param_1 + 0x18);
      uStack_54 = *(uint *)((longlong)param_1 + 0x1c);
    }
    if (uStack_54 != 0) {
      do {
        uVar12 = 0;
        if (uVar15 < uVar10 + 4) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\ShaderBinaryUtilities.h"
                             ,0x56,L"Parsing beyond EOS");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          uVar12 = (ulonglong)*(uint *)(uVar10 + (longlong)param_1);
          local_e8.PDBName.Data._8_8_ = uVar10 + 4;
        }
        uVar10 = uVar12 + 8;
        if (uVar15 < uVar10) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\ShaderBinaryUtilities.h"
                             ,0x56,L"Parsing beyond EOS");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_e8.Hash.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        else {
          local_e8.Hash.Data.AllocatorInstance.Data =
               *(FScriptContainerElement **)(uVar12 + (longlong)param_1);
          iVar7 = (int)local_e8.Hash.Data.AllocatorInstance.Data;
          if (iVar7 == 0x30565350) {
            uVar11 = uVar12 + 0xc;
            if (uVar15 < uVar11) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\ShaderBinaryUtilities.h"
                                 ,0x56,L"Parsing beyond EOS");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            else {
              uVar14 = *(uint *)(uVar10 + (longlong)param_1);
              if (0x33 < uVar14) {
                if (uVar15 < uVar12 + 0x40) {
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("false",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\ShaderBinaryUtilities.h"
                                     ,0x4a,L"Parsing beyond EOS");
                  if (bVar6) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  local_88 = 0;
                  uStack_84 = 0;
                  uStack_80 = 0;
                  uStack_7c = 0;
                  uVar10 = 0;
                  local_a8 = 0;
                  uStack_a0 = 0;
                  local_98 = 0;
                  uStack_90 = 0;
                }
                else {
                  local_a8 = *(undefined8 *)(uVar11 + (longlong)param_1);
                  uStack_a0 = ((undefined8 *)(uVar11 + (longlong)param_1))[1];
                  uVar10 = (ulonglong)*(uint *)(uVar12 + 0x3c + (longlong)param_1);
                  puVar2 = (undefined8 *)(uVar12 + 0x1c + (longlong)param_1);
                  local_98 = *puVar2;
                  uStack_90 = puVar2[1];
                  puVar3 = (undefined4 *)(uVar12 + 0x2c + (longlong)param_1);
                  local_88 = *puVar3;
                  uStack_84 = puVar3[1];
                  uStack_80 = puVar3[2];
                  uStack_7c = puVar3[3];
                }
                uVar11 = uVar11 + uVar14;
                uVar14 = (uint)uVar10;
                uVar12 = uVar11 + 4;
                local_78 = uVar14;
                if (uVar15 < uVar12) {
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("false",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\ShaderBinaryUtilities.h"
                                     ,0x56,L"Parsing beyond EOS");
                  uVar12 = uVar11;
                  if (bVar6) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                }
                else {
                  iVar7 = *(int *)(uVar11 + (longlong)param_1);
                  if (iVar7 != 0) {
                    uVar11 = uVar11 + 8;
                    if (uVar15 < uVar11) {
                      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("false",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\ShaderBinaryUtilities.h"
                                         ,0x56,L"Parsing beyond EOS");
                      if (bVar6) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      iVar8 = 0;
                      uVar11 = uVar12;
                    }
                    else {
                      iVar8 = *(int *)(uVar12 + (longlong)param_1);
                    }
                    uVar12 = uVar11 + (uint)(iVar8 * iVar7);
                  }
                }
                if (uVar15 < uVar12 + 4) {
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("false",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\ShaderBinaryUtilities.h"
                                     ,0x56,L"Parsing beyond EOS");
                  if (bVar6) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                }
                else if (uVar14 < *(uint *)(uVar12 + (longlong)param_1)) {
                  ::FString::FString(&local_e8.FunctionName,
                                     (char *)(uVar10 + uVar12 + 4 + (longlong)param_1));
                  if (param_3 != &local_e8) {
                    pFVar4 = (param_3->FunctionName).Data.AllocatorInstance.Data;
                    if (pFVar4 != (FScriptContainerElement *)0x0) {
                      FMemory::Free(pFVar4);
                    }
                    (param_3->FunctionName).Data.AllocatorInstance.Data =
                         local_e8.FunctionName.Data.AllocatorInstance.Data;
                    (param_3->FunctionName).Data.ArrayNum = local_e8.FunctionName.Data.ArrayNum;
                    (param_3->FunctionName).Data.ArrayMax = local_e8.FunctionName.Data.ArrayMax;
                    local_e8.FunctionName.Data.ArrayNum = 0;
                    local_e8.FunctionName.Data.ArrayMax = 0;
                    local_e8.FunctionName.Data.AllocatorInstance.Data =
                         (FScriptContainerElement *)0x0;
                  }
                  if (local_e8.FunctionName.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_e8.FunctionName.Data.AllocatorInstance.Data);
                  }
                  goto LAB_1446dea02;
                }
                if (1 < (byte)LogRHICore._0_1_) {
                  Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHICore);
                }
              }
            }
          }
          else if (iVar7 == 0x48534148) {
            if (uVar15 < uVar12 + 0x1c) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\ShaderBinaryUtilities.h"
                                 ,0x56,L"Parsing beyond EOS");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar16 = 0;
              uVar17 = 0;
              local_b0 = 0;
            }
            else {
              uVar16 = *(undefined8 *)(uVar10 + (longlong)param_1);
              uVar17 = ((undefined8 *)(uVar10 + (longlong)param_1))[1];
              local_b0 = *(undefined4 *)(uVar12 + 0x18 + (longlong)param_1);
            }
            local_e8.Hash.Data.ArrayNum = (int)uVar16;
            local_e8.Hash.Data.ArrayMax = (int)((ulonglong)uVar16 >> 0x20);
            uStack_b8 = (undefined4)uVar17;
            uStack_b4 = (undefined4)((ulonglong)uVar17 >> 0x20);
            local_40 = CONCAT44(uStack_b8,local_e8.Hash.Data.ArrayMax);
            uStack_38 = CONCAT44(local_b0,uStack_b4);
            local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_f8.Data.ArrayNum = 0;
            local_f8.Data.ArrayMax = 0;
            BytesToHex((uchar *)&local_40,0x10,&local_f8);
            pFVar1 = &param_3->Hash;
            if (pFVar1 != &local_f8) {
              pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
              if (pFVar4 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar4);
              }
              (pFVar1->Data).AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
              (param_3->Hash).Data.ArrayNum = local_f8.Data.ArrayNum;
              (param_3->Hash).Data.ArrayMax = local_f8.Data.ArrayMax;
              local_f8.Data.ArrayNum = 0;
              local_f8.Data.ArrayMax = 0;
              local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
          }
          else if (iVar7 == 0x4e444c49) {
            uVar12 = uVar12 + 0xc;
            if (uVar15 < uVar12) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\ShaderBinaryUtilities.h"
                                 ,0x56,L"Parsing beyond EOS");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_e8.PDBName.Data.AllocatorInstance.Data._0_4_ = 0;
            }
            else {
              local_e8.PDBName.Data.AllocatorInstance.Data._0_4_ =
                   *(uint *)(uVar10 + (longlong)param_1);
              if ((uint)local_e8.PDBName.Data.AllocatorInstance.Data >> 0x10 == 0x24) {
                if (uVar15 - uVar12 < 0x24) {
                  if (3 < (byte)LogRHICore._0_1_) {
                    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHICore);
                  }
                }
                else {
                  pFVar9 = ::FString::ConstructFromPtrSize
                                     (&local_50,(char *)(uVar12 + (longlong)param_1),0x24);
                  pFVar1 = &param_3->PDBName;
                  if (pFVar1 != pFVar9) {
                    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
                    if (pFVar4 != (FScriptContainerElement *)0x0) {
                      FMemory::Free(pFVar4);
                    }
                    (pFVar1->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
                    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    (param_3->PDBName).Data.ArrayNum = (pFVar9->Data).ArrayNum;
                    (param_3->PDBName).Data.ArrayMax = (pFVar9->Data).ArrayMax;
                    (pFVar9->Data).ArrayNum = 0;
                    (pFVar9->Data).ArrayMax = 0;
                  }
                  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_50.Data.AllocatorInstance.Data);
                  }
                }
                goto LAB_1446dea02;
              }
            }
            if (3 < (byte)LogRHICore._0_1_) {
              Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHICore);
            }
          }
        }
LAB_1446dea02:
        uVar14 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar14;
        uVar10 = local_e8.PDBName.Data._8_8_;
      } while (uVar14 < uStack_54);
    }
  }
  return;
}

// InitializeBeforeDeviceCreation @ 1446df5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::RHICore::Nvidia::Aftermath::InitializeBeforeDeviceCreation(bool param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar4;
  wchar_t *pwVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  code *pcVar8;
  uint uVar9;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  if ((GDynamicRHI == (FDynamicRHI *)0x0) ||
     (iVar2 = (**(code **)(GDynamicRHI->_padding_ + 0x28))(), iVar2 != 2)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pwVar5 = FCommandLine::Get();
      bVar1 = FParse::Param(pwVar5,L"novendordevice");
      bAllowVendorDevice = !bVar1;
      _Init_thread_footer(&::_TSS0);
    }
    if (bAllowVendorDevice == false) {
      if (4 < (byte)LogNvidiaAftermath._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNvidiaAftermath);
      }
    }
    else {
      bVar1 = RHI::ShouldEnableGPUCrashFeature
                        ((IConsoleVariable *)CVarAftermath._padding_,L"nvaftermath");
      if (bVar1) {
        pTVar4 = &FPaths::EngineDir(&local_18)->Data;
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::
        TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                  (&local_28,pTVar4,0x2f - (uint)(pTVar4->ArrayNum != 0));
        ::FString::PathAppend
                  ((FString *)&local_28,L"Binaries/ThirdParty/NVIDIA/NVaftermath/Win64/",0x2d);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_28.ArrayNum != 0) {
          FVar7.Data = local_28.AllocatorInstance.Data;
        }
        FWindowsPlatformProcess::PushDllDirectory((wchar_t *)FVar7.Data);
        DllHandle = FWindowsPlatformProcess::GetDllHandle(L"GFSDK_Aftermath_Lib.x64.dll");
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_28.ArrayNum != 0) {
          FVar7.Data = local_28.AllocatorInstance.Data;
        }
        FWindowsPlatformProcess::PopDllDirectory((wchar_t *)FVar7.Data);
        if ((DllHandle == (void *)0x0) && (2 < (byte)LogNvidiaAftermath._0_1_)) {
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNvidiaAftermath);
        }
        if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.AllocatorInstance.Data);
        }
      }
      else if (4 < (byte)LogNvidiaAftermath._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNvidiaAftermath);
      }
    }
  }
  else if (4 < (byte)LogNvidiaAftermath._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNvidiaAftermath);
  }
  if (DllHandle != (void *)0x0) {
    pcVar6 = (code *)0x0;
    uVar9 = 0;
    Flags = 0;
    pwVar5 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar5,L"nvaftermathmarkers");
    if ((bVar1) ||
       (iVar2 = (**(code **)(*(longlong *)CVarAftermath_Markers._padding_ + 200))(), iVar2 != 0)) {
      uVar9 = 1;
    }
    Flags = Flags | uVar9;
    pwVar5 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar5,L"nvaftermathresources");
    uVar9 = 0;
    if ((bVar1) ||
       (iVar2 = (**(code **)(*(longlong *)CVarAftermath_Resources._padding_ + 200))(), uVar3 = uVar9
       , iVar2 != 0)) {
      uVar3 = 2;
    }
    Flags = Flags | uVar3;
    pwVar5 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar5,L"nvaftermathcallstack");
    if ((bVar1) ||
       (iVar2 = (**(code **)(*(longlong *)CVarAftermath_Callstack._padding_ + 200))(), uVar3 = uVar9
       , iVar2 != 0)) {
      uVar3 = 0x40000000;
    }
    Flags = Flags | uVar3;
    pwVar5 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar5,L"nvAftermathDumpShaderDebugInfo");
    if ((bVar1) ||
       (iVar2 = (**(code **)(*(longlong *)CVarAftermath_DumpShaderDebugInfo._padding_ + 200))(),
       uVar3 = uVar9, iVar2 != 0)) {
      uVar3 = 8;
    }
    Flags = Flags | uVar3;
    pwVar5 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar5,L"nvAftermathShaderErrorReporting");
    if ((bVar1) ||
       (iVar2 = (**(code **)(*(longlong *)CVarAftermath_ShaderErrorReporting._padding_ + 200))(),
       uVar3 = uVar9, iVar2 != 0)) {
      uVar3 = 0x10;
    }
    Flags = Flags | uVar3;
    pwVar5 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar5,L"nvaftermathall");
    if ((bVar1) ||
       (iVar2 = (**(code **)(*(longlong *)CVarAftermath_TrackAll._padding_ + 200))(), iVar2 != 0)) {
      uVar9 = 0x4000001b;
    }
    Flags = Flags | uVar9;
    pcVar8 = pcVar6;
    if (param_1) {
      pcVar8 = Callback_ResolveMarker;
    }
    if ((Flags & 8) != 0) {
      pcVar6 = Callback_ShaderDebugInfo;
    }
    iVar2 = GFSDK_Aftermath_EnableGpuCrashDumps
                      (0x217,3,1,Callback_GpuCrashDump,pcVar6,Callback_GpuCrashDumpDesc,pcVar8,0);
    if (iVar2 == 1) {
      if (4 < (byte)LogNvidiaAftermath._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNvidiaAftermath);
      }
      bEnabled = true;
    }
    else if (4 < (byte)LogNvidiaAftermath._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNvidiaAftermath);
      return;
    }
    return;
  }
  return;
}

// InitializeBeforeDeviceCreation @ 1446dfa00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::RHICore::Intel::GPUCrashDumps::InitializeBeforeDeviceCreation(uint param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 local_28;
  undefined8 local_20;
  code *local_18;
  
  bVar1 = RHI::ShouldEnableGPUCrashFeature
                    ((IConsoleVariable *)CVarIntelCrashDumps._padding_,L"intelbreadcrumbs");
  if (bVar1) {
    iVar2 = (**(code **)(*(longlong *)CVarIntelCrashDumps_Markers._padding_ + 200))();
    Flags = Flags | 0 < iVar2;
    iVar2 = (**(code **)(*(longlong *)CVarIntelCrashDumps_Resources._padding_ + 200))();
    uVar3 = 0;
    if (0 < iVar2) {
      uVar3 = 2;
    }
    Flags = Flags | uVar3;
    iVar2 = (**(code **)(*(longlong *)CVarIntelCrashDumps_Callstack._padding_ + 200))();
    uVar3 = 0;
    if (0 < iVar2) {
      uVar3 = 8;
    }
    Flags = Flags | uVar3;
    iVar2 = INTC_LoadExtensionsLibrary(0,0x8086,param_1);
    if (iVar2 < 0) {
      if (4 < (byte)LogIntelBreadcrumbs._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIntelBreadcrumbs);
        return;
      }
    }
    else {
      local_18 = ResolveMarkerCb;
      local_28 = 0;
      local_20 = 0;
      iVar2 = INTC_EnableGpuCrashDumps(Flags,&local_28,0);
      if (iVar2 == 0) {
        bEnabled = true;
        if (4 < (byte)LogIntelBreadcrumbs._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIntelBreadcrumbs);
          return;
        }
      }
      else {
        if (4 < (byte)LogIntelBreadcrumbs._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIntelBreadcrumbs);
        }
        if ((iVar2 == -0x7fffbffe) && (4 < (byte)LogIntelBreadcrumbs._0_1_)) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIntelBreadcrumbs);
          return;
        }
      }
    }
  }
  else if (4 < (byte)LogIntelBreadcrumbs._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIntelBreadcrumbs);
    return;
  }
  return;
}

// InitializeDevice @ 1446dfba0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::RHICore::Nvidia::Aftermath::InitializeDevice
          (TFunctionRef<unsigned_int___cdecl(unsigned_int)> *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ForAnyElementType FVar4;
  FStaticBasicLogRecord *pFVar5;
  wchar_t *pwVar6;
  uint uVar7;
  uint local_res10 [6];
  FString local_28;
  FString local_18;
  
  if (bEnabled) {
    bVar2 = IsRHIDeviceNVIDIA();
    if (bVar2) {
      local_res10[0] = Flags;
      iVar3 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res10);
      if (iVar3 == 1) {
        uVar1 = Flags;
        if (4 < (byte)LogNvidiaAftermath._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNvidiaAftermath);
          uVar1 = Flags;
        }
        do {
          if (uVar1 == 0) {
            pwVar6 = L"false";
            if (bEnabled != false) {
              pwVar6 = L"true";
            }
            ::FString::FString(&local_28,pwVar6);
            ::FString::FString(&local_18,L"RHI.Aftermath");
            FGenericCrashContext::SetEngineData(&local_18,&local_28);
            if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_18.Data.AllocatorInstance.Data);
            }
            if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28.Data.AllocatorInstance.Data);
            }
            return true;
          }
          uVar7 = -uVar1 & uVar1;
          if (uVar7 == 1) {
            if (4 < (byte)LogNvidiaAftermath._0_1_) {
              pFVar5 = &::LOG_Static;
LAB_1446dfdbd:
              Logging::Private::BasicLog<5>(pFVar5,(FLogCategoryBase *)&LogNvidiaAftermath);
            }
          }
          else if (uVar7 == 2) {
            if (4 < (byte)LogNvidiaAftermath._0_1_) {
              pFVar5 = &::LOG_Static;
              goto LAB_1446dfdbd;
            }
          }
          else if (uVar7 == 8) {
            if (4 < (byte)LogNvidiaAftermath._0_1_) {
              pFVar5 = (FStaticBasicLogRecord *)&PTR_u____Feature__Gen_150da9418;
              goto LAB_1446dfdbd;
            }
          }
          else if (uVar7 == 0x10) {
            if (4 < (byte)LogNvidiaAftermath._0_1_) {
              pFVar5 = &::LOG_Static;
              goto LAB_1446dfdbd;
            }
          }
          else if (uVar7 == 0x40000000) {
            if (4 < (byte)LogNvidiaAftermath._0_1_) {
              pFVar5 = &::LOG_Static;
              goto LAB_1446dfdbd;
            }
          }
          else if (4 < (byte)LogNvidiaAftermath._0_1_) {
            Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNvidiaAftermath);
          }
          uVar1 = uVar1 & uVar1 - 1;
        } while( true );
      }
      if (4 < (byte)LogNvidiaAftermath._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNvidiaAftermath);
      }
    }
    else if (2 < (byte)LogNvidiaAftermath._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNvidiaAftermath);
    }
    bEnabled = false;
    ::FString::FString(&local_28,L"false");
    ::FString::FString(&local_18,L"RHI.Aftermath");
    FGenericCrashContext::SetEngineData(&local_18,&local_28);
    FVar4.Data = local_28.Data.AllocatorInstance.Data;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      FVar4.Data = local_28.Data.AllocatorInstance.Data;
    }
  }
  else {
    if (4 < (byte)LogNvidiaAftermath._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNvidiaAftermath);
    }
    pwVar6 = L"false";
    if (bEnabled != false) {
      pwVar6 = L"true";
    }
    ::FString::FString(&local_18,pwVar6);
    ::FString::FString(&local_28,L"RHI.Aftermath");
    FGenericCrashContext::SetEngineData(&local_28,&local_18);
    FVar4.Data = local_18.Data.AllocatorInstance.Data;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar4.Data = local_18.Data.AllocatorInstance.Data;
    }
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  return false;
}

// IsEnabled @ 1446e0340

bool __cdecl UE::RHICore::Nvidia::Aftermath::IsEnabled(void)

{
  return bEnabled;
}

// IsEnabled @ 1446e0350

bool __cdecl UE::RHICore::Intel::GPUCrashDumps::IsEnabled(void)

{
  return bEnabled;
}

// IsShaderRegistrationEnabled @ 1446e0360

bool __cdecl UE::RHICore::Nvidia::Aftermath::IsShaderRegistrationEnabled(void)

{
  int iVar1;
  
  if (bEnabled) {
    iVar1 = (**(code **)(*(longlong *)CVarAftermath_ShaderRegistration._padding_ + 200))();
    if (iVar1 != 0) {
      return true;
    }
  }
  return false;
}

// LoadAftermathDLL @ 1446e03c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::RHICore::Nvidia::Aftermath::LoadAftermathDLL(void)

{
  bool bVar1;
  int iVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  if ((GDynamicRHI != (FDynamicRHI *)0x0) &&
     (iVar2 = (**(code **)(GDynamicRHI->_padding_ + 0x28))(), iVar2 == 2)) {
    if ((byte)LogNvidiaAftermath._0_1_ < 5) {
      return;
    }
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNvidiaAftermath);
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar4 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar4,L"novendordevice");
    bAllowVendorDevice = !bVar1;
    _Init_thread_footer(&::_TSS0);
  }
  if (bAllowVendorDevice == false) {
    if (4 < (byte)LogNvidiaAftermath._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNvidiaAftermath);
      return;
    }
  }
  else {
    bVar1 = RHI::ShouldEnableGPUCrashFeature
                      ((IConsoleVariable *)CVarAftermath._padding_,L"nvaftermath");
    if (bVar1) {
      pTVar3 = &FPaths::EngineDir(&local_18)->Data;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&local_28,pTVar3,0x2f - (uint)(pTVar3->ArrayNum != 0));
      ::FString::PathAppend
                ((FString *)&local_28,L"Binaries/ThirdParty/NVIDIA/NVaftermath/Win64/",0x2d);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_28.ArrayNum != 0) {
        FVar5.Data = local_28.AllocatorInstance.Data;
      }
      FWindowsPlatformProcess::PushDllDirectory((wchar_t *)FVar5.Data);
      DllHandle = FWindowsPlatformProcess::GetDllHandle(L"GFSDK_Aftermath_Lib.x64.dll");
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_28.ArrayNum != 0) {
        FVar5.Data = local_28.AllocatorInstance.Data;
      }
      FWindowsPlatformProcess::PopDllDirectory((wchar_t *)FVar5.Data);
      if ((DllHandle == (void *)0x0) && (2 < (byte)LogNvidiaAftermath._0_1_)) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNvidiaAftermath);
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
    }
    else if (4 < (byte)LogNvidiaAftermath._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNvidiaAftermath);
      return;
    }
  }
  return;
}

// OnGPUCrash @ 1446e0d90

FCrashResult * __cdecl
UE::RHICore::Nvidia::Aftermath::OnGPUCrash(FCrashResult *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  FCrashResult *pFVar5;
  ForAnyElementType FVar6;
  TArray<UE::RHICore::Nvidia::Aftermath::FCrashResult,TSizedDefaultAllocator<32>_> local_88;
  FCrashResult local_78;
  FCrashResult local_48;
  
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  OnGPUCrash(&local_88);
  iVar2 = local_88.ArrayNum;
  if (local_88.ArrayNum == 0) {
    local_48.OutputLog.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.OutputLog.Data.ArrayNum = 0;
    local_48.OutputLog.Data.ArrayMax = 0;
    local_48.DumpPath.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_48.DumpPath.field0_0x0.TypedValue.Data.ArrayNum = 0;
    local_48.DumpPath.field0_0x0.TypedValue.Data.ArrayMax = -1;
    local_48.GPUFaultAddress.bIsSet = false;
    FCrashResult::FCrashResult(__return_storage_ptr__,&local_48);
    if ((local_48.DumpPath.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_48.DumpPath.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_48.DumpPath.field0_0x0.TypedValue.Data.AllocatorInstance.Data);
    }
    FVar6.Data = local_88.AllocatorInstance.Data;
    if (local_48.OutputLog.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.OutputLog.Data.AllocatorInstance.Data);
      FVar6.Data = local_88.AllocatorInstance.Data;
    }
  }
  else {
    uVar4 = 0;
    if ((int)(local_88.ArrayNum - 1U) < local_88.ArrayNum) {
      uVar4 = ~(local_88.ArrayNum - 1U) >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FCrashResult *)(*pcVar1)();
      return pFVar5;
    }
    FVar6.Data = local_88.AllocatorInstance.Data;
    ::FString::FString(&local_78.OutputLog,
                       (FString *)(local_88.AllocatorInstance.Data + (longlong)iVar2 * 0x30 + -0x30)
                      );
    local_78.DumpPath.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_78.DumpPath.field0_0x0.TypedValue.Data.ArrayNum = 0;
    local_78.DumpPath.field0_0x0.TypedValue.Data.ArrayMax = -1;
    if (*(int *)(FVar6.Data + (longlong)iVar2 * 0x30 + -0x14) != -1) {
      ::FString::FString((FString *)&local_78.DumpPath,
                         (FString *)(FVar6.Data + (longlong)iVar2 * 0x30 + -0x20));
    }
    local_78.GPUFaultAddress.bIsSet = *(bool *)(FVar6.Data + (longlong)iVar2 * 0x30 + -8);
    if ((FScriptContainerElement)local_78.GPUFaultAddress.bIsSet != (FScriptContainerElement)0x0) {
      local_78.GPUFaultAddress.TypedValue =
           *(ulong64 *)&FVar6.Data[(longlong)iVar2 * 0x30 + -0x10].field_0x0;
    }
    FCrashResult::FCrashResult(__return_storage_ptr__,&local_78);
    if ((local_78.DumpPath.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_78.DumpPath.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_78.DumpPath.field0_0x0.TypedValue.Data.AllocatorInstance.Data);
    }
    if (local_78.OutputLog.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.OutputLog.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<UE::RHICore::Nvidia::Aftermath::FCrashResult,int>((FCrashResult *)FVar6.Data,iVar2);
  if ((FCrashResult *)FVar6.Data != (FCrashResult *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  return __return_storage_ptr__;
}

// OnGPUCrash @ 1446e0f40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::RHICore::Nvidia::Aftermath::OnGPUCrash
          (TArray<UE::RHICore::Nvidia::Aftermath::FCrashResult,TSizedDefaultAllocator<32>_> *param_1
          )

{
  double dVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  wchar_t *pwVar6;
  float fVar7;
  float fVar8;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  FString local_58;
  FString local_48 [4];
  
  if (bEnabled) {
    QueryPerformanceCounter(&local_res10);
    dVar1 = (double)CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart) *
            FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
    fVar7 = (float)(**(code **)(*(longlong *)CVarAftermath_DumpProcessWaitTime._padding_ + 0xd0))();
    fVar8 = (float)(**(code **)(*(longlong *)CVarAftermath_DumpStartWaitTime._padding_ + 0xd0))();
    iVar2 = GFSDK_Aftermath_GetCrashDumpStatus(&local_res10);
    while (iVar2 == 1) {
      switch(local_res10.s.LowPart) {
      case 0:
        QueryPerformanceCounter(&local_res18);
        if ((double)fVar8 + dVar1 <=
            (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000) {
          if ((byte)LogNvidiaAftermath._0_1_ < 3) {
            return false;
          }
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNvidiaAftermath);
          return false;
        }
        break;
      case 1:
      case 3:
        QueryPerformanceCounter(&local_res20);
        if ((double)fVar7 + dVar1 <=
            (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000) {
          if ((byte)LogNvidiaAftermath._0_1_ < 3) {
            return false;
          }
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNvidiaAftermath);
          return false;
        }
        break;
      case 2:
        if ((byte)LogNvidiaAftermath._0_1_ < 3) {
          CrashIntermediates.Results.ArrayNum = CrashIntermediates.Results.ArrayNum;
          CrashIntermediates.Results.ArrayMax = CrashIntermediates.Results.ArrayMax;
          return false;
        }
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNvidiaAftermath);
        return false;
      case 4:
        AcquireSRWLockShared((PSRWLOCK)&CrashIntermediates);
        if (param_1 != &CrashIntermediates.Results) {
          DestructItems<UE::RHICore::Nvidia::Aftermath::FCrashResult,int>
                    ((FCrashResult *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
          pFVar3 = (param_1->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (param_1->AllocatorInstance).Data = CrashIntermediates.Results.AllocatorInstance.Data;
          CrashIntermediates.Results.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          param_1->ArrayNum = CrashIntermediates.Results.ArrayNum;
          param_1->ArrayMax = CrashIntermediates.Results.ArrayMax;
          CrashIntermediates.Results.ArrayNum = 0;
          CrashIntermediates.Results.ArrayMax = 0;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        pFVar5 = pFVar3 + (longlong)param_1->ArrayNum * 0x30;
        for (; (pFVar4 = (FScriptContainerElement *)0x0, pFVar3 != pFVar5 &&
               (pFVar4 = pFVar3, *(int *)(pFVar3 + 0x1c) == -1)); pFVar3 = pFVar3 + 0x30) {
        }
        pwVar6 = L"false";
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          pwVar6 = L"true";
        }
        ::FString::FString(local_48,pwVar6);
        ::FString::FString(&local_58,L"RHI.HasAftermathCrashDump");
        FGenericCrashContext::SetEngineData(&local_58,local_48);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
        }
        ReleaseSRWLockShared((PSRWLOCK)&CrashIntermediates);
        return true;
      default:
        if ((byte)LogNvidiaAftermath._0_1_ < 3) {
          CrashIntermediates.Results.ArrayNum = CrashIntermediates.Results.ArrayNum;
          CrashIntermediates.Results.ArrayMax = CrashIntermediates.Results.ArrayMax;
          return false;
        }
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNvidiaAftermath);
        return false;
      }
      FWindowsPlatformProcess::Sleep(__real_3c23d70a);
      iVar2 = GFSDK_Aftermath_GetCrashDumpStatus(&local_res10);
    }
    if (2 < (byte)LogNvidiaAftermath._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNvidiaAftermath);
    }
  }
  return false;
}

// OnGPUCrash @ 1446e1270

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UE::RHICore::Intel::GPUCrashDumps::OnGPUCrash(void)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  FStaticBasicLogRecord *pFVar4;
  uint uVar6;
  float fVar8;
  double dVar9;
  int local_res8 [2];
  int local_res10 [2];
  LARGE_INTEGER local_res18;
  ForAnyElementType local_38;
  int local_30 [10];
  ulonglong uVar5;
  ulonglong uVar7;
  
  if (bEnabled) {
    QueryPerformanceCounter(&local_res18);
    dVar1 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    fVar8 = (float)(**(code **)(*(longlong *)CVarIntelCrashDumps_DumpWaitTime._padding_ + 0xd0))();
    uVar5 = 0;
    dVar1 = (double)fVar8 + dVar1 + __real_4170000000000000;
    iVar2 = INTC_GetGpuCrashDump(local_res10);
    fVar8 = __real_3c23d70a;
    uVar7 = uVar5;
    while (-1 < iVar2) {
      if (local_res10[0] != 0) {
        if (2 < (byte)LogIntelBreadcrumbs._0_1_) {
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIntelBreadcrumbs);
        }
        iVar2 = INTC_RetrieveGpuCrashDump(&CrashDumpInfo);
        if (iVar2 < 0) {
          if ((byte)LogIntelBreadcrumbs._0_1_ < 2) {
            return false;
          }
          pFVar4 = &::LOG_Static;
          goto LAB_1446e134e;
        }
        uVar6 = CrashDumpInfo->crashDumpSectionCount;
        if (uVar6 == 0) {
          if ((byte)LogIntelBreadcrumbs._0_1_ < 2) {
            return false;
          }
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIntelBreadcrumbs);
          return false;
        }
        if (uVar6 == 0) goto LAB_1446e143f;
        goto LAB_1446e1420;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      if ((uVar6 == 1) && (2 < (byte)LogIntelBreadcrumbs._0_1_)) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIntelBreadcrumbs);
      }
      dVar9 = FWindowsPlatformTime::Seconds();
      if (dVar1 <= dVar9) {
        if ((byte)LogIntelBreadcrumbs._0_1_ < 3) {
          return false;
        }
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIntelBreadcrumbs);
        return false;
      }
      FWindowsPlatformProcess::Sleep(fVar8);
      iVar2 = INTC_GetGpuCrashDump(local_res10);
    }
    if (1 < (byte)LogIntelBreadcrumbs._0_1_) {
      pFVar4 = &::LOG_Static;
LAB_1446e134e:
      Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogIntelBreadcrumbs);
    }
  }
  return false;
  while (uVar3 = (int)uVar5 + 1, uVar5 = (ulonglong)uVar3, uVar3 < uVar6) {
LAB_1446e1420:
    if (CrashDumpInfo->pCrashDumpSections[uVar5].sectionType == 1) {
      WriteCrashDump(CrashDumpInfo->pCrashDumpSections + uVar5);
      break;
    }
  }
LAB_1446e143f:
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_res8[0] = 0;
  iVar2 = INTC_DecodeGpuCrashDump(0,local_res8);
  if (iVar2 == 0) {
    if (local_res8[0] == 0) {
      if (1 < (byte)LogIntelBreadcrumbs._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIntelBreadcrumbs);
      }
      goto LAB_1446e1523;
    }
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_res8[0],&local_38,local_30,local_30 + 1);
    iVar2 = INTC_DecodeGpuCrashDump(local_38.Data,local_res8);
    if (iVar2 == 0) {
      if (3 < (byte)LogIntelBreadcrumbs._0_1_) {
        Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIntelBreadcrumbs);
      }
    }
    else if (1 < (byte)LogIntelBreadcrumbs._0_1_) {
      pFVar4 = &::LOG_Static;
      goto LAB_1446e1512;
    }
  }
  else if (1 < (byte)LogIntelBreadcrumbs._0_1_) {
    pFVar4 = &::LOG_Static;
LAB_1446e1512:
    Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogIntelBreadcrumbs);
  }
  CollectBreadcrumbNodes();
LAB_1446e1523:
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return true;
}

// RegisterDiagnosticMessages @ 1446e16b0

void __cdecl
UE::RHICore::RegisterDiagnosticMessages
          (TArray<FShaderDiagnosticData,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GShaderDiagnosticDatasCS);
  if (param_1 == &GShaderDiagnosticDatas) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar1,&GShaderDiagnosticDatas.AllocatorInstance,
                       &GShaderDiagnosticDatas.ArrayNum,&GShaderDiagnosticDatas.ArrayMax);
    ConstructItems<FShaderDiagnosticData,FShaderDiagnosticData,int>
              (GShaderDiagnosticDatas.AllocatorInstance.Data + (longlong)iVar4 * 0x18,
               (FShaderDiagnosticData *)(param_1->AllocatorInstance).Data,iVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001446e1768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GShaderDiagnosticDatasCS);
  return;
}

// RegisterShaderBinary @ 1446e1780

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __cdecl
UE::RHICore::Nvidia::Aftermath::RegisterShaderBinary
          (void *param_1,uint param_2,TStringView<wchar_t> *param_3)

{
  int iVar1;
  FStaticBasicLogRecord *pFVar2;
  ulong64 uVar3;
  TPairInitializer<unsigned___int64_const_&,UE::RHICore::Nvidia::Aftermath::FShaderDebugInfo_const_&>
  local_res10;
  ulong64 local_res20;
  ulong64 *local_68;
  FString *local_60;
  FString local_58;
  FShaderDebugData local_48;
  
  if (param_2 < 4) {
    if (3 < (byte)LogRHICore._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHICore);
    }
    return 0xffffffffffffffff;
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_48.FunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.FunctionName.Data.ArrayNum = 0;
  local_48.FunctionName.Data.ArrayMax = 0;
  local_48.PDBName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.PDBName.Data.ArrayNum = 0;
  local_48.PDBName.Data.ArrayMax = 0;
  local_48.Hash.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Hash.Data.ArrayNum = 0;
  local_48.Hash.Data.ArrayMax = 0;
  if (param_3->Size != 0) {
    ::FString::AssignRange(&local_58,param_3->DataPtr,(int)*(undefined8 *)&param_3->Size);
  }
  local_res20 = 0;
  if (*(int *)param_1 == 0x7230203) {
    local_60 = (FString *)CONCAT44(local_60._4_4_,param_2);
    local_68 = param_1;
    iVar1 = GFSDK_Aftermath_GetShaderHashSpirv(0x217,&local_68,&local_res20);
    if (iVar1 == 1) {
LAB_1446e18d0:
      EnterCriticalSection((LPCRITICAL_SECTION)&ShaderRegistration);
      local_68 = &local_res20;
      local_60 = &local_58;
      TSet<TTuple<unsigned___int64,UE::RHICore::Nvidia::Aftermath::FShaderDebugInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::RHICore::Nvidia::Aftermath::FShaderDebugInfo,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<unsigned___int64_const_&,UE::RHICore::Nvidia::Aftermath::FShaderDebugInfo_const_&>_>
                ((TSet<TTuple<unsigned___int64,UE::RHICore::Nvidia::Aftermath::FShaderDebugInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::RHICore::Nvidia::Aftermath::FShaderDebugInfo,0>,FDefaultSetAllocator>
                  *)&ShaderRegistration.ShaderBinaryToDebugHash,&local_res10,(bool *)&local_68);
      uVar3 = local_res20;
      LeaveCriticalSection((LPCRITICAL_SECTION)&ShaderRegistration);
      goto LAB_1446e1915;
    }
    if (3 < (byte)LogNvidiaAftermath._0_1_) {
      pFVar2 = &::LOG_Static;
LAB_1446e18b8:
      Logging::Private::BasicLog<4>(pFVar2,(FLogCategoryBase *)&LogNvidiaAftermath);
    }
  }
  else if (*(int *)param_1 == 0x43425844) {
    ShaderBinaryUtilities::GetShaderBinaryDebugHashDXBC(param_1,param_2,&local_48);
    local_68 = param_1;
    local_60 = (FString *)(ulonglong)param_2;
    iVar1 = GFSDK_Aftermath_GetShaderHash(0x217,&local_68,&local_res20);
    if (iVar1 == 1) goto LAB_1446e18d0;
    if (3 < (byte)LogNvidiaAftermath._0_1_) {
      pFVar2 = &::LOG_Static;
      goto LAB_1446e18b8;
    }
  }
  else if (3 < (byte)LogRHICore._0_1_) {
    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHICore);
    uVar3 = 0xffffffffffffffff;
    goto LAB_1446e1915;
  }
  uVar3 = 0xffffffffffffffff;
LAB_1446e1915:
  if (local_48.Hash.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Hash.Data.AllocatorInstance.Data);
  }
  if (local_48.PDBName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.PDBName.Data.AllocatorInstance.Data);
  }
  if (local_48.FunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.FunctionName.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return uVar3;
}

// ResolveMarkerCb @ 1446e3b90

void __cdecl
UE::RHICore::Intel::GPUCrashDumps::ResolveMarkerCb
          (void *param_1,uint param_2,void *param_3,void **param_4,uint *param_5)

{
  FRHIBreadcrumbNode *pFVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  wchar_t *_Str;
  size_t sVar5;
  longlong lVar6;
  void *local_18 [2];
  
  if (param_2 != 8) {
    *param_4 = L"";
    *param_5 = 0;
    return;
  }
  pFVar1 = *(FRHIBreadcrumbNode **)param_1;
  if (pFVar1 == FRHIBreadcrumbNode::Sentinel) {
    *param_4 = L"<root>";
    *param_5 = 0xe;
    return;
  }
  pvVar4 = ::operator_new(0x100);
  local_18[0] = pvVar4;
  if ((NameStorage.Array.AllocatorInstance.Data <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      NameStorage.Array.AllocatorInstance.Data + (longlong)NameStorage.Array.ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (NameStorage.Array.ArrayNum == NameStorage.Array.ArrayMax) {
    NameStorage.Array.ArrayNum =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,(ForAnyElementType *)&NameStorage,&NameStorage.Array.ArrayMax);
  }
  lVar6 = (longlong)NameStorage.Array.ArrayNum;
  NameStorage.Array.ArrayNum = NameStorage.Array.ArrayNum + 1;
  *(void **)(NameStorage.Array.AllocatorInstance.Data + lVar6 * 8) = local_18[0];
  _Str = (wchar_t *)(**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,pvVar4);
  *param_4 = _Str;
  sVar5 = wcslen(_Str);
  *param_5 = (int)sVar5 * 2 + 2;
  return;
}

// ResolveRenderPassTargets @ 1446e3d00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl
UE::RHICore::ResolveRenderPassTargets
          (FRHIRenderPassInfo *param_1,
          TFunction<void___cdecl(UE::RHICore::FResolveTextureInfo)> *param_2)

{
  FRHITexture *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  TFunction<void___cdecl(UE::RHICore::FResolveTextureInfo)> *pTVar5;
  uint uVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uchar *puVar12;
  longlong lVar13;
  TFunction<void___cdecl(UE::RHICore::FResolveTextureInfo)> *local_f8;
  FRHITexture *local_f0;
  FRHITexture *pFStack_e8;
  undefined4 local_e0;
  int iStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  FRHITexture *local_c8;
  FRHITexture *pFStack_c0;
  uint local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  FRHITexture *local_98;
  FRHITexture *pFStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  FResolveTextureInfo local_68;
  
  uVar4 = _UNK_15060db28;
  uVar3 = ___xmm_ffffffffffffffffffffffffffffffff;
  puVar12 = &(param_1->ColorRenderTargets).Elements[0].MipIndex;
  lVar13 = 8;
  local_f8 = param_2;
  do {
    local_f0 = ((FColorEntry *)(puVar12 + -0x14))->RenderTarget;
    pFVar1 = *(FRHITexture **)(puVar12 + -0xc);
    local_e0 = CONCAT31(local_e0._1_3_,*puVar12);
    iStack_dc = *(int *)(puVar12 + -4);
    uStack_d8 = uVar3;
    uStack_d0 = uVar4;
    pFStack_e8 = pFVar1;
    if (((local_f0 != (FRHITexture *)0x0) && (pFVar1 != (FRHITexture *)0x0)) && (local_f0 != pFVar1)
       ) {
      lVar8 = (**(code **)(local_f0->_padding_ + 0x20))();
      lVar9 = (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1);
      if (*(char *)(lVar8 + 0x33) != *(char *)(lVar9 + 0x33)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SourceDesc.Format == DestDesc.Format",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICore.cpp"
                           ,0x1a,L"");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((*(int *)(lVar8 + 0x24) != *(int *)(lVar9 + 0x24)) ||
         (*(int *)(lVar8 + 0x28) != *(int *)(lVar9 + 0x28))) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SourceDesc.Extent == DestDesc.Extent",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICore.cpp"
                           ,0x1b,L"");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((*(byte *)(lVar8 + 0x31) < 2) || (1 < *(byte *)(lVar9 + 0x31))) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SourceDesc.IsMultisample() && !DestDesc.IsMultisample()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICore.cpp"
                           ,0x1c,L"");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((*(char *)(lVar8 + 0x33) == '\v') &&
         (((*(char *)(lVar8 + 0x32) != '\0' && (*(char *)(lVar8 + 0x32) != '\x01')) ||
          ((*(char *)(lVar9 + 0x32) != '\0' && (*(char *)(lVar9 + 0x32) != '\x01')))))) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SourceDesc.Format != PF_DepthStencil || (SourceDesc.IsTexture2D() && DestDesc.IsTexture2D())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICore.cpp"
                           ,0x1d,L"");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((*(char *)(lVar8 + 0x32) == '\x02') || (*(char *)(lVar9 + 0x32) == '\x02')) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!SourceDesc.IsTexture3D() && !DestDesc.IsTexture3D()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICore.cpp"
                           ,0x1e,L"");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pTVar5 = local_f8;
      local_88 = CONCAT44(iStack_dc,local_e0);
      local_98 = local_f0;
      pFStack_90 = pFStack_e8;
      local_78 = uStack_d0;
      uStack_80 = uStack_d8;
      Core::Private::Function::CheckCallable(*(void **)local_f8);
      pcVar2 = *(code **)pTVar5;
      plVar11 = *(longlong **)&pTVar5->field_0x28;
      if (*(longlong **)&pTVar5->field_0x28 == (longlong *)0x0) {
        plVar11 = (longlong *)&pTVar5->field_0x10;
      }
      uVar10 = (**(code **)(*plVar11 + 8))();
      (*pcVar2)(uVar10,&local_98);
    }
    uVar6 = local_b8;
    puVar12 = puVar12 + 0x18;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  local_c8 = (param_1->DepthStencilRenderTarget).DepthStencilTarget;
  uStack_b4 = (undefined4)___xmm_ffffffffffffffffffffffff00000000;
  iStack_b0 = (int)((ulonglong)___xmm_ffffffffffffffffffffffff00000000 >> 0x20);
  iStack_ac = (int)_UNK_15076cba8;
  iStack_a8 = (int)((ulonglong)_UNK_15076cba8 >> 0x20);
  pFStack_c0 = (param_1->DepthStencilRenderTarget).ResolveTarget;
  local_b8 = local_b8 & 0xffffff00;
  local_68._16_8_ = CONCAT44(uStack_b4,uVar6) & 0xffffffffffffff00;
  local_68.ResolveRect.Y1 = iStack_ac;
  local_68.ResolveRect.X1 = iStack_b0;
  uStack_a4 = 0xffffffff;
  local_68.ResolveRect.Y2 = -1;
  local_68.ResolveRect.X2 = iStack_a8;
  local_68.SourceTexture = local_c8;
  local_68.DestTexture = pFStack_c0;
  `UE::RHICore::ResolveRenderPassTargets'::__l2::<lambda_1>::operator()(&local_f8,&local_68);
  if (*(longlong *)param_2 != 0) {
    plVar11 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return;
}

// SetLateShaderAssociateCallback @ 1446e4010

void __cdecl
UE::RHICore::Nvidia::Aftermath::SetLateShaderAssociateCallback
          (TUniqueFunction<void___cdecl(float,unsigned_int)> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  
  uVar9 = GLateShaderAssociateFunc._28_4_;
  uVar8 = GLateShaderAssociateFunc._24_4_;
  uVar7 = GLateShaderAssociateFunc._20_4_;
  uVar6 = GLateShaderAssociateFunc._16_4_;
  uVar3 = GLateShaderAssociateFunc._4_4_;
  uVar4 = GLateShaderAssociateFunc._8_4_;
  uVar5 = GLateShaderAssociateFunc._12_4_;
  uVar1 = CONCAT44(GLateShaderAssociateFunc._36_4_,GLateShaderAssociateFunc._32_4_);
  uVar2 = CONCAT44(GLateShaderAssociateFunc._44_4_,GLateShaderAssociateFunc._40_4_);
  GLateShaderAssociateFunc._16_4_ = *(undefined4 *)&param_1->field_0x10;
  GLateShaderAssociateFunc._20_4_ = *(undefined4 *)&param_1->field_0x14;
  GLateShaderAssociateFunc._24_4_ = *(undefined4 *)&param_1->field_0x18;
  GLateShaderAssociateFunc._28_4_ = *(undefined4 *)&param_1->field_0x1c;
  GLateShaderAssociateFunc._32_4_ = *(undefined4 *)&param_1->field_0x20;
  GLateShaderAssociateFunc._36_4_ = *(undefined4 *)&param_1->field_0x24;
  GLateShaderAssociateFunc._40_4_ = *(undefined4 *)&param_1->field_0x28;
  GLateShaderAssociateFunc._44_4_ = *(undefined4 *)&param_1->field_0x2c;
  uVar10 = *(undefined8 *)param_1;
  GLateShaderAssociateFunc._8_8_ = *(undefined8 *)&param_1->field_0x8;
  *(undefined4 *)param_1 = GLateShaderAssociateFunc._0_4_;
  GLateShaderAssociateFunc._0_8_ = uVar10;
  *(undefined4 *)&param_1->field_0x4 = uVar3;
  *(undefined4 *)&param_1->field_0x8 = uVar4;
  *(undefined4 *)&param_1->field_0xc = uVar5;
  *(undefined4 *)&param_1->field_0x10 = uVar6;
  *(undefined4 *)&param_1->field_0x14 = uVar7;
  *(undefined4 *)&param_1->field_0x18 = uVar8;
  *(undefined4 *)&param_1->field_0x1c = uVar9;
  *(undefined8 *)&param_1->field_0x20 = uVar1;
  *(undefined8 *)&param_1->field_0x28 = uVar2;
  if (*(longlong *)param_1 != 0) {
    plVar11 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001446e4068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 0x10))();
    return;
  }
  return;
}

// SetupShaderCodeValidationData @ 1446e49d0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
UE::RHICore::SetupShaderCodeValidationData(FRHIShader *param_1,FShaderCodeReader *param_2)

{
  TArray<FShaderCodeValidationStride,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FShaderCodeValidationType,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uchar *puVar6;
  TArray<FShaderCodeValidationUBSize,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  int local_res18 [4];
  TArray<FShaderCodeValidationStride,TSizedDefaultAllocator<32>_> local_118;
  TArray<FShaderCodeValidationType,TSizedDefaultAllocator<32>_> local_108;
  TArray<FShaderCodeValidationType,TSizedDefaultAllocator<32>_> local_f8;
  TArray<FShaderCodeValidationUBSize,TSizedDefaultAllocator<32>_> local_e8;
  ushort local_d8 [8];
  undefined1 local_c8 [42];
  byte local_9e;
  void *local_38;
  char local_20;
  
  if ((GRHIValidationEnabled) && (param_1 != (FRHIShader *)0x0)) {
    local_res18[0] = 0;
    puVar6 = FShaderCodeReader::FindOptionalDataAndSize(param_2,Validation,local_res18);
    if ((puVar6 != (uchar *)0x0) && (0 < local_res18[0])) {
      FBufferReader::FBufferReader
                ((FBufferReader *)local_c8,puVar6,(longlong)local_res18[0],false,false);
      local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.ArrayNum = 0;
      local_118.ArrayMax = 0;
      local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.ArrayNum = 0;
      local_108.ArrayMax = 0;
      local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.ArrayNum = 0;
      local_f8.ArrayMax = 0;
      local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.ArrayNum = 0;
      local_e8.ArrayMax = 0;
      local_d8[0] = 0;
      if (*(ushort **)(local_c8._8_8_ + 8) < *(ushort **)local_c8._8_8_ + 1) {
        if ((local_9e & 1) == 0) {
          (**(code **)(local_c8._0_8_ + 0x188))((FArchive *)local_c8,local_d8,2);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)local_c8,local_d8);
        }
      }
      else {
        local_d8[0] = **(ushort **)local_c8._8_8_;
        *(longlong *)local_c8._8_8_ = *(longlong *)local_c8._8_8_ + 2;
      }
      TArrayPrivateFriend::Serialize<FShaderCodeValidationStride,TSizedDefaultAllocator<32>_>
                ((FArchive *)local_c8,&local_118);
      TArrayPrivateFriend::Serialize<FShaderCodeValidationType,TSizedDefaultAllocator<32>_>
                ((FArchive *)local_c8,&local_108);
      TArrayPrivateFriend::Serialize<FShaderCodeValidationType,TSizedDefaultAllocator<32>_>
                ((FArchive *)local_c8,&local_f8);
      TArrayPrivateFriend::Serialize<FShaderCodeValidationUBSize,TSizedDefaultAllocator<32>_>
                ((FArchive *)local_c8,&local_e8);
      pTVar1 = &param_1->DebugStrideValidationData;
      if ((pTVar1 == &local_118) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar8 = (longlong)local_118.ArrayNum;
      if (local_118.ArrayNum != 0) {
        iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,2,local_118.ArrayNum,&pTVar1->AllocatorInstance,
                           &(param_1->DebugStrideValidationData).ArrayNum,
                           &(param_1->DebugStrideValidationData).ArrayMax);
        memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 4,
               local_118.AllocatorInstance.Data,lVar8 << 2);
      }
      pTVar2 = &param_1->DebugSRVTypeValidationData;
      if ((pTVar2 == &local_108) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar8 = (longlong)local_108.ArrayNum;
      if (local_108.ArrayNum != 0) {
        iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,2,local_108.ArrayNum,&pTVar2->AllocatorInstance,
                           &(param_1->DebugSRVTypeValidationData).ArrayNum,
                           &(param_1->DebugSRVTypeValidationData).ArrayMax);
        memcpy((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 4,
               local_108.AllocatorInstance.Data,lVar8 << 2);
      }
      pTVar2 = &param_1->DebugUAVTypeValidationData;
      if ((pTVar2 == &local_f8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar8 = (longlong)local_f8.ArrayNum;
      if (local_f8.ArrayNum != 0) {
        iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,2,local_f8.ArrayNum,&pTVar2->AllocatorInstance,
                           &(param_1->DebugUAVTypeValidationData).ArrayNum,
                           &(param_1->DebugUAVTypeValidationData).ArrayMax);
        memcpy((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 4,
               local_f8.AllocatorInstance.Data,lVar8 << 2);
      }
      pTVar7 = &param_1->DebugUBSizeValidationData;
      if ((pTVar7 == &local_e8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar8 = (longlong)local_e8.ArrayNum;
      if (local_e8.ArrayNum != 0) {
        iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,local_e8.ArrayNum,&pTVar7->AllocatorInstance,
                           &(param_1->DebugUBSizeValidationData).ArrayNum,
                           &(param_1->DebugUBSizeValidationData).ArrayMax);
        memcpy((pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 8,
               local_e8.AllocatorInstance.Data,lVar8 << 3);
      }
      if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.AllocatorInstance.Data);
      }
      if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
      local_c8._0_8_ = &___7FBufferReader__6B_;
      if (local_20 != '\0') {
        FMemory::Free(local_38);
        local_38 = (void *)0x0;
      }
      local_c8._0_8_ = &___7FBufferReaderBase__6B_;
      FArchive::~FArchive((FArchive *)local_c8);
    }
  }
  return;
}

// SetupShaderDiagnosticData @ 1446e4da0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl UE::RHICore::SetupShaderDiagnosticData(FRHIShader *param_1,FShaderCodeReader *param_2)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  int local_res8 [2];
  TArray<FShaderDiagnosticData,TSizedDefaultAllocator<32>_> local_d8;
  ushort local_c8 [8];
  undefined1 local_b8 [42];
  byte local_8e;
  void *local_28;
  char local_10;
  
  if (param_1 != (FRHIShader *)0x0) {
    local_res8[0] = 0;
    puVar3 = FShaderCodeReader::FindOptionalDataAndSize(param_2,Diagnostic,local_res8);
    if ((puVar3 != (uchar *)0x0) && (0 < local_res8[0])) {
      FBufferReader::FBufferReader
                ((FBufferReader *)local_b8,puVar3,(longlong)local_res8[0],false,false);
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ArrayNum = 0;
      local_d8.ArrayMax = 0;
      local_c8[0] = 0;
      if (*(ushort **)(local_b8._8_8_ + 8) < *(ushort **)local_b8._8_8_ + 1) {
        if ((local_8e & 1) == 0) {
          (**(code **)(local_b8._0_8_ + 0x188))((FArchive *)local_b8,local_c8,2);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)local_b8,local_c8);
        }
      }
      else {
        local_c8[0] = **(ushort **)local_b8._8_8_;
        *(longlong *)local_b8._8_8_ = *(longlong *)local_b8._8_8_ + 2;
      }
      TArrayPrivateFriend::Serialize<FShaderDiagnosticData,TSizedDefaultAllocator<32>_>
                ((FArchive *)local_b8,&local_d8);
      EnterCriticalSection((LPCRITICAL_SECTION)&GShaderDiagnosticDatasCS);
      iVar1 = local_d8.ArrayNum;
      if (local_d8.ArrayNum != 0) {
        iVar2 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,local_d8.ArrayNum,&GShaderDiagnosticDatas.AllocatorInstance,
                           &GShaderDiagnosticDatas.ArrayNum,&GShaderDiagnosticDatas.ArrayMax);
        ConstructItems<FShaderDiagnosticData,FShaderDiagnosticData,int>
                  (GShaderDiagnosticDatas.AllocatorInstance.Data + (longlong)iVar2 * 0x18,
                   (FShaderDiagnosticData *)local_d8.AllocatorInstance.Data,iVar1);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&GShaderDiagnosticDatasCS);
      DestructItems<FShaderDiagnosticData,int>
                ((FShaderDiagnosticData *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
      if ((FShaderDiagnosticData *)local_d8.AllocatorInstance.Data != (FShaderDiagnosticData *)0x0)
      {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      local_b8._0_8_ = &___7FBufferReader__6B_;
      if (local_10 != '\0') {
        FMemory::Free(local_28);
        local_28 = (void *)0x0;
      }
      local_b8._0_8_ = &___7FBufferReaderBase__6B_;
      FArchive::~FArchive((FArchive *)local_b8);
    }
  }
  return;
}

// ValidateStaticUniformBuffer @ 1446e7750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::RHICore::ValidateStaticUniformBuffer(FRHIUniformBuffer *param_1,uchar param_2,uint param_3)

{
  EUniformBufferBindingFlags EVar1;
  code *pcVar2;
  bool bVar3;
  FUniformBufferStaticSlotRegistry *this;
  FShaderParametersMetadata *pFVar4;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this = FUniformBufferStaticSlotRegistry::Get();
  if (param_1 == (FRHIUniformBuffer *)0x0) {
    pFVar4 = FindUniformBufferStructByLayoutHash(param_3);
    if (pFVar4 == (FShaderParametersMetadata *)0x0) {
      FUniformBufferStaticSlotRegistry::GetDebugDescription(this,&local_68,param_2);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExpectedStructMetadata",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreShader.cpp"
                         ,0x14,
                         L"Shader is requesting a uniform buffer at slot %s with hash \'%u\', but a reverse lookup of the hash can\'t find it. The shader cache may be out of date."
                        );
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    EVar1 = pFVar4->BindingFlags;
    if ((EVar1 & Static) == 0) {
      FUniformBufferStaticSlotRegistry::GetDebugDescription(this,&local_58,param_2);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumHasAnyFlags(BindingFlags, EUniformBufferBindingFlags::Static)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreShader.cpp"
                         ,0x1a,
                         L"Shader requested a global uniform buffer of type \'%s\' at static slot \'%s\', but it is not registered with the Global binding flag. The shader cache may be out of date."
                        );
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((EVar1 & Shader) == 0) {
      FUniformBufferStaticSlotRegistry::GetDebugDescription(this,&local_48,param_2);
      Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHICore);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (((param_1->Layout).Reference)->Hash != param_3) {
    pFVar4 = FindUniformBufferStructByLayoutHash(param_3);
    if (pFVar4 == (FShaderParametersMetadata *)0x0) {
      FUniformBufferStaticSlotRegistry::GetDebugDescription(this,&local_38,param_2);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExpectedStructMetadata",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreShader.cpp"
                         ,0x32,
                         L"Shader is requesting uniform buffer \'%s\' at slot %s with hash \'%u\', but a reverse lookup of the hash can\'t find it. The shader cache may be out of date."
                        );
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FUniformBufferStaticSlotRegistry::GetDebugDescription(this,&local_28,param_2);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreShader.cpp"
                       ,0x37,
                       L"Shader attempted to bind uniform buffer \'%s\' at slot %s with hash \'%u\', but the shader expected \'%s\' with hash \'%u\'."
                      );
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// WriteCrashDump @ 1446e7a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::RHICore::Intel::GPUCrashDumps::WriteCrashDump(INTC_CRASHDUMP_SECTION *param_1)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  FDateTime this;
  longlong *plVar7;
  FString *pFVar8;
  IFileManager *pIVar9;
  ForAnyElementType FVar10;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  FScriptContainerElement *local_38;
  int local_30;
  
  this = FDateTime::Now();
  FDateTime::ToString((FDateTime *)this.Ticks,&local_58);
  plVar7 = (longlong *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
  (**(code **)(*plVar7 + 0x20))(plVar7);
  ::FString::PrintfImpl(&local_78,L"%s.%s.intel-gpudmp");
  pFVar8 = FPaths::ProjectLogDir(&local_68);
  local_48.DataPtr = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  iVar1 = (pFVar8->Data).ArrayNum;
  local_48.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_48.Size = 0;
  }
  local_38 = local_78.Data.AllocatorInstance.Data;
  local_30 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    local_30 = 0;
  }
  FPaths::CombineInternal(&local_88,&local_48,2);
  FVar3.Data = local_88.Data.AllocatorInstance.Data;
  iVar4 = local_88.Data.ArrayMax;
  iVar1 = local_88.Data.ArrayNum;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  if ((iVar4 == -1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (3 < (byte)LogIntelBreadcrumbs._0_1_) {
    if ((iVar4 == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIntelBreadcrumbs);
  }
  pIVar9 = IFileManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar9 + 0x20);
  if ((iVar4 == -1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar10.Data = (FScriptContainerElement *)L"";
  if (iVar1 != 0) {
    FVar10.Data = FVar3.Data;
  }
  plVar7 = (longlong *)(*pcVar2)(pIVar9,FVar10.Data,0);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x188))(plVar7,param_1->pDataEntry,param_1->dataEntryCount);
    cVar6 = (**(code **)(*plVar7 + 0x210))(plVar7);
    if (cVar6 == '\0') {
      if (1 < (byte)LogIntelBreadcrumbs._0_1_) {
        if ((iVar4 == -1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIntelBreadcrumbs);
      }
    }
    else if (3 < (byte)LogIntelBreadcrumbs._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIntelBreadcrumbs);
    }
  }
  if ((iVar4 != -1) && (FVar3.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(FVar3.Data);
  }
  return;
}

// operator() @ 1504c2750

bool __thiscall
`UE::RHICore::AdjustViewInfoDimensionForNarrowing'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5534131593586671669>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5534131593586671669>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

